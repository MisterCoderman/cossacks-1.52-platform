#include "recomp.h"

/* FUN_1000cf20 @ 0x12dfcf20 (216 bytes, 63 insns) */
void f_12dfcf20(void) {
  FTRACE(0x12dfcf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfcf20 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfcf21 mov ebp, esp */
  EBP = (ESP);
  /* 12dfcf23 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfcf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcf27 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcf2d jae 0x12dfcfdb */
  if (!C.cf) goto L_12dfcfdb;
  /* 12dfcf33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcf36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dfcf39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcf3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dfcf3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfcf42 mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12dfcf49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dfcf4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfcf51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfcf53 je 0x12dfcfdb */
  if (C.zf) goto L_12dfcfdb;
  /* 12dfcf59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcf5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dfcf5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcf62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfcf65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfcf68 mov ecx, dword ptr [edx*4 + 0x12e22060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e22060)));
  /* 12dfcf6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcf73 je 0x12dfcfdb */
  if (C.zf) goto L_12dfcfdb;
  /* 12dfcf75 cmp dword ptr [0x12e2069c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e2069c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcf7c jne 0x12dfcfba */
  if (!C.zf) goto L_12dfcfba;
  /* 12dfcf7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcf81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfcf84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcf88 je 0x12dfcf98 */
  if (C.zf) goto L_12dfcf98;
  /* 12dfcf8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcf8e je 0x12dfcfa4 */
  if (C.zf) goto L_12dfcfa4;
  /* 12dfcf90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcf94 je 0x12dfcfb0 */
  if (C.zf) goto L_12dfcfb0;
  /* 12dfcf96 jmp 0x12dfcfba */
  goto L_12dfcfba;
L_12dfcf98:;
  /* 12dfcf98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfcf9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12dfcf9c call dword ptr [0x12e232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232cc))), 0x12dfcfa2u);
  /* 12dfcfa2 jmp 0x12dfcfba */
  goto L_12dfcfba;
L_12dfcfa4:;
  /* 12dfcfa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfcfa6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12dfcfa8 call dword ptr [0x12e232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232cc))), 0x12dfcfaeu);
  /* 12dfcfae jmp 0x12dfcfba */
  goto L_12dfcfba;
L_12dfcfb0:;
  /* 12dfcfb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfcfb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12dfcfb4 call dword ptr [0x12e232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232cc))), 0x12dfcfbau);
L_12dfcfba:;
  /* 12dfcfba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcfbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dfcfc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcfc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfcfc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfcfc9 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12dfcfd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12dfcfd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfcfd9 jmp 0x12dfcff4 */
  goto L_12dfcff4;
L_12dfcfdb:;
  /* 12dfcfdb call 0x12dfcc50 */
  push32(0x12dfcfe0u); f_12dfcc50();
  /* 12dfcfe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dfcfe6 call 0x12dfcc60 */
  push32(0x12dfcfebu); f_12dfcc60();
  /* 12dfcfeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dfcff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dfcff4:;
  /* 12dfcff4 mov esp, ebp */
  ESP = (EBP);
  /* 12dfcff6 pop ebp */
  EBP = (pop32());
  /* 12dfcff7 ret  */
  ESPCHK(0x12dfcf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x12dfd000 (102 bytes, 30 insns) */
void f_12dfd000(void) {
  FTRACE(0x12dfd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd000 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd001 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd006 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd00c jae 0x12dfd04b */
  if (!C.cf) goto L_12dfd04b;
  /* 12dfd00e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd011 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dfd014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd017 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dfd01a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd01d mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12dfd024 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dfd029 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd02c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfd02e je 0x12dfd04b */
  if (C.zf) goto L_12dfd04b;
  /* 12dfd030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd033 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dfd036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd039 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd03c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd03f mov ecx, dword ptr [edx*4 + 0x12e22060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e22060)));
  /* 12dfd046 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12dfd049 jmp 0x12dfd064 */
  goto L_12dfd064;
L_12dfd04b:;
  /* 12dfd04b call 0x12dfcc50 */
  push32(0x12dfd050u); f_12dfcc50();
  /* 12dfd050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dfd056 call 0x12dfcc60 */
  push32(0x12dfd05bu); f_12dfcc60();
  /* 12dfd05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dfd061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dfd064:;
  /* 12dfd064 pop ebp */
  EBP = (pop32());
  /* 12dfd065 ret  */
  ESPCHK(0x12dfd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x12dfd070 (260 bytes, 83 insns) */
void f_12dfd070(void) {
  FTRACE(0x12dfd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd070 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd071 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd076 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfd07a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd07d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd082 je 0x12dfd08d */
  if (C.zf) goto L_12dfd08d;
  /* 12dfd084 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd087 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12dfd08a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12dfd08d:;
  /* 12dfd08d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd090 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfd096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfd098 je 0x12dfd0a2 */
  if (C.zf) goto L_12dfd0a2;
  /* 12dfd09a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd09d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12dfd09f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12dfd0a2:;
  /* 12dfd0a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd0a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd0ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfd0ad je 0x12dfd0b8 */
  if (C.zf) goto L_12dfd0b8;
  /* 12dfd0af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd0b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12dfd0b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12dfd0b8:;
  /* 12dfd0b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd0bb push eax */
  push32((uint32_t)(EAX));
  /* 12dfd0bc call dword ptr [0x12e2325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2325c))), 0x12dfd0c2u);
  /* 12dfd0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfd0c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd0c9 jne 0x12dfd0e2 */
  if (!C.zf) goto L_12dfd0e2;
  /* 12dfd0cb call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12dfd0d1u);
  /* 12dfd0d1 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd0d2 call 0x12dfcbb0 */
  push32(0x12dfd0d7u); f_12dfcbb0();
  /* 12dfd0d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd0da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd0dd jmp 0x12dfd170 */
  goto L_12dfd170;
L_12dfd0e2:;
  /* 12dfd0e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd0e6 jne 0x12dfd0f3 */
  if (!C.zf) goto L_12dfd0f3;
  /* 12dfd0e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd0eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12dfd0ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12dfd0f1 jmp 0x12dfd102 */
  goto L_12dfd102;
L_12dfd0f3:;
  /* 12dfd0f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd0f7 jne 0x12dfd102 */
  if (!C.zf) goto L_12dfd102;
  /* 12dfd0f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd0fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12dfd0ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12dfd102:;
  /* 12dfd102 call 0x12dfcc70 */
  push32(0x12dfd107u); f_12dfcc70();
  /* 12dfd107 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfd10a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd10e jne 0x12dfd12b */
  if (!C.zf) goto L_12dfd12b;
  /* 12dfd110 call 0x12dfcc50 */
  push32(0x12dfd115u); f_12dfcc50();
  /* 12dfd115 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12dfd11b call 0x12dfcc60 */
  push32(0x12dfd120u); f_12dfcc60();
  /* 12dfd120 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dfd126 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd129 jmp 0x12dfd170 */
  goto L_12dfd170;
L_12dfd12b:;
  /* 12dfd12b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd12e push eax */
  push32((uint32_t)(EAX));
  /* 12dfd12f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd132 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd133 call 0x12dfce60 */
  push32(0x12dfd138u); f_12dfce60();
  /* 12dfd138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd13b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd13e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12dfd141 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12dfd144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd147 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dfd14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd14d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd150 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd153 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12dfd15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dfd15d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12dfd161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd164 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd165 call 0x12dfd210 */
  push32(0x12dfd16au); f_12dfd210();
  /* 12dfd16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dfd170:;
  /* 12dfd170 mov esp, ebp */
  ESP = (EBP);
  /* 12dfd172 pop ebp */
  EBP = (pop32());
  /* 12dfd173 ret  */
  ESPCHK(0x12dfd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x12dfd180 (134 bytes, 44 insns) */
void f_12dfd180(void) {
  FTRACE(0x12dfd180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd180 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd181 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd183 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd187 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dfd18a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd18d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd190 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd193 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12dfd19a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd19c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfd19f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd1a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd1a6 jne 0x12dfd1e1 */
  if (!C.zf) goto L_12dfd1e1;
  /* 12dfd1a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dfd1aa call 0x12df9a90 */
  push32(0x12dfd1afu); f_12df9a90();
  /* 12dfd1af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd1b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd1b9 jne 0x12dfd1d7 */
  if (!C.zf) goto L_12dfd1d7;
  /* 12dfd1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd1be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd1c1 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd1c2 call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12dfd1c8u);
  /* 12dfd1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd1cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfd1ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd1d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12dfd1d7:;
  /* 12dfd1d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dfd1d9 call 0x12df9b30 */
  push32(0x12dfd1deu); f_12df9b30();
  /* 12dfd1de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfd1e1:;
  /* 12dfd1e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd1e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dfd1e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd1ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd1ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd1f0 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12dfd1f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12dfd1fb push eax */
  push32((uint32_t)(EAX));
  /* 12dfd1fc call dword ptr [0x12e232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a0))), 0x12dfd202u);
  /* 12dfd202 mov esp, ebp */
  ESP = (EBP);
  /* 12dfd204 pop ebp */
  EBP = (pop32());
  /* 12dfd205 ret  */
  ESPCHK(0x12dfd180u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12dfd210 (38 bytes, 13 insns) */
void f_12dfd210(void) {
  FTRACE(0x12dfd210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd210 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd211 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd216 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dfd219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd21c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd21f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd222 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12dfd229 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12dfd22d push eax */
  push32((uint32_t)(EAX));
  /* 12dfd22e call dword ptr [0x12e232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a4))), 0x12dfd234u);
  /* 12dfd234 pop ebp */
  EBP = (pop32());
  /* 12dfd235 ret  */
  ESPCHK(0x12dfd210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x12dfd240 (218 bytes, 63 insns) */
void f_12dfd240(void) {
  FTRACE(0x12dfd240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd240 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd241 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfd24d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd24f call 0x12df9a90 */
  push32(0x12dfd254u); f_12df9a90();
  /* 12dfd254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd257 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12dfd25e jmp 0x12dfd269 */
  goto L_12dfd269;
L_12dfd260:;
  /* 12dfd260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd263 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dfd269:;
  /* 12dfd269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd26c cmp ecx, dword ptr [0x12e22040] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e22040))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd272 jge 0x12dfd309 */
  if ((C.sf==C.of)) goto L_12dfd309;
  /* 12dfd278 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd27b mov eax, dword ptr [0x12e20cec] */
  EAX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd280 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd284 je 0x12dfd304 */
  if (C.zf) goto L_12dfd304;
  /* 12dfd286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd289 mov edx, dword ptr [0x12e20cec] */
  EDX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd28f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dfd292 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfd295 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd29b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfd29d je 0x12dfd2c1 */
  if (C.zf) goto L_12dfd2c1;
  /* 12dfd29f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd2a2 mov eax, dword ptr [0x12e20cec] */
  EAX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd2a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dfd2aa push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd2ab call 0x12dfe890 */
  push32(0x12dfd2b0u); f_12dfe890();
  /* 12dfd2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd2b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd2b6 je 0x12dfd2c1 */
  if (C.zf) goto L_12dfd2c1;
  /* 12dfd2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd2bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd2be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dfd2c1:;
  /* 12dfd2c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd2c5 jl 0x12dfd304 */
  if ((C.sf!=C.of)) goto L_12dfd304;
  /* 12dfd2c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd2ca mov ecx, dword ptr [0x12e20cec] */
  ECX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd2d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dfd2d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd2d6 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd2d7 call dword ptr [0x12e23264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23264))), 0x12dfd2ddu);
  /* 12dfd2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd2df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd2e2 mov ecx, dword ptr [0x12e20cec] */
  ECX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd2e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dfd2eb push edx */
  push32((uint32_t)(EDX));
  /* 12dfd2ec call 0x12df6170 */
  push32(0x12dfd2f1u); f_12df6170();
  /* 12dfd2f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd2f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd2f7 mov ecx, dword ptr [0x12e20cec] */
  ECX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd2fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12dfd304:;
  /* 12dfd304 jmp 0x12dfd260 */
  goto L_12dfd260;
L_12dfd309:;
  /* 12dfd309 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd30b call 0x12df9b30 */
  push32(0x12dfd310u); f_12df9b30();
  /* 12dfd310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd316 mov esp, ebp */
  ESP = (EBP);
  /* 12dfd318 pop ebp */
  EBP = (pop32());
  /* 12dfd319 ret  */
  ESPCHK(0x12dfd240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d320 @ 0x12dfd320 (68 bytes, 26 insns) */
void f_12dfd320(void) {
  FTRACE(0x12dfd320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd320 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd321 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd323 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd328 jne 0x12dfd336 */
  if (!C.zf) goto L_12dfd336;
  /* 12dfd32a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfd32c call 0x12dfd490 */
  push32(0x12dfd331u); f_12dfd490();
  /* 12dfd331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd334 jmp 0x12dfd360 */
  goto L_12dfd360;
L_12dfd336:;
  /* 12dfd336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd339 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd33a call 0x12df96c0 */
  push32(0x12dfd33fu); f_12df96c0();
  /* 12dfd33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd345 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd346 call 0x12dfd370 */
  push32(0x12dfd34bu); f_12dfd370();
  /* 12dfd34b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd34e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfd351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd354 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd355 call 0x12df9730 */
  push32(0x12dfd35au); f_12df9730();
  /* 12dfd35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dfd360:;
  /* 12dfd360 mov esp, ebp */
  ESP = (EBP);
  /* 12dfd362 pop ebp */
  EBP = (pop32());
  /* 12dfd363 ret  */
  ESPCHK(0x12dfd320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d370 @ 0x12dfd370 (65 bytes, 26 insns) */
void f_12dfd370(void) {
  FTRACE(0x12dfd370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd370 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd371 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd376 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd377 call 0x12dfd3c0 */
  push32(0x12dfd37cu); f_12dfd3c0();
  /* 12dfd37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd37f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd381 je 0x12dfd388 */
  if (C.zf) goto L_12dfd388;
  /* 12dfd383 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd386 jmp 0x12dfd3af */
  goto L_12dfd3af;
L_12dfd388:;
  /* 12dfd388 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd38b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfd38e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfd394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfd396 je 0x12dfd3ad */
  if (C.zf) goto L_12dfd3ad;
  /* 12dfd398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd39b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfd39e push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd39f call 0x12dfe9e0 */
  push32(0x12dfd3a4u); f_12dfe9e0();
  /* 12dfd3a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd3a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dfd3a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd3ab jmp 0x12dfd3af */
  goto L_12dfd3af;
L_12dfd3ad:;
  /* 12dfd3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfd3af:;
  /* 12dfd3af pop ebp */
  EBP = (pop32());
  /* 12dfd3b0 ret  */
  ESPCHK(0x12dfd370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x12dfd3c0 (183 bytes, 62 insns) */
void f_12dfd3c0(void) {
  FTRACE(0x12dfd3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd3c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd3c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfd3cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd3d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfd3d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd3d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfd3d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfd3dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd3df jne 0x12dfd45b */
  if (!C.zf) goto L_12dfd45b;
  /* 12dfd3e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd3e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfd3e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd3ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfd3ef je 0x12dfd45b */
  if (C.zf) goto L_12dfd45b;
  /* 12dfd3f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd3f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd3f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12dfd3f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd3fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfd3ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd403 jle 0x12dfd45b */
  if ((C.zf||C.sf!=C.of)) goto L_12dfd45b;
  /* 12dfd405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd408 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd409 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd40c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfd40f push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd410 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd413 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dfd416 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd417 call 0x12df9150 */
  push32(0x12dfd41cu); f_12df9150();
  /* 12dfd41c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd41f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd422 jne 0x12dfd445 */
  if (!C.zf) goto L_12dfd445;
  /* 12dfd424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfd42a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfd430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfd432 je 0x12dfd443 */
  if (C.zf) goto L_12dfd443;
  /* 12dfd434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd437 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfd43a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd43d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd440 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12dfd443:;
  /* 12dfd443 jmp 0x12dfd45b */
  goto L_12dfd45b;
L_12dfd445:;
  /* 12dfd445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd448 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfd44b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd451 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12dfd454 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dfd45b:;
  /* 12dfd45b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd45e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd461 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfd464 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dfd466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfd469 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dfd470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd473 mov esp, ebp */
  ESP = (EBP);
  /* 12dfd475 pop ebp */
  EBP = (pop32());
  /* 12dfd476 ret  */
  ESPCHK(0x12dfd3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x12dfd480 (15 bytes, 7 insns) */
void f_12dfd480(void) {
  FTRACE(0x12dfd480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd480 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd481 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd483 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfd485 call 0x12dfd490 */
  push32(0x12dfd48au); f_12dfd490();
  /* 12dfd48a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd48d pop ebp */
  EBP = (pop32());
  /* 12dfd48e ret  */
  ESPCHK(0x12dfd480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x12dfd490 (319 bytes, 94 insns) */
void f_12dfd490(void) {
  FTRACE(0x12dfd490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd490 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd491 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfd49d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dfd4a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd4a6 call 0x12df9a90 */
  push32(0x12dfd4abu); f_12df9a90();
  /* 12dfd4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd4ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfd4b5 jmp 0x12dfd4c0 */
  goto L_12dfd4c0;
L_12dfd4b7:;
  /* 12dfd4b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd4ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd4bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dfd4c0:;
  /* 12dfd4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd4c3 cmp ecx, dword ptr [0x12e22040] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e22040))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd4c9 jge 0x12dfd5b3 */
  if ((C.sf==C.of)) goto L_12dfd5b3;
  /* 12dfd4cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd4d2 mov eax, dword ptr [0x12e20cec] */
  EAX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd4d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd4db je 0x12dfd5ae */
  if (C.zf) goto L_12dfd5ae;
  /* 12dfd4e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd4e4 mov edx, dword ptr [0x12e20cec] */
  EDX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd4ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dfd4ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfd4f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfd4f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfd4f8 je 0x12dfd5ae */
  if (C.zf) goto L_12dfd5ae;
  /* 12dfd4fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd501 mov eax, dword ptr [0x12e20cec] */
  EAX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd506 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dfd509 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd50a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd50d push edx */
  push32((uint32_t)(EDX));
  /* 12dfd50e call 0x12df9700 */
  push32(0x12dfd513u); f_12df9700();
  /* 12dfd513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd516 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd519 mov ecx, dword ptr [0x12e20cec] */
  ECX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd51f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dfd522 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dfd525 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd52c je 0x12dfd595 */
  if (C.zf) goto L_12dfd595;
  /* 12dfd52e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd532 jne 0x12dfd559 */
  if (!C.zf) goto L_12dfd559;
  /* 12dfd534 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd537 mov edx, dword ptr [0x12e20cec] */
  EDX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd53d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dfd540 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd541 call 0x12dfd370 */
  push32(0x12dfd546u); f_12dfd370();
  /* 12dfd546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd549 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd54c je 0x12dfd557 */
  if (C.zf) goto L_12dfd557;
  /* 12dfd54e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd554 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dfd557:;
  /* 12dfd557 jmp 0x12dfd595 */
  goto L_12dfd595;
L_12dfd559:;
  /* 12dfd559 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd55d jne 0x12dfd595 */
  if (!C.zf) goto L_12dfd595;
  /* 12dfd55f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd562 mov eax, dword ptr [0x12e20cec] */
  EAX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd567 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dfd56a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfd56d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfd570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfd572 je 0x12dfd595 */
  if (C.zf) goto L_12dfd595;
  /* 12dfd574 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd577 mov ecx, dword ptr [0x12e20cec] */
  ECX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd57d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dfd580 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd581 call 0x12dfd370 */
  push32(0x12dfd586u); f_12dfd370();
  /* 12dfd586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd589 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd58c jne 0x12dfd595 */
  if (!C.zf) goto L_12dfd595;
  /* 12dfd58e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12dfd595:;
  /* 12dfd595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd598 mov ecx, dword ptr [0x12e20cec] */
  ECX = (r32((uint32_t)(0x12e20cec)));
  /* 12dfd59e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dfd5a1 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd5a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd5a5 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd5a6 call 0x12df9770 */
  push32(0x12dfd5abu); f_12df9770();
  /* 12dfd5ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfd5ae:;
  /* 12dfd5ae jmp 0x12dfd4b7 */
  goto L_12dfd4b7;
L_12dfd5b3:;
  /* 12dfd5b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd5b5 call 0x12df9b30 */
  push32(0x12dfd5bau); f_12df9b30();
  /* 12dfd5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd5bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd5c1 jne 0x12dfd5c8 */
  if (!C.zf) goto L_12dfd5c8;
  /* 12dfd5c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfd5c6 jmp 0x12dfd5cb */
  goto L_12dfd5cb;
L_12dfd5c8:;
  /* 12dfd5c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dfd5cb:;
  /* 12dfd5cb mov esp, ebp */
  ESP = (EBP);
  /* 12dfd5cd pop ebp */
  EBP = (pop32());
  /* 12dfd5ce ret  */
  ESPCHK(0x12dfd490u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12dfd5d0 (15 bytes, 7 insns) */
void f_12dfd5d0(void) {
  FTRACE(0x12dfd5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd5d5 call 0x12df3530 */
  push32(0x12dfd5dau); f_12df3530();
  /* 12dfd5da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd5dd pop ebp */
  EBP = (pop32());
  /* 12dfd5de ret  */
  ESPCHK(0x12dfd5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x12dfd5e0 (1007 bytes, 269 insns) */
void f_12dfd5e0(void) {
  FTRACE(0x12dfd5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd5e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd5e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd5ed jl 0x12dfd5f5 */
  if ((C.sf!=C.of)) goto L_12dfd5f5;
  /* 12dfd5ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd5f3 jle 0x12dfd5fc */
  if ((C.zf||C.sf!=C.of)) goto L_12dfd5fc;
L_12dfd5f5:;
  /* 12dfd5f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd5f7 jmp 0x12dfd9cb */
  goto L_12dfd9cb;
L_12dfd5fc:;
  /* 12dfd5fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dfd5fe call 0x12df9a90 */
  push32(0x12dfd603u); f_12df9a90();
  /* 12dfd603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd606 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dfd60d mov eax, dword ptr [0x12e20a24] */
  EAX = (r32((uint32_t)(0x12e20a24)));
  /* 12dfd612 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd615 mov dword ptr [0x12e20a24], eax */
  w32((uint32_t)(0x12e20a24), (EAX));
L_12dfd61a:;
  /* 12dfd61a cmp dword ptr [0x12e20a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd621 je 0x12dfd62d */
  if (C.zf) goto L_12dfd62d;
  /* 12dfd623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfd625 call dword ptr [0x12e232d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232d0))), 0x12dfd62bu);
  /* 12dfd62b jmp 0x12dfd61a */
  goto L_12dfd61a;
L_12dfd62d:;
  /* 12dfd62d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd631 je 0x12dfd671 */
  if (C.zf) goto L_12dfd671;
  /* 12dfd633 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd637 je 0x12dfd651 */
  if (C.zf) goto L_12dfd651;
  /* 12dfd639 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd63c push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd63d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd640 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd641 call 0x12dfd9d0 */
  push32(0x12dfd646u); f_12dfd9d0();
  /* 12dfd646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd649 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12dfd64f jmp 0x12dfd663 */
  goto L_12dfd663;
L_12dfd651:;
  /* 12dfd651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd654 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd657 mov ecx, dword ptr [eax + 0x12e1f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12e1f4dc)));
  /* 12dfd65d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12dfd663:;
  /* 12dfd663 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12dfd669 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dfd66c jmp 0x12dfd9ab */
  goto L_12dfd9ab;
L_12dfd671:;
  /* 12dfd671 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12dfd678 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfd67f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd683 je 0x12dfd9a3 */
  if (C.zf) goto L_12dfd9a3;
  /* 12dfd689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd68c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dfd68f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd692 jne 0x12dfd8b4 */
  if (!C.zf) goto L_12dfd8b4;
  /* 12dfd698 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd69b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dfd69f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd6a2 jne 0x12dfd8b4 */
  if (!C.zf) goto L_12dfd8b4;
  /* 12dfd6a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd6ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12dfd6af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd6b2 jne 0x12dfd8b4 */
  if (!C.zf) goto L_12dfd8b4;
  /* 12dfd6b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd6bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12dfd6c1:;
  /* 12dfd6c1 push 0x12e1c794 */
  push32((uint32_t)(0x12e1c794u));
  /* 12dfd6c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dfd6cc push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd6cd call 0x12e00090 */
  push32(0x12dfd6d2u); f_12e00090();
  /* 12dfd6d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd6d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12dfd6db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd6e2 je 0x12dfd70d */
  if (C.zf) goto L_12dfd70d;
  /* 12dfd6e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd6ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd6f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12dfd6f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd6fd je 0x12dfd70d */
  if (C.zf) goto L_12dfd70d;
  /* 12dfd6ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd705 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dfd708 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd70b jne 0x12dfd733 */
  if (!C.zf) goto L_12dfd733;
L_12dfd70d:;
  /* 12dfd70d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd711 je 0x12dfd72c */
  if (C.zf) goto L_12dfd72c;
  /* 12dfd713 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dfd715 call 0x12df9b30 */
  push32(0x12dfd71au); f_12df9b30();
  /* 12dfd71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd71d mov edx, dword ptr [0x12e20a24] */
  EDX = (r32((uint32_t)(0x12e20a24)));
  /* 12dfd723 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd726 mov dword ptr [0x12e20a24], edx */
  w32((uint32_t)(0x12e20a24), (EDX));
L_12dfd72c:;
  /* 12dfd72c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd72e jmp 0x12dfd9cb */
  goto L_12dfd9cb;
L_12dfd733:;
  /* 12dfd733 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12dfd73a jmp 0x12dfd745 */
  goto L_12dfd745;
L_12dfd73c:;
  /* 12dfd73c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd73f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd742 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12dfd745:;
  /* 12dfd745 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd749 jg 0x12dfd793 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dfd793;
  /* 12dfd74b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dfd751 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd752 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dfd758 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd75c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd75f mov ecx, dword ptr [eax + 0x12e1f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12e1f4d8)));
  /* 12dfd765 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd766 call 0x12e00050 */
  push32(0x12dfd76bu); f_12e00050();
  /* 12dfd76b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd770 jne 0x12dfd791 */
  if (!C.zf) goto L_12dfd791;
  /* 12dfd772 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd775 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd778 mov eax, dword ptr [edx + 0x12e1f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12e1f4d8)));
  /* 12dfd77e push eax */
  push32((uint32_t)(EAX));
  /* 12dfd77f call 0x12df8510 */
  push32(0x12dfd784u); f_12df8510();
  /* 12dfd784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd787 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd78d jne 0x12dfd791 */
  if (!C.zf) goto L_12dfd791;
  /* 12dfd78f jmp 0x12dfd793 */
  goto L_12dfd793;
L_12dfd791:;
  /* 12dfd791 jmp 0x12dfd73c */
  goto L_12dfd73c;
L_12dfd793:;
  /* 12dfd793 push 0x12e1c790 */
  push32((uint32_t)(0x12e1c790u));
  /* 12dfd798 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd79e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd7a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12dfd7a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd7ad push edx */
  push32((uint32_t)(EDX));
  /* 12dfd7ae call 0x12e00010 */
  push32(0x12dfd7b3u); f_12e00010();
  /* 12dfd7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd7b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12dfd7bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd7c3 jne 0x12dfd7f9 */
  if (!C.zf) goto L_12dfd7f9;
  /* 12dfd7c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd7cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dfd7ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd7d1 je 0x12dfd7f9 */
  if (C.zf) goto L_12dfd7f9;
  /* 12dfd7d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd7d7 je 0x12dfd7f2 */
  if (C.zf) goto L_12dfd7f2;
  /* 12dfd7d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dfd7db call 0x12df9b30 */
  push32(0x12dfd7e0u); f_12df9b30();
  /* 12dfd7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd7e3 mov edx, dword ptr [0x12e20a24] */
  EDX = (r32((uint32_t)(0x12e20a24)));
  /* 12dfd7e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd7ec mov dword ptr [0x12e20a24], edx */
  w32((uint32_t)(0x12e20a24), (EDX));
L_12dfd7f2:;
  /* 12dfd7f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfd7f4 jmp 0x12dfd9cb */
  goto L_12dfd9cb;
L_12dfd7f9:;
  /* 12dfd7f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd7fd jg 0x12dfd84a */
  if ((!C.zf&&C.sf==C.of)) goto L_12dfd84a;
  /* 12dfd7ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dfd805 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd806 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd80c push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd80d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12dfd813 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd814 call 0x12df8f00 */
  push32(0x12dfd819u); f_12df8f00();
  /* 12dfd819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd81c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dfd822 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12dfd82a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12dfd830 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd831 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd834 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd835 call 0x12dfd9d0 */
  push32(0x12dfd83au); f_12dfd9d0();
  /* 12dfd83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd83d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd83f je 0x12dfd84a */
  if (C.zf) goto L_12dfd84a;
  /* 12dfd841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dfd84a:;
  /* 12dfd84a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfd850 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd856 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12dfd85c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dfd862 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dfd865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd867 je 0x12dfd878 */
  if (C.zf) goto L_12dfd878;
  /* 12dfd869 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dfd86f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd872 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12dfd878:;
  /* 12dfd878 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dfd87e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dfd881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd883 jne 0x12dfd6c1 */
  if (!C.zf) goto L_12dfd6c1;
  /* 12dfd889 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd88d je 0x12dfd89c */
  if (C.zf) goto L_12dfd89c;
  /* 12dfd88f call 0x12dfdb70 */
  push32(0x12dfd894u); f_12dfdb70();
  /* 12dfd894 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12dfd89a jmp 0x12dfd8a6 */
  goto L_12dfd8a6;
L_12dfd89c:;
  /* 12dfd89c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12dfd8a6:;
  /* 12dfd8a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12dfd8ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfd8af jmp 0x12dfd9a1 */
  goto L_12dfd9a1;
L_12dfd8b4:;
  /* 12dfd8b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd8b7 push edx */
  push32((uint32_t)(EDX));
  /* 12dfd8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfd8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfd8bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12dfd8c2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd8c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd8c7 call 0x12dfdc70 */
  push32(0x12dfd8ccu); f_12dfdc70();
  /* 12dfd8cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd8cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfd8d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd8d6 je 0x12dfd9a1 */
  if (C.zf) goto L_12dfd9a1;
  /* 12dfd8dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dfd8e3 jmp 0x12dfd8ee */
  goto L_12dfd8ee;
L_12dfd8e5:;
  /* 12dfd8e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd8e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd8eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dfd8ee:;
  /* 12dfd8ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd8f2 jg 0x12dfd950 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dfd950;
  /* 12dfd8f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd8f8 je 0x12dfd94e */
  if (C.zf) goto L_12dfd94e;
  /* 12dfd8fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd8fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfd900 mov ecx, dword ptr [eax + 0x12e1f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12e1f4dc)));
  /* 12dfd906 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd907 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12dfd90d push edx */
  push32((uint32_t)(EDX));
  /* 12dfd90e call 0x12dfff80 */
  push32(0x12dfd913u); f_12dfff80();
  /* 12dfd913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd918 je 0x12dfd945 */
  if (C.zf) goto L_12dfd945;
  /* 12dfd91a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12dfd920 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd921 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfd924 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd925 call 0x12dfd9d0 */
  push32(0x12dfd92au); f_12dfd9d0();
  /* 12dfd92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfd92f je 0x12dfd93c */
  if (C.zf) goto L_12dfd93c;
  /* 12dfd931 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd934 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd937 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dfd93a jmp 0x12dfd943 */
  goto L_12dfd943;
L_12dfd93c:;
  /* 12dfd93c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12dfd943:;
  /* 12dfd943 jmp 0x12dfd94e */
  goto L_12dfd94e;
L_12dfd945:;
  /* 12dfd945 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfd948 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd94b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dfd94e:;
  /* 12dfd94e jmp 0x12dfd8e5 */
  goto L_12dfd8e5;
L_12dfd950:;
  /* 12dfd950 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd954 je 0x12dfd97b */
  if (C.zf) goto L_12dfd97b;
  /* 12dfd956 call 0x12dfdb70 */
  push32(0x12dfd95bu); f_12dfdb70();
  /* 12dfd95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfd95e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfd960 mov ecx, dword ptr [0x12e1f4dc] */
  ECX = (r32((uint32_t)(0x12e1f4dc)));
  /* 12dfd966 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd967 call 0x12df6170 */
  push32(0x12dfd96cu); f_12df6170();
  /* 12dfd96c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd96f mov dword ptr [0x12e1f4dc], 0 */
  w32((uint32_t)(0x12e1f4dc), (0x0u));
  /* 12dfd979 jmp 0x12dfd9a1 */
  goto L_12dfd9a1;
L_12dfd97b:;
  /* 12dfd97b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd97f je 0x12dfd98e */
  if (C.zf) goto L_12dfd98e;
  /* 12dfd981 call 0x12dfdb70 */
  push32(0x12dfd986u); f_12dfdb70();
  /* 12dfd986 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12dfd98c jmp 0x12dfd998 */
  goto L_12dfd998;
L_12dfd98e:;
  /* 12dfd98e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12dfd998:;
  /* 12dfd998 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12dfd99e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dfd9a1:;
  /* 12dfd9a1 jmp 0x12dfd9ab */
  goto L_12dfd9ab;
L_12dfd9a3:;
  /* 12dfd9a3 call 0x12dfdb70 */
  push32(0x12dfd9a8u); f_12dfdb70();
  /* 12dfd9a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dfd9ab:;
  /* 12dfd9ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfd9af je 0x12dfd9c8 */
  if (C.zf) goto L_12dfd9c8;
  /* 12dfd9b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dfd9b3 call 0x12df9b30 */
  push32(0x12dfd9b8u); f_12df9b30();
  /* 12dfd9b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd9bb mov eax, dword ptr [0x12e20a24] */
  EAX = (r32((uint32_t)(0x12e20a24)));
  /* 12dfd9c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd9c3 mov dword ptr [0x12e20a24], eax */
  w32((uint32_t)(0x12e20a24), (EAX));
L_12dfd9c8:;
  /* 12dfd9c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dfd9cb:;
  /* 12dfd9cb mov esp, ebp */
  ESP = (EBP);
  /* 12dfd9cd pop ebp */
  EBP = (pop32());
  /* 12dfd9ce ret  */
  ESPCHK(0x12dfd5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x12dfd9d0 (403 bytes, 117 insns) */
void f_12dfd9d0(void) {
  FTRACE(0x12dfd9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfd9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfd9d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfd9d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfd9d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfd9dc push eax */
  push32((uint32_t)(EAX));
  /* 12dfd9dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12dfd9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd9e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12dfd9ea push edx */
  push32((uint32_t)(EDX));
  /* 12dfd9eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12dfd9f1 push eax */
  push32((uint32_t)(EAX));
  /* 12dfd9f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfd9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfd9f6 call 0x12dfdc70 */
  push32(0x12dfd9fbu); f_12dfdc70();
  /* 12dfd9fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfd9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfda00 jne 0x12dfda09 */
  if (!C.zf) goto L_12dfda09;
  /* 12dfda02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfda04 jmp 0x12dfdb5f */
  goto L_12dfdb5f;
L_12dfda09:;
  /* 12dfda09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12dfda0e push 0x12e1c798 */
  push32((uint32_t)(0x12e1c798u));
  /* 12dfda13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfda15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12dfda1b push edx */
  push32((uint32_t)(EDX));
  /* 12dfda1c call 0x12df8510 */
  push32(0x12dfda21u); f_12df8510();
  /* 12dfda21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfda24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfda27 push eax */
  push32((uint32_t)(EAX));
  /* 12dfda28 call 0x12df56e0 */
  push32(0x12dfda2du); f_12df56e0();
  /* 12dfda2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfda30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfda33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfda37 jne 0x12dfda40 */
  if (!C.zf) goto L_12dfda40;
  /* 12dfda39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfda3b jmp 0x12dfdb5f */
  goto L_12dfdb5f;
L_12dfda40:;
  /* 12dfda40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfda43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfda46 mov ecx, dword ptr [eax + 0x12e1f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12e1f4dc)));
  /* 12dfda4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfda4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfda52 mov eax, dword ptr [edx*4 + 0x12e208a8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e208a8)));
  /* 12dfda59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfda5c push 6 */
  push32((uint32_t)(0x6u));
  /* 12dfda5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfda61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfda64 add ecx, 0x12e208ec */
  { uint32_t _a=(ECX),_b=(0x12e208ecu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfda6a push ecx */
  push32((uint32_t)(ECX));
  /* 12dfda6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12dfda6e push edx */
  push32((uint32_t)(EDX));
  /* 12dfda6f call 0x12dfc870 */
  push32(0x12dfda74u); f_12dfc870();
  /* 12dfda74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfda77 mov eax, dword ptr [0x12e208c0] */
  EAX = (r32((uint32_t)(0x12e208c0)));
  /* 12dfda7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfda7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12dfda85 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfda86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfda89 push edx */
  push32((uint32_t)(EDX));
  /* 12dfda8a call 0x12df8690 */
  push32(0x12dfda8fu); f_12df8690();
  /* 12dfda8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfda92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfda95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfda98 mov dword ptr [ecx + 0x12e1f4dc], eax */
  w32((uint32_t)(ECX + 0x12e1f4dc), (EAX));
  /* 12dfda9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12dfdaa4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dfdaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdaad mov dword ptr [eax*4 + 0x12e208a8], edx */
  w32((uint32_t)(EAX*4 + 0x12e208a8), (EDX));
  /* 12dfdab4 push 6 */
  push32((uint32_t)(0x6u));
  /* 12dfdab6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12dfdabc push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdac0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdac3 add edx, 0x12e208ec */
  { uint32_t _a=(EDX),_b=(0x12e208ecu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdac9 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdaca call 0x12dfc870 */
  push32(0x12dfdacfu); f_12dfc870();
  /* 12dfdacf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdad2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdad6 jne 0x12dfdae3 */
  if (!C.zf) goto L_12dfdae3;
  /* 12dfdad8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfdade mov dword ptr [0x12e208c0], eax */
  w32((uint32_t)(0x12e208c0), (EAX));
L_12dfdae3:;
  /* 12dfdae3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdae7 jne 0x12dfdaf5 */
  if (!C.zf) goto L_12dfdaf5;
  /* 12dfdae9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dfdaef mov dword ptr [0x12e208c4], ecx */
  w32((uint32_t)(0x12e208c4), (ECX));
L_12dfdaf5:;
  /* 12dfdaf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdaf8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdafb call dword ptr [edx + 0x12e1f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12e1f4e0))), 0x12dfdb01u);
  /* 12dfdb01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdb03 je 0x12dfdb3c */
  if (C.zf) goto L_12dfdb3c;
  /* 12dfdb05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdb08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdb0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfdb0e mov dword ptr [eax + 0x12e1f4dc], ecx */
  w32((uint32_t)(EAX + 0x12e1f4dc), (ECX));
  /* 12dfdb14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfdb16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfdb19 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdb1a call 0x12df6170 */
  push32(0x12dfdb1fu); f_12df6170();
  /* 12dfdb1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdb22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdb25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdb28 mov dword ptr [eax*4 + 0x12e208a8], ecx */
  w32((uint32_t)(EAX*4 + 0x12e208a8), (ECX));
  /* 12dfdb2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfdb32 mov dword ptr [0x12e208c0], edx */
  w32((uint32_t)(0x12e208c0), (EDX));
  /* 12dfdb38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdb3a jmp 0x12dfdb5f */
  goto L_12dfdb5f;
L_12dfdb3c:;
  /* 12dfdb3c cmp dword ptr [ebp - 0xc], 0x12e1f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12e1f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdb43 je 0x12dfdb53 */
  if (C.zf) goto L_12dfdb53;
  /* 12dfdb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfdb47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfdb4a push eax */
  push32((uint32_t)(EAX));
  /* 12dfdb4b call 0x12df6170 */
  push32(0x12dfdb50u); f_12df6170();
  /* 12dfdb50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfdb53:;
  /* 12dfdb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdb56 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdb59 mov eax, dword ptr [ecx + 0x12e1f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12e1f4dc)));
L_12dfdb5f:;
  /* 12dfdb5f mov esp, ebp */
  ESP = (EBP);
  /* 12dfdb61 pop ebp */
  EBP = (pop32());
  /* 12dfdb62 ret  */
  ESPCHK(0x12dfd9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x12dfdb70 (256 bytes, 72 insns) */
void f_12dfdb70(void) {
  FTRACE(0x12dfdb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfdb70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfdb71 mov ebp, esp */
  EBP = (ESP);
  /* 12dfdb73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfdb76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12dfdb7d cmp dword ptr [0x12e1f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdb84 jne 0x12dfdba4 */
  if (!C.zf) goto L_12dfdba4;
  /* 12dfdb86 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12dfdb8b push 0x12e1c798 */
  push32((uint32_t)(0x12e1c798u));
  /* 12dfdb90 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfdb92 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12dfdb97 call 0x12df56e0 */
  push32(0x12dfdb9cu); f_12df56e0();
  /* 12dfdb9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdb9f mov dword ptr [0x12e1f4dc], eax */
  w32((uint32_t)(0x12e1f4dc), (EAX));
L_12dfdba4:;
  /* 12dfdba4 mov eax, dword ptr [0x12e1f4dc] */
  EAX = (r32((uint32_t)(0x12e1f4dc)));
  /* 12dfdba9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dfdbac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dfdbb3 jmp 0x12dfdbbe */
  goto L_12dfdbbe;
L_12dfdbb5:;
  /* 12dfdbb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdbb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdbbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dfdbbe:;
  /* 12dfdbbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdbc1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdbc4 mov eax, dword ptr [edx + 0x12e1f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12e1f4dc)));
  /* 12dfdbca push eax */
  push32((uint32_t)(EAX));
  /* 12dfdbcb push 0x12e1c7a4 */
  push32((uint32_t)(0x12e1c7a4u));
  /* 12dfdbd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdbd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdbd6 mov edx, dword ptr [ecx + 0x12e1f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12e1f4d8)));
  /* 12dfdbdc push edx */
  push32((uint32_t)(EDX));
  /* 12dfdbdd push 3 */
  push32((uint32_t)(0x3u));
  /* 12dfdbdf mov eax, dword ptr [0x12e1f4dc] */
  EAX = (r32((uint32_t)(0x12e1f4dc)));
  /* 12dfdbe4 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdbe5 call 0x12dfde10 */
  push32(0x12dfdbeau); f_12dfde10();
  /* 12dfdbea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdbed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdbf1 jge 0x12dfdc39 */
  if ((C.sf==C.of)) goto L_12dfdc39;
  /* 12dfdbf3 push 0x12e1c790 */
  push32((uint32_t)(0x12e1c790u));
  /* 12dfdbf8 mov ecx, dword ptr [0x12e1f4dc] */
  ECX = (r32((uint32_t)(0x12e1f4dc)));
  /* 12dfdbfe push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdbff call 0x12df86a0 */
  push32(0x12dfdc04u); f_12df86a0();
  /* 12dfdc04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdc07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdc0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdc0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdc10 mov eax, dword ptr [edx + 0x12e1f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12e1f4dc)));
  /* 12dfdc16 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdc17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdc1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfdc1d mov edx, dword ptr [ecx + 0x12e1f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12e1f4dc)));
  /* 12dfdc23 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdc24 call 0x12dfff80 */
  push32(0x12dfdc29u); f_12dfff80();
  /* 12dfdc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdc2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdc2e je 0x12dfdc37 */
  if (C.zf) goto L_12dfdc37;
  /* 12dfdc30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dfdc37:;
  /* 12dfdc37 jmp 0x12dfdc67 */
  goto L_12dfdc67;
L_12dfdc39:;
  /* 12dfdc39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdc3d jne 0x12dfdc46 */
  if (!C.zf) goto L_12dfdc46;
  /* 12dfdc3f mov eax, dword ptr [0x12e1f4dc] */
  EAX = (r32((uint32_t)(0x12e1f4dc)));
  /* 12dfdc44 jmp 0x12dfdc6c */
  goto L_12dfdc6c;
L_12dfdc46:;
  /* 12dfdc46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfdc48 mov eax, dword ptr [0x12e1f4dc] */
  EAX = (r32((uint32_t)(0x12e1f4dc)));
  /* 12dfdc4d push eax */
  push32((uint32_t)(EAX));
  /* 12dfdc4e call 0x12df6170 */
  push32(0x12dfdc53u); f_12df6170();
  /* 12dfdc53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdc56 mov dword ptr [0x12e1f4dc], 0 */
  w32((uint32_t)(0x12e1f4dc), (0x0u));
  /* 12dfdc60 mov eax, dword ptr [0x12e1f4f4] */
  EAX = (r32((uint32_t)(0x12e1f4f4)));
  /* 12dfdc65 jmp 0x12dfdc6c */
  goto L_12dfdc6c;
L_12dfdc67:;
  /* 12dfdc67 jmp 0x12dfdbb5 */
  goto L_12dfdbb5;
L_12dfdc6c:;
  /* 12dfdc6c mov esp, ebp */
  ESP = (EBP);
  /* 12dfdc6e pop ebp */
  EBP = (pop32());
  /* 12dfdc6f ret  */
  ESPCHK(0x12dfdb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x12dfdc70 (388 bytes, 115 insns) */
void f_12dfdc70(void) {
  FTRACE(0x12dfdc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfdc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfdc71 mov ebp, esp */
  EBP = (ESP);
  /* 12dfdc73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfdc79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdc7d jne 0x12dfdc86 */
  if (!C.zf) goto L_12dfdc86;
  /* 12dfdc7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdc81 jmp 0x12dfddf0 */
  goto L_12dfddf0;
L_12dfdc86:;
  /* 12dfdc86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdc89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dfdc8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdc8f jne 0x12dfdce0 */
  if (!C.zf) goto L_12dfdce0;
  /* 12dfdc91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdc94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dfdc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdc9a jne 0x12dfdce0 */
  if (!C.zf) goto L_12dfdce0;
  /* 12dfdc9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdc9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12dfdca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdca5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12dfdca9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdcad je 0x12dfdcc9 */
  if (C.zf) goto L_12dfdcc9;
  /* 12dfdcaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfdcb2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12dfdcb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfdcba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12dfdcc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfdcc3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12dfdcc9:;
  /* 12dfdcc9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdccd je 0x12dfdcd8 */
  if (C.zf) goto L_12dfdcd8;
  /* 12dfdccf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfdcd2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12dfdcd8:;
  /* 12dfdcd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdcdb jmp 0x12dfddf0 */
  goto L_12dfddf0;
L_12dfdce0:;
  /* 12dfdce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdce4 push 0x12e1f450 */
  push32((uint32_t)(0x12e1f450u));
  /* 12dfdce9 call 0x12dfff80 */
  push32(0x12dfdceeu); f_12dfff80();
  /* 12dfdcee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdcf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdcf3 je 0x12dfdda8 */
  if (C.zf) goto L_12dfdda8;
  /* 12dfdcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdcfc push edx */
  push32((uint32_t)(EDX));
  /* 12dfdcfd push 0x12e1f3cc */
  push32((uint32_t)(0x12e1f3ccu));
  /* 12dfdd02 call 0x12dfff80 */
  push32(0x12dfdd07u); f_12dfff80();
  /* 12dfdd07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdd0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdd0c je 0x12dfdda8 */
  if (C.zf) goto L_12dfdda8;
  /* 12dfdd12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdd15 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdd16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12dfdd1c push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdd1d call 0x12dfde60 */
  push32(0x12dfdd22u); f_12dfde60();
  /* 12dfdd22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdd25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdd27 je 0x12dfdd30 */
  if (C.zf) goto L_12dfdd30;
  /* 12dfdd29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdd2b jmp 0x12dfddf0 */
  goto L_12dfddf0;
L_12dfdd30:;
  /* 12dfdd30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12dfdd36 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdd37 push 0x12e2089c */
  push32((uint32_t)(0x12e2089cu));
  /* 12dfdd3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12dfdd42 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdd43 call 0x12e000d0 */
  push32(0x12dfdd48u); f_12e000d0();
  /* 12dfdd48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdd4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdd4d jne 0x12dfdd56 */
  if (!C.zf) goto L_12dfdd56;
  /* 12dfdd4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdd51 jmp 0x12dfddf0 */
  goto L_12dfddf0;
L_12dfdd56:;
  /* 12dfdd56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfdd58 mov cx, word ptr [0x12e208a0] */
  CX = (r16((uint32_t)(0x12e208a0)));
  /* 12dfdd5f mov dword ptr [0x12e208a4], ecx */
  w32((uint32_t)(0x12e208a4), (ECX));
  /* 12dfdd65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12dfdd6b push edx */
  push32((uint32_t)(EDX));
  /* 12dfdd6c push 0x12e1f450 */
  push32((uint32_t)(0x12e1f450u));
  /* 12dfdd71 call 0x12dfdfc0 */
  push32(0x12dfdd76u); f_12dfdfc0();
  /* 12dfdd76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdd79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdd7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dfdd7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfdd81 je 0x12dfdd96 */
  if (C.zf) goto L_12dfdd96;
  /* 12dfdd83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdd86 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdd87 push 0x12e1f3cc */
  push32((uint32_t)(0x12e1f3ccu));
  /* 12dfdd8c call 0x12df8690 */
  push32(0x12dfdd91u); f_12df8690();
  /* 12dfdd91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdd94 jmp 0x12dfdda8 */
  goto L_12dfdda8;
L_12dfdd96:;
  /* 12dfdd96 push 0x12e1f450 */
  push32((uint32_t)(0x12e1f450u));
  /* 12dfdd9b push 0x12e1f3cc */
  push32((uint32_t)(0x12e1f3ccu));
  /* 12dfdda0 call 0x12df8690 */
  push32(0x12dfdda5u); f_12df8690();
  /* 12dfdda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfdda8:;
  /* 12dfdda8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfddac je 0x12dfddc1 */
  if (C.zf) goto L_12dfddc1;
  /* 12dfddae push 6 */
  push32((uint32_t)(0x6u));
  /* 12dfddb0 push 0x12e2089c */
  push32((uint32_t)(0x12e2089cu));
  /* 12dfddb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfddb8 push eax */
  push32((uint32_t)(EAX));
  /* 12dfddb9 call 0x12dfc870 */
  push32(0x12dfddbeu); f_12dfc870();
  /* 12dfddbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfddc1:;
  /* 12dfddc1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfddc5 je 0x12dfddda */
  if (C.zf) goto L_12dfddda;
  /* 12dfddc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dfddc9 push 0x12e208a4 */
  push32((uint32_t)(0x12e208a4u));
  /* 12dfddce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfddd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfddd2 call 0x12dfc870 */
  push32(0x12dfddd7u); f_12dfc870();
  /* 12dfddd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfddda:;
  /* 12dfddda push 0x12e1f450 */
  push32((uint32_t)(0x12e1f450u));
  /* 12dfdddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdde2 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdde3 call 0x12df8690 */
  push32(0x12dfdde8u); f_12df8690();
  /* 12dfdde8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfddeb mov eax, 0x12e1f450 */
  EAX = (0x12e1f450u);
L_12dfddf0:;
  /* 12dfddf0 mov esp, ebp */
  ESP = (EBP);
  /* 12dfddf2 pop ebp */
  EBP = (pop32());
  /* 12dfddf3 ret  */
  ESPCHK(0x12dfdc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x12dfde00 (7 bytes, 5 insns) */
void f_12dfde00(void) {
  FTRACE(0x12dfde00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfde00 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfde01 mov ebp, esp */
  EBP = (ESP);
  /* 12dfde03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfde05 pop ebp */
  EBP = (pop32());
  /* 12dfde06 ret  */
  ESPCHK(0x12dfde00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12dfde10 (79 bytes, 28 insns) */
void f_12dfde10(void) {
  FTRACE(0x12dfde10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfde10 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfde11 mov ebp, esp */
  EBP = (ESP);
  /* 12dfde13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfde16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12dfde19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfde1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dfde23 jmp 0x12dfde2e */
  goto L_12dfde2e;
L_12dfde25:;
  /* 12dfde25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfde28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfde2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dfde2e:;
  /* 12dfde2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfde31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfde34 jge 0x12dfde54 */
  if ((C.sf==C.of)) goto L_12dfde54;
  /* 12dfde36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfde39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfde3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfde3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfde42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dfde45 push edx */
  push32((uint32_t)(EDX));
  /* 12dfde46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfde49 push eax */
  push32((uint32_t)(EAX));
  /* 12dfde4a call 0x12df86a0 */
  push32(0x12dfde4fu); f_12df86a0();
  /* 12dfde4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfde52 jmp 0x12dfde25 */
  goto L_12dfde25;
L_12dfde54:;
  /* 12dfde54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfde5b mov esp, ebp */
  ESP = (EBP);
  /* 12dfde5d pop ebp */
  EBP = (pop32());
  /* 12dfde5e ret  */
  ESPCHK(0x12dfde10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de60 @ 0x12dfde60 (349 bytes, 122 insns) */
void f_12dfde60(void) {
  FTRACE(0x12dfde60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfde60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfde61 mov ebp, esp */
  EBP = (ESP);
  /* 12dfde63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfde66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12dfde6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfde6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfde70 push eax */
  push32((uint32_t)(EAX));
  /* 12dfde71 call 0x12df9e00 */
  push32(0x12dfde76u); f_12df9e00();
  /* 12dfde76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfde79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfde7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dfde7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfde81 jne 0x12dfde8a */
  if (!C.zf) goto L_12dfde8a;
  /* 12dfde83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfde85 jmp 0x12dfdfb9 */
  goto L_12dfdfb9;
L_12dfde8a:;
  /* 12dfde8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfde8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dfde90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfde93 jne 0x12dfdec0 */
  if (!C.zf) goto L_12dfdec0;
  /* 12dfde95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfde98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dfde9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfde9e je 0x12dfdec0 */
  if (C.zf) goto L_12dfdec0;
  /* 12dfdea0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdea3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdeaa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdeb0 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdeb1 call 0x12df8690 */
  push32(0x12dfdeb6u); f_12df8690();
  /* 12dfdeb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdeb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdebb jmp 0x12dfdfb9 */
  goto L_12dfdfb9;
L_12dfdec0:;
  /* 12dfdec0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfdec7 jmp 0x12dfded2 */
  goto L_12dfded2;
L_12dfdec9:;
  /* 12dfdec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfdecc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdecf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dfded2:;
  /* 12dfded2 push 0x12e1c7a8 */
  push32((uint32_t)(0x12e1c7a8u));
  /* 12dfded7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdeda push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdedb call 0x12e00010 */
  push32(0x12dfdee0u); f_12e00010();
  /* 12dfdee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdee3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dfdee6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdeea jne 0x12dfdef4 */
  if (!C.zf) goto L_12dfdef4;
  /* 12dfdeec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdeef jmp 0x12dfdfb9 */
  goto L_12dfdfb9;
L_12dfdef4:;
  /* 12dfdef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdef7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdefa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dfdefc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12dfdeff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf03 jne 0x12dfdf2a */
  if (!C.zf) goto L_12dfdf2a;
  /* 12dfdf05 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf09 jge 0x12dfdf2a */
  if ((C.sf==C.of)) goto L_12dfdf2a;
  /* 12dfdf0b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dfdf0f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf12 je 0x12dfdf2a */
  if (C.zf) goto L_12dfdf2a;
  /* 12dfdf14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfdf17 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdf18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdf1b push eax */
  push32((uint32_t)(EAX));
  /* 12dfdf1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdf1f push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdf20 call 0x12df8f00 */
  push32(0x12dfdf25u); f_12df8f00();
  /* 12dfdf25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdf28 jmp 0x12dfdf90 */
  goto L_12dfdf90;
L_12dfdf2a:;
  /* 12dfdf2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf2e jne 0x12dfdf58 */
  if (!C.zf) goto L_12dfdf58;
  /* 12dfdf30 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf34 jge 0x12dfdf58 */
  if ((C.sf==C.of)) goto L_12dfdf58;
  /* 12dfdf36 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dfdf3a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf3d je 0x12dfdf58 */
  if (C.zf) goto L_12dfdf58;
  /* 12dfdf3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfdf42 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdf43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdf46 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdf47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdf4a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdf4d push edx */
  push32((uint32_t)(EDX));
  /* 12dfdf4e call 0x12df8f00 */
  push32(0x12dfdf53u); f_12df8f00();
  /* 12dfdf53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdf56 jmp 0x12dfdf90 */
  goto L_12dfdf90;
L_12dfdf58:;
  /* 12dfdf58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf5c jne 0x12dfdf8b */
  if (!C.zf) goto L_12dfdf8b;
  /* 12dfdf5e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dfdf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdf64 je 0x12dfdf6f */
  if (C.zf) goto L_12dfdf6f;
  /* 12dfdf66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dfdf6a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf6d jne 0x12dfdf8b */
  if (!C.zf) goto L_12dfdf8b;
L_12dfdf6f:;
  /* 12dfdf6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfdf72 push edx */
  push32((uint32_t)(EDX));
  /* 12dfdf73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdf76 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdf77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdf7a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdf80 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdf81 call 0x12df8f00 */
  push32(0x12dfdf86u); f_12df8f00();
  /* 12dfdf86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdf89 jmp 0x12dfdf90 */
  goto L_12dfdf90;
L_12dfdf8b:;
  /* 12dfdf8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfdf8e jmp 0x12dfdfb9 */
  goto L_12dfdfb9;
L_12dfdf90:;
  /* 12dfdf90 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dfdf94 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfdf97 jne 0x12dfdf9b */
  if (!C.zf) goto L_12dfdf9b;
  /* 12dfdf99 jmp 0x12dfdfb7 */
  goto L_12dfdfb7;
L_12dfdf9b:;
  /* 12dfdf9b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dfdf9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdfa1 jne 0x12dfdfa5 */
  if (!C.zf) goto L_12dfdfa5;
  /* 12dfdfa3 jmp 0x12dfdfb7 */
  goto L_12dfdfb7;
L_12dfdfa5:;
  /* 12dfdfa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfdfa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdfab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12dfdfaf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12dfdfb2 jmp 0x12dfdec9 */
  goto L_12dfdec9;
L_12dfdfb7:;
  /* 12dfdfb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfdfb9:;
  /* 12dfdfb9 mov esp, ebp */
  ESP = (EBP);
  /* 12dfdfbb pop ebp */
  EBP = (pop32());
  /* 12dfdfbc ret  */
  ESPCHK(0x12dfde60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12dfdfc0 (101 bytes, 36 insns) */
void f_12dfdfc0(void) {
  FTRACE(0x12dfdfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfdfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfdfc1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfdfc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdfc6 push eax */
  push32((uint32_t)(EAX));
  /* 12dfdfc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdfca push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdfcb call 0x12df8690 */
  push32(0x12dfdfd0u); f_12df8690();
  /* 12dfdfd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdfd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdfd6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12dfdfda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfdfdc je 0x12dfdff8 */
  if (C.zf) goto L_12dfdff8;
  /* 12dfdfde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdfe1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfdfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfdfe5 push 0x12e1c7b0 */
  push32((uint32_t)(0x12e1c7b0u));
  /* 12dfdfea push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfdfec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfdfef push edx */
  push32((uint32_t)(EDX));
  /* 12dfdff0 call 0x12dfde10 */
  push32(0x12dfdff5u); f_12dfde10();
  /* 12dfdff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfdff8:;
  /* 12dfdff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfdffb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12dfe002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfe004 je 0x12dfe023 */
  if (C.zf) goto L_12dfe023;
  /* 12dfe006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe009 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe00f push edx */
  push32((uint32_t)(EDX));
  /* 12dfe010 push 0x12e1c7ac */
  push32((uint32_t)(0x12e1c7acu));
  /* 12dfe015 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfe017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe01a push eax */
  push32((uint32_t)(EAX));
  /* 12dfe01b call 0x12dfde10 */
  push32(0x12dfe020u); f_12dfde10();
  /* 12dfe020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfe023:;
  /* 12dfe023 pop ebp */
  EBP = (pop32());
  /* 12dfe024 ret  */
  ESPCHK(0x12dfdfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e030 @ 0x12dfe030 (664 bytes, 264 insns) [15 switch table(s)] */
void f_12dfe030(void) {
  FTRACE(0x12dfe030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe030 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe031 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe033 push edi */
  push32((uint32_t)(EDI));
  /* 12dfe034 push esi */
  push32((uint32_t)(ESI));
  /* 12dfe035 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe038 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe03b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe03e mov eax, ecx */
  EAX = (ECX);
  /* 12dfe040 mov edx, ecx */
  EDX = (ECX);
  /* 12dfe042 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe044 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe046 jbe 0x12dfe050 */
  if ((C.cf||C.zf)) goto L_12dfe050;
  /* 12dfe048 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe04a jb 0x12dfe1c8 */
  if (C.cf) goto L_12dfe1c8;
L_12dfe050:;
  /* 12dfe050 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dfe056 jne 0x12dfe06c */
  if (!C.zf) goto L_12dfe06c;
  /* 12dfe058 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe05b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe05e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe061 jb 0x12dfe08c */
  if (C.cf) goto L_12dfe08c;
  /* 12dfe063 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe065 jmp dword ptr [edx*4 + 0x12dfe178] */
  switch (EDX) {
    case 0: goto L_12dfe188;
    case 1: goto L_12dfe190;
    case 2: goto L_12dfe19c;
    case 3: goto L_12dfe1b0;
    default: x86_unimpl("switch@0x12dfe065 out of table"); return;
  }
L_12dfe06c:;
  /* 12dfe06c mov eax, edi */
  EAX = (EDI);
  /* 12dfe06e mov edx, 3 */
  EDX = (0x3u);
  /* 12dfe073 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe076 jb 0x12dfe084 */
  if (C.cf) goto L_12dfe084;
  /* 12dfe078 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe07b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe07d jmp dword ptr [eax*4 + 0x12dfe090] */
  switch (EAX) {
    case 1: goto L_12dfe0a0;
    case 2: goto L_12dfe0cc;
    case 3: goto L_12dfe0f0;
    default: x86_unimpl("switch@0x12dfe07d out of table"); return;
  }
L_12dfe084:;
  /* 12dfe084 jmp dword ptr [ecx*4 + 0x12dfe188] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12dfe188)))); return;
  /* 12dfe08b nop  */
  /* nop */
L_12dfe08c:;
  /* 12dfe08c jmp dword ptr [ecx*4 + 0x12dfe10c] */
  switch (ECX) {
    case 0: goto L_12dfe16f;
    case 1: goto L_12dfe15c;
    case 2: goto L_12dfe154;
    case 3: goto L_12dfe14c;
    case 4: goto L_12dfe144;
    case 5: goto L_12dfe13c;
    case 6: goto L_12dfe134;
    case 7: goto L_12dfe12c;
    default: x86_unimpl("switch@0x12dfe08c out of table"); return;
  }
  /* 12dfe093 nop  */
  /* nop */
L_12dfe0a0:;
  /* 12dfe0a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe0a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfe0a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfe0a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfe0a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfe0ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfe0af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe0b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfe0b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe0b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe0bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe0be jb 0x12dfe08c */
  if (C.cf) goto L_12dfe08c;
  /* 12dfe0c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe0c2 jmp dword ptr [edx*4 + 0x12dfe178] */
  switch (EDX) {
    case 0: goto L_12dfe188;
    case 1: goto L_12dfe190;
    case 2: goto L_12dfe19c;
    case 3: goto L_12dfe1b0;
    default: x86_unimpl("switch@0x12dfe0c2 out of table"); return;
  }
  /* 12dfe0c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfe0cc:;
  /* 12dfe0cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe0ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfe0d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfe0d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfe0d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe0d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfe0db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe0de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe0e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe0e4 jb 0x12dfe08c */
  if (C.cf) goto L_12dfe08c;
  /* 12dfe0e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe0e8 jmp dword ptr [edx*4 + 0x12dfe178] */
  switch (EDX) {
    case 0: goto L_12dfe188;
    case 1: goto L_12dfe190;
    case 2: goto L_12dfe19c;
    case 3: goto L_12dfe1b0;
    default: x86_unimpl("switch@0x12dfe0e8 out of table"); return;
  }
  /* 12dfe0ef nop  */
  /* nop */
L_12dfe0f0:;
  /* 12dfe0f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe0f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfe0f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfe0f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dfe0f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe0fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dfe0fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe0fe jb 0x12dfe08c */
  if (C.cf) goto L_12dfe08c;
  /* 12dfe100 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe102 jmp dword ptr [edx*4 + 0x12dfe178] */
  switch (EDX) {
    case 0: goto L_12dfe188;
    case 1: goto L_12dfe190;
    case 2: goto L_12dfe19c;
    case 3: goto L_12dfe1b0;
    default: x86_unimpl("switch@0x12dfe102 out of table"); return;
  }
  /* 12dfe109 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfe12c:;
  /* 12dfe12c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12dfe130 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12dfe134:;
  /* 12dfe134 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12dfe138 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12dfe13c:;
  /* 12dfe13c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12dfe140 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12dfe144:;
  /* 12dfe144 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12dfe148 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12dfe14c:;
  /* 12dfe14c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12dfe150 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12dfe154:;
  /* 12dfe154 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12dfe158 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12dfe15c:;
  /* 12dfe15c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12dfe160 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12dfe164 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dfe16b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe16d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dfe16f:;
  /* 12dfe16f jmp dword ptr [edx*4 + 0x12dfe178] */
  switch (EDX) {
    case 0: goto L_12dfe188;
    case 1: goto L_12dfe190;
    case 2: goto L_12dfe19c;
    case 3: goto L_12dfe1b0;
    default: x86_unimpl("switch@0x12dfe16f out of table"); return;
  }
  /* 12dfe176 mov edi, edi */
  EDI = (EDI);
L_12dfe188:;
  /* 12dfe188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe18b pop esi */
  ESI = (pop32());
  /* 12dfe18c pop edi */
  EDI = (pop32());
  /* 12dfe18d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe18e ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe18f nop  */
  /* nop */
L_12dfe190:;
  /* 12dfe190 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfe192 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfe194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe197 pop esi */
  ESI = (pop32());
  /* 12dfe198 pop edi */
  EDI = (pop32());
  /* 12dfe199 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe19a ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe19b nop  */
  /* nop */
L_12dfe19c:;
  /* 12dfe19c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfe19e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfe1a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfe1a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfe1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe1a9 pop esi */
  ESI = (pop32());
  /* 12dfe1aa pop edi */
  EDI = (pop32());
  /* 12dfe1ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe1ac ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe1ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfe1b0:;
  /* 12dfe1b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfe1b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfe1b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfe1b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfe1ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfe1bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfe1c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe1c3 pop esi */
  ESI = (pop32());
  /* 12dfe1c4 pop edi */
  EDI = (pop32());
  /* 12dfe1c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe1c6 ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe1c7 nop  */
  /* nop */
L_12dfe1c8:;
  /* 12dfe1c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12dfe1cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12dfe1d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dfe1d6 jne 0x12dfe1fc */
  if (!C.zf) goto L_12dfe1fc;
  /* 12dfe1d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe1db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe1de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe1e1 jb 0x12dfe1f0 */
  if (C.cf) goto L_12dfe1f0;
  /* 12dfe1e3 std  */
  C.df=1;
  /* 12dfe1e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe1e6 cld  */
  C.df=0;
  /* 12dfe1e7 jmp dword ptr [edx*4 + 0x12dfe310] */
  switch (EDX) {
    case 0: goto L_12dfe320;
    case 1: goto L_12dfe328;
    case 2: goto L_12dfe338;
    case 3: goto L_12dfe34c;
    default: x86_unimpl("switch@0x12dfe1e7 out of table"); return;
  }
  /* 12dfe1ee mov edi, edi */
  EDI = (EDI);
L_12dfe1f0:;
  /* 12dfe1f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dfe1f2 jmp dword ptr [ecx*4 + 0x12dfe2c0] */
  switch (ECX) {
    case 0: goto L_12dfe307;
    default: x86_unimpl("switch@0x12dfe1f2 out of table"); return;
  }
  /* 12dfe1f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfe1fc:;
  /* 12dfe1fc mov eax, edi */
  EAX = (EDI);
  /* 12dfe1fe mov edx, 3 */
  EDX = (0x3u);
  /* 12dfe203 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe206 jb 0x12dfe214 */
  if (C.cf) goto L_12dfe214;
  /* 12dfe208 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe20b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe20d jmp dword ptr [eax*4 + 0x12dfe218] */
  switch (EAX) {
    case 1: goto L_12dfe228;
    case 2: goto L_12dfe248;
    case 3: goto L_12dfe270;
    default: x86_unimpl("switch@0x12dfe20d out of table"); return;
  }
L_12dfe214:;
  /* 12dfe214 jmp dword ptr [ecx*4 + 0x12dfe310] */
  switch (ECX) {
    case 0: goto L_12dfe320;
    case 1: goto L_12dfe328;
    case 2: goto L_12dfe338;
    case 3: goto L_12dfe34c;
    default: x86_unimpl("switch@0x12dfe214 out of table"); return;
  }
  /* 12dfe21b nop  */
  /* nop */
L_12dfe228:;
  /* 12dfe228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfe22b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe22d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfe230 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12dfe231 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe234 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12dfe235 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe238 jb 0x12dfe1f0 */
  if (C.cf) goto L_12dfe1f0;
  /* 12dfe23a std  */
  C.df=1;
  /* 12dfe23b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe23d cld  */
  C.df=0;
  /* 12dfe23e jmp dword ptr [edx*4 + 0x12dfe310] */
  switch (EDX) {
    case 0: goto L_12dfe320;
    case 1: goto L_12dfe328;
    case 2: goto L_12dfe338;
    case 3: goto L_12dfe34c;
    default: x86_unimpl("switch@0x12dfe23e out of table"); return;
  }
  /* 12dfe245 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfe248:;
  /* 12dfe248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfe24b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe24d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfe250 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfe253 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe256 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfe259 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe25c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe25f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe262 jb 0x12dfe1f0 */
  if (C.cf) goto L_12dfe1f0;
  /* 12dfe264 std  */
  C.df=1;
  /* 12dfe265 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe267 cld  */
  C.df=0;
  /* 12dfe268 jmp dword ptr [edx*4 + 0x12dfe310] */
  switch (EDX) {
    case 0: goto L_12dfe320;
    case 1: goto L_12dfe328;
    case 2: goto L_12dfe338;
    case 3: goto L_12dfe34c;
    default: x86_unimpl("switch@0x12dfe268 out of table"); return;
  }
  /* 12dfe26f nop  */
  /* nop */
L_12dfe270:;
  /* 12dfe270 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfe273 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe275 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfe278 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfe27b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfe27e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfe281 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfe284 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfe287 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe28a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe28d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe290 jb 0x12dfe1f0 */
  if (C.cf) goto L_12dfe1f0;
  /* 12dfe296 std  */
  C.df=1;
  /* 12dfe297 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfe299 cld  */
  C.df=0;
  /* 12dfe29a jmp dword ptr [edx*4 + 0x12dfe310] */
  switch (EDX) {
    case 0: goto L_12dfe320;
    case 1: goto L_12dfe328;
    case 2: goto L_12dfe338;
    case 3: goto L_12dfe34c;
    default: x86_unimpl("switch@0x12dfe29a out of table"); return;
  }
  /* 12dfe2a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12dfe2a5 loop 0x12dfe286 */
  x86_unimpl("loop @ 0x12dfe2a5");
  /* 12dfe2a7 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfe2a9 loop 0x12dfe28a */
  x86_unimpl("loop @ 0x12dfe2a9");
  /* 12dfe2ab adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfe2ad loop 0x12dfe28e */
  x86_unimpl("loop @ 0x12dfe2ad");
  /* 12dfe2af adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfe2b1 loop 0x12dfe292 */
  x86_unimpl("loop @ 0x12dfe2b1");
  /* 12dfe2b3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfe2b5 loop 0x12dfe296 */
  x86_unimpl("loop @ 0x12dfe2b5");
  /* 12dfe2b7 adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfe2b9 loop 0x12dfe29a */
  x86_unimpl("loop @ 0x12dfe2b9");
  /* 12dfe2bb adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfe2bd loop 0x12dfe29e */
  x86_unimpl("loop @ 0x12dfe2bd");
  /* 12dfe2c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12dfe2c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12dfe2cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12dfe2d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12dfe2d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12dfe2d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12dfe2dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12dfe2e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12dfe2e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12dfe2e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12dfe2ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12dfe2f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12dfe2f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12dfe2f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12dfe2fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dfe303 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe305 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dfe307:;
  /* 12dfe307 jmp dword ptr [edx*4 + 0x12dfe310] */
  switch (EDX) {
    case 0: goto L_12dfe320;
    case 1: goto L_12dfe328;
    case 2: goto L_12dfe338;
    case 3: goto L_12dfe34c;
    default: x86_unimpl("switch@0x12dfe307 out of table"); return;
  }
  /* 12dfe30e mov edi, edi */
  EDI = (EDI);
L_12dfe320:;
  /* 12dfe320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe323 pop esi */
  ESI = (pop32());
  /* 12dfe324 pop edi */
  EDI = (pop32());
  /* 12dfe325 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe326 ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe327 nop  */
  /* nop */
L_12dfe328:;
  /* 12dfe328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfe32b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfe32e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe331 pop esi */
  ESI = (pop32());
  /* 12dfe332 pop edi */
  EDI = (pop32());
  /* 12dfe333 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe334 ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe335 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfe338:;
  /* 12dfe338 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfe33b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfe33e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfe341 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfe344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe347 pop esi */
  ESI = (pop32());
  /* 12dfe348 pop edi */
  EDI = (pop32());
  /* 12dfe349 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe34a ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
  /* 12dfe34b nop  */
  /* nop */
L_12dfe34c:;
  /* 12dfe34c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfe34f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfe352 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfe355 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfe358 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfe35b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfe35e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe361 pop esi */
  ESI = (pop32());
  /* 12dfe362 pop edi */
  EDI = (pop32());
  /* 12dfe363 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfe364 ret  */
  ESPCHK(0x12dfe030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x12dfe370 (421 bytes, 148 insns) */
void f_12dfe370(void) {
  FTRACE(0x12dfe370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe370 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe371 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe373 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dfe375 push 0x12e1c7c0 */
  push32((uint32_t)(0x12e1c7c0u));
  /* 12dfe37a push 0x12e00f60 */
  push32((uint32_t)(0x12e00f60u));
  /* 12dfe37f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dfe385 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe386 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dfe38d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe390 push ebx */
  push32((uint32_t)(EBX));
  /* 12dfe391 push esi */
  push32((uint32_t)(ESI));
  /* 12dfe392 push edi */
  push32((uint32_t)(EDI));
  /* 12dfe393 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dfe396 cmp dword ptr [0x12e208c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe39d jne 0x12dfe3ee */
  if (!C.zf) goto L_12dfe3ee;
  /* 12dfe39f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12dfe3a2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe3a5 push 0x12e1c7b8 */
  push32((uint32_t)(0x12e1c7b8u));
  /* 12dfe3aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe3ac call dword ptr [0x12e232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232dc))), 0x12dfe3b2u);
  /* 12dfe3b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe3b4 je 0x12dfe3c2 */
  if (C.zf) goto L_12dfe3c2;
  /* 12dfe3b6 mov dword ptr [0x12e208c8], 1 */
  w32((uint32_t)(0x12e208c8), (0x1u));
  /* 12dfe3c0 jmp 0x12dfe3ee */
  goto L_12dfe3ee;
L_12dfe3c2:;
  /* 12dfe3c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12dfe3c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe3c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe3c8 push 0x12e1c7b4 */
  push32((uint32_t)(0x12e1c7b4u));
  /* 12dfe3cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe3cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe3d1 call dword ptr [0x12e23290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23290))), 0x12dfe3d7u);
  /* 12dfe3d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe3d9 je 0x12dfe3e7 */
  if (C.zf) goto L_12dfe3e7;
  /* 12dfe3db mov dword ptr [0x12e208c8], 2 */
  w32((uint32_t)(0x12e208c8), (0x2u));
  /* 12dfe3e5 jmp 0x12dfe3ee */
  goto L_12dfe3ee;
L_12dfe3e7:;
  /* 12dfe3e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe3e9 jmp 0x12dfe518 */
  goto L_12dfe518;
L_12dfe3ee:;
  /* 12dfe3ee cmp dword ptr [0x12e208c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e208c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe3f5 jne 0x12dfe425 */
  if (!C.zf) goto L_12dfe425;
  /* 12dfe3f7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe3fb jne 0x12dfe406 */
  if (!C.zf) goto L_12dfe406;
  /* 12dfe3fd mov edx, dword ptr [0x12e208b0] */
  EDX = (r32((uint32_t)(0x12e208b0)));
  /* 12dfe403 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12dfe406:;
  /* 12dfe406 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfe409 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe40a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe40d push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe40e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe411 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe415 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe416 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dfe419 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe41a call dword ptr [0x12e23290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23290))), 0x12dfe420u);
  /* 12dfe420 jmp 0x12dfe518 */
  goto L_12dfe518;
L_12dfe425:;
  /* 12dfe425 cmp dword ptr [0x12e208c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e208c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe42c jne 0x12dfe516 */
  if (!C.zf) goto L_12dfe516;
  /* 12dfe432 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe436 jne 0x12dfe441 */
  if (!C.zf) goto L_12dfe441;
  /* 12dfe438 mov edx, dword ptr [0x12e208c0] */
  EDX = (r32((uint32_t)(0x12e208c0)));
  /* 12dfe43e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12dfe441:;
  /* 12dfe441 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe443 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe445 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe448 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe449 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe44c push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe44d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dfe450 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dfe452 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe454 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe457 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe45a push edx */
  push32((uint32_t)(EDX));
  /* 12dfe45b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dfe45e push eax */
  push32((uint32_t)(EAX));
  /* 12dfe45f call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12dfe465u);
  /* 12dfe465 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dfe468 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe46c jne 0x12dfe475 */
  if (!C.zf) goto L_12dfe475;
  /* 12dfe46e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe470 jmp 0x12dfe518 */
  goto L_12dfe518;
L_12dfe475:;
  /* 12dfe475 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfe47c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfe47f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dfe481 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe484 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dfe486 call 0x12df8880 */
  push32(0x12dfe48bu); f_12df8880();
  /* 12dfe48b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12dfe48e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dfe491 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfe494 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dfe497 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfe49a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12dfe49c push edx */
  push32((uint32_t)(EDX));
  /* 12dfe49d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe49f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe4a2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe4a3 call 0x12df9e00 */
  push32(0x12dfe4a8u); f_12df9e00();
  /* 12dfe4a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe4ab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dfe4b2 jmp 0x12dfe4cb */
  goto L_12dfe4cb;
  /* 12dfe4b4 mov eax, 1 */
  EAX = (0x1u);
  /* 12dfe4b9 ret  */
  ESPCHK(0x12dfe370u, _esp0);
  ESP += 4; return;
  /* 12dfe4ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfe4bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dfe4c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dfe4cb:;
  /* 12dfe4cb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe4cf jne 0x12dfe4d5 */
  if (!C.zf) goto L_12dfe4d5;
  /* 12dfe4d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe4d3 jmp 0x12dfe518 */
  goto L_12dfe518;
L_12dfe4d5:;
  /* 12dfe4d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfe4d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe4d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe4dc push edx */
  push32((uint32_t)(EDX));
  /* 12dfe4dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe4e0 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe4e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe4e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe4e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe4e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dfe4ea push edx */
  push32((uint32_t)(EDX));
  /* 12dfe4eb call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12dfe4f1u);
  /* 12dfe4f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfe4f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe4f8 jne 0x12dfe4fe */
  if (!C.zf) goto L_12dfe4fe;
  /* 12dfe4fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe4fc jmp 0x12dfe518 */
  goto L_12dfe518;
L_12dfe4fe:;
  /* 12dfe4fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfe501 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe502 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfe505 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe506 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe509 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe50a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe50d push eax */
  push32((uint32_t)(EAX));
  /* 12dfe50e call dword ptr [0x12e232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232dc))), 0x12dfe514u);
  /* 12dfe514 jmp 0x12dfe518 */
  goto L_12dfe518;
L_12dfe516:;
  /* 12dfe516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfe518:;
  /* 12dfe518 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12dfe51b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfe51e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dfe525 pop edi */
  EDI = (pop32());
  /* 12dfe526 pop esi */
  ESI = (pop32());
  /* 12dfe527 pop ebx */
  EBX = (pop32());
  /* 12dfe528 mov esp, ebp */
  ESP = (EBP);
  /* 12dfe52a pop ebp */
  EBP = (pop32());
  /* 12dfe52b ret  */
  ESPCHK(0x12dfe370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e530 @ 0x12dfe530 (727 bytes, 263 insns) */
void f_12dfe530(void) {
  FTRACE(0x12dfe530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe530 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe531 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe533 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dfe535 push 0x12e1c7d0 */
  push32((uint32_t)(0x12e1c7d0u));
  /* 12dfe53a push 0x12e00f60 */
  push32((uint32_t)(0x12e00f60u));
  /* 12dfe53f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dfe545 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe546 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dfe54d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe550 push ebx */
  push32((uint32_t)(EBX));
  /* 12dfe551 push esi */
  push32((uint32_t)(ESI));
  /* 12dfe552 push edi */
  push32((uint32_t)(EDI));
  /* 12dfe553 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dfe556 cmp dword ptr [0x12e208cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe55d jne 0x12dfe5b6 */
  if (!C.zf) goto L_12dfe5b6;
  /* 12dfe55f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe561 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe563 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe565 push 0x12e1c7b8 */
  push32((uint32_t)(0x12e1c7b8u));
  /* 12dfe56a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfe56f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe571 call dword ptr [0x12e232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e4))), 0x12dfe577u);
  /* 12dfe577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe579 je 0x12dfe587 */
  if (C.zf) goto L_12dfe587;
  /* 12dfe57b mov dword ptr [0x12e208cc], 1 */
  w32((uint32_t)(0x12e208cc), (0x1u));
  /* 12dfe585 jmp 0x12dfe5b6 */
  goto L_12dfe5b6;
L_12dfe587:;
  /* 12dfe587 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe589 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe58b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe58d push 0x12e1c7b4 */
  push32((uint32_t)(0x12e1c7b4u));
  /* 12dfe592 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfe597 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe599 call dword ptr [0x12e232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e0))), 0x12dfe59fu);
  /* 12dfe59f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe5a1 je 0x12dfe5af */
  if (C.zf) goto L_12dfe5af;
  /* 12dfe5a3 mov dword ptr [0x12e208cc], 2 */
  w32((uint32_t)(0x12e208cc), (0x2u));
  /* 12dfe5ad jmp 0x12dfe5b6 */
  goto L_12dfe5b6;
L_12dfe5af:;
  /* 12dfe5af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe5b1 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe5b6:;
  /* 12dfe5b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe5ba jle 0x12dfe5cf */
  if ((C.zf||C.sf!=C.of)) goto L_12dfe5cf;
  /* 12dfe5bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfe5bf push eax */
  push32((uint32_t)(EAX));
  /* 12dfe5c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe5c4 call 0x12dfe840 */
  push32(0x12dfe5c9u); f_12dfe840();
  /* 12dfe5c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe5cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12dfe5cf:;
  /* 12dfe5cf cmp dword ptr [0x12e208cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e208cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe5d6 jne 0x12dfe5fb */
  if (!C.zf) goto L_12dfe5fb;
  /* 12dfe5d8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dfe5db push edx */
  push32((uint32_t)(EDX));
  /* 12dfe5dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dfe5df push eax */
  push32((uint32_t)(EAX));
  /* 12dfe5e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfe5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe5e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe5e7 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe5e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe5eb push eax */
  push32((uint32_t)(EAX));
  /* 12dfe5ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe5ef push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe5f0 call dword ptr [0x12e232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e0))), 0x12dfe5f6u);
  /* 12dfe5f6 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe5fb:;
  /* 12dfe5fb cmp dword ptr [0x12e208cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e208cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe602 jne 0x12dfe81f */
  if (!C.zf) goto L_12dfe81f;
  /* 12dfe608 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe60c jne 0x12dfe617 */
  if (!C.zf) goto L_12dfe617;
  /* 12dfe60e mov edx, dword ptr [0x12e208c0] */
  EDX = (r32((uint32_t)(0x12e208c0)));
  /* 12dfe614 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12dfe617:;
  /* 12dfe617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe619 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe61b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfe61e push eax */
  push32((uint32_t)(EAX));
  /* 12dfe61f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe622 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe623 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12dfe626 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dfe628 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe62a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe62d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe630 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe631 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dfe634 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe635 call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12dfe63bu);
  /* 12dfe63b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dfe63e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe642 jne 0x12dfe64b */
  if (!C.zf) goto L_12dfe64b;
  /* 12dfe644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe646 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe64b:;
  /* 12dfe64b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfe652 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfe655 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dfe657 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe65a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dfe65c call 0x12df8880 */
  push32(0x12dfe661u); f_12df8880();
  /* 12dfe661 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12dfe664 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dfe667 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfe66a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dfe66d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dfe674 jmp 0x12dfe68d */
  goto L_12dfe68d;
  /* 12dfe676 mov eax, 1 */
  EAX = (0x1u);
  /* 12dfe67b ret  */
  ESPCHK(0x12dfe530u, _esp0);
  ESP += 4; return;
  /* 12dfe67c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfe67f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dfe686 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dfe68d:;
  /* 12dfe68d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe691 jne 0x12dfe69a */
  if (!C.zf) goto L_12dfe69a;
  /* 12dfe693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe695 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe69a:;
  /* 12dfe69a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfe69d push edx */
  push32((uint32_t)(EDX));
  /* 12dfe69e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe6a1 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe6a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dfe6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe6a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfe6a9 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe6aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfe6ac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dfe6af push eax */
  push32((uint32_t)(EAX));
  /* 12dfe6b0 call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12dfe6b6u);
  /* 12dfe6b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe6b8 jne 0x12dfe6c1 */
  if (!C.zf) goto L_12dfe6c1;
  /* 12dfe6ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe6bc jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe6c1:;
  /* 12dfe6c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe6c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe6c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfe6c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe6c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe6cc push edx */
  push32((uint32_t)(EDX));
  /* 12dfe6cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe6d0 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe6d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe6d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe6d5 call dword ptr [0x12e232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e4))), 0x12dfe6dbu);
  /* 12dfe6db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfe6de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe6e2 jne 0x12dfe6eb */
  if (!C.zf) goto L_12dfe6eb;
  /* 12dfe6e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe6e6 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe6eb:;
  /* 12dfe6eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe6ee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe6f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfe6f6 je 0x12dfe73b */
  if (C.zf) goto L_12dfe73b;
  /* 12dfe6f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe6fc je 0x12dfe736 */
  if (C.zf) goto L_12dfe736;
  /* 12dfe6fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfe701 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe704 jle 0x12dfe70d */
  if ((C.zf||C.sf!=C.of)) goto L_12dfe70d;
  /* 12dfe706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe708 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe70d:;
  /* 12dfe70d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dfe710 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe711 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dfe714 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe715 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfe718 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe719 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe71c push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe71d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe720 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe724 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe725 call dword ptr [0x12e232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e4))), 0x12dfe72bu);
  /* 12dfe72b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe72d jne 0x12dfe736 */
  if (!C.zf) goto L_12dfe736;
  /* 12dfe72f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe731 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe736:;
  /* 12dfe736 jmp 0x12dfe81a */
  goto L_12dfe81a;
L_12dfe73b:;
  /* 12dfe73b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfe73e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dfe741 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dfe748 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfe74b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dfe74d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe750 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dfe752 call 0x12df8880 */
  push32(0x12dfe757u); f_12df8880();
  /* 12dfe757 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12dfe75a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dfe75d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfe760 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dfe763 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dfe76a jmp 0x12dfe783 */
  goto L_12dfe783;
  /* 12dfe76c mov eax, 1 */
  EAX = (0x1u);
  /* 12dfe771 ret  */
  ESPCHK(0x12dfe530u, _esp0);
  ESP += 4; return;
  /* 12dfe772 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfe775 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dfe77c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dfe783:;
  /* 12dfe783 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe787 jne 0x12dfe790 */
  if (!C.zf) goto L_12dfe790;
  /* 12dfe789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe78b jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe790:;
  /* 12dfe790 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfe793 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe794 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfe797 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe798 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfe79b push edx */
  push32((uint32_t)(EDX));
  /* 12dfe79c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfe79f push eax */
  push32((uint32_t)(EAX));
  /* 12dfe7a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe7a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe7a7 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe7a8 call dword ptr [0x12e232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e4))), 0x12dfe7aeu);
  /* 12dfe7ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe7b0 jne 0x12dfe7b6 */
  if (!C.zf) goto L_12dfe7b6;
  /* 12dfe7b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe7b4 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe7b6:;
  /* 12dfe7b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe7ba jne 0x12dfe7ea */
  if (!C.zf) goto L_12dfe7ea;
  /* 12dfe7bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe7be push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe7c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe7c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe7c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfe7c7 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe7c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfe7cb push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe7cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dfe7d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dfe7d4 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe7d5 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12dfe7dbu);
  /* 12dfe7db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfe7de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe7e2 jne 0x12dfe7e8 */
  if (!C.zf) goto L_12dfe7e8;
  /* 12dfe7e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe7e6 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe7e8:;
  /* 12dfe7e8 jmp 0x12dfe81a */
  goto L_12dfe81a;
L_12dfe7ea:;
  /* 12dfe7ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe7ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe7ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dfe7f1 push eax */
  push32((uint32_t)(EAX));
  /* 12dfe7f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dfe7f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe7f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfe7f9 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe7fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfe7fd push eax */
  push32((uint32_t)(EAX));
  /* 12dfe7fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dfe803 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dfe806 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe807 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12dfe80du);
  /* 12dfe80d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfe810 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe814 jne 0x12dfe81a */
  if (!C.zf) goto L_12dfe81a;
  /* 12dfe816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe818 jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe81a:;
  /* 12dfe81a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfe81d jmp 0x12dfe821 */
  goto L_12dfe821;
L_12dfe81f:;
  /* 12dfe81f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfe821:;
  /* 12dfe821 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12dfe824 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfe827 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dfe82e pop edi */
  EDI = (pop32());
  /* 12dfe82f pop esi */
  ESI = (pop32());
  /* 12dfe830 pop ebx */
  EBX = (pop32());
  /* 12dfe831 mov esp, ebp */
  ESP = (EBP);
  /* 12dfe833 pop ebp */
  EBP = (pop32());
  /* 12dfe834 ret  */
  ESPCHK(0x12dfe530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e840 @ 0x12dfe840 (80 bytes, 32 insns) */
void f_12dfe840(void) {
  FTRACE(0x12dfe840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe840 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe841 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe846 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfe849 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfe84c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe84f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dfe852:;
  /* 12dfe852 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe858 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe85b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfe85e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfe860 je 0x12dfe877 */
  if (C.zf) goto L_12dfe877;
  /* 12dfe862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfe865 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dfe868 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfe86a je 0x12dfe877 */
  if (C.zf) goto L_12dfe877;
  /* 12dfe86c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfe86f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfe875 jmp 0x12dfe852 */
  goto L_12dfe852;
L_12dfe877:;
  /* 12dfe877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfe87a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dfe87d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfe87f jne 0x12dfe889 */
  if (!C.zf) goto L_12dfe889;
  /* 12dfe881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfe884 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe887 jmp 0x12dfe88c */
  goto L_12dfe88c;
L_12dfe889:;
  /* 12dfe889 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12dfe88c:;
  /* 12dfe88c mov esp, ebp */
  ESP = (EBP);
  /* 12dfe88e pop ebp */
  EBP = (pop32());
  /* 12dfe88f ret  */
  ESPCHK(0x12dfe840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e890 @ 0x12dfe890 (130 bytes, 50 insns) */
void f_12dfe890(void) {
  FTRACE(0x12dfe890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe890 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe891 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe893 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe894 push ebx */
  push32((uint32_t)(EBX));
  /* 12dfe895 push esi */
  push32((uint32_t)(ESI));
  /* 12dfe896 push edi */
  push32((uint32_t)(EDI));
  /* 12dfe897 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dfe89e:;
  /* 12dfe89e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe8a2 jne 0x12dfe8c2 */
  if (!C.zf) goto L_12dfe8c2;
  /* 12dfe8a4 push 0x12e1c7f4 */
  push32((uint32_t)(0x12e1c7f4u));
  /* 12dfe8a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe8ab push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12dfe8ad push 0x12e1c7e8 */
  push32((uint32_t)(0x12e1c7e8u));
  /* 12dfe8b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfe8b4 call 0x12df3680 */
  push32(0x12dfe8b9u); f_12df3680();
  /* 12dfe8b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe8bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe8bf jne 0x12dfe8c2 */
  if (!C.zf) goto L_12dfe8c2;
  /* 12dfe8c1 int3  */
  x86_unimpl("int3 @ 0x12dfe8c1");
L_12dfe8c2:;
  /* 12dfe8c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe8c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe8c6 jne 0x12dfe89e */
  if (!C.zf) goto L_12dfe89e;
  /* 12dfe8c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe8cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfe8ce and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe8d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfe8d3 je 0x12dfe8e1 */
  if (C.zf) goto L_12dfe8e1;
  /* 12dfe8d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe8d8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12dfe8df jmp 0x12dfe908 */
  goto L_12dfe908;
L_12dfe8e1:;
  /* 12dfe8e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe8e5 call 0x12df96c0 */
  push32(0x12dfe8eau); f_12df96c0();
  /* 12dfe8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe8ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe8f0 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe8f1 call 0x12dfe920 */
  push32(0x12dfe8f6u); f_12dfe920();
  /* 12dfe8f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe8f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfe8fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe8ff push eax */
  push32((uint32_t)(EAX));
  /* 12dfe900 call 0x12df9730 */
  push32(0x12dfe905u); f_12df9730();
  /* 12dfe905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfe908:;
  /* 12dfe908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfe90b pop edi */
  EDI = (pop32());
  /* 12dfe90c pop esi */
  ESI = (pop32());
  /* 12dfe90d pop ebx */
  EBX = (pop32());
  /* 12dfe90e mov esp, ebp */
  ESP = (EBP);
  /* 12dfe910 pop ebp */
  EBP = (pop32());
  /* 12dfe911 ret  */
  ESPCHK(0x12dfe890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x12dfe920 (190 bytes, 67 insns) */
void f_12dfe920(void) {
  FTRACE(0x12dfe920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe920 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe921 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfe926 push ebx */
  push32((uint32_t)(EBX));
  /* 12dfe927 push esi */
  push32((uint32_t)(ESI));
  /* 12dfe928 push edi */
  push32((uint32_t)(EDI));
  /* 12dfe929 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dfe930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe933 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dfe936:;
  /* 12dfe936 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe93a jne 0x12dfe95a */
  if (!C.zf) goto L_12dfe95a;
  /* 12dfe93c push 0x12e1bc10 */
  push32((uint32_t)(0x12e1bc10u));
  /* 12dfe941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfe943 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12dfe945 push 0x12e1c7e8 */
  push32((uint32_t)(0x12e1c7e8u));
  /* 12dfe94a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfe94c call 0x12df3680 */
  push32(0x12dfe951u); f_12df3680();
  /* 12dfe951 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe954 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe957 jne 0x12dfe95a */
  if (!C.zf) goto L_12dfe95a;
  /* 12dfe959 int3  */
  x86_unimpl("int3 @ 0x12dfe959");
L_12dfe95a:;
  /* 12dfe95a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfe95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfe95e jne 0x12dfe936 */
  if (!C.zf) goto L_12dfe936;
  /* 12dfe960 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe963 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dfe966 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfe96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe96d je 0x12dfe9ca */
  if (C.zf) goto L_12dfe9ca;
  /* 12dfe96f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe972 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe973 call 0x12dfd3c0 */
  push32(0x12dfe978u); f_12dfd3c0();
  /* 12dfe978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe97b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfe97e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe981 push edx */
  push32((uint32_t)(EDX));
  /* 12dfe982 call 0x12e01170 */
  push32(0x12dfe987u); f_12e01170();
  /* 12dfe987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe98a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe98d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfe990 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe991 call 0x12e01040 */
  push32(0x12dfe996u); f_12e01040();
  /* 12dfe996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfe99b jge 0x12dfe9a6 */
  if ((C.sf==C.of)) goto L_12dfe9a6;
  /* 12dfe99d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dfe9a4 jmp 0x12dfe9ca */
  goto L_12dfe9ca;
L_12dfe9a6:;
  /* 12dfe9a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe9a9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe9ad je 0x12dfe9ca */
  if (C.zf) goto L_12dfe9ca;
  /* 12dfe9af push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfe9b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe9b4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dfe9b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe9b8 call 0x12df6170 */
  push32(0x12dfe9bdu); f_12df6170();
  /* 12dfe9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfe9c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe9c3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12dfe9ca:;
  /* 12dfe9ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfe9cd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12dfe9d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfe9d7 pop edi */
  EDI = (pop32());
  /* 12dfe9d8 pop esi */
  ESI = (pop32());
  /* 12dfe9d9 pop ebx */
  EBX = (pop32());
  /* 12dfe9da mov esp, ebp */
  ESP = (EBP);
  /* 12dfe9dc pop ebp */
  EBP = (pop32());
  /* 12dfe9dd ret  */
  ESPCHK(0x12dfe920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x12dfe9e0 (210 bytes, 63 insns) */
void f_12dfe9e0(void) {
  FTRACE(0x12dfe9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfe9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfe9e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfe9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfe9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe9e7 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfe9ed jae 0x12dfea11 */
  if (!C.cf) goto L_12dfea11;
  /* 12dfe9ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe9f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dfe9f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfe9f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dfe9fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfe9fe mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12dfea05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dfea0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfea0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfea0f jne 0x12dfea24 */
  if (!C.zf) goto L_12dfea24;
L_12dfea11:;
  /* 12dfea11 call 0x12dfcc50 */
  push32(0x12dfea16u); f_12dfcc50();
  /* 12dfea16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dfea1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfea1f jmp 0x12dfeaae */
  goto L_12dfeaae;
L_12dfea24:;
  /* 12dfea24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfea27 push edx */
  push32((uint32_t)(EDX));
  /* 12dfea28 call 0x12dfd180 */
  push32(0x12dfea2du); f_12dfd180();
  /* 12dfea2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfea30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfea33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dfea36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfea39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfea3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfea3f mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12dfea46 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12dfea4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfea4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfea50 je 0x12dfea8d */
  if (C.zf) goto L_12dfea8d;
  /* 12dfea52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfea55 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfea56 call 0x12dfd000 */
  push32(0x12dfea5bu); f_12dfd000();
  /* 12dfea5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfea5e push eax */
  push32((uint32_t)(EAX));
  /* 12dfea5f call dword ptr [0x12e232e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232e8))), 0x12dfea65u);
  /* 12dfea65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfea67 jne 0x12dfea74 */
  if (!C.zf) goto L_12dfea74;
  /* 12dfea69 call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12dfea6fu);
  /* 12dfea6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfea72 jmp 0x12dfea7b */
  goto L_12dfea7b;
L_12dfea74:;
  /* 12dfea74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dfea7b:;
  /* 12dfea7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfea7f jne 0x12dfea83 */
  if (!C.zf) goto L_12dfea83;
  /* 12dfea81 jmp 0x12dfea9f */
  goto L_12dfea9f;
L_12dfea83:;
  /* 12dfea83 call 0x12dfcc60 */
  push32(0x12dfea88u); f_12dfcc60();
  /* 12dfea88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfea8b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dfea8d:;
  /* 12dfea8d call 0x12dfcc50 */
  push32(0x12dfea92u); f_12dfcc50();
  /* 12dfea92 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dfea98 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dfea9f:;
  /* 12dfea9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfeaa2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfeaa3 call 0x12dfd210 */
  push32(0x12dfeaa8u); f_12dfd210();
  /* 12dfeaa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dfeaae:;
  /* 12dfeaae mov esp, ebp */
  ESP = (EBP);
  /* 12dfeab0 pop ebp */
  EBP = (pop32());
  /* 12dfeab1 ret  */
  ESPCHK(0x12dfe9e0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12dfeac0 (219 bytes, 64 insns) */
void f_12dfeac0(void) {
  FTRACE(0x12dfeac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfeac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfeac1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfeac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfeac4 cmp dword ptr [0x12e208bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfeacb je 0x12dfeb61 */
  if (C.zf) goto L_12dfeb61;
  /* 12dfead1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12dfead3 push 0x12e1c804 */
  push32((uint32_t)(0x12e1c804u));
  /* 12dfead8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfeada push 0xac */
  push32((uint32_t)(0xacu));
  /* 12dfeadf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfeae1 call 0x12df5af0 */
  push32(0x12dfeae6u); f_12df5af0();
  /* 12dfeae6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeae9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfeaec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfeaf0 jne 0x12dfeafc */
  if (!C.zf) goto L_12dfeafc;
  /* 12dfeaf2 mov eax, 1 */
  EAX = (0x1u);
  /* 12dfeaf7 jmp 0x12dfeb97 */
  goto L_12dfeb97;
L_12dfeafc:;
  /* 12dfeafc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeaff push eax */
  push32((uint32_t)(EAX));
  /* 12dfeb00 call 0x12dfeba0 */
  push32(0x12dfeb05u); f_12dfeba0();
  /* 12dfeb05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfeb0a je 0x12dfeb2d */
  if (C.zf) goto L_12dfeb2d;
  /* 12dfeb0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeb0f push ecx */
  push32((uint32_t)(ECX));
  /* 12dfeb10 call 0x12dff130 */
  push32(0x12dfeb15u); f_12dff130();
  /* 12dfeb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb18 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfeb1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeb1d push edx */
  push32((uint32_t)(EDX));
  /* 12dfeb1e call 0x12df6170 */
  push32(0x12dfeb23u); f_12df6170();
  /* 12dfeb23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb26 mov eax, 1 */
  EAX = (0x1u);
  /* 12dfeb2b jmp 0x12dfeb97 */
  goto L_12dfeb97;
L_12dfeb2d:;
  /* 12dfeb2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeb30 mov dword ptr [0x12e1fca8], eax */
  w32((uint32_t)(0x12e1fca8), (EAX));
  /* 12dfeb35 mov ecx, dword ptr [0x12e208d0] */
  ECX = (r32((uint32_t)(0x12e208d0)));
  /* 12dfeb3b push ecx */
  push32((uint32_t)(ECX));
  /* 12dfeb3c call 0x12dff130 */
  push32(0x12dfeb41u); f_12dff130();
  /* 12dfeb41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfeb46 mov edx, dword ptr [0x12e208d0] */
  EDX = (r32((uint32_t)(0x12e208d0)));
  /* 12dfeb4c push edx */
  push32((uint32_t)(EDX));
  /* 12dfeb4d call 0x12df6170 */
  push32(0x12dfeb52u); f_12df6170();
  /* 12dfeb52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeb58 mov dword ptr [0x12e208d0], eax */
  w32((uint32_t)(0x12e208d0), (EAX));
  /* 12dfeb5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfeb5f jmp 0x12dfeb97 */
  goto L_12dfeb97;
L_12dfeb61:;
  /* 12dfeb61 mov dword ptr [0x12e1fca8], 0x12e1fcb0 */
  w32((uint32_t)(0x12e1fca8), (0x12e1fcb0u));
  /* 12dfeb6b mov ecx, dword ptr [0x12e208d0] */
  ECX = (r32((uint32_t)(0x12e208d0)));
  /* 12dfeb71 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfeb72 call 0x12dff130 */
  push32(0x12dfeb77u); f_12dff130();
  /* 12dfeb77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfeb7c mov edx, dword ptr [0x12e208d0] */
  EDX = (r32((uint32_t)(0x12e208d0)));
  /* 12dfeb82 push edx */
  push32((uint32_t)(EDX));
  /* 12dfeb83 call 0x12df6170 */
  push32(0x12dfeb88u); f_12df6170();
  /* 12dfeb88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeb8b mov dword ptr [0x12e208d0], 0 */
  w32((uint32_t)(0x12e208d0), (0x0u));
  /* 12dfeb95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfeb97:;
  /* 12dfeb97 mov esp, ebp */
  ESP = (EBP);
  /* 12dfeb99 pop ebp */
  EBP = (pop32());
  /* 12dfeb9a ret  */
  ESPCHK(0x12dfeac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eba0 @ 0x12dfeba0 (1423 bytes, 533 insns) */
void f_12dfeba0(void) {
  FTRACE(0x12dfeba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfeba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfeba1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfeba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfeba6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfebad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfebaf mov ax, word ptr [0x12e2090a] */
  AX = (r16((uint32_t)(0x12e2090a)));
  /* 12dfebb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfebb8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfebba mov cx, word ptr [0x12e2090c] */
  CX = (r16((uint32_t)(0x12e2090c)));
  /* 12dfebc1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfebc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfebc8 jne 0x12dfebd2 */
  if (!C.zf) goto L_12dfebd2;
  /* 12dfebca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfebcd jmp 0x12dff12b */
  goto L_12dff12b;
L_12dfebd2:;
  /* 12dfebd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfebd5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfebd8 push edx */
  push32((uint32_t)(EDX));
  /* 12dfebd9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12dfebdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfebde push eax */
  push32((uint32_t)(EAX));
  /* 12dfebdf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfebe1 call 0x12e02680 */
  push32(0x12dfebe6u); f_12e02680();
  /* 12dfebe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfebe9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfebec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfebee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfebf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfebf4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfebf7 push edx */
  push32((uint32_t)(EDX));
  /* 12dfebf8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12dfebfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfebfd push eax */
  push32((uint32_t)(EAX));
  /* 12dfebfe push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfec00 call 0x12e02680 */
  push32(0x12dfec05u); f_12e02680();
  /* 12dfec05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfec0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfec0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfec10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfec13 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec16 push edx */
  push32((uint32_t)(EDX));
  /* 12dfec17 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12dfec19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfec1c push eax */
  push32((uint32_t)(EAX));
  /* 12dfec1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfec1f call 0x12e02680 */
  push32(0x12dfec24u); f_12e02680();
  /* 12dfec24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfec2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfec2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfec2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfec32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec35 push edx */
  push32((uint32_t)(EDX));
  /* 12dfec36 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12dfec38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfec3b push eax */
  push32((uint32_t)(EAX));
  /* 12dfec3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfec3e call 0x12e02680 */
  push32(0x12dfec43u); f_12e02680();
  /* 12dfec43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfec49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfec4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfec4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfec51 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec54 push edx */
  push32((uint32_t)(EDX));
  /* 12dfec55 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12dfec57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfec5a push eax */
  push32((uint32_t)(EAX));
  /* 12dfec5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfec5d call 0x12e02680 */
  push32(0x12dfec62u); f_12e02680();
  /* 12dfec62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfec68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfec6a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfec6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfec70 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec73 push edx */
  push32((uint32_t)(EDX));
  /* 12dfec74 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12dfec76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfec79 push eax */
  push32((uint32_t)(EAX));
  /* 12dfec7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfec7c call 0x12e02680 */
  push32(0x12dfec81u); f_12e02680();
  /* 12dfec81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfec84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfec87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfec89 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfec8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfec8f push edx */
  push32((uint32_t)(EDX));
  /* 12dfec90 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12dfec92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfec95 push eax */
  push32((uint32_t)(EAX));
  /* 12dfec96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfec98 call 0x12e02680 */
  push32(0x12dfec9du); f_12e02680();
  /* 12dfec9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeca0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfeca3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfeca5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfeca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfecab add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfecae push edx */
  push32((uint32_t)(EDX));
  /* 12dfecaf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12dfecb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfecb4 push eax */
  push32((uint32_t)(EAX));
  /* 12dfecb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfecb7 call 0x12e02680 */
  push32(0x12dfecbcu); f_12e02680();
  /* 12dfecbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfecbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfecc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfecc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfecc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfecca add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeccd push edx */
  push32((uint32_t)(EDX));
  /* 12dfecce push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12dfecd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfecd3 push eax */
  push32((uint32_t)(EAX));
  /* 12dfecd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfecd6 call 0x12e02680 */
  push32(0x12dfecdbu); f_12e02680();
  /* 12dfecdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfecde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfece1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfece3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfece6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfece9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfecec push edx */
  push32((uint32_t)(EDX));
  /* 12dfeced push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12dfecef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfecf2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfecf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfecf5 call 0x12e02680 */
  push32(0x12dfecfau); f_12e02680();
  /* 12dfecfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfecfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfed00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfed02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfed05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfed08 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed0b push edx */
  push32((uint32_t)(EDX));
  /* 12dfed0c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12dfed0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfed11 push eax */
  push32((uint32_t)(EAX));
  /* 12dfed12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfed14 call 0x12e02680 */
  push32(0x12dfed19u); f_12e02680();
  /* 12dfed19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfed1f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfed21 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfed24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfed27 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed2a push edx */
  push32((uint32_t)(EDX));
  /* 12dfed2b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12dfed2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfed30 push eax */
  push32((uint32_t)(EAX));
  /* 12dfed31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfed33 call 0x12e02680 */
  push32(0x12dfed38u); f_12e02680();
  /* 12dfed38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfed3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfed40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfed43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfed46 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed49 push edx */
  push32((uint32_t)(EDX));
  /* 12dfed4a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12dfed4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfed4f push eax */
  push32((uint32_t)(EAX));
  /* 12dfed50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfed52 call 0x12e02680 */
  push32(0x12dfed57u); f_12e02680();
  /* 12dfed57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfed5d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfed5f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfed62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfed65 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed68 push edx */
  push32((uint32_t)(EDX));
  /* 12dfed69 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12dfed6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfed6e push eax */
  push32((uint32_t)(EAX));
  /* 12dfed6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfed71 call 0x12e02680 */
  push32(0x12dfed76u); f_12e02680();
  /* 12dfed76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfed7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfed7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfed81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfed84 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed87 push edx */
  push32((uint32_t)(EDX));
  /* 12dfed88 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12dfed8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfed8d push eax */
  push32((uint32_t)(EAX));
  /* 12dfed8e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfed90 call 0x12e02680 */
  push32(0x12dfed95u); f_12e02680();
  /* 12dfed95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfed98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfed9b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfed9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfeda0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfeda3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeda6 push edx */
  push32((uint32_t)(EDX));
  /* 12dfeda7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12dfeda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfedac push eax */
  push32((uint32_t)(EAX));
  /* 12dfedad push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfedaf call 0x12e02680 */
  push32(0x12dfedb4u); f_12e02680();
  /* 12dfedb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfedb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfedba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfedbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfedbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfedc2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfedc5 push edx */
  push32((uint32_t)(EDX));
  /* 12dfedc6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12dfedc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfedcb push eax */
  push32((uint32_t)(EAX));
  /* 12dfedcc push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfedce call 0x12e02680 */
  push32(0x12dfedd3u); f_12e02680();
  /* 12dfedd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfedd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfedd9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfeddb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfedde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfede1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfede4 push edx */
  push32((uint32_t)(EDX));
  /* 12dfede5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12dfede7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfedea push eax */
  push32((uint32_t)(EAX));
  /* 12dfedeb push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfeded call 0x12e02680 */
  push32(0x12dfedf2u); f_12e02680();
  /* 12dfedf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfedf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfedf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfedfa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfedfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfee00 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee03 push edx */
  push32((uint32_t)(EDX));
  /* 12dfee04 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12dfee06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfee09 push eax */
  push32((uint32_t)(EAX));
  /* 12dfee0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfee0c call 0x12e02680 */
  push32(0x12dfee11u); f_12e02680();
  /* 12dfee11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfee17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfee19 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfee1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfee1f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee22 push edx */
  push32((uint32_t)(EDX));
  /* 12dfee23 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12dfee25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfee28 push eax */
  push32((uint32_t)(EAX));
  /* 12dfee29 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfee2b call 0x12e02680 */
  push32(0x12dfee30u); f_12e02680();
  /* 12dfee30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfee36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfee38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfee3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfee3e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee41 push edx */
  push32((uint32_t)(EDX));
  /* 12dfee42 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12dfee44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfee47 push eax */
  push32((uint32_t)(EAX));
  /* 12dfee48 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfee4a call 0x12e02680 */
  push32(0x12dfee4fu); f_12e02680();
  /* 12dfee4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfee55 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfee57 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfee5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfee5d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee60 push edx */
  push32((uint32_t)(EDX));
  /* 12dfee61 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12dfee63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfee66 push eax */
  push32((uint32_t)(EAX));
  /* 12dfee67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfee69 call 0x12e02680 */
  push32(0x12dfee6eu); f_12e02680();
  /* 12dfee6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfee74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfee76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfee79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfee7c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee7f push edx */
  push32((uint32_t)(EDX));
  /* 12dfee80 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12dfee82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfee85 push eax */
  push32((uint32_t)(EAX));
  /* 12dfee86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfee88 call 0x12e02680 */
  push32(0x12dfee8du); f_12e02680();
  /* 12dfee8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfee93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfee95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfee98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfee9b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfee9e push edx */
  push32((uint32_t)(EDX));
  /* 12dfee9f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12dfeea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeea4 push eax */
  push32((uint32_t)(EAX));
  /* 12dfeea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfeea7 call 0x12e02680 */
  push32(0x12dfeeacu); f_12e02680();
  /* 12dfeeac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeeaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfeeb2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfeeb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfeeb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfeeba add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeebd push edx */
  push32((uint32_t)(EDX));
  /* 12dfeebe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12dfeec0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeec3 push eax */
  push32((uint32_t)(EAX));
  /* 12dfeec4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfeec6 call 0x12e02680 */
  push32(0x12dfeecbu); f_12e02680();
  /* 12dfeecb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeece mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfeed1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfeed3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfeed6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfeed9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeedc push edx */
  push32((uint32_t)(EDX));
  /* 12dfeedd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12dfeedf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfeee2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfeee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfeee5 call 0x12e02680 */
  push32(0x12dfeeeau); f_12e02680();
  /* 12dfeeea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeeed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfeef0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfeef2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfeef5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfeef8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeefb push edx */
  push32((uint32_t)(EDX));
  /* 12dfeefc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12dfeefe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfef01 push eax */
  push32((uint32_t)(EAX));
  /* 12dfef02 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfef04 call 0x12e02680 */
  push32(0x12dfef09u); f_12e02680();
  /* 12dfef09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfef0f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfef11 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfef14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfef17 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef1a push edx */
  push32((uint32_t)(EDX));
  /* 12dfef1b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12dfef1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfef20 push eax */
  push32((uint32_t)(EAX));
  /* 12dfef21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfef23 call 0x12e02680 */
  push32(0x12dfef28u); f_12e02680();
  /* 12dfef28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfef2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfef30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfef33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfef36 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef39 push edx */
  push32((uint32_t)(EDX));
  /* 12dfef3a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12dfef3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfef3f push eax */
  push32((uint32_t)(EAX));
  /* 12dfef40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfef42 call 0x12e02680 */
  push32(0x12dfef47u); f_12e02680();
  /* 12dfef47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfef4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfef4f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfef52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfef55 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef58 push edx */
  push32((uint32_t)(EDX));
  /* 12dfef59 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12dfef5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfef5e push eax */
  push32((uint32_t)(EAX));
  /* 12dfef5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfef61 call 0x12e02680 */
  push32(0x12dfef66u); f_12e02680();
  /* 12dfef66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfef6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfef6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfef71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfef74 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef77 push edx */
  push32((uint32_t)(EDX));
  /* 12dfef78 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12dfef7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfef7d push eax */
  push32((uint32_t)(EAX));
  /* 12dfef7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfef80 call 0x12e02680 */
  push32(0x12dfef85u); f_12e02680();
  /* 12dfef85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfef8b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfef8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfef90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfef93 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfef96 push edx */
  push32((uint32_t)(EDX));
  /* 12dfef97 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12dfef99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfef9c push eax */
  push32((uint32_t)(EAX));
  /* 12dfef9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfef9f call 0x12e02680 */
  push32(0x12dfefa4u); f_12e02680();
  /* 12dfefa4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfefa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfefaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfefac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfefaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfefb2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfefb8 push edx */
  push32((uint32_t)(EDX));
  /* 12dfefb9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12dfefbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfefbe push eax */
  push32((uint32_t)(EAX));
  /* 12dfefbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfefc1 call 0x12e02680 */
  push32(0x12dfefc6u); f_12e02680();
  /* 12dfefc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfefc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfefcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfefce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfefd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfefd4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfefda push edx */
  push32((uint32_t)(EDX));
  /* 12dfefdb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12dfefdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfefe0 push eax */
  push32((uint32_t)(EAX));
  /* 12dfefe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfefe3 call 0x12e02680 */
  push32(0x12dfefe8u); f_12e02680();
  /* 12dfefe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfefeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfefee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfeff0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfeff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfeff6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfeffc push edx */
  push32((uint32_t)(EDX));
  /* 12dfeffd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12dfefff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff002 push eax */
  push32((uint32_t)(EAX));
  /* 12dff003 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff005 call 0x12e02680 */
  push32(0x12dff00au); f_12e02680();
  /* 12dff00a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff00d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff010 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff012 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff018 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff01e push edx */
  push32((uint32_t)(EDX));
  /* 12dff01f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12dff021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff024 push eax */
  push32((uint32_t)(EAX));
  /* 12dff025 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff027 call 0x12e02680 */
  push32(0x12dff02cu); f_12e02680();
  /* 12dff02c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff02f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff032 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff034 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff03a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff040 push edx */
  push32((uint32_t)(EDX));
  /* 12dff041 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12dff043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff046 push eax */
  push32((uint32_t)(EAX));
  /* 12dff047 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff049 call 0x12e02680 */
  push32(0x12dff04eu); f_12e02680();
  /* 12dff04e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff051 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff054 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff056 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff059 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff05c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff062 push edx */
  push32((uint32_t)(EDX));
  /* 12dff063 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12dff065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff068 push eax */
  push32((uint32_t)(EAX));
  /* 12dff069 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff06b call 0x12e02680 */
  push32(0x12dff070u); f_12e02680();
  /* 12dff070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff073 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff076 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff078 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff07b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff07e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff084 push edx */
  push32((uint32_t)(EDX));
  /* 12dff085 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12dff087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff08a push eax */
  push32((uint32_t)(EAX));
  /* 12dff08b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff08d call 0x12e02680 */
  push32(0x12dff092u); f_12e02680();
  /* 12dff092 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff095 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff098 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff09a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff09d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff0a0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff0a6 push edx */
  push32((uint32_t)(EDX));
  /* 12dff0a7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12dff0a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff0ac push eax */
  push32((uint32_t)(EAX));
  /* 12dff0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff0af call 0x12e02680 */
  push32(0x12dff0b4u); f_12e02680();
  /* 12dff0b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff0b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff0ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff0bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff0bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff0c2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff0c8 push edx */
  push32((uint32_t)(EDX));
  /* 12dff0c9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12dff0cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff0ce push eax */
  push32((uint32_t)(EAX));
  /* 12dff0cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff0d1 call 0x12e02680 */
  push32(0x12dff0d6u); f_12e02680();
  /* 12dff0d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff0d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff0dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff0de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff0e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff0e4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff0ea push edx */
  push32((uint32_t)(EDX));
  /* 12dff0eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12dff0ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff0f0 push eax */
  push32((uint32_t)(EAX));
  /* 12dff0f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff0f3 call 0x12e02680 */
  push32(0x12dff0f8u); f_12e02680();
  /* 12dff0f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff0fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff0fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff100 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff106 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff10c push edx */
  push32((uint32_t)(EDX));
  /* 12dff10d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12dff112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff115 push eax */
  push32((uint32_t)(EAX));
  /* 12dff116 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff118 call 0x12e02680 */
  push32(0x12dff11du); f_12e02680();
  /* 12dff11d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff120 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dff123 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff125 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dff128 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12dff12b:;
  /* 12dff12b mov esp, ebp */
  ESP = (EBP);
  /* 12dff12d pop ebp */
  EBP = (pop32());
  /* 12dff12e ret  */
  ESPCHK(0x12dfeba0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12dff130 (779 bytes, 265 insns) */
void f_12dff130(void) {
  FTRACE(0x12dff130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dff130 push ebp */
  push32((uint32_t)(EBP));
  /* 12dff131 mov ebp, esp */
  EBP = (ESP);
  /* 12dff133 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff137 jne 0x12dff13e */
  if (!C.zf) goto L_12dff13e;
  /* 12dff139 jmp 0x12dff439 */
  goto L_12dff439;
L_12dff13e:;
  /* 12dff13e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff143 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dff146 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff147 call 0x12df6170 */
  push32(0x12dff14cu); f_12df6170();
  /* 12dff14c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff14f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff154 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dff157 push eax */
  push32((uint32_t)(EAX));
  /* 12dff158 call 0x12df6170 */
  push32(0x12dff15du); f_12df6170();
  /* 12dff15d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff160 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff165 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dff168 push edx */
  push32((uint32_t)(EDX));
  /* 12dff169 call 0x12df6170 */
  push32(0x12dff16eu); f_12df6170();
  /* 12dff16e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff171 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff176 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dff179 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff17a call 0x12df6170 */
  push32(0x12dff17fu); f_12df6170();
  /* 12dff17f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff182 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff187 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dff18a push eax */
  push32((uint32_t)(EAX));
  /* 12dff18b call 0x12df6170 */
  push32(0x12dff190u); f_12df6170();
  /* 12dff190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff193 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff195 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff198 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dff19b push edx */
  push32((uint32_t)(EDX));
  /* 12dff19c call 0x12df6170 */
  push32(0x12dff1a1u); f_12df6170();
  /* 12dff1a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff1a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff1a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dff1ab push ecx */
  push32((uint32_t)(ECX));
  /* 12dff1ac call 0x12df6170 */
  push32(0x12dff1b1u); f_12df6170();
  /* 12dff1b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff1b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff1b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff1b9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12dff1bc push eax */
  push32((uint32_t)(EAX));
  /* 12dff1bd call 0x12df6170 */
  push32(0x12dff1c2u); f_12df6170();
  /* 12dff1c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff1c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff1ca mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12dff1cd push edx */
  push32((uint32_t)(EDX));
  /* 12dff1ce call 0x12df6170 */
  push32(0x12dff1d3u); f_12df6170();
  /* 12dff1d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff1d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff1d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff1db mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12dff1de push ecx */
  push32((uint32_t)(ECX));
  /* 12dff1df call 0x12df6170 */
  push32(0x12dff1e4u); f_12df6170();
  /* 12dff1e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff1e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff1e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff1ec mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12dff1ef push eax */
  push32((uint32_t)(EAX));
  /* 12dff1f0 call 0x12df6170 */
  push32(0x12dff1f5u); f_12df6170();
  /* 12dff1f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff1f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff1fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff1fd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12dff200 push edx */
  push32((uint32_t)(EDX));
  /* 12dff201 call 0x12df6170 */
  push32(0x12dff206u); f_12df6170();
  /* 12dff206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff209 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff20b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff20e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12dff211 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff212 call 0x12df6170 */
  push32(0x12dff217u); f_12df6170();
  /* 12dff217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff21a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff21c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff21f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dff222 push eax */
  push32((uint32_t)(EAX));
  /* 12dff223 call 0x12df6170 */
  push32(0x12dff228u); f_12df6170();
  /* 12dff228 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff22b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff22d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff230 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12dff233 push edx */
  push32((uint32_t)(EDX));
  /* 12dff234 call 0x12df6170 */
  push32(0x12dff239u); f_12df6170();
  /* 12dff239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff23c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff23e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff241 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12dff244 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff245 call 0x12df6170 */
  push32(0x12dff24au); f_12df6170();
  /* 12dff24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff24d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff24f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff252 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12dff255 push eax */
  push32((uint32_t)(EAX));
  /* 12dff256 call 0x12df6170 */
  push32(0x12dff25bu); f_12df6170();
  /* 12dff25b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff25e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff263 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12dff266 push edx */
  push32((uint32_t)(EDX));
  /* 12dff267 call 0x12df6170 */
  push32(0x12dff26cu); f_12df6170();
  /* 12dff26c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff26f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff274 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12dff277 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff278 call 0x12df6170 */
  push32(0x12dff27du); f_12df6170();
  /* 12dff27d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff280 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff282 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff285 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12dff288 push eax */
  push32((uint32_t)(EAX));
  /* 12dff289 call 0x12df6170 */
  push32(0x12dff28eu); f_12df6170();
  /* 12dff28e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff291 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff296 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12dff299 push edx */
  push32((uint32_t)(EDX));
  /* 12dff29a call 0x12df6170 */
  push32(0x12dff29fu); f_12df6170();
  /* 12dff29f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff2a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff2a7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12dff2aa push ecx */
  push32((uint32_t)(ECX));
  /* 12dff2ab call 0x12df6170 */
  push32(0x12dff2b0u); f_12df6170();
  /* 12dff2b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff2b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff2b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff2b8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12dff2bb push eax */
  push32((uint32_t)(EAX));
  /* 12dff2bc call 0x12df6170 */
  push32(0x12dff2c1u); f_12df6170();
  /* 12dff2c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff2c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff2c9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12dff2cc push edx */
  push32((uint32_t)(EDX));
  /* 12dff2cd call 0x12df6170 */
  push32(0x12dff2d2u); f_12df6170();
  /* 12dff2d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff2d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff2d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff2da mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12dff2dd push ecx */
  push32((uint32_t)(ECX));
  /* 12dff2de call 0x12df6170 */
  push32(0x12dff2e3u); f_12df6170();
  /* 12dff2e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff2e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff2e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff2eb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12dff2ee push eax */
  push32((uint32_t)(EAX));
  /* 12dff2ef call 0x12df6170 */
  push32(0x12dff2f4u); f_12df6170();
  /* 12dff2f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff2f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff2f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff2fc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12dff2ff push edx */
  push32((uint32_t)(EDX));
  /* 12dff300 call 0x12df6170 */
  push32(0x12dff305u); f_12df6170();
  /* 12dff305 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff308 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff30a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff30d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12dff310 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff311 call 0x12df6170 */
  push32(0x12dff316u); f_12df6170();
  /* 12dff316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff319 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff31b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff31e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12dff321 push eax */
  push32((uint32_t)(EAX));
  /* 12dff322 call 0x12df6170 */
  push32(0x12dff327u); f_12df6170();
  /* 12dff327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff32a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff32c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff32f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12dff332 push edx */
  push32((uint32_t)(EDX));
  /* 12dff333 call 0x12df6170 */
  push32(0x12dff338u); f_12df6170();
  /* 12dff338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff33b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff33d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff340 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12dff343 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff344 call 0x12df6170 */
  push32(0x12dff349u); f_12df6170();
  /* 12dff349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff34c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff351 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12dff354 push eax */
  push32((uint32_t)(EAX));
  /* 12dff355 call 0x12df6170 */
  push32(0x12dff35au); f_12df6170();
  /* 12dff35a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff35d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff35f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff362 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12dff368 push edx */
  push32((uint32_t)(EDX));
  /* 12dff369 call 0x12df6170 */
  push32(0x12dff36eu); f_12df6170();
  /* 12dff36e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff371 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff376 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12dff37c push ecx */
  push32((uint32_t)(ECX));
  /* 12dff37d call 0x12df6170 */
  push32(0x12dff382u); f_12df6170();
  /* 12dff382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff385 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff38a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12dff390 push eax */
  push32((uint32_t)(EAX));
  /* 12dff391 call 0x12df6170 */
  push32(0x12dff396u); f_12df6170();
  /* 12dff396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff399 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff39b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff39e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12dff3a4 push edx */
  push32((uint32_t)(EDX));
  /* 12dff3a5 call 0x12df6170 */
  push32(0x12dff3aau); f_12df6170();
  /* 12dff3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff3ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff3af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff3b2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12dff3b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff3b9 call 0x12df6170 */
  push32(0x12dff3beu); f_12df6170();
  /* 12dff3be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff3c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff3c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff3c6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12dff3cc push eax */
  push32((uint32_t)(EAX));
  /* 12dff3cd call 0x12df6170 */
  push32(0x12dff3d2u); f_12df6170();
  /* 12dff3d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff3d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff3d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff3da mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12dff3e0 push edx */
  push32((uint32_t)(EDX));
  /* 12dff3e1 call 0x12df6170 */
  push32(0x12dff3e6u); f_12df6170();
  /* 12dff3e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff3e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff3eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff3ee mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12dff3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff3f5 call 0x12df6170 */
  push32(0x12dff3fau); f_12df6170();
  /* 12dff3fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff3fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff3ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff402 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12dff408 push eax */
  push32((uint32_t)(EAX));
  /* 12dff409 call 0x12df6170 */
  push32(0x12dff40eu); f_12df6170();
  /* 12dff40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff411 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff416 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12dff41c push edx */
  push32((uint32_t)(EDX));
  /* 12dff41d call 0x12df6170 */
  push32(0x12dff422u); f_12df6170();
  /* 12dff422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff425 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff42a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12dff430 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff431 call 0x12df6170 */
  push32(0x12dff436u); f_12df6170();
  /* 12dff436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dff439:;
  /* 12dff439 pop ebp */
  EBP = (pop32());
  /* 12dff43a ret  */
  ESPCHK(0x12dff130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f440 @ 0x12dff440 (678 bytes, 180 insns) */
void f_12dff440(void) {
  FTRACE(0x12dff440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dff440 push ebp */
  push32((uint32_t)(EBP));
  /* 12dff441 mov ebp, esp */
  EBP = (ESP);
  /* 12dff443 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dff446 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dff44d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dff44f mov ax, word ptr [0x12e20906] */
  AX = (r16((uint32_t)(0x12e20906)));
  /* 12dff455 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dff458 cmp dword ptr [0x12e208b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff45f je 0x12dff5ba */
  if (C.zf) goto L_12dff5ba;
  /* 12dff465 push 0x12e208d4 */
  push32((uint32_t)(0x12e208d4u));
  /* 12dff46a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12dff46c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff46f push ecx */
  push32((uint32_t)(ECX));
  /* 12dff470 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff472 call 0x12e02680 */
  push32(0x12dff477u); f_12e02680();
  /* 12dff477 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff47a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff47d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dff47f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dff482 push 0x12e208d8 */
  push32((uint32_t)(0x12e208d8u));
  /* 12dff487 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12dff489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff48c push eax */
  push32((uint32_t)(EAX));
  /* 12dff48d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff48f call 0x12e02680 */
  push32(0x12dff494u); f_12e02680();
  /* 12dff494 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff497 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff49a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff49c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff49f push 0x12e208dc */
  push32((uint32_t)(0x12e208dcu));
  /* 12dff4a4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12dff4a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff4a9 push edx */
  push32((uint32_t)(EDX));
  /* 12dff4aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff4ac call 0x12e02680 */
  push32(0x12dff4b1u); f_12e02680();
  /* 12dff4b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff4b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff4b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff4b9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff4bc mov edx, dword ptr [0x12e208dc] */
  EDX = (r32((uint32_t)(0x12e208dc)));
  /* 12dff4c2 push edx */
  push32((uint32_t)(EDX));
  /* 12dff4c3 call 0x12dff6f0 */
  push32(0x12dff4c8u); f_12dff6f0();
  /* 12dff4c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff4cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff4cf je 0x12dff529 */
  if (C.zf) goto L_12dff529;
  /* 12dff4d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff4d3 mov eax, dword ptr [0x12e208d4] */
  EAX = (r32((uint32_t)(0x12e208d4)));
  /* 12dff4d8 push eax */
  push32((uint32_t)(EAX));
  /* 12dff4d9 call 0x12df6170 */
  push32(0x12dff4deu); f_12df6170();
  /* 12dff4de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff4e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff4e3 mov ecx, dword ptr [0x12e208d8] */
  ECX = (r32((uint32_t)(0x12e208d8)));
  /* 12dff4e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff4ea call 0x12df6170 */
  push32(0x12dff4efu); f_12df6170();
  /* 12dff4ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff4f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff4f4 mov edx, dword ptr [0x12e208dc] */
  EDX = (r32((uint32_t)(0x12e208dc)));
  /* 12dff4fa push edx */
  push32((uint32_t)(EDX));
  /* 12dff4fb call 0x12df6170 */
  push32(0x12dff500u); f_12df6170();
  /* 12dff500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff503 mov dword ptr [0x12e208d4], 0 */
  w32((uint32_t)(0x12e208d4), (0x0u));
  /* 12dff50d mov dword ptr [0x12e208d8], 0 */
  w32((uint32_t)(0x12e208d8), (0x0u));
  /* 12dff517 mov dword ptr [0x12e208dc], 0 */
  w32((uint32_t)(0x12e208dc), (0x0u));
  /* 12dff521 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dff524 jmp 0x12dff6e2 */
  goto L_12dff6e2;
L_12dff529:;
  /* 12dff529 mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff52e cmp dword ptr [eax], 0x12e1fd60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12e1fd60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff534 je 0x12dff570 */
  if (C.zf) goto L_12dff570;
  /* 12dff536 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff538 mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff53e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dff540 push edx */
  push32((uint32_t)(EDX));
  /* 12dff541 call 0x12df6170 */
  push32(0x12dff546u); f_12df6170();
  /* 12dff546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff549 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff54b mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff550 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dff553 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff554 call 0x12df6170 */
  push32(0x12dff559u); f_12df6170();
  /* 12dff559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff55c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff55e mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff564 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dff567 push eax */
  push32((uint32_t)(EAX));
  /* 12dff568 call 0x12df6170 */
  push32(0x12dff56du); f_12df6170();
  /* 12dff56d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dff570:;
  /* 12dff570 mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff576 mov edx, dword ptr [0x12e208d4] */
  EDX = (r32((uint32_t)(0x12e208d4)));
  /* 12dff57c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dff57e mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff583 mov ecx, dword ptr [0x12e208d8] */
  ECX = (r32((uint32_t)(0x12e208d8)));
  /* 12dff589 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12dff58c mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff592 mov eax, dword ptr [0x12e208dc] */
  EAX = (r32((uint32_t)(0x12e208dc)));
  /* 12dff597 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dff59a mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff5a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dff5a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dff5a4 mov byte ptr [0x12e1f15c], al */
  w8((uint32_t)(0x12e1f15c), (AL));
  /* 12dff5a9 mov dword ptr [0x12e1f160], 1 */
  w32((uint32_t)(0x12e1f160), (0x1u));
  /* 12dff5b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dff5b5 jmp 0x12dff6e2 */
  goto L_12dff6e2;
L_12dff5ba:;
  /* 12dff5ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff5bc mov ecx, dword ptr [0x12e208d4] */
  ECX = (r32((uint32_t)(0x12e208d4)));
  /* 12dff5c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff5c3 call 0x12df6170 */
  push32(0x12dff5c8u); f_12df6170();
  /* 12dff5c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff5cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff5cd mov edx, dword ptr [0x12e208d8] */
  EDX = (r32((uint32_t)(0x12e208d8)));
  /* 12dff5d3 push edx */
  push32((uint32_t)(EDX));
  /* 12dff5d4 call 0x12df6170 */
  push32(0x12dff5d9u); f_12df6170();
  /* 12dff5d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff5dc push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff5de mov eax, dword ptr [0x12e208dc] */
  EAX = (r32((uint32_t)(0x12e208dc)));
  /* 12dff5e3 push eax */
  push32((uint32_t)(EAX));
  /* 12dff5e4 call 0x12df6170 */
  push32(0x12dff5e9u); f_12df6170();
  /* 12dff5e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff5ec mov dword ptr [0x12e208d4], 0 */
  w32((uint32_t)(0x12e208d4), (0x0u));
  /* 12dff5f6 mov dword ptr [0x12e208d8], 0 */
  w32((uint32_t)(0x12e208d8), (0x0u));
  /* 12dff600 mov dword ptr [0x12e208dc], 0 */
  w32((uint32_t)(0x12e208dc), (0x0u));
  /* 12dff60a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12dff60f push 0x12e1c810 */
  push32((uint32_t)(0x12e1c810u));
  /* 12dff614 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff616 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff618 call 0x12df56e0 */
  push32(0x12dff61du); f_12df56e0();
  /* 12dff61d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff620 mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff626 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dff628 mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff62e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff631 jne 0x12dff63b */
  if (!C.zf) goto L_12dff63b;
  /* 12dff633 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dff636 jmp 0x12dff6e2 */
  goto L_12dff6e2;
L_12dff63b:;
  /* 12dff63b push 0x12e1c7ac */
  push32((uint32_t)(0x12e1c7acu));
  /* 12dff640 mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff645 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dff647 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff648 call 0x12df8690 */
  push32(0x12dff64du); f_12df8690();
  /* 12dff64d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff650 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12dff655 push 0x12e1c810 */
  push32((uint32_t)(0x12e1c810u));
  /* 12dff65a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff65c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff65e call 0x12df56e0 */
  push32(0x12dff663u); f_12df56e0();
  /* 12dff663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff666 mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff66c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dff66f mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff674 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff678 jne 0x12dff67f */
  if (!C.zf) goto L_12dff67f;
  /* 12dff67a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dff67d jmp 0x12dff6e2 */
  goto L_12dff6e2;
L_12dff67f:;
  /* 12dff67f mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff685 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dff688 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dff68b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12dff690 push 0x12e1c810 */
  push32((uint32_t)(0x12e1c810u));
  /* 12dff695 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff697 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff699 call 0x12df56e0 */
  push32(0x12dff69eu); f_12df56e0();
  /* 12dff69e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff6a1 mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff6a7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12dff6aa mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff6b0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff6b4 jne 0x12dff6bb */
  if (!C.zf) goto L_12dff6bb;
  /* 12dff6b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dff6b9 jmp 0x12dff6e2 */
  goto L_12dff6e2;
L_12dff6bb:;
  /* 12dff6bb mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff6c0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dff6c3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12dff6c6 mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff6cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dff6ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dff6d0 mov byte ptr [0x12e1f15c], cl */
  w8((uint32_t)(0x12e1f15c), (CL));
  /* 12dff6d6 mov dword ptr [0x12e1f160], 1 */
  w32((uint32_t)(0x12e1f160), (0x1u));
  /* 12dff6e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dff6e2:;
  /* 12dff6e2 mov esp, ebp */
  ESP = (EBP);
  /* 12dff6e4 pop ebp */
  EBP = (pop32());
  /* 12dff6e5 ret  */
  ESPCHK(0x12dff440u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12dff6f0 (125 bytes, 49 insns) */
void f_12dff6f0(void) {
  FTRACE(0x12dff6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dff6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dff6f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dff6f3 push ecx */
  push32((uint32_t)(ECX));
L_12dff6f4:;
  /* 12dff6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff6f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dff6fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dff6fc je 0x12dff769 */
  if (C.zf) goto L_12dff769;
  /* 12dff6fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff701 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dff704 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff707 jl 0x12dff72d */
  if ((C.sf!=C.of)) goto L_12dff72d;
  /* 12dff709 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff70c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dff70f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff712 jg 0x12dff72d */
  if ((!C.zf&&C.sf==C.of)) goto L_12dff72d;
  /* 12dff714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff717 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dff71a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dff71d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff720 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dff722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff725 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff728 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dff72b jmp 0x12dff767 */
  goto L_12dff767;
L_12dff72d:;
  /* 12dff72d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff730 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dff733 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff736 jne 0x12dff75e */
  if (!C.zf) goto L_12dff75e;
  /* 12dff738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff73b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dff73e:;
  /* 12dff73e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff744 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dff747 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dff749 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff74c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff74f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dff752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff755 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dff758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dff75a jne 0x12dff73e */
  if (!C.zf) goto L_12dff73e;
  /* 12dff75c jmp 0x12dff767 */
  goto L_12dff767;
L_12dff75e:;
  /* 12dff75e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff761 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff764 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12dff767:;
  /* 12dff767 jmp 0x12dff6f4 */
  goto L_12dff6f4;
L_12dff769:;
  /* 12dff769 mov esp, ebp */
  ESP = (EBP);
  /* 12dff76b pop ebp */
  EBP = (pop32());
  /* 12dff76c ret  */
  ESPCHK(0x12dff6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f770 @ 0x12dff770 (304 bytes, 85 insns) */
void f_12dff770(void) {
  FTRACE(0x12dff770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dff770 push ebp */
  push32((uint32_t)(EBP));
  /* 12dff771 mov ebp, esp */
  EBP = (ESP);
  /* 12dff773 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff774 cmp dword ptr [0x12e208b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff77b je 0x12dff83c */
  if (C.zf) goto L_12dff83c;
  /* 12dff781 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12dff783 push 0x12e1c81c */
  push32((uint32_t)(0x12e1c81cu));
  /* 12dff788 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff78a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12dff78c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff78e call 0x12df5af0 */
  push32(0x12dff793u); f_12df5af0();
  /* 12dff793 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff796 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dff799 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff79d jne 0x12dff7a9 */
  if (!C.zf) goto L_12dff7a9;
  /* 12dff79f mov eax, 1 */
  EAX = (0x1u);
  /* 12dff7a4 jmp 0x12dff89c */
  goto L_12dff89c;
L_12dff7a9:;
  /* 12dff7a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff7ac push eax */
  push32((uint32_t)(EAX));
  /* 12dff7ad call 0x12dff8a0 */
  push32(0x12dff7b2u); f_12dff8a0();
  /* 12dff7b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff7b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dff7b7 je 0x12dff7dd */
  if (C.zf) goto L_12dff7dd;
  /* 12dff7b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff7bc push ecx */
  push32((uint32_t)(ECX));
  /* 12dff7bd call 0x12dffb30 */
  push32(0x12dff7c2u); f_12dffb30();
  /* 12dff7c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff7c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff7ca push edx */
  push32((uint32_t)(EDX));
  /* 12dff7cb call 0x12df6170 */
  push32(0x12dff7d0u); f_12df6170();
  /* 12dff7d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff7d3 mov eax, 1 */
  EAX = (0x1u);
  /* 12dff7d8 jmp 0x12dff89c */
  goto L_12dff89c;
L_12dff7dd:;
  /* 12dff7dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff7e0 mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff7e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dff7e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dff7ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff7ed mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff7f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dff7f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dff7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff7fc mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff802 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dff805 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12dff808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff80b mov dword ptr [0x12e1fd98], eax */
  w32((uint32_t)(0x12e1fd98), (EAX));
  /* 12dff810 mov ecx, dword ptr [0x12e208e0] */
  ECX = (r32((uint32_t)(0x12e208e0)));
  /* 12dff816 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff817 call 0x12dffb30 */
  push32(0x12dff81cu); f_12dffb30();
  /* 12dff81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff81f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff821 mov edx, dword ptr [0x12e208e0] */
  EDX = (r32((uint32_t)(0x12e208e0)));
  /* 12dff827 push edx */
  push32((uint32_t)(EDX));
  /* 12dff828 call 0x12df6170 */
  push32(0x12dff82du); f_12df6170();
  /* 12dff82d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff833 mov dword ptr [0x12e208e0], eax */
  w32((uint32_t)(0x12e208e0), (EAX));
  /* 12dff838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dff83a jmp 0x12dff89c */
  goto L_12dff89c;
L_12dff83c:;
  /* 12dff83c mov ecx, dword ptr [0x12e1fd98] */
  ECX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff842 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dff844 mov dword ptr [0x12e1fd68], edx */
  w32((uint32_t)(0x12e1fd68), (EDX));
  /* 12dff84a mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff84f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dff852 mov dword ptr [0x12e1fd6c], ecx */
  w32((uint32_t)(0x12e1fd6c), (ECX));
  /* 12dff858 mov edx, dword ptr [0x12e1fd98] */
  EDX = (r32((uint32_t)(0x12e1fd98)));
  /* 12dff85e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dff861 mov dword ptr [0x12e1fd70], eax */
  w32((uint32_t)(0x12e1fd70), (EAX));
  /* 12dff866 mov dword ptr [0x12e1fd98], 0x12e1fd68 */
  w32((uint32_t)(0x12e1fd98), (0x12e1fd68u));
  /* 12dff870 mov ecx, dword ptr [0x12e208e0] */
  ECX = (r32((uint32_t)(0x12e208e0)));
  /* 12dff876 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff877 call 0x12dffb30 */
  push32(0x12dff87cu); f_12dffb30();
  /* 12dff87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff87f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dff881 mov edx, dword ptr [0x12e208e0] */
  EDX = (r32((uint32_t)(0x12e208e0)));
  /* 12dff887 push edx */
  push32((uint32_t)(EDX));
  /* 12dff888 call 0x12df6170 */
  push32(0x12dff88du); f_12df6170();
  /* 12dff88d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff890 mov dword ptr [0x12e208e0], 0 */
  w32((uint32_t)(0x12e208e0), (0x0u));
  /* 12dff89a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dff89c:;
  /* 12dff89c mov esp, ebp */
  ESP = (EBP);
  /* 12dff89e pop ebp */
  EBP = (pop32());
  /* 12dff89f ret  */
  ESPCHK(0x12dff770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x12dff8a0 (525 bytes, 200 insns) */
void f_12dff8a0(void) {
  FTRACE(0x12dff8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dff8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dff8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dff8a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dff8a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dff8ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dff8af mov ax, word ptr [0x12e20900] */
  AX = (r16((uint32_t)(0x12e20900)));
  /* 12dff8b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dff8b8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dff8bc jne 0x12dff8c6 */
  if (!C.zf) goto L_12dff8c6;
  /* 12dff8be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dff8c1 jmp 0x12dffaa9 */
  goto L_12dffaa9;
L_12dff8c6:;
  /* 12dff8c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff8c9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff8cc push ecx */
  push32((uint32_t)(ECX));
  /* 12dff8cd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12dff8cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff8d2 push edx */
  push32((uint32_t)(EDX));
  /* 12dff8d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff8d5 call 0x12e02680 */
  push32(0x12dff8dau); f_12e02680();
  /* 12dff8da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff8dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff8e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff8e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff8e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff8e8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff8eb push edx */
  push32((uint32_t)(EDX));
  /* 12dff8ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12dff8ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff8f1 push eax */
  push32((uint32_t)(EAX));
  /* 12dff8f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff8f4 call 0x12e02680 */
  push32(0x12dff8f9u); f_12e02680();
  /* 12dff8f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff8fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff8ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff901 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff907 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff90a push edx */
  push32((uint32_t)(EDX));
  /* 12dff90b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12dff90d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff910 push eax */
  push32((uint32_t)(EAX));
  /* 12dff911 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff913 call 0x12e02680 */
  push32(0x12dff918u); f_12e02680();
  /* 12dff918 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff91b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff91e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff920 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff923 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff926 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff929 push edx */
  push32((uint32_t)(EDX));
  /* 12dff92a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12dff92c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff92f push eax */
  push32((uint32_t)(EAX));
  /* 12dff930 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff932 call 0x12e02680 */
  push32(0x12dff937u); f_12e02680();
  /* 12dff937 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff93a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff93d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff93f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff942 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff945 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff948 push edx */
  push32((uint32_t)(EDX));
  /* 12dff949 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12dff94b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff94e push eax */
  push32((uint32_t)(EAX));
  /* 12dff94f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff951 call 0x12e02680 */
  push32(0x12dff956u); f_12e02680();
  /* 12dff956 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff95c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff95e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff964 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dff967 push eax */
  push32((uint32_t)(EAX));
  /* 12dff968 call 0x12dffab0 */
  push32(0x12dff96du); f_12dffab0();
  /* 12dff96d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff973 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff976 push ecx */
  push32((uint32_t)(ECX));
  /* 12dff977 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12dff979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff97c push edx */
  push32((uint32_t)(EDX));
  /* 12dff97d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff97f call 0x12e02680 */
  push32(0x12dff984u); f_12e02680();
  /* 12dff984 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff987 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff98a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff98c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff98f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff992 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff995 push edx */
  push32((uint32_t)(EDX));
  /* 12dff996 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12dff998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff99b push eax */
  push32((uint32_t)(EAX));
  /* 12dff99c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dff99e call 0x12e02680 */
  push32(0x12dff9a3u); f_12e02680();
  /* 12dff9a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff9a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff9a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff9ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff9ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff9b1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff9b4 push edx */
  push32((uint32_t)(EDX));
  /* 12dff9b5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12dff9b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff9ba push eax */
  push32((uint32_t)(EAX));
  /* 12dff9bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dff9bd call 0x12e02680 */
  push32(0x12dff9c2u); f_12e02680();
  /* 12dff9c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff9c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff9c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff9ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff9d0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff9d3 push edx */
  push32((uint32_t)(EDX));
  /* 12dff9d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dff9d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff9d9 push eax */
  push32((uint32_t)(EAX));
  /* 12dff9da push 0 */
  push32((uint32_t)(0x0u));
  /* 12dff9dc call 0x12e02680 */
  push32(0x12dff9e1u); f_12e02680();
  /* 12dff9e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff9e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dff9e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dff9e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dff9ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dff9ef add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dff9f2 push edx */
  push32((uint32_t)(EDX));
  /* 12dff9f3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12dff9f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dff9f8 push eax */
  push32((uint32_t)(EAX));
  /* 12dff9f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dff9fb call 0x12e02680 */
  push32(0x12dffa00u); f_12e02680();
  /* 12dffa00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dffa06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffa08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dffa0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffa0e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa11 push edx */
  push32((uint32_t)(EDX));
  /* 12dffa12 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12dffa14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffa17 push eax */
  push32((uint32_t)(EAX));
  /* 12dffa18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffa1a call 0x12e02680 */
  push32(0x12dffa1fu); f_12e02680();
  /* 12dffa1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dffa25 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffa27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dffa2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffa2d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa30 push edx */
  push32((uint32_t)(EDX));
  /* 12dffa31 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12dffa33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffa36 push eax */
  push32((uint32_t)(EAX));
  /* 12dffa37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffa39 call 0x12e02680 */
  push32(0x12dffa3eu); f_12e02680();
  /* 12dffa3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dffa44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffa46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dffa49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffa4c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa4f push edx */
  push32((uint32_t)(EDX));
  /* 12dffa50 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12dffa52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffa55 push eax */
  push32((uint32_t)(EAX));
  /* 12dffa56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffa58 call 0x12e02680 */
  push32(0x12dffa5du); f_12e02680();
  /* 12dffa5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dffa63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffa65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dffa68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffa6b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa6e push edx */
  push32((uint32_t)(EDX));
  /* 12dffa6f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12dffa71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffa74 push eax */
  push32((uint32_t)(EAX));
  /* 12dffa75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffa77 call 0x12e02680 */
  push32(0x12dffa7cu); f_12e02680();
  /* 12dffa7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dffa82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffa84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dffa87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffa8a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa8d push edx */
  push32((uint32_t)(EDX));
  /* 12dffa8e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12dffa90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffa93 push eax */
  push32((uint32_t)(EAX));
  /* 12dffa94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffa96 call 0x12e02680 */
  push32(0x12dffa9bu); f_12e02680();
  /* 12dffa9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffa9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dffaa1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffaa3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dffaa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dffaa9:;
  /* 12dffaa9 mov esp, ebp */
  ESP = (EBP);
  /* 12dffaab pop ebp */
  EBP = (pop32());
  /* 12dffaac ret  */
  ESPCHK(0x12dff8a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12dffab0 (125 bytes, 49 insns) */
void f_12dffab0(void) {
  FTRACE(0x12dffab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dffab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dffab1 mov ebp, esp */
  EBP = (ESP);
  /* 12dffab3 push ecx */
  push32((uint32_t)(ECX));
L_12dffab4:;
  /* 12dffab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffab7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dffaba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dffabc je 0x12dffb29 */
  if (C.zf) goto L_12dffb29;
  /* 12dffabe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffac1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dffac4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffac7 jl 0x12dffaed */
  if ((C.sf!=C.of)) goto L_12dffaed;
  /* 12dffac9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffacc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dffacf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffad2 jg 0x12dffaed */
  if ((!C.zf&&C.sf==C.of)) goto L_12dffaed;
  /* 12dffad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffad7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dffada sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dffadd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffae0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dffae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffae8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dffaeb jmp 0x12dffb27 */
  goto L_12dffb27;
L_12dffaed:;
  /* 12dffaed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffaf0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dffaf3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffaf6 jne 0x12dffb1e */
  if (!C.zf) goto L_12dffb1e;
  /* 12dffaf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffafb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dffafe:;
  /* 12dffafe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffb01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffb04 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dffb07 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dffb09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffb0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dffb12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dffb15 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dffb18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dffb1a jne 0x12dffafe */
  if (!C.zf) goto L_12dffafe;
  /* 12dffb1c jmp 0x12dffb27 */
  goto L_12dffb27;
L_12dffb1e:;
  /* 12dffb1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12dffb27:;
  /* 12dffb27 jmp 0x12dffab4 */
  goto L_12dffab4;
L_12dffb29:;
  /* 12dffb29 mov esp, ebp */
  ESP = (EBP);
  /* 12dffb2b pop ebp */
  EBP = (pop32());
  /* 12dffb2c ret  */
  ESPCHK(0x12dffab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb30 @ 0x12dffb30 (147 bytes, 52 insns) */
void f_12dffb30(void) {
  FTRACE(0x12dffb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dffb30 push ebp */
  push32((uint32_t)(EBP));
  /* 12dffb31 mov ebp, esp */
  EBP = (ESP);
  /* 12dffb33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffb37 jne 0x12dffb3e */
  if (!C.zf) goto L_12dffb3e;
  /* 12dffb39 jmp 0x12dffbc1 */
  goto L_12dffbc1;
L_12dffb3e:;
  /* 12dffb3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb41 cmp dword ptr [eax + 0xc], 0x12e2093c */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12e2093cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffb48 je 0x12dffbc1 */
  if (C.zf) goto L_12dffbc1;
  /* 12dffb4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffb4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dffb52 push edx */
  push32((uint32_t)(EDX));
  /* 12dffb53 call 0x12df6170 */
  push32(0x12dffb58u); f_12df6170();
  /* 12dffb58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb5b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffb5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb60 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dffb63 push ecx */
  push32((uint32_t)(ECX));
  /* 12dffb64 call 0x12df6170 */
  push32(0x12dffb69u); f_12df6170();
  /* 12dffb69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb6c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffb6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dffb74 push eax */
  push32((uint32_t)(EAX));
  /* 12dffb75 call 0x12df6170 */
  push32(0x12dffb7au); f_12df6170();
  /* 12dffb7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffb7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb82 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dffb85 push edx */
  push32((uint32_t)(EDX));
  /* 12dffb86 call 0x12df6170 */
  push32(0x12dffb8bu); f_12df6170();
  /* 12dffb8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffb90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffb93 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dffb96 push ecx */
  push32((uint32_t)(ECX));
  /* 12dffb97 call 0x12df6170 */
  push32(0x12dffb9cu); f_12df6170();
  /* 12dffb9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffb9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffba4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12dffba7 push eax */
  push32((uint32_t)(EAX));
  /* 12dffba8 call 0x12df6170 */
  push32(0x12dffbadu); f_12df6170();
  /* 12dffbad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffbb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffbb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dffbb5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12dffbb8 push edx */
  push32((uint32_t)(EDX));
  /* 12dffbb9 call 0x12df6170 */
  push32(0x12dffbbeu); f_12df6170();
  /* 12dffbbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dffbc1:;
  /* 12dffbc1 pop ebp */
  EBP = (pop32());
  /* 12dffbc2 ret  */
  ESPCHK(0x12dffb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x12dffbd0 (928 bytes, 284 insns) */
void f_12dffbd0(void) {
  FTRACE(0x12dffbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dffbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dffbd1 mov ebp, esp */
  EBP = (ESP);
  /* 12dffbd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dffbd6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12dffbdd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12dffbe4 cmp dword ptr [0x12e208b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffbeb je 0x12dfff21 */
  if (C.zf) goto L_12dfff21;
  /* 12dffbf1 cmp dword ptr [0x12e208c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffbf8 jne 0x12dffc20 */
  if (!C.zf) goto L_12dffc20;
  /* 12dffbfa push 0x12e208c0 */
  push32((uint32_t)(0x12e208c0u));
  /* 12dffbff push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12dffc04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dffc06 mov ax, word ptr [0x12e208f8] */
  AX = (r16((uint32_t)(0x12e208f8)));
  /* 12dffc0c push eax */
  push32((uint32_t)(EAX));
  /* 12dffc0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffc0f call 0x12e02680 */
  push32(0x12dffc14u); f_12e02680();
  /* 12dffc14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffc17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dffc19 je 0x12dffc20 */
  if (C.zf) goto L_12dffc20;
  /* 12dffc1b jmp 0x12dffee2 */
  goto L_12dffee2;
L_12dffc20:;
  /* 12dffc20 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12dffc22 push 0x12e1c828 */
  push32((uint32_t)(0x12e1c828u));
  /* 12dffc27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffc29 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12dffc2e call 0x12df56e0 */
  push32(0x12dffc33u); f_12df56e0();
  /* 12dffc33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffc36 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12dffc39 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12dffc3b push 0x12e1c828 */
  push32((uint32_t)(0x12e1c828u));
  /* 12dffc40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffc42 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12dffc47 call 0x12df56e0 */
  push32(0x12dffc4cu); f_12df56e0();
  /* 12dffc4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffc4f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dffc52 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12dffc54 push 0x12e1c828 */
  push32((uint32_t)(0x12e1c828u));
  /* 12dffc59 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffc5b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12dffc60 call 0x12df56e0 */
  push32(0x12dffc65u); f_12df56e0();
  /* 12dffc65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffc68 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12dffc6b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12dffc6d push 0x12e1c828 */
  push32((uint32_t)(0x12e1c828u));
  /* 12dffc72 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffc74 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12dffc79 call 0x12df56e0 */
  push32(0x12dffc7eu); f_12df56e0();
  /* 12dffc7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffc81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dffc84 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffc88 je 0x12dffc9c */
  if (C.zf) goto L_12dffc9c;
  /* 12dffc8a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffc8e je 0x12dffc9c */
  if (C.zf) goto L_12dffc9c;
  /* 12dffc90 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffc94 je 0x12dffc9c */
  if (C.zf) goto L_12dffc9c;
  /* 12dffc96 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffc9a jne 0x12dffca1 */
  if (!C.zf) goto L_12dffca1;
L_12dffc9c:;
  /* 12dffc9c jmp 0x12dffee2 */
  goto L_12dffee2;
L_12dffca1:;
  /* 12dffca1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dffca4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dffca7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dffcae jmp 0x12dffcb9 */
  goto L_12dffcb9;
L_12dffcb0:;
  /* 12dffcb0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dffcb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffcb6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12dffcb9:;
  /* 12dffcb9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffcc0 jge 0x12dffcd5 */
  if ((C.sf==C.of)) goto L_12dffcd5;
  /* 12dffcc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffcc5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12dffcc8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12dffcca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffcd0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dffcd3 jmp 0x12dffcb0 */
  goto L_12dffcb0;
L_12dffcd5:;
  /* 12dffcd5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12dffcd8 push eax */
  push32((uint32_t)(EAX));
  /* 12dffcd9 mov ecx, dword ptr [0x12e208c0] */
  ECX = (r32((uint32_t)(0x12e208c0)));
  /* 12dffcdf push ecx */
  push32((uint32_t)(ECX));
  /* 12dffce0 call dword ptr [0x12e232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232c0))), 0x12dffce6u);
  /* 12dffce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dffce8 jne 0x12dffcef */
  if (!C.zf) goto L_12dffcef;
  /* 12dffcea jmp 0x12dffee2 */
  goto L_12dffee2;
L_12dffcef:;
  /* 12dffcef cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffcf3 jbe 0x12dffcfa */
  if ((C.cf||C.zf)) goto L_12dffcfa;
  /* 12dffcf5 jmp 0x12dffee2 */
  goto L_12dffee2;
L_12dffcfa:;
  /* 12dffcfa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dffcfd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dffd03 mov dword ptr [0x12e1f158], edx */
  w32((uint32_t)(0x12e1f158), (EDX));
  /* 12dffd09 cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffd10 jle 0x12dffd69 */
  if ((C.zf||C.sf!=C.of)) goto L_12dffd69;
  /* 12dffd12 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12dffd15 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dffd18 jmp 0x12dffd23 */
  goto L_12dffd23;
L_12dffd1a:;
  /* 12dffd1a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffd1d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffd20 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12dffd23:;
  /* 12dffd23 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffd26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dffd28 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dffd2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dffd2c je 0x12dffd69 */
  if (C.zf) goto L_12dffd69;
  /* 12dffd2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffd31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dffd33 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dffd36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dffd38 je 0x12dffd69 */
  if (C.zf) goto L_12dffd69;
  /* 12dffd3a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffd3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffd3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dffd41 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dffd44 jmp 0x12dffd4f */
  goto L_12dffd4f;
L_12dffd46:;
  /* 12dffd46 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dffd49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffd4c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12dffd4f:;
  /* 12dffd4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffd52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffd54 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dffd57 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffd5a jg 0x12dffd67 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dffd67;
  /* 12dffd5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dffd5f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffd62 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dffd65 jmp 0x12dffd46 */
  goto L_12dffd46;
L_12dffd67:;
  /* 12dffd67 jmp 0x12dffd1a */
  goto L_12dffd1a;
L_12dffd69:;
  /* 12dffd69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffd6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffd6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffd6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dffd72 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffd75 push eax */
  push32((uint32_t)(EAX));
  /* 12dffd76 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dffd7b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dffd7e push ecx */
  push32((uint32_t)(ECX));
  /* 12dffd7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dffd81 call 0x12dfe370 */
  push32(0x12dffd86u); f_12dfe370();
  /* 12dffd86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffd89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dffd8b jne 0x12dffd92 */
  if (!C.zf) goto L_12dffd92;
  /* 12dffd8d jmp 0x12dffee2 */
  goto L_12dffee2;
L_12dffd92:;
  /* 12dffd92 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dffd95 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12dffd9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dffd9d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dffda0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dffda7 jmp 0x12dffdb2 */
  goto L_12dffdb2;
L_12dffda9:;
  /* 12dffda9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dffdac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffdaf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12dffdb2:;
  /* 12dffdb2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffdb9 jge 0x12dffdd0 */
  if ((C.sf==C.of)) goto L_12dffdd0;
  /* 12dffdbb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dffdbe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12dffdc2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12dffdc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dffdc8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffdcb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dffdce jmp 0x12dffda9 */
  goto L_12dffda9;
L_12dffdd0:;
  /* 12dffdd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffdd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dffdd4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dffdd7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffdda push edx */
  push32((uint32_t)(EDX));
  /* 12dffddb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dffde0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dffde3 push eax */
  push32((uint32_t)(EAX));
  /* 12dffde4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dffde6 call 0x12e02920 */
  push32(0x12dffdebu); f_12e02920();
  /* 12dffdeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffdee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dffdf0 jne 0x12dffdf7 */
  if (!C.zf) goto L_12dffdf7;
  /* 12dffdf2 jmp 0x12dffee2 */
  goto L_12dffee2;
L_12dffdf7:;
  /* 12dffdf7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dffdfa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12dffdff cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffe06 jle 0x12dffe63 */
  if ((C.zf||C.sf!=C.of)) goto L_12dffe63;
  /* 12dffe08 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12dffe0b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dffe0e jmp 0x12dffe19 */
  goto L_12dffe19;
L_12dffe10:;
  /* 12dffe10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffe13 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffe16 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12dffe19:;
  /* 12dffe19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffe1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dffe1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dffe20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dffe22 je 0x12dffe63 */
  if (C.zf) goto L_12dffe63;
  /* 12dffe24 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffe27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dffe29 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dffe2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dffe2e je 0x12dffe63 */
  if (C.zf) goto L_12dffe63;
  /* 12dffe30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffe33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dffe35 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dffe37 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dffe3a jmp 0x12dffe45 */
  goto L_12dffe45;
L_12dffe3c:;
  /* 12dffe3c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dffe3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffe42 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12dffe45:;
  /* 12dffe45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dffe48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dffe4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dffe4d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffe50 jg 0x12dffe61 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dffe61;
  /* 12dffe52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dffe55 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dffe58 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12dffe5f jmp 0x12dffe3c */
  goto L_12dffe3c;
L_12dffe61:;
  /* 12dffe61 jmp 0x12dffe10 */
  goto L_12dffe10;
L_12dffe63:;
  /* 12dffe63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dffe66 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffe69 mov dword ptr [0x12e1ede8], eax */
  w32((uint32_t)(0x12e1ede8), (EAX));
  /* 12dffe6e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dffe71 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffe74 mov dword ptr [0x12e1edec], ecx */
  w32((uint32_t)(0x12e1edec), (ECX));
  /* 12dffe7a cmp dword ptr [0x12e208e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffe81 je 0x12dffe94 */
  if (C.zf) goto L_12dffe94;
  /* 12dffe83 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffe85 mov edx, dword ptr [0x12e208e4] */
  EDX = (r32((uint32_t)(0x12e208e4)));
  /* 12dffe8b push edx */
  push32((uint32_t)(EDX));
  /* 12dffe8c call 0x12df6170 */
  push32(0x12dffe91u); f_12df6170();
  /* 12dffe91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dffe94:;
  /* 12dffe94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dffe97 mov dword ptr [0x12e208e4], eax */
  w32((uint32_t)(0x12e208e4), (EAX));
  /* 12dffe9c cmp dword ptr [0x12e208e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dffea3 je 0x12dffeb6 */
  if (C.zf) goto L_12dffeb6;
  /* 12dffea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffea7 mov ecx, dword ptr [0x12e208e8] */
  ECX = (r32((uint32_t)(0x12e208e8)));
  /* 12dffead push ecx */
  push32((uint32_t)(ECX));
  /* 12dffeae call 0x12df6170 */
  push32(0x12dffeb3u); f_12df6170();
  /* 12dffeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dffeb6:;
  /* 12dffeb6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dffeb9 mov dword ptr [0x12e208e8], edx */
  w32((uint32_t)(0x12e208e8), (EDX));
  /* 12dffebf push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffec1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dffec4 push eax */
  push32((uint32_t)(EAX));
  /* 12dffec5 call 0x12df6170 */
  push32(0x12dffecau); f_12df6170();
  /* 12dffeca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffecd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffecf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dffed2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dffed3 call 0x12df6170 */
  push32(0x12dffed8u); f_12df6170();
  /* 12dffed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffedb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dffedd jmp 0x12dfff6c */
  goto L_12dfff6c;
L_12dffee2:;
  /* 12dffee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffee4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dffee7 push edx */
  push32((uint32_t)(EDX));
  /* 12dffee8 call 0x12df6170 */
  push32(0x12dffeedu); f_12df6170();
  /* 12dffeed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffef0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dffef2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dffef5 push eax */
  push32((uint32_t)(EAX));
  /* 12dffef6 call 0x12df6170 */
  push32(0x12dffefbu); f_12df6170();
  /* 12dffefb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dffefe push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfff00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfff03 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfff04 call 0x12df6170 */
  push32(0x12dfff09u); f_12df6170();
  /* 12dfff09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfff0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfff0e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfff11 push edx */
  push32((uint32_t)(EDX));
  /* 12dfff12 call 0x12df6170 */
  push32(0x12dfff17u); f_12df6170();
  /* 12dfff17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfff1a mov eax, 1 */
  EAX = (0x1u);
  /* 12dfff1f jmp 0x12dfff6c */
  goto L_12dfff6c;
L_12dfff21:;
  /* 12dfff21 mov dword ptr [0x12e1ede8], 0x12e1edf2 */
  w32((uint32_t)(0x12e1ede8), (0x12e1edf2u));
  /* 12dfff2b mov dword ptr [0x12e1edec], 0x12e1edf2 */
  w32((uint32_t)(0x12e1edec), (0x12e1edf2u));
  /* 12dfff35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfff37 mov eax, dword ptr [0x12e208e4] */
  EAX = (r32((uint32_t)(0x12e208e4)));
  /* 12dfff3c push eax */
  push32((uint32_t)(EAX));
  /* 12dfff3d call 0x12df6170 */
  push32(0x12dfff42u); f_12df6170();
  /* 12dfff42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfff45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfff47 mov ecx, dword ptr [0x12e208e8] */
  ECX = (r32((uint32_t)(0x12e208e8)));
  /* 12dfff4d push ecx */
  push32((uint32_t)(ECX));
  /* 12dfff4e call 0x12df6170 */
  push32(0x12dfff53u); f_12df6170();
  /* 12dfff53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfff56 mov dword ptr [0x12e208e4], 0 */
  w32((uint32_t)(0x12e208e4), (0x0u));
  /* 12dfff60 mov dword ptr [0x12e208e8], 0 */
  w32((uint32_t)(0x12e208e8), (0x0u));
  /* 12dfff6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfff6c:;
  /* 12dfff6c mov esp, ebp */
  ESP = (EBP);
  /* 12dfff6e pop ebp */
  EBP = (pop32());
  /* 12dfff6f ret  */
  ESPCHK(0x12dffbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff70 @ 0x12dfff70 (7 bytes, 5 insns) */
void f_12dfff70(void) {
  FTRACE(0x12dfff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfff70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfff71 mov ebp, esp */
  EBP = (ESP);
  /* 12dfff73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfff75 pop ebp */
  EBP = (pop32());
  /* 12dfff76 ret  */
  ESPCHK(0x12dfff70u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12dfff80 (129 bytes, 56 insns) */
void f_12dfff80(void) {
  FTRACE(0x12dfff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfff80 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dfff84 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dfff88 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12dfff8e jne 0x12dfffcc */
  if (!C.zf) goto L_12dfffcc;
L_12dfff90:;
  /* 12dfff90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dfff92 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dfff94 jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dfff96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dfff98 je 0x12dfffc0 */
  if (C.zf) goto L_12dfffc0;
  /* 12dfff9a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dfff9d jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dfff9f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dfffa1 je 0x12dfffc0 */
  if (C.zf) goto L_12dfffc0;
  /* 12dfffa3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dfffa6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dfffa9 jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dfffab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dfffad je 0x12dfffc0 */
  if (C.zf) goto L_12dfffc0;
  /* 12dfffaf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dfffb2 jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dfffb4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfffb7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfffba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dfffbc jne 0x12dfff90 */
  if (!C.zf) goto L_12dfff90;
  /* 12dfffbe mov edi, edi */
  EDI = (EDI);
L_12dfffc0:;
  /* 12dfffc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfffc2 ret  */
  ESPCHK(0x12dfff80u, _esp0);
  ESP += 4; return;
  /* 12dfffc3 nop  */
  /* nop */
L_12dfffc4:;
  /* 12dfffc4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfffc6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dfffc8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12dfffc9 ret  */
  ESPCHK(0x12dfff80u, _esp0);
  ESP += 4; return;
  /* 12dfffca mov edi, edi */
  EDI = (EDI);
L_12dfffcc:;
  /* 12dfffcc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12dfffd2 je 0x12dfffe8 */
  if (C.zf) goto L_12dfffe8;
  /* 12dfffd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dfffd6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12dfffd7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dfffd9 jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dfffdb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12dfffdc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dfffde je 0x12dfffc0 */
  if (C.zf) goto L_12dfffc0;
  /* 12dfffe0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12dfffe6 je 0x12dfff90 */
  if (C.zf) goto L_12dfff90;
L_12dfffe8:;
  /* 12dfffe8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12dfffeb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfffee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dffff0 jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dffff2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dffff4 je 0x12dfffc0 */
  if (C.zf) goto L_12dfffc0;
  /* 12dffff6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dffff9 jne 0x12dfffc4 */
  if (!C.zf) goto L_12dfffc4;
  /* 12dffffb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dffffd je 0x12dfffc0 */
  if (C.zf) goto L_12dfffc0;
  /* 12dfffff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00002 jmp 0x12dfff90 */
  goto L_12dfff90;
}

/* FUN_10010010 @ 0x12e00010 (62 bytes, 35 insns) */
void f_12e00010(void) {
  FTRACE(0x12e00010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00010 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00011 mov ebp, esp */
  EBP = (ESP);
  /* 12e00013 push esi */
  push32((uint32_t)(ESI));
  /* 12e00014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00016 push eax */
  push32((uint32_t)(EAX));
  /* 12e00017 push eax */
  push32((uint32_t)(EAX));
  /* 12e00018 push eax */
  push32((uint32_t)(EAX));
  /* 12e00019 push eax */
  push32((uint32_t)(EAX));
  /* 12e0001a push eax */
  push32((uint32_t)(EAX));
  /* 12e0001b push eax */
  push32((uint32_t)(EAX));
  /* 12e0001c push eax */
  push32((uint32_t)(EAX));
  /* 12e0001d push eax */
  push32((uint32_t)(EAX));
  /* 12e0001e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e00021 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e00024:;
  /* 12e00024 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e00026 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e00028 je 0x12e00031 */
  if (C.zf) goto L_12e00031;
  /* 12e0002a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e0002b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12e0002b");
  /* 12e0002f jmp 0x12e00024 */
  goto L_12e00024;
L_12e00031:;
  /* 12e00031 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00034 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e00037 nop  */
  /* nop */
L_12e00038:;
  /* 12e00038 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e00039 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e0003b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e0003d je 0x12e00046 */
  if (C.zf) goto L_12e00046;
  /* 12e0003f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e00040 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12e00040");
  /* 12e00044 jae 0x12e00038 */
  if (!C.cf) goto L_12e00038;
L_12e00046:;
  /* 12e00046 mov eax, ecx */
  EAX = (ECX);
  /* 12e00048 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0004b pop esi */
  ESI = (pop32());
  /* 12e0004c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e0004d ret  */
  ESPCHK(0x12e00010u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12e00050 (56 bytes, 31 insns) */
void f_12e00050(void) {
  FTRACE(0x12e00050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00050 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00051 mov ebp, esp */
  EBP = (ESP);
  /* 12e00053 push edi */
  push32((uint32_t)(EDI));
  /* 12e00054 push esi */
  push32((uint32_t)(ESI));
  /* 12e00055 push ebx */
  push32((uint32_t)(EBX));
  /* 12e00056 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e00059 jecxz 0x12e00081 */
  x86_unimpl("jecxz @ 0x12e00059");
  /* 12e0005b mov ebx, ecx */
  EBX = (ECX);
  /* 12e0005d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00060 mov esi, edi */
  ESI = (EDI);
  /* 12e00062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00064 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12e00066 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e00068 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0006a mov edi, esi */
  EDI = (ESI);
  /* 12e0006c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0006f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12e00071 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12e00074 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e00076 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e00079 ja 0x12e0007f */
  if ((!C.cf&&!C.zf)) goto L_12e0007f;
  /* 12e0007b je 0x12e00081 */
  if (C.zf) goto L_12e00081;
  /* 12e0007d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e0007e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12e0007f:;
  /* 12e0007f not ecx */
  ECX = (~(ECX));
L_12e00081:;
  /* 12e00081 mov eax, ecx */
  EAX = (ECX);
  /* 12e00083 pop ebx */
  EBX = (pop32());
  /* 12e00084 pop esi */
  ESI = (pop32());
  /* 12e00085 pop edi */
  EDI = (pop32());
  /* 12e00086 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e00087 ret  */
  ESPCHK(0x12e00050u, _esp0);
  ESP += 4; return;
}

/* FUN_10010090 @ 0x12e00090 (58 bytes, 32 insns) */
void f_12e00090(void) {
  FTRACE(0x12e00090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00090 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00091 mov ebp, esp */
  EBP = (ESP);
  /* 12e00093 push esi */
  push32((uint32_t)(ESI));
  /* 12e00094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00096 push eax */
  push32((uint32_t)(EAX));
  /* 12e00097 push eax */
  push32((uint32_t)(EAX));
  /* 12e00098 push eax */
  push32((uint32_t)(EAX));
  /* 12e00099 push eax */
  push32((uint32_t)(EAX));
  /* 12e0009a push eax */
  push32((uint32_t)(EAX));
  /* 12e0009b push eax */
  push32((uint32_t)(EAX));
  /* 12e0009c push eax */
  push32((uint32_t)(EAX));
  /* 12e0009d push eax */
  push32((uint32_t)(EAX));
  /* 12e0009e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e000a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e000a4:;
  /* 12e000a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e000a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e000a8 je 0x12e000b1 */
  if (C.zf) goto L_12e000b1;
  /* 12e000aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e000ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12e000ab");
  /* 12e000af jmp 0x12e000a4 */
  goto L_12e000a4;
L_12e000b1:;
  /* 12e000b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12e000b4:;
  /* 12e000b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e000b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e000b8 je 0x12e000c4 */
  if (C.zf) goto L_12e000c4;
  /* 12e000ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e000bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12e000bb");
  /* 12e000bf jae 0x12e000b4 */
  if (!C.cf) goto L_12e000b4;
  /* 12e000c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12e000c4:;
  /* 12e000c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e000c7 pop esi */
  ESI = (pop32());
  /* 12e000c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e000c9 ret  */
  ESPCHK(0x12e00090u, _esp0);
  ESP += 4; return;
}

/* FUN_100100d0 @ 0x12e000d0 (512 bytes, 147 insns) */
void f_12e000d0(void) {
  FTRACE(0x12e000d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e000d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e000d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e000d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e000d6 cmp dword ptr [0x12e20930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e000dd jne 0x12e00102 */
  if (!C.zf) goto L_12e00102;
  /* 12e000df call 0x12e00ba0 */
  push32(0x12e000e4u); f_12e00ba0();
  /* 12e000e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e000e6 je 0x12e000f2 */
  if (C.zf) goto L_12e000f2;
  /* 12e000e8 mov eax, dword ptr [0x12e232f4] */
  EAX = (r32((uint32_t)(0x12e232f4)));
  /* 12e000ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e000f0 jmp 0x12e000f9 */
  goto L_12e000f9;
L_12e000f2:;
  /* 12e000f2 mov dword ptr [ebp - 8], 0x12e00bf0 */
  w32((uint32_t)(EBP + -0x8), (0x12e00bf0u));
L_12e000f9:;
  /* 12e000f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e000fc mov dword ptr [0x12e20930], ecx */
  w32((uint32_t)(0x12e20930), (ECX));
L_12e00102:;
  /* 12e00102 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00106 jne 0x12e00112 */
  if (!C.zf) goto L_12e00112;
  /* 12e00108 call 0x12e009f0 */
  push32(0x12e0010du); f_12e009f0();
  /* 12e0010d jmp 0x12e001de */
  goto L_12e001de;
L_12e00112:;
  /* 12e00112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00115 mov dword ptr [0x12e20920], edx */
  w32((uint32_t)(0x12e20920), (EDX));
  /* 12e0011b cmp dword ptr [0x12e20920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00122 je 0x12e00144 */
  if (C.zf) goto L_12e00144;
  /* 12e00124 mov eax, dword ptr [0x12e20920] */
  EAX = (r32((uint32_t)(0x12e20920)));
  /* 12e00129 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e0012c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e0012e je 0x12e00144 */
  if (C.zf) goto L_12e00144;
  /* 12e00130 push 0x12e20920 */
  push32((uint32_t)(0x12e20920u));
  /* 12e00135 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e00137 push 0x12e1fa90 */
  push32((uint32_t)(0x12e1fa90u));
  /* 12e0013c call 0x12e002d0 */
  push32(0x12e00141u); f_12e002d0();
  /* 12e00141 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e00144:;
  /* 12e00144 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00147 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0014a mov dword ptr [0x12e20924], edx */
  w32((uint32_t)(0x12e20924), (EDX));
  /* 12e00150 cmp dword ptr [0x12e20924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00157 je 0x12e00179 */
  if (C.zf) goto L_12e00179;
  /* 12e00159 mov eax, dword ptr [0x12e20924] */
  EAX = (r32((uint32_t)(0x12e20924)));
  /* 12e0015e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e00161 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e00163 je 0x12e00179 */
  if (C.zf) goto L_12e00179;
  /* 12e00165 push 0x12e20924 */
  push32((uint32_t)(0x12e20924u));
  /* 12e0016a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e0016c push 0x12e1f9d8 */
  push32((uint32_t)(0x12e1f9d8u));
  /* 12e00171 call 0x12e002d0 */
  push32(0x12e00176u); f_12e002d0();
  /* 12e00176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e00179:;
  /* 12e00179 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
  /* 12e00183 cmp dword ptr [0x12e20920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0018a je 0x12e001bd */
  if (C.zf) goto L_12e001bd;
  /* 12e0018c mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e00192 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e00195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00197 je 0x12e001bd */
  if (C.zf) goto L_12e001bd;
  /* 12e00199 cmp dword ptr [0x12e20924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e001a0 je 0x12e001b6 */
  if (C.zf) goto L_12e001b6;
  /* 12e001a2 mov ecx, dword ptr [0x12e20924] */
  ECX = (r32((uint32_t)(0x12e20924)));
  /* 12e001a8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e001ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e001ad je 0x12e001b6 */
  if (C.zf) goto L_12e001b6;
  /* 12e001af call 0x12e00360 */
  push32(0x12e001b4u); f_12e00360();
  /* 12e001b4 jmp 0x12e001bb */
  goto L_12e001bb;
L_12e001b6:;
  /* 12e001b6 call 0x12e00750 */
  push32(0x12e001bbu); f_12e00750();
L_12e001bb:;
  /* 12e001bb jmp 0x12e001de */
  goto L_12e001de;
L_12e001bd:;
  /* 12e001bd cmp dword ptr [0x12e20924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e001c4 je 0x12e001d9 */
  if (C.zf) goto L_12e001d9;
  /* 12e001c6 mov eax, dword ptr [0x12e20924] */
  EAX = (r32((uint32_t)(0x12e20924)));
  /* 12e001cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e001ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e001d0 je 0x12e001d9 */
  if (C.zf) goto L_12e001d9;
  /* 12e001d2 call 0x12e008f0 */
  push32(0x12e001d7u); f_12e008f0();
  /* 12e001d7 jmp 0x12e001de */
  goto L_12e001de;
L_12e001d9:;
  /* 12e001d9 call 0x12e009f0 */
  push32(0x12e001deu); f_12e009f0();
L_12e001de:;
  /* 12e001de cmp dword ptr [0x12e20928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e001e5 jne 0x12e001ee */
  if (!C.zf) goto L_12e001ee;
  /* 12e001e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e001e9 jmp 0x12e002cc */
  goto L_12e002cc;
L_12e001ee:;
  /* 12e001ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e001f1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e001f7 push edx */
  push32((uint32_t)(EDX));
  /* 12e001f8 call 0x12e00a20 */
  push32(0x12e001fdu); f_12e00a20();
  /* 12e001fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00200 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e00203 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00207 je 0x12e0021c */
  if (C.zf) goto L_12e0021c;
  /* 12e00209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0020c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e00211 push eax */
  push32((uint32_t)(EAX));
  /* 12e00212 call dword ptr [0x12e232f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f0))), 0x12e00218u);
  /* 12e00218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0021a jne 0x12e00223 */
  if (!C.zf) goto L_12e00223;
L_12e0021c:;
  /* 12e0021c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0021e jmp 0x12e002cc */
  goto L_12e002cc;
L_12e00223:;
  /* 12e00223 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e00225 mov ecx, dword ptr [0x12e20910] */
  ECX = (r32((uint32_t)(0x12e20910)));
  /* 12e0022b push ecx */
  push32((uint32_t)(ECX));
  /* 12e0022c call dword ptr [0x12e232ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232ec))), 0x12e00232u);
  /* 12e00232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00234 jne 0x12e0023d */
  if (!C.zf) goto L_12e0023d;
  /* 12e00236 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00238 jmp 0x12e002cc */
  goto L_12e002cc;
L_12e0023d:;
  /* 12e0023d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00241 je 0x12e00268 */
  if (C.zf) goto L_12e00268;
  /* 12e00243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e00246 mov ax, word ptr [0x12e20910] */
  AX = (r16((uint32_t)(0x12e20910)));
  /* 12e0024c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12e0024f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e00252 mov dx, word ptr [0x12e2092c] */
  DX = (r16((uint32_t)(0x12e2092c)));
  /* 12e00259 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12e0025d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e00260 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12e00264 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12e00268:;
  /* 12e00268 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0026c je 0x12e002c7 */
  if (C.zf) goto L_12e002c7;
  /* 12e0026e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e00270 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e00273 push edx */
  push32((uint32_t)(EDX));
  /* 12e00274 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12e00279 mov eax, dword ptr [0x12e20910] */
  EAX = (r32((uint32_t)(0x12e20910)));
  /* 12e0027e push eax */
  push32((uint32_t)(EAX));
  /* 12e0027f call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e00285u);
  /* 12e00285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00287 jne 0x12e0028d */
  if (!C.zf) goto L_12e0028d;
  /* 12e00289 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0028b jmp 0x12e002cc */
  goto L_12e002cc;
L_12e0028d:;
  /* 12e0028d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e0028f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e00292 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00295 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00296 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12e0029b mov edx, dword ptr [0x12e2092c] */
  EDX = (r32((uint32_t)(0x12e2092c)));
  /* 12e002a1 push edx */
  push32((uint32_t)(EDX));
  /* 12e002a2 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e002a8u);
  /* 12e002a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e002aa jne 0x12e002b0 */
  if (!C.zf) goto L_12e002b0;
  /* 12e002ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e002ae jmp 0x12e002cc */
  goto L_12e002cc;
L_12e002b0:;
  /* 12e002b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e002b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e002b5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e002ba push eax */
  push32((uint32_t)(EAX));
  /* 12e002bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e002be push ecx */
  push32((uint32_t)(ECX));
  /* 12e002bf call 0x12df8220 */
  push32(0x12e002c4u); f_12df8220();
  /* 12e002c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e002c7:;
  /* 12e002c7 mov eax, 1 */
  EAX = (0x1u);
L_12e002cc:;
  /* 12e002cc mov esp, ebp */
  ESP = (EBP);
  /* 12e002ce pop ebp */
  EBP = (pop32());
  /* 12e002cf ret  */
  ESPCHK(0x12e000d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x12e002d0 (130 bytes, 47 insns) */
void f_12e002d0(void) {
  FTRACE(0x12e002d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e002d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e002d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e002d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e002d6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e002dd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e002e4:;
  /* 12e002e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e002e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e002ea jg 0x12e0034e */
  if ((!C.zf&&C.sf==C.of)) goto L_12e0034e;
  /* 12e002ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e002f0 je 0x12e0034e */
  if (C.zf) goto L_12e0034e;
  /* 12e002f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e002f5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e002f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e002f9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e002fb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e002fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e00300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00306 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12e00309 push eax */
  push32((uint32_t)(EAX));
  /* 12e0030a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0030d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e0030f push edx */
  push32((uint32_t)(EDX));
  /* 12e00310 call 0x12e02b90 */
  push32(0x12e00315u); f_12e02b90();
  /* 12e00315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00318 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e0031b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0031f jne 0x12e00332 */
  if (!C.zf) goto L_12e00332;
  /* 12e00321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00327 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12e0032b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0032e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e00330 jmp 0x12e0034c */
  goto L_12e0034c;
L_12e00332:;
  /* 12e00332 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00336 jge 0x12e00343 */
  if ((C.sf==C.of)) goto L_12e00343;
  /* 12e00338 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0033b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0033e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e00341 jmp 0x12e0034c */
  goto L_12e0034c;
L_12e00343:;
  /* 12e00343 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00346 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00349 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e0034c:;
  /* 12e0034c jmp 0x12e002e4 */
  goto L_12e002e4;
L_12e0034e:;
  /* 12e0034e mov esp, ebp */
  ESP = (EBP);
  /* 12e00350 pop ebp */
  EBP = (pop32());
  /* 12e00351 ret  */
  ESPCHK(0x12e002d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010360 @ 0x12e00360 (186 bytes, 50 insns) */
void f_12e00360(void) {
  FTRACE(0x12e00360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00360 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00361 mov ebp, esp */
  EBP = (ESP);
  /* 12e00363 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00364 mov eax, dword ptr [0x12e20920] */
  EAX = (r32((uint32_t)(0x12e20920)));
  /* 12e00369 push eax */
  push32((uint32_t)(EAX));
  /* 12e0036a call 0x12df8510 */
  push32(0x12e0036fu); f_12df8510();
  /* 12e0036f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00372 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e00374 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00377 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e0037a mov dword ptr [0x12e2091c], ecx */
  w32((uint32_t)(0x12e2091c), (ECX));
  /* 12e00380 mov edx, dword ptr [0x12e20924] */
  EDX = (r32((uint32_t)(0x12e20924)));
  /* 12e00386 push edx */
  push32((uint32_t)(EDX));
  /* 12e00387 call 0x12df8510 */
  push32(0x12e0038cu); f_12df8510();
  /* 12e0038c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0038f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e00391 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00394 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e00397 mov dword ptr [0x12e20914], ecx */
  w32((uint32_t)(0x12e20914), (ECX));
  /* 12e0039d mov dword ptr [0x12e20910], 0 */
  w32((uint32_t)(0x12e20910), (0x0u));
  /* 12e003a7 cmp dword ptr [0x12e2091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e003ae je 0x12e003b9 */
  if (C.zf) goto L_12e003b9;
  /* 12e003b0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e003b7 jmp 0x12e003cb */
  goto L_12e003cb;
L_12e003b9:;
  /* 12e003b9 mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e003bf push edx */
  push32((uint32_t)(EDX));
  /* 12e003c0 call 0x12e00e00 */
  push32(0x12e003c5u); f_12e00e00();
  /* 12e003c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e003c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e003cb:;
  /* 12e003cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e003ce mov dword ptr [0x12e20918], eax */
  w32((uint32_t)(0x12e20918), (EAX));
  /* 12e003d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e003d5 push 0x12e00420 */
  push32((uint32_t)(0x12e00420u));
  /* 12e003da call dword ptr [0x12e232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232d4))), 0x12e003e0u);
  /* 12e003e0 mov ecx, dword ptr [0x12e20928] */
  ECX = (r32((uint32_t)(0x12e20928)));
  /* 12e003e6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e003ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e003ee je 0x12e0040c */
  if (C.zf) goto L_12e0040c;
  /* 12e003f0 mov edx, dword ptr [0x12e20928] */
  EDX = (r32((uint32_t)(0x12e20928)));
  /* 12e003f6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12e003fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e003fe je 0x12e0040c */
  if (C.zf) goto L_12e0040c;
  /* 12e00400 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e00405 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12e00408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0040a jne 0x12e00416 */
  if (!C.zf) goto L_12e00416;
L_12e0040c:;
  /* 12e0040c mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
L_12e00416:;
  /* 12e00416 mov esp, ebp */
  ESP = (EBP);
  /* 12e00418 pop ebp */
  EBP = (pop32());
  /* 12e00419 ret  */
  ESPCHK(0x12e00360u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x12e00420 (804 bytes, 220 insns) */
void f_12e00420(void) {
  FTRACE(0x12e00420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00420 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00421 mov ebp, esp */
  EBP = (ESP);
  /* 12e00423 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00429 push eax */
  push32((uint32_t)(EAX));
  /* 12e0042a call 0x12e00d80 */
  push32(0x12e0042fu); f_12e00d80();
  /* 12e0042f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00432 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e00435 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e00437 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e0043a push ecx */
  push32((uint32_t)(ECX));
  /* 12e0043b mov edx, dword ptr [0x12e20914] */
  EDX = (r32((uint32_t)(0x12e20914)));
  /* 12e00441 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e00443 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00445 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12e0044b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00451 push edx */
  push32((uint32_t)(EDX));
  /* 12e00452 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00455 push eax */
  push32((uint32_t)(EAX));
  /* 12e00456 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e0045cu);
  /* 12e0045c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0045e jne 0x12e00474 */
  if (!C.zf) goto L_12e00474;
  /* 12e00460 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
  /* 12e0046a mov eax, 1 */
  EAX = (0x1u);
  /* 12e0046f jmp 0x12e0073e */
  goto L_12e0073e;
L_12e00474:;
  /* 12e00474 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e00477 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00478 mov edx, dword ptr [0x12e20924] */
  EDX = (r32((uint32_t)(0x12e20924)));
  /* 12e0047e push edx */
  push32((uint32_t)(EDX));
  /* 12e0047f call 0x12e02b90 */
  push32(0x12e00484u); f_12e02b90();
  /* 12e00484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00489 jne 0x12e005af */
  if (!C.zf) goto L_12e005af;
  /* 12e0048f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e00491 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e00494 push eax */
  push32((uint32_t)(EAX));
  /* 12e00495 mov ecx, dword ptr [0x12e2091c] */
  ECX = (r32((uint32_t)(0x12e2091c)));
  /* 12e0049b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e0049d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0049f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12e004a5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e004ab push ecx */
  push32((uint32_t)(ECX));
  /* 12e004ac mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e004af push edx */
  push32((uint32_t)(EDX));
  /* 12e004b0 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e004b6u);
  /* 12e004b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e004b8 jne 0x12e004ce */
  if (!C.zf) goto L_12e004ce;
  /* 12e004ba mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
  /* 12e004c4 mov eax, 1 */
  EAX = (0x1u);
  /* 12e004c9 jmp 0x12e0073e */
  goto L_12e0073e;
L_12e004ce:;
  /* 12e004ce lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e004d1 push eax */
  push32((uint32_t)(EAX));
  /* 12e004d2 mov ecx, dword ptr [0x12e20920] */
  ECX = (r32((uint32_t)(0x12e20920)));
  /* 12e004d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e004d9 call 0x12e02b90 */
  push32(0x12e004deu); f_12e02b90();
  /* 12e004de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e004e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e004e3 jne 0x12e00510 */
  if (!C.zf) goto L_12e00510;
  /* 12e004e5 mov edx, dword ptr [0x12e20928] */
  EDX = (r32((uint32_t)(0x12e20928)));
  /* 12e004eb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12e004f1 mov dword ptr [0x12e20928], edx */
  w32((uint32_t)(0x12e20928), (EDX));
  /* 12e004f7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e004fa mov dword ptr [0x12e2092c], eax */
  w32((uint32_t)(0x12e2092c), (EAX));
  /* 12e004ff mov ecx, dword ptr [0x12e2092c] */
  ECX = (r32((uint32_t)(0x12e2092c)));
  /* 12e00505 mov dword ptr [0x12e20910], ecx */
  w32((uint32_t)(0x12e20910), (ECX));
  /* 12e0050b jmp 0x12e005af */
  goto L_12e005af;
L_12e00510:;
  /* 12e00510 mov edx, dword ptr [0x12e20928] */
  EDX = (r32((uint32_t)(0x12e20928)));
  /* 12e00516 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e00519 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e0051b jne 0x12e005af */
  if (!C.zf) goto L_12e005af;
  /* 12e00521 cmp dword ptr [0x12e20918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00528 je 0x12e0057d */
  if (C.zf) goto L_12e0057d;
  /* 12e0052a mov eax, dword ptr [0x12e20918] */
  EAX = (r32((uint32_t)(0x12e20918)));
  /* 12e0052f push eax */
  push32((uint32_t)(EAX));
  /* 12e00530 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e00533 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00534 mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e0053a push edx */
  push32((uint32_t)(EDX));
  /* 12e0053b call 0x12e02c60 */
  push32(0x12e00540u); f_12e02c60();
  /* 12e00540 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00545 jne 0x12e0057d */
  if (!C.zf) goto L_12e0057d;
  /* 12e00547 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e0054c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12e0054e mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
  /* 12e00553 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00556 mov dword ptr [0x12e2092c], ecx */
  w32((uint32_t)(0x12e2092c), (ECX));
  /* 12e0055c mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e00562 push edx */
  push32((uint32_t)(EDX));
  /* 12e00563 call 0x12df8510 */
  push32(0x12e00568u); f_12df8510();
  /* 12e00568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0056b cmp eax, dword ptr [0x12e20918] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e20918))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00571 jne 0x12e0057b */
  if (!C.zf) goto L_12e0057b;
  /* 12e00573 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00576 mov dword ptr [0x12e20910], eax */
  w32((uint32_t)(0x12e20910), (EAX));
L_12e0057b:;
  /* 12e0057b jmp 0x12e005af */
  goto L_12e005af;
L_12e0057d:;
  /* 12e0057d mov ecx, dword ptr [0x12e20928] */
  ECX = (r32((uint32_t)(0x12e20928)));
  /* 12e00583 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e00586 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e00588 jne 0x12e005af */
  if (!C.zf) goto L_12e005af;
  /* 12e0058a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e0058d push edx */
  push32((uint32_t)(EDX));
  /* 12e0058e call 0x12e00ac0 */
  push32(0x12e00593u); f_12e00ac0();
  /* 12e00593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00598 je 0x12e005af */
  if (C.zf) goto L_12e005af;
  /* 12e0059a mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e0059f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12e005a1 mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
  /* 12e005a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e005a9 mov dword ptr [0x12e2092c], ecx */
  w32((uint32_t)(0x12e2092c), (ECX));
L_12e005af:;
  /* 12e005af mov edx, dword ptr [0x12e20928] */
  EDX = (r32((uint32_t)(0x12e20928)));
  /* 12e005b5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12e005bb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e005c1 je 0x12e00731 */
  if (C.zf) goto L_12e00731;
  /* 12e005c7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e005c9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e005cc push eax */
  push32((uint32_t)(EAX));
  /* 12e005cd mov ecx, dword ptr [0x12e2091c] */
  ECX = (r32((uint32_t)(0x12e2091c)));
  /* 12e005d3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e005d5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e005d7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12e005dd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e005e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e005e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e005e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e005e8 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e005eeu);
  /* 12e005ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e005f0 jne 0x12e00606 */
  if (!C.zf) goto L_12e00606;
  /* 12e005f2 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
  /* 12e005fc mov eax, 1 */
  EAX = (0x1u);
  /* 12e00601 jmp 0x12e0073e */
  goto L_12e0073e;
L_12e00606:;
  /* 12e00606 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e00609 push eax */
  push32((uint32_t)(EAX));
  /* 12e0060a mov ecx, dword ptr [0x12e20920] */
  ECX = (r32((uint32_t)(0x12e20920)));
  /* 12e00610 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00611 call 0x12e02b90 */
  push32(0x12e00616u); f_12e02b90();
  /* 12e00616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0061b jne 0x12e006d0 */
  if (!C.zf) goto L_12e006d0;
  /* 12e00621 mov edx, dword ptr [0x12e20928] */
  EDX = (r32((uint32_t)(0x12e20928)));
  /* 12e00627 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e0062a mov dword ptr [0x12e20928], edx */
  w32((uint32_t)(0x12e20928), (EDX));
  /* 12e00630 cmp dword ptr [0x12e2091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00637 je 0x12e0065a */
  if (C.zf) goto L_12e0065a;
  /* 12e00639 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e0063e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e00641 mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
  /* 12e00646 cmp dword ptr [0x12e20910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0064d jne 0x12e00658 */
  if (!C.zf) goto L_12e00658;
  /* 12e0064f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00652 mov dword ptr [0x12e20910], ecx */
  w32((uint32_t)(0x12e20910), (ECX));
L_12e00658:;
  /* 12e00658 jmp 0x12e006ce */
  goto L_12e006ce;
L_12e0065a:;
  /* 12e0065a cmp dword ptr [0x12e20918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00661 je 0x12e006af */
  if (C.zf) goto L_12e006af;
  /* 12e00663 mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e00669 push edx */
  push32((uint32_t)(EDX));
  /* 12e0066a call 0x12df8510 */
  push32(0x12e0066fu); f_12df8510();
  /* 12e0066f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00672 cmp eax, dword ptr [0x12e20918] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e20918))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00678 jne 0x12e006af */
  if (!C.zf) goto L_12e006af;
  /* 12e0067a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0067c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e0067f push eax */
  push32((uint32_t)(EAX));
  /* 12e00680 call 0x12e00b10 */
  push32(0x12e00685u); f_12e00b10();
  /* 12e00685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0068a je 0x12e006ad */
  if (C.zf) goto L_12e006ad;
  /* 12e0068c mov ecx, dword ptr [0x12e20928] */
  ECX = (r32((uint32_t)(0x12e20928)));
  /* 12e00692 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e00695 mov dword ptr [0x12e20928], ecx */
  w32((uint32_t)(0x12e20928), (ECX));
  /* 12e0069b cmp dword ptr [0x12e20910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e006a2 jne 0x12e006ad */
  if (!C.zf) goto L_12e006ad;
  /* 12e006a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e006a7 mov dword ptr [0x12e20910], edx */
  w32((uint32_t)(0x12e20910), (EDX));
L_12e006ad:;
  /* 12e006ad jmp 0x12e006ce */
  goto L_12e006ce;
L_12e006af:;
  /* 12e006af mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e006b4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e006b7 mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
  /* 12e006bc cmp dword ptr [0x12e20910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e006c3 jne 0x12e006ce */
  if (!C.zf) goto L_12e006ce;
  /* 12e006c5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e006c8 mov dword ptr [0x12e20910], ecx */
  w32((uint32_t)(0x12e20910), (ECX));
L_12e006ce:;
  /* 12e006ce jmp 0x12e00731 */
  goto L_12e00731;
L_12e006d0:;
  /* 12e006d0 cmp dword ptr [0x12e2091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e006d7 jne 0x12e00731 */
  if (!C.zf) goto L_12e00731;
  /* 12e006d9 cmp dword ptr [0x12e20918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e006e0 je 0x12e00731 */
  if (C.zf) goto L_12e00731;
  /* 12e006e2 mov edx, dword ptr [0x12e20918] */
  EDX = (r32((uint32_t)(0x12e20918)));
  /* 12e006e8 push edx */
  push32((uint32_t)(EDX));
  /* 12e006e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e006ec push eax */
  push32((uint32_t)(EAX));
  /* 12e006ed mov ecx, dword ptr [0x12e20920] */
  ECX = (r32((uint32_t)(0x12e20920)));
  /* 12e006f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e006f4 call 0x12e02c60 */
  push32(0x12e006f9u); f_12e02c60();
  /* 12e006f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e006fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e006fe jne 0x12e00731 */
  if (!C.zf) goto L_12e00731;
  /* 12e00700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e00702 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00705 push edx */
  push32((uint32_t)(EDX));
  /* 12e00706 call 0x12e00b10 */
  push32(0x12e0070bu); f_12e00b10();
  /* 12e0070b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0070e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00710 je 0x12e00731 */
  if (C.zf) goto L_12e00731;
  /* 12e00712 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e00717 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e0071a mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
  /* 12e0071f cmp dword ptr [0x12e20910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00726 jne 0x12e00731 */
  if (!C.zf) goto L_12e00731;
  /* 12e00728 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e0072b mov dword ptr [0x12e20910], ecx */
  w32((uint32_t)(0x12e20910), (ECX));
L_12e00731:;
  /* 12e00731 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e00736 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e00739 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e0073b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0073d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e0073e:;
  /* 12e0073e mov esp, ebp */
  ESP = (EBP);
  /* 12e00740 pop ebp */
  EBP = (pop32());
  /* 12e00741 ret 4 */
  ESPCHK(0x12e00420u, _esp0);
  ESP += 8; return;
}

/* FUN_10010750 @ 0x12e00750 (116 bytes, 33 insns) */
void f_12e00750(void) {
  FTRACE(0x12e00750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00750 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00751 mov ebp, esp */
  EBP = (ESP);
  /* 12e00753 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00754 mov eax, dword ptr [0x12e20920] */
  EAX = (r32((uint32_t)(0x12e20920)));
  /* 12e00759 push eax */
  push32((uint32_t)(EAX));
  /* 12e0075a call 0x12df8510 */
  push32(0x12e0075fu); f_12df8510();
  /* 12e0075f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e00764 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00767 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e0076a mov dword ptr [0x12e2091c], ecx */
  w32((uint32_t)(0x12e2091c), (ECX));
  /* 12e00770 cmp dword ptr [0x12e2091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00777 je 0x12e00782 */
  if (C.zf) goto L_12e00782;
  /* 12e00779 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e00780 jmp 0x12e00794 */
  goto L_12e00794;
L_12e00782:;
  /* 12e00782 mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e00788 push edx */
  push32((uint32_t)(EDX));
  /* 12e00789 call 0x12e00e00 */
  push32(0x12e0078eu); f_12e00e00();
  /* 12e0078e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00791 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e00794:;
  /* 12e00794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00797 mov dword ptr [0x12e20918], eax */
  w32((uint32_t)(0x12e20918), (EAX));
  /* 12e0079c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0079e push 0x12e007d0 */
  push32((uint32_t)(0x12e007d0u));
  /* 12e007a3 call dword ptr [0x12e232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232d4))), 0x12e007a9u);
  /* 12e007a9 mov ecx, dword ptr [0x12e20928] */
  ECX = (r32((uint32_t)(0x12e20928)));
  /* 12e007af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e007b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e007b4 jne 0x12e007c0 */
  if (!C.zf) goto L_12e007c0;
  /* 12e007b6 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
L_12e007c0:;
  /* 12e007c0 mov esp, ebp */
  ESP = (EBP);
  /* 12e007c2 pop ebp */
  EBP = (pop32());
  /* 12e007c3 ret  */
  ESPCHK(0x12e00750u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x12e007d0 (287 bytes, 86 insns) */
void f_12e007d0(void) {
  FTRACE(0x12e007d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e007d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e007d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e007d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e007d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e007d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e007da call 0x12e00d80 */
  push32(0x12e007dfu); f_12e00d80();
  /* 12e007df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e007e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e007e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e007e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e007ea push ecx */
  push32((uint32_t)(ECX));
  /* 12e007eb mov edx, dword ptr [0x12e2091c] */
  EDX = (r32((uint32_t)(0x12e2091c)));
  /* 12e007f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e007f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e007f5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12e007fb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00801 push edx */
  push32((uint32_t)(EDX));
  /* 12e00802 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00805 push eax */
  push32((uint32_t)(EAX));
  /* 12e00806 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e0080cu);
  /* 12e0080c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0080e jne 0x12e00824 */
  if (!C.zf) goto L_12e00824;
  /* 12e00810 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
  /* 12e0081a mov eax, 1 */
  EAX = (0x1u);
  /* 12e0081f jmp 0x12e008e9 */
  goto L_12e008e9;
L_12e00824:;
  /* 12e00824 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e00827 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00828 mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e0082e push edx */
  push32((uint32_t)(EDX));
  /* 12e0082f call 0x12e02b90 */
  push32(0x12e00834u); f_12e02b90();
  /* 12e00834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00839 jne 0x12e00879 */
  if (!C.zf) goto L_12e00879;
  /* 12e0083b cmp dword ptr [0x12e2091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00842 jne 0x12e00856 */
  if (!C.zf) goto L_12e00856;
  /* 12e00844 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e00846 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00849 push eax */
  push32((uint32_t)(EAX));
  /* 12e0084a call 0x12e00b10 */
  push32(0x12e0084fu); f_12e00b10();
  /* 12e0084f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00854 je 0x12e00877 */
  if (C.zf) goto L_12e00877;
L_12e00856:;
  /* 12e00856 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00859 mov dword ptr [0x12e2092c], ecx */
  w32((uint32_t)(0x12e2092c), (ECX));
  /* 12e0085f mov edx, dword ptr [0x12e2092c] */
  EDX = (r32((uint32_t)(0x12e2092c)));
  /* 12e00865 mov dword ptr [0x12e20910], edx */
  w32((uint32_t)(0x12e20910), (EDX));
  /* 12e0086b mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e00870 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e00872 mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
L_12e00877:;
  /* 12e00877 jmp 0x12e008dc */
  goto L_12e008dc;
L_12e00879:;
  /* 12e00879 cmp dword ptr [0x12e2091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00880 jne 0x12e008dc */
  if (!C.zf) goto L_12e008dc;
  /* 12e00882 cmp dword ptr [0x12e20918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00889 je 0x12e008dc */
  if (C.zf) goto L_12e008dc;
  /* 12e0088b mov ecx, dword ptr [0x12e20918] */
  ECX = (r32((uint32_t)(0x12e20918)));
  /* 12e00891 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00892 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12e00895 push edx */
  push32((uint32_t)(EDX));
  /* 12e00896 mov eax, dword ptr [0x12e20920] */
  EAX = (r32((uint32_t)(0x12e20920)));
  /* 12e0089b push eax */
  push32((uint32_t)(EAX));
  /* 12e0089c call 0x12e02c60 */
  push32(0x12e008a1u); f_12e02c60();
  /* 12e008a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e008a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e008a6 jne 0x12e008dc */
  if (!C.zf) goto L_12e008dc;
  /* 12e008a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e008aa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e008ad push ecx */
  push32((uint32_t)(ECX));
  /* 12e008ae call 0x12e00b10 */
  push32(0x12e008b3u); f_12e00b10();
  /* 12e008b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e008b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e008b8 je 0x12e008dc */
  if (C.zf) goto L_12e008dc;
  /* 12e008ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e008bd mov dword ptr [0x12e2092c], edx */
  w32((uint32_t)(0x12e2092c), (EDX));
  /* 12e008c3 mov eax, dword ptr [0x12e2092c] */
  EAX = (r32((uint32_t)(0x12e2092c)));
  /* 12e008c8 mov dword ptr [0x12e20910], eax */
  w32((uint32_t)(0x12e20910), (EAX));
  /* 12e008cd mov ecx, dword ptr [0x12e20928] */
  ECX = (r32((uint32_t)(0x12e20928)));
  /* 12e008d3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e008d6 mov dword ptr [0x12e20928], ecx */
  w32((uint32_t)(0x12e20928), (ECX));
L_12e008dc:;
  /* 12e008dc mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e008e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e008e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e008e6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e008e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e008e9:;
  /* 12e008e9 mov esp, ebp */
  ESP = (EBP);
  /* 12e008eb pop ebp */
  EBP = (pop32());
  /* 12e008ec ret 4 */
  ESPCHK(0x12e007d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100108f0 @ 0x12e008f0 (69 bytes, 20 insns) */
void f_12e008f0(void) {
  FTRACE(0x12e008f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e008f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e008f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e008f3 mov eax, dword ptr [0x12e20924] */
  EAX = (r32((uint32_t)(0x12e20924)));
  /* 12e008f8 push eax */
  push32((uint32_t)(EAX));
  /* 12e008f9 call 0x12df8510 */
  push32(0x12e008feu); f_12df8510();
  /* 12e008fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00901 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e00903 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00906 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e00909 mov dword ptr [0x12e20914], ecx */
  w32((uint32_t)(0x12e20914), (ECX));
  /* 12e0090f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e00911 push 0x12e00940 */
  push32((uint32_t)(0x12e00940u));
  /* 12e00916 call dword ptr [0x12e232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232d4))), 0x12e0091cu);
  /* 12e0091c mov edx, dword ptr [0x12e20928] */
  EDX = (r32((uint32_t)(0x12e20928)));
  /* 12e00922 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e00925 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e00927 jne 0x12e00933 */
  if (!C.zf) goto L_12e00933;
  /* 12e00929 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
L_12e00933:;
  /* 12e00933 pop ebp */
  EBP = (pop32());
  /* 12e00934 ret  */
  ESPCHK(0x12e008f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010940 @ 0x12e00940 (172 bytes, 54 insns) */
void f_12e00940(void) {
  FTRACE(0x12e00940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00940 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00941 mov ebp, esp */
  EBP = (ESP);
  /* 12e00943 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00949 push eax */
  push32((uint32_t)(EAX));
  /* 12e0094a call 0x12e00d80 */
  push32(0x12e0094fu); f_12e00d80();
  /* 12e0094f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00952 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e00955 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e00957 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e0095a push ecx */
  push32((uint32_t)(ECX));
  /* 12e0095b mov edx, dword ptr [0x12e20914] */
  EDX = (r32((uint32_t)(0x12e20914)));
  /* 12e00961 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e00963 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00965 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12e0096b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00971 push edx */
  push32((uint32_t)(EDX));
  /* 12e00972 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e00975 push eax */
  push32((uint32_t)(EAX));
  /* 12e00976 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e0097cu);
  /* 12e0097c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0097e jne 0x12e00991 */
  if (!C.zf) goto L_12e00991;
  /* 12e00980 mov dword ptr [0x12e20928], 0 */
  w32((uint32_t)(0x12e20928), (0x0u));
  /* 12e0098a mov eax, 1 */
  EAX = (0x1u);
  /* 12e0098f jmp 0x12e009e6 */
  goto L_12e009e6;
L_12e00991:;
  /* 12e00991 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e00994 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00995 mov edx, dword ptr [0x12e20924] */
  EDX = (r32((uint32_t)(0x12e20924)));
  /* 12e0099b push edx */
  push32((uint32_t)(EDX));
  /* 12e0099c call 0x12e02b90 */
  push32(0x12e009a1u); f_12e02b90();
  /* 12e009a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e009a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e009a6 jne 0x12e009d9 */
  if (!C.zf) goto L_12e009d9;
  /* 12e009a8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e009ab push eax */
  push32((uint32_t)(EAX));
  /* 12e009ac call 0x12e00ac0 */
  push32(0x12e009b1u); f_12e00ac0();
  /* 12e009b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e009b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e009b6 je 0x12e009d9 */
  if (C.zf) goto L_12e009d9;
  /* 12e009b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e009bb mov dword ptr [0x12e2092c], ecx */
  w32((uint32_t)(0x12e2092c), (ECX));
  /* 12e009c1 mov edx, dword ptr [0x12e2092c] */
  EDX = (r32((uint32_t)(0x12e2092c)));
  /* 12e009c7 mov dword ptr [0x12e20910], edx */
  w32((uint32_t)(0x12e20910), (EDX));
  /* 12e009cd mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e009d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e009d4 mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
L_12e009d9:;
  /* 12e009d9 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e009de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e009e1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e009e3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e009e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e009e6:;
  /* 12e009e6 mov esp, ebp */
  ESP = (EBP);
  /* 12e009e8 pop ebp */
  EBP = (pop32());
  /* 12e009e9 ret 4 */
  ESPCHK(0x12e00940u, _esp0);
  ESP += 8; return;
}

/* FUN_100109f0 @ 0x12e009f0 (43 bytes, 11 insns) */
void f_12e009f0(void) {
  FTRACE(0x12e009f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e009f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e009f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e009f3 mov eax, dword ptr [0x12e20928] */
  EAX = (r32((uint32_t)(0x12e20928)));
  /* 12e009f8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12e009fd mov dword ptr [0x12e20928], eax */
  w32((uint32_t)(0x12e20928), (EAX));
  /* 12e00a02 call dword ptr [0x12e232d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232d8))), 0x12e00a08u);
  /* 12e00a08 mov dword ptr [0x12e2092c], eax */
  w32((uint32_t)(0x12e2092c), (EAX));
  /* 12e00a0d mov ecx, dword ptr [0x12e2092c] */
  ECX = (r32((uint32_t)(0x12e2092c)));
  /* 12e00a13 mov dword ptr [0x12e20910], ecx */
  w32((uint32_t)(0x12e20910), (ECX));
  /* 12e00a19 pop ebp */
  EBP = (pop32());
  /* 12e00a1a ret  */
  ESPCHK(0x12e009f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a20 @ 0x12e00a20 (155 bytes, 57 insns) */
void f_12e00a20(void) {
  FTRACE(0x12e00a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00a21 mov ebp, esp */
  EBP = (ESP);
  /* 12e00a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00a26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00a2a je 0x12e00a4b */
  if (C.zf) goto L_12e00a4b;
  /* 12e00a2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00a2f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e00a32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e00a34 je 0x12e00a4b */
  if (C.zf) goto L_12e00a4b;
  /* 12e00a36 push 0x12e1ceb8 */
  push32((uint32_t)(0x12e1ceb8u));
  /* 12e00a3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00a3e push edx */
  push32((uint32_t)(EDX));
  /* 12e00a3f call 0x12dfff80 */
  push32(0x12e00a44u); f_12dfff80();
  /* 12e00a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00a49 jne 0x12e00a73 */
  if (!C.zf) goto L_12e00a73;
L_12e00a4b:;
  /* 12e00a4b push 8 */
  push32((uint32_t)(0x8u));
  /* 12e00a4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e00a50 push eax */
  push32((uint32_t)(EAX));
  /* 12e00a51 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12e00a56 mov ecx, dword ptr [0x12e2092c] */
  ECX = (r32((uint32_t)(0x12e2092c)));
  /* 12e00a5c push ecx */
  push32((uint32_t)(ECX));
  /* 12e00a5d call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e00a63u);
  /* 12e00a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00a65 jne 0x12e00a6b */
  if (!C.zf) goto L_12e00a6b;
  /* 12e00a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00a69 jmp 0x12e00ab7 */
  goto L_12e00ab7;
L_12e00a6b:;
  /* 12e00a6b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12e00a6e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e00a71 jmp 0x12e00aab */
  goto L_12e00aab;
L_12e00a73:;
  /* 12e00a73 push 0x12e1ceb4 */
  push32((uint32_t)(0x12e1ceb4u));
  /* 12e00a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00a7b push eax */
  push32((uint32_t)(EAX));
  /* 12e00a7c call 0x12dfff80 */
  push32(0x12e00a81u); f_12dfff80();
  /* 12e00a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00a86 jne 0x12e00aab */
  if (!C.zf) goto L_12e00aab;
  /* 12e00a88 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e00a8a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e00a8d push ecx */
  push32((uint32_t)(ECX));
  /* 12e00a8e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e00a90 mov edx, dword ptr [0x12e2092c] */
  EDX = (r32((uint32_t)(0x12e2092c)));
  /* 12e00a96 push edx */
  push32((uint32_t)(EDX));
  /* 12e00a97 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e00a9du);
  /* 12e00a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00a9f jne 0x12e00aa5 */
  if (!C.zf) goto L_12e00aa5;
  /* 12e00aa1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00aa3 jmp 0x12e00ab7 */
  goto L_12e00ab7;
L_12e00aa5:;
  /* 12e00aa5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e00aa8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e00aab:;
  /* 12e00aab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00aae push ecx */
  push32((uint32_t)(ECX));
  /* 12e00aaf call 0x12e02d70 */
  push32(0x12e00ab4u); f_12e02d70();
  /* 12e00ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e00ab7:;
  /* 12e00ab7 mov esp, ebp */
  ESP = (EBP);
  /* 12e00ab9 pop ebp */
  EBP = (pop32());
  /* 12e00aba ret  */
  ESPCHK(0x12e00a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x12e00ac0 (79 bytes, 26 insns) */
void f_12e00ac0(void) {
  FTRACE(0x12e00ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12e00ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00ac6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12e00aca mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12e00ace mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e00ad5 jmp 0x12e00ae0 */
  goto L_12e00ae0;
L_12e00ad7:;
  /* 12e00ad7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e00ada add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00add mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e00ae0:;
  /* 12e00ae0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00ae4 jae 0x12e00b06 */
  if (!C.cf) goto L_12e00b06;
  /* 12e00ae6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00ae9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e00aef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e00af2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e00af4 mov cx, word ptr [eax*2 + 0x12e1f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12e1f9c4)));
  /* 12e00afc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00afe jne 0x12e00b04 */
  if (!C.zf) goto L_12e00b04;
  /* 12e00b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b02 jmp 0x12e00b0b */
  goto L_12e00b0b;
L_12e00b04:;
  /* 12e00b04 jmp 0x12e00ad7 */
  goto L_12e00ad7;
L_12e00b06:;
  /* 12e00b06 mov eax, 1 */
  EAX = (0x1u);
L_12e00b0b:;
  /* 12e00b0b mov esp, ebp */
  ESP = (EBP);
  /* 12e00b0d pop ebp */
  EBP = (pop32());
  /* 12e00b0e ret  */
  ESPCHK(0x12e00ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b10 @ 0x12e00b10 (135 bytes, 48 insns) */
void f_12e00b10(void) {
  FTRACE(0x12e00b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00b11 mov ebp, esp */
  EBP = (ESP);
  /* 12e00b13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00b16 push esi */
  push32((uint32_t)(ESI));
  /* 12e00b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00b1a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b1f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b24 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b29 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12e00b2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e00b34 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e00b36 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12e00b39 push ecx */
  push32((uint32_t)(ECX));
  /* 12e00b3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e00b3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00b3f push edx */
  push32((uint32_t)(EDX));
  /* 12e00b40 call dword ptr [0x12e20930] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20930))), 0x12e00b46u);
  /* 12e00b46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00b48 jne 0x12e00b4e */
  if (!C.zf) goto L_12e00b4e;
  /* 12e00b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b4c jmp 0x12e00b92 */
  goto L_12e00b92;
L_12e00b4e:;
  /* 12e00b4e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12e00b51 push eax */
  push32((uint32_t)(EAX));
  /* 12e00b52 call 0x12e00d80 */
  push32(0x12e00b57u); f_12e00d80();
  /* 12e00b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00b5a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00b5d je 0x12e00b8d */
  if (C.zf) goto L_12e00b8d;
  /* 12e00b5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00b63 je 0x12e00b8d */
  if (C.zf) goto L_12e00b8d;
  /* 12e00b65 mov ecx, dword ptr [0x12e20920] */
  ECX = (r32((uint32_t)(0x12e20920)));
  /* 12e00b6b push ecx */
  push32((uint32_t)(ECX));
  /* 12e00b6c call 0x12e00e00 */
  push32(0x12e00b71u); f_12e00e00();
  /* 12e00b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00b74 mov esi, eax */
  ESI = (EAX);
  /* 12e00b76 mov edx, dword ptr [0x12e20920] */
  EDX = (r32((uint32_t)(0x12e20920)));
  /* 12e00b7c push edx */
  push32((uint32_t)(EDX));
  /* 12e00b7d call 0x12df8510 */
  push32(0x12e00b82u); f_12df8510();
  /* 12e00b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00b85 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00b87 jne 0x12e00b8d */
  if (!C.zf) goto L_12e00b8d;
  /* 12e00b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e00b8b jmp 0x12e00b92 */
  goto L_12e00b92;
L_12e00b8d:;
  /* 12e00b8d mov eax, 1 */
  EAX = (0x1u);
L_12e00b92:;
  /* 12e00b92 pop esi */
  ESI = (pop32());
  /* 12e00b93 mov esp, ebp */
  ESP = (EBP);
  /* 12e00b95 pop ebp */
  EBP = (pop32());
  /* 12e00b96 ret  */
  ESPCHK(0x12e00b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ba0 @ 0x12e00ba0 (77 bytes, 18 insns) */
void f_12e00ba0(void) {
  FTRACE(0x12e00ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12e00ba3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00ba9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12e00bb3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12e00bb9 push eax */
  push32((uint32_t)(EAX));
  /* 12e00bba call dword ptr [0x12e232fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232fc))), 0x12e00bc0u);
  /* 12e00bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e00bc2 je 0x12e00bd9 */
  if (C.zf) goto L_12e00bd9;
  /* 12e00bc4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00bcb jne 0x12e00bd9 */
  if (!C.zf) goto L_12e00bd9;
  /* 12e00bcd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12e00bd7 jmp 0x12e00be3 */
  goto L_12e00be3;
L_12e00bd9:;
  /* 12e00bd9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12e00be3:;
  /* 12e00be3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e00be9 mov esp, ebp */
  ESP = (EBP);
  /* 12e00beb pop ebp */
  EBP = (pop32());
  /* 12e00bec ret  */
  ESPCHK(0x12e00ba0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12e00bf0 (388 bytes, 118 insns) */
void f_12e00bf0(void) {
  FTRACE(0x12e00bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e00bf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00bf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e00bfd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12e00c04 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e00c0b:;
  /* 12e00c0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e00c0e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c11 jg 0x12e00d58 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e00d58;
  /* 12e00c17 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e00c1a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00c1d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e00c1e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00c20 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e00c22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e00c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00c28 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00c2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00c2e cmp edx, dword ptr [ecx + 0x12e1f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12e1f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c34 jne 0x12e00d2e */
  if (!C.zf) goto L_12e00d2e;
  /* 12e00c3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e00c3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e00c40 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c44 ja 0x12e00c67 */
  if ((!C.cf&&!C.zf)) goto L_12e00c67;
  /* 12e00c46 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c4a je 0x12e00cd9 */
  if (C.zf) goto L_12e00cd9;
  /* 12e00c50 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c54 je 0x12e00c84 */
  if (C.zf) goto L_12e00c84;
  /* 12e00c56 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c5a je 0x12e00ca6 */
  if (C.zf) goto L_12e00ca6;
  /* 12e00c5c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c60 je 0x12e00cc8 */
  if (C.zf) goto L_12e00cc8;
  /* 12e00c62 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00c67:;
  /* 12e00c67 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c6e je 0x12e00c95 */
  if (C.zf) goto L_12e00c95;
  /* 12e00c70 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c77 je 0x12e00cb7 */
  if (C.zf) goto L_12e00cb7;
  /* 12e00c79 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00c80 je 0x12e00cea */
  if (C.zf) goto L_12e00cea;
  /* 12e00c82 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00c84:;
  /* 12e00c84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00c87 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00c8a add ecx, 0x12e1f524 */
  { uint32_t _a=(ECX),_b=(0x12e1f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00c90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e00c93 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00c95:;
  /* 12e00c95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00c98 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00c9b mov eax, dword ptr [edx + 0x12e1f52c] */
  EAX = (r32((uint32_t)(EDX + 0x12e1f52c)));
  /* 12e00ca1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e00ca4 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00ca6:;
  /* 12e00ca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00ca9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00cac add ecx, 0x12e1f530 */
  { uint32_t _a=(ECX),_b=(0x12e1f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00cb2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e00cb5 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00cb7:;
  /* 12e00cb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00cba imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00cbd mov eax, dword ptr [edx + 0x12e1f534] */
  EAX = (r32((uint32_t)(EDX + 0x12e1f534)));
  /* 12e00cc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e00cc6 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00cc8:;
  /* 12e00cc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00ccb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00cce add ecx, 0x12e1f538 */
  { uint32_t _a=(ECX),_b=(0x12e1f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00cd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e00cd7 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00cd9:;
  /* 12e00cd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00cdc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00cdf add edx, 0x12e1f53c */
  { uint32_t _a=(EDX),_b=(0x12e1f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00ce5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e00ce8 jmp 0x12e00cf8 */
  goto L_12e00cf8;
L_12e00cea:;
  /* 12e00cea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00ced imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00cf0 add eax, 0x12e1f544 */
  { uint32_t _a=(EAX),_b=(0x12e1f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00cf5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e00cf8:;
  /* 12e00cf8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00cfc je 0x12e00d04 */
  if (C.zf) goto L_12e00d04;
  /* 12e00cfe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00d02 jge 0x12e00d06 */
  if ((C.sf==C.of)) goto L_12e00d06;
L_12e00d04:;
  /* 12e00d04 jmp 0x12e00d58 */
  goto L_12e00d58;
L_12e00d06:;
  /* 12e00d06 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e00d09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00d0c push ecx */
  push32((uint32_t)(ECX));
  /* 12e00d0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e00d10 push edx */
  push32((uint32_t)(EDX));
  /* 12e00d11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e00d14 push eax */
  push32((uint32_t)(EAX));
  /* 12e00d15 call 0x12df8f00 */
  push32(0x12e00d1au); f_12df8f00();
  /* 12e00d1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00d1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e00d20 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00d23 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12e00d27 mov eax, 1 */
  EAX = (0x1u);
  /* 12e00d2c jmp 0x12e00d6e */
  goto L_12e00d6e;
L_12e00d2e:;
  /* 12e00d2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00d31 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e00d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00d37 cmp eax, dword ptr [edx + 0x12e1f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12e1f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00d3d jae 0x12e00d4a */
  if (!C.cf) goto L_12e00d4a;
  /* 12e00d3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00d42 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00d45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e00d48 jmp 0x12e00d53 */
  goto L_12e00d53;
L_12e00d4a:;
  /* 12e00d4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e00d4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00d50 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e00d53:;
  /* 12e00d53 jmp 0x12e00c0b */
  goto L_12e00c0b;
L_12e00d58:;
  /* 12e00d58 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e00d5b push eax */
  push32((uint32_t)(EAX));
  /* 12e00d5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e00d5f push ecx */
  push32((uint32_t)(ECX));
  /* 12e00d60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e00d63 push edx */
  push32((uint32_t)(EDX));
  /* 12e00d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00d67 push eax */
  push32((uint32_t)(EAX));
  /* 12e00d68 call dword ptr [0x12e232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f4))), 0x12e00d6eu);
L_12e00d6e:;
  /* 12e00d6e mov esp, ebp */
  ESP = (EBP);
  /* 12e00d70 pop ebp */
  EBP = (pop32());
  /* 12e00d71 ret 0x10 */
  ESPCHK(0x12e00bf0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010d80 @ 0x12e00d80 (118 bytes, 42 insns) */
void f_12e00d80(void) {
  FTRACE(0x12e00d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00d81 mov ebp, esp */
  EBP = (ESP);
  /* 12e00d83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00d86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e00d8d:;
  /* 12e00d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00d90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e00d92 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12e00d95 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e00d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00d9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00d9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e00da2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e00da4 je 0x12e00def */
  if (C.zf) goto L_12e00def;
  /* 12e00da6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e00daa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00dad jl 0x12e00dc2 */
  if ((C.sf!=C.of)) goto L_12e00dc2;
  /* 12e00daf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e00db3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00db6 jg 0x12e00dc2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e00dc2;
  /* 12e00db8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e00dbb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e00dbd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12e00dc0 jmp 0x12e00ddc */
  goto L_12e00ddc;
L_12e00dc2:;
  /* 12e00dc2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e00dc6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00dc9 jl 0x12e00ddc */
  if ((C.sf!=C.of)) goto L_12e00ddc;
  /* 12e00dcb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e00dcf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00dd2 jg 0x12e00ddc */
  if ((!C.zf&&C.sf==C.of)) goto L_12e00ddc;
  /* 12e00dd4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e00dd7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e00dd9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12e00ddc:;
  /* 12e00ddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00ddf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e00de2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e00de6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e00dea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e00ded jmp 0x12e00d8d */
  goto L_12e00d8d;
L_12e00def:;
  /* 12e00def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e00df2 mov esp, ebp */
  ESP = (EBP);
  /* 12e00df4 pop ebp */
  EBP = (pop32());
  /* 12e00df5 ret  */
  ESPCHK(0x12e00d80u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12e00e00 (101 bytes, 36 insns) */
void f_12e00e00(void) {
  FTRACE(0x12e00e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00e01 mov ebp, esp */
  EBP = (ESP);
  /* 12e00e03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e00e06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e00e0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00e10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e00e12 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12e00e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00e18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00e1b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e00e1e:;
  /* 12e00e1e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e00e22 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00e25 jl 0x12e00e30 */
  if ((C.sf!=C.of)) goto L_12e00e30;
  /* 12e00e27 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e00e2b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00e2e jle 0x12e00e42 */
  if ((C.zf||C.sf!=C.of)) goto L_12e00e42;
L_12e00e30:;
  /* 12e00e30 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e00e34 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00e37 jl 0x12e00e5e */
  if ((C.sf!=C.of)) goto L_12e00e5e;
  /* 12e00e39 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e00e3d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00e40 jg 0x12e00e5e */
  if ((!C.zf&&C.sf==C.of)) goto L_12e00e5e;
L_12e00e42:;
  /* 12e00e42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e00e45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00e48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e00e4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00e4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e00e50 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12e00e53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00e56 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00e59 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e00e5c jmp 0x12e00e1e */
  goto L_12e00e1e;
L_12e00e5e:;
  /* 12e00e5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e00e61 mov esp, ebp */
  ESP = (EBP);
  /* 12e00e63 pop ebp */
  EBP = (pop32());
  /* 12e00e64 ret  */
  ESPCHK(0x12e00e00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12e00e68 (32 bytes, 18 insns) */
void f_12e00e68(void) {
  FTRACE(0x12e00e68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00e68 push ebp */
  push32((uint32_t)(EBP));
  /* 12e00e69 mov ebp, esp */
  EBP = (ESP);
  /* 12e00e6b push ebx */
  push32((uint32_t)(EBX));
  /* 12e00e6c push esi */
  push32((uint32_t)(ESI));
  /* 12e00e6d push edi */
  push32((uint32_t)(EDI));
  /* 12e00e6e push ebp */
  push32((uint32_t)(EBP));
  /* 12e00e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e00e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e00e73 push 0x12e00e80 */
  push32((uint32_t)(0x12e00e80u));
  /* 12e00e78 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12e00e7b call 0x12e04c4c */
  push32(0x12e00e80u); f_12e04c4c();
  /* 12e00e80 pop ebp */
  EBP = (pop32());
  /* 12e00e81 pop edi */
  EDI = (pop32());
  /* 12e00e82 pop esi */
  ESI = (pop32());
  /* 12e00e83 pop ebx */
  EBX = (pop32());
  /* 12e00e84 mov esp, ebp */
  ESP = (EBP);
  /* 12e00e86 pop ebp */
  EBP = (pop32());
  /* 12e00e87 ret  */
  ESPCHK(0x12e00e68u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12e00eaa (104 bytes, 33 insns) */
void f_12e00eaa(void) {
  FTRACE(0x12e00eaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00eaa push ebx */
  push32((uint32_t)(EBX));
  /* 12e00eab push esi */
  push32((uint32_t)(ESI));
  /* 12e00eac push edi */
  push32((uint32_t)(EDI));
  /* 12e00ead mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e00eb1 push eax */
  push32((uint32_t)(EAX));
  /* 12e00eb2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12e00eb4 push 0x12e00e88 */
  push32((uint32_t)(0x12e00e88u));
  /* 12e00eb9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12e00ec0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12e00ec7:;
  /* 12e00ec7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12e00ecb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e00ece mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12e00ed1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00ed4 je 0x12e00f04 */
  if (C.zf) goto L_12e00f04;
  /* 12e00ed6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00eda je 0x12e00f04 */
  if (C.zf) goto L_12e00f04;
  /* 12e00edc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12e00edf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12e00ee2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12e00ee6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12e00ee9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e00eee jne 0x12e00f02 */
  if (!C.zf) goto L_12e00f02;
  /* 12e00ef0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12e00ef5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12e00ef9 call 0x12e00f3e */
  push32(0x12e00efeu); f_12e00f3e();
  /* 12e00efe call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12e00f02u);
L_12e00f02:;
  /* 12e00f02 jmp 0x12e00ec7 */
  goto L_12e00ec7;
L_12e00f04:;
  /* 12e00f04 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12e00f0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e00f0e pop edi */
  EDI = (pop32());
  /* 12e00f0f pop esi */
  ESI = (pop32());
  /* 12e00f10 pop ebx */
  EBX = (pop32());
  /* 12e00f11 ret  */
  ESPCHK(0x12e00eaau, _esp0);
  ESP += 4; return;
}

/* FUN_10010f3e @ 0x12e00f3e (24 bytes, 10 insns) */
void f_12e00f3e(void) {
  FTRACE(0x12e00f3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e00f3e push ebx */
  push32((uint32_t)(EBX));
  /* 12e00f3f push ecx */
  push32((uint32_t)(ECX));
  /* 12e00f40 mov ebx, 0x12e1fc98 */
  EBX = (0x12e1fc98u);
  /* 12e00f45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e00f48 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12e00f4b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12e00f4e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12e00f51 pop ecx */
  ECX = (pop32());
  /* 12e00f52 pop ebx */
  EBX = (pop32());
  /* 12e00f53 ret 4 */
  ESPCHK(0x12e00f3eu, _esp0);
  ESP += 8; return;
}

/* FUN_1001101d @ 0x12e0101d (27 bytes, 11 insns) */
void f_12e0101d(void) {
  FTRACE(0x12e0101du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e0101d push ebp */
  push32((uint32_t)(EBP));
  /* 12e0101e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e01022 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12e01024 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e01027 push eax */
  push32((uint32_t)(EAX));
  /* 12e01028 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e0102b push eax */
  push32((uint32_t)(EAX));
  /* 12e0102c call 0x12e00eaa */
  push32(0x12e01031u); f_12e00eaa();
  /* 12e01031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01034 pop ebp */
  EBP = (pop32());
  /* 12e01035 ret 4 */
  ESPCHK(0x12e0101du, _esp0);
  ESP += 8; return;
}

/* FUN_10011040 @ 0x12e01040 (122 bytes, 39 insns) */
void f_12e01040(void) {
  FTRACE(0x12e01040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01040 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01041 mov ebp, esp */
  EBP = (ESP);
  /* 12e01043 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01047 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0104d jae 0x12e01071 */
  if (!C.cf) goto L_12e01071;
  /* 12e0104f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01052 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e01055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01058 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e0105b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e0105e mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12e01065 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e0106a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e0106d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e0106f jne 0x12e0108c */
  if (!C.zf) goto L_12e0108c;
L_12e01071:;
  /* 12e01071 call 0x12dfcc50 */
  push32(0x12e01076u); f_12dfcc50();
  /* 12e01076 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e0107c call 0x12dfcc60 */
  push32(0x12e01081u); f_12dfcc60();
  /* 12e01081 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e01087 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e0108a jmp 0x12e010b6 */
  goto L_12e010b6;
L_12e0108c:;
  /* 12e0108c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0108f push edx */
  push32((uint32_t)(EDX));
  /* 12e01090 call 0x12dfd180 */
  push32(0x12e01095u); f_12dfd180();
  /* 12e01095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0109b push eax */
  push32((uint32_t)(EAX));
  /* 12e0109c call 0x12e010c0 */
  push32(0x12e010a1u); f_12e010c0();
  /* 12e010a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e010a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e010a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e010aa push ecx */
  push32((uint32_t)(ECX));
  /* 12e010ab call 0x12dfd210 */
  push32(0x12e010b0u); f_12dfd210();
  /* 12e010b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e010b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e010b6:;
  /* 12e010b6 mov esp, ebp */
  ESP = (EBP);
  /* 12e010b8 pop ebp */
  EBP = (pop32());
  /* 12e010b9 ret  */
  ESPCHK(0x12e01040u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12e010c0 (170 bytes, 59 insns) */
void f_12e010c0(void) {
  FTRACE(0x12e010c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e010c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e010c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e010c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e010c4 push esi */
  push32((uint32_t)(ESI));
  /* 12e010c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e010c8 push eax */
  push32((uint32_t)(EAX));
  /* 12e010c9 call 0x12dfd000 */
  push32(0x12e010ceu); f_12dfd000();
  /* 12e010ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e010d1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e010d4 je 0x12e01113 */
  if (C.zf) goto L_12e01113;
  /* 12e010d6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e010da je 0x12e010e2 */
  if (C.zf) goto L_12e010e2;
  /* 12e010dc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e010e0 jne 0x12e010fc */
  if (!C.zf) goto L_12e010fc;
L_12e010e2:;
  /* 12e010e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e010e4 call 0x12dfd000 */
  push32(0x12e010e9u); f_12dfd000();
  /* 12e010e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e010ec mov esi, eax */
  ESI = (EAX);
  /* 12e010ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12e010f0 call 0x12dfd000 */
  push32(0x12e010f5u); f_12dfd000();
  /* 12e010f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e010f8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e010fa je 0x12e01113 */
  if (C.zf) goto L_12e01113;
L_12e010fc:;
  /* 12e010fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e010ff push ecx */
  push32((uint32_t)(ECX));
  /* 12e01100 call 0x12dfd000 */
  push32(0x12e01105u); f_12dfd000();
  /* 12e01105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01108 push eax */
  push32((uint32_t)(EAX));
  /* 12e01109 call dword ptr [0x12e23304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23304))), 0x12e0110fu);
  /* 12e0110f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e01111 je 0x12e0111c */
  if (C.zf) goto L_12e0111c;
L_12e01113:;
  /* 12e01113 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e0111a jmp 0x12e01125 */
  goto L_12e01125;
L_12e0111c:;
  /* 12e0111c call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12e01122u);
  /* 12e01122 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e01125:;
  /* 12e01125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01128 push edx */
  push32((uint32_t)(EDX));
  /* 12e01129 call 0x12dfcf20 */
  push32(0x12e0112eu); f_12dfcf20();
  /* 12e0112e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01134 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e01137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0113a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e0113d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e01140 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12e01147 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12e0114c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01150 je 0x12e01163 */
  if (C.zf) goto L_12e01163;
  /* 12e01152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01155 push eax */
  push32((uint32_t)(EAX));
  /* 12e01156 call 0x12dfcbb0 */
  push32(0x12e0115bu); f_12dfcbb0();
  /* 12e0115b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0115e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e01161 jmp 0x12e01165 */
  goto L_12e01165;
L_12e01163:;
  /* 12e01163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e01165:;
  /* 12e01165 pop esi */
  ESI = (pop32());
  /* 12e01166 mov esp, ebp */
  ESP = (EBP);
  /* 12e01168 pop ebp */
  EBP = (pop32());
  /* 12e01169 ret  */
  ESPCHK(0x12e010c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011170 @ 0x12e01170 (146 bytes, 52 insns) */
void f_12e01170(void) {
  FTRACE(0x12e01170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01170 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01171 mov ebp, esp */
  EBP = (ESP);
  /* 12e01173 push ebx */
  push32((uint32_t)(EBX));
  /* 12e01174 push esi */
  push32((uint32_t)(ESI));
  /* 12e01175 push edi */
  push32((uint32_t)(EDI));
L_12e01176:;
  /* 12e01176 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0117a jne 0x12e0119a */
  if (!C.zf) goto L_12e0119a;
  /* 12e0117c push 0x12e1c7f4 */
  push32((uint32_t)(0x12e1c7f4u));
  /* 12e01181 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e01183 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e01185 push 0x12e1cebc */
  push32((uint32_t)(0x12e1cebcu));
  /* 12e0118a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e0118c call 0x12df3680 */
  push32(0x12e01191u); f_12df3680();
  /* 12e01191 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01197 jne 0x12e0119a */
  if (!C.zf) goto L_12e0119a;
  /* 12e01199 int3  */
  x86_unimpl("int3 @ 0x12e01199");
L_12e0119a:;
  /* 12e0119a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0119c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0119e jne 0x12e01176 */
  if (!C.zf) goto L_12e01176;
  /* 12e011a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e011a6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12e011ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e011ae je 0x12e011fd */
  if (C.zf) goto L_12e011fd;
  /* 12e011b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011b3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e011b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e011b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e011bb je 0x12e011fd */
  if (C.zf) goto L_12e011fd;
  /* 12e011bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e011bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e011c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e011c6 call 0x12df6170 */
  push32(0x12e011cbu); f_12df6170();
  /* 12e011cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e011ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011d1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e011d4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12e011da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011dd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e011e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011e3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12e011e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011ec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e011f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e011f6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12e011fd:;
  /* 12e011fd pop edi */
  EDI = (pop32());
  /* 12e011fe pop esi */
  ESI = (pop32());
  /* 12e011ff pop ebx */
  EBX = (pop32());
  /* 12e01200 pop ebp */
  EBP = (pop32());
  /* 12e01201 ret  */
  ESPCHK(0x12e01170u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x12e01210 (289 bytes, 97 insns) */
void f_12e01210(void) {
  FTRACE(0x12e01210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01210 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01211 mov ebp, esp */
  EBP = (ESP);
  /* 12e01213 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01216 push esi */
  push32((uint32_t)(ESI));
  /* 12e01217 mov eax, dword ptr [0x12e1fca8] */
  EAX = (r32((uint32_t)(0x12e1fca8)));
  /* 12e0121c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e0121f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e01226 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e0122d jmp 0x12e01238 */
  goto L_12e01238;
L_12e0122f:;
  /* 12e0122f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01232 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01235 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e01238:;
  /* 12e01238 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0123c jae 0x12e01271 */
  if (!C.cf) goto L_12e01271;
  /* 12e0123e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01241 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01244 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e01247 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01248 call 0x12df8510 */
  push32(0x12e0124du); f_12df8510();
  /* 12e0124d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01250 mov esi, eax */
  ESI = (EAX);
  /* 12e01252 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01255 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01258 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12e0125c push ecx */
  push32((uint32_t)(ECX));
  /* 12e0125d call 0x12df8510 */
  push32(0x12e01262u); f_12df8510();
  /* 12e01262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01265 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01268 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e0126c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e0126f jmp 0x12e0122f */
  goto L_12e0122f;
L_12e01271:;
  /* 12e01271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e01274 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01277 push eax */
  push32((uint32_t)(EAX));
  /* 12e01278 call 0x12df56c0 */
  push32(0x12e0127du); f_12df56c0();
  /* 12e0127d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01280 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e01283 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01287 je 0x12e01329 */
  if (C.zf) goto L_12e01329;
  /* 12e0128d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01290 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e01293 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e0129a jmp 0x12e012a5 */
  goto L_12e012a5;
L_12e0129c:;
  /* 12e0129c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0129f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e012a2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e012a5:;
  /* 12e012a5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e012a9 jae 0x12e0131a */
  if (!C.cf) goto L_12e0131a;
  /* 12e012ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012ae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12e012b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e012b7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e012ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e012bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e012c0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e012c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e012c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012c7 push edx */
  push32((uint32_t)(EDX));
  /* 12e012c8 call 0x12df8690 */
  push32(0x12e012cdu); f_12df8690();
  /* 12e012cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e012d0 push eax */
  push32((uint32_t)(EAX));
  /* 12e012d1 call 0x12df8510 */
  push32(0x12e012d6u); f_12df8510();
  /* 12e012d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e012d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e012de mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e012e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012e4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12e012e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e012ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e012f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e012f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e012f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12e012fa push eax */
  push32((uint32_t)(EAX));
  /* 12e012fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e012fe push ecx */
  push32((uint32_t)(ECX));
  /* 12e012ff call 0x12df8690 */
  push32(0x12e01304u); f_12df8690();
  /* 12e01304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01307 push eax */
  push32((uint32_t)(EAX));
  /* 12e01308 call 0x12df8510 */
  push32(0x12e0130du); f_12df8510();
  /* 12e0130d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01310 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01313 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01315 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e01318 jmp 0x12e0129c */
  goto L_12e0129c;
L_12e0131a:;
  /* 12e0131a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0131d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e01320 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01323 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01326 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e01329:;
  /* 12e01329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0132c pop esi */
  ESI = (pop32());
  /* 12e0132d mov esp, ebp */
  ESP = (EBP);
  /* 12e0132f pop ebp */
  EBP = (pop32());
  /* 12e01330 ret  */
  ESPCHK(0x12e01210u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x12e01340 (291 bytes, 97 insns) */
void f_12e01340(void) {
  FTRACE(0x12e01340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01340 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01341 mov ebp, esp */
  EBP = (ESP);
  /* 12e01343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01346 push esi */
  push32((uint32_t)(ESI));
  /* 12e01347 mov eax, dword ptr [0x12e1fca8] */
  EAX = (r32((uint32_t)(0x12e1fca8)));
  /* 12e0134c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e0134f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e01356 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e0135d jmp 0x12e01368 */
  goto L_12e01368;
L_12e0135f:;
  /* 12e0135f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01362 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01365 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e01368:;
  /* 12e01368 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0136c jae 0x12e013a2 */
  if (!C.cf) goto L_12e013a2;
  /* 12e0136e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01371 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01374 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12e01378 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01379 call 0x12df8510 */
  push32(0x12e0137eu); f_12df8510();
  /* 12e0137e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01381 mov esi, eax */
  ESI = (EAX);
  /* 12e01383 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01386 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01389 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12e0138d push ecx */
  push32((uint32_t)(ECX));
  /* 12e0138e call 0x12df8510 */
  push32(0x12e01393u); f_12df8510();
  /* 12e01393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01396 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01399 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e0139d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e013a0 jmp 0x12e0135f */
  goto L_12e0135f;
L_12e013a2:;
  /* 12e013a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e013a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e013a8 push eax */
  push32((uint32_t)(EAX));
  /* 12e013a9 call 0x12df56c0 */
  push32(0x12e013aeu); f_12df56c0();
  /* 12e013ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e013b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e013b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e013b8 je 0x12e0145b */
  if (C.zf) goto L_12e0145b;
  /* 12e013be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e013c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e013c4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e013cb jmp 0x12e013d6 */
  goto L_12e013d6;
L_12e013cd:;
  /* 12e013cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e013d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e013d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e013d6:;
  /* 12e013d6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e013da jae 0x12e0144c */
  if (!C.cf) goto L_12e0144c;
  /* 12e013dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e013df mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12e013e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e013e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e013e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e013eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e013ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e013f1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12e013f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e013f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e013f9 push edx */
  push32((uint32_t)(EDX));
  /* 12e013fa call 0x12df8690 */
  push32(0x12e013ffu); f_12df8690();
  /* 12e013ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01402 push eax */
  push32((uint32_t)(EAX));
  /* 12e01403 call 0x12df8510 */
  push32(0x12e01408u); f_12df8510();
  /* 12e01408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0140b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0140e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01410 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e01413 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01416 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12e01419 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0141c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0141f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e01422 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01425 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01428 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e0142c push eax */
  push32((uint32_t)(EAX));
  /* 12e0142d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01430 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01431 call 0x12df8690 */
  push32(0x12e01436u); f_12df8690();
  /* 12e01436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01439 push eax */
  push32((uint32_t)(EAX));
  /* 12e0143a call 0x12df8510 */
  push32(0x12e0143fu); f_12df8510();
  /* 12e0143f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01442 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01445 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01447 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e0144a jmp 0x12e013cd */
  goto L_12e013cd;
L_12e0144c:;
  /* 12e0144c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0144f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e01452 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01458 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e0145b:;
  /* 12e0145b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0145e pop esi */
  ESI = (pop32());
  /* 12e0145f mov esp, ebp */
  ESP = (EBP);
  /* 12e01461 pop ebp */
  EBP = (pop32());
  /* 12e01462 ret  */
  ESPCHK(0x12e01340u, _esp0);
  ESP += 4; return;
}

/* FUN_10011470 @ 0x12e01470 (878 bytes, 273 insns) */
void f_12e01470(void) {
  FTRACE(0x12e01470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01470 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01471 mov ebp, esp */
  EBP = (ESP);
  /* 12e01473 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01476 push esi */
  push32((uint32_t)(ESI));
  /* 12e01477 mov eax, dword ptr [0x12e1fca8] */
  EAX = (r32((uint32_t)(0x12e1fca8)));
  /* 12e0147c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e0147f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e01486 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e0148d jmp 0x12e01498 */
  goto L_12e01498;
L_12e0148f:;
  /* 12e0148f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01492 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01495 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e01498:;
  /* 12e01498 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0149c jae 0x12e014d1 */
  if (!C.cf) goto L_12e014d1;
  /* 12e0149e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e014a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e014a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e014a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e014a8 call 0x12df8510 */
  push32(0x12e014adu); f_12df8510();
  /* 12e014ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e014b0 mov esi, eax */
  ESI = (EAX);
  /* 12e014b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e014b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e014b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12e014bc push ecx */
  push32((uint32_t)(ECX));
  /* 12e014bd call 0x12df8510 */
  push32(0x12e014c2u); f_12df8510();
  /* 12e014c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e014c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e014c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e014cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e014cf jmp 0x12e0148f */
  goto L_12e0148f;
L_12e014d1:;
  /* 12e014d1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e014d8 jmp 0x12e014e3 */
  goto L_12e014e3;
L_12e014da:;
  /* 12e014da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e014dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e014e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e014e3:;
  /* 12e014e3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e014e7 jae 0x12e0151d */
  if (!C.cf) goto L_12e0151d;
  /* 12e014e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e014ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e014ef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e014f3 push eax */
  push32((uint32_t)(EAX));
  /* 12e014f4 call 0x12df8510 */
  push32(0x12e014f9u); f_12df8510();
  /* 12e014f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e014fc mov esi, eax */
  ESI = (EAX);
  /* 12e014fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01504 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e01508 push eax */
  push32((uint32_t)(EAX));
  /* 12e01509 call 0x12df8510 */
  push32(0x12e0150eu); f_12df8510();
  /* 12e0150e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01511 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01514 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e01518 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e0151b jmp 0x12e014da */
  goto L_12e014da;
L_12e0151d:;
  /* 12e0151d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01520 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12e01526 push eax */
  push32((uint32_t)(EAX));
  /* 12e01527 call 0x12df8510 */
  push32(0x12e0152cu); f_12df8510();
  /* 12e0152c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0152f mov esi, eax */
  ESI = (EAX);
  /* 12e01531 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01534 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12e0153a push edx */
  push32((uint32_t)(EDX));
  /* 12e0153b call 0x12df8510 */
  push32(0x12e01540u); f_12df8510();
  /* 12e01540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01543 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01546 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e0154a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e0154d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01550 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12e01556 push edx */
  push32((uint32_t)(EDX));
  /* 12e01557 call 0x12df8510 */
  push32(0x12e0155cu); f_12df8510();
  /* 12e0155c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0155f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e01562 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e01566 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e01569 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0156c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12e01572 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01573 call 0x12df8510 */
  push32(0x12e01578u); f_12df8510();
  /* 12e01578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0157b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0157e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e01582 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e01585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01588 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12e0158e push edx */
  push32((uint32_t)(EDX));
  /* 12e0158f call 0x12df8510 */
  push32(0x12e01594u); f_12df8510();
  /* 12e01594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01597 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0159a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e0159e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e015a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e015a4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e015a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e015aa call 0x12df56c0 */
  push32(0x12e015afu); f_12df56c0();
  /* 12e015af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e015b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e015b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e015b9 je 0x12e017d6 */
  if (C.zf) goto L_12e017d6;
  /* 12e015bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e015c2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e015c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e015c8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e015ce mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e015d1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12e015d6 mov eax, dword ptr [0x12e1fca8] */
  EAX = (r32((uint32_t)(0x12e1fca8)));
  /* 12e015db push eax */
  push32((uint32_t)(EAX));
  /* 12e015dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e015df push ecx */
  push32((uint32_t)(ECX));
  /* 12e015e0 call 0x12dfc870 */
  push32(0x12e015e5u); f_12dfc870();
  /* 12e015e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e015e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e015ef jmp 0x12e015fa */
  goto L_12e015fa;
L_12e015f1:;
  /* 12e015f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e015f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e015f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e015fa:;
  /* 12e015fa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e015fe jae 0x12e0166e */
  if (!C.cf) goto L_12e0166e;
  /* 12e01600 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01603 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e01606 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01609 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12e0160c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0160f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01612 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e01615 push edx */
  push32((uint32_t)(EDX));
  /* 12e01616 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01619 push eax */
  push32((uint32_t)(EAX));
  /* 12e0161a call 0x12df8690 */
  push32(0x12e0161fu); f_12df8690();
  /* 12e0161f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01622 push eax */
  push32((uint32_t)(EAX));
  /* 12e01623 call 0x12df8510 */
  push32(0x12e01628u); f_12df8510();
  /* 12e01628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0162b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0162e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e01632 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e01635 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01638 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e0163b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0163e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12e01642 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01648 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12e0164c push edx */
  push32((uint32_t)(EDX));
  /* 12e0164d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01650 push eax */
  push32((uint32_t)(EAX));
  /* 12e01651 call 0x12df8690 */
  push32(0x12e01656u); f_12df8690();
  /* 12e01656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01659 push eax */
  push32((uint32_t)(EAX));
  /* 12e0165a call 0x12df8510 */
  push32(0x12e0165fu); f_12df8510();
  /* 12e0165f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01662 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01665 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e01669 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e0166c jmp 0x12e015f1 */
  goto L_12e015f1;
L_12e0166e:;
  /* 12e0166e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e01675 jmp 0x12e01680 */
  goto L_12e01680;
L_12e01677:;
  /* 12e01677 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0167a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0167d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e01680:;
  /* 12e01680 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01684 jae 0x12e016f6 */
  if (!C.cf) goto L_12e016f6;
  /* 12e01686 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01689 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e0168c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0168f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12e01693 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e01696 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01699 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e0169d push eax */
  push32((uint32_t)(EAX));
  /* 12e0169e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e016a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e016a2 call 0x12df8690 */
  push32(0x12e016a7u); f_12df8690();
  /* 12e016a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e016aa push eax */
  push32((uint32_t)(EAX));
  /* 12e016ab call 0x12df8510 */
  push32(0x12e016b0u); f_12df8510();
  /* 12e016b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e016b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e016b6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e016ba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e016bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e016c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e016c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e016c6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12e016ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e016cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e016d0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e016d4 push eax */
  push32((uint32_t)(EAX));
  /* 12e016d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e016d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e016d9 call 0x12df8690 */
  push32(0x12e016deu); f_12df8690();
  /* 12e016de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e016e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e016e2 call 0x12df8510 */
  push32(0x12e016e7u); f_12df8510();
  /* 12e016e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e016ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e016ed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e016f1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e016f4 jmp 0x12e01677 */
  goto L_12e01677;
L_12e016f6:;
  /* 12e016f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e016f9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e016fc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12e01702 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01705 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12e0170b push ecx */
  push32((uint32_t)(ECX));
  /* 12e0170c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0170f push edx */
  push32((uint32_t)(EDX));
  /* 12e01710 call 0x12df8690 */
  push32(0x12e01715u); f_12df8690();
  /* 12e01715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01718 push eax */
  push32((uint32_t)(EAX));
  /* 12e01719 call 0x12df8510 */
  push32(0x12e0171eu); f_12df8510();
  /* 12e0171e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01721 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01724 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e01728 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e0172b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e0172e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01731 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12e01737 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0173a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12e01740 push eax */
  push32((uint32_t)(EAX));
  /* 12e01741 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01744 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01745 call 0x12df8690 */
  push32(0x12e0174au); f_12df8690();
  /* 12e0174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0174d push eax */
  push32((uint32_t)(EAX));
  /* 12e0174e call 0x12df8510 */
  push32(0x12e01753u); f_12df8510();
  /* 12e01753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01756 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01759 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e0175d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e01760 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e01763 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01766 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12e0176c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0176f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12e01775 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01776 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e01779 push edx */
  push32((uint32_t)(EDX));
  /* 12e0177a call 0x12df8690 */
  push32(0x12e0177fu); f_12df8690();
  /* 12e0177f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01782 push eax */
  push32((uint32_t)(EAX));
  /* 12e01783 call 0x12df8510 */
  push32(0x12e01788u); f_12df8510();
  /* 12e01788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0178b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0178e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e01792 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e01795 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e01798 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e0179b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12e017a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e017a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12e017aa push eax */
  push32((uint32_t)(EAX));
  /* 12e017ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e017ae push ecx */
  push32((uint32_t)(ECX));
  /* 12e017af call 0x12df8690 */
  push32(0x12e017b4u); f_12df8690();
  /* 12e017b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e017b7 push eax */
  push32((uint32_t)(EAX));
  /* 12e017b8 call 0x12df8510 */
  push32(0x12e017bdu); f_12df8510();
  /* 12e017bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e017c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e017c3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e017c7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e017ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e017cd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e017d0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12e017d6:;
  /* 12e017d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e017d9 pop esi */
  ESI = (pop32());
  /* 12e017da mov esp, ebp */
  ESP = (EBP);
  /* 12e017dc pop ebp */
  EBP = (pop32());
  /* 12e017dd ret  */
  ESPCHK(0x12e01470u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x12e017e0 (31 bytes, 15 insns) */
void f_12e017e0(void) {
  FTRACE(0x12e017e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e017e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e017e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e017e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e017e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e017e8 push eax */
  push32((uint32_t)(EAX));
  /* 12e017e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e017ec push ecx */
  push32((uint32_t)(ECX));
  /* 12e017ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e017f0 push edx */
  push32((uint32_t)(EDX));
  /* 12e017f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e017f4 push eax */
  push32((uint32_t)(EAX));
  /* 12e017f5 call 0x12e01800 */
  push32(0x12e017fau); f_12e01800();
  /* 12e017fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e017fd pop ebp */
  EBP = (pop32());
  /* 12e017fe ret  */
  ESPCHK(0x12e017e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011800 @ 0x12e01800 (393 bytes, 123 insns) */
void f_12e01800(void) {
  FTRACE(0x12e01800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01800 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01801 mov ebp, esp */
  EBP = (ESP);
  /* 12e01803 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01806 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0180a jne 0x12e01816 */
  if (!C.zf) goto L_12e01816;
  /* 12e0180c mov eax, dword ptr [0x12e1fca8] */
  EAX = (r32((uint32_t)(0x12e1fca8)));
  /* 12e01811 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e01814 jmp 0x12e0181c */
  goto L_12e0181c;
L_12e01816:;
  /* 12e01816 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01819 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e0181c:;
  /* 12e0181c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0181f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e01822 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01825 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e01828 push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12e0182d call dword ptr [0x12e23224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23224))), 0x12e01833u);
  /* 12e01833 cmp dword ptr [0x12e20a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0183a je 0x12e0185a */
  if (C.zf) goto L_12e0185a;
  /* 12e0183c push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12e01841 call dword ptr [0x12e23218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23218))), 0x12e01847u);
  /* 12e01847 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e01849 call 0x12df9a90 */
  push32(0x12e0184eu); f_12df9a90();
  /* 12e0184e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01851 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e01858 jmp 0x12e01861 */
  goto L_12e01861;
L_12e0185a:;
  /* 12e0185a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e01861:;
  /* 12e01861 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01865 jbe 0x12e01952 */
  if ((C.cf||C.zf)) goto L_12e01952;
  /* 12e0186b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0186e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e01870 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12e01873 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e01877 je 0x12e01881 */
  if (C.zf) goto L_12e01881;
  /* 12e01879 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e0187d je 0x12e01886 */
  if (C.zf) goto L_12e01886;
  /* 12e0187f jmp 0x12e018e0 */
  goto L_12e018e0;
L_12e01881:;
  /* 12e01881 jmp 0x12e01952 */
  goto L_12e01952;
L_12e01886:;
  /* 12e01886 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01889 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0188c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12e0188f mov dword ptr [0x12e20a10], 0 */
  w32((uint32_t)(0x12e20a10), (0x0u));
  /* 12e01899 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0189c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e0189f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e018a2 jne 0x12e018b7 */
  if (!C.zf) goto L_12e018b7;
  /* 12e018a4 mov dword ptr [0x12e20a10], 1 */
  w32((uint32_t)(0x12e20a10), (0x1u));
  /* 12e018ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e018b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e018b4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e018b7:;
  /* 12e018b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e018ba push ecx */
  push32((uint32_t)(ECX));
  /* 12e018bb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12e018be push edx */
  push32((uint32_t)(EDX));
  /* 12e018bf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12e018c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e018c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e018c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e018c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e018ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e018cc push eax */
  push32((uint32_t)(EAX));
  /* 12e018cd call 0x12e01990 */
  push32(0x12e018d2u); f_12e01990();
  /* 12e018d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e018d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e018d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e018db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e018de jmp 0x12e0194d */
  goto L_12e0194d;
L_12e018e0:;
  /* 12e018e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e018e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e018e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e018e7 mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e018ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e018ef mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e018f3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e018f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e018fb je 0x12e01928 */
  if (C.zf) goto L_12e01928;
  /* 12e018fd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01901 jbe 0x12e01928 */
  if ((C.cf||C.zf)) goto L_12e01928;
  /* 12e01903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01906 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01909 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e0190b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e0190d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01910 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01913 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e01916 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0191c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e0191f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01922 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01925 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e01928:;
  /* 12e01928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0192b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0192e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e01930 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e01932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01935 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01938 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e0193b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0193e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01941 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e01944 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e01947 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0194a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e0194d:;
  /* 12e0194d jmp 0x12e01861 */
  goto L_12e01861;
L_12e01952:;
  /* 12e01952 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01956 je 0x12e01964 */
  if (C.zf) goto L_12e01964;
  /* 12e01958 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e0195a call 0x12df9b30 */
  push32(0x12e0195fu); f_12df9b30();
  /* 12e0195f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01962 jmp 0x12e0196f */
  goto L_12e0196f;
L_12e01964:;
  /* 12e01964 push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12e01969 call dword ptr [0x12e23218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23218))), 0x12e0196fu);
L_12e0196f:;
  /* 12e0196f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01973 jbe 0x12e01983 */
  if ((C.cf||C.zf)) goto L_12e01983;
  /* 12e01975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01978 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e0197b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0197e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01981 jmp 0x12e01985 */
  goto L_12e01985;
L_12e01983:;
  /* 12e01983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e01985:;
  /* 12e01985 mov esp, ebp */
  ESP = (EBP);
  /* 12e01987 pop ebp */
  EBP = (pop32());
  /* 12e01988 ret  */
  ESPCHK(0x12e01800u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x12e01990 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12e01990(void) {
  FTRACE(0x12e01990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01990 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01991 mov ebp, esp */
  EBP = (ESP);
  /* 12e01993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01996 push esi */
  push32((uint32_t)(ESI));
  /* 12e01997 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12e0199b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e0199e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e019a1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e019a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e019a7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e019ab ja 0x12e01ef8 */
  if ((!C.cf&&!C.zf)) goto L_12e01ef8;
  /* 12e019b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e019b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e019b6 mov dl, byte ptr [eax + 0x12e01f59] */
  DL = (r8((uint32_t)(EAX + 0x12e01f59)));
  /* 12e019bc jmp dword ptr [edx*4 + 0x12e01efd] */
  switch (EDX) {
    case 0: goto L_12e01ed6;
    case 1: goto L_12e019e5;
    case 2: goto L_12e01a2b;
    case 3: goto L_12e01b78;
    case 4: goto L_12e01ba0;
    case 5: goto L_12e01c3f;
    case 6: goto L_12e01cab;
    case 7: goto L_12e01cd4;
    case 8: goto L_12e01d15;
    case 9: goto L_12e01df7;
    case 10: goto L_12e01e5e;
    case 11: goto L_12e01eab;
    case 12: goto L_12e019c3;
    case 13: goto L_12e01a08;
    case 14: goto L_12e01a4e;
    case 15: goto L_12e01b4e;
    case 16: goto L_12e01be5;
    case 17: goto L_12e01c12;
    case 18: goto L_12e01c67;
    case 19: goto L_12e01ceb;
    case 20: goto L_12e01d99;
    case 21: goto L_12e01e28;
    case 22: goto L_12e01ef8;
    default: x86_unimpl("switch@0x12e019bc out of table"); return;
  }
L_12e019c3:;
  /* 12e019c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e019c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e019c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e019ca push edx */
  push32((uint32_t)(EDX));
  /* 12e019cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e019ce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e019d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e019d4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e019d7 push eax */
  push32((uint32_t)(EAX));
  /* 12e019d8 call 0x12e01fb0 */
  push32(0x12e019ddu); f_12e01fb0();
  /* 12e019dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e019e0 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e019e5:;
  /* 12e019e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e019e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e019e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e019ec push edx */
  push32((uint32_t)(EDX));
  /* 12e019ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e019f0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e019f3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e019f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12e019fa push eax */
  push32((uint32_t)(EAX));
  /* 12e019fb call 0x12e01fb0 */
  push32(0x12e01a00u); f_12e01fb0();
  /* 12e01a00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01a03 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01a08:;
  /* 12e01a08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01a0b push ecx */
  push32((uint32_t)(ECX));
  /* 12e01a0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01a0f push edx */
  push32((uint32_t)(EDX));
  /* 12e01a10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01a13 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e01a16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01a19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e01a1d push eax */
  push32((uint32_t)(EAX));
  /* 12e01a1e call 0x12e01fb0 */
  push32(0x12e01a23u); f_12e01fb0();
  /* 12e01a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01a26 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01a2b:;
  /* 12e01a2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01a2e push ecx */
  push32((uint32_t)(ECX));
  /* 12e01a2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01a32 push edx */
  push32((uint32_t)(EDX));
  /* 12e01a33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01a36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e01a39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01a3c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e01a40 push eax */
  push32((uint32_t)(EAX));
  /* 12e01a41 call 0x12e01fb0 */
  push32(0x12e01a46u); f_12e01fb0();
  /* 12e01a46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01a49 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01a4e:;
  /* 12e01a4e cmp dword ptr [0x12e20a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01a55 je 0x12e01ad6 */
  if (C.zf) goto L_12e01ad6;
  /* 12e01a57 mov dword ptr [0x12e20a10], 0 */
  w32((uint32_t)(0x12e20a10), (0x0u));
  /* 12e01a61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01a64 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01a65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01a68 push edx */
  push32((uint32_t)(EDX));
  /* 12e01a69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01a6c push eax */
  push32((uint32_t)(EAX));
  /* 12e01a6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01a70 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01a71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01a74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12e01a7a push eax */
  push32((uint32_t)(EAX));
  /* 12e01a7b call 0x12e02160 */
  push32(0x12e01a80u); f_12e02160();
  /* 12e01a80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01a83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01a86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01a89 jne 0x12e01a90 */
  if (!C.zf) goto L_12e01a90;
  /* 12e01a8b jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01a90:;
  /* 12e01a90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01a93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e01a95 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12e01a98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01a9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01a9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01aa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01aa3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e01aa5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01aa8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01aaa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01aad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01ab0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e01ab2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01ab6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01ab9 push edx */
  push32((uint32_t)(EDX));
  /* 12e01aba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01abd push eax */
  push32((uint32_t)(EAX));
  /* 12e01abe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01ac2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01ac5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12e01acb push eax */
  push32((uint32_t)(EAX));
  /* 12e01acc call 0x12e02160 */
  push32(0x12e01ad1u); f_12e02160();
  /* 12e01ad1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01ad4 jmp 0x12e01b49 */
  goto L_12e01b49;
L_12e01ad6:;
  /* 12e01ad6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01ada mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01add push edx */
  push32((uint32_t)(EDX));
  /* 12e01ade mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01ae1 push eax */
  push32((uint32_t)(EAX));
  /* 12e01ae2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01ae6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01ae9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12e01aef push eax */
  push32((uint32_t)(EAX));
  /* 12e01af0 call 0x12e02160 */
  push32(0x12e01af5u); f_12e02160();
  /* 12e01af5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01af8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01afb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01afe jne 0x12e01b05 */
  if (!C.zf) goto L_12e01b05;
  /* 12e01b00 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01b05:;
  /* 12e01b05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01b08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e01b0a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12e01b0d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01b10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01b12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01b15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01b18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e01b1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01b1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01b1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01b22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01b25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e01b27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01b2a push ecx */
  push32((uint32_t)(ECX));
  /* 12e01b2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01b2e push edx */
  push32((uint32_t)(EDX));
  /* 12e01b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01b32 push eax */
  push32((uint32_t)(EAX));
  /* 12e01b33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01b36 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01b37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01b3a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12e01b40 push eax */
  push32((uint32_t)(EAX));
  /* 12e01b41 call 0x12e02160 */
  push32(0x12e01b46u); f_12e02160();
  /* 12e01b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e01b49:;
  /* 12e01b49 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01b4e:;
  /* 12e01b4e mov ecx, dword ptr [0x12e20a10] */
  ECX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01b54 mov dword ptr [0x12e20a20], ecx */
  w32((uint32_t)(0x12e20a20), (ECX));
  /* 12e01b5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01b5d push edx */
  push32((uint32_t)(EDX));
  /* 12e01b5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01b61 push eax */
  push32((uint32_t)(EAX));
  /* 12e01b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01b64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01b67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e01b6a push edx */
  push32((uint32_t)(EDX));
  /* 12e01b6b call 0x12e02000 */
  push32(0x12e01b70u); f_12e02000();
  /* 12e01b70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01b73 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01b78:;
  /* 12e01b78 mov eax, dword ptr [0x12e20a10] */
  EAX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01b7d mov dword ptr [0x12e20a20], eax */
  w32((uint32_t)(0x12e20a20), (EAX));
  /* 12e01b82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01b85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01b86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01b89 push edx */
  push32((uint32_t)(EDX));
  /* 12e01b8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01b8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01b8f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e01b92 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01b93 call 0x12e02000 */
  push32(0x12e01b98u); f_12e02000();
  /* 12e01b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01b9b jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01ba0:;
  /* 12e01ba0 mov edx, dword ptr [0x12e20a10] */
  EDX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01ba6 mov dword ptr [0x12e20a20], edx */
  w32((uint32_t)(0x12e20a20), (EDX));
  /* 12e01bac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01baf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e01bb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e01bb3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12e01bb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e01bba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e01bbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01bc1 jne 0x12e01bca */
  if (!C.zf) goto L_12e01bca;
  /* 12e01bc3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12e01bca:;
  /* 12e01bca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01bcd push edx */
  push32((uint32_t)(EDX));
  /* 12e01bce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01bd1 push eax */
  push32((uint32_t)(EAX));
  /* 12e01bd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01bd8 call 0x12e02000 */
  push32(0x12e01bddu); f_12e02000();
  /* 12e01bdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01be0 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01be5:;
  /* 12e01be5 mov edx, dword ptr [0x12e20a10] */
  EDX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01beb mov dword ptr [0x12e20a20], edx */
  w32((uint32_t)(0x12e20a20), (EDX));
  /* 12e01bf1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12e01bf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01bf9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e01bfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01bfe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e01c01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01c04 push eax */
  push32((uint32_t)(EAX));
  /* 12e01c05 call 0x12e02000 */
  push32(0x12e01c0au); f_12e02000();
  /* 12e01c0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01c0d jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01c12:;
  /* 12e01c12 mov ecx, dword ptr [0x12e20a10] */
  ECX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01c18 mov dword ptr [0x12e20a20], ecx */
  w32((uint32_t)(0x12e20a20), (ECX));
  /* 12e01c1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01c21 push edx */
  push32((uint32_t)(EDX));
  /* 12e01c22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01c25 push eax */
  push32((uint32_t)(EAX));
  /* 12e01c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01c28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01c2b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e01c2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01c31 push edx */
  push32((uint32_t)(EDX));
  /* 12e01c32 call 0x12e02000 */
  push32(0x12e01c37u); f_12e02000();
  /* 12e01c37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01c3a jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01c3f:;
  /* 12e01c3f mov eax, dword ptr [0x12e20a10] */
  EAX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01c44 mov dword ptr [0x12e20a20], eax */
  w32((uint32_t)(0x12e20a20), (EAX));
  /* 12e01c49 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01c4c push ecx */
  push32((uint32_t)(ECX));
  /* 12e01c4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01c50 push edx */
  push32((uint32_t)(EDX));
  /* 12e01c51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01c56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e01c59 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01c5a call 0x12e02000 */
  push32(0x12e01c5fu); f_12e02000();
  /* 12e01c5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01c62 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01c67:;
  /* 12e01c67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01c6a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01c6e jg 0x12e01c8c */
  if ((!C.zf&&C.sf==C.of)) goto L_12e01c8c;
  /* 12e01c70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01c73 push eax */
  push32((uint32_t)(EAX));
  /* 12e01c74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01c77 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01c78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01c7b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12e01c81 push eax */
  push32((uint32_t)(EAX));
  /* 12e01c82 call 0x12e01fb0 */
  push32(0x12e01c87u); f_12e01fb0();
  /* 12e01c87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01c8a jmp 0x12e01ca6 */
  goto L_12e01ca6;
L_12e01c8c:;
  /* 12e01c8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01c8f push ecx */
  push32((uint32_t)(ECX));
  /* 12e01c90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01c93 push edx */
  push32((uint32_t)(EDX));
  /* 12e01c94 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01c97 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12e01c9d push ecx */
  push32((uint32_t)(ECX));
  /* 12e01c9e call 0x12e01fb0 */
  push32(0x12e01ca3u); f_12e01fb0();
  /* 12e01ca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e01ca6:;
  /* 12e01ca6 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01cab:;
  /* 12e01cab mov edx, dword ptr [0x12e20a10] */
  EDX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01cb1 mov dword ptr [0x12e20a20], edx */
  w32((uint32_t)(0x12e20a20), (EDX));
  /* 12e01cb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01cba push eax */
  push32((uint32_t)(EAX));
  /* 12e01cbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01cbe push ecx */
  push32((uint32_t)(ECX));
  /* 12e01cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01cc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01cc4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e01cc6 push eax */
  push32((uint32_t)(EAX));
  /* 12e01cc7 call 0x12e02000 */
  push32(0x12e01cccu); f_12e02000();
  /* 12e01ccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01ccf jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01cd4:;
  /* 12e01cd4 mov ecx, dword ptr [0x12e20a10] */
  ECX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01cda mov dword ptr [0x12e20a20], ecx */
  w32((uint32_t)(0x12e20a20), (ECX));
  /* 12e01ce0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01ce3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12e01ce6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e01ce9 jmp 0x12e01d3d */
  goto L_12e01d3d;
L_12e01ceb:;
  /* 12e01ceb mov ecx, dword ptr [0x12e20a10] */
  ECX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01cf1 mov dword ptr [0x12e20a20], ecx */
  w32((uint32_t)(0x12e20a20), (ECX));
  /* 12e01cf7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01cfa push edx */
  push32((uint32_t)(EDX));
  /* 12e01cfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01cfe push eax */
  push32((uint32_t)(EAX));
  /* 12e01cff push 1 */
  push32((uint32_t)(0x1u));
  /* 12e01d01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01d04 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e01d07 push edx */
  push32((uint32_t)(EDX));
  /* 12e01d08 call 0x12e02000 */
  push32(0x12e01d0du); f_12e02000();
  /* 12e01d0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01d10 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01d15:;
  /* 12e01d15 mov eax, dword ptr [0x12e20a10] */
  EAX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01d1a mov dword ptr [0x12e20a20], eax */
  w32((uint32_t)(0x12e20a20), (EAX));
  /* 12e01d1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01d22 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01d26 jne 0x12e01d31 */
  if (!C.zf) goto L_12e01d31;
  /* 12e01d28 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12e01d2f jmp 0x12e01d3d */
  goto L_12e01d3d;
L_12e01d31:;
  /* 12e01d31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01d34 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12e01d37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01d3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e01d3d:;
  /* 12e01d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01d40 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e01d43 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01d46 jge 0x12e01d51 */
  if ((C.sf==C.of)) goto L_12e01d51;
  /* 12e01d48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e01d4f jmp 0x12e01d7e */
  goto L_12e01d7e;
L_12e01d51:;
  /* 12e01d51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01d54 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e01d57 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e01d58 mov ecx, 7 */
  ECX = (0x7u);
  /* 12e01d5d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e01d5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e01d62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01d65 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e01d68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e01d69 mov ecx, 7 */
  ECX = (0x7u);
  /* 12e01d6e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e01d70 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01d73 jl 0x12e01d7e */
  if ((C.sf!=C.of)) goto L_12e01d7e;
  /* 12e01d75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01d7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e01d7e:;
  /* 12e01d7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01d81 push eax */
  push32((uint32_t)(EAX));
  /* 12e01d82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01d85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01d86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01d88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01d8b push edx */
  push32((uint32_t)(EDX));
  /* 12e01d8c call 0x12e02000 */
  push32(0x12e01d91u); f_12e02000();
  /* 12e01d91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01d94 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01d99:;
  /* 12e01d99 cmp dword ptr [0x12e20a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01da0 je 0x12e01dd0 */
  if (C.zf) goto L_12e01dd0;
  /* 12e01da2 mov dword ptr [0x12e20a10], 0 */
  w32((uint32_t)(0x12e20a10), (0x0u));
  /* 12e01dac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01daf push eax */
  push32((uint32_t)(EAX));
  /* 12e01db0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01db4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01db7 push edx */
  push32((uint32_t)(EDX));
  /* 12e01db8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01dbb push eax */
  push32((uint32_t)(EAX));
  /* 12e01dbc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01dbf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12e01dc5 push edx */
  push32((uint32_t)(EDX));
  /* 12e01dc6 call 0x12e02160 */
  push32(0x12e01dcbu); f_12e02160();
  /* 12e01dcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01dce jmp 0x12e01df2 */
  goto L_12e01df2;
L_12e01dd0:;
  /* 12e01dd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12e01dd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01dd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01ddb push edx */
  push32((uint32_t)(EDX));
  /* 12e01ddc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01ddf push eax */
  push32((uint32_t)(EAX));
  /* 12e01de0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01de3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12e01de9 push edx */
  push32((uint32_t)(EDX));
  /* 12e01dea call 0x12e02160 */
  push32(0x12e01defu); f_12e02160();
  /* 12e01def add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e01df2:;
  /* 12e01df2 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01df7:;
  /* 12e01df7 mov dword ptr [0x12e20a10], 0 */
  w32((uint32_t)(0x12e20a10), (0x0u));
  /* 12e01e01 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01e04 push eax */
  push32((uint32_t)(EAX));
  /* 12e01e05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01e08 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01e09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01e0c push edx */
  push32((uint32_t)(EDX));
  /* 12e01e0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01e10 push eax */
  push32((uint32_t)(EAX));
  /* 12e01e11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e01e14 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12e01e1a push edx */
  push32((uint32_t)(EDX));
  /* 12e01e1b call 0x12e02160 */
  push32(0x12e01e20u); f_12e02160();
  /* 12e01e20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01e23 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01e28:;
  /* 12e01e28 mov eax, dword ptr [0x12e20a10] */
  EAX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01e2d mov dword ptr [0x12e20a20], eax */
  w32((uint32_t)(0x12e20a20), (EAX));
  /* 12e01e32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01e35 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e01e38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e01e39 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12e01e3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e01e40 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e01e43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01e46 push edx */
  push32((uint32_t)(EDX));
  /* 12e01e47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01e4a push eax */
  push32((uint32_t)(EAX));
  /* 12e01e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e01e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01e51 call 0x12e02000 */
  push32(0x12e01e56u); f_12e02000();
  /* 12e01e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01e59 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01e5e:;
  /* 12e01e5e mov edx, dword ptr [0x12e20a10] */
  EDX = (r32((uint32_t)(0x12e20a10)));
  /* 12e01e64 mov dword ptr [0x12e20a20], edx */
  w32((uint32_t)(0x12e20a20), (EDX));
  /* 12e01e6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01e6d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e01e70 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e01e71 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12e01e76 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e01e78 mov ecx, eax */
  ECX = (EAX);
  /* 12e01e7a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01e7d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e01e80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01e83 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e01e86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e01e87 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12e01e8c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e01e8e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01e90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e01e93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01e96 push eax */
  push32((uint32_t)(EAX));
  /* 12e01e97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01e9a push ecx */
  push32((uint32_t)(ECX));
  /* 12e01e9b push 4 */
  push32((uint32_t)(0x4u));
  /* 12e01e9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e01ea0 push edx */
  push32((uint32_t)(EDX));
  /* 12e01ea1 call 0x12e02000 */
  push32(0x12e01ea6u); f_12e02000();
  /* 12e01ea6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01ea9 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01eab:;
  /* 12e01eab call 0x12e02fc0 */
  push32(0x12e01eb0u); f_12e02fc0();
  /* 12e01eb0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01eb3 push eax */
  push32((uint32_t)(EAX));
  /* 12e01eb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e01eb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01ebb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e01ebd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01ec1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12e01ec4 mov ecx, dword ptr [eax*4 + 0x12e1fe2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e1fe2c)));
  /* 12e01ecb push ecx */
  push32((uint32_t)(ECX));
  /* 12e01ecc call 0x12e01fb0 */
  push32(0x12e01ed1u); f_12e01fb0();
  /* 12e01ed1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01ed4 jmp 0x12e01ef8 */
  goto L_12e01ef8;
L_12e01ed6:;
  /* 12e01ed6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01ed9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e01edb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12e01ede mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01ee1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01ee3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01ee6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01ee9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e01eeb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01eee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01ef0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01ef3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e01ef6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e01ef8:;
  /* 12e01ef8 pop esi */
  ESI = (pop32());
  /* 12e01ef9 mov esp, ebp */
  ESP = (EBP);
  /* 12e01efb pop ebp */
  EBP = (pop32());
  /* 12e01efc ret  */
  ESPCHK(0x12e01990u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12e01fb0 (72 bytes, 30 insns) */
void f_12e01fb0(void) {
  FTRACE(0x12e01fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e01fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e01fb1 mov ebp, esp */
  EBP = (ESP);
L_12e01fb3:;
  /* 12e01fb3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01fb6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e01fb9 je 0x12e01ff6 */
  if (C.zf) goto L_12e01ff6;
  /* 12e01fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01fbe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e01fc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e01fc3 je 0x12e01ff6 */
  if (C.zf) goto L_12e01ff6;
  /* 12e01fc5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01fc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e01fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01fcd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e01fcf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e01fd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01fd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e01fd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01fd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e01fdc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e01fde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e01fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e01fe4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e01fe7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01fea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e01fec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e01fef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e01ff2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e01ff4 jmp 0x12e01fb3 */
  goto L_12e01fb3;
L_12e01ff6:;
  /* 12e01ff6 pop ebp */
  EBP = (pop32());
  /* 12e01ff7 ret  */
  ESPCHK(0x12e01fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012000 @ 0x12e02000 (173 bytes, 64 insns) */
void f_12e02000(void) {
  FTRACE(0x12e02000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02001 mov ebp, esp */
  EBP = (ESP);
  /* 12e02003 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e0200b cmp dword ptr [0x12e20a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02012 je 0x12e0202a */
  if (C.zf) goto L_12e0202a;
  /* 12e02014 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02017 push eax */
  push32((uint32_t)(EAX));
  /* 12e02018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0201b push ecx */
  push32((uint32_t)(ECX));
  /* 12e0201c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0201f push edx */
  push32((uint32_t)(EDX));
  /* 12e02020 call 0x12e020b0 */
  push32(0x12e02025u); f_12e020b0();
  /* 12e02025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02028 jmp 0x12e020a9 */
  goto L_12e020a9;
L_12e0202a:;
  /* 12e0202a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0202d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02030 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02032 jae 0x12e020a0 */
  if (!C.cf) goto L_12e020a0;
  /* 12e02034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02037 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0203a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e0203d jmp 0x12e02048 */
  goto L_12e02048;
L_12e0203f:;
  /* 12e0203f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02042 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02045 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12e02048:;
  /* 12e02048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0204b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0204e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e02050 je 0x12e02084 */
  if (C.zf) goto L_12e02084;
  /* 12e02052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02055 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e02056 mov ecx, 0xa */
  ECX = (0xau);
  /* 12e0205b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e0205d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02060 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e02065 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02068 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12e0206b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0206e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e0206f mov ecx, 0xa */
  ECX = (0xau);
  /* 12e02074 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e02076 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e02079 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0207c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0207f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e02082 jmp 0x12e0203f */
  goto L_12e0203f;
L_12e02084:;
  /* 12e02084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02087 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e02089 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0208c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0208f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e02091 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02094 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e02096 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02099 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0209c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e0209e jmp 0x12e020a9 */
  goto L_12e020a9;
L_12e020a0:;
  /* 12e020a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e020a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e020a9:;
  /* 12e020a9 mov esp, ebp */
  ESP = (EBP);
  /* 12e020ab pop ebp */
  EBP = (pop32());
  /* 12e020ac ret  */
  ESPCHK(0x12e02000u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12e020b0 (172 bytes, 65 insns) */
void f_12e020b0(void) {
  FTRACE(0x12e020b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e020b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e020b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e020b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e020b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e020b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e020bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e020be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e020c1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e020c4 jbe 0x12e0210b */
  if ((C.cf||C.zf)) goto L_12e0210b;
L_12e020c6:;
  /* 12e020c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e020c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e020ca mov ecx, 0xa */
  ECX = (0xau);
  /* 12e020cf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e020d1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e020d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e020d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e020d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e020dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e020df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e020e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e020e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e020e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e020ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e020ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e020ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e020f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e020f3 mov ecx, 0xa */
  ECX = (0xau);
  /* 12e020f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e020fa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e020fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02101 jle 0x12e0210b */
  if ((C.zf||C.sf!=C.of)) goto L_12e0210b;
  /* 12e02103 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02106 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02109 ja 0x12e020c6 */
  if ((!C.cf&&!C.zf)) goto L_12e020c6;
L_12e0210b:;
  /* 12e0210b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0210e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e02110 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e02113 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02119 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e0211b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0211e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02121 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e02124:;
  /* 12e02124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02127 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02129 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12e0212c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0212f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02132 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02134 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e02136 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02139 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0213c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e0213f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02142 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e02145 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e02147 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0214a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0214d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e02150 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02153 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02156 jb 0x12e02124 */
  if (C.cf) goto L_12e02124;
  /* 12e02158 mov esp, ebp */
  ESP = (EBP);
  /* 12e0215a pop ebp */
  EBP = (pop32());
  /* 12e0215b ret  */
  ESPCHK(0x12e020b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012160 @ 0x12e02160 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12e02160(void) {
  FTRACE(0x12e02160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02160 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02161 mov ebp, esp */
  EBP = (ESP);
  /* 12e02163 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12e02166:;
  /* 12e02166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02169 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e0216c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e0216e je 0x12e025dc */
  if (C.zf) goto L_12e025dc;
  /* 12e02174 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02177 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0217a je 0x12e025dc */
  if (C.zf) goto L_12e025dc;
  /* 12e02180 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e02184 mov dword ptr [0x12e20a20], 0 */
  w32((uint32_t)(0x12e20a20), (0x0u));
  /* 12e0218e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e02195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02198 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e0219b jmp 0x12e021a6 */
  goto L_12e021a6;
L_12e0219d:;
  /* 12e0219d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e021a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e021a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e021a6:;
  /* 12e021a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e021a9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e021ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e021af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e021b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e021b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e021b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e021bb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e021bd jne 0x12e021c1 */
  if (!C.zf) goto L_12e021c1;
  /* 12e021bf jmp 0x12e0219d */
  goto L_12e0219d;
L_12e021c1:;
  /* 12e021c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e021c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e021c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e021ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e021cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e021d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e021d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e021d6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e021d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e021dc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e021e0 ja 0x12e02530 */
  if ((!C.cf&&!C.zf)) goto L_12e02530;
  /* 12e021e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e021e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e021eb mov al, byte ptr [ecx + 0x12e0260c] */
  AL = (r8((uint32_t)(ECX + 0x12e0260c)));
  /* 12e021f1 jmp dword ptr [eax*4 + 0x12e025e0] */
  switch (EAX) {
    case 0: goto L_12e0244f;
    case 1: goto L_12e02333;
    case 2: goto L_12e022be;
    case 3: goto L_12e021f8;
    case 4: goto L_12e02236;
    case 5: goto L_12e02297;
    case 6: goto L_12e022e5;
    case 7: goto L_12e0230c;
    case 8: goto L_12e0237a;
    case 9: goto L_12e02274;
    case 10: goto L_12e02530;
    default: x86_unimpl("switch@0x12e021f1 out of table"); return;
  }
L_12e021f8:;
  /* 12e021f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e021fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e021fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e02201 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02204 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e02207 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0220b ja 0x12e02231 */
  if ((!C.cf&&!C.zf)) goto L_12e02231;
  /* 12e0220d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e02210 jmp dword ptr [ecx*4 + 0x12e0265f] */
  switch (ECX) {
    case 0: goto L_12e02217;
    case 1: goto L_12e02221;
    case 2: goto L_12e02227;
    case 3: goto L_12e0222d;
    case 4: goto L_12e02255;
    case 5: goto L_12e0225f;
    case 6: goto L_12e02265;
    case 7: goto L_12e0226b;
    default: x86_unimpl("switch@0x12e02210 out of table"); return;
  }
L_12e02217:;
  /* 12e02217 mov dword ptr [0x12e20a20], 1 */
  w32((uint32_t)(0x12e20a20), (0x1u));
L_12e02221:;
  /* 12e02221 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12e02225 jmp 0x12e02231 */
  goto L_12e02231;
L_12e02227:;
  /* 12e02227 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12e0222b jmp 0x12e02231 */
  goto L_12e02231;
L_12e0222d:;
  /* 12e0222d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12e02231:;
  /* 12e02231 jmp 0x12e02530 */
  goto L_12e02530;
L_12e02236:;
  /* 12e02236 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02239 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e0223c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e0223f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02242 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e02245 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02249 ja 0x12e0226f */
  if ((!C.cf&&!C.zf)) goto L_12e0226f;
  /* 12e0224b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e0224e jmp dword ptr [ecx*4 + 0x12e0266f] */
  switch (ECX) {
    case 0: goto L_12e02255;
    case 1: goto L_12e0225f;
    case 2: goto L_12e02265;
    case 3: goto L_12e0226b;
    default: x86_unimpl("switch@0x12e0224e out of table"); return;
  }
L_12e02255:;
  /* 12e02255 mov dword ptr [0x12e20a20], 1 */
  w32((uint32_t)(0x12e20a20), (0x1u));
L_12e0225f:;
  /* 12e0225f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12e02263 jmp 0x12e0226f */
  goto L_12e0226f;
L_12e02265:;
  /* 12e02265 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12e02269 jmp 0x12e0226f */
  goto L_12e0226f;
L_12e0226b:;
  /* 12e0226b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12e0226f:;
  /* 12e0226f jmp 0x12e02530 */
  goto L_12e02530;
L_12e02274:;
  /* 12e02274 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02277 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e0227a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0227e je 0x12e02288 */
  if (C.zf) goto L_12e02288;
  /* 12e02280 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02284 je 0x12e0228e */
  if (C.zf) goto L_12e0228e;
  /* 12e02286 jmp 0x12e02292 */
  goto L_12e02292;
L_12e02288:;
  /* 12e02288 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12e0228c jmp 0x12e02292 */
  goto L_12e02292;
L_12e0228e:;
  /* 12e0228e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12e02292:;
  /* 12e02292 jmp 0x12e02530 */
  goto L_12e02530;
L_12e02297:;
  /* 12e02297 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0229a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e0229d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e022a1 je 0x12e022ab */
  if (C.zf) goto L_12e022ab;
  /* 12e022a3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e022a7 je 0x12e022b5 */
  if (C.zf) goto L_12e022b5;
  /* 12e022a9 jmp 0x12e022b9 */
  goto L_12e022b9;
L_12e022ab:;
  /* 12e022ab mov dword ptr [0x12e20a20], 1 */
  w32((uint32_t)(0x12e20a20), (0x1u));
L_12e022b5:;
  /* 12e022b5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12e022b9:;
  /* 12e022b9 jmp 0x12e02530 */
  goto L_12e02530;
L_12e022be:;
  /* 12e022be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e022c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e022c4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e022c8 je 0x12e022d2 */
  if (C.zf) goto L_12e022d2;
  /* 12e022ca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e022ce je 0x12e022dc */
  if (C.zf) goto L_12e022dc;
  /* 12e022d0 jmp 0x12e022e0 */
  goto L_12e022e0;
L_12e022d2:;
  /* 12e022d2 mov dword ptr [0x12e20a20], 1 */
  w32((uint32_t)(0x12e20a20), (0x1u));
L_12e022dc:;
  /* 12e022dc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12e022e0:;
  /* 12e022e0 jmp 0x12e02530 */
  goto L_12e02530;
L_12e022e5:;
  /* 12e022e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e022e8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12e022eb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e022ef je 0x12e022f9 */
  if (C.zf) goto L_12e022f9;
  /* 12e022f1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e022f5 je 0x12e02303 */
  if (C.zf) goto L_12e02303;
  /* 12e022f7 jmp 0x12e02307 */
  goto L_12e02307;
L_12e022f9:;
  /* 12e022f9 mov dword ptr [0x12e20a20], 1 */
  w32((uint32_t)(0x12e20a20), (0x1u));
L_12e02303:;
  /* 12e02303 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12e02307:;
  /* 12e02307 jmp 0x12e02530 */
  goto L_12e02530;
L_12e0230c:;
  /* 12e0230c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0230f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e02312 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02316 je 0x12e02320 */
  if (C.zf) goto L_12e02320;
  /* 12e02318 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0231c je 0x12e0232a */
  if (C.zf) goto L_12e0232a;
  /* 12e0231e jmp 0x12e0232e */
  goto L_12e0232e;
L_12e02320:;
  /* 12e02320 mov dword ptr [0x12e20a20], 1 */
  w32((uint32_t)(0x12e20a20), (0x1u));
L_12e0232a:;
  /* 12e0232a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12e0232e:;
  /* 12e0232e jmp 0x12e02530 */
  goto L_12e02530;
L_12e02333:;
  /* 12e02333 push 0x12e1cff0 */
  push32((uint32_t)(0x12e1cff0u));
  /* 12e02338 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0233b push ecx */
  push32((uint32_t)(ECX));
  /* 12e0233c call 0x12e02b90 */
  push32(0x12e02341u); f_12e02b90();
  /* 12e02341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e02346 jne 0x12e02353 */
  if (!C.zf) goto L_12e02353;
  /* 12e02348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0234b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0234e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e02351 jmp 0x12e02371 */
  goto L_12e02371;
L_12e02353:;
  /* 12e02353 push 0x12e1cfec */
  push32((uint32_t)(0x12e1cfecu));
  /* 12e02358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0235b push eax */
  push32((uint32_t)(EAX));
  /* 12e0235c call 0x12e02b90 */
  push32(0x12e02361u); f_12e02b90();
  /* 12e02361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e02366 jne 0x12e02371 */
  if (!C.zf) goto L_12e02371;
  /* 12e02368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0236b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0236e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e02371:;
  /* 12e02371 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12e02375 jmp 0x12e02530 */
  goto L_12e02530;
L_12e0237a:;
  /* 12e0237a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0237d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02381 jg 0x12e02391 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e02391;
  /* 12e02383 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e02386 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12e0238c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e0238f jmp 0x12e0239d */
  goto L_12e0239d;
L_12e02391:;
  /* 12e02391 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e02394 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12e0239a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e0239d:;
  /* 12e0239d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e023a1 jle 0x12e02444 */
  if ((C.zf||C.sf!=C.of)) goto L_12e02444;
  /* 12e023a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e023aa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e023ad jbe 0x12e02444 */
  if ((C.cf||C.zf)) goto L_12e02444;
  /* 12e023b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e023b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e023b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e023ba mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e023c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e023c2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e023c6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e023cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e023ce je 0x12e02407 */
  if (C.zf) goto L_12e02407;
  /* 12e023d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e023d3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e023d6 jbe 0x12e02407 */
  if ((C.cf||C.zf)) goto L_12e02407;
  /* 12e023d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e023db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e023dd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e023e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e023e2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e023e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e023e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e023e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e023ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e023ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e023f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e023f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e023f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e023fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e023fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e023ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02402 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02405 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e02407:;
  /* 12e02407 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0240a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e0240c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0240f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02411 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e02413 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02416 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e02418 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0241b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0241e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e02420 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e02423 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02426 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e02429 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0242c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e0242e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02431 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02434 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e02436 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02439 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0243c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e0243f jmp 0x12e0239d */
  goto L_12e0239d;
L_12e02444:;
  /* 12e02444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02447 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e0244a jmp 0x12e02166 */
  goto L_12e02166;
L_12e0244f:;
  /* 12e0244f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02452 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e02455 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e02457 je 0x12e02522 */
  if (C.zf) goto L_12e02522;
  /* 12e0245d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02460 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02463 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e02466:;
  /* 12e02466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02469 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e0246c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e0246e je 0x12e02520 */
  if (C.zf) goto L_12e02520;
  /* 12e02474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02477 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0247a je 0x12e02520 */
  if (C.zf) goto L_12e02520;
  /* 12e02480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02483 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e02486 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02489 jne 0x12e02499 */
  if (!C.zf) goto L_12e02499;
  /* 12e0248b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0248e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02491 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e02494 jmp 0x12e02520 */
  goto L_12e02520;
L_12e02499:;
  /* 12e02499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0249c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e0249e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e024a0 mov edx, dword ptr [0x12e1ede8] */
  EDX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e024a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e024a8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e024ac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e024b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e024b3 je 0x12e024ec */
  if (C.zf) goto L_12e024ec;
  /* 12e024b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e024b8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e024bb jbe 0x12e024ec */
  if ((C.cf||C.zf)) goto L_12e024ec;
  /* 12e024bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e024c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e024c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e024c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e024c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e024c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e024cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e024ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e024d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e024d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e024d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e024d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e024dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e024df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e024e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e024e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e024e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e024ea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e024ec:;
  /* 12e024ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e024ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e024f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e024f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e024f6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e024f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e024fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e024fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02500 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02503 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e02505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02508 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0250b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e0250e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02511 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e02513 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02516 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02519 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e0251b jmp 0x12e02466 */
  goto L_12e02466;
L_12e02520:;
  /* 12e02520 jmp 0x12e0252b */
  goto L_12e0252b;
L_12e02522:;
  /* 12e02522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02525 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02528 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e0252b:;
  /* 12e0252b jmp 0x12e02166 */
  goto L_12e02166;
L_12e02530:;
  /* 12e02530 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e02534 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e02536 je 0x12e0255c */
  if (C.zf) goto L_12e0255c;
  /* 12e02538 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e0253b push edx */
  push32((uint32_t)(EDX));
  /* 12e0253c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0253f push eax */
  push32((uint32_t)(EAX));
  /* 12e02540 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02543 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02547 push edx */
  push32((uint32_t)(EDX));
  /* 12e02548 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e0254b push eax */
  push32((uint32_t)(EAX));
  /* 12e0254c call 0x12e01990 */
  push32(0x12e02551u); f_12e01990();
  /* 12e02551 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02557 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e0255a jmp 0x12e025d7 */
  goto L_12e025d7;
L_12e0255c:;
  /* 12e0255c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0255f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02561 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02563 mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e02569 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e0256b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e0256f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e02575 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e02577 je 0x12e025a8 */
  if (C.zf) goto L_12e025a8;
  /* 12e02579 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0257c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e0257e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02581 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02583 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e02585 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02588 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e0258a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0258d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02590 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e02592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02598 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e0259b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0259e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e025a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e025a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e025a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e025a8:;
  /* 12e025a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e025ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e025ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e025b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e025b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e025b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e025b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e025b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e025bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e025bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e025c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e025c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e025c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e025ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e025cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e025cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e025d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e025d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e025d7:;
  /* 12e025d7 jmp 0x12e02166 */
  goto L_12e02166;
L_12e025dc:;
  /* 12e025dc mov esp, ebp */
  ESP = (EBP);
  /* 12e025de pop ebp */
  EBP = (pop32());
  /* 12e025df ret  */
  ESPCHK(0x12e02160u, _esp0);
  ESP += 4; return;
}

/* FUN_10012680 @ 0x12e02680 (650 bytes, 178 insns) */
void f_12e02680(void) {
  FTRACE(0x12e02680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02680 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02681 mov ebp, esp */
  EBP = (ESP);
  /* 12e02683 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02689 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0268d jne 0x12e027e9 */
  if (!C.zf) goto L_12e027e9;
  /* 12e02693 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02696 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12e0269c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12e026a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e026a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e026ac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12e026b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e026b8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e026be push edx */
  push32((uint32_t)(EDX));
  /* 12e026bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e026c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e026c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e026c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e026c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e026ca push edx */
  push32((uint32_t)(EDX));
  /* 12e026cb call 0x12e03aa0 */
  push32(0x12e026d0u); f_12e03aa0();
  /* 12e026d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e026d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e026d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e026da jne 0x12e0276f */
  if (!C.zf) goto L_12e0276f;
  /* 12e026e0 call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12e026e6u);
  /* 12e026e6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e026e9 je 0x12e026f0 */
  if (C.zf) goto L_12e026f0;
  /* 12e026eb jmp 0x12e027cd */
  goto L_12e027cd;
L_12e026f0:;
  /* 12e026f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e026f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e026f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e026f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e026f9 push eax */
  push32((uint32_t)(EAX));
  /* 12e026fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e026fd push ecx */
  push32((uint32_t)(ECX));
  /* 12e026fe call 0x12e03aa0 */
  push32(0x12e02703u); f_12e03aa0();
  /* 12e02703 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02706 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12e0270c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02713 jne 0x12e0271a */
  if (!C.zf) goto L_12e0271a;
  /* 12e02715 jmp 0x12e027cd */
  goto L_12e027cd;
L_12e0271a:;
  /* 12e0271a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12e0271c push 0x12e1cff8 */
  push32((uint32_t)(0x12e1cff8u));
  /* 12e02721 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e02723 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e02729 push edx */
  push32((uint32_t)(EDX));
  /* 12e0272a call 0x12df56e0 */
  push32(0x12e0272fu); f_12df56e0();
  /* 12e0272f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02732 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e02735 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02739 jne 0x12e02740 */
  if (!C.zf) goto L_12e02740;
  /* 12e0273b jmp 0x12e027cd */
  goto L_12e027cd;
L_12e02740:;
  /* 12e02740 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e02747 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02749 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e0274f push eax */
  push32((uint32_t)(EAX));
  /* 12e02750 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02753 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02754 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02757 push edx */
  push32((uint32_t)(EDX));
  /* 12e02758 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0275b push eax */
  push32((uint32_t)(EAX));
  /* 12e0275c call 0x12e03aa0 */
  push32(0x12e02761u); f_12e03aa0();
  /* 12e02761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02764 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e02767 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0276b jne 0x12e0276f */
  if (!C.zf) goto L_12e0276f;
  /* 12e0276d jmp 0x12e027cd */
  goto L_12e027cd;
L_12e0276f:;
  /* 12e0276f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12e02771 push 0x12e1cff8 */
  push32((uint32_t)(0x12e1cff8u));
  /* 12e02776 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e02778 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0277b push ecx */
  push32((uint32_t)(ECX));
  /* 12e0277c call 0x12df56e0 */
  push32(0x12e02781u); f_12df56e0();
  /* 12e02781 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02784 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e0278a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e0278c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e02792 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02795 jne 0x12e02799 */
  if (!C.zf) goto L_12e02799;
  /* 12e02797 jmp 0x12e027cd */
  goto L_12e027cd;
L_12e02799:;
  /* 12e02799 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0279c push ecx */
  push32((uint32_t)(ECX));
  /* 12e0279d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e027a0 push edx */
  push32((uint32_t)(EDX));
  /* 12e027a1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e027a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e027a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e027aa call 0x12df8f00 */
  push32(0x12e027afu); f_12df8f00();
  /* 12e027af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e027b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e027b6 je 0x12e027c6 */
  if (C.zf) goto L_12e027c6;
  /* 12e027b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e027ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e027bd push edx */
  push32((uint32_t)(EDX));
  /* 12e027be call 0x12df6170 */
  push32(0x12e027c3u); f_12df6170();
  /* 12e027c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e027c6:;
  /* 12e027c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e027c8 jmp 0x12e02906 */
  goto L_12e02906;
L_12e027cd:;
  /* 12e027cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e027d1 je 0x12e027e1 */
  if (C.zf) goto L_12e027e1;
  /* 12e027d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e027d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e027d8 push eax */
  push32((uint32_t)(EAX));
  /* 12e027d9 call 0x12df6170 */
  push32(0x12e027deu); f_12df6170();
  /* 12e027de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e027e1:;
  /* 12e027e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e027e4 jmp 0x12e02906 */
  goto L_12e02906;
L_12e027e9:;
  /* 12e027e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e027ed jne 0x12e02903 */
  if (!C.zf) goto L_12e02903;
  /* 12e027f3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12e027fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02800 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12e02806 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02808 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e0280e push edx */
  push32((uint32_t)(EDX));
  /* 12e0280f push 0x12e20934 */
  push32((uint32_t)(0x12e20934u));
  /* 12e02814 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02817 push eax */
  push32((uint32_t)(EAX));
  /* 12e02818 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e0281b push ecx */
  push32((uint32_t)(ECX));
  /* 12e0281c call 0x12e03900 */
  push32(0x12e02821u); f_12e03900();
  /* 12e02821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e02826 jne 0x12e02830 */
  if (!C.zf) goto L_12e02830;
  /* 12e02828 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e0282b jmp 0x12e02906 */
  goto L_12e02906;
L_12e02830:;
  /* 12e02830 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e02836 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e02839 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12e02843 jmp 0x12e02854 */
  goto L_12e02854;
L_12e02845:;
  /* 12e02845 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e0284b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0284e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12e02854:;
  /* 12e02854 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0285b jge 0x12e028ff */
  if ((C.sf==C.of)) goto L_12e028ff;
  /* 12e02861 cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02868 jle 0x12e0289b */
  if ((C.zf||C.sf!=C.of)) goto L_12e0289b;
  /* 12e0286a push 4 */
  push32((uint32_t)(0x4u));
  /* 12e0286c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e02872 mov dl, byte ptr [ecx*2 + 0x12e20934] */
  DL = (r8((uint32_t)(ECX*2 + 0x12e20934)));
  /* 12e02879 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12e0287f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e02885 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e0288a push eax */
  push32((uint32_t)(EAX));
  /* 12e0288b call 0x12dfbfa0 */
  push32(0x12e02890u); f_12dfbfa0();
  /* 12e02890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02893 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12e02899 jmp 0x12e028ce */
  goto L_12e028ce;
L_12e0289b:;
  /* 12e0289b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e028a1 mov dl, byte ptr [ecx*2 + 0x12e20934] */
  DL = (r8((uint32_t)(ECX*2 + 0x12e20934)));
  /* 12e028a8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12e028ae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e028b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e028b9 mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e028bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e028c1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e028c5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e028c8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12e028ce:;
  /* 12e028ce cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e028d5 je 0x12e028f8 */
  if (C.zf) goto L_12e028f8;
  /* 12e028d7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e028dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e028e0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e028e3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12e028ea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e028ee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e028f4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e028f6 jmp 0x12e028fa */
  goto L_12e028fa;
L_12e028f8:;
  /* 12e028f8 jmp 0x12e028ff */
  goto L_12e028ff;
L_12e028fa:;
  /* 12e028fa jmp 0x12e02845 */
  goto L_12e02845;
L_12e028ff:;
  /* 12e028ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02901 jmp 0x12e02906 */
  goto L_12e02906;
L_12e02903:;
  /* 12e02903 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e02906:;
  /* 12e02906 mov esp, ebp */
  ESP = (EBP);
  /* 12e02908 pop ebp */
  EBP = (pop32());
  /* 12e02909 ret  */
  ESPCHK(0x12e02680u, _esp0);
  ESP += 4; return;
}

/* FUN_10012910 @ 0x12e02910 (10 bytes, 5 insns) */
void f_12e02910(void) {
  FTRACE(0x12e02910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02910 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02911 mov ebp, esp */
  EBP = (ESP);
  /* 12e02913 mov eax, dword ptr [0x12e1fd98] */
  EAX = (r32((uint32_t)(0x12e1fd98)));
  /* 12e02918 pop ebp */
  EBP = (pop32());
  /* 12e02919 ret  */
  ESPCHK(0x12e02910u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x12e02920 (575 bytes, 196 insns) */
void f_12e02920(void) {
  FTRACE(0x12e02920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02920 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02921 mov ebp, esp */
  EBP = (ESP);
  /* 12e02923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e02925 push 0x12e1d008 */
  push32((uint32_t)(0x12e1d008u));
  /* 12e0292a push 0x12e00f60 */
  push32((uint32_t)(0x12e00f60u));
  /* 12e0292f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e02935 push eax */
  push32((uint32_t)(EAX));
  /* 12e02936 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e0293d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02940 push ebx */
  push32((uint32_t)(EBX));
  /* 12e02941 push esi */
  push32((uint32_t)(ESI));
  /* 12e02942 push edi */
  push32((uint32_t)(EDI));
  /* 12e02943 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e02946 cmp dword ptr [0x12e20940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0294d jne 0x12e0299e */
  if (!C.zf) goto L_12e0299e;
  /* 12e0294f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12e02952 push eax */
  push32((uint32_t)(EAX));
  /* 12e02953 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e02955 push 0x12e1c7b8 */
  push32((uint32_t)(0x12e1c7b8u));
  /* 12e0295a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0295c call dword ptr [0x12e232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232dc))), 0x12e02962u);
  /* 12e02962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e02964 je 0x12e02972 */
  if (C.zf) goto L_12e02972;
  /* 12e02966 mov dword ptr [0x12e20940], 1 */
  w32((uint32_t)(0x12e20940), (0x1u));
  /* 12e02970 jmp 0x12e0299e */
  goto L_12e0299e;
L_12e02972:;
  /* 12e02972 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12e02975 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02976 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e02978 push 0x12e1c7b4 */
  push32((uint32_t)(0x12e1c7b4u));
  /* 12e0297d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0297f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02981 call dword ptr [0x12e23290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23290))), 0x12e02987u);
  /* 12e02987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e02989 je 0x12e02997 */
  if (C.zf) goto L_12e02997;
  /* 12e0298b mov dword ptr [0x12e20940], 2 */
  w32((uint32_t)(0x12e20940), (0x2u));
  /* 12e02995 jmp 0x12e0299e */
  goto L_12e0299e;
L_12e02997:;
  /* 12e02997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02999 jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e0299e:;
  /* 12e0299e cmp dword ptr [0x12e20940], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20940))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e029a5 jne 0x12e029c2 */
  if (!C.zf) goto L_12e029c2;
  /* 12e029a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e029aa push edx */
  push32((uint32_t)(EDX));
  /* 12e029ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e029ae push eax */
  push32((uint32_t)(EAX));
  /* 12e029af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e029b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e029b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e029b6 push edx */
  push32((uint32_t)(EDX));
  /* 12e029b7 call dword ptr [0x12e232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232dc))), 0x12e029bdu);
  /* 12e029bd jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e029c2:;
  /* 12e029c2 cmp dword ptr [0x12e20940], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e20940))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e029c9 jne 0x12e02b77 */
  if (!C.zf) goto L_12e02b77;
  /* 12e029cf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e029d3 jne 0x12e029dd */
  if (!C.zf) goto L_12e029dd;
  /* 12e029d5 mov eax, dword ptr [0x12e208c0] */
  EAX = (r32((uint32_t)(0x12e208c0)));
  /* 12e029da mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12e029dd:;
  /* 12e029dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e029df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e029e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e029e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e029e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e029e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e029e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e029ec push edx */
  push32((uint32_t)(EDX));
  /* 12e029ed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e029f2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e029f5 push eax */
  push32((uint32_t)(EAX));
  /* 12e029f6 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e029fcu);
  /* 12e029fc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e029ff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02a03 jne 0x12e02a0c */
  if (!C.zf) goto L_12e02a0c;
  /* 12e02a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02a07 jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e02a0c:;
  /* 12e02a0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e02a13 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e02a16 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02a19 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e02a1b call 0x12df8880 */
  push32(0x12e02a20u); f_12df8880();
  /* 12e02a20 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12e02a23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e02a26 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e02a29 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e02a2c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e02a2f push edx */
  push32((uint32_t)(EDX));
  /* 12e02a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02a32 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e02a35 push eax */
  push32((uint32_t)(EAX));
  /* 12e02a36 call 0x12df9e00 */
  push32(0x12e02a3bu); f_12df9e00();
  /* 12e02a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02a3e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e02a45 jmp 0x12e02a5e */
  goto L_12e02a5e;
  /* 12e02a47 mov eax, 1 */
  EAX = (0x1u);
  /* 12e02a4c ret  */
  ESPCHK(0x12e02920u, _esp0);
  ESP += 4; return;
  /* 12e02a4d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e02a50 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12e02a57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e02a5e:;
  /* 12e02a5e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02a62 jne 0x12e02a6b */
  if (!C.zf) goto L_12e02a6b;
  /* 12e02a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02a66 jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e02a6b:;
  /* 12e02a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02a6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e02a72 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02a73 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e02a76 push edx */
  push32((uint32_t)(EDX));
  /* 12e02a77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02a7a push eax */
  push32((uint32_t)(EAX));
  /* 12e02a7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02a7e push ecx */
  push32((uint32_t)(ECX));
  /* 12e02a7f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e02a84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e02a87 push edx */
  push32((uint32_t)(EDX));
  /* 12e02a88 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e02a8eu);
  /* 12e02a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e02a90 jne 0x12e02a99 */
  if (!C.zf) goto L_12e02a99;
  /* 12e02a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02a94 jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e02a99:;
  /* 12e02a99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e02aa0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e02aa3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12e02aa7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02aaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e02aac call 0x12df8880 */
  push32(0x12e02ab1u); f_12df8880();
  /* 12e02ab1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12e02ab4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e02ab7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e02aba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e02abd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e02ac4 jmp 0x12e02add */
  goto L_12e02add;
  /* 12e02ac6 mov eax, 1 */
  EAX = (0x1u);
  /* 12e02acb ret  */
  ESPCHK(0x12e02920u, _esp0);
  ESP += 4; return;
  /* 12e02acc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e02acf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e02ad6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e02add:;
  /* 12e02add cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02ae1 jne 0x12e02aea */
  if (!C.zf) goto L_12e02aea;
  /* 12e02ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02ae5 jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e02aea:;
  /* 12e02aea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02aee jne 0x12e02af9 */
  if (!C.zf) goto L_12e02af9;
  /* 12e02af0 mov edx, dword ptr [0x12e208b0] */
  EDX = (r32((uint32_t)(0x12e208b0)));
  /* 12e02af6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12e02af9:;
  /* 12e02af9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02afc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e02aff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12e02b05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02b08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e02b0b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12e02b12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e02b15 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02b16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e02b19 push edx */
  push32((uint32_t)(EDX));
  /* 12e02b1a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e02b1d push eax */
  push32((uint32_t)(EAX));
  /* 12e02b1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02b21 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02b22 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e02b25 push edx */
  push32((uint32_t)(EDX));
  /* 12e02b26 call dword ptr [0x12e23290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23290))), 0x12e02b2cu);
  /* 12e02b2c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e02b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02b32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e02b35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02b37 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12e02b3c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02b42 je 0x12e02b58 */
  if (C.zf) goto L_12e02b58;
  /* 12e02b44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02b47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e02b4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02b4c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e02b50 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02b56 je 0x12e02b5c */
  if (C.zf) goto L_12e02b5c;
L_12e02b58:;
  /* 12e02b58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02b5a jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e02b5c:;
  /* 12e02b5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02b5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e02b61 push eax */
  push32((uint32_t)(EAX));
  /* 12e02b62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e02b65 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02b66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e02b69 push edx */
  push32((uint32_t)(EDX));
  /* 12e02b6a call 0x12dfe030 */
  push32(0x12e02b6fu); f_12dfe030();
  /* 12e02b6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02b72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e02b75 jmp 0x12e02b79 */
  goto L_12e02b79;
L_12e02b77:;
  /* 12e02b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e02b79:;
  /* 12e02b79 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12e02b7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e02b7f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e02b86 pop edi */
  EDI = (pop32());
  /* 12e02b87 pop esi */
  ESI = (pop32());
  /* 12e02b88 pop ebx */
  EBX = (pop32());
  /* 12e02b89 mov esp, ebp */
  ESP = (EBP);
  /* 12e02b8b pop ebp */
  EBP = (pop32());
  /* 12e02b8c ret  */
  ESPCHK(0x12e02920u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b90 @ 0x12e02b90 (208 bytes, 85 insns) */
void f_12e02b90(void) {
  FTRACE(0x12e02b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02b91 mov ebp, esp */
  EBP = (ESP);
  /* 12e02b93 push edi */
  push32((uint32_t)(EDI));
  /* 12e02b94 push esi */
  push32((uint32_t)(ESI));
  /* 12e02b95 push ebx */
  push32((uint32_t)(EBX));
  /* 12e02b96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02b99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02b9c lea eax, [0x12e208a8] */
  EAX = ((uint32_t)(0x12e208a8));
  /* 12e02ba2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02ba6 jne 0x12e02be3 */
  if (!C.zf) goto L_12e02be3;
  /* 12e02ba8 mov al, 0xff */
  AL = (0xffu);
  /* 12e02baa mov edi, edi */
  EDI = (EDI);
L_12e02bac:;
  /* 12e02bac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e02bae je 0x12e02bde */
  if (C.zf) goto L_12e02bde;
  /* 12e02bb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e02bb2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e02bb3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12e02bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e02bb6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02bb8 je 0x12e02bac */
  if (C.zf) goto L_12e02bac;
  /* 12e02bba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e02bbc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02bbe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e02bc0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e02bc3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e02bc5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e02bc7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12e02bc9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e02bcb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02bcd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e02bcf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e02bd2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e02bd4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e02bd6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02bd8 je 0x12e02bac */
  if (C.zf) goto L_12e02bac;
  /* 12e02bda sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e02bdc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12e02bde:;
  /* 12e02bde movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12e02be1 jmp 0x12e02c5b */
  goto L_12e02c5b;
L_12e02be3:;
  /* 12e02be3 lock inc dword ptr [0x12e20a34] */
  x86_unimpl("lock inc @ 0x12e02be3");
  /* 12e02bea cmp dword ptr [0x12e20a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02bf1 jg 0x12e02bf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e02bf7;
  /* 12e02bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02bf5 jmp 0x12e02c0c */
  goto L_12e02c0c;
L_12e02bf7:;
  /* 12e02bf7 lock dec dword ptr [0x12e20a34] */
  x86_unimpl("lock dec @ 0x12e02bf7");
  /* 12e02bfe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e02c00 call 0x12df9a90 */
  push32(0x12e02c05u); f_12df9a90();
  /* 12e02c05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12e02c0c:;
  /* 12e02c0c mov eax, 0xff */
  EAX = (0xffu);
  /* 12e02c11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e02c13 nop  */
  /* nop */
L_12e02c14:;
  /* 12e02c14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e02c16 je 0x12e02c3f */
  if (C.zf) goto L_12e02c3f;
  /* 12e02c18 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e02c1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e02c1b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12e02c1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e02c1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02c20 je 0x12e02c14 */
  if (C.zf) goto L_12e02c14;
  /* 12e02c22 push eax */
  push32((uint32_t)(EAX));
  /* 12e02c23 push ebx */
  push32((uint32_t)(EBX));
  /* 12e02c24 call 0x12e03d00 */
  push32(0x12e02c29u); f_12e03d00();
  /* 12e02c29 mov ebx, eax */
  EBX = (EAX);
  /* 12e02c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02c2e call 0x12e03d00 */
  push32(0x12e02c33u); f_12e03d00();
  /* 12e02c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02c36 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02c38 je 0x12e02c14 */
  if (C.zf) goto L_12e02c14;
  /* 12e02c3a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02c3c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e02c3f:;
  /* 12e02c3f mov ebx, eax */
  EBX = (EAX);
  /* 12e02c41 pop eax */
  EAX = (pop32());
  /* 12e02c42 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02c44 jne 0x12e02c4f */
  if (!C.zf) goto L_12e02c4f;
  /* 12e02c46 lock dec dword ptr [0x12e20a34] */
  x86_unimpl("lock dec @ 0x12e02c46");
  /* 12e02c4d jmp 0x12e02c59 */
  goto L_12e02c59;
L_12e02c4f:;
  /* 12e02c4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e02c51 call 0x12df9b30 */
  push32(0x12e02c56u); f_12df9b30();
  /* 12e02c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e02c59:;
  /* 12e02c59 mov eax, ebx */
  EAX = (EBX);
L_12e02c5b:;
  /* 12e02c5b pop ebx */
  EBX = (pop32());
  /* 12e02c5c pop esi */
  ESI = (pop32());
  /* 12e02c5d pop edi */
  EDI = (pop32());
  /* 12e02c5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e02c5f ret  */
  ESPCHK(0x12e02b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c60 @ 0x12e02c60 (257 bytes, 103 insns) */
void f_12e02c60(void) {
  FTRACE(0x12e02c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02c61 mov ebp, esp */
  EBP = (ESP);
  /* 12e02c63 push edi */
  push32((uint32_t)(EDI));
  /* 12e02c64 push esi */
  push32((uint32_t)(ESI));
  /* 12e02c65 push ebx */
  push32((uint32_t)(EBX));
  /* 12e02c66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e02c69 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e02c6b je 0x12e02d5a */
  if (C.zf) goto L_12e02d5a;
  /* 12e02c71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02c74 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e02c77 lea eax, [0x12e208a8] */
  EAX = ((uint32_t)(0x12e208a8));
  /* 12e02c7d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02c81 jne 0x12e02cd1 */
  if (!C.zf) goto L_12e02cd1;
  /* 12e02c83 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12e02c85 mov bl, 0x5a */
  BL = (0x5au);
  /* 12e02c87 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12e02c89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e02c8c:;
  /* 12e02c8c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12e02c8e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e02c90 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12e02c92 je 0x12e02cb5 */
  if (C.zf) goto L_12e02cb5;
  /* 12e02c94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e02c96 je 0x12e02cb5 */
  if (C.zf) goto L_12e02cb5;
  /* 12e02c98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e02c99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e02c9a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02c9c jb 0x12e02ca4 */
  if (C.cf) goto L_12e02ca4;
  /* 12e02c9e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02ca0 ja 0x12e02ca4 */
  if ((!C.cf&&!C.zf)) goto L_12e02ca4;
  /* 12e02ca2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12e02ca4:;
  /* 12e02ca4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02ca6 jb 0x12e02cae */
  if (C.cf) goto L_12e02cae;
  /* 12e02ca8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02caa ja 0x12e02cae */
  if ((!C.cf&&!C.zf)) goto L_12e02cae;
  /* 12e02cac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12e02cae:;
  /* 12e02cae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02cb0 jne 0x12e02cbf */
  if (!C.zf) goto L_12e02cbf;
  /* 12e02cb2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e02cb3 jne 0x12e02c8c */
  if (!C.zf) goto L_12e02c8c;
L_12e02cb5:;
  /* 12e02cb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e02cb7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e02cb9 je 0x12e02d5a */
  if (C.zf) goto L_12e02d5a;
L_12e02cbf:;
  /* 12e02cbf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12e02cc4 jb 0x12e02d5a */
  if (C.cf) goto L_12e02d5a;
  /* 12e02cca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e02ccc jmp 0x12e02d5a */
  goto L_12e02d5a;
L_12e02cd1:;
  /* 12e02cd1 lock inc dword ptr [0x12e20a34] */
  x86_unimpl("lock inc @ 0x12e02cd1");
  /* 12e02cd8 cmp dword ptr [0x12e20a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02cdf jg 0x12e02ce5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e02ce5;
  /* 12e02ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02ce3 jmp 0x12e02cfe */
  goto L_12e02cfe;
L_12e02ce5:;
  /* 12e02ce5 lock dec dword ptr [0x12e20a34] */
  x86_unimpl("lock dec @ 0x12e02ce5");
  /* 12e02cec mov ebx, ecx */
  EBX = (ECX);
  /* 12e02cee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e02cf0 call 0x12df9a90 */
  push32(0x12e02cf5u); f_12df9a90();
  /* 12e02cf5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12e02cfc mov ecx, ebx */
  ECX = (EBX);
L_12e02cfe:;
  /* 12e02cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02d00 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e02d02 mov edi, edi */
  EDI = (EDI);
L_12e02d04:;
  /* 12e02d04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e02d06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02d08 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12e02d0a je 0x12e02d2f */
  if (C.zf) goto L_12e02d2f;
  /* 12e02d0c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e02d0e je 0x12e02d2f */
  if (C.zf) goto L_12e02d2f;
  /* 12e02d10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e02d11 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e02d12 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02d13 push eax */
  push32((uint32_t)(EAX));
  /* 12e02d14 push ebx */
  push32((uint32_t)(EBX));
  /* 12e02d15 call 0x12e03d00 */
  push32(0x12e02d1au); f_12e03d00();
  /* 12e02d1a mov ebx, eax */
  EBX = (EAX);
  /* 12e02d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02d1f call 0x12e03d00 */
  push32(0x12e02d24u); f_12e03d00();
  /* 12e02d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02d27 pop ecx */
  ECX = (pop32());
  /* 12e02d28 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02d2a jne 0x12e02d35 */
  if (!C.zf) goto L_12e02d35;
  /* 12e02d2c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e02d2d jne 0x12e02d04 */
  if (!C.zf) goto L_12e02d04;
L_12e02d2f:;
  /* 12e02d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e02d31 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02d33 je 0x12e02d3e */
  if (C.zf) goto L_12e02d3e;
L_12e02d35:;
  /* 12e02d35 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12e02d3a jb 0x12e02d3e */
  if (C.cf) goto L_12e02d3e;
  /* 12e02d3c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12e02d3e:;
  /* 12e02d3e pop eax */
  EAX = (pop32());
  /* 12e02d3f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02d41 jne 0x12e02d4c */
  if (!C.zf) goto L_12e02d4c;
  /* 12e02d43 lock dec dword ptr [0x12e20a34] */
  x86_unimpl("lock dec @ 0x12e02d43");
  /* 12e02d4a jmp 0x12e02d5a */
  goto L_12e02d5a;
L_12e02d4c:;
  /* 12e02d4c mov ebx, ecx */
  EBX = (ECX);
  /* 12e02d4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e02d50 call 0x12df9b30 */
  push32(0x12e02d55u); f_12df9b30();
  /* 12e02d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02d58 mov ecx, ebx */
  ECX = (EBX);
L_12e02d5a:;
  /* 12e02d5a mov eax, ecx */
  EAX = (ECX);
  /* 12e02d5c pop ebx */
  EBX = (pop32());
  /* 12e02d5d pop esi */
  ESI = (pop32());
  /* 12e02d5e pop edi */
  EDI = (pop32());
  /* 12e02d5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e02d60 ret  */
  ESPCHK(0x12e02c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x12e02d70 (255 bytes, 88 insns) */
void f_12e02d70(void) {
  FTRACE(0x12e02d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02d71 mov ebp, esp */
  EBP = (ESP);
  /* 12e02d73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12e02d76:;
  /* 12e02d76 cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02d7d jle 0x12e02d96 */
  if ((C.zf||C.sf!=C.of)) goto L_12e02d96;
  /* 12e02d7f push 8 */
  push32((uint32_t)(0x8u));
  /* 12e02d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02d84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e02d86 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e02d88 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02d89 call 0x12dfbfa0 */
  push32(0x12e02d8eu); f_12dfbfa0();
  /* 12e02d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02d91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e02d94 jmp 0x12e02daf */
  goto L_12e02daf;
L_12e02d96:;
  /* 12e02d96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02d99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02d9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02d9d mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e02da3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02da5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e02da9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e02dac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e02daf:;
  /* 12e02daf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02db3 je 0x12e02dc0 */
  if (C.zf) goto L_12e02dc0;
  /* 12e02db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02db8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02dbb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e02dbe jmp 0x12e02d76 */
  goto L_12e02d76;
L_12e02dc0:;
  /* 12e02dc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02dc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02dc5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e02dc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e02dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02dcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02dd0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e02dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02dd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e02dd9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02ddd je 0x12e02de5 */
  if (C.zf) goto L_12e02de5;
  /* 12e02ddf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02de3 jne 0x12e02df8 */
  if (!C.zf) goto L_12e02df8;
L_12e02de5:;
  /* 12e02de5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02de8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02dea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e02def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02df5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e02df8:;
  /* 12e02df8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e02dff:;
  /* 12e02dff cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02e06 jle 0x12e02e1b */
  if ((C.zf||C.sf!=C.of)) goto L_12e02e1b;
  /* 12e02e08 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e02e0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02e0d push edx */
  push32((uint32_t)(EDX));
  /* 12e02e0e call 0x12dfbfa0 */
  push32(0x12e02e13u); f_12dfbfa0();
  /* 12e02e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02e16 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e02e19 jmp 0x12e02e30 */
  goto L_12e02e30;
L_12e02e1b:;
  /* 12e02e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02e1e mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e02e24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02e26 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e02e2a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e02e2d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e02e30:;
  /* 12e02e30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02e34 je 0x12e02e5b */
  if (C.zf) goto L_12e02e5b;
  /* 12e02e36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02e39 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e02e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02e3f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12e02e43 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e02e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02e49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e02e4b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e02e4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e02e50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02e53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02e56 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e02e59 jmp 0x12e02dff */
  goto L_12e02dff;
L_12e02e5b:;
  /* 12e02e5b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02e5f jne 0x12e02e68 */
  if (!C.zf) goto L_12e02e68;
  /* 12e02e61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02e64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e02e66 jmp 0x12e02e6b */
  goto L_12e02e6b;
L_12e02e68:;
  /* 12e02e68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e02e6b:;
  /* 12e02e6b mov esp, ebp */
  ESP = (EBP);
  /* 12e02e6d pop ebp */
  EBP = (pop32());
  /* 12e02e6e ret  */
  ESPCHK(0x12e02d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e70 @ 0x12e02e70 (17 bytes, 8 insns) */
void f_12e02e70(void) {
  FTRACE(0x12e02e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02e71 mov ebp, esp */
  EBP = (ESP);
  /* 12e02e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02e76 push eax */
  push32((uint32_t)(EAX));
  /* 12e02e77 call 0x12e02d70 */
  push32(0x12e02e7cu); f_12e02d70();
  /* 12e02e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02e7f pop ebp */
  EBP = (pop32());
  /* 12e02e80 ret  */
  ESPCHK(0x12e02e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e90 @ 0x12e02e90 (297 bytes, 106 insns) */
void f_12e02e90(void) {
  FTRACE(0x12e02e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02e91 mov ebp, esp */
  EBP = (ESP);
  /* 12e02e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02e96 push esi */
  push32((uint32_t)(ESI));
L_12e02e97:;
  /* 12e02e97 cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02e9e jle 0x12e02eb7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e02eb7;
  /* 12e02ea0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e02ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02ea5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e02ea7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e02ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02eaa call 0x12dfbfa0 */
  push32(0x12e02eafu); f_12dfbfa0();
  /* 12e02eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02eb2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e02eb5 jmp 0x12e02ed0 */
  goto L_12e02ed0;
L_12e02eb7:;
  /* 12e02eb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02ebc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02ebe mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e02ec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02ec6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e02eca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e02ecd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e02ed0:;
  /* 12e02ed0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02ed4 je 0x12e02ee1 */
  if (C.zf) goto L_12e02ee1;
  /* 12e02ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02edc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e02edf jmp 0x12e02e97 */
  goto L_12e02e97;
L_12e02ee1:;
  /* 12e02ee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02ee4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02ee6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e02ee8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e02eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02eee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02ef1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e02ef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02ef7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e02efa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02efe je 0x12e02f06 */
  if (C.zf) goto L_12e02f06;
  /* 12e02f00 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02f04 jne 0x12e02f19 */
  if (!C.zf) goto L_12e02f19;
L_12e02f06:;
  /* 12e02f06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02f0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02f0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e02f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02f13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02f16 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e02f19:;
  /* 12e02f19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e02f20 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e02f27:;
  /* 12e02f27 cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02f2e jle 0x12e02f43 */
  if ((C.zf||C.sf!=C.of)) goto L_12e02f43;
  /* 12e02f30 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e02f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02f35 push edx */
  push32((uint32_t)(EDX));
  /* 12e02f36 call 0x12dfbfa0 */
  push32(0x12e02f3bu); f_12dfbfa0();
  /* 12e02f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02f3e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e02f41 jmp 0x12e02f58 */
  goto L_12e02f58;
L_12e02f43:;
  /* 12e02f43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02f46 mov ecx, dword ptr [0x12e1ede8] */
  ECX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e02f4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e02f4e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e02f52 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e02f55 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12e02f58:;
  /* 12e02f58 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02f5c je 0x12e02f99 */
  if (C.zf) goto L_12e02f99;
  /* 12e02f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e02f60 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e02f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02f65 push eax */
  push32((uint32_t)(EAX));
  /* 12e02f66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02f69 push ecx */
  push32((uint32_t)(ECX));
  /* 12e02f6a call 0x12e03e30 */
  push32(0x12e02f6fu); f_12e03e30();
  /* 12e02f6f mov ecx, eax */
  ECX = (EAX);
  /* 12e02f71 mov esi, edx */
  ESI = (EDX);
  /* 12e02f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e02f76 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e02f79 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e02f7a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02f7c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02f7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e02f81 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12e02f84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e02f89 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e02f8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e02f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e02f91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02f94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e02f97 jmp 0x12e02f27 */
  goto L_12e02f27;
L_12e02f99:;
  /* 12e02f99 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02f9d jne 0x12e02fae */
  if (!C.zf) goto L_12e02fae;
  /* 12e02f9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02fa2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e02fa4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e02fa7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02faa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e02fac jmp 0x12e02fb4 */
  goto L_12e02fb4;
L_12e02fae:;
  /* 12e02fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e02fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12e02fb4:;
  /* 12e02fb4 pop esi */
  ESI = (pop32());
  /* 12e02fb5 mov esp, ebp */
  ESP = (EBP);
  /* 12e02fb7 pop ebp */
  EBP = (pop32());
  /* 12e02fb8 ret  */
  ESPCHK(0x12e02e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fc0 @ 0x12e02fc0 (61 bytes, 18 insns) */
void f_12e02fc0(void) {
  FTRACE(0x12e02fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e02fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e02fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12e02fc3 cmp dword ptr [0x12e20a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02fca jne 0x12e02ffb */
  if (!C.zf) goto L_12e02ffb;
  /* 12e02fcc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e02fce call 0x12df9a90 */
  push32(0x12e02fd3u); f_12df9a90();
  /* 12e02fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02fd6 cmp dword ptr [0x12e20a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e02fdd jne 0x12e02ff1 */
  if (!C.zf) goto L_12e02ff1;
  /* 12e02fdf call 0x12e03020 */
  push32(0x12e02fe4u); f_12e03020();
  /* 12e02fe4 mov eax, dword ptr [0x12e20a00] */
  EAX = (r32((uint32_t)(0x12e20a00)));
  /* 12e02fe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e02fec mov dword ptr [0x12e20a00], eax */
  w32((uint32_t)(0x12e20a00), (EAX));
L_12e02ff1:;
  /* 12e02ff1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e02ff3 call 0x12df9b30 */
  push32(0x12e02ff8u); f_12df9b30();
  /* 12e02ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e02ffb:;
  /* 12e02ffb pop ebp */
  EBP = (pop32());
  /* 12e02ffc ret  */
  ESPCHK(0x12e02fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013000 @ 0x12e03000 (30 bytes, 11 insns) */
void f_12e03000(void) {
  FTRACE(0x12e03000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03001 mov ebp, esp */
  EBP = (ESP);
  /* 12e03003 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e03005 call 0x12df9a90 */
  push32(0x12e0300au); f_12df9a90();
  /* 12e0300a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0300d call 0x12e03020 */
  push32(0x12e03012u); f_12e03020();
  /* 12e03012 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e03014 call 0x12df9b30 */
  push32(0x12e03019u); f_12df9b30();
  /* 12e03019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0301c pop ebp */
  EBP = (pop32());
  /* 12e0301d ret  */
  ESPCHK(0x12e03000u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x12e03020 (939 bytes, 266 insns) */
void f_12e03020(void) {
  FTRACE(0x12e03020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03020 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03021 mov ebp, esp */
  EBP = (ESP);
  /* 12e03023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03026 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e0302d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e0302f call 0x12df9a90 */
  push32(0x12e03034u); f_12df9a90();
  /* 12e03034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03037 mov dword ptr [0x12e20948], 0 */
  w32((uint32_t)(0x12e20948), (0x0u));
  /* 12e03041 mov dword ptr [0x12e1fe48], 0xffffffff */
  w32((uint32_t)(0x12e1fe48), (0xffffffffu));
  /* 12e0304b mov eax, dword ptr [0x12e1fe48] */
  EAX = (r32((uint32_t)(0x12e1fe48)));
  /* 12e03050 mov dword ptr [0x12e1fe38], eax */
  w32((uint32_t)(0x12e1fe38), (EAX));
  /* 12e03055 push 0x12e1d068 */
  push32((uint32_t)(0x12e1d068u));
  /* 12e0305a call 0x12e03ea0 */
  push32(0x12e0305fu); f_12e03ea0();
  /* 12e0305f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03062 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e03065 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03069 jne 0x12e031a3 */
  if (!C.zf) goto L_12e031a3;
  /* 12e0306f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e03071 call 0x12df9b30 */
  push32(0x12e03076u); f_12df9b30();
  /* 12e03076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03079 push 0x12e20950 */
  push32((uint32_t)(0x12e20950u));
  /* 12e0307e call dword ptr [0x12e232f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f8))), 0x12e03084u);
  /* 12e03084 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03087 je 0x12e0319e */
  if (C.zf) goto L_12e0319e;
  /* 12e0308d mov dword ptr [0x12e20948], 1 */
  w32((uint32_t)(0x12e20948), (0x1u));
  /* 12e03097 mov ecx, dword ptr [0x12e20950] */
  ECX = (r32((uint32_t)(0x12e20950)));
  /* 12e0309d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e030a0 mov dword ptr [0x12e1fda0], ecx */
  w32((uint32_t)(0x12e1fda0), (ECX));
  /* 12e030a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e030a8 mov dx, word ptr [0x12e20996] */
  DX = (r16((uint32_t)(0x12e20996)));
  /* 12e030af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e030b1 je 0x12e030c9 */
  if (C.zf) goto L_12e030c9;
  /* 12e030b3 mov eax, dword ptr [0x12e209a4] */
  EAX = (r32((uint32_t)(0x12e209a4)));
  /* 12e030b8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e030bb mov ecx, dword ptr [0x12e1fda0] */
  ECX = (r32((uint32_t)(0x12e1fda0)));
  /* 12e030c1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e030c3 mov dword ptr [0x12e1fda0], ecx */
  w32((uint32_t)(0x12e1fda0), (ECX));
L_12e030c9:;
  /* 12e030c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e030cb mov dx, word ptr [0x12e209ea] */
  DX = (r16((uint32_t)(0x12e209ea)));
  /* 12e030d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e030d4 je 0x12e030fe */
  if (C.zf) goto L_12e030fe;
  /* 12e030d6 cmp dword ptr [0x12e209f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e209f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e030dd je 0x12e030fe */
  if (C.zf) goto L_12e030fe;
  /* 12e030df mov dword ptr [0x12e1fda4], 1 */
  w32((uint32_t)(0x12e1fda4), (0x1u));
  /* 12e030e9 mov eax, dword ptr [0x12e209f8] */
  EAX = (r32((uint32_t)(0x12e209f8)));
  /* 12e030ee sub eax, dword ptr [0x12e209a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e209a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e030f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e030f7 mov dword ptr [0x12e1fda8], eax */
  w32((uint32_t)(0x12e1fda8), (EAX));
  /* 12e030fc jmp 0x12e03112 */
  goto L_12e03112;
L_12e030fe:;
  /* 12e030fe mov dword ptr [0x12e1fda4], 0 */
  w32((uint32_t)(0x12e1fda4), (0x0u));
  /* 12e03108 mov dword ptr [0x12e1fda8], 0 */
  w32((uint32_t)(0x12e1fda8), (0x0u));
L_12e03112:;
  /* 12e03112 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e03115 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03116 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03118 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e0311a mov edx, dword ptr [0x12e1fe2c] */
  EDX = (r32((uint32_t)(0x12e1fe2c)));
  /* 12e03120 push edx */
  push32((uint32_t)(EDX));
  /* 12e03121 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03123 push 0x12e20954 */
  push32((uint32_t)(0x12e20954u));
  /* 12e03128 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e0312d mov eax, dword ptr [0x12e208c0] */
  EAX = (r32((uint32_t)(0x12e208c0)));
  /* 12e03132 push eax */
  push32((uint32_t)(EAX));
  /* 12e03133 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e03139u);
  /* 12e03139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0313b je 0x12e0314f */
  if (C.zf) goto L_12e0314f;
  /* 12e0313d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03141 jne 0x12e0314f */
  if (!C.zf) goto L_12e0314f;
  /* 12e03143 mov ecx, dword ptr [0x12e1fe2c] */
  ECX = (r32((uint32_t)(0x12e1fe2c)));
  /* 12e03149 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12e0314d jmp 0x12e03158 */
  goto L_12e03158;
L_12e0314f:;
  /* 12e0314f mov edx, dword ptr [0x12e1fe2c] */
  EDX = (r32((uint32_t)(0x12e1fe2c)));
  /* 12e03155 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12e03158:;
  /* 12e03158 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e0315b push eax */
  push32((uint32_t)(EAX));
  /* 12e0315c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e0315e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e03160 mov ecx, dword ptr [0x12e1fe30] */
  ECX = (r32((uint32_t)(0x12e1fe30)));
  /* 12e03166 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03167 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03169 push 0x12e209a8 */
  push32((uint32_t)(0x12e209a8u));
  /* 12e0316e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e03173 mov edx, dword ptr [0x12e208c0] */
  EDX = (r32((uint32_t)(0x12e208c0)));
  /* 12e03179 push edx */
  push32((uint32_t)(EDX));
  /* 12e0317a call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e03180u);
  /* 12e03180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03182 je 0x12e03195 */
  if (C.zf) goto L_12e03195;
  /* 12e03184 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03188 jne 0x12e03195 */
  if (!C.zf) goto L_12e03195;
  /* 12e0318a mov eax, dword ptr [0x12e1fe30] */
  EAX = (r32((uint32_t)(0x12e1fe30)));
  /* 12e0318f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12e03193 jmp 0x12e0319e */
  goto L_12e0319e;
L_12e03195:;
  /* 12e03195 mov ecx, dword ptr [0x12e1fe30] */
  ECX = (r32((uint32_t)(0x12e1fe30)));
  /* 12e0319b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12e0319e:;
  /* 12e0319e jmp 0x12e033c7 */
  goto L_12e033c7;
L_12e031a3:;
  /* 12e031a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e031a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e031a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e031ab je 0x12e031cd */
  if (C.zf) goto L_12e031cd;
  /* 12e031ad cmp dword ptr [0x12e209fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e209fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e031b4 je 0x12e031dc */
  if (C.zf) goto L_12e031dc;
  /* 12e031b6 mov ecx, dword ptr [0x12e209fc] */
  ECX = (r32((uint32_t)(0x12e209fc)));
  /* 12e031bc push ecx */
  push32((uint32_t)(ECX));
  /* 12e031bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e031c0 push edx */
  push32((uint32_t)(EDX));
  /* 12e031c1 call 0x12dfff80 */
  push32(0x12e031c6u); f_12dfff80();
  /* 12e031c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e031c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e031cb jne 0x12e031dc */
  if (!C.zf) goto L_12e031dc;
L_12e031cd:;
  /* 12e031cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e031cf call 0x12df9b30 */
  push32(0x12e031d4u); f_12df9b30();
  /* 12e031d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e031d7 jmp 0x12e033c7 */
  goto L_12e033c7;
L_12e031dc:;
  /* 12e031dc push 2 */
  push32((uint32_t)(0x2u));
  /* 12e031de mov eax, dword ptr [0x12e209fc] */
  EAX = (r32((uint32_t)(0x12e209fc)));
  /* 12e031e3 push eax */
  push32((uint32_t)(EAX));
  /* 12e031e4 call 0x12df6170 */
  push32(0x12e031e9u); f_12df6170();
  /* 12e031e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e031ec push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12e031f1 push 0x12e1d060 */
  push32((uint32_t)(0x12e1d060u));
  /* 12e031f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e031f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e031fb push ecx */
  push32((uint32_t)(ECX));
  /* 12e031fc call 0x12df8510 */
  push32(0x12e03201u); f_12df8510();
  /* 12e03201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03207 push eax */
  push32((uint32_t)(EAX));
  /* 12e03208 call 0x12df56e0 */
  push32(0x12e0320du); f_12df56e0();
  /* 12e0320d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03210 mov dword ptr [0x12e209fc], eax */
  w32((uint32_t)(0x12e209fc), (EAX));
  /* 12e03215 cmp dword ptr [0x12e209fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e209fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0321c jne 0x12e0322d */
  if (!C.zf) goto L_12e0322d;
  /* 12e0321e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e03220 call 0x12df9b30 */
  push32(0x12e03225u); f_12df9b30();
  /* 12e03225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03228 jmp 0x12e033c7 */
  goto L_12e033c7;
L_12e0322d:;
  /* 12e0322d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03230 push edx */
  push32((uint32_t)(EDX));
  /* 12e03231 mov eax, dword ptr [0x12e209fc] */
  EAX = (r32((uint32_t)(0x12e209fc)));
  /* 12e03236 push eax */
  push32((uint32_t)(EAX));
  /* 12e03237 call 0x12df8690 */
  push32(0x12e0323cu); f_12df8690();
  /* 12e0323c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0323f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e03241 call 0x12df9b30 */
  push32(0x12e03246u); f_12df9b30();
  /* 12e03246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03249 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e0324b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0324e push ecx */
  push32((uint32_t)(ECX));
  /* 12e0324f mov edx, dword ptr [0x12e1fe2c] */
  EDX = (r32((uint32_t)(0x12e1fe2c)));
  /* 12e03255 push edx */
  push32((uint32_t)(EDX));
  /* 12e03256 call 0x12df8f00 */
  push32(0x12e0325bu); f_12df8f00();
  /* 12e0325b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0325e mov eax, dword ptr [0x12e1fe2c] */
  EAX = (r32((uint32_t)(0x12e1fe2c)));
  /* 12e03263 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12e03267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0326a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0326d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e03270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03273 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e03276 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03279 jne 0x12e0328d */
  if (!C.zf) goto L_12e0328d;
  /* 12e0327b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0327e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03281 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e03284 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03287 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0328a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e0328d:;
  /* 12e0328d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03290 push eax */
  push32((uint32_t)(EAX));
  /* 12e03291 call 0x12e02d70 */
  push32(0x12e03296u); f_12e02d70();
  /* 12e03296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03299 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e0329f mov dword ptr [0x12e1fda0], eax */
  w32((uint32_t)(0x12e1fda0), (EAX));
L_12e032a4:;
  /* 12e032a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e032aa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e032ad je 0x12e032c5 */
  if (C.zf) goto L_12e032c5;
  /* 12e032af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032b2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e032b5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e032b8 jl 0x12e032d0 */
  if ((C.sf!=C.of)) goto L_12e032d0;
  /* 12e032ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e032c0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e032c3 jg 0x12e032d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e032d0;
L_12e032c5:;
  /* 12e032c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e032cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e032ce jmp 0x12e032a4 */
  goto L_12e032a4;
L_12e032d0:;
  /* 12e032d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e032d6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e032d9 jne 0x12e03375 */
  if (!C.zf) goto L_12e03375;
  /* 12e032df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e032e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e032e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e032eb push edx */
  push32((uint32_t)(EDX));
  /* 12e032ec call 0x12e02d70 */
  push32(0x12e032f1u); f_12e02d70();
  /* 12e032f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e032f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e032f7 mov ecx, dword ptr [0x12e1fda0] */
  ECX = (r32((uint32_t)(0x12e1fda0)));
  /* 12e032fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e032ff mov dword ptr [0x12e1fda0], ecx */
  w32((uint32_t)(0x12e1fda0), (ECX));
L_12e03305:;
  /* 12e03305 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03308 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e0330b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0330e jl 0x12e03326 */
  if ((C.sf!=C.of)) goto L_12e03326;
  /* 12e03310 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03313 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e03316 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03319 jg 0x12e03326 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e03326;
  /* 12e0331b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0331e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03321 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e03324 jmp 0x12e03305 */
  goto L_12e03305;
L_12e03326:;
  /* 12e03326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03329 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e0332c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0332f jne 0x12e03375 */
  if (!C.zf) goto L_12e03375;
  /* 12e03331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03337 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e0333a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0333d push ecx */
  push32((uint32_t)(ECX));
  /* 12e0333e call 0x12e02d70 */
  push32(0x12e03343u); f_12e02d70();
  /* 12e03343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03346 mov edx, dword ptr [0x12e1fda0] */
  EDX = (r32((uint32_t)(0x12e1fda0)));
  /* 12e0334c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0334e mov dword ptr [0x12e1fda0], edx */
  w32((uint32_t)(0x12e1fda0), (EDX));
L_12e03354:;
  /* 12e03354 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03357 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e0335a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0335d jl 0x12e03375 */
  if ((C.sf!=C.of)) goto L_12e03375;
  /* 12e0335f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03362 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e03365 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03368 jg 0x12e03375 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e03375;
  /* 12e0336a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0336d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e03373 jmp 0x12e03354 */
  goto L_12e03354;
L_12e03375:;
  /* 12e03375 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03379 je 0x12e03389 */
  if (C.zf) goto L_12e03389;
  /* 12e0337b mov edx, dword ptr [0x12e1fda0] */
  EDX = (r32((uint32_t)(0x12e1fda0)));
  /* 12e03381 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e03383 mov dword ptr [0x12e1fda0], edx */
  w32((uint32_t)(0x12e1fda0), (EDX));
L_12e03389:;
  /* 12e03389 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0338c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e0338f mov dword ptr [0x12e1fda4], ecx */
  w32((uint32_t)(0x12e1fda4), (ECX));
  /* 12e03395 cmp dword ptr [0x12e1fda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e1fda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0339c je 0x12e033be */
  if (C.zf) goto L_12e033be;
  /* 12e0339e push 3 */
  push32((uint32_t)(0x3u));
  /* 12e033a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e033a3 push edx */
  push32((uint32_t)(EDX));
  /* 12e033a4 mov eax, dword ptr [0x12e1fe30] */
  EAX = (r32((uint32_t)(0x12e1fe30)));
  /* 12e033a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e033aa call 0x12df8f00 */
  push32(0x12e033afu); f_12df8f00();
  /* 12e033af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e033b2 mov ecx, dword ptr [0x12e1fe30] */
  ECX = (r32((uint32_t)(0x12e1fe30)));
  /* 12e033b8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12e033bc jmp 0x12e033c7 */
  goto L_12e033c7;
L_12e033be:;
  /* 12e033be mov edx, dword ptr [0x12e1fe30] */
  EDX = (r32((uint32_t)(0x12e1fe30)));
  /* 12e033c4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12e033c7:;
  /* 12e033c7 mov esp, ebp */
  ESP = (EBP);
  /* 12e033c9 pop ebp */
  EBP = (pop32());
  /* 12e033ca ret  */
  ESPCHK(0x12e03020u, _esp0);
  ESP += 4; return;
}

/* FUN_100133d0 @ 0x12e033d0 (46 bytes, 18 insns) */
void f_12e033d0(void) {
  FTRACE(0x12e033d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e033d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e033d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e033d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e033d4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e033d6 call 0x12df9a90 */
  push32(0x12e033dbu); f_12df9a90();
  /* 12e033db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e033de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e033e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e033e2 call 0x12e03400 */
  push32(0x12e033e7u); f_12e03400();
  /* 12e033e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e033ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e033ed push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e033ef call 0x12df9b30 */
  push32(0x12e033f4u); f_12df9b30();
  /* 12e033f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e033f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e033fa mov esp, ebp */
  ESP = (EBP);
  /* 12e033fc pop ebp */
  EBP = (pop32());
  /* 12e033fd ret  */
  ESPCHK(0x12e033d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x12e03400 (762 bytes, 246 insns) */
void f_12e03400(void) {
  FTRACE(0x12e03400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03400 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03401 mov ebp, esp */
  EBP = (ESP);
  /* 12e03403 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03404 cmp dword ptr [0x12e1fda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e1fda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0340b jne 0x12e03414 */
  if (!C.zf) goto L_12e03414;
  /* 12e0340d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0340f jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e03414:;
  /* 12e03414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03417 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e0341a cmp ecx, dword ptr [0x12e1fe38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03420 jne 0x12e03434 */
  if (!C.zf) goto L_12e03434;
  /* 12e03422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03425 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e03428 cmp eax, dword ptr [0x12e1fe48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1fe48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0342e je 0x12e035fb */
  if (C.zf) goto L_12e035fb;
L_12e03434:;
  /* 12e03434 cmp dword ptr [0x12e20948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0343b je 0x12e035b5 */
  if (C.zf) goto L_12e035b5;
  /* 12e03441 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03443 mov cx, word ptr [0x12e209e8] */
  CX = (r16((uint32_t)(0x12e209e8)));
  /* 12e0344a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e0344c jne 0x12e034a9 */
  if (!C.zf) goto L_12e034a9;
  /* 12e0344e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e03450 mov dx, word ptr [0x12e209f6] */
  DX = (r16((uint32_t)(0x12e209f6)));
  /* 12e03457 push edx */
  push32((uint32_t)(EDX));
  /* 12e03458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0345a mov ax, word ptr [0x12e209f4] */
  AX = (r16((uint32_t)(0x12e209f4)));
  /* 12e03460 push eax */
  push32((uint32_t)(EAX));
  /* 12e03461 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03463 mov cx, word ptr [0x12e209f2] */
  CX = (r16((uint32_t)(0x12e209f2)));
  /* 12e0346a push ecx */
  push32((uint32_t)(ECX));
  /* 12e0346b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e0346d mov dx, word ptr [0x12e209f0] */
  DX = (r16((uint32_t)(0x12e209f0)));
  /* 12e03474 push edx */
  push32((uint32_t)(EDX));
  /* 12e03475 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03479 mov ax, word ptr [0x12e209ec] */
  AX = (r16((uint32_t)(0x12e209ec)));
  /* 12e0347f push eax */
  push32((uint32_t)(EAX));
  /* 12e03480 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03482 mov cx, word ptr [0x12e209ee] */
  CX = (r16((uint32_t)(0x12e209ee)));
  /* 12e03489 push ecx */
  push32((uint32_t)(ECX));
  /* 12e0348a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e0348c mov dx, word ptr [0x12e209ea] */
  DX = (r16((uint32_t)(0x12e209ea)));
  /* 12e03493 push edx */
  push32((uint32_t)(EDX));
  /* 12e03494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03497 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e0349a push ecx */
  push32((uint32_t)(ECX));
  /* 12e0349b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0349d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0349f call 0x12e03700 */
  push32(0x12e034a4u); f_12e03700();
  /* 12e034a4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e034a7 jmp 0x12e034fa */
  goto L_12e034fa;
L_12e034a9:;
  /* 12e034a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e034ab mov dx, word ptr [0x12e209f6] */
  DX = (r16((uint32_t)(0x12e209f6)));
  /* 12e034b2 push edx */
  push32((uint32_t)(EDX));
  /* 12e034b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e034b5 mov ax, word ptr [0x12e209f4] */
  AX = (r16((uint32_t)(0x12e209f4)));
  /* 12e034bb push eax */
  push32((uint32_t)(EAX));
  /* 12e034bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e034be mov cx, word ptr [0x12e209f2] */
  CX = (r16((uint32_t)(0x12e209f2)));
  /* 12e034c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e034c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e034c8 mov dx, word ptr [0x12e209f0] */
  DX = (r16((uint32_t)(0x12e209f0)));
  /* 12e034cf push edx */
  push32((uint32_t)(EDX));
  /* 12e034d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e034d2 mov ax, word ptr [0x12e209ee] */
  AX = (r16((uint32_t)(0x12e209ee)));
  /* 12e034d8 push eax */
  push32((uint32_t)(EAX));
  /* 12e034d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e034db push 0 */
  push32((uint32_t)(0x0u));
  /* 12e034dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e034df mov cx, word ptr [0x12e209ea] */
  CX = (r16((uint32_t)(0x12e209ea)));
  /* 12e034e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e034e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e034ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e034ed push eax */
  push32((uint32_t)(EAX));
  /* 12e034ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12e034f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e034f2 call 0x12e03700 */
  push32(0x12e034f7u); f_12e03700();
  /* 12e034f7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e034fa:;
  /* 12e034fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e034fc mov cx, word ptr [0x12e20994] */
  CX = (r16((uint32_t)(0x12e20994)));
  /* 12e03503 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e03505 jne 0x12e03562 */
  if (!C.zf) goto L_12e03562;
  /* 12e03507 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e03509 mov dx, word ptr [0x12e209a2] */
  DX = (r16((uint32_t)(0x12e209a2)));
  /* 12e03510 push edx */
  push32((uint32_t)(EDX));
  /* 12e03511 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03513 mov ax, word ptr [0x12e209a0] */
  AX = (r16((uint32_t)(0x12e209a0)));
  /* 12e03519 push eax */
  push32((uint32_t)(EAX));
  /* 12e0351a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e0351c mov cx, word ptr [0x12e2099e] */
  CX = (r16((uint32_t)(0x12e2099e)));
  /* 12e03523 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e03526 mov dx, word ptr [0x12e2099c] */
  DX = (r16((uint32_t)(0x12e2099c)));
  /* 12e0352d push edx */
  push32((uint32_t)(EDX));
  /* 12e0352e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03532 mov ax, word ptr [0x12e20998] */
  AX = (r16((uint32_t)(0x12e20998)));
  /* 12e03538 push eax */
  push32((uint32_t)(EAX));
  /* 12e03539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e0353b mov cx, word ptr [0x12e2099a] */
  CX = (r16((uint32_t)(0x12e2099a)));
  /* 12e03542 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03543 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e03545 mov dx, word ptr [0x12e20996] */
  DX = (r16((uint32_t)(0x12e20996)));
  /* 12e0354c push edx */
  push32((uint32_t)(EDX));
  /* 12e0354d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03550 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e03553 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03554 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03556 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03558 call 0x12e03700 */
  push32(0x12e0355du); f_12e03700();
  /* 12e0355d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03560 jmp 0x12e035b3 */
  goto L_12e035b3;
L_12e03562:;
  /* 12e03562 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e03564 mov dx, word ptr [0x12e209a2] */
  DX = (r16((uint32_t)(0x12e209a2)));
  /* 12e0356b push edx */
  push32((uint32_t)(EDX));
  /* 12e0356c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0356e mov ax, word ptr [0x12e209a0] */
  AX = (r16((uint32_t)(0x12e209a0)));
  /* 12e03574 push eax */
  push32((uint32_t)(EAX));
  /* 12e03575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03577 mov cx, word ptr [0x12e2099e] */
  CX = (r16((uint32_t)(0x12e2099e)));
  /* 12e0357e push ecx */
  push32((uint32_t)(ECX));
  /* 12e0357f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e03581 mov dx, word ptr [0x12e2099c] */
  DX = (r16((uint32_t)(0x12e2099c)));
  /* 12e03588 push edx */
  push32((uint32_t)(EDX));
  /* 12e03589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0358b mov ax, word ptr [0x12e2099a] */
  AX = (r16((uint32_t)(0x12e2099a)));
  /* 12e03591 push eax */
  push32((uint32_t)(EAX));
  /* 12e03592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03594 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03596 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03598 mov cx, word ptr [0x12e20996] */
  CX = (r16((uint32_t)(0x12e20996)));
  /* 12e0359f push ecx */
  push32((uint32_t)(ECX));
  /* 12e035a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e035a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e035a6 push eax */
  push32((uint32_t)(EAX));
  /* 12e035a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035ab call 0x12e03700 */
  push32(0x12e035b0u); f_12e03700();
  /* 12e035b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e035b3:;
  /* 12e035b3 jmp 0x12e035fb */
  goto L_12e035fb;
L_12e035b5:;
  /* 12e035b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e035bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e035c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e035c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e035c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e035cb push edx */
  push32((uint32_t)(EDX));
  /* 12e035cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e035ce push 1 */
  push32((uint32_t)(0x1u));
  /* 12e035d0 call 0x12e03700 */
  push32(0x12e035d5u); f_12e03700();
  /* 12e035d5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e035d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035da push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035de push 2 */
  push32((uint32_t)(0x2u));
  /* 12e035e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12e035e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e035e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e035eb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e035ee push ecx */
  push32((uint32_t)(ECX));
  /* 12e035ef push 1 */
  push32((uint32_t)(0x1u));
  /* 12e035f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e035f3 call 0x12e03700 */
  push32(0x12e035f8u); f_12e03700();
  /* 12e035f8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e035fb:;
  /* 12e035fb mov edx, dword ptr [0x12e1fe3c] */
  EDX = (r32((uint32_t)(0x12e1fe3c)));
  /* 12e03601 cmp edx, dword ptr [0x12e1fe4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e1fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03607 jge 0x12e03654 */
  if ((C.sf==C.of)) goto L_12e03654;
  /* 12e03609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0360c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e0360f cmp ecx, dword ptr [0x12e1fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03615 jl 0x12e03625 */
  if ((C.sf!=C.of)) goto L_12e03625;
  /* 12e03617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0361a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e0361d cmp eax, dword ptr [0x12e1fe4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03623 jle 0x12e0362c */
  if ((C.zf||C.sf!=C.of)) goto L_12e0362c;
L_12e03625:;
  /* 12e03625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03627 jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e0362c:;
  /* 12e0362c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0362f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e03632 cmp edx, dword ptr [0x12e1fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03638 jle 0x12e03652 */
  if ((C.zf||C.sf!=C.of)) goto L_12e03652;
  /* 12e0363a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0363d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e03640 cmp ecx, dword ptr [0x12e1fe4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03646 jge 0x12e03652 */
  if ((C.sf==C.of)) goto L_12e03652;
  /* 12e03648 mov eax, 1 */
  EAX = (0x1u);
  /* 12e0364d jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e03652:;
  /* 12e03652 jmp 0x12e03697 */
  goto L_12e03697;
L_12e03654:;
  /* 12e03654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03657 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e0365a cmp eax, dword ptr [0x12e1fe4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03660 jl 0x12e03670 */
  if ((C.sf!=C.of)) goto L_12e03670;
  /* 12e03662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03665 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e03668 cmp edx, dword ptr [0x12e1fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0366e jle 0x12e03677 */
  if ((C.zf||C.sf!=C.of)) goto L_12e03677;
L_12e03670:;
  /* 12e03670 mov eax, 1 */
  EAX = (0x1u);
  /* 12e03675 jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e03677:;
  /* 12e03677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0367a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e0367d cmp ecx, dword ptr [0x12e1fe4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03683 jle 0x12e03697 */
  if ((C.zf||C.sf!=C.of)) goto L_12e03697;
  /* 12e03685 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03688 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e0368b cmp eax, dword ptr [0x12e1fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03691 jge 0x12e03697 */
  if ((C.sf==C.of)) goto L_12e03697;
  /* 12e03693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03695 jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e03697:;
  /* 12e03697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0369a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e0369d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e036a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e036a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e036a5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e036a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e036aa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e036ad imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e036b3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e036b5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e036bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e036be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e036c1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e036c4 cmp edx, dword ptr [0x12e1fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e036ca jne 0x12e036e2 */
  if (!C.zf) goto L_12e036e2;
  /* 12e036cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e036cf cmp eax, dword ptr [0x12e1fe40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e036d5 jl 0x12e036de */
  if ((C.sf!=C.of)) goto L_12e036de;
  /* 12e036d7 mov eax, 1 */
  EAX = (0x1u);
  /* 12e036dc jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e036de:;
  /* 12e036de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e036e0 jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e036e2:;
  /* 12e036e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e036e5 cmp ecx, dword ptr [0x12e1fe50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1fe50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e036eb jge 0x12e036f4 */
  if ((C.sf==C.of)) goto L_12e036f4;
  /* 12e036ed mov eax, 1 */
  EAX = (0x1u);
  /* 12e036f2 jmp 0x12e036f6 */
  goto L_12e036f6;
L_12e036f4:;
  /* 12e036f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e036f6:;
  /* 12e036f6 mov esp, ebp */
  ESP = (EBP);
  /* 12e036f8 pop ebp */
  EBP = (pop32());
  /* 12e036f9 ret  */
  ESPCHK(0x12e03400u, _esp0);
  ESP += 4; return;
}

/* FUN_10013700 @ 0x12e03700 (504 bytes, 145 insns) */
void f_12e03700(void) {
  FTRACE(0x12e03700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03700 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03701 mov ebp, esp */
  EBP = (ESP);
  /* 12e03703 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03706 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0370a jne 0x12e037dc */
  if (!C.zf) goto L_12e037dc;
  /* 12e03710 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03713 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e03716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03718 jne 0x12e03729 */
  if (!C.zf) goto L_12e03729;
  /* 12e0371a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0371d mov edx, dword ptr [ecx*4 + 0x12e1fe5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1fe5c)));
  /* 12e03724 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e03727 jmp 0x12e03736 */
  goto L_12e03736;
L_12e03729:;
  /* 12e03729 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0372c mov ecx, dword ptr [eax*4 + 0x12e1fe90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e1fe90)));
  /* 12e03733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e03736:;
  /* 12e03736 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03739 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0373c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e0373f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03742 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03745 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e0374b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0374e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03750 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03753 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03756 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12e03759 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12e0375d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e0375e mov ecx, 7 */
  ECX = (0x7u);
  /* 12e03763 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e03765 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e03768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0376b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0376e jge 0x12e03789 */
  if ((C.sf==C.of)) goto L_12e03789;
  /* 12e03770 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e03773 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03776 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e03779 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0377c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e0377f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03782 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03784 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e03787 jmp 0x12e0379d */
  goto L_12e0379d;
L_12e03789:;
  /* 12e03789 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e0378c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0378f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e03792 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e03795 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03798 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0379a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e0379d:;
  /* 12e0379d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e037a1 jne 0x12e037da */
  if (!C.zf) goto L_12e037da;
  /* 12e037a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e037a6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12e037a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e037ab jne 0x12e037bc */
  if (!C.zf) goto L_12e037bc;
  /* 12e037ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e037b0 mov eax, dword ptr [edx*4 + 0x12e1fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e1fe60)));
  /* 12e037b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e037ba jmp 0x12e037c9 */
  goto L_12e037c9;
L_12e037bc:;
  /* 12e037bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e037bf mov edx, dword ptr [ecx*4 + 0x12e1fe94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1fe94)));
  /* 12e037c6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e037c9:;
  /* 12e037c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e037cc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e037cf jle 0x12e037da */
  if ((C.zf||C.sf!=C.of)) goto L_12e037da;
  /* 12e037d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e037d4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e037d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e037da:;
  /* 12e037da jmp 0x12e03811 */
  goto L_12e03811;
L_12e037dc:;
  /* 12e037dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e037df and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e037e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e037e4 jne 0x12e037f5 */
  if (!C.zf) goto L_12e037f5;
  /* 12e037e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e037e9 mov ecx, dword ptr [eax*4 + 0x12e1fe5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e1fe5c)));
  /* 12e037f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e037f3 jmp 0x12e03802 */
  goto L_12e03802;
L_12e037f5:;
  /* 12e037f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e037f8 mov eax, dword ptr [edx*4 + 0x12e1fe90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e1fe90)));
  /* 12e037ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12e03802:;
  /* 12e03802 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e03805 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e03808 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0380b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0380e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e03811:;
  /* 12e03811 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03815 jne 0x12e03851 */
  if (!C.zf) goto L_12e03851;
  /* 12e03817 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0381a mov dword ptr [0x12e1fe3c], eax */
  w32((uint32_t)(0x12e1fe3c), (EAX));
  /* 12e0381f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e03822 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e03825 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12e03828 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0382a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e0382d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12e03830 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03832 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e03838 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12e0383b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0383d mov dword ptr [0x12e1fe40], ecx */
  w32((uint32_t)(0x12e1fe40), (ECX));
  /* 12e03843 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03846 mov dword ptr [0x12e1fe38], edx */
  w32((uint32_t)(0x12e1fe38), (EDX));
  /* 12e0384c jmp 0x12e038f4 */
  goto L_12e038f4;
L_12e03851:;
  /* 12e03851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03854 mov dword ptr [0x12e1fe4c], eax */
  w32((uint32_t)(0x12e1fe4c), (EAX));
  /* 12e03859 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e0385c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e0385f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12e03862 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03864 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e03867 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12e0386a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0386c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e03872 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12e03875 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03877 mov dword ptr [0x12e1fe50], ecx */
  w32((uint32_t)(0x12e1fe50), (ECX));
  /* 12e0387d mov edx, dword ptr [0x12e1fda8] */
  EDX = (r32((uint32_t)(0x12e1fda8)));
  /* 12e03883 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e03889 mov eax, dword ptr [0x12e1fe50] */
  EAX = (r32((uint32_t)(0x12e1fe50)));
  /* 12e0388e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03890 mov dword ptr [0x12e1fe50], eax */
  w32((uint32_t)(0x12e1fe50), (EAX));
  /* 12e03895 cmp dword ptr [0x12e1fe50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e1fe50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0389c jge 0x12e038c1 */
  if ((C.sf==C.of)) goto L_12e038c1;
  /* 12e0389e mov ecx, dword ptr [0x12e1fe50] */
  ECX = (r32((uint32_t)(0x12e1fe50)));
  /* 12e038a4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e038aa mov dword ptr [0x12e1fe50], ecx */
  w32((uint32_t)(0x12e1fe50), (ECX));
  /* 12e038b0 mov edx, dword ptr [0x12e1fe4c] */
  EDX = (r32((uint32_t)(0x12e1fe4c)));
  /* 12e038b6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e038b9 mov dword ptr [0x12e1fe4c], edx */
  w32((uint32_t)(0x12e1fe4c), (EDX));
  /* 12e038bf jmp 0x12e038eb */
  goto L_12e038eb;
L_12e038c1:;
  /* 12e038c1 cmp dword ptr [0x12e1fe50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12e1fe50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e038cb jl 0x12e038eb */
  if ((C.sf!=C.of)) goto L_12e038eb;
  /* 12e038cd mov eax, dword ptr [0x12e1fe50] */
  EAX = (r32((uint32_t)(0x12e1fe50)));
  /* 12e038d2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e038d7 mov dword ptr [0x12e1fe50], eax */
  w32((uint32_t)(0x12e1fe50), (EAX));
  /* 12e038dc mov ecx, dword ptr [0x12e1fe4c] */
  ECX = (r32((uint32_t)(0x12e1fe4c)));
  /* 12e038e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e038e5 mov dword ptr [0x12e1fe4c], ecx */
  w32((uint32_t)(0x12e1fe4c), (ECX));
L_12e038eb:;
  /* 12e038eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e038ee mov dword ptr [0x12e1fe48], edx */
  w32((uint32_t)(0x12e1fe48), (EDX));
L_12e038f4:;
  /* 12e038f4 mov esp, ebp */
  ESP = (EBP);
  /* 12e038f6 pop ebp */
  EBP = (pop32());
  /* 12e038f7 ret  */
  ESPCHK(0x12e03700u, _esp0);
  ESP += 4; return;
}

/* FUN_10013900 @ 0x12e03900 (382 bytes, 135 insns) */
void f_12e03900(void) {
  FTRACE(0x12e03900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03900 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03901 mov ebp, esp */
  EBP = (ESP);
  /* 12e03903 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03905 push 0x12e1d070 */
  push32((uint32_t)(0x12e1d070u));
  /* 12e0390a push 0x12e00f60 */
  push32((uint32_t)(0x12e00f60u));
  /* 12e0390f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e03915 push eax */
  push32((uint32_t)(EAX));
  /* 12e03916 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e0391d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03920 push ebx */
  push32((uint32_t)(EBX));
  /* 12e03921 push esi */
  push32((uint32_t)(ESI));
  /* 12e03922 push edi */
  push32((uint32_t)(EDI));
  /* 12e03923 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e03926 cmp dword ptr [0x12e20a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0392d jne 0x12e03972 */
  if (!C.zf) goto L_12e03972;
  /* 12e0392f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03931 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03933 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03935 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03937 call dword ptr [0x12e2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2330c))), 0x12e0393du);
  /* 12e0393d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0393f je 0x12e0394d */
  if (C.zf) goto L_12e0394d;
  /* 12e03941 mov dword ptr [0x12e20a04], 1 */
  w32((uint32_t)(0x12e20a04), (0x1u));
  /* 12e0394b jmp 0x12e03972 */
  goto L_12e03972;
L_12e0394d:;
  /* 12e0394d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e0394f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03951 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03955 call dword ptr [0x12e232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f4))), 0x12e0395bu);
  /* 12e0395b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0395d je 0x12e0396b */
  if (C.zf) goto L_12e0396b;
  /* 12e0395f mov dword ptr [0x12e20a04], 2 */
  w32((uint32_t)(0x12e20a04), (0x2u));
  /* 12e03969 jmp 0x12e03972 */
  goto L_12e03972;
L_12e0396b:;
  /* 12e0396b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0396d jmp 0x12e03a81 */
  goto L_12e03a81;
L_12e03972:;
  /* 12e03972 cmp dword ptr [0x12e20a04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03979 jne 0x12e03996 */
  if (!C.zf) goto L_12e03996;
  /* 12e0397b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0397e push eax */
  push32((uint32_t)(EAX));
  /* 12e0397f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03982 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e03986 push edx */
  push32((uint32_t)(EDX));
  /* 12e03987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0398a push eax */
  push32((uint32_t)(EAX));
  /* 12e0398b call dword ptr [0x12e2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2330c))), 0x12e03991u);
  /* 12e03991 jmp 0x12e03a81 */
  goto L_12e03a81;
L_12e03996:;
  /* 12e03996 cmp dword ptr [0x12e20a04], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a04))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0399d jne 0x12e03a7f */
  if (!C.zf) goto L_12e03a7f;
  /* 12e039a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e039a7 jne 0x12e039b2 */
  if (!C.zf) goto L_12e039b2;
  /* 12e039a9 mov ecx, dword ptr [0x12e208c0] */
  ECX = (r32((uint32_t)(0x12e208c0)));
  /* 12e039af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12e039b2:;
  /* 12e039b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e039b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e039b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e039b9 push edx */
  push32((uint32_t)(EDX));
  /* 12e039ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e039bd push eax */
  push32((uint32_t)(EAX));
  /* 12e039be call dword ptr [0x12e232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f4))), 0x12e039c4u);
  /* 12e039c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e039c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e039cb jne 0x12e039d4 */
  if (!C.zf) goto L_12e039d4;
  /* 12e039cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e039cf jmp 0x12e03a81 */
  goto L_12e03a81;
L_12e039d4:;
  /* 12e039d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e039db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e039de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e039e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e039e3 call 0x12df8880 */
  push32(0x12e039e8u); f_12df8880();
  /* 12e039e8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12e039eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e039ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e039f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e039f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e039fb jmp 0x12e03a14 */
  goto L_12e03a14;
  /* 12e039fd mov eax, 1 */
  EAX = (0x1u);
  /* 12e03a02 ret  */
  ESPCHK(0x12e03900u, _esp0);
  ESP += 4; return;
  /* 12e03a03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e03a06 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e03a0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e03a14:;
  /* 12e03a14 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03a18 jne 0x12e03a1e */
  if (!C.zf) goto L_12e03a1e;
  /* 12e03a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03a1c jmp 0x12e03a81 */
  goto L_12e03a81;
L_12e03a1e:;
  /* 12e03a1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e03a21 push edx */
  push32((uint32_t)(EDX));
  /* 12e03a22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e03a25 push eax */
  push32((uint32_t)(EAX));
  /* 12e03a26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e03a29 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03a2d push edx */
  push32((uint32_t)(EDX));
  /* 12e03a2e call dword ptr [0x12e232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f4))), 0x12e03a34u);
  /* 12e03a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03a36 jne 0x12e03a3c */
  if (!C.zf) goto L_12e03a3c;
  /* 12e03a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03a3a jmp 0x12e03a81 */
  goto L_12e03a81;
L_12e03a3c:;
  /* 12e03a3c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03a40 jne 0x12e03a5d */
  if (!C.zf) goto L_12e03a5d;
  /* 12e03a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03a46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03a48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e03a4b push eax */
  push32((uint32_t)(EAX));
  /* 12e03a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03a4e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e03a51 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03a52 call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12e03a58u);
  /* 12e03a58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e03a5b jmp 0x12e03a7a */
  goto L_12e03a7a;
L_12e03a5d:;
  /* 12e03a5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e03a60 push edx */
  push32((uint32_t)(EDX));
  /* 12e03a61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03a64 push eax */
  push32((uint32_t)(EAX));
  /* 12e03a65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03a67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e03a6a push ecx */
  push32((uint32_t)(ECX));
  /* 12e03a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03a6d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e03a70 push edx */
  push32((uint32_t)(EDX));
  /* 12e03a71 call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12e03a77u);
  /* 12e03a77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e03a7a:;
  /* 12e03a7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e03a7d jmp 0x12e03a81 */
  goto L_12e03a81;
L_12e03a7f:;
  /* 12e03a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e03a81:;
  /* 12e03a81 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12e03a84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e03a87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e03a8e pop edi */
  EDI = (pop32());
  /* 12e03a8f pop esi */
  ESI = (pop32());
  /* 12e03a90 pop ebx */
  EBX = (pop32());
  /* 12e03a91 mov esp, ebp */
  ESP = (EBP);
  /* 12e03a93 pop ebp */
  EBP = (pop32());
  /* 12e03a94 ret  */
  ESPCHK(0x12e03900u, _esp0);
  ESP += 4; return;
}

/* FUN_10013aa0 @ 0x12e03aa0 (398 bytes, 140 insns) */
void f_12e03aa0(void) {
  FTRACE(0x12e03aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12e03aa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03aa5 push 0x12e1d080 */
  push32((uint32_t)(0x12e1d080u));
  /* 12e03aaa push 0x12e00f60 */
  push32((uint32_t)(0x12e00f60u));
  /* 12e03aaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e03ab5 push eax */
  push32((uint32_t)(EAX));
  /* 12e03ab6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e03abd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e03ac1 push esi */
  push32((uint32_t)(ESI));
  /* 12e03ac2 push edi */
  push32((uint32_t)(EDI));
  /* 12e03ac3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e03ac6 cmp dword ptr [0x12e20a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03acd jne 0x12e03b12 */
  if (!C.zf) goto L_12e03b12;
  /* 12e03acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03ad7 call dword ptr [0x12e2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2330c))), 0x12e03addu);
  /* 12e03add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03adf je 0x12e03aed */
  if (C.zf) goto L_12e03aed;
  /* 12e03ae1 mov dword ptr [0x12e20a08], 1 */
  w32((uint32_t)(0x12e20a08), (0x1u));
  /* 12e03aeb jmp 0x12e03b12 */
  goto L_12e03b12;
L_12e03aed:;
  /* 12e03aed push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03aef push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03af1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03af5 call dword ptr [0x12e232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f4))), 0x12e03afbu);
  /* 12e03afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03afd je 0x12e03b0b */
  if (C.zf) goto L_12e03b0b;
  /* 12e03aff mov dword ptr [0x12e20a08], 2 */
  w32((uint32_t)(0x12e20a08), (0x2u));
  /* 12e03b09 jmp 0x12e03b12 */
  goto L_12e03b12;
L_12e03b0b:;
  /* 12e03b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03b0d jmp 0x12e03c31 */
  goto L_12e03c31;
L_12e03b12:;
  /* 12e03b12 cmp dword ptr [0x12e20a08], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a08))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03b19 jne 0x12e03b36 */
  if (!C.zf) goto L_12e03b36;
  /* 12e03b1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e03b1e push eax */
  push32((uint32_t)(EAX));
  /* 12e03b1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03b22 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03b23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e03b26 push edx */
  push32((uint32_t)(EDX));
  /* 12e03b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03b2a push eax */
  push32((uint32_t)(EAX));
  /* 12e03b2b call dword ptr [0x12e232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232f4))), 0x12e03b31u);
  /* 12e03b31 jmp 0x12e03c31 */
  goto L_12e03c31;
L_12e03b36:;
  /* 12e03b36 cmp dword ptr [0x12e20a08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03b3d jne 0x12e03c2f */
  if (!C.zf) goto L_12e03c2f;
  /* 12e03b43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03b47 jne 0x12e03b52 */
  if (!C.zf) goto L_12e03b52;
  /* 12e03b49 mov ecx, dword ptr [0x12e208c0] */
  ECX = (r32((uint32_t)(0x12e208c0)));
  /* 12e03b4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12e03b52:;
  /* 12e03b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e03b59 push edx */
  push32((uint32_t)(EDX));
  /* 12e03b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03b5d push eax */
  push32((uint32_t)(EAX));
  /* 12e03b5e call dword ptr [0x12e2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2330c))), 0x12e03b64u);
  /* 12e03b64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e03b67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03b6b jne 0x12e03b74 */
  if (!C.zf) goto L_12e03b74;
  /* 12e03b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03b6f jmp 0x12e03c31 */
  goto L_12e03c31;
L_12e03b74:;
  /* 12e03b74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e03b7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e03b7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e03b80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03b83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e03b85 call 0x12df8880 */
  push32(0x12e03b8au); f_12df8880();
  /* 12e03b8a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12e03b8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e03b90 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e03b93 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e03b96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e03b9d jmp 0x12e03bb6 */
  goto L_12e03bb6;
  /* 12e03b9f mov eax, 1 */
  EAX = (0x1u);
  /* 12e03ba4 ret  */
  ESPCHK(0x12e03aa0u, _esp0);
  ESP += 4; return;
  /* 12e03ba5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e03ba8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e03baf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e03bb6:;
  /* 12e03bb6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03bba jne 0x12e03bc0 */
  if (!C.zf) goto L_12e03bc0;
  /* 12e03bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03bbe jmp 0x12e03c31 */
  goto L_12e03c31;
L_12e03bc0:;
  /* 12e03bc0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e03bc3 push edx */
  push32((uint32_t)(EDX));
  /* 12e03bc4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e03bc7 push eax */
  push32((uint32_t)(EAX));
  /* 12e03bc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e03bcb push ecx */
  push32((uint32_t)(ECX));
  /* 12e03bcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03bcf push edx */
  push32((uint32_t)(EDX));
  /* 12e03bd0 call dword ptr [0x12e2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2330c))), 0x12e03bd6u);
  /* 12e03bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03bd8 jne 0x12e03bde */
  if (!C.zf) goto L_12e03bde;
  /* 12e03bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03bdc jmp 0x12e03c31 */
  goto L_12e03c31;
L_12e03bde:;
  /* 12e03bde cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03be2 jne 0x12e03c06 */
  if (!C.zf) goto L_12e03c06;
  /* 12e03be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03bea push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03bec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03bee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e03bf1 push eax */
  push32((uint32_t)(EAX));
  /* 12e03bf2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e03bf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e03bfa push ecx */
  push32((uint32_t)(ECX));
  /* 12e03bfb call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e03c01u);
  /* 12e03c01 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e03c04 jmp 0x12e03c2a */
  goto L_12e03c2a;
L_12e03c06:;
  /* 12e03c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03c08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03c0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e03c0d push edx */
  push32((uint32_t)(EDX));
  /* 12e03c0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03c11 push eax */
  push32((uint32_t)(EAX));
  /* 12e03c12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03c14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e03c17 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03c18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e03c1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e03c20 push edx */
  push32((uint32_t)(EDX));
  /* 12e03c21 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e03c27u);
  /* 12e03c27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e03c2a:;
  /* 12e03c2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e03c2d jmp 0x12e03c31 */
  goto L_12e03c31;
L_12e03c2f:;
  /* 12e03c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e03c31:;
  /* 12e03c31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12e03c34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e03c37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e03c3e pop edi */
  EDI = (pop32());
  /* 12e03c3f pop esi */
  ESI = (pop32());
  /* 12e03c40 pop ebx */
  EBX = (pop32());
  /* 12e03c41 mov esp, ebp */
  ESP = (EBP);
  /* 12e03c43 pop ebp */
  EBP = (pop32());
  /* 12e03c44 ret  */
  ESPCHK(0x12e03aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c50 @ 0x12e03c50 (11 bytes, 6 insns) */
void f_12e03c50(void) {
  FTRACE(0x12e03c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03c51 mov ebp, esp */
  EBP = (ESP);
  /* 12e03c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03c56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03c59 pop ebp */
  EBP = (pop32());
  /* 12e03c5a ret  */
  ESPCHK(0x12e03c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c60 @ 0x12e03c60 (147 bytes, 43 insns) */
void f_12e03c60(void) {
  FTRACE(0x12e03c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03c61 mov ebp, esp */
  EBP = (ESP);
  /* 12e03c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03c64 cmp dword ptr [0x12e208b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03c6b jne 0x12e03c87 */
  if (!C.zf) goto L_12e03c87;
  /* 12e03c6d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03c71 jl 0x12e03c82 */
  if ((C.sf!=C.of)) goto L_12e03c82;
  /* 12e03c73 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03c77 jg 0x12e03c82 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e03c82;
  /* 12e03c79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03c7c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03c7f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e03c82:;
  /* 12e03c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03c85 jmp 0x12e03cef */
  goto L_12e03cef;
L_12e03c87:;
  /* 12e03c87 push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12e03c8c call dword ptr [0x12e23224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23224))), 0x12e03c92u);
  /* 12e03c92 cmp dword ptr [0x12e20a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03c99 je 0x12e03cb9 */
  if (C.zf) goto L_12e03cb9;
  /* 12e03c9b push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12e03ca0 call dword ptr [0x12e23218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23218))), 0x12e03ca6u);
  /* 12e03ca6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e03ca8 call 0x12df9a90 */
  push32(0x12e03cadu); f_12df9a90();
  /* 12e03cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03cb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e03cb7 jmp 0x12e03cc0 */
  goto L_12e03cc0;
L_12e03cb9:;
  /* 12e03cb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e03cc0:;
  /* 12e03cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03cc4 call 0x12e03d00 */
  push32(0x12e03cc9u); f_12e03d00();
  /* 12e03cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03ccc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e03ccf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03cd3 je 0x12e03ce1 */
  if (C.zf) goto L_12e03ce1;
  /* 12e03cd5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e03cd7 call 0x12df9b30 */
  push32(0x12e03cdcu); f_12df9b30();
  /* 12e03cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03cdf jmp 0x12e03cec */
  goto L_12e03cec;
L_12e03ce1:;
  /* 12e03ce1 push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12e03ce6 call dword ptr [0x12e23218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23218))), 0x12e03cecu);
L_12e03cec:;
  /* 12e03cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12e03cef:;
  /* 12e03cef mov esp, ebp */
  ESP = (EBP);
  /* 12e03cf1 pop ebp */
  EBP = (pop32());
  /* 12e03cf2 ret  */
  ESPCHK(0x12e03c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d00 @ 0x12e03d00 (299 bytes, 91 insns) */
void f_12e03d00(void) {
  FTRACE(0x12e03d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03d01 mov ebp, esp */
  EBP = (ESP);
  /* 12e03d03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03d06 cmp dword ptr [0x12e208b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03d0d jne 0x12e03d2c */
  if (!C.zf) goto L_12e03d2c;
  /* 12e03d0f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03d13 jl 0x12e03d24 */
  if ((C.sf!=C.of)) goto L_12e03d24;
  /* 12e03d15 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03d19 jg 0x12e03d24 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e03d24;
  /* 12e03d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d1e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03d21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e03d24:;
  /* 12e03d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d27 jmp 0x12e03e27 */
  goto L_12e03e27;
L_12e03d2c:;
  /* 12e03d2c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03d33 jge 0x12e03d73 */
  if ((C.sf==C.of)) goto L_12e03d73;
  /* 12e03d35 cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03d3c jle 0x12e03d51 */
  if ((C.zf||C.sf!=C.of)) goto L_12e03d51;
  /* 12e03d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03d40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03d44 call 0x12dfbfa0 */
  push32(0x12e03d49u); f_12dfbfa0();
  /* 12e03d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03d4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e03d4f jmp 0x12e03d65 */
  goto L_12e03d65;
L_12e03d51:;
  /* 12e03d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d54 mov eax, dword ptr [0x12e1ede8] */
  EAX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e03d59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03d5b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e03d5f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e03d62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e03d65:;
  /* 12e03d65 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03d69 jne 0x12e03d73 */
  if (!C.zf) goto L_12e03d73;
  /* 12e03d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d6e jmp 0x12e03e27 */
  goto L_12e03e27;
L_12e03d73:;
  /* 12e03d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d76 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e03d79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e03d7f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e03d85 mov eax, dword ptr [0x12e1ede8] */
  EAX = (r32((uint32_t)(0x12e1ede8)));
  /* 12e03d8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03d8c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e03d90 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e03d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e03d98 je 0x12e03dbc */
  if (C.zf) goto L_12e03dbc;
  /* 12e03d9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03d9d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e03da0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e03da6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12e03da9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e03dac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12e03daf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12e03db3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e03dba jmp 0x12e03dcd */
  goto L_12e03dcd;
L_12e03dbc:;
  /* 12e03dbc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e03dbf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12e03dc2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12e03dc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12e03dcd:;
  /* 12e03dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03dd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e03dd3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12e03dd6 push edx */
  push32((uint32_t)(EDX));
  /* 12e03dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03dda push eax */
  push32((uint32_t)(EAX));
  /* 12e03ddb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e03dde push ecx */
  push32((uint32_t)(ECX));
  /* 12e03ddf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e03de4 mov edx, dword ptr [0x12e208b0] */
  EDX = (r32((uint32_t)(0x12e208b0)));
  /* 12e03dea push edx */
  push32((uint32_t)(EDX));
  /* 12e03deb call 0x12dfe530 */
  push32(0x12e03df0u); f_12dfe530();
  /* 12e03df0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03df3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e03df6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03dfa jne 0x12e03e01 */
  if (!C.zf) goto L_12e03e01;
  /* 12e03dfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03dff jmp 0x12e03e27 */
  goto L_12e03e27;
L_12e03e01:;
  /* 12e03e01 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03e05 jne 0x12e03e11 */
  if (!C.zf) goto L_12e03e11;
  /* 12e03e07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03e0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e03e0f jmp 0x12e03e27 */
  goto L_12e03e27;
L_12e03e11:;
  /* 12e03e11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e03e14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e03e19 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12e03e1c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e03e22 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e03e25 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12e03e27:;
  /* 12e03e27 mov esp, ebp */
  ESP = (EBP);
  /* 12e03e29 pop ebp */
  EBP = (pop32());
  /* 12e03e2a ret  */
  ESPCHK(0x12e03d00u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12e03e30 (52 bytes, 19 insns) */
void f_12e03e30(void) {
  FTRACE(0x12e03e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03e30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e03e34 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e03e38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e03e3a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e03e3e jne 0x12e03e49 */
  if (!C.zf) goto L_12e03e49;
  /* 12e03e40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e03e44 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e03e46 ret 0x10 */
  ESPCHK(0x12e03e30u, _esp0);
  ESP += 20; return;
L_12e03e49:;
  /* 12e03e49 push ebx */
  push32((uint32_t)(EBX));
  /* 12e03e4a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e03e4c mov ebx, eax */
  EBX = (EAX);
  /* 12e03e4e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e03e52 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e03e56 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03e58 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e03e5c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e03e5e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03e60 pop ebx */
  EBX = (pop32());
  /* 12e03e61 ret 0x10 */
  ESPCHK(0x12e03e30u, _esp0);
  ESP += 20; return;
}

/* FUN_10013e70 @ 0x12e03e70 (46 bytes, 18 insns) */
void f_12e03e70(void) {
  FTRACE(0x12e03e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03e71 mov ebp, esp */
  EBP = (ESP);
  /* 12e03e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03e74 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e03e76 call 0x12df9a90 */
  push32(0x12e03e7bu); f_12df9a90();
  /* 12e03e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03e81 push eax */
  push32((uint32_t)(EAX));
  /* 12e03e82 call 0x12e03ea0 */
  push32(0x12e03e87u); f_12e03ea0();
  /* 12e03e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03e8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e03e8d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e03e8f call 0x12df9b30 */
  push32(0x12e03e94u); f_12df9b30();
  /* 12e03e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03e9a mov esp, ebp */
  ESP = (EBP);
  /* 12e03e9c pop ebp */
  EBP = (pop32());
  /* 12e03e9d ret  */
  ESPCHK(0x12e03e70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12e03ea0 (198 bytes, 69 insns) */
void f_12e03ea0(void) {
  FTRACE(0x12e03ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12e03ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03ea6 mov eax, dword ptr [0x12e206c4] */
  EAX = (r32((uint32_t)(0x12e206c4)));
  /* 12e03eab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e03eae cmp dword ptr [0x12e221a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e221a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03eb5 jne 0x12e03ebe */
  if (!C.zf) goto L_12e03ebe;
  /* 12e03eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03eb9 jmp 0x12e03f62 */
  goto L_12e03f62;
L_12e03ebe:;
  /* 12e03ebe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03ec2 jne 0x12e03ee6 */
  if (!C.zf) goto L_12e03ee6;
  /* 12e03ec4 cmp dword ptr [0x12e206cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03ecb je 0x12e03ee6 */
  if (C.zf) goto L_12e03ee6;
  /* 12e03ecd call 0x12e03fc0 */
  push32(0x12e03ed2u); f_12e03fc0();
  /* 12e03ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03ed4 je 0x12e03edd */
  if (C.zf) goto L_12e03edd;
  /* 12e03ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03ed8 jmp 0x12e03f62 */
  goto L_12e03f62;
L_12e03edd:;
  /* 12e03edd mov ecx, dword ptr [0x12e206c4] */
  ECX = (r32((uint32_t)(0x12e206c4)));
  /* 12e03ee3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e03ee6:;
  /* 12e03ee6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03eea je 0x12e03f60 */
  if (C.zf) goto L_12e03f60;
  /* 12e03eec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03ef0 je 0x12e03f60 */
  if (C.zf) goto L_12e03f60;
  /* 12e03ef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03ef5 push edx */
  push32((uint32_t)(EDX));
  /* 12e03ef6 call 0x12df8510 */
  push32(0x12e03efbu); f_12df8510();
  /* 12e03efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03efe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e03f01:;
  /* 12e03f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03f04 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03f07 je 0x12e03f60 */
  if (C.zf) goto L_12e03f60;
  /* 12e03f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03f0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e03f0e push edx */
  push32((uint32_t)(EDX));
  /* 12e03f0f call 0x12df8510 */
  push32(0x12e03f14u); f_12df8510();
  /* 12e03f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03f17 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03f1a jbe 0x12e03f55 */
  if ((C.cf||C.zf)) goto L_12e03f55;
  /* 12e03f1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03f1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e03f21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03f24 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12e03f28 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03f2b jne 0x12e03f55 */
  if (!C.zf) goto L_12e03f55;
  /* 12e03f2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03f34 push edx */
  push32((uint32_t)(EDX));
  /* 12e03f35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03f38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e03f3a push ecx */
  push32((uint32_t)(ECX));
  /* 12e03f3b call 0x12e03f70 */
  push32(0x12e03f40u); f_12e03f70();
  /* 12e03f40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e03f45 jne 0x12e03f55 */
  if (!C.zf) goto L_12e03f55;
  /* 12e03f47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03f4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e03f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03f4f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12e03f53 jmp 0x12e03f62 */
  goto L_12e03f62;
L_12e03f55:;
  /* 12e03f55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e03f58 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03f5b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e03f5e jmp 0x12e03f01 */
  goto L_12e03f01;
L_12e03f60:;
  /* 12e03f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e03f62:;
  /* 12e03f62 mov esp, ebp */
  ESP = (EBP);
  /* 12e03f64 pop ebp */
  EBP = (pop32());
  /* 12e03f65 ret  */
  ESPCHK(0x12e03ea0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12e03f70 (79 bytes, 32 insns) */
void f_12e03f70(void) {
  FTRACE(0x12e03f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03f71 mov ebp, esp */
  EBP = (ESP);
  /* 12e03f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03f74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03f78 jne 0x12e03f7e */
  if (!C.zf) goto L_12e03f7e;
  /* 12e03f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e03f7c jmp 0x12e03fbb */
  goto L_12e03fbb;
L_12e03f7e:;
  /* 12e03f7e mov eax, dword ptr [0x12e20a38] */
  EAX = (r32((uint32_t)(0x12e20a38)));
  /* 12e03f83 push eax */
  push32((uint32_t)(EAX));
  /* 12e03f84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03f87 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03f88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e03f8b push edx */
  push32((uint32_t)(EDX));
  /* 12e03f8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e03f8f push eax */
  push32((uint32_t)(EAX));
  /* 12e03f90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e03f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e03f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03f96 mov edx, dword ptr [0x12e20cc4] */
  EDX = (r32((uint32_t)(0x12e20cc4)));
  /* 12e03f9c push edx */
  push32((uint32_t)(EDX));
  /* 12e03f9d call 0x12e04070 */
  push32(0x12e03fa2u); f_12e04070();
  /* 12e03fa2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e03fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e03fa8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03fac jne 0x12e03fb5 */
  if (!C.zf) goto L_12e03fb5;
  /* 12e03fae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12e03fb3 jmp 0x12e03fbb */
  goto L_12e03fbb;
L_12e03fb5:;
  /* 12e03fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03fb8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e03fbb:;
  /* 12e03fbb mov esp, ebp */
  ESP = (EBP);
  /* 12e03fbd pop ebp */
  EBP = (pop32());
  /* 12e03fbe ret  */
  ESPCHK(0x12e03f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fc0 @ 0x12e03fc0 (174 bytes, 66 insns) */
void f_12e03fc0(void) {
  FTRACE(0x12e03fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e03fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e03fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12e03fc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e03fc6 mov eax, dword ptr [0x12e206cc] */
  EAX = (r32((uint32_t)(0x12e206cc)));
  /* 12e03fcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e03fce:;
  /* 12e03fce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03fd1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03fd4 je 0x12e04068 */
  if (C.zf) goto L_12e04068;
  /* 12e03fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03fde push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03fe2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e03fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e03fe7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e03fe9 push eax */
  push32((uint32_t)(EAX));
  /* 12e03fea push 0 */
  push32((uint32_t)(0x0u));
  /* 12e03fec push 1 */
  push32((uint32_t)(0x1u));
  /* 12e03fee call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e03ff4u);
  /* 12e03ff4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e03ff7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e03ffb jne 0x12e04002 */
  if (!C.zf) goto L_12e04002;
  /* 12e03ffd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e04000 jmp 0x12e0406a */
  goto L_12e0406a;
L_12e04002:;
  /* 12e04002 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e04004 push 0x12e1d08c */
  push32((uint32_t)(0x12e1d08cu));
  /* 12e04009 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e0400b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0400e push ecx */
  push32((uint32_t)(ECX));
  /* 12e0400f call 0x12df56e0 */
  push32(0x12e04014u); f_12df56e0();
  /* 12e04014 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04017 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e0401a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0401e jne 0x12e04025 */
  if (!C.zf) goto L_12e04025;
  /* 12e04020 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e04023 jmp 0x12e0406a */
  goto L_12e0406a;
L_12e04025:;
  /* 12e04025 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e04027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e04029 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0402c push edx */
  push32((uint32_t)(EDX));
  /* 12e0402d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04030 push eax */
  push32((uint32_t)(EAX));
  /* 12e04031 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e04033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e04036 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e04038 push edx */
  push32((uint32_t)(EDX));
  /* 12e04039 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e0403b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e0403d call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12e04043u);
  /* 12e04043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e04045 jne 0x12e0404c */
  if (!C.zf) goto L_12e0404c;
  /* 12e04047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e0404a jmp 0x12e0406a */
  goto L_12e0406a;
L_12e0404c:;
  /* 12e0404c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e0404e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04051 push eax */
  push32((uint32_t)(EAX));
  /* 12e04052 call 0x12e044c0 */
  push32(0x12e04057u); f_12e044c0();
  /* 12e04057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0405a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0405d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04060 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e04063 jmp 0x12e03fce */
  goto L_12e03fce;
L_12e04068:;
  /* 12e04068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e0406a:;
  /* 12e0406a mov esp, ebp */
  ESP = (EBP);
  /* 12e0406c pop ebp */
  EBP = (pop32());
  /* 12e0406d ret  */
  ESPCHK(0x12e03fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014070 @ 0x12e04070 (970 bytes, 340 insns) */
void f_12e04070(void) {
  FTRACE(0x12e04070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e04070 push ebp */
  push32((uint32_t)(EBP));
  /* 12e04071 mov ebp, esp */
  EBP = (ESP);
  /* 12e04073 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e04075 push 0x12e1d0e0 */
  push32((uint32_t)(0x12e1d0e0u));
  /* 12e0407a push 0x12e00f60 */
  push32((uint32_t)(0x12e00f60u));
  /* 12e0407f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e04085 push eax */
  push32((uint32_t)(EAX));
  /* 12e04086 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e0408d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04090 push ebx */
  push32((uint32_t)(EBX));
  /* 12e04091 push esi */
  push32((uint32_t)(ESI));
  /* 12e04092 push edi */
  push32((uint32_t)(EDI));
  /* 12e04093 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e04096 cmp dword ptr [0x12e20a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0409d jne 0x12e040f6 */
  if (!C.zf) goto L_12e040f6;
  /* 12e0409f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e040a1 push 0x12e1c7b8 */
  push32((uint32_t)(0x12e1c7b8u));
  /* 12e040a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e040a8 push 0x12e1c7b8 */
  push32((uint32_t)(0x12e1c7b8u));
  /* 12e040ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12e040af push 0 */
  push32((uint32_t)(0x0u));
  /* 12e040b1 call dword ptr [0x12e23308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23308))), 0x12e040b7u);
  /* 12e040b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e040b9 je 0x12e040c7 */
  if (C.zf) goto L_12e040c7;
  /* 12e040bb mov dword ptr [0x12e20a0c], 1 */
  w32((uint32_t)(0x12e20a0c), (0x1u));
  /* 12e040c5 jmp 0x12e040f6 */
  goto L_12e040f6;
L_12e040c7:;
  /* 12e040c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e040c9 push 0x12e1c7b4 */
  push32((uint32_t)(0x12e1c7b4u));
  /* 12e040ce push 1 */
  push32((uint32_t)(0x1u));
  /* 12e040d0 push 0x12e1c7b4 */
  push32((uint32_t)(0x12e1c7b4u));
  /* 12e040d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e040d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e040d9 call dword ptr [0x12e23310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23310))), 0x12e040dfu);
  /* 12e040df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e040e1 je 0x12e040ef */
  if (C.zf) goto L_12e040ef;
  /* 12e040e3 mov dword ptr [0x12e20a0c], 2 */
  w32((uint32_t)(0x12e20a0c), (0x2u));
  /* 12e040ed jmp 0x12e040f6 */
  goto L_12e040f6;
L_12e040ef:;
  /* 12e040ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e040f1 jmp 0x12e04454 */
  goto L_12e04454;
L_12e040f6:;
  /* 12e040f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e040fa jle 0x12e0410f */
  if ((C.zf||C.sf!=C.of)) goto L_12e0410f;
  /* 12e040fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e040ff push eax */
  push32((uint32_t)(EAX));
  /* 12e04100 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e04103 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04104 call 0x12e04470 */
  push32(0x12e04109u); f_12e04470();
  /* 12e04109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0410c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12e0410f:;
  /* 12e0410f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04113 jle 0x12e04128 */
  if ((C.zf||C.sf!=C.of)) goto L_12e04128;
  /* 12e04115 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e04118 push edx */
  push32((uint32_t)(EDX));
  /* 12e04119 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e0411c push eax */
  push32((uint32_t)(EAX));
  /* 12e0411d call 0x12e04470 */
  push32(0x12e04122u); f_12e04470();
  /* 12e04122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04125 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12e04128:;
  /* 12e04128 cmp dword ptr [0x12e20a0c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a0c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0412f jne 0x12e04154 */
  if (!C.zf) goto L_12e04154;
  /* 12e04131 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e04134 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04135 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e04138 push edx */
  push32((uint32_t)(EDX));
  /* 12e04139 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0413c push eax */
  push32((uint32_t)(EAX));
  /* 12e0413d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e04140 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04141 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e04144 push edx */
  push32((uint32_t)(EDX));
  /* 12e04145 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04148 push eax */
  push32((uint32_t)(EAX));
  /* 12e04149 call dword ptr [0x12e23310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23310))), 0x12e0414fu);
  /* 12e0414f jmp 0x12e04454 */
  goto L_12e04454;
L_12e04154:;
  /* 12e04154 cmp dword ptr [0x12e20a0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0415b jne 0x12e04452 */
  if (!C.zf) goto L_12e04452;
  /* 12e04161 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04165 jne 0x12e04170 */
  if (!C.zf) goto L_12e04170;
  /* 12e04167 mov ecx, dword ptr [0x12e208c0] */
  ECX = (r32((uint32_t)(0x12e208c0)));
  /* 12e0416d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12e04170:;
  /* 12e04170 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04174 je 0x12e04180 */
  if (C.zf) goto L_12e04180;
  /* 12e04176 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0417a jne 0x12e042fc */
  if (!C.zf) goto L_12e042fc;
L_12e04180:;
  /* 12e04180 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e04183 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04186 jne 0x12e04192 */
  if (!C.zf) goto L_12e04192;
  /* 12e04188 mov eax, 2 */
  EAX = (0x2u);
  /* 12e0418d jmp 0x12e04454 */
  goto L_12e04454;
L_12e04192:;
  /* 12e04192 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04196 jle 0x12e041a2 */
  if ((C.zf||C.sf!=C.of)) goto L_12e041a2;
  /* 12e04198 mov eax, 1 */
  EAX = (0x1u);
  /* 12e0419d jmp 0x12e04454 */
  goto L_12e04454;
L_12e041a2:;
  /* 12e041a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e041a6 jle 0x12e041b2 */
  if ((C.zf||C.sf!=C.of)) goto L_12e041b2;
  /* 12e041a8 mov eax, 3 */
  EAX = (0x3u);
  /* 12e041ad jmp 0x12e04454 */
  goto L_12e04454;
L_12e041b2:;
  /* 12e041b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12e041b5 push eax */
  push32((uint32_t)(EAX));
  /* 12e041b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e041b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e041ba call dword ptr [0x12e232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232c0))), 0x12e041c0u);
  /* 12e041c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e041c2 jne 0x12e041cb */
  if (!C.zf) goto L_12e041cb;
  /* 12e041c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e041c6 jmp 0x12e04454 */
  goto L_12e04454;
L_12e041cb:;
  /* 12e041cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e041cf jne 0x12e041d7 */
  if (!C.zf) goto L_12e041d7;
  /* 12e041d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e041d5 je 0x12e04204 */
  if (C.zf) goto L_12e04204;
L_12e041d7:;
  /* 12e041d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e041db jne 0x12e041e3 */
  if (!C.zf) goto L_12e041e3;
  /* 12e041dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e041e1 je 0x12e04204 */
  if (C.zf) goto L_12e04204;
L_12e041e3:;
  /* 12e041e3 push 0x12e1d0a0 */
  push32((uint32_t)(0x12e1d0a0u));
  /* 12e041e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e041ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12e041ef push 0x12e1d098 */
  push32((uint32_t)(0x12e1d098u));
  /* 12e041f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e041f6 call 0x12df3680 */
  push32(0x12e041fbu); f_12df3680();
  /* 12e041fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e041fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04201 jne 0x12e04204 */
  if (!C.zf) goto L_12e04204;
  /* 12e04203 int3  */
  x86_unimpl("int3 @ 0x12e04203");
L_12e04204:;
  /* 12e04204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e04206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e04208 jne 0x12e041cb */
  if (!C.zf) goto L_12e041cb;
  /* 12e0420a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0420e jle 0x12e04283 */
  if ((C.zf||C.sf!=C.of)) goto L_12e04283;
  /* 12e04210 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04214 jae 0x12e04220 */
  if (!C.cf) goto L_12e04220;
  /* 12e04216 mov eax, 3 */
  EAX = (0x3u);
  /* 12e0421b jmp 0x12e04454 */
  goto L_12e04454;
L_12e04220:;
  /* 12e04220 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12e04223 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12e04226 jmp 0x12e04231 */
  goto L_12e04231;
L_12e04228:;
  /* 12e04228 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e0422b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0422e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12e04231:;
  /* 12e04231 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e04234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04236 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e04238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0423a je 0x12e04279 */
  if (C.zf) goto L_12e04279;
  /* 12e0423c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e0423f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e04241 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e04244 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e04246 je 0x12e04279 */
  if (C.zf) goto L_12e04279;
  /* 12e04248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0424b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e0424d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e0424f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e04252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e04256 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04258 jl 0x12e04277 */
  if ((C.sf!=C.of)) goto L_12e04277;
  /* 12e0425a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e0425d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e0425f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e04261 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e04264 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e04266 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e04269 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0426b jg 0x12e04277 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e04277;
  /* 12e0426d mov eax, 2 */
  EAX = (0x2u);
  /* 12e04272 jmp 0x12e04454 */
  goto L_12e04454;
L_12e04277:;
  /* 12e04277 jmp 0x12e04228 */
  goto L_12e04228;
L_12e04279:;
  /* 12e04279 mov eax, 3 */
  EAX = (0x3u);
  /* 12e0427e jmp 0x12e04454 */
  goto L_12e04454;
L_12e04283:;
  /* 12e04283 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04287 jle 0x12e042fc */
  if ((C.zf||C.sf!=C.of)) goto L_12e042fc;
  /* 12e04289 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0428d jae 0x12e04299 */
  if (!C.cf) goto L_12e04299;
  /* 12e0428f mov eax, 1 */
  EAX = (0x1u);
  /* 12e04294 jmp 0x12e04454 */
  goto L_12e04454;
L_12e04299:;
  /* 12e04299 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12e0429c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12e0429f jmp 0x12e042aa */
  goto L_12e042aa;
L_12e042a1:;
  /* 12e042a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e042a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e042a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12e042aa:;
  /* 12e042aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e042ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e042af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e042b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e042b3 je 0x12e042f2 */
  if (C.zf) goto L_12e042f2;
  /* 12e042b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e042b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e042ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e042bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e042bf je 0x12e042f2 */
  if (C.zf) goto L_12e042f2;
  /* 12e042c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e042c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e042c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e042c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e042cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e042cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e042cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e042d1 jl 0x12e042f0 */
  if ((C.sf!=C.of)) goto L_12e042f0;
  /* 12e042d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e042d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e042d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e042da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e042dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e042df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e042e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e042e4 jg 0x12e042f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e042f0;
  /* 12e042e6 mov eax, 2 */
  EAX = (0x2u);
  /* 12e042eb jmp 0x12e04454 */
  goto L_12e04454;
L_12e042f0:;
  /* 12e042f0 jmp 0x12e042a1 */
  goto L_12e042a1;
L_12e042f2:;
  /* 12e042f2 mov eax, 1 */
  EAX = (0x1u);
  /* 12e042f7 jmp 0x12e04454 */
  goto L_12e04454;
L_12e042fc:;
  /* 12e042fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e042fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12e04300 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e04303 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04304 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e04307 push edx */
  push32((uint32_t)(EDX));
  /* 12e04308 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e0430a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e0430d push eax */
  push32((uint32_t)(EAX));
  /* 12e0430e call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12e04314u);
  /* 12e04314 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e04317 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0431b jne 0x12e04324 */
  if (!C.zf) goto L_12e04324;
  /* 12e0431d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0431f jmp 0x12e04454 */
  goto L_12e04454;
L_12e04324:;
  /* 12e04324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e0432b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e0432e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e04330 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04333 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e04335 call 0x12df8880 */
  push32(0x12e0433au); f_12df8880();
  /* 12e0433a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12e0433d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e04340 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12e04343 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e04346 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e0434d jmp 0x12e04366 */
  goto L_12e04366;
  /* 12e0434f mov eax, 1 */
  EAX = (0x1u);
  /* 12e04354 ret  */
  ESPCHK(0x12e04070u, _esp0);
  ESP += 4; return;
  /* 12e04355 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e04358 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e0435f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e04366:;
  /* 12e04366 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0436a jne 0x12e04373 */
  if (!C.zf) goto L_12e04373;
  /* 12e0436c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0436e jmp 0x12e04454 */
  goto L_12e04454;
L_12e04373:;
  /* 12e04373 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e04376 push edx */
  push32((uint32_t)(EDX));
  /* 12e04377 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e0437a push eax */
  push32((uint32_t)(EAX));
  /* 12e0437b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e0437e push ecx */
  push32((uint32_t)(ECX));
  /* 12e0437f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e04382 push edx */
  push32((uint32_t)(EDX));
  /* 12e04383 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e04385 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e04388 push eax */
  push32((uint32_t)(EAX));
  /* 12e04389 call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12e0438fu);
  /* 12e0438f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e04391 jne 0x12e0439a */
  if (!C.zf) goto L_12e0439a;
  /* 12e04393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04395 jmp 0x12e04454 */
  goto L_12e04454;
L_12e0439a:;
  /* 12e0439a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e0439c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e0439e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e043a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e043a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e043a5 push edx */
  push32((uint32_t)(EDX));
  /* 12e043a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e043a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e043ab push eax */
  push32((uint32_t)(EAX));
  /* 12e043ac call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12e043b2u);
  /* 12e043b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e043b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e043b9 jne 0x12e043c2 */
  if (!C.zf) goto L_12e043c2;
  /* 12e043bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e043bd jmp 0x12e04454 */
  goto L_12e04454;
L_12e043c2:;
  /* 12e043c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e043c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e043cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e043ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e043d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e043d3 call 0x12df8880 */
  push32(0x12e043d8u); f_12df8880();
  /* 12e043d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12e043db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e043de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12e043e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e043e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e043eb jmp 0x12e04404 */
  goto L_12e04404;
  /* 12e043ed mov eax, 1 */
  EAX = (0x1u);
  /* 12e043f2 ret  */
  ESPCHK(0x12e04070u, _esp0);
  ESP += 4; return;
  /* 12e043f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e043f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12e043fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e04404:;
  /* 12e04404 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04408 jne 0x12e0440e */
  if (!C.zf) goto L_12e0440e;
  /* 12e0440a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0440c jmp 0x12e04454 */
  goto L_12e04454;
L_12e0440e:;
  /* 12e0440e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e04411 push edx */
  push32((uint32_t)(EDX));
  /* 12e04412 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e04415 push eax */
  push32((uint32_t)(EAX));
  /* 12e04416 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e04419 push ecx */
  push32((uint32_t)(ECX));
  /* 12e0441a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e0441d push edx */
  push32((uint32_t)(EDX));
  /* 12e0441e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e04420 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e04423 push eax */
  push32((uint32_t)(EAX));
  /* 12e04424 call dword ptr [0x12e2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2328c))), 0x12e0442au);
  /* 12e0442a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e0442c jne 0x12e04432 */
  if (!C.zf) goto L_12e04432;
  /* 12e0442e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04430 jmp 0x12e04454 */
  goto L_12e04454;
L_12e04432:;
  /* 12e04432 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e04435 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04436 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e04439 push edx */
  push32((uint32_t)(EDX));
  /* 12e0443a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e0443d push eax */
  push32((uint32_t)(EAX));
  /* 12e0443e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e04441 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04442 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e04445 push edx */
  push32((uint32_t)(EDX));
  /* 12e04446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04449 push eax */
  push32((uint32_t)(EAX));
  /* 12e0444a call dword ptr [0x12e23308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23308))), 0x12e04450u);
  /* 12e04450 jmp 0x12e04454 */
  goto L_12e04454;
L_12e04452:;
  /* 12e04452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e04454:;
  /* 12e04454 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12e04457 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0445a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e04461 pop edi */
  EDI = (pop32());
  /* 12e04462 pop esi */
  ESI = (pop32());
  /* 12e04463 pop ebx */
  EBX = (pop32());
  /* 12e04464 mov esp, ebp */
  ESP = (EBP);
  /* 12e04466 pop ebp */
  EBP = (pop32());
  /* 12e04467 ret  */
  ESPCHK(0x12e04070u, _esp0);
  ESP += 4; return;
}

/* FUN_10014470 @ 0x12e04470 (80 bytes, 32 insns) */
void f_12e04470(void) {
  FTRACE(0x12e04470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e04470 push ebp */
  push32((uint32_t)(EBP));
  /* 12e04471 mov ebp, esp */
  EBP = (ESP);
  /* 12e04473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e04476 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e04479 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e0447c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0447f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e04482:;
  /* 12e04482 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04488 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0448b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e0448e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e04490 je 0x12e044a7 */
  if (C.zf) goto L_12e044a7;
  /* 12e04492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e04495 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e04498 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e0449a je 0x12e044a7 */
  if (C.zf) goto L_12e044a7;
  /* 12e0449c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0449f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e044a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e044a5 jmp 0x12e04482 */
  goto L_12e04482;
L_12e044a7:;
  /* 12e044a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e044aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e044ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e044af jne 0x12e044b9 */
  if (!C.zf) goto L_12e044b9;
  /* 12e044b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e044b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e044b7 jmp 0x12e044bc */
  goto L_12e044bc;
L_12e044b9:;
  /* 12e044b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12e044bc:;
  /* 12e044bc mov esp, ebp */
  ESP = (EBP);
  /* 12e044be pop ebp */
  EBP = (pop32());
  /* 12e044bf ret  */
  ESPCHK(0x12e04470u, _esp0);
  ESP += 4; return;
}

/* FUN_100144c0 @ 0x12e044c0 (736 bytes, 224 insns) */
void f_12e044c0(void) {
  FTRACE(0x12e044c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e044c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e044c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e044c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e044c6 push esi */
  push32((uint32_t)(ESI));
  /* 12e044c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e044cb je 0x12e044ec */
  if (C.zf) goto L_12e044ec;
  /* 12e044cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e044cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e044d2 push eax */
  push32((uint32_t)(EAX));
  /* 12e044d3 call 0x12e04910 */
  push32(0x12e044d8u); f_12e04910();
  /* 12e044d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e044db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e044de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e044e2 je 0x12e044ec */
  if (C.zf) goto L_12e044ec;
  /* 12e044e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e044e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e044ea jne 0x12e044f4 */
  if (!C.zf) goto L_12e044f4;
L_12e044ec:;
  /* 12e044ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e044ef jmp 0x12e0479b */
  goto L_12e0479b;
L_12e044f4:;
  /* 12e044f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e044f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e044fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e044fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e044ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12e04500 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e04503 mov ecx, dword ptr [0x12e206c4] */
  ECX = (r32((uint32_t)(0x12e206c4)));
  /* 12e04509 cmp ecx, dword ptr [0x12e206c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e206c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0450f jne 0x12e04525 */
  if (!C.zf) goto L_12e04525;
  /* 12e04511 mov edx, dword ptr [0x12e206c4] */
  EDX = (r32((uint32_t)(0x12e206c4)));
  /* 12e04517 push edx */
  push32((uint32_t)(EDX));
  /* 12e04518 call 0x12e04820 */
  push32(0x12e0451du); f_12e04820();
  /* 12e0451d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04520 mov dword ptr [0x12e206c4], eax */
  w32((uint32_t)(0x12e206c4), (EAX));
L_12e04525:;
  /* 12e04525 cmp dword ptr [0x12e206c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0452c jne 0x12e045e5 */
  if (!C.zf) goto L_12e045e5;
  /* 12e04532 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04536 je 0x12e04557 */
  if (C.zf) goto L_12e04557;
  /* 12e04538 cmp dword ptr [0x12e206cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0453f je 0x12e04557 */
  if (C.zf) goto L_12e04557;
  /* 12e04541 call 0x12e03fc0 */
  push32(0x12e04546u); f_12e03fc0();
  /* 12e04546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e04548 je 0x12e04552 */
  if (C.zf) goto L_12e04552;
  /* 12e0454a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e0454d jmp 0x12e0479b */
  goto L_12e0479b;
L_12e04552:;
  /* 12e04552 jmp 0x12e045e5 */
  goto L_12e045e5;
L_12e04557:;
  /* 12e04557 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0455b je 0x12e04564 */
  if (C.zf) goto L_12e04564;
  /* 12e0455d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0455f jmp 0x12e0479b */
  goto L_12e0479b;
L_12e04564:;
  /* 12e04564 cmp dword ptr [0x12e206c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0456b jne 0x12e045a4 */
  if (!C.zf) goto L_12e045a4;
  /* 12e0456d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12e04572 push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e04577 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e04579 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e0457b call 0x12df56e0 */
  push32(0x12e04580u); f_12df56e0();
  /* 12e04580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04583 mov dword ptr [0x12e206c4], eax */
  w32((uint32_t)(0x12e206c4), (EAX));
  /* 12e04588 cmp dword ptr [0x12e206c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0458f jne 0x12e04599 */
  if (!C.zf) goto L_12e04599;
  /* 12e04591 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e04594 jmp 0x12e0479b */
  goto L_12e0479b;
L_12e04599:;
  /* 12e04599 mov eax, dword ptr [0x12e206c4] */
  EAX = (r32((uint32_t)(0x12e206c4)));
  /* 12e0459e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e045a4:;
  /* 12e045a4 cmp dword ptr [0x12e206cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e045ab jne 0x12e045e5 */
  if (!C.zf) goto L_12e045e5;
  /* 12e045ad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12e045b2 push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e045b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e045b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e045bb call 0x12df56e0 */
  push32(0x12e045c0u); f_12df56e0();
  /* 12e045c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e045c3 mov dword ptr [0x12e206cc], eax */
  w32((uint32_t)(0x12e206cc), (EAX));
  /* 12e045c8 cmp dword ptr [0x12e206cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e045cf jne 0x12e045d9 */
  if (!C.zf) goto L_12e045d9;
  /* 12e045d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e045d4 jmp 0x12e0479b */
  goto L_12e0479b;
L_12e045d9:;
  /* 12e045d9 mov ecx, dword ptr [0x12e206cc] */
  ECX = (r32((uint32_t)(0x12e206cc)));
  /* 12e045df mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12e045e5:;
  /* 12e045e5 mov edx, dword ptr [0x12e206c4] */
  EDX = (r32((uint32_t)(0x12e206c4)));
  /* 12e045eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e045ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e045f1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e045f4 push eax */
  push32((uint32_t)(EAX));
  /* 12e045f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e045f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e045f9 call 0x12e047a0 */
  push32(0x12e045feu); f_12e047a0();
  /* 12e045fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04601 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e04604 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04608 jl 0x12e046a1 */
  if ((C.sf!=C.of)) goto L_12e046a1;
  /* 12e0460e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04611 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04614 je 0x12e046a1 */
  if (C.zf) goto L_12e046a1;
  /* 12e0461a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0461e je 0x12e04693 */
  if (C.zf) goto L_12e04693;
  /* 12e04620 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e04622 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04628 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e0462b push edx */
  push32((uint32_t)(EDX));
  /* 12e0462c call 0x12df6170 */
  push32(0x12e04631u); f_12df6170();
  /* 12e04631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04634 jmp 0x12e0463f */
  goto L_12e0463f;
L_12e04636:;
  /* 12e04636 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0463c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e0463f:;
  /* 12e0463f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04642 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04645 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04649 je 0x12e04660 */
  if (C.zf) goto L_12e04660;
  /* 12e0464b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0464e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04654 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04657 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12e0465b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12e0465e jmp 0x12e04636 */
  goto L_12e04636;
L_12e04660:;
  /* 12e04660 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12e04665 push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e0466a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e0466c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e0466f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e04672 push eax */
  push32((uint32_t)(EAX));
  /* 12e04673 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04676 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04677 call 0x12df5b70 */
  push32(0x12e0467cu); f_12df5b70();
  /* 12e0467c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0467f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e04682 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04686 je 0x12e04691 */
  if (C.zf) goto L_12e04691;
  /* 12e04688 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0468b mov dword ptr [0x12e206c4], edx */
  w32((uint32_t)(0x12e206c4), (EDX));
L_12e04691:;
  /* 12e04691 jmp 0x12e0469f */
  goto L_12e0469f;
L_12e04693:;
  /* 12e04693 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04696 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0469c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12e0469f:;
  /* 12e0469f jmp 0x12e04714 */
  goto L_12e04714;
L_12e046a1:;
  /* 12e046a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e046a5 jne 0x12e0470d */
  if (!C.zf) goto L_12e0470d;
  /* 12e046a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e046ab jge 0x12e046b5 */
  if ((C.sf==C.of)) goto L_12e046b5;
  /* 12e046ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e046b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e046b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e046b5:;
  /* 12e046b5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12e046ba push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e046bf push 2 */
  push32((uint32_t)(0x2u));
  /* 12e046c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e046c4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12e046cb push edx */
  push32((uint32_t)(EDX));
  /* 12e046cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e046cf push eax */
  push32((uint32_t)(EAX));
  /* 12e046d0 call 0x12df5b70 */
  push32(0x12e046d5u); f_12df5b70();
  /* 12e046d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e046d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e046db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e046df jne 0x12e046e9 */
  if (!C.zf) goto L_12e046e9;
  /* 12e046e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e046e4 jmp 0x12e0479b */
  goto L_12e0479b;
L_12e046e9:;
  /* 12e046e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e046ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e046ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e046f2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12e046f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e046f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e046fb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12e04703 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04706 mov dword ptr [0x12e206c4], eax */
  w32((uint32_t)(0x12e206c4), (EAX));
  /* 12e0470b jmp 0x12e04714 */
  goto L_12e04714;
L_12e0470d:;
  /* 12e0470d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0470f jmp 0x12e0479b */
  goto L_12e0479b;
L_12e04714:;
  /* 12e04714 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04718 je 0x12e04799 */
  if (C.zf) goto L_12e04799;
  /* 12e0471a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12e0471f push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e04724 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e04726 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04729 push ecx */
  push32((uint32_t)(ECX));
  /* 12e0472a call 0x12df8510 */
  push32(0x12e0472fu); f_12df8510();
  /* 12e0472f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04732 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04735 push eax */
  push32((uint32_t)(EAX));
  /* 12e04736 call 0x12df56e0 */
  push32(0x12e0473bu); f_12df56e0();
  /* 12e0473b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0473e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e04741 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04745 je 0x12e04799 */
  if (C.zf) goto L_12e04799;
  /* 12e04747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0474a push edx */
  push32((uint32_t)(EDX));
  /* 12e0474b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0474e push eax */
  push32((uint32_t)(EAX));
  /* 12e0474f call 0x12df8690 */
  push32(0x12e04754u); f_12df8690();
  /* 12e04754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04757 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e0475a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0475d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e04760 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e04765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e04768 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e0476b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0476e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04771 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e04774 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e04777 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e04779 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e0477b not edx */
  EDX = (~(EDX));
  /* 12e0477d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e04780 push edx */
  push32((uint32_t)(EDX));
  /* 12e04781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e04784 push eax */
  push32((uint32_t)(EAX));
  /* 12e04785 call dword ptr [0x12e23314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23314))), 0x12e0478bu);
  /* 12e0478b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e0478d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e04790 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04791 call 0x12df6170 */
  push32(0x12e04796u); f_12df6170();
  /* 12e04796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e04799:;
  /* 12e04799 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e0479b:;
  /* 12e0479b pop esi */
  ESI = (pop32());
  /* 12e0479c mov esp, ebp */
  ESP = (EBP);
  /* 12e0479e pop ebp */
  EBP = (pop32());
  /* 12e0479f ret  */
  ESPCHK(0x12e044c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12e047a0 (124 bytes, 47 insns) */
void f_12e047a0(void) {
  FTRACE(0x12e047a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e047a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e047a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e047a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e047a4 mov eax, dword ptr [0x12e206c4] */
  EAX = (r32((uint32_t)(0x12e206c4)));
  /* 12e047a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e047ac jmp 0x12e047b7 */
  goto L_12e047b7;
L_12e047ae:;
  /* 12e047ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e047b1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e047b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e047b7:;
  /* 12e047b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e047ba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e047bd je 0x12e0480a */
  if (C.zf) goto L_12e0480a;
  /* 12e047bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e047c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e047c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e047c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e047c8 push edx */
  push32((uint32_t)(EDX));
  /* 12e047c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e047cc push eax */
  push32((uint32_t)(EAX));
  /* 12e047cd call 0x12e03f70 */
  push32(0x12e047d2u); f_12e03f70();
  /* 12e047d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e047d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e047d7 jne 0x12e04808 */
  if (!C.zf) goto L_12e04808;
  /* 12e047d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e047dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e047de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e047e1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12e047e5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e047e8 je 0x12e047fa */
  if (C.zf) goto L_12e047fa;
  /* 12e047ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e047ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e047ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e047f2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12e047f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e047f8 jne 0x12e04808 */
  if (!C.zf) goto L_12e04808;
L_12e047fa:;
  /* 12e047fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e047fd sub eax, dword ptr [0x12e206c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e206c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e04803 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e04806 jmp 0x12e04818 */
  goto L_12e04818;
L_12e04808:;
  /* 12e04808 jmp 0x12e047ae */
  goto L_12e047ae;
L_12e0480a:;
  /* 12e0480a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0480d sub eax, dword ptr [0x12e206c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e206c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e04813 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e04816 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12e04818:;
  /* 12e04818 mov esp, ebp */
  ESP = (EBP);
  /* 12e0481a pop ebp */
  EBP = (pop32());
  /* 12e0481b ret  */
  ESPCHK(0x12e047a0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12e04820 (238 bytes, 80 insns) */
void f_12e04820(void) {
  FTRACE(0x12e04820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e04820 push ebp */
  push32((uint32_t)(EBP));
  /* 12e04821 mov ebp, esp */
  EBP = (ESP);
  /* 12e04823 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e04826 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e0482d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04830 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e04833 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04837 jne 0x12e04840 */
  if (!C.zf) goto L_12e04840;
  /* 12e04839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e0483b jmp 0x12e0490a */
  goto L_12e0490a;
L_12e04840:;
  /* 12e04840 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04843 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e04845 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e04848 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0484b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e0484e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e04850 je 0x12e0485d */
  if (C.zf) goto L_12e0485d;
  /* 12e04852 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e04855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04858 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e0485b jmp 0x12e04840 */
  goto L_12e04840;
L_12e0485d:;
  /* 12e0485d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12e04862 push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e04867 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e04869 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e0486c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12e04873 push eax */
  push32((uint32_t)(EAX));
  /* 12e04874 call 0x12df56e0 */
  push32(0x12e04879u); f_12df56e0();
  /* 12e04879 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0487c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e0487f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04882 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e04885 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e04889 jne 0x12e04895 */
  if (!C.zf) goto L_12e04895;
  /* 12e0488b push 9 */
  push32((uint32_t)(0x9u));
  /* 12e0488d call 0x12df3530 */
  push32(0x12e04892u); f_12df3530();
  /* 12e04892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e04895:;
  /* 12e04895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04898 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e0489b:;
  /* 12e0489b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e0489e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e048a1 je 0x12e048fe */
  if (C.zf) goto L_12e048fe;
  /* 12e048a3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12e048a8 push 0x12e1d0f8 */
  push32((uint32_t)(0x12e1d0f8u));
  /* 12e048ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12e048af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e048b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e048b4 push edx */
  push32((uint32_t)(EDX));
  /* 12e048b5 call 0x12df8510 */
  push32(0x12e048bau); f_12df8510();
  /* 12e048ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e048bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e048c0 push eax */
  push32((uint32_t)(EAX));
  /* 12e048c1 call 0x12df56e0 */
  push32(0x12e048c6u); f_12df56e0();
  /* 12e048c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e048c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e048cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e048ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e048d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e048d4 je 0x12e048ea */
  if (C.zf) goto L_12e048ea;
  /* 12e048d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e048d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e048db push ecx */
  push32((uint32_t)(ECX));
  /* 12e048dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e048df mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e048e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e048e2 call 0x12df8690 */
  push32(0x12e048e7u); f_12df8690();
  /* 12e048e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e048ea:;
  /* 12e048ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e048ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e048f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e048f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e048f6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e048f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e048fc jmp 0x12e0489b */
  goto L_12e0489b;
L_12e048fe:;
  /* 12e048fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e04901 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e04907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e0490a:;
  /* 12e0490a mov esp, ebp */
  ESP = (EBP);
  /* 12e0490c pop ebp */
  EBP = (pop32());
  /* 12e0490d ret  */
  ESPCHK(0x12e04820u, _esp0);
  ESP += 4; return;
}

/* FUN_10014910 @ 0x12e04910 (237 bytes, 81 insns) */
void f_12e04910(void) {
  FTRACE(0x12e04910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e04910 push ebp */
  push32((uint32_t)(EBP));
  /* 12e04911 mov ebp, esp */
  EBP = (ESP);
  /* 12e04913 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04914 cmp dword ptr [0x12e20abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e0491b jne 0x12e04932 */
  if (!C.zf) goto L_12e04932;
  /* 12e0491d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e04920 push eax */
  push32((uint32_t)(EAX));
  /* 12e04921 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04924 push ecx */
  push32((uint32_t)(ECX));
  /* 12e04925 call 0x12e04a10 */
  push32(0x12e0492au); f_12e04a10();
  /* 12e0492a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0492d jmp 0x12e049f9 */
  goto L_12e049f9;
L_12e04932:;
  /* 12e04932 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e04934 call 0x12df9a90 */
  push32(0x12e04939u); f_12df9a90();
  /* 12e04939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0493c jmp 0x12e04947 */
  goto L_12e04947;
L_12e0493e:;
  /* 12e0493e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04941 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04944 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e04947:;
  /* 12e04947 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e0494a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12e0494e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12e04952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e04955 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e0495b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e0495d je 0x12e049db */
  if (C.zf) goto L_12e049db;
  /* 12e0495f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e04962 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e04967 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e04969 mov cl, byte ptr [eax + 0x12e20bc1] */
  CL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12e0496f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e04972 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e04974 je 0x12e049c6 */
  if (C.zf) goto L_12e049c6;
  /* 12e04976 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04979 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e0497c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e0497f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e04982 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e04984 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e04986 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e04988 jne 0x12e04998 */
  if (!C.zf) goto L_12e04998;
  /* 12e0498a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e0498c call 0x12df9b30 */
  push32(0x12e04991u); f_12df9b30();
  /* 12e04991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04996 jmp 0x12e049f9 */
  goto L_12e049f9;
L_12e04998:;
  /* 12e04998 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e0499b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e049a1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e049a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e049a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e049a9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e049ab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e049ad cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e049b0 jne 0x12e049c4 */
  if (!C.zf) goto L_12e049c4;
  /* 12e049b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e049b4 call 0x12df9b30 */
  push32(0x12e049b9u); f_12df9b30();
  /* 12e049b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e049bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e049bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e049c2 jmp 0x12e049f9 */
  goto L_12e049f9;
L_12e049c4:;
  /* 12e049c4 jmp 0x12e049d6 */
  goto L_12e049d6;
L_12e049c6:;
  /* 12e049c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e049c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e049cf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e049d2 jne 0x12e049d6 */
  if (!C.zf) goto L_12e049d6;
  /* 12e049d4 jmp 0x12e049db */
  goto L_12e049db;
L_12e049d6:;
  /* 12e049d6 jmp 0x12e0493e */
  goto L_12e0493e;
L_12e049db:;
  /* 12e049db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e049dd call 0x12df9b30 */
  push32(0x12e049e2u); f_12df9b30();
  /* 12e049e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e049e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e049e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e049ed cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e049f0 jne 0x12e049f7 */
  if (!C.zf) goto L_12e049f7;
  /* 12e049f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e049f5 jmp 0x12e049f9 */
  goto L_12e049f9;
L_12e049f7:;
  /* 12e049f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e049f9:;
  /* 12e049f9 mov esp, ebp */
  ESP = (EBP);
  /* 12e049fb pop ebp */
  EBP = (pop32());
  /* 12e049fc ret  */
  ESPCHK(0x12e04910u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12e04a10 (193 bytes, 87 insns) */
void f_12e04a10(void) {
  FTRACE(0x12e04a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e04a10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04a12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12e04a16 push ebx */
  push32((uint32_t)(EBX));
  /* 12e04a17 mov ebx, eax */
  EBX = (EAX);
  /* 12e04a19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e04a1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e04a20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e04a26 je 0x12e04a3b */
  if (C.zf) goto L_12e04a3b;
L_12e04a28:;
  /* 12e04a28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12e04a2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e04a2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e04a2d je 0x12e04a00 */
  if (C.zf) { jmp_ind(0x12e04a00u); return; }
  /* 12e04a2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12e04a31 je 0x12e04a84 */
  if (C.zf) goto L_12e04a84;
  /* 12e04a33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e04a39 jne 0x12e04a28 */
  if (!C.zf) goto L_12e04a28;
L_12e04a3b:;
  /* 12e04a3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12e04a3d push edi */
  push32((uint32_t)(EDI));
  /* 12e04a3e mov eax, ebx */
  EAX = (EBX);
  /* 12e04a40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12e04a43 push esi */
  push32((uint32_t)(ESI));
  /* 12e04a44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12e04a46:;
  /* 12e04a46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12e04a48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12e04a4d mov eax, ecx */
  EAX = (ECX);
  /* 12e04a4f mov esi, edi */
  ESI = (EDI);
  /* 12e04a51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12e04a53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04a55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04a57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e04a5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e04a5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12e04a5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12e04a61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e04a64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e04a6a jne 0x12e04a88 */
  if (!C.zf) goto L_12e04a88;
  /* 12e04a6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12e04a71 je 0x12e04a46 */
  if (C.zf) goto L_12e04a46;
  /* 12e04a73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12e04a78 jne 0x12e04a82 */
  if (!C.zf) goto L_12e04a82;
  /* 12e04a7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12e04a80 jne 0x12e04a46 */
  if (!C.zf) goto L_12e04a46;
L_12e04a82:;
  /* 12e04a82 pop esi */
  ESI = (pop32());
  /* 12e04a83 pop edi */
  EDI = (pop32());
L_12e04a84:;
  /* 12e04a84 pop ebx */
  EBX = (pop32());
  /* 12e04a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e04a87 ret  */
  ESPCHK(0x12e04a10u, _esp0);
  ESP += 4; return;
L_12e04a88:;
  /* 12e04a88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12e04a8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e04a8d je 0x12e04ac5 */
  if (C.zf) goto L_12e04ac5;
  /* 12e04a8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e04a91 je 0x12e04a82 */
  if (C.zf) goto L_12e04a82;
  /* 12e04a93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e04a95 je 0x12e04abe */
  if (C.zf) goto L_12e04abe;
  /* 12e04a97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e04a99 je 0x12e04a82 */
  if (C.zf) goto L_12e04a82;
  /* 12e04a9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e04a9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e04aa0 je 0x12e04ab7 */
  if (C.zf) goto L_12e04ab7;
  /* 12e04aa2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e04aa4 je 0x12e04a82 */
  if (C.zf) goto L_12e04a82;
  /* 12e04aa6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e04aa8 je 0x12e04ab0 */
  if (C.zf) goto L_12e04ab0;
  /* 12e04aaa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e04aac je 0x12e04a82 */
  if (C.zf) goto L_12e04a82;
  /* 12e04aae jmp 0x12e04a46 */
  goto L_12e04a46;
L_12e04ab0:;
  /* 12e04ab0 pop esi */
  ESI = (pop32());
  /* 12e04ab1 pop edi */
  EDI = (pop32());
  /* 12e04ab2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12e04ab5 pop ebx */
  EBX = (pop32());
  /* 12e04ab6 ret  */
  ESPCHK(0x12e04a10u, _esp0);
  ESP += 4; return;
L_12e04ab7:;
  /* 12e04ab7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12e04aba pop esi */
  ESI = (pop32());
  /* 12e04abb pop edi */
  EDI = (pop32());
  /* 12e04abc pop ebx */
  EBX = (pop32());
  /* 12e04abd ret  */
  ESPCHK(0x12e04a10u, _esp0);
  ESP += 4; return;
L_12e04abe:;
  /* 12e04abe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12e04ac1 pop esi */
  ESI = (pop32());
  /* 12e04ac2 pop edi */
  EDI = (pop32());
  /* 12e04ac3 pop ebx */
  EBX = (pop32());
  /* 12e04ac4 ret  */
  ESPCHK(0x12e04a10u, _esp0);
  ESP += 4; return;
L_12e04ac5:;
  /* 12e04ac5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12e04ac8 pop esi */
  ESI = (pop32());
  /* 12e04ac9 pop edi */
  EDI = (pop32());
  /* 12e04aca pop ebx */
  EBX = (pop32());
  /* 12e04acb ret  */
  ESPCHK(0x12e04a10u, _esp0);
  ESP += 4; return;
  /* 12e04acc jmp dword ptr [0x12e23204] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12e23204)))); return;
}

/* RtlUnwind @ 0x12e04c4c (6 bytes, 1 insns) */
void f_12e04c4c(void) {
  FTRACE(0x12e04c4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e04c4c jmp dword ptr [0x12e23300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12e23300)))); return;
}

