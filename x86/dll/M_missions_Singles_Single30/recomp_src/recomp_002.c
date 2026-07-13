#include "recomp.h"

/* __aullrem @ 0x1148c8d0 (117 bytes, 44 insns) */
void f_1148c8d0(void) {
  FTRACE(0x1148c8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c8d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1148c8d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1148c8d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c8d7 jne 0x1148c8f1 */
  if (!C.zf) goto L_1148c8f1;
  /* 1148c8d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1148c8dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1148c8e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148c8e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1148c8e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148c8e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1148c8eb mov eax, edx */
  EAX = (EDX);
  /* 1148c8ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148c8ef jmp 0x1148c941 */
  goto L_1148c941;
L_1148c8f1:;
  /* 1148c8f1 mov ecx, eax */
  ECX = (EAX);
  /* 1148c8f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1148c8f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1148c8fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1148c8ff:;
  /* 1148c8ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1148c901 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1148c903 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1148c905 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1148c907 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148c909 jne 0x1148c8ff */
  if (!C.zf) goto L_1148c8ff;
  /* 1148c90b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1148c90d mov ecx, eax */
  ECX = (EAX);
  /* 1148c90f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1148c913 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1148c914 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1148c918 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c91a jb 0x1148c92a */
  if (C.cf) goto L_1148c92a;
  /* 1148c91c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c920 ja 0x1148c92a */
  if ((!C.cf&&!C.zf)) goto L_1148c92a;
  /* 1148c922 jb 0x1148c932 */
  if (C.cf) goto L_1148c932;
  /* 1148c924 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c928 jbe 0x1148c932 */
  if ((C.cf||C.zf)) goto L_1148c932;
L_1148c92a:;
  /* 1148c92a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c92e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1148c932:;
  /* 1148c932 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c936 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c93a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148c93c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148c93e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1148c941:;
  /* 1148c941 pop ebx */
  EBX = (pop32());
  /* 1148c942 ret 0x10 */
  ESPCHK(0x1148c8d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c950 @ 0x1148c950 (55 bytes, 16 insns) */
void f_1148c950(void) {
  FTRACE(0x1148c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c950 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c951 mov ebp, esp */
  EBP = (ESP);
  /* 1148c953 mov eax, dword ptr [0x114b4094] */
  EAX = (r32((uint32_t)(0x114b4094)));
  /* 1148c958 push eax */
  push32((uint32_t)(EAX));
  /* 1148c959 call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x1148c95fu);
  /* 1148c95f mov ecx, dword ptr [0x114b4084] */
  ECX = (r32((uint32_t)(0x114b4084)));
  /* 1148c965 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c966 call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x1148c96cu);
  /* 1148c96c mov edx, dword ptr [0x114b4074] */
  EDX = (r32((uint32_t)(0x114b4074)));
  /* 1148c972 push edx */
  push32((uint32_t)(EDX));
  /* 1148c973 call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x1148c979u);
  /* 1148c979 mov eax, dword ptr [0x114b4054] */
  EAX = (r32((uint32_t)(0x114b4054)));
  /* 1148c97e push eax */
  push32((uint32_t)(EAX));
  /* 1148c97f call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x1148c985u);
  /* 1148c985 pop ebp */
  EBP = (pop32());
  /* 1148c986 ret  */
  ESPCHK(0x1148c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x1148c990 (159 bytes, 47 insns) */
void f_1148c990(void) {
  FTRACE(0x1148c990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c990 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c991 mov ebp, esp */
  EBP = (ESP);
  /* 1148c993 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148c99b jmp 0x1148c9a6 */
  goto L_1148c9a6;
L_1148c99d:;
  /* 1148c99d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c9a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c9a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148c9a6:;
  /* 1148c9a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c9aa jge 0x1148c9f9 */
  if ((C.sf==C.of)) goto L_1148c9f9;
  /* 1148c9ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c9af cmp dword ptr [ecx*4 + 0x114b4050], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x114b4050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c9b7 je 0x1148c9f7 */
  if (C.zf) goto L_1148c9f7;
  /* 1148c9b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c9bd je 0x1148c9f7 */
  if (C.zf) goto L_1148c9f7;
  /* 1148c9bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c9c3 je 0x1148c9f7 */
  if (C.zf) goto L_1148c9f7;
  /* 1148c9c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c9c9 je 0x1148c9f7 */
  if (C.zf) goto L_1148c9f7;
  /* 1148c9cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c9cf je 0x1148c9f7 */
  if (C.zf) goto L_1148c9f7;
  /* 1148c9d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c9d4 mov eax, dword ptr [edx*4 + 0x114b4050] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b4050)));
  /* 1148c9db push eax */
  push32((uint32_t)(EAX));
  /* 1148c9dc call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1148c9e2u);
  /* 1148c9e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148c9e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c9e7 mov edx, dword ptr [ecx*4 + 0x114b4050] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b4050)));
  /* 1148c9ee push edx */
  push32((uint32_t)(EDX));
  /* 1148c9ef call 0x11487b50 */
  push32(0x1148c9f4u); f_11487b50();
  /* 1148c9f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148c9f7:;
  /* 1148c9f7 jmp 0x1148c99d */
  goto L_1148c99d;
L_1148c9f9:;
  /* 1148c9f9 mov eax, dword ptr [0x114b4074] */
  EAX = (r32((uint32_t)(0x114b4074)));
  /* 1148c9fe push eax */
  push32((uint32_t)(EAX));
  /* 1148c9ff call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1148ca05u);
  /* 1148ca05 mov ecx, dword ptr [0x114b4084] */
  ECX = (r32((uint32_t)(0x114b4084)));
  /* 1148ca0b push ecx */
  push32((uint32_t)(ECX));
  /* 1148ca0c call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1148ca12u);
  /* 1148ca12 mov edx, dword ptr [0x114b4094] */
  EDX = (r32((uint32_t)(0x114b4094)));
  /* 1148ca18 push edx */
  push32((uint32_t)(EDX));
  /* 1148ca19 call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1148ca1fu);
  /* 1148ca1f mov eax, dword ptr [0x114b4054] */
  EAX = (r32((uint32_t)(0x114b4054)));
  /* 1148ca24 push eax */
  push32((uint32_t)(EAX));
  /* 1148ca25 call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1148ca2bu);
  /* 1148ca2b mov esp, ebp */
  ESP = (EBP);
  /* 1148ca2d pop ebp */
  EBP = (pop32());
  /* 1148ca2e ret  */
  ESPCHK(0x1148c990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca30 @ 0x1148ca30 (151 bytes, 46 insns) */
void f_1148ca30(void) {
  FTRACE(0x1148ca30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ca30 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ca31 mov ebp, esp */
  EBP = (ESP);
  /* 1148ca33 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ca34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ca37 cmp dword ptr [eax*4 + 0x114b4050], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x114b4050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ca3f jne 0x1148cab2 */
  if (!C.zf) goto L_1148cab2;
  /* 1148ca41 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1148ca46 push 0x114b1228 */
  push32((uint32_t)(0x114b1228u));
  /* 1148ca4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1148ca4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1148ca4f call 0x114870c0 */
  push32(0x1148ca54u); f_114870c0();
  /* 1148ca54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ca57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148ca5a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ca5e jne 0x1148ca6a */
  if (!C.zf) goto L_1148ca6a;
  /* 1148ca60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1148ca62 call 0x11484710 */
  push32(0x1148ca67u); f_11484710();
  /* 1148ca67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148ca6a:;
  /* 1148ca6a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1148ca6c call 0x1148ca30 */
  push32(0x1148ca71u); f_1148ca30();
  /* 1148ca71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ca74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ca77 cmp dword ptr [ecx*4 + 0x114b4050], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x114b4050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ca7f jne 0x1148ca9a */
  if (!C.zf) goto L_1148ca9a;
  /* 1148ca81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ca84 push edx */
  push32((uint32_t)(EDX));
  /* 1148ca85 call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x1148ca8bu);
  /* 1148ca8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ca8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ca91 mov dword ptr [eax*4 + 0x114b4050], ecx */
  w32((uint32_t)(EAX*4 + 0x114b4050), (ECX));
  /* 1148ca98 jmp 0x1148caa8 */
  goto L_1148caa8;
L_1148ca9a:;
  /* 1148ca9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1148ca9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ca9f push edx */
  push32((uint32_t)(EDX));
  /* 1148caa0 call 0x11487b50 */
  push32(0x1148caa5u); f_11487b50();
  /* 1148caa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148caa8:;
  /* 1148caa8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1148caaa call 0x1148cad0 */
  push32(0x1148caafu); f_1148cad0();
  /* 1148caaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148cab2:;
  /* 1148cab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cab5 mov ecx, dword ptr [eax*4 + 0x114b4050] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114b4050)));
  /* 1148cabc push ecx */
  push32((uint32_t)(ECX));
  /* 1148cabd call dword ptr [0x114b9338] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9338))), 0x1148cac3u);
  /* 1148cac3 mov esp, ebp */
  ESP = (EBP);
  /* 1148cac5 pop ebp */
  EBP = (pop32());
  /* 1148cac6 ret  */
  ESPCHK(0x1148ca30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x1148cad0 (22 bytes, 8 insns) */
void f_1148cad0(void) {
  FTRACE(0x1148cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cad1 mov ebp, esp */
  EBP = (ESP);
  /* 1148cad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cad6 mov ecx, dword ptr [eax*4 + 0x114b4050] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114b4050)));
  /* 1148cadd push ecx */
  push32((uint32_t)(ECX));
  /* 1148cade call dword ptr [0x114b9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9334))), 0x1148cae4u);
  /* 1148cae4 pop ebp */
  EBP = (pop32());
  /* 1148cae5 ret  */
  ESPCHK(0x1148cad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x1148caf0 (26 bytes, 10 insns) */
void f_1148caf0(void) {
  FTRACE(0x1148caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1148caf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148caf6 push eax */
  push32((uint32_t)(EAX));
  /* 1148caf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148caf9 call dword ptr [0x114b932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b932c))), 0x1148caffu);
  /* 1148caff push 0xff */
  push32((uint32_t)(0xffu));
  /* 1148cb04 call dword ptr [0x114b9388] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9388))), 0x1148cb0au);
  /* 1148cb0a pop ebp */
  EBP = (pop32());
  /* 1148cb0b ret  */
  ESPCHK(0x1148caf0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1148cb10 (446 bytes, 130 insns) */
void f_1148cb10(void) {
  FTRACE(0x1148cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cb11 mov ebp, esp */
  EBP = (ESP);
  /* 1148cb13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148cb16 call 0x11486b00 */
  push32(0x1148cb1bu); f_11486b00();
  /* 1148cb1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148cb1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cb21 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1148cb24 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cb25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cb28 push edx */
  push32((uint32_t)(EDX));
  /* 1148cb29 call 0x1148ccd0 */
  push32(0x1148cb2eu); f_1148ccd0();
  /* 1148cb2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cb31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148cb34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cb38 je 0x1148cb43 */
  if (C.zf) goto L_1148cb43;
  /* 1148cb3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cb3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cb41 jne 0x1148cb52 */
  if (!C.zf) goto L_1148cb52;
L_1148cb43:;
  /* 1148cb43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cb46 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cb47 call dword ptr [0x114b9328] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9328))), 0x1148cb4du);
  /* 1148cb4d jmp 0x1148ccca */
  goto L_1148ccca;
L_1148cb52:;
  /* 1148cb52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cb55 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cb59 jne 0x1148cb6f */
  if (!C.zf) goto L_1148cb6f;
  /* 1148cb5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cb5e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1148cb65 mov eax, 1 */
  EAX = (0x1u);
  /* 1148cb6a jmp 0x1148ccca */
  goto L_1148ccca;
L_1148cb6f:;
  /* 1148cb6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cb72 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cb76 jne 0x1148cb80 */
  if (!C.zf) goto L_1148cb80;
  /* 1148cb78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148cb7b jmp 0x1148ccca */
  goto L_1148ccca;
L_1148cb80:;
  /* 1148cb80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cb83 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148cb86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148cb89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cb8c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1148cb8f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1148cb92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cb95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cb98 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1148cb9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cb9e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cba2 jne 0x1148cca7 */
  if (!C.zf) goto L_1148cca7;
  /* 1148cba8 mov eax, dword ptr [0x114b4188] */
  EAX = (r32((uint32_t)(0x114b4188)));
  /* 1148cbad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1148cbb0 jmp 0x1148cbbb */
  goto L_1148cbbb;
L_1148cbb2:;
  /* 1148cbb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148cbb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cbb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1148cbbb:;
  /* 1148cbbb mov edx, dword ptr [0x114b4188] */
  EDX = (r32((uint32_t)(0x114b4188)));
  /* 1148cbc1 add edx, dword ptr [0x114b418c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b418c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cbc7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cbca jge 0x1148cbe2 */
  if ((C.sf==C.of)) goto L_1148cbe2;
  /* 1148cbcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148cbcf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148cbd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cbd5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1148cbd8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1148cbe0 jmp 0x1148cbb2 */
  goto L_1148cbb2;
L_1148cbe2:;
  /* 1148cbe2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cbe5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1148cbe8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148cbeb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cbee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cbf4 jne 0x1148cc05 */
  if (!C.zf) goto L_1148cc05;
  /* 1148cbf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cbf9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1148cc00 jmp 0x1148cc8d */
  goto L_1148cc8d;
L_1148cc05:;
  /* 1148cc05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cc08 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cc0e jne 0x1148cc1c */
  if (!C.zf) goto L_1148cc1c;
  /* 1148cc10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc13 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1148cc1a jmp 0x1148cc8d */
  goto L_1148cc8d;
L_1148cc1c:;
  /* 1148cc1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cc1f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cc25 jne 0x1148cc33 */
  if (!C.zf) goto L_1148cc33;
  /* 1148cc27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc2a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1148cc31 jmp 0x1148cc8d */
  goto L_1148cc8d;
L_1148cc33:;
  /* 1148cc33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cc36 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cc3c jne 0x1148cc4a */
  if (!C.zf) goto L_1148cc4a;
  /* 1148cc3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc41 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1148cc48 jmp 0x1148cc8d */
  goto L_1148cc8d;
L_1148cc4a:;
  /* 1148cc4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cc4d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cc53 jne 0x1148cc61 */
  if (!C.zf) goto L_1148cc61;
  /* 1148cc55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc58 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1148cc5f jmp 0x1148cc8d */
  goto L_1148cc8d;
L_1148cc61:;
  /* 1148cc61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cc64 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cc6a jne 0x1148cc78 */
  if (!C.zf) goto L_1148cc78;
  /* 1148cc6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc6f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1148cc76 jmp 0x1148cc8d */
  goto L_1148cc8d;
L_1148cc78:;
  /* 1148cc78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148cc7b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cc81 jne 0x1148cc8d */
  if (!C.zf) goto L_1148cc8d;
  /* 1148cc83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc86 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1148cc8d:;
  /* 1148cc8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc90 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1148cc93 push edx */
  push32((uint32_t)(EDX));
  /* 1148cc94 push 8 */
  push32((uint32_t)(0x8u));
  /* 1148cc96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1148cc99u);
  /* 1148cc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cc9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148cc9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148cca2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1148cca5 jmp 0x1148ccbe */
  goto L_1148ccbe;
L_1148cca7:;
  /* 1148cca7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ccaa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1148ccb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ccb4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148ccb7 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ccb8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1148ccbbu);
  /* 1148ccbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148ccbe:;
  /* 1148ccbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148ccc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148ccc4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1148ccc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1148ccca:;
  /* 1148ccca mov esp, ebp */
  ESP = (EBP);
  /* 1148cccc pop ebp */
  EBP = (pop32());
  /* 1148cccd ret  */
  ESPCHK(0x1148cb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccd0 @ 0x1148ccd0 (89 bytes, 35 insns) */
void f_1148ccd0(void) {
  FTRACE(0x1148ccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ccd1 mov ebp, esp */
  EBP = (ESP);
  /* 1148ccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ccd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148ccd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148ccda:;
  /* 1148ccda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ccdd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148ccdf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cce2 je 0x1148cd02 */
  if (C.zf) goto L_1148cd02;
  /* 1148cce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148cce7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ccea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148cced mov ecx, dword ptr [0x114b4194] */
  ECX = (r32((uint32_t)(0x114b4194)));
  /* 1148ccf3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148ccf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148ccf9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ccfb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ccfe jae 0x1148cd02 */
  if (!C.cf) goto L_1148cd02;
  /* 1148cd00 jmp 0x1148ccda */
  goto L_1148ccda;
L_1148cd02:;
  /* 1148cd02 mov eax, dword ptr [0x114b4194] */
  EAX = (r32((uint32_t)(0x114b4194)));
  /* 1148cd07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148cd0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cd0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cd0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cd12 jae 0x1148cd1e */
  if (!C.cf) goto L_1148cd1e;
  /* 1148cd14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148cd17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148cd19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cd1c je 0x1148cd22 */
  if (C.zf) goto L_1148cd22;
L_1148cd1e:;
  /* 1148cd1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148cd20 jmp 0x1148cd25 */
  goto L_1148cd25;
L_1148cd22:;
  /* 1148cd22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1148cd25:;
  /* 1148cd25 mov esp, ebp */
  ESP = (EBP);
  /* 1148cd27 pop ebp */
  EBP = (pop32());
  /* 1148cd28 ret  */
  ESPCHK(0x1148ccd0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1148cd30 (48 bytes, 17 insns) */
void f_1148cd30(void) {
  FTRACE(0x1148cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cd31 mov ebp, esp */
  EBP = (ESP);
  /* 1148cd33 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cd34 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148cd36 call 0x1148ca30 */
  push32(0x1148cd3bu); f_1148ca30();
  /* 1148cd3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cd3e mov eax, dword ptr [0x114b66e4] */
  EAX = (r32((uint32_t)(0x114b66e4)));
  /* 1148cd43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148cd46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cd49 mov dword ptr [0x114b66e4], ecx */
  w32((uint32_t)(0x114b66e4), (ECX));
  /* 1148cd4f push 9 */
  push32((uint32_t)(0x9u));
  /* 1148cd51 call 0x1148cad0 */
  push32(0x1148cd56u); f_1148cad0();
  /* 1148cd56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cd59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148cd5c mov esp, ebp */
  ESP = (EBP);
  /* 1148cd5e pop ebp */
  EBP = (pop32());
  /* 1148cd5f ret  */
  ESPCHK(0x1148cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x1148cd60 (10 bytes, 5 insns) */
void f_1148cd60(void) {
  FTRACE(0x1148cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cd61 mov ebp, esp */
  EBP = (ESP);
  /* 1148cd63 mov eax, dword ptr [0x114b66e4] */
  EAX = (r32((uint32_t)(0x114b66e4)));
  /* 1148cd68 pop ebp */
  EBP = (pop32());
  /* 1148cd69 ret  */
  ESPCHK(0x1148cd60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1148cd70 (45 bytes, 19 insns) */
void f_1148cd70(void) {
  FTRACE(0x1148cd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cd71 mov ebp, esp */
  EBP = (ESP);
  /* 1148cd73 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cd74 mov eax, dword ptr [0x114b66e4] */
  EAX = (r32((uint32_t)(0x114b66e4)));
  /* 1148cd79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148cd7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cd80 je 0x1148cd90 */
  if (C.zf) goto L_1148cd90;
  /* 1148cd82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cd85 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cd86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1148cd89u);
  /* 1148cd89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cd8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148cd8e jne 0x1148cd94 */
  if (!C.zf) goto L_1148cd94;
L_1148cd90:;
  /* 1148cd90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148cd92 jmp 0x1148cd99 */
  goto L_1148cd99;
L_1148cd94:;
  /* 1148cd94 mov eax, 1 */
  EAX = (0x1u);
L_1148cd99:;
  /* 1148cd99 mov esp, ebp */
  ESP = (EBP);
  /* 1148cd9b pop ebp */
  EBP = (pop32());
  /* 1148cd9c ret  */
  ESPCHK(0x1148cd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cda0 @ 0x1148cda0 (23 bytes, 10 insns) */
void f_1148cda0(void) {
  FTRACE(0x1148cda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cda1 mov ebp, esp */
  EBP = (ESP);
  /* 1148cda3 mov eax, dword ptr [0x114b66e0] */
  EAX = (r32((uint32_t)(0x114b66e0)));
  /* 1148cda8 push eax */
  push32((uint32_t)(EAX));
  /* 1148cda9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cdac push ecx */
  push32((uint32_t)(ECX));
  /* 1148cdad call 0x1148cdc0 */
  push32(0x1148cdb2u); f_1148cdc0();
  /* 1148cdb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cdb5 pop ebp */
  EBP = (pop32());
  /* 1148cdb6 ret  */
  ESPCHK(0x1148cda0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1148cdc0 (87 bytes, 34 insns) */
void f_1148cdc0(void) {
  FTRACE(0x1148cdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1148cdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cdc4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cdc8 jbe 0x1148cdce */
  if ((C.cf||C.zf)) goto L_1148cdce;
  /* 1148cdca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148cdcc jmp 0x1148ce13 */
  goto L_1148ce13;
L_1148cdce:;
  /* 1148cdce cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cdd2 ja 0x1148cde5 */
  if ((!C.cf&&!C.zf)) goto L_1148cde5;
  /* 1148cdd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cdd7 push eax */
  push32((uint32_t)(EAX));
  /* 1148cdd8 call 0x1148ce20 */
  push32(0x1148cdddu); f_1148ce20();
  /* 1148cddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cde0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148cde3 jmp 0x1148cdec */
  goto L_1148cdec;
L_1148cde5:;
  /* 1148cde5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1148cdec:;
  /* 1148cdec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cdf0 jne 0x1148cdf8 */
  if (!C.zf) goto L_1148cdf8;
  /* 1148cdf2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cdf6 jne 0x1148cdfd */
  if (!C.zf) goto L_1148cdfd;
L_1148cdf8:;
  /* 1148cdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148cdfb jmp 0x1148ce13 */
  goto L_1148ce13;
L_1148cdfd:;
  /* 1148cdfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ce00 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ce01 call 0x1148cd70 */
  push32(0x1148ce06u); f_1148cd70();
  /* 1148ce06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ce09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ce0b jne 0x1148ce11 */
  if (!C.zf) goto L_1148ce11;
  /* 1148ce0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148ce0f jmp 0x1148ce13 */
  goto L_1148ce13;
L_1148ce11:;
  /* 1148ce11 jmp 0x1148cdce */
  goto L_1148cdce;
L_1148ce13:;
  /* 1148ce13 mov esp, ebp */
  ESP = (EBP);
  /* 1148ce15 pop ebp */
  EBP = (pop32());
  /* 1148ce16 ret  */
  ESPCHK(0x1148cdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x1148ce20 (109 bytes, 37 insns) */
void f_1148ce20(void) {
  FTRACE(0x1148ce20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ce20 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ce21 mov ebp, esp */
  EBP = (ESP);
  /* 1148ce23 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ce24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ce27 cmp eax, dword ptr [0x114b419c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b419c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ce2d ja 0x1148ce5d */
  if ((!C.cf&&!C.zf)) goto L_1148ce5d;
  /* 1148ce2f push 9 */
  push32((uint32_t)(0x9u));
  /* 1148ce31 call 0x1148ca30 */
  push32(0x1148ce36u); f_1148ca30();
  /* 1148ce36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ce39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ce3c push ecx */
  push32((uint32_t)(ECX));
  /* 1148ce3d call 0x1148d960 */
  push32(0x1148ce42u); f_1148d960();
  /* 1148ce42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ce45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148ce48 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148ce4a call 0x1148cad0 */
  push32(0x1148ce4fu); f_1148cad0();
  /* 1148ce4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ce52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ce56 je 0x1148ce5d */
  if (C.zf) goto L_1148ce5d;
  /* 1148ce58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ce5b jmp 0x1148ce89 */
  goto L_1148ce89;
L_1148ce5d:;
  /* 1148ce5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ce61 jne 0x1148ce6a */
  if (!C.zf) goto L_1148ce6a;
  /* 1148ce63 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1148ce6a:;
  /* 1148ce6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ce6d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ce70 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ce73 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1148ce76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ce79 push eax */
  push32((uint32_t)(EAX));
  /* 1148ce7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148ce7c mov ecx, dword ptr [0x114b7ea4] */
  ECX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148ce82 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ce83 call dword ptr [0x114b9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9324))), 0x1148ce89u);
L_1148ce89:;
  /* 1148ce89 mov esp, ebp */
  ESP = (EBP);
  /* 1148ce8b pop ebp */
  EBP = (pop32());
  /* 1148ce8c ret  */
  ESPCHK(0x1148ce20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce90 @ 0x1148ce90 (10 bytes, 5 insns) */
void f_1148ce90(void) {
  FTRACE(0x1148ce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ce90 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ce91 mov ebp, esp */
  EBP = (ESP);
  /* 1148ce93 mov eax, 1 */
  EAX = (0x1u);
  /* 1148ce98 pop ebp */
  EBP = (pop32());
  /* 1148ce99 ret  */
  ESPCHK(0x1148ce90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x1148cea0 (173 bytes, 59 insns) */
void f_1148cea0(void) {
  FTRACE(0x1148cea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cea1 mov ebp, esp */
  EBP = (ESP);
  /* 1148cea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148cea6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ceaa jbe 0x1148ceb3 */
  if ((C.cf||C.zf)) goto L_1148ceb3;
  /* 1148ceac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148ceae jmp 0x1148cf49 */
  goto L_1148cf49;
L_1148ceb3:;
  /* 1148ceb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148ceb5 call 0x1148ca30 */
  push32(0x1148cebau); f_1148ca30();
  /* 1148ceba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cec0 push eax */
  push32((uint32_t)(EAX));
  /* 1148cec1 call 0x1148d2d0 */
  push32(0x1148cec6u); f_1148d2d0();
  /* 1148cec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cec9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148cecc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ced0 je 0x1148cf11 */
  if (C.zf) goto L_1148cf11;
  /* 1148ced2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148ced9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cedc cmp ecx, dword ptr [0x114b419c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b419c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cee2 ja 0x1148cf02 */
  if ((!C.cf&&!C.zf)) goto L_1148cf02;
  /* 1148cee4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cee7 push edx */
  push32((uint32_t)(EDX));
  /* 1148cee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ceeb push eax */
  push32((uint32_t)(EAX));
  /* 1148ceec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148ceef push ecx */
  push32((uint32_t)(ECX));
  /* 1148cef0 call 0x1148e1a0 */
  push32(0x1148cef5u); f_1148e1a0();
  /* 1148cef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148cefa je 0x1148cf02 */
  if (C.zf) goto L_1148cf02;
  /* 1148cefc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ceff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148cf02:;
  /* 1148cf02 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148cf04 call 0x1148cad0 */
  push32(0x1148cf09u); f_1148cad0();
  /* 1148cf09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cf0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148cf0f jmp 0x1148cf49 */
  goto L_1148cf49;
L_1148cf11:;
  /* 1148cf11 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148cf13 call 0x1148cad0 */
  push32(0x1148cf18u); f_1148cad0();
  /* 1148cf18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cf1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cf1f jne 0x1148cf28 */
  if (!C.zf) goto L_1148cf28;
  /* 1148cf21 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1148cf28:;
  /* 1148cf28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cf2b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cf2e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1148cf30 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1148cf33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cf36 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cf37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cf3a push edx */
  push32((uint32_t)(EDX));
  /* 1148cf3b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1148cf3d mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148cf42 push eax */
  push32((uint32_t)(EAX));
  /* 1148cf43 call dword ptr [0x114b9320] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9320))), 0x1148cf49u);
L_1148cf49:;
  /* 1148cf49 mov esp, ebp */
  ESP = (EBP);
  /* 1148cf4b pop ebp */
  EBP = (pop32());
  /* 1148cf4c ret  */
  ESPCHK(0x1148cea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf50 @ 0x1148cf50 (490 bytes, 165 insns) */
void f_1148cf50(void) {
  FTRACE(0x1148cf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148cf50 push ebp */
  push32((uint32_t)(EBP));
  /* 1148cf51 mov ebp, esp */
  EBP = (ESP);
  /* 1148cf53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148cf56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cf5a jne 0x1148cf6d */
  if (!C.zf) goto L_1148cf6d;
  /* 1148cf5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cf5f push eax */
  push32((uint32_t)(EAX));
  /* 1148cf60 call 0x1148cda0 */
  push32(0x1148cf65u); f_1148cda0();
  /* 1148cf65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cf68 jmp 0x1148d136 */
  goto L_1148d136;
L_1148cf6d:;
  /* 1148cf6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cf71 jne 0x1148cf86 */
  if (!C.zf) goto L_1148cf86;
  /* 1148cf73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cf76 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cf77 call 0x1148d140 */
  push32(0x1148cf7cu); f_1148d140();
  /* 1148cf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cf7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148cf81 jmp 0x1148d136 */
  goto L_1148d136;
L_1148cf86:;
  /* 1148cf86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148cf8d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cf91 ja 0x1148d109 */
  if ((!C.cf&&!C.zf)) goto L_1148d109;
  /* 1148cf97 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148cf99 call 0x1148ca30 */
  push32(0x1148cf9eu); f_1148ca30();
  /* 1148cf9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cfa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cfa4 push edx */
  push32((uint32_t)(EDX));
  /* 1148cfa5 call 0x1148d2d0 */
  push32(0x1148cfaau); f_1148d2d0();
  /* 1148cfaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cfad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148cfb0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cfb4 je 0x1148d0cc */
  if (C.zf) goto L_1148d0cc;
  /* 1148cfba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cfbd cmp eax, dword ptr [0x114b419c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b419c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cfc3 ja 0x1148d040 */
  if ((!C.cf&&!C.zf)) goto L_1148d040;
  /* 1148cfc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cfc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1148cfc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cfcc push edx */
  push32((uint32_t)(EDX));
  /* 1148cfcd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148cfd0 push eax */
  push32((uint32_t)(EAX));
  /* 1148cfd1 call 0x1148e1a0 */
  push32(0x1148cfd6u); f_1148e1a0();
  /* 1148cfd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cfd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148cfdb je 0x1148cfe5 */
  if (C.zf) goto L_1148cfe5;
  /* 1148cfdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cfe0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148cfe3 jmp 0x1148d040 */
  goto L_1148d040;
L_1148cfe5:;
  /* 1148cfe5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148cfe8 push edx */
  push32((uint32_t)(EDX));
  /* 1148cfe9 call 0x1148d960 */
  push32(0x1148cfeeu); f_1148d960();
  /* 1148cfee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148cff1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148cff4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148cff8 je 0x1148d040 */
  if (C.zf) goto L_1148d040;
  /* 1148cffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148cffd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1148d000 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d003 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148d006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d009 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d00c jae 0x1148d016 */
  if (!C.cf) goto L_1148d016;
  /* 1148d00e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d011 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148d014 jmp 0x1148d01c */
  goto L_1148d01c;
L_1148d016:;
  /* 1148d016 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d019 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1148d01c:;
  /* 1148d01c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148d01f push edx */
  push32((uint32_t)(EDX));
  /* 1148d020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d023 push eax */
  push32((uint32_t)(EAX));
  /* 1148d024 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d027 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d028 call 0x1148f6f0 */
  push32(0x1148d02du); f_1148f6f0();
  /* 1148d02d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d033 push edx */
  push32((uint32_t)(EDX));
  /* 1148d034 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148d037 push eax */
  push32((uint32_t)(EAX));
  /* 1148d038 call 0x1148d390 */
  push32(0x1148d03du); f_1148d390();
  /* 1148d03d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148d040:;
  /* 1148d040 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d044 jne 0x1148d0c0 */
  if (!C.zf) goto L_1148d0c0;
  /* 1148d046 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d04a jne 0x1148d053 */
  if (!C.zf) goto L_1148d053;
  /* 1148d04c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1148d053:;
  /* 1148d053 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d056 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d059 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1148d05c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1148d05f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d062 push edx */
  push32((uint32_t)(EDX));
  /* 1148d063 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d065 mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148d06a push eax */
  push32((uint32_t)(EAX));
  /* 1148d06b call dword ptr [0x114b9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9324))), 0x1148d071u);
  /* 1148d071 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148d074 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d078 je 0x1148d0c0 */
  if (C.zf) goto L_1148d0c0;
  /* 1148d07a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d07d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1148d080 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d083 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148d086 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d089 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d08c jae 0x1148d096 */
  if (!C.cf) goto L_1148d096;
  /* 1148d08e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d091 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1148d094 jmp 0x1148d09c */
  goto L_1148d09c;
L_1148d096:;
  /* 1148d096 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d099 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1148d09c:;
  /* 1148d09c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148d09f push eax */
  push32((uint32_t)(EAX));
  /* 1148d0a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d0a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d0a7 push edx */
  push32((uint32_t)(EDX));
  /* 1148d0a8 call 0x1148f6f0 */
  push32(0x1148d0adu); f_1148f6f0();
  /* 1148d0ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d0b3 push eax */
  push32((uint32_t)(EAX));
  /* 1148d0b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148d0b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d0b8 call 0x1148d390 */
  push32(0x1148d0bdu); f_1148d390();
  /* 1148d0bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148d0c0:;
  /* 1148d0c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d0c2 call 0x1148cad0 */
  push32(0x1148d0c7u); f_1148cad0();
  /* 1148d0c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d0ca jmp 0x1148d109 */
  goto L_1148d109;
L_1148d0cc:;
  /* 1148d0cc push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d0ce call 0x1148cad0 */
  push32(0x1148d0d3u); f_1148cad0();
  /* 1148d0d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d0d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d0da jne 0x1148d0e3 */
  if (!C.zf) goto L_1148d0e3;
  /* 1148d0dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1148d0e3:;
  /* 1148d0e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d0e6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d0e9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1148d0ec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1148d0ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d0f2 push eax */
  push32((uint32_t)(EAX));
  /* 1148d0f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d0f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d0f9 mov edx, dword ptr [0x114b7ea4] */
  EDX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148d0ff push edx */
  push32((uint32_t)(EDX));
  /* 1148d100 call dword ptr [0x114b9320] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9320))), 0x1148d106u);
  /* 1148d106 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1148d109:;
  /* 1148d109 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d10d jne 0x1148d118 */
  if (!C.zf) goto L_1148d118;
  /* 1148d10f cmp dword ptr [0x114b66e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b66e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d116 jne 0x1148d11d */
  if (!C.zf) goto L_1148d11d;
L_1148d118:;
  /* 1148d118 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d11b jmp 0x1148d136 */
  goto L_1148d136;
L_1148d11d:;
  /* 1148d11d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d120 push eax */
  push32((uint32_t)(EAX));
  /* 1148d121 call 0x1148cd70 */
  push32(0x1148d126u); f_1148cd70();
  /* 1148d126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148d12b jne 0x1148d131 */
  if (!C.zf) goto L_1148d131;
  /* 1148d12d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148d12f jmp 0x1148d136 */
  goto L_1148d136;
L_1148d131:;
  /* 1148d131 jmp 0x1148cf86 */
  goto L_1148cf86;
L_1148d136:;
  /* 1148d136 mov esp, ebp */
  ESP = (EBP);
  /* 1148d138 pop ebp */
  EBP = (pop32());
  /* 1148d139 ret  */
  ESPCHK(0x1148cf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d140 @ 0x1148d140 (104 bytes, 38 insns) */
void f_1148d140(void) {
  FTRACE(0x1148d140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d140 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d141 mov ebp, esp */
  EBP = (ESP);
  /* 1148d143 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d144 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d148 jne 0x1148d14c */
  if (!C.zf) goto L_1148d14c;
  /* 1148d14a jmp 0x1148d1a4 */
  goto L_1148d1a4;
L_1148d14c:;
  /* 1148d14c push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d14e call 0x1148ca30 */
  push32(0x1148d153u); f_1148ca30();
  /* 1148d153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d159 push eax */
  push32((uint32_t)(EAX));
  /* 1148d15a call 0x1148d2d0 */
  push32(0x1148d15fu); f_1148d2d0();
  /* 1148d15f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d162 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148d165 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d169 je 0x1148d187 */
  if (C.zf) goto L_1148d187;
  /* 1148d16b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d16e push ecx */
  push32((uint32_t)(ECX));
  /* 1148d16f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d172 push edx */
  push32((uint32_t)(EDX));
  /* 1148d173 call 0x1148d390 */
  push32(0x1148d178u); f_1148d390();
  /* 1148d178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d17b push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d17d call 0x1148cad0 */
  push32(0x1148d182u); f_1148cad0();
  /* 1148d182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d185 jmp 0x1148d1a4 */
  goto L_1148d1a4;
L_1148d187:;
  /* 1148d187 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d189 call 0x1148cad0 */
  push32(0x1148d18eu); f_1148cad0();
  /* 1148d18e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d194 push eax */
  push32((uint32_t)(EAX));
  /* 1148d195 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d197 mov ecx, dword ptr [0x114b7ea4] */
  ECX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148d19d push ecx */
  push32((uint32_t)(ECX));
  /* 1148d19e call dword ptr [0x114b9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9348))), 0x1148d1a4u);
L_1148d1a4:;
  /* 1148d1a4 mov esp, ebp */
  ESP = (EBP);
  /* 1148d1a6 pop ebp */
  EBP = (pop32());
  /* 1148d1a7 ret  */
  ESPCHK(0x1148d140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b0 @ 0x1148d1b0 (116 bytes, 34 insns) */
void f_1148d1b0(void) {
  FTRACE(0x1148d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1148d1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d1b4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1148d1bb push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d1bd call 0x1148ca30 */
  push32(0x1148d1c2u); f_1148ca30();
  /* 1148d1c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d1c5 call 0x1148e8c0 */
  push32(0x1148d1cau); f_1148e8c0();
  /* 1148d1ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148d1cc jge 0x1148d1d5 */
  if ((C.sf==C.of)) goto L_1148d1d5;
  /* 1148d1ce mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1148d1d5:;
  /* 1148d1d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148d1d7 call 0x1148cad0 */
  push32(0x1148d1dcu); f_1148cad0();
  /* 1148d1dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d1df push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d1e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d1e3 mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148d1e8 push eax */
  push32((uint32_t)(EAX));
  /* 1148d1e9 call dword ptr [0x114b93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93cc))), 0x1148d1efu);
  /* 1148d1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148d1f1 jne 0x1148d21d */
  if (!C.zf) goto L_1148d21d;
  /* 1148d1f3 call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x1148d1f9u);
  /* 1148d1f9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d1fc jne 0x1148d216 */
  if (!C.zf) goto L_1148d216;
  /* 1148d1fe call 0x1148fae0 */
  push32(0x1148d203u); f_1148fae0();
  /* 1148d203 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1148d209 call 0x1148fad0 */
  push32(0x1148d20eu); f_1148fad0();
  /* 1148d20e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1148d214 jmp 0x1148d21d */
  goto L_1148d21d;
L_1148d216:;
  /* 1148d216 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1148d21d:;
  /* 1148d21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d220 mov esp, ebp */
  ESP = (EBP);
  /* 1148d222 pop ebp */
  EBP = (pop32());
  /* 1148d223 ret  */
  ESPCHK(0x1148d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1148d230 (10 bytes, 5 insns) */
void f_1148d230(void) {
  FTRACE(0x1148d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d231 mov ebp, esp */
  EBP = (ESP);
  /* 1148d233 call 0x1148d1b0 */
  push32(0x1148d238u); f_1148d1b0();
  /* 1148d238 pop ebp */
  EBP = (pop32());
  /* 1148d239 ret  */
  ESPCHK(0x1148d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x1148d240 (10 bytes, 5 insns) */
void f_1148d240(void) {
  FTRACE(0x1148d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d240 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d241 mov ebp, esp */
  EBP = (ESP);
  /* 1148d243 mov eax, dword ptr [0x114b419c] */
  EAX = (r32((uint32_t)(0x114b419c)));
  /* 1148d248 pop ebp */
  EBP = (pop32());
  /* 1148d249 ret  */
  ESPCHK(0x1148d240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d250 @ 0x1148d250 (31 bytes, 11 insns) */
void f_1148d250(void) {
  FTRACE(0x1148d250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d250 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d251 mov ebp, esp */
  EBP = (ESP);
  /* 1148d253 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d25a jbe 0x1148d260 */
  if ((C.cf||C.zf)) goto L_1148d260;
  /* 1148d25c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148d25e jmp 0x1148d26d */
  goto L_1148d26d;
L_1148d260:;
  /* 1148d260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d263 mov dword ptr [0x114b419c], eax */
  w32((uint32_t)(0x114b419c), (EAX));
  /* 1148d268 mov eax, 1 */
  EAX = (0x1u);
L_1148d26d:;
  /* 1148d26d pop ebp */
  EBP = (pop32());
  /* 1148d26e ret  */
  ESPCHK(0x1148d250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1148d270 (89 bytes, 20 insns) */
void f_1148d270(void) {
  FTRACE(0x1148d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d271 mov ebp, esp */
  EBP = (ESP);
  /* 1148d273 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1148d278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d27a mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148d27f push eax */
  push32((uint32_t)(EAX));
  /* 1148d280 call dword ptr [0x114b9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9324))), 0x1148d286u);
  /* 1148d286 mov dword ptr [0x114b6b48], eax */
  w32((uint32_t)(0x114b6b48), (EAX));
  /* 1148d28b cmp dword ptr [0x114b6b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d292 jne 0x1148d298 */
  if (!C.zf) goto L_1148d298;
  /* 1148d294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148d296 jmp 0x1148d2c7 */
  goto L_1148d2c7;
L_1148d298:;
  /* 1148d298 mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148d29e mov dword ptr [0x114b6b3c], ecx */
  w32((uint32_t)(0x114b6b3c), (ECX));
  /* 1148d2a4 mov dword ptr [0x114b6b40], 0 */
  w32((uint32_t)(0x114b6b40), (0x0u));
  /* 1148d2ae mov dword ptr [0x114b6b44], 0 */
  w32((uint32_t)(0x114b6b44), (0x0u));
  /* 1148d2b8 mov dword ptr [0x114b6b28], 0x10 */
  w32((uint32_t)(0x114b6b28), (0x10u));
  /* 1148d2c2 mov eax, 1 */
  EAX = (0x1u);
L_1148d2c7:;
  /* 1148d2c7 pop ebp */
  EBP = (pop32());
  /* 1148d2c8 ret  */
  ESPCHK(0x1148d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2d0 @ 0x1148d2d0 (85 bytes, 29 insns) */
void f_1148d2d0(void) {
  FTRACE(0x1148d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1148d2d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d2d6 mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148d2db imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148d2de mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148d2e4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d2e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148d2e9 mov edx, dword ptr [0x114b6b48] */
  EDX = (r32((uint32_t)(0x114b6b48)));
  /* 1148d2ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1148d2f2:;
  /* 1148d2f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d2f5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d2f8 jae 0x1148d31f */
  if (!C.cf) goto L_1148d31f;
  /* 1148d2fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d2fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d300 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d303 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148d306 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d30d jae 0x1148d314 */
  if (!C.cf) goto L_1148d314;
  /* 1148d30f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d312 jmp 0x1148d321 */
  goto L_1148d321;
L_1148d314:;
  /* 1148d314 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d317 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d31a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148d31d jmp 0x1148d2f2 */
  goto L_1148d2f2;
L_1148d31f:;
  /* 1148d31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148d321:;
  /* 1148d321 mov esp, ebp */
  ESP = (EBP);
  /* 1148d323 pop ebp */
  EBP = (pop32());
  /* 1148d324 ret  */
  ESPCHK(0x1148d2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1148d330 (95 bytes, 33 insns) */
void f_1148d330(void) {
  FTRACE(0x1148d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d331 mov ebp, esp */
  EBP = (ESP);
  /* 1148d333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d339 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d33c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d33f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148d342 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d345 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1148d348 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148d34b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d350 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d353 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d355 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d358 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148d35b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148d35d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148d35f jne 0x1148d381 */
  if (!C.zf) goto L_1148d381;
  /* 1148d361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d364 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1148d367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148d369 jne 0x1148d381 */
  if (!C.zf) goto L_1148d381;
  /* 1148d36b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d36e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148d374 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d376 je 0x1148d381 */
  if (C.zf) goto L_1148d381;
  /* 1148d378 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1148d37f jmp 0x1148d388 */
  goto L_1148d388;
L_1148d381:;
  /* 1148d381 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1148d388:;
  /* 1148d388 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148d38b mov esp, ebp */
  ESP = (EBP);
  /* 1148d38d pop ebp */
  EBP = (pop32());
  /* 1148d38e ret  */
  ESPCHK(0x1148d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1148d390 (1485 bytes, 453 insns) */
void f_1148d390(void) {
  FTRACE(0x1148d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d391 mov ebp, esp */
  EBP = (ESP);
  /* 1148d393 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d399 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148d39c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1148d39f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d3a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d3a5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d3a8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148d3ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148d3ae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1148d3b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148d3b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d3b7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148d3bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d3c0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1148d3c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148d3ca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148d3cd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d3d0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148d3d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d3d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148d3d8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d3db mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1148d3de mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d3e1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d3e4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1148d3e7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d3ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148d3ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1148d3ef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d3f2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1148d3f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148d3f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148d3fb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148d3fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d400 jne 0x1148d528 */
  if (!C.zf) goto L_1148d528;
  /* 1148d406 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148d409 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1148d40c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d40f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1148d412 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d416 jbe 0x1148d41f */
  if ((C.cf||C.zf)) goto L_1148d41f;
  /* 1148d418 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1148d41f:;
  /* 1148d41f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d422 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d425 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148d428 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d42b jne 0x1148d501 */
  if (!C.zf) goto L_1148d501;
  /* 1148d431 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d435 jae 0x1148d496 */
  if (!C.cf) goto L_1148d496;
  /* 1148d437 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d43c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148d43f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d441 not eax */
  EAX = (~(EAX));
  /* 1148d443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d446 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d449 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1148d44d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d44f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d452 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d455 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1148d459 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d45c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d45f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1148d462 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148d465 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d468 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d46b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1148d46e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d471 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d474 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148d478 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148d47a jne 0x1148d494 */
  if (!C.zf) goto L_1148d494;
  /* 1148d47c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d481 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148d484 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d486 not eax */
  EAX = (~(EAX));
  /* 1148d488 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d48b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148d48d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148d48f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d492 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1148d494:;
  /* 1148d494 jmp 0x1148d501 */
  goto L_1148d501;
L_1148d496:;
  /* 1148d496 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148d499 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d49c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d4a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d4a3 not edx */
  EDX = (~(EDX));
  /* 1148d4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d4a8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d4ab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1148d4b2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148d4b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d4b7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d4ba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1148d4c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d4c4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d4c7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148d4ca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148d4cd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d4d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d4d3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1148d4d6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d4d9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d4dc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148d4e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d4e2 jne 0x1148d501 */
  if (!C.zf) goto L_1148d501;
  /* 1148d4e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148d4e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d4ea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d4ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d4f1 not edx */
  EDX = (~(EDX));
  /* 1148d4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d4f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148d4f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d4fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d4fe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1148d501:;
  /* 1148d501 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d504 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148d507 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d50a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148d50d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1148d510 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d513 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148d516 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148d519 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148d51c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148d51f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148d522 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d525 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1148d528:;
  /* 1148d528 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148d52b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1148d52e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d531 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1148d534 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d538 jbe 0x1148d541 */
  if ((C.cf||C.zf)) goto L_1148d541;
  /* 1148d53a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1148d541:;
  /* 1148d541 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148d544 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148d547 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d549 jne 0x1148d6a5 */
  if (!C.zf) goto L_1148d6a5;
  /* 1148d54f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d552 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d555 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1148d558 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148d55b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1148d55e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d561 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1148d564 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d568 jbe 0x1148d571 */
  if ((C.cf||C.zf)) goto L_1148d571;
  /* 1148d56a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1148d571:;
  /* 1148d571 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148d574 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d577 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1148d57a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148d57d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1148d580 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d583 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1148d586 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d58a jbe 0x1148d593 */
  if ((C.cf||C.zf)) goto L_1148d593;
  /* 1148d58c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1148d593:;
  /* 1148d593 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148d596 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d599 je 0x1148d69f */
  if (C.zf) goto L_1148d69f;
  /* 1148d59f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d5a2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d5a5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148d5a8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d5ab jne 0x1148d681 */
  if (!C.zf) goto L_1148d681;
  /* 1148d5b1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d5b5 jae 0x1148d616 */
  if (!C.cf) goto L_1148d616;
  /* 1148d5b7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d5bc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148d5bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d5c1 not edx */
  EDX = (~(EDX));
  /* 1148d5c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d5c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d5c9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1148d5cd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148d5cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d5d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d5d5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1148d5d9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d5dc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d5df mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148d5e2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148d5e5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d5e8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d5eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1148d5ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d5f1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d5f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148d5f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d5fa jne 0x1148d614 */
  if (!C.zf) goto L_1148d614;
  /* 1148d5fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d601 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148d604 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d606 not edx */
  EDX = (~(EDX));
  /* 1148d608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d60b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148d60d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d60f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d612 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1148d614:;
  /* 1148d614 jmp 0x1148d681 */
  goto L_1148d681;
L_1148d616:;
  /* 1148d616 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148d619 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d61c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d621 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d623 not eax */
  EAX = (~(EAX));
  /* 1148d625 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d628 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d62b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1148d632 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d637 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d63a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1148d641 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d644 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d647 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1148d64a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148d64d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d650 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d653 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1148d656 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d659 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d65c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148d660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148d662 jne 0x1148d681 */
  if (!C.zf) goto L_1148d681;
  /* 1148d664 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148d667 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d66a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d66f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d671 not eax */
  EAX = (~(EAX));
  /* 1148d673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d676 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148d679 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148d67b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d67e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1148d681:;
  /* 1148d681 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d684 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148d687 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d68a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148d68d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1148d690 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d693 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148d696 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d699 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148d69c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1148d69f:;
  /* 1148d69f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d6a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1148d6a5:;
  /* 1148d6a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148d6a8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148d6ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d6ad jne 0x1148d6bb */
  if (!C.zf) goto L_1148d6bb;
  /* 1148d6af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148d6b2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d6b5 je 0x1148d7cb */
  if (C.zf) goto L_1148d7cb;
L_1148d6bb:;
  /* 1148d6bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148d6be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d6c1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1148d6c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1148d6c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148d6cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148d6d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1148d6d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148d6d9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1148d6dc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148d6df mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6e2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1148d6e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148d6eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1148d6f1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d6f7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148d6fa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d6fd jne 0x1148d7cb */
  if (!C.zf) goto L_1148d7cb;
  /* 1148d703 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d707 jae 0x1148d764 */
  if (!C.cf) goto L_1148d764;
  /* 1148d709 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d70c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d70f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148d713 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d716 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d719 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148d71c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148d71f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d722 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d725 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1148d728 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148d72a jne 0x1148d742 */
  if (!C.zf) goto L_1148d742;
  /* 1148d72c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d731 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148d734 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d739 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148d73b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d73d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d740 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1148d742:;
  /* 1148d742 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d747 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148d74a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d74c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d74f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d752 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1148d756 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d75b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d75e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1148d762 jmp 0x1148d7cb */
  goto L_1148d7cb;
L_1148d764:;
  /* 1148d764 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d767 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d76a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148d76e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d771 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d774 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148d777 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148d77a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d77d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d780 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1148d783 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148d785 jne 0x1148d7a2 */
  if (!C.zf) goto L_1148d7a2;
  /* 1148d787 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148d78a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d78d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d792 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d797 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148d79a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d79f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1148d7a2:;
  /* 1148d7a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148d7a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d7a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148d7ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d7af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d7b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d7b5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1148d7bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d7be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d7c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1148d7c4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1148d7cb:;
  /* 1148d7cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d7ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148d7d1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1148d7d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148d7d6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d7d9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148d7dc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1148d7df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d7e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148d7e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d7e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d7ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1148d7ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148d7ef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d7f2 jne 0x1148d959 */
  if (!C.zf) goto L_1148d959;
  /* 1148d7f8 cmp dword ptr [0x114b6b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d7ff je 0x1148d948 */
  if (C.zf) goto L_1148d948;
  /* 1148d805 mov eax, dword ptr [0x114b6b38] */
  EAX = (r32((uint32_t)(0x114b6b38)));
  /* 1148d80a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1148d80d mov ecx, dword ptr [0x114b6b40] */
  ECX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d813 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148d816 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d818 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1148d81b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1148d820 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1148d825 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148d828 push eax */
  push32((uint32_t)(EAX));
  /* 1148d829 call dword ptr [0x114b9344] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9344))), 0x1148d82fu);
  /* 1148d82f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148d834 mov ecx, dword ptr [0x114b6b38] */
  ECX = (r32((uint32_t)(0x114b6b38)));
  /* 1148d83a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d83c mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d841 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148d844 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d846 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d84c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148d84f mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d854 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148d857 mov edx, dword ptr [0x114b6b38] */
  EDX = (r32((uint32_t)(0x114b6b38)));
  /* 1148d85d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1148d868 mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d86d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148d870 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1148d873 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148d876 mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d87b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148d87e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1148d881 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d887 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1148d88a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1148d88e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d890 jne 0x1148d8a6 */
  if (!C.zf) goto L_1148d8a6;
  /* 1148d892 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d898 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148d89b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1148d89d mov ecx, dword ptr [0x114b6b40] */
  ECX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d8a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1148d8a6:;
  /* 1148d8a6 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d8ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d8b0 jne 0x1148d948 */
  if (!C.zf) goto L_1148d948;
  /* 1148d8b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1148d8bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d8bd mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d8c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1148d8c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1148d8c6 call dword ptr [0x114b9344] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9344))), 0x1148d8ccu);
  /* 1148d8cc mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d8d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1148d8d5 push eax */
  push32((uint32_t)(EAX));
  /* 1148d8d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148d8d8 mov ecx, dword ptr [0x114b7ea4] */
  ECX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148d8de push ecx */
  push32((uint32_t)(ECX));
  /* 1148d8df call dword ptr [0x114b9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9348))), 0x1148d8e5u);
  /* 1148d8e5 mov edx, dword ptr [0x114b6b44] */
  EDX = (r32((uint32_t)(0x114b6b44)));
  /* 1148d8eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148d8ee mov eax, dword ptr [0x114b6b48] */
  EAX = (r32((uint32_t)(0x114b6b48)));
  /* 1148d8f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d8f5 mov ecx, dword ptr [0x114b6b40] */
  ECX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d8fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d8fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d900 push eax */
  push32((uint32_t)(EAX));
  /* 1148d901 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d907 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d90a push edx */
  push32((uint32_t)(EDX));
  /* 1148d90b mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148d910 push eax */
  push32((uint32_t)(EAX));
  /* 1148d911 call 0x1148bc50 */
  push32(0x1148d916u); f_1148bc50();
  /* 1148d916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d919 mov ecx, dword ptr [0x114b6b44] */
  ECX = (r32((uint32_t)(0x114b6b44)));
  /* 1148d91f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d922 mov dword ptr [0x114b6b44], ecx */
  w32((uint32_t)(0x114b6b44), (ECX));
  /* 1148d928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d92b cmp edx, dword ptr [0x114b6b40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b6b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d931 jbe 0x1148d93c */
  if ((C.cf||C.zf)) goto L_1148d93c;
  /* 1148d933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d936 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d939 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1148d93c:;
  /* 1148d93c mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148d942 mov dword ptr [0x114b6b3c], ecx */
  w32((uint32_t)(0x114b6b3c), (ECX));
L_1148d948:;
  /* 1148d948 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d94b mov dword ptr [0x114b6b40], edx */
  w32((uint32_t)(0x114b6b40), (EDX));
  /* 1148d951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148d954 mov dword ptr [0x114b6b38], eax */
  w32((uint32_t)(0x114b6b38), (EAX));
L_1148d959:;
  /* 1148d959 mov esp, ebp */
  ESP = (EBP);
  /* 1148d95b pop ebp */
  EBP = (pop32());
  /* 1148d95c ret  */
  ESPCHK(0x1148d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x1148d960 (1334 bytes, 427 insns) */
void f_1148d960(void) {
  FTRACE(0x1148d960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148d960 push ebp */
  push32((uint32_t)(EBP));
  /* 1148d961 mov ebp, esp */
  EBP = (ESP);
  /* 1148d963 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d966 push esi */
  push32((uint32_t)(ESI));
  /* 1148d967 mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148d96c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148d96f mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148d975 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d977 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1148d97a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148d97d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d980 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1148d983 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1148d986 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148d989 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1148d98c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d98f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1148d992 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d996 jge 0x1148d9ac */
  if ((C.sf==C.of)) goto L_1148d9ac;
  /* 1148d998 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148d99b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148d99e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148d9a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1148d9a3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1148d9aa jmp 0x1148d9c1 */
  goto L_1148d9c1;
L_1148d9ac:;
  /* 1148d9ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1148d9b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148d9b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148d9b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148d9bc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148d9be mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1148d9c1:;
  /* 1148d9c1 mov ecx, dword ptr [0x114b6b3c] */
  ECX = (r32((uint32_t)(0x114b6b3c)));
  /* 1148d9c7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1148d9ca:;
  /* 1148d9ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148d9cd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d9d0 jae 0x1148d9f6 */
  if (!C.cf) goto L_1148d9f6;
  /* 1148d9d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148d9d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148d9d8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1148d9da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148d9dd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148d9e0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1148d9e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148d9e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148d9e7 je 0x1148d9eb */
  if (C.zf) goto L_1148d9eb;
  /* 1148d9e9 jmp 0x1148d9f6 */
  goto L_1148d9f6;
L_1148d9eb:;
  /* 1148d9eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148d9ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148d9f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1148d9f4 jmp 0x1148d9ca */
  goto L_1148d9ca;
L_1148d9f6:;
  /* 1148d9f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148d9f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148d9fc jne 0x1148dadd */
  if (!C.zf) goto L_1148dadd;
  /* 1148da02 mov eax, dword ptr [0x114b6b48] */
  EAX = (r32((uint32_t)(0x114b6b48)));
  /* 1148da07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1148da0a:;
  /* 1148da0a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da0d cmp ecx, dword ptr [0x114b6b3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6b3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da13 jae 0x1148da39 */
  if (!C.cf) goto L_1148da39;
  /* 1148da15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148da1b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1148da1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da20 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148da23 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1148da26 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148da28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148da2a je 0x1148da2e */
  if (C.zf) goto L_1148da2e;
  /* 1148da2c jmp 0x1148da39 */
  goto L_1148da39;
L_1148da2e:;
  /* 1148da2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da31 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148da34 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148da37 jmp 0x1148da0a */
  goto L_1148da0a;
L_1148da39:;
  /* 1148da39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da3c cmp ecx, dword ptr [0x114b6b3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6b3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da42 jne 0x1148dadd */
  if (!C.zf) goto L_1148dadd;
L_1148da48:;
  /* 1148da48 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da4b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da4e jae 0x1148da66 */
  if (!C.cf) goto L_1148da66;
  /* 1148da50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da57 je 0x1148da5b */
  if (C.zf) goto L_1148da5b;
  /* 1148da59 jmp 0x1148da66 */
  goto L_1148da66;
L_1148da5b:;
  /* 1148da5b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148da61 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1148da64 jmp 0x1148da48 */
  goto L_1148da48;
L_1148da66:;
  /* 1148da66 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da69 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da6c jne 0x1148dab7 */
  if (!C.zf) goto L_1148dab7;
  /* 1148da6e mov eax, dword ptr [0x114b6b48] */
  EAX = (r32((uint32_t)(0x114b6b48)));
  /* 1148da73 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1148da76:;
  /* 1148da76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da79 cmp ecx, dword ptr [0x114b6b3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6b3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da7f jae 0x1148da97 */
  if (!C.cf) goto L_1148da97;
  /* 1148da81 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da84 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148da88 je 0x1148da8c */
  if (C.zf) goto L_1148da8c;
  /* 1148da8a jmp 0x1148da97 */
  goto L_1148da97;
L_1148da8c:;
  /* 1148da8c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da8f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148da92 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148da95 jmp 0x1148da76 */
  goto L_1148da76;
L_1148da97:;
  /* 1148da97 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148da9a cmp ecx, dword ptr [0x114b6b3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6b3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148daa0 jne 0x1148dab7 */
  if (!C.zf) goto L_1148dab7;
  /* 1148daa2 call 0x1148dea0 */
  push32(0x1148daa7u); f_1148dea0();
  /* 1148daa7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148daaa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148daae jne 0x1148dab7 */
  if (!C.zf) goto L_1148dab7;
  /* 1148dab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148dab2 jmp 0x1148de91 */
  goto L_1148de91;
L_1148dab7:;
  /* 1148dab7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148daba push edx */
  push32((uint32_t)(EDX));
  /* 1148dabb call 0x1148dfb0 */
  push32(0x1148dac0u); f_1148dfb0();
  /* 1148dac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dac3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dac6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1148dac9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1148dacb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dace mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148dad1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dad4 jne 0x1148dadd */
  if (!C.zf) goto L_1148dadd;
  /* 1148dad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148dad8 jmp 0x1148de91 */
  goto L_1148de91;
L_1148dadd:;
  /* 1148dadd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dae0 mov dword ptr [0x114b6b3c], edx */
  w32((uint32_t)(0x114b6b3c), (EDX));
  /* 1148dae6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dae9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148daec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1148daef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148daf2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148daf4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1148daf7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dafb je 0x1148db20 */
  if (C.zf) goto L_1148db20;
  /* 1148dafd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db00 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148db06 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1148db0a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db0d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db10 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1148db13 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1148db1a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1148db1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148db1e jne 0x1148db55 */
  if (!C.zf) goto L_1148db55;
L_1148db20:;
  /* 1148db20 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1148db27:;
  /* 1148db27 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db2a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db2d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148db30 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1148db34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db3a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1148db3d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1148db44 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1148db46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148db48 jne 0x1148db55 */
  if (!C.zf) goto L_1148db55;
  /* 1148db4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148db50 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1148db53 jmp 0x1148db27 */
  goto L_1148db27;
L_1148db55:;
  /* 1148db55 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db58 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148db5e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db61 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1148db68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148db6b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1148db72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db75 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148db7b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1148db7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148db82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148db86 jne 0x1148dba2 */
  if (!C.zf) goto L_1148dba2;
  /* 1148db88 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1148db8f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148db92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148db95 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148db98 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1148db9f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1148dba2:;
  /* 1148dba2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dba6 jl 0x1148dbbb */
  if ((C.sf!=C.of)) goto L_1148dbbb;
  /* 1148dba8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148dbab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1148dbad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1148dbb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148dbb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dbb6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1148dbb9 jmp 0x1148dba2 */
  goto L_1148dba2;
L_1148dbbb:;
  /* 1148dbbb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148dbbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148dbc1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1148dbc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1148dbc8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dbcb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148dbcd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148dbd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148dbd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148dbd6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1148dbd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148dbdc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1148dbdf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dbe3 jle 0x1148dbec */
  if ((C.zf||C.sf!=C.of)) goto L_1148dbec;
  /* 1148dbe5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1148dbec:;
  /* 1148dbec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148dbef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dbf2 je 0x1148de10 */
  if (C.zf) goto L_1148de10;
  /* 1148dbf8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dbfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dbfe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148dc01 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dc04 jne 0x1148dcda */
  if (!C.zf) goto L_1148dcda;
  /* 1148dc0a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dc0e jge 0x1148dc6f */
  if ((C.sf==C.of)) goto L_1148dc6f;
  /* 1148dc10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148dc15 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148dc18 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148dc1a not eax */
  EAX = (~(EAX));
  /* 1148dc1c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148dc1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1148dc26 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148dc28 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148dc2b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1148dc32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc35 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dc38 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1148dc3b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148dc3e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc41 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dc44 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1148dc47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc4a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dc4d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148dc51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148dc53 jne 0x1148dc6d */
  if (!C.zf) goto L_1148dc6d;
  /* 1148dc55 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148dc5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148dc5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148dc5f not eax */
  EAX = (~(EAX));
  /* 1148dc61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dc64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148dc66 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148dc68 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dc6b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1148dc6d:;
  /* 1148dc6d jmp 0x1148dcda */
  goto L_1148dcda;
L_1148dc6f:;
  /* 1148dc6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148dc72 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148dc75 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148dc7a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148dc7c not edx */
  EDX = (~(EDX));
  /* 1148dc7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148dc81 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc84 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1148dc8b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148dc8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148dc90 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc93 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1148dc9a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dc9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dca0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148dca3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148dca6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dca9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dcac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1148dcaf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dcb2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dcb5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148dcb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148dcbb jne 0x1148dcda */
  if (!C.zf) goto L_1148dcda;
  /* 1148dcbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148dcc0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148dcc3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148dcc8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148dcca not edx */
  EDX = (~(EDX));
  /* 1148dccc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dccf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148dcd2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148dcd4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dcd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1148dcda:;
  /* 1148dcda mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dcdd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148dce0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dce3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148dce6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1148dce9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dcec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148dcef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dcf2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148dcf5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148dcf8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dcfc je 0x1148de10 */
  if (C.zf) goto L_1148de10;
  /* 1148dd02 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148dd05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148dd08 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1148dd0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148dd0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148dd14 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148dd17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1148dd1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148dd20 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1148dd23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148dd26 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd29 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1148dd2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148dd32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd35 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1148dd38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148dd3e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148dd41 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dd44 jne 0x1148de10 */
  if (!C.zf) goto L_1148de10;
  /* 1148dd4a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dd4e jge 0x1148ddaa */
  if ((C.sf==C.of)) goto L_1148ddaa;
  /* 1148dd50 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dd53 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dd56 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148dd5a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dd5d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dd60 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1148dd63 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148dd65 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dd68 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dd6b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1148dd6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148dd70 jne 0x1148dd88 */
  if (!C.zf) goto L_1148dd88;
  /* 1148dd72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148dd77 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148dd7a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148dd7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dd7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148dd81 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148dd83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dd86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1148dd88:;
  /* 1148dd88 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148dd8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148dd90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148dd92 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148dd95 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dd98 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1148dd9c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148dd9e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148dda1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148dda4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1148dda8 jmp 0x1148de10 */
  goto L_1148de10;
L_1148ddaa:;
  /* 1148ddaa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148ddad add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ddb0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148ddb4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148ddb7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ddba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1148ddbd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148ddbf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148ddc2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ddc5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1148ddc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148ddca jne 0x1148dde7 */
  if (!C.zf) goto L_1148dde7;
  /* 1148ddcc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148ddcf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ddd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148ddd7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148ddd9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dddc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148dddf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148dde1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148dde4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1148dde7:;
  /* 1148dde7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148ddea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148dded mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148ddf2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148ddf4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148ddf7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148ddfa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1148de01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148de03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148de06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148de09 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1148de10:;
  /* 1148de10 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148de14 je 0x1148de2a */
  if (C.zf) goto L_1148de2a;
  /* 1148de16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148de19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148de1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148de1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148de21 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148de24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148de27 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1148de2a:;
  /* 1148de2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148de2d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148de30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1148de33 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148de36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148de39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148de3c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1148de3e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148de41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148de44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148de47 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148de4a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1148de4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148de50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148de52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148de55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148de57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148de5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148de5d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1148de5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148de61 jne 0x1148de83 */
  if (!C.zf) goto L_1148de83;
  /* 1148de63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148de66 cmp eax, dword ptr [0x114b6b40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b6b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148de6c jne 0x1148de83 */
  if (!C.zf) goto L_1148de83;
  /* 1148de6e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148de71 cmp ecx, dword ptr [0x114b6b38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6b38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148de77 jne 0x1148de83 */
  if (!C.zf) goto L_1148de83;
  /* 1148de79 mov dword ptr [0x114b6b40], 0 */
  w32((uint32_t)(0x114b6b40), (0x0u));
L_1148de83:;
  /* 1148de83 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1148de86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148de89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1148de8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148de8e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1148de91:;
  /* 1148de91 pop esi */
  ESI = (pop32());
  /* 1148de92 mov esp, ebp */
  ESP = (EBP);
  /* 1148de94 pop ebp */
  EBP = (pop32());
  /* 1148de95 ret  */
  ESPCHK(0x1148d960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dea0 @ 0x1148dea0 (271 bytes, 78 insns) */
void f_1148dea0(void) {
  FTRACE(0x1148dea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148dea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148dea1 mov ebp, esp */
  EBP = (ESP);
  /* 1148dea3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148dea4 mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148dea9 cmp eax, dword ptr [0x114b6b28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b6b28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148deaf jne 0x1148defb */
  if (!C.zf) goto L_1148defb;
  /* 1148deb1 mov ecx, dword ptr [0x114b6b28] */
  ECX = (r32((uint32_t)(0x114b6b28)));
  /* 1148deb7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148deba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148debd push ecx */
  push32((uint32_t)(ECX));
  /* 1148debe mov edx, dword ptr [0x114b6b48] */
  EDX = (r32((uint32_t)(0x114b6b48)));
  /* 1148dec4 push edx */
  push32((uint32_t)(EDX));
  /* 1148dec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148dec7 mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148decc push eax */
  push32((uint32_t)(EAX));
  /* 1148decd call dword ptr [0x114b9320] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9320))), 0x1148ded3u);
  /* 1148ded3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148ded6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148deda jne 0x1148dee3 */
  if (!C.zf) goto L_1148dee3;
  /* 1148dedc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148dede jmp 0x1148dfab */
  goto L_1148dfab;
L_1148dee3:;
  /* 1148dee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148dee6 mov dword ptr [0x114b6b48], ecx */
  w32((uint32_t)(0x114b6b48), (ECX));
  /* 1148deec mov edx, dword ptr [0x114b6b28] */
  EDX = (r32((uint32_t)(0x114b6b28)));
  /* 1148def2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148def5 mov dword ptr [0x114b6b28], edx */
  w32((uint32_t)(0x114b6b28), (EDX));
L_1148defb:;
  /* 1148defb mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148df00 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148df03 mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148df09 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148df0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148df0e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1148df13 push 8 */
  push32((uint32_t)(0x8u));
  /* 1148df15 mov edx, dword ptr [0x114b7ea4] */
  EDX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148df1b push edx */
  push32((uint32_t)(EDX));
  /* 1148df1c call dword ptr [0x114b9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9324))), 0x1148df22u);
  /* 1148df22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df25 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1148df28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df2b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148df2f jne 0x1148df35 */
  if (!C.zf) goto L_1148df35;
  /* 1148df31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148df33 jmp 0x1148dfab */
  goto L_1148dfab;
L_1148df35:;
  /* 1148df35 push 4 */
  push32((uint32_t)(0x4u));
  /* 1148df37 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1148df3c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1148df41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148df43 call dword ptr [0x114b931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b931c))), 0x1148df49u);
  /* 1148df49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df4c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1148df4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df52 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148df56 jne 0x1148df72 */
  if (!C.zf) goto L_1148df72;
  /* 1148df58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148df5e push ecx */
  push32((uint32_t)(ECX));
  /* 1148df5f push 0 */
  push32((uint32_t)(0x0u));
  /* 1148df61 mov edx, dword ptr [0x114b7ea4] */
  EDX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148df67 push edx */
  push32((uint32_t)(EDX));
  /* 1148df68 call dword ptr [0x114b9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9348))), 0x1148df6eu);
  /* 1148df6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148df70 jmp 0x1148dfab */
  goto L_1148dfab;
L_1148df72:;
  /* 1148df72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148df7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df7e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1148df85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df88 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1148df8f mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148df94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148df97 mov dword ptr [0x114b6b44], eax */
  w32((uint32_t)(0x114b6b44), (EAX));
  /* 1148df9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148df9f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1148dfa2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1148dfa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1148dfab:;
  /* 1148dfab mov esp, ebp */
  ESP = (EBP);
  /* 1148dfad pop ebp */
  EBP = (pop32());
  /* 1148dfae ret  */
  ESPCHK(0x1148dea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfb0 @ 0x1148dfb0 (494 bytes, 149 insns) */
void f_1148dfb0(void) {
  FTRACE(0x1148dfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148dfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148dfb1 mov ebp, esp */
  EBP = (ESP);
  /* 1148dfb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148dfb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148dfb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148dfbc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1148dfbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148dfc2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148dfc5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148dfc8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1148dfcf:;
  /* 1148dfcf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148dfd3 jl 0x1148dfe8 */
  if ((C.sf!=C.of)) goto L_1148dfe8;
  /* 1148dfd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148dfd8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1148dfda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148dfdd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148dfe0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148dfe3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1148dfe6 jmp 0x1148dfcf */
  goto L_1148dfcf;
L_1148dfe8:;
  /* 1148dfe8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148dfeb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148dff1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148dff4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1148dffb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1148dffe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1148e005 jmp 0x1148e010 */
  goto L_1148e010;
L_1148e007:;
  /* 1148e007 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e00a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e00d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1148e010:;
  /* 1148e010 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e014 jge 0x1148e036 */
  if ((C.sf==C.of)) goto L_1148e036;
  /* 1148e016 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e019 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148e01c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1148e01f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148e022 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e025 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e028 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1148e02b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e02e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e031 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1148e034 jmp 0x1148e007 */
  goto L_1148e007;
L_1148e036:;
  /* 1148e036 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e039 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1148e03c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e03f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1148e042 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e044 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1148e047 push 4 */
  push32((uint32_t)(0x4u));
  /* 1148e049 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1148e04e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1148e053 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e056 push edx */
  push32((uint32_t)(EDX));
  /* 1148e057 call dword ptr [0x114b931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b931c))), 0x1148e05du);
  /* 1148e05d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148e05f jne 0x1148e069 */
  if (!C.zf) goto L_1148e069;
  /* 1148e061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148e064 jmp 0x1148e19a */
  goto L_1148e19a;
L_1148e069:;
  /* 1148e069 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e06c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e071 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1148e074 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e077 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148e07a jmp 0x1148e088 */
  goto L_1148e088;
L_1148e07c:;
  /* 1148e07c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e07f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e085 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148e088:;
  /* 1148e088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e08b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e08e ja 0x1148e0ed */
  if ((!C.cf&&!C.zf)) goto L_1148e0ed;
  /* 1148e090 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e093 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1148e09a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e09d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1148e0a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e0aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e0ad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148e0b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e0b3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1148e0b9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e0bc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e0c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e0c5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1148e0c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e0cb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e0d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e0d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148e0d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e0da add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e0df mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1148e0e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148e0e5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1148e0eb jmp 0x1148e07c */
  goto L_1148e07c;
L_1148e0ed:;
  /* 1148e0ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148e0f0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e0f6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1148e0f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e0fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e0ff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e102 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1148e105 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e108 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148e10b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148e10e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e111 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e114 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1148e117 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e11a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e11d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e120 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1148e123 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e126 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148e129 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148e12c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e12f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e132 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1148e135 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e138 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e13b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1148e143 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e146 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e149 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1148e154 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e157 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1148e15b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e15e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1148e161 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148e164 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e167 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1148e16a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148e16c jne 0x1148e17d */
  if (!C.zf) goto L_1148e17d;
  /* 1148e16e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e171 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e174 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1148e177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e17a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1148e17d:;
  /* 1148e17d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e182 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e185 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e187 not edx */
  EDX = (~(EDX));
  /* 1148e189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e18c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148e18f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e194 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148e197 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1148e19a:;
  /* 1148e19a mov esp, ebp */
  ESP = (EBP);
  /* 1148e19c pop ebp */
  EBP = (pop32());
  /* 1148e19d ret  */
  ESPCHK(0x1148dfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1a0 @ 0x1148e1a0 (1515 bytes, 489 insns) */
void f_1148e1a0(void) {
  FTRACE(0x1148e1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148e1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148e1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1148e1a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e1a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148e1a9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e1ac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1148e1ae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1148e1b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e1b4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1148e1b7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1148e1ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e1bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148e1c0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e1c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148e1c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148e1c9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1148e1cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148e1cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e1d2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148e1d8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e1db lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1148e1e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148e1e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148e1e8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e1eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1148e1ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e1f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148e1f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e1f6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1148e1f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e1fc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e1ff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1148e202 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e205 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148e207 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1148e20a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e20d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e210 jle 0x1148e4c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1148e4c6;
  /* 1148e216 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e219 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148e21c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148e21e jne 0x1148e22b */
  if (!C.zf) goto L_1148e22b;
  /* 1148e220 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e223 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e226 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e229 jle 0x1148e232 */
  if ((C.zf||C.sf!=C.of)) goto L_1148e232;
L_1148e22b:;
  /* 1148e22b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148e22d jmp 0x1148e787 */
  goto L_1148e787;
L_1148e232:;
  /* 1148e232 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e235 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1148e238 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e23b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1148e23e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e242 jbe 0x1148e24b */
  if ((C.cf||C.zf)) goto L_1148e24b;
  /* 1148e244 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1148e24b:;
  /* 1148e24b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e24e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e251 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e254 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e257 jne 0x1148e32d */
  if (!C.zf) goto L_1148e32d;
  /* 1148e25d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e261 jae 0x1148e2c2 */
  if (!C.cf) goto L_1148e2c2;
  /* 1148e263 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e268 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e26b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e26d not edx */
  EDX = (~(EDX));
  /* 1148e26f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e272 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e275 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1148e279 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148e27b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e27e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e281 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1148e285 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e288 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e28b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148e28e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148e291 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e294 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e297 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1148e29a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e29d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e2a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148e2a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148e2a6 jne 0x1148e2c0 */
  if (!C.zf) goto L_1148e2c0;
  /* 1148e2a8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e2ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e2b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e2b2 not edx */
  EDX = (~(EDX));
  /* 1148e2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e2b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148e2b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e2bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e2be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1148e2c0:;
  /* 1148e2c0 jmp 0x1148e32d */
  goto L_1148e32d;
L_1148e2c2:;
  /* 1148e2c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e2c5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e2c8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e2cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e2cf not eax */
  EAX = (~(EAX));
  /* 1148e2d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e2d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e2d7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1148e2de and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e2e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e2e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e2e6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1148e2ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e2f0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e2f3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1148e2f6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148e2f9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e2fc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e2ff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1148e302 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e305 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e308 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148e30c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148e30e jne 0x1148e32d */
  if (!C.zf) goto L_1148e32d;
  /* 1148e310 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e313 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e316 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e31b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e31d not eax */
  EAX = (~(EAX));
  /* 1148e31f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e322 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e325 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148e327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e32a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1148e32d:;
  /* 1148e32d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e330 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148e333 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e336 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148e339 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1148e33c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e33f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148e342 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e345 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148e348 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1148e34b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e34e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e351 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e354 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148e357 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e35b jle 0x1148e4a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1148e4a7;
  /* 1148e361 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e364 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e367 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1148e36a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e36d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1148e370 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e373 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1148e376 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e37a jbe 0x1148e383 */
  if ((C.cf||C.zf)) goto L_1148e383;
  /* 1148e37c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1148e383:;
  /* 1148e383 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e386 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148e389 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1148e38c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1148e38f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e392 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e395 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e398 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1148e39b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e39e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e3a1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1148e3a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e3a7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e3aa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1148e3ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e3b0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e3b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e3b6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1148e3b9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e3bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e3bf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e3c2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e3c5 jne 0x1148e493 */
  if (!C.zf) goto L_1148e493;
  /* 1148e3cb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e3cf jae 0x1148e42c */
  if (!C.cf) goto L_1148e42c;
  /* 1148e3d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e3d4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e3d7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148e3db mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e3de add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e3e1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148e3e4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148e3e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e3ea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e3ed mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1148e3f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148e3f2 jne 0x1148e40a */
  if (!C.zf) goto L_1148e40a;
  /* 1148e3f4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e3f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e3fc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e3fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e401 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148e403 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e408 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1148e40a:;
  /* 1148e40a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e40f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e412 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e41a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1148e41e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e420 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e423 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e426 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1148e42a jmp 0x1148e493 */
  goto L_1148e493;
L_1148e42c:;
  /* 1148e42c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e42f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e432 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148e436 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e439 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e43c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148e43f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148e442 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e445 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e448 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1148e44b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148e44d jne 0x1148e46a */
  if (!C.zf) goto L_1148e46a;
  /* 1148e44f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e452 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e455 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e45a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e45c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e45f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148e462 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e467 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1148e46a:;
  /* 1148e46a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e46d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e470 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e475 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e477 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e47a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e47d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1148e484 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e486 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e489 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e48c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1148e493:;
  /* 1148e493 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e496 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e499 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1148e49b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e49e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e4a4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1148e4a7:;
  /* 1148e4a7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e4aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e4b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1148e4b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e4b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e4bb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4be mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1148e4c1 jmp 0x1148e782 */
  goto L_1148e782;
L_1148e4c6:;
  /* 1148e4c6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e4c9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e4cc jge 0x1148e782 */
  if ((C.sf==C.of)) goto L_1148e782;
  /* 1148e4d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e4d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e4db mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1148e4dd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148e4e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e4e6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4e9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1148e4ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e4ef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e4f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1148e4f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e4f8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e4fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1148e4fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e501 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1148e504 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e507 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1148e50a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e50e jbe 0x1148e517 */
  if ((C.cf||C.zf)) goto L_1148e517;
  /* 1148e510 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1148e517:;
  /* 1148e517 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e51a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1148e51d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148e51f jne 0x1148e660 */
  if (!C.zf) goto L_1148e660;
  /* 1148e525 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148e528 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1148e52b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e52e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1148e531 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e535 jbe 0x1148e53e */
  if ((C.cf||C.zf)) goto L_1148e53e;
  /* 1148e537 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1148e53e:;
  /* 1148e53e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e541 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e544 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e547 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e54a jne 0x1148e620 */
  if (!C.zf) goto L_1148e620;
  /* 1148e550 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e554 jae 0x1148e5b5 */
  if (!C.cf) goto L_1148e5b5;
  /* 1148e556 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e55b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e55e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e560 not edx */
  EDX = (~(EDX));
  /* 1148e562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e565 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e568 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1148e56c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148e56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e571 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e574 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1148e578 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e57b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e57e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1148e581 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148e584 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e587 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e58a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1148e58d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e590 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e593 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148e597 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148e599 jne 0x1148e5b3 */
  if (!C.zf) goto L_1148e5b3;
  /* 1148e59b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e5a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e5a3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e5a5 not edx */
  EDX = (~(EDX));
  /* 1148e5a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e5aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148e5ac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e5ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e5b1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1148e5b3:;
  /* 1148e5b3 jmp 0x1148e620 */
  goto L_1148e620;
L_1148e5b5:;
  /* 1148e5b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e5b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e5bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e5c0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e5c2 not eax */
  EAX = (~(EAX));
  /* 1148e5c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e5c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e5ca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1148e5d1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e5d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e5d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e5d9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1148e5e0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e5e3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e5e6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1148e5e9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148e5ec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e5ef add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e5f2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1148e5f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e5f8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e5fb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1148e5ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148e601 jne 0x1148e620 */
  if (!C.zf) goto L_1148e620;
  /* 1148e603 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148e606 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e609 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e60e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e610 not eax */
  EAX = (~(EAX));
  /* 1148e612 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e615 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e618 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148e61a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e61d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1148e620:;
  /* 1148e620 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e623 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148e626 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e629 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148e62c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1148e62f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e632 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148e635 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148e638 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148e63b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1148e63e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e641 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e644 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1148e647 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e64a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1148e64d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e650 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1148e653 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e657 jbe 0x1148e660 */
  if ((C.cf||C.zf)) goto L_1148e660;
  /* 1148e659 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1148e660:;
  /* 1148e660 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148e663 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148e666 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1148e669 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1148e66c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e66f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e672 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148e675 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1148e678 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e67b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e67e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1148e681 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148e684 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e687 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1148e68a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e68d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148e690 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e693 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1148e696 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e699 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e69c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148e69f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e6a2 jne 0x1148e76e */
  if (!C.zf) goto L_1148e76e;
  /* 1148e6a8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e6ac jae 0x1148e708 */
  if (!C.cf) goto L_1148e708;
  /* 1148e6ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e6b1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e6b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148e6b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e6bb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e6be mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1148e6c1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148e6c3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e6c6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e6c9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1148e6cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148e6ce jne 0x1148e6e6 */
  if (!C.zf) goto L_1148e6e6;
  /* 1148e6d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e6d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148e6d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e6da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e6dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148e6df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148e6e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e6e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1148e6e6:;
  /* 1148e6e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e6eb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148e6ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e6f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e6f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e6f6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1148e6fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148e6fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e6ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e702 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1148e706 jmp 0x1148e76e */
  goto L_1148e76e;
L_1148e708:;
  /* 1148e708 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e70b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e70e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1148e712 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e715 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e718 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1148e71b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148e71d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e720 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e723 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1148e726 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148e728 jne 0x1148e745 */
  if (!C.zf) goto L_1148e745;
  /* 1148e72a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148e72d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e730 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1148e735 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148e737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e73a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148e73d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148e73f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148e742 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1148e745:;
  /* 1148e745 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148e748 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e74b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e750 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e755 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e758 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1148e75f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148e761 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e764 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1148e767 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1148e76e:;
  /* 1148e76e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e771 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e774 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148e776 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148e779 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e77c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148e77f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1148e782:;
  /* 1148e782 mov eax, 1 */
  EAX = (0x1u);
L_1148e787:;
  /* 1148e787 mov esp, ebp */
  ESP = (EBP);
  /* 1148e789 pop ebp */
  EBP = (pop32());
  /* 1148e78a ret  */
  ESPCHK(0x1148e1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e790 @ 0x1148e790 (304 bytes, 79 insns) */
void f_1148e790(void) {
  FTRACE(0x1148e790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148e790 push ebp */
  push32((uint32_t)(EBP));
  /* 1148e791 mov ebp, esp */
  EBP = (ESP);
  /* 1148e793 push ecx */
  push32((uint32_t)(ECX));
  /* 1148e794 cmp dword ptr [0x114b6b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e79b je 0x1148e8bc */
  if (C.zf) goto L_1148e8bc;
  /* 1148e7a1 mov eax, dword ptr [0x114b6b38] */
  EAX = (r32((uint32_t)(0x114b6b38)));
  /* 1148e7a6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1148e7a9 mov ecx, dword ptr [0x114b6b40] */
  ECX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e7af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148e7b2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e7b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148e7b7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1148e7bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1148e7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148e7c4 push eax */
  push32((uint32_t)(EAX));
  /* 1148e7c5 call dword ptr [0x114b9344] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9344))), 0x1148e7cbu);
  /* 1148e7cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148e7d0 mov ecx, dword ptr [0x114b6b38] */
  ECX = (r32((uint32_t)(0x114b6b38)));
  /* 1148e7d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148e7d8 mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e7dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148e7e0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148e7e2 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e7e8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148e7eb mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e7f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148e7f3 mov edx, dword ptr [0x114b6b38] */
  EDX = (r32((uint32_t)(0x114b6b38)));
  /* 1148e7f9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1148e804 mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e809 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148e80c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1148e80f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1148e812 mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e817 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148e81a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1148e81d mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e823 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1148e826 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1148e82a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148e82c jne 0x1148e842 */
  if (!C.zf) goto L_1148e842;
  /* 1148e82e mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e834 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148e837 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1148e839 mov ecx, dword ptr [0x114b6b40] */
  ECX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e83f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1148e842:;
  /* 1148e842 mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e848 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e84c jne 0x1148e8b2 */
  if (!C.zf) goto L_1148e8b2;
  /* 1148e84e cmp dword ptr [0x114b6b44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b6b44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e855 jle 0x1148e8b2 */
  if ((C.zf||C.sf!=C.of)) goto L_1148e8b2;
  /* 1148e857 mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e85c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1148e85f push ecx */
  push32((uint32_t)(ECX));
  /* 1148e860 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148e862 mov edx, dword ptr [0x114b7ea4] */
  EDX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148e868 push edx */
  push32((uint32_t)(EDX));
  /* 1148e869 call dword ptr [0x114b9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9348))), 0x1148e86fu);
  /* 1148e86f mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148e874 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148e877 mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148e87d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e87f mov edx, dword ptr [0x114b6b40] */
  EDX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e885 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e888 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e88a push ecx */
  push32((uint32_t)(ECX));
  /* 1148e88b mov eax, dword ptr [0x114b6b40] */
  EAX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e890 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e893 push eax */
  push32((uint32_t)(EAX));
  /* 1148e894 mov ecx, dword ptr [0x114b6b40] */
  ECX = (r32((uint32_t)(0x114b6b40)));
  /* 1148e89a push ecx */
  push32((uint32_t)(ECX));
  /* 1148e89b call 0x1148bc50 */
  push32(0x1148e8a0u); f_1148bc50();
  /* 1148e8a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e8a3 mov edx, dword ptr [0x114b6b44] */
  EDX = (r32((uint32_t)(0x114b6b44)));
  /* 1148e8a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e8ac mov dword ptr [0x114b6b44], edx */
  w32((uint32_t)(0x114b6b44), (EDX));
L_1148e8b2:;
  /* 1148e8b2 mov dword ptr [0x114b6b40], 0 */
  w32((uint32_t)(0x114b6b40), (0x0u));
L_1148e8bc:;
  /* 1148e8bc mov esp, ebp */
  ESP = (EBP);
  /* 1148e8be pop ebp */
  EBP = (pop32());
  /* 1148e8bf ret  */
  ESPCHK(0x1148e790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8c0 @ 0x1148e8c0 (1565 bytes, 343 insns) */
void f_1148e8c0(void) {
  FTRACE(0x1148e8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148e8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148e8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1148e8c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148e8c9 mov eax, dword ptr [0x114b6b44] */
  EAX = (r32((uint32_t)(0x114b6b44)));
  /* 1148e8ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148e8d1 push eax */
  push32((uint32_t)(EAX));
  /* 1148e8d2 mov ecx, dword ptr [0x114b6b48] */
  ECX = (r32((uint32_t)(0x114b6b48)));
  /* 1148e8d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1148e8d9 call dword ptr [0x114b93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c4))), 0x1148e8dfu);
  /* 1148e8df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148e8e1 je 0x1148e8eb */
  if (C.zf) goto L_1148e8eb;
  /* 1148e8e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148e8e6 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148e8eb:;
  /* 1148e8eb mov edx, dword ptr [0x114b6b48] */
  EDX = (r32((uint32_t)(0x114b6b48)));
  /* 1148e8f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1148e8f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1148e901 jmp 0x1148e912 */
  goto L_1148e912;
L_1148e903:;
  /* 1148e903 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1148e909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e90c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1148e912:;
  /* 1148e912 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1148e918 cmp ecx, dword ptr [0x114b6b44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6b44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e91e jge 0x1148eed7 */
  if ((C.sf==C.of)) goto L_1148eed7;
  /* 1148e924 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1148e92a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1148e92d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1148e933 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1148e938 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1148e93e push ecx */
  push32((uint32_t)(ECX));
  /* 1148e93f call dword ptr [0x114b93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c4))), 0x1148e945u);
  /* 1148e945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148e947 je 0x1148e953 */
  if (C.zf) goto L_1148e953;
  /* 1148e949 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1148e94e jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148e953:;
  /* 1148e953 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1148e959 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1148e95c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1148e962 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1148e968 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e96e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1148e971 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1148e977 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148e97a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148e97d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1148e987 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1148e991 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148e998 jmp 0x1148e9a3 */
  goto L_1148e9a3;
L_1148e99a:;
  /* 1148e99a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148e99d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e9a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1148e9a3:;
  /* 1148e9a3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e9a7 jge 0x1148ee9b */
  if ((C.sf==C.of)) goto L_1148ee9b;
  /* 1148e9ad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1148e9b7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1148e9c1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1148e9cb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1148e9d5 jmp 0x1148e9e6 */
  goto L_1148e9e6;
L_1148e9d7:;
  /* 1148e9d7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1148e9dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148e9e0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1148e9e6:;
  /* 1148e9e6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148e9ed jge 0x1148ea02 */
  if ((C.sf==C.of)) goto L_1148ea02;
  /* 1148e9ef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1148e9f5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1148ea00 jmp 0x1148e9d7 */
  goto L_1148e9d7;
L_1148ea02:;
  /* 1148ea02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ea06 jl 0x1148ee3d */
  if ((C.sf!=C.of)) goto L_1148ee3d;
  /* 1148ea0c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1148ea11 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1148ea17 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ea18 call dword ptr [0x114b93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c4))), 0x1148ea1eu);
  /* 1148ea1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ea20 je 0x1148ea2c */
  if (C.zf) goto L_1148ea2c;
  /* 1148ea22 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1148ea27 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ea2c:;
  /* 1148ea2c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1148ea32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148ea35 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1148ea3f jmp 0x1148ea50 */
  goto L_1148ea50;
L_1148ea41:;
  /* 1148ea41 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1148ea47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ea4a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1148ea50:;
  /* 1148ea50 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ea57 jge 0x1148ebd4 */
  if ((C.sf==C.of)) goto L_1148ebd4;
  /* 1148ea5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148ea60 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ea63 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1148ea69 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148ea6f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ea75 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1148ea7b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148ea81 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ea85 jne 0x1148ea92 */
  if (!C.zf) goto L_1148ea92;
  /* 1148ea87 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1148ea8d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ea90 je 0x1148ea9c */
  if (C.zf) goto L_1148ea9c;
L_1148ea92:;
  /* 1148ea92 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1148ea97 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ea9c:;
  /* 1148ea9c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148eaa2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148eaa4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1148eaaa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1148eab0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1148eab6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1148eabc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1148eabf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148eac1 je 0x1148eaf9 */
  if (C.zf) goto L_1148eaf9;
  /* 1148eac3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1148eac9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148eacc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1148ead2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eadc jle 0x1148eae8 */
  if ((C.zf||C.sf!=C.of)) goto L_1148eae8;
  /* 1148eade mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1148eae3 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148eae8:;
  /* 1148eae8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1148eaee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eaf1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1148eaf7 jmp 0x1148eb3b */
  goto L_1148eb3b;
L_1148eaf9:;
  /* 1148eaf9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1148eaff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1148eb02 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148eb05 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1148eb0b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eb12 jle 0x1148eb1e */
  if ((C.zf||C.sf!=C.of)) goto L_1148eb1e;
  /* 1148eb14 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1148eb1e:;
  /* 1148eb1e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1148eb24 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1148eb2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eb2e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1148eb34 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1148eb3b:;
  /* 1148eb3b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eb42 jl 0x1148eb5d */
  if ((C.sf!=C.of)) goto L_1148eb5d;
  /* 1148eb44 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1148eb4a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1148eb4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148eb4f jne 0x1148eb5d */
  if (!C.zf) goto L_1148eb5d;
  /* 1148eb51 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eb5b jle 0x1148eb67 */
  if ((C.zf||C.sf!=C.of)) goto L_1148eb67;
L_1148eb5d:;
  /* 1148eb5d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1148eb62 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148eb67:;
  /* 1148eb67 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148eb6d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eb73 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1148eb76 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eb7c je 0x1148eb88 */
  if (C.zf) goto L_1148eb88;
  /* 1148eb7e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1148eb83 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148eb88:;
  /* 1148eb88 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148eb8e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eb94 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1148eb9a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148eba0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eba6 jb 0x1148ea9c */
  if (C.cf) goto L_1148ea9c;
  /* 1148ebac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148ebb2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ebb8 je 0x1148ebc4 */
  if (C.zf) goto L_1148ebc4;
  /* 1148ebba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1148ebbf jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ebc4:;
  /* 1148ebc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148ebc7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ebcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148ebcf jmp 0x1148ea41 */
  goto L_1148ea41;
L_1148ebd4:;
  /* 1148ebd4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148ebd7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148ebd9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ebdf je 0x1148ebeb */
  if (C.zf) goto L_1148ebeb;
  /* 1148ebe1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1148ebe6 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ebeb:;
  /* 1148ebeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148ebee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1148ebf4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1148ebfb jmp 0x1148ec06 */
  goto L_1148ec06;
L_1148ebfd:;
  /* 1148ebfd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148ec00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ec03 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1148ec06:;
  /* 1148ec06 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ec0a jge 0x1148ee3d */
  if ((C.sf==C.of)) goto L_1148ee3d;
  /* 1148ec10 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1148ec1a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1148ec20 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1148ec26:;
  /* 1148ec26 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148ec2c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148ec2f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1148ec35 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1148ec3b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ec41 je 0x1148ed6a */
  if (C.zf) goto L_1148ed6a;
  /* 1148ec47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148ec4a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1148ec50 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ec57 je 0x1148ed6a */
  if (C.zf) goto L_1148ed6a;
  /* 1148ec5d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1148ec63 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ec69 jb 0x1148ec7e */
  if (C.cf) goto L_1148ec7e;
  /* 1148ec6b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1148ec71 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ec76 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ec7c jb 0x1148ec88 */
  if (C.cf) goto L_1148ec88;
L_1148ec7e:;
  /* 1148ec7e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1148ec83 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ec88:;
  /* 1148ec88 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1148ec8e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ec94 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1148ec9a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1148eca0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eca3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1148eca6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148eca9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ecae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1148ecb4:;
  /* 1148ecb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ecb7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ecbd je 0x1148ecde */
  if (C.zf) goto L_1148ecde;
  /* 1148ecbf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ecc2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ecc8 jne 0x1148eccc */
  if (!C.zf) goto L_1148eccc;
  /* 1148ecca jmp 0x1148ecde */
  goto L_1148ecde;
L_1148eccc:;
  /* 1148eccc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148eccf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148ecd1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1148ecd4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ecd7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ecd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1148ecdc jmp 0x1148ecb4 */
  goto L_1148ecb4;
L_1148ecde:;
  /* 1148ecde mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ece1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ece7 jne 0x1148ecf3 */
  if (!C.zf) goto L_1148ecf3;
  /* 1148ece9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1148ecee jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ecf3:;
  /* 1148ecf3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1148ecf9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148ecfb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1148ecfe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ed01 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1148ed07 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ed0e jle 0x1148ed1a */
  if ((C.zf||C.sf!=C.of)) goto L_1148ed1a;
  /* 1148ed10 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1148ed1a:;
  /* 1148ed1a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1148ed20 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ed23 je 0x1148ed2f */
  if (C.zf) goto L_1148ed2f;
  /* 1148ed25 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1148ed2a jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ed2f:;
  /* 1148ed2f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1148ed35 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148ed38 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ed3e je 0x1148ed4a */
  if (C.zf) goto L_1148ed4a;
  /* 1148ed40 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1148ed45 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ed4a:;
  /* 1148ed4a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1148ed50 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1148ed56 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1148ed5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ed5f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1148ed65 jmp 0x1148ec26 */
  goto L_1148ec26;
L_1148ed6a:;
  /* 1148ed6a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ed71 je 0x1148ede1 */
  if (C.zf) goto L_1148ede1;
  /* 1148ed73 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ed77 jge 0x1148edab */
  if ((C.sf==C.of)) goto L_1148edab;
  /* 1148ed79 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148ed7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148ed81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148ed83 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1148ed89 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148ed8b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1148ed91 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148ed96 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148ed99 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148ed9b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1148eda1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148eda3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1148eda9 jmp 0x1148ede1 */
  goto L_1148ede1;
L_1148edab:;
  /* 1148edab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148edae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148edb1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148edb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148edb8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1148edbe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148edc0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1148edc6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148edc9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148edcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1148edd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148edd3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1148edd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148eddb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1148ede1:;
  /* 1148ede1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1148ede7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148edea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148edf0 jne 0x1148ee04 */
  if (!C.zf) goto L_1148ee04;
  /* 1148edf2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148edf5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1148edfb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ee02 je 0x1148ee0e */
  if (C.zf) goto L_1148ee0e;
L_1148ee04:;
  /* 1148ee04 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1148ee09 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ee0e:;
  /* 1148ee0e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1148ee14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148ee17 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ee1d je 0x1148ee29 */
  if (C.zf) goto L_1148ee29;
  /* 1148ee1f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1148ee24 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ee29:;
  /* 1148ee29 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1148ee2f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ee32 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1148ee38 jmp 0x1148ebfd */
  goto L_1148ebfd;
L_1148ee3d:;
  /* 1148ee3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148ee40 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1148ee46 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1148ee4c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ee50 jne 0x1148ee6a */
  if (!C.zf) goto L_1148ee6a;
  /* 1148ee52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148ee55 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1148ee5b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1148ee61 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ee68 je 0x1148ee71 */
  if (C.zf) goto L_1148ee71;
L_1148ee6a:;
  /* 1148ee6a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1148ee6f jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148ee71:;
  /* 1148ee71 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1148ee77 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ee7d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1148ee83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148ee86 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ee8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148ee8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ee91 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1148ee93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148ee96 jmp 0x1148e99a */
  goto L_1148e99a;
L_1148ee9b:;
  /* 1148ee9b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1148eea1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1148eea7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eea9 jne 0x1148eebc */
  if (!C.zf) goto L_1148eebc;
  /* 1148eeab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1148eeb1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1148eeb7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148eeba je 0x1148eec3 */
  if (C.zf) goto L_1148eec3;
L_1148eebc:;
  /* 1148eebc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1148eec1 jmp 0x1148eed9 */
  goto L_1148eed9;
L_1148eec3:;
  /* 1148eec3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1148eec9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eecc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1148eed2 jmp 0x1148e903 */
  goto L_1148e903;
L_1148eed7:;
  /* 1148eed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148eed9:;
  /* 1148eed9 mov esp, ebp */
  ESP = (EBP);
  /* 1148eedb pop ebp */
  EBP = (pop32());
  /* 1148eedc ret  */
  ESPCHK(0x1148e8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eee0 @ 0x1148eee0 (836 bytes, 238 insns) */
void f_1148eee0(void) {
  FTRACE(0x1148eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148eee1 mov ebp, esp */
  EBP = (ESP);
  /* 1148eee3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148eee6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148eee8 call 0x1148ca30 */
  push32(0x1148eeedu); f_1148ca30();
  /* 1148eeed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148eef3 push eax */
  push32((uint32_t)(EAX));
  /* 1148eef4 call 0x1148f230 */
  push32(0x1148eef9u); f_1148f230();
  /* 1148eef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eefc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1148eeff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ef02 cmp ecx, dword ptr [0x114b6888] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b6888))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ef08 jne 0x1148ef1b */
  if (!C.zf) goto L_1148ef1b;
  /* 1148ef0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148ef0c call 0x1148cad0 */
  push32(0x1148ef11u); f_1148cad0();
  /* 1148ef11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ef14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148ef16 jmp 0x1148f220 */
  goto L_1148f220;
L_1148ef1b:;
  /* 1148ef1b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ef1f jne 0x1148ef3c */
  if (!C.zf) goto L_1148ef3c;
  /* 1148ef21 call 0x1148f310 */
  push32(0x1148ef26u); f_1148f310();
  /* 1148ef26 call 0x1148f390 */
  push32(0x1148ef2bu); f_1148f390();
  /* 1148ef2b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148ef2d call 0x1148cad0 */
  push32(0x1148ef32u); f_1148cad0();
  /* 1148ef32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ef35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148ef37 jmp 0x1148f220 */
  goto L_1148f220;
L_1148ef3c:;
  /* 1148ef3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148ef43 jmp 0x1148ef4e */
  goto L_1148ef4e;
L_1148ef45:;
  /* 1148ef45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ef48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ef4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148ef4e:;
  /* 1148ef4e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ef52 jae 0x1148f09f */
  if (!C.cf) goto L_1148f09f;
  /* 1148ef58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ef5b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148ef5e mov ecx, dword ptr [eax + 0x114b41a8] */
  ECX = (r32((uint32_t)(EAX + 0x114b41a8)));
  /* 1148ef64 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ef67 jne 0x1148f09a */
  if (!C.zf) goto L_1148f09a;
  /* 1148ef6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1148ef74 jmp 0x1148ef7f */
  goto L_1148ef7f;
L_1148ef76:;
  /* 1148ef76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148ef79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ef7c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1148ef7f:;
  /* 1148ef7f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ef86 jae 0x1148ef94 */
  if (!C.cf) goto L_1148ef94;
  /* 1148ef88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148ef8b mov byte ptr [eax + 0x114b6a20], 0 */
  w8((uint32_t)(EAX + 0x114b6a20), (0x0u));
  /* 1148ef92 jmp 0x1148ef76 */
  goto L_1148ef76;
L_1148ef94:;
  /* 1148ef94 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148ef9b jmp 0x1148efa6 */
  goto L_1148efa6;
L_1148ef9d:;
  /* 1148ef9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148efa0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148efa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1148efa6:;
  /* 1148efa6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148efaa jae 0x1148f027 */
  if (!C.cf) goto L_1148f027;
  /* 1148efac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148efaf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148efb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148efb5 lea ecx, [edx + eax*8 + 0x114b41b8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x114b41b8));
  /* 1148efbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148efbf jmp 0x1148efca */
  goto L_1148efca;
L_1148efc1:;
  /* 1148efc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148efc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148efc7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1148efca:;
  /* 1148efca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148efcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148efcf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1148efd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148efd3 je 0x1148f022 */
  if (C.zf) goto L_1148f022;
  /* 1148efd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148efd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148efda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1148efdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148efdf je 0x1148f022 */
  if (C.zf) goto L_1148f022;
  /* 1148efe1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148efe4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148efe6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1148efe8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1148efeb jmp 0x1148eff6 */
  goto L_1148eff6;
L_1148efed:;
  /* 1148efed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148eff0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148eff3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1148eff6:;
  /* 1148eff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148eff9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148effb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1148effe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f001 ja 0x1148f020 */
  if ((!C.cf&&!C.zf)) goto L_1148f020;
  /* 1148f003 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f006 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148f009 mov dl, byte ptr [eax + 0x114b6a21] */
  DL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 1148f00f or dl, byte ptr [ecx + 0x114b41a0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x114b41a0))); DL = (_r); fl_logic(_r,8); }
  /* 1148f015 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f018 mov byte ptr [eax + 0x114b6a21], dl */
  w8((uint32_t)(EAX + 0x114b6a21), (DL));
  /* 1148f01e jmp 0x1148efed */
  goto L_1148efed;
L_1148f020:;
  /* 1148f020 jmp 0x1148efc1 */
  goto L_1148efc1;
L_1148f022:;
  /* 1148f022 jmp 0x1148ef9d */
  goto L_1148ef9d;
L_1148f027:;
  /* 1148f027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f02a mov dword ptr [0x114b6888], ecx */
  w32((uint32_t)(0x114b6888), (ECX));
  /* 1148f030 mov dword ptr [0x114b690c], 1 */
  w32((uint32_t)(0x114b690c), (0x1u));
  /* 1148f03a mov edx, dword ptr [0x114b6888] */
  EDX = (r32((uint32_t)(0x114b6888)));
  /* 1148f040 push edx */
  push32((uint32_t)(EDX));
  /* 1148f041 call 0x1148f290 */
  push32(0x1148f046u); f_1148f290();
  /* 1148f046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f049 mov dword ptr [0x114b6b24], eax */
  w32((uint32_t)(0x114b6b24), (EAX));
  /* 1148f04e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148f055 jmp 0x1148f060 */
  goto L_1148f060;
L_1148f057:;
  /* 1148f057 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148f05a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f05d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1148f060:;
  /* 1148f060 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f064 jae 0x1148f084 */
  if (!C.cf) goto L_1148f084;
  /* 1148f066 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f069 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148f06c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148f06f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148f072 mov cx, word ptr [ecx + eax*2 + 0x114b41ac] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x114b41ac)));
  /* 1148f07a mov word ptr [edx*2 + 0x114b6900], cx */
  w16((uint32_t)(EDX*2 + 0x114b6900), (CX));
  /* 1148f082 jmp 0x1148f057 */
  goto L_1148f057;
L_1148f084:;
  /* 1148f084 call 0x1148f390 */
  push32(0x1148f089u); f_1148f390();
  /* 1148f089 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148f08b call 0x1148cad0 */
  push32(0x1148f090u); f_1148cad0();
  /* 1148f090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148f095 jmp 0x1148f220 */
  goto L_1148f220;
L_1148f09a:;
  /* 1148f09a jmp 0x1148ef45 */
  goto L_1148ef45;
L_1148f09f:;
  /* 1148f09f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1148f0a2 push edx */
  push32((uint32_t)(EDX));
  /* 1148f0a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f0a6 push eax */
  push32((uint32_t)(EAX));
  /* 1148f0a7 call dword ptr [0x114b9318] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9318))), 0x1148f0adu);
  /* 1148f0ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f0b0 jne 0x1148f1f2 */
  if (!C.zf) goto L_1148f1f2;
  /* 1148f0b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1148f0bd jmp 0x1148f0c8 */
  goto L_1148f0c8;
L_1148f0bf:;
  /* 1148f0bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f0c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f0c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1148f0c8:;
  /* 1148f0c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f0cf jae 0x1148f0dd */
  if (!C.cf) goto L_1148f0dd;
  /* 1148f0d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f0d4 mov byte ptr [edx + 0x114b6a20], 0 */
  w8((uint32_t)(EDX + 0x114b6a20), (0x0u));
  /* 1148f0db jmp 0x1148f0bf */
  goto L_1148f0bf;
L_1148f0dd:;
  /* 1148f0dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f0e0 mov dword ptr [0x114b6888], eax */
  w32((uint32_t)(0x114b6888), (EAX));
  /* 1148f0e5 mov dword ptr [0x114b6b24], 0 */
  w32((uint32_t)(0x114b6b24), (0x0u));
  /* 1148f0ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f0f3 jbe 0x1148f1ae */
  if ((C.cf||C.zf)) goto L_1148f1ae;
  /* 1148f0f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1148f0fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1148f0ff jmp 0x1148f10a */
  goto L_1148f10a;
L_1148f101:;
  /* 1148f101 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148f104 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f107 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1148f10a:;
  /* 1148f10a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148f10d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148f10f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1148f111 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148f113 je 0x1148f15c */
  if (C.zf) goto L_1148f15c;
  /* 1148f115 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148f118 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148f11a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1148f11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148f11f je 0x1148f15c */
  if (C.zf) goto L_1148f15c;
  /* 1148f121 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148f124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f126 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1148f128 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1148f12b jmp 0x1148f136 */
  goto L_1148f136;
L_1148f12d:;
  /* 1148f12d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f130 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f133 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1148f136:;
  /* 1148f136 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148f139 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f13b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1148f13e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f141 ja 0x1148f15a */
  if ((!C.cf&&!C.zf)) goto L_1148f15a;
  /* 1148f143 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f146 mov cl, byte ptr [eax + 0x114b6a21] */
  CL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 1148f14c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1148f14f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f152 mov byte ptr [edx + 0x114b6a21], cl */
  w8((uint32_t)(EDX + 0x114b6a21), (CL));
  /* 1148f158 jmp 0x1148f12d */
  goto L_1148f12d;
L_1148f15a:;
  /* 1148f15a jmp 0x1148f101 */
  goto L_1148f101;
L_1148f15c:;
  /* 1148f15c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1148f163 jmp 0x1148f16e */
  goto L_1148f16e;
L_1148f165:;
  /* 1148f165 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f168 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f16b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1148f16e:;
  /* 1148f16e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f175 jae 0x1148f18e */
  if (!C.cf) goto L_1148f18e;
  /* 1148f177 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f17a mov dl, byte ptr [ecx + 0x114b6a21] */
  DL = (r8((uint32_t)(ECX + 0x114b6a21)));
  /* 1148f180 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1148f183 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148f186 mov byte ptr [eax + 0x114b6a21], dl */
  w8((uint32_t)(EAX + 0x114b6a21), (DL));
  /* 1148f18c jmp 0x1148f165 */
  goto L_1148f165;
L_1148f18e:;
  /* 1148f18e mov ecx, dword ptr [0x114b6888] */
  ECX = (r32((uint32_t)(0x114b6888)));
  /* 1148f194 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f195 call 0x1148f290 */
  push32(0x1148f19au); f_1148f290();
  /* 1148f19a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f19d mov dword ptr [0x114b6b24], eax */
  w32((uint32_t)(0x114b6b24), (EAX));
  /* 1148f1a2 mov dword ptr [0x114b690c], 1 */
  w32((uint32_t)(0x114b690c), (0x1u));
  /* 1148f1ac jmp 0x1148f1b8 */
  goto L_1148f1b8;
L_1148f1ae:;
  /* 1148f1ae mov dword ptr [0x114b690c], 0 */
  w32((uint32_t)(0x114b690c), (0x0u));
L_1148f1b8:;
  /* 1148f1b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148f1bf jmp 0x1148f1ca */
  goto L_1148f1ca;
L_1148f1c1:;
  /* 1148f1c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148f1c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f1c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1148f1ca:;
  /* 1148f1ca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f1ce jae 0x1148f1df */
  if (!C.cf) goto L_1148f1df;
  /* 1148f1d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148f1d3 mov word ptr [eax*2 + 0x114b6900], 0 */
  w16((uint32_t)(EAX*2 + 0x114b6900), (0x0u));
  /* 1148f1dd jmp 0x1148f1c1 */
  goto L_1148f1c1;
L_1148f1df:;
  /* 1148f1df call 0x1148f390 */
  push32(0x1148f1e4u); f_1148f390();
  /* 1148f1e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148f1e6 call 0x1148cad0 */
  push32(0x1148f1ebu); f_1148cad0();
  /* 1148f1eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f1ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148f1f0 jmp 0x1148f220 */
  goto L_1148f220;
L_1148f1f2:;
  /* 1148f1f2 cmp dword ptr [0x114b66e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b66e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f1f9 je 0x1148f213 */
  if (C.zf) goto L_1148f213;
  /* 1148f1fb call 0x1148f310 */
  push32(0x1148f200u); f_1148f310();
  /* 1148f200 call 0x1148f390 */
  push32(0x1148f205u); f_1148f390();
  /* 1148f205 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148f207 call 0x1148cad0 */
  push32(0x1148f20cu); f_1148cad0();
  /* 1148f20c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f20f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148f211 jmp 0x1148f220 */
  goto L_1148f220;
L_1148f213:;
  /* 1148f213 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1148f215 call 0x1148cad0 */
  push32(0x1148f21au); f_1148cad0();
  /* 1148f21a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f21d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1148f220:;
  /* 1148f220 mov esp, ebp */
  ESP = (EBP);
  /* 1148f222 pop ebp */
  EBP = (pop32());
  /* 1148f223 ret  */
  ESPCHK(0x1148eee0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1148f230 (89 bytes, 21 insns) */
void f_1148f230(void) {
  FTRACE(0x1148f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f230 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f231 mov ebp, esp */
  EBP = (ESP);
  /* 1148f233 mov dword ptr [0x114b66e8], 0 */
  w32((uint32_t)(0x114b66e8), (0x0u));
  /* 1148f23d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f241 jne 0x1148f255 */
  if (!C.zf) goto L_1148f255;
  /* 1148f243 mov dword ptr [0x114b66e8], 1 */
  w32((uint32_t)(0x114b66e8), (0x1u));
  /* 1148f24d call dword ptr [0x114b9310] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9310))), 0x1148f253u);
  /* 1148f253 jmp 0x1148f287 */
  goto L_1148f287;
L_1148f255:;
  /* 1148f255 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f259 jne 0x1148f26d */
  if (!C.zf) goto L_1148f26d;
  /* 1148f25b mov dword ptr [0x114b66e8], 1 */
  w32((uint32_t)(0x114b66e8), (0x1u));
  /* 1148f265 call dword ptr [0x114b9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9314))), 0x1148f26bu);
  /* 1148f26b jmp 0x1148f287 */
  goto L_1148f287;
L_1148f26d:;
  /* 1148f26d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f271 jne 0x1148f284 */
  if (!C.zf) goto L_1148f284;
  /* 1148f273 mov dword ptr [0x114b66e8], 1 */
  w32((uint32_t)(0x114b66e8), (0x1u));
  /* 1148f27d mov eax, dword ptr [0x114b6714] */
  EAX = (r32((uint32_t)(0x114b6714)));
  /* 1148f282 jmp 0x1148f287 */
  goto L_1148f287;
L_1148f284:;
  /* 1148f284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1148f287:;
  /* 1148f287 pop ebp */
  EBP = (pop32());
  /* 1148f288 ret  */
  ESPCHK(0x1148f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f290 @ 0x1148f290 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1148f290(void) {
  FTRACE(0x1148f290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f290 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f291 mov ebp, esp */
  EBP = (ESP);
  /* 1148f293 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f297 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148f29a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f29d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f2a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148f2a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f2aa ja 0x1148f2da */
  if ((!C.cf&&!C.zf)) goto L_1148f2da;
  /* 1148f2ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f2af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f2b1 mov dl, byte ptr [eax + 0x1148f2f4] */
  DL = (r8((uint32_t)(EAX + 0x1148f2f4)));
  /* 1148f2b7 jmp dword ptr [edx*4 + 0x1148f2e0] */
  switch (EDX) {
    case 0: goto L_1148f2be;
    case 1: goto L_1148f2c5;
    case 2: goto L_1148f2cc;
    case 3: goto L_1148f2d3;
    case 4: goto L_1148f2da;
    default: x86_unimpl("switch@0x1148f2b7 out of table"); return;
  }
L_1148f2be:;
  /* 1148f2be mov eax, 0x411 */
  EAX = (0x411u);
  /* 1148f2c3 jmp 0x1148f2dc */
  goto L_1148f2dc;
L_1148f2c5:;
  /* 1148f2c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1148f2ca jmp 0x1148f2dc */
  goto L_1148f2dc;
L_1148f2cc:;
  /* 1148f2cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1148f2d1 jmp 0x1148f2dc */
  goto L_1148f2dc;
L_1148f2d3:;
  /* 1148f2d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1148f2d8 jmp 0x1148f2dc */
  goto L_1148f2dc;
L_1148f2da:;
  /* 1148f2da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148f2dc:;
  /* 1148f2dc mov esp, ebp */
  ESP = (EBP);
  /* 1148f2de pop ebp */
  EBP = (pop32());
  /* 1148f2df ret  */
  ESPCHK(0x1148f290u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1148f310 (116 bytes, 29 insns) */
void f_1148f310(void) {
  FTRACE(0x1148f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f311 mov ebp, esp */
  EBP = (ESP);
  /* 1148f313 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148f31b jmp 0x1148f326 */
  goto L_1148f326;
L_1148f31d:;
  /* 1148f31d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f320 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148f326:;
  /* 1148f326 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f32d jge 0x1148f33b */
  if ((C.sf==C.of)) goto L_1148f33b;
  /* 1148f32f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f332 mov byte ptr [ecx + 0x114b6a20], 0 */
  w8((uint32_t)(ECX + 0x114b6a20), (0x0u));
  /* 1148f339 jmp 0x1148f31d */
  goto L_1148f31d;
L_1148f33b:;
  /* 1148f33b mov dword ptr [0x114b6888], 0 */
  w32((uint32_t)(0x114b6888), (0x0u));
  /* 1148f345 mov dword ptr [0x114b690c], 0 */
  w32((uint32_t)(0x114b690c), (0x0u));
  /* 1148f34f mov dword ptr [0x114b6b24], 0 */
  w32((uint32_t)(0x114b6b24), (0x0u));
  /* 1148f359 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148f360 jmp 0x1148f36b */
  goto L_1148f36b;
L_1148f362:;
  /* 1148f362 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f365 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f368 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148f36b:;
  /* 1148f36b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f36f jge 0x1148f380 */
  if ((C.sf==C.of)) goto L_1148f380;
  /* 1148f371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f374 mov word ptr [eax*2 + 0x114b6900], 0 */
  w16((uint32_t)(EAX*2 + 0x114b6900), (0x0u));
  /* 1148f37e jmp 0x1148f362 */
  goto L_1148f362;
L_1148f380:;
  /* 1148f380 mov esp, ebp */
  ESP = (EBP);
  /* 1148f382 pop ebp */
  EBP = (pop32());
  /* 1148f383 ret  */
  ESPCHK(0x1148f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f390 @ 0x1148f390 (770 bytes, 175 insns) */
void f_1148f390(void) {
  FTRACE(0x1148f390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f390 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f391 mov ebp, esp */
  EBP = (ESP);
  /* 1148f393 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f399 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1148f39f push eax */
  push32((uint32_t)(EAX));
  /* 1148f3a0 mov ecx, dword ptr [0x114b6888] */
  ECX = (r32((uint32_t)(0x114b6888)));
  /* 1148f3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f3a7 call dword ptr [0x114b9318] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9318))), 0x1148f3adu);
  /* 1148f3ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f3b0 jne 0x1148f5c9 */
  if (!C.zf) goto L_1148f5c9;
  /* 1148f3b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1148f3c0 jmp 0x1148f3d1 */
  goto L_1148f3d1;
L_1148f3c2:;
  /* 1148f3c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f3c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f3cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1148f3d1:;
  /* 1148f3d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f3db jae 0x1148f3f2 */
  if (!C.cf) goto L_1148f3f2;
  /* 1148f3dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f3e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1148f3e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1148f3f0 jmp 0x1148f3c2 */
  goto L_1148f3c2;
L_1148f3f2:;
  /* 1148f3f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1148f3f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1148f3ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148f402 jmp 0x1148f40d */
  goto L_1148f40d;
L_1148f404:;
  /* 1148f404 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f407 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f40a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148f40d:;
  /* 1148f40d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f410 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f412 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1148f414 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148f416 je 0x1148f458 */
  if (C.zf) goto L_1148f458;
  /* 1148f418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f41b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148f41d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1148f41f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1148f425 jmp 0x1148f436 */
  goto L_1148f436;
L_1148f427:;
  /* 1148f427 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f42d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f430 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1148f436:;
  /* 1148f436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148f439 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148f43b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1148f43e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f444 ja 0x1148f456 */
  if ((!C.cf&&!C.zf)) goto L_1148f456;
  /* 1148f446 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f44c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1148f454 jmp 0x1148f427 */
  goto L_1148f427;
L_1148f456:;
  /* 1148f456 jmp 0x1148f404 */
  goto L_1148f404;
L_1148f458:;
  /* 1148f458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148f45a mov eax, dword ptr [0x114b6b24] */
  EAX = (r32((uint32_t)(0x114b6b24)));
  /* 1148f45f push eax */
  push32((uint32_t)(EAX));
  /* 1148f460 mov ecx, dword ptr [0x114b6888] */
  ECX = (r32((uint32_t)(0x114b6888)));
  /* 1148f466 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f467 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1148f46d push edx */
  push32((uint32_t)(EDX));
  /* 1148f46e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148f473 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1148f479 push eax */
  push32((uint32_t)(EAX));
  /* 1148f47a push 1 */
  push32((uint32_t)(0x1u));
  /* 1148f47c call 0x1148faf0 */
  push32(0x1148f481u); f_1148faf0();
  /* 1148f481 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f484 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148f486 mov ecx, dword ptr [0x114b6888] */
  ECX = (r32((uint32_t)(0x114b6888)));
  /* 1148f48c push ecx */
  push32((uint32_t)(ECX));
  /* 1148f48d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148f492 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1148f498 push edx */
  push32((uint32_t)(EDX));
  /* 1148f499 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148f49e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1148f4a4 push eax */
  push32((uint32_t)(EAX));
  /* 1148f4a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148f4aa mov ecx, dword ptr [0x114b6b24] */
  ECX = (r32((uint32_t)(0x114b6b24)));
  /* 1148f4b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f4b1 call 0x11490700 */
  push32(0x1148f4b6u); f_11490700();
  /* 1148f4b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f4b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148f4bb mov edx, dword ptr [0x114b6888] */
  EDX = (r32((uint32_t)(0x114b6888)));
  /* 1148f4c1 push edx */
  push32((uint32_t)(EDX));
  /* 1148f4c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148f4c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1148f4cd push eax */
  push32((uint32_t)(EAX));
  /* 1148f4ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148f4d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1148f4d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1148f4da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1148f4df mov edx, dword ptr [0x114b6b24] */
  EDX = (r32((uint32_t)(0x114b6b24)));
  /* 1148f4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1148f4e6 call 0x11490700 */
  push32(0x1148f4ebu); f_11490700();
  /* 1148f4eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f4ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1148f4f8 jmp 0x1148f509 */
  goto L_1148f509;
L_1148f4fa:;
  /* 1148f4fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f500 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f503 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1148f509:;
  /* 1148f509 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f513 jae 0x1148f5c4 */
  if (!C.cf) goto L_1148f5c4;
  /* 1148f519 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f51f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f521 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1148f529 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1148f52c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148f52e je 0x1148f566 */
  if (C.zf) goto L_1148f566;
  /* 1148f530 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f536 mov cl, byte ptr [eax + 0x114b6a21] */
  CL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 1148f53c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1148f53f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f545 mov byte ptr [edx + 0x114b6a21], cl */
  w8((uint32_t)(EDX + 0x114b6a21), (CL));
  /* 1148f54b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f551 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f557 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1148f55e mov byte ptr [eax + 0x114b6920], dl */
  w8((uint32_t)(EAX + 0x114b6920), (DL));
  /* 1148f564 jmp 0x1148f5bf */
  goto L_1148f5bf;
L_1148f566:;
  /* 1148f566 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f56c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148f56e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1148f576 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1148f579 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148f57b je 0x1148f5b2 */
  if (C.zf) goto L_1148f5b2;
  /* 1148f57d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f583 mov al, byte ptr [edx + 0x114b6a21] */
  AL = (r8((uint32_t)(EDX + 0x114b6a21)));
  /* 1148f589 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1148f58b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f591 mov byte ptr [ecx + 0x114b6a21], al */
  w8((uint32_t)(ECX + 0x114b6a21), (AL));
  /* 1148f597 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f59d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f5a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1148f5aa mov byte ptr [edx + 0x114b6920], cl */
  w8((uint32_t)(EDX + 0x114b6920), (CL));
  /* 1148f5b0 jmp 0x1148f5bf */
  goto L_1148f5bf;
L_1148f5b2:;
  /* 1148f5b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f5b8 mov byte ptr [edx + 0x114b6920], 0 */
  w8((uint32_t)(EDX + 0x114b6920), (0x0u));
L_1148f5bf:;
  /* 1148f5bf jmp 0x1148f4fa */
  goto L_1148f4fa;
L_1148f5c4:;
  /* 1148f5c4 jmp 0x1148f68e */
  goto L_1148f68e;
L_1148f5c9:;
  /* 1148f5c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1148f5d3 jmp 0x1148f5e4 */
  goto L_1148f5e4;
L_1148f5d5:;
  /* 1148f5d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f5db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f5de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1148f5e4:;
  /* 1148f5e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f5ee jae 0x1148f68e */
  if (!C.cf) goto L_1148f68e;
  /* 1148f5f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f5fb jb 0x1148f638 */
  if (C.cf) goto L_1148f638;
  /* 1148f5fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f604 ja 0x1148f638 */
  if ((!C.cf&&!C.zf)) goto L_1148f638;
  /* 1148f606 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f60c mov dl, byte ptr [ecx + 0x114b6a21] */
  DL = (r8((uint32_t)(ECX + 0x114b6a21)));
  /* 1148f612 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1148f615 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f61b mov byte ptr [eax + 0x114b6a21], dl */
  w8((uint32_t)(EAX + 0x114b6a21), (DL));
  /* 1148f621 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f627 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f62a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f630 mov byte ptr [edx + 0x114b6920], cl */
  w8((uint32_t)(EDX + 0x114b6920), (CL));
  /* 1148f636 jmp 0x1148f689 */
  goto L_1148f689;
L_1148f638:;
  /* 1148f638 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f63f jb 0x1148f67c */
  if (C.cf) goto L_1148f67c;
  /* 1148f641 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f648 ja 0x1148f67c */
  if ((!C.cf&&!C.zf)) goto L_1148f67c;
  /* 1148f64a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f650 mov cl, byte ptr [eax + 0x114b6a21] */
  CL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 1148f656 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1148f659 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f65f mov byte ptr [edx + 0x114b6a21], cl */
  w8((uint32_t)(EDX + 0x114b6a21), (CL));
  /* 1148f665 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f66b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f66e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f674 mov byte ptr [ecx + 0x114b6920], al */
  w8((uint32_t)(ECX + 0x114b6920), (AL));
  /* 1148f67a jmp 0x1148f689 */
  goto L_1148f689;
L_1148f67c:;
  /* 1148f67c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1148f682 mov byte ptr [edx + 0x114b6920], 0 */
  w8((uint32_t)(EDX + 0x114b6920), (0x0u));
L_1148f689:;
  /* 1148f689 jmp 0x1148f5d5 */
  goto L_1148f5d5;
L_1148f68e:;
  /* 1148f68e mov esp, ebp */
  ESP = (EBP);
  /* 1148f690 pop ebp */
  EBP = (pop32());
  /* 1148f691 ret  */
  ESPCHK(0x1148f390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6a0 @ 0x1148f6a0 (23 bytes, 9 insns) */
void f_1148f6a0(void) {
  FTRACE(0x1148f6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1148f6a3 cmp dword ptr [0x114b690c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b690c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f6aa je 0x1148f6b3 */
  if (C.zf) goto L_1148f6b3;
  /* 1148f6ac mov eax, dword ptr [0x114b6888] */
  EAX = (r32((uint32_t)(0x114b6888)));
  /* 1148f6b1 jmp 0x1148f6b5 */
  goto L_1148f6b5;
L_1148f6b3:;
  /* 1148f6b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148f6b5:;
  /* 1148f6b5 pop ebp */
  EBP = (pop32());
  /* 1148f6b6 ret  */
  ESPCHK(0x1148f6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x1148f6c0 (34 bytes, 10 insns) */
void f_1148f6c0(void) {
  FTRACE(0x1148f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1148f6c3 cmp dword ptr [0x114b8010], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b8010))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f6ca jne 0x1148f6e0 */
  if (!C.zf) goto L_1148f6e0;
  /* 1148f6cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1148f6ce call 0x1148eee0 */
  push32(0x1148f6d3u); f_1148eee0();
  /* 1148f6d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f6d6 mov dword ptr [0x114b8010], 1 */
  w32((uint32_t)(0x114b8010), (0x1u));
L_1148f6e0:;
  /* 1148f6e0 pop ebp */
  EBP = (pop32());
  /* 1148f6e1 ret  */
  ESPCHK(0x1148f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x1148f6f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1148f6f0(void) {
  FTRACE(0x1148f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1148f6f3 push edi */
  push32((uint32_t)(EDI));
  /* 1148f6f4 push esi */
  push32((uint32_t)(ESI));
  /* 1148f6f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1148f6f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148f6fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f6fe mov eax, ecx */
  EAX = (ECX);
  /* 1148f700 mov edx, ecx */
  EDX = (ECX);
  /* 1148f702 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f704 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f706 jbe 0x1148f710 */
  if ((C.cf||C.zf)) goto L_1148f710;
  /* 1148f708 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f70a jb 0x1148f888 */
  if (C.cf) goto L_1148f888;
L_1148f710:;
  /* 1148f710 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1148f716 jne 0x1148f72c */
  if (!C.zf) goto L_1148f72c;
  /* 1148f718 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f71b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1148f71e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f721 jb 0x1148f74c */
  if (C.cf) goto L_1148f74c;
  /* 1148f723 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f725 jmp dword ptr [edx*4 + 0x1148f838] */
  switch (EDX) {
    case 0: goto L_1148f848;
    case 1: goto L_1148f850;
    case 2: goto L_1148f85c;
    case 3: goto L_1148f870;
    default: x86_unimpl("switch@0x1148f725 out of table"); return;
  }
L_1148f72c:;
  /* 1148f72c mov eax, edi */
  EAX = (EDI);
  /* 1148f72e mov edx, 3 */
  EDX = (0x3u);
  /* 1148f733 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f736 jb 0x1148f744 */
  if (C.cf) goto L_1148f744;
  /* 1148f738 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1148f73b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f73d jmp dword ptr [eax*4 + 0x1148f750] */
  switch (EAX) {
    case 1: goto L_1148f760;
    case 2: goto L_1148f78c;
    case 3: goto L_1148f7b0;
    default: x86_unimpl("switch@0x1148f73d out of table"); return;
  }
L_1148f744:;
  /* 1148f744 jmp dword ptr [ecx*4 + 0x1148f848] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1148f848)))); return;
  /* 1148f74b nop  */
  /* nop */
L_1148f74c:;
  /* 1148f74c jmp dword ptr [ecx*4 + 0x1148f7cc] */
  switch (ECX) {
    case 0: goto L_1148f82f;
    case 1: goto L_1148f81c;
    case 2: goto L_1148f814;
    case 3: goto L_1148f80c;
    case 4: goto L_1148f804;
    case 5: goto L_1148f7fc;
    case 6: goto L_1148f7f4;
    case 7: goto L_1148f7ec;
    default: x86_unimpl("switch@0x1148f74c out of table"); return;
  }
  /* 1148f753 nop  */
  /* nop */
L_1148f760:;
  /* 1148f760 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f762 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148f764 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148f766 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148f769 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148f76c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148f76f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f772 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148f775 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f778 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f77b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f77e jb 0x1148f74c */
  if (C.cf) goto L_1148f74c;
  /* 1148f780 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f782 jmp dword ptr [edx*4 + 0x1148f838] */
  switch (EDX) {
    case 0: goto L_1148f848;
    case 1: goto L_1148f850;
    case 2: goto L_1148f85c;
    case 3: goto L_1148f870;
    default: x86_unimpl("switch@0x1148f782 out of table"); return;
  }
  /* 1148f789 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148f78c:;
  /* 1148f78c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f78e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148f790 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148f792 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148f795 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f798 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148f79b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f79e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f7a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f7a4 jb 0x1148f74c */
  if (C.cf) goto L_1148f74c;
  /* 1148f7a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f7a8 jmp dword ptr [edx*4 + 0x1148f838] */
  switch (EDX) {
    case 0: goto L_1148f848;
    case 1: goto L_1148f850;
    case 2: goto L_1148f85c;
    case 3: goto L_1148f870;
    default: x86_unimpl("switch@0x1148f7a8 out of table"); return;
  }
  /* 1148f7af nop  */
  /* nop */
L_1148f7b0:;
  /* 1148f7b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f7b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148f7b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148f7b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1148f7b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f7ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148f7bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f7be jb 0x1148f74c */
  if (C.cf) goto L_1148f74c;
  /* 1148f7c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f7c2 jmp dword ptr [edx*4 + 0x1148f838] */
  switch (EDX) {
    case 0: goto L_1148f848;
    case 1: goto L_1148f850;
    case 2: goto L_1148f85c;
    case 3: goto L_1148f870;
    default: x86_unimpl("switch@0x1148f7c2 out of table"); return;
  }
  /* 1148f7c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148f7ec:;
  /* 1148f7ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1148f7f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1148f7f4:;
  /* 1148f7f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1148f7f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1148f7fc:;
  /* 1148f7fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1148f800 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1148f804:;
  /* 1148f804 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1148f808 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1148f80c:;
  /* 1148f80c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1148f810 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1148f814:;
  /* 1148f814 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1148f818 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1148f81c:;
  /* 1148f81c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1148f820 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1148f824 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1148f82b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f82d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1148f82f:;
  /* 1148f82f jmp dword ptr [edx*4 + 0x1148f838] */
  switch (EDX) {
    case 0: goto L_1148f848;
    case 1: goto L_1148f850;
    case 2: goto L_1148f85c;
    case 3: goto L_1148f870;
    default: x86_unimpl("switch@0x1148f82f out of table"); return;
  }
  /* 1148f836 mov edi, edi */
  EDI = (EDI);
L_1148f848:;
  /* 1148f848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f84b pop esi */
  ESI = (pop32());
  /* 1148f84c pop edi */
  EDI = (pop32());
  /* 1148f84d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148f84e ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148f84f nop  */
  /* nop */
L_1148f850:;
  /* 1148f850 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148f852 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148f854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f857 pop esi */
  ESI = (pop32());
  /* 1148f858 pop edi */
  EDI = (pop32());
  /* 1148f859 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148f85a ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148f85b nop  */
  /* nop */
L_1148f85c:;
  /* 1148f85c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148f85e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148f860 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148f863 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148f866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f869 pop esi */
  ESI = (pop32());
  /* 1148f86a pop edi */
  EDI = (pop32());
  /* 1148f86b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148f86c ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148f86d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148f870:;
  /* 1148f870 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148f872 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148f874 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148f877 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148f87a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148f87d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148f880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f883 pop esi */
  ESI = (pop32());
  /* 1148f884 pop edi */
  EDI = (pop32());
  /* 1148f885 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148f886 ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148f887 nop  */
  /* nop */
L_1148f888:;
  /* 1148f888 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1148f88c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1148f890 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1148f896 jne 0x1148f8bc */
  if (!C.zf) goto L_1148f8bc;
  /* 1148f898 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f89b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1148f89e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f8a1 jb 0x1148f8b0 */
  if (C.cf) goto L_1148f8b0;
  /* 1148f8a3 std  */
  C.df=1;
  /* 1148f8a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f8a6 cld  */
  C.df=0;
  /* 1148f8a7 jmp dword ptr [edx*4 + 0x1148f9d0] */
  switch (EDX) {
    case 0: goto L_1148f9e0;
    case 1: goto L_1148f9e8;
    case 2: goto L_1148f9f8;
    case 3: goto L_1148fa0c;
    default: x86_unimpl("switch@0x1148f8a7 out of table"); return;
  }
  /* 1148f8ae mov edi, edi */
  EDI = (EDI);
L_1148f8b0:;
  /* 1148f8b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148f8b2 jmp dword ptr [ecx*4 + 0x1148f980] */
  switch (ECX) {
    case 0: goto L_1148f9c7;
    default: x86_unimpl("switch@0x1148f8b2 out of table"); return;
  }
  /* 1148f8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148f8bc:;
  /* 1148f8bc mov eax, edi */
  EAX = (EDI);
  /* 1148f8be mov edx, 3 */
  EDX = (0x3u);
  /* 1148f8c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f8c6 jb 0x1148f8d4 */
  if (C.cf) goto L_1148f8d4;
  /* 1148f8c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1148f8cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f8cd jmp dword ptr [eax*4 + 0x1148f8d8] */
  switch (EAX) {
    case 1: goto L_1148f8e8;
    case 2: goto L_1148f908;
    case 3: goto L_1148f930;
    default: x86_unimpl("switch@0x1148f8cd out of table"); return;
  }
L_1148f8d4:;
  /* 1148f8d4 jmp dword ptr [ecx*4 + 0x1148f9d0] */
  switch (ECX) {
    case 0: goto L_1148f9e0;
    case 1: goto L_1148f9e8;
    case 2: goto L_1148f9f8;
    case 3: goto L_1148fa0c;
    default: x86_unimpl("switch@0x1148f8d4 out of table"); return;
  }
  /* 1148f8db nop  */
  /* nop */
L_1148f8e8:;
  /* 1148f8e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148f8eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f8ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148f8f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1148f8f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f8f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1148f8f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f8f8 jb 0x1148f8b0 */
  if (C.cf) goto L_1148f8b0;
  /* 1148f8fa std  */
  C.df=1;
  /* 1148f8fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f8fd cld  */
  C.df=0;
  /* 1148f8fe jmp dword ptr [edx*4 + 0x1148f9d0] */
  switch (EDX) {
    case 0: goto L_1148f9e0;
    case 1: goto L_1148f9e8;
    case 2: goto L_1148f9f8;
    case 3: goto L_1148fa0c;
    default: x86_unimpl("switch@0x1148f8fe out of table"); return;
  }
  /* 1148f905 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148f908:;
  /* 1148f908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148f90b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f90d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148f910 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148f913 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f916 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148f919 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f91c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f91f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f922 jb 0x1148f8b0 */
  if (C.cf) goto L_1148f8b0;
  /* 1148f924 std  */
  C.df=1;
  /* 1148f925 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f927 cld  */
  C.df=0;
  /* 1148f928 jmp dword ptr [edx*4 + 0x1148f9d0] */
  switch (EDX) {
    case 0: goto L_1148f9e0;
    case 1: goto L_1148f9e8;
    case 2: goto L_1148f9f8;
    case 3: goto L_1148fa0c;
    default: x86_unimpl("switch@0x1148f928 out of table"); return;
  }
  /* 1148f92f nop  */
  /* nop */
L_1148f930:;
  /* 1148f930 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148f933 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148f935 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148f938 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148f93b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148f93e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148f941 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148f944 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148f947 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f94a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148f94d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148f950 jb 0x1148f8b0 */
  if (C.cf) goto L_1148f8b0;
  /* 1148f956 std  */
  C.df=1;
  /* 1148f957 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148f959 cld  */
  C.df=0;
  /* 1148f95a jmp dword ptr [edx*4 + 0x1148f9d0] */
  switch (EDX) {
    case 0: goto L_1148f9e0;
    case 1: goto L_1148f9e8;
    case 2: goto L_1148f9f8;
    case 3: goto L_1148fa0c;
    default: x86_unimpl("switch@0x1148f95a out of table"); return;
  }
  /* 1148f961 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1148f964 test cl, bh */
  { uint32_t _r=(CL)&(C.b.b.h); fl_logic(_r,8); }
  /* 1148f966 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148f967 adc dword ptr [ecx + edi*8 - 0x66beeb8], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8 + -0x66beeb8))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8 + -0x66beeb8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1148f96e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148f96f adc dword ptr [ecx + edi*8 - 0x65beeb8], ebx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8 + -0x65beeb8))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8 + -0x65beeb8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1148f976 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148f977 adc dword ptr [ecx + edi*8 - 0x64beeb8], ebp */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8 + -0x64beeb8))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8 + -0x64beeb8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1148f97e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148f984 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1148f988 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1148f98c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1148f990 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1148f994 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1148f998 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1148f99c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1148f9a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1148f9a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1148f9a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1148f9ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1148f9b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1148f9b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1148f9b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1148f9bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1148f9c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148f9c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1148f9c7:;
  /* 1148f9c7 jmp dword ptr [edx*4 + 0x1148f9d0] */
  switch (EDX) {
    case 0: goto L_1148f9e0;
    case 1: goto L_1148f9e8;
    case 2: goto L_1148f9f8;
    case 3: goto L_1148fa0c;
    default: x86_unimpl("switch@0x1148f9c7 out of table"); return;
  }
  /* 1148f9ce mov edi, edi */
  EDI = (EDI);
L_1148f9e0:;
  /* 1148f9e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f9e3 pop esi */
  ESI = (pop32());
  /* 1148f9e4 pop edi */
  EDI = (pop32());
  /* 1148f9e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148f9e6 ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148f9e7 nop  */
  /* nop */
L_1148f9e8:;
  /* 1148f9e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148f9eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148f9ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148f9f1 pop esi */
  ESI = (pop32());
  /* 1148f9f2 pop edi */
  EDI = (pop32());
  /* 1148f9f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148f9f4 ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148f9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148f9f8:;
  /* 1148f9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148f9fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148f9fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148fa01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148fa04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fa07 pop esi */
  ESI = (pop32());
  /* 1148fa08 pop edi */
  EDI = (pop32());
  /* 1148fa09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148fa0a ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
  /* 1148fa0b nop  */
  /* nop */
L_1148fa0c:;
  /* 1148fa0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148fa0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148fa12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148fa15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148fa18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148fa1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148fa1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fa21 pop esi */
  ESI = (pop32());
  /* 1148fa22 pop edi */
  EDI = (pop32());
  /* 1148fa23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148fa24 ret  */
  ESPCHK(0x1148f6f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1148fa30 (145 bytes, 42 insns) */
void f_1148fa30(void) {
  FTRACE(0x1148fa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148fa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1148fa31 mov ebp, esp */
  EBP = (ESP);
  /* 1148fa33 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fa34 call 0x1148fae0 */
  push32(0x1148fa39u); f_1148fae0();
  /* 1148fa39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fa3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148fa3e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148fa45 jmp 0x1148fa50 */
  goto L_1148fa50;
L_1148fa47:;
  /* 1148fa47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148fa4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fa4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148fa50:;
  /* 1148fa50 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fa54 jae 0x1148fa7a */
  if (!C.cf) goto L_1148fa7a;
  /* 1148fa56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148fa59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fa5c cmp ecx, dword ptr [eax*8 + 0x114b42a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114b42a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fa63 jne 0x1148fa78 */
  if (!C.zf) goto L_1148fa78;
  /* 1148fa65 call 0x1148fad0 */
  push32(0x1148fa6au); f_1148fad0();
  /* 1148fa6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148fa6d mov ecx, dword ptr [edx*8 + 0x114b42a4] */
  ECX = (r32((uint32_t)(EDX*8 + 0x114b42a4)));
  /* 1148fa74 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148fa76 jmp 0x1148fabd */
  goto L_1148fabd;
L_1148fa78:;
  /* 1148fa78 jmp 0x1148fa47 */
  goto L_1148fa47;
L_1148fa7a:;
  /* 1148fa7a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fa7e jb 0x1148fa93 */
  if (C.cf) goto L_1148fa93;
  /* 1148fa80 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fa84 ja 0x1148fa93 */
  if ((!C.cf&&!C.zf)) goto L_1148fa93;
  /* 1148fa86 call 0x1148fad0 */
  push32(0x1148fa8bu); f_1148fad0();
  /* 1148fa8b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1148fa91 jmp 0x1148fabd */
  goto L_1148fabd;
L_1148fa93:;
  /* 1148fa93 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fa9a jb 0x1148fab2 */
  if (C.cf) goto L_1148fab2;
  /* 1148fa9c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148faa3 ja 0x1148fab2 */
  if ((!C.cf&&!C.zf)) goto L_1148fab2;
  /* 1148faa5 call 0x1148fad0 */
  push32(0x1148faaau); f_1148fad0();
  /* 1148faaa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1148fab0 jmp 0x1148fabd */
  goto L_1148fabd;
L_1148fab2:;
  /* 1148fab2 call 0x1148fad0 */
  push32(0x1148fab7u); f_1148fad0();
  /* 1148fab7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1148fabd:;
  /* 1148fabd mov esp, ebp */
  ESP = (EBP);
  /* 1148fabf pop ebp */
  EBP = (pop32());
  /* 1148fac0 ret  */
  ESPCHK(0x1148fa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x1148fad0 (13 bytes, 6 insns) */
void f_1148fad0(void) {
  FTRACE(0x1148fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148fad1 mov ebp, esp */
  EBP = (ESP);
  /* 1148fad3 call 0x11486b00 */
  push32(0x1148fad8u); f_11486b00();
  /* 1148fad8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fadb pop ebp */
  EBP = (pop32());
  /* 1148fadc ret  */
  ESPCHK(0x1148fad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x1148fae0 (13 bytes, 6 insns) */
void f_1148fae0(void) {
  FTRACE(0x1148fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148fae1 mov ebp, esp */
  EBP = (ESP);
  /* 1148fae3 call 0x11486b00 */
  push32(0x1148fae8u); f_11486b00();
  /* 1148fae8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148faeb pop ebp */
  EBP = (pop32());
  /* 1148faec ret  */
  ESPCHK(0x1148fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x1148faf0 (421 bytes, 148 insns) */
void f_1148faf0(void) {
  FTRACE(0x1148faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148faf1 mov ebp, esp */
  EBP = (ESP);
  /* 1148faf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1148faf5 push 0x114b1238 */
  push32((uint32_t)(0x114b1238u));
  /* 1148fafa push 0x11492858 */
  push32((uint32_t)(0x11492858u));
  /* 1148faff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1148fb05 push eax */
  push32((uint32_t)(EAX));
  /* 1148fb06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1148fb0d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fb10 push ebx */
  push32((uint32_t)(EBX));
  /* 1148fb11 push esi */
  push32((uint32_t)(ESI));
  /* 1148fb12 push edi */
  push32((uint32_t)(EDI));
  /* 1148fb13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1148fb16 cmp dword ptr [0x114b66ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b66ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fb1d jne 0x1148fb6e */
  if (!C.zf) goto L_1148fb6e;
  /* 1148fb1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1148fb22 push eax */
  push32((uint32_t)(EAX));
  /* 1148fb23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148fb25 push 0x114b1234 */
  push32((uint32_t)(0x114b1234u));
  /* 1148fb2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1148fb2c call dword ptr [0x114b9304] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9304))), 0x1148fb32u);
  /* 1148fb32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148fb34 je 0x1148fb42 */
  if (C.zf) goto L_1148fb42;
  /* 1148fb36 mov dword ptr [0x114b66ec], 1 */
  w32((uint32_t)(0x114b66ec), (0x1u));
  /* 1148fb40 jmp 0x1148fb6e */
  goto L_1148fb6e;
L_1148fb42:;
  /* 1148fb42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1148fb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fb46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148fb48 push 0x114b1230 */
  push32((uint32_t)(0x114b1230u));
  /* 1148fb4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1148fb4f push 0 */
  push32((uint32_t)(0x0u));
  /* 1148fb51 call dword ptr [0x114b9308] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9308))), 0x1148fb57u);
  /* 1148fb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148fb59 je 0x1148fb67 */
  if (C.zf) goto L_1148fb67;
  /* 1148fb5b mov dword ptr [0x114b66ec], 2 */
  w32((uint32_t)(0x114b66ec), (0x2u));
  /* 1148fb65 jmp 0x1148fb6e */
  goto L_1148fb6e;
L_1148fb67:;
  /* 1148fb67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fb69 jmp 0x1148fc98 */
  goto L_1148fc98;
L_1148fb6e:;
  /* 1148fb6e cmp dword ptr [0x114b66ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b66ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fb75 jne 0x1148fba5 */
  if (!C.zf) goto L_1148fba5;
  /* 1148fb77 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fb7b jne 0x1148fb86 */
  if (!C.zf) goto L_1148fb86;
  /* 1148fb7d mov edx, dword ptr [0x114b6704] */
  EDX = (r32((uint32_t)(0x114b6704)));
  /* 1148fb83 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1148fb86:;
  /* 1148fb86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148fb89 push eax */
  push32((uint32_t)(EAX));
  /* 1148fb8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148fb8d push ecx */
  push32((uint32_t)(ECX));
  /* 1148fb8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fb91 push edx */
  push32((uint32_t)(EDX));
  /* 1148fb92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fb95 push eax */
  push32((uint32_t)(EAX));
  /* 1148fb96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1148fb99 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fb9a call dword ptr [0x114b9308] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9308))), 0x1148fba0u);
  /* 1148fba0 jmp 0x1148fc98 */
  goto L_1148fc98;
L_1148fba5:;
  /* 1148fba5 cmp dword ptr [0x114b66ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b66ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fbac jne 0x1148fc96 */
  if (!C.zf) goto L_1148fc96;
  /* 1148fbb2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fbb6 jne 0x1148fbc1 */
  if (!C.zf) goto L_1148fbc1;
  /* 1148fbb8 mov edx, dword ptr [0x114b6714] */
  EDX = (r32((uint32_t)(0x114b6714)));
  /* 1148fbbe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1148fbc1:;
  /* 1148fbc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148fbc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148fbc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148fbc8 push eax */
  push32((uint32_t)(EAX));
  /* 1148fbc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fbcc push ecx */
  push32((uint32_t)(ECX));
  /* 1148fbcd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1148fbd0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148fbd2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148fbd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1148fbd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fbda push edx */
  push32((uint32_t)(EDX));
  /* 1148fbdb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148fbde push eax */
  push32((uint32_t)(EAX));
  /* 1148fbdf call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x1148fbe5u);
  /* 1148fbe5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1148fbe8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fbec jne 0x1148fbf5 */
  if (!C.zf) goto L_1148fbf5;
  /* 1148fbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fbf0 jmp 0x1148fc98 */
  goto L_1148fc98;
L_1148fbf5:;
  /* 1148fbf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148fbfc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148fbff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1148fc01 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fc04 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1148fc06 call 0x1148a260 */
  push32(0x1148fc0bu); f_1148a260();
  /* 1148fc0b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1148fc0e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1148fc11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148fc14 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1148fc17 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148fc1a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1148fc1c push edx */
  push32((uint32_t)(EDX));
  /* 1148fc1d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148fc1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148fc22 push eax */
  push32((uint32_t)(EAX));
  /* 1148fc23 call 0x1148bbf0 */
  push32(0x1148fc28u); f_1148bbf0();
  /* 1148fc28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fc2b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1148fc32 jmp 0x1148fc4b */
  goto L_1148fc4b;
  /* 1148fc34 mov eax, 1 */
  EAX = (0x1u);
  /* 1148fc39 ret  */
  ESPCHK(0x1148faf0u, _esp0);
  ESP += 4; return;
  /* 1148fc3a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1148fc3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1148fc44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1148fc4b:;
  /* 1148fc4b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fc4f jne 0x1148fc55 */
  if (!C.zf) goto L_1148fc55;
  /* 1148fc51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fc53 jmp 0x1148fc98 */
  goto L_1148fc98;
L_1148fc55:;
  /* 1148fc55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148fc58 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fc59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148fc5c push edx */
  push32((uint32_t)(EDX));
  /* 1148fc5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148fc60 push eax */
  push32((uint32_t)(EAX));
  /* 1148fc61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fc64 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fc65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148fc67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148fc6a push edx */
  push32((uint32_t)(EDX));
  /* 1148fc6b call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x1148fc71u);
  /* 1148fc71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1148fc74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fc78 jne 0x1148fc7e */
  if (!C.zf) goto L_1148fc7e;
  /* 1148fc7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fc7c jmp 0x1148fc98 */
  goto L_1148fc98;
L_1148fc7e:;
  /* 1148fc7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148fc81 push eax */
  push32((uint32_t)(EAX));
  /* 1148fc82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148fc85 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fc86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148fc89 push edx */
  push32((uint32_t)(EDX));
  /* 1148fc8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fc8d push eax */
  push32((uint32_t)(EAX));
  /* 1148fc8e call dword ptr [0x114b9304] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9304))), 0x1148fc94u);
  /* 1148fc94 jmp 0x1148fc98 */
  goto L_1148fc98;
L_1148fc96:;
  /* 1148fc96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148fc98:;
  /* 1148fc98 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1148fc9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148fc9e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1148fca5 pop edi */
  EDI = (pop32());
  /* 1148fca6 pop esi */
  ESI = (pop32());
  /* 1148fca7 pop ebx */
  EBX = (pop32());
  /* 1148fca8 mov esp, ebp */
  ESP = (EBP);
  /* 1148fcaa pop ebp */
  EBP = (pop32());
  /* 1148fcab ret  */
  ESPCHK(0x1148faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcb0 @ 0x1148fcb0 (1007 bytes, 269 insns) */
void f_1148fcb0(void) {
  FTRACE(0x1148fcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148fcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148fcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1148fcb3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148fcb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fcbd jl 0x1148fcc5 */
  if ((C.sf!=C.of)) goto L_1148fcc5;
  /* 1148fcbf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fcc3 jle 0x1148fccc */
  if ((C.zf||C.sf!=C.of)) goto L_1148fccc;
L_1148fcc5:;
  /* 1148fcc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fcc7 jmp 0x1149009b */
  goto L_1149009b;
L_1148fccc:;
  /* 1148fccc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148fcce call 0x1148ca30 */
  push32(0x1148fcd3u); f_1148ca30();
  /* 1148fcd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fcd6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1148fcdd mov eax, dword ptr [0x114b6874] */
  EAX = (r32((uint32_t)(0x114b6874)));
  /* 1148fce2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fce5 mov dword ptr [0x114b6874], eax */
  w32((uint32_t)(0x114b6874), (EAX));
L_1148fcea:;
  /* 1148fcea cmp dword ptr [0x114b6884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fcf1 je 0x1148fcfd */
  if (C.zf) goto L_1148fcfd;
  /* 1148fcf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148fcf5 call dword ptr [0x114b9300] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9300))), 0x1148fcfbu);
  /* 1148fcfb jmp 0x1148fcea */
  goto L_1148fcea;
L_1148fcfd:;
  /* 1148fcfd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fd01 je 0x1148fd41 */
  if (C.zf) goto L_1148fd41;
  /* 1148fd03 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fd07 je 0x1148fd21 */
  if (C.zf) goto L_1148fd21;
  /* 1148fd09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fd0c push ecx */
  push32((uint32_t)(ECX));
  /* 1148fd0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fd10 push edx */
  push32((uint32_t)(EDX));
  /* 1148fd11 call 0x114900a0 */
  push32(0x1148fd16u); f_114900a0();
  /* 1148fd16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fd19 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1148fd1f jmp 0x1148fd33 */
  goto L_1148fd33;
L_1148fd21:;
  /* 1148fd21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148fd24 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148fd27 mov ecx, dword ptr [eax + 0x114b451c] */
  ECX = (r32((uint32_t)(EAX + 0x114b451c)));
  /* 1148fd2d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1148fd33:;
  /* 1148fd33 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1148fd39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148fd3c jmp 0x1149007b */
  goto L_1149007b;
L_1148fd41:;
  /* 1148fd41 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1148fd48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148fd4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fd53 je 0x11490073 */
  if (C.zf) goto L_11490073;
  /* 1148fd59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fd5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148fd5f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fd62 jne 0x1148ff84 */
  if (!C.zf) goto L_1148ff84;
  /* 1148fd68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fd6b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1148fd6f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fd72 jne 0x1148ff84 */
  if (!C.zf) goto L_1148ff84;
  /* 1148fd78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fd7b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1148fd7f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fd82 jne 0x1148ff84 */
  if (!C.zf) goto L_1148ff84;
  /* 1148fd88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148fd8b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1148fd91:;
  /* 1148fd91 push 0x114b1288 */
  push32((uint32_t)(0x114b1288u));
  /* 1148fd96 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1148fd9c push ecx */
  push32((uint32_t)(ECX));
  /* 1148fd9d call 0x11493f00 */
  push32(0x1148fda2u); f_11493f00();
  /* 1148fda2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fda5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1148fdab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fdb2 je 0x1148fddd */
  if (C.zf) goto L_1148fddd;
  /* 1148fdb4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148fdba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148fdc0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1148fdc6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fdcd je 0x1148fddd */
  if (C.zf) goto L_1148fddd;
  /* 1148fdcf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148fdd5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148fdd8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fddb jne 0x1148fe03 */
  if (!C.zf) goto L_1148fe03;
L_1148fddd:;
  /* 1148fddd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fde1 je 0x1148fdfc */
  if (C.zf) goto L_1148fdfc;
  /* 1148fde3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148fde5 call 0x1148cad0 */
  push32(0x1148fdeau); f_1148cad0();
  /* 1148fdea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fded mov edx, dword ptr [0x114b6874] */
  EDX = (r32((uint32_t)(0x114b6874)));
  /* 1148fdf3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148fdf6 mov dword ptr [0x114b6874], edx */
  w32((uint32_t)(0x114b6874), (EDX));
L_1148fdfc:;
  /* 1148fdfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fdfe jmp 0x1149009b */
  goto L_1149009b;
L_1148fe03:;
  /* 1148fe03 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1148fe0a jmp 0x1148fe15 */
  goto L_1148fe15;
L_1148fe0c:;
  /* 1148fe0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148fe0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fe12 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1148fe15:;
  /* 1148fe15 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fe19 jg 0x1148fe63 */
  if ((!C.zf&&C.sf==C.of)) goto L_1148fe63;
  /* 1148fe1b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1148fe21 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fe22 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1148fe28 push edx */
  push32((uint32_t)(EDX));
  /* 1148fe29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148fe2c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148fe2f mov ecx, dword ptr [eax + 0x114b4518] */
  ECX = (r32((uint32_t)(EAX + 0x114b4518)));
  /* 1148fe35 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fe36 call 0x11493ec0 */
  push32(0x1148fe3bu); f_11493ec0();
  /* 1148fe3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fe3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148fe40 jne 0x1148fe61 */
  if (!C.zf) goto L_1148fe61;
  /* 1148fe42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148fe45 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148fe48 mov eax, dword ptr [edx + 0x114b4518] */
  EAX = (r32((uint32_t)(EDX + 0x114b4518)));
  /* 1148fe4e push eax */
  push32((uint32_t)(EAX));
  /* 1148fe4f call 0x11489ef0 */
  push32(0x1148fe54u); f_11489ef0();
  /* 1148fe54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fe57 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fe5d jne 0x1148fe61 */
  if (!C.zf) goto L_1148fe61;
  /* 1148fe5f jmp 0x1148fe63 */
  goto L_1148fe63;
L_1148fe61:;
  /* 1148fe61 jmp 0x1148fe0c */
  goto L_1148fe0c;
L_1148fe63:;
  /* 1148fe63 push 0x114b1284 */
  push32((uint32_t)(0x114b1284u));
  /* 1148fe68 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148fe6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fe71 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1148fe77 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148fe7d push edx */
  push32((uint32_t)(EDX));
  /* 1148fe7e call 0x11493e80 */
  push32(0x1148fe83u); f_11493e80();
  /* 1148fe83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fe86 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1148fe8c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fe93 jne 0x1148fec9 */
  if (!C.zf) goto L_1148fec9;
  /* 1148fe95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148fe9b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148fe9e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fea1 je 0x1148fec9 */
  if (C.zf) goto L_1148fec9;
  /* 1148fea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fea7 je 0x1148fec2 */
  if (C.zf) goto L_1148fec2;
  /* 1148fea9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148feab call 0x1148cad0 */
  push32(0x1148feb0u); f_1148cad0();
  /* 1148feb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148feb3 mov edx, dword ptr [0x114b6874] */
  EDX = (r32((uint32_t)(0x114b6874)));
  /* 1148feb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148febc mov dword ptr [0x114b6874], edx */
  w32((uint32_t)(0x114b6874), (EDX));
L_1148fec2:;
  /* 1148fec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148fec4 jmp 0x1149009b */
  goto L_1149009b;
L_1148fec9:;
  /* 1148fec9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148fecd jg 0x1148ff1a */
  if ((!C.zf&&C.sf==C.of)) goto L_1148ff1a;
  /* 1148fecf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1148fed5 push eax */
  push32((uint32_t)(EAX));
  /* 1148fed6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148fedc push ecx */
  push32((uint32_t)(ECX));
  /* 1148fedd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1148fee3 push edx */
  push32((uint32_t)(EDX));
  /* 1148fee4 call 0x1148a8e0 */
  push32(0x1148fee9u); f_1148a8e0();
  /* 1148fee9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148feec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1148fef2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1148fefa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1148ff00 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ff01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ff04 push edx */
  push32((uint32_t)(EDX));
  /* 1148ff05 call 0x114900a0 */
  push32(0x1148ff0au); f_114900a0();
  /* 1148ff0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ff0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ff0f je 0x1148ff1a */
  if (C.zf) goto L_1148ff1a;
  /* 1148ff11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148ff14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ff17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1148ff1a:;
  /* 1148ff1a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1148ff20 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ff26 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1148ff2c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1148ff32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1148ff35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ff37 je 0x1148ff48 */
  if (C.zf) goto L_1148ff48;
  /* 1148ff39 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1148ff3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ff42 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1148ff48:;
  /* 1148ff48 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1148ff4e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1148ff51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ff53 jne 0x1148fd91 */
  if (!C.zf) goto L_1148fd91;
  /* 1148ff59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ff5d je 0x1148ff6c */
  if (C.zf) goto L_1148ff6c;
  /* 1148ff5f call 0x11490240 */
  push32(0x1148ff64u); f_11490240();
  /* 1148ff64 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1148ff6a jmp 0x1148ff76 */
  goto L_1148ff76;
L_1148ff6c:;
  /* 1148ff6c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1148ff76:;
  /* 1148ff76 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1148ff7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148ff7f jmp 0x11490071 */
  goto L_11490071;
L_1148ff84:;
  /* 1148ff84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ff87 push edx */
  push32((uint32_t)(EDX));
  /* 1148ff88 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148ff8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148ff8c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1148ff92 push eax */
  push32((uint32_t)(EAX));
  /* 1148ff93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148ff96 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ff97 call 0x11490340 */
  push32(0x1148ff9cu); f_11490340();
  /* 1148ff9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ff9f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148ffa2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ffa6 je 0x11490071 */
  if (C.zf) goto L_11490071;
  /* 1148ffac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1148ffb3 jmp 0x1148ffbe */
  goto L_1148ffbe;
L_1148ffb5:;
  /* 1148ffb5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ffb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ffbb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1148ffbe:;
  /* 1148ffbe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ffc2 jg 0x11490020 */
  if ((!C.zf&&C.sf==C.of)) goto L_11490020;
  /* 1148ffc4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ffc8 je 0x1149001e */
  if (C.zf) goto L_1149001e;
  /* 1148ffca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148ffcd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148ffd0 mov ecx, dword ptr [eax + 0x114b451c] */
  ECX = (r32((uint32_t)(EAX + 0x114b451c)));
  /* 1148ffd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1148ffd7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1148ffdd push edx */
  push32((uint32_t)(EDX));
  /* 1148ffde call 0x11493df0 */
  push32(0x1148ffe3u); f_11493df0();
  /* 1148ffe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ffe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ffe8 je 0x11490015 */
  if (C.zf) goto L_11490015;
  /* 1148ffea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1148fff0 push eax */
  push32((uint32_t)(EAX));
  /* 1148fff1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148fff4 push ecx */
  push32((uint32_t)(ECX));
  /* 1148fff5 call 0x114900a0 */
  push32(0x1148fffau); f_114900a0();
  /* 1148fffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148fffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ffff je 0x1149000c */
  if (C.zf) goto L_1149000c;
  /* 11490001 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11490004 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490007 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1149000a jmp 0x11490013 */
  goto L_11490013;
L_1149000c:;
  /* 1149000c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11490013:;
  /* 11490013 jmp 0x1149001e */
  goto L_1149001e;
L_11490015:;
  /* 11490015 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11490018 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149001b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1149001e:;
  /* 1149001e jmp 0x1148ffb5 */
  goto L_1148ffb5;
L_11490020:;
  /* 11490020 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490024 je 0x1149004b */
  if (C.zf) goto L_1149004b;
  /* 11490026 call 0x11490240 */
  push32(0x1149002bu); f_11490240();
  /* 1149002b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149002e push 2 */
  push32((uint32_t)(0x2u));
  /* 11490030 mov ecx, dword ptr [0x114b451c] */
  ECX = (r32((uint32_t)(0x114b451c)));
  /* 11490036 push ecx */
  push32((uint32_t)(ECX));
  /* 11490037 call 0x11487b50 */
  push32(0x1149003cu); f_11487b50();
  /* 1149003c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149003f mov dword ptr [0x114b451c], 0 */
  w32((uint32_t)(0x114b451c), (0x0u));
  /* 11490049 jmp 0x11490071 */
  goto L_11490071;
L_1149004b:;
  /* 1149004b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149004f je 0x1149005e */
  if (C.zf) goto L_1149005e;
  /* 11490051 call 0x11490240 */
  push32(0x11490056u); f_11490240();
  /* 11490056 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1149005c jmp 0x11490068 */
  goto L_11490068;
L_1149005e:;
  /* 1149005e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11490068:;
  /* 11490068 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1149006e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11490071:;
  /* 11490071 jmp 0x1149007b */
  goto L_1149007b;
L_11490073:;
  /* 11490073 call 0x11490240 */
  push32(0x11490078u); f_11490240();
  /* 11490078 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1149007b:;
  /* 1149007b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149007f je 0x11490098 */
  if (C.zf) goto L_11490098;
  /* 11490081 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11490083 call 0x1148cad0 */
  push32(0x11490088u); f_1148cad0();
  /* 11490088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149008b mov eax, dword ptr [0x114b6874] */
  EAX = (r32((uint32_t)(0x114b6874)));
  /* 11490090 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490093 mov dword ptr [0x114b6874], eax */
  w32((uint32_t)(0x114b6874), (EAX));
L_11490098:;
  /* 11490098 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1149009b:;
  /* 1149009b mov esp, ebp */
  ESP = (EBP);
  /* 1149009d pop ebp */
  EBP = (pop32());
  /* 1149009e ret  */
  ESPCHK(0x1148fcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x114900a0 (403 bytes, 117 insns) */
void f_114900a0(void) {
  FTRACE(0x114900a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114900a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114900a1 mov ebp, esp */
  EBP = (ESP);
  /* 114900a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114900a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114900ac push eax */
  push32((uint32_t)(EAX));
  /* 114900ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 114900b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114900b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 114900ba push edx */
  push32((uint32_t)(EDX));
  /* 114900bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 114900c1 push eax */
  push32((uint32_t)(EAX));
  /* 114900c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114900c5 push ecx */
  push32((uint32_t)(ECX));
  /* 114900c6 call 0x11490340 */
  push32(0x114900cbu); f_11490340();
  /* 114900cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114900ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114900d0 jne 0x114900d9 */
  if (!C.zf) goto L_114900d9;
  /* 114900d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114900d4 jmp 0x1149022f */
  goto L_1149022f;
L_114900d9:;
  /* 114900d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 114900de push 0x114b128c */
  push32((uint32_t)(0x114b128cu));
  /* 114900e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114900e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 114900eb push edx */
  push32((uint32_t)(EDX));
  /* 114900ec call 0x11489ef0 */
  push32(0x114900f1u); f_11489ef0();
  /* 114900f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114900f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114900f7 push eax */
  push32((uint32_t)(EAX));
  /* 114900f8 call 0x114870c0 */
  push32(0x114900fdu); f_114870c0();
  /* 114900fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490100 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11490103 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490107 jne 0x11490110 */
  if (!C.zf) goto L_11490110;
  /* 11490109 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149010b jmp 0x1149022f */
  goto L_1149022f;
L_11490110:;
  /* 11490110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490113 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11490116 mov ecx, dword ptr [eax + 0x114b451c] */
  ECX = (r32((uint32_t)(EAX + 0x114b451c)));
  /* 1149011c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1149011f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490122 mov eax, dword ptr [edx*4 + 0x114b66fc] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b66fc)));
  /* 11490129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1149012c push 6 */
  push32((uint32_t)(0x6u));
  /* 1149012e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490131 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11490134 add ecx, 0x114b673c */
  { uint32_t _a=(ECX),_b=(0x114b673cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149013a push ecx */
  push32((uint32_t)(ECX));
  /* 1149013b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1149013e push edx */
  push32((uint32_t)(EDX));
  /* 1149013f call 0x1148f6f0 */
  push32(0x11490144u); f_1148f6f0();
  /* 11490144 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490147 mov eax, dword ptr [0x114b6714] */
  EAX = (r32((uint32_t)(0x114b6714)));
  /* 1149014c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1149014f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11490155 push ecx */
  push32((uint32_t)(ECX));
  /* 11490156 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11490159 push edx */
  push32((uint32_t)(EDX));
  /* 1149015a call 0x1148a070 */
  push32(0x1149015fu); f_1148a070();
  /* 1149015f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490165 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11490168 mov dword ptr [ecx + 0x114b451c], eax */
  w32((uint32_t)(ECX + 0x114b451c), (EAX));
  /* 1149016e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11490174 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1149017a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149017d mov dword ptr [eax*4 + 0x114b66fc], edx */
  w32((uint32_t)(EAX*4 + 0x114b66fc), (EDX));
  /* 11490184 push 6 */
  push32((uint32_t)(0x6u));
  /* 11490186 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1149018c push ecx */
  push32((uint32_t)(ECX));
  /* 1149018d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490190 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11490193 add edx, 0x114b673c */
  { uint32_t _a=(EDX),_b=(0x114b673cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490199 push edx */
  push32((uint32_t)(EDX));
  /* 1149019a call 0x1148f6f0 */
  push32(0x1149019fu); f_1148f6f0();
  /* 1149019f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114901a2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114901a6 jne 0x114901b3 */
  if (!C.zf) goto L_114901b3;
  /* 114901a8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114901ae mov dword ptr [0x114b6714], eax */
  w32((uint32_t)(0x114b6714), (EAX));
L_114901b3:;
  /* 114901b3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114901b7 jne 0x114901c5 */
  if (!C.zf) goto L_114901c5;
  /* 114901b9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114901bf mov dword ptr [0x114b6718], ecx */
  w32((uint32_t)(0x114b6718), (ECX));
L_114901c5:;
  /* 114901c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114901c8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114901cb call dword ptr [edx + 0x114b4520] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x114b4520))), 0x114901d1u);
  /* 114901d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114901d3 je 0x1149020c */
  if (C.zf) goto L_1149020c;
  /* 114901d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114901d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114901db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114901de mov dword ptr [eax + 0x114b451c], ecx */
  w32((uint32_t)(EAX + 0x114b451c), (ECX));
  /* 114901e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114901e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114901e9 push edx */
  push32((uint32_t)(EDX));
  /* 114901ea call 0x11487b50 */
  push32(0x114901efu); f_11487b50();
  /* 114901ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114901f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114901f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114901f8 mov dword ptr [eax*4 + 0x114b66fc], ecx */
  w32((uint32_t)(EAX*4 + 0x114b66fc), (ECX));
  /* 114901ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11490202 mov dword ptr [0x114b6714], edx */
  w32((uint32_t)(0x114b6714), (EDX));
  /* 11490208 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149020a jmp 0x1149022f */
  goto L_1149022f;
L_1149020c:;
  /* 1149020c cmp dword ptr [ebp - 0xc], 0x114b4408 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x114b4408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490213 je 0x11490223 */
  if (C.zf) goto L_11490223;
  /* 11490215 push 2 */
  push32((uint32_t)(0x2u));
  /* 11490217 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149021a push eax */
  push32((uint32_t)(EAX));
  /* 1149021b call 0x11487b50 */
  push32(0x11490220u); f_11487b50();
  /* 11490220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11490223:;
  /* 11490223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490226 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11490229 mov eax, dword ptr [ecx + 0x114b451c] */
  EAX = (r32((uint32_t)(ECX + 0x114b451c)));
L_1149022f:;
  /* 1149022f mov esp, ebp */
  ESP = (EBP);
  /* 11490231 pop ebp */
  EBP = (pop32());
  /* 11490232 ret  */
  ESPCHK(0x114900a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010240 @ 0x11490240 (256 bytes, 72 insns) */
void f_11490240(void) {
  FTRACE(0x11490240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490240 push ebp */
  push32((uint32_t)(EBP));
  /* 11490241 mov ebp, esp */
  EBP = (ESP);
  /* 11490243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490246 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1149024d cmp dword ptr [0x114b451c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b451c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490254 jne 0x11490274 */
  if (!C.zf) goto L_11490274;
  /* 11490256 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1149025b push 0x114b128c */
  push32((uint32_t)(0x114b128cu));
  /* 11490260 push 2 */
  push32((uint32_t)(0x2u));
  /* 11490262 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11490267 call 0x114870c0 */
  push32(0x1149026cu); f_114870c0();
  /* 1149026c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149026f mov dword ptr [0x114b451c], eax */
  w32((uint32_t)(0x114b451c), (EAX));
L_11490274:;
  /* 11490274 mov eax, dword ptr [0x114b451c] */
  EAX = (r32((uint32_t)(0x114b451c)));
  /* 11490279 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1149027c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11490283 jmp 0x1149028e */
  goto L_1149028e;
L_11490285:;
  /* 11490285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490288 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149028b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1149028e:;
  /* 1149028e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490291 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11490294 mov eax, dword ptr [edx + 0x114b451c] */
  EAX = (r32((uint32_t)(EDX + 0x114b451c)));
  /* 1149029a push eax */
  push32((uint32_t)(EAX));
  /* 1149029b push 0x114b1298 */
  push32((uint32_t)(0x114b1298u));
  /* 114902a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114902a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114902a6 mov edx, dword ptr [ecx + 0x114b4518] */
  EDX = (r32((uint32_t)(ECX + 0x114b4518)));
  /* 114902ac push edx */
  push32((uint32_t)(EDX));
  /* 114902ad push 3 */
  push32((uint32_t)(0x3u));
  /* 114902af mov eax, dword ptr [0x114b451c] */
  EAX = (r32((uint32_t)(0x114b451c)));
  /* 114902b4 push eax */
  push32((uint32_t)(EAX));
  /* 114902b5 call 0x114904e0 */
  push32(0x114902bau); f_114904e0();
  /* 114902ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114902bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114902c1 jge 0x11490309 */
  if ((C.sf==C.of)) goto L_11490309;
  /* 114902c3 push 0x114b1284 */
  push32((uint32_t)(0x114b1284u));
  /* 114902c8 mov ecx, dword ptr [0x114b451c] */
  ECX = (r32((uint32_t)(0x114b451c)));
  /* 114902ce push ecx */
  push32((uint32_t)(ECX));
  /* 114902cf call 0x1148a080 */
  push32(0x114902d4u); f_1148a080();
  /* 114902d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114902d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114902da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114902dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114902e0 mov eax, dword ptr [edx + 0x114b451c] */
  EAX = (r32((uint32_t)(EDX + 0x114b451c)));
  /* 114902e6 push eax */
  push32((uint32_t)(EAX));
  /* 114902e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114902ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114902ed mov edx, dword ptr [ecx + 0x114b451c] */
  EDX = (r32((uint32_t)(ECX + 0x114b451c)));
  /* 114902f3 push edx */
  push32((uint32_t)(EDX));
  /* 114902f4 call 0x11493df0 */
  push32(0x114902f9u); f_11493df0();
  /* 114902f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114902fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114902fe je 0x11490307 */
  if (C.zf) goto L_11490307;
  /* 11490300 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11490307:;
  /* 11490307 jmp 0x11490337 */
  goto L_11490337;
L_11490309:;
  /* 11490309 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149030d jne 0x11490316 */
  if (!C.zf) goto L_11490316;
  /* 1149030f mov eax, dword ptr [0x114b451c] */
  EAX = (r32((uint32_t)(0x114b451c)));
  /* 11490314 jmp 0x1149033c */
  goto L_1149033c;
L_11490316:;
  /* 11490316 push 2 */
  push32((uint32_t)(0x2u));
  /* 11490318 mov eax, dword ptr [0x114b451c] */
  EAX = (r32((uint32_t)(0x114b451c)));
  /* 1149031d push eax */
  push32((uint32_t)(EAX));
  /* 1149031e call 0x11487b50 */
  push32(0x11490323u); f_11487b50();
  /* 11490323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490326 mov dword ptr [0x114b451c], 0 */
  w32((uint32_t)(0x114b451c), (0x0u));
  /* 11490330 mov eax, dword ptr [0x114b4534] */
  EAX = (r32((uint32_t)(0x114b4534)));
  /* 11490335 jmp 0x1149033c */
  goto L_1149033c;
L_11490337:;
  /* 11490337 jmp 0x11490285 */
  goto L_11490285;
L_1149033c:;
  /* 1149033c mov esp, ebp */
  ESP = (EBP);
  /* 1149033e pop ebp */
  EBP = (pop32());
  /* 1149033f ret  */
  ESPCHK(0x11490240u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x11490340 (388 bytes, 115 insns) */
void f_11490340(void) {
  FTRACE(0x11490340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490340 push ebp */
  push32((uint32_t)(EBP));
  /* 11490341 mov ebp, esp */
  EBP = (ESP);
  /* 11490343 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490349 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149034d jne 0x11490356 */
  if (!C.zf) goto L_11490356;
  /* 1149034f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490351 jmp 0x114904c0 */
  goto L_114904c0;
L_11490356:;
  /* 11490356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490359 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149035c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149035f jne 0x114903b0 */
  if (!C.zf) goto L_114903b0;
  /* 11490361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490364 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11490368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149036a jne 0x114903b0 */
  if (!C.zf) goto L_114903b0;
  /* 1149036c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149036f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11490372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490375 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11490379 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149037d je 0x11490399 */
  if (C.zf) goto L_11490399;
  /* 1149037f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490382 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11490387 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149038a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11490390 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490393 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11490399:;
  /* 11490399 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149039d je 0x114903a8 */
  if (C.zf) goto L_114903a8;
  /* 1149039f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114903a2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114903a8:;
  /* 114903a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114903ab jmp 0x114904c0 */
  goto L_114904c0;
L_114903b0:;
  /* 114903b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114903b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114903b4 push 0x114b4490 */
  push32((uint32_t)(0x114b4490u));
  /* 114903b9 call 0x11493df0 */
  push32(0x114903beu); f_11493df0();
  /* 114903be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114903c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114903c3 je 0x11490478 */
  if (C.zf) goto L_11490478;
  /* 114903c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114903cc push edx */
  push32((uint32_t)(EDX));
  /* 114903cd push 0x114b440c */
  push32((uint32_t)(0x114b440cu));
  /* 114903d2 call 0x11493df0 */
  push32(0x114903d7u); f_11493df0();
  /* 114903d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114903da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114903dc je 0x11490478 */
  if (C.zf) goto L_11490478;
  /* 114903e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114903e5 push eax */
  push32((uint32_t)(EAX));
  /* 114903e6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 114903ec push ecx */
  push32((uint32_t)(ECX));
  /* 114903ed call 0x11490530 */
  push32(0x114903f2u); f_11490530();
  /* 114903f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114903f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114903f7 je 0x11490400 */
  if (C.zf) goto L_11490400;
  /* 114903f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114903fb jmp 0x114904c0 */
  goto L_114904c0;
L_11490400:;
  /* 11490400 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11490406 push edx */
  push32((uint32_t)(EDX));
  /* 11490407 push 0x114b66f0 */
  push32((uint32_t)(0x114b66f0u));
  /* 1149040c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11490412 push eax */
  push32((uint32_t)(EAX));
  /* 11490413 call 0x11493f40 */
  push32(0x11490418u); f_11493f40();
  /* 11490418 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149041b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149041d jne 0x11490426 */
  if (!C.zf) goto L_11490426;
  /* 1149041f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490421 jmp 0x114904c0 */
  goto L_114904c0;
L_11490426:;
  /* 11490426 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11490428 mov cx, word ptr [0x114b66f4] */
  CX = (r16((uint32_t)(0x114b66f4)));
  /* 1149042f mov dword ptr [0x114b66f8], ecx */
  w32((uint32_t)(0x114b66f8), (ECX));
  /* 11490435 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1149043b push edx */
  push32((uint32_t)(EDX));
  /* 1149043c push 0x114b4490 */
  push32((uint32_t)(0x114b4490u));
  /* 11490441 call 0x11490690 */
  push32(0x11490446u); f_11490690();
  /* 11490446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490449 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149044c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149044f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11490451 je 0x11490466 */
  if (C.zf) goto L_11490466;
  /* 11490453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490456 push edx */
  push32((uint32_t)(EDX));
  /* 11490457 push 0x114b440c */
  push32((uint32_t)(0x114b440cu));
  /* 1149045c call 0x1148a070 */
  push32(0x11490461u); f_1148a070();
  /* 11490461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490464 jmp 0x11490478 */
  goto L_11490478;
L_11490466:;
  /* 11490466 push 0x114b4490 */
  push32((uint32_t)(0x114b4490u));
  /* 1149046b push 0x114b440c */
  push32((uint32_t)(0x114b440cu));
  /* 11490470 call 0x1148a070 */
  push32(0x11490475u); f_1148a070();
  /* 11490475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11490478:;
  /* 11490478 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149047c je 0x11490491 */
  if (C.zf) goto L_11490491;
  /* 1149047e push 6 */
  push32((uint32_t)(0x6u));
  /* 11490480 push 0x114b66f0 */
  push32((uint32_t)(0x114b66f0u));
  /* 11490485 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490488 push eax */
  push32((uint32_t)(EAX));
  /* 11490489 call 0x1148f6f0 */
  push32(0x1149048eu); f_1148f6f0();
  /* 1149048e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11490491:;
  /* 11490491 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490495 je 0x114904aa */
  if (C.zf) goto L_114904aa;
  /* 11490497 push 4 */
  push32((uint32_t)(0x4u));
  /* 11490499 push 0x114b66f8 */
  push32((uint32_t)(0x114b66f8u));
  /* 1149049e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114904a1 push ecx */
  push32((uint32_t)(ECX));
  /* 114904a2 call 0x1148f6f0 */
  push32(0x114904a7u); f_1148f6f0();
  /* 114904a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114904aa:;
  /* 114904aa push 0x114b4490 */
  push32((uint32_t)(0x114b4490u));
  /* 114904af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114904b2 push edx */
  push32((uint32_t)(EDX));
  /* 114904b3 call 0x1148a070 */
  push32(0x114904b8u); f_1148a070();
  /* 114904b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114904bb mov eax, 0x114b4490 */
  EAX = (0x114b4490u);
L_114904c0:;
  /* 114904c0 mov esp, ebp */
  ESP = (EBP);
  /* 114904c2 pop ebp */
  EBP = (pop32());
  /* 114904c3 ret  */
  ESPCHK(0x11490340u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x114904d0 (7 bytes, 5 insns) */
void f_114904d0(void) {
  FTRACE(0x114904d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114904d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114904d1 mov ebp, esp */
  EBP = (ESP);
  /* 114904d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114904d5 pop ebp */
  EBP = (pop32());
  /* 114904d6 ret  */
  ESPCHK(0x114904d0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x114904e0 (79 bytes, 28 insns) */
void f_114904e0(void) {
  FTRACE(0x114904e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114904e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114904e1 mov ebp, esp */
  EBP = (ESP);
  /* 114904e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114904e6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114904e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114904ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114904f3 jmp 0x114904fe */
  goto L_114904fe;
L_114904f5:;
  /* 114904f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114904f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114904fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114904fe:;
  /* 114904fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11490501 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490504 jge 0x11490524 */
  if ((C.sf==C.of)) goto L_11490524;
  /* 11490506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490509 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149050c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1149050f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490512 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11490515 push edx */
  push32((uint32_t)(EDX));
  /* 11490516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490519 push eax */
  push32((uint32_t)(EAX));
  /* 1149051a call 0x1148a080 */
  push32(0x1149051fu); f_1148a080();
  /* 1149051f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490522 jmp 0x114904f5 */
  goto L_114904f5;
L_11490524:;
  /* 11490524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1149052b mov esp, ebp */
  ESP = (EBP);
  /* 1149052d pop ebp */
  EBP = (pop32());
  /* 1149052e ret  */
  ESPCHK(0x114904e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010530 @ 0x11490530 (349 bytes, 122 insns) */
void f_11490530(void) {
  FTRACE(0x11490530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490530 push ebp */
  push32((uint32_t)(EBP));
  /* 11490531 mov ebp, esp */
  EBP = (ESP);
  /* 11490533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490536 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1149053b push 0 */
  push32((uint32_t)(0x0u));
  /* 1149053d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490540 push eax */
  push32((uint32_t)(EAX));
  /* 11490541 call 0x1148bbf0 */
  push32(0x11490546u); f_1148bbf0();
  /* 11490546 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490549 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149054c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1149054f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11490551 jne 0x1149055a */
  if (!C.zf) goto L_1149055a;
  /* 11490553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490555 jmp 0x11490689 */
  goto L_11490689;
L_1149055a:;
  /* 1149055a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149055d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11490560 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490563 jne 0x11490590 */
  if (!C.zf) goto L_11490590;
  /* 11490565 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490568 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1149056c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149056e je 0x11490590 */
  if (C.zf) goto L_11490590;
  /* 11490570 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490573 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490576 push ecx */
  push32((uint32_t)(ECX));
  /* 11490577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149057a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490580 push edx */
  push32((uint32_t)(EDX));
  /* 11490581 call 0x1148a070 */
  push32(0x11490586u); f_1148a070();
  /* 11490586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149058b jmp 0x11490689 */
  goto L_11490689;
L_11490590:;
  /* 11490590 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11490597 jmp 0x114905a2 */
  goto L_114905a2;
L_11490599:;
  /* 11490599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149059c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149059f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114905a2:;
  /* 114905a2 push 0x114b129c */
  push32((uint32_t)(0x114b129cu));
  /* 114905a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114905aa push ecx */
  push32((uint32_t)(ECX));
  /* 114905ab call 0x11493e80 */
  push32(0x114905b0u); f_11493e80();
  /* 114905b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114905b3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114905b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114905ba jne 0x114905c4 */
  if (!C.zf) goto L_114905c4;
  /* 114905bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114905bf jmp 0x11490689 */
  goto L_11490689;
L_114905c4:;
  /* 114905c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114905c7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114905ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114905cc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 114905cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114905d3 jne 0x114905fa */
  if (!C.zf) goto L_114905fa;
  /* 114905d5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114905d9 jge 0x114905fa */
  if ((C.sf==C.of)) goto L_114905fa;
  /* 114905db movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114905df cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114905e2 je 0x114905fa */
  if (C.zf) goto L_114905fa;
  /* 114905e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114905e7 push edx */
  push32((uint32_t)(EDX));
  /* 114905e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114905eb push eax */
  push32((uint32_t)(EAX));
  /* 114905ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114905ef push ecx */
  push32((uint32_t)(ECX));
  /* 114905f0 call 0x1148a8e0 */
  push32(0x114905f5u); f_1148a8e0();
  /* 114905f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114905f8 jmp 0x11490660 */
  goto L_11490660;
L_114905fa:;
  /* 114905fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114905fe jne 0x11490628 */
  if (!C.zf) goto L_11490628;
  /* 11490600 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490604 jge 0x11490628 */
  if ((C.sf==C.of)) goto L_11490628;
  /* 11490606 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1149060a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149060d je 0x11490628 */
  if (C.zf) goto L_11490628;
  /* 1149060f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11490612 push eax */
  push32((uint32_t)(EAX));
  /* 11490613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490616 push ecx */
  push32((uint32_t)(ECX));
  /* 11490617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149061a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149061d push edx */
  push32((uint32_t)(EDX));
  /* 1149061e call 0x1148a8e0 */
  push32(0x11490623u); f_1148a8e0();
  /* 11490623 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490626 jmp 0x11490660 */
  goto L_11490660;
L_11490628:;
  /* 11490628 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149062c jne 0x1149065b */
  if (!C.zf) goto L_1149065b;
  /* 1149062e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11490632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490634 je 0x1149063f */
  if (C.zf) goto L_1149063f;
  /* 11490636 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1149063a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149063d jne 0x1149065b */
  if (!C.zf) goto L_1149065b;
L_1149063f:;
  /* 1149063f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11490642 push edx */
  push32((uint32_t)(EDX));
  /* 11490643 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490646 push eax */
  push32((uint32_t)(EAX));
  /* 11490647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149064a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490650 push ecx */
  push32((uint32_t)(ECX));
  /* 11490651 call 0x1148a8e0 */
  push32(0x11490656u); f_1148a8e0();
  /* 11490656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490659 jmp 0x11490660 */
  goto L_11490660;
L_1149065b:;
  /* 1149065b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149065e jmp 0x11490689 */
  goto L_11490689;
L_11490660:;
  /* 11490660 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11490664 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490667 jne 0x1149066b */
  if (!C.zf) goto L_1149066b;
  /* 11490669 jmp 0x11490687 */
  goto L_11490687;
L_1149066b:;
  /* 1149066b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1149066f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490671 jne 0x11490675 */
  if (!C.zf) goto L_11490675;
  /* 11490673 jmp 0x11490687 */
  goto L_11490687;
L_11490675:;
  /* 11490675 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11490678 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149067b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1149067f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11490682 jmp 0x11490599 */
  goto L_11490599;
L_11490687:;
  /* 11490687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11490689:;
  /* 11490689 mov esp, ebp */
  ESP = (EBP);
  /* 1149068b pop ebp */
  EBP = (pop32());
  /* 1149068c ret  */
  ESPCHK(0x11490530u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11490690 (101 bytes, 36 insns) */
void f_11490690(void) {
  FTRACE(0x11490690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490690 push ebp */
  push32((uint32_t)(EBP));
  /* 11490691 mov ebp, esp */
  EBP = (ESP);
  /* 11490693 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490696 push eax */
  push32((uint32_t)(EAX));
  /* 11490697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149069a push ecx */
  push32((uint32_t)(ECX));
  /* 1149069b call 0x1148a070 */
  push32(0x114906a0u); f_1148a070();
  /* 114906a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114906a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114906a6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 114906aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114906ac je 0x114906c8 */
  if (C.zf) goto L_114906c8;
  /* 114906ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114906b1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114906b4 push ecx */
  push32((uint32_t)(ECX));
  /* 114906b5 push 0x114b12a4 */
  push32((uint32_t)(0x114b12a4u));
  /* 114906ba push 2 */
  push32((uint32_t)(0x2u));
  /* 114906bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114906bf push edx */
  push32((uint32_t)(EDX));
  /* 114906c0 call 0x114904e0 */
  push32(0x114906c5u); f_114904e0();
  /* 114906c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114906c8:;
  /* 114906c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114906cb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 114906d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114906d4 je 0x114906f3 */
  if (C.zf) goto L_114906f3;
  /* 114906d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114906d9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114906df push edx */
  push32((uint32_t)(EDX));
  /* 114906e0 push 0x114b12a0 */
  push32((uint32_t)(0x114b12a0u));
  /* 114906e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114906e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114906ea push eax */
  push32((uint32_t)(EAX));
  /* 114906eb call 0x114904e0 */
  push32(0x114906f0u); f_114904e0();
  /* 114906f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114906f3:;
  /* 114906f3 pop ebp */
  EBP = (pop32());
  /* 114906f4 ret  */
  ESPCHK(0x11490690u, _esp0);
  ESP += 4; return;
}

/* FUN_10010700 @ 0x11490700 (727 bytes, 263 insns) */
void f_11490700(void) {
  FTRACE(0x11490700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490700 push ebp */
  push32((uint32_t)(EBP));
  /* 11490701 mov ebp, esp */
  EBP = (ESP);
  /* 11490703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11490705 push 0x114b12a8 */
  push32((uint32_t)(0x114b12a8u));
  /* 1149070a push 0x11492858 */
  push32((uint32_t)(0x11492858u));
  /* 1149070f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11490715 push eax */
  push32((uint32_t)(EAX));
  /* 11490716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1149071d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490720 push ebx */
  push32((uint32_t)(EBX));
  /* 11490721 push esi */
  push32((uint32_t)(ESI));
  /* 11490722 push edi */
  push32((uint32_t)(EDI));
  /* 11490723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11490726 cmp dword ptr [0x114b671c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b671c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149072d jne 0x11490786 */
  if (!C.zf) goto L_11490786;
  /* 1149072f push 0 */
  push32((uint32_t)(0x0u));
  /* 11490731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490733 push 1 */
  push32((uint32_t)(0x1u));
  /* 11490735 push 0x114b1234 */
  push32((uint32_t)(0x114b1234u));
  /* 1149073a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1149073f push 0 */
  push32((uint32_t)(0x0u));
  /* 11490741 call dword ptr [0x114b92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f8))), 0x11490747u);
  /* 11490747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490749 je 0x11490757 */
  if (C.zf) goto L_11490757;
  /* 1149074b mov dword ptr [0x114b671c], 1 */
  w32((uint32_t)(0x114b671c), (0x1u));
  /* 11490755 jmp 0x11490786 */
  goto L_11490786;
L_11490757:;
  /* 11490757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149075b push 1 */
  push32((uint32_t)(0x1u));
  /* 1149075d push 0x114b1230 */
  push32((uint32_t)(0x114b1230u));
  /* 11490762 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11490767 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490769 call dword ptr [0x114b92fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92fc))), 0x1149076fu);
  /* 1149076f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490771 je 0x1149077f */
  if (C.zf) goto L_1149077f;
  /* 11490773 mov dword ptr [0x114b671c], 2 */
  w32((uint32_t)(0x114b671c), (0x2u));
  /* 1149077d jmp 0x11490786 */
  goto L_11490786;
L_1149077f:;
  /* 1149077f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490781 jmp 0x114909f1 */
  goto L_114909f1;
L_11490786:;
  /* 11490786 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149078a jle 0x1149079f */
  if ((C.zf||C.sf!=C.of)) goto L_1149079f;
  /* 1149078c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149078f push eax */
  push32((uint32_t)(EAX));
  /* 11490790 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490793 push ecx */
  push32((uint32_t)(ECX));
  /* 11490794 call 0x11490a10 */
  push32(0x11490799u); f_11490a10();
  /* 11490799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149079c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1149079f:;
  /* 1149079f cmp dword ptr [0x114b671c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b671c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114907a6 jne 0x114907cb */
  if (!C.zf) goto L_114907cb;
  /* 114907a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114907ab push edx */
  push32((uint32_t)(EDX));
  /* 114907ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114907af push eax */
  push32((uint32_t)(EAX));
  /* 114907b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114907b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114907b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114907b7 push edx */
  push32((uint32_t)(EDX));
  /* 114907b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114907bb push eax */
  push32((uint32_t)(EAX));
  /* 114907bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114907bf push ecx */
  push32((uint32_t)(ECX));
  /* 114907c0 call dword ptr [0x114b92fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92fc))), 0x114907c6u);
  /* 114907c6 jmp 0x114909f1 */
  goto L_114909f1;
L_114907cb:;
  /* 114907cb cmp dword ptr [0x114b671c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b671c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114907d2 jne 0x114909ef */
  if (!C.zf) goto L_114909ef;
  /* 114907d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114907dc jne 0x114907e7 */
  if (!C.zf) goto L_114907e7;
  /* 114907de mov edx, dword ptr [0x114b6714] */
  EDX = (r32((uint32_t)(0x114b6714)));
  /* 114907e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_114907e7:;
  /* 114907e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114907e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114907eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114907ee push eax */
  push32((uint32_t)(EAX));
  /* 114907ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114907f2 push ecx */
  push32((uint32_t)(ECX));
  /* 114907f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 114907f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114907f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114907fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114907fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490800 push edx */
  push32((uint32_t)(EDX));
  /* 11490801 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11490804 push eax */
  push32((uint32_t)(EAX));
  /* 11490805 call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x1149080bu);
  /* 1149080b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1149080e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490812 jne 0x1149081b */
  if (!C.zf) goto L_1149081b;
  /* 11490814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490816 jmp 0x114909f1 */
  goto L_114909f1;
L_1149081b:;
  /* 1149081b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11490822 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11490825 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11490827 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149082a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1149082c call 0x1148a260 */
  push32(0x11490831u); f_1148a260();
  /* 11490831 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11490834 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11490837 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1149083a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1149083d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11490844 jmp 0x1149085d */
  goto L_1149085d;
  /* 11490846 mov eax, 1 */
  EAX = (0x1u);
  /* 1149084b ret  */
  ESPCHK(0x11490700u, _esp0);
  ESP += 4; return;
  /* 1149084c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1149084f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11490856 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1149085d:;
  /* 1149085d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490861 jne 0x1149086a */
  if (!C.zf) goto L_1149086a;
  /* 11490863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490865 jmp 0x114909f1 */
  goto L_114909f1;
L_1149086a:;
  /* 1149086a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1149086d push edx */
  push32((uint32_t)(EDX));
  /* 1149086e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11490871 push eax */
  push32((uint32_t)(EAX));
  /* 11490872 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11490875 push ecx */
  push32((uint32_t)(ECX));
  /* 11490876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490879 push edx */
  push32((uint32_t)(EDX));
  /* 1149087a push 1 */
  push32((uint32_t)(0x1u));
  /* 1149087c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1149087f push eax */
  push32((uint32_t)(EAX));
  /* 11490880 call dword ptr [0x114b930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b930c))), 0x11490886u);
  /* 11490886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490888 jne 0x11490891 */
  if (!C.zf) goto L_11490891;
  /* 1149088a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149088c jmp 0x114909f1 */
  goto L_114909f1;
L_11490891:;
  /* 11490891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490895 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11490898 push ecx */
  push32((uint32_t)(ECX));
  /* 11490899 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1149089c push edx */
  push32((uint32_t)(EDX));
  /* 1149089d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114908a0 push eax */
  push32((uint32_t)(EAX));
  /* 114908a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114908a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114908a5 call dword ptr [0x114b92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f8))), 0x114908abu);
  /* 114908ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114908ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114908b2 jne 0x114908bb */
  if (!C.zf) goto L_114908bb;
  /* 114908b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114908b6 jmp 0x114909f1 */
  goto L_114909f1;
L_114908bb:;
  /* 114908bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114908be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 114908c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114908c6 je 0x1149090b */
  if (C.zf) goto L_1149090b;
  /* 114908c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114908cc je 0x11490906 */
  if (C.zf) goto L_11490906;
  /* 114908ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114908d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114908d4 jle 0x114908dd */
  if ((C.zf||C.sf!=C.of)) goto L_114908dd;
  /* 114908d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114908d8 jmp 0x114909f1 */
  goto L_114909f1;
L_114908dd:;
  /* 114908dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114908e0 push ecx */
  push32((uint32_t)(ECX));
  /* 114908e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114908e4 push edx */
  push32((uint32_t)(EDX));
  /* 114908e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114908e8 push eax */
  push32((uint32_t)(EAX));
  /* 114908e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114908ec push ecx */
  push32((uint32_t)(ECX));
  /* 114908ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114908f0 push edx */
  push32((uint32_t)(EDX));
  /* 114908f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114908f4 push eax */
  push32((uint32_t)(EAX));
  /* 114908f5 call dword ptr [0x114b92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f8))), 0x114908fbu);
  /* 114908fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114908fd jne 0x11490906 */
  if (!C.zf) goto L_11490906;
  /* 114908ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490901 jmp 0x114909f1 */
  goto L_114909f1;
L_11490906:;
  /* 11490906 jmp 0x114909ea */
  goto L_114909ea;
L_1149090b:;
  /* 1149090b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1149090e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11490911 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11490918 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1149091b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1149091d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490920 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11490922 call 0x1148a260 */
  push32(0x11490927u); f_1148a260();
  /* 11490927 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1149092a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1149092d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11490930 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11490933 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1149093a jmp 0x11490953 */
  goto L_11490953;
  /* 1149093c mov eax, 1 */
  EAX = (0x1u);
  /* 11490941 ret  */
  ESPCHK(0x11490700u, _esp0);
  ESP += 4; return;
  /* 11490942 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11490945 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1149094c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11490953:;
  /* 11490953 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490957 jne 0x11490960 */
  if (!C.zf) goto L_11490960;
  /* 11490959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149095b jmp 0x114909f1 */
  goto L_114909f1;
L_11490960:;
  /* 11490960 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11490963 push eax */
  push32((uint32_t)(EAX));
  /* 11490964 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11490967 push ecx */
  push32((uint32_t)(ECX));
  /* 11490968 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1149096b push edx */
  push32((uint32_t)(EDX));
  /* 1149096c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1149096f push eax */
  push32((uint32_t)(EAX));
  /* 11490970 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490973 push ecx */
  push32((uint32_t)(ECX));
  /* 11490974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490977 push edx */
  push32((uint32_t)(EDX));
  /* 11490978 call dword ptr [0x114b92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f8))), 0x1149097eu);
  /* 1149097e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490980 jne 0x11490986 */
  if (!C.zf) goto L_11490986;
  /* 11490982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11490984 jmp 0x114909f1 */
  goto L_114909f1;
L_11490986:;
  /* 11490986 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149098a jne 0x114909ba */
  if (!C.zf) goto L_114909ba;
  /* 1149098c push 0 */
  push32((uint32_t)(0x0u));
  /* 1149098e push 0 */
  push32((uint32_t)(0x0u));
  /* 11490990 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490992 push 0 */
  push32((uint32_t)(0x0u));
  /* 11490994 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11490997 push eax */
  push32((uint32_t)(EAX));
  /* 11490998 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1149099b push ecx */
  push32((uint32_t)(ECX));
  /* 1149099c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114909a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114909a4 push edx */
  push32((uint32_t)(EDX));
  /* 114909a5 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x114909abu);
  /* 114909ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114909ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114909b2 jne 0x114909b8 */
  if (!C.zf) goto L_114909b8;
  /* 114909b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114909b6 jmp 0x114909f1 */
  goto L_114909f1;
L_114909b8:;
  /* 114909b8 jmp 0x114909ea */
  goto L_114909ea;
L_114909ba:;
  /* 114909ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114909bc push 0 */
  push32((uint32_t)(0x0u));
  /* 114909be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114909c1 push eax */
  push32((uint32_t)(EAX));
  /* 114909c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114909c5 push ecx */
  push32((uint32_t)(ECX));
  /* 114909c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114909c9 push edx */
  push32((uint32_t)(EDX));
  /* 114909ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114909cd push eax */
  push32((uint32_t)(EAX));
  /* 114909ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114909d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114909d6 push ecx */
  push32((uint32_t)(ECX));
  /* 114909d7 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x114909ddu);
  /* 114909dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114909e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114909e4 jne 0x114909ea */
  if (!C.zf) goto L_114909ea;
  /* 114909e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114909e8 jmp 0x114909f1 */
  goto L_114909f1;
L_114909ea:;
  /* 114909ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114909ed jmp 0x114909f1 */
  goto L_114909f1;
L_114909ef:;
  /* 114909ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114909f1:;
  /* 114909f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 114909f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114909f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114909fe pop edi */
  EDI = (pop32());
  /* 114909ff pop esi */
  ESI = (pop32());
  /* 11490a00 pop ebx */
  EBX = (pop32());
  /* 11490a01 mov esp, ebp */
  ESP = (EBP);
  /* 11490a03 pop ebp */
  EBP = (pop32());
  /* 11490a04 ret  */
  ESPCHK(0x11490700u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a10 @ 0x11490a10 (80 bytes, 32 insns) */
void f_11490a10(void) {
  FTRACE(0x11490a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11490a11 mov ebp, esp */
  EBP = (ESP);
  /* 11490a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490a19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11490a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490a1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11490a22:;
  /* 11490a22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11490a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11490a28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490a2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11490a2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11490a30 je 0x11490a47 */
  if (C.zf) goto L_11490a47;
  /* 11490a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11490a38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11490a3a je 0x11490a47 */
  if (C.zf) goto L_11490a47;
  /* 11490a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11490a45 jmp 0x11490a22 */
  goto L_11490a22;
L_11490a47:;
  /* 11490a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11490a4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11490a4f jne 0x11490a59 */
  if (!C.zf) goto L_11490a59;
  /* 11490a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490a57 jmp 0x11490a5c */
  goto L_11490a5c;
L_11490a59:;
  /* 11490a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11490a5c:;
  /* 11490a5c mov esp, ebp */
  ESP = (EBP);
  /* 11490a5e pop ebp */
  EBP = (pop32());
  /* 11490a5f ret  */
  ESPCHK(0x11490a10u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11490a60 (62 bytes, 23 insns) */
void f_11490a60(void) {
  FTRACE(0x11490a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11490a61 mov ebp, esp */
  EBP = (ESP);
  /* 11490a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490a66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11490a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490a70 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490a73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11490a76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a79 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490a7c jb 0x11490a86 */
  if (C.cf) goto L_11490a86;
  /* 11490a7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490a84 jae 0x11490a8f */
  if (!C.cf) goto L_11490a8f;
L_11490a86:;
  /* 11490a86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11490a89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490a8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11490a8f:;
  /* 11490a8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490a95 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11490a97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11490a9a mov esp, ebp */
  ESP = (EBP);
  /* 11490a9c pop ebp */
  EBP = (pop32());
  /* 11490a9d ret  */
  ESPCHK(0x11490a60u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11490aa0 (173 bytes, 66 insns) */
void f_11490aa0(void) {
  FTRACE(0x11490aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11490aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11490aa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490aa9 push eax */
  push32((uint32_t)(EAX));
  /* 11490aaa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490aad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11490aaf push edx */
  push32((uint32_t)(EDX));
  /* 11490ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490ab3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11490ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 11490ab6 call 0x11490a60 */
  push32(0x11490abbu); f_11490a60();
  /* 11490abb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490abe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11490ac1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490ac5 je 0x11490af7 */
  if (C.zf) goto L_11490af7;
  /* 11490ac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490aca add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490acd push edx */
  push32((uint32_t)(EDX));
  /* 11490ace push 1 */
  push32((uint32_t)(0x1u));
  /* 11490ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490ad3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11490ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11490ad7 call 0x11490a60 */
  push32(0x11490adcu); f_11490a60();
  /* 11490adc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490adf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11490ae2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490ae6 je 0x11490af7 */
  if (C.zf) goto L_11490af7;
  /* 11490ae8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490aeb mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11490aee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490af4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11490af7:;
  /* 11490af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490afa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490afd push edx */
  push32((uint32_t)(EDX));
  /* 11490afe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490b01 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11490b04 push ecx */
  push32((uint32_t)(ECX));
  /* 11490b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11490b0b push eax */
  push32((uint32_t)(EAX));
  /* 11490b0c call 0x11490a60 */
  push32(0x11490b11u); f_11490a60();
  /* 11490b11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490b14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11490b17 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490b1b je 0x11490b2c */
  if (C.zf) goto L_11490b2c;
  /* 11490b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b20 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11490b23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b29 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11490b2c:;
  /* 11490b2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b2f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490b32 push ecx */
  push32((uint32_t)(ECX));
  /* 11490b33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490b36 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11490b39 push eax */
  push32((uint32_t)(EAX));
  /* 11490b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b3d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11490b40 push edx */
  push32((uint32_t)(EDX));
  /* 11490b41 call 0x11490a60 */
  push32(0x11490b46u); f_11490a60();
  /* 11490b46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490b49 mov esp, ebp */
  ESP = (EBP);
  /* 11490b4b pop ebp */
  EBP = (pop32());
  /* 11490b4c ret  */
  ESPCHK(0x11490aa0u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11490b50 (96 bytes, 37 insns) */
void f_11490b50(void) {
  FTRACE(0x11490b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11490b51 mov ebp, esp */
  EBP = (ESP);
  /* 11490b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11490b5b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11490b61 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11490b63 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490b65 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11490b67 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11490b6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b6d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11490b70 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11490b75 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11490b77 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490b79 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11490b7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11490b7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11490b83 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11490b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11490b8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11490b90 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11490b92 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11490b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b98 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11490b9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490b9e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11490ba1 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11490ba3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11490ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490ba9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11490bac mov esp, ebp */
  ESP = (EBP);
  /* 11490bae pop ebp */
  EBP = (pop32());
  /* 11490baf ret  */
  ESPCHK(0x11490b50u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11490bb0 (99 bytes, 37 insns) */
void f_11490bb0(void) {
  FTRACE(0x11490bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11490bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11490bb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490bb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11490bbc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11490bbf neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11490bc1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490bc3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11490bc9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11490bcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490bcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11490bd2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11490bd5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11490bd7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490bd9 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11490bde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11490be1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490be4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11490be7 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11490be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490bec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11490bef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490bf2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11490bf5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11490bf7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11490bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490bfd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11490c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490c03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11490c05 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11490c07 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11490c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490c0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11490c0f mov esp, ebp */
  ESP = (EBP);
  /* 11490c11 pop ebp */
  EBP = (pop32());
  /* 11490c12 ret  */
  ESPCHK(0x11490bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x11490c20 (315 bytes, 101 insns) */
void f_11490c20(void) {
  FTRACE(0x11490c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11490c21 mov ebp, esp */
  EBP = (ESP);
  /* 11490c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490c26 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11490c2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c2f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11490c35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c38 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11490c3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c42 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11490c49 jmp 0x11490c5d */
  goto L_11490c5d;
L_11490c4b:;
  /* 11490c4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11490c4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490c51 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11490c54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490c57 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490c5a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11490c5d:;
  /* 11490c5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490c61 jbe 0x11490cd7 */
  if ((C.cf||C.zf)) goto L_11490cd7;
  /* 11490c63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11490c68 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11490c6b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11490c6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11490c71 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11490c74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11490c77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c7a push eax */
  push32((uint32_t)(EAX));
  /* 11490c7b call 0x11490b50 */
  push32(0x11490c80u); f_11490b50();
  /* 11490c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490c83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c86 push ecx */
  push32((uint32_t)(ECX));
  /* 11490c87 call 0x11490b50 */
  push32(0x11490c8cu); f_11490b50();
  /* 11490c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490c8f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11490c92 push edx */
  push32((uint32_t)(EDX));
  /* 11490c93 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490c96 push eax */
  push32((uint32_t)(EAX));
  /* 11490c97 call 0x11490aa0 */
  push32(0x11490c9cu); f_11490aa0();
  /* 11490c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490c9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 11490ca3 call 0x11490b50 */
  push32(0x11490ca8u); f_11490b50();
  /* 11490ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490cab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11490cae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11490cb1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11490cb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11490cbb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11490cc2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11490cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11490cc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490cc9 push edx */
  push32((uint32_t)(EDX));
  /* 11490cca call 0x11490aa0 */
  push32(0x11490ccfu); f_11490aa0();
  /* 11490ccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490cd2 jmp 0x11490c4b */
  goto L_11490c4b;
L_11490cd7:;
  /* 11490cd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490cda cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490cde jne 0x11490d23 */
  if (!C.zf) goto L_11490d23;
  /* 11490ce0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490ce3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11490ce6 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11490ce9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490cec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11490cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490cf2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11490cf5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11490cf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490cfb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11490cfd shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11490d00 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11490d02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490d05 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11490d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490d0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11490d0d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11490d10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490d13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11490d15 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11490d19 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11490d1d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11490d21 jmp 0x11490cd7 */
  goto L_11490cd7;
L_11490d23:;
  /* 11490d23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490d26 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11490d29 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11490d2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11490d30 jne 0x11490d4c */
  if (!C.zf) goto L_11490d4c;
  /* 11490d32 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490d35 push ecx */
  push32((uint32_t)(ECX));
  /* 11490d36 call 0x11490b50 */
  push32(0x11490d3bu); f_11490b50();
  /* 11490d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11490d3e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11490d42 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11490d46 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11490d4a jmp 0x11490d23 */
  goto L_11490d23;
L_11490d4c:;
  /* 11490d4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490d4f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11490d53 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11490d57 mov esp, ebp */
  ESP = (EBP);
  /* 11490d59 pop ebp */
  EBP = (pop32());
  /* 11490d5a ret  */
  ESPCHK(0x11490c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d60 @ 0x11490d60 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11490d60(void) {
  FTRACE(0x11490d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11490d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11490d61 mov ebp, esp */
  EBP = (ESP);
  /* 11490d63 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490d69 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11490d6c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11490d6f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11490d75 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11490d7c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11490d83 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11490d8a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11490d91 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11490d98 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11490d9f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11490da6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11490dad mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11490db4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11490dbb mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11490dc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11490dc5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11490dc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490dcb mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11490dce jmp 0x11490dd9 */
  goto L_11490dd9;
L_11490dd0:;
  /* 11490dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490dd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490dd6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11490dd9:;
  /* 11490dd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490ddc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11490ddf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490de2 je 0x11490e05 */
  if (C.zf) goto L_11490e05;
  /* 11490de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11490dea cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490ded je 0x11490e05 */
  if (C.zf) goto L_11490e05;
  /* 11490def mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490df2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11490df5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490df8 je 0x11490e05 */
  if (C.zf) goto L_11490e05;
  /* 11490dfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490dfd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11490e00 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490e03 jne 0x11490e07 */
  if (!C.zf) goto L_11490e07;
L_11490e05:;
  /* 11490e05 jmp 0x11490dd0 */
  goto L_11490dd0;
L_11490e07:;
  /* 11490e07 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490e0b je 0x11491568 */
  if (C.zf) goto L_11491568;
  /* 11490e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490e14 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11490e16 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11490e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490e1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11490e1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11490e22 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11490e25 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11490e28 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490e2c ja 0x11491563 */
  if ((!C.cf&&!C.zf)) goto L_11491563;
  /* 11490e32 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11490e35 jmp dword ptr [ecx*4 + 0x1149177a] */
  switch (ECX) {
    case 0: goto L_11490e3c;
    case 1: goto L_11490eda;
    case 2: goto L_11490f90;
    case 3: goto L_11490ffb;
    case 4: goto L_11491113;
    case 5: goto L_11491245;
    case 6: goto L_114912bb;
    case 7: goto L_114913a0;
    case 8: goto L_11491342;
    case 9: goto L_114913f3;
    case 10: goto L_11491563;
    case 11: goto L_114914ff;
    case 12: goto L_11490f69;
    case 13: goto L_11490f57;
    case 14: goto L_11490f60;
    case 15: goto L_11490f7b;
    default: x86_unimpl("switch@0x11490e35 out of table"); return;
  }
L_11490e3c:;
  /* 11490e3c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490e40 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490e43 jl 0x11490e60 */
  if ((C.sf!=C.of)) goto L_11490e60;
  /* 11490e45 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490e49 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490e4c jg 0x11490e60 */
  if ((!C.zf&&C.sf==C.of)) goto L_11490e60;
  /* 11490e4e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11490e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490e58 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490e5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11490e5e jmp 0x11490ed5 */
  goto L_11490ed5;
L_11490e60:;
  /* 11490e60 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490e64 movsx eax, byte ptr [0x114b3b84] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114b3b84))));
  /* 11490e6b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490e6d jne 0x11490e78 */
  if (!C.zf) goto L_11490e78;
  /* 11490e6f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11490e76 jmp 0x11490ed5 */
  goto L_11490ed5;
L_11490e78:;
  /* 11490e78 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11490e7b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11490e81 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11490e88 je 0x11490ea7 */
  if (C.zf) goto L_11490ea7;
  /* 11490e8a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11490e91 je 0x11490eb6 */
  if (C.zf) goto L_11490eb6;
  /* 11490e93 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11490e9a je 0x11490e9e */
  if (C.zf) goto L_11490e9e;
  /* 11490e9c jmp 0x11490ec5 */
  goto L_11490ec5;
L_11490e9e:;
  /* 11490e9e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11490ea5 jmp 0x11490ed5 */
  goto L_11490ed5;
L_11490ea7:;
  /* 11490ea7 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11490eae mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11490eb4 jmp 0x11490ed5 */
  goto L_11490ed5;
L_11490eb6:;
  /* 11490eb6 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11490ebd mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11490ec3 jmp 0x11490ed5 */
  goto L_11490ed5;
L_11490ec5:;
  /* 11490ec5 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11490ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490ecf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490ed2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11490ed5:;
  /* 11490ed5 jmp 0x11491563 */
  goto L_11491563;
L_11490eda:;
  /* 11490eda mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11490ee1 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490ee5 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490ee8 jl 0x11490f08 */
  if ((C.sf!=C.of)) goto L_11490f08;
  /* 11490eea movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490eee cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490ef1 jg 0x11490f08 */
  if ((!C.zf&&C.sf==C.of)) goto L_11490f08;
  /* 11490ef3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11490efa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490efd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490f00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11490f03 jmp 0x11490f8b */
  goto L_11490f8b;
L_11490f08:;
  /* 11490f08 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490f0c movsx ecx, byte ptr [0x114b3b84] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114b3b84))));
  /* 11490f13 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490f15 jne 0x11490f20 */
  if (!C.zf) goto L_11490f20;
  /* 11490f17 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11490f1e jmp 0x11490f8b */
  goto L_11490f8b;
L_11490f20:;
  /* 11490f20 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490f24 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11490f2a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11490f30 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490f33 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11490f39 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490f40 ja 0x11490f7b */
  if ((!C.cf&&!C.zf)) goto L_11490f7b;
  /* 11490f42 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11490f48 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11490f4a mov cl, byte ptr [edx + 0x114917ba] */
  CL = (r8((uint32_t)(EDX + 0x114917ba)));
  /* 11490f50 jmp dword ptr [ecx*4 + 0x114917aa] */
  switch (ECX) {
    case 0: goto L_11490f69;
    case 1: goto L_11490f57;
    case 2: goto L_11490f60;
    case 3: goto L_11490f7b;
    default: x86_unimpl("switch@0x11490f50 out of table"); return;
  }
L_11490f57:;
  /* 11490f57 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11490f5e jmp 0x11490f8b */
  goto L_11490f8b;
L_11490f60:;
  /* 11490f60 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11490f67 jmp 0x11490f8b */
  goto L_11490f8b;
L_11490f69:;
  /* 11490f69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490f6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490f6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11490f72 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11490f79 jmp 0x11490f8b */
  goto L_11490f8b;
L_11490f7b:;
  /* 11490f7b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11490f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490f85 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490f88 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11490f8b:;
  /* 11490f8b jmp 0x11491563 */
  goto L_11491563;
L_11490f90:;
  /* 11490f90 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490f94 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490f97 jl 0x11490fb4 */
  if ((C.sf!=C.of)) goto L_11490fb4;
  /* 11490f99 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490f9d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490fa0 jg 0x11490fb4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11490fb4;
  /* 11490fa2 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11490fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11490fac sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11490faf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11490fb2 jmp 0x11490ff6 */
  goto L_11490ff6;
L_11490fb4:;
  /* 11490fb4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11490fb8 movsx eax, byte ptr [0x114b3b84] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114b3b84))));
  /* 11490fbf cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11490fc1 jne 0x11490fcc */
  if (!C.zf) goto L_11490fcc;
  /* 11490fc3 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11490fca jmp 0x11490ff6 */
  goto L_11490ff6;
L_11490fcc:;
  /* 11490fcc mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11490fcf mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11490fd5 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11490fdc je 0x11490fe0 */
  if (C.zf) goto L_11490fe0;
  /* 11490fde jmp 0x11490fe9 */
  goto L_11490fe9;
L_11490fe0:;
  /* 11490fe0 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11490fe7 jmp 0x11490ff6 */
  goto L_11490ff6;
L_11490fe9:;
  /* 11490fe9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11490ff0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11490ff3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11490ff6:;
  /* 11490ff6 jmp 0x11491563 */
  goto L_11491563;
L_11490ffb:;
  /* 11490ffb mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11491002 jmp 0x11491015 */
  goto L_11491015;
L_11491004:;
  /* 11491004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491007 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11491009 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 1149100c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149100f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491012 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11491015:;
  /* 11491015 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149101c jle 0x11491039 */
  if ((C.zf||C.sf!=C.of)) goto L_11491039;
  /* 1149101e push 4 */
  push32((uint32_t)(0x4u));
  /* 11491020 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11491023 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491028 push eax */
  push32((uint32_t)(EAX));
  /* 11491029 call 0x1148ae80 */
  push32(0x1149102eu); f_1148ae80();
  /* 1149102e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491031 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11491037 jmp 0x11491057 */
  goto L_11491057;
L_11491039:;
  /* 11491039 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1149103c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491042 mov edx, dword ptr [0x114b3b8c] */
  EDX = (r32((uint32_t)(0x114b3b8c)));
  /* 11491048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149104a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1149104e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11491051 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11491057:;
  /* 11491057 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149105e je 0x11491094 */
  if (C.zf) goto L_11491094;
  /* 11491060 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491064 jae 0x11491086 */
  if (!C.cf) goto L_11491086;
  /* 11491066 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11491069 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149106c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 1149106f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11491073 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491076 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11491079 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1149107b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 1149107e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491081 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11491084 jmp 0x1149108f */
  goto L_1149108f;
L_11491086:;
  /* 11491086 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11491089 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149108c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_1149108f:;
  /* 1149108f jmp 0x11491004 */
  goto L_11491004;
L_11491094:;
  /* 11491094 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11491098 movsx ecx, byte ptr [0x114b3b84] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114b3b84))));
  /* 1149109f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114910a1 jne 0x114910ac */
  if (!C.zf) goto L_114910ac;
  /* 114910a3 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 114910aa jmp 0x1149110e */
  goto L_1149110e;
L_114910ac:;
  /* 114910ac movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114910b0 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 114910b6 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 114910bc sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114910bf mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 114910c5 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114910cc ja 0x114910fe */
  if ((!C.cf&&!C.zf)) goto L_114910fe;
  /* 114910ce mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 114910d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114910d6 mov cl, byte ptr [edx + 0x11491801] */
  CL = (r8((uint32_t)(EDX + 0x11491801)));
  /* 114910dc jmp dword ptr [ecx*4 + 0x114917f5] */
  switch (ECX) {
    case 0: goto L_114910ec;
    case 1: goto L_114910e3;
    case 2: goto L_114910fe;
    default: x86_unimpl("switch@0x114910dc out of table"); return;
  }
L_114910e3:;
  /* 114910e3 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 114910ea jmp 0x1149110e */
  goto L_1149110e;
L_114910ec:;
  /* 114910ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114910ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114910f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114910f5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 114910fc jmp 0x1149110e */
  goto L_1149110e;
L_114910fe:;
  /* 114910fe mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11491105 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491108 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149110b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1149110e:;
  /* 1149110e jmp 0x11491563 */
  goto L_11491563;
L_11491113:;
  /* 11491113 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 1149111a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11491121 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491125 jne 0x1149114e */
  if (!C.zf) goto L_1149114e;
  /* 11491127 jmp 0x1149113a */
  goto L_1149113a;
L_11491129:;
  /* 11491129 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149112c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1149112e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11491131 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491134 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491137 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1149113a:;
  /* 1149113a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1149113e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491141 jne 0x1149114e */
  if (!C.zf) goto L_1149114e;
  /* 11491143 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11491146 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491149 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 1149114c jmp 0x11491129 */
  goto L_11491129;
L_1149114e:;
  /* 1149114e jmp 0x11491161 */
  goto L_11491161;
L_11491150:;
  /* 11491150 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491153 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11491155 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11491158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149115b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149115e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11491161:;
  /* 11491161 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491168 jle 0x11491186 */
  if ((C.zf||C.sf!=C.of)) goto L_11491186;
  /* 1149116a push 4 */
  push32((uint32_t)(0x4u));
  /* 1149116c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1149116f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491175 push ecx */
  push32((uint32_t)(ECX));
  /* 11491176 call 0x1148ae80 */
  push32(0x1149117bu); f_1148ae80();
  /* 1149117b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149117e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11491184 jmp 0x114911a3 */
  goto L_114911a3;
L_11491186:;
  /* 11491186 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11491189 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1149118f mov eax, dword ptr [0x114b3b8c] */
  EAX = (r32((uint32_t)(0x114b3b8c)));
  /* 11491194 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11491196 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1149119a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1149119d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_114911a3:;
  /* 114911a3 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114911aa je 0x114911de */
  if (C.zf) goto L_114911de;
  /* 114911ac cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114911b0 jae 0x114911d9 */
  if (!C.cf) goto L_114911d9;
  /* 114911b2 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114911b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114911b8 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 114911bb movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114911bf sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114911c2 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 114911c5 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114911c7 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114911ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114911cd mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 114911d0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114911d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114911d6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_114911d9:;
  /* 114911d9 jmp 0x11491150 */
  goto L_11491150;
L_114911de:;
  /* 114911de movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114911e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 114911e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114911ee sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114911f1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 114911f7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114911fe ja 0x11491230 */
  if ((!C.cf&&!C.zf)) goto L_11491230;
  /* 11491200 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11491206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11491208 mov al, byte ptr [ecx + 0x11491848] */
  AL = (r8((uint32_t)(ECX + 0x11491848)));
  /* 1149120e jmp dword ptr [eax*4 + 0x1149183c] */
  switch (EAX) {
    case 0: goto L_1149121e;
    case 1: goto L_11491215;
    case 2: goto L_11491230;
    default: x86_unimpl("switch@0x1149120e out of table"); return;
  }
L_11491215:;
  /* 11491215 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 1149121c jmp 0x11491240 */
  goto L_11491240;
L_1149121e:;
  /* 1149121e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491221 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491224 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11491227 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 1149122e jmp 0x11491240 */
  goto L_11491240;
L_11491230:;
  /* 11491230 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11491237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149123a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149123d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11491240:;
  /* 11491240 jmp 0x11491563 */
  goto L_11491563;
L_11491245:;
  /* 11491245 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1149124c cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491253 jle 0x11491271 */
  if ((C.zf||C.sf!=C.of)) goto L_11491271;
  /* 11491255 push 4 */
  push32((uint32_t)(0x4u));
  /* 11491257 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1149125a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491260 push ecx */
  push32((uint32_t)(ECX));
  /* 11491261 call 0x1148ae80 */
  push32(0x11491266u); f_1148ae80();
  /* 11491266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491269 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1149126f jmp 0x1149128e */
  goto L_1149128e;
L_11491271:;
  /* 11491271 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11491274 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1149127a mov eax, dword ptr [0x114b3b8c] */
  EAX = (r32((uint32_t)(0x114b3b8c)));
  /* 1149127f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11491281 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11491285 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11491288 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_1149128e:;
  /* 1149128e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491295 je 0x114912a9 */
  if (C.zf) goto L_114912a9;
  /* 11491297 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 1149129e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114912a1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114912a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114912a7 jmp 0x114912b6 */
  goto L_114912b6;
L_114912a9:;
  /* 114912a9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114912b0 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 114912b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114912b6:;
  /* 114912b6 jmp 0x11491563 */
  goto L_11491563;
L_114912bb:;
  /* 114912bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114912be sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114912c1 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 114912c4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114912c8 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114912cb jl 0x114912e8 */
  if ((C.sf!=C.of)) goto L_114912e8;
  /* 114912cd movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114912d1 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114912d4 jg 0x114912e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_114912e8;
  /* 114912d6 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 114912dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114912e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114912e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114912e6 jmp 0x1149133d */
  goto L_1149133d;
L_114912e8:;
  /* 114912e8 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114912eb mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 114912f1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114912f8 je 0x11491327 */
  if (C.zf) goto L_11491327;
  /* 114912fa cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11491301 je 0x11491317 */
  if (C.zf) goto L_11491317;
  /* 11491303 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1149130a je 0x1149130e */
  if (C.zf) goto L_1149130e;
  /* 1149130c jmp 0x11491330 */
  goto L_11491330;
L_1149130e:;
  /* 1149130e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11491315 jmp 0x1149133d */
  goto L_1149133d;
L_11491317:;
  /* 11491317 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1149131e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11491325 jmp 0x1149133d */
  goto L_1149133d;
L_11491327:;
  /* 11491327 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1149132e jmp 0x1149133d */
  goto L_1149133d;
L_11491330:;
  /* 11491330 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11491337 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 1149133a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1149133d:;
  /* 1149133d jmp 0x11491563 */
  goto L_11491563;
L_11491342:;
  /* 11491342 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11491349 jmp 0x1149135c */
  goto L_1149135c;
L_1149134b:;
  /* 1149134b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149134e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11491350 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11491353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491356 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1149135c:;
  /* 1149135c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11491360 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491363 jne 0x11491367 */
  if (!C.zf) goto L_11491367;
  /* 11491365 jmp 0x1149134b */
  goto L_1149134b;
L_11491367:;
  /* 11491367 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1149136b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149136e jl 0x1149138b */
  if ((C.sf!=C.of)) goto L_1149138b;
  /* 11491370 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11491374 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491377 jg 0x1149138b */
  if ((!C.zf&&C.sf==C.of)) goto L_1149138b;
  /* 11491379 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11491380 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491383 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491386 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11491389 jmp 0x1149139b */
  goto L_1149139b;
L_1149138b:;
  /* 1149138b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11491392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491395 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491398 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1149139b:;
  /* 1149139b jmp 0x11491563 */
  goto L_11491563;
L_114913a0:;
  /* 114913a0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114913a4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114913a7 jl 0x114913c4 */
  if ((C.sf!=C.of)) goto L_114913c4;
  /* 114913a9 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114913ad cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114913b0 jg 0x114913c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_114913c4;
  /* 114913b2 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 114913b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114913bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114913bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114913c2 jmp 0x114913ee */
  goto L_114913ee;
L_114913c4:;
  /* 114913c4 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114913c7 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 114913cd cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114913d4 je 0x114913d8 */
  if (C.zf) goto L_114913d8;
  /* 114913d6 jmp 0x114913e1 */
  goto L_114913e1;
L_114913d8:;
  /* 114913d8 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 114913df jmp 0x114913ee */
  goto L_114913ee;
L_114913e1:;
  /* 114913e1 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114913e8 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 114913eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114913ee:;
  /* 114913ee jmp 0x11491563 */
  goto L_11491563;
L_114913f3:;
  /* 114913f3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 114913fa mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11491401 jmp 0x11491414 */
  goto L_11491414;
L_11491403:;
  /* 11491403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491406 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11491408 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 1149140b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149140e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491411 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11491414:;
  /* 11491414 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149141b jle 0x11491439 */
  if ((C.zf||C.sf!=C.of)) goto L_11491439;
  /* 1149141d push 4 */
  push32((uint32_t)(0x4u));
  /* 1149141f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11491422 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11491428 push edx */
  push32((uint32_t)(EDX));
  /* 11491429 call 0x1148ae80 */
  push32(0x1149142eu); f_1148ae80();
  /* 1149142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491431 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11491437 jmp 0x11491456 */
  goto L_11491456;
L_11491439:;
  /* 11491439 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1149143c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491441 mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 11491447 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11491449 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1149144d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11491450 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11491456:;
  /* 11491456 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149145d je 0x11491487 */
  if (C.zf) goto L_11491487;
  /* 1149145f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11491462 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11491465 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11491469 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 1149146d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11491470 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491477 jle 0x11491482 */
  if ((C.zf||C.sf!=C.of)) goto L_11491482;
  /* 11491479 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11491480 jmp 0x11491487 */
  goto L_11491487;
L_11491482:;
  /* 11491482 jmp 0x11491403 */
  goto L_11491403;
L_11491487:;
  /* 11491487 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149148a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1149148d jmp 0x114914a0 */
  goto L_114914a0;
L_1149148f:;
  /* 1149148f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491492 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11491494 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11491497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149149a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149149d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114914a0:;
  /* 114914a0 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114914a7 jle 0x114914c5 */
  if ((C.zf||C.sf!=C.of)) goto L_114914c5;
  /* 114914a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 114914ab mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114914ae and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114914b4 push ecx */
  push32((uint32_t)(ECX));
  /* 114914b5 call 0x1148ae80 */
  push32(0x114914bau); f_1148ae80();
  /* 114914ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114914bd mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 114914c3 jmp 0x114914e2 */
  goto L_114914e2;
L_114914c5:;
  /* 114914c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114914c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114914ce mov eax, dword ptr [0x114b3b8c] */
  EAX = (r32((uint32_t)(0x114b3b8c)));
  /* 114914d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114914d5 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114914d9 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114914dc mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_114914e2:;
  /* 114914e2 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114914e9 je 0x114914ed */
  if (C.zf) goto L_114914ed;
  /* 114914eb jmp 0x1149148f */
  goto L_1149148f;
L_114914ed:;
  /* 114914ed mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114914f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114914f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114914fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114914fd jmp 0x11491563 */
  goto L_11491563;
L_114914ff:;
  /* 114914ff cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491503 je 0x11491553 */
  if (C.zf) goto L_11491553;
  /* 11491505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491508 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149150b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 1149150e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11491511 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11491517 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1149151e je 0x1149153b */
  if (C.zf) goto L_1149153b;
  /* 11491520 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11491527 je 0x1149152b */
  if (C.zf) goto L_1149152b;
  /* 11491529 jmp 0x11491544 */
  goto L_11491544;
L_1149152b:;
  /* 1149152b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11491532 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11491539 jmp 0x11491551 */
  goto L_11491551;
L_1149153b:;
  /* 1149153b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11491542 jmp 0x11491551 */
  goto L_11491551;
L_11491544:;
  /* 11491544 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1149154b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 1149154e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11491551:;
  /* 11491551 jmp 0x11491563 */
  goto L_11491563;
L_11491553:;
  /* 11491553 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1149155a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149155d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491560 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11491563:;
  /* 11491563 jmp 0x11490e07 */
  goto L_11490e07;
L_11491568:;
  /* 11491568 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149156b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149156e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11491570 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491574 je 0x114916b7 */
  if (C.zf) goto L_114916b7;
  /* 1149157a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149157e jne 0x114916b7 */
  if (!C.zf) goto L_114916b7;
  /* 11491584 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491588 jne 0x114916b7 */
  if (!C.zf) goto L_114916b7;
  /* 1149158e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491592 jbe 0x114915bf */
  if ((C.cf||C.zf)) goto L_114915bf;
  /* 11491594 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11491598 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149159b jl 0x114915a6 */
  if ((C.sf!=C.of)) goto L_114915a6;
  /* 1149159d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 114915a0 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114915a3 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_114915a6:;
  /* 114915a6 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 114915ad mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114915b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114915b3 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 114915b6 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114915b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114915bc mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_114915bf:;
  /* 114915bf cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114915c3 jbe 0x1149169a */
  if ((C.cf||C.zf)) goto L_1149169a;
  /* 114915c9 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 114915cc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114915cf mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 114915d2 jmp 0x114915dd */
  goto L_114915dd;
L_114915d4:;
  /* 114915d4 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114915d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114915da mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_114915dd:;
  /* 114915dd mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 114915e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114915e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114915e5 jne 0x114915fb */
  if (!C.zf) goto L_114915fb;
  /* 114915e7 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114915ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114915ed mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 114915f0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114915f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114915f6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 114915f9 jmp 0x114915d4 */
  goto L_114915d4;
L_114915fb:;
  /* 114915fb lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 114915fe push ecx */
  push32((uint32_t)(ECX));
  /* 114915ff mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11491602 push edx */
  push32((uint32_t)(EDX));
  /* 11491603 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11491606 push eax */
  push32((uint32_t)(EAX));
  /* 11491607 call 0x11490c20 */
  push32(0x1149160cu); f_11490c20();
  /* 1149160c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149160f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491613 jge 0x1149161d */
  if ((C.sf==C.of)) goto L_1149161d;
  /* 11491615 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11491618 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1149161a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1149161d:;
  /* 1149161d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11491620 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491623 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11491626 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149162a jne 0x11491635 */
  if (!C.zf) goto L_11491635;
  /* 1149162c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149162f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491632 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11491635:;
  /* 11491635 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491639 jne 0x11491644 */
  if (!C.zf) goto L_11491644;
  /* 1149163b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149163e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491641 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11491644:;
  /* 11491644 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149164b jle 0x11491656 */
  if ((C.zf||C.sf!=C.of)) goto L_11491656;
  /* 1149164d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11491654 jmp 0x11491698 */
  goto L_11491698;
L_11491656:;
  /* 11491656 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149165d jge 0x11491668 */
  if ((C.sf==C.of)) goto L_11491668;
  /* 1149165f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11491666 jmp 0x11491698 */
  goto L_11491698;
L_11491668:;
  /* 11491668 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149166b push edx */
  push32((uint32_t)(EDX));
  /* 1149166c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149166f push eax */
  push32((uint32_t)(EAX));
  /* 11491670 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11491673 push ecx */
  push32((uint32_t)(ECX));
  /* 11491674 call 0x11495120 */
  push32(0x11491679u); f_11495120();
  /* 11491679 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149167c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11491680 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11491684 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11491687 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149168a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 1149168d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11491690 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11491694 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11491698:;
  /* 11491698 jmp 0x114916b7 */
  goto L_114916b7;
L_1149169a:;
  /* 1149169a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 114916a0 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 114916a6 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114916a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114916ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114916b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114916b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114916b7:;
  /* 114916b7 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114916bb jne 0x114916e6 */
  if (!C.zf) goto L_114916e6;
  /* 114916bd mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 114916c3 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 114916c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114916cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114916d2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114916d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114916d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114916db mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 114916de or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114916e1 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 114916e4 jmp 0x1149173d */
  goto L_1149173d;
L_114916e6:;
  /* 114916e6 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114916ea je 0x11491711 */
  if (C.zf) goto L_11491711;
  /* 114916ec mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 114916f2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 114916f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11491700 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11491706 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11491709 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1149170c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 1149170f jmp 0x1149173d */
  goto L_1149173d;
L_11491711:;
  /* 11491711 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491715 je 0x1149173d */
  if (C.zf) goto L_1149173d;
  /* 11491717 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 1149171d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11491723 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11491726 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149172b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1149172e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11491731 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11491734 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11491737 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1149173a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_1149173d:;
  /* 1149173d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11491740 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11491744 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11491747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149174a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149174d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11491750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11491753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11491756 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11491759 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1149175c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491761 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11491764 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1149176a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1149176c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149176f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11491773 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11491776 mov esp, ebp */
  ESP = (EBP);
  /* 11491778 pop ebp */
  EBP = (pop32());
  /* 11491779 ret  */
  ESPCHK(0x11490d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011890 @ 0x11491890 (79 bytes, 33 insns) */
void f_11491890(void) {
  FTRACE(0x11491890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11491890 push ebp */
  push32((uint32_t)(EBP));
  /* 11491891 mov ebp, esp */
  EBP = (ESP);
  /* 11491893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491896 push 0 */
  push32((uint32_t)(0x0u));
  /* 11491898 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149189a push 0 */
  push32((uint32_t)(0x0u));
  /* 1149189c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1149189f push eax */
  push32((uint32_t)(EAX));
  /* 114918a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114918a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114918a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114918a7 push edx */
  push32((uint32_t)(EDX));
  /* 114918a8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114918ab push eax */
  push32((uint32_t)(EAX));
  /* 114918ac call 0x11490d60 */
  push32(0x114918b1u); f_11490d60();
  /* 114918b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114918b4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114918b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114918ba push ecx */
  push32((uint32_t)(ECX));
  /* 114918bb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114918be push edx */
  push32((uint32_t)(EDX));
  /* 114918bf call 0x1148b780 */
  push32(0x114918c4u); f_1148b780();
  /* 114918c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114918c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114918ca cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114918ce jne 0x114918d8 */
  if (!C.zf) goto L_114918d8;
  /* 114918d0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114918d3 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 114918d5 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_114918d8:;
  /* 114918d8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114918db mov esp, ebp */
  ESP = (EBP);
  /* 114918dd pop ebp */
  EBP = (pop32());
  /* 114918de ret  */
  ESPCHK(0x11491890u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x114918e0 (1302 bytes, 386 insns) */
void f_114918e0(void) {
  FTRACE(0x114918e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114918e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114918e1 mov ebp, esp */
  EBP = (ESP);
  /* 114918e3 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114918e6 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 114918ec mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 114918f2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 114918f8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 114918ff mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11491903 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11491907 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 1149190b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 1149190f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11491913 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11491917 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 1149191b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 1149191f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11491923 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11491927 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 1149192b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 1149192f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11491936 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 1149193a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 1149193e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11491941 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11491944 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11491947 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 1149194a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 1149194d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491952 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11491957 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 1149195b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 1149195f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11491964 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11491968 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1149196b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11491971 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11491973 je 0x1149197e */
  if (C.zf) goto L_1149197e;
  /* 11491975 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491978 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 1149197c jmp 0x11491985 */
  goto L_11491985;
L_1149197e:;
  /* 1149197e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491981 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11491985:;
  /* 11491985 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11491988 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1149198e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11491990 jne 0x114919cc */
  if (!C.zf) goto L_114919cc;
  /* 11491992 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491996 jne 0x114919cc */
  if (!C.zf) goto L_114919cc;
  /* 11491998 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149199c jne 0x114919cc */
  if (!C.zf) goto L_114919cc;
  /* 1149199e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114919a1 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 114919a6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114919a9 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 114919ad mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114919b0 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 114919b4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114919b7 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 114919bb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114919be mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 114919c2 mov eax, 1 */
  EAX = (0x1u);
  /* 114919c7 jmp 0x11491df2 */
  goto L_11491df2;
L_114919cc:;
  /* 114919cc mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114919cf and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114919d5 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114919db jne 0x11491ac6 */
  if (!C.zf) goto L_11491ac6;
  /* 114919e1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114919e4 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 114919e9 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114919f0 jne 0x114919f8 */
  if (!C.zf) goto L_114919f8;
  /* 114919f2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114919f6 je 0x11491a2c */
  if (C.zf) goto L_11491a2c;
L_114919f8:;
  /* 114919f8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114919fb and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11491a01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11491a03 jne 0x11491a2c */
  if (!C.zf) goto L_11491a2c;
  /* 11491a05 push 0x114b12d8 */
  push32((uint32_t)(0x114b12d8u));
  /* 11491a0a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491a0d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491a10 push edx */
  push32((uint32_t)(EDX));
  /* 11491a11 call 0x1148a070 */
  push32(0x11491a16u); f_1148a070();
  /* 11491a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491a19 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491a1c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11491a20 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11491a27 jmp 0x11491ac1 */
  goto L_11491ac1;
L_11491a2c:;
  /* 11491a2c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11491a2f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491a35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11491a37 je 0x11491a6c */
  if (C.zf) goto L_11491a6c;
  /* 11491a39 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491a40 jne 0x11491a6c */
  if (!C.zf) goto L_11491a6c;
  /* 11491a42 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491a46 jne 0x11491a6c */
  if (!C.zf) goto L_11491a6c;
  /* 11491a48 push 0x114b12d0 */
  push32((uint32_t)(0x114b12d0u));
  /* 11491a4d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491a50 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491a53 push edx */
  push32((uint32_t)(EDX));
  /* 11491a54 call 0x1148a070 */
  push32(0x11491a59u); f_1148a070();
  /* 11491a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491a5c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491a5f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11491a63 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11491a6a jmp 0x11491ac1 */
  goto L_11491ac1;
L_11491a6c:;
  /* 11491a6c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491a73 jne 0x11491a9f */
  if (!C.zf) goto L_11491a9f;
  /* 11491a75 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491a79 jne 0x11491a9f */
  if (!C.zf) goto L_11491a9f;
  /* 11491a7b push 0x114b12c8 */
  push32((uint32_t)(0x114b12c8u));
  /* 11491a80 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491a83 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491a86 push ecx */
  push32((uint32_t)(ECX));
  /* 11491a87 call 0x1148a070 */
  push32(0x11491a8cu); f_1148a070();
  /* 11491a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491a8f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491a92 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11491a96 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11491a9d jmp 0x11491ac1 */
  goto L_11491ac1;
L_11491a9f:;
  /* 11491a9f push 0x114b12c0 */
  push32((uint32_t)(0x114b12c0u));
  /* 11491aa4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491aa7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491aaa push eax */
  push32((uint32_t)(EAX));
  /* 11491aab call 0x1148a070 */
  push32(0x11491ab0u); f_1148a070();
  /* 11491ab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491ab3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491ab6 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11491aba mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11491ac1:;
  /* 11491ac1 jmp 0x11491def */
  goto L_11491def;
L_11491ac6:;
  /* 11491ac6 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11491ac9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11491acf sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11491ad2 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11491ad6 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11491ad9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491ade and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491ae3 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11491ae7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11491aea shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11491aed mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11491af1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11491af4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11491afa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11491afd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491b02 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11491b05 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11491b08 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491b0e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11491b11 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491b16 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11491b19 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491b1b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11491b1e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491b24 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11491b27 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491b2c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11491b2f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491b31 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491b34 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11491b37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11491b3a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11491b3d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11491b41 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11491b45 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11491b49 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11491b4c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11491b4f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11491b52 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11491b55 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11491b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11491b5d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11491b61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11491b63 push edx */
  push32((uint32_t)(EDX));
  /* 11491b64 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11491b67 push eax */
  push32((uint32_t)(EAX));
  /* 11491b68 call 0x11495120 */
  push32(0x11491b6du); f_11495120();
  /* 11491b6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491b70 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11491b73 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11491b79 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491b7f jl 0x11491b9d */
  if ((C.sf!=C.of)) goto L_11491b9d;
  /* 11491b81 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11491b85 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11491b89 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11491b8d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11491b90 push eax */
  push32((uint32_t)(EAX));
  /* 11491b91 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11491b94 push ecx */
  push32((uint32_t)(ECX));
  /* 11491b95 call 0x11494ce0 */
  push32(0x11491b9au); f_11494ce0();
  /* 11491b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11491b9d:;
  /* 11491b9d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491ba0 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11491ba4 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11491ba7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11491baa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11491bad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11491baf je 0x11491bf1 */
  if (C.zf) goto L_11491bf1;
  /* 11491bb1 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11491bb5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11491bb8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491bba mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11491bbd cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491bc1 jg 0x11491bf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11491bf1;
  /* 11491bc3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491bc6 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11491bcb mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491bce mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11491bd2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491bd5 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11491bd9 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491bdc mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11491be0 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491be3 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11491be7 mov eax, 1 */
  EAX = (0x1u);
  /* 11491bec jmp 0x11491df2 */
  goto L_11491df2;
L_11491bf1:;
  /* 11491bf1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491bf5 jle 0x11491bfe */
  if ((C.zf||C.sf!=C.of)) goto L_11491bfe;
  /* 11491bf7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11491bfe:;
  /* 11491bfe mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11491c01 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491c06 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491c0b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11491c0e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11491c14 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11491c1b jmp 0x11491c26 */
  goto L_11491c26;
L_11491c1d:;
  /* 11491c1d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11491c20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491c23 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11491c26:;
  /* 11491c26 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491c2a jge 0x11491c3a */
  if ((C.sf==C.of)) goto L_11491c3a;
  /* 11491c2c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11491c2f push edx */
  push32((uint32_t)(EDX));
  /* 11491c30 call 0x11490b50 */
  push32(0x11491c35u); f_11490b50();
  /* 11491c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491c38 jmp 0x11491c1d */
  goto L_11491c1d;
L_11491c3a:;
  /* 11491c3a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491c3e jge 0x11491c6c */
  if ((C.sf==C.of)) goto L_11491c6c;
  /* 11491c40 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11491c43 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11491c45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11491c4a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11491c4d jmp 0x11491c58 */
  goto L_11491c58;
L_11491c4f:;
  /* 11491c4f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11491c52 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491c55 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11491c58:;
  /* 11491c58 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491c5c jle 0x11491c6c */
  if ((C.zf||C.sf!=C.of)) goto L_11491c6c;
  /* 11491c5e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11491c61 push edx */
  push32((uint32_t)(EDX));
  /* 11491c62 call 0x11490bb0 */
  push32(0x11491c67u); f_11490bb0();
  /* 11491c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491c6a jmp 0x11491c4f */
  goto L_11491c4f;
L_11491c6c:;
  /* 11491c6c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491c6f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491c72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11491c75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11491c78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491c7b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11491c7e jmp 0x11491c89 */
  goto L_11491c89;
L_11491c80:;
  /* 11491c80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11491c83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491c86 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11491c89:;
  /* 11491c89 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491c8d jle 0x11491cf5 */
  if ((C.zf||C.sf!=C.of)) goto L_11491cf5;
  /* 11491c8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11491c92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11491c95 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11491c98 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11491c9b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11491c9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11491ca1 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11491ca4 push eax */
  push32((uint32_t)(EAX));
  /* 11491ca5 call 0x11490b50 */
  push32(0x11491caau); f_11490b50();
  /* 11491caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491cad lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11491cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11491cb1 call 0x11490b50 */
  push32(0x11491cb6u); f_11490b50();
  /* 11491cb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491cb9 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11491cbc push edx */
  push32((uint32_t)(EDX));
  /* 11491cbd lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11491cc0 push eax */
  push32((uint32_t)(EAX));
  /* 11491cc1 call 0x11490aa0 */
  push32(0x11491cc6u); f_11490aa0();
  /* 11491cc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491cc9 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11491ccc push ecx */
  push32((uint32_t)(ECX));
  /* 11491ccd call 0x11490b50 */
  push32(0x11491cd2u); f_11490b50();
  /* 11491cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491cd5 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11491cd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11491cde add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ce4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11491ce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ce9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491cec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11491cef mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11491cf3 jmp 0x11491c80 */
  goto L_11491c80;
L_11491cf5:;
  /* 11491cf5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491cf8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491cfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11491cfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d01 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11491d03 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11491d06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491d0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11491d0f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11491d13 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d16 jl 0x11491d73 */
  if ((C.sf!=C.of)) goto L_11491d73;
  /* 11491d18 jmp 0x11491d23 */
  goto L_11491d23;
L_11491d1a:;
  /* 11491d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491d20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11491d23:;
  /* 11491d23 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491d26 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491d29 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d2c jb 0x11491d41 */
  if (C.cf) goto L_11491d41;
  /* 11491d2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d31 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11491d34 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d37 jne 0x11491d41 */
  if (!C.zf) goto L_11491d41;
  /* 11491d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d3c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11491d3f jmp 0x11491d1a */
  goto L_11491d1a;
L_11491d41:;
  /* 11491d41 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491d44 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491d47 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d4a jae 0x11491d65 */
  if (!C.cf) goto L_11491d65;
  /* 11491d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491d52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11491d55 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491d58 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11491d5b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11491d5f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491d62 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11491d65:;
  /* 11491d65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11491d6a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11491d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d6f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11491d71 jmp 0x11491dcc */
  goto L_11491dcc;
L_11491d73:;
  /* 11491d73 jmp 0x11491d7e */
  goto L_11491d7e;
L_11491d75:;
  /* 11491d75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d78 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491d7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11491d7e:;
  /* 11491d7e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491d81 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491d84 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d87 jb 0x11491d96 */
  if (C.cf) goto L_11491d96;
  /* 11491d89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491d8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11491d8f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d92 jne 0x11491d96 */
  if (!C.zf) goto L_11491d96;
  /* 11491d94 jmp 0x11491d75 */
  goto L_11491d75;
L_11491d96:;
  /* 11491d96 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491d99 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491d9c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491d9f jae 0x11491dcc */
  if (!C.cf) goto L_11491dcc;
  /* 11491da1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491da4 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11491da9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491dac mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11491db0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491db3 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11491db7 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491dba mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11491dbe mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491dc1 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11491dc5 mov eax, 1 */
  EAX = (0x1u);
  /* 11491dca jmp 0x11491df2 */
  goto L_11491df2;
L_11491dcc:;
  /* 11491dcc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491dcf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491dd5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491dd7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491dda mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491ddd mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11491de0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491de3 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11491de7 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11491dea mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11491def:;
  /* 11491def mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11491df2:;
  /* 11491df2 mov esp, ebp */
  ESP = (EBP);
  /* 11491df4 pop ebp */
  EBP = (pop32());
  /* 11491df5 ret  */
  ESPCHK(0x114918e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x11491e00 (482 bytes, 138 insns) */
void f_11491e00(void) {
  FTRACE(0x11491e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11491e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11491e01 mov ebp, esp */
  EBP = (ESP);
  /* 11491e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491e06 push esi */
  push32((uint32_t)(ESI));
  /* 11491e07 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11491e0e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11491e10 call 0x1148ca30 */
  push32(0x11491e15u); f_1148ca30();
  /* 11491e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491e18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11491e1f jmp 0x11491e2a */
  goto L_11491e2a;
L_11491e21:;
  /* 11491e21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491e24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491e27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11491e2a:;
  /* 11491e2a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491e2e jge 0x11491fd0 */
  if ((C.sf==C.of)) goto L_11491fd0;
  /* 11491e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491e37 cmp dword ptr [ecx*4 + 0x114b7ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x114b7ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491e3f je 0x11491f36 */
  if (C.zf) goto L_11491f36;
  /* 11491e45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491e48 mov eax, dword ptr [edx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 11491e4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11491e52 jmp 0x11491e5d */
  goto L_11491e5d;
L_11491e54:;
  /* 11491e54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491e57 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491e5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11491e5d:;
  /* 11491e5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491e60 mov eax, dword ptr [edx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 11491e67 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491e6c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491e6f jae 0x11491f26 */
  if (!C.cf) goto L_11491f26;
  /* 11491e75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491e78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11491e7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11491e7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11491e81 jne 0x11491f21 */
  if (!C.zf) goto L_11491f21;
  /* 11491e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491e8a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491e8e jne 0x11491ec9 */
  if (!C.zf) goto L_11491ec9;
  /* 11491e90 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11491e92 call 0x1148ca30 */
  push32(0x11491e97u); f_1148ca30();
  /* 11491e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491e9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491e9d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491ea1 jne 0x11491ebf */
  if (!C.zf) goto L_11491ebf;
  /* 11491ea3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ea6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491ea9 push edx */
  push32((uint32_t)(EDX));
  /* 11491eaa call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x11491eb0u);
  /* 11491eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491eb3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11491eb6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491eb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ebc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11491ebf:;
  /* 11491ebf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11491ec1 call 0x1148cad0 */
  push32(0x11491ec6u); f_1148cad0();
  /* 11491ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11491ec9:;
  /* 11491ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ecc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491ecf push eax */
  push32((uint32_t)(EAX));
  /* 11491ed0 call dword ptr [0x114b9338] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9338))), 0x11491ed6u);
  /* 11491ed6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ed9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11491edd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11491ee0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11491ee2 je 0x11491ef6 */
  if (C.zf) goto L_11491ef6;
  /* 11491ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ee7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491eea push eax */
  push32((uint32_t)(EAX));
  /* 11491eeb call dword ptr [0x114b9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9334))), 0x11491ef1u);
  /* 11491ef1 jmp 0x11491e54 */
  goto L_11491e54;
L_11491ef6:;
  /* 11491ef6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491ef9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11491eff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491f02 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11491f05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491f0b sub eax, dword ptr [edx*4 + 0x114b7ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x114b7ec0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11491f12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11491f13 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11491f18 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11491f1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491f1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11491f1f jmp 0x11491f26 */
  goto L_11491f26;
L_11491f21:;
  /* 11491f21 jmp 0x11491e54 */
  goto L_11491e54;
L_11491f26:;
  /* 11491f26 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491f2a je 0x11491f31 */
  if (C.zf) goto L_11491f31;
  /* 11491f2c jmp 0x11491fd0 */
  goto L_11491fd0;
L_11491f31:;
  /* 11491f31 jmp 0x11491fcb */
  goto L_11491fcb;
L_11491f36:;
  /* 11491f36 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11491f38 push 0x114b12e0 */
  push32((uint32_t)(0x114b12e0u));
  /* 11491f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11491f3f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11491f44 call 0x114870c0 */
  push32(0x11491f49u); f_114870c0();
  /* 11491f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491f4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11491f4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491f53 je 0x11491fc9 */
  if (C.zf) goto L_11491fc9;
  /* 11491f55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491f5b mov dword ptr [eax*4 + 0x114b7ec0], ecx */
  w32((uint32_t)(EAX*4 + 0x114b7ec0), (ECX));
  /* 11491f62 mov edx, dword ptr [0x114b7ffc] */
  EDX = (r32((uint32_t)(0x114b7ffc)));
  /* 11491f68 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491f6b mov dword ptr [0x114b7ffc], edx */
  w32((uint32_t)(0x114b7ffc), (EDX));
  /* 11491f71 jmp 0x11491f7c */
  goto L_11491f7c;
L_11491f73:;
  /* 11491f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491f76 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491f79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11491f7c:;
  /* 11491f7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491f7f mov edx, dword ptr [ecx*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 11491f86 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11491f8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491f8f jae 0x11491fb4 */
  if (!C.cf) goto L_11491fb4;
  /* 11491f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491f94 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11491f98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491f9b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11491fa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491fa4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11491fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11491fab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11491fb2 jmp 0x11491f73 */
  goto L_11491f73;
L_11491fb4:;
  /* 11491fb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11491fb7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11491fba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11491fbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11491fc0 push edx */
  push32((uint32_t)(EDX));
  /* 11491fc1 call 0x11492310 */
  push32(0x11491fc6u); f_11492310();
  /* 11491fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11491fc9:;
  /* 11491fc9 jmp 0x11491fd0 */
  goto L_11491fd0;
L_11491fcb:;
  /* 11491fcb jmp 0x11491e21 */
  goto L_11491e21;
L_11491fd0:;
  /* 11491fd0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11491fd2 call 0x1148cad0 */
  push32(0x11491fd7u); f_1148cad0();
  /* 11491fd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11491fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11491fdd pop esi */
  ESI = (pop32());
  /* 11491fde mov esp, ebp */
  ESP = (EBP);
  /* 11491fe0 pop ebp */
  EBP = (pop32());
  /* 11491fe1 ret  */
  ESPCHK(0x11491e00u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11491ff0 (183 bytes, 57 insns) */
void f_11491ff0(void) {
  FTRACE(0x11491ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11491ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11491ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11491ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11491ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11491ff7 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11491ffd jae 0x1149208a */
  if (!C.cf) goto L_1149208a;
  /* 11492003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492006 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11492009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149200c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1149200f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11492012 mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 11492019 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149201d jne 0x1149208a */
  if (!C.zf) goto L_1149208a;
  /* 1149201f cmp dword ptr [0x114b64ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b64ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492026 jne 0x1149206a */
  if (!C.zf) goto L_1149206a;
  /* 11492028 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149202b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1149202e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492032 je 0x11492042 */
  if (C.zf) goto L_11492042;
  /* 11492034 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492038 je 0x11492050 */
  if (C.zf) goto L_11492050;
  /* 1149203a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149203e je 0x1149205e */
  if (C.zf) goto L_1149205e;
  /* 11492040 jmp 0x1149206a */
  goto L_1149206a;
L_11492042:;
  /* 11492042 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11492045 push edx */
  push32((uint32_t)(EDX));
  /* 11492046 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11492048 call dword ptr [0x114b92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f4))), 0x1149204eu);
  /* 1149204e jmp 0x1149206a */
  goto L_1149206a;
L_11492050:;
  /* 11492050 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11492053 push eax */
  push32((uint32_t)(EAX));
  /* 11492054 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11492056 call dword ptr [0x114b92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f4))), 0x1149205cu);
  /* 1149205c jmp 0x1149206a */
  goto L_1149206a;
L_1149205e:;
  /* 1149205e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11492061 push ecx */
  push32((uint32_t)(ECX));
  /* 11492062 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11492064 call dword ptr [0x114b92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f4))), 0x1149206au);
L_1149206a:;
  /* 1149206a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149206d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11492070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492073 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11492076 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11492079 mov ecx, dword ptr [edx*4 + 0x114b7ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 11492080 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11492083 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11492086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11492088 jmp 0x114920a3 */
  goto L_114920a3;
L_1149208a:;
  /* 1149208a call 0x1148fad0 */
  push32(0x1149208fu); f_1148fad0();
  /* 1149208f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11492095 call 0x1148fae0 */
  push32(0x1149209au); f_1148fae0();
  /* 1149209a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114920a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114920a3:;
  /* 114920a3 mov esp, ebp */
  ESP = (EBP);
  /* 114920a5 pop ebp */
  EBP = (pop32());
  /* 114920a6 ret  */
  ESPCHK(0x11491ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x114920b0 (216 bytes, 63 insns) */
void f_114920b0(void) {
  FTRACE(0x114920b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114920b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114920b1 mov ebp, esp */
  EBP = (ESP);
  /* 114920b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114920b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114920b7 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114920bd jae 0x1149216b */
  if (!C.cf) goto L_1149216b;
  /* 114920c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114920c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114920c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114920cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114920cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114920d2 mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 114920d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114920de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114920e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114920e3 je 0x1149216b */
  if (C.zf) goto L_1149216b;
  /* 114920e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114920ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114920ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114920f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114920f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114920f8 mov ecx, dword ptr [edx*4 + 0x114b7ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 114920ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492103 je 0x1149216b */
  if (C.zf) goto L_1149216b;
  /* 11492105 cmp dword ptr [0x114b64ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b64ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149210c jne 0x1149214a */
  if (!C.zf) goto L_1149214a;
  /* 1149210e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492111 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11492114 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492118 je 0x11492128 */
  if (C.zf) goto L_11492128;
  /* 1149211a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149211e je 0x11492134 */
  if (C.zf) goto L_11492134;
  /* 11492120 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492124 je 0x11492140 */
  if (C.zf) goto L_11492140;
  /* 11492126 jmp 0x1149214a */
  goto L_1149214a;
L_11492128:;
  /* 11492128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149212a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1149212c call dword ptr [0x114b92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f4))), 0x11492132u);
  /* 11492132 jmp 0x1149214a */
  goto L_1149214a;
L_11492134:;
  /* 11492134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11492136 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11492138 call dword ptr [0x114b92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f4))), 0x1149213eu);
  /* 1149213e jmp 0x1149214a */
  goto L_1149214a;
L_11492140:;
  /* 11492140 push 0 */
  push32((uint32_t)(0x0u));
  /* 11492142 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11492144 call dword ptr [0x114b92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92f4))), 0x1149214au);
L_1149214a:;
  /* 1149214a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149214d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11492150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492153 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11492156 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11492159 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 11492160 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11492167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11492169 jmp 0x11492184 */
  goto L_11492184;
L_1149216b:;
  /* 1149216b call 0x1148fad0 */
  push32(0x11492170u); f_1148fad0();
  /* 11492170 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11492176 call 0x1148fae0 */
  push32(0x1149217bu); f_1148fae0();
  /* 1149217b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11492181 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11492184:;
  /* 11492184 mov esp, ebp */
  ESP = (EBP);
  /* 11492186 pop ebp */
  EBP = (pop32());
  /* 11492187 ret  */
  ESPCHK(0x114920b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x11492190 (102 bytes, 30 insns) */
void f_11492190(void) {
  FTRACE(0x11492190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492190 push ebp */
  push32((uint32_t)(EBP));
  /* 11492191 mov ebp, esp */
  EBP = (ESP);
  /* 11492193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492196 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149219c jae 0x114921db */
  if (!C.cf) goto L_114921db;
  /* 1149219e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114921a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114921a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114921a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114921aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114921ad mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 114921b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114921b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114921bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114921be je 0x114921db */
  if (C.zf) goto L_114921db;
  /* 114921c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114921c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114921c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114921c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114921cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114921cf mov ecx, dword ptr [edx*4 + 0x114b7ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 114921d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 114921d9 jmp 0x114921f4 */
  goto L_114921f4;
L_114921db:;
  /* 114921db call 0x1148fad0 */
  push32(0x114921e0u); f_1148fad0();
  /* 114921e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114921e6 call 0x1148fae0 */
  push32(0x114921ebu); f_1148fae0();
  /* 114921eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114921f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114921f4:;
  /* 114921f4 pop ebp */
  EBP = (pop32());
  /* 114921f5 ret  */
  ESPCHK(0x11492190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x11492200 (260 bytes, 83 insns) */
void f_11492200(void) {
  FTRACE(0x11492200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492200 push ebp */
  push32((uint32_t)(EBP));
  /* 11492201 mov ebp, esp */
  EBP = (ESP);
  /* 11492203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11492206 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1149220a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149220d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11492210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11492212 je 0x1149221d */
  if (C.zf) goto L_1149221d;
  /* 11492214 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11492217 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1149221a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1149221d:;
  /* 1149221d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11492220 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11492226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11492228 je 0x11492232 */
  if (C.zf) goto L_11492232;
  /* 1149222a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1149222d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1149222f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11492232:;
  /* 11492232 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11492235 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1149223b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149223d je 0x11492248 */
  if (C.zf) goto L_11492248;
  /* 1149223f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11492242 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11492245 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11492248:;
  /* 11492248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149224b push eax */
  push32((uint32_t)(EAX));
  /* 1149224c call dword ptr [0x114b93b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93b8))), 0x11492252u);
  /* 11492252 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11492255 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492259 jne 0x11492272 */
  if (!C.zf) goto L_11492272;
  /* 1149225b call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x11492261u);
  /* 11492261 push eax */
  push32((uint32_t)(EAX));
  /* 11492262 call 0x1148fa30 */
  push32(0x11492267u); f_1148fa30();
  /* 11492267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149226a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149226d jmp 0x11492300 */
  goto L_11492300;
L_11492272:;
  /* 11492272 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492276 jne 0x11492283 */
  if (!C.zf) goto L_11492283;
  /* 11492278 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1149227b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1149227e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11492281 jmp 0x11492292 */
  goto L_11492292;
L_11492283:;
  /* 11492283 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492287 jne 0x11492292 */
  if (!C.zf) goto L_11492292;
  /* 11492289 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1149228c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1149228f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11492292:;
  /* 11492292 call 0x11491e00 */
  push32(0x11492297u); f_11491e00();
  /* 11492297 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149229a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149229e jne 0x114922bb */
  if (!C.zf) goto L_114922bb;
  /* 114922a0 call 0x1148fad0 */
  push32(0x114922a5u); f_1148fad0();
  /* 114922a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 114922ab call 0x1148fae0 */
  push32(0x114922b0u); f_1148fae0();
  /* 114922b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114922b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114922b9 jmp 0x11492300 */
  goto L_11492300;
L_114922bb:;
  /* 114922bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114922be push eax */
  push32((uint32_t)(EAX));
  /* 114922bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114922c2 push ecx */
  push32((uint32_t)(ECX));
  /* 114922c3 call 0x11491ff0 */
  push32(0x114922c8u); f_11491ff0();
  /* 114922c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114922cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 114922ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 114922d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 114922d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114922d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114922da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114922dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114922e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114922e3 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 114922ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 114922ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 114922f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114922f4 push ecx */
  push32((uint32_t)(ECX));
  /* 114922f5 call 0x114923a0 */
  push32(0x114922fau); f_114923a0();
  /* 114922fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114922fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11492300:;
  /* 11492300 mov esp, ebp */
  ESP = (EBP);
  /* 11492302 pop ebp */
  EBP = (pop32());
  /* 11492303 ret  */
  ESPCHK(0x11492200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x11492310 (134 bytes, 44 insns) */
void f_11492310(void) {
  FTRACE(0x11492310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492310 push ebp */
  push32((uint32_t)(EBP));
  /* 11492311 mov ebp, esp */
  EBP = (ESP);
  /* 11492313 push ecx */
  push32((uint32_t)(ECX));
  /* 11492314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492317 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1149231a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149231d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11492320 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11492323 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 1149232a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149232c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1149232f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492332 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492336 jne 0x11492371 */
  if (!C.zf) goto L_11492371;
  /* 11492338 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1149233a call 0x1148ca30 */
  push32(0x1149233fu); f_1148ca30();
  /* 1149233f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492345 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492349 jne 0x11492367 */
  if (!C.zf) goto L_11492367;
  /* 1149234b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149234e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492351 push edx */
  push32((uint32_t)(EDX));
  /* 11492352 call dword ptr [0x114b9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9330))), 0x11492358u);
  /* 11492358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149235b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1149235e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492364 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11492367:;
  /* 11492367 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11492369 call 0x1148cad0 */
  push32(0x1149236eu); f_1148cad0();
  /* 1149236e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11492371:;
  /* 11492371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492374 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11492377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149237a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1149237d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11492380 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 11492387 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1149238b push eax */
  push32((uint32_t)(EAX));
  /* 1149238c call dword ptr [0x114b9338] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9338))), 0x11492392u);
  /* 11492392 mov esp, ebp */
  ESP = (EBP);
  /* 11492394 pop ebp */
  EBP = (pop32());
  /* 11492395 ret  */
  ESPCHK(0x11492310u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x114923a0 (38 bytes, 13 insns) */
void f_114923a0(void) {
  FTRACE(0x114923a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114923a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114923a1 mov ebp, esp */
  EBP = (ESP);
  /* 114923a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114923a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114923a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114923ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114923af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114923b2 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 114923b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 114923bd push eax */
  push32((uint32_t)(EAX));
  /* 114923be call dword ptr [0x114b9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9334))), 0x114923c4u);
  /* 114923c4 pop ebp */
  EBP = (pop32());
  /* 114923c5 ret  */
  ESPCHK(0x114923a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x114923d0 (218 bytes, 63 insns) */
void f_114923d0(void) {
  FTRACE(0x114923d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114923d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114923d1 mov ebp, esp */
  EBP = (ESP);
  /* 114923d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114923d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114923dd push 2 */
  push32((uint32_t)(0x2u));
  /* 114923df call 0x1148ca30 */
  push32(0x114923e4u); f_1148ca30();
  /* 114923e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114923e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 114923ee jmp 0x114923f9 */
  goto L_114923f9;
L_114923f0:;
  /* 114923f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114923f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114923f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114923f9:;
  /* 114923f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114923fc cmp ecx, dword ptr [0x114b7ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b7ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492402 jge 0x11492499 */
  if ((C.sf==C.of)) goto L_11492499;
  /* 11492408 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149240b mov eax, dword ptr [0x114b6b4c] */
  EAX = (r32((uint32_t)(0x114b6b4c)));
  /* 11492410 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492414 je 0x11492494 */
  if (C.zf) goto L_11492494;
  /* 11492416 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492419 mov edx, dword ptr [0x114b6b4c] */
  EDX = (r32((uint32_t)(0x114b6b4c)));
  /* 1149241f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11492422 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11492425 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1149242b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149242d je 0x11492451 */
  if (C.zf) goto L_11492451;
  /* 1149242f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492432 mov eax, dword ptr [0x114b6b4c] */
  EAX = (r32((uint32_t)(0x114b6b4c)));
  /* 11492437 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1149243a push ecx */
  push32((uint32_t)(ECX));
  /* 1149243b call 0x114951f0 */
  push32(0x11492440u); f_114951f0();
  /* 11492440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492443 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492446 je 0x11492451 */
  if (C.zf) goto L_11492451;
  /* 11492448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149244b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149244e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11492451:;
  /* 11492451 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492455 jl 0x11492494 */
  if ((C.sf!=C.of)) goto L_11492494;
  /* 11492457 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149245a mov ecx, dword ptr [0x114b6b4c] */
  ECX = (r32((uint32_t)(0x114b6b4c)));
  /* 11492460 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11492463 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492466 push edx */
  push32((uint32_t)(EDX));
  /* 11492467 call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1149246du);
  /* 1149246d push 2 */
  push32((uint32_t)(0x2u));
  /* 1149246f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492472 mov ecx, dword ptr [0x114b6b4c] */
  ECX = (r32((uint32_t)(0x114b6b4c)));
  /* 11492478 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1149247b push edx */
  push32((uint32_t)(EDX));
  /* 1149247c call 0x11487b50 */
  push32(0x11492481u); f_11487b50();
  /* 11492481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492487 mov ecx, dword ptr [0x114b6b4c] */
  ECX = (r32((uint32_t)(0x114b6b4c)));
  /* 1149248d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11492494:;
  /* 11492494 jmp 0x114923f0 */
  goto L_114923f0;
L_11492499:;
  /* 11492499 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149249b call 0x1148cad0 */
  push32(0x114924a0u); f_1148cad0();
  /* 114924a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114924a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114924a6 mov esp, ebp */
  ESP = (EBP);
  /* 114924a8 pop ebp */
  EBP = (pop32());
  /* 114924a9 ret  */
  ESPCHK(0x114923d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124b0 @ 0x114924b0 (68 bytes, 26 insns) */
void f_114924b0(void) {
  FTRACE(0x114924b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114924b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114924b1 mov ebp, esp */
  EBP = (ESP);
  /* 114924b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114924b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114924b8 jne 0x114924c6 */
  if (!C.zf) goto L_114924c6;
  /* 114924ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114924bc call 0x11492620 */
  push32(0x114924c1u); f_11492620();
  /* 114924c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114924c4 jmp 0x114924f0 */
  goto L_114924f0;
L_114924c6:;
  /* 114924c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114924c9 push eax */
  push32((uint32_t)(EAX));
  /* 114924ca call 0x1148c660 */
  push32(0x114924cfu); f_1148c660();
  /* 114924cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114924d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114924d5 push ecx */
  push32((uint32_t)(ECX));
  /* 114924d6 call 0x11492500 */
  push32(0x114924dbu); f_11492500();
  /* 114924db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114924de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114924e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114924e4 push edx */
  push32((uint32_t)(EDX));
  /* 114924e5 call 0x1148c6d0 */
  push32(0x114924eau); f_1148c6d0();
  /* 114924ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114924ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114924f0:;
  /* 114924f0 mov esp, ebp */
  ESP = (EBP);
  /* 114924f2 pop ebp */
  EBP = (pop32());
  /* 114924f3 ret  */
  ESPCHK(0x114924b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012500 @ 0x11492500 (65 bytes, 26 insns) */
void f_11492500(void) {
  FTRACE(0x11492500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492500 push ebp */
  push32((uint32_t)(EBP));
  /* 11492501 mov ebp, esp */
  EBP = (ESP);
  /* 11492503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492506 push eax */
  push32((uint32_t)(EAX));
  /* 11492507 call 0x11492550 */
  push32(0x1149250cu); f_11492550();
  /* 1149250c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149250f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11492511 je 0x11492518 */
  if (C.zf) goto L_11492518;
  /* 11492513 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11492516 jmp 0x1149253f */
  goto L_1149253f;
L_11492518:;
  /* 11492518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149251b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1149251e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11492524 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11492526 je 0x1149253d */
  if (C.zf) goto L_1149253d;
  /* 11492528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149252b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1149252e push ecx */
  push32((uint32_t)(ECX));
  /* 1149252f call 0x11495340 */
  push32(0x11492534u); f_11495340();
  /* 11492534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492537 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11492539 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149253b jmp 0x1149253f */
  goto L_1149253f;
L_1149253d:;
  /* 1149253d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1149253f:;
  /* 1149253f pop ebp */
  EBP = (pop32());
  /* 11492540 ret  */
  ESPCHK(0x11492500u, _esp0);
  ESP += 4; return;
}

/* FUN_10012550 @ 0x11492550 (183 bytes, 62 insns) */
void f_11492550(void) {
  FTRACE(0x11492550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492550 push ebp */
  push32((uint32_t)(EBP));
  /* 11492551 mov ebp, esp */
  EBP = (ESP);
  /* 11492553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11492556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1149255d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492560 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11492563 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492566 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11492569 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1149256c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149256f jne 0x114925eb */
  if (!C.zf) goto L_114925eb;
  /* 11492571 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492574 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11492577 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1149257d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149257f je 0x114925eb */
  if (C.zf) goto L_114925eb;
  /* 11492581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492584 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492587 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11492589 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149258c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1149258f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492593 jle 0x114925eb */
  if ((C.zf||C.sf!=C.of)) goto L_114925eb;
  /* 11492595 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492598 push edx */
  push32((uint32_t)(EDX));
  /* 11492599 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149259c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1149259f push ecx */
  push32((uint32_t)(ECX));
  /* 114925a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114925a6 push eax */
  push32((uint32_t)(EAX));
  /* 114925a7 call 0x1148c0f0 */
  push32(0x114925acu); f_1148c0f0();
  /* 114925ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114925af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114925b2 jne 0x114925d5 */
  if (!C.zf) goto L_114925d5;
  /* 114925b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114925ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 114925c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114925c2 je 0x114925d3 */
  if (C.zf) goto L_114925d3;
  /* 114925c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114925ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 114925cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_114925d3:;
  /* 114925d3 jmp 0x114925eb */
  goto L_114925eb;
L_114925d5:;
  /* 114925d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114925db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114925de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 114925e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114925eb:;
  /* 114925eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114925f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114925f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114925f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11492600 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492603 mov esp, ebp */
  ESP = (EBP);
  /* 11492605 pop ebp */
  EBP = (pop32());
  /* 11492606 ret  */
  ESPCHK(0x11492550u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x11492610 (15 bytes, 7 insns) */
void f_11492610(void) {
  FTRACE(0x11492610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492610 push ebp */
  push32((uint32_t)(EBP));
  /* 11492611 mov ebp, esp */
  EBP = (ESP);
  /* 11492613 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492615 call 0x11492620 */
  push32(0x1149261au); f_11492620();
  /* 1149261a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149261d pop ebp */
  EBP = (pop32());
  /* 1149261e ret  */
  ESPCHK(0x11492610u, _esp0);
  ESP += 4; return;
}

/* FUN_10012620 @ 0x11492620 (319 bytes, 94 insns) */
void f_11492620(void) {
  FTRACE(0x11492620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492620 push ebp */
  push32((uint32_t)(EBP));
  /* 11492621 mov ebp, esp */
  EBP = (ESP);
  /* 11492623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11492626 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1149262d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11492634 push 2 */
  push32((uint32_t)(0x2u));
  /* 11492636 call 0x1148ca30 */
  push32(0x1149263bu); f_1148ca30();
  /* 1149263b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149263e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11492645 jmp 0x11492650 */
  goto L_11492650;
L_11492647:;
  /* 11492647 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149264a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149264d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11492650:;
  /* 11492650 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492653 cmp ecx, dword ptr [0x114b7ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b7ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492659 jge 0x11492743 */
  if ((C.sf==C.of)) goto L_11492743;
  /* 1149265f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492662 mov eax, dword ptr [0x114b6b4c] */
  EAX = (r32((uint32_t)(0x114b6b4c)));
  /* 11492667 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149266b je 0x1149273e */
  if (C.zf) goto L_1149273e;
  /* 11492671 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492674 mov edx, dword ptr [0x114b6b4c] */
  EDX = (r32((uint32_t)(0x114b6b4c)));
  /* 1149267a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1149267d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11492680 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11492686 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11492688 je 0x1149273e */
  if (C.zf) goto L_1149273e;
  /* 1149268e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492691 mov eax, dword ptr [0x114b6b4c] */
  EAX = (r32((uint32_t)(0x114b6b4c)));
  /* 11492696 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11492699 push ecx */
  push32((uint32_t)(ECX));
  /* 1149269a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149269d push edx */
  push32((uint32_t)(EDX));
  /* 1149269e call 0x1148c6a0 */
  push32(0x114926a3u); f_1148c6a0();
  /* 114926a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114926a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114926a9 mov ecx, dword ptr [0x114b6b4c] */
  ECX = (r32((uint32_t)(0x114b6b4c)));
  /* 114926af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114926b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114926b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 114926ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114926bc je 0x11492725 */
  if (C.zf) goto L_11492725;
  /* 114926be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114926c2 jne 0x114926e9 */
  if (!C.zf) goto L_114926e9;
  /* 114926c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114926c7 mov edx, dword ptr [0x114b6b4c] */
  EDX = (r32((uint32_t)(0x114b6b4c)));
  /* 114926cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114926d0 push eax */
  push32((uint32_t)(EAX));
  /* 114926d1 call 0x11492500 */
  push32(0x114926d6u); f_11492500();
  /* 114926d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114926d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114926dc je 0x114926e7 */
  if (C.zf) goto L_114926e7;
  /* 114926de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114926e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114926e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114926e7:;
  /* 114926e7 jmp 0x11492725 */
  goto L_11492725;
L_114926e9:;
  /* 114926e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114926ed jne 0x11492725 */
  if (!C.zf) goto L_11492725;
  /* 114926ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114926f2 mov eax, dword ptr [0x114b6b4c] */
  EAX = (r32((uint32_t)(0x114b6b4c)));
  /* 114926f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114926fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114926fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11492700 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11492702 je 0x11492725 */
  if (C.zf) goto L_11492725;
  /* 11492704 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492707 mov ecx, dword ptr [0x114b6b4c] */
  ECX = (r32((uint32_t)(0x114b6b4c)));
  /* 1149270d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11492710 push edx */
  push32((uint32_t)(EDX));
  /* 11492711 call 0x11492500 */
  push32(0x11492716u); f_11492500();
  /* 11492716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492719 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149271c jne 0x11492725 */
  if (!C.zf) goto L_11492725;
  /* 1149271e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11492725:;
  /* 11492725 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492728 mov ecx, dword ptr [0x114b6b4c] */
  ECX = (r32((uint32_t)(0x114b6b4c)));
  /* 1149272e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11492731 push edx */
  push32((uint32_t)(EDX));
  /* 11492732 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492735 push eax */
  push32((uint32_t)(EAX));
  /* 11492736 call 0x1148c710 */
  push32(0x1149273bu); f_1148c710();
  /* 1149273b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1149273e:;
  /* 1149273e jmp 0x11492647 */
  goto L_11492647;
L_11492743:;
  /* 11492743 push 2 */
  push32((uint32_t)(0x2u));
  /* 11492745 call 0x1148cad0 */
  push32(0x1149274au); f_1148cad0();
  /* 1149274a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149274d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492751 jne 0x11492758 */
  if (!C.zf) goto L_11492758;
  /* 11492753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492756 jmp 0x1149275b */
  goto L_1149275b;
L_11492758:;
  /* 11492758 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1149275b:;
  /* 1149275b mov esp, ebp */
  ESP = (EBP);
  /* 1149275d pop ebp */
  EBP = (pop32());
  /* 1149275e ret  */
  ESPCHK(0x11492620u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11492760 (32 bytes, 18 insns) */
void f_11492760(void) {
  FTRACE(0x11492760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492760 push ebp */
  push32((uint32_t)(EBP));
  /* 11492761 mov ebp, esp */
  EBP = (ESP);
  /* 11492763 push ebx */
  push32((uint32_t)(EBX));
  /* 11492764 push esi */
  push32((uint32_t)(ESI));
  /* 11492765 push edi */
  push32((uint32_t)(EDI));
  /* 11492766 push ebp */
  push32((uint32_t)(EBP));
  /* 11492767 push 0 */
  push32((uint32_t)(0x0u));
  /* 11492769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149276b push 0x11492778 */
  push32((uint32_t)(0x11492778u));
  /* 11492770 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11492773 call 0x11498e2e */
  push32(0x11492778u); f_11498e2e();
  /* 11492778 pop ebp */
  EBP = (pop32());
  /* 11492779 pop edi */
  EDI = (pop32());
  /* 1149277a pop esi */
  ESI = (pop32());
  /* 1149277b pop ebx */
  EBX = (pop32());
  /* 1149277c mov esp, ebp */
  ESP = (EBP);
  /* 1149277e pop ebp */
  EBP = (pop32());
  /* 1149277f ret  */
  ESPCHK(0x11492760u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x114927a2 (104 bytes, 33 insns) */
void f_114927a2(void) {
  FTRACE(0x114927a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114927a2 push ebx */
  push32((uint32_t)(EBX));
  /* 114927a3 push esi */
  push32((uint32_t)(ESI));
  /* 114927a4 push edi */
  push32((uint32_t)(EDI));
  /* 114927a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 114927a9 push eax */
  push32((uint32_t)(EAX));
  /* 114927aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 114927ac push 0x11492780 */
  push32((uint32_t)(0x11492780u));
  /* 114927b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 114927b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_114927bf:;
  /* 114927bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 114927c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 114927c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 114927c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114927cc je 0x114927fc */
  if (C.zf) goto L_114927fc;
  /* 114927ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114927d2 je 0x114927fc */
  if (C.zf) goto L_114927fc;
  /* 114927d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 114927d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 114927da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 114927de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 114927e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114927e6 jne 0x114927fa */
  if (!C.zf) goto L_114927fa;
  /* 114927e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 114927ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 114927f1 call 0x11492836 */
  push32(0x114927f6u); f_11492836();
  /* 114927f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x114927fau);
L_114927fa:;
  /* 114927fa jmp 0x114927bf */
  goto L_114927bf;
L_114927fc:;
  /* 114927fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11492803 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492806 pop edi */
  EDI = (pop32());
  /* 11492807 pop esi */
  ESI = (pop32());
  /* 11492808 pop ebx */
  EBX = (pop32());
  /* 11492809 ret  */
  ESPCHK(0x114927a2u, _esp0);
  ESP += 4; return;
}

/* FUN_10012836 @ 0x11492836 (24 bytes, 10 insns) */
void f_11492836(void) {
  FTRACE(0x11492836u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492836 push ebx */
  push32((uint32_t)(EBX));
  /* 11492837 push ecx */
  push32((uint32_t)(ECX));
  /* 11492838 mov ebx, 0x114b4560 */
  EBX = (0x114b4560u);
  /* 1149283d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492840 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11492843 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11492846 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11492849 pop ecx */
  ECX = (pop32());
  /* 1149284a pop ebx */
  EBX = (pop32());
  /* 1149284b ret 4 */
  ESPCHK(0x11492836u, _esp0);
  ESP += 8; return;
}

/* FUN_10012915 @ 0x11492915 (27 bytes, 11 insns) */
void f_11492915(void) {
  FTRACE(0x11492915u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492915 push ebp */
  push32((uint32_t)(EBP));
  /* 11492916 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1149291a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1149291c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1149291f push eax */
  push32((uint32_t)(EAX));
  /* 11492920 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11492923 push eax */
  push32((uint32_t)(EAX));
  /* 11492924 call 0x114927a2 */
  push32(0x11492929u); f_114927a2();
  /* 11492929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149292c pop ebp */
  EBP = (pop32());
  /* 1149292d ret 4 */
  ESPCHK(0x11492915u, _esp0);
  ESP += 8; return;
}

/* ___init_time @ 0x11492930 (219 bytes, 64 insns) */
void f_11492930(void) {
  FTRACE(0x11492930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492930 push ebp */
  push32((uint32_t)(EBP));
  /* 11492931 mov ebp, esp */
  EBP = (ESP);
  /* 11492933 push ecx */
  push32((uint32_t)(ECX));
  /* 11492934 cmp dword ptr [0x114b6710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149293b je 0x114929d1 */
  if (C.zf) goto L_114929d1;
  /* 11492941 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11492943 push 0x114b12ec */
  push32((uint32_t)(0x114b12ecu));
  /* 11492948 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149294a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1149294f push 1 */
  push32((uint32_t)(0x1u));
  /* 11492951 call 0x114874d0 */
  push32(0x11492956u); f_114874d0();
  /* 11492956 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1149295c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492960 jne 0x1149296c */
  if (!C.zf) goto L_1149296c;
  /* 11492962 mov eax, 1 */
  EAX = (0x1u);
  /* 11492967 jmp 0x11492a07 */
  goto L_11492a07;
L_1149296c:;
  /* 1149296c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149296f push eax */
  push32((uint32_t)(EAX));
  /* 11492970 call 0x11492a10 */
  push32(0x11492975u); f_11492a10();
  /* 11492975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149297a je 0x1149299d */
  if (C.zf) goto L_1149299d;
  /* 1149297c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149297f push ecx */
  push32((uint32_t)(ECX));
  /* 11492980 call 0x11492fa0 */
  push32(0x11492985u); f_11492fa0();
  /* 11492985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492988 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149298a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149298d push edx */
  push32((uint32_t)(EDX));
  /* 1149298e call 0x11487b50 */
  push32(0x11492993u); f_11487b50();
  /* 11492993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492996 mov eax, 1 */
  EAX = (0x1u);
  /* 1149299b jmp 0x11492a07 */
  goto L_11492a07;
L_1149299d:;
  /* 1149299d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114929a0 mov dword ptr [0x114b4ce8], eax */
  w32((uint32_t)(0x114b4ce8), (EAX));
  /* 114929a5 mov ecx, dword ptr [0x114b6720] */
  ECX = (r32((uint32_t)(0x114b6720)));
  /* 114929ab push ecx */
  push32((uint32_t)(ECX));
  /* 114929ac call 0x11492fa0 */
  push32(0x114929b1u); f_11492fa0();
  /* 114929b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114929b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114929b6 mov edx, dword ptr [0x114b6720] */
  EDX = (r32((uint32_t)(0x114b6720)));
  /* 114929bc push edx */
  push32((uint32_t)(EDX));
  /* 114929bd call 0x11487b50 */
  push32(0x114929c2u); f_11487b50();
  /* 114929c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114929c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114929c8 mov dword ptr [0x114b6720], eax */
  w32((uint32_t)(0x114b6720), (EAX));
  /* 114929cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114929cf jmp 0x11492a07 */
  goto L_11492a07;
L_114929d1:;
  /* 114929d1 mov dword ptr [0x114b4ce8], 0x114b4cf0 */
  w32((uint32_t)(0x114b4ce8), (0x114b4cf0u));
  /* 114929db mov ecx, dword ptr [0x114b6720] */
  ECX = (r32((uint32_t)(0x114b6720)));
  /* 114929e1 push ecx */
  push32((uint32_t)(ECX));
  /* 114929e2 call 0x11492fa0 */
  push32(0x114929e7u); f_11492fa0();
  /* 114929e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114929ea push 2 */
  push32((uint32_t)(0x2u));
  /* 114929ec mov edx, dword ptr [0x114b6720] */
  EDX = (r32((uint32_t)(0x114b6720)));
  /* 114929f2 push edx */
  push32((uint32_t)(EDX));
  /* 114929f3 call 0x11487b50 */
  push32(0x114929f8u); f_11487b50();
  /* 114929f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114929fb mov dword ptr [0x114b6720], 0 */
  w32((uint32_t)(0x114b6720), (0x0u));
  /* 11492a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11492a07:;
  /* 11492a07 mov esp, ebp */
  ESP = (EBP);
  /* 11492a09 pop ebp */
  EBP = (pop32());
  /* 11492a0a ret  */
  ESPCHK(0x11492930u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x11492a10 (1423 bytes, 533 insns) */
void f_11492a10(void) {
  FTRACE(0x11492a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11492a11 mov ebp, esp */
  EBP = (ESP);
  /* 11492a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11492a16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11492a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11492a1f mov ax, word ptr [0x114b675a] */
  AX = (r16((uint32_t)(0x114b675a)));
  /* 11492a25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11492a28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11492a2a mov cx, word ptr [0x114b675c] */
  CX = (r16((uint32_t)(0x114b675c)));
  /* 11492a31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11492a34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492a38 jne 0x11492a42 */
  if (!C.zf) goto L_11492a42;
  /* 11492a3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11492a3d jmp 0x11492f9b */
  goto L_11492f9b;
L_11492a42:;
  /* 11492a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492a45 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492a48 push edx */
  push32((uint32_t)(EDX));
  /* 11492a49 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11492a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492a4e push eax */
  push32((uint32_t)(EAX));
  /* 11492a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11492a51 call 0x11496890 */
  push32(0x11492a56u); f_11496890();
  /* 11492a56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492a59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492a5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492a5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492a64 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492a67 push edx */
  push32((uint32_t)(EDX));
  /* 11492a68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11492a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492a6d push eax */
  push32((uint32_t)(EAX));
  /* 11492a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11492a70 call 0x11496890 */
  push32(0x11492a75u); f_11496890();
  /* 11492a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492a78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492a7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492a7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492a80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492a83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492a86 push edx */
  push32((uint32_t)(EDX));
  /* 11492a87 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11492a89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492a8c push eax */
  push32((uint32_t)(EAX));
  /* 11492a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11492a8f call 0x11496890 */
  push32(0x11492a94u); f_11496890();
  /* 11492a94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492a97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492a9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492a9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492a9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492aa2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492aa5 push edx */
  push32((uint32_t)(EDX));
  /* 11492aa6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11492aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492aab push eax */
  push32((uint32_t)(EAX));
  /* 11492aac push 1 */
  push32((uint32_t)(0x1u));
  /* 11492aae call 0x11496890 */
  push32(0x11492ab3u); f_11496890();
  /* 11492ab3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ab6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ab9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492abb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492ac1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ac4 push edx */
  push32((uint32_t)(EDX));
  /* 11492ac5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11492ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492aca push eax */
  push32((uint32_t)(EAX));
  /* 11492acb push 1 */
  push32((uint32_t)(0x1u));
  /* 11492acd call 0x11496890 */
  push32(0x11492ad2u); f_11496890();
  /* 11492ad2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ad5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ad8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492ada mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492add mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492ae0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ae3 push edx */
  push32((uint32_t)(EDX));
  /* 11492ae4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11492ae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11492aea push 1 */
  push32((uint32_t)(0x1u));
  /* 11492aec call 0x11496890 */
  push32(0x11492af1u); f_11496890();
  /* 11492af1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492af4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492af7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492af9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492afc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492aff push edx */
  push32((uint32_t)(EDX));
  /* 11492b00 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11492b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492b05 push eax */
  push32((uint32_t)(EAX));
  /* 11492b06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492b08 call 0x11496890 */
  push32(0x11492b0du); f_11496890();
  /* 11492b0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492b13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492b15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492b18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492b1b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b1e push edx */
  push32((uint32_t)(EDX));
  /* 11492b1f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11492b21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492b24 push eax */
  push32((uint32_t)(EAX));
  /* 11492b25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492b27 call 0x11496890 */
  push32(0x11492b2cu); f_11496890();
  /* 11492b2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492b32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492b34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492b3a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b3d push edx */
  push32((uint32_t)(EDX));
  /* 11492b3e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11492b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492b43 push eax */
  push32((uint32_t)(EAX));
  /* 11492b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492b46 call 0x11496890 */
  push32(0x11492b4bu); f_11496890();
  /* 11492b4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492b51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492b53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492b56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492b59 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b5c push edx */
  push32((uint32_t)(EDX));
  /* 11492b5d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11492b5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492b62 push eax */
  push32((uint32_t)(EAX));
  /* 11492b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492b65 call 0x11496890 */
  push32(0x11492b6au); f_11496890();
  /* 11492b6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492b70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492b72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492b75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492b78 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b7b push edx */
  push32((uint32_t)(EDX));
  /* 11492b7c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11492b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492b81 push eax */
  push32((uint32_t)(EAX));
  /* 11492b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492b84 call 0x11496890 */
  push32(0x11492b89u); f_11496890();
  /* 11492b89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492b8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492b91 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492b94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492b97 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492b9a push edx */
  push32((uint32_t)(EDX));
  /* 11492b9b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11492b9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492ba0 push eax */
  push32((uint32_t)(EAX));
  /* 11492ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492ba3 call 0x11496890 */
  push32(0x11492ba8u); f_11496890();
  /* 11492ba8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492bae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492bb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492bb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492bb6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492bb9 push edx */
  push32((uint32_t)(EDX));
  /* 11492bba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11492bbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492bbf push eax */
  push32((uint32_t)(EAX));
  /* 11492bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492bc2 call 0x11496890 */
  push32(0x11492bc7u); f_11496890();
  /* 11492bc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492bca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492bcd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492bcf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492bd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492bd5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492bd8 push edx */
  push32((uint32_t)(EDX));
  /* 11492bd9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11492bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492bde push eax */
  push32((uint32_t)(EAX));
  /* 11492bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 11492be1 call 0x11496890 */
  push32(0x11492be6u); f_11496890();
  /* 11492be6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492be9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492bec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492bee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492bf4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11492bf8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11492bfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492bfd push eax */
  push32((uint32_t)(EAX));
  /* 11492bfe push 1 */
  push32((uint32_t)(0x1u));
  /* 11492c00 call 0x11496890 */
  push32(0x11492c05u); f_11496890();
  /* 11492c05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492c0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492c0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492c10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492c13 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c16 push edx */
  push32((uint32_t)(EDX));
  /* 11492c17 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11492c19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492c1c push eax */
  push32((uint32_t)(EAX));
  /* 11492c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11492c1f call 0x11496890 */
  push32(0x11492c24u); f_11496890();
  /* 11492c24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492c2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492c2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492c2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492c32 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c35 push edx */
  push32((uint32_t)(EDX));
  /* 11492c36 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11492c38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492c3b push eax */
  push32((uint32_t)(EAX));
  /* 11492c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11492c3e call 0x11496890 */
  push32(0x11492c43u); f_11496890();
  /* 11492c43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492c49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492c4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492c51 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c54 push edx */
  push32((uint32_t)(EDX));
  /* 11492c55 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11492c57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492c5a push eax */
  push32((uint32_t)(EAX));
  /* 11492c5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11492c5d call 0x11496890 */
  push32(0x11492c62u); f_11496890();
  /* 11492c62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492c68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492c6a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492c6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492c70 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c73 push edx */
  push32((uint32_t)(EDX));
  /* 11492c74 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11492c76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492c79 push eax */
  push32((uint32_t)(EAX));
  /* 11492c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11492c7c call 0x11496890 */
  push32(0x11492c81u); f_11496890();
  /* 11492c81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492c87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492c89 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492c8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492c8f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492c92 push edx */
  push32((uint32_t)(EDX));
  /* 11492c93 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11492c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492c98 push eax */
  push32((uint32_t)(EAX));
  /* 11492c99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492c9b call 0x11496890 */
  push32(0x11492ca0u); f_11496890();
  /* 11492ca0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ca3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ca6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492ca8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492cab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492cae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492cb1 push edx */
  push32((uint32_t)(EDX));
  /* 11492cb2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11492cb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492cb7 push eax */
  push32((uint32_t)(EAX));
  /* 11492cb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492cba call 0x11496890 */
  push32(0x11492cbfu); f_11496890();
  /* 11492cbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492cc2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492cc5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492cc7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492cca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492ccd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492cd0 push edx */
  push32((uint32_t)(EDX));
  /* 11492cd1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11492cd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492cd6 push eax */
  push32((uint32_t)(EAX));
  /* 11492cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492cd9 call 0x11496890 */
  push32(0x11492cdeu); f_11496890();
  /* 11492cde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ce1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ce4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492ce6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492cec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492cef push edx */
  push32((uint32_t)(EDX));
  /* 11492cf0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11492cf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492cf5 push eax */
  push32((uint32_t)(EAX));
  /* 11492cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492cf8 call 0x11496890 */
  push32(0x11492cfdu); f_11496890();
  /* 11492cfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492d03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492d05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492d0b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d0e push edx */
  push32((uint32_t)(EDX));
  /* 11492d0f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11492d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492d14 push eax */
  push32((uint32_t)(EAX));
  /* 11492d15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492d17 call 0x11496890 */
  push32(0x11492d1cu); f_11496890();
  /* 11492d1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492d22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492d24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492d27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492d2a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d2d push edx */
  push32((uint32_t)(EDX));
  /* 11492d2e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11492d30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492d33 push eax */
  push32((uint32_t)(EAX));
  /* 11492d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492d36 call 0x11496890 */
  push32(0x11492d3bu); f_11496890();
  /* 11492d3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492d41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492d43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492d46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492d49 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d4c push edx */
  push32((uint32_t)(EDX));
  /* 11492d4d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11492d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492d52 push eax */
  push32((uint32_t)(EAX));
  /* 11492d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492d55 call 0x11496890 */
  push32(0x11492d5au); f_11496890();
  /* 11492d5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492d60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492d62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492d65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492d68 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d6b push edx */
  push32((uint32_t)(EDX));
  /* 11492d6c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11492d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492d71 push eax */
  push32((uint32_t)(EAX));
  /* 11492d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492d74 call 0x11496890 */
  push32(0x11492d79u); f_11496890();
  /* 11492d79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492d7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492d81 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492d84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492d87 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d8a push edx */
  push32((uint32_t)(EDX));
  /* 11492d8b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11492d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492d90 push eax */
  push32((uint32_t)(EAX));
  /* 11492d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492d93 call 0x11496890 */
  push32(0x11492d98u); f_11496890();
  /* 11492d98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492d9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492d9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492da0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492da3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492da6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492da9 push edx */
  push32((uint32_t)(EDX));
  /* 11492daa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11492dac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492daf push eax */
  push32((uint32_t)(EAX));
  /* 11492db0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492db2 call 0x11496890 */
  push32(0x11492db7u); f_11496890();
  /* 11492db7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492dba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492dbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492dbf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492dc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492dc5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492dc8 push edx */
  push32((uint32_t)(EDX));
  /* 11492dc9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11492dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492dce push eax */
  push32((uint32_t)(EAX));
  /* 11492dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 11492dd1 call 0x11496890 */
  push32(0x11492dd6u); f_11496890();
  /* 11492dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492dd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ddc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492dde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492de1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492de4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492de7 push edx */
  push32((uint32_t)(EDX));
  /* 11492de8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11492dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492ded push eax */
  push32((uint32_t)(EAX));
  /* 11492dee push 1 */
  push32((uint32_t)(0x1u));
  /* 11492df0 call 0x11496890 */
  push32(0x11492df5u); f_11496890();
  /* 11492df5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492df8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492dfb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492dfd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492e00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492e03 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e06 push edx */
  push32((uint32_t)(EDX));
  /* 11492e07 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11492e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492e0c push eax */
  push32((uint32_t)(EAX));
  /* 11492e0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11492e0f call 0x11496890 */
  push32(0x11492e14u); f_11496890();
  /* 11492e14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492e1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492e1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492e1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492e22 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e28 push edx */
  push32((uint32_t)(EDX));
  /* 11492e29 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11492e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492e2e push eax */
  push32((uint32_t)(EAX));
  /* 11492e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11492e31 call 0x11496890 */
  push32(0x11492e36u); f_11496890();
  /* 11492e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492e3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492e3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492e41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492e44 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e4a push edx */
  push32((uint32_t)(EDX));
  /* 11492e4b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11492e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492e50 push eax */
  push32((uint32_t)(EAX));
  /* 11492e51 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492e53 call 0x11496890 */
  push32(0x11492e58u); f_11496890();
  /* 11492e58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492e5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492e60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492e63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492e66 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e6c push edx */
  push32((uint32_t)(EDX));
  /* 11492e6d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11492e6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492e72 push eax */
  push32((uint32_t)(EAX));
  /* 11492e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492e75 call 0x11496890 */
  push32(0x11492e7au); f_11496890();
  /* 11492e7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492e80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492e82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492e85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492e88 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e8e push edx */
  push32((uint32_t)(EDX));
  /* 11492e8f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11492e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492e94 push eax */
  push32((uint32_t)(EAX));
  /* 11492e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492e97 call 0x11496890 */
  push32(0x11492e9cu); f_11496890();
  /* 11492e9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492e9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ea2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492ea4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492ea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492eaa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492eb0 push edx */
  push32((uint32_t)(EDX));
  /* 11492eb1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11492eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492eb6 push eax */
  push32((uint32_t)(EAX));
  /* 11492eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492eb9 call 0x11496890 */
  push32(0x11492ebeu); f_11496890();
  /* 11492ebe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ec1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ec4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492ec6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492ec9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492ecc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ed2 push edx */
  push32((uint32_t)(EDX));
  /* 11492ed3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11492ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11492ed9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492edb call 0x11496890 */
  push32(0x11492ee0u); f_11496890();
  /* 11492ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ee3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492ee6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492ee8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492eeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492eee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ef4 push edx */
  push32((uint32_t)(EDX));
  /* 11492ef5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11492ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492efa push eax */
  push32((uint32_t)(EAX));
  /* 11492efb push 1 */
  push32((uint32_t)(0x1u));
  /* 11492efd call 0x11496890 */
  push32(0x11492f02u); f_11496890();
  /* 11492f02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492f08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492f0a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492f10 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f16 push edx */
  push32((uint32_t)(EDX));
  /* 11492f17 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11492f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11492f1c push eax */
  push32((uint32_t)(EAX));
  /* 11492f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11492f1f call 0x11496890 */
  push32(0x11492f24u); f_11496890();
  /* 11492f24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492f2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492f2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492f2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492f32 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f38 push edx */
  push32((uint32_t)(EDX));
  /* 11492f39 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11492f3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492f3e push eax */
  push32((uint32_t)(EAX));
  /* 11492f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11492f41 call 0x11496890 */
  push32(0x11492f46u); f_11496890();
  /* 11492f46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492f4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492f4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492f54 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f5a push edx */
  push32((uint32_t)(EDX));
  /* 11492f5b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11492f5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492f60 push eax */
  push32((uint32_t)(EAX));
  /* 11492f61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492f63 call 0x11496890 */
  push32(0x11492f68u); f_11496890();
  /* 11492f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492f6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492f70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492f73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492f76 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f7c push edx */
  push32((uint32_t)(EDX));
  /* 11492f7d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11492f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11492f85 push eax */
  push32((uint32_t)(EAX));
  /* 11492f86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11492f88 call 0x11496890 */
  push32(0x11492f8du); f_11496890();
  /* 11492f8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11492f93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11492f95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11492f98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11492f9b:;
  /* 11492f9b mov esp, ebp */
  ESP = (EBP);
  /* 11492f9d pop ebp */
  EBP = (pop32());
  /* 11492f9e ret  */
  ESPCHK(0x11492a10u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11492fa0 (779 bytes, 265 insns) */
void f_11492fa0(void) {
  FTRACE(0x11492fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11492fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11492fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11492fa3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11492fa7 jne 0x11492fae */
  if (!C.zf) goto L_11492fae;
  /* 11492fa9 jmp 0x114932a9 */
  goto L_114932a9;
L_11492fae:;
  /* 11492fae push 2 */
  push32((uint32_t)(0x2u));
  /* 11492fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492fb3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11492fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11492fb7 call 0x11487b50 */
  push32(0x11492fbcu); f_11487b50();
  /* 11492fbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492fbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11492fc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492fc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11492fc7 push eax */
  push32((uint32_t)(EAX));
  /* 11492fc8 call 0x11487b50 */
  push32(0x11492fcdu); f_11487b50();
  /* 11492fcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11492fd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492fd5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11492fd8 push edx */
  push32((uint32_t)(EDX));
  /* 11492fd9 call 0x11487b50 */
  push32(0x11492fdeu); f_11487b50();
  /* 11492fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492fe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11492fe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492fe6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11492fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11492fea call 0x11487b50 */
  push32(0x11492fefu); f_11487b50();
  /* 11492fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11492ff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11492ff4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11492ff7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11492ffa push eax */
  push32((uint32_t)(EAX));
  /* 11492ffb call 0x11487b50 */
  push32(0x11493000u); f_11487b50();
  /* 11493000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493003 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493005 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493008 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1149300b push edx */
  push32((uint32_t)(EDX));
  /* 1149300c call 0x11487b50 */
  push32(0x11493011u); f_11487b50();
  /* 11493011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493014 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493019 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1149301b push ecx */
  push32((uint32_t)(ECX));
  /* 1149301c call 0x11487b50 */
  push32(0x11493021u); f_11487b50();
  /* 11493021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493024 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493026 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493029 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1149302c push eax */
  push32((uint32_t)(EAX));
  /* 1149302d call 0x11487b50 */
  push32(0x11493032u); f_11487b50();
  /* 11493032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493035 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149303a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1149303d push edx */
  push32((uint32_t)(EDX));
  /* 1149303e call 0x11487b50 */
  push32(0x11493043u); f_11487b50();
  /* 11493043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493046 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149304b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1149304e push ecx */
  push32((uint32_t)(ECX));
  /* 1149304f call 0x11487b50 */
  push32(0x11493054u); f_11487b50();
  /* 11493054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493057 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493059 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149305c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1149305f push eax */
  push32((uint32_t)(EAX));
  /* 11493060 call 0x11487b50 */
  push32(0x11493065u); f_11487b50();
  /* 11493065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493068 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149306a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149306d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11493070 push edx */
  push32((uint32_t)(EDX));
  /* 11493071 call 0x11487b50 */
  push32(0x11493076u); f_11487b50();
  /* 11493076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493079 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149307b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149307e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11493081 push ecx */
  push32((uint32_t)(ECX));
  /* 11493082 call 0x11487b50 */
  push32(0x11493087u); f_11487b50();
  /* 11493087 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149308a push 2 */
  push32((uint32_t)(0x2u));
  /* 1149308c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149308f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11493092 push eax */
  push32((uint32_t)(EAX));
  /* 11493093 call 0x11487b50 */
  push32(0x11493098u); f_11487b50();
  /* 11493098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149309b push 2 */
  push32((uint32_t)(0x2u));
  /* 1149309d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114930a0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 114930a3 push edx */
  push32((uint32_t)(EDX));
  /* 114930a4 call 0x11487b50 */
  push32(0x114930a9u); f_11487b50();
  /* 114930a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114930ac push 2 */
  push32((uint32_t)(0x2u));
  /* 114930ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114930b1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 114930b4 push ecx */
  push32((uint32_t)(ECX));
  /* 114930b5 call 0x11487b50 */
  push32(0x114930bau); f_11487b50();
  /* 114930ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114930bd push 2 */
  push32((uint32_t)(0x2u));
  /* 114930bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114930c2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 114930c5 push eax */
  push32((uint32_t)(EAX));
  /* 114930c6 call 0x11487b50 */
  push32(0x114930cbu); f_11487b50();
  /* 114930cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114930ce push 2 */
  push32((uint32_t)(0x2u));
  /* 114930d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114930d3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 114930d6 push edx */
  push32((uint32_t)(EDX));
  /* 114930d7 call 0x11487b50 */
  push32(0x114930dcu); f_11487b50();
  /* 114930dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114930df push 2 */
  push32((uint32_t)(0x2u));
  /* 114930e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114930e4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 114930e7 push ecx */
  push32((uint32_t)(ECX));
  /* 114930e8 call 0x11487b50 */
  push32(0x114930edu); f_11487b50();
  /* 114930ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114930f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114930f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114930f5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 114930f8 push eax */
  push32((uint32_t)(EAX));
  /* 114930f9 call 0x11487b50 */
  push32(0x114930feu); f_11487b50();
  /* 114930fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493101 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493106 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11493109 push edx */
  push32((uint32_t)(EDX));
  /* 1149310a call 0x11487b50 */
  push32(0x1149310fu); f_11487b50();
  /* 1149310f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493112 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493117 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1149311a push ecx */
  push32((uint32_t)(ECX));
  /* 1149311b call 0x11487b50 */
  push32(0x11493120u); f_11487b50();
  /* 11493120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493123 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493128 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1149312b push eax */
  push32((uint32_t)(EAX));
  /* 1149312c call 0x11487b50 */
  push32(0x11493131u); f_11487b50();
  /* 11493131 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493134 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493139 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1149313c push edx */
  push32((uint32_t)(EDX));
  /* 1149313d call 0x11487b50 */
  push32(0x11493142u); f_11487b50();
  /* 11493142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493145 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493147 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149314a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1149314d push ecx */
  push32((uint32_t)(ECX));
  /* 1149314e call 0x11487b50 */
  push32(0x11493153u); f_11487b50();
  /* 11493153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493156 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493158 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149315b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1149315e push eax */
  push32((uint32_t)(EAX));
  /* 1149315f call 0x11487b50 */
  push32(0x11493164u); f_11487b50();
  /* 11493164 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493167 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149316c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1149316f push edx */
  push32((uint32_t)(EDX));
  /* 11493170 call 0x11487b50 */
  push32(0x11493175u); f_11487b50();
  /* 11493175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493178 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149317a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149317d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11493180 push ecx */
  push32((uint32_t)(ECX));
  /* 11493181 call 0x11487b50 */
  push32(0x11493186u); f_11487b50();
  /* 11493186 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493189 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149318b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149318e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11493191 push eax */
  push32((uint32_t)(EAX));
  /* 11493192 call 0x11487b50 */
  push32(0x11493197u); f_11487b50();
  /* 11493197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149319a push 2 */
  push32((uint32_t)(0x2u));
  /* 1149319c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149319f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 114931a2 push edx */
  push32((uint32_t)(EDX));
  /* 114931a3 call 0x11487b50 */
  push32(0x114931a8u); f_11487b50();
  /* 114931a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114931ab push 2 */
  push32((uint32_t)(0x2u));
  /* 114931ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114931b0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 114931b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114931b4 call 0x11487b50 */
  push32(0x114931b9u); f_11487b50();
  /* 114931b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114931bc push 2 */
  push32((uint32_t)(0x2u));
  /* 114931be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114931c1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 114931c4 push eax */
  push32((uint32_t)(EAX));
  /* 114931c5 call 0x11487b50 */
  push32(0x114931cau); f_11487b50();
  /* 114931ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114931cd push 2 */
  push32((uint32_t)(0x2u));
  /* 114931cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114931d2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 114931d8 push edx */
  push32((uint32_t)(EDX));
  /* 114931d9 call 0x11487b50 */
  push32(0x114931deu); f_11487b50();
  /* 114931de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114931e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114931e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114931e6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 114931ec push ecx */
  push32((uint32_t)(ECX));
  /* 114931ed call 0x11487b50 */
  push32(0x114931f2u); f_11487b50();
  /* 114931f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114931f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114931f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114931fa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11493200 push eax */
  push32((uint32_t)(EAX));
  /* 11493201 call 0x11487b50 */
  push32(0x11493206u); f_11487b50();
  /* 11493206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493209 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149320b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149320e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11493214 push edx */
  push32((uint32_t)(EDX));
  /* 11493215 call 0x11487b50 */
  push32(0x1149321au); f_11487b50();
  /* 1149321a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149321d push 2 */
  push32((uint32_t)(0x2u));
  /* 1149321f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493222 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11493228 push ecx */
  push32((uint32_t)(ECX));
  /* 11493229 call 0x11487b50 */
  push32(0x1149322eu); f_11487b50();
  /* 1149322e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493231 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493236 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1149323c push eax */
  push32((uint32_t)(EAX));
  /* 1149323d call 0x11487b50 */
  push32(0x11493242u); f_11487b50();
  /* 11493242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493245 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149324a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11493250 push edx */
  push32((uint32_t)(EDX));
  /* 11493251 call 0x11487b50 */
  push32(0x11493256u); f_11487b50();
  /* 11493256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493259 push 2 */
  push32((uint32_t)(0x2u));
  /* 1149325b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149325e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11493264 push ecx */
  push32((uint32_t)(ECX));
  /* 11493265 call 0x11487b50 */
  push32(0x1149326au); f_11487b50();
  /* 1149326a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149326d push 2 */
  push32((uint32_t)(0x2u));
  /* 1149326f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493272 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11493278 push eax */
  push32((uint32_t)(EAX));
  /* 11493279 call 0x11487b50 */
  push32(0x1149327eu); f_11487b50();
  /* 1149327e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493281 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493286 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1149328c push edx */
  push32((uint32_t)(EDX));
  /* 1149328d call 0x11487b50 */
  push32(0x11493292u); f_11487b50();
  /* 11493292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493295 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493297 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149329a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 114932a0 push ecx */
  push32((uint32_t)(ECX));
  /* 114932a1 call 0x11487b50 */
  push32(0x114932a6u); f_11487b50();
  /* 114932a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114932a9:;
  /* 114932a9 pop ebp */
  EBP = (pop32());
  /* 114932aa ret  */
  ESPCHK(0x11492fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132b0 @ 0x114932b0 (678 bytes, 180 insns) */
void f_114932b0(void) {
  FTRACE(0x114932b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114932b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114932b1 mov ebp, esp */
  EBP = (ESP);
  /* 114932b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114932b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114932bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114932bf mov ax, word ptr [0x114b6756] */
  AX = (r16((uint32_t)(0x114b6756)));
  /* 114932c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114932c8 cmp dword ptr [0x114b670c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b670c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114932cf je 0x1149342a */
  if (C.zf) goto L_1149342a;
  /* 114932d5 push 0x114b6724 */
  push32((uint32_t)(0x114b6724u));
  /* 114932da push 0xe */
  push32((uint32_t)(0xeu));
  /* 114932dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114932df push ecx */
  push32((uint32_t)(ECX));
  /* 114932e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114932e2 call 0x11496890 */
  push32(0x114932e7u); f_11496890();
  /* 114932e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114932ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114932ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114932ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114932f2 push 0x114b6728 */
  push32((uint32_t)(0x114b6728u));
  /* 114932f7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 114932f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114932fc push eax */
  push32((uint32_t)(EAX));
  /* 114932fd push 1 */
  push32((uint32_t)(0x1u));
  /* 114932ff call 0x11496890 */
  push32(0x11493304u); f_11496890();
  /* 11493304 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493307 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149330a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1149330c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149330f push 0x114b672c */
  push32((uint32_t)(0x114b672cu));
  /* 11493314 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11493316 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493319 push edx */
  push32((uint32_t)(EDX));
  /* 1149331a push 1 */
  push32((uint32_t)(0x1u));
  /* 1149331c call 0x11496890 */
  push32(0x11493321u); f_11496890();
  /* 11493321 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493324 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493327 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493329 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149332c mov edx, dword ptr [0x114b672c] */
  EDX = (r32((uint32_t)(0x114b672c)));
  /* 11493332 push edx */
  push32((uint32_t)(EDX));
  /* 11493333 call 0x11493560 */
  push32(0x11493338u); f_11493560();
  /* 11493338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149333b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149333f je 0x11493399 */
  if (C.zf) goto L_11493399;
  /* 11493341 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493343 mov eax, dword ptr [0x114b6724] */
  EAX = (r32((uint32_t)(0x114b6724)));
  /* 11493348 push eax */
  push32((uint32_t)(EAX));
  /* 11493349 call 0x11487b50 */
  push32(0x1149334eu); f_11487b50();
  /* 1149334e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493351 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493353 mov ecx, dword ptr [0x114b6728] */
  ECX = (r32((uint32_t)(0x114b6728)));
  /* 11493359 push ecx */
  push32((uint32_t)(ECX));
  /* 1149335a call 0x11487b50 */
  push32(0x1149335fu); f_11487b50();
  /* 1149335f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493362 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493364 mov edx, dword ptr [0x114b672c] */
  EDX = (r32((uint32_t)(0x114b672c)));
  /* 1149336a push edx */
  push32((uint32_t)(EDX));
  /* 1149336b call 0x11487b50 */
  push32(0x11493370u); f_11487b50();
  /* 11493370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493373 mov dword ptr [0x114b6724], 0 */
  w32((uint32_t)(0x114b6724), (0x0u));
  /* 1149337d mov dword ptr [0x114b6728], 0 */
  w32((uint32_t)(0x114b6728), (0x0u));
  /* 11493387 mov dword ptr [0x114b672c], 0 */
  w32((uint32_t)(0x114b672c), (0x0u));
  /* 11493391 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11493394 jmp 0x11493552 */
  goto L_11493552;
L_11493399:;
  /* 11493399 mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 1149339e cmp dword ptr [eax], 0x114b4da0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x114b4da0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114933a4 je 0x114933e0 */
  if (C.zf) goto L_114933e0;
  /* 114933a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114933a8 mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 114933ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114933b0 push edx */
  push32((uint32_t)(EDX));
  /* 114933b1 call 0x11487b50 */
  push32(0x114933b6u); f_11487b50();
  /* 114933b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114933b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 114933bb mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 114933c0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114933c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114933c4 call 0x11487b50 */
  push32(0x114933c9u); f_11487b50();
  /* 114933c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114933cc push 2 */
  push32((uint32_t)(0x2u));
  /* 114933ce mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 114933d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114933d7 push eax */
  push32((uint32_t)(EAX));
  /* 114933d8 call 0x11487b50 */
  push32(0x114933ddu); f_11487b50();
  /* 114933dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114933e0:;
  /* 114933e0 mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 114933e6 mov edx, dword ptr [0x114b6724] */
  EDX = (r32((uint32_t)(0x114b6724)));
  /* 114933ec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114933ee mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 114933f3 mov ecx, dword ptr [0x114b6728] */
  ECX = (r32((uint32_t)(0x114b6728)));
  /* 114933f9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114933fc mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493402 mov eax, dword ptr [0x114b672c] */
  EAX = (r32((uint32_t)(0x114b672c)));
  /* 11493407 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1149340a mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493410 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11493412 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11493414 mov byte ptr [0x114b3b84], al */
  w8((uint32_t)(0x114b3b84), (AL));
  /* 11493419 mov dword ptr [0x114b3b88], 1 */
  w32((uint32_t)(0x114b3b88), (0x1u));
  /* 11493423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493425 jmp 0x11493552 */
  goto L_11493552;
L_1149342a:;
  /* 1149342a push 2 */
  push32((uint32_t)(0x2u));
  /* 1149342c mov ecx, dword ptr [0x114b6724] */
  ECX = (r32((uint32_t)(0x114b6724)));
  /* 11493432 push ecx */
  push32((uint32_t)(ECX));
  /* 11493433 call 0x11487b50 */
  push32(0x11493438u); f_11487b50();
  /* 11493438 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149343b push 2 */
  push32((uint32_t)(0x2u));
  /* 1149343d mov edx, dword ptr [0x114b6728] */
  EDX = (r32((uint32_t)(0x114b6728)));
  /* 11493443 push edx */
  push32((uint32_t)(EDX));
  /* 11493444 call 0x11487b50 */
  push32(0x11493449u); f_11487b50();
  /* 11493449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149344c push 2 */
  push32((uint32_t)(0x2u));
  /* 1149344e mov eax, dword ptr [0x114b672c] */
  EAX = (r32((uint32_t)(0x114b672c)));
  /* 11493453 push eax */
  push32((uint32_t)(EAX));
  /* 11493454 call 0x11487b50 */
  push32(0x11493459u); f_11487b50();
  /* 11493459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149345c mov dword ptr [0x114b6724], 0 */
  w32((uint32_t)(0x114b6724), (0x0u));
  /* 11493466 mov dword ptr [0x114b6728], 0 */
  w32((uint32_t)(0x114b6728), (0x0u));
  /* 11493470 mov dword ptr [0x114b672c], 0 */
  w32((uint32_t)(0x114b672c), (0x0u));
  /* 1149347a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1149347f push 0x114b12f8 */
  push32((uint32_t)(0x114b12f8u));
  /* 11493484 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493486 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493488 call 0x114870c0 */
  push32(0x1149348du); f_114870c0();
  /* 1149348d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493490 mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493496 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11493498 mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 1149349e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114934a1 jne 0x114934ab */
  if (!C.zf) goto L_114934ab;
  /* 114934a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114934a6 jmp 0x11493552 */
  goto L_11493552;
L_114934ab:;
  /* 114934ab push 0x114b12a0 */
  push32((uint32_t)(0x114b12a0u));
  /* 114934b0 mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 114934b5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114934b7 push ecx */
  push32((uint32_t)(ECX));
  /* 114934b8 call 0x1148a070 */
  push32(0x114934bdu); f_1148a070();
  /* 114934bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114934c0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 114934c5 push 0x114b12f8 */
  push32((uint32_t)(0x114b12f8u));
  /* 114934ca push 2 */
  push32((uint32_t)(0x2u));
  /* 114934cc push 2 */
  push32((uint32_t)(0x2u));
  /* 114934ce call 0x114870c0 */
  push32(0x114934d3u); f_114870c0();
  /* 114934d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114934d6 mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 114934dc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 114934df mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 114934e4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114934e8 jne 0x114934ef */
  if (!C.zf) goto L_114934ef;
  /* 114934ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114934ed jmp 0x11493552 */
  goto L_11493552;
L_114934ef:;
  /* 114934ef mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 114934f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114934f8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114934fb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11493500 push 0x114b12f8 */
  push32((uint32_t)(0x114b12f8u));
  /* 11493505 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493507 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493509 call 0x114870c0 */
  push32(0x1149350eu); f_114870c0();
  /* 1149350e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493511 mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493517 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1149351a mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493520 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493524 jne 0x1149352b */
  if (!C.zf) goto L_1149352b;
  /* 11493526 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11493529 jmp 0x11493552 */
  goto L_11493552;
L_1149352b:;
  /* 1149352b mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493530 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11493533 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11493536 mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 1149353c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1149353e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11493540 mov byte ptr [0x114b3b84], cl */
  w8((uint32_t)(0x114b3b84), (CL));
  /* 11493546 mov dword ptr [0x114b3b88], 1 */
  w32((uint32_t)(0x114b3b88), (0x1u));
  /* 11493550 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11493552:;
  /* 11493552 mov esp, ebp */
  ESP = (EBP);
  /* 11493554 pop ebp */
  EBP = (pop32());
  /* 11493555 ret  */
  ESPCHK(0x114932b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11493560 (125 bytes, 49 insns) */
void f_11493560(void) {
  FTRACE(0x11493560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493560 push ebp */
  push32((uint32_t)(EBP));
  /* 11493561 mov ebp, esp */
  EBP = (ESP);
  /* 11493563 push ecx */
  push32((uint32_t)(ECX));
L_11493564:;
  /* 11493564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493567 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149356a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149356c je 0x114935d9 */
  if (C.zf) goto L_114935d9;
  /* 1149356e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493571 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11493574 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493577 jl 0x1149359d */
  if ((C.sf!=C.of)) goto L_1149359d;
  /* 11493579 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149357c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1149357f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493582 jg 0x1149359d */
  if ((!C.zf&&C.sf==C.of)) goto L_1149359d;
  /* 11493584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493587 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149358a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149358d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493590 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11493592 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493595 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493598 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1149359b jmp 0x114935d7 */
  goto L_114935d7;
L_1149359d:;
  /* 1149359d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114935a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114935a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114935a6 jne 0x114935ce */
  if (!C.zf) goto L_114935ce;
  /* 114935a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114935ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114935ae:;
  /* 114935ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114935b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114935b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114935b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114935b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114935bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114935bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114935c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114935c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114935c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114935ca jne 0x114935ae */
  if (!C.zf) goto L_114935ae;
  /* 114935cc jmp 0x114935d7 */
  goto L_114935d7;
L_114935ce:;
  /* 114935ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114935d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114935d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114935d7:;
  /* 114935d7 jmp 0x11493564 */
  goto L_11493564;
L_114935d9:;
  /* 114935d9 mov esp, ebp */
  ESP = (EBP);
  /* 114935db pop ebp */
  EBP = (pop32());
  /* 114935dc ret  */
  ESPCHK(0x11493560u, _esp0);
  ESP += 4; return;
}

/* FUN_100135e0 @ 0x114935e0 (304 bytes, 85 insns) */
void f_114935e0(void) {
  FTRACE(0x114935e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114935e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114935e1 mov ebp, esp */
  EBP = (ESP);
  /* 114935e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114935e4 cmp dword ptr [0x114b6708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114935eb je 0x114936ac */
  if (C.zf) goto L_114936ac;
  /* 114935f1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 114935f3 push 0x114b1304 */
  push32((uint32_t)(0x114b1304u));
  /* 114935f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114935fa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 114935fc push 1 */
  push32((uint32_t)(0x1u));
  /* 114935fe call 0x114874d0 */
  push32(0x11493603u); f_114874d0();
  /* 11493603 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493606 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11493609 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149360d jne 0x11493619 */
  if (!C.zf) goto L_11493619;
  /* 1149360f mov eax, 1 */
  EAX = (0x1u);
  /* 11493614 jmp 0x1149370c */
  goto L_1149370c;
L_11493619:;
  /* 11493619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149361c push eax */
  push32((uint32_t)(EAX));
  /* 1149361d call 0x11493710 */
  push32(0x11493622u); f_11493710();
  /* 11493622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493627 je 0x1149364d */
  if (C.zf) goto L_1149364d;
  /* 11493629 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149362c push ecx */
  push32((uint32_t)(ECX));
  /* 1149362d call 0x114939a0 */
  push32(0x11493632u); f_114939a0();
  /* 11493632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493635 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493637 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149363a push edx */
  push32((uint32_t)(EDX));
  /* 1149363b call 0x11487b50 */
  push32(0x11493640u); f_11487b50();
  /* 11493640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493643 mov eax, 1 */
  EAX = (0x1u);
  /* 11493648 jmp 0x1149370c */
  goto L_1149370c;
L_1149364d:;
  /* 1149364d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493650 mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493656 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11493658 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1149365a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149365d mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493663 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11493666 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11493669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149366c mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 11493672 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11493675 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11493678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149367b mov dword ptr [0x114b4dd8], eax */
  w32((uint32_t)(0x114b4dd8), (EAX));
  /* 11493680 mov ecx, dword ptr [0x114b6730] */
  ECX = (r32((uint32_t)(0x114b6730)));
  /* 11493686 push ecx */
  push32((uint32_t)(ECX));
  /* 11493687 call 0x114939a0 */
  push32(0x1149368cu); f_114939a0();
  /* 1149368c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149368f push 2 */
  push32((uint32_t)(0x2u));
  /* 11493691 mov edx, dword ptr [0x114b6730] */
  EDX = (r32((uint32_t)(0x114b6730)));
  /* 11493697 push edx */
  push32((uint32_t)(EDX));
  /* 11493698 call 0x11487b50 */
  push32(0x1149369du); f_11487b50();
  /* 1149369d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114936a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114936a3 mov dword ptr [0x114b6730], eax */
  w32((uint32_t)(0x114b6730), (EAX));
  /* 114936a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114936aa jmp 0x1149370c */
  goto L_1149370c;
L_114936ac:;
  /* 114936ac mov ecx, dword ptr [0x114b4dd8] */
  ECX = (r32((uint32_t)(0x114b4dd8)));
  /* 114936b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114936b4 mov dword ptr [0x114b4da8], edx */
  w32((uint32_t)(0x114b4da8), (EDX));
  /* 114936ba mov eax, dword ptr [0x114b4dd8] */
  EAX = (r32((uint32_t)(0x114b4dd8)));
  /* 114936bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114936c2 mov dword ptr [0x114b4dac], ecx */
  w32((uint32_t)(0x114b4dac), (ECX));
  /* 114936c8 mov edx, dword ptr [0x114b4dd8] */
  EDX = (r32((uint32_t)(0x114b4dd8)));
  /* 114936ce mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114936d1 mov dword ptr [0x114b4db0], eax */
  w32((uint32_t)(0x114b4db0), (EAX));
  /* 114936d6 mov dword ptr [0x114b4dd8], 0x114b4da8 */
  w32((uint32_t)(0x114b4dd8), (0x114b4da8u));
  /* 114936e0 mov ecx, dword ptr [0x114b6730] */
  ECX = (r32((uint32_t)(0x114b6730)));
  /* 114936e6 push ecx */
  push32((uint32_t)(ECX));
  /* 114936e7 call 0x114939a0 */
  push32(0x114936ecu); f_114939a0();
  /* 114936ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114936ef push 2 */
  push32((uint32_t)(0x2u));
  /* 114936f1 mov edx, dword ptr [0x114b6730] */
  EDX = (r32((uint32_t)(0x114b6730)));
  /* 114936f7 push edx */
  push32((uint32_t)(EDX));
  /* 114936f8 call 0x11487b50 */
  push32(0x114936fdu); f_11487b50();
  /* 114936fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493700 mov dword ptr [0x114b6730], 0 */
  w32((uint32_t)(0x114b6730), (0x0u));
  /* 1149370a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1149370c:;
  /* 1149370c mov esp, ebp */
  ESP = (EBP);
  /* 1149370e pop ebp */
  EBP = (pop32());
  /* 1149370f ret  */
  ESPCHK(0x114935e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013710 @ 0x11493710 (525 bytes, 200 insns) */
void f_11493710(void) {
  FTRACE(0x11493710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493710 push ebp */
  push32((uint32_t)(EBP));
  /* 11493711 mov ebp, esp */
  EBP = (ESP);
  /* 11493713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11493716 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1149371d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149371f mov ax, word ptr [0x114b6750] */
  AX = (r16((uint32_t)(0x114b6750)));
  /* 11493725 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11493728 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149372c jne 0x11493736 */
  if (!C.zf) goto L_11493736;
  /* 1149372e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11493731 jmp 0x11493919 */
  goto L_11493919;
L_11493736:;
  /* 11493736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493739 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149373c push ecx */
  push32((uint32_t)(ECX));
  /* 1149373d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1149373f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493742 push edx */
  push32((uint32_t)(EDX));
  /* 11493743 push 1 */
  push32((uint32_t)(0x1u));
  /* 11493745 call 0x11496890 */
  push32(0x1149374au); f_11496890();
  /* 1149374a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149374d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493750 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493752 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11493755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493758 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149375b push edx */
  push32((uint32_t)(EDX));
  /* 1149375c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1149375e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493761 push eax */
  push32((uint32_t)(EAX));
  /* 11493762 push 1 */
  push32((uint32_t)(0x1u));
  /* 11493764 call 0x11496890 */
  push32(0x11493769u); f_11496890();
  /* 11493769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149376c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149376f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493771 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11493774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493777 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149377a push edx */
  push32((uint32_t)(EDX));
  /* 1149377b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1149377d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493780 push eax */
  push32((uint32_t)(EAX));
  /* 11493781 push 1 */
  push32((uint32_t)(0x1u));
  /* 11493783 call 0x11496890 */
  push32(0x11493788u); f_11496890();
  /* 11493788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149378b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149378e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493790 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11493793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493796 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493799 push edx */
  push32((uint32_t)(EDX));
  /* 1149379a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1149379c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149379f push eax */
  push32((uint32_t)(EAX));
  /* 114937a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114937a2 call 0x11496890 */
  push32(0x114937a7u); f_11496890();
  /* 114937a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114937aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114937ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114937af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114937b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114937b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114937b8 push edx */
  push32((uint32_t)(EDX));
  /* 114937b9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 114937bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114937be push eax */
  push32((uint32_t)(EAX));
  /* 114937bf push 1 */
  push32((uint32_t)(0x1u));
  /* 114937c1 call 0x11496890 */
  push32(0x114937c6u); f_11496890();
  /* 114937c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114937c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114937cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114937ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114937d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114937d4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114937d7 push eax */
  push32((uint32_t)(EAX));
  /* 114937d8 call 0x11493920 */
  push32(0x114937ddu); f_11493920();
  /* 114937dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114937e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114937e3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114937e6 push ecx */
  push32((uint32_t)(ECX));
  /* 114937e7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 114937e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114937ec push edx */
  push32((uint32_t)(EDX));
  /* 114937ed push 1 */
  push32((uint32_t)(0x1u));
  /* 114937ef call 0x11496890 */
  push32(0x114937f4u); f_11496890();
  /* 114937f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114937f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114937fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114937fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114937ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493802 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493805 push edx */
  push32((uint32_t)(EDX));
  /* 11493806 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11493808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149380b push eax */
  push32((uint32_t)(EAX));
  /* 1149380c push 1 */
  push32((uint32_t)(0x1u));
  /* 1149380e call 0x11496890 */
  push32(0x11493813u); f_11496890();
  /* 11493813 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493816 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493819 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1149381b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149381e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493821 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493824 push edx */
  push32((uint32_t)(EDX));
  /* 11493825 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11493827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149382a push eax */
  push32((uint32_t)(EAX));
  /* 1149382b push 0 */
  push32((uint32_t)(0x0u));
  /* 1149382d call 0x11496890 */
  push32(0x11493832u); f_11496890();
  /* 11493832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1149383a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149383d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493840 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493843 push edx */
  push32((uint32_t)(EDX));
  /* 11493844 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11493846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493849 push eax */
  push32((uint32_t)(EAX));
  /* 1149384a push 0 */
  push32((uint32_t)(0x0u));
  /* 1149384c call 0x11496890 */
  push32(0x11493851u); f_11496890();
  /* 11493851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493854 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493857 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493859 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149385c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149385f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493862 push edx */
  push32((uint32_t)(EDX));
  /* 11493863 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11493865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493868 push eax */
  push32((uint32_t)(EAX));
  /* 11493869 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149386b call 0x11496890 */
  push32(0x11493870u); f_11496890();
  /* 11493870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493873 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493876 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493878 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149387b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149387e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493881 push edx */
  push32((uint32_t)(EDX));
  /* 11493882 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11493884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493887 push eax */
  push32((uint32_t)(EAX));
  /* 11493888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149388a call 0x11496890 */
  push32(0x1149388fu); f_11496890();
  /* 1149388f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493895 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493897 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149389a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149389d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114938a0 push edx */
  push32((uint32_t)(EDX));
  /* 114938a1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 114938a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114938a6 push eax */
  push32((uint32_t)(EAX));
  /* 114938a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114938a9 call 0x11496890 */
  push32(0x114938aeu); f_11496890();
  /* 114938ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114938b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114938b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114938b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114938b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114938bc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114938bf push edx */
  push32((uint32_t)(EDX));
  /* 114938c0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 114938c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114938c5 push eax */
  push32((uint32_t)(EAX));
  /* 114938c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114938c8 call 0x11496890 */
  push32(0x114938cdu); f_11496890();
  /* 114938cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114938d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114938d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114938d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114938d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114938db add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114938de push edx */
  push32((uint32_t)(EDX));
  /* 114938df push 0x52 */
  push32((uint32_t)(0x52u));
  /* 114938e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114938e4 push eax */
  push32((uint32_t)(EAX));
  /* 114938e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114938e7 call 0x11496890 */
  push32(0x114938ecu); f_11496890();
  /* 114938ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114938ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114938f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114938f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114938f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114938fa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114938fd push edx */
  push32((uint32_t)(EDX));
  /* 114938fe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11493900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493903 push eax */
  push32((uint32_t)(EAX));
  /* 11493904 push 0 */
  push32((uint32_t)(0x0u));
  /* 11493906 call 0x11496890 */
  push32(0x1149390bu); f_11496890();
  /* 1149390b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149390e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493911 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11493913 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11493916 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11493919:;
  /* 11493919 mov esp, ebp */
  ESP = (EBP);
  /* 1149391b pop ebp */
  EBP = (pop32());
  /* 1149391c ret  */
  ESPCHK(0x11493710u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11493920 (125 bytes, 49 insns) */
void f_11493920(void) {
  FTRACE(0x11493920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493920 push ebp */
  push32((uint32_t)(EBP));
  /* 11493921 mov ebp, esp */
  EBP = (ESP);
  /* 11493923 push ecx */
  push32((uint32_t)(ECX));
L_11493924:;
  /* 11493924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493927 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149392a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149392c je 0x11493999 */
  if (C.zf) goto L_11493999;
  /* 1149392e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493931 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11493934 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493937 jl 0x1149395d */
  if ((C.sf!=C.of)) goto L_1149395d;
  /* 11493939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149393c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1149393f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493942 jg 0x1149395d */
  if ((!C.zf&&C.sf==C.of)) goto L_1149395d;
  /* 11493944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493947 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149394a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149394d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493950 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11493952 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493955 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493958 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1149395b jmp 0x11493997 */
  goto L_11493997;
L_1149395d:;
  /* 1149395d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493960 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11493963 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493966 jne 0x1149398e */
  if (!C.zf) goto L_1149398e;
  /* 11493968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149396b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1149396e:;
  /* 1149396e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493971 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493974 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11493977 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11493979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149397c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149397f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11493982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11493985 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11493988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149398a jne 0x1149396e */
  if (!C.zf) goto L_1149396e;
  /* 1149398c jmp 0x11493997 */
  goto L_11493997;
L_1149398e:;
  /* 1149398e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493991 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493994 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11493997:;
  /* 11493997 jmp 0x11493924 */
  goto L_11493924;
L_11493999:;
  /* 11493999 mov esp, ebp */
  ESP = (EBP);
  /* 1149399b pop ebp */
  EBP = (pop32());
  /* 1149399c ret  */
  ESPCHK(0x11493920u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x114939a0 (147 bytes, 52 insns) */
void f_114939a0(void) {
  FTRACE(0x114939a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114939a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114939a1 mov ebp, esp */
  EBP = (ESP);
  /* 114939a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114939a7 jne 0x114939ae */
  if (!C.zf) goto L_114939ae;
  /* 114939a9 jmp 0x11493a31 */
  goto L_11493a31;
L_114939ae:;
  /* 114939ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114939b1 cmp dword ptr [eax + 0xc], 0x114b678c */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x114b678cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114939b8 je 0x11493a31 */
  if (C.zf) goto L_11493a31;
  /* 114939ba push 2 */
  push32((uint32_t)(0x2u));
  /* 114939bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114939bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114939c2 push edx */
  push32((uint32_t)(EDX));
  /* 114939c3 call 0x11487b50 */
  push32(0x114939c8u); f_11487b50();
  /* 114939c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114939cb push 2 */
  push32((uint32_t)(0x2u));
  /* 114939cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114939d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114939d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114939d4 call 0x11487b50 */
  push32(0x114939d9u); f_11487b50();
  /* 114939d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114939dc push 2 */
  push32((uint32_t)(0x2u));
  /* 114939de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114939e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114939e4 push eax */
  push32((uint32_t)(EAX));
  /* 114939e5 call 0x11487b50 */
  push32(0x114939eau); f_11487b50();
  /* 114939ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114939ed push 2 */
  push32((uint32_t)(0x2u));
  /* 114939ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114939f2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114939f5 push edx */
  push32((uint32_t)(EDX));
  /* 114939f6 call 0x11487b50 */
  push32(0x114939fbu); f_11487b50();
  /* 114939fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114939fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11493a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493a03 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11493a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11493a07 call 0x11487b50 */
  push32(0x11493a0cu); f_11487b50();
  /* 11493a0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493a0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11493a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493a14 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11493a17 push eax */
  push32((uint32_t)(EAX));
  /* 11493a18 call 0x11487b50 */
  push32(0x11493a1du); f_11487b50();
  /* 11493a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493a20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493a22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493a25 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11493a28 push edx */
  push32((uint32_t)(EDX));
  /* 11493a29 call 0x11487b50 */
  push32(0x11493a2eu); f_11487b50();
  /* 11493a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11493a31:;
  /* 11493a31 pop ebp */
  EBP = (pop32());
  /* 11493a32 ret  */
  ESPCHK(0x114939a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a40 @ 0x11493a40 (928 bytes, 284 insns) */
void f_11493a40(void) {
  FTRACE(0x11493a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11493a41 mov ebp, esp */
  EBP = (ESP);
  /* 11493a43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11493a46 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11493a4d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11493a54 cmp dword ptr [0x114b6704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493a5b je 0x11493d91 */
  if (C.zf) goto L_11493d91;
  /* 11493a61 cmp dword ptr [0x114b6714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493a68 jne 0x11493a90 */
  if (!C.zf) goto L_11493a90;
  /* 11493a6a push 0x114b6714 */
  push32((uint32_t)(0x114b6714u));
  /* 11493a6f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11493a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493a76 mov ax, word ptr [0x114b6748] */
  AX = (r16((uint32_t)(0x114b6748)));
  /* 11493a7c push eax */
  push32((uint32_t)(EAX));
  /* 11493a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11493a7f call 0x11496890 */
  push32(0x11493a84u); f_11496890();
  /* 11493a84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493a89 je 0x11493a90 */
  if (C.zf) goto L_11493a90;
  /* 11493a8b jmp 0x11493d52 */
  goto L_11493d52;
L_11493a90:;
  /* 11493a90 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11493a92 push 0x114b1310 */
  push32((uint32_t)(0x114b1310u));
  /* 11493a97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493a99 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11493a9e call 0x114870c0 */
  push32(0x11493aa3u); f_114870c0();
  /* 11493aa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493aa6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11493aa9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11493aab push 0x114b1310 */
  push32((uint32_t)(0x114b1310u));
  /* 11493ab0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493ab2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11493ab7 call 0x114870c0 */
  push32(0x11493abcu); f_114870c0();
  /* 11493abc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493abf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11493ac2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11493ac4 push 0x114b1310 */
  push32((uint32_t)(0x114b1310u));
  /* 11493ac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493acb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11493ad0 call 0x114870c0 */
  push32(0x11493ad5u); f_114870c0();
  /* 11493ad5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493ad8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11493adb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11493add push 0x114b1310 */
  push32((uint32_t)(0x114b1310u));
  /* 11493ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493ae4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11493ae9 call 0x114870c0 */
  push32(0x11493aeeu); f_114870c0();
  /* 11493aee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493af1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11493af4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493af8 je 0x11493b0c */
  if (C.zf) goto L_11493b0c;
  /* 11493afa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493afe je 0x11493b0c */
  if (C.zf) goto L_11493b0c;
  /* 11493b00 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493b04 je 0x11493b0c */
  if (C.zf) goto L_11493b0c;
  /* 11493b06 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493b0a jne 0x11493b11 */
  if (!C.zf) goto L_11493b11;
L_11493b0c:;
  /* 11493b0c jmp 0x11493d52 */
  goto L_11493d52;
L_11493b11:;
  /* 11493b11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11493b14 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11493b17 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11493b1e jmp 0x11493b29 */
  goto L_11493b29;
L_11493b20:;
  /* 11493b20 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11493b23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493b26 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11493b29:;
  /* 11493b29 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493b30 jge 0x11493b45 */
  if ((C.sf==C.of)) goto L_11493b45;
  /* 11493b32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493b35 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11493b38 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11493b3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493b3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493b40 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11493b43 jmp 0x11493b20 */
  goto L_11493b20;
L_11493b45:;
  /* 11493b45 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11493b48 push eax */
  push32((uint32_t)(EAX));
  /* 11493b49 mov ecx, dword ptr [0x114b6714] */
  ECX = (r32((uint32_t)(0x114b6714)));
  /* 11493b4f push ecx */
  push32((uint32_t)(ECX));
  /* 11493b50 call dword ptr [0x114b9318] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9318))), 0x11493b56u);
  /* 11493b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493b58 jne 0x11493b5f */
  if (!C.zf) goto L_11493b5f;
  /* 11493b5a jmp 0x11493d52 */
  goto L_11493d52;
L_11493b5f:;
  /* 11493b5f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493b63 jbe 0x11493b6a */
  if ((C.cf||C.zf)) goto L_11493b6a;
  /* 11493b65 jmp 0x11493d52 */
  goto L_11493d52;
L_11493b6a:;
  /* 11493b6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11493b6d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11493b73 mov dword ptr [0x114b3b80], edx */
  w32((uint32_t)(0x114b3b80), (EDX));
  /* 11493b79 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493b80 jle 0x11493bd9 */
  if ((C.zf||C.sf!=C.of)) goto L_11493bd9;
  /* 11493b82 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11493b85 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11493b88 jmp 0x11493b93 */
  goto L_11493b93;
L_11493b8a:;
  /* 11493b8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493b8d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493b90 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11493b93:;
  /* 11493b93 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493b98 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11493b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493b9c je 0x11493bd9 */
  if (C.zf) goto L_11493bd9;
  /* 11493b9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493ba1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11493ba3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11493ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11493ba8 je 0x11493bd9 */
  if (C.zf) goto L_11493bd9;
  /* 11493baa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493bad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11493baf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11493bb1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11493bb4 jmp 0x11493bbf */
  goto L_11493bbf;
L_11493bb6:;
  /* 11493bb6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11493bb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493bbc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11493bbf:;
  /* 11493bbf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493bc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11493bc4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11493bc7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493bca jg 0x11493bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11493bd7;
  /* 11493bcc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11493bcf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493bd2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11493bd5 jmp 0x11493bb6 */
  goto L_11493bb6;
L_11493bd7:;
  /* 11493bd7 jmp 0x11493b8a */
  goto L_11493b8a;
L_11493bd9:;
  /* 11493bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11493bdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11493bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11493bdf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11493be2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493be5 push eax */
  push32((uint32_t)(EAX));
  /* 11493be6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11493beb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11493bee push ecx */
  push32((uint32_t)(ECX));
  /* 11493bef push 1 */
  push32((uint32_t)(0x1u));
  /* 11493bf1 call 0x1148faf0 */
  push32(0x11493bf6u); f_1148faf0();
  /* 11493bf6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493bfb jne 0x11493c02 */
  if (!C.zf) goto L_11493c02;
  /* 11493bfd jmp 0x11493d52 */
  goto L_11493d52;
L_11493c02:;
  /* 11493c02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11493c05 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11493c0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11493c0d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11493c10 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11493c17 jmp 0x11493c22 */
  goto L_11493c22;
L_11493c19:;
  /* 11493c19 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11493c1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493c1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11493c22:;
  /* 11493c22 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493c29 jge 0x11493c40 */
  if ((C.sf==C.of)) goto L_11493c40;
  /* 11493c2b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11493c2e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11493c32 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11493c35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11493c38 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493c3b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11493c3e jmp 0x11493c19 */
  goto L_11493c19;
L_11493c40:;
  /* 11493c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11493c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11493c44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11493c47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493c4a push edx */
  push32((uint32_t)(EDX));
  /* 11493c4b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11493c50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11493c53 push eax */
  push32((uint32_t)(EAX));
  /* 11493c54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11493c56 call 0x11496b30 */
  push32(0x11493c5bu); f_11496b30();
  /* 11493c5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493c60 jne 0x11493c67 */
  if (!C.zf) goto L_11493c67;
  /* 11493c62 jmp 0x11493d52 */
  goto L_11493d52;
L_11493c67:;
  /* 11493c67 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11493c6a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11493c6f cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493c76 jle 0x11493cd3 */
  if ((C.zf||C.sf!=C.of)) goto L_11493cd3;
  /* 11493c78 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11493c7b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11493c7e jmp 0x11493c89 */
  goto L_11493c89;
L_11493c80:;
  /* 11493c80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493c83 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493c86 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11493c89:;
  /* 11493c89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493c8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11493c8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11493c90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11493c92 je 0x11493cd3 */
  if (C.zf) goto L_11493cd3;
  /* 11493c94 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493c97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11493c99 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11493c9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11493c9e je 0x11493cd3 */
  if (C.zf) goto L_11493cd3;
  /* 11493ca0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493ca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493ca5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11493ca7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11493caa jmp 0x11493cb5 */
  goto L_11493cb5;
L_11493cac:;
  /* 11493cac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11493caf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493cb2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11493cb5:;
  /* 11493cb5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11493cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493cba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11493cbd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493cc0 jg 0x11493cd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11493cd1;
  /* 11493cc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11493cc5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11493cc8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11493ccf jmp 0x11493cac */
  goto L_11493cac;
L_11493cd1:;
  /* 11493cd1 jmp 0x11493c80 */
  goto L_11493c80;
L_11493cd3:;
  /* 11493cd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11493cd6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493cd9 mov dword ptr [0x114b3b8c], eax */
  w32((uint32_t)(0x114b3b8c), (EAX));
  /* 11493cde mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11493ce1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493ce4 mov dword ptr [0x114b3b90], ecx */
  w32((uint32_t)(0x114b3b90), (ECX));
  /* 11493cea cmp dword ptr [0x114b6734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493cf1 je 0x11493d04 */
  if (C.zf) goto L_11493d04;
  /* 11493cf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493cf5 mov edx, dword ptr [0x114b6734] */
  EDX = (r32((uint32_t)(0x114b6734)));
  /* 11493cfb push edx */
  push32((uint32_t)(EDX));
  /* 11493cfc call 0x11487b50 */
  push32(0x11493d01u); f_11487b50();
  /* 11493d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11493d04:;
  /* 11493d04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11493d07 mov dword ptr [0x114b6734], eax */
  w32((uint32_t)(0x114b6734), (EAX));
  /* 11493d0c cmp dword ptr [0x114b6738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493d13 je 0x11493d26 */
  if (C.zf) goto L_11493d26;
  /* 11493d15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d17 mov ecx, dword ptr [0x114b6738] */
  ECX = (r32((uint32_t)(0x114b6738)));
  /* 11493d1d push ecx */
  push32((uint32_t)(ECX));
  /* 11493d1e call 0x11487b50 */
  push32(0x11493d23u); f_11487b50();
  /* 11493d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11493d26:;
  /* 11493d26 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11493d29 mov dword ptr [0x114b6738], edx */
  w32((uint32_t)(0x114b6738), (EDX));
  /* 11493d2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d31 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11493d34 push eax */
  push32((uint32_t)(EAX));
  /* 11493d35 call 0x11487b50 */
  push32(0x11493d3au); f_11487b50();
  /* 11493d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493d3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d3f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11493d42 push ecx */
  push32((uint32_t)(ECX));
  /* 11493d43 call 0x11487b50 */
  push32(0x11493d48u); f_11487b50();
  /* 11493d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493d4d jmp 0x11493ddc */
  goto L_11493ddc;
L_11493d52:;
  /* 11493d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11493d57 push edx */
  push32((uint32_t)(EDX));
  /* 11493d58 call 0x11487b50 */
  push32(0x11493d5du); f_11487b50();
  /* 11493d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d62 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11493d65 push eax */
  push32((uint32_t)(EAX));
  /* 11493d66 call 0x11487b50 */
  push32(0x11493d6bu); f_11487b50();
  /* 11493d6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493d6e push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11493d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11493d74 call 0x11487b50 */
  push32(0x11493d79u); f_11487b50();
  /* 11493d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493d7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11493d7e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11493d81 push edx */
  push32((uint32_t)(EDX));
  /* 11493d82 call 0x11487b50 */
  push32(0x11493d87u); f_11487b50();
  /* 11493d87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493d8a mov eax, 1 */
  EAX = (0x1u);
  /* 11493d8f jmp 0x11493ddc */
  goto L_11493ddc;
L_11493d91:;
  /* 11493d91 mov dword ptr [0x114b3b8c], 0x114b3b96 */
  w32((uint32_t)(0x114b3b8c), (0x114b3b96u));
  /* 11493d9b mov dword ptr [0x114b3b90], 0x114b3b96 */
  w32((uint32_t)(0x114b3b90), (0x114b3b96u));
  /* 11493da5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493da7 mov eax, dword ptr [0x114b6734] */
  EAX = (r32((uint32_t)(0x114b6734)));
  /* 11493dac push eax */
  push32((uint32_t)(EAX));
  /* 11493dad call 0x11487b50 */
  push32(0x11493db2u); f_11487b50();
  /* 11493db2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493db5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11493db7 mov ecx, dword ptr [0x114b6738] */
  ECX = (r32((uint32_t)(0x114b6738)));
  /* 11493dbd push ecx */
  push32((uint32_t)(ECX));
  /* 11493dbe call 0x11487b50 */
  push32(0x11493dc3u); f_11487b50();
  /* 11493dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493dc6 mov dword ptr [0x114b6734], 0 */
  w32((uint32_t)(0x114b6734), (0x0u));
  /* 11493dd0 mov dword ptr [0x114b6738], 0 */
  w32((uint32_t)(0x114b6738), (0x0u));
  /* 11493dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11493ddc:;
  /* 11493ddc mov esp, ebp */
  ESP = (EBP);
  /* 11493dde pop ebp */
  EBP = (pop32());
  /* 11493ddf ret  */
  ESPCHK(0x11493a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013de0 @ 0x11493de0 (7 bytes, 5 insns) */
void f_11493de0(void) {
  FTRACE(0x11493de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11493de1 mov ebp, esp */
  EBP = (ESP);
  /* 11493de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493de5 pop ebp */
  EBP = (pop32());
  /* 11493de6 ret  */
  ESPCHK(0x11493de0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11493df0 (129 bytes, 56 insns) */
void f_11493df0(void) {
  FTRACE(0x11493df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493df0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11493df4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11493df8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11493dfe jne 0x11493e3c */
  if (!C.zf) goto L_11493e3c;
L_11493e00:;
  /* 11493e00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11493e02 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e04 jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493e08 je 0x11493e30 */
  if (C.zf) goto L_11493e30;
  /* 11493e0a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e0d jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e0f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11493e11 je 0x11493e30 */
  if (C.zf) goto L_11493e30;
  /* 11493e13 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11493e16 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e19 jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e1b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493e1d je 0x11493e30 */
  if (C.zf) goto L_11493e30;
  /* 11493e1f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e22 jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e24 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493e27 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493e2a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11493e2c jne 0x11493e00 */
  if (!C.zf) goto L_11493e00;
  /* 11493e2e mov edi, edi */
  EDI = (EDI);
L_11493e30:;
  /* 11493e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493e32 ret  */
  ESPCHK(0x11493df0u, _esp0);
  ESP += 4; return;
  /* 11493e33 nop  */
  /* nop */
L_11493e34:;
  /* 11493e34 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11493e36 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11493e38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11493e39 ret  */
  ESPCHK(0x11493df0u, _esp0);
  ESP += 4; return;
  /* 11493e3a mov edi, edi */
  EDI = (EDI);
L_11493e3c:;
  /* 11493e3c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11493e42 je 0x11493e58 */
  if (C.zf) goto L_11493e58;
  /* 11493e44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11493e46 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11493e47 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e49 jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11493e4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493e4e je 0x11493e30 */
  if (C.zf) goto L_11493e30;
  /* 11493e50 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11493e56 je 0x11493e00 */
  if (C.zf) goto L_11493e00;
L_11493e58:;
  /* 11493e58 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11493e5b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493e5e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e60 jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e62 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493e64 je 0x11493e30 */
  if (C.zf) goto L_11493e30;
  /* 11493e66 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493e69 jne 0x11493e34 */
  if (!C.zf) goto L_11493e34;
  /* 11493e6b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11493e6d je 0x11493e30 */
  if (C.zf) goto L_11493e30;
  /* 11493e6f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493e72 jmp 0x11493e00 */
  goto L_11493e00;
}

/* FUN_10013e80 @ 0x11493e80 (62 bytes, 35 insns) */
void f_11493e80(void) {
  FTRACE(0x11493e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11493e81 mov ebp, esp */
  EBP = (ESP);
  /* 11493e83 push esi */
  push32((uint32_t)(ESI));
  /* 11493e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493e86 push eax */
  push32((uint32_t)(EAX));
  /* 11493e87 push eax */
  push32((uint32_t)(EAX));
  /* 11493e88 push eax */
  push32((uint32_t)(EAX));
  /* 11493e89 push eax */
  push32((uint32_t)(EAX));
  /* 11493e8a push eax */
  push32((uint32_t)(EAX));
  /* 11493e8b push eax */
  push32((uint32_t)(EAX));
  /* 11493e8c push eax */
  push32((uint32_t)(EAX));
  /* 11493e8d push eax */
  push32((uint32_t)(EAX));
  /* 11493e8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11493e91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11493e94:;
  /* 11493e94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11493e96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493e98 je 0x11493ea1 */
  if (C.zf) goto L_11493ea1;
  /* 11493e9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11493e9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11493e9b");
  /* 11493e9f jmp 0x11493e94 */
  goto L_11493e94;
L_11493ea1:;
  /* 11493ea1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11493ea4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11493ea7 nop  */
  /* nop */
L_11493ea8:;
  /* 11493ea8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11493ea9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11493eab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493ead je 0x11493eb6 */
  if (C.zf) goto L_11493eb6;
  /* 11493eaf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11493eb0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11493eb0");
  /* 11493eb4 jae 0x11493ea8 */
  if (!C.cf) goto L_11493ea8;
L_11493eb6:;
  /* 11493eb6 mov eax, ecx */
  EAX = (ECX);
  /* 11493eb8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493ebb pop esi */
  ESI = (pop32());
  /* 11493ebc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11493ebd ret  */
  ESPCHK(0x11493e80u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11493ec0 (56 bytes, 31 insns) */
void f_11493ec0(void) {
  FTRACE(0x11493ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11493ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11493ec3 push edi */
  push32((uint32_t)(EDI));
  /* 11493ec4 push esi */
  push32((uint32_t)(ESI));
  /* 11493ec5 push ebx */
  push32((uint32_t)(EBX));
  /* 11493ec6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11493ec9 jecxz 0x11493ef1 */
  x86_unimpl("jecxz @ 0x11493ec9");
  /* 11493ecb mov ebx, ecx */
  EBX = (ECX);
  /* 11493ecd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11493ed0 mov esi, edi */
  ESI = (EDI);
  /* 11493ed2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493ed4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11493ed6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11493ed8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493eda mov edi, esi */
  EDI = (ESI);
  /* 11493edc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11493edf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11493ee1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11493ee4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11493ee6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11493ee9 ja 0x11493eef */
  if ((!C.cf&&!C.zf)) goto L_11493eef;
  /* 11493eeb je 0x11493ef1 */
  if (C.zf) goto L_11493ef1;
  /* 11493eed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11493eee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11493eef:;
  /* 11493eef not ecx */
  ECX = (~(ECX));
L_11493ef1:;
  /* 11493ef1 mov eax, ecx */
  EAX = (ECX);
  /* 11493ef3 pop ebx */
  EBX = (pop32());
  /* 11493ef4 pop esi */
  ESI = (pop32());
  /* 11493ef5 pop edi */
  EDI = (pop32());
  /* 11493ef6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11493ef7 ret  */
  ESPCHK(0x11493ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f00 @ 0x11493f00 (58 bytes, 32 insns) */
void f_11493f00(void) {
  FTRACE(0x11493f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11493f01 mov ebp, esp */
  EBP = (ESP);
  /* 11493f03 push esi */
  push32((uint32_t)(ESI));
  /* 11493f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11493f06 push eax */
  push32((uint32_t)(EAX));
  /* 11493f07 push eax */
  push32((uint32_t)(EAX));
  /* 11493f08 push eax */
  push32((uint32_t)(EAX));
  /* 11493f09 push eax */
  push32((uint32_t)(EAX));
  /* 11493f0a push eax */
  push32((uint32_t)(EAX));
  /* 11493f0b push eax */
  push32((uint32_t)(EAX));
  /* 11493f0c push eax */
  push32((uint32_t)(EAX));
  /* 11493f0d push eax */
  push32((uint32_t)(EAX));
  /* 11493f0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11493f11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11493f14:;
  /* 11493f14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11493f16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493f18 je 0x11493f21 */
  if (C.zf) goto L_11493f21;
  /* 11493f1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11493f1b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11493f1b");
  /* 11493f1f jmp 0x11493f14 */
  goto L_11493f14;
L_11493f21:;
  /* 11493f21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11493f24:;
  /* 11493f24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11493f26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11493f28 je 0x11493f34 */
  if (C.zf) goto L_11493f34;
  /* 11493f2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11493f2b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11493f2b");
  /* 11493f2f jae 0x11493f24 */
  if (!C.cf) goto L_11493f24;
  /* 11493f31 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11493f34:;
  /* 11493f34 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11493f37 pop esi */
  ESI = (pop32());
  /* 11493f38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11493f39 ret  */
  ESPCHK(0x11493f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f40 @ 0x11493f40 (512 bytes, 147 insns) */
void f_11493f40(void) {
  FTRACE(0x11493f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11493f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11493f41 mov ebp, esp */
  EBP = (ESP);
  /* 11493f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11493f46 cmp dword ptr [0x114b6780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493f4d jne 0x11493f72 */
  if (!C.zf) goto L_11493f72;
  /* 11493f4f call 0x11494a10 */
  push32(0x11493f54u); f_11494a10();
  /* 11493f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11493f56 je 0x11493f62 */
  if (C.zf) goto L_11493f62;
  /* 11493f58 mov eax, dword ptr [0x114b92e4] */
  EAX = (r32((uint32_t)(0x114b92e4)));
  /* 11493f5d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11493f60 jmp 0x11493f69 */
  goto L_11493f69;
L_11493f62:;
  /* 11493f62 mov dword ptr [ebp - 8], 0x11494a60 */
  w32((uint32_t)(EBP + -0x8), (0x11494a60u));
L_11493f69:;
  /* 11493f69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11493f6c mov dword ptr [0x114b6780], ecx */
  w32((uint32_t)(0x114b6780), (ECX));
L_11493f72:;
  /* 11493f72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493f76 jne 0x11493f82 */
  if (!C.zf) goto L_11493f82;
  /* 11493f78 call 0x11494860 */
  push32(0x11493f7du); f_11494860();
  /* 11493f7d jmp 0x1149404e */
  goto L_1149404e;
L_11493f82:;
  /* 11493f82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493f85 mov dword ptr [0x114b6770], edx */
  w32((uint32_t)(0x114b6770), (EDX));
  /* 11493f8b cmp dword ptr [0x114b6770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493f92 je 0x11493fb4 */
  if (C.zf) goto L_11493fb4;
  /* 11493f94 mov eax, dword ptr [0x114b6770] */
  EAX = (r32((uint32_t)(0x114b6770)));
  /* 11493f99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11493f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11493f9e je 0x11493fb4 */
  if (C.zf) goto L_11493fb4;
  /* 11493fa0 push 0x114b6770 */
  push32((uint32_t)(0x114b6770u));
  /* 11493fa5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11493fa7 push 0x114b4ae0 */
  push32((uint32_t)(0x114b4ae0u));
  /* 11493fac call 0x11494140 */
  push32(0x11493fb1u); f_11494140();
  /* 11493fb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11493fb4:;
  /* 11493fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11493fb7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11493fba mov dword ptr [0x114b6774], edx */
  w32((uint32_t)(0x114b6774), (EDX));
  /* 11493fc0 cmp dword ptr [0x114b6774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493fc7 je 0x11493fe9 */
  if (C.zf) goto L_11493fe9;
  /* 11493fc9 mov eax, dword ptr [0x114b6774] */
  EAX = (r32((uint32_t)(0x114b6774)));
  /* 11493fce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11493fd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11493fd3 je 0x11493fe9 */
  if (C.zf) goto L_11493fe9;
  /* 11493fd5 push 0x114b6774 */
  push32((uint32_t)(0x114b6774u));
  /* 11493fda push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11493fdc push 0x114b4a28 */
  push32((uint32_t)(0x114b4a28u));
  /* 11493fe1 call 0x11494140 */
  push32(0x11493fe6u); f_11494140();
  /* 11493fe6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11493fe9:;
  /* 11493fe9 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
  /* 11493ff3 cmp dword ptr [0x114b6770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11493ffa je 0x1149402d */
  if (C.zf) goto L_1149402d;
  /* 11493ffc mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 11494002 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11494005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494007 je 0x1149402d */
  if (C.zf) goto L_1149402d;
  /* 11494009 cmp dword ptr [0x114b6774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494010 je 0x11494026 */
  if (C.zf) goto L_11494026;
  /* 11494012 mov ecx, dword ptr [0x114b6774] */
  ECX = (r32((uint32_t)(0x114b6774)));
  /* 11494018 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1149401b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1149401d je 0x11494026 */
  if (C.zf) goto L_11494026;
  /* 1149401f call 0x114941d0 */
  push32(0x11494024u); f_114941d0();
  /* 11494024 jmp 0x1149402b */
  goto L_1149402b;
L_11494026:;
  /* 11494026 call 0x114945c0 */
  push32(0x1149402bu); f_114945c0();
L_1149402b:;
  /* 1149402b jmp 0x1149404e */
  goto L_1149404e;
L_1149402d:;
  /* 1149402d cmp dword ptr [0x114b6774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494034 je 0x11494049 */
  if (C.zf) goto L_11494049;
  /* 11494036 mov eax, dword ptr [0x114b6774] */
  EAX = (r32((uint32_t)(0x114b6774)));
  /* 1149403b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1149403e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494040 je 0x11494049 */
  if (C.zf) goto L_11494049;
  /* 11494042 call 0x11494760 */
  push32(0x11494047u); f_11494760();
  /* 11494047 jmp 0x1149404e */
  goto L_1149404e;
L_11494049:;
  /* 11494049 call 0x11494860 */
  push32(0x1149404eu); f_11494860();
L_1149404e:;
  /* 1149404e cmp dword ptr [0x114b6778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494055 jne 0x1149405e */
  if (!C.zf) goto L_1149405e;
  /* 11494057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11494059 jmp 0x1149413c */
  goto L_1149413c;
L_1149405e:;
  /* 1149405e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494061 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494067 push edx */
  push32((uint32_t)(EDX));
  /* 11494068 call 0x11494890 */
  push32(0x1149406du); f_11494890();
  /* 1149406d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494070 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11494073 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494077 je 0x1149408c */
  if (C.zf) goto L_1149408c;
  /* 11494079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149407c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494081 push eax */
  push32((uint32_t)(EAX));
  /* 11494082 call dword ptr [0x114b92e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e8))), 0x11494088u);
  /* 11494088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149408a jne 0x11494093 */
  if (!C.zf) goto L_11494093;
L_1149408c:;
  /* 1149408c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149408e jmp 0x1149413c */
  goto L_1149413c;
L_11494093:;
  /* 11494093 push 1 */
  push32((uint32_t)(0x1u));
  /* 11494095 mov ecx, dword ptr [0x114b6760] */
  ECX = (r32((uint32_t)(0x114b6760)));
  /* 1149409b push ecx */
  push32((uint32_t)(ECX));
  /* 1149409c call dword ptr [0x114b92ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92ec))), 0x114940a2u);
  /* 114940a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114940a4 jne 0x114940ad */
  if (!C.zf) goto L_114940ad;
  /* 114940a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114940a8 jmp 0x1149413c */
  goto L_1149413c;
L_114940ad:;
  /* 114940ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114940b1 je 0x114940d8 */
  if (C.zf) goto L_114940d8;
  /* 114940b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114940b6 mov ax, word ptr [0x114b6760] */
  AX = (r16((uint32_t)(0x114b6760)));
  /* 114940bc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 114940bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114940c2 mov dx, word ptr [0x114b677c] */
  DX = (r16((uint32_t)(0x114b677c)));
  /* 114940c9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 114940cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114940d0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114940d4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_114940d8:;
  /* 114940d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114940dc je 0x11494137 */
  if (C.zf) goto L_11494137;
  /* 114940de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114940e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114940e3 push edx */
  push32((uint32_t)(EDX));
  /* 114940e4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 114940e9 mov eax, dword ptr [0x114b6760] */
  EAX = (r32((uint32_t)(0x114b6760)));
  /* 114940ee push eax */
  push32((uint32_t)(EAX));
  /* 114940ef call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x114940f5u);
  /* 114940f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114940f7 jne 0x114940fd */
  if (!C.zf) goto L_114940fd;
  /* 114940f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114940fb jmp 0x1149413c */
  goto L_1149413c;
L_114940fd:;
  /* 114940fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114940ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11494102 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494105 push ecx */
  push32((uint32_t)(ECX));
  /* 11494106 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1149410b mov edx, dword ptr [0x114b677c] */
  EDX = (r32((uint32_t)(0x114b677c)));
  /* 11494111 push edx */
  push32((uint32_t)(EDX));
  /* 11494112 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x11494118u);
  /* 11494118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149411a jne 0x11494120 */
  if (!C.zf) goto L_11494120;
  /* 1149411c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1149411e jmp 0x1149413c */
  goto L_1149413c;
L_11494120:;
  /* 11494120 push 0xa */
  push32((uint32_t)(0xau));
  /* 11494122 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11494125 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149412a push eax */
  push32((uint32_t)(EAX));
  /* 1149412b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149412e push ecx */
  push32((uint32_t)(ECX));
  /* 1149412f call 0x11489c00 */
  push32(0x11494134u); f_11489c00();
  /* 11494134 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11494137:;
  /* 11494137 mov eax, 1 */
  EAX = (0x1u);
L_1149413c:;
  /* 1149413c mov esp, ebp */
  ESP = (EBP);
  /* 1149413e pop ebp */
  EBP = (pop32());
  /* 1149413f ret  */
  ESPCHK(0x11493f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014140 @ 0x11494140 (130 bytes, 47 insns) */
void f_11494140(void) {
  FTRACE(0x11494140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494140 push ebp */
  push32((uint32_t)(EBP));
  /* 11494141 mov ebp, esp */
  EBP = (ESP);
  /* 11494143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494146 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1149414d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11494154:;
  /* 11494154 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494157 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149415a jg 0x114941be */
  if ((!C.zf&&C.sf==C.of)) goto L_114941be;
  /* 1149415c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494160 je 0x114941be */
  if (C.zf) goto L_114941be;
  /* 11494162 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494165 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494168 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11494169 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149416b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1149416d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11494170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494176 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11494179 push eax */
  push32((uint32_t)(EAX));
  /* 1149417a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149417d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1149417f push edx */
  push32((uint32_t)(EDX));
  /* 11494180 call 0x11496da0 */
  push32(0x11494185u); f_11496da0();
  /* 11494185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149418b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149418f jne 0x114941a2 */
  if (!C.zf) goto L_114941a2;
  /* 11494191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494194 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494197 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1149419b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1149419e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114941a0 jmp 0x114941bc */
  goto L_114941bc;
L_114941a2:;
  /* 114941a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114941a6 jge 0x114941b3 */
  if ((C.sf==C.of)) goto L_114941b3;
  /* 114941a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114941ab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114941ae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114941b1 jmp 0x114941bc */
  goto L_114941bc;
L_114941b3:;
  /* 114941b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114941b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114941b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114941bc:;
  /* 114941bc jmp 0x11494154 */
  goto L_11494154;
L_114941be:;
  /* 114941be mov esp, ebp */
  ESP = (EBP);
  /* 114941c0 pop ebp */
  EBP = (pop32());
  /* 114941c1 ret  */
  ESPCHK(0x11494140u, _esp0);
  ESP += 4; return;
}

/* FUN_100141d0 @ 0x114941d0 (186 bytes, 50 insns) */
void f_114941d0(void) {
  FTRACE(0x114941d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114941d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114941d1 mov ebp, esp */
  EBP = (ESP);
  /* 114941d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114941d4 mov eax, dword ptr [0x114b6770] */
  EAX = (r32((uint32_t)(0x114b6770)));
  /* 114941d9 push eax */
  push32((uint32_t)(EAX));
  /* 114941da call 0x11489ef0 */
  push32(0x114941dfu); f_11489ef0();
  /* 114941df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114941e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114941e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114941e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114941ea mov dword ptr [0x114b676c], ecx */
  w32((uint32_t)(0x114b676c), (ECX));
  /* 114941f0 mov edx, dword ptr [0x114b6774] */
  EDX = (r32((uint32_t)(0x114b6774)));
  /* 114941f6 push edx */
  push32((uint32_t)(EDX));
  /* 114941f7 call 0x11489ef0 */
  push32(0x114941fcu); f_11489ef0();
  /* 114941fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114941ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11494201 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494204 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11494207 mov dword ptr [0x114b6764], ecx */
  w32((uint32_t)(0x114b6764), (ECX));
  /* 1149420d mov dword ptr [0x114b6760], 0 */
  w32((uint32_t)(0x114b6760), (0x0u));
  /* 11494217 cmp dword ptr [0x114b676c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b676c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149421e je 0x11494229 */
  if (C.zf) goto L_11494229;
  /* 11494220 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11494227 jmp 0x1149423b */
  goto L_1149423b;
L_11494229:;
  /* 11494229 mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 1149422f push edx */
  push32((uint32_t)(EDX));
  /* 11494230 call 0x11494c70 */
  push32(0x11494235u); f_11494c70();
  /* 11494235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1149423b:;
  /* 1149423b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149423e mov dword ptr [0x114b6768], eax */
  w32((uint32_t)(0x114b6768), (EAX));
  /* 11494243 push 1 */
  push32((uint32_t)(0x1u));
  /* 11494245 push 0x11494290 */
  push32((uint32_t)(0x11494290u));
  /* 1149424a call dword ptr [0x114b92e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e0))), 0x11494250u);
  /* 11494250 mov ecx, dword ptr [0x114b6778] */
  ECX = (r32((uint32_t)(0x114b6778)));
  /* 11494256 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1149425c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149425e je 0x1149427c */
  if (C.zf) goto L_1149427c;
  /* 11494260 mov edx, dword ptr [0x114b6778] */
  EDX = (r32((uint32_t)(0x114b6778)));
  /* 11494266 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1149426c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1149426e je 0x1149427c */
  if (C.zf) goto L_1149427c;
  /* 11494270 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 11494275 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11494278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149427a jne 0x11494286 */
  if (!C.zf) goto L_11494286;
L_1149427c:;
  /* 1149427c mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
L_11494286:;
  /* 11494286 mov esp, ebp */
  ESP = (EBP);
  /* 11494288 pop ebp */
  EBP = (pop32());
  /* 11494289 ret  */
  ESPCHK(0x114941d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014290 @ 0x11494290 (804 bytes, 220 insns) */
void f_11494290(void) {
  FTRACE(0x11494290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494290 push ebp */
  push32((uint32_t)(EBP));
  /* 11494291 mov ebp, esp */
  EBP = (ESP);
  /* 11494293 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494299 push eax */
  push32((uint32_t)(EAX));
  /* 1149429a call 0x11494bf0 */
  push32(0x1149429fu); f_11494bf0();
  /* 1149429f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114942a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 114942a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114942a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114942aa push ecx */
  push32((uint32_t)(ECX));
  /* 114942ab mov edx, dword ptr [0x114b6764] */
  EDX = (r32((uint32_t)(0x114b6764)));
  /* 114942b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114942b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114942b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 114942bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114942c1 push edx */
  push32((uint32_t)(EDX));
  /* 114942c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114942c5 push eax */
  push32((uint32_t)(EAX));
  /* 114942c6 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x114942ccu);
  /* 114942cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114942ce jne 0x114942e4 */
  if (!C.zf) goto L_114942e4;
  /* 114942d0 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
  /* 114942da mov eax, 1 */
  EAX = (0x1u);
  /* 114942df jmp 0x114945ae */
  goto L_114945ae;
L_114942e4:;
  /* 114942e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114942e7 push ecx */
  push32((uint32_t)(ECX));
  /* 114942e8 mov edx, dword ptr [0x114b6774] */
  EDX = (r32((uint32_t)(0x114b6774)));
  /* 114942ee push edx */
  push32((uint32_t)(EDX));
  /* 114942ef call 0x11496da0 */
  push32(0x114942f4u); f_11496da0();
  /* 114942f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114942f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114942f9 jne 0x1149441f */
  if (!C.zf) goto L_1149441f;
  /* 114942ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11494301 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11494304 push eax */
  push32((uint32_t)(EAX));
  /* 11494305 mov ecx, dword ptr [0x114b676c] */
  ECX = (r32((uint32_t)(0x114b676c)));
  /* 1149430b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1149430d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149430f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11494315 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149431b push ecx */
  push32((uint32_t)(ECX));
  /* 1149431c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149431f push edx */
  push32((uint32_t)(EDX));
  /* 11494320 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x11494326u);
  /* 11494326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494328 jne 0x1149433e */
  if (!C.zf) goto L_1149433e;
  /* 1149432a mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
  /* 11494334 mov eax, 1 */
  EAX = (0x1u);
  /* 11494339 jmp 0x114945ae */
  goto L_114945ae;
L_1149433e:;
  /* 1149433e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11494341 push eax */
  push32((uint32_t)(EAX));
  /* 11494342 mov ecx, dword ptr [0x114b6770] */
  ECX = (r32((uint32_t)(0x114b6770)));
  /* 11494348 push ecx */
  push32((uint32_t)(ECX));
  /* 11494349 call 0x11496da0 */
  push32(0x1149434eu); f_11496da0();
  /* 1149434e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494353 jne 0x11494380 */
  if (!C.zf) goto L_11494380;
  /* 11494355 mov edx, dword ptr [0x114b6778] */
  EDX = (r32((uint32_t)(0x114b6778)));
  /* 1149435b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11494361 mov dword ptr [0x114b6778], edx */
  w32((uint32_t)(0x114b6778), (EDX));
  /* 11494367 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149436a mov dword ptr [0x114b677c], eax */
  w32((uint32_t)(0x114b677c), (EAX));
  /* 1149436f mov ecx, dword ptr [0x114b677c] */
  ECX = (r32((uint32_t)(0x114b677c)));
  /* 11494375 mov dword ptr [0x114b6760], ecx */
  w32((uint32_t)(0x114b6760), (ECX));
  /* 1149437b jmp 0x1149441f */
  goto L_1149441f;
L_11494380:;
  /* 11494380 mov edx, dword ptr [0x114b6778] */
  EDX = (r32((uint32_t)(0x114b6778)));
  /* 11494386 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11494389 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1149438b jne 0x1149441f */
  if (!C.zf) goto L_1149441f;
  /* 11494391 cmp dword ptr [0x114b6768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494398 je 0x114943ed */
  if (C.zf) goto L_114943ed;
  /* 1149439a mov eax, dword ptr [0x114b6768] */
  EAX = (r32((uint32_t)(0x114b6768)));
  /* 1149439f push eax */
  push32((uint32_t)(EAX));
  /* 114943a0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114943a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114943a4 mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 114943aa push edx */
  push32((uint32_t)(EDX));
  /* 114943ab call 0x11496e70 */
  push32(0x114943b0u); f_11496e70();
  /* 114943b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114943b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114943b5 jne 0x114943ed */
  if (!C.zf) goto L_114943ed;
  /* 114943b7 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 114943bc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 114943be mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
  /* 114943c3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114943c6 mov dword ptr [0x114b677c], ecx */
  w32((uint32_t)(0x114b677c), (ECX));
  /* 114943cc mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 114943d2 push edx */
  push32((uint32_t)(EDX));
  /* 114943d3 call 0x11489ef0 */
  push32(0x114943d8u); f_11489ef0();
  /* 114943d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114943db cmp eax, dword ptr [0x114b6768] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b6768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114943e1 jne 0x114943eb */
  if (!C.zf) goto L_114943eb;
  /* 114943e3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114943e6 mov dword ptr [0x114b6760], eax */
  w32((uint32_t)(0x114b6760), (EAX));
L_114943eb:;
  /* 114943eb jmp 0x1149441f */
  goto L_1149441f;
L_114943ed:;
  /* 114943ed mov ecx, dword ptr [0x114b6778] */
  ECX = (r32((uint32_t)(0x114b6778)));
  /* 114943f3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114943f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114943f8 jne 0x1149441f */
  if (!C.zf) goto L_1149441f;
  /* 114943fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114943fd push edx */
  push32((uint32_t)(EDX));
  /* 114943fe call 0x11494930 */
  push32(0x11494403u); f_11494930();
  /* 11494403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494408 je 0x1149441f */
  if (C.zf) goto L_1149441f;
  /* 1149440a mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 1149440f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11494411 mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
  /* 11494416 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11494419 mov dword ptr [0x114b677c], ecx */
  w32((uint32_t)(0x114b677c), (ECX));
L_1149441f:;
  /* 1149441f mov edx, dword ptr [0x114b6778] */
  EDX = (r32((uint32_t)(0x114b6778)));
  /* 11494425 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1149442b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494431 je 0x114945a1 */
  if (C.zf) goto L_114945a1;
  /* 11494437 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11494439 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1149443c push eax */
  push32((uint32_t)(EAX));
  /* 1149443d mov ecx, dword ptr [0x114b676c] */
  ECX = (r32((uint32_t)(0x114b676c)));
  /* 11494443 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11494445 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494447 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1149444d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494453 push ecx */
  push32((uint32_t)(ECX));
  /* 11494454 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11494457 push edx */
  push32((uint32_t)(EDX));
  /* 11494458 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x1149445eu);
  /* 1149445e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494460 jne 0x11494476 */
  if (!C.zf) goto L_11494476;
  /* 11494462 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
  /* 1149446c mov eax, 1 */
  EAX = (0x1u);
  /* 11494471 jmp 0x114945ae */
  goto L_114945ae;
L_11494476:;
  /* 11494476 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11494479 push eax */
  push32((uint32_t)(EAX));
  /* 1149447a mov ecx, dword ptr [0x114b6770] */
  ECX = (r32((uint32_t)(0x114b6770)));
  /* 11494480 push ecx */
  push32((uint32_t)(ECX));
  /* 11494481 call 0x11496da0 */
  push32(0x11494486u); f_11496da0();
  /* 11494486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149448b jne 0x11494540 */
  if (!C.zf) goto L_11494540;
  /* 11494491 mov edx, dword ptr [0x114b6778] */
  EDX = (r32((uint32_t)(0x114b6778)));
  /* 11494497 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1149449a mov dword ptr [0x114b6778], edx */
  w32((uint32_t)(0x114b6778), (EDX));
  /* 114944a0 cmp dword ptr [0x114b676c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b676c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114944a7 je 0x114944ca */
  if (C.zf) goto L_114944ca;
  /* 114944a9 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 114944ae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 114944b1 mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
  /* 114944b6 cmp dword ptr [0x114b6760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114944bd jne 0x114944c8 */
  if (!C.zf) goto L_114944c8;
  /* 114944bf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114944c2 mov dword ptr [0x114b6760], ecx */
  w32((uint32_t)(0x114b6760), (ECX));
L_114944c8:;
  /* 114944c8 jmp 0x1149453e */
  goto L_1149453e;
L_114944ca:;
  /* 114944ca cmp dword ptr [0x114b6768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114944d1 je 0x1149451f */
  if (C.zf) goto L_1149451f;
  /* 114944d3 mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 114944d9 push edx */
  push32((uint32_t)(EDX));
  /* 114944da call 0x11489ef0 */
  push32(0x114944dfu); f_11489ef0();
  /* 114944df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114944e2 cmp eax, dword ptr [0x114b6768] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b6768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114944e8 jne 0x1149451f */
  if (!C.zf) goto L_1149451f;
  /* 114944ea push 1 */
  push32((uint32_t)(0x1u));
  /* 114944ec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114944ef push eax */
  push32((uint32_t)(EAX));
  /* 114944f0 call 0x11494980 */
  push32(0x114944f5u); f_11494980();
  /* 114944f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114944f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114944fa je 0x1149451d */
  if (C.zf) goto L_1149451d;
  /* 114944fc mov ecx, dword ptr [0x114b6778] */
  ECX = (r32((uint32_t)(0x114b6778)));
  /* 11494502 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11494505 mov dword ptr [0x114b6778], ecx */
  w32((uint32_t)(0x114b6778), (ECX));
  /* 1149450b cmp dword ptr [0x114b6760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494512 jne 0x1149451d */
  if (!C.zf) goto L_1149451d;
  /* 11494514 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11494517 mov dword ptr [0x114b6760], edx */
  w32((uint32_t)(0x114b6760), (EDX));
L_1149451d:;
  /* 1149451d jmp 0x1149453e */
  goto L_1149453e;
L_1149451f:;
  /* 1149451f mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 11494524 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11494527 mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
  /* 1149452c cmp dword ptr [0x114b6760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494533 jne 0x1149453e */
  if (!C.zf) goto L_1149453e;
  /* 11494535 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11494538 mov dword ptr [0x114b6760], ecx */
  w32((uint32_t)(0x114b6760), (ECX));
L_1149453e:;
  /* 1149453e jmp 0x114945a1 */
  goto L_114945a1;
L_11494540:;
  /* 11494540 cmp dword ptr [0x114b676c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b676c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494547 jne 0x114945a1 */
  if (!C.zf) goto L_114945a1;
  /* 11494549 cmp dword ptr [0x114b6768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494550 je 0x114945a1 */
  if (C.zf) goto L_114945a1;
  /* 11494552 mov edx, dword ptr [0x114b6768] */
  EDX = (r32((uint32_t)(0x114b6768)));
  /* 11494558 push edx */
  push32((uint32_t)(EDX));
  /* 11494559 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1149455c push eax */
  push32((uint32_t)(EAX));
  /* 1149455d mov ecx, dword ptr [0x114b6770] */
  ECX = (r32((uint32_t)(0x114b6770)));
  /* 11494563 push ecx */
  push32((uint32_t)(ECX));
  /* 11494564 call 0x11496e70 */
  push32(0x11494569u); f_11496e70();
  /* 11494569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149456c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149456e jne 0x114945a1 */
  if (!C.zf) goto L_114945a1;
  /* 11494570 push 0 */
  push32((uint32_t)(0x0u));
  /* 11494572 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11494575 push edx */
  push32((uint32_t)(EDX));
  /* 11494576 call 0x11494980 */
  push32(0x1149457bu); f_11494980();
  /* 1149457b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149457e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494580 je 0x114945a1 */
  if (C.zf) goto L_114945a1;
  /* 11494582 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 11494587 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1149458a mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
  /* 1149458f cmp dword ptr [0x114b6760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494596 jne 0x114945a1 */
  if (!C.zf) goto L_114945a1;
  /* 11494598 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149459b mov dword ptr [0x114b6760], ecx */
  w32((uint32_t)(0x114b6760), (ECX));
L_114945a1:;
  /* 114945a1 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 114945a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114945a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114945ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114945ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114945ae:;
  /* 114945ae mov esp, ebp */
  ESP = (EBP);
  /* 114945b0 pop ebp */
  EBP = (pop32());
  /* 114945b1 ret 4 */
  ESPCHK(0x11494290u, _esp0);
  ESP += 8; return;
}

/* FUN_100145c0 @ 0x114945c0 (116 bytes, 33 insns) */
void f_114945c0(void) {
  FTRACE(0x114945c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114945c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114945c1 mov ebp, esp */
  EBP = (ESP);
  /* 114945c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114945c4 mov eax, dword ptr [0x114b6770] */
  EAX = (r32((uint32_t)(0x114b6770)));
  /* 114945c9 push eax */
  push32((uint32_t)(EAX));
  /* 114945ca call 0x11489ef0 */
  push32(0x114945cfu); f_11489ef0();
  /* 114945cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114945d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114945d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114945d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114945da mov dword ptr [0x114b676c], ecx */
  w32((uint32_t)(0x114b676c), (ECX));
  /* 114945e0 cmp dword ptr [0x114b676c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b676c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114945e7 je 0x114945f2 */
  if (C.zf) goto L_114945f2;
  /* 114945e9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114945f0 jmp 0x11494604 */
  goto L_11494604;
L_114945f2:;
  /* 114945f2 mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 114945f8 push edx */
  push32((uint32_t)(EDX));
  /* 114945f9 call 0x11494c70 */
  push32(0x114945feu); f_11494c70();
  /* 114945fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494601 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11494604:;
  /* 11494604 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494607 mov dword ptr [0x114b6768], eax */
  w32((uint32_t)(0x114b6768), (EAX));
  /* 1149460c push 1 */
  push32((uint32_t)(0x1u));
  /* 1149460e push 0x11494640 */
  push32((uint32_t)(0x11494640u));
  /* 11494613 call dword ptr [0x114b92e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e0))), 0x11494619u);
  /* 11494619 mov ecx, dword ptr [0x114b6778] */
  ECX = (r32((uint32_t)(0x114b6778)));
  /* 1149461f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11494622 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494624 jne 0x11494630 */
  if (!C.zf) goto L_11494630;
  /* 11494626 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
L_11494630:;
  /* 11494630 mov esp, ebp */
  ESP = (EBP);
  /* 11494632 pop ebp */
  EBP = (pop32());
  /* 11494633 ret  */
  ESPCHK(0x114945c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014640 @ 0x11494640 (287 bytes, 86 insns) */
void f_11494640(void) {
  FTRACE(0x11494640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494640 push ebp */
  push32((uint32_t)(EBP));
  /* 11494641 mov ebp, esp */
  EBP = (ESP);
  /* 11494643 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494649 push eax */
  push32((uint32_t)(EAX));
  /* 1149464a call 0x11494bf0 */
  push32(0x1149464fu); f_11494bf0();
  /* 1149464f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494652 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11494655 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11494657 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1149465a push ecx */
  push32((uint32_t)(ECX));
  /* 1149465b mov edx, dword ptr [0x114b676c] */
  EDX = (r32((uint32_t)(0x114b676c)));
  /* 11494661 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11494663 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494665 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1149466b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494671 push edx */
  push32((uint32_t)(EDX));
  /* 11494672 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11494675 push eax */
  push32((uint32_t)(EAX));
  /* 11494676 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x1149467cu);
  /* 1149467c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149467e jne 0x11494694 */
  if (!C.zf) goto L_11494694;
  /* 11494680 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
  /* 1149468a mov eax, 1 */
  EAX = (0x1u);
  /* 1149468f jmp 0x11494759 */
  goto L_11494759;
L_11494694:;
  /* 11494694 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11494697 push ecx */
  push32((uint32_t)(ECX));
  /* 11494698 mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 1149469e push edx */
  push32((uint32_t)(EDX));
  /* 1149469f call 0x11496da0 */
  push32(0x114946a4u); f_11496da0();
  /* 114946a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114946a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114946a9 jne 0x114946e9 */
  if (!C.zf) goto L_114946e9;
  /* 114946ab cmp dword ptr [0x114b676c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b676c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114946b2 jne 0x114946c6 */
  if (!C.zf) goto L_114946c6;
  /* 114946b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 114946b6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114946b9 push eax */
  push32((uint32_t)(EAX));
  /* 114946ba call 0x11494980 */
  push32(0x114946bfu); f_11494980();
  /* 114946bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114946c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114946c4 je 0x114946e7 */
  if (C.zf) goto L_114946e7;
L_114946c6:;
  /* 114946c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114946c9 mov dword ptr [0x114b677c], ecx */
  w32((uint32_t)(0x114b677c), (ECX));
  /* 114946cf mov edx, dword ptr [0x114b677c] */
  EDX = (r32((uint32_t)(0x114b677c)));
  /* 114946d5 mov dword ptr [0x114b6760], edx */
  w32((uint32_t)(0x114b6760), (EDX));
  /* 114946db mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 114946e0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114946e2 mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
L_114946e7:;
  /* 114946e7 jmp 0x1149474c */
  goto L_1149474c;
L_114946e9:;
  /* 114946e9 cmp dword ptr [0x114b676c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b676c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114946f0 jne 0x1149474c */
  if (!C.zf) goto L_1149474c;
  /* 114946f2 cmp dword ptr [0x114b6768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114946f9 je 0x1149474c */
  if (C.zf) goto L_1149474c;
  /* 114946fb mov ecx, dword ptr [0x114b6768] */
  ECX = (r32((uint32_t)(0x114b6768)));
  /* 11494701 push ecx */
  push32((uint32_t)(ECX));
  /* 11494702 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11494705 push edx */
  push32((uint32_t)(EDX));
  /* 11494706 mov eax, dword ptr [0x114b6770] */
  EAX = (r32((uint32_t)(0x114b6770)));
  /* 1149470b push eax */
  push32((uint32_t)(EAX));
  /* 1149470c call 0x11496e70 */
  push32(0x11494711u); f_11496e70();
  /* 11494711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494716 jne 0x1149474c */
  if (!C.zf) goto L_1149474c;
  /* 11494718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149471a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149471d push ecx */
  push32((uint32_t)(ECX));
  /* 1149471e call 0x11494980 */
  push32(0x11494723u); f_11494980();
  /* 11494723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494728 je 0x1149474c */
  if (C.zf) goto L_1149474c;
  /* 1149472a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149472d mov dword ptr [0x114b677c], edx */
  w32((uint32_t)(0x114b677c), (EDX));
  /* 11494733 mov eax, dword ptr [0x114b677c] */
  EAX = (r32((uint32_t)(0x114b677c)));
  /* 11494738 mov dword ptr [0x114b6760], eax */
  w32((uint32_t)(0x114b6760), (EAX));
  /* 1149473d mov ecx, dword ptr [0x114b6778] */
  ECX = (r32((uint32_t)(0x114b6778)));
  /* 11494743 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11494746 mov dword ptr [0x114b6778], ecx */
  w32((uint32_t)(0x114b6778), (ECX));
L_1149474c:;
  /* 1149474c mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 11494751 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11494754 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11494756 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11494759:;
  /* 11494759 mov esp, ebp */
  ESP = (EBP);
  /* 1149475b pop ebp */
  EBP = (pop32());
  /* 1149475c ret 4 */
  ESPCHK(0x11494640u, _esp0);
  ESP += 8; return;
}

/* FUN_10014760 @ 0x11494760 (69 bytes, 20 insns) */
void f_11494760(void) {
  FTRACE(0x11494760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494760 push ebp */
  push32((uint32_t)(EBP));
  /* 11494761 mov ebp, esp */
  EBP = (ESP);
  /* 11494763 mov eax, dword ptr [0x114b6774] */
  EAX = (r32((uint32_t)(0x114b6774)));
  /* 11494768 push eax */
  push32((uint32_t)(EAX));
  /* 11494769 call 0x11489ef0 */
  push32(0x1149476eu); f_11489ef0();
  /* 1149476e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494771 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11494773 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494776 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11494779 mov dword ptr [0x114b6764], ecx */
  w32((uint32_t)(0x114b6764), (ECX));
  /* 1149477f push 1 */
  push32((uint32_t)(0x1u));
  /* 11494781 push 0x114947b0 */
  push32((uint32_t)(0x114947b0u));
  /* 11494786 call dword ptr [0x114b92e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e0))), 0x1149478cu);
  /* 1149478c mov edx, dword ptr [0x114b6778] */
  EDX = (r32((uint32_t)(0x114b6778)));
  /* 11494792 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11494795 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11494797 jne 0x114947a3 */
  if (!C.zf) goto L_114947a3;
  /* 11494799 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
L_114947a3:;
  /* 114947a3 pop ebp */
  EBP = (pop32());
  /* 114947a4 ret  */
  ESPCHK(0x11494760u, _esp0);
  ESP += 4; return;
}

/* FUN_100147b0 @ 0x114947b0 (172 bytes, 54 insns) */
void f_114947b0(void) {
  FTRACE(0x114947b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114947b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114947b1 mov ebp, esp */
  EBP = (ESP);
  /* 114947b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114947b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114947b9 push eax */
  push32((uint32_t)(EAX));
  /* 114947ba call 0x11494bf0 */
  push32(0x114947bfu); f_11494bf0();
  /* 114947bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114947c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 114947c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114947c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114947ca push ecx */
  push32((uint32_t)(ECX));
  /* 114947cb mov edx, dword ptr [0x114b6764] */
  EDX = (r32((uint32_t)(0x114b6764)));
  /* 114947d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114947d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114947d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 114947db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114947e1 push edx */
  push32((uint32_t)(EDX));
  /* 114947e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114947e5 push eax */
  push32((uint32_t)(EAX));
  /* 114947e6 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x114947ecu);
  /* 114947ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114947ee jne 0x11494801 */
  if (!C.zf) goto L_11494801;
  /* 114947f0 mov dword ptr [0x114b6778], 0 */
  w32((uint32_t)(0x114b6778), (0x0u));
  /* 114947fa mov eax, 1 */
  EAX = (0x1u);
  /* 114947ff jmp 0x11494856 */
  goto L_11494856;
L_11494801:;
  /* 11494801 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11494804 push ecx */
  push32((uint32_t)(ECX));
  /* 11494805 mov edx, dword ptr [0x114b6774] */
  EDX = (r32((uint32_t)(0x114b6774)));
  /* 1149480b push edx */
  push32((uint32_t)(EDX));
  /* 1149480c call 0x11496da0 */
  push32(0x11494811u); f_11496da0();
  /* 11494811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494816 jne 0x11494849 */
  if (!C.zf) goto L_11494849;
  /* 11494818 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149481b push eax */
  push32((uint32_t)(EAX));
  /* 1149481c call 0x11494930 */
  push32(0x11494821u); f_11494930();
  /* 11494821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494826 je 0x11494849 */
  if (C.zf) goto L_11494849;
  /* 11494828 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1149482b mov dword ptr [0x114b677c], ecx */
  w32((uint32_t)(0x114b677c), (ECX));
  /* 11494831 mov edx, dword ptr [0x114b677c] */
  EDX = (r32((uint32_t)(0x114b677c)));
  /* 11494837 mov dword ptr [0x114b6760], edx */
  w32((uint32_t)(0x114b6760), (EDX));
  /* 1149483d mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 11494842 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11494844 mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
L_11494849:;
  /* 11494849 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 1149484e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11494851 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11494853 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494855 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11494856:;
  /* 11494856 mov esp, ebp */
  ESP = (EBP);
  /* 11494858 pop ebp */
  EBP = (pop32());
  /* 11494859 ret 4 */
  ESPCHK(0x114947b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014860 @ 0x11494860 (43 bytes, 11 insns) */
void f_11494860(void) {
  FTRACE(0x11494860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494860 push ebp */
  push32((uint32_t)(EBP));
  /* 11494861 mov ebp, esp */
  EBP = (ESP);
  /* 11494863 mov eax, dword ptr [0x114b6778] */
  EAX = (r32((uint32_t)(0x114b6778)));
  /* 11494868 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1149486d mov dword ptr [0x114b6778], eax */
  w32((uint32_t)(0x114b6778), (EAX));
  /* 11494872 call dword ptr [0x114b92dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92dc))), 0x11494878u);
  /* 11494878 mov dword ptr [0x114b677c], eax */
  w32((uint32_t)(0x114b677c), (EAX));
  /* 1149487d mov ecx, dword ptr [0x114b677c] */
  ECX = (r32((uint32_t)(0x114b677c)));
  /* 11494883 mov dword ptr [0x114b6760], ecx */
  w32((uint32_t)(0x114b6760), (ECX));
  /* 11494889 pop ebp */
  EBP = (pop32());
  /* 1149488a ret  */
  ESPCHK(0x11494860u, _esp0);
  ESP += 4; return;
}

/* FUN_10014890 @ 0x11494890 (155 bytes, 57 insns) */
void f_11494890(void) {
  FTRACE(0x11494890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494890 push ebp */
  push32((uint32_t)(EBP));
  /* 11494891 mov ebp, esp */
  EBP = (ESP);
  /* 11494893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494896 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149489a je 0x114948bb */
  if (C.zf) goto L_114948bb;
  /* 1149489c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149489f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114948a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114948a4 je 0x114948bb */
  if (C.zf) goto L_114948bb;
  /* 114948a6 push 0x114b19a0 */
  push32((uint32_t)(0x114b19a0u));
  /* 114948ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114948ae push edx */
  push32((uint32_t)(EDX));
  /* 114948af call 0x11493df0 */
  push32(0x114948b4u); f_11493df0();
  /* 114948b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114948b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114948b9 jne 0x114948e3 */
  if (!C.zf) goto L_114948e3;
L_114948bb:;
  /* 114948bb push 8 */
  push32((uint32_t)(0x8u));
  /* 114948bd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 114948c0 push eax */
  push32((uint32_t)(EAX));
  /* 114948c1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 114948c6 mov ecx, dword ptr [0x114b677c] */
  ECX = (r32((uint32_t)(0x114b677c)));
  /* 114948cc push ecx */
  push32((uint32_t)(ECX));
  /* 114948cd call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x114948d3u);
  /* 114948d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114948d5 jne 0x114948db */
  if (!C.zf) goto L_114948db;
  /* 114948d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114948d9 jmp 0x11494927 */
  goto L_11494927;
L_114948db:;
  /* 114948db lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 114948de mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114948e1 jmp 0x1149491b */
  goto L_1149491b;
L_114948e3:;
  /* 114948e3 push 0x114b199c */
  push32((uint32_t)(0x114b199cu));
  /* 114948e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114948eb push eax */
  push32((uint32_t)(EAX));
  /* 114948ec call 0x11493df0 */
  push32(0x114948f1u); f_11493df0();
  /* 114948f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114948f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114948f6 jne 0x1149491b */
  if (!C.zf) goto L_1149491b;
  /* 114948f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 114948fa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114948fd push ecx */
  push32((uint32_t)(ECX));
  /* 114948fe push 0xb */
  push32((uint32_t)(0xbu));
  /* 11494900 mov edx, dword ptr [0x114b677c] */
  EDX = (r32((uint32_t)(0x114b677c)));
  /* 11494906 push edx */
  push32((uint32_t)(EDX));
  /* 11494907 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x1149490du);
  /* 1149490d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1149490f jne 0x11494915 */
  if (!C.zf) goto L_11494915;
  /* 11494911 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11494913 jmp 0x11494927 */
  goto L_11494927;
L_11494915:;
  /* 11494915 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11494918 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1149491b:;
  /* 1149491b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149491e push ecx */
  push32((uint32_t)(ECX));
  /* 1149491f call 0x11496f80 */
  push32(0x11494924u); f_11496f80();
  /* 11494924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11494927:;
  /* 11494927 mov esp, ebp */
  ESP = (EBP);
  /* 11494929 pop ebp */
  EBP = (pop32());
  /* 1149492a ret  */
  ESPCHK(0x11494890u, _esp0);
  ESP += 4; return;
}

/* FUN_10014930 @ 0x11494930 (79 bytes, 26 insns) */
void f_11494930(void) {
  FTRACE(0x11494930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494930 push ebp */
  push32((uint32_t)(EBP));
  /* 11494931 mov ebp, esp */
  EBP = (ESP);
  /* 11494933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494936 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1149493a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1149493e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11494945 jmp 0x11494950 */
  goto L_11494950;
L_11494947:;
  /* 11494947 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149494a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149494d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11494950:;
  /* 11494950 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494954 jae 0x11494976 */
  if (!C.cf) goto L_11494976;
  /* 11494956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494959 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1149495f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11494962 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11494964 mov cx, word ptr [eax*2 + 0x114b4a14] */
  CX = (r16((uint32_t)(EAX*2 + 0x114b4a14)));
  /* 1149496c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149496e jne 0x11494974 */
  if (!C.zf) goto L_11494974;
  /* 11494970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11494972 jmp 0x1149497b */
  goto L_1149497b;
L_11494974:;
  /* 11494974 jmp 0x11494947 */
  goto L_11494947;
L_11494976:;
  /* 11494976 mov eax, 1 */
  EAX = (0x1u);
L_1149497b:;
  /* 1149497b mov esp, ebp */
  ESP = (EBP);
  /* 1149497d pop ebp */
  EBP = (pop32());
  /* 1149497e ret  */
  ESPCHK(0x11494930u, _esp0);
  ESP += 4; return;
}

/* FUN_10014980 @ 0x11494980 (135 bytes, 48 insns) */
void f_11494980(void) {
  FTRACE(0x11494980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494980 push ebp */
  push32((uint32_t)(EBP));
  /* 11494981 mov ebp, esp */
  EBP = (ESP);
  /* 11494983 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494986 push esi */
  push32((uint32_t)(ESI));
  /* 11494987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149498a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149498f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494994 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494999 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1149499c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114949a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114949a4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114949a6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 114949a9 push ecx */
  push32((uint32_t)(ECX));
  /* 114949aa push 1 */
  push32((uint32_t)(0x1u));
  /* 114949ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114949af push edx */
  push32((uint32_t)(EDX));
  /* 114949b0 call dword ptr [0x114b6780] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6780))), 0x114949b6u);
  /* 114949b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114949b8 jne 0x114949be */
  if (!C.zf) goto L_114949be;
  /* 114949ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114949bc jmp 0x11494a02 */
  goto L_11494a02;
L_114949be:;
  /* 114949be lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 114949c1 push eax */
  push32((uint32_t)(EAX));
  /* 114949c2 call 0x11494bf0 */
  push32(0x114949c7u); f_11494bf0();
  /* 114949c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114949ca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114949cd je 0x114949fd */
  if (C.zf) goto L_114949fd;
  /* 114949cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114949d3 je 0x114949fd */
  if (C.zf) goto L_114949fd;
  /* 114949d5 mov ecx, dword ptr [0x114b6770] */
  ECX = (r32((uint32_t)(0x114b6770)));
  /* 114949db push ecx */
  push32((uint32_t)(ECX));
  /* 114949dc call 0x11494c70 */
  push32(0x114949e1u); f_11494c70();
  /* 114949e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114949e4 mov esi, eax */
  ESI = (EAX);
  /* 114949e6 mov edx, dword ptr [0x114b6770] */
  EDX = (r32((uint32_t)(0x114b6770)));
  /* 114949ec push edx */
  push32((uint32_t)(EDX));
  /* 114949ed call 0x11489ef0 */
  push32(0x114949f2u); f_11489ef0();
  /* 114949f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114949f5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114949f7 jne 0x114949fd */
  if (!C.zf) goto L_114949fd;
  /* 114949f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114949fb jmp 0x11494a02 */
  goto L_11494a02;
L_114949fd:;
  /* 114949fd mov eax, 1 */
  EAX = (0x1u);
L_11494a02:;
  /* 11494a02 pop esi */
  ESI = (pop32());
  /* 11494a03 mov esp, ebp */
  ESP = (EBP);
  /* 11494a05 pop ebp */
  EBP = (pop32());
  /* 11494a06 ret  */
  ESPCHK(0x11494980u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a10 @ 0x11494a10 (77 bytes, 18 insns) */
void f_11494a10(void) {
  FTRACE(0x11494a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11494a11 mov ebp, esp */
  EBP = (ESP);
  /* 11494a13 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494a19 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11494a23 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11494a29 push eax */
  push32((uint32_t)(EAX));
  /* 11494a2a call dword ptr [0x114b92d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92d8))), 0x11494a30u);
  /* 11494a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494a32 je 0x11494a49 */
  if (C.zf) goto L_11494a49;
  /* 11494a34 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494a3b jne 0x11494a49 */
  if (!C.zf) goto L_11494a49;
  /* 11494a3d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11494a47 jmp 0x11494a53 */
  goto L_11494a53;
L_11494a49:;
  /* 11494a49 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11494a53:;
  /* 11494a53 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11494a59 mov esp, ebp */
  ESP = (EBP);
  /* 11494a5b pop ebp */
  EBP = (pop32());
  /* 11494a5c ret  */
  ESPCHK(0x11494a10u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11494a60 (388 bytes, 118 insns) */
void f_11494a60(void) {
  FTRACE(0x11494a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11494a61 mov ebp, esp */
  EBP = (ESP);
  /* 11494a63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494a66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11494a6d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11494a74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11494a7b:;
  /* 11494a7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11494a7e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494a81 jg 0x11494bc8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11494bc8;
  /* 11494a87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11494a8a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494a8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11494a8e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494a90 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11494a92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11494a95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494a98 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494a9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494a9e cmp edx, dword ptr [ecx + 0x114b4570] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x114b4570))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494aa4 jne 0x11494b9e */
  if (!C.zf) goto L_11494b9e;
  /* 11494aaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494aad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11494ab0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ab4 ja 0x11494ad7 */
  if ((!C.cf&&!C.zf)) goto L_11494ad7;
  /* 11494ab6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494aba je 0x11494b49 */
  if (C.zf) goto L_11494b49;
  /* 11494ac0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ac4 je 0x11494af4 */
  if (C.zf) goto L_11494af4;
  /* 11494ac6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494aca je 0x11494b16 */
  if (C.zf) goto L_11494b16;
  /* 11494acc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ad0 je 0x11494b38 */
  if (C.zf) goto L_11494b38;
  /* 11494ad2 jmp 0x11494b68 */
  goto L_11494b68;
L_11494ad7:;
  /* 11494ad7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ade je 0x11494b05 */
  if (C.zf) goto L_11494b05;
  /* 11494ae0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ae7 je 0x11494b27 */
  if (C.zf) goto L_11494b27;
  /* 11494ae9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494af0 je 0x11494b5a */
  if (C.zf) goto L_11494b5a;
  /* 11494af2 jmp 0x11494b68 */
  goto L_11494b68;
L_11494af4:;
  /* 11494af4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494af7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494afa add ecx, 0x114b4574 */
  { uint32_t _a=(ECX),_b=(0x114b4574u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11494b03 jmp 0x11494b68 */
  goto L_11494b68;
L_11494b05:;
  /* 11494b05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494b08 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494b0b mov eax, dword ptr [edx + 0x114b457c] */
  EAX = (r32((uint32_t)(EDX + 0x114b457c)));
  /* 11494b11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11494b14 jmp 0x11494b68 */
  goto L_11494b68;
L_11494b16:;
  /* 11494b16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494b19 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494b1c add ecx, 0x114b4580 */
  { uint32_t _a=(ECX),_b=(0x114b4580u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11494b25 jmp 0x11494b68 */
  goto L_11494b68;
L_11494b27:;
  /* 11494b27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494b2a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494b2d mov eax, dword ptr [edx + 0x114b4584] */
  EAX = (r32((uint32_t)(EDX + 0x114b4584)));
  /* 11494b33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11494b36 jmp 0x11494b68 */
  goto L_11494b68;
L_11494b38:;
  /* 11494b38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494b3b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494b3e add ecx, 0x114b4588 */
  { uint32_t _a=(ECX),_b=(0x114b4588u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11494b47 jmp 0x11494b68 */
  goto L_11494b68;
L_11494b49:;
  /* 11494b49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494b4c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494b4f add edx, 0x114b458c */
  { uint32_t _a=(EDX),_b=(0x114b458cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b55 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11494b58 jmp 0x11494b68 */
  goto L_11494b68;
L_11494b5a:;
  /* 11494b5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494b5d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494b60 add eax, 0x114b4594 */
  { uint32_t _a=(EAX),_b=(0x114b4594u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11494b68:;
  /* 11494b68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494b6c je 0x11494b74 */
  if (C.zf) goto L_11494b74;
  /* 11494b6e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494b72 jge 0x11494b76 */
  if ((C.sf==C.of)) goto L_11494b76;
L_11494b74:;
  /* 11494b74 jmp 0x11494bc8 */
  goto L_11494bc8;
L_11494b76:;
  /* 11494b76 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11494b79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494b7c push ecx */
  push32((uint32_t)(ECX));
  /* 11494b7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11494b80 push edx */
  push32((uint32_t)(EDX));
  /* 11494b81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11494b84 push eax */
  push32((uint32_t)(EAX));
  /* 11494b85 call 0x1148a8e0 */
  push32(0x11494b8au); f_1148a8e0();
  /* 11494b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11494b90 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494b93 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11494b97 mov eax, 1 */
  EAX = (0x1u);
  /* 11494b9c jmp 0x11494bde */
  goto L_11494bde;
L_11494b9e:;
  /* 11494b9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494ba1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494ba7 cmp eax, dword ptr [edx + 0x114b4570] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x114b4570))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494bad jae 0x11494bba */
  if (!C.cf) goto L_11494bba;
  /* 11494baf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494bb2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494bb5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11494bb8 jmp 0x11494bc3 */
  goto L_11494bc3;
L_11494bba:;
  /* 11494bba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494bbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494bc0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11494bc3:;
  /* 11494bc3 jmp 0x11494a7b */
  goto L_11494a7b;
L_11494bc8:;
  /* 11494bc8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11494bcb push eax */
  push32((uint32_t)(EAX));
  /* 11494bcc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11494bcf push ecx */
  push32((uint32_t)(ECX));
  /* 11494bd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494bd3 push edx */
  push32((uint32_t)(EDX));
  /* 11494bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11494bd8 call dword ptr [0x114b92e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92e4))), 0x11494bdeu);
L_11494bde:;
  /* 11494bde mov esp, ebp */
  ESP = (EBP);
  /* 11494be0 pop ebp */
  EBP = (pop32());
  /* 11494be1 ret 0x10 */
  ESPCHK(0x11494a60u, _esp0);
  ESP += 20; return;
}

/* FUN_10014bf0 @ 0x11494bf0 (118 bytes, 42 insns) */
void f_11494bf0(void) {
  FTRACE(0x11494bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11494bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11494bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494bf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11494bfd:;
  /* 11494bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494c00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11494c02 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11494c05 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11494c09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494c0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494c0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11494c12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11494c14 je 0x11494c5f */
  if (C.zf) goto L_11494c5f;
  /* 11494c16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11494c1a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494c1d jl 0x11494c32 */
  if ((C.sf!=C.of)) goto L_11494c32;
  /* 11494c1f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11494c23 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494c26 jg 0x11494c32 */
  if ((!C.zf&&C.sf==C.of)) goto L_11494c32;
  /* 11494c28 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11494c2b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11494c2d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11494c30 jmp 0x11494c4c */
  goto L_11494c4c;
L_11494c32:;
  /* 11494c32 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11494c36 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494c39 jl 0x11494c4c */
  if ((C.sf!=C.of)) goto L_11494c4c;
  /* 11494c3b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11494c3f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494c42 jg 0x11494c4c */
  if ((!C.zf&&C.sf==C.of)) goto L_11494c4c;
  /* 11494c44 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11494c47 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11494c49 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11494c4c:;
  /* 11494c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494c4f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11494c52 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11494c56 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11494c5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11494c5d jmp 0x11494bfd */
  goto L_11494bfd;
L_11494c5f:;
  /* 11494c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494c62 mov esp, ebp */
  ESP = (EBP);
  /* 11494c64 pop ebp */
  EBP = (pop32());
  /* 11494c65 ret  */
  ESPCHK(0x11494bf0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11494c70 (101 bytes, 36 insns) */
void f_11494c70(void) {
  FTRACE(0x11494c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11494c71 mov ebp, esp */
  EBP = (ESP);
  /* 11494c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494c76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11494c7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494c80 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11494c82 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11494c85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494c8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11494c8e:;
  /* 11494c8e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11494c92 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494c95 jl 0x11494ca0 */
  if ((C.sf!=C.of)) goto L_11494ca0;
  /* 11494c97 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11494c9b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494c9e jle 0x11494cb2 */
  if ((C.zf||C.sf!=C.of)) goto L_11494cb2;
L_11494ca0:;
  /* 11494ca0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11494ca4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ca7 jl 0x11494cce */
  if ((C.sf!=C.of)) goto L_11494cce;
  /* 11494ca9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11494cad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494cb0 jg 0x11494cce */
  if ((!C.zf&&C.sf==C.of)) goto L_11494cce;
L_11494cb2:;
  /* 11494cb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11494cb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494cb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11494cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494cbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11494cc0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11494cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494cc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494cc9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11494ccc jmp 0x11494c8e */
  goto L_11494c8e;
L_11494cce:;
  /* 11494cce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11494cd1 mov esp, ebp */
  ESP = (EBP);
  /* 11494cd3 pop ebp */
  EBP = (pop32());
  /* 11494cd4 ret  */
  ESPCHK(0x11494c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x11494ce0 (1085 bytes, 299 insns) */
void f_11494ce0(void) {
  FTRACE(0x11494ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11494ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11494ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11494ce3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494ce6 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11494cec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11494cf3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11494cfa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11494d01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11494d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494d0b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11494d0f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11494d13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494d16 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11494d1a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11494d1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11494d21 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11494d27 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11494d2a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11494d30 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11494d32 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11494d38 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11494d3c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11494d40 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11494d44 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11494d48 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11494d4c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11494d51 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11494d55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11494d58 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11494d5e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11494d61 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494d66 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494d68 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11494d6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11494d6f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11494d75 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494d7b jge 0x11494d9d */
  if ((C.sf==C.of)) goto L_11494d9d;
  /* 11494d7d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11494d80 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11494d86 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494d8c jge 0x11494d9d */
  if ((C.sf==C.of)) goto L_11494d9d;
  /* 11494d8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11494d91 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494d96 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494d9b jle 0x11494dd4 */
  if ((C.zf||C.sf!=C.of)) goto L_11494dd4;
L_11494d9d:;
  /* 11494d9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11494da0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11494da6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11494da8 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494daa and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11494db0 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494db6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494db9 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11494dbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494dbf mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11494dc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494dc9 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11494dcf jmp 0x11495119 */
  goto L_11495119;
L_11494dd4:;
  /* 11494dd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11494dd7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11494ddd cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494de3 jg 0x11494e07 */
  if ((!C.zf&&C.sf==C.of)) goto L_11494e07;
  /* 11494de5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494de8 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11494def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494df2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11494df9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494dfc mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11494e02 jmp 0x11495119 */
  goto L_11495119;
L_11494e07:;
  /* 11494e07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11494e0a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494e11 jne 0x11494e4d */
  if (!C.zf) goto L_11494e4d;
  /* 11494e13 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11494e17 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11494e1b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11494e1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11494e25 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11494e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494e2c jne 0x11494e4d */
  if (!C.zf) goto L_11494e4d;
  /* 11494e2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e31 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494e35 jne 0x11494e4d */
  if (!C.zf) goto L_11494e4d;
  /* 11494e37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494e3d jne 0x11494e4d */
  if (!C.zf) goto L_11494e4d;
  /* 11494e3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e42 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11494e48 jmp 0x11495119 */
  goto L_11495119;
L_11494e4d:;
  /* 11494e4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11494e50 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11494e56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494e58 jne 0x11494ea9 */
  if (!C.zf) goto L_11494ea9;
  /* 11494e5a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11494e5e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11494e62 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11494e66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494e69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11494e6c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11494e72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494e74 jne 0x11494ea9 */
  if (!C.zf) goto L_11494ea9;
  /* 11494e76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494e79 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494e7d jne 0x11494ea9 */
  if (!C.zf) goto L_11494ea9;
  /* 11494e7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494e82 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494e85 jne 0x11494ea9 */
  if (!C.zf) goto L_11494ea9;
  /* 11494e87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e8a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11494e91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e94 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11494e9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494e9e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11494ea4 jmp 0x11495119 */
  goto L_11495119;
L_11494ea9:;
  /* 11494ea9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11494eb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11494eb7 jmp 0x11494ec2 */
  goto L_11494ec2;
L_11494eb9:;
  /* 11494eb9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11494ebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494ebf mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11494ec2:;
  /* 11494ec2 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ec6 jge 0x11494f81 */
  if ((C.sf==C.of)) goto L_11494f81;
  /* 11494ecc mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11494ecf shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11494ed1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11494ed4 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11494edb mov eax, 5 */
  EAX = (0x5u);
  /* 11494ee0 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494ee3 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11494ee6 jmp 0x11494ef1 */
  goto L_11494ef1;
L_11494ee8:;
  /* 11494ee8 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11494eeb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494eee mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11494ef1:;
  /* 11494ef1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494ef5 jle 0x11494f73 */
  if ((C.zf||C.sf!=C.of)) goto L_11494f73;
  /* 11494ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11494efa add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494efd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11494f00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11494f03 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494f06 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11494f09 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11494f0c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11494f10 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11494f13 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11494f16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11494f18 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11494f1b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11494f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11494f20 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11494f23 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11494f26 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11494f29 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11494f2c push ecx */
  push32((uint32_t)(ECX));
  /* 11494f2d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11494f30 push edx */
  push32((uint32_t)(EDX));
  /* 11494f31 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11494f34 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11494f36 push ecx */
  push32((uint32_t)(ECX));
  /* 11494f37 call 0x11490a60 */
  push32(0x11494f3cu); f_11490a60();
  /* 11494f3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494f3f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11494f42 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11494f46 je 0x11494f5c */
  if (C.zf) goto L_11494f5c;
  /* 11494f48 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11494f4b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11494f50 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11494f54 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11494f57 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11494f5c:;
  /* 11494f5c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11494f5f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494f62 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11494f65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11494f68 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11494f6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11494f6e jmp 0x11494ee8 */
  goto L_11494ee8;
L_11494f73:;
  /* 11494f73 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11494f76 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494f79 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11494f7c jmp 0x11494eb9 */
  goto L_11494eb9;
L_11494f81:;
  /* 11494f81 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11494f85 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11494f8a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11494f8e:;
  /* 11494f8e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11494f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494f94 jle 0x11494fbd */
  if ((C.zf||C.sf!=C.of)) goto L_11494fbd;
  /* 11494f96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11494f99 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11494f9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494fa1 jne 0x11494fbd */
  if (!C.zf) goto L_11494fbd;
  /* 11494fa3 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11494fa6 push edx */
  push32((uint32_t)(EDX));
  /* 11494fa7 call 0x11490b50 */
  push32(0x11494facu); f_11490b50();
  /* 11494fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494faf mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11494fb3 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11494fb7 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11494fbb jmp 0x11494f8e */
  goto L_11494f8e;
L_11494fbd:;
  /* 11494fbd movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11494fc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494fc3 jg 0x1149501d */
  if ((!C.zf&&C.sf==C.of)) goto L_1149501d;
  /* 11494fc5 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11494fc9 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11494fcd mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11494fd1:;
  /* 11494fd1 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11494fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11494fd7 jge 0x1149500c */
  if ((C.sf==C.of)) goto L_1149500c;
  /* 11494fd9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11494fdc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11494fe2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11494fe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11494fe7 je 0x11494ff2 */
  if (C.zf) goto L_11494ff2;
  /* 11494fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11494fec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11494fef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11494ff2:;
  /* 11494ff2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11494ff5 push eax */
  push32((uint32_t)(EAX));
  /* 11494ff6 call 0x11490bb0 */
  push32(0x11494ffbu); f_11490bb0();
  /* 11494ffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11494ffe mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11495002 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11495006 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 1149500a jmp 0x11494fd1 */
  goto L_11494fd1;
L_1149500c:;
  /* 1149500c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495010 je 0x1149501d */
  if (C.zf) goto L_1149501d;
  /* 11495012 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11495016 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11495019 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_1149501d:;
  /* 1149501d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495020 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11495025 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149502a jg 0x1149503d */
  if ((!C.zf&&C.sf==C.of)) goto L_1149503d;
  /* 1149502c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149502f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11495035 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149503b jne 0x1149509e */
  if (!C.zf) goto L_1149509e;
L_1149503d:;
  /* 1149503d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495041 jne 0x11495095 */
  if (!C.zf) goto L_11495095;
  /* 11495043 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 1149504a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149504e jne 0x1149508a */
  if (!C.zf) goto L_1149508a;
  /* 11495050 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11495057 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 1149505a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11495060 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495066 jne 0x1149507c */
  if (!C.zf) goto L_1149507c;
  /* 11495068 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 1149506e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11495072 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11495076 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 1149507a jmp 0x11495088 */
  goto L_11495088;
L_1149507c:;
  /* 1149507c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11495080 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11495084 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11495088:;
  /* 11495088 jmp 0x11495093 */
  goto L_11495093;
L_1149508a:;
  /* 1149508a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 1149508d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495090 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11495093:;
  /* 11495093 jmp 0x1149509e */
  goto L_1149509e;
L_11495095:;
  /* 11495095 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11495098 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149509b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_1149509e:;
  /* 1149509e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114950a1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114950a7 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114950ad jl 0x114950e3 */
  if ((C.sf!=C.of)) goto L_114950e3;
  /* 114950af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114950b2 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114950b8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114950ba sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114950bc and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 114950c2 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114950c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114950cb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114950ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114950d1 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114950d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114950db mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 114950e1 jmp 0x11495119 */
  goto L_11495119;
L_114950e3:;
  /* 114950e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114950e6 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 114950ea mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 114950ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114950f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114950f3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 114950f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114950f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114950fc mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 114950ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11495102 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11495107 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1149510a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11495110 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11495112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495115 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11495119:;
  /* 11495119 mov esp, ebp */
  ESP = (EBP);
  /* 1149511b pop ebp */
  EBP = (pop32());
  /* 1149511c ret  */
  ESPCHK(0x11494ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015120 @ 0x11495120 (195 bytes, 67 insns) */
void f_11495120(void) {
  FTRACE(0x11495120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495120 push ebp */
  push32((uint32_t)(EBP));
  /* 11495121 mov ebp, esp */
  EBP = (ESP);
  /* 11495123 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495126 mov eax, 0x114b4de0 */
  EAX = (0x114b4de0u);
  /* 1149512b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1149512e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11495131 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495135 jne 0x1149513c */
  if (!C.zf) goto L_1149513c;
  /* 11495137 jmp 0x114951df */
  goto L_114951df;
L_1149513c:;
  /* 1149513c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495140 jge 0x11495155 */
  if ((C.sf==C.of)) goto L_11495155;
  /* 11495142 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495145 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11495147 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1149514a mov edx, 0x114b4f40 */
  EDX = (0x114b4f40u);
  /* 1149514f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495152 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11495155:;
  /* 11495155 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495159 jne 0x11495163 */
  if (!C.zf) goto L_11495163;
  /* 1149515b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149515e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11495163:;
  /* 11495163 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495167 je 0x114951df */
  if (C.zf) goto L_114951df;
  /* 11495169 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149516c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149516f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11495172 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495175 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11495178 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1149517b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1149517e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11495181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11495184 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495188 jne 0x1149518c */
  if (!C.zf) goto L_1149518c;
  /* 1149518a jmp 0x11495163 */
  goto L_11495163;
L_1149518c:;
  /* 1149518c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1149518f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11495192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11495195 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495197 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1149519a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149519d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1149519f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114951a2 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114951a8 jl 0x114951cd */
  if ((C.sf!=C.of)) goto L_114951cd;
  /* 114951aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114951ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114951af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114951b2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 114951b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114951b8 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 114951bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114951be mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 114951c1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114951c4 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 114951c7 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 114951ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114951cd:;
  /* 114951cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114951d0 push edx */
  push32((uint32_t)(EDX));
  /* 114951d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114951d4 push eax */
  push32((uint32_t)(EAX));
  /* 114951d5 call 0x11494ce0 */
  push32(0x114951dau); f_11494ce0();
  /* 114951da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114951dd jmp 0x11495163 */
  goto L_11495163;
L_114951df:;
  /* 114951df mov esp, ebp */
  ESP = (EBP);
  /* 114951e1 pop ebp */
  EBP = (pop32());
  /* 114951e2 ret  */
  ESPCHK(0x11495120u, _esp0);
  ESP += 4; return;
}

/* FUN_100151f0 @ 0x114951f0 (130 bytes, 50 insns) */
void f_114951f0(void) {
  FTRACE(0x114951f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114951f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114951f1 mov ebp, esp */
  EBP = (ESP);
  /* 114951f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114951f4 push ebx */
  push32((uint32_t)(EBX));
  /* 114951f5 push esi */
  push32((uint32_t)(ESI));
  /* 114951f6 push edi */
  push32((uint32_t)(EDI));
  /* 114951f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114951fe:;
  /* 114951fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495202 jne 0x11495222 */
  if (!C.zf) goto L_11495222;
  /* 11495204 push 0x114b19b0 */
  push32((uint32_t)(0x114b19b0u));
  /* 11495209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1149520b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1149520d push 0x114b19a4 */
  push32((uint32_t)(0x114b19a4u));
  /* 11495212 push 2 */
  push32((uint32_t)(0x2u));
  /* 11495214 call 0x11484860 */
  push32(0x11495219u); f_11484860();
  /* 11495219 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149521c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149521f jne 0x11495222 */
  if (!C.zf) goto L_11495222;
  /* 11495221 int3  */
  x86_unimpl("int3 @ 0x11495221");
L_11495222:;
  /* 11495222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11495224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11495226 jne 0x114951fe */
  if (!C.zf) goto L_114951fe;
  /* 11495228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149522b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1149522e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11495231 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11495233 je 0x11495241 */
  if (C.zf) goto L_11495241;
  /* 11495235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495238 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1149523f jmp 0x11495268 */
  goto L_11495268;
L_11495241:;
  /* 11495241 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495244 push ecx */
  push32((uint32_t)(ECX));
  /* 11495245 call 0x1148c660 */
  push32(0x1149524au); f_1148c660();
  /* 1149524a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149524d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495250 push edx */
  push32((uint32_t)(EDX));
  /* 11495251 call 0x11495280 */
  push32(0x11495256u); f_11495280();
  /* 11495256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1149525c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1149525f push eax */
  push32((uint32_t)(EAX));
  /* 11495260 call 0x1148c6d0 */
  push32(0x11495265u); f_1148c6d0();
  /* 11495265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11495268:;
  /* 11495268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149526b pop edi */
  EDI = (pop32());
  /* 1149526c pop esi */
  ESI = (pop32());
  /* 1149526d pop ebx */
  EBX = (pop32());
  /* 1149526e mov esp, ebp */
  ESP = (EBP);
  /* 11495270 pop ebp */
  EBP = (pop32());
  /* 11495271 ret  */
  ESPCHK(0x114951f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015280 @ 0x11495280 (190 bytes, 67 insns) */
void f_11495280(void) {
  FTRACE(0x11495280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495280 push ebp */
  push32((uint32_t)(EBP));
  /* 11495281 mov ebp, esp */
  EBP = (ESP);
  /* 11495283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495286 push ebx */
  push32((uint32_t)(EBX));
  /* 11495287 push esi */
  push32((uint32_t)(ESI));
  /* 11495288 push edi */
  push32((uint32_t)(EDI));
  /* 11495289 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11495290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495293 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11495296:;
  /* 11495296 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149529a jne 0x114952ba */
  if (!C.zf) goto L_114952ba;
  /* 1149529c push 0x114b06fc */
  push32((uint32_t)(0x114b06fcu));
  /* 114952a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114952a3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 114952a5 push 0x114b19a4 */
  push32((uint32_t)(0x114b19a4u));
  /* 114952aa push 2 */
  push32((uint32_t)(0x2u));
  /* 114952ac call 0x11484860 */
  push32(0x114952b1u); f_11484860();
  /* 114952b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114952b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114952b7 jne 0x114952ba */
  if (!C.zf) goto L_114952ba;
  /* 114952b9 int3  */
  x86_unimpl("int3 @ 0x114952b9");
L_114952ba:;
  /* 114952ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114952bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114952be jne 0x11495296 */
  if (!C.zf) goto L_11495296;
  /* 114952c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114952c3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114952c6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 114952cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114952cd je 0x1149532a */
  if (C.zf) goto L_1149532a;
  /* 114952cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114952d2 push ecx */
  push32((uint32_t)(ECX));
  /* 114952d3 call 0x11492550 */
  push32(0x114952d8u); f_11492550();
  /* 114952d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114952db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114952de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114952e1 push edx */
  push32((uint32_t)(EDX));
  /* 114952e2 call 0x11497300 */
  push32(0x114952e7u); f_11497300();
  /* 114952e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114952ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114952ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114952f0 push ecx */
  push32((uint32_t)(ECX));
  /* 114952f1 call 0x114971d0 */
  push32(0x114952f6u); f_114971d0();
  /* 114952f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114952f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114952fb jge 0x11495306 */
  if ((C.sf==C.of)) goto L_11495306;
  /* 114952fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11495304 jmp 0x1149532a */
  goto L_1149532a;
L_11495306:;
  /* 11495306 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11495309 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149530d je 0x1149532a */
  if (C.zf) goto L_1149532a;
  /* 1149530f push 2 */
  push32((uint32_t)(0x2u));
  /* 11495311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11495314 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11495317 push ecx */
  push32((uint32_t)(ECX));
  /* 11495318 call 0x11487b50 */
  push32(0x1149531du); f_11487b50();
  /* 1149531d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495320 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11495323 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1149532a:;
  /* 1149532a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149532d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11495334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11495337 pop edi */
  EDI = (pop32());
  /* 11495338 pop esi */
  ESI = (pop32());
  /* 11495339 pop ebx */
  EBX = (pop32());
  /* 1149533a mov esp, ebp */
  ESP = (EBP);
  /* 1149533c pop ebp */
  EBP = (pop32());
  /* 1149533d ret  */
  ESPCHK(0x11495280u, _esp0);
  ESP += 4; return;
}

/* FUN_10015340 @ 0x11495340 (210 bytes, 63 insns) */
void f_11495340(void) {
  FTRACE(0x11495340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495340 push ebp */
  push32((uint32_t)(EBP));
  /* 11495341 mov ebp, esp */
  EBP = (ESP);
  /* 11495343 push ecx */
  push32((uint32_t)(ECX));
  /* 11495344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495347 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149534d jae 0x11495371 */
  if (!C.cf) goto L_11495371;
  /* 1149534f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495352 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11495355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495358 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1149535b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1149535e mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 11495365 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1149536a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1149536d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1149536f jne 0x11495384 */
  if (!C.zf) goto L_11495384;
L_11495371:;
  /* 11495371 call 0x1148fad0 */
  push32(0x11495376u); f_1148fad0();
  /* 11495376 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1149537c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1149537f jmp 0x1149540e */
  goto L_1149540e;
L_11495384:;
  /* 11495384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495387 push edx */
  push32((uint32_t)(EDX));
  /* 11495388 call 0x11492310 */
  push32(0x1149538du); f_11492310();
  /* 1149538d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495393 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11495396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495399 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1149539c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1149539f mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 114953a6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 114953ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114953ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114953b0 je 0x114953ed */
  if (C.zf) goto L_114953ed;
  /* 114953b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114953b5 push ecx */
  push32((uint32_t)(ECX));
  /* 114953b6 call 0x11492190 */
  push32(0x114953bbu); f_11492190();
  /* 114953bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114953be push eax */
  push32((uint32_t)(EAX));
  /* 114953bf call dword ptr [0x114b92d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92d4))), 0x114953c5u);
  /* 114953c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114953c7 jne 0x114953d4 */
  if (!C.zf) goto L_114953d4;
  /* 114953c9 call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x114953cfu);
  /* 114953cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114953d2 jmp 0x114953db */
  goto L_114953db;
L_114953d4:;
  /* 114953d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114953db:;
  /* 114953db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114953df jne 0x114953e3 */
  if (!C.zf) goto L_114953e3;
  /* 114953e1 jmp 0x114953ff */
  goto L_114953ff;
L_114953e3:;
  /* 114953e3 call 0x1148fae0 */
  push32(0x114953e8u); f_1148fae0();
  /* 114953e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114953eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114953ed:;
  /* 114953ed call 0x1148fad0 */
  push32(0x114953f2u); f_1148fad0();
  /* 114953f2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114953f8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114953ff:;
  /* 114953ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495402 push eax */
  push32((uint32_t)(EAX));
  /* 11495403 call 0x114923a0 */
  push32(0x11495408u); f_114923a0();
  /* 11495408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149540b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1149540e:;
  /* 1149540e mov esp, ebp */
  ESP = (EBP);
  /* 11495410 pop ebp */
  EBP = (pop32());
  /* 11495411 ret  */
  ESPCHK(0x11495340u, _esp0);
  ESP += 4; return;
}

/* FUN_10015420 @ 0x11495420 (289 bytes, 97 insns) */
void f_11495420(void) {
  FTRACE(0x11495420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495420 push ebp */
  push32((uint32_t)(EBP));
  /* 11495421 mov ebp, esp */
  EBP = (ESP);
  /* 11495423 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495426 push esi */
  push32((uint32_t)(ESI));
  /* 11495427 mov eax, dword ptr [0x114b4ce8] */
  EAX = (r32((uint32_t)(0x114b4ce8)));
  /* 1149542c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1149542f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11495436 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1149543d jmp 0x11495448 */
  goto L_11495448;
L_1149543f:;
  /* 1149543f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495442 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495445 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11495448:;
  /* 11495448 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149544c jae 0x11495481 */
  if (!C.cf) goto L_11495481;
  /* 1149544e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495454 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11495457 push ecx */
  push32((uint32_t)(ECX));
  /* 11495458 call 0x11489ef0 */
  push32(0x1149545du); f_11489ef0();
  /* 1149545d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495460 mov esi, eax */
  ESI = (EAX);
  /* 11495462 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495468 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1149546c push ecx */
  push32((uint32_t)(ECX));
  /* 1149546d call 0x11489ef0 */
  push32(0x11495472u); f_11489ef0();
  /* 11495472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495475 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495478 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1149547c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1149547f jmp 0x1149543f */
  goto L_1149543f;
L_11495481:;
  /* 11495481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11495484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495487 push eax */
  push32((uint32_t)(EAX));
  /* 11495488 call 0x114870a0 */
  push32(0x1149548du); f_114870a0();
  /* 1149548d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495490 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11495493 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495497 je 0x11495539 */
  if (C.zf) goto L_11495539;
  /* 1149549d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114954a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114954a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114954aa jmp 0x114954b5 */
  goto L_114954b5;
L_114954ac:;
  /* 114954ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114954af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114954b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114954b5:;
  /* 114954b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114954b9 jae 0x1149552a */
  if (!C.cf) goto L_1149552a;
  /* 114954bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114954be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 114954c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114954c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114954c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114954ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114954cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114954d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114954d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114954d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114954d7 push edx */
  push32((uint32_t)(EDX));
  /* 114954d8 call 0x1148a070 */
  push32(0x114954ddu); f_1148a070();
  /* 114954dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114954e0 push eax */
  push32((uint32_t)(EAX));
  /* 114954e1 call 0x11489ef0 */
  push32(0x114954e6u); f_11489ef0();
  /* 114954e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114954e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114954ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114954ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114954f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114954f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 114954f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114954fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114954fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11495500 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495503 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495506 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1149550a push eax */
  push32((uint32_t)(EAX));
  /* 1149550b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149550e push ecx */
  push32((uint32_t)(ECX));
  /* 1149550f call 0x1148a070 */
  push32(0x11495514u); f_1148a070();
  /* 11495514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495517 push eax */
  push32((uint32_t)(EAX));
  /* 11495518 call 0x11489ef0 */
  push32(0x1149551du); f_11489ef0();
  /* 1149551d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495520 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495523 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495525 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11495528 jmp 0x114954ac */
  goto L_114954ac;
L_1149552a:;
  /* 1149552a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149552d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11495530 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495533 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495536 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11495539:;
  /* 11495539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149553c pop esi */
  ESI = (pop32());
  /* 1149553d mov esp, ebp */
  ESP = (EBP);
  /* 1149553f pop ebp */
  EBP = (pop32());
  /* 11495540 ret  */
  ESPCHK(0x11495420u, _esp0);
  ESP += 4; return;
}

/* FUN_10015550 @ 0x11495550 (291 bytes, 97 insns) */
void f_11495550(void) {
  FTRACE(0x11495550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495550 push ebp */
  push32((uint32_t)(EBP));
  /* 11495551 mov ebp, esp */
  EBP = (ESP);
  /* 11495553 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495556 push esi */
  push32((uint32_t)(ESI));
  /* 11495557 mov eax, dword ptr [0x114b4ce8] */
  EAX = (r32((uint32_t)(0x114b4ce8)));
  /* 1149555c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1149555f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11495566 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1149556d jmp 0x11495578 */
  goto L_11495578;
L_1149556f:;
  /* 1149556f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495572 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495575 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11495578:;
  /* 11495578 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149557c jae 0x114955b2 */
  if (!C.cf) goto L_114955b2;
  /* 1149557e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495584 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11495588 push ecx */
  push32((uint32_t)(ECX));
  /* 11495589 call 0x11489ef0 */
  push32(0x1149558eu); f_11489ef0();
  /* 1149558e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495591 mov esi, eax */
  ESI = (EAX);
  /* 11495593 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495596 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495599 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1149559d push ecx */
  push32((uint32_t)(ECX));
  /* 1149559e call 0x11489ef0 */
  push32(0x114955a3u); f_11489ef0();
  /* 114955a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114955a6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114955a9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114955ad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114955b0 jmp 0x1149556f */
  goto L_1149556f;
L_114955b2:;
  /* 114955b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114955b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114955b8 push eax */
  push32((uint32_t)(EAX));
  /* 114955b9 call 0x114870a0 */
  push32(0x114955beu); f_114870a0();
  /* 114955be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114955c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114955c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114955c8 je 0x1149566b */
  if (C.zf) goto L_1149566b;
  /* 114955ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114955d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114955d4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114955db jmp 0x114955e6 */
  goto L_114955e6;
L_114955dd:;
  /* 114955dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114955e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114955e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114955e6:;
  /* 114955e6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114955ea jae 0x1149565c */
  if (!C.cf) goto L_1149565c;
  /* 114955ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114955ef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 114955f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114955f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114955f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114955fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114955fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495601 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11495605 push ecx */
  push32((uint32_t)(ECX));
  /* 11495606 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495609 push edx */
  push32((uint32_t)(EDX));
  /* 1149560a call 0x1148a070 */
  push32(0x1149560fu); f_1148a070();
  /* 1149560f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495612 push eax */
  push32((uint32_t)(EAX));
  /* 11495613 call 0x11489ef0 */
  push32(0x11495618u); f_11489ef0();
  /* 11495618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149561b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149561e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495620 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11495623 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495626 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11495629 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149562c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149562f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11495632 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495635 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495638 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1149563c push eax */
  push32((uint32_t)(EAX));
  /* 1149563d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495640 push ecx */
  push32((uint32_t)(ECX));
  /* 11495641 call 0x1148a070 */
  push32(0x11495646u); f_1148a070();
  /* 11495646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495649 push eax */
  push32((uint32_t)(EAX));
  /* 1149564a call 0x11489ef0 */
  push32(0x1149564fu); f_11489ef0();
  /* 1149564f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495652 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495655 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495657 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1149565a jmp 0x114955dd */
  goto L_114955dd;
L_1149565c:;
  /* 1149565c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149565f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11495662 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495668 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1149566b:;
  /* 1149566b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1149566e pop esi */
  ESI = (pop32());
  /* 1149566f mov esp, ebp */
  ESP = (EBP);
  /* 11495671 pop ebp */
  EBP = (pop32());
  /* 11495672 ret  */
  ESPCHK(0x11495550u, _esp0);
  ESP += 4; return;
}

/* FUN_10015680 @ 0x11495680 (878 bytes, 273 insns) */
void f_11495680(void) {
  FTRACE(0x11495680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495680 push ebp */
  push32((uint32_t)(EBP));
  /* 11495681 mov ebp, esp */
  EBP = (ESP);
  /* 11495683 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495686 push esi */
  push32((uint32_t)(ESI));
  /* 11495687 mov eax, dword ptr [0x114b4ce8] */
  EAX = (r32((uint32_t)(0x114b4ce8)));
  /* 1149568c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1149568f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11495696 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1149569d jmp 0x114956a8 */
  goto L_114956a8;
L_1149569f:;
  /* 1149569f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114956a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114956a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114956a8:;
  /* 114956a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114956ac jae 0x114956e1 */
  if (!C.cf) goto L_114956e1;
  /* 114956ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114956b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114956b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114956b7 push ecx */
  push32((uint32_t)(ECX));
  /* 114956b8 call 0x11489ef0 */
  push32(0x114956bdu); f_11489ef0();
  /* 114956bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114956c0 mov esi, eax */
  ESI = (EAX);
  /* 114956c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114956c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114956c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 114956cc push ecx */
  push32((uint32_t)(ECX));
  /* 114956cd call 0x11489ef0 */
  push32(0x114956d2u); f_11489ef0();
  /* 114956d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114956d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114956d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114956dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114956df jmp 0x1149569f */
  goto L_1149569f;
L_114956e1:;
  /* 114956e1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114956e8 jmp 0x114956f3 */
  goto L_114956f3;
L_114956ea:;
  /* 114956ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114956ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114956f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114956f3:;
  /* 114956f3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114956f7 jae 0x1149572d */
  if (!C.cf) goto L_1149572d;
  /* 114956f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114956fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114956ff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11495703 push eax */
  push32((uint32_t)(EAX));
  /* 11495704 call 0x11489ef0 */
  push32(0x11495709u); f_11489ef0();
  /* 11495709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149570c mov esi, eax */
  ESI = (EAX);
  /* 1149570e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495711 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495714 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11495718 push eax */
  push32((uint32_t)(EAX));
  /* 11495719 call 0x11489ef0 */
  push32(0x1149571eu); f_11489ef0();
  /* 1149571e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495721 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495724 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11495728 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1149572b jmp 0x114956ea */
  goto L_114956ea;
L_1149572d:;
  /* 1149572d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495730 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11495736 push eax */
  push32((uint32_t)(EAX));
  /* 11495737 call 0x11489ef0 */
  push32(0x1149573cu); f_11489ef0();
  /* 1149573c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149573f mov esi, eax */
  ESI = (EAX);
  /* 11495741 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495744 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1149574a push edx */
  push32((uint32_t)(EDX));
  /* 1149574b call 0x11489ef0 */
  push32(0x11495750u); f_11489ef0();
  /* 11495750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495753 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495756 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1149575a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1149575d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495760 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11495766 push edx */
  push32((uint32_t)(EDX));
  /* 11495767 call 0x11489ef0 */
  push32(0x1149576cu); f_11489ef0();
  /* 1149576c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149576f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11495772 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11495776 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11495779 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149577c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11495782 push ecx */
  push32((uint32_t)(ECX));
  /* 11495783 call 0x11489ef0 */
  push32(0x11495788u); f_11489ef0();
  /* 11495788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149578b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1149578e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11495792 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11495795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495798 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1149579e push edx */
  push32((uint32_t)(EDX));
  /* 1149579f call 0x11489ef0 */
  push32(0x114957a4u); f_11489ef0();
  /* 114957a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114957a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114957aa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114957ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114957b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114957b4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114957b9 push eax */
  push32((uint32_t)(EAX));
  /* 114957ba call 0x114870a0 */
  push32(0x114957bfu); f_114870a0();
  /* 114957bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114957c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114957c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114957c9 je 0x114959e6 */
  if (C.zf) goto L_114959e6;
  /* 114957cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114957d2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114957d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114957d8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114957de mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114957e1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 114957e6 mov eax, dword ptr [0x114b4ce8] */
  EAX = (r32((uint32_t)(0x114b4ce8)));
  /* 114957eb push eax */
  push32((uint32_t)(EAX));
  /* 114957ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114957ef push ecx */
  push32((uint32_t)(ECX));
  /* 114957f0 call 0x1148f6f0 */
  push32(0x114957f5u); f_1148f6f0();
  /* 114957f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114957f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114957ff jmp 0x1149580a */
  goto L_1149580a;
L_11495801:;
  /* 11495801 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495804 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495807 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1149580a:;
  /* 1149580a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1149580e jae 0x1149587e */
  if (!C.cf) goto L_1149587e;
  /* 11495810 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495813 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11495816 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495819 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1149581c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1149581f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495822 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11495825 push edx */
  push32((uint32_t)(EDX));
  /* 11495826 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495829 push eax */
  push32((uint32_t)(EAX));
  /* 1149582a call 0x1148a070 */
  push32(0x1149582fu); f_1148a070();
  /* 1149582f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495832 push eax */
  push32((uint32_t)(EAX));
  /* 11495833 call 0x11489ef0 */
  push32(0x11495838u); f_11489ef0();
  /* 11495838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149583b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149583e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11495842 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11495845 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495848 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1149584b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149584e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11495852 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495855 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495858 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1149585c push edx */
  push32((uint32_t)(EDX));
  /* 1149585d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495860 push eax */
  push32((uint32_t)(EAX));
  /* 11495861 call 0x1148a070 */
  push32(0x11495866u); f_1148a070();
  /* 11495866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495869 push eax */
  push32((uint32_t)(EAX));
  /* 1149586a call 0x11489ef0 */
  push32(0x1149586fu); f_11489ef0();
  /* 1149586f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495872 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495875 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11495879 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1149587c jmp 0x11495801 */
  goto L_11495801;
L_1149587e:;
  /* 1149587e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11495885 jmp 0x11495890 */
  goto L_11495890;
L_11495887:;
  /* 11495887 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1149588a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1149588d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11495890:;
  /* 11495890 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495894 jae 0x11495906 */
  if (!C.cf) goto L_11495906;
  /* 11495896 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495899 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1149589c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149589f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 114958a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114958a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114958a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 114958ad push eax */
  push32((uint32_t)(EAX));
  /* 114958ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114958b1 push ecx */
  push32((uint32_t)(ECX));
  /* 114958b2 call 0x1148a070 */
  push32(0x114958b7u); f_1148a070();
  /* 114958b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114958ba push eax */
  push32((uint32_t)(EAX));
  /* 114958bb call 0x11489ef0 */
  push32(0x114958c0u); f_11489ef0();
  /* 114958c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114958c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114958c6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114958ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114958cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114958d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114958d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114958d6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 114958da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114958dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114958e0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 114958e4 push eax */
  push32((uint32_t)(EAX));
  /* 114958e5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114958e8 push ecx */
  push32((uint32_t)(ECX));
  /* 114958e9 call 0x1148a070 */
  push32(0x114958eeu); f_1148a070();
  /* 114958ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114958f1 push eax */
  push32((uint32_t)(EAX));
  /* 114958f2 call 0x11489ef0 */
  push32(0x114958f7u); f_11489ef0();
  /* 114958f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114958fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114958fd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11495901 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11495904 jmp 0x11495887 */
  goto L_11495887;
L_11495906:;
  /* 11495906 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11495909 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149590c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11495912 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495915 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1149591b push ecx */
  push32((uint32_t)(ECX));
  /* 1149591c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149591f push edx */
  push32((uint32_t)(EDX));
  /* 11495920 call 0x1148a070 */
  push32(0x11495925u); f_1148a070();
  /* 11495925 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495928 push eax */
  push32((uint32_t)(EAX));
  /* 11495929 call 0x11489ef0 */
  push32(0x1149592eu); f_11489ef0();
  /* 1149592e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495931 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495934 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11495938 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1149593b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1149593e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495941 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11495947 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149594a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11495950 push eax */
  push32((uint32_t)(EAX));
  /* 11495951 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495954 push ecx */
  push32((uint32_t)(ECX));
  /* 11495955 call 0x1148a070 */
  push32(0x1149595au); f_1148a070();
  /* 1149595a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149595d push eax */
  push32((uint32_t)(EAX));
  /* 1149595e call 0x11489ef0 */
  push32(0x11495963u); f_11489ef0();
  /* 11495963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495966 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495969 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1149596d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11495970 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11495973 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495976 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1149597c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1149597f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11495985 push ecx */
  push32((uint32_t)(ECX));
  /* 11495986 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11495989 push edx */
  push32((uint32_t)(EDX));
  /* 1149598a call 0x1148a070 */
  push32(0x1149598fu); f_1148a070();
  /* 1149598f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495992 push eax */
  push32((uint32_t)(EAX));
  /* 11495993 call 0x11489ef0 */
  push32(0x11495998u); f_11489ef0();
  /* 11495998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1149599b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1149599e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114959a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114959a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114959a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114959ab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 114959b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114959b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 114959ba push eax */
  push32((uint32_t)(EAX));
  /* 114959bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114959be push ecx */
  push32((uint32_t)(ECX));
  /* 114959bf call 0x1148a070 */
  push32(0x114959c4u); f_1148a070();
  /* 114959c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114959c7 push eax */
  push32((uint32_t)(EAX));
  /* 114959c8 call 0x11489ef0 */
  push32(0x114959cdu); f_11489ef0();
  /* 114959cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114959d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114959d3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114959d7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114959da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114959dd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114959e0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_114959e6:;
  /* 114959e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114959e9 pop esi */
  ESI = (pop32());
  /* 114959ea mov esp, ebp */
  ESP = (EBP);
  /* 114959ec pop ebp */
  EBP = (pop32());
  /* 114959ed ret  */
  ESPCHK(0x11495680u, _esp0);
  ESP += 4; return;
}

/* FUN_100159f0 @ 0x114959f0 (31 bytes, 15 insns) */
void f_114959f0(void) {
  FTRACE(0x114959f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114959f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114959f1 mov ebp, esp */
  EBP = (ESP);
  /* 114959f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114959f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114959f8 push eax */
  push32((uint32_t)(EAX));
  /* 114959f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114959fc push ecx */
  push32((uint32_t)(ECX));
  /* 114959fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495a00 push edx */
  push32((uint32_t)(EDX));
  /* 11495a01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495a04 push eax */
  push32((uint32_t)(EAX));
  /* 11495a05 call 0x11495a10 */
  push32(0x11495a0au); f_11495a10();
  /* 11495a0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495a0d pop ebp */
  EBP = (pop32());
  /* 11495a0e ret  */
  ESPCHK(0x114959f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a10 @ 0x11495a10 (393 bytes, 123 insns) */
void f_11495a10(void) {
  FTRACE(0x11495a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11495a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11495a11 mov ebp, esp */
  EBP = (ESP);
  /* 11495a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495a16 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495a1a jne 0x11495a26 */
  if (!C.zf) goto L_11495a26;
  /* 11495a1c mov eax, dword ptr [0x114b4ce8] */
  EAX = (r32((uint32_t)(0x114b4ce8)));
  /* 11495a21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11495a24 jmp 0x11495a2c */
  goto L_11495a2c;
L_11495a26:;
  /* 11495a26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11495a29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11495a2c:;
  /* 11495a2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11495a2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11495a32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495a35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11495a38 push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 11495a3d call dword ptr [0x114b937c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b937c))), 0x11495a43u);
  /* 11495a43 cmp dword ptr [0x114b6874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495a4a je 0x11495a6a */
  if (C.zf) goto L_11495a6a;
  /* 11495a4c push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 11495a51 call dword ptr [0x114b936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b936c))), 0x11495a57u);
  /* 11495a57 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11495a59 call 0x1148ca30 */
  push32(0x11495a5eu); f_1148ca30();
  /* 11495a5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495a61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11495a68 jmp 0x11495a71 */
  goto L_11495a71;
L_11495a6a:;
  /* 11495a6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11495a71:;
  /* 11495a71 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495a75 jbe 0x11495b62 */
  if ((C.cf||C.zf)) goto L_11495b62;
  /* 11495a7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495a7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11495a80 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11495a83 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11495a87 je 0x11495a91 */
  if (C.zf) goto L_11495a91;
  /* 11495a89 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11495a8d je 0x11495a96 */
  if (C.zf) goto L_11495a96;
  /* 11495a8f jmp 0x11495af0 */
  goto L_11495af0;
L_11495a91:;
  /* 11495a91 jmp 0x11495b62 */
  goto L_11495b62;
L_11495a96:;
  /* 11495a96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495a99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495a9c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11495a9f mov dword ptr [0x114b6860], 0 */
  w32((uint32_t)(0x114b6860), (0x0u));
  /* 11495aa9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495aac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11495aaf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495ab2 jne 0x11495ac7 */
  if (!C.zf) goto L_11495ac7;
  /* 11495ab4 mov dword ptr [0x114b6860], 1 */
  w32((uint32_t)(0x114b6860), (0x1u));
  /* 11495abe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495ac4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11495ac7:;
  /* 11495ac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11495aca push ecx */
  push32((uint32_t)(ECX));
  /* 11495acb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11495ace push edx */
  push32((uint32_t)(EDX));
  /* 11495acf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11495ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11495ad3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11495ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11495ad7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ada mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11495adc push eax */
  push32((uint32_t)(EAX));
  /* 11495add call 0x11495ba0 */
  push32(0x11495ae2u); f_11495ba0();
  /* 11495ae2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495ae8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495aeb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11495aee jmp 0x11495b5d */
  goto L_11495b5d;
L_11495af0:;
  /* 11495af0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11495af5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11495af7 mov ecx, dword ptr [0x114b3b8c] */
  ECX = (r32((uint32_t)(0x114b3b8c)));
  /* 11495afd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11495aff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11495b03 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11495b09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11495b0b je 0x11495b38 */
  if (C.zf) goto L_11495b38;
  /* 11495b0d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495b11 jbe 0x11495b38 */
  if ((C.cf||C.zf)) goto L_11495b38;
  /* 11495b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495b16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495b19 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11495b1b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11495b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495b20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495b23 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11495b26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495b29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495b2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11495b2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495b32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495b35 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11495b38:;
  /* 11495b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495b3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495b3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11495b40 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11495b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495b45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495b48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11495b4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11495b4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11495b51 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11495b54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11495b57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495b5a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11495b5d:;
  /* 11495b5d jmp 0x11495a71 */
  goto L_11495a71;
L_11495b62:;
  /* 11495b62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495b66 je 0x11495b74 */
  if (C.zf) goto L_11495b74;
  /* 11495b68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11495b6a call 0x1148cad0 */
  push32(0x11495b6fu); f_1148cad0();
  /* 11495b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11495b72 jmp 0x11495b7f */
  goto L_11495b7f;
L_11495b74:;
  /* 11495b74 push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 11495b79 call dword ptr [0x114b936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b936c))), 0x11495b7fu);
L_11495b7f:;
  /* 11495b7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11495b83 jbe 0x11495b93 */
  if ((C.cf||C.zf)) goto L_11495b93;
  /* 11495b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11495b88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11495b8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11495b8e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11495b91 jmp 0x11495b95 */
  goto L_11495b95;
L_11495b93:;
  /* 11495b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11495b95:;
  /* 11495b95 mov esp, ebp */
  ESP = (EBP);
  /* 11495b97 pop ebp */
  EBP = (pop32());
  /* 11495b98 ret  */
  ESPCHK(0x11495a10u, _esp0);
  ESP += 4; return;
}

