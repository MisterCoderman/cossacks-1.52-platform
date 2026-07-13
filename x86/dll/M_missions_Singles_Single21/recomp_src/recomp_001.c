#include "recomp.h"

/* FUN_10007877 @ 0x112a7877 (21 bytes, 7 insns) */
void f_112a7877(void) {
  FTRACE(0x112a7877u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7877 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7878 mov ebp, esp */
  EBP = (ESP);
  /* 112a787a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a787d push dword ptr [eax*4 + 0x112adb20] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x112adb20))));
  /* 112a7884 call dword ptr [0x112aa090] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa090))), 0x112a788au);
  /* 112a788a pop ebp */
  EBP = (pop32());
  /* 112a788b ret  */
  ESPCHK(0x112a7877u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x112a788c (32 bytes, 18 insns) */
void f_112a788c(void) {
  FTRACE(0x112a788cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a788c push ebp */
  push32((uint32_t)(EBP));
  /* 112a788d mov ebp, esp */
  EBP = (ESP);
  /* 112a788f push ebx */
  push32((uint32_t)(EBX));
  /* 112a7890 push esi */
  push32((uint32_t)(ESI));
  /* 112a7891 push edi */
  push32((uint32_t)(EDI));
  /* 112a7892 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7893 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a7895 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a7897 push 0x112a78a4 */
  push32((uint32_t)(0x112a78a4u));
  /* 112a789c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a789f call 0x112a9c34 */
  push32(0x112a78a4u); f_112a9c34();
  /* 112a78a4 pop ebp */
  EBP = (pop32());
  /* 112a78a5 pop edi */
  EDI = (pop32());
  /* 112a78a6 pop esi */
  ESI = (pop32());
  /* 112a78a7 pop ebx */
  EBX = (pop32());
  /* 112a78a8 mov esp, ebp */
  ESP = (EBP);
  /* 112a78aa pop ebp */
  EBP = (pop32());
  /* 112a78ab ret  */
  ESPCHK(0x112a788cu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x112a78ce (104 bytes, 33 insns) */
void f_112a78ce(void) {
  FTRACE(0x112a78ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a78ce push ebx */
  push32((uint32_t)(EBX));
  /* 112a78cf push esi */
  push32((uint32_t)(ESI));
  /* 112a78d0 push edi */
  push32((uint32_t)(EDI));
  /* 112a78d1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a78d5 push eax */
  push32((uint32_t)(EAX));
  /* 112a78d6 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 112a78d8 push 0x112a78ac */
  push32((uint32_t)(0x112a78acu));
  /* 112a78dd push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 112a78e4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_112a78eb:;
  /* 112a78eb mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 112a78ef mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 112a78f2 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 112a78f5 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a78f8 je 0x112a7928 */
  if (C.zf) goto L_112a7928;
  /* 112a78fa cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a78fe je 0x112a7928 */
  if (C.zf) goto L_112a7928;
  /* 112a7900 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 112a7903 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 112a7906 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 112a790a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 112a790d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7912 jne 0x112a7926 */
  if (!C.zf) goto L_112a7926;
  /* 112a7914 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 112a7919 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 112a791d call 0x112a7962 */
  push32(0x112a7922u); f_112a7962();
  /* 112a7922 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x112a7926u);
L_112a7926:;
  /* 112a7926 jmp 0x112a78eb */
  goto L_112a78eb;
L_112a7928:;
  /* 112a7928 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 112a792f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7932 pop edi */
  EDI = (pop32());
  /* 112a7933 pop esi */
  ESI = (pop32());
  /* 112a7934 pop ebx */
  EBX = (pop32());
  /* 112a7935 ret  */
  ESPCHK(0x112a78ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10007962 @ 0x112a7962 (24 bytes, 10 insns) */
void f_112a7962(void) {
  FTRACE(0x112a7962u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7962 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7963 push ecx */
  push32((uint32_t)(ECX));
  /* 112a7964 mov ebx, 0x112adbe0 */
  EBX = (0x112adbe0u);
  /* 112a7969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a796c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 112a796f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 112a7972 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 112a7975 pop ecx */
  ECX = (pop32());
  /* 112a7976 pop ebx */
  EBX = (pop32());
  /* 112a7977 ret 4 */
  ESPCHK(0x112a7962u, _esp0);
  ESP += 8; return;
}

/* FUN_10007a41 @ 0x112a7a41 (27 bytes, 11 insns) */
void f_112a7a41(void) {
  FTRACE(0x112a7a41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7a41 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7a42 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a7a46 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 112a7a48 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112a7a4b push eax */
  push32((uint32_t)(EAX));
  /* 112a7a4c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 112a7a4f push eax */
  push32((uint32_t)(EAX));
  /* 112a7a50 call 0x112a78ce */
  push32(0x112a7a55u); f_112a78ce();
  /* 112a7a55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7a58 pop ebp */
  EBP = (pop32());
  /* 112a7a59 ret 4 */
  ESPCHK(0x112a7a41u, _esp0);
  ESP += 8; return;
}

/* FUN_10007a5c @ 0x112a7a5c (289 bytes, 98 insns) */
void f_112a7a5c(void) {
  FTRACE(0x112a7a5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7a5c push ebp */
  push32((uint32_t)(EBP));
  /* 112a7a5d mov ebp, esp */
  EBP = (ESP);
  /* 112a7a5f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a7a61 push 0x112aa4f8 */
  push32((uint32_t)(0x112aa4f8u));
  /* 112a7a66 push 0x112a7984 */
  push32((uint32_t)(0x112a7984u));
  /* 112a7a6b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112a7a71 push eax */
  push32((uint32_t)(EAX));
  /* 112a7a72 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112a7a79 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7a7c push ebx */
  push32((uint32_t)(EBX));
  /* 112a7a7d push esi */
  push32((uint32_t)(ESI));
  /* 112a7a7e push edi */
  push32((uint32_t)(EDI));
  /* 112a7a7f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a7a82 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a7a86 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 112a7a89 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 112a7a8c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7a8f ja 0x112a7aa5 */
  if ((!C.cf&&!C.zf)) goto L_112a7aa5;
  /* 112a7a91 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a7a93 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7a95 jne 0x112a7a9a */
  if (!C.zf) goto L_112a7a9a;
  /* 112a7a97 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a7a99 pop esi */
  ESI = (pop32());
L_112a7a9a:;
  /* 112a7a9a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7a9d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 112a7aa0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 112a7aa3 jmp 0x112a7aa7 */
  goto L_112a7aa7;
L_112a7aa5:;
  /* 112a7aa5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112a7aa7:;
  /* 112a7aa7 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 112a7aaa cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7aad ja 0x112a7b5b */
  if ((!C.cf&&!C.zf)) goto L_112a7b5b;
  /* 112a7ab3 mov eax, dword ptr [0x112af828] */
  EAX = (r32((uint32_t)(0x112af828)));
  /* 112a7ab8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7abb jne 0x112a7afe */
  if (!C.zf) goto L_112a7afe;
  /* 112a7abd mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 112a7ac0 cmp edi, dword ptr [0x112af820] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x112af820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7ac6 ja 0x112a7b44 */
  if ((!C.cf&&!C.zf)) goto L_112a7b44;
  /* 112a7ac8 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a7aca call 0x112a7816 */
  push32(0x112a7acfu); f_112a7816();
  /* 112a7acf pop ecx */
  ECX = (pop32());
  /* 112a7ad0 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 112a7ad3 push edi */
  push32((uint32_t)(EDI));
  /* 112a7ad4 call 0x112a6ca8 */
  push32(0x112a7ad9u); f_112a6ca8();
  /* 112a7ad9 pop ecx */
  ECX = (pop32());
  /* 112a7ada mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112a7add or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a7ae1 call 0x112a7af5 */
  push32(0x112a7ae6u); f_112a7af5();
  /* 112a7ae6 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7ae9 je 0x112a7b49 */
  if (C.zf) goto L_112a7b49;
  /* 112a7aeb push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 112a7aee jmp 0x112a7b38 */
  goto L_112a7b38;
  /* 112a7af0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a7af2 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a7af5 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a7af7 call 0x112a7877 */
  push32(0x112a7afcu); f_112a7877();
  /* 112a7afc pop ecx */
  ECX = (pop32());
  /* 112a7afd ret  */
  ESPCHK(0x112a7a5cu, _esp0);
  ESP += 4; return;
L_112a7afe:;
  /* 112a7afe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7b01 jne 0x112a7b44 */
  if (!C.zf) goto L_112a7b44;
  /* 112a7b03 cmp esi, dword ptr [0x112adb1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112adb1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7b09 ja 0x112a7b44 */
  if ((!C.cf&&!C.zf)) goto L_112a7b44;
  /* 112a7b0b push 9 */
  push32((uint32_t)(0x9u));
  /* 112a7b0d call 0x112a7816 */
  push32(0x112a7b12u); f_112a7816();
  /* 112a7b12 pop ecx */
  ECX = (pop32());
  /* 112a7b13 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112a7b1a mov eax, esi */
  EAX = (ESI);
  /* 112a7b1c shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112a7b1f push eax */
  push32((uint32_t)(EAX));
  /* 112a7b20 call 0x112a7455 */
  push32(0x112a7b25u); f_112a7455();
  /* 112a7b25 pop ecx */
  ECX = (pop32());
  /* 112a7b26 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112a7b29 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a7b2d call 0x112a7b7e */
  push32(0x112a7b32u); f_112a7b7e();
  /* 112a7b32 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7b35 je 0x112a7b49 */
  if (C.zf) goto L_112a7b49;
  /* 112a7b37 push esi */
  push32((uint32_t)(ESI));
L_112a7b38:;
  /* 112a7b38 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7b39 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 112a7b3c call 0x112a9070 */
  push32(0x112a7b41u); f_112a9070();
  /* 112a7b41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a7b44:;
  /* 112a7b44 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7b47 jne 0x112a7b87 */
  if (!C.zf) { jmp_ind(0x112a7b87u); return; }
L_112a7b49:;
  /* 112a7b49 push esi */
  push32((uint32_t)(ESI));
  /* 112a7b4a push 8 */
  push32((uint32_t)(0x8u));
  /* 112a7b4c push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a7b52 call dword ptr [0x112aa0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a0))), 0x112a7b58u);
  /* 112a7b58 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_112a7b5b:;
  /* 112a7b5b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7b5e jne 0x112a7b87 */
  if (!C.zf) { jmp_ind(0x112a7b87u); return; }
  /* 112a7b60 cmp dword ptr [0x112af438], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af438))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7b66 je 0x112a7b87 */
  if (C.zf) { jmp_ind(0x112a7b87u); return; }
  /* 112a7b68 push esi */
  push32((uint32_t)(ESI));
  /* 112a7b69 call 0x112a81c2 */
  push32(0x112a7b6eu); f_112a81c2();
  /* 112a7b6e pop ecx */
  ECX = (pop32());
  /* 112a7b6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a7b71 jne 0x112a7aa7 */
  if (!C.zf) goto L_112a7aa7;
  /* 112a7b77 jmp 0x112a7b8a */
  jmp_ind(0x112a7b8au); return;
  /* 112a7b79 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10007af5 @ 0x112a7af5 (9 bytes, 4 insns) */
void f_112a7af5(void) {
  FTRACE(0x112a7af5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7af5 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a7af7 call 0x112a7877 */
  push32(0x112a7afcu); f_112a7877();
  /* 112a7afc pop ecx */
  ECX = (pop32());
  /* 112a7afd ret  */
  ESPCHK(0x112a7af5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7e @ 0x112a7b7e (9 bytes, 4 insns) */
void f_112a7b7e(void) {
  FTRACE(0x112a7b7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7b7e push 9 */
  push32((uint32_t)(0x9u));
  /* 112a7b80 call 0x112a7877 */
  push32(0x112a7b85u); f_112a7877();
  /* 112a7b85 pop ecx */
  ECX = (pop32());
  /* 112a7b86 ret  */
  ESPCHK(0x112a7b7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c1a @ 0x112a7c1a (291 bytes, 103 insns) */
void f_112a7c1a(void) {
  FTRACE(0x112a7c1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7c1a push ecx */
  push32((uint32_t)(ECX));
  /* 112a7c1b push ecx */
  push32((uint32_t)(ECX));
  /* 112a7c1c push ebx */
  push32((uint32_t)(EBX));
  /* 112a7c1d push ebp */
  push32((uint32_t)(EBP));
  /* 112a7c1e push esi */
  push32((uint32_t)(ESI));
  /* 112a7c1f push edi */
  push32((uint32_t)(EDI));
  /* 112a7c20 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 112a7c22 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 112a7c25 call 0x112a7816 */
  push32(0x112a7c2au); f_112a7816();
  /* 112a7c2a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a7c2c pop ecx */
  ECX = (pop32());
  /* 112a7c2d mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 112a7c31 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 112a7c35 mov ebp, 0x112af840 */
  EBP = (0x112af840u);
L_112a7c3a:;
  /* 112a7c3a mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 112a7c3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a7c3f je 0x112a7cde */
  if (C.zf) goto L_112a7cde;
  /* 112a7c45 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_112a7c4b:;
  /* 112a7c4b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7c4d jae 0x112a7cc3 */
  if (!C.cf) goto L_112a7cc3;
  /* 112a7c4f test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7c53 jne 0x112a7c99 */
  if (!C.zf) goto L_112a7c99;
  /* 112a7c55 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7c59 jne 0x112a7c7e */
  if (!C.zf) goto L_112a7c7e;
  /* 112a7c5b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a7c5d call 0x112a7816 */
  push32(0x112a7c62u); f_112a7816();
  /* 112a7c62 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7c66 pop ecx */
  ECX = (pop32());
  /* 112a7c67 jne 0x112a7c76 */
  if (!C.zf) goto L_112a7c76;
  /* 112a7c69 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 112a7c6c push eax */
  push32((uint32_t)(EAX));
  /* 112a7c6d call dword ptr [0x112aa0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0bc))), 0x112a7c73u);
  /* 112a7c73 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_112a7c76:;
  /* 112a7c76 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a7c78 call 0x112a7877 */
  push32(0x112a7c7du); f_112a7877();
  /* 112a7c7d pop ecx */
  ECX = (pop32());
L_112a7c7e:;
  /* 112a7c7e lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 112a7c81 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7c82 call dword ptr [0x112aa08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa08c))), 0x112a7c88u);
  /* 112a7c88 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7c8c je 0x112a7ca6 */
  if (C.zf) goto L_112a7ca6;
  /* 112a7c8e push ebx */
  push32((uint32_t)(EBX));
  /* 112a7c8f call dword ptr [0x112aa090] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa090))), 0x112a7c95u);
  /* 112a7c95 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_112a7c99:;
  /* 112a7c99 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 112a7c9c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7c9f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7ca4 jmp 0x112a7c4b */
  goto L_112a7c4b;
L_112a7ca6:;
  /* 112a7ca6 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 112a7ca9 mov eax, esi */
  EAX = (ESI);
  /* 112a7cab sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7cae push 0x24 */
  push32((uint32_t)(0x24u));
  /* 112a7cb0 pop ecx */
  ECX = (pop32());
  /* 112a7cb1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a7cb2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a7cb4 mov edi, eax */
  EDI = (EAX);
  /* 112a7cb6 add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7cba cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7cbd jne 0x112a7d2c */
  if (!C.zf) goto L_112a7d2c;
  /* 112a7cbf mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_112a7cc3:;
  /* 112a7cc3 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a7cc8 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7ccb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a7ccc cmp ebp, 0x112af940 */
  { uint32_t _a=(EBP),_b=(0x112af940u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7cd2 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 112a7cd6 jl 0x112a7c3a */
  if ((C.sf!=C.of)) goto L_112a7c3a;
  /* 112a7cdc jmp 0x112a7d2c */
  goto L_112a7d2c;
L_112a7cde:;
  /* 112a7cde mov esi, 0x480 */
  ESI = (0x480u);
  /* 112a7ce3 push esi */
  push32((uint32_t)(ESI));
  /* 112a7ce4 call 0x112a5745 */
  push32(0x112a7ce9u); f_112a5745();
  /* 112a7ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a7ceb pop ecx */
  ECX = (pop32());
  /* 112a7cec je 0x112a7d2c */
  if (C.zf) goto L_112a7d2c;
  /* 112a7cee add dword ptr [0x112af940], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x112af940))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x112af940), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a7cf5 lea ecx, [ebx*4 + 0x112af840] */
  ECX = ((uint32_t)(EBX*4 + 0x112af840));
  /* 112a7cfc lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 112a7d02 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112a7d04:;
  /* 112a7d04 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7d06 jae 0x112a7d20 */
  if (!C.cf) goto L_112a7d20;
  /* 112a7d08 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a7d0c or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a7d0f and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 112a7d13 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 112a7d17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112a7d19 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7d1c add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7d1e jmp 0x112a7d04 */
  goto L_112a7d04;
L_112a7d20:;
  /* 112a7d20 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 112a7d23 mov edi, ebx */
  EDI = (EBX);
  /* 112a7d25 push edi */
  push32((uint32_t)(EDI));
  /* 112a7d26 call 0x112a7e7a */
  push32(0x112a7d2bu); f_112a7e7a();
  /* 112a7d2b pop ecx */
  ECX = (pop32());
L_112a7d2c:;
  /* 112a7d2c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 112a7d2e call 0x112a7877 */
  push32(0x112a7d33u); f_112a7877();
  /* 112a7d33 pop ecx */
  ECX = (pop32());
  /* 112a7d34 mov eax, edi */
  EAX = (EDI);
  /* 112a7d36 pop edi */
  EDI = (pop32());
  /* 112a7d37 pop esi */
  ESI = (pop32());
  /* 112a7d38 pop ebp */
  EBP = (pop32());
  /* 112a7d39 pop ebx */
  EBX = (pop32());
  /* 112a7d3a pop ecx */
  ECX = (pop32());
  /* 112a7d3b pop ecx */
  ECX = (pop32());
  /* 112a7d3c ret  */
  ESPCHK(0x112a7c1au, _esp0);
  ESP += 4; return;
}

/* FUN_10007d3d @ 0x112a7d3d (124 bytes, 47 insns) */
void f_112a7d3d(void) {
  FTRACE(0x112a7d3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7d3d mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a7d41 push esi */
  push32((uint32_t)(ESI));
  /* 112a7d42 cmp ecx, dword ptr [0x112af940] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7d48 push edi */
  push32((uint32_t)(EDI));
  /* 112a7d49 jae 0x112a7da0 */
  if (!C.cf) goto L_112a7da0;
  /* 112a7d4b mov eax, ecx */
  EAX = (ECX);
  /* 112a7d4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a7d50 lea edi, [eax*4 + 0x112af840] */
  EDI = ((uint32_t)(EAX*4 + 0x112af840));
  /* 112a7d57 mov eax, ecx */
  EAX = (ECX);
  /* 112a7d59 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7d5c lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a7d5f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a7d61 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a7d64 cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7d68 jne 0x112a7da0 */
  if (!C.zf) goto L_112a7da0;
  /* 112a7d6a cmp dword ptr [0x112af278], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112af278))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7d71 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7d72 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a7d76 jne 0x112a7d96 */
  if (!C.zf) goto L_112a7d96;
  /* 112a7d78 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7d7b je 0x112a7d8d */
  if (C.zf) goto L_112a7d8d;
  /* 112a7d7d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a7d7e je 0x112a7d88 */
  if (C.zf) goto L_112a7d88;
  /* 112a7d80 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a7d81 jne 0x112a7d96 */
  if (!C.zf) goto L_112a7d96;
  /* 112a7d83 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7d84 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112a7d86 jmp 0x112a7d90 */
  goto L_112a7d90;
L_112a7d88:;
  /* 112a7d88 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7d89 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 112a7d8b jmp 0x112a7d90 */
  goto L_112a7d90;
L_112a7d8d:;
  /* 112a7d8d push ebx */
  push32((uint32_t)(EBX));
  /* 112a7d8e push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_112a7d90:;
  /* 112a7d90 call dword ptr [0x112aa044] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa044))), 0x112a7d96u);
L_112a7d96:;
  /* 112a7d96 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a7d98 mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 112a7d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a7d9d pop ebx */
  EBX = (pop32());
  /* 112a7d9e jmp 0x112a7db6 */
  goto L_112a7db6;
L_112a7da0:;
  /* 112a7da0 call 0x112a58f2 */
  push32(0x112a7da5u); f_112a58f2();
  /* 112a7da5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a7dab call 0x112a58fb */
  push32(0x112a7db0u); f_112a58fb();
  /* 112a7db0 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a7db3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112a7db6:;
  /* 112a7db6 pop edi */
  EDI = (pop32());
  /* 112a7db7 pop esi */
  ESI = (pop32());
  /* 112a7db8 ret  */
  ESPCHK(0x112a7d3du, _esp0);
  ESP += 4; return;
}

/* FUN_10007db9 @ 0x112a7db9 (127 bytes, 48 insns) */
void f_112a7db9(void) {
  FTRACE(0x112a7db9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7db9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a7dbd push esi */
  push32((uint32_t)(ESI));
  /* 112a7dbe cmp ecx, dword ptr [0x112af940] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7dc4 push edi */
  push32((uint32_t)(EDI));
  /* 112a7dc5 jae 0x112a7e1f */
  if (!C.cf) goto L_112a7e1f;
  /* 112a7dc7 mov eax, ecx */
  EAX = (ECX);
  /* 112a7dc9 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a7dcc lea edi, [eax*4 + 0x112af840] */
  EDI = ((uint32_t)(EAX*4 + 0x112af840));
  /* 112a7dd3 mov eax, ecx */
  EAX = (ECX);
  /* 112a7dd5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7dd8 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a7ddb mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a7ddd shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a7de0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7de2 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7de6 je 0x112a7e1f */
  if (C.zf) goto L_112a7e1f;
  /* 112a7de8 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7deb je 0x112a7e1f */
  if (C.zf) goto L_112a7e1f;
  /* 112a7ded cmp dword ptr [0x112af278], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112af278))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7df4 jne 0x112a7e15 */
  if (!C.zf) goto L_112a7e15;
  /* 112a7df6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a7df8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7dfa je 0x112a7e0c */
  if (C.zf) goto L_112a7e0c;
  /* 112a7dfc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a7dfd je 0x112a7e07 */
  if (C.zf) goto L_112a7e07;
  /* 112a7dff dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a7e00 jne 0x112a7e15 */
  if (!C.zf) goto L_112a7e15;
  /* 112a7e02 push eax */
  push32((uint32_t)(EAX));
  /* 112a7e03 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112a7e05 jmp 0x112a7e0f */
  goto L_112a7e0f;
L_112a7e07:;
  /* 112a7e07 push eax */
  push32((uint32_t)(EAX));
  /* 112a7e08 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 112a7e0a jmp 0x112a7e0f */
  goto L_112a7e0f;
L_112a7e0c:;
  /* 112a7e0c push eax */
  push32((uint32_t)(EAX));
  /* 112a7e0d push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_112a7e0f:;
  /* 112a7e0f call dword ptr [0x112aa044] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa044))), 0x112a7e15u);
L_112a7e15:;
  /* 112a7e15 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a7e17 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 112a7e1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a7e1d jmp 0x112a7e35 */
  goto L_112a7e35;
L_112a7e1f:;
  /* 112a7e1f call 0x112a58f2 */
  push32(0x112a7e24u); f_112a58f2();
  /* 112a7e24 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a7e2a call 0x112a58fb */
  push32(0x112a7e2fu); f_112a58fb();
  /* 112a7e2f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a7e32 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112a7e35:;
  /* 112a7e35 pop edi */
  EDI = (pop32());
  /* 112a7e36 pop esi */
  ESI = (pop32());
  /* 112a7e37 ret  */
  ESPCHK(0x112a7db9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e38 @ 0x112a7e38 (66 bytes, 19 insns) */
void f_112a7e38(void) {
  FTRACE(0x112a7e38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7e38 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a7e3c cmp eax, dword ptr [0x112af940] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7e42 jae 0x112a7e63 */
  if (!C.cf) goto L_112a7e63;
  /* 112a7e44 mov ecx, eax */
  ECX = (EAX);
  /* 112a7e46 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7e49 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a7e4c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a7e4f mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a7e56 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7e5b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 112a7e5e je 0x112a7e63 */
  if (C.zf) goto L_112a7e63;
  /* 112a7e60 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 112a7e62 ret  */
  ESPCHK(0x112a7e38u, _esp0);
  ESP += 4; return;
L_112a7e63:;
  /* 112a7e63 call 0x112a58f2 */
  push32(0x112a7e68u); f_112a58f2();
  /* 112a7e68 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a7e6e call 0x112a58fb */
  push32(0x112a7e73u); f_112a58fb();
  /* 112a7e73 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a7e76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7e79 ret  */
  ESPCHK(0x112a7e38u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e7a @ 0x112a7e7a (95 bytes, 34 insns) */
void f_112a7e7a(void) {
  FTRACE(0x112a7e7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7e7a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a7e7e push ebx */
  push32((uint32_t)(EBX));
  /* 112a7e7f mov ecx, eax */
  ECX = (EAX);
  /* 112a7e81 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7e84 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a7e87 push esi */
  push32((uint32_t)(ESI));
  /* 112a7e88 push edi */
  push32((uint32_t)(EDI));
  /* 112a7e89 mov esi, dword ptr [ecx*4 + 0x112af840] */
  ESI = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a7e90 lea ebx, [ecx*4 + 0x112af840] */
  EBX = ((uint32_t)(ECX*4 + 0x112af840));
  /* 112a7e97 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 112a7e9a shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 112a7e9d add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7e9f cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7ea3 jne 0x112a7ec8 */
  if (!C.zf) goto L_112a7ec8;
  /* 112a7ea5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a7ea7 call 0x112a7816 */
  push32(0x112a7eacu); f_112a7816();
  /* 112a7eac cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7eb0 pop ecx */
  ECX = (pop32());
  /* 112a7eb1 jne 0x112a7ec0 */
  if (!C.zf) goto L_112a7ec0;
  /* 112a7eb3 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 112a7eb6 push eax */
  push32((uint32_t)(EAX));
  /* 112a7eb7 call dword ptr [0x112aa0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0bc))), 0x112a7ebdu);
  /* 112a7ebd inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_112a7ec0:;
  /* 112a7ec0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a7ec2 call 0x112a7877 */
  push32(0x112a7ec7u); f_112a7877();
  /* 112a7ec7 pop ecx */
  ECX = (pop32());
L_112a7ec8:;
  /* 112a7ec8 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a7eca lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 112a7ece push eax */
  push32((uint32_t)(EAX));
  /* 112a7ecf call dword ptr [0x112aa08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa08c))), 0x112a7ed5u);
  /* 112a7ed5 pop edi */
  EDI = (pop32());
  /* 112a7ed6 pop esi */
  ESI = (pop32());
  /* 112a7ed7 pop ebx */
  EBX = (pop32());
  /* 112a7ed8 ret  */
  ESPCHK(0x112a7e7au, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed9 @ 0x112a7ed9 (34 bytes, 10 insns) */
void f_112a7ed9(void) {
  FTRACE(0x112a7ed9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7ed9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a7edd mov ecx, eax */
  ECX = (EAX);
  /* 112a7edf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7ee2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a7ee5 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a7ee8 mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a7eef lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 112a7ef3 push eax */
  push32((uint32_t)(EAX));
  /* 112a7ef4 call dword ptr [0x112aa090] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa090))), 0x112a7efau);
  /* 112a7efa ret  */
  ESPCHK(0x112a7ed9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007efb @ 0x112a7efb (147 bytes, 52 insns) */
void f_112a7efb(void) {
  FTRACE(0x112a7efbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7efb push ebx */
  push32((uint32_t)(EBX));
  /* 112a7efc mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a7f00 cmp ebx, dword ptr [0x112af940] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7f06 push esi */
  push32((uint32_t)(ESI));
  /* 112a7f07 push edi */
  push32((uint32_t)(EDI));
  /* 112a7f08 jae 0x112a7f7c */
  if (!C.cf) goto L_112a7f7c;
  /* 112a7f0a mov eax, ebx */
  EAX = (EBX);
  /* 112a7f0c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a7f0f lea edi, [eax*4 + 0x112af840] */
  EDI = ((uint32_t)(EAX*4 + 0x112af840));
  /* 112a7f16 mov eax, ebx */
  EAX = (EBX);
  /* 112a7f18 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7f1b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a7f1e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a7f20 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a7f23 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7f28 je 0x112a7f7c */
  if (C.zf) goto L_112a7f7c;
  /* 112a7f2a push ebx */
  push32((uint32_t)(EBX));
  /* 112a7f2b call 0x112a7e7a */
  push32(0x112a7f30u); f_112a7e7a();
  /* 112a7f30 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a7f32 pop ecx */
  ECX = (pop32());
  /* 112a7f33 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7f38 je 0x112a7f63 */
  if (C.zf) goto L_112a7f63;
  /* 112a7f3a push ebx */
  push32((uint32_t)(EBX));
  /* 112a7f3b call 0x112a7e38 */
  push32(0x112a7f40u); f_112a7e38();
  /* 112a7f40 pop ecx */
  ECX = (pop32());
  /* 112a7f41 push eax */
  push32((uint32_t)(EAX));
  /* 112a7f42 call dword ptr [0x112aa040] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa040))), 0x112a7f48u);
  /* 112a7f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a7f4a jne 0x112a7f56 */
  if (!C.zf) goto L_112a7f56;
  /* 112a7f4c call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a7f52u);
  /* 112a7f52 mov esi, eax */
  ESI = (EAX);
  /* 112a7f54 jmp 0x112a7f58 */
  goto L_112a7f58;
L_112a7f56:;
  /* 112a7f56 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_112a7f58:;
  /* 112a7f58 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a7f5a je 0x112a7f71 */
  if (C.zf) goto L_112a7f71;
  /* 112a7f5c call 0x112a58fb */
  push32(0x112a7f61u); f_112a58fb();
  /* 112a7f61 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_112a7f63:;
  /* 112a7f63 call 0x112a58f2 */
  push32(0x112a7f68u); f_112a58f2();
  /* 112a7f68 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a7f6e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_112a7f71:;
  /* 112a7f71 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7f72 call 0x112a7ed9 */
  push32(0x112a7f77u); f_112a7ed9();
  /* 112a7f77 pop ecx */
  ECX = (pop32());
  /* 112a7f78 mov eax, esi */
  EAX = (ESI);
  /* 112a7f7a jmp 0x112a7f8a */
  goto L_112a7f8a;
L_112a7f7c:;
  /* 112a7f7c call 0x112a58f2 */
  push32(0x112a7f81u); f_112a58f2();
  /* 112a7f81 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a7f87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112a7f8a:;
  /* 112a7f8a pop edi */
  EDI = (pop32());
  /* 112a7f8b pop esi */
  ESI = (pop32());
  /* 112a7f8c pop ebx */
  EBX = (pop32());
  /* 112a7f8d ret  */
  ESPCHK(0x112a7efbu, _esp0);
  ESP += 4; return;
}

/* FUN_10007f8e @ 0x112a7f8e (101 bytes, 34 insns) */
void f_112a7f8e(void) {
  FTRACE(0x112a7f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7f8e push esi */
  push32((uint32_t)(ESI));
  /* 112a7f8f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a7f93 cmp esi, dword ptr [0x112af940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7f99 jae 0x112a7fdb */
  if (!C.cf) goto L_112a7fdb;
  /* 112a7f9b mov ecx, esi */
  ECX = (ESI);
  /* 112a7f9d mov eax, esi */
  EAX = (ESI);
  /* 112a7f9f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a7fa2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7fa5 mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a7fac lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a7faf test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a7fb4 je 0x112a7fdb */
  if (C.zf) goto L_112a7fdb;
  /* 112a7fb6 push edi */
  push32((uint32_t)(EDI));
  /* 112a7fb7 push esi */
  push32((uint32_t)(ESI));
  /* 112a7fb8 call 0x112a7e7a */
  push32(0x112a7fbdu); f_112a7e7a();
  /* 112a7fbd push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a7fc1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a7fc5 push esi */
  push32((uint32_t)(ESI));
  /* 112a7fc6 call 0x112a7ff3 */
  push32(0x112a7fcbu); f_112a7ff3();
  /* 112a7fcb push esi */
  push32((uint32_t)(ESI));
  /* 112a7fcc mov edi, eax */
  EDI = (EAX);
  /* 112a7fce call 0x112a7ed9 */
  push32(0x112a7fd3u); f_112a7ed9();
  /* 112a7fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7fd6 mov eax, edi */
  EAX = (EDI);
  /* 112a7fd8 pop edi */
  EDI = (pop32());
  /* 112a7fd9 pop esi */
  ESI = (pop32());
  /* 112a7fda ret  */
  ESPCHK(0x112a7f8eu, _esp0);
  ESP += 4; return;
L_112a7fdb:;
  /* 112a7fdb call 0x112a58f2 */
  push32(0x112a7fe0u); f_112a58f2();
  /* 112a7fe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a7fe6 call 0x112a58fb */
  push32(0x112a7febu); f_112a58fb();
  /* 112a7feb and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a7fee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a7ff1 pop esi */
  ESI = (pop32());
  /* 112a7ff2 ret  */
  ESPCHK(0x112a7f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff3 @ 0x112a7ff3 (395 bytes, 135 insns) */
void f_112a7ff3(void) {
  FTRACE(0x112a7ff3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7ff3 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7ff4 mov ebp, esp */
  EBP = (ESP);
  /* 112a7ff6 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7ffc push ebx */
  push32((uint32_t)(EBX));
  /* 112a7ffd push esi */
  push32((uint32_t)(ESI));
  /* 112a7ffe push edi */
  push32((uint32_t)(EDI));
  /* 112a7fff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a8001 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8004 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 112a8007 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 112a800a jne 0x112a8013 */
  if (!C.zf) goto L_112a8013;
L_112a800c:;
  /* 112a800c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a800e jmp 0x112a8179 */
  goto L_112a8179;
L_112a8013:;
  /* 112a8013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8016 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a8019 lea ebx, [eax*4 + 0x112af840] */
  EBX = ((uint32_t)(EAX*4 + 0x112af840));
  /* 112a8020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8023 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a8026 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a8029 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a802b shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a802e test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 112a8033 je 0x112a8043 */
  if (C.zf) goto L_112a8043;
  /* 112a8035 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a8037 push edi */
  push32((uint32_t)(EDI));
  /* 112a8038 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a803b call 0x112a5b79 */
  push32(0x112a8040u); f_112a5b79();
  /* 112a8040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a8043:;
  /* 112a8043 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a8045 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8047 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 112a804b je 0x112a8112 */
  if (C.zf) goto L_112a8112;
  /* 112a8051 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a8054 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8057 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112a805a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 112a805d jbe 0x112a814d */
  if ((C.cf||C.zf)) goto L_112a814d;
L_112a8063:;
  /* 112a8063 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_112a8069:;
  /* 112a8069 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a806c sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a806f cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8072 jae 0x112a809d */
  if (!C.cf) goto L_112a809d;
  /* 112a8074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a8077 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 112a807a mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 112a807c cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a807f jne 0x112a8088 */
  if (!C.zf) goto L_112a8088;
  /* 112a8081 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 112a8084 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 112a8087 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112a8088:;
  /* 112a8088 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 112a808a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a808b mov ecx, eax */
  ECX = (EAX);
  /* 112a808d lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 112a8093 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8095 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a809b jl 0x112a8069 */
  if ((C.sf!=C.of)) goto L_112a8069;
L_112a809d:;
  /* 112a809d mov edi, eax */
  EDI = (EAX);
  /* 112a809f lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 112a80a5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a80a7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112a80aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112a80ac push eax */
  push32((uint32_t)(EAX));
  /* 112a80ad lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 112a80b3 push edi */
  push32((uint32_t)(EDI));
  /* 112a80b4 push eax */
  push32((uint32_t)(EAX));
  /* 112a80b5 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a80b7 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 112a80ba call dword ptr [0x112aa054] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa054))), 0x112a80c0u);
  /* 112a80c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a80c2 je 0x112a8107 */
  if (C.zf) goto L_112a8107;
  /* 112a80c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112a80c7 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a80ca cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a80cc jl 0x112a80d9 */
  if ((C.sf!=C.of)) goto L_112a80d9;
  /* 112a80ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a80d1 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a80d4 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a80d7 jb 0x112a8063 */
  if (C.cf) goto L_112a8063;
L_112a80d9:;
  /* 112a80d9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_112a80db:;
  /* 112a80db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a80de cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a80e0 jne 0x112a8176 */
  if (!C.zf) goto L_112a8176;
  /* 112a80e6 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a80e9 je 0x112a814d */
  if (C.zf) goto L_112a814d;
  /* 112a80eb push 5 */
  push32((uint32_t)(0x5u));
  /* 112a80ed pop esi */
  ESI = (pop32());
  /* 112a80ee cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a80f1 jne 0x112a813f */
  if (!C.zf) goto L_112a813f;
  /* 112a80f3 call 0x112a58f2 */
  push32(0x112a80f8u); f_112a58f2();
  /* 112a80f8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a80fe call 0x112a58fb */
  push32(0x112a8103u); f_112a58fb();
  /* 112a8103 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 112a8105 jmp 0x112a8148 */
  goto L_112a8148;
L_112a8107:;
  /* 112a8107 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a810du);
  /* 112a810d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112a8110 jmp 0x112a80d9 */
  goto L_112a80d9;
L_112a8112:;
  /* 112a8112 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 112a8115 push edi */
  push32((uint32_t)(EDI));
  /* 112a8116 push ecx */
  push32((uint32_t)(ECX));
  /* 112a8117 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a811a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a811d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 112a811f call dword ptr [0x112aa054] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa054))), 0x112a8125u);
  /* 112a8125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8127 je 0x112a8134 */
  if (C.zf) goto L_112a8134;
  /* 112a8129 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112a812c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 112a812f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112a8132 jmp 0x112a80db */
  goto L_112a80db;
L_112a8134:;
  /* 112a8134 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a813au);
  /* 112a813a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112a813d jmp 0x112a80db */
  goto L_112a80db;
L_112a813f:;
  /* 112a813f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a8142 call 0x112a587f */
  push32(0x112a8147u); f_112a587f();
  /* 112a8147 pop ecx */
  ECX = (pop32());
L_112a8148:;
  /* 112a8148 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a814b jmp 0x112a8179 */
  goto L_112a8179;
L_112a814d:;
  /* 112a814d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a814f test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 112a8154 je 0x112a8162 */
  if (C.zf) goto L_112a8162;
  /* 112a8156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a8159 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a815c je 0x112a800c */
  if (C.zf) goto L_112a800c;
L_112a8162:;
  /* 112a8162 call 0x112a58f2 */
  push32(0x112a8167u); f_112a58f2();
  /* 112a8167 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 112a816d call 0x112a58fb */
  push32(0x112a8172u); f_112a58fb();
  /* 112a8172 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 112a8174 jmp 0x112a8148 */
  goto L_112a8148;
L_112a8176:;
  /* 112a8176 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_112a8179:;
  /* 112a8179 pop edi */
  EDI = (pop32());
  /* 112a817a pop esi */
  ESI = (pop32());
  /* 112a817b pop ebx */
  EBX = (pop32());
  /* 112a817c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a817d ret  */
  ESPCHK(0x112a7ff3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000817e @ 0x112a817e (68 bytes, 19 insns) */
void f_112a817e(void) {
  FTRACE(0x112a817eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a817e inc dword ptr [0x112af27c] */
  { uint32_t _r=(r32((uint32_t)(0x112af27c)))+1; w32((uint32_t)(0x112af27c), (_r)); fl_inc(_r,32); }
  /* 112a8184 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112a8189 call 0x112a5745 */
  push32(0x112a818eu); f_112a5745();
  /* 112a818e pop ecx */
  ECX = (pop32());
  /* 112a818f mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a8193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8195 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112a8198 je 0x112a81a7 */
  if (C.zf) goto L_112a81a7;
  /* 112a819a or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a819e mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 112a81a5 jmp 0x112a81b8 */
  goto L_112a81b8;
L_112a81a7:;
  /* 112a81a7 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a81ab lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 112a81ae mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112a81b1 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_112a81b8:;
  /* 112a81b8 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 112a81bb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a81bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112a81c1 ret  */
  ESPCHK(0x112a817eu, _esp0);
  ESP += 4; return;
}

/* FUN_100081c2 @ 0x112a81c2 (27 bytes, 13 insns) */
void f_112a81c2(void) {
  FTRACE(0x112a81c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a81c2 mov eax, dword ptr [0x112af43c] */
  EAX = (r32((uint32_t)(0x112af43c)));
  /* 112a81c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a81c9 je 0x112a81da */
  if (C.zf) goto L_112a81da;
  /* 112a81cb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112a81cf call eax */
  call_ind((uint32_t)(EAX), 0x112a81d1u);
  /* 112a81d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a81d3 pop ecx */
  ECX = (pop32());
  /* 112a81d4 je 0x112a81da */
  if (C.zf) goto L_112a81da;
  /* 112a81d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a81d8 pop eax */
  EAX = (pop32());
  /* 112a81d9 ret  */
  ESPCHK(0x112a81c2u, _esp0);
  ESP += 4; return;
L_112a81da:;
  /* 112a81da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a81dc ret  */
  ESPCHK(0x112a81c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100081dd @ 0x112a81dd (719 bytes, 241 insns) */
void f_112a81dd(void) {
  FTRACE(0x112a81ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a81dd push ebp */
  push32((uint32_t)(EBP));
  /* 112a81de mov ebp, esp */
  EBP = (ESP);
  /* 112a81e0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a81e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a81e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112a81e7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a81e9 push esi */
  push32((uint32_t)(ESI));
  /* 112a81ea test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 112a81ed push edi */
  push32((uint32_t)(EDI));
  /* 112a81ee mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 112a81f5 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 112a81f8 je 0x112a8203 */
  if (C.zf) goto L_112a8203;
  /* 112a81fa mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 112a81fd mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 112a8201 jmp 0x112a820e */
  goto L_112a820e;
L_112a8203:;
  /* 112a8203 and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 112a8207 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_112a820e:;
  /* 112a820e mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 112a8213 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 112a8215 jne 0x112a8228 */
  if (!C.zf) goto L_112a8228;
  /* 112a8217 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 112a821a jne 0x112a8224 */
  if (!C.zf) goto L_112a8224;
  /* 112a821c cmp dword ptr [0x112af454], eax */
  { uint32_t _a=(r32((uint32_t)(0x112af454))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8222 je 0x112a8228 */
  if (C.zf) goto L_112a8228;
L_112a8224:;
  /* 112a8224 or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_112a8228:;
  /* 112a8228 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a822a mov eax, ecx */
  EAX = (ECX);
  /* 112a822c pop esi */
  ESI = (pop32());
  /* 112a822d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 112a822f sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8231 je 0x112a824f */
  if (C.zf) goto L_112a824f;
  /* 112a8233 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a8234 je 0x112a8246 */
  if (C.zf) goto L_112a8246;
  /* 112a8236 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a8237 jne 0x112a82e1 */
  if (!C.zf) goto L_112a82e1;
  /* 112a823d mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 112a8244 jmp 0x112a8256 */
  goto L_112a8256;
L_112a8246:;
  /* 112a8246 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 112a824d jmp 0x112a8256 */
  goto L_112a8256;
L_112a824f:;
  /* 112a824f mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_112a8256:;
  /* 112a8256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a8259 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a825c je 0x112a8284 */
  if (C.zf) goto L_112a8284;
  /* 112a825e cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8261 je 0x112a827b */
  if (C.zf) goto L_112a827b;
  /* 112a8263 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8266 je 0x112a8272 */
  if (C.zf) goto L_112a8272;
  /* 112a8268 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a826b jne 0x112a82e1 */
  if (!C.zf) goto L_112a82e1;
  /* 112a826d mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 112a8270 jmp 0x112a8287 */
  goto L_112a8287;
L_112a8272:;
  /* 112a8272 mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 112a8279 jmp 0x112a8287 */
  goto L_112a8287;
L_112a827b:;
  /* 112a827b mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112a8282 jmp 0x112a8287 */
  goto L_112a8287;
L_112a8284:;
  /* 112a8284 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_112a8287:;
  /* 112a8287 mov edx, 0x700 */
  EDX = (0x700u);
  /* 112a828c mov eax, 0x400 */
  EAX = (0x400u);
  /* 112a8291 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112a8293 mov edi, 0x100 */
  EDI = (0x100u);
  /* 112a8298 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a829a jg 0x112a82cd */
  if ((!C.zf&&C.sf==C.of)) goto L_112a82cd;
  /* 112a829c je 0x112a82c8 */
  if (C.zf) goto L_112a82c8;
  /* 112a829e cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82a0 je 0x112a82c8 */
  if (C.zf) goto L_112a82c8;
  /* 112a82a2 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82a4 je 0x112a82bf */
  if (C.zf) goto L_112a82bf;
  /* 112a82a6 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82ac je 0x112a82fb */
  if (C.zf) goto L_112a82fb;
  /* 112a82ae cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82b4 jne 0x112a82e1 */
  if (!C.zf) goto L_112a82e1;
  /* 112a82b6 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 112a82bd jmp 0x112a830b */
  goto L_112a830b;
L_112a82bf:;
  /* 112a82bf mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 112a82c6 jmp 0x112a830b */
  goto L_112a830b;
L_112a82c8:;
  /* 112a82c8 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 112a82cb jmp 0x112a830b */
  goto L_112a830b;
L_112a82cd:;
  /* 112a82cd cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82d3 je 0x112a8304 */
  if (C.zf) goto L_112a8304;
  /* 112a82d5 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82db je 0x112a82fb */
  if (C.zf) goto L_112a82fb;
  /* 112a82dd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a82df je 0x112a8304 */
  if (C.zf) goto L_112a8304;
L_112a82e1:;
  /* 112a82e1 call 0x112a58f2 */
  push32(0x112a82e6u); f_112a58f2();
  /* 112a82e6 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 112a82ec call 0x112a58fb */
  push32(0x112a82f1u); f_112a58fb();
  /* 112a82f1 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 112a82f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a82f6 jmp 0x112a84a7 */
  goto L_112a84a7;
L_112a82fb:;
  /* 112a82fb mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 112a8302 jmp 0x112a830b */
  goto L_112a830b;
L_112a8304:;
  /* 112a8304 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_112a830b:;
  /* 112a830b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a830e mov esi, 0x80 */
  ESI = (0x80u);
  /* 112a8313 test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 112a8315 je 0x112a832a */
  if (C.zf) goto L_112a832a;
  /* 112a8317 mov ecx, dword ptr [0x112af280] */
  ECX = (r32((uint32_t)(0x112af280)));
  /* 112a831d not ecx */
  ECX = (~(ECX));
  /* 112a831f and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 112a8322 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 112a8325 jne 0x112a832a */
  if (!C.zf) goto L_112a832a;
  /* 112a8327 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a8329 pop esi */
  ESI = (pop32());
L_112a832a:;
  /* 112a832a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 112a832c je 0x112a8338 */
  if (C.zf) goto L_112a8338;
  /* 112a832e or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 112a8334 or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_112a8338:;
  /* 112a8338 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 112a833b je 0x112a833f */
  if (C.zf) goto L_112a833f;
  /* 112a833d or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_112a833f:;
  /* 112a833f test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 112a8341 je 0x112a834b */
  if (C.zf) goto L_112a834b;
  /* 112a8343 or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 112a8349 jmp 0x112a8355 */
  goto L_112a8355;
L_112a834b:;
  /* 112a834b test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 112a834d je 0x112a8355 */
  if (C.zf) goto L_112a8355;
  /* 112a834f or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_112a8355:;
  /* 112a8355 call 0x112a7c1a */
  push32(0x112a835au); f_112a7c1a();
  /* 112a835a mov ebx, eax */
  EBX = (EAX);
  /* 112a835c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 112a835f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8361 jne 0x112a837d */
  if (!C.zf) goto L_112a837d;
  /* 112a8363 call 0x112a58f2 */
  push32(0x112a8368u); f_112a58f2();
  /* 112a8368 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 112a836e call 0x112a58fb */
  push32(0x112a8373u); f_112a58fb();
  /* 112a8373 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a8376 mov eax, edi */
  EAX = (EDI);
  /* 112a8378 jmp 0x112a84a7 */
  goto L_112a84a7;
L_112a837d:;
  /* 112a837d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a837f push esi */
  push32((uint32_t)(ESI));
  /* 112a8380 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 112a8383 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 112a8386 push eax */
  push32((uint32_t)(EAX));
  /* 112a8387 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 112a838a push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 112a838d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a8390 call dword ptr [0x112aa03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa03c))), 0x112a8396u);
  /* 112a8396 mov esi, eax */
  ESI = (EAX);
  /* 112a8398 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a839a jne 0x112a83b0 */
  if (!C.zf) goto L_112a83b0;
L_112a839c:;
  /* 112a839c call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a83a2u);
  /* 112a83a2 push eax */
  push32((uint32_t)(EAX));
  /* 112a83a3 call 0x112a587f */
  push32(0x112a83a8u); f_112a587f();
  /* 112a83a8 pop ecx */
  ECX = (pop32());
  /* 112a83a9 mov esi, edi */
  ESI = (EDI);
  /* 112a83ab jmp 0x112a849e */
  goto L_112a849e;
L_112a83b0:;
  /* 112a83b0 push esi */
  push32((uint32_t)(ESI));
  /* 112a83b1 call dword ptr [0x112aa0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0ac))), 0x112a83b7u);
  /* 112a83b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a83b9 jne 0x112a83c4 */
  if (!C.zf) goto L_112a83c4;
  /* 112a83bb push esi */
  push32((uint32_t)(ESI));
  /* 112a83bc call dword ptr [0x112aa098] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa098))), 0x112a83c2u);
  /* 112a83c2 jmp 0x112a839c */
  goto L_112a839c;
L_112a83c4:;
  /* 112a83c4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a83c7 jne 0x112a83cf */
  if (!C.zf) goto L_112a83cf;
  /* 112a83c9 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 112a83cd jmp 0x112a83d8 */
  goto L_112a83d8;
L_112a83cf:;
  /* 112a83cf cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a83d2 jne 0x112a83d8 */
  if (!C.zf) goto L_112a83d8;
  /* 112a83d4 or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_112a83d8:;
  /* 112a83d8 push esi */
  push32((uint32_t)(ESI));
  /* 112a83d9 push ebx */
  push32((uint32_t)(EBX));
  /* 112a83da call 0x112a7d3d */
  push32(0x112a83dfu); f_112a7d3d();
  /* 112a83df mov eax, ebx */
  EAX = (EBX);
  /* 112a83e1 pop ecx */
  ECX = (pop32());
  /* 112a83e2 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a83e5 pop ecx */
  ECX = (pop32());
  /* 112a83e6 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 112a83e9 lea edi, [eax*4 + 0x112af840] */
  EDI = ((uint32_t)(EAX*4 + 0x112af840));
  /* 112a83f0 mov eax, ebx */
  EAX = (EBX);
  /* 112a83f2 or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 112a83f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a83f8 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 112a83fb lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a83fe mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a8400 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a8403 and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 112a8407 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 112a840b jne 0x112a8485 */
  if (!C.zf) goto L_112a8485;
  /* 112a840d test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 112a8410 je 0x112a8485 */
  if (C.zf) goto L_112a8485;
  /* 112a8412 test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 112a8416 je 0x112a8485 */
  if (C.zf) goto L_112a8485;
  /* 112a8418 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a841a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a841c push ebx */
  push32((uint32_t)(EBX));
  /* 112a841d call 0x112a5b79 */
  push32(0x112a8422u); f_112a5b79();
  /* 112a8422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8425 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8428 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112a842b jne 0x112a8446 */
  if (!C.zf) goto L_112a8446;
  /* 112a842d call 0x112a58fb */
  push32(0x112a8432u); f_112a58fb();
  /* 112a8432 cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8438 je 0x112a8485 */
  if (C.zf) goto L_112a8485;
L_112a843a:;
  /* 112a843a push ebx */
  push32((uint32_t)(EBX));
  /* 112a843b call 0x112a4eac */
  push32(0x112a8440u); f_112a4eac();
  /* 112a8440 pop ecx */
  ECX = (pop32());
  /* 112a8441 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 112a8444 jmp 0x112a849e */
  goto L_112a849e;
L_112a8446:;
  /* 112a8446 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 112a844a lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 112a844d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a844f push eax */
  push32((uint32_t)(EAX));
  /* 112a8450 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8451 call 0x112a522f */
  push32(0x112a8456u); f_112a522f();
  /* 112a8456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a845b jne 0x112a8473 */
  if (!C.zf) goto L_112a8473;
  /* 112a845d cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8461 jne 0x112a8473 */
  if (!C.zf) goto L_112a8473;
  /* 112a8463 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 112a8466 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8467 call 0x112a90c8 */
  push32(0x112a846cu); f_112a90c8();
  /* 112a846c pop ecx */
  ECX = (pop32());
  /* 112a846d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8470 pop ecx */
  ECX = (pop32());
  /* 112a8471 je 0x112a843a */
  if (C.zf) goto L_112a843a;
L_112a8473:;
  /* 112a8473 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a8475 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a8477 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8478 call 0x112a5b79 */
  push32(0x112a847du); f_112a5b79();
  /* 112a847d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8480 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8483 je 0x112a843a */
  if (C.zf) goto L_112a843a;
L_112a8485:;
  /* 112a8485 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8489 jne 0x112a849c */
  if (!C.zf) goto L_112a849c;
  /* 112a848b test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 112a848f je 0x112a849c */
  if (C.zf) goto L_112a849c;
  /* 112a8491 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a8493 or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a8498 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_112a849c:;
  /* 112a849c mov esi, ebx */
  ESI = (EBX);
L_112a849e:;
  /* 112a849e push ebx */
  push32((uint32_t)(EBX));
  /* 112a849f call 0x112a7ed9 */
  push32(0x112a84a4u); f_112a7ed9();
  /* 112a84a4 pop ecx */
  ECX = (pop32());
  /* 112a84a5 mov eax, esi */
  EAX = (ESI);
L_112a84a7:;
  /* 112a84a7 pop edi */
  EDI = (pop32());
  /* 112a84a8 pop esi */
  ESI = (pop32());
  /* 112a84a9 pop ebx */
  EBX = (pop32());
  /* 112a84aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a84ab ret  */
  ESPCHK(0x112a81ddu, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x112a84b0 (7 bytes, 3 insns) */
void f_112a84b0(void) {
  FTRACE(0x112a84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a84b0 push edi */
  push32((uint32_t)(EDI));
  /* 112a84b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a84b5 jmp 0x112a8521 */
  jmp_ind(0x112a8521u); return;
}

/* FUN_100084c0 @ 0x112a84c0 (224 bytes, 84 insns) */
void f_112a84c0(void) {
  FTRACE(0x112a84c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a84c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a84c4 push edi */
  push32((uint32_t)(EDI));
  /* 112a84c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112a84cb je 0x112a84dc */
  if (C.zf) goto L_112a84dc;
L_112a84cd:;
  /* 112a84cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112a84cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a84d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a84d2 je 0x112a850f */
  if (C.zf) goto L_112a850f;
  /* 112a84d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112a84da jne 0x112a84cd */
  if (!C.zf) goto L_112a84cd;
L_112a84dc:;
  /* 112a84dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112a84de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112a84e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a84e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a84e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112a84ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a84ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112a84f2 je 0x112a84dc */
  if (C.zf) goto L_112a84dc;
  /* 112a84f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 112a84f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a84f9 je 0x112a851e */
  if (C.zf) goto L_112a851e;
  /* 112a84fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112a84fd je 0x112a8519 */
  if (C.zf) goto L_112a8519;
  /* 112a84ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 112a8504 je 0x112a8514 */
  if (C.zf) goto L_112a8514;
  /* 112a8506 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 112a850b je 0x112a850f */
  if (C.zf) goto L_112a850f;
  /* 112a850d jmp 0x112a84dc */
  goto L_112a84dc;
L_112a850f:;
  /* 112a850f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 112a8512 jmp 0x112a8521 */
  goto L_112a8521;
L_112a8514:;
  /* 112a8514 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 112a8517 jmp 0x112a8521 */
  goto L_112a8521;
L_112a8519:;
  /* 112a8519 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 112a851c jmp 0x112a8521 */
  goto L_112a8521;
L_112a851e:;
  /* 112a851e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_112a8521:;
  /* 112a8521 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112a8525 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112a852b je 0x112a8546 */
  if (C.zf) goto L_112a8546;
L_112a852d:;
  /* 112a852d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112a852f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a8530 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a8532 je 0x112a8598 */
  if (C.zf) goto L_112a8598;
  /* 112a8534 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112a8536 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a8537 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112a853d jne 0x112a852d */
  if (!C.zf) goto L_112a852d;
  /* 112a853f jmp 0x112a8546 */
  goto L_112a8546;
L_112a8541:;
  /* 112a8541 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112a8543 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112a8546:;
  /* 112a8546 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112a854b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112a854d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a854f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a8552 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8554 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112a8556 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8559 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112a855e je 0x112a8541 */
  if (C.zf) goto L_112a8541;
  /* 112a8560 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a8562 je 0x112a8598 */
  if (C.zf) goto L_112a8598;
  /* 112a8564 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112a8566 je 0x112a858f */
  if (C.zf) goto L_112a858f;
  /* 112a8568 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 112a856e je 0x112a8582 */
  if (C.zf) goto L_112a8582;
  /* 112a8570 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 112a8576 je 0x112a857a */
  if (C.zf) goto L_112a857a;
  /* 112a8578 jmp 0x112a8541 */
  goto L_112a8541;
L_112a857a:;
  /* 112a857a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112a857c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a8580 pop edi */
  EDI = (pop32());
  /* 112a8581 ret  */
  ESPCHK(0x112a84c0u, _esp0);
  ESP += 4; return;
L_112a8582:;
  /* 112a8582 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112a8585 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a8589 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 112a858d pop edi */
  EDI = (pop32());
  /* 112a858e ret  */
  ESPCHK(0x112a84c0u, _esp0);
  ESP += 4; return;
L_112a858f:;
  /* 112a858f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112a8592 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a8596 pop edi */
  EDI = (pop32());
  /* 112a8597 ret  */
  ESPCHK(0x112a84c0u, _esp0);
  ESP += 4; return;
L_112a8598:;
  /* 112a8598 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112a859a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a859e pop edi */
  EDI = (pop32());
  /* 112a859f ret  */
  ESPCHK(0x112a84c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x112a85a0 (123 bytes, 44 insns) */
void f_112a85a0(void) {
  FTRACE(0x112a85a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a85a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a85a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112a85aa je 0x112a85c0 */
  if (C.zf) goto L_112a85c0;
L_112a85ac:;
  /* 112a85ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112a85ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a85af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a85b1 je 0x112a85f3 */
  if (C.zf) goto L_112a85f3;
  /* 112a85b3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112a85b9 jne 0x112a85ac */
  if (!C.zf) goto L_112a85ac;
  /* 112a85bb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112a85c0:;
  /* 112a85c0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112a85c2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112a85c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a85c9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a85cc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112a85ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a85d1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112a85d6 je 0x112a85c0 */
  if (C.zf) goto L_112a85c0;
  /* 112a85d8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 112a85db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a85dd je 0x112a8611 */
  if (C.zf) goto L_112a8611;
  /* 112a85df test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112a85e1 je 0x112a8607 */
  if (C.zf) goto L_112a8607;
  /* 112a85e3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 112a85e8 je 0x112a85fd */
  if (C.zf) goto L_112a85fd;
  /* 112a85ea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 112a85ef je 0x112a85f3 */
  if (C.zf) goto L_112a85f3;
  /* 112a85f1 jmp 0x112a85c0 */
  goto L_112a85c0;
L_112a85f3:;
  /* 112a85f3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 112a85f6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a85fa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a85fc ret  */
  ESPCHK(0x112a85a0u, _esp0);
  ESP += 4; return;
L_112a85fd:;
  /* 112a85fd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 112a8600 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a8604 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8606 ret  */
  ESPCHK(0x112a85a0u, _esp0);
  ESP += 4; return;
L_112a8607:;
  /* 112a8607 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 112a860a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a860e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8610 ret  */
  ESPCHK(0x112a85a0u, _esp0);
  ESP += 4; return;
L_112a8611:;
  /* 112a8611 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 112a8614 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a8618 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a861a ret  */
  ESPCHK(0x112a85a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000861b @ 0x112a861b (429 bytes, 143 insns) */
void f_112a861b(void) {
  FTRACE(0x112a861bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a861b push ebp */
  push32((uint32_t)(EBP));
  /* 112a861c mov ebp, esp */
  EBP = (ESP);
  /* 112a861e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8621 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8622 push esi */
  push32((uint32_t)(ESI));
  /* 112a8623 push edi */
  push32((uint32_t)(EDI));
  /* 112a8624 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112a8626 call 0x112a7816 */
  push32(0x112a862bu); f_112a7816();
  /* 112a862b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a862e call 0x112a87c8 */
  push32(0x112a8633u); f_112a87c8();
  /* 112a8633 mov ebx, eax */
  EBX = (EAX);
  /* 112a8635 pop ecx */
  ECX = (pop32());
  /* 112a8636 cmp ebx, dword ptr [0x112af5d0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x112af5d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a863c pop ecx */
  ECX = (pop32());
  /* 112a863d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a8640 jne 0x112a8649 */
  if (!C.zf) goto L_112a8649;
L_112a8642:;
  /* 112a8642 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a8644 jmp 0x112a87b9 */
  goto L_112a87b9;
L_112a8649:;
  /* 112a8649 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a864b je 0x112a87a7 */
  if (C.zf) goto L_112a87a7;
  /* 112a8651 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8653 mov eax, 0x112adc88 */
  EAX = (0x112adc88u);
L_112a8658:;
  /* 112a8658 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a865a je 0x112a86d0 */
  if (C.zf) goto L_112a86d0;
  /* 112a865c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a865f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a8660 cmp eax, 0x112add78 */
  { uint32_t _a=(EAX),_b=(0x112add78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8665 jl 0x112a8658 */
  if ((C.sf!=C.of)) goto L_112a8658;
  /* 112a8667 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 112a866a push eax */
  push32((uint32_t)(EAX));
  /* 112a866b push ebx */
  push32((uint32_t)(EBX));
  /* 112a866c call dword ptr [0x112aa038] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa038))), 0x112a8672u);
  /* 112a8672 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a8674 pop esi */
  ESI = (pop32());
  /* 112a8675 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8677 jne 0x112a879e */
  if (!C.zf) goto L_112a879e;
  /* 112a867d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a867f and dword ptr [0x112af804], 0 */
  { uint32_t _r=(r32((uint32_t)(0x112af804)))&(0x0u); w32((uint32_t)(0x112af804), (_r)); fl_logic(_r,32); }
  /* 112a8686 pop ecx */
  ECX = (pop32());
  /* 112a8687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8689 mov edi, 0x112af700 */
  EDI = (0x112af700u);
  /* 112a868e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8691 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112a8693 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112a8694 mov dword ptr [0x112af5d0], ebx */
  w32((uint32_t)(0x112af5d0), (EBX));
  /* 112a869a jbe 0x112a878b */
  if ((C.cf||C.zf)) goto L_112a878b;
  /* 112a86a0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a86a4 je 0x112a8766 */
  if (C.zf) goto L_112a8766;
  /* 112a86aa lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_112a86ad:;
  /* 112a86ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112a86af test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a86b1 je 0x112a8766 */
  if (C.zf) goto L_112a8766;
  /* 112a86b7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 112a86bb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_112a86be:;
  /* 112a86be cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a86c0 ja 0x112a875a */
  if ((!C.cf&&!C.zf)) goto L_112a875a;
  /* 112a86c6 or byte ptr [eax + 0x112af701], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(0x4u); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a86cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a86ce jmp 0x112a86be */
  goto L_112a86be;
L_112a86d0:;
  /* 112a86d0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a86d4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a86d6 pop ecx */
  ECX = (pop32());
  /* 112a86d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a86d9 mov edi, 0x112af700 */
  EDI = (0x112af700u);
  /* 112a86de lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 112a86e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112a86e3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 112a86e6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112a86e7 lea ebx, [esi + 0x112adc98] */
  EBX = ((uint32_t)(ESI + 0x112adc98));
L_112a86ed:;
  /* 112a86ed cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a86f0 mov ecx, ebx */
  ECX = (EBX);
  /* 112a86f2 je 0x112a8720 */
  if (C.zf) goto L_112a8720;
L_112a86f4:;
  /* 112a86f4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112a86f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a86f9 je 0x112a8720 */
  if (C.zf) goto L_112a8720;
  /* 112a86fb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 112a86fe movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 112a8701 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8703 ja 0x112a8719 */
  if ((!C.cf&&!C.zf)) goto L_112a8719;
  /* 112a8705 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a8708 mov dl, byte ptr [edx + 0x112adc80] */
  DL = (r8((uint32_t)(EDX + 0x112adc80)));
L_112a870e:;
  /* 112a870e or byte ptr [eax + 0x112af701], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(DL); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a8714 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a8715 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8717 jbe 0x112a870e */
  if ((C.cf||C.zf)) goto L_112a870e;
L_112a8719:;
  /* 112a8719 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a871a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a871b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a871e jne 0x112a86f4 */
  if (!C.zf) goto L_112a86f4;
L_112a8720:;
  /* 112a8720 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 112a8723 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8726 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a872a jb 0x112a86ed */
  if (C.cf) goto L_112a86ed;
  /* 112a872c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a872f mov dword ptr [0x112af5ec], 1 */
  w32((uint32_t)(0x112af5ec), (0x1u));
  /* 112a8739 push eax */
  push32((uint32_t)(EAX));
  /* 112a873a mov dword ptr [0x112af5d0], eax */
  w32((uint32_t)(0x112af5d0), (EAX));
  /* 112a873f call 0x112a8812 */
  push32(0x112a8744u); f_112a8812();
  /* 112a8744 lea esi, [esi + 0x112adc8c] */
  ESI = ((uint32_t)(ESI + 0x112adc8c));
  /* 112a874a mov edi, 0x112af5e0 */
  EDI = (0x112af5e0u);
  /* 112a874f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 112a8750 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 112a8751 pop ecx */
  ECX = (pop32());
  /* 112a8752 mov dword ptr [0x112af804], eax */
  w32((uint32_t)(0x112af804), (EAX));
  /* 112a8757 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 112a8758 jmp 0x112a87ac */
  goto L_112a87ac;
L_112a875a:;
  /* 112a875a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a875b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a875c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8760 jne 0x112a86ad */
  if (!C.zf) goto L_112a86ad;
L_112a8766:;
  /* 112a8766 mov eax, esi */
  EAX = (ESI);
L_112a8768:;
  /* 112a8768 or byte ptr [eax + 0x112af701], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(0x8u); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a876f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a8770 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8775 jb 0x112a8768 */
  if (C.cf) goto L_112a8768;
  /* 112a8777 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8778 call 0x112a8812 */
  push32(0x112a877du); f_112a8812();
  /* 112a877d pop ecx */
  ECX = (pop32());
  /* 112a877e mov dword ptr [0x112af804], eax */
  w32((uint32_t)(0x112af804), (EAX));
  /* 112a8783 mov dword ptr [0x112af5ec], esi */
  w32((uint32_t)(0x112af5ec), (ESI));
  /* 112a8789 jmp 0x112a8792 */
  goto L_112a8792;
L_112a878b:;
  /* 112a878b and dword ptr [0x112af5ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x112af5ec)))&(0x0u); w32((uint32_t)(0x112af5ec), (_r)); fl_logic(_r,32); }
L_112a8792:;
  /* 112a8792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8794 mov edi, 0x112af5e0 */
  EDI = (0x112af5e0u);
  /* 112a8799 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112a879a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112a879b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112a879c jmp 0x112a87ac */
  goto L_112a87ac;
L_112a879e:;
  /* 112a879e cmp dword ptr [0x112af444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a87a5 je 0x112a87b6 */
  if (C.zf) goto L_112a87b6;
L_112a87a7:;
  /* 112a87a7 call 0x112a8845 */
  push32(0x112a87acu); f_112a8845();
L_112a87ac:;
  /* 112a87ac call 0x112a886e */
  push32(0x112a87b1u); f_112a886e();
  /* 112a87b1 jmp 0x112a8642 */
  goto L_112a8642;
L_112a87b6:;
  /* 112a87b6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_112a87b9:;
  /* 112a87b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112a87bb call 0x112a7877 */
  push32(0x112a87c0u); f_112a7877();
  /* 112a87c0 pop ecx */
  ECX = (pop32());
  /* 112a87c1 mov eax, esi */
  EAX = (ESI);
  /* 112a87c3 pop edi */
  EDI = (pop32());
  /* 112a87c4 pop esi */
  ESI = (pop32());
  /* 112a87c5 pop ebx */
  EBX = (pop32());
  /* 112a87c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a87c7 ret  */
  ESPCHK(0x112a861bu, _esp0);
  ESP += 4; return;
}

/* FUN_100087c8 @ 0x112a87c8 (74 bytes, 15 insns) */
void f_112a87c8(void) {
  FTRACE(0x112a87c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a87c8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a87cc and dword ptr [0x112af444], 0 */
  { uint32_t _r=(r32((uint32_t)(0x112af444)))&(0x0u); w32((uint32_t)(0x112af444), (_r)); fl_logic(_r,32); }
  /* 112a87d3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a87d6 jne 0x112a87e8 */
  if (!C.zf) goto L_112a87e8;
  /* 112a87d8 mov dword ptr [0x112af444], 1 */
  w32((uint32_t)(0x112af444), (0x1u));
  /* 112a87e2 jmp dword ptr [0x112aa030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112aa030)))); return;
L_112a87e8:;
  /* 112a87e8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a87eb jne 0x112a87fd */
  if (!C.zf) goto L_112a87fd;
  /* 112a87ed mov dword ptr [0x112af444], 1 */
  w32((uint32_t)(0x112af444), (0x1u));
  /* 112a87f7 jmp dword ptr [0x112aa034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112aa034)))); return;
L_112a87fd:;
  /* 112a87fd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8800 jne 0x112a8811 */
  if (!C.zf) goto L_112a8811;
  /* 112a8802 mov eax, dword ptr [0x112af470] */
  EAX = (r32((uint32_t)(0x112af470)));
  /* 112a8807 mov dword ptr [0x112af444], 1 */
  w32((uint32_t)(0x112af444), (0x1u));
L_112a8811:;
  /* 112a8811 ret  */
  ESPCHK(0x112a87c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008812 @ 0x112a8812 (51 bytes, 19 insns) */
void f_112a8812(void) {
  FTRACE(0x112a8812u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8812 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a8816 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a881b je 0x112a883f */
  if (C.zf) goto L_112a883f;
  /* 112a881d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8820 je 0x112a8839 */
  if (C.zf) goto L_112a8839;
  /* 112a8822 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8825 je 0x112a8833 */
  if (C.zf) goto L_112a8833;
  /* 112a8827 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a8828 je 0x112a882d */
  if (C.zf) goto L_112a882d;
  /* 112a882a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a882c ret  */
  ESPCHK(0x112a8812u, _esp0);
  ESP += 4; return;
L_112a882d:;
  /* 112a882d mov eax, 0x404 */
  EAX = (0x404u);
  /* 112a8832 ret  */
  ESPCHK(0x112a8812u, _esp0);
  ESP += 4; return;
L_112a8833:;
  /* 112a8833 mov eax, 0x412 */
  EAX = (0x412u);
  /* 112a8838 ret  */
  ESPCHK(0x112a8812u, _esp0);
  ESP += 4; return;
L_112a8839:;
  /* 112a8839 mov eax, 0x804 */
  EAX = (0x804u);
  /* 112a883e ret  */
  ESPCHK(0x112a8812u, _esp0);
  ESP += 4; return;
L_112a883f:;
  /* 112a883f mov eax, 0x411 */
  EAX = (0x411u);
  /* 112a8844 ret  */
  ESPCHK(0x112a8812u, _esp0);
  ESP += 4; return;
}

/* FUN_10008845 @ 0x112a8845 (41 bytes, 17 insns) */
void f_112a8845(void) {
  FTRACE(0x112a8845u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8845 push edi */
  push32((uint32_t)(EDI));
  /* 112a8846 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a8848 pop ecx */
  ECX = (pop32());
  /* 112a8849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a884b mov edi, 0x112af700 */
  EDI = (0x112af700u);
  /* 112a8850 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112a8852 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112a8853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8855 mov edi, 0x112af5e0 */
  EDI = (0x112af5e0u);
  /* 112a885a mov dword ptr [0x112af5d0], eax */
  w32((uint32_t)(0x112af5d0), (EAX));
  /* 112a885f mov dword ptr [0x112af5ec], eax */
  w32((uint32_t)(0x112af5ec), (EAX));
  /* 112a8864 mov dword ptr [0x112af804], eax */
  w32((uint32_t)(0x112af804), (EAX));
  /* 112a8869 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112a886a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112a886b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112a886c pop edi */
  EDI = (pop32());
  /* 112a886d ret  */
  ESPCHK(0x112a8845u, _esp0);
  ESP += 4; return;
}

/* FUN_1000886e @ 0x112a886e (389 bytes, 124 insns) */
void f_112a886e(void) {
  FTRACE(0x112a886eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a886e push ebp */
  push32((uint32_t)(EBP));
  /* 112a886f mov ebp, esp */
  EBP = (ESP);
  /* 112a8871 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8877 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 112a887a push esi */
  push32((uint32_t)(ESI));
  /* 112a887b push eax */
  push32((uint32_t)(EAX));
  /* 112a887c push dword ptr [0x112af5d0] */
  push32((uint32_t)(r32((uint32_t)(0x112af5d0))));
  /* 112a8882 call dword ptr [0x112aa038] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa038))), 0x112a8888u);
  /* 112a8888 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a888b jne 0x112a89a7 */
  if (!C.zf) goto L_112a89a7;
  /* 112a8891 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8893 mov esi, 0x100 */
  ESI = (0x100u);
L_112a8898:;
  /* 112a8898 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 112a889f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a88a0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a88a2 jb 0x112a8898 */
  if (C.cf) goto L_112a8898;
  /* 112a88a4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 112a88a7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 112a88ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a88b0 je 0x112a88e9 */
  if (C.zf) goto L_112a88e9;
  /* 112a88b2 push ebx */
  push32((uint32_t)(EBX));
  /* 112a88b3 push edi */
  push32((uint32_t)(EDI));
  /* 112a88b4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_112a88b7:;
  /* 112a88b7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 112a88ba movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 112a88bd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a88bf ja 0x112a88de */
  if ((!C.cf&&!C.zf)) goto L_112a88de;
  /* 112a88c1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a88c3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 112a88ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a88cb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 112a88d0 mov ebx, ecx */
  EBX = (ECX);
  /* 112a88d2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a88d5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112a88d7 mov ecx, ebx */
  ECX = (EBX);
  /* 112a88d9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a88dc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_112a88de:;
  /* 112a88de inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a88df inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a88e0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 112a88e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a88e5 jne 0x112a88b7 */
  if (!C.zf) goto L_112a88b7;
  /* 112a88e7 pop edi */
  EDI = (pop32());
  /* 112a88e8 pop ebx */
  EBX = (pop32());
L_112a88e9:;
  /* 112a88e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a88eb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 112a88f1 push dword ptr [0x112af804] */
  push32((uint32_t)(r32((uint32_t)(0x112af804))));
  /* 112a88f7 push dword ptr [0x112af5d0] */
  push32((uint32_t)(r32((uint32_t)(0x112af5d0))));
  /* 112a88fd push eax */
  push32((uint32_t)(EAX));
  /* 112a88fe lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 112a8904 push esi */
  push32((uint32_t)(ESI));
  /* 112a8905 push eax */
  push32((uint32_t)(EAX));
  /* 112a8906 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a8908 call 0x112a943c */
  push32(0x112a890du); f_112a943c();
  /* 112a890d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a890f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 112a8915 push dword ptr [0x112af5d0] */
  push32((uint32_t)(r32((uint32_t)(0x112af5d0))));
  /* 112a891b push esi */
  push32((uint32_t)(ESI));
  /* 112a891c push eax */
  push32((uint32_t)(EAX));
  /* 112a891d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 112a8923 push esi */
  push32((uint32_t)(ESI));
  /* 112a8924 push eax */
  push32((uint32_t)(EAX));
  /* 112a8925 push esi */
  push32((uint32_t)(ESI));
  /* 112a8926 push dword ptr [0x112af804] */
  push32((uint32_t)(r32((uint32_t)(0x112af804))));
  /* 112a892c call 0x112a91ed */
  push32(0x112a8931u); f_112a91ed();
  /* 112a8931 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a8933 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 112a8939 push dword ptr [0x112af5d0] */
  push32((uint32_t)(r32((uint32_t)(0x112af5d0))));
  /* 112a893f push esi */
  push32((uint32_t)(ESI));
  /* 112a8940 push eax */
  push32((uint32_t)(EAX));
  /* 112a8941 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 112a8947 push esi */
  push32((uint32_t)(ESI));
  /* 112a8948 push eax */
  push32((uint32_t)(EAX));
  /* 112a8949 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 112a894e push dword ptr [0x112af804] */
  push32((uint32_t)(r32((uint32_t)(0x112af804))));
  /* 112a8954 call 0x112a91ed */
  push32(0x112a8959u); f_112a91ed();
  /* 112a8959 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a895c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a895e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_112a8964:;
  /* 112a8964 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112a8967 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 112a896a je 0x112a8982 */
  if (C.zf) goto L_112a8982;
  /* 112a896c or byte ptr [eax + 0x112af701], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(0x10u); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a8973 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_112a897a:;
  /* 112a897a mov byte ptr [eax + 0x112af600], dl */
  w8((uint32_t)(EAX + 0x112af600), (DL));
  /* 112a8980 jmp 0x112a899e */
  goto L_112a899e;
L_112a8982:;
  /* 112a8982 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 112a8985 je 0x112a8997 */
  if (C.zf) goto L_112a8997;
  /* 112a8987 or byte ptr [eax + 0x112af701], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(0x20u); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a898e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 112a8995 jmp 0x112a897a */
  goto L_112a897a;
L_112a8997:;
  /* 112a8997 and byte ptr [eax + 0x112af600], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af600)))&(0x0u); w8((uint32_t)(EAX + 0x112af600), (_r)); fl_logic(_r,8); }
L_112a899e:;
  /* 112a899e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a899f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a89a0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a89a1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89a3 jb 0x112a8964 */
  if (C.cf) goto L_112a8964;
  /* 112a89a5 jmp 0x112a89f0 */
  goto L_112a89f0;
L_112a89a7:;
  /* 112a89a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a89a9 mov esi, 0x100 */
  ESI = (0x100u);
L_112a89ae:;
  /* 112a89ae cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89b1 jb 0x112a89cc */
  if (C.cf) goto L_112a89cc;
  /* 112a89b3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89b6 ja 0x112a89cc */
  if ((!C.cf&&!C.zf)) goto L_112a89cc;
  /* 112a89b8 or byte ptr [eax + 0x112af701], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(0x10u); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a89bf mov cl, al */
  CL = (AL);
  /* 112a89c1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_112a89c4:;
  /* 112a89c4 mov byte ptr [eax + 0x112af600], cl */
  w8((uint32_t)(EAX + 0x112af600), (CL));
  /* 112a89ca jmp 0x112a89eb */
  goto L_112a89eb;
L_112a89cc:;
  /* 112a89cc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89cf jb 0x112a89e4 */
  if (C.cf) goto L_112a89e4;
  /* 112a89d1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89d4 ja 0x112a89e4 */
  if ((!C.cf&&!C.zf)) goto L_112a89e4;
  /* 112a89d6 or byte ptr [eax + 0x112af701], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af701)))|(0x20u); w8((uint32_t)(EAX + 0x112af701), (_r)); fl_logic(_r,8); }
  /* 112a89dd mov cl, al */
  CL = (AL);
  /* 112a89df sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a89e2 jmp 0x112a89c4 */
  goto L_112a89c4;
L_112a89e4:;
  /* 112a89e4 and byte ptr [eax + 0x112af600], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x112af600)))&(0x0u); w8((uint32_t)(EAX + 0x112af600), (_r)); fl_logic(_r,8); }
L_112a89eb:;
  /* 112a89eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a89ec cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89ee jb 0x112a89ae */
  if (C.cf) goto L_112a89ae;
L_112a89f0:;
  /* 112a89f0 pop esi */
  ESI = (pop32());
  /* 112a89f1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a89f2 ret  */
  ESPCHK(0x112a886eu, _esp0);
  ESP += 4; return;
}

/* FUN_100089f3 @ 0x112a89f3 (28 bytes, 7 insns) */
void f_112a89f3(void) {
  FTRACE(0x112a89f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a89f3 cmp dword ptr [0x112af830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a89fa jne 0x112a8a0e */
  if (!C.zf) goto L_112a8a0e;
  /* 112a89fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 112a89fe call 0x112a861b */
  push32(0x112a8a03u); f_112a861b();
  /* 112a8a03 pop ecx */
  ECX = (pop32());
  /* 112a8a04 mov dword ptr [0x112af830], 1 */
  w32((uint32_t)(0x112af830), (0x1u));
L_112a8a0e:;
  /* 112a8a0e ret  */
  ESPCHK(0x112a89f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a0f @ 0x112a8a0f (23 bytes, 7 insns) */
void f_112a8a0f(void) {
  FTRACE(0x112a8a0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a8a11 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 112a8a15 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 112a8a19 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 112a8a1d call 0x112a8a26 */
  push32(0x112a8a22u); f_112a8a26();
  /* 112a8a22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8a25 ret  */
  ESPCHK(0x112a8a0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008a26 @ 0x112a8a26 (517 bytes, 195 insns) */
void f_112a8a26(void) {
  FTRACE(0x112a8a26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8a26 push ebp */
  push32((uint32_t)(EBP));
  /* 112a8a27 mov ebp, esp */
  EBP = (ESP);
  /* 112a8a29 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8a2c push ebx */
  push32((uint32_t)(EBX));
  /* 112a8a2d and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a8a31 push esi */
  push32((uint32_t)(ESI));
  /* 112a8a32 push edi */
  push32((uint32_t)(EDI));
  /* 112a8a33 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8a36 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 112a8a38 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 112a8a3b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_112a8a3e:;
  /* 112a8a3e cmp dword ptr [0x112adf8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112adf8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8a45 jle 0x112a8a56 */
  if ((C.zf||C.sf!=C.of)) goto L_112a8a56;
  /* 112a8a47 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 112a8a4a push 8 */
  push32((uint32_t)(0x8u));
  /* 112a8a4c push eax */
  push32((uint32_t)(EAX));
  /* 112a8a4d call 0x112a96c0 */
  push32(0x112a8a52u); f_112a96c0();
  /* 112a8a52 pop ecx */
  ECX = (pop32());
  /* 112a8a53 pop ecx */
  ECX = (pop32());
  /* 112a8a54 jmp 0x112a8a65 */
  goto L_112a8a65;
L_112a8a56:;
  /* 112a8a56 mov ecx, dword ptr [0x112add80] */
  ECX = (r32((uint32_t)(0x112add80)));
  /* 112a8a5c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 112a8a5f mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 112a8a62 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_112a8a65:;
  /* 112a8a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8a67 je 0x112a8a6e */
  if (C.zf) goto L_112a8a6e;
  /* 112a8a69 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 112a8a6b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a8a6c jmp 0x112a8a3e */
  goto L_112a8a3e;
L_112a8a6e:;
  /* 112a8a6e cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8a71 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 112a8a74 jne 0x112a8a7c */
  if (!C.zf) goto L_112a8a7c;
  /* 112a8a76 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 112a8a7a jmp 0x112a8a81 */
  goto L_112a8a81;
L_112a8a7c:;
  /* 112a8a7c cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8a7f jne 0x112a8a87 */
  if (!C.zf) goto L_112a8a87;
L_112a8a81:;
  /* 112a8a81 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 112a8a83 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a8a84 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_112a8a87:;
  /* 112a8a87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a8a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8a8c jl 0x112a8c1b */
  if ((C.sf!=C.of)) goto L_112a8c1b;
  /* 112a8a92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8a95 je 0x112a8c1b */
  if (C.zf) goto L_112a8c1b;
  /* 112a8a9b cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8a9e jg 0x112a8c1b */
  if ((!C.zf&&C.sf==C.of)) goto L_112a8c1b;
  /* 112a8aa4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a8aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8aa8 pop ecx */
  ECX = (pop32());
  /* 112a8aa9 jne 0x112a8acf */
  if (!C.zf) goto L_112a8acf;
  /* 112a8aab cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8aae je 0x112a8ab9 */
  if (C.zf) goto L_112a8ab9;
  /* 112a8ab0 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 112a8ab7 jmp 0x112a8aeb */
  goto L_112a8aeb;
L_112a8ab9:;
  /* 112a8ab9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8abb cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8abd je 0x112a8acc */
  if (C.zf) goto L_112a8acc;
  /* 112a8abf cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8ac1 je 0x112a8acc */
  if (C.zf) goto L_112a8acc;
  /* 112a8ac3 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 112a8aca jmp 0x112a8aeb */
  goto L_112a8aeb;
L_112a8acc:;
  /* 112a8acc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_112a8acf:;
  /* 112a8acf cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8ad2 jne 0x112a8aeb */
  if (!C.zf) goto L_112a8aeb;
  /* 112a8ad4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8ad7 jne 0x112a8aeb */
  if (!C.zf) goto L_112a8aeb;
  /* 112a8ad9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8adb cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8add je 0x112a8ae3 */
  if (C.zf) goto L_112a8ae3;
  /* 112a8adf cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8ae1 jne 0x112a8aeb */
  if (!C.zf) goto L_112a8aeb;
L_112a8ae3:;
  /* 112a8ae3 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a8ae6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a8ae7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a8ae8 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_112a8aeb:;
  /* 112a8aeb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a8aee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8af0 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a8af3 mov edi, 0x103 */
  EDI = (0x103u);
  /* 112a8af8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112a8afb:;
  /* 112a8afb cmp dword ptr [0x112adf8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112adf8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8b02 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 112a8b05 jle 0x112a8b13 */
  if ((C.zf||C.sf!=C.of)) goto L_112a8b13;
  /* 112a8b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a8b09 push esi */
  push32((uint32_t)(ESI));
  /* 112a8b0a call 0x112a96c0 */
  push32(0x112a8b0fu); f_112a96c0();
  /* 112a8b0f pop ecx */
  ECX = (pop32());
  /* 112a8b10 pop ecx */
  ECX = (pop32());
  /* 112a8b11 jmp 0x112a8b1e */
  goto L_112a8b1e;
L_112a8b13:;
  /* 112a8b13 mov eax, dword ptr [0x112add80] */
  EAX = (r32((uint32_t)(0x112add80)));
  /* 112a8b18 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 112a8b1b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_112a8b1e:;
  /* 112a8b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8b20 je 0x112a8b2a */
  if (C.zf) goto L_112a8b2a;
  /* 112a8b22 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 112a8b25 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8b28 jmp 0x112a8b5c */
  goto L_112a8b5c;
L_112a8b2a:;
  /* 112a8b2a cmp dword ptr [0x112adf8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112adf8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8b31 jle 0x112a8b3e */
  if ((C.zf||C.sf!=C.of)) goto L_112a8b3e;
  /* 112a8b33 push edi */
  push32((uint32_t)(EDI));
  /* 112a8b34 push esi */
  push32((uint32_t)(ESI));
  /* 112a8b35 call 0x112a96c0 */
  push32(0x112a8b3au); f_112a96c0();
  /* 112a8b3a pop ecx */
  ECX = (pop32());
  /* 112a8b3b pop ecx */
  ECX = (pop32());
  /* 112a8b3c jmp 0x112a8b49 */
  goto L_112a8b49;
L_112a8b3e:;
  /* 112a8b3e mov eax, dword ptr [0x112add80] */
  EAX = (r32((uint32_t)(0x112add80)));
  /* 112a8b43 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 112a8b47 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_112a8b49:;
  /* 112a8b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8b4b je 0x112a8b97 */
  if (C.zf) goto L_112a8b97;
  /* 112a8b4d movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 112a8b50 push eax */
  push32((uint32_t)(EAX));
  /* 112a8b51 call 0x112a9585 */
  push32(0x112a8b56u); f_112a9585();
  /* 112a8b56 pop ecx */
  ECX = (pop32());
  /* 112a8b57 mov ecx, eax */
  ECX = (EAX);
  /* 112a8b59 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_112a8b5c:;
  /* 112a8b5c cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8b5f jae 0x112a8b97 */
  if (!C.cf) goto L_112a8b97;
  /* 112a8b61 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 112a8b64 or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 112a8b68 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8b6b jb 0x112a8b81 */
  if (C.cf) goto L_112a8b81;
  /* 112a8b6d jne 0x112a8b7b */
  if (!C.zf) goto L_112a8b7b;
  /* 112a8b6f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a8b72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8b74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a8b77 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8b79 jbe 0x112a8b81 */
  if ((C.cf||C.zf)) goto L_112a8b81;
L_112a8b7b:;
  /* 112a8b7b or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 112a8b7f jmp 0x112a8b8a */
  goto L_112a8b8a;
L_112a8b81:;
  /* 112a8b81 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a8b85 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8b87 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_112a8b8a:;
  /* 112a8b8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a8b8d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 112a8b90 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 112a8b92 jmp 0x112a8afb */
  goto L_112a8afb;
L_112a8b97:;
  /* 112a8b97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112a8b9a dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 112a8b9d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a8ba0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 112a8ba2 jne 0x112a8bb4 */
  if (!C.zf) goto L_112a8bb4;
  /* 112a8ba4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a8ba6 je 0x112a8bae */
  if (C.zf) goto L_112a8bae;
  /* 112a8ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8bab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112a8bae:;
  /* 112a8bae and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a8bb2 jmp 0x112a8bff */
  goto L_112a8bff;
L_112a8bb4:;
  /* 112a8bb4 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 112a8bb6 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 112a8bbb jne 0x112a8bd8 */
  if (!C.zf) goto L_112a8bd8;
  /* 112a8bbd test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 112a8bbf jne 0x112a8bff */
  if (!C.zf) goto L_112a8bff;
  /* 112a8bc1 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 112a8bc4 je 0x112a8bcf */
  if (C.zf) goto L_112a8bcf;
  /* 112a8bc6 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8bcd ja 0x112a8bd8 */
  if ((!C.cf&&!C.zf)) goto L_112a8bd8;
L_112a8bcf:;
  /* 112a8bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8bd1 jne 0x112a8bff */
  if (!C.zf) goto L_112a8bff;
  /* 112a8bd3 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8bd6 jbe 0x112a8bff */
  if ((C.cf||C.zf)) goto L_112a8bff;
L_112a8bd8:;
  /* 112a8bd8 call 0x112a58f2 */
  push32(0x112a8bddu); f_112a58f2();
  /* 112a8bdd test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 112a8be1 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 112a8be7 je 0x112a8bef */
  if (C.zf) goto L_112a8bef;
  /* 112a8be9 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a8bed jmp 0x112a8bff */
  goto L_112a8bff;
L_112a8bef:;
  /* 112a8bef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112a8bf2 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 112a8bf4 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 112a8bf6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8bf8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a8bfa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8bfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112a8bff:;
  /* 112a8bff test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a8c01 je 0x112a8c08 */
  if (C.zf) goto L_112a8c08;
  /* 112a8c03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a8c06 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_112a8c08:;
  /* 112a8c08 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 112a8c0c je 0x112a8c16 */
  if (C.zf) goto L_112a8c16;
  /* 112a8c0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a8c11 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a8c13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112a8c16:;
  /* 112a8c16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a8c19 jmp 0x112a8c26 */
  goto L_112a8c26;
L_112a8c1b:;
  /* 112a8c1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a8c1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8c20 je 0x112a8c24 */
  if (C.zf) goto L_112a8c24;
  /* 112a8c22 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_112a8c24:;
  /* 112a8c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a8c26:;
  /* 112a8c26 pop edi */
  EDI = (pop32());
  /* 112a8c27 pop esi */
  ESI = (pop32());
  /* 112a8c28 pop ebx */
  EBX = (pop32());
  /* 112a8c29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a8c2a ret  */
  ESPCHK(0x112a8a26u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x112a8c30 (56 bytes, 31 insns) */
void f_112a8c30(void) {
  FTRACE(0x112a8c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8c30 push ebp */
  push32((uint32_t)(EBP));
  /* 112a8c31 mov ebp, esp */
  EBP = (ESP);
  /* 112a8c33 push edi */
  push32((uint32_t)(EDI));
  /* 112a8c34 push esi */
  push32((uint32_t)(ESI));
  /* 112a8c35 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8c36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a8c39 jecxz 0x112a8c61 */
  x86_unimpl("jecxz @ 0x112a8c39");
  /* 112a8c3b mov ebx, ecx */
  EBX = (ECX);
  /* 112a8c3d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8c40 mov esi, edi */
  ESI = (EDI);
  /* 112a8c42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8c44 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a8c46 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a8c48 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8c4a mov edi, esi */
  EDI = (ESI);
  /* 112a8c4c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a8c4f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 112a8c51 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 112a8c54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a8c56 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a8c59 ja 0x112a8c5f */
  if ((!C.cf&&!C.zf)) goto L_112a8c5f;
  /* 112a8c5b je 0x112a8c61 */
  if (C.zf) goto L_112a8c61;
  /* 112a8c5d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a8c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_112a8c5f:;
  /* 112a8c5f not ecx */
  ECX = (~(ECX));
L_112a8c61:;
  /* 112a8c61 mov eax, ecx */
  EAX = (ECX);
  /* 112a8c63 pop ebx */
  EBX = (pop32());
  /* 112a8c64 pop esi */
  ESI = (pop32());
  /* 112a8c65 pop edi */
  EDI = (pop32());
  /* 112a8c66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a8c67 ret  */
  ESPCHK(0x112a8c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c70 @ 0x112a8c70 (47 bytes, 17 insns) */
void f_112a8c70(void) {
  FTRACE(0x112a8c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8c70 push ecx */
  push32((uint32_t)(ECX));
  /* 112a8c71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8c76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 112a8c7a jb 0x112a8c90 */
  if (C.cf) goto L_112a8c90;
L_112a8c7c:;
  /* 112a8c7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8c82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8c87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 112a8c89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8c8e jae 0x112a8c7c */
  if (!C.cf) goto L_112a8c7c;
L_112a8c90:;
  /* 112a8c90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8c92 mov eax, esp */
  EAX = (ESP);
  /* 112a8c94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 112a8c96 mov esp, ecx */
  ESP = (ECX);
  /* 112a8c98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112a8c9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 112a8c9d push eax */
  push32((uint32_t)(EAX));
  /* 112a8c9e ret  */
  ESPCHK(0x112a8c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c9f @ 0x112a8c9f (137 bytes, 50 insns) */
void f_112a8c9f(void) {
  FTRACE(0x112a8c9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8c9f push ebx */
  push32((uint32_t)(EBX));
  /* 112a8ca0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a8ca2 cmp dword ptr [0x112af448], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af448))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8ca8 push esi */
  push32((uint32_t)(ESI));
  /* 112a8ca9 push edi */
  push32((uint32_t)(EDI));
  /* 112a8caa jne 0x112a8cee */
  if (!C.zf) goto L_112a8cee;
  /* 112a8cac push 0x112aa540 */
  push32((uint32_t)(0x112aa540u));
  /* 112a8cb1 call dword ptr [0x112aa028] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa028))), 0x112a8cb7u);
  /* 112a8cb7 mov edi, eax */
  EDI = (EAX);
  /* 112a8cb9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8cbb je 0x112a8d24 */
  if (C.zf) goto L_112a8d24;
  /* 112a8cbd mov esi, dword ptr [0x112aa02c] */
  ESI = (r32((uint32_t)(0x112aa02c)));
  /* 112a8cc3 push 0x112aa534 */
  push32((uint32_t)(0x112aa534u));
  /* 112a8cc8 push edi */
  push32((uint32_t)(EDI));
  /* 112a8cc9 call esi */
  call_ind((uint32_t)(ESI), 0x112a8ccbu);
  /* 112a8ccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8ccd mov dword ptr [0x112af448], eax */
  w32((uint32_t)(0x112af448), (EAX));
  /* 112a8cd2 je 0x112a8d24 */
  if (C.zf) goto L_112a8d24;
  /* 112a8cd4 push 0x112aa524 */
  push32((uint32_t)(0x112aa524u));
  /* 112a8cd9 push edi */
  push32((uint32_t)(EDI));
  /* 112a8cda call esi */
  call_ind((uint32_t)(ESI), 0x112a8cdcu);
  /* 112a8cdc push 0x112aa510 */
  push32((uint32_t)(0x112aa510u));
  /* 112a8ce1 push edi */
  push32((uint32_t)(EDI));
  /* 112a8ce2 mov dword ptr [0x112af44c], eax */
  w32((uint32_t)(0x112af44c), (EAX));
  /* 112a8ce7 call esi */
  call_ind((uint32_t)(ESI), 0x112a8ce9u);
  /* 112a8ce9 mov dword ptr [0x112af450], eax */
  w32((uint32_t)(0x112af450), (EAX));
L_112a8cee:;
  /* 112a8cee mov eax, dword ptr [0x112af44c] */
  EAX = (r32((uint32_t)(0x112af44c)));
  /* 112a8cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8cf5 je 0x112a8d0d */
  if (C.zf) goto L_112a8d0d;
  /* 112a8cf7 call eax */
  call_ind((uint32_t)(EAX), 0x112a8cf9u);
  /* 112a8cf9 mov ebx, eax */
  EBX = (EAX);
  /* 112a8cfb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a8cfd je 0x112a8d0d */
  if (C.zf) goto L_112a8d0d;
  /* 112a8cff mov eax, dword ptr [0x112af450] */
  EAX = (r32((uint32_t)(0x112af450)));
  /* 112a8d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a8d06 je 0x112a8d0d */
  if (C.zf) goto L_112a8d0d;
  /* 112a8d08 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8d09 call eax */
  call_ind((uint32_t)(EAX), 0x112a8d0bu);
  /* 112a8d0b mov ebx, eax */
  EBX = (EAX);
L_112a8d0d:;
  /* 112a8d0d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a8d11 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a8d15 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a8d19 push ebx */
  push32((uint32_t)(EBX));
  /* 112a8d1a call dword ptr [0x112af448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112af448))), 0x112a8d20u);
L_112a8d20:;
  /* 112a8d20 pop edi */
  EDI = (pop32());
  /* 112a8d21 pop esi */
  ESI = (pop32());
  /* 112a8d22 pop ebx */
  EBX = (pop32());
  /* 112a8d23 ret  */
  ESPCHK(0x112a8c9fu, _esp0);
  ESP += 4; return;
L_112a8d24:;
  /* 112a8d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a8d26 jmp 0x112a8d20 */
  goto L_112a8d20;
}

/* FUN_10008d30 @ 0x112a8d30 (664 bytes, 261 insns) [15 switch table(s)] */
void f_112a8d30(void) {
  FTRACE(0x112a8d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a8d30 push ebp */
  push32((uint32_t)(EBP));
  /* 112a8d31 mov ebp, esp */
  EBP = (ESP);
  /* 112a8d33 push edi */
  push32((uint32_t)(EDI));
  /* 112a8d34 push esi */
  push32((uint32_t)(ESI));
  /* 112a8d35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a8d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a8d3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8d3e mov eax, ecx */
  EAX = (ECX);
  /* 112a8d40 mov edx, ecx */
  EDX = (ECX);
  /* 112a8d42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8d44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8d46 jbe 0x112a8d50 */
  if ((C.cf||C.zf)) goto L_112a8d50;
  /* 112a8d48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8d4a jb 0x112a8ec8 */
  if (C.cf) goto L_112a8ec8;
L_112a8d50:;
  /* 112a8d50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112a8d56 jne 0x112a8d6c */
  if (!C.zf) goto L_112a8d6c;
  /* 112a8d58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8d5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112a8d5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8d61 jb 0x112a8d8c */
  if (C.cf) goto L_112a8d8c;
  /* 112a8d63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8d65 jmp dword ptr [edx*4 + 0x112a8e78] */
  switch (EDX) {
    case 0: goto L_112a8e88;
    case 1: goto L_112a8e90;
    case 2: goto L_112a8e9c;
    case 3: goto L_112a8eb0;
    default: x86_unimpl("switch@0x112a8d65 out of table"); return;
  }
L_112a8d6c:;
  /* 112a8d6c mov eax, edi */
  EAX = (EDI);
  /* 112a8d6e mov edx, 3 */
  EDX = (0x3u);
  /* 112a8d73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8d76 jb 0x112a8d84 */
  if (C.cf) goto L_112a8d84;
  /* 112a8d78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112a8d7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8d7d jmp dword ptr [eax*4 + 0x112a8d90] */
  switch (EAX) {
    case 1: goto L_112a8da0;
    case 2: goto L_112a8dcc;
    case 3: goto L_112a8df0;
    default: x86_unimpl("switch@0x112a8d7d out of table"); return;
  }
L_112a8d84:;
  /* 112a8d84 jmp dword ptr [ecx*4 + 0x112a8e88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x112a8e88)))); return;
  /* 112a8d8b nop  */
  /* nop */
L_112a8d8c:;
  /* 112a8d8c jmp dword ptr [ecx*4 + 0x112a8e0c] */
  switch (ECX) {
    case 0: goto L_112a8e6f;
    case 1: goto L_112a8e5c;
    case 2: goto L_112a8e54;
    case 3: goto L_112a8e4c;
    case 4: goto L_112a8e44;
    case 5: goto L_112a8e3c;
    case 6: goto L_112a8e34;
    case 7: goto L_112a8e2c;
    default: x86_unimpl("switch@0x112a8d8c out of table"); return;
  }
  /* 112a8d93 nop  */
  /* nop */
L_112a8da0:;
  /* 112a8da0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8da2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8da4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a8da6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a8da9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a8dac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a8daf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8db2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a8db5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8db8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8dbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8dbe jb 0x112a8d8c */
  if (C.cf) goto L_112a8d8c;
  /* 112a8dc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8dc2 jmp dword ptr [edx*4 + 0x112a8e78] */
  switch (EDX) {
    case 0: goto L_112a8e88;
    case 1: goto L_112a8e90;
    case 2: goto L_112a8e9c;
    case 3: goto L_112a8eb0;
    default: x86_unimpl("switch@0x112a8dc2 out of table"); return;
  }
  /* 112a8dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a8dcc:;
  /* 112a8dcc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8dce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8dd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a8dd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a8dd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8dd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a8ddb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8dde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8de1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8de4 jb 0x112a8d8c */
  if (C.cf) goto L_112a8d8c;
  /* 112a8de6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8de8 jmp dword ptr [edx*4 + 0x112a8e78] */
  switch (EDX) {
    case 0: goto L_112a8e88;
    case 1: goto L_112a8e90;
    case 2: goto L_112a8e9c;
    case 3: goto L_112a8eb0;
    default: x86_unimpl("switch@0x112a8de8 out of table"); return;
  }
  /* 112a8def nop  */
  /* nop */
L_112a8df0:;
  /* 112a8df0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8df2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8df4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a8df6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a8df7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8dfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a8dfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8dfe jb 0x112a8d8c */
  if (C.cf) goto L_112a8d8c;
  /* 112a8e00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8e02 jmp dword ptr [edx*4 + 0x112a8e78] */
  switch (EDX) {
    case 0: goto L_112a8e88;
    case 1: goto L_112a8e90;
    case 2: goto L_112a8e9c;
    case 3: goto L_112a8eb0;
    default: x86_unimpl("switch@0x112a8e02 out of table"); return;
  }
  /* 112a8e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a8e2c:;
  /* 112a8e2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 112a8e30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_112a8e34:;
  /* 112a8e34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 112a8e38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_112a8e3c:;
  /* 112a8e3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 112a8e40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_112a8e44:;
  /* 112a8e44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 112a8e48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_112a8e4c:;
  /* 112a8e4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 112a8e50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_112a8e54:;
  /* 112a8e54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 112a8e58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_112a8e5c:;
  /* 112a8e5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 112a8e60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 112a8e64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112a8e6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a8e6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112a8e6f:;
  /* 112a8e6f jmp dword ptr [edx*4 + 0x112a8e78] */
  switch (EDX) {
    case 0: goto L_112a8e88;
    case 1: goto L_112a8e90;
    case 2: goto L_112a8e9c;
    case 3: goto L_112a8eb0;
    default: x86_unimpl("switch@0x112a8e6f out of table"); return;
  }
  /* 112a8e76 mov edi, edi */
  EDI = (EDI);
L_112a8e88:;
  /* 112a8e88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8e8b pop esi */
  ESI = (pop32());
  /* 112a8e8c pop edi */
  EDI = (pop32());
  /* 112a8e8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a8e8e ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a8e8f nop  */
  /* nop */
L_112a8e90:;
  /* 112a8e90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8e92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a8e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8e97 pop esi */
  ESI = (pop32());
  /* 112a8e98 pop edi */
  EDI = (pop32());
  /* 112a8e99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a8e9a ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a8e9b nop  */
  /* nop */
L_112a8e9c:;
  /* 112a8e9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8e9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a8ea0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a8ea3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a8ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8ea9 pop esi */
  ESI = (pop32());
  /* 112a8eaa pop edi */
  EDI = (pop32());
  /* 112a8eab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a8eac ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a8ead lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a8eb0:;
  /* 112a8eb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a8eb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a8eb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a8eb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a8eba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a8ebd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a8ec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a8ec3 pop esi */
  ESI = (pop32());
  /* 112a8ec4 pop edi */
  EDI = (pop32());
  /* 112a8ec5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a8ec6 ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a8ec7 nop  */
  /* nop */
L_112a8ec8:;
  /* 112a8ec8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 112a8ecc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 112a8ed0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112a8ed6 jne 0x112a8efc */
  if (!C.zf) goto L_112a8efc;
  /* 112a8ed8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8edb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112a8ede cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8ee1 jb 0x112a8ef0 */
  if (C.cf) goto L_112a8ef0;
  /* 112a8ee3 std  */
  C.df=1;
  /* 112a8ee4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8ee6 cld  */
  C.df=0;
  /* 112a8ee7 jmp dword ptr [edx*4 + 0x112a9010] */
  switch (EDX) {
    case 0: goto L_112a9020;
    case 1: goto L_112a9028;
    case 2: goto L_112a9038;
    case 3: goto L_112a904c;
    default: x86_unimpl("switch@0x112a8ee7 out of table"); return;
  }
  /* 112a8eee mov edi, edi */
  EDI = (EDI);
L_112a8ef0:;
  /* 112a8ef0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a8ef2 jmp dword ptr [ecx*4 + 0x112a8fc0] */
  switch (ECX) {
    case 0: goto L_112a9007;
    default: x86_unimpl("switch@0x112a8ef2 out of table"); return;
  }
  /* 112a8ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a8efc:;
  /* 112a8efc mov eax, edi */
  EAX = (EDI);
  /* 112a8efe mov edx, 3 */
  EDX = (0x3u);
  /* 112a8f03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8f06 jb 0x112a8f14 */
  if (C.cf) goto L_112a8f14;
  /* 112a8f08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112a8f0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8f0d jmp dword ptr [eax*4 + 0x112a8f18] */
  switch (EAX) {
    case 1: goto L_112a8f28;
    case 2: goto L_112a8f48;
    case 3: goto L_112a8f70;
    default: x86_unimpl("switch@0x112a8f0d out of table"); return;
  }
L_112a8f14:;
  /* 112a8f14 jmp dword ptr [ecx*4 + 0x112a9010] */
  switch (ECX) {
    case 0: goto L_112a9020;
    case 1: goto L_112a9028;
    case 2: goto L_112a9038;
    case 3: goto L_112a904c;
    default: x86_unimpl("switch@0x112a8f14 out of table"); return;
  }
  /* 112a8f1b nop  */
  /* nop */
L_112a8f28:;
  /* 112a8f28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a8f2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8f2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a8f30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 112a8f31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8f34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 112a8f35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8f38 jb 0x112a8ef0 */
  if (C.cf) goto L_112a8ef0;
  /* 112a8f3a std  */
  C.df=1;
  /* 112a8f3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8f3d cld  */
  C.df=0;
  /* 112a8f3e jmp dword ptr [edx*4 + 0x112a9010] */
  switch (EDX) {
    case 0: goto L_112a9020;
    case 1: goto L_112a9028;
    case 2: goto L_112a9038;
    case 3: goto L_112a904c;
    default: x86_unimpl("switch@0x112a8f3e out of table"); return;
  }
  /* 112a8f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a8f48:;
  /* 112a8f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a8f4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8f4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a8f50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a8f53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8f56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a8f59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8f5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8f5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8f62 jb 0x112a8ef0 */
  if (C.cf) goto L_112a8ef0;
  /* 112a8f64 std  */
  C.df=1;
  /* 112a8f65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8f67 cld  */
  C.df=0;
  /* 112a8f68 jmp dword ptr [edx*4 + 0x112a9010] */
  switch (EDX) {
    case 0: goto L_112a9020;
    case 1: goto L_112a9028;
    case 2: goto L_112a9038;
    case 3: goto L_112a904c;
    default: x86_unimpl("switch@0x112a8f68 out of table"); return;
  }
  /* 112a8f6f nop  */
  /* nop */
L_112a8f70:;
  /* 112a8f70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a8f73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a8f75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a8f78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a8f7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a8f7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a8f81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a8f84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a8f87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8f8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a8f8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a8f90 jb 0x112a8ef0 */
  if (C.cf) goto L_112a8ef0;
  /* 112a8f96 std  */
  C.df=1;
  /* 112a8f97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a8f99 cld  */
  C.df=0;
  /* 112a8f9a jmp dword ptr [edx*4 + 0x112a9010] */
  switch (EDX) {
    case 0: goto L_112a9020;
    case 1: goto L_112a9028;
    case 2: goto L_112a9038;
    case 3: goto L_112a904c;
    default: x86_unimpl("switch@0x112a8f9a out of table"); return;
  }
  /* 112a8fa1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 112a8fa4 les ecx, ptr [edi - 0x7033eed6] */
  x86_unimpl("les @ 0x112a8fa4");
  /* 112a8faa sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a8fac aam 0x8f */
  x86_unimpl("aam @ 0x112a8fac");
  /* 112a8fae sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a8fb0 fmul qword ptr [edi - 0x701beed6] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EDI + -0x701beed6)));
  /* 112a8fb6 sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a8fb8 in al, dx */
  x86_unimpl("in @ 0x112a8fb8");
  /* 112a8fba sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a8fbc hlt  */
  x86_unimpl("hlt @ 0x112a8fbc");
  /* 112a8fbe sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a8fc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 112a8fc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 112a8fcc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 112a8fd0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 112a8fd4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 112a8fd8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 112a8fdc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 112a8fe0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 112a8fe4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 112a8fe8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 112a8fec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 112a8ff0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 112a8ff4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 112a8ff8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 112a8ffc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112a9003 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9005 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112a9007:;
  /* 112a9007 jmp dword ptr [edx*4 + 0x112a9010] */
  switch (EDX) {
    case 0: goto L_112a9020;
    case 1: goto L_112a9028;
    case 2: goto L_112a9038;
    case 3: goto L_112a904c;
    default: x86_unimpl("switch@0x112a9007 out of table"); return;
  }
  /* 112a900e mov edi, edi */
  EDI = (EDI);
L_112a9020:;
  /* 112a9020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9023 pop esi */
  ESI = (pop32());
  /* 112a9024 pop edi */
  EDI = (pop32());
  /* 112a9025 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9026 ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a9027 nop  */
  /* nop */
L_112a9028:;
  /* 112a9028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a902b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a902e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9031 pop esi */
  ESI = (pop32());
  /* 112a9032 pop edi */
  EDI = (pop32());
  /* 112a9033 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9034 ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a9035 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a9038:;
  /* 112a9038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a903b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a903e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a9041 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a9044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9047 pop esi */
  ESI = (pop32());
  /* 112a9048 pop edi */
  EDI = (pop32());
  /* 112a9049 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a904a ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
  /* 112a904b nop  */
  /* nop */
L_112a904c:;
  /* 112a904c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a904f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a9052 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a9055 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a9058 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a905b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a905e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9061 pop esi */
  ESI = (pop32());
  /* 112a9062 pop edi */
  EDI = (pop32());
  /* 112a9063 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9064 ret  */
  ESPCHK(0x112a8d30u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x112a9070 (88 bytes, 40 insns) */
void f_112a9070(void) {
  FTRACE(0x112a9070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9070 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 112a9074 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a9078 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112a907a je 0x112a90c3 */
  if (C.zf) goto L_112a90c3;
  /* 112a907c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a907e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 112a9082 push edi */
  push32((uint32_t)(EDI));
  /* 112a9083 mov edi, ecx */
  EDI = (ECX);
  /* 112a9085 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9088 jb 0x112a90b7 */
  if (C.cf) goto L_112a90b7;
  /* 112a908a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a908c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a908f je 0x112a9099 */
  if (C.zf) goto L_112a9099;
  /* 112a9091 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_112a9093:;
  /* 112a9093 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a9095 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a9096 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a9097 jne 0x112a9093 */
  if (!C.zf) goto L_112a9093;
L_112a9099:;
  /* 112a9099 mov ecx, eax */
  ECX = (EAX);
  /* 112a909b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a909e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a90a0 mov ecx, eax */
  ECX = (EAX);
  /* 112a90a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112a90a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a90a7 mov ecx, edx */
  ECX = (EDX);
  /* 112a90a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112a90ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a90af je 0x112a90b7 */
  if (C.zf) goto L_112a90b7;
  /* 112a90b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112a90b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112a90b5 je 0x112a90bd */
  if (C.zf) goto L_112a90bd;
L_112a90b7:;
  /* 112a90b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a90b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a90ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a90bb jne 0x112a90b7 */
  if (!C.zf) goto L_112a90b7;
L_112a90bd:;
  /* 112a90bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a90c1 pop edi */
  EDI = (pop32());
  /* 112a90c2 ret  */
  ESPCHK(0x112a9070u, _esp0);
  ESP += 4; return;
L_112a90c3:;
  /* 112a90c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a90c7 ret  */
  ESPCHK(0x112a9070u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c8 @ 0x112a90c8 (293 bytes, 103 insns) */
void f_112a90c8(void) {
  FTRACE(0x112a90c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a90c8 push ebp */
  push32((uint32_t)(EBP));
  /* 112a90c9 mov ebp, esp */
  EBP = (ESP);
  /* 112a90cb mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 112a90d0 call 0x112a8c70 */
  push32(0x112a90d5u); f_112a8c70();
  /* 112a90d5 push ebx */
  push32((uint32_t)(EBX));
  /* 112a90d6 push esi */
  push32((uint32_t)(ESI));
  /* 112a90d7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a90d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a90db push esi */
  push32((uint32_t)(ESI));
  /* 112a90dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a90df call 0x112a5b79 */
  push32(0x112a90e4u); f_112a5b79();
  /* 112a90e4 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 112a90e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a90ea cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a90ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112a90ef je 0x112a91e7 */
  if (C.zf) goto L_112a91e7;
  /* 112a90f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a90f7 push esi */
  push32((uint32_t)(ESI));
  /* 112a90f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a90fb call 0x112a5b79 */
  push32(0x112a9100u); f_112a5b79();
  /* 112a9100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9103 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9105 je 0x112a91e7 */
  if (C.zf) goto L_112a91e7;
  /* 112a910b push edi */
  push32((uint32_t)(EDI));
  /* 112a910c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a910f sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a9111 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a9113 jle 0x112a918a */
  if ((C.zf||C.sf!=C.of)) goto L_112a918a;
  /* 112a9115 mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 112a911a lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 112a9120 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9121 push esi */
  push32((uint32_t)(ESI));
  /* 112a9122 push eax */
  push32((uint32_t)(EAX));
  /* 112a9123 call 0x112a9070 */
  push32(0x112a9128u); f_112a9070();
  /* 112a9128 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112a912d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a9130 call 0x112a9735 */
  push32(0x112a9135u); f_112a9735();
  /* 112a9135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9138 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_112a913b:;
  /* 112a913b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a913d mov eax, ebx */
  EAX = (EBX);
  /* 112a913f jge 0x112a9143 */
  if ((C.sf==C.of)) goto L_112a9143;
  /* 112a9141 mov eax, edi */
  EAX = (EDI);
L_112a9143:;
  /* 112a9143 push eax */
  push32((uint32_t)(EAX));
  /* 112a9144 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 112a914a push eax */
  push32((uint32_t)(EAX));
  /* 112a914b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a914e call 0x112a7ff3 */
  push32(0x112a9153u); f_112a7ff3();
  /* 112a9153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9156 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9159 je 0x112a9163 */
  if (C.zf) goto L_112a9163;
  /* 112a915b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a915d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a915f jle 0x112a917b */
  if ((C.zf||C.sf!=C.of)) goto L_112a917b;
  /* 112a9161 jmp 0x112a913b */
  goto L_112a913b;
L_112a9163:;
  /* 112a9163 call 0x112a58fb */
  push32(0x112a9168u); f_112a58fb();
  /* 112a9168 cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a916b jne 0x112a9178 */
  if (!C.zf) goto L_112a9178;
  /* 112a916d call 0x112a58f2 */
  push32(0x112a9172u); f_112a58f2();
  /* 112a9172 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_112a9178:;
  /* 112a9178 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_112a917b:;
  /* 112a917b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a917e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a9181 call 0x112a9735 */
  push32(0x112a9186u); f_112a9735();
  /* 112a9186 pop ecx */
  ECX = (pop32());
  /* 112a9187 pop ecx */
  ECX = (pop32());
  /* 112a9188 jmp 0x112a91d2 */
  goto L_112a91d2;
L_112a918a:;
  /* 112a918a jge 0x112a91d2 */
  if ((C.sf==C.of)) goto L_112a91d2;
  /* 112a918c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a918e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a9191 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a9194 call 0x112a5b79 */
  push32(0x112a9199u); f_112a5b79();
  /* 112a9199 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a919c call 0x112a7e38 */
  push32(0x112a91a1u); f_112a7e38();
  /* 112a91a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a91a4 push eax */
  push32((uint32_t)(EAX));
  /* 112a91a5 call dword ptr [0x112aa024] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa024))), 0x112a91abu);
  /* 112a91ab mov esi, eax */
  ESI = (EAX);
  /* 112a91ad neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 112a91af sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a91b1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 112a91b3 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 112a91b4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a91b6 jne 0x112a91d2 */
  if (!C.zf) goto L_112a91d2;
  /* 112a91b8 call 0x112a58f2 */
  push32(0x112a91bdu); f_112a58f2();
  /* 112a91bd mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 112a91c3 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a91c9u);
  /* 112a91c9 mov edi, eax */
  EDI = (EAX);
  /* 112a91cb call 0x112a58fb */
  push32(0x112a91d0u); f_112a58fb();
  /* 112a91d0 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_112a91d2:;
  /* 112a91d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a91d4 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 112a91d7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a91da call 0x112a5b79 */
  push32(0x112a91dfu); f_112a5b79();
  /* 112a91df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a91e2 mov eax, esi */
  EAX = (ESI);
  /* 112a91e4 pop edi */
  EDI = (pop32());
  /* 112a91e5 jmp 0x112a91e9 */
  goto L_112a91e9;
L_112a91e7:;
  /* 112a91e7 mov eax, ebx */
  EAX = (EBX);
L_112a91e9:;
  /* 112a91e9 pop esi */
  ESI = (pop32());
  /* 112a91ea pop ebx */
  EBX = (pop32());
  /* 112a91eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a91ec ret  */
  ESPCHK(0x112a90c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100091ed @ 0x112a91ed (511 bytes, 193 insns) */
void f_112a91ed(void) {
  FTRACE(0x112a91edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a91ed push ebp */
  push32((uint32_t)(EBP));
  /* 112a91ee mov ebp, esp */
  EBP = (ESP);
  /* 112a91f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a91f2 push 0x112aa558 */
  push32((uint32_t)(0x112aa558u));
  /* 112a91f7 push 0x112a7984 */
  push32((uint32_t)(0x112a7984u));
  /* 112a91fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112a9202 push eax */
  push32((uint32_t)(EAX));
  /* 112a9203 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112a920a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a920d push ebx */
  push32((uint32_t)(EBX));
  /* 112a920e push esi */
  push32((uint32_t)(ESI));
  /* 112a920f push edi */
  push32((uint32_t)(EDI));
  /* 112a9210 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112a9213 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a9215 cmp dword ptr [0x112af478], edi */
  { uint32_t _a=(r32((uint32_t)(0x112af478))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a921b jne 0x112a9263 */
  if (!C.zf) goto L_112a9263;
  /* 112a921d push edi */
  push32((uint32_t)(EDI));
  /* 112a921e push edi */
  push32((uint32_t)(EDI));
  /* 112a921f push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9221 pop ebx */
  EBX = (pop32());
  /* 112a9222 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9223 push 0x112aa550 */
  push32((uint32_t)(0x112aa550u));
  /* 112a9228 mov esi, 0x100 */
  ESI = (0x100u);
  /* 112a922d push esi */
  push32((uint32_t)(ESI));
  /* 112a922e push edi */
  push32((uint32_t)(EDI));
  /* 112a922f call dword ptr [0x112aa018] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa018))), 0x112a9235u);
  /* 112a9235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9237 je 0x112a9241 */
  if (C.zf) goto L_112a9241;
  /* 112a9239 mov dword ptr [0x112af478], ebx */
  w32((uint32_t)(0x112af478), (EBX));
  /* 112a923f jmp 0x112a9263 */
  goto L_112a9263;
L_112a9241:;
  /* 112a9241 push edi */
  push32((uint32_t)(EDI));
  /* 112a9242 push edi */
  push32((uint32_t)(EDI));
  /* 112a9243 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9244 push 0x112aa54c */
  push32((uint32_t)(0x112aa54cu));
  /* 112a9249 push esi */
  push32((uint32_t)(ESI));
  /* 112a924a push edi */
  push32((uint32_t)(EDI));
  /* 112a924b call dword ptr [0x112aa01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa01c))), 0x112a9251u);
  /* 112a9251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9253 je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a9259 mov dword ptr [0x112af478], 2 */
  w32((uint32_t)(0x112af478), (0x2u));
L_112a9263:;
  /* 112a9263 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9266 jle 0x112a9278 */
  if ((C.zf||C.sf!=C.of)) goto L_112a9278;
  /* 112a9268 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a926b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a926e call 0x112a9411 */
  push32(0x112a9273u); f_112a9411();
  /* 112a9273 pop ecx */
  ECX = (pop32());
  /* 112a9274 pop ecx */
  ECX = (pop32());
  /* 112a9275 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_112a9278:;
  /* 112a9278 mov eax, dword ptr [0x112af478] */
  EAX = (r32((uint32_t)(0x112af478)));
  /* 112a927d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9280 jne 0x112a929f */
  if (!C.zf) goto L_112a929f;
  /* 112a9282 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 112a9285 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 112a9288 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a928b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a928e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a9291 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a9294 call dword ptr [0x112aa01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa01c))), 0x112a929au);
  /* 112a929a jmp 0x112a937d */
  goto L_112a937d;
L_112a929f:;
  /* 112a929f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a92a2 jne 0x112a937b */
  if (!C.zf) goto L_112a937b;
  /* 112a92a8 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a92ab jne 0x112a92b5 */
  if (!C.zf) goto L_112a92b5;
  /* 112a92ad mov eax, dword ptr [0x112af470] */
  EAX = (r32((uint32_t)(0x112af470)));
  /* 112a92b2 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_112a92b5:;
  /* 112a92b5 push edi */
  push32((uint32_t)(EDI));
  /* 112a92b6 push edi */
  push32((uint32_t)(EDI));
  /* 112a92b7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a92ba push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a92bd mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 112a92c0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a92c2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a92c4 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 112a92c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a92c8 push eax */
  push32((uint32_t)(EAX));
  /* 112a92c9 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 112a92cc call dword ptr [0x112aa020] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa020))), 0x112a92d2u);
  /* 112a92d2 mov ebx, eax */
  EBX = (EAX);
  /* 112a92d4 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 112a92d7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a92d9 je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a92df mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 112a92e2 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 112a92e5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a92e8 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112a92ea call 0x112a8c70 */
  push32(0x112a92efu); f_112a8c70();
  /* 112a92ef mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112a92f2 mov eax, esp */
  EAX = (ESP);
  /* 112a92f4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112a92f7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a92fb jmp 0x112a9310 */
  goto L_112a9310;
  /* 112a92fd push 1 */
  push32((uint32_t)(0x1u));
  /* 112a92ff pop eax */
  EAX = (pop32());
  /* 112a9300 ret  */
  ESPCHK(0x112a91edu, _esp0);
  ESP += 4; return;
  /* 112a9301 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112a9304 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a9306 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 112a9309 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a930d mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_112a9310:;
  /* 112a9310 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9313 je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a9315 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9316 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 112a9319 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a931c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a931f push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9321 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 112a9324 call dword ptr [0x112aa020] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa020))), 0x112a932au);
  /* 112a932a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a932c je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a932e push edi */
  push32((uint32_t)(EDI));
  /* 112a932f push edi */
  push32((uint32_t)(EDI));
  /* 112a9330 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9331 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 112a9334 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a9337 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a933a call dword ptr [0x112aa018] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa018))), 0x112a9340u);
  /* 112a9340 mov esi, eax */
  ESI = (EAX);
  /* 112a9342 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 112a9345 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9347 je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a9349 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 112a934d je 0x112a938f */
  if (C.zf) goto L_112a938f;
  /* 112a934f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9352 je 0x112a940a */
  if (C.zf) goto L_112a940a;
  /* 112a9358 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a935b jg 0x112a937b */
  if ((!C.zf&&C.sf==C.of)) goto L_112a937b;
  /* 112a935d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 112a9360 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 112a9363 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9364 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 112a9367 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a936a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a936d call dword ptr [0x112aa018] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa018))), 0x112a9373u);
  /* 112a9373 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9375 jne 0x112a940a */
  if (!C.zf) goto L_112a940a;
L_112a937b:;
  /* 112a937b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a937d:;
  /* 112a937d lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 112a9380 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112a9383 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112a938a pop edi */
  EDI = (pop32());
  /* 112a938b pop esi */
  ESI = (pop32());
  /* 112a938c pop ebx */
  EBX = (pop32());
  /* 112a938d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a938e ret  */
  ESPCHK(0x112a91edu, _esp0);
  ESP += 4; return;
L_112a938f:;
  /* 112a938f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112a9396 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 112a9399 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a939c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112a939e call 0x112a8c70 */
  push32(0x112a93a3u); f_112a8c70();
  /* 112a93a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112a93a6 mov ebx, esp */
  EBX = (ESP);
  /* 112a93a8 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 112a93ab or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a93af jmp 0x112a93c3 */
  goto L_112a93c3;
  /* 112a93b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a93b3 pop eax */
  EAX = (pop32());
  /* 112a93b4 ret  */
  ESPCHK(0x112a91edu, _esp0);
  ESP += 4; return;
  /* 112a93b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112a93b8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a93ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a93bc or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a93c0 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_112a93c3:;
  /* 112a93c3 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a93c5 je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a93c7 push esi */
  push32((uint32_t)(ESI));
  /* 112a93c8 push ebx */
  push32((uint32_t)(EBX));
  /* 112a93c9 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 112a93cc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 112a93cf push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a93d2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a93d5 call dword ptr [0x112aa018] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa018))), 0x112a93dbu);
  /* 112a93db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a93dd je 0x112a937b */
  if (C.zf) goto L_112a937b;
  /* 112a93df cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a93e2 push edi */
  push32((uint32_t)(EDI));
  /* 112a93e3 push edi */
  push32((uint32_t)(EDI));
  /* 112a93e4 jne 0x112a93ea */
  if (!C.zf) goto L_112a93ea;
  /* 112a93e6 push edi */
  push32((uint32_t)(EDI));
  /* 112a93e7 push edi */
  push32((uint32_t)(EDI));
  /* 112a93e8 jmp 0x112a93f0 */
  goto L_112a93f0;
L_112a93ea:;
  /* 112a93ea push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 112a93ed push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_112a93f0:;
  /* 112a93f0 push esi */
  push32((uint32_t)(ESI));
  /* 112a93f1 push ebx */
  push32((uint32_t)(EBX));
  /* 112a93f2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112a93f7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 112a93fa call dword ptr [0x112aa078] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa078))), 0x112a9400u);
  /* 112a9400 mov esi, eax */
  ESI = (EAX);
  /* 112a9402 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9404 je 0x112a937b */
  if (C.zf) goto L_112a937b;
L_112a940a:;
  /* 112a940a mov eax, esi */
  EAX = (ESI);
  /* 112a940c jmp 0x112a937d */
  goto L_112a937d;
}

/* FUN_10009411 @ 0x112a9411 (43 bytes, 20 insns) */
void f_112a9411(void) {
  FTRACE(0x112a9411u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9411 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a9415 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a9419 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112a941b push esi */
  push32((uint32_t)(ESI));
  /* 112a941c lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 112a941f je 0x112a942e */
  if (C.zf) goto L_112a942e;
L_112a9421:;
  /* 112a9421 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9424 je 0x112a942e */
  if (C.zf) goto L_112a942e;
  /* 112a9426 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a9427 mov esi, ecx */
  ESI = (ECX);
  /* 112a9429 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a942a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a942c jne 0x112a9421 */
  if (!C.zf) goto L_112a9421;
L_112a942e:;
  /* 112a942e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9431 pop esi */
  ESI = (pop32());
  /* 112a9432 jne 0x112a9439 */
  if (!C.zf) goto L_112a9439;
  /* 112a9434 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a9438 ret  */
  ESPCHK(0x112a9411u, _esp0);
  ESP += 4; return;
L_112a9439:;
  /* 112a9439 mov eax, edx */
  EAX = (EDX);
  /* 112a943b ret  */
  ESPCHK(0x112a9411u, _esp0);
  ESP += 4; return;
}

/* FUN_1000943c @ 0x112a943c (318 bytes, 123 insns) */
void f_112a943c(void) {
  FTRACE(0x112a943cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a943c push ebp */
  push32((uint32_t)(EBP));
  /* 112a943d mov ebp, esp */
  EBP = (ESP);
  /* 112a943f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a9441 push 0x112aa570 */
  push32((uint32_t)(0x112aa570u));
  /* 112a9446 push 0x112a7984 */
  push32((uint32_t)(0x112a7984u));
  /* 112a944b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112a9451 push eax */
  push32((uint32_t)(EAX));
  /* 112a9452 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112a9459 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a945c push ebx */
  push32((uint32_t)(EBX));
  /* 112a945d push esi */
  push32((uint32_t)(ESI));
  /* 112a945e push edi */
  push32((uint32_t)(EDI));
  /* 112a945f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112a9462 mov eax, dword ptr [0x112af47c] */
  EAX = (r32((uint32_t)(0x112af47c)));
  /* 112a9467 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a9469 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a946b jne 0x112a94ab */
  if (!C.zf) goto L_112a94ab;
  /* 112a946d lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 112a9470 push eax */
  push32((uint32_t)(EAX));
  /* 112a9471 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9473 pop esi */
  ESI = (pop32());
  /* 112a9474 push esi */
  push32((uint32_t)(ESI));
  /* 112a9475 push 0x112aa550 */
  push32((uint32_t)(0x112aa550u));
  /* 112a947a push esi */
  push32((uint32_t)(ESI));
  /* 112a947b call dword ptr [0x112aa010] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa010))), 0x112a9481u);
  /* 112a9481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9483 je 0x112a9489 */
  if (C.zf) goto L_112a9489;
  /* 112a9485 mov eax, esi */
  EAX = (ESI);
  /* 112a9487 jmp 0x112a94a6 */
  goto L_112a94a6;
L_112a9489:;
  /* 112a9489 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 112a948c push eax */
  push32((uint32_t)(EAX));
  /* 112a948d push esi */
  push32((uint32_t)(ESI));
  /* 112a948e push 0x112aa54c */
  push32((uint32_t)(0x112aa54cu));
  /* 112a9493 push esi */
  push32((uint32_t)(ESI));
  /* 112a9494 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9495 call dword ptr [0x112aa014] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa014))), 0x112a949bu);
  /* 112a949b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a949d je 0x112a9571 */
  if (C.zf) goto L_112a9571;
  /* 112a94a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a94a5 pop eax */
  EAX = (pop32());
L_112a94a6:;
  /* 112a94a6 mov dword ptr [0x112af47c], eax */
  w32((uint32_t)(0x112af47c), (EAX));
L_112a94ab:;
  /* 112a94ab cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a94ae jne 0x112a94d4 */
  if (!C.zf) goto L_112a94d4;
  /* 112a94b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112a94b3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a94b5 jne 0x112a94bc */
  if (!C.zf) goto L_112a94bc;
  /* 112a94b7 mov eax, dword ptr [0x112af460] */
  EAX = (r32((uint32_t)(0x112af460)));
L_112a94bc:;
  /* 112a94bc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a94bf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a94c2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a94c5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a94c8 push eax */
  push32((uint32_t)(EAX));
  /* 112a94c9 call dword ptr [0x112aa014] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa014))), 0x112a94cfu);
  /* 112a94cf jmp 0x112a9573 */
  goto L_112a9573;
L_112a94d4:;
  /* 112a94d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a94d7 jne 0x112a9571 */
  if (!C.zf) goto L_112a9571;
  /* 112a94dd cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a94e0 jne 0x112a94ea */
  if (!C.zf) goto L_112a94ea;
  /* 112a94e2 mov eax, dword ptr [0x112af470] */
  EAX = (r32((uint32_t)(0x112af470)));
  /* 112a94e7 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_112a94ea:;
  /* 112a94ea push ebx */
  push32((uint32_t)(EBX));
  /* 112a94eb push ebx */
  push32((uint32_t)(EBX));
  /* 112a94ec push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a94ef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a94f2 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112a94f5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a94f7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a94f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 112a94fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a94fd push eax */
  push32((uint32_t)(EAX));
  /* 112a94fe push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 112a9501 call dword ptr [0x112aa020] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa020))), 0x112a9507u);
  /* 112a9507 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112a950a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a950c je 0x112a9571 */
  if (C.zf) goto L_112a9571;
  /* 112a950e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 112a9511 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 112a9514 mov eax, edi */
  EAX = (EDI);
  /* 112a9516 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9519 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112a951b call 0x112a8c70 */
  push32(0x112a9520u); f_112a8c70();
  /* 112a9520 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112a9523 mov esi, esp */
  ESI = (ESP);
  /* 112a9525 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 112a9528 push edi */
  push32((uint32_t)(EDI));
  /* 112a9529 push ebx */
  push32((uint32_t)(EBX));
  /* 112a952a push esi */
  push32((uint32_t)(ESI));
  /* 112a952b call 0x112a9070 */
  push32(0x112a9530u); f_112a9070();
  /* 112a9530 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9533 jmp 0x112a9540 */
  goto L_112a9540;
  /* 112a9535 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9537 pop eax */
  EAX = (pop32());
  /* 112a9538 ret  */
  ESPCHK(0x112a943cu, _esp0);
  ESP += 4; return;
  /* 112a9539 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112a953c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a953e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_112a9540:;
  /* 112a9540 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a9544 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9546 je 0x112a9571 */
  if (C.zf) goto L_112a9571;
  /* 112a9548 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 112a954b push esi */
  push32((uint32_t)(ESI));
  /* 112a954c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a954f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a9552 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9554 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 112a9557 call dword ptr [0x112aa020] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa020))), 0x112a955du);
  /* 112a955d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a955f je 0x112a9571 */
  if (C.zf) goto L_112a9571;
  /* 112a9561 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a9564 push eax */
  push32((uint32_t)(EAX));
  /* 112a9565 push esi */
  push32((uint32_t)(ESI));
  /* 112a9566 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a9569 call dword ptr [0x112aa010] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa010))), 0x112a956fu);
  /* 112a956f jmp 0x112a9573 */
  goto L_112a9573;
L_112a9571:;
  /* 112a9571 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a9573:;
  /* 112a9573 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 112a9576 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112a9579 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112a9580 pop edi */
  EDI = (pop32());
  /* 112a9581 pop esi */
  ESI = (pop32());
  /* 112a9582 pop ebx */
  EBX = (pop32());
  /* 112a9583 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9584 ret  */
  ESPCHK(0x112a943cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009585 @ 0x112a9585 (111 bytes, 44 insns) */
void f_112a9585(void) {
  FTRACE(0x112a9585u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9585 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9586 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a9588 cmp dword ptr [0x112af460], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af460))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a958e jne 0x112a95a3 */
  if (!C.zf) goto L_112a95a3;
  /* 112a9590 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a9594 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9597 jl 0x112a95f2 */
  if ((C.sf!=C.of)) goto L_112a95f2;
  /* 112a9599 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a959c jg 0x112a95f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a95f2;
  /* 112a959e sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a95a1 pop ebx */
  EBX = (pop32());
  /* 112a95a2 ret  */
  ESPCHK(0x112a9585u, _esp0);
  ESP += 4; return;
L_112a95a3:;
  /* 112a95a3 push esi */
  push32((uint32_t)(ESI));
  /* 112a95a4 mov esi, 0x112af5cc */
  ESI = (0x112af5ccu);
  /* 112a95a9 push edi */
  push32((uint32_t)(EDI));
  /* 112a95aa push esi */
  push32((uint32_t)(ESI));
  /* 112a95ab call dword ptr [0x112aa008] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa008))), 0x112a95b1u);
  /* 112a95b1 cmp dword ptr [0x112af5c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af5c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a95b7 mov edi, dword ptr [0x112aa00c] */
  EDI = (r32((uint32_t)(0x112aa00c)));
  /* 112a95bd je 0x112a95cd */
  if (C.zf) goto L_112a95cd;
  /* 112a95bf push esi */
  push32((uint32_t)(ESI));
  /* 112a95c0 call edi */
  call_ind((uint32_t)(EDI), 0x112a95c2u);
  /* 112a95c2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112a95c4 call 0x112a7816 */
  push32(0x112a95c9u); f_112a7816();
  /* 112a95c9 pop ecx */
  ECX = (pop32());
  /* 112a95ca push 1 */
  push32((uint32_t)(0x1u));
  /* 112a95cc pop ebx */
  EBX = (pop32());
L_112a95cd:;
  /* 112a95cd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 112a95d1 call 0x112a95f4 */
  push32(0x112a95d6u); f_112a95f4();
  /* 112a95d6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a95d8 pop ecx */
  ECX = (pop32());
  /* 112a95d9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 112a95dd je 0x112a95e9 */
  if (C.zf) goto L_112a95e9;
  /* 112a95df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112a95e1 call 0x112a7877 */
  push32(0x112a95e6u); f_112a7877();
  /* 112a95e6 pop ecx */
  ECX = (pop32());
  /* 112a95e7 jmp 0x112a95ec */
  goto L_112a95ec;
L_112a95e9:;
  /* 112a95e9 push esi */
  push32((uint32_t)(ESI));
  /* 112a95ea call edi */
  call_ind((uint32_t)(EDI), 0x112a95ecu);
L_112a95ec:;
  /* 112a95ec mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a95f0 pop edi */
  EDI = (pop32());
  /* 112a95f1 pop esi */
  ESI = (pop32());
L_112a95f2:;
  /* 112a95f2 pop ebx */
  EBX = (pop32());
  /* 112a95f3 ret  */
  ESPCHK(0x112a9585u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f4 @ 0x112a95f4 (204 bytes, 71 insns) */
void f_112a95f4(void) {
  FTRACE(0x112a95f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a95f4 push ebp */
  push32((uint32_t)(EBP));
  /* 112a95f5 mov ebp, esp */
  EBP = (ESP);
  /* 112a95f7 push ecx */
  push32((uint32_t)(ECX));
  /* 112a95f8 cmp dword ptr [0x112af460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a95ff push ebx */
  push32((uint32_t)(EBX));
  /* 112a9600 jne 0x112a961f */
  if (!C.zf) goto L_112a961f;
  /* 112a9602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9605 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9608 jl 0x112a96bd */
  if ((C.sf!=C.of)) goto L_112a96bd;
  /* 112a960e cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9611 jg 0x112a96bd */
  if ((!C.zf&&C.sf==C.of)) goto L_112a96bd;
  /* 112a9617 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a961a jmp 0x112a96bd */
  goto L_112a96bd;
L_112a961f:;
  /* 112a961f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9622 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9628 jge 0x112a9652 */
  if ((C.sf==C.of)) goto L_112a9652;
  /* 112a962a cmp dword ptr [0x112adf8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112adf8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9631 jle 0x112a963f */
  if ((C.zf||C.sf!=C.of)) goto L_112a963f;
  /* 112a9633 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a9635 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9636 call 0x112a96c0 */
  push32(0x112a963bu); f_112a96c0();
  /* 112a963b pop ecx */
  ECX = (pop32());
  /* 112a963c pop ecx */
  ECX = (pop32());
  /* 112a963d jmp 0x112a964a */
  goto L_112a964a;
L_112a963f:;
  /* 112a963f mov eax, dword ptr [0x112add80] */
  EAX = (r32((uint32_t)(0x112add80)));
  /* 112a9644 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 112a9647 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_112a964a:;
  /* 112a964a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a964c jne 0x112a9652 */
  if (!C.zf) goto L_112a9652;
L_112a964e:;
  /* 112a964e mov eax, ebx */
  EAX = (EBX);
  /* 112a9650 jmp 0x112a96bd */
  goto L_112a96bd;
L_112a9652:;
  /* 112a9652 mov edx, dword ptr [0x112add80] */
  EDX = (r32((uint32_t)(0x112add80)));
  /* 112a9658 mov eax, ebx */
  EAX = (EBX);
  /* 112a965a sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a965d movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 112a9660 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 112a9665 je 0x112a9675 */
  if (C.zf) goto L_112a9675;
  /* 112a9667 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 112a966b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 112a966e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 112a9671 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a9673 jmp 0x112a967e */
  goto L_112a967e;
L_112a9675:;
  /* 112a9675 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 112a9679 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 112a967c push 1 */
  push32((uint32_t)(0x1u));
L_112a967e:;
  /* 112a967e pop eax */
  EAX = (pop32());
  /* 112a967f lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 112a9682 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9684 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a9686 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a9688 push ecx */
  push32((uint32_t)(ECX));
  /* 112a9689 push eax */
  push32((uint32_t)(EAX));
  /* 112a968a lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 112a968d push eax */
  push32((uint32_t)(EAX));
  /* 112a968e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 112a9693 push dword ptr [0x112af460] */
  push32((uint32_t)(r32((uint32_t)(0x112af460))));
  /* 112a9699 call 0x112a91ed */
  push32(0x112a969eu); f_112a91ed();
  /* 112a969e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a96a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a96a3 je 0x112a964e */
  if (C.zf) goto L_112a964e;
  /* 112a96a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a96a8 jne 0x112a96b0 */
  if (!C.zf) goto L_112a96b0;
  /* 112a96aa movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112a96ae jmp 0x112a96bd */
  goto L_112a96bd;
L_112a96b0:;
  /* 112a96b0 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 112a96b4 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112a96b8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a96bb or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_112a96bd:;
  /* 112a96bd pop ebx */
  EBX = (pop32());
  /* 112a96be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a96bf ret  */
  ESPCHK(0x112a95f4u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x112a96c0 (117 bytes, 46 insns) */
void f_112a96c0(void) {
  FTRACE(0x112a96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a96c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112a96c1 mov ebp, esp */
  EBP = (ESP);
  /* 112a96c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112a96c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a96c7 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 112a96ca cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a96d0 ja 0x112a96de */
  if ((!C.cf&&!C.zf)) goto L_112a96de;
  /* 112a96d2 mov ecx, dword ptr [0x112add80] */
  ECX = (r32((uint32_t)(0x112add80)));
  /* 112a96d8 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 112a96dc jmp 0x112a9730 */
  goto L_112a9730;
L_112a96de:;
  /* 112a96de mov ecx, eax */
  ECX = (EAX);
  /* 112a96e0 push esi */
  push32((uint32_t)(ESI));
  /* 112a96e1 mov esi, dword ptr [0x112add80] */
  ESI = (r32((uint32_t)(0x112add80)));
  /* 112a96e7 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 112a96ea movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 112a96ed test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 112a96f2 pop esi */
  ESI = (pop32());
  /* 112a96f3 je 0x112a9703 */
  if (C.zf) goto L_112a9703;
  /* 112a96f5 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 112a96f9 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 112a96fc mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 112a96ff push 2 */
  push32((uint32_t)(0x2u));
  /* 112a9701 jmp 0x112a970c */
  goto L_112a970c;
L_112a9703:;
  /* 112a9703 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 112a9707 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 112a970a push 1 */
  push32((uint32_t)(0x1u));
L_112a970c:;
  /* 112a970c pop eax */
  EAX = (pop32());
  /* 112a970d lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 112a9710 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9712 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a9714 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a9716 push ecx */
  push32((uint32_t)(ECX));
  /* 112a9717 push eax */
  push32((uint32_t)(EAX));
  /* 112a9718 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 112a971b push eax */
  push32((uint32_t)(EAX));
  /* 112a971c push 1 */
  push32((uint32_t)(0x1u));
  /* 112a971e call 0x112a943c */
  push32(0x112a9723u); f_112a943c();
  /* 112a9723 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9728 jne 0x112a972c */
  if (!C.zf) goto L_112a972c;
  /* 112a972a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a972b ret  */
  ESPCHK(0x112a96c0u, _esp0);
  ESP += 4; return;
L_112a972c:;
  /* 112a972c movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_112a9730:;
  /* 112a9730 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 112a9733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9734 ret  */
  ESPCHK(0x112a96c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009735 @ 0x112a9735 (97 bytes, 31 insns) */
void f_112a9735(void) {
  FTRACE(0x112a9735u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9735 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a9739 push esi */
  push32((uint32_t)(ESI));
  /* 112a973a mov ecx, eax */
  ECX = (EAX);
  /* 112a973c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a973f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a9742 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a9745 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 112a974a mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a9751 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 112a9755 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 112a9759 mov al, cl */
  AL = (CL);
  /* 112a975b and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 112a9760 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9764 jne 0x112a976b */
  if (!C.zf) goto L_112a976b;
  /* 112a9766 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 112a9769 jmp 0x112a9778 */
  goto L_112a9778;
L_112a976b:;
  /* 112a976b cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9773 jne 0x112a9786 */
  if (!C.zf) goto L_112a9786;
  /* 112a9775 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_112a9778:;
  /* 112a9778 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a977a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a977c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112a977e and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 112a9782 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9784 pop esi */
  ESI = (pop32());
  /* 112a9785 ret  */
  ESPCHK(0x112a9735u, _esp0);
  ESP += 4; return;
L_112a9786:;
  /* 112a9786 call 0x112a58f2 */
  push32(0x112a978bu); f_112a58f2();
  /* 112a978b mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 112a9791 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a9794 pop esi */
  ESI = (pop32());
  /* 112a9795 ret  */
  ESPCHK(0x112a9735u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x112a9830 (58 bytes, 32 insns) */
void f_112a9830(void) {
  FTRACE(0x112a9830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9830 push ebp */
  push32((uint32_t)(EBP));
  /* 112a9831 mov ebp, esp */
  EBP = (ESP);
  /* 112a9833 push esi */
  push32((uint32_t)(ESI));
  /* 112a9834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a9836 push eax */
  push32((uint32_t)(EAX));
  /* 112a9837 push eax */
  push32((uint32_t)(EAX));
  /* 112a9838 push eax */
  push32((uint32_t)(EAX));
  /* 112a9839 push eax */
  push32((uint32_t)(EAX));
  /* 112a983a push eax */
  push32((uint32_t)(EAX));
  /* 112a983b push eax */
  push32((uint32_t)(EAX));
  /* 112a983c push eax */
  push32((uint32_t)(EAX));
  /* 112a983d push eax */
  push32((uint32_t)(EAX));
  /* 112a983e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a9841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a9844:;
  /* 112a9844 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112a9846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a9848 je 0x112a9851 */
  if (C.zf) goto L_112a9851;
  /* 112a984a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a984b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x112a984b");
  /* 112a984f jmp 0x112a9844 */
  goto L_112a9844;
L_112a9851:;
  /* 112a9851 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_112a9854:;
  /* 112a9854 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a9856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a9858 je 0x112a9864 */
  if (C.zf) goto L_112a9864;
  /* 112a985a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a985b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x112a985b");
  /* 112a985f jae 0x112a9854 */
  if (!C.cf) goto L_112a9854;
  /* 112a9861 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_112a9864:;
  /* 112a9864 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9867 pop esi */
  ESI = (pop32());
  /* 112a9868 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9869 ret  */
  ESPCHK(0x112a9830u, _esp0);
  ESP += 4; return;
}

/* FUN_10009870 @ 0x112a9870 (208 bytes, 85 insns) */
void f_112a9870(void) {
  FTRACE(0x112a9870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9870 push ebp */
  push32((uint32_t)(EBP));
  /* 112a9871 mov ebp, esp */
  EBP = (ESP);
  /* 112a9873 push edi */
  push32((uint32_t)(EDI));
  /* 112a9874 push esi */
  push32((uint32_t)(ESI));
  /* 112a9875 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9876 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a9879 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a987c lea eax, [0x112af458] */
  EAX = ((uint32_t)(0x112af458));
  /* 112a9882 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9886 jne 0x112a98c3 */
  if (!C.zf) goto L_112a98c3;
  /* 112a9888 mov al, 0xff */
  AL = (0xffu);
  /* 112a988a mov edi, edi */
  EDI = (EDI);
L_112a988c:;
  /* 112a988c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a988e je 0x112a98be */
  if (C.zf) goto L_112a98be;
  /* 112a9890 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a9892 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a9893 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 112a9895 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a9896 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9898 je 0x112a988c */
  if (C.zf) goto L_112a988c;
  /* 112a989a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a989c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a989e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a98a0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 112a98a3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112a98a5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112a98a7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 112a98a9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a98ab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a98ad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a98af and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 112a98b2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112a98b4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112a98b6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a98b8 je 0x112a988c */
  if (C.zf) goto L_112a988c;
  /* 112a98ba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a98bc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_112a98be:;
  /* 112a98be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 112a98c1 jmp 0x112a993b */
  goto L_112a993b;
L_112a98c3:;
  /* 112a98c3 lock inc dword ptr [0x112af5cc] */
  x86_unimpl("lock inc @ 0x112a98c3");
  /* 112a98ca cmp dword ptr [0x112af5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a98d1 jg 0x112a98d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a98d7;
  /* 112a98d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a98d5 jmp 0x112a98ec */
  goto L_112a98ec;
L_112a98d7:;
  /* 112a98d7 lock dec dword ptr [0x112af5cc] */
  x86_unimpl("lock dec @ 0x112a98d7");
  /* 112a98de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112a98e0 call 0x112a7816 */
  push32(0x112a98e5u); f_112a7816();
  /* 112a98e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_112a98ec:;
  /* 112a98ec mov eax, 0xff */
  EAX = (0xffu);
  /* 112a98f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a98f3 nop  */
  /* nop */
L_112a98f4:;
  /* 112a98f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a98f6 je 0x112a991f */
  if (C.zf) goto L_112a991f;
  /* 112a98f8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a98fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a98fb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 112a98fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a98fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9900 je 0x112a98f4 */
  if (C.zf) goto L_112a98f4;
  /* 112a9902 push eax */
  push32((uint32_t)(EAX));
  /* 112a9903 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9904 call 0x112a9b35 */
  push32(0x112a9909u); f_112a9b35();
  /* 112a9909 mov ebx, eax */
  EBX = (EAX);
  /* 112a990b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a990e call 0x112a9b35 */
  push32(0x112a9913u); f_112a9b35();
  /* 112a9913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9916 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9918 je 0x112a98f4 */
  if (C.zf) goto L_112a98f4;
  /* 112a991a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a991c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_112a991f:;
  /* 112a991f mov ebx, eax */
  EBX = (EAX);
  /* 112a9921 pop eax */
  EAX = (pop32());
  /* 112a9922 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a9924 jne 0x112a992f */
  if (!C.zf) goto L_112a992f;
  /* 112a9926 lock dec dword ptr [0x112af5cc] */
  x86_unimpl("lock dec @ 0x112a9926");
  /* 112a992d jmp 0x112a9939 */
  goto L_112a9939;
L_112a992f:;
  /* 112a992f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112a9931 call 0x112a7877 */
  push32(0x112a9936u); f_112a7877();
  /* 112a9936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a9939:;
  /* 112a9939 mov eax, ebx */
  EAX = (EBX);
L_112a993b:;
  /* 112a993b pop ebx */
  EBX = (pop32());
  /* 112a993c pop esi */
  ESI = (pop32());
  /* 112a993d pop edi */
  EDI = (pop32());
  /* 112a993e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a993f ret  */
  ESPCHK(0x112a9870u, _esp0);
  ESP += 4; return;
}

/* FUN_10009940 @ 0x112a9940 (257 bytes, 103 insns) */
void f_112a9940(void) {
  FTRACE(0x112a9940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9940 push ebp */
  push32((uint32_t)(EBP));
  /* 112a9941 mov ebp, esp */
  EBP = (ESP);
  /* 112a9943 push edi */
  push32((uint32_t)(EDI));
  /* 112a9944 push esi */
  push32((uint32_t)(ESI));
  /* 112a9945 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9946 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a9949 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a994b je 0x112a9a3a */
  if (C.zf) goto L_112a9a3a;
  /* 112a9951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9954 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a9957 lea eax, [0x112af458] */
  EAX = ((uint32_t)(0x112af458));
  /* 112a995d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9961 jne 0x112a99b1 */
  if (!C.zf) goto L_112a99b1;
  /* 112a9963 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 112a9965 mov bl, 0x5a */
  BL = (0x5au);
  /* 112a9967 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 112a9969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a996c:;
  /* 112a996c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 112a996e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112a9970 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 112a9972 je 0x112a9995 */
  if (C.zf) goto L_112a9995;
  /* 112a9974 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a9976 je 0x112a9995 */
  if (C.zf) goto L_112a9995;
  /* 112a9978 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a9979 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a997a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a997c jb 0x112a9984 */
  if (C.cf) goto L_112a9984;
  /* 112a997e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9980 ja 0x112a9984 */
  if ((!C.cf&&!C.zf)) goto L_112a9984;
  /* 112a9982 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_112a9984:;
  /* 112a9984 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9986 jb 0x112a998e */
  if (C.cf) goto L_112a998e;
  /* 112a9988 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a998a ja 0x112a998e */
  if ((!C.cf&&!C.zf)) goto L_112a998e;
  /* 112a998c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_112a998e:;
  /* 112a998e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9990 jne 0x112a999f */
  if (!C.zf) goto L_112a999f;
  /* 112a9992 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a9993 jne 0x112a996c */
  if (!C.zf) goto L_112a996c;
L_112a9995:;
  /* 112a9995 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a9997 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a9999 je 0x112a9a3a */
  if (C.zf) goto L_112a9a3a;
L_112a999f:;
  /* 112a999f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 112a99a4 jb 0x112a9a3a */
  if (C.cf) goto L_112a9a3a;
  /* 112a99aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a99ac jmp 0x112a9a3a */
  goto L_112a9a3a;
L_112a99b1:;
  /* 112a99b1 lock inc dword ptr [0x112af5cc] */
  x86_unimpl("lock inc @ 0x112a99b1");
  /* 112a99b8 cmp dword ptr [0x112af5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a99bf jg 0x112a99c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a99c5;
  /* 112a99c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a99c3 jmp 0x112a99de */
  goto L_112a99de;
L_112a99c5:;
  /* 112a99c5 lock dec dword ptr [0x112af5cc] */
  x86_unimpl("lock dec @ 0x112a99c5");
  /* 112a99cc mov ebx, ecx */
  EBX = (ECX);
  /* 112a99ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112a99d0 call 0x112a7816 */
  push32(0x112a99d5u); f_112a7816();
  /* 112a99d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 112a99dc mov ecx, ebx */
  ECX = (EBX);
L_112a99de:;
  /* 112a99de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a99e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a99e2 mov edi, edi */
  EDI = (EDI);
L_112a99e4:;
  /* 112a99e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a99e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a99e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 112a99ea je 0x112a9a0f */
  if (C.zf) goto L_112a9a0f;
  /* 112a99ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a99ee je 0x112a9a0f */
  if (C.zf) goto L_112a9a0f;
  /* 112a99f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a99f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a99f2 push ecx */
  push32((uint32_t)(ECX));
  /* 112a99f3 push eax */
  push32((uint32_t)(EAX));
  /* 112a99f4 push ebx */
  push32((uint32_t)(EBX));
  /* 112a99f5 call 0x112a9b35 */
  push32(0x112a99fau); f_112a9b35();
  /* 112a99fa mov ebx, eax */
  EBX = (EAX);
  /* 112a99fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a99ff call 0x112a9b35 */
  push32(0x112a9a04u); f_112a9b35();
  /* 112a9a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9a07 pop ecx */
  ECX = (pop32());
  /* 112a9a08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9a0a jne 0x112a9a15 */
  if (!C.zf) goto L_112a9a15;
  /* 112a9a0c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a9a0d jne 0x112a99e4 */
  if (!C.zf) goto L_112a99e4;
L_112a9a0f:;
  /* 112a9a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a9a11 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9a13 je 0x112a9a1e */
  if (C.zf) goto L_112a9a1e;
L_112a9a15:;
  /* 112a9a15 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 112a9a1a jb 0x112a9a1e */
  if (C.cf) goto L_112a9a1e;
  /* 112a9a1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_112a9a1e:;
  /* 112a9a1e pop eax */
  EAX = (pop32());
  /* 112a9a1f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a9a21 jne 0x112a9a2c */
  if (!C.zf) goto L_112a9a2c;
  /* 112a9a23 lock dec dword ptr [0x112af5cc] */
  x86_unimpl("lock dec @ 0x112a9a23");
  /* 112a9a2a jmp 0x112a9a3a */
  goto L_112a9a3a;
L_112a9a2c:;
  /* 112a9a2c mov ebx, ecx */
  EBX = (ECX);
  /* 112a9a2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112a9a30 call 0x112a7877 */
  push32(0x112a9a35u); f_112a7877();
  /* 112a9a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9a38 mov ecx, ebx */
  ECX = (EBX);
L_112a9a3a:;
  /* 112a9a3a mov eax, ecx */
  EAX = (ECX);
  /* 112a9a3c pop ebx */
  EBX = (pop32());
  /* 112a9a3d pop esi */
  ESI = (pop32());
  /* 112a9a3e pop edi */
  EDI = (pop32());
  /* 112a9a3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9a40 ret  */
  ESPCHK(0x112a9940u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b35 @ 0x112a9b35 (203 bytes, 78 insns) */
void f_112a9b35(void) {
  FTRACE(0x112a9b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9b35 push ebp */
  push32((uint32_t)(EBP));
  /* 112a9b36 mov ebp, esp */
  EBP = (ESP);
  /* 112a9b38 push ecx */
  push32((uint32_t)(ECX));
  /* 112a9b39 cmp dword ptr [0x112af460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9b40 push ebx */
  push32((uint32_t)(EBX));
  /* 112a9b41 push esi */
  push32((uint32_t)(ESI));
  /* 112a9b42 push edi */
  push32((uint32_t)(EDI));
  /* 112a9b43 jne 0x112a9b62 */
  if (!C.zf) goto L_112a9b62;
  /* 112a9b45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9b48 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9b4b jl 0x112a9bfb */
  if ((C.sf!=C.of)) goto L_112a9bfb;
  /* 112a9b51 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9b54 jg 0x112a9bfb */
  if ((!C.zf&&C.sf==C.of)) goto L_112a9bfb;
  /* 112a9b5a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9b5d jmp 0x112a9bfb */
  goto L_112a9bfb;
L_112a9b62:;
  /* 112a9b62 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a9b65 mov edi, 0x100 */
  EDI = (0x100u);
  /* 112a9b6a push 1 */
  push32((uint32_t)(0x1u));
  /* 112a9b6c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9b6e pop esi */
  ESI = (pop32());
  /* 112a9b6f jge 0x112a9b96 */
  if ((C.sf==C.of)) goto L_112a9b96;
  /* 112a9b71 cmp dword ptr [0x112adf8c], esi */
  { uint32_t _a=(r32((uint32_t)(0x112adf8c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9b77 jle 0x112a9b84 */
  if ((C.zf||C.sf!=C.of)) goto L_112a9b84;
  /* 112a9b79 push esi */
  push32((uint32_t)(ESI));
  /* 112a9b7a push ebx */
  push32((uint32_t)(EBX));
  /* 112a9b7b call 0x112a96c0 */
  push32(0x112a9b80u); f_112a96c0();
  /* 112a9b80 pop ecx */
  ECX = (pop32());
  /* 112a9b81 pop ecx */
  ECX = (pop32());
  /* 112a9b82 jmp 0x112a9b8e */
  goto L_112a9b8e;
L_112a9b84:;
  /* 112a9b84 mov eax, dword ptr [0x112add80] */
  EAX = (r32((uint32_t)(0x112add80)));
  /* 112a9b89 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 112a9b8c and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_112a9b8e:;
  /* 112a9b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9b90 jne 0x112a9b96 */
  if (!C.zf) goto L_112a9b96;
L_112a9b92:;
  /* 112a9b92 mov eax, ebx */
  EAX = (EBX);
  /* 112a9b94 jmp 0x112a9bfb */
  goto L_112a9bfb;
L_112a9b96:;
  /* 112a9b96 mov edx, dword ptr [0x112add80] */
  EDX = (r32((uint32_t)(0x112add80)));
  /* 112a9b9c mov eax, ebx */
  EAX = (EBX);
  /* 112a9b9e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a9ba1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 112a9ba4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 112a9ba9 je 0x112a9bba */
  if (C.zf) goto L_112a9bba;
  /* 112a9bab and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 112a9baf push 2 */
  push32((uint32_t)(0x2u));
  /* 112a9bb1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 112a9bb4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 112a9bb7 pop eax */
  EAX = (pop32());
  /* 112a9bb8 jmp 0x112a9bc3 */
  goto L_112a9bc3;
L_112a9bba:;
  /* 112a9bba and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 112a9bbe mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 112a9bc1 mov eax, esi */
  EAX = (ESI);
L_112a9bc3:;
  /* 112a9bc3 push esi */
  push32((uint32_t)(ESI));
  /* 112a9bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a9bc6 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 112a9bc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a9bcb push ecx */
  push32((uint32_t)(ECX));
  /* 112a9bcc push eax */
  push32((uint32_t)(EAX));
  /* 112a9bcd lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 112a9bd0 push eax */
  push32((uint32_t)(EAX));
  /* 112a9bd1 push edi */
  push32((uint32_t)(EDI));
  /* 112a9bd2 push dword ptr [0x112af460] */
  push32((uint32_t)(r32((uint32_t)(0x112af460))));
  /* 112a9bd8 call 0x112a91ed */
  push32(0x112a9bddu); f_112a91ed();
  /* 112a9bdd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a9be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a9be2 je 0x112a9b92 */
  if (C.zf) goto L_112a9b92;
  /* 112a9be4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a9be6 jne 0x112a9bee */
  if (!C.zf) goto L_112a9bee;
  /* 112a9be8 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112a9bec jmp 0x112a9bfb */
  goto L_112a9bfb;
L_112a9bee:;
  /* 112a9bee movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 112a9bf2 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112a9bf6 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a9bf9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_112a9bfb:;
  /* 112a9bfb pop edi */
  EDI = (pop32());
  /* 112a9bfc pop esi */
  ESI = (pop32());
  /* 112a9bfd pop ebx */
  EBX = (pop32());
  /* 112a9bfe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a9bff ret  */
  ESPCHK(0x112a9b35u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x112a9c34 (6 bytes, 1 insns) */
void f_112a9c34(void) {
  FTRACE(0x112a9c34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a9c34 jmp dword ptr [0x112aa048] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112aa048)))); return;
}

