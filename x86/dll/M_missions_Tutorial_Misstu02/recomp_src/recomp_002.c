#include "recomp.h"

/* ___lc_lctostr @ 0x1231eee0 (101 bytes, 36 insns) */
void f_1231eee0(void) {
  FTRACE(0x1231eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231eee1 mov ebp, esp */
  EBP = (ESP);
  /* 1231eee3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231eee6 push eax */
  push32((uint32_t)(EAX));
  /* 1231eee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231eeea push ecx */
  push32((uint32_t)(ECX));
  /* 1231eeeb call 0x123195b0 */
  push32(0x1231eef0u); f_123195b0();
  /* 1231eef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eef3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231eef6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1231eefa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231eefc je 0x1231ef18 */
  if (C.zf) goto L_1231ef18;
  /* 1231eefe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ef01 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ef04 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ef05 push 0x1233d950 */
  push32((uint32_t)(0x1233d950u));
  /* 1231ef0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1231ef0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ef0f push edx */
  push32((uint32_t)(EDX));
  /* 1231ef10 call 0x1231ed30 */
  push32(0x1231ef15u); f_1231ed30();
  /* 1231ef15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ef18:;
  /* 1231ef18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ef1b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1231ef22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231ef24 je 0x1231ef43 */
  if (C.zf) goto L_1231ef43;
  /* 1231ef26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ef29 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ef2f push edx */
  push32((uint32_t)(EDX));
  /* 1231ef30 push 0x1233d94c */
  push32((uint32_t)(0x1233d94cu));
  /* 1231ef35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231ef37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ef3a push eax */
  push32((uint32_t)(EAX));
  /* 1231ef3b call 0x1231ed30 */
  push32(0x1231ef40u); f_1231ed30();
  /* 1231ef40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ef43:;
  /* 1231ef43 pop ebp */
  EBP = (pop32());
  /* 1231ef44 ret  */
  ESPCHK(0x1231eee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x1231ef50 (664 bytes, 268 insns) [15 switch table(s)] */
void f_1231ef50(void) {
  FTRACE(0x1231ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ef51 mov ebp, esp */
  EBP = (ESP);
  /* 1231ef53 push edi */
  push32((uint32_t)(EDI));
  /* 1231ef54 push esi */
  push32((uint32_t)(ESI));
  /* 1231ef55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ef58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231ef5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ef5e mov eax, ecx */
  EAX = (ECX);
  /* 1231ef60 mov edx, ecx */
  EDX = (ECX);
  /* 1231ef62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ef64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ef66 jbe 0x1231ef70 */
  if ((C.cf||C.zf)) goto L_1231ef70;
  /* 1231ef68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ef6a jb 0x1231f0e8 */
  if (C.cf) goto L_1231f0e8;
L_1231ef70:;
  /* 1231ef70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1231ef76 jne 0x1231ef8c */
  if (!C.zf) goto L_1231ef8c;
  /* 1231ef78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231ef7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1231ef7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ef81 jb 0x1231efac */
  if (C.cf) goto L_1231efac;
  /* 1231ef83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231ef85 jmp dword ptr [edx*4 + 0x1231f098] */
  switch (EDX) {
    case 0: goto L_1231f0a8;
    case 1: goto L_1231f0b0;
    case 2: goto L_1231f0bc;
    case 3: goto L_1231f0d0;
    default: x86_unimpl("switch@0x1231ef85 out of table"); return;
  }
L_1231ef8c:;
  /* 1231ef8c mov eax, edi */
  EAX = (EDI);
  /* 1231ef8e mov edx, 3 */
  EDX = (0x3u);
  /* 1231ef93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231ef96 jb 0x1231efa4 */
  if (C.cf) goto L_1231efa4;
  /* 1231ef98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1231ef9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ef9d jmp dword ptr [eax*4 + 0x1231efb0] */
  switch (EAX) {
    case 1: goto L_1231efc0;
    case 2: goto L_1231efec;
    case 3: goto L_1231f010;
    default: x86_unimpl("switch@0x1231ef9d out of table"); return;
  }
L_1231efa4:;
  /* 1231efa4 jmp dword ptr [ecx*4 + 0x1231f0a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1231f0a8)))); return;
  /* 1231efab nop  */
  /* nop */
L_1231efac:;
  /* 1231efac jmp dword ptr [ecx*4 + 0x1231f02c] */
  switch (ECX) {
    case 0: goto L_1231f08f;
    case 1: goto L_1231f07c;
    case 2: goto L_1231f074;
    case 3: goto L_1231f06c;
    case 4: goto L_1231f064;
    case 5: goto L_1231f05c;
    case 6: goto L_1231f054;
    case 7: goto L_1231f04c;
    default: x86_unimpl("switch@0x1231efac out of table"); return;
  }
  /* 1231efb3 nop  */
  /* nop */
L_1231efc0:;
  /* 1231efc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231efc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231efc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231efc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231efc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231efcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231efcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231efd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231efd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231efd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231efdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231efde jb 0x1231efac */
  if (C.cf) goto L_1231efac;
  /* 1231efe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231efe2 jmp dword ptr [edx*4 + 0x1231f098] */
  switch (EDX) {
    case 0: goto L_1231f0a8;
    case 1: goto L_1231f0b0;
    case 2: goto L_1231f0bc;
    case 3: goto L_1231f0d0;
    default: x86_unimpl("switch@0x1231efe2 out of table"); return;
  }
  /* 1231efe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231efec:;
  /* 1231efec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231efee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231eff0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231eff2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231eff5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231eff8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231effb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231effe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f001 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f004 jb 0x1231efac */
  if (C.cf) goto L_1231efac;
  /* 1231f006 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231f008 jmp dword ptr [edx*4 + 0x1231f098] */
  switch (EDX) {
    case 0: goto L_1231f0a8;
    case 1: goto L_1231f0b0;
    case 2: goto L_1231f0bc;
    case 3: goto L_1231f0d0;
    default: x86_unimpl("switch@0x1231f008 out of table"); return;
  }
  /* 1231f00f nop  */
  /* nop */
L_1231f010:;
  /* 1231f010 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231f012 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231f014 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231f016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1231f017 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231f01a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1231f01b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f01e jb 0x1231efac */
  if (C.cf) goto L_1231efac;
  /* 1231f020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231f022 jmp dword ptr [edx*4 + 0x1231f098] */
  switch (EDX) {
    case 0: goto L_1231f0a8;
    case 1: goto L_1231f0b0;
    case 2: goto L_1231f0bc;
    case 3: goto L_1231f0d0;
    default: x86_unimpl("switch@0x1231f022 out of table"); return;
  }
  /* 1231f029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231f04c:;
  /* 1231f04c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1231f050 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1231f054:;
  /* 1231f054 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1231f058 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1231f05c:;
  /* 1231f05c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1231f060 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1231f064:;
  /* 1231f064 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1231f068 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1231f06c:;
  /* 1231f06c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1231f070 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1231f074:;
  /* 1231f074 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1231f078 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1231f07c:;
  /* 1231f07c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1231f080 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1231f084 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1231f08b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f08d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1231f08f:;
  /* 1231f08f jmp dword ptr [edx*4 + 0x1231f098] */
  switch (EDX) {
    case 0: goto L_1231f0a8;
    case 1: goto L_1231f0b0;
    case 2: goto L_1231f0bc;
    case 3: goto L_1231f0d0;
    default: x86_unimpl("switch@0x1231f08f out of table"); return;
  }
  /* 1231f096 mov edi, edi */
  EDI = (EDI);
L_1231f0a8:;
  /* 1231f0a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f0ab pop esi */
  ESI = (pop32());
  /* 1231f0ac pop edi */
  EDI = (pop32());
  /* 1231f0ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f0ae ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f0af nop  */
  /* nop */
L_1231f0b0:;
  /* 1231f0b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231f0b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231f0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f0b7 pop esi */
  ESI = (pop32());
  /* 1231f0b8 pop edi */
  EDI = (pop32());
  /* 1231f0b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f0ba ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f0bb nop  */
  /* nop */
L_1231f0bc:;
  /* 1231f0bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231f0be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231f0c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231f0c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231f0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f0c9 pop esi */
  ESI = (pop32());
  /* 1231f0ca pop edi */
  EDI = (pop32());
  /* 1231f0cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f0cc ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f0cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231f0d0:;
  /* 1231f0d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231f0d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231f0d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231f0d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231f0da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231f0dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231f0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f0e3 pop esi */
  ESI = (pop32());
  /* 1231f0e4 pop edi */
  EDI = (pop32());
  /* 1231f0e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f0e6 ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f0e7 nop  */
  /* nop */
L_1231f0e8:;
  /* 1231f0e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1231f0ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1231f0f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1231f0f6 jne 0x1231f11c */
  if (!C.zf) goto L_1231f11c;
  /* 1231f0f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231f0fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1231f0fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f101 jb 0x1231f110 */
  if (C.cf) goto L_1231f110;
  /* 1231f103 std  */
  C.df=1;
  /* 1231f104 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231f106 cld  */
  C.df=0;
  /* 1231f107 jmp dword ptr [edx*4 + 0x1231f230] */
  switch (EDX) {
    case 0: goto L_1231f240;
    case 1: goto L_1231f248;
    case 2: goto L_1231f258;
    case 3: goto L_1231f26c;
    default: x86_unimpl("switch@0x1231f107 out of table"); return;
  }
  /* 1231f10e mov edi, edi */
  EDI = (EDI);
L_1231f110:;
  /* 1231f110 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231f112 jmp dword ptr [ecx*4 + 0x1231f1e0] */
  switch (ECX) {
    case 0: goto L_1231f227;
    default: x86_unimpl("switch@0x1231f112 out of table"); return;
  }
  /* 1231f119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231f11c:;
  /* 1231f11c mov eax, edi */
  EAX = (EDI);
  /* 1231f11e mov edx, 3 */
  EDX = (0x3u);
  /* 1231f123 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f126 jb 0x1231f134 */
  if (C.cf) goto L_1231f134;
  /* 1231f128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1231f12b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f12d jmp dword ptr [eax*4 + 0x1231f138] */
  switch (EAX) {
    case 1: goto L_1231f148;
    case 2: goto L_1231f168;
    case 3: goto L_1231f190;
    default: x86_unimpl("switch@0x1231f12d out of table"); return;
  }
L_1231f134:;
  /* 1231f134 jmp dword ptr [ecx*4 + 0x1231f230] */
  switch (ECX) {
    case 0: goto L_1231f240;
    case 1: goto L_1231f248;
    case 2: goto L_1231f258;
    case 3: goto L_1231f26c;
    default: x86_unimpl("switch@0x1231f134 out of table"); return;
  }
  /* 1231f13b nop  */
  /* nop */
L_1231f148:;
  /* 1231f148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231f14b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231f14d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231f150 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1231f151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231f154 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1231f155 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f158 jb 0x1231f110 */
  if (C.cf) goto L_1231f110;
  /* 1231f15a std  */
  C.df=1;
  /* 1231f15b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231f15d cld  */
  C.df=0;
  /* 1231f15e jmp dword ptr [edx*4 + 0x1231f230] */
  switch (EDX) {
    case 0: goto L_1231f240;
    case 1: goto L_1231f248;
    case 2: goto L_1231f258;
    case 3: goto L_1231f26c;
    default: x86_unimpl("switch@0x1231f15e out of table"); return;
  }
  /* 1231f165 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231f168:;
  /* 1231f168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231f16b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231f16d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231f170 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231f173 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231f176 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231f179 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f17c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f17f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f182 jb 0x1231f110 */
  if (C.cf) goto L_1231f110;
  /* 1231f184 std  */
  C.df=1;
  /* 1231f185 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231f187 cld  */
  C.df=0;
  /* 1231f188 jmp dword ptr [edx*4 + 0x1231f230] */
  switch (EDX) {
    case 0: goto L_1231f240;
    case 1: goto L_1231f248;
    case 2: goto L_1231f258;
    case 3: goto L_1231f26c;
    default: x86_unimpl("switch@0x1231f188 out of table"); return;
  }
  /* 1231f18f nop  */
  /* nop */
L_1231f190:;
  /* 1231f190 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231f193 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231f195 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231f198 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231f19b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231f19e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231f1a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231f1a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231f1a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f1aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f1ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f1b0 jb 0x1231f110 */
  if (C.cf) goto L_1231f110;
  /* 1231f1b6 std  */
  C.df=1;
  /* 1231f1b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231f1b9 cld  */
  C.df=0;
  /* 1231f1ba jmp dword ptr [edx*4 + 0x1231f230] */
  switch (EDX) {
    case 0: goto L_1231f240;
    case 1: goto L_1231f248;
    case 2: goto L_1231f258;
    case 3: goto L_1231f26c;
    default: x86_unimpl("switch@0x1231f1ba out of table"); return;
  }
  /* 1231f1c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1231f1c4 in al, 0xf1 */
  x86_unimpl("in @ 0x1231f1c4");
  /* 1231f1c6 xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1c8 in al, dx */
  x86_unimpl("in @ 0x1231f1c8");
  /* 1231f1c9 int1  */
  x86_unimpl("int1 @ 0x1231f1c9");
  /* 1231f1ca xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1cc hlt  */
  x86_unimpl("hlt @ 0x1231f1cc");
  /* 1231f1cd int1  */
  x86_unimpl("int1 @ 0x1231f1cd");
  /* 1231f1ce xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1d0 cld  */
  C.df=0;
  /* 1231f1d1 int1  */
  x86_unimpl("int1 @ 0x1231f1d1");
  /* 1231f1d2 xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1d4 add al, 0xf2 */
  { uint32_t _a=(AL),_b=(0xf2u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231f1d6 xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1d8 or al, 0xf2 */
  { uint32_t _r=(AL)|(0xf2u); AL = (_r); fl_logic(_r,8); }
  /* 1231f1da xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1dc adc al, 0xf2 */
  { uint32_t _a=(AL),_b=(0xf2u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231f1de xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231f1e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1231f1e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1231f1ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1231f1f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1231f1f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1231f1f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1231f1fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1231f200 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1231f204 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1231f208 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1231f20c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1231f210 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1231f214 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1231f218 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1231f21c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1231f223 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f225 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1231f227:;
  /* 1231f227 jmp dword ptr [edx*4 + 0x1231f230] */
  switch (EDX) {
    case 0: goto L_1231f240;
    case 1: goto L_1231f248;
    case 2: goto L_1231f258;
    case 3: goto L_1231f26c;
    default: x86_unimpl("switch@0x1231f227 out of table"); return;
  }
  /* 1231f22e mov edi, edi */
  EDI = (EDI);
L_1231f240:;
  /* 1231f240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f243 pop esi */
  ESI = (pop32());
  /* 1231f244 pop edi */
  EDI = (pop32());
  /* 1231f245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f246 ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f247 nop  */
  /* nop */
L_1231f248:;
  /* 1231f248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231f24b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231f24e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f251 pop esi */
  ESI = (pop32());
  /* 1231f252 pop edi */
  EDI = (pop32());
  /* 1231f253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f254 ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f255 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231f258:;
  /* 1231f258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231f25b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231f25e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231f261 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231f264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f267 pop esi */
  ESI = (pop32());
  /* 1231f268 pop edi */
  EDI = (pop32());
  /* 1231f269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f26a ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
  /* 1231f26b nop  */
  /* nop */
L_1231f26c:;
  /* 1231f26c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231f26f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231f272 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231f275 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231f278 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231f27b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231f27e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f281 pop esi */
  ESI = (pop32());
  /* 1231f282 pop edi */
  EDI = (pop32());
  /* 1231f283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231f284 ret  */
  ESPCHK(0x1231ef50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f290 @ 0x1231f290 (421 bytes, 148 insns) */
void f_1231f290(void) {
  FTRACE(0x1231f290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f290 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f291 mov ebp, esp */
  EBP = (ESP);
  /* 1231f293 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1231f295 push 0x1233d960 */
  push32((uint32_t)(0x1233d960u));
  /* 1231f29a push 0x12321e80 */
  push32((uint32_t)(0x12321e80u));
  /* 1231f29f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1231f2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1231f2a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1231f2ad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f2b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1231f2b1 push esi */
  push32((uint32_t)(ESI));
  /* 1231f2b2 push edi */
  push32((uint32_t)(EDI));
  /* 1231f2b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1231f2b6 cmp dword ptr [0x12341958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f2bd jne 0x1231f30e */
  if (!C.zf) goto L_1231f30e;
  /* 1231f2bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1231f2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1231f2c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f2c5 push 0x1233d958 */
  push32((uint32_t)(0x1233d958u));
  /* 1231f2ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f2cc call dword ptr [0x123442dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442dc))), 0x1231f2d2u);
  /* 1231f2d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f2d4 je 0x1231f2e2 */
  if (C.zf) goto L_1231f2e2;
  /* 1231f2d6 mov dword ptr [0x12341958], 1 */
  w32((uint32_t)(0x12341958), (0x1u));
  /* 1231f2e0 jmp 0x1231f30e */
  goto L_1231f30e;
L_1231f2e2:;
  /* 1231f2e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1231f2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f2e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f2e8 push 0x1233d954 */
  push32((uint32_t)(0x1233d954u));
  /* 1231f2ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f2ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f2f1 call dword ptr [0x12344290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344290))), 0x1231f2f7u);
  /* 1231f2f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f2f9 je 0x1231f307 */
  if (C.zf) goto L_1231f307;
  /* 1231f2fb mov dword ptr [0x12341958], 2 */
  w32((uint32_t)(0x12341958), (0x2u));
  /* 1231f305 jmp 0x1231f30e */
  goto L_1231f30e;
L_1231f307:;
  /* 1231f307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f309 jmp 0x1231f438 */
  goto L_1231f438;
L_1231f30e:;
  /* 1231f30e cmp dword ptr [0x12341958], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12341958))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f315 jne 0x1231f345 */
  if (!C.zf) goto L_1231f345;
  /* 1231f317 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f31b jne 0x1231f326 */
  if (!C.zf) goto L_1231f326;
  /* 1231f31d mov edx, dword ptr [0x12341940] */
  EDX = (r32((uint32_t)(0x12341940)));
  /* 1231f323 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1231f326:;
  /* 1231f326 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231f329 push eax */
  push32((uint32_t)(EAX));
  /* 1231f32a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f32d push ecx */
  push32((uint32_t)(ECX));
  /* 1231f32e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f331 push edx */
  push32((uint32_t)(EDX));
  /* 1231f332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f335 push eax */
  push32((uint32_t)(EAX));
  /* 1231f336 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1231f339 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f33a call dword ptr [0x12344290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344290))), 0x1231f340u);
  /* 1231f340 jmp 0x1231f438 */
  goto L_1231f438;
L_1231f345:;
  /* 1231f345 cmp dword ptr [0x12341958], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341958))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f34c jne 0x1231f436 */
  if (!C.zf) goto L_1231f436;
  /* 1231f352 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f356 jne 0x1231f361 */
  if (!C.zf) goto L_1231f361;
  /* 1231f358 mov edx, dword ptr [0x12341950] */
  EDX = (r32((uint32_t)(0x12341950)));
  /* 1231f35e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1231f361:;
  /* 1231f361 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f363 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f365 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f368 push eax */
  push32((uint32_t)(EAX));
  /* 1231f369 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f36c push ecx */
  push32((uint32_t)(ECX));
  /* 1231f36d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1231f370 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231f372 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f374 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1231f377 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f37a push edx */
  push32((uint32_t)(EDX));
  /* 1231f37b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231f37e push eax */
  push32((uint32_t)(EAX));
  /* 1231f37f call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x1231f385u);
  /* 1231f385 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1231f388 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f38c jne 0x1231f395 */
  if (!C.zf) goto L_1231f395;
  /* 1231f38e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f390 jmp 0x1231f438 */
  goto L_1231f438;
L_1231f395:;
  /* 1231f395 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231f39c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231f39f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1231f3a1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f3a4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1231f3a6 call 0x123197a0 */
  push32(0x1231f3abu); f_123197a0();
  /* 1231f3ab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1231f3ae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1231f3b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231f3b4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1231f3b7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231f3ba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1231f3bc push edx */
  push32((uint32_t)(EDX));
  /* 1231f3bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f3bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f3c2 push eax */
  push32((uint32_t)(EAX));
  /* 1231f3c3 call 0x1231ad20 */
  push32(0x1231f3c8u); f_1231ad20();
  /* 1231f3c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f3cb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1231f3d2 jmp 0x1231f3eb */
  goto L_1231f3eb;
  /* 1231f3d4 mov eax, 1 */
  EAX = (0x1u);
  /* 1231f3d9 ret  */
  ESPCHK(0x1231f290u, _esp0);
  ESP += 4; return;
  /* 1231f3da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1231f3dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1231f3e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1231f3eb:;
  /* 1231f3eb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f3ef jne 0x1231f3f5 */
  if (!C.zf) goto L_1231f3f5;
  /* 1231f3f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f3f3 jmp 0x1231f438 */
  goto L_1231f438;
L_1231f3f5:;
  /* 1231f3f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231f3f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f3f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f3fc push edx */
  push32((uint32_t)(EDX));
  /* 1231f3fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f400 push eax */
  push32((uint32_t)(EAX));
  /* 1231f401 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f404 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f405 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f407 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231f40a push edx */
  push32((uint32_t)(EDX));
  /* 1231f40b call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x1231f411u);
  /* 1231f411 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231f414 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f418 jne 0x1231f41e */
  if (!C.zf) goto L_1231f41e;
  /* 1231f41a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f41c jmp 0x1231f438 */
  goto L_1231f438;
L_1231f41e:;
  /* 1231f41e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231f421 push eax */
  push32((uint32_t)(EAX));
  /* 1231f422 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231f425 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f426 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f429 push edx */
  push32((uint32_t)(EDX));
  /* 1231f42a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f42d push eax */
  push32((uint32_t)(EAX));
  /* 1231f42e call dword ptr [0x123442dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442dc))), 0x1231f434u);
  /* 1231f434 jmp 0x1231f438 */
  goto L_1231f438;
L_1231f436:;
  /* 1231f436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231f438:;
  /* 1231f438 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1231f43b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231f43e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1231f445 pop edi */
  EDI = (pop32());
  /* 1231f446 pop esi */
  ESI = (pop32());
  /* 1231f447 pop ebx */
  EBX = (pop32());
  /* 1231f448 mov esp, ebp */
  ESP = (EBP);
  /* 1231f44a pop ebp */
  EBP = (pop32());
  /* 1231f44b ret  */
  ESPCHK(0x1231f290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f450 @ 0x1231f450 (727 bytes, 263 insns) */
void f_1231f450(void) {
  FTRACE(0x1231f450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f450 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f451 mov ebp, esp */
  EBP = (ESP);
  /* 1231f453 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1231f455 push 0x1233d970 */
  push32((uint32_t)(0x1233d970u));
  /* 1231f45a push 0x12321e80 */
  push32((uint32_t)(0x12321e80u));
  /* 1231f45f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1231f465 push eax */
  push32((uint32_t)(EAX));
  /* 1231f466 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1231f46d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f470 push ebx */
  push32((uint32_t)(EBX));
  /* 1231f471 push esi */
  push32((uint32_t)(ESI));
  /* 1231f472 push edi */
  push32((uint32_t)(EDI));
  /* 1231f473 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1231f476 cmp dword ptr [0x1234195c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1234195c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f47d jne 0x1231f4d6 */
  if (!C.zf) goto L_1231f4d6;
  /* 1231f47f push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f481 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f483 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f485 push 0x1233d958 */
  push32((uint32_t)(0x1233d958u));
  /* 1231f48a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231f48f push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f491 call dword ptr [0x123442e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e4))), 0x1231f497u);
  /* 1231f497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f499 je 0x1231f4a7 */
  if (C.zf) goto L_1231f4a7;
  /* 1231f49b mov dword ptr [0x1234195c], 1 */
  w32((uint32_t)(0x1234195c), (0x1u));
  /* 1231f4a5 jmp 0x1231f4d6 */
  goto L_1231f4d6;
L_1231f4a7:;
  /* 1231f4a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f4a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f4ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f4ad push 0x1233d954 */
  push32((uint32_t)(0x1233d954u));
  /* 1231f4b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231f4b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f4b9 call dword ptr [0x123442e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e0))), 0x1231f4bfu);
  /* 1231f4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f4c1 je 0x1231f4cf */
  if (C.zf) goto L_1231f4cf;
  /* 1231f4c3 mov dword ptr [0x1234195c], 2 */
  w32((uint32_t)(0x1234195c), (0x2u));
  /* 1231f4cd jmp 0x1231f4d6 */
  goto L_1231f4d6;
L_1231f4cf:;
  /* 1231f4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f4d1 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f4d6:;
  /* 1231f4d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f4da jle 0x1231f4ef */
  if ((C.zf||C.sf!=C.of)) goto L_1231f4ef;
  /* 1231f4dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231f4df push eax */
  push32((uint32_t)(EAX));
  /* 1231f4e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f4e4 call 0x1231f760 */
  push32(0x1231f4e9u); f_1231f760();
  /* 1231f4e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f4ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1231f4ef:;
  /* 1231f4ef cmp dword ptr [0x1234195c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1234195c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f4f6 jne 0x1231f51b */
  if (!C.zf) goto L_1231f51b;
  /* 1231f4f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1231f4fb push edx */
  push32((uint32_t)(EDX));
  /* 1231f4fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231f4ff push eax */
  push32((uint32_t)(EAX));
  /* 1231f500 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231f503 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f504 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f507 push edx */
  push32((uint32_t)(EDX));
  /* 1231f508 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f50b push eax */
  push32((uint32_t)(EAX));
  /* 1231f50c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f50f push ecx */
  push32((uint32_t)(ECX));
  /* 1231f510 call dword ptr [0x123442e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e0))), 0x1231f516u);
  /* 1231f516 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f51b:;
  /* 1231f51b cmp dword ptr [0x1234195c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1234195c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f522 jne 0x1231f73f */
  if (!C.zf) goto L_1231f73f;
  /* 1231f528 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f52c jne 0x1231f537 */
  if (!C.zf) goto L_1231f537;
  /* 1231f52e mov edx, dword ptr [0x12341950] */
  EDX = (r32((uint32_t)(0x12341950)));
  /* 1231f534 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1231f537:;
  /* 1231f537 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f539 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f53b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231f53e push eax */
  push32((uint32_t)(EAX));
  /* 1231f53f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f542 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f543 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1231f546 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231f548 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f54a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1231f54d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f550 push edx */
  push32((uint32_t)(EDX));
  /* 1231f551 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1231f554 push eax */
  push32((uint32_t)(EAX));
  /* 1231f555 call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x1231f55bu);
  /* 1231f55b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1231f55e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f562 jne 0x1231f56b */
  if (!C.zf) goto L_1231f56b;
  /* 1231f564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f566 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f56b:;
  /* 1231f56b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231f572 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231f575 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1231f577 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f57a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1231f57c call 0x123197a0 */
  push32(0x1231f581u); f_123197a0();
  /* 1231f581 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1231f584 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1231f587 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231f58a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1231f58d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1231f594 jmp 0x1231f5ad */
  goto L_1231f5ad;
  /* 1231f596 mov eax, 1 */
  EAX = (0x1u);
  /* 1231f59b ret  */
  ESPCHK(0x1231f450u, _esp0);
  ESP += 4; return;
  /* 1231f59c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1231f59f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1231f5a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1231f5ad:;
  /* 1231f5ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f5b1 jne 0x1231f5ba */
  if (!C.zf) goto L_1231f5ba;
  /* 1231f5b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f5b5 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f5ba:;
  /* 1231f5ba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231f5bd push edx */
  push32((uint32_t)(EDX));
  /* 1231f5be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f5c1 push eax */
  push32((uint32_t)(EAX));
  /* 1231f5c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231f5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f5c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231f5c9 push edx */
  push32((uint32_t)(EDX));
  /* 1231f5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1231f5cc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1231f5cf push eax */
  push32((uint32_t)(EAX));
  /* 1231f5d0 call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x1231f5d6u);
  /* 1231f5d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f5d8 jne 0x1231f5e1 */
  if (!C.zf) goto L_1231f5e1;
  /* 1231f5da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f5dc jmp 0x1231f741 */
  goto L_1231f741;
L_1231f5e1:;
  /* 1231f5e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f5e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f5e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231f5e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f5e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f5ec push edx */
  push32((uint32_t)(EDX));
  /* 1231f5ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f5f0 push eax */
  push32((uint32_t)(EAX));
  /* 1231f5f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f5f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f5f5 call dword ptr [0x123442e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e4))), 0x1231f5fbu);
  /* 1231f5fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231f5fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f602 jne 0x1231f60b */
  if (!C.zf) goto L_1231f60b;
  /* 1231f604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f606 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f60b:;
  /* 1231f60b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f60e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1231f614 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231f616 je 0x1231f65b */
  if (C.zf) goto L_1231f65b;
  /* 1231f618 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f61c je 0x1231f656 */
  if (C.zf) goto L_1231f656;
  /* 1231f61e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231f621 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f624 jle 0x1231f62d */
  if ((C.zf||C.sf!=C.of)) goto L_1231f62d;
  /* 1231f626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f628 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f62d:;
  /* 1231f62d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1231f630 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f631 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231f634 push edx */
  push32((uint32_t)(EDX));
  /* 1231f635 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231f638 push eax */
  push32((uint32_t)(EAX));
  /* 1231f639 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f63c push ecx */
  push32((uint32_t)(ECX));
  /* 1231f63d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f640 push edx */
  push32((uint32_t)(EDX));
  /* 1231f641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f644 push eax */
  push32((uint32_t)(EAX));
  /* 1231f645 call dword ptr [0x123442e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e4))), 0x1231f64bu);
  /* 1231f64b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f64d jne 0x1231f656 */
  if (!C.zf) goto L_1231f656;
  /* 1231f64f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f651 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f656:;
  /* 1231f656 jmp 0x1231f73a */
  goto L_1231f73a;
L_1231f65b:;
  /* 1231f65b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231f65e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1231f661 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1231f668 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231f66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1231f66d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f670 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1231f672 call 0x123197a0 */
  push32(0x1231f677u); f_123197a0();
  /* 1231f677 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1231f67a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1231f67d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231f680 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1231f683 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1231f68a jmp 0x1231f6a3 */
  goto L_1231f6a3;
  /* 1231f68c mov eax, 1 */
  EAX = (0x1u);
  /* 1231f691 ret  */
  ESPCHK(0x1231f450u, _esp0);
  ESP += 4; return;
  /* 1231f692 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1231f695 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1231f69c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1231f6a3:;
  /* 1231f6a3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f6a7 jne 0x1231f6b0 */
  if (!C.zf) goto L_1231f6b0;
  /* 1231f6a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f6ab jmp 0x1231f741 */
  goto L_1231f741;
L_1231f6b0:;
  /* 1231f6b0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231f6b3 push eax */
  push32((uint32_t)(EAX));
  /* 1231f6b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231f6b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f6b8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231f6bb push edx */
  push32((uint32_t)(EDX));
  /* 1231f6bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231f6bf push eax */
  push32((uint32_t)(EAX));
  /* 1231f6c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f6c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f6c7 push edx */
  push32((uint32_t)(EDX));
  /* 1231f6c8 call dword ptr [0x123442e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e4))), 0x1231f6ceu);
  /* 1231f6ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f6d0 jne 0x1231f6d6 */
  if (!C.zf) goto L_1231f6d6;
  /* 1231f6d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f6d4 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f6d6:;
  /* 1231f6d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f6da jne 0x1231f70a */
  if (!C.zf) goto L_1231f70a;
  /* 1231f6dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f6de push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f6e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f6e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f6e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231f6e7 push eax */
  push32((uint32_t)(EAX));
  /* 1231f6e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231f6eb push ecx */
  push32((uint32_t)(ECX));
  /* 1231f6ec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1231f6f1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1231f6f4 push edx */
  push32((uint32_t)(EDX));
  /* 1231f6f5 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x1231f6fbu);
  /* 1231f6fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231f6fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f702 jne 0x1231f708 */
  if (!C.zf) goto L_1231f708;
  /* 1231f704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f706 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f708:;
  /* 1231f708 jmp 0x1231f73a */
  goto L_1231f73a;
L_1231f70a:;
  /* 1231f70a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f70c push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f70e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1231f711 push eax */
  push32((uint32_t)(EAX));
  /* 1231f712 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231f715 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f716 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231f719 push edx */
  push32((uint32_t)(EDX));
  /* 1231f71a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231f71d push eax */
  push32((uint32_t)(EAX));
  /* 1231f71e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1231f723 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1231f726 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f727 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x1231f72du);
  /* 1231f72d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231f730 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f734 jne 0x1231f73a */
  if (!C.zf) goto L_1231f73a;
  /* 1231f736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f738 jmp 0x1231f741 */
  goto L_1231f741;
L_1231f73a:;
  /* 1231f73a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231f73d jmp 0x1231f741 */
  goto L_1231f741;
L_1231f73f:;
  /* 1231f73f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231f741:;
  /* 1231f741 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1231f744 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231f747 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1231f74e pop edi */
  EDI = (pop32());
  /* 1231f74f pop esi */
  ESI = (pop32());
  /* 1231f750 pop ebx */
  EBX = (pop32());
  /* 1231f751 mov esp, ebp */
  ESP = (EBP);
  /* 1231f753 pop ebp */
  EBP = (pop32());
  /* 1231f754 ret  */
  ESPCHK(0x1231f450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x1231f760 (80 bytes, 32 insns) */
void f_1231f760(void) {
  FTRACE(0x1231f760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f760 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f761 mov ebp, esp */
  EBP = (ESP);
  /* 1231f763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f766 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231f769 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231f76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f76f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1231f772:;
  /* 1231f772 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f775 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f778 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f77b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231f77e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231f780 je 0x1231f797 */
  if (C.zf) goto L_1231f797;
  /* 1231f782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f785 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1231f788 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231f78a je 0x1231f797 */
  if (C.zf) goto L_1231f797;
  /* 1231f78c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f78f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f792 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231f795 jmp 0x1231f772 */
  goto L_1231f772;
L_1231f797:;
  /* 1231f797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f79a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1231f79d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231f79f jne 0x1231f7a9 */
  if (!C.zf) goto L_1231f7a9;
  /* 1231f7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f7a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f7a7 jmp 0x1231f7ac */
  goto L_1231f7ac;
L_1231f7a9:;
  /* 1231f7a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1231f7ac:;
  /* 1231f7ac mov esp, ebp */
  ESP = (EBP);
  /* 1231f7ae pop ebp */
  EBP = (pop32());
  /* 1231f7af ret  */
  ESPCHK(0x1231f760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x1231f7b0 (130 bytes, 50 insns) */
void f_1231f7b0(void) {
  FTRACE(0x1231f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1231f7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f7b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1231f7b5 push esi */
  push32((uint32_t)(ESI));
  /* 1231f7b6 push edi */
  push32((uint32_t)(EDI));
  /* 1231f7b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1231f7be:;
  /* 1231f7be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f7c2 jne 0x1231f7e2 */
  if (!C.zf) goto L_1231f7e2;
  /* 1231f7c4 push 0x1233d994 */
  push32((uint32_t)(0x1233d994u));
  /* 1231f7c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f7cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1231f7cd push 0x1233d988 */
  push32((uint32_t)(0x1233d988u));
  /* 1231f7d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231f7d4 call 0x123145a0 */
  push32(0x1231f7d9u); f_123145a0();
  /* 1231f7d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f7dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f7df jne 0x1231f7e2 */
  if (!C.zf) goto L_1231f7e2;
  /* 1231f7e1 int3  */
  x86_unimpl("int3 @ 0x1231f7e1");
L_1231f7e2:;
  /* 1231f7e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231f7e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f7e6 jne 0x1231f7be */
  if (!C.zf) goto L_1231f7be;
  /* 1231f7e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f7eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231f7ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1231f7f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231f7f3 je 0x1231f801 */
  if (C.zf) goto L_1231f801;
  /* 1231f7f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f7f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1231f7ff jmp 0x1231f828 */
  goto L_1231f828;
L_1231f801:;
  /* 1231f801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f804 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f805 call 0x1231a5e0 */
  push32(0x1231f80au); f_1231a5e0();
  /* 1231f80a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f80d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f810 push edx */
  push32((uint32_t)(EDX));
  /* 1231f811 call 0x1231f840 */
  push32(0x1231f816u); f_1231f840();
  /* 1231f816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231f81c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f81f push eax */
  push32((uint32_t)(EAX));
  /* 1231f820 call 0x1231a650 */
  push32(0x1231f825u); f_1231a650();
  /* 1231f825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231f828:;
  /* 1231f828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f82b pop edi */
  EDI = (pop32());
  /* 1231f82c pop esi */
  ESI = (pop32());
  /* 1231f82d pop ebx */
  EBX = (pop32());
  /* 1231f82e mov esp, ebp */
  ESP = (EBP);
  /* 1231f830 pop ebp */
  EBP = (pop32());
  /* 1231f831 ret  */
  ESPCHK(0x1231f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f840 @ 0x1231f840 (190 bytes, 67 insns) */
void f_1231f840(void) {
  FTRACE(0x1231f840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f840 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f841 mov ebp, esp */
  EBP = (ESP);
  /* 1231f843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231f846 push ebx */
  push32((uint32_t)(EBX));
  /* 1231f847 push esi */
  push32((uint32_t)(ESI));
  /* 1231f848 push edi */
  push32((uint32_t)(EDI));
  /* 1231f849 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1231f850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f853 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1231f856:;
  /* 1231f856 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f85a jne 0x1231f87a */
  if (!C.zf) goto L_1231f87a;
  /* 1231f85c push 0x1233cdb0 */
  push32((uint32_t)(0x1233cdb0u));
  /* 1231f861 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231f863 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1231f865 push 0x1233d988 */
  push32((uint32_t)(0x1233d988u));
  /* 1231f86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1231f86c call 0x123145a0 */
  push32(0x1231f871u); f_123145a0();
  /* 1231f871 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f874 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f877 jne 0x1231f87a */
  if (!C.zf) goto L_1231f87a;
  /* 1231f879 int3  */
  x86_unimpl("int3 @ 0x1231f879");
L_1231f87a:;
  /* 1231f87a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231f87c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231f87e jne 0x1231f856 */
  if (!C.zf) goto L_1231f856;
  /* 1231f880 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f883 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1231f886 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1231f88b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f88d je 0x1231f8ea */
  if (C.zf) goto L_1231f8ea;
  /* 1231f88f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f892 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f893 call 0x1231e2e0 */
  push32(0x1231f898u); f_1231e2e0();
  /* 1231f898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f89b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231f89e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f8a1 push edx */
  push32((uint32_t)(EDX));
  /* 1231f8a2 call 0x12322090 */
  push32(0x1231f8a7u); f_12322090();
  /* 1231f8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f8aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f8ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231f8b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f8b1 call 0x12321f60 */
  push32(0x1231f8b6u); f_12321f60();
  /* 1231f8b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f8bb jge 0x1231f8c6 */
  if ((C.sf==C.of)) goto L_1231f8c6;
  /* 1231f8bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1231f8c4 jmp 0x1231f8ea */
  goto L_1231f8ea;
L_1231f8c6:;
  /* 1231f8c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f8c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f8cd je 0x1231f8ea */
  if (C.zf) goto L_1231f8ea;
  /* 1231f8cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1231f8d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f8d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1231f8d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f8d8 call 0x12317090 */
  push32(0x1231f8ddu); f_12317090();
  /* 1231f8dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f8e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f8e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1231f8ea:;
  /* 1231f8ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231f8ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1231f8f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f8f7 pop edi */
  EDI = (pop32());
  /* 1231f8f8 pop esi */
  ESI = (pop32());
  /* 1231f8f9 pop ebx */
  EBX = (pop32());
  /* 1231f8fa mov esp, ebp */
  ESP = (EBP);
  /* 1231f8fc pop ebp */
  EBP = (pop32());
  /* 1231f8fd ret  */
  ESPCHK(0x1231f840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x1231f900 (210 bytes, 63 insns) */
void f_1231f900(void) {
  FTRACE(0x1231f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f901 mov ebp, esp */
  EBP = (ESP);
  /* 1231f903 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f907 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f90d jae 0x1231f931 */
  if (!C.cf) goto L_1231f931;
  /* 1231f90f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f912 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231f915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f918 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231f91b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231f91e mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231f925 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1231f92a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231f92d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231f92f jne 0x1231f944 */
  if (!C.zf) goto L_1231f944;
L_1231f931:;
  /* 1231f931 call 0x1231db70 */
  push32(0x1231f936u); f_1231db70();
  /* 1231f936 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231f93c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231f93f jmp 0x1231f9ce */
  goto L_1231f9ce;
L_1231f944:;
  /* 1231f944 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f947 push edx */
  push32((uint32_t)(EDX));
  /* 1231f948 call 0x1231e0a0 */
  push32(0x1231f94du); f_1231e0a0();
  /* 1231f94d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f953 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231f956 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f959 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231f95c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231f95f mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231f966 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1231f96b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1231f96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f970 je 0x1231f9ad */
  if (C.zf) goto L_1231f9ad;
  /* 1231f972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f975 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f976 call 0x1231df20 */
  push32(0x1231f97bu); f_1231df20();
  /* 1231f97b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f97e push eax */
  push32((uint32_t)(EAX));
  /* 1231f97f call dword ptr [0x123442e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442e8))), 0x1231f985u);
  /* 1231f985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231f987 jne 0x1231f994 */
  if (!C.zf) goto L_1231f994;
  /* 1231f989 call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x1231f98fu);
  /* 1231f98f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231f992 jmp 0x1231f99b */
  goto L_1231f99b;
L_1231f994:;
  /* 1231f994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1231f99b:;
  /* 1231f99b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f99f jne 0x1231f9a3 */
  if (!C.zf) goto L_1231f9a3;
  /* 1231f9a1 jmp 0x1231f9bf */
  goto L_1231f9bf;
L_1231f9a3:;
  /* 1231f9a3 call 0x1231db80 */
  push32(0x1231f9a8u); f_1231db80();
  /* 1231f9a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231f9ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1231f9ad:;
  /* 1231f9ad call 0x1231db70 */
  push32(0x1231f9b2u); f_1231db70();
  /* 1231f9b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231f9b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1231f9bf:;
  /* 1231f9bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231f9c2 push eax */
  push32((uint32_t)(EAX));
  /* 1231f9c3 call 0x1231e130 */
  push32(0x1231f9c8u); f_1231e130();
  /* 1231f9c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231f9cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1231f9ce:;
  /* 1231f9ce mov esp, ebp */
  ESP = (EBP);
  /* 1231f9d0 pop ebp */
  EBP = (pop32());
  /* 1231f9d1 ret  */
  ESPCHK(0x1231f900u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1231f9e0 (219 bytes, 64 insns) */
void f_1231f9e0(void) {
  FTRACE(0x1231f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1231f9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231f9e4 cmp dword ptr [0x1234194c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1234194c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231f9eb je 0x1231fa81 */
  if (C.zf) goto L_1231fa81;
  /* 1231f9f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1231f9f3 push 0x1233d9a4 */
  push32((uint32_t)(0x1233d9a4u));
  /* 1231f9f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231f9fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1231f9ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fa01 call 0x12316a10 */
  push32(0x1231fa06u); f_12316a10();
  /* 1231fa06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231fa0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231fa10 jne 0x1231fa1c */
  if (!C.zf) goto L_1231fa1c;
  /* 1231fa12 mov eax, 1 */
  EAX = (0x1u);
  /* 1231fa17 jmp 0x1231fab7 */
  goto L_1231fab7;
L_1231fa1c:;
  /* 1231fa1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fa1f push eax */
  push32((uint32_t)(EAX));
  /* 1231fa20 call 0x1231fac0 */
  push32(0x1231fa25u); f_1231fac0();
  /* 1231fa25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231fa2a je 0x1231fa4d */
  if (C.zf) goto L_1231fa4d;
  /* 1231fa2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fa2f push ecx */
  push32((uint32_t)(ECX));
  /* 1231fa30 call 0x12320050 */
  push32(0x1231fa35u); f_12320050();
  /* 1231fa35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa38 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231fa3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fa3d push edx */
  push32((uint32_t)(EDX));
  /* 1231fa3e call 0x12317090 */
  push32(0x1231fa43u); f_12317090();
  /* 1231fa43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa46 mov eax, 1 */
  EAX = (0x1u);
  /* 1231fa4b jmp 0x1231fab7 */
  goto L_1231fab7;
L_1231fa4d:;
  /* 1231fa4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fa50 mov dword ptr [0x12340ca8], eax */
  w32((uint32_t)(0x12340ca8), (EAX));
  /* 1231fa55 mov ecx, dword ptr [0x12341960] */
  ECX = (r32((uint32_t)(0x12341960)));
  /* 1231fa5b push ecx */
  push32((uint32_t)(ECX));
  /* 1231fa5c call 0x12320050 */
  push32(0x1231fa61u); f_12320050();
  /* 1231fa61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231fa66 mov edx, dword ptr [0x12341960] */
  EDX = (r32((uint32_t)(0x12341960)));
  /* 1231fa6c push edx */
  push32((uint32_t)(EDX));
  /* 1231fa6d call 0x12317090 */
  push32(0x1231fa72u); f_12317090();
  /* 1231fa72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fa78 mov dword ptr [0x12341960], eax */
  w32((uint32_t)(0x12341960), (EAX));
  /* 1231fa7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231fa7f jmp 0x1231fab7 */
  goto L_1231fab7;
L_1231fa81:;
  /* 1231fa81 mov dword ptr [0x12340ca8], 0x12340cb0 */
  w32((uint32_t)(0x12340ca8), (0x12340cb0u));
  /* 1231fa8b mov ecx, dword ptr [0x12341960] */
  ECX = (r32((uint32_t)(0x12341960)));
  /* 1231fa91 push ecx */
  push32((uint32_t)(ECX));
  /* 1231fa92 call 0x12320050 */
  push32(0x1231fa97u); f_12320050();
  /* 1231fa97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fa9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1231fa9c mov edx, dword ptr [0x12341960] */
  EDX = (r32((uint32_t)(0x12341960)));
  /* 1231faa2 push edx */
  push32((uint32_t)(EDX));
  /* 1231faa3 call 0x12317090 */
  push32(0x1231faa8u); f_12317090();
  /* 1231faa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231faab mov dword ptr [0x12341960], 0 */
  w32((uint32_t)(0x12341960), (0x0u));
  /* 1231fab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231fab7:;
  /* 1231fab7 mov esp, ebp */
  ESP = (EBP);
  /* 1231fab9 pop ebp */
  EBP = (pop32());
  /* 1231faba ret  */
  ESPCHK(0x1231f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fac0 @ 0x1231fac0 (1423 bytes, 533 insns) */
void f_1231fac0(void) {
  FTRACE(0x1231fac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231fac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231fac1 mov ebp, esp */
  EBP = (ESP);
  /* 1231fac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231fac6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231facd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231facf mov ax, word ptr [0x1234199a] */
  AX = (r16((uint32_t)(0x1234199a)));
  /* 1231fad5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231fad8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fada mov cx, word ptr [0x1234199c] */
  CX = (r16((uint32_t)(0x1234199c)));
  /* 1231fae1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231fae4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231fae8 jne 0x1231faf2 */
  if (!C.zf) goto L_1231faf2;
  /* 1231faea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231faed jmp 0x1232004b */
  goto L_1232004b;
L_1231faf2:;
  /* 1231faf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231faf5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231faf8 push edx */
  push32((uint32_t)(EDX));
  /* 1231faf9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1231fafb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fafe push eax */
  push32((uint32_t)(EAX));
  /* 1231faff push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fb01 call 0x123235a0 */
  push32(0x1231fb06u); f_123235a0();
  /* 1231fb06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fb0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fb0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fb11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fb14 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb17 push edx */
  push32((uint32_t)(EDX));
  /* 1231fb18 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1231fb1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fb1d push eax */
  push32((uint32_t)(EAX));
  /* 1231fb1e push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fb20 call 0x123235a0 */
  push32(0x1231fb25u); f_123235a0();
  /* 1231fb25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fb2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fb2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fb30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fb33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb36 push edx */
  push32((uint32_t)(EDX));
  /* 1231fb37 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1231fb39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fb3c push eax */
  push32((uint32_t)(EAX));
  /* 1231fb3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fb3f call 0x123235a0 */
  push32(0x1231fb44u); f_123235a0();
  /* 1231fb44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fb4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fb4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fb4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fb52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb55 push edx */
  push32((uint32_t)(EDX));
  /* 1231fb56 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1231fb58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fb5b push eax */
  push32((uint32_t)(EAX));
  /* 1231fb5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fb5e call 0x123235a0 */
  push32(0x1231fb63u); f_123235a0();
  /* 1231fb63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fb69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fb6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fb6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fb71 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb74 push edx */
  push32((uint32_t)(EDX));
  /* 1231fb75 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1231fb77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fb7a push eax */
  push32((uint32_t)(EAX));
  /* 1231fb7b push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fb7d call 0x123235a0 */
  push32(0x1231fb82u); f_123235a0();
  /* 1231fb82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fb88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fb8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fb8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fb90 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fb93 push edx */
  push32((uint32_t)(EDX));
  /* 1231fb94 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1231fb96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fb99 push eax */
  push32((uint32_t)(EAX));
  /* 1231fb9a push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fb9c call 0x123235a0 */
  push32(0x1231fba1u); f_123235a0();
  /* 1231fba1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fba4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fba7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fba9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fbac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fbaf push edx */
  push32((uint32_t)(EDX));
  /* 1231fbb0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1231fbb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fbb5 push eax */
  push32((uint32_t)(EAX));
  /* 1231fbb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fbb8 call 0x123235a0 */
  push32(0x1231fbbdu); f_123235a0();
  /* 1231fbbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fbc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fbc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fbc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fbc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fbcb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fbce push edx */
  push32((uint32_t)(EDX));
  /* 1231fbcf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1231fbd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fbd4 push eax */
  push32((uint32_t)(EAX));
  /* 1231fbd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fbd7 call 0x123235a0 */
  push32(0x1231fbdcu); f_123235a0();
  /* 1231fbdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fbdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fbe2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fbe4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fbea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fbed push edx */
  push32((uint32_t)(EDX));
  /* 1231fbee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1231fbf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fbf3 push eax */
  push32((uint32_t)(EAX));
  /* 1231fbf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fbf6 call 0x123235a0 */
  push32(0x1231fbfbu); f_123235a0();
  /* 1231fbfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fbfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fc01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fc03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fc06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fc09 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc0c push edx */
  push32((uint32_t)(EDX));
  /* 1231fc0d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1231fc0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fc12 push eax */
  push32((uint32_t)(EAX));
  /* 1231fc13 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fc15 call 0x123235a0 */
  push32(0x1231fc1au); f_123235a0();
  /* 1231fc1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fc20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fc22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fc25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fc28 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc2b push edx */
  push32((uint32_t)(EDX));
  /* 1231fc2c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1231fc2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fc31 push eax */
  push32((uint32_t)(EAX));
  /* 1231fc32 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fc34 call 0x123235a0 */
  push32(0x1231fc39u); f_123235a0();
  /* 1231fc39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fc3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fc41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fc47 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc4a push edx */
  push32((uint32_t)(EDX));
  /* 1231fc4b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1231fc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fc50 push eax */
  push32((uint32_t)(EAX));
  /* 1231fc51 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fc53 call 0x123235a0 */
  push32(0x1231fc58u); f_123235a0();
  /* 1231fc58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fc5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fc60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fc63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fc66 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc69 push edx */
  push32((uint32_t)(EDX));
  /* 1231fc6a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1231fc6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fc6f push eax */
  push32((uint32_t)(EAX));
  /* 1231fc70 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fc72 call 0x123235a0 */
  push32(0x1231fc77u); f_123235a0();
  /* 1231fc77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fc7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fc7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fc82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fc85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc88 push edx */
  push32((uint32_t)(EDX));
  /* 1231fc89 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1231fc8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fc8e push eax */
  push32((uint32_t)(EAX));
  /* 1231fc8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fc91 call 0x123235a0 */
  push32(0x1231fc96u); f_123235a0();
  /* 1231fc96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fc99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fc9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fc9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fca4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fca7 push edx */
  push32((uint32_t)(EDX));
  /* 1231fca8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1231fcaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fcad push eax */
  push32((uint32_t)(EAX));
  /* 1231fcae push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fcb0 call 0x123235a0 */
  push32(0x1231fcb5u); f_123235a0();
  /* 1231fcb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fcb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fcbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fcbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fcc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fcc3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fcc6 push edx */
  push32((uint32_t)(EDX));
  /* 1231fcc7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1231fcc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fccc push eax */
  push32((uint32_t)(EAX));
  /* 1231fccd push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fccf call 0x123235a0 */
  push32(0x1231fcd4u); f_123235a0();
  /* 1231fcd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fcd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fcda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fcdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fcdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fce2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fce5 push edx */
  push32((uint32_t)(EDX));
  /* 1231fce6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1231fce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fceb push eax */
  push32((uint32_t)(EAX));
  /* 1231fcec push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fcee call 0x123235a0 */
  push32(0x1231fcf3u); f_123235a0();
  /* 1231fcf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fcf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fcf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fcfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fcfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fd01 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd04 push edx */
  push32((uint32_t)(EDX));
  /* 1231fd05 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1231fd07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fd0a push eax */
  push32((uint32_t)(EAX));
  /* 1231fd0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fd0d call 0x123235a0 */
  push32(0x1231fd12u); f_123235a0();
  /* 1231fd12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fd18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fd1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fd1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fd20 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd23 push edx */
  push32((uint32_t)(EDX));
  /* 1231fd24 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1231fd26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fd29 push eax */
  push32((uint32_t)(EAX));
  /* 1231fd2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fd2c call 0x123235a0 */
  push32(0x1231fd31u); f_123235a0();
  /* 1231fd31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fd37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fd39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fd3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fd3f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd42 push edx */
  push32((uint32_t)(EDX));
  /* 1231fd43 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1231fd45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fd48 push eax */
  push32((uint32_t)(EAX));
  /* 1231fd49 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fd4b call 0x123235a0 */
  push32(0x1231fd50u); f_123235a0();
  /* 1231fd50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fd56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fd58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fd5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fd5e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd61 push edx */
  push32((uint32_t)(EDX));
  /* 1231fd62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1231fd64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fd67 push eax */
  push32((uint32_t)(EAX));
  /* 1231fd68 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fd6a call 0x123235a0 */
  push32(0x1231fd6fu); f_123235a0();
  /* 1231fd6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fd75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fd77 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fd7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fd7d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd80 push edx */
  push32((uint32_t)(EDX));
  /* 1231fd81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1231fd83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fd86 push eax */
  push32((uint32_t)(EAX));
  /* 1231fd87 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fd89 call 0x123235a0 */
  push32(0x1231fd8eu); f_123235a0();
  /* 1231fd8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fd94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fd96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fd99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fd9c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fd9f push edx */
  push32((uint32_t)(EDX));
  /* 1231fda0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1231fda2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fda5 push eax */
  push32((uint32_t)(EAX));
  /* 1231fda6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fda8 call 0x123235a0 */
  push32(0x1231fdadu); f_123235a0();
  /* 1231fdad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fdb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fdb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fdb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fdb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fdbb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fdbe push edx */
  push32((uint32_t)(EDX));
  /* 1231fdbf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1231fdc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fdc4 push eax */
  push32((uint32_t)(EAX));
  /* 1231fdc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fdc7 call 0x123235a0 */
  push32(0x1231fdccu); f_123235a0();
  /* 1231fdcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fdcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fdd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fdd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fdd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fdda add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fddd push edx */
  push32((uint32_t)(EDX));
  /* 1231fdde push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1231fde0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fde3 push eax */
  push32((uint32_t)(EAX));
  /* 1231fde4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fde6 call 0x123235a0 */
  push32(0x1231fdebu); f_123235a0();
  /* 1231fdeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fdee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fdf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fdf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fdf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fdf9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fdfc push edx */
  push32((uint32_t)(EDX));
  /* 1231fdfd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1231fdff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fe02 push eax */
  push32((uint32_t)(EAX));
  /* 1231fe03 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fe05 call 0x123235a0 */
  push32(0x1231fe0au); f_123235a0();
  /* 1231fe0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fe10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fe12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fe15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fe18 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe1b push edx */
  push32((uint32_t)(EDX));
  /* 1231fe1c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1231fe1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fe21 push eax */
  push32((uint32_t)(EAX));
  /* 1231fe22 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fe24 call 0x123235a0 */
  push32(0x1231fe29u); f_123235a0();
  /* 1231fe29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fe2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fe31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fe34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fe37 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe3a push edx */
  push32((uint32_t)(EDX));
  /* 1231fe3b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1231fe3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fe40 push eax */
  push32((uint32_t)(EAX));
  /* 1231fe41 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fe43 call 0x123235a0 */
  push32(0x1231fe48u); f_123235a0();
  /* 1231fe48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fe4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fe50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fe53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fe56 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe59 push edx */
  push32((uint32_t)(EDX));
  /* 1231fe5a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1231fe5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fe5f push eax */
  push32((uint32_t)(EAX));
  /* 1231fe60 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fe62 call 0x123235a0 */
  push32(0x1231fe67u); f_123235a0();
  /* 1231fe67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fe6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fe6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fe72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fe75 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe78 push edx */
  push32((uint32_t)(EDX));
  /* 1231fe79 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1231fe7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fe7e push eax */
  push32((uint32_t)(EAX));
  /* 1231fe7f push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fe81 call 0x123235a0 */
  push32(0x1231fe86u); f_123235a0();
  /* 1231fe86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fe8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fe8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fe91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fe94 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fe97 push edx */
  push32((uint32_t)(EDX));
  /* 1231fe98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1231fe9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fe9d push eax */
  push32((uint32_t)(EAX));
  /* 1231fe9e push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fea0 call 0x123235a0 */
  push32(0x1231fea5u); f_123235a0();
  /* 1231fea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fea8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231feab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fead mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231feb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231feb3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231feb6 push edx */
  push32((uint32_t)(EDX));
  /* 1231feb7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1231feb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231febc push eax */
  push32((uint32_t)(EAX));
  /* 1231febd push 1 */
  push32((uint32_t)(0x1u));
  /* 1231febf call 0x123235a0 */
  push32(0x1231fec4u); f_123235a0();
  /* 1231fec4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fec7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231feca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fecc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fed2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fed8 push edx */
  push32((uint32_t)(EDX));
  /* 1231fed9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1231fedb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231fede push eax */
  push32((uint32_t)(EAX));
  /* 1231fedf push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fee1 call 0x123235a0 */
  push32(0x1231fee6u); f_123235a0();
  /* 1231fee6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fee9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231feec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231feee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231fef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231fef4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fefa push edx */
  push32((uint32_t)(EDX));
  /* 1231fefb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1231fefd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ff00 push eax */
  push32((uint32_t)(EAX));
  /* 1231ff01 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ff03 call 0x123235a0 */
  push32(0x1231ff08u); f_123235a0();
  /* 1231ff08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ff0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ff10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ff13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ff16 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff1c push edx */
  push32((uint32_t)(EDX));
  /* 1231ff1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1231ff1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ff22 push eax */
  push32((uint32_t)(EAX));
  /* 1231ff23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ff25 call 0x123235a0 */
  push32(0x1231ff2au); f_123235a0();
  /* 1231ff2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ff30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ff32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ff35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ff38 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff3e push edx */
  push32((uint32_t)(EDX));
  /* 1231ff3f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1231ff41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ff44 push eax */
  push32((uint32_t)(EAX));
  /* 1231ff45 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ff47 call 0x123235a0 */
  push32(0x1231ff4cu); f_123235a0();
  /* 1231ff4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ff52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ff54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ff57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ff5a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff60 push edx */
  push32((uint32_t)(EDX));
  /* 1231ff61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1231ff63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ff66 push eax */
  push32((uint32_t)(EAX));
  /* 1231ff67 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ff69 call 0x123235a0 */
  push32(0x1231ff6eu); f_123235a0();
  /* 1231ff6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ff74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ff76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ff79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ff7c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff82 push edx */
  push32((uint32_t)(EDX));
  /* 1231ff83 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1231ff85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ff88 push eax */
  push32((uint32_t)(EAX));
  /* 1231ff89 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ff8b call 0x123235a0 */
  push32(0x1231ff90u); f_123235a0();
  /* 1231ff90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ff93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ff96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ff98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ff9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ff9e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ffa4 push edx */
  push32((uint32_t)(EDX));
  /* 1231ffa5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1231ffa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ffaa push eax */
  push32((uint32_t)(EAX));
  /* 1231ffab push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ffad call 0x123235a0 */
  push32(0x1231ffb2u); f_123235a0();
  /* 1231ffb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ffb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ffb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ffba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ffbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ffc0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ffc6 push edx */
  push32((uint32_t)(EDX));
  /* 1231ffc7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1231ffc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ffcc push eax */
  push32((uint32_t)(EAX));
  /* 1231ffcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1231ffcf call 0x123235a0 */
  push32(0x1231ffd4u); f_123235a0();
  /* 1231ffd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ffd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ffda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ffdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ffdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ffe2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ffe8 push edx */
  push32((uint32_t)(EDX));
  /* 1231ffe9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1231ffeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ffee push eax */
  push32((uint32_t)(EAX));
  /* 1231ffef push 1 */
  push32((uint32_t)(0x1u));
  /* 1231fff1 call 0x123235a0 */
  push32(0x1231fff6u); f_123235a0();
  /* 1231fff6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231fff9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231fffc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231fffe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12320001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320004 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232000a push edx */
  push32((uint32_t)(EDX));
  /* 1232000b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1232000d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320010 push eax */
  push32((uint32_t)(EAX));
  /* 12320011 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320013 call 0x123235a0 */
  push32(0x12320018u); f_123235a0();
  /* 12320018 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232001b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232001e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320020 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12320023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320026 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232002c push edx */
  push32((uint32_t)(EDX));
  /* 1232002d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12320032 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320035 push eax */
  push32((uint32_t)(EAX));
  /* 12320036 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320038 call 0x123235a0 */
  push32(0x1232003du); f_123235a0();
  /* 1232003d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12320043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320045 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12320048 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1232004b:;
  /* 1232004b mov esp, ebp */
  ESP = (EBP);
  /* 1232004d pop ebp */
  EBP = (pop32());
  /* 1232004e ret  */
  ESPCHK(0x1231fac0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12320050 (779 bytes, 265 insns) */
void f_12320050(void) {
  FTRACE(0x12320050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320050 push ebp */
  push32((uint32_t)(EBP));
  /* 12320051 mov ebp, esp */
  EBP = (ESP);
  /* 12320053 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320057 jne 0x1232005e */
  if (!C.zf) goto L_1232005e;
  /* 12320059 jmp 0x12320359 */
  goto L_12320359;
L_1232005e:;
  /* 1232005e push 2 */
  push32((uint32_t)(0x2u));
  /* 12320060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320063 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12320066 push ecx */
  push32((uint32_t)(ECX));
  /* 12320067 call 0x12317090 */
  push32(0x1232006cu); f_12317090();
  /* 1232006c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232006f push 2 */
  push32((uint32_t)(0x2u));
  /* 12320071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320074 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12320077 push eax */
  push32((uint32_t)(EAX));
  /* 12320078 call 0x12317090 */
  push32(0x1232007du); f_12317090();
  /* 1232007d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320080 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320085 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12320088 push edx */
  push32((uint32_t)(EDX));
  /* 12320089 call 0x12317090 */
  push32(0x1232008eu); f_12317090();
  /* 1232008e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320091 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320096 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12320099 push ecx */
  push32((uint32_t)(ECX));
  /* 1232009a call 0x12317090 */
  push32(0x1232009fu); f_12317090();
  /* 1232009f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123200a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123200a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123200a7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123200aa push eax */
  push32((uint32_t)(EAX));
  /* 123200ab call 0x12317090 */
  push32(0x123200b0u); f_12317090();
  /* 123200b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123200b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123200b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123200b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123200bb push edx */
  push32((uint32_t)(EDX));
  /* 123200bc call 0x12317090 */
  push32(0x123200c1u); f_12317090();
  /* 123200c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123200c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123200c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123200c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123200cb push ecx */
  push32((uint32_t)(ECX));
  /* 123200cc call 0x12317090 */
  push32(0x123200d1u); f_12317090();
  /* 123200d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123200d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123200d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123200d9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 123200dc push eax */
  push32((uint32_t)(EAX));
  /* 123200dd call 0x12317090 */
  push32(0x123200e2u); f_12317090();
  /* 123200e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123200e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123200e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123200ea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 123200ed push edx */
  push32((uint32_t)(EDX));
  /* 123200ee call 0x12317090 */
  push32(0x123200f3u); f_12317090();
  /* 123200f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123200f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123200f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123200fb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 123200fe push ecx */
  push32((uint32_t)(ECX));
  /* 123200ff call 0x12317090 */
  push32(0x12320104u); f_12317090();
  /* 12320104 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320107 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232010c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1232010f push eax */
  push32((uint32_t)(EAX));
  /* 12320110 call 0x12317090 */
  push32(0x12320115u); f_12317090();
  /* 12320115 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320118 push 2 */
  push32((uint32_t)(0x2u));
  /* 1232011a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232011d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12320120 push edx */
  push32((uint32_t)(EDX));
  /* 12320121 call 0x12317090 */
  push32(0x12320126u); f_12317090();
  /* 12320126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320129 push 2 */
  push32((uint32_t)(0x2u));
  /* 1232012b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232012e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12320131 push ecx */
  push32((uint32_t)(ECX));
  /* 12320132 call 0x12317090 */
  push32(0x12320137u); f_12317090();
  /* 12320137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232013a push 2 */
  push32((uint32_t)(0x2u));
  /* 1232013c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232013f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12320142 push eax */
  push32((uint32_t)(EAX));
  /* 12320143 call 0x12317090 */
  push32(0x12320148u); f_12317090();
  /* 12320148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232014b push 2 */
  push32((uint32_t)(0x2u));
  /* 1232014d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320150 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12320153 push edx */
  push32((uint32_t)(EDX));
  /* 12320154 call 0x12317090 */
  push32(0x12320159u); f_12317090();
  /* 12320159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232015c push 2 */
  push32((uint32_t)(0x2u));
  /* 1232015e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320161 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12320164 push ecx */
  push32((uint32_t)(ECX));
  /* 12320165 call 0x12317090 */
  push32(0x1232016au); f_12317090();
  /* 1232016a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232016d push 2 */
  push32((uint32_t)(0x2u));
  /* 1232016f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320172 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12320175 push eax */
  push32((uint32_t)(EAX));
  /* 12320176 call 0x12317090 */
  push32(0x1232017bu); f_12317090();
  /* 1232017b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232017e push 2 */
  push32((uint32_t)(0x2u));
  /* 12320180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320183 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12320186 push edx */
  push32((uint32_t)(EDX));
  /* 12320187 call 0x12317090 */
  push32(0x1232018cu); f_12317090();
  /* 1232018c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232018f push 2 */
  push32((uint32_t)(0x2u));
  /* 12320191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320194 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12320197 push ecx */
  push32((uint32_t)(ECX));
  /* 12320198 call 0x12317090 */
  push32(0x1232019du); f_12317090();
  /* 1232019d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123201a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123201a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123201a5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 123201a8 push eax */
  push32((uint32_t)(EAX));
  /* 123201a9 call 0x12317090 */
  push32(0x123201aeu); f_12317090();
  /* 123201ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123201b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 123201b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123201b6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123201b9 push edx */
  push32((uint32_t)(EDX));
  /* 123201ba call 0x12317090 */
  push32(0x123201bfu); f_12317090();
  /* 123201bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123201c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123201c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123201c7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 123201ca push ecx */
  push32((uint32_t)(ECX));
  /* 123201cb call 0x12317090 */
  push32(0x123201d0u); f_12317090();
  /* 123201d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123201d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123201d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123201d8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 123201db push eax */
  push32((uint32_t)(EAX));
  /* 123201dc call 0x12317090 */
  push32(0x123201e1u); f_12317090();
  /* 123201e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123201e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123201e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123201e9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 123201ec push edx */
  push32((uint32_t)(EDX));
  /* 123201ed call 0x12317090 */
  push32(0x123201f2u); f_12317090();
  /* 123201f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123201f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123201f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123201fa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 123201fd push ecx */
  push32((uint32_t)(ECX));
  /* 123201fe call 0x12317090 */
  push32(0x12320203u); f_12317090();
  /* 12320203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320206 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232020b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1232020e push eax */
  push32((uint32_t)(EAX));
  /* 1232020f call 0x12317090 */
  push32(0x12320214u); f_12317090();
  /* 12320214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320217 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232021c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1232021f push edx */
  push32((uint32_t)(EDX));
  /* 12320220 call 0x12317090 */
  push32(0x12320225u); f_12317090();
  /* 12320225 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320228 push 2 */
  push32((uint32_t)(0x2u));
  /* 1232022a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232022d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12320230 push ecx */
  push32((uint32_t)(ECX));
  /* 12320231 call 0x12317090 */
  push32(0x12320236u); f_12317090();
  /* 12320236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320239 push 2 */
  push32((uint32_t)(0x2u));
  /* 1232023b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232023e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12320241 push eax */
  push32((uint32_t)(EAX));
  /* 12320242 call 0x12317090 */
  push32(0x12320247u); f_12317090();
  /* 12320247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232024a push 2 */
  push32((uint32_t)(0x2u));
  /* 1232024c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232024f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12320252 push edx */
  push32((uint32_t)(EDX));
  /* 12320253 call 0x12317090 */
  push32(0x12320258u); f_12317090();
  /* 12320258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232025b push 2 */
  push32((uint32_t)(0x2u));
  /* 1232025d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320260 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12320263 push ecx */
  push32((uint32_t)(ECX));
  /* 12320264 call 0x12317090 */
  push32(0x12320269u); f_12317090();
  /* 12320269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232026c push 2 */
  push32((uint32_t)(0x2u));
  /* 1232026e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320271 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12320274 push eax */
  push32((uint32_t)(EAX));
  /* 12320275 call 0x12317090 */
  push32(0x1232027au); f_12317090();
  /* 1232027a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232027d push 2 */
  push32((uint32_t)(0x2u));
  /* 1232027f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320282 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12320288 push edx */
  push32((uint32_t)(EDX));
  /* 12320289 call 0x12317090 */
  push32(0x1232028eu); f_12317090();
  /* 1232028e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320291 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320296 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1232029c push ecx */
  push32((uint32_t)(ECX));
  /* 1232029d call 0x12317090 */
  push32(0x123202a2u); f_12317090();
  /* 123202a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123202a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123202a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123202aa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 123202b0 push eax */
  push32((uint32_t)(EAX));
  /* 123202b1 call 0x12317090 */
  push32(0x123202b6u); f_12317090();
  /* 123202b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123202b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 123202bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123202be mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 123202c4 push edx */
  push32((uint32_t)(EDX));
  /* 123202c5 call 0x12317090 */
  push32(0x123202cau); f_12317090();
  /* 123202ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123202cd push 2 */
  push32((uint32_t)(0x2u));
  /* 123202cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123202d2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 123202d8 push ecx */
  push32((uint32_t)(ECX));
  /* 123202d9 call 0x12317090 */
  push32(0x123202deu); f_12317090();
  /* 123202de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123202e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 123202e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123202e6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 123202ec push eax */
  push32((uint32_t)(EAX));
  /* 123202ed call 0x12317090 */
  push32(0x123202f2u); f_12317090();
  /* 123202f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123202f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123202f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123202fa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12320300 push edx */
  push32((uint32_t)(EDX));
  /* 12320301 call 0x12317090 */
  push32(0x12320306u); f_12317090();
  /* 12320306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320309 push 2 */
  push32((uint32_t)(0x2u));
  /* 1232030b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232030e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12320314 push ecx */
  push32((uint32_t)(ECX));
  /* 12320315 call 0x12317090 */
  push32(0x1232031au); f_12317090();
  /* 1232031a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232031d push 2 */
  push32((uint32_t)(0x2u));
  /* 1232031f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320322 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12320328 push eax */
  push32((uint32_t)(EAX));
  /* 12320329 call 0x12317090 */
  push32(0x1232032eu); f_12317090();
  /* 1232032e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320331 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320336 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1232033c push edx */
  push32((uint32_t)(EDX));
  /* 1232033d call 0x12317090 */
  push32(0x12320342u); f_12317090();
  /* 12320342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320345 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320347 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232034a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12320350 push ecx */
  push32((uint32_t)(ECX));
  /* 12320351 call 0x12317090 */
  push32(0x12320356u); f_12317090();
  /* 12320356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12320359:;
  /* 12320359 pop ebp */
  EBP = (pop32());
  /* 1232035a ret  */
  ESPCHK(0x12320050u, _esp0);
  ESP += 4; return;
}

/* FUN_10010360 @ 0x12320360 (678 bytes, 180 insns) */
void f_12320360(void) {
  FTRACE(0x12320360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320360 push ebp */
  push32((uint32_t)(EBP));
  /* 12320361 mov ebp, esp */
  EBP = (ESP);
  /* 12320363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12320366 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1232036d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232036f mov ax, word ptr [0x12341996] */
  AX = (r16((uint32_t)(0x12341996)));
  /* 12320375 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12320378 cmp dword ptr [0x12341948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232037f je 0x123204da */
  if (C.zf) goto L_123204da;
  /* 12320385 push 0x12341964 */
  push32((uint32_t)(0x12341964u));
  /* 1232038a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1232038c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232038f push ecx */
  push32((uint32_t)(ECX));
  /* 12320390 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320392 call 0x123235a0 */
  push32(0x12320397u); f_123235a0();
  /* 12320397 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232039a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232039d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1232039f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123203a2 push 0x12341968 */
  push32((uint32_t)(0x12341968u));
  /* 123203a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 123203a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123203ac push eax */
  push32((uint32_t)(EAX));
  /* 123203ad push 1 */
  push32((uint32_t)(0x1u));
  /* 123203af call 0x123235a0 */
  push32(0x123203b4u); f_123235a0();
  /* 123203b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123203b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123203ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123203bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123203bf push 0x1234196c */
  push32((uint32_t)(0x1234196cu));
  /* 123203c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123203c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123203c9 push edx */
  push32((uint32_t)(EDX));
  /* 123203ca push 1 */
  push32((uint32_t)(0x1u));
  /* 123203cc call 0x123235a0 */
  push32(0x123203d1u); f_123235a0();
  /* 123203d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123203d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123203d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123203d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123203dc mov edx, dword ptr [0x1234196c] */
  EDX = (r32((uint32_t)(0x1234196c)));
  /* 123203e2 push edx */
  push32((uint32_t)(EDX));
  /* 123203e3 call 0x12320610 */
  push32(0x123203e8u); f_12320610();
  /* 123203e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123203eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123203ef je 0x12320449 */
  if (C.zf) goto L_12320449;
  /* 123203f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 123203f3 mov eax, dword ptr [0x12341964] */
  EAX = (r32((uint32_t)(0x12341964)));
  /* 123203f8 push eax */
  push32((uint32_t)(EAX));
  /* 123203f9 call 0x12317090 */
  push32(0x123203feu); f_12317090();
  /* 123203fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320401 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320403 mov ecx, dword ptr [0x12341968] */
  ECX = (r32((uint32_t)(0x12341968)));
  /* 12320409 push ecx */
  push32((uint32_t)(ECX));
  /* 1232040a call 0x12317090 */
  push32(0x1232040fu); f_12317090();
  /* 1232040f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320412 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320414 mov edx, dword ptr [0x1234196c] */
  EDX = (r32((uint32_t)(0x1234196c)));
  /* 1232041a push edx */
  push32((uint32_t)(EDX));
  /* 1232041b call 0x12317090 */
  push32(0x12320420u); f_12317090();
  /* 12320420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320423 mov dword ptr [0x12341964], 0 */
  w32((uint32_t)(0x12341964), (0x0u));
  /* 1232042d mov dword ptr [0x12341968], 0 */
  w32((uint32_t)(0x12341968), (0x0u));
  /* 12320437 mov dword ptr [0x1234196c], 0 */
  w32((uint32_t)(0x1234196c), (0x0u));
  /* 12320441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12320444 jmp 0x12320602 */
  goto L_12320602;
L_12320449:;
  /* 12320449 mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 1232044e cmp dword ptr [eax], 0x12340d60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12340d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320454 je 0x12320490 */
  if (C.zf) goto L_12320490;
  /* 12320456 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320458 mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 1232045e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12320460 push edx */
  push32((uint32_t)(EDX));
  /* 12320461 call 0x12317090 */
  push32(0x12320466u); f_12317090();
  /* 12320466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1232046b mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 12320470 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12320473 push ecx */
  push32((uint32_t)(ECX));
  /* 12320474 call 0x12317090 */
  push32(0x12320479u); f_12317090();
  /* 12320479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232047c push 2 */
  push32((uint32_t)(0x2u));
  /* 1232047e mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 12320484 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12320487 push eax */
  push32((uint32_t)(EAX));
  /* 12320488 call 0x12317090 */
  push32(0x1232048du); f_12317090();
  /* 1232048d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12320490:;
  /* 12320490 mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 12320496 mov edx, dword ptr [0x12341964] */
  EDX = (r32((uint32_t)(0x12341964)));
  /* 1232049c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1232049e mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 123204a3 mov ecx, dword ptr [0x12341968] */
  ECX = (r32((uint32_t)(0x12341968)));
  /* 123204a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123204ac mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 123204b2 mov eax, dword ptr [0x1234196c] */
  EAX = (r32((uint32_t)(0x1234196c)));
  /* 123204b7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123204ba mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 123204c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123204c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123204c4 mov byte ptr [0x1234015c], al */
  w8((uint32_t)(0x1234015c), (AL));
  /* 123204c9 mov dword ptr [0x12340160], 1 */
  w32((uint32_t)(0x12340160), (0x1u));
  /* 123204d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123204d5 jmp 0x12320602 */
  goto L_12320602;
L_123204da:;
  /* 123204da push 2 */
  push32((uint32_t)(0x2u));
  /* 123204dc mov ecx, dword ptr [0x12341964] */
  ECX = (r32((uint32_t)(0x12341964)));
  /* 123204e2 push ecx */
  push32((uint32_t)(ECX));
  /* 123204e3 call 0x12317090 */
  push32(0x123204e8u); f_12317090();
  /* 123204e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123204eb push 2 */
  push32((uint32_t)(0x2u));
  /* 123204ed mov edx, dword ptr [0x12341968] */
  EDX = (r32((uint32_t)(0x12341968)));
  /* 123204f3 push edx */
  push32((uint32_t)(EDX));
  /* 123204f4 call 0x12317090 */
  push32(0x123204f9u); f_12317090();
  /* 123204f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123204fc push 2 */
  push32((uint32_t)(0x2u));
  /* 123204fe mov eax, dword ptr [0x1234196c] */
  EAX = (r32((uint32_t)(0x1234196c)));
  /* 12320503 push eax */
  push32((uint32_t)(EAX));
  /* 12320504 call 0x12317090 */
  push32(0x12320509u); f_12317090();
  /* 12320509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232050c mov dword ptr [0x12341964], 0 */
  w32((uint32_t)(0x12341964), (0x0u));
  /* 12320516 mov dword ptr [0x12341968], 0 */
  w32((uint32_t)(0x12341968), (0x0u));
  /* 12320520 mov dword ptr [0x1234196c], 0 */
  w32((uint32_t)(0x1234196c), (0x0u));
  /* 1232052a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1232052f push 0x1233d9b0 */
  push32((uint32_t)(0x1233d9b0u));
  /* 12320534 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320536 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320538 call 0x12316600 */
  push32(0x1232053du); f_12316600();
  /* 1232053d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320540 mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 12320546 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12320548 mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 1232054e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320551 jne 0x1232055b */
  if (!C.zf) goto L_1232055b;
  /* 12320553 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12320556 jmp 0x12320602 */
  goto L_12320602;
L_1232055b:;
  /* 1232055b push 0x1233d94c */
  push32((uint32_t)(0x1233d94cu));
  /* 12320560 mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 12320565 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12320567 push ecx */
  push32((uint32_t)(ECX));
  /* 12320568 call 0x123195b0 */
  push32(0x1232056du); f_123195b0();
  /* 1232056d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320570 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12320575 push 0x1233d9b0 */
  push32((uint32_t)(0x1233d9b0u));
  /* 1232057a push 2 */
  push32((uint32_t)(0x2u));
  /* 1232057c push 2 */
  push32((uint32_t)(0x2u));
  /* 1232057e call 0x12316600 */
  push32(0x12320583u); f_12316600();
  /* 12320583 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320586 mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 1232058c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1232058f mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 12320594 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320598 jne 0x1232059f */
  if (!C.zf) goto L_1232059f;
  /* 1232059a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1232059d jmp 0x12320602 */
  goto L_12320602;
L_1232059f:;
  /* 1232059f mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 123205a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123205a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123205ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 123205b0 push 0x1233d9b0 */
  push32((uint32_t)(0x1233d9b0u));
  /* 123205b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123205b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123205b9 call 0x12316600 */
  push32(0x123205beu); f_12316600();
  /* 123205be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123205c1 mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 123205c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 123205ca mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 123205d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123205d4 jne 0x123205db */
  if (!C.zf) goto L_123205db;
  /* 123205d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123205d9 jmp 0x12320602 */
  goto L_12320602;
L_123205db:;
  /* 123205db mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 123205e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123205e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 123205e6 mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 123205ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123205ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123205f0 mov byte ptr [0x1234015c], cl */
  w8((uint32_t)(0x1234015c), (CL));
  /* 123205f6 mov dword ptr [0x12340160], 1 */
  w32((uint32_t)(0x12340160), (0x1u));
  /* 12320600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12320602:;
  /* 12320602 mov esp, ebp */
  ESP = (EBP);
  /* 12320604 pop ebp */
  EBP = (pop32());
  /* 12320605 ret  */
  ESPCHK(0x12320360u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12320610 (125 bytes, 49 insns) */
void f_12320610(void) {
  FTRACE(0x12320610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320610 push ebp */
  push32((uint32_t)(EBP));
  /* 12320611 mov ebp, esp */
  EBP = (ESP);
  /* 12320613 push ecx */
  push32((uint32_t)(ECX));
L_12320614:;
  /* 12320614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320617 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1232061a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1232061c je 0x12320689 */
  if (C.zf) goto L_12320689;
  /* 1232061e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320621 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12320624 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320627 jl 0x1232064d */
  if ((C.sf!=C.of)) goto L_1232064d;
  /* 12320629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232062c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1232062f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320632 jg 0x1232064d */
  if ((!C.zf&&C.sf==C.of)) goto L_1232064d;
  /* 12320634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320637 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1232063a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232063d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320640 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12320642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320645 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320648 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1232064b jmp 0x12320687 */
  goto L_12320687;
L_1232064d:;
  /* 1232064d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320650 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12320653 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320656 jne 0x1232067e */
  if (!C.zf) goto L_1232067e;
  /* 12320658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232065b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1232065e:;
  /* 1232065e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320661 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320664 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12320667 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12320669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232066c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232066f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12320672 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320675 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12320678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232067a jne 0x1232065e */
  if (!C.zf) goto L_1232065e;
  /* 1232067c jmp 0x12320687 */
  goto L_12320687;
L_1232067e:;
  /* 1232067e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320684 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12320687:;
  /* 12320687 jmp 0x12320614 */
  goto L_12320614;
L_12320689:;
  /* 12320689 mov esp, ebp */
  ESP = (EBP);
  /* 1232068b pop ebp */
  EBP = (pop32());
  /* 1232068c ret  */
  ESPCHK(0x12320610u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x12320690 (304 bytes, 85 insns) */
void f_12320690(void) {
  FTRACE(0x12320690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320690 push ebp */
  push32((uint32_t)(EBP));
  /* 12320691 mov ebp, esp */
  EBP = (ESP);
  /* 12320693 push ecx */
  push32((uint32_t)(ECX));
  /* 12320694 cmp dword ptr [0x12341944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232069b je 0x1232075c */
  if (C.zf) goto L_1232075c;
  /* 123206a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 123206a3 push 0x1233d9bc */
  push32((uint32_t)(0x1233d9bcu));
  /* 123206a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123206aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123206ac push 1 */
  push32((uint32_t)(0x1u));
  /* 123206ae call 0x12316a10 */
  push32(0x123206b3u); f_12316a10();
  /* 123206b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123206b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123206b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123206bd jne 0x123206c9 */
  if (!C.zf) goto L_123206c9;
  /* 123206bf mov eax, 1 */
  EAX = (0x1u);
  /* 123206c4 jmp 0x123207bc */
  goto L_123207bc;
L_123206c9:;
  /* 123206c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123206cc push eax */
  push32((uint32_t)(EAX));
  /* 123206cd call 0x123207c0 */
  push32(0x123206d2u); f_123207c0();
  /* 123206d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123206d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123206d7 je 0x123206fd */
  if (C.zf) goto L_123206fd;
  /* 123206d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123206dc push ecx */
  push32((uint32_t)(ECX));
  /* 123206dd call 0x12320a50 */
  push32(0x123206e2u); f_12320a50();
  /* 123206e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123206e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123206e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123206ea push edx */
  push32((uint32_t)(EDX));
  /* 123206eb call 0x12317090 */
  push32(0x123206f0u); f_12317090();
  /* 123206f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123206f3 mov eax, 1 */
  EAX = (0x1u);
  /* 123206f8 jmp 0x123207bc */
  goto L_123207bc;
L_123206fd:;
  /* 123206fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320700 mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 12320706 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12320708 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1232070a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232070d mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 12320713 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12320716 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12320719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232071c mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 12320722 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12320725 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12320728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232072b mov dword ptr [0x12340d98], eax */
  w32((uint32_t)(0x12340d98), (EAX));
  /* 12320730 mov ecx, dword ptr [0x12341970] */
  ECX = (r32((uint32_t)(0x12341970)));
  /* 12320736 push ecx */
  push32((uint32_t)(ECX));
  /* 12320737 call 0x12320a50 */
  push32(0x1232073cu); f_12320a50();
  /* 1232073c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232073f push 2 */
  push32((uint32_t)(0x2u));
  /* 12320741 mov edx, dword ptr [0x12341970] */
  EDX = (r32((uint32_t)(0x12341970)));
  /* 12320747 push edx */
  push32((uint32_t)(EDX));
  /* 12320748 call 0x12317090 */
  push32(0x1232074du); f_12317090();
  /* 1232074d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320753 mov dword ptr [0x12341970], eax */
  w32((uint32_t)(0x12341970), (EAX));
  /* 12320758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232075a jmp 0x123207bc */
  goto L_123207bc;
L_1232075c:;
  /* 1232075c mov ecx, dword ptr [0x12340d98] */
  ECX = (r32((uint32_t)(0x12340d98)));
  /* 12320762 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12320764 mov dword ptr [0x12340d68], edx */
  w32((uint32_t)(0x12340d68), (EDX));
  /* 1232076a mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 1232076f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12320772 mov dword ptr [0x12340d6c], ecx */
  w32((uint32_t)(0x12340d6c), (ECX));
  /* 12320778 mov edx, dword ptr [0x12340d98] */
  EDX = (r32((uint32_t)(0x12340d98)));
  /* 1232077e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12320781 mov dword ptr [0x12340d70], eax */
  w32((uint32_t)(0x12340d70), (EAX));
  /* 12320786 mov dword ptr [0x12340d98], 0x12340d68 */
  w32((uint32_t)(0x12340d98), (0x12340d68u));
  /* 12320790 mov ecx, dword ptr [0x12341970] */
  ECX = (r32((uint32_t)(0x12341970)));
  /* 12320796 push ecx */
  push32((uint32_t)(ECX));
  /* 12320797 call 0x12320a50 */
  push32(0x1232079cu); f_12320a50();
  /* 1232079c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232079f push 2 */
  push32((uint32_t)(0x2u));
  /* 123207a1 mov edx, dword ptr [0x12341970] */
  EDX = (r32((uint32_t)(0x12341970)));
  /* 123207a7 push edx */
  push32((uint32_t)(EDX));
  /* 123207a8 call 0x12317090 */
  push32(0x123207adu); f_12317090();
  /* 123207ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123207b0 mov dword ptr [0x12341970], 0 */
  w32((uint32_t)(0x12341970), (0x0u));
  /* 123207ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123207bc:;
  /* 123207bc mov esp, ebp */
  ESP = (EBP);
  /* 123207be pop ebp */
  EBP = (pop32());
  /* 123207bf ret  */
  ESPCHK(0x12320690u, _esp0);
  ESP += 4; return;
}

/* FUN_100107c0 @ 0x123207c0 (525 bytes, 200 insns) */
void f_123207c0(void) {
  FTRACE(0x123207c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123207c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123207c1 mov ebp, esp */
  EBP = (ESP);
  /* 123207c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123207c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123207cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123207cf mov ax, word ptr [0x12341990] */
  AX = (r16((uint32_t)(0x12341990)));
  /* 123207d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123207d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123207dc jne 0x123207e6 */
  if (!C.zf) goto L_123207e6;
  /* 123207de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123207e1 jmp 0x123209c9 */
  goto L_123209c9;
L_123207e6:;
  /* 123207e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123207e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123207ec push ecx */
  push32((uint32_t)(ECX));
  /* 123207ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123207ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123207f2 push edx */
  push32((uint32_t)(EDX));
  /* 123207f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123207f5 call 0x123235a0 */
  push32(0x123207fau); f_123235a0();
  /* 123207fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123207fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320800 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320802 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320805 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320808 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232080b push edx */
  push32((uint32_t)(EDX));
  /* 1232080c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1232080e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320811 push eax */
  push32((uint32_t)(EAX));
  /* 12320812 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320814 call 0x123235a0 */
  push32(0x12320819u); f_123235a0();
  /* 12320819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232081c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232081f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320821 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320827 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232082a push edx */
  push32((uint32_t)(EDX));
  /* 1232082b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1232082d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320830 push eax */
  push32((uint32_t)(EAX));
  /* 12320831 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320833 call 0x123235a0 */
  push32(0x12320838u); f_123235a0();
  /* 12320838 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232083b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232083e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320840 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320846 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320849 push edx */
  push32((uint32_t)(EDX));
  /* 1232084a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1232084c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232084f push eax */
  push32((uint32_t)(EAX));
  /* 12320850 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320852 call 0x123235a0 */
  push32(0x12320857u); f_123235a0();
  /* 12320857 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232085a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232085d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1232085f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320862 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320865 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320868 push edx */
  push32((uint32_t)(EDX));
  /* 12320869 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1232086b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232086e push eax */
  push32((uint32_t)(EAX));
  /* 1232086f push 1 */
  push32((uint32_t)(0x1u));
  /* 12320871 call 0x123235a0 */
  push32(0x12320876u); f_123235a0();
  /* 12320876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232087c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1232087e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320884 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12320887 push eax */
  push32((uint32_t)(EAX));
  /* 12320888 call 0x123209d0 */
  push32(0x1232088du); f_123209d0();
  /* 1232088d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320893 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320896 push ecx */
  push32((uint32_t)(ECX));
  /* 12320897 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12320899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232089c push edx */
  push32((uint32_t)(EDX));
  /* 1232089d push 1 */
  push32((uint32_t)(0x1u));
  /* 1232089f call 0x123235a0 */
  push32(0x123208a4u); f_123235a0();
  /* 123208a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123208a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123208aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123208ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123208af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123208b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123208b5 push edx */
  push32((uint32_t)(EDX));
  /* 123208b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 123208b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123208bb push eax */
  push32((uint32_t)(EAX));
  /* 123208bc push 1 */
  push32((uint32_t)(0x1u));
  /* 123208be call 0x123235a0 */
  push32(0x123208c3u); f_123235a0();
  /* 123208c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123208c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123208c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123208cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123208ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123208d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123208d4 push edx */
  push32((uint32_t)(EDX));
  /* 123208d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123208d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123208da push eax */
  push32((uint32_t)(EAX));
  /* 123208db push 0 */
  push32((uint32_t)(0x0u));
  /* 123208dd call 0x123235a0 */
  push32(0x123208e2u); f_123235a0();
  /* 123208e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123208e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123208e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123208ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123208ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123208f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123208f3 push edx */
  push32((uint32_t)(EDX));
  /* 123208f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123208f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123208f9 push eax */
  push32((uint32_t)(EAX));
  /* 123208fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123208fc call 0x123235a0 */
  push32(0x12320901u); f_123235a0();
  /* 12320901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320907 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320909 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1232090c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232090f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320912 push edx */
  push32((uint32_t)(EDX));
  /* 12320913 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12320915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320918 push eax */
  push32((uint32_t)(EAX));
  /* 12320919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1232091b call 0x123235a0 */
  push32(0x12320920u); f_123235a0();
  /* 12320920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320923 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320926 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320928 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1232092b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232092e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320931 push edx */
  push32((uint32_t)(EDX));
  /* 12320932 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12320934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320937 push eax */
  push32((uint32_t)(EAX));
  /* 12320938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1232093a call 0x123235a0 */
  push32(0x1232093fu); f_123235a0();
  /* 1232093f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320942 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320945 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320947 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1232094a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232094d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320950 push edx */
  push32((uint32_t)(EDX));
  /* 12320951 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12320953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320956 push eax */
  push32((uint32_t)(EAX));
  /* 12320957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12320959 call 0x123235a0 */
  push32(0x1232095eu); f_123235a0();
  /* 1232095e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320961 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320964 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320966 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232096c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232096f push edx */
  push32((uint32_t)(EDX));
  /* 12320970 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12320972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320975 push eax */
  push32((uint32_t)(EAX));
  /* 12320976 push 0 */
  push32((uint32_t)(0x0u));
  /* 12320978 call 0x123235a0 */
  push32(0x1232097du); f_123235a0();
  /* 1232097d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320980 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12320983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12320985 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12320988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232098b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232098e push edx */
  push32((uint32_t)(EDX));
  /* 1232098f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12320991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320994 push eax */
  push32((uint32_t)(EAX));
  /* 12320995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12320997 call 0x123235a0 */
  push32(0x1232099cu); f_123235a0();
  /* 1232099c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232099f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123209a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123209a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123209a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123209aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123209ad push edx */
  push32((uint32_t)(EDX));
  /* 123209ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 123209b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123209b3 push eax */
  push32((uint32_t)(EAX));
  /* 123209b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123209b6 call 0x123235a0 */
  push32(0x123209bbu); f_123235a0();
  /* 123209bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123209be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123209c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123209c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123209c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123209c9:;
  /* 123209c9 mov esp, ebp */
  ESP = (EBP);
  /* 123209cb pop ebp */
  EBP = (pop32());
  /* 123209cc ret  */
  ESPCHK(0x123207c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x123209d0 (125 bytes, 49 insns) */
void f_123209d0(void) {
  FTRACE(0x123209d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123209d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123209d1 mov ebp, esp */
  EBP = (ESP);
  /* 123209d3 push ecx */
  push32((uint32_t)(ECX));
L_123209d4:;
  /* 123209d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123209d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123209da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123209dc je 0x12320a49 */
  if (C.zf) goto L_12320a49;
  /* 123209de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123209e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123209e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123209e7 jl 0x12320a0d */
  if ((C.sf!=C.of)) goto L_12320a0d;
  /* 123209e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123209ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123209ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123209f2 jg 0x12320a0d */
  if ((!C.zf&&C.sf==C.of)) goto L_12320a0d;
  /* 123209f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123209f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123209fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123209fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12320a02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320a08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12320a0b jmp 0x12320a47 */
  goto L_12320a47;
L_12320a0d:;
  /* 12320a0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12320a13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320a16 jne 0x12320a3e */
  if (!C.zf) goto L_12320a3e;
  /* 12320a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12320a1e:;
  /* 12320a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320a21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320a24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12320a27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12320a29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320a2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320a2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12320a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12320a35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12320a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12320a3a jne 0x12320a1e */
  if (!C.zf) goto L_12320a1e;
  /* 12320a3c jmp 0x12320a47 */
  goto L_12320a47;
L_12320a3e:;
  /* 12320a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320a44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12320a47:;
  /* 12320a47 jmp 0x123209d4 */
  goto L_123209d4;
L_12320a49:;
  /* 12320a49 mov esp, ebp */
  ESP = (EBP);
  /* 12320a4b pop ebp */
  EBP = (pop32());
  /* 12320a4c ret  */
  ESPCHK(0x123209d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x12320a50 (147 bytes, 52 insns) */
void f_12320a50(void) {
  FTRACE(0x12320a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12320a51 mov ebp, esp */
  EBP = (ESP);
  /* 12320a53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320a57 jne 0x12320a5e */
  if (!C.zf) goto L_12320a5e;
  /* 12320a59 jmp 0x12320ae1 */
  goto L_12320ae1;
L_12320a5e:;
  /* 12320a5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a61 cmp dword ptr [eax + 0xc], 0x123419cc */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x123419ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320a68 je 0x12320ae1 */
  if (C.zf) goto L_12320ae1;
  /* 12320a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 12320a6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12320a72 push edx */
  push32((uint32_t)(EDX));
  /* 12320a73 call 0x12317090 */
  push32(0x12320a78u); f_12317090();
  /* 12320a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320a7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12320a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a80 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12320a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12320a84 call 0x12317090 */
  push32(0x12320a89u); f_12317090();
  /* 12320a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320a8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12320a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320a91 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12320a94 push eax */
  push32((uint32_t)(EAX));
  /* 12320a95 call 0x12317090 */
  push32(0x12320a9au); f_12317090();
  /* 12320a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12320a9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320aa2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12320aa5 push edx */
  push32((uint32_t)(EDX));
  /* 12320aa6 call 0x12317090 */
  push32(0x12320aabu); f_12317090();
  /* 12320aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320aae push 2 */
  push32((uint32_t)(0x2u));
  /* 12320ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320ab3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12320ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12320ab7 call 0x12317090 */
  push32(0x12320abcu); f_12317090();
  /* 12320abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320abf push 2 */
  push32((uint32_t)(0x2u));
  /* 12320ac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320ac4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12320ac7 push eax */
  push32((uint32_t)(EAX));
  /* 12320ac8 call 0x12317090 */
  push32(0x12320acdu); f_12317090();
  /* 12320acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320ad2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12320ad5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12320ad8 push edx */
  push32((uint32_t)(EDX));
  /* 12320ad9 call 0x12317090 */
  push32(0x12320adeu); f_12317090();
  /* 12320ade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12320ae1:;
  /* 12320ae1 pop ebp */
  EBP = (pop32());
  /* 12320ae2 ret  */
  ESPCHK(0x12320a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010af0 @ 0x12320af0 (928 bytes, 284 insns) */
void f_12320af0(void) {
  FTRACE(0x12320af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12320af1 mov ebp, esp */
  EBP = (ESP);
  /* 12320af3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12320af6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12320afd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12320b04 cmp dword ptr [0x12341940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320b0b je 0x12320e41 */
  if (C.zf) goto L_12320e41;
  /* 12320b11 cmp dword ptr [0x12341950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320b18 jne 0x12320b40 */
  if (!C.zf) goto L_12320b40;
  /* 12320b1a push 0x12341950 */
  push32((uint32_t)(0x12341950u));
  /* 12320b1f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12320b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320b26 mov ax, word ptr [0x12341988] */
  AX = (r16((uint32_t)(0x12341988)));
  /* 12320b2c push eax */
  push32((uint32_t)(EAX));
  /* 12320b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12320b2f call 0x123235a0 */
  push32(0x12320b34u); f_123235a0();
  /* 12320b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12320b39 je 0x12320b40 */
  if (C.zf) goto L_12320b40;
  /* 12320b3b jmp 0x12320e02 */
  goto L_12320e02;
L_12320b40:;
  /* 12320b40 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12320b42 push 0x1233d9c8 */
  push32((uint32_t)(0x1233d9c8u));
  /* 12320b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320b49 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12320b4e call 0x12316600 */
  push32(0x12320b53u); f_12316600();
  /* 12320b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320b56 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12320b59 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12320b5b push 0x1233d9c8 */
  push32((uint32_t)(0x1233d9c8u));
  /* 12320b60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320b62 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12320b67 call 0x12316600 */
  push32(0x12320b6cu); f_12316600();
  /* 12320b6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320b6f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12320b72 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12320b74 push 0x1233d9c8 */
  push32((uint32_t)(0x1233d9c8u));
  /* 12320b79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320b7b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12320b80 call 0x12316600 */
  push32(0x12320b85u); f_12316600();
  /* 12320b85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320b88 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12320b8b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12320b8d push 0x1233d9c8 */
  push32((uint32_t)(0x1233d9c8u));
  /* 12320b92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320b94 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12320b99 call 0x12316600 */
  push32(0x12320b9eu); f_12316600();
  /* 12320b9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ba1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12320ba4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320ba8 je 0x12320bbc */
  if (C.zf) goto L_12320bbc;
  /* 12320baa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320bae je 0x12320bbc */
  if (C.zf) goto L_12320bbc;
  /* 12320bb0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320bb4 je 0x12320bbc */
  if (C.zf) goto L_12320bbc;
  /* 12320bb6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320bba jne 0x12320bc1 */
  if (!C.zf) goto L_12320bc1;
L_12320bbc:;
  /* 12320bbc jmp 0x12320e02 */
  goto L_12320e02;
L_12320bc1:;
  /* 12320bc1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12320bc4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12320bc7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12320bce jmp 0x12320bd9 */
  goto L_12320bd9;
L_12320bd0:;
  /* 12320bd0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12320bd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320bd6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12320bd9:;
  /* 12320bd9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320be0 jge 0x12320bf5 */
  if ((C.sf==C.of)) goto L_12320bf5;
  /* 12320be2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320be5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12320be8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12320bea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320bed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320bf0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12320bf3 jmp 0x12320bd0 */
  goto L_12320bd0;
L_12320bf5:;
  /* 12320bf5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12320bf8 push eax */
  push32((uint32_t)(EAX));
  /* 12320bf9 mov ecx, dword ptr [0x12341950] */
  ECX = (r32((uint32_t)(0x12341950)));
  /* 12320bff push ecx */
  push32((uint32_t)(ECX));
  /* 12320c00 call dword ptr [0x123442c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442c0))), 0x12320c06u);
  /* 12320c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12320c08 jne 0x12320c0f */
  if (!C.zf) goto L_12320c0f;
  /* 12320c0a jmp 0x12320e02 */
  goto L_12320e02;
L_12320c0f:;
  /* 12320c0f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320c13 jbe 0x12320c1a */
  if ((C.cf||C.zf)) goto L_12320c1a;
  /* 12320c15 jmp 0x12320e02 */
  goto L_12320e02;
L_12320c1a:;
  /* 12320c1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12320c1d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12320c23 mov dword ptr [0x12340158], edx */
  w32((uint32_t)(0x12340158), (EDX));
  /* 12320c29 cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320c30 jle 0x12320c89 */
  if ((C.zf||C.sf!=C.of)) goto L_12320c89;
  /* 12320c32 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12320c35 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12320c38 jmp 0x12320c43 */
  goto L_12320c43;
L_12320c3a:;
  /* 12320c3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320c3d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320c40 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12320c43:;
  /* 12320c43 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320c46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320c48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12320c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12320c4c je 0x12320c89 */
  if (C.zf) goto L_12320c89;
  /* 12320c4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320c51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12320c53 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12320c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12320c58 je 0x12320c89 */
  if (C.zf) goto L_12320c89;
  /* 12320c5a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12320c5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12320c61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12320c64 jmp 0x12320c6f */
  goto L_12320c6f;
L_12320c66:;
  /* 12320c66 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12320c69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320c6c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12320c6f:;
  /* 12320c6f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320c72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12320c74 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12320c77 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320c7a jg 0x12320c87 */
  if ((!C.zf&&C.sf==C.of)) goto L_12320c87;
  /* 12320c7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12320c7f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320c82 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12320c85 jmp 0x12320c66 */
  goto L_12320c66;
L_12320c87:;
  /* 12320c87 jmp 0x12320c3a */
  goto L_12320c3a;
L_12320c89:;
  /* 12320c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12320c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12320c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12320c8f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12320c92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320c95 push eax */
  push32((uint32_t)(EAX));
  /* 12320c96 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12320c9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12320c9e push ecx */
  push32((uint32_t)(ECX));
  /* 12320c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12320ca1 call 0x1231f290 */
  push32(0x12320ca6u); f_1231f290();
  /* 12320ca6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12320cab jne 0x12320cb2 */
  if (!C.zf) goto L_12320cb2;
  /* 12320cad jmp 0x12320e02 */
  goto L_12320e02;
L_12320cb2:;
  /* 12320cb2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12320cb5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12320cba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12320cbd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12320cc0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12320cc7 jmp 0x12320cd2 */
  goto L_12320cd2;
L_12320cc9:;
  /* 12320cc9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12320ccc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ccf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12320cd2:;
  /* 12320cd2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320cd9 jge 0x12320cf0 */
  if ((C.sf==C.of)) goto L_12320cf0;
  /* 12320cdb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12320cde mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12320ce2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12320ce5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12320ce8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ceb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12320cee jmp 0x12320cc9 */
  goto L_12320cc9;
L_12320cf0:;
  /* 12320cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12320cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12320cf4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12320cf7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320cfa push edx */
  push32((uint32_t)(EDX));
  /* 12320cfb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12320d00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12320d03 push eax */
  push32((uint32_t)(EAX));
  /* 12320d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 12320d06 call 0x12323840 */
  push32(0x12320d0bu); f_12323840();
  /* 12320d0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12320d10 jne 0x12320d17 */
  if (!C.zf) goto L_12320d17;
  /* 12320d12 jmp 0x12320e02 */
  goto L_12320e02;
L_12320d17:;
  /* 12320d17 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12320d1a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12320d1f cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320d26 jle 0x12320d83 */
  if ((C.zf||C.sf!=C.of)) goto L_12320d83;
  /* 12320d28 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12320d2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12320d2e jmp 0x12320d39 */
  goto L_12320d39;
L_12320d30:;
  /* 12320d30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320d33 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320d36 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12320d39:;
  /* 12320d39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320d3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12320d3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12320d40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12320d42 je 0x12320d83 */
  if (C.zf) goto L_12320d83;
  /* 12320d44 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320d47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12320d49 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12320d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12320d4e je 0x12320d83 */
  if (C.zf) goto L_12320d83;
  /* 12320d50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320d53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320d55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12320d57 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12320d5a jmp 0x12320d65 */
  goto L_12320d65;
L_12320d5c:;
  /* 12320d5c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12320d5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320d62 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12320d65:;
  /* 12320d65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12320d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320d6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12320d6d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320d70 jg 0x12320d81 */
  if ((!C.zf&&C.sf==C.of)) goto L_12320d81;
  /* 12320d72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12320d75 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12320d78 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12320d7f jmp 0x12320d5c */
  goto L_12320d5c;
L_12320d81:;
  /* 12320d81 jmp 0x12320d30 */
  goto L_12320d30;
L_12320d83:;
  /* 12320d83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12320d86 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320d89 mov dword ptr [0x1233fde8], eax */
  w32((uint32_t)(0x1233fde8), (EAX));
  /* 12320d8e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12320d91 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320d94 mov dword ptr [0x1233fdec], ecx */
  w32((uint32_t)(0x1233fdec), (ECX));
  /* 12320d9a cmp dword ptr [0x12341974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320da1 je 0x12320db4 */
  if (C.zf) goto L_12320db4;
  /* 12320da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320da5 mov edx, dword ptr [0x12341974] */
  EDX = (r32((uint32_t)(0x12341974)));
  /* 12320dab push edx */
  push32((uint32_t)(EDX));
  /* 12320dac call 0x12317090 */
  push32(0x12320db1u); f_12317090();
  /* 12320db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12320db4:;
  /* 12320db4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12320db7 mov dword ptr [0x12341974], eax */
  w32((uint32_t)(0x12341974), (EAX));
  /* 12320dbc cmp dword ptr [0x12341978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320dc3 je 0x12320dd6 */
  if (C.zf) goto L_12320dd6;
  /* 12320dc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320dc7 mov ecx, dword ptr [0x12341978] */
  ECX = (r32((uint32_t)(0x12341978)));
  /* 12320dcd push ecx */
  push32((uint32_t)(ECX));
  /* 12320dce call 0x12317090 */
  push32(0x12320dd3u); f_12317090();
  /* 12320dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12320dd6:;
  /* 12320dd6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12320dd9 mov dword ptr [0x12341978], edx */
  w32((uint32_t)(0x12341978), (EDX));
  /* 12320ddf push 2 */
  push32((uint32_t)(0x2u));
  /* 12320de1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12320de4 push eax */
  push32((uint32_t)(EAX));
  /* 12320de5 call 0x12317090 */
  push32(0x12320deau); f_12317090();
  /* 12320dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ded push 2 */
  push32((uint32_t)(0x2u));
  /* 12320def mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12320df2 push ecx */
  push32((uint32_t)(ECX));
  /* 12320df3 call 0x12317090 */
  push32(0x12320df8u); f_12317090();
  /* 12320df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320dfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320dfd jmp 0x12320e8c */
  goto L_12320e8c;
L_12320e02:;
  /* 12320e02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320e04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12320e07 push edx */
  push32((uint32_t)(EDX));
  /* 12320e08 call 0x12317090 */
  push32(0x12320e0du); f_12317090();
  /* 12320e0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320e10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320e12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12320e15 push eax */
  push32((uint32_t)(EAX));
  /* 12320e16 call 0x12317090 */
  push32(0x12320e1bu); f_12317090();
  /* 12320e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320e1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12320e20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12320e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12320e24 call 0x12317090 */
  push32(0x12320e29u); f_12317090();
  /* 12320e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320e2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12320e2e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12320e31 push edx */
  push32((uint32_t)(EDX));
  /* 12320e32 call 0x12317090 */
  push32(0x12320e37u); f_12317090();
  /* 12320e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320e3a mov eax, 1 */
  EAX = (0x1u);
  /* 12320e3f jmp 0x12320e8c */
  goto L_12320e8c;
L_12320e41:;
  /* 12320e41 mov dword ptr [0x1233fde8], 0x1233fdf2 */
  w32((uint32_t)(0x1233fde8), (0x1233fdf2u));
  /* 12320e4b mov dword ptr [0x1233fdec], 0x1233fdf2 */
  w32((uint32_t)(0x1233fdec), (0x1233fdf2u));
  /* 12320e55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320e57 mov eax, dword ptr [0x12341974] */
  EAX = (r32((uint32_t)(0x12341974)));
  /* 12320e5c push eax */
  push32((uint32_t)(EAX));
  /* 12320e5d call 0x12317090 */
  push32(0x12320e62u); f_12317090();
  /* 12320e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12320e67 mov ecx, dword ptr [0x12341978] */
  ECX = (r32((uint32_t)(0x12341978)));
  /* 12320e6d push ecx */
  push32((uint32_t)(ECX));
  /* 12320e6e call 0x12317090 */
  push32(0x12320e73u); f_12317090();
  /* 12320e73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320e76 mov dword ptr [0x12341974], 0 */
  w32((uint32_t)(0x12341974), (0x0u));
  /* 12320e80 mov dword ptr [0x12341978], 0 */
  w32((uint32_t)(0x12341978), (0x0u));
  /* 12320e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12320e8c:;
  /* 12320e8c mov esp, ebp */
  ESP = (EBP);
  /* 12320e8e pop ebp */
  EBP = (pop32());
  /* 12320e8f ret  */
  ESPCHK(0x12320af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x12320e90 (7 bytes, 5 insns) */
void f_12320e90(void) {
  FTRACE(0x12320e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12320e91 mov ebp, esp */
  EBP = (ESP);
  /* 12320e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320e95 pop ebp */
  EBP = (pop32());
  /* 12320e96 ret  */
  ESPCHK(0x12320e90u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12320ea0 (129 bytes, 56 insns) */
void f_12320ea0(void) {
  FTRACE(0x12320ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320ea0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12320ea4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12320ea8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12320eae jne 0x12320eec */
  if (!C.zf) goto L_12320eec;
L_12320eb0:;
  /* 12320eb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12320eb2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320eb4 jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320eb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320eb8 je 0x12320ee0 */
  if (C.zf) goto L_12320ee0;
  /* 12320eba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320ebd jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320ebf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12320ec1 je 0x12320ee0 */
  if (C.zf) goto L_12320ee0;
  /* 12320ec3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12320ec6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320ec9 jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320ecb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320ecd je 0x12320ee0 */
  if (C.zf) goto L_12320ee0;
  /* 12320ecf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320ed2 jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320ed4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320ed7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320eda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12320edc jne 0x12320eb0 */
  if (!C.zf) goto L_12320eb0;
  /* 12320ede mov edi, edi */
  EDI = (EDI);
L_12320ee0:;
  /* 12320ee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320ee2 ret  */
  ESPCHK(0x12320ea0u, _esp0);
  ESP += 4; return;
  /* 12320ee3 nop  */
  /* nop */
L_12320ee4:;
  /* 12320ee4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12320ee6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12320ee8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12320ee9 ret  */
  ESPCHK(0x12320ea0u, _esp0);
  ESP += 4; return;
  /* 12320eea mov edi, edi */
  EDI = (EDI);
L_12320eec:;
  /* 12320eec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12320ef2 je 0x12320f08 */
  if (C.zf) goto L_12320f08;
  /* 12320ef4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12320ef6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12320ef7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320ef9 jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320efb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12320efc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320efe je 0x12320ee0 */
  if (C.zf) goto L_12320ee0;
  /* 12320f00 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12320f06 je 0x12320eb0 */
  if (C.zf) goto L_12320eb0;
L_12320f08:;
  /* 12320f08 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12320f0b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320f0e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320f10 jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320f12 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320f14 je 0x12320ee0 */
  if (C.zf) goto L_12320ee0;
  /* 12320f16 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320f19 jne 0x12320ee4 */
  if (!C.zf) goto L_12320ee4;
  /* 12320f1b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12320f1d je 0x12320ee0 */
  if (C.zf) goto L_12320ee0;
  /* 12320f1f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320f22 jmp 0x12320eb0 */
  goto L_12320eb0;
}

/* FUN_10010f30 @ 0x12320f30 (62 bytes, 35 insns) */
void f_12320f30(void) {
  FTRACE(0x12320f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12320f31 mov ebp, esp */
  EBP = (ESP);
  /* 12320f33 push esi */
  push32((uint32_t)(ESI));
  /* 12320f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320f36 push eax */
  push32((uint32_t)(EAX));
  /* 12320f37 push eax */
  push32((uint32_t)(EAX));
  /* 12320f38 push eax */
  push32((uint32_t)(EAX));
  /* 12320f39 push eax */
  push32((uint32_t)(EAX));
  /* 12320f3a push eax */
  push32((uint32_t)(EAX));
  /* 12320f3b push eax */
  push32((uint32_t)(EAX));
  /* 12320f3c push eax */
  push32((uint32_t)(EAX));
  /* 12320f3d push eax */
  push32((uint32_t)(EAX));
  /* 12320f3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12320f41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12320f44:;
  /* 12320f44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12320f46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320f48 je 0x12320f51 */
  if (C.zf) goto L_12320f51;
  /* 12320f4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12320f4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12320f4b");
  /* 12320f4f jmp 0x12320f44 */
  goto L_12320f44;
L_12320f51:;
  /* 12320f51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12320f54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12320f57 nop  */
  /* nop */
L_12320f58:;
  /* 12320f58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12320f59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12320f5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320f5d je 0x12320f66 */
  if (C.zf) goto L_12320f66;
  /* 12320f5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12320f60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12320f60");
  /* 12320f64 jae 0x12320f58 */
  if (!C.cf) goto L_12320f58;
L_12320f66:;
  /* 12320f66 mov eax, ecx */
  EAX = (ECX);
  /* 12320f68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320f6b pop esi */
  ESI = (pop32());
  /* 12320f6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12320f6d ret  */
  ESPCHK(0x12320f30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12320f70 (56 bytes, 31 insns) */
void f_12320f70(void) {
  FTRACE(0x12320f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12320f71 mov ebp, esp */
  EBP = (ESP);
  /* 12320f73 push edi */
  push32((uint32_t)(EDI));
  /* 12320f74 push esi */
  push32((uint32_t)(ESI));
  /* 12320f75 push ebx */
  push32((uint32_t)(EBX));
  /* 12320f76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12320f79 jecxz 0x12320fa1 */
  x86_unimpl("jecxz @ 0x12320f79");
  /* 12320f7b mov ebx, ecx */
  EBX = (ECX);
  /* 12320f7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12320f80 mov esi, edi */
  ESI = (EDI);
  /* 12320f82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320f84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12320f86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12320f88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12320f8a mov edi, esi */
  EDI = (ESI);
  /* 12320f8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12320f8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12320f91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12320f94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12320f96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12320f99 ja 0x12320f9f */
  if ((!C.cf&&!C.zf)) goto L_12320f9f;
  /* 12320f9b je 0x12320fa1 */
  if (C.zf) goto L_12320fa1;
  /* 12320f9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12320f9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12320f9f:;
  /* 12320f9f not ecx */
  ECX = (~(ECX));
L_12320fa1:;
  /* 12320fa1 mov eax, ecx */
  EAX = (ECX);
  /* 12320fa3 pop ebx */
  EBX = (pop32());
  /* 12320fa4 pop esi */
  ESI = (pop32());
  /* 12320fa5 pop edi */
  EDI = (pop32());
  /* 12320fa6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12320fa7 ret  */
  ESPCHK(0x12320f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fb0 @ 0x12320fb0 (58 bytes, 32 insns) */
void f_12320fb0(void) {
  FTRACE(0x12320fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12320fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12320fb3 push esi */
  push32((uint32_t)(ESI));
  /* 12320fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12320fb6 push eax */
  push32((uint32_t)(EAX));
  /* 12320fb7 push eax */
  push32((uint32_t)(EAX));
  /* 12320fb8 push eax */
  push32((uint32_t)(EAX));
  /* 12320fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12320fba push eax */
  push32((uint32_t)(EAX));
  /* 12320fbb push eax */
  push32((uint32_t)(EAX));
  /* 12320fbc push eax */
  push32((uint32_t)(EAX));
  /* 12320fbd push eax */
  push32((uint32_t)(EAX));
  /* 12320fbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12320fc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12320fc4:;
  /* 12320fc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12320fc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320fc8 je 0x12320fd1 */
  if (C.zf) goto L_12320fd1;
  /* 12320fca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12320fcb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12320fcb");
  /* 12320fcf jmp 0x12320fc4 */
  goto L_12320fc4;
L_12320fd1:;
  /* 12320fd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12320fd4:;
  /* 12320fd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12320fd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12320fd8 je 0x12320fe4 */
  if (C.zf) goto L_12320fe4;
  /* 12320fda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12320fdb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12320fdb");
  /* 12320fdf jae 0x12320fd4 */
  if (!C.cf) goto L_12320fd4;
  /* 12320fe1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12320fe4:;
  /* 12320fe4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12320fe7 pop esi */
  ESI = (pop32());
  /* 12320fe8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12320fe9 ret  */
  ESPCHK(0x12320fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x12320ff0 (512 bytes, 147 insns) */
void f_12320ff0(void) {
  FTRACE(0x12320ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12320ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12320ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12320ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12320ff6 cmp dword ptr [0x123419c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12320ffd jne 0x12321022 */
  if (!C.zf) goto L_12321022;
  /* 12320fff call 0x12321ac0 */
  push32(0x12321004u); f_12321ac0();
  /* 12321004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321006 je 0x12321012 */
  if (C.zf) goto L_12321012;
  /* 12321008 mov eax, dword ptr [0x123442f4] */
  EAX = (r32((uint32_t)(0x123442f4)));
  /* 1232100d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12321010 jmp 0x12321019 */
  goto L_12321019;
L_12321012:;
  /* 12321012 mov dword ptr [ebp - 8], 0x12321b10 */
  w32((uint32_t)(EBP + -0x8), (0x12321b10u));
L_12321019:;
  /* 12321019 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232101c mov dword ptr [0x123419c0], ecx */
  w32((uint32_t)(0x123419c0), (ECX));
L_12321022:;
  /* 12321022 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321026 jne 0x12321032 */
  if (!C.zf) goto L_12321032;
  /* 12321028 call 0x12321910 */
  push32(0x1232102du); f_12321910();
  /* 1232102d jmp 0x123210fe */
  goto L_123210fe;
L_12321032:;
  /* 12321032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321035 mov dword ptr [0x123419b0], edx */
  w32((uint32_t)(0x123419b0), (EDX));
  /* 1232103b cmp dword ptr [0x123419b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321042 je 0x12321064 */
  if (C.zf) goto L_12321064;
  /* 12321044 mov eax, dword ptr [0x123419b0] */
  EAX = (r32((uint32_t)(0x123419b0)));
  /* 12321049 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1232104c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1232104e je 0x12321064 */
  if (C.zf) goto L_12321064;
  /* 12321050 push 0x123419b0 */
  push32((uint32_t)(0x123419b0u));
  /* 12321055 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12321057 push 0x12340a90 */
  push32((uint32_t)(0x12340a90u));
  /* 1232105c call 0x123211f0 */
  push32(0x12321061u); f_123211f0();
  /* 12321061 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12321064:;
  /* 12321064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321067 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232106a mov dword ptr [0x123419b4], edx */
  w32((uint32_t)(0x123419b4), (EDX));
  /* 12321070 cmp dword ptr [0x123419b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321077 je 0x12321099 */
  if (C.zf) goto L_12321099;
  /* 12321079 mov eax, dword ptr [0x123419b4] */
  EAX = (r32((uint32_t)(0x123419b4)));
  /* 1232107e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12321081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12321083 je 0x12321099 */
  if (C.zf) goto L_12321099;
  /* 12321085 push 0x123419b4 */
  push32((uint32_t)(0x123419b4u));
  /* 1232108a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1232108c push 0x123409d8 */
  push32((uint32_t)(0x123409d8u));
  /* 12321091 call 0x123211f0 */
  push32(0x12321096u); f_123211f0();
  /* 12321096 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12321099:;
  /* 12321099 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
  /* 123210a3 cmp dword ptr [0x123419b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123210aa je 0x123210dd */
  if (C.zf) goto L_123210dd;
  /* 123210ac mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 123210b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123210b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123210b7 je 0x123210dd */
  if (C.zf) goto L_123210dd;
  /* 123210b9 cmp dword ptr [0x123419b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123210c0 je 0x123210d6 */
  if (C.zf) goto L_123210d6;
  /* 123210c2 mov ecx, dword ptr [0x123419b4] */
  ECX = (r32((uint32_t)(0x123419b4)));
  /* 123210c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123210cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123210cd je 0x123210d6 */
  if (C.zf) goto L_123210d6;
  /* 123210cf call 0x12321280 */
  push32(0x123210d4u); f_12321280();
  /* 123210d4 jmp 0x123210db */
  goto L_123210db;
L_123210d6:;
  /* 123210d6 call 0x12321670 */
  push32(0x123210dbu); f_12321670();
L_123210db:;
  /* 123210db jmp 0x123210fe */
  goto L_123210fe;
L_123210dd:;
  /* 123210dd cmp dword ptr [0x123419b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123210e4 je 0x123210f9 */
  if (C.zf) goto L_123210f9;
  /* 123210e6 mov eax, dword ptr [0x123419b4] */
  EAX = (r32((uint32_t)(0x123419b4)));
  /* 123210eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123210ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123210f0 je 0x123210f9 */
  if (C.zf) goto L_123210f9;
  /* 123210f2 call 0x12321810 */
  push32(0x123210f7u); f_12321810();
  /* 123210f7 jmp 0x123210fe */
  goto L_123210fe;
L_123210f9:;
  /* 123210f9 call 0x12321910 */
  push32(0x123210feu); f_12321910();
L_123210fe:;
  /* 123210fe cmp dword ptr [0x123419b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321105 jne 0x1232110e */
  if (!C.zf) goto L_1232110e;
  /* 12321107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12321109 jmp 0x123211ec */
  goto L_123211ec;
L_1232110e:;
  /* 1232110e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321111 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321117 push edx */
  push32((uint32_t)(EDX));
  /* 12321118 call 0x12321940 */
  push32(0x1232111du); f_12321940();
  /* 1232111d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321120 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12321123 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321127 je 0x1232113c */
  if (C.zf) goto L_1232113c;
  /* 12321129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232112c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12321131 push eax */
  push32((uint32_t)(EAX));
  /* 12321132 call dword ptr [0x123442f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f0))), 0x12321138u);
  /* 12321138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232113a jne 0x12321143 */
  if (!C.zf) goto L_12321143;
L_1232113c:;
  /* 1232113c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232113e jmp 0x123211ec */
  goto L_123211ec;
L_12321143:;
  /* 12321143 push 1 */
  push32((uint32_t)(0x1u));
  /* 12321145 mov ecx, dword ptr [0x123419a0] */
  ECX = (r32((uint32_t)(0x123419a0)));
  /* 1232114b push ecx */
  push32((uint32_t)(ECX));
  /* 1232114c call dword ptr [0x123442ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442ec))), 0x12321152u);
  /* 12321152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321154 jne 0x1232115d */
  if (!C.zf) goto L_1232115d;
  /* 12321156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12321158 jmp 0x123211ec */
  goto L_123211ec;
L_1232115d:;
  /* 1232115d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321161 je 0x12321188 */
  if (C.zf) goto L_12321188;
  /* 12321163 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12321166 mov ax, word ptr [0x123419a0] */
  AX = (r16((uint32_t)(0x123419a0)));
  /* 1232116c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1232116f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12321172 mov dx, word ptr [0x123419bc] */
  DX = (r16((uint32_t)(0x123419bc)));
  /* 12321179 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1232117d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12321180 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12321184 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12321188:;
  /* 12321188 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232118c je 0x123211e7 */
  if (C.zf) goto L_123211e7;
  /* 1232118e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12321190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12321193 push edx */
  push32((uint32_t)(EDX));
  /* 12321194 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12321199 mov eax, dword ptr [0x123419a0] */
  EAX = (r32((uint32_t)(0x123419a0)));
  /* 1232119e push eax */
  push32((uint32_t)(EAX));
  /* 1232119f call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x123211a5u);
  /* 123211a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123211a7 jne 0x123211ad */
  if (!C.zf) goto L_123211ad;
  /* 123211a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123211ab jmp 0x123211ec */
  goto L_123211ec;
L_123211ad:;
  /* 123211ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123211af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123211b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123211b5 push ecx */
  push32((uint32_t)(ECX));
  /* 123211b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 123211bb mov edx, dword ptr [0x123419bc] */
  EDX = (r32((uint32_t)(0x123419bc)));
  /* 123211c1 push edx */
  push32((uint32_t)(EDX));
  /* 123211c2 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x123211c8u);
  /* 123211c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123211ca jne 0x123211d0 */
  if (!C.zf) goto L_123211d0;
  /* 123211cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123211ce jmp 0x123211ec */
  goto L_123211ec;
L_123211d0:;
  /* 123211d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 123211d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123211d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123211da push eax */
  push32((uint32_t)(EAX));
  /* 123211db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123211de push ecx */
  push32((uint32_t)(ECX));
  /* 123211df call 0x12319140 */
  push32(0x123211e4u); f_12319140();
  /* 123211e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123211e7:;
  /* 123211e7 mov eax, 1 */
  EAX = (0x1u);
L_123211ec:;
  /* 123211ec mov esp, ebp */
  ESP = (EBP);
  /* 123211ee pop ebp */
  EBP = (pop32());
  /* 123211ef ret  */
  ESPCHK(0x12320ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f0 @ 0x123211f0 (130 bytes, 47 insns) */
void f_123211f0(void) {
  FTRACE(0x123211f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123211f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123211f1 mov ebp, esp */
  EBP = (ESP);
  /* 123211f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123211f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123211fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12321204:;
  /* 12321204 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321207 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232120a jg 0x1232126e */
  if ((!C.zf&&C.sf==C.of)) goto L_1232126e;
  /* 1232120c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321210 je 0x1232126e */
  if (C.zf) goto L_1232126e;
  /* 12321212 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321215 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321218 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12321219 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232121b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1232121d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12321220 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321226 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12321229 push eax */
  push32((uint32_t)(EAX));
  /* 1232122a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232122d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1232122f push edx */
  push32((uint32_t)(EDX));
  /* 12321230 call 0x12323ab0 */
  push32(0x12321235u); f_12323ab0();
  /* 12321235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321238 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1232123b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232123f jne 0x12321252 */
  if (!C.zf) goto L_12321252;
  /* 12321241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321244 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321247 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1232124b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232124e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12321250 jmp 0x1232126c */
  goto L_1232126c;
L_12321252:;
  /* 12321252 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321256 jge 0x12321263 */
  if ((C.sf==C.of)) goto L_12321263;
  /* 12321258 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232125b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232125e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12321261 jmp 0x1232126c */
  goto L_1232126c;
L_12321263:;
  /* 12321263 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321266 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321269 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1232126c:;
  /* 1232126c jmp 0x12321204 */
  goto L_12321204;
L_1232126e:;
  /* 1232126e mov esp, ebp */
  ESP = (EBP);
  /* 12321270 pop ebp */
  EBP = (pop32());
  /* 12321271 ret  */
  ESPCHK(0x123211f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x12321280 (186 bytes, 50 insns) */
void f_12321280(void) {
  FTRACE(0x12321280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321280 push ebp */
  push32((uint32_t)(EBP));
  /* 12321281 mov ebp, esp */
  EBP = (ESP);
  /* 12321283 push ecx */
  push32((uint32_t)(ECX));
  /* 12321284 mov eax, dword ptr [0x123419b0] */
  EAX = (r32((uint32_t)(0x123419b0)));
  /* 12321289 push eax */
  push32((uint32_t)(EAX));
  /* 1232128a call 0x12319430 */
  push32(0x1232128fu); f_12319430();
  /* 1232128f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12321294 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321297 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1232129a mov dword ptr [0x123419ac], ecx */
  w32((uint32_t)(0x123419ac), (ECX));
  /* 123212a0 mov edx, dword ptr [0x123419b4] */
  EDX = (r32((uint32_t)(0x123419b4)));
  /* 123212a6 push edx */
  push32((uint32_t)(EDX));
  /* 123212a7 call 0x12319430 */
  push32(0x123212acu); f_12319430();
  /* 123212ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123212af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123212b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123212b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123212b7 mov dword ptr [0x123419a4], ecx */
  w32((uint32_t)(0x123419a4), (ECX));
  /* 123212bd mov dword ptr [0x123419a0], 0 */
  w32((uint32_t)(0x123419a0), (0x0u));
  /* 123212c7 cmp dword ptr [0x123419ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123212ce je 0x123212d9 */
  if (C.zf) goto L_123212d9;
  /* 123212d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123212d7 jmp 0x123212eb */
  goto L_123212eb;
L_123212d9:;
  /* 123212d9 mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 123212df push edx */
  push32((uint32_t)(EDX));
  /* 123212e0 call 0x12321d20 */
  push32(0x123212e5u); f_12321d20();
  /* 123212e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123212e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123212eb:;
  /* 123212eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123212ee mov dword ptr [0x123419a8], eax */
  w32((uint32_t)(0x123419a8), (EAX));
  /* 123212f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123212f5 push 0x12321340 */
  push32((uint32_t)(0x12321340u));
  /* 123212fa call dword ptr [0x123442d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442d4))), 0x12321300u);
  /* 12321300 mov ecx, dword ptr [0x123419b8] */
  ECX = (r32((uint32_t)(0x123419b8)));
  /* 12321306 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1232130c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1232130e je 0x1232132c */
  if (C.zf) goto L_1232132c;
  /* 12321310 mov edx, dword ptr [0x123419b8] */
  EDX = (r32((uint32_t)(0x123419b8)));
  /* 12321316 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1232131c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1232131e je 0x1232132c */
  if (C.zf) goto L_1232132c;
  /* 12321320 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 12321325 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12321328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232132a jne 0x12321336 */
  if (!C.zf) goto L_12321336;
L_1232132c:;
  /* 1232132c mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
L_12321336:;
  /* 12321336 mov esp, ebp */
  ESP = (EBP);
  /* 12321338 pop ebp */
  EBP = (pop32());
  /* 12321339 ret  */
  ESPCHK(0x12321280u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x12321340 (804 bytes, 220 insns) */
void f_12321340(void) {
  FTRACE(0x12321340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321340 push ebp */
  push32((uint32_t)(EBP));
  /* 12321341 mov ebp, esp */
  EBP = (ESP);
  /* 12321343 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321349 push eax */
  push32((uint32_t)(EAX));
  /* 1232134a call 0x12321ca0 */
  push32(0x1232134fu); f_12321ca0();
  /* 1232134f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321352 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12321355 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12321357 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1232135a push ecx */
  push32((uint32_t)(ECX));
  /* 1232135b mov edx, dword ptr [0x123419a4] */
  EDX = (r32((uint32_t)(0x123419a4)));
  /* 12321361 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12321363 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321365 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1232136b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321371 push edx */
  push32((uint32_t)(EDX));
  /* 12321372 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321375 push eax */
  push32((uint32_t)(EAX));
  /* 12321376 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x1232137cu);
  /* 1232137c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232137e jne 0x12321394 */
  if (!C.zf) goto L_12321394;
  /* 12321380 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
  /* 1232138a mov eax, 1 */
  EAX = (0x1u);
  /* 1232138f jmp 0x1232165e */
  goto L_1232165e;
L_12321394:;
  /* 12321394 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12321397 push ecx */
  push32((uint32_t)(ECX));
  /* 12321398 mov edx, dword ptr [0x123419b4] */
  EDX = (r32((uint32_t)(0x123419b4)));
  /* 1232139e push edx */
  push32((uint32_t)(EDX));
  /* 1232139f call 0x12323ab0 */
  push32(0x123213a4u); f_12323ab0();
  /* 123213a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123213a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123213a9 jne 0x123214cf */
  if (!C.zf) goto L_123214cf;
  /* 123213af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123213b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123213b4 push eax */
  push32((uint32_t)(EAX));
  /* 123213b5 mov ecx, dword ptr [0x123419ac] */
  ECX = (r32((uint32_t)(0x123419ac)));
  /* 123213bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123213bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123213bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123213c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123213cb push ecx */
  push32((uint32_t)(ECX));
  /* 123213cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123213cf push edx */
  push32((uint32_t)(EDX));
  /* 123213d0 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x123213d6u);
  /* 123213d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123213d8 jne 0x123213ee */
  if (!C.zf) goto L_123213ee;
  /* 123213da mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
  /* 123213e4 mov eax, 1 */
  EAX = (0x1u);
  /* 123213e9 jmp 0x1232165e */
  goto L_1232165e;
L_123213ee:;
  /* 123213ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123213f1 push eax */
  push32((uint32_t)(EAX));
  /* 123213f2 mov ecx, dword ptr [0x123419b0] */
  ECX = (r32((uint32_t)(0x123419b0)));
  /* 123213f8 push ecx */
  push32((uint32_t)(ECX));
  /* 123213f9 call 0x12323ab0 */
  push32(0x123213feu); f_12323ab0();
  /* 123213fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321403 jne 0x12321430 */
  if (!C.zf) goto L_12321430;
  /* 12321405 mov edx, dword ptr [0x123419b8] */
  EDX = (r32((uint32_t)(0x123419b8)));
  /* 1232140b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12321411 mov dword ptr [0x123419b8], edx */
  w32((uint32_t)(0x123419b8), (EDX));
  /* 12321417 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1232141a mov dword ptr [0x123419bc], eax */
  w32((uint32_t)(0x123419bc), (EAX));
  /* 1232141f mov ecx, dword ptr [0x123419bc] */
  ECX = (r32((uint32_t)(0x123419bc)));
  /* 12321425 mov dword ptr [0x123419a0], ecx */
  w32((uint32_t)(0x123419a0), (ECX));
  /* 1232142b jmp 0x123214cf */
  goto L_123214cf;
L_12321430:;
  /* 12321430 mov edx, dword ptr [0x123419b8] */
  EDX = (r32((uint32_t)(0x123419b8)));
  /* 12321436 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12321439 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1232143b jne 0x123214cf */
  if (!C.zf) goto L_123214cf;
  /* 12321441 cmp dword ptr [0x123419a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321448 je 0x1232149d */
  if (C.zf) goto L_1232149d;
  /* 1232144a mov eax, dword ptr [0x123419a8] */
  EAX = (r32((uint32_t)(0x123419a8)));
  /* 1232144f push eax */
  push32((uint32_t)(EAX));
  /* 12321450 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12321453 push ecx */
  push32((uint32_t)(ECX));
  /* 12321454 mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 1232145a push edx */
  push32((uint32_t)(EDX));
  /* 1232145b call 0x12323b80 */
  push32(0x12321460u); f_12323b80();
  /* 12321460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321465 jne 0x1232149d */
  if (!C.zf) goto L_1232149d;
  /* 12321467 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 1232146c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1232146e mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
  /* 12321473 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321476 mov dword ptr [0x123419bc], ecx */
  w32((uint32_t)(0x123419bc), (ECX));
  /* 1232147c mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 12321482 push edx */
  push32((uint32_t)(EDX));
  /* 12321483 call 0x12319430 */
  push32(0x12321488u); f_12319430();
  /* 12321488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232148b cmp eax, dword ptr [0x123419a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123419a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321491 jne 0x1232149b */
  if (!C.zf) goto L_1232149b;
  /* 12321493 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321496 mov dword ptr [0x123419a0], eax */
  w32((uint32_t)(0x123419a0), (EAX));
L_1232149b:;
  /* 1232149b jmp 0x123214cf */
  goto L_123214cf;
L_1232149d:;
  /* 1232149d mov ecx, dword ptr [0x123419b8] */
  ECX = (r32((uint32_t)(0x123419b8)));
  /* 123214a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123214a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123214a8 jne 0x123214cf */
  if (!C.zf) goto L_123214cf;
  /* 123214aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123214ad push edx */
  push32((uint32_t)(EDX));
  /* 123214ae call 0x123219e0 */
  push32(0x123214b3u); f_123219e0();
  /* 123214b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123214b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123214b8 je 0x123214cf */
  if (C.zf) goto L_123214cf;
  /* 123214ba mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 123214bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 123214c1 mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
  /* 123214c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123214c9 mov dword ptr [0x123419bc], ecx */
  w32((uint32_t)(0x123419bc), (ECX));
L_123214cf:;
  /* 123214cf mov edx, dword ptr [0x123419b8] */
  EDX = (r32((uint32_t)(0x123419b8)));
  /* 123214d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 123214db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123214e1 je 0x12321651 */
  if (C.zf) goto L_12321651;
  /* 123214e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123214e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123214ec push eax */
  push32((uint32_t)(EAX));
  /* 123214ed mov ecx, dword ptr [0x123419ac] */
  ECX = (r32((uint32_t)(0x123419ac)));
  /* 123214f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123214f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123214f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123214fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321503 push ecx */
  push32((uint32_t)(ECX));
  /* 12321504 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321507 push edx */
  push32((uint32_t)(EDX));
  /* 12321508 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x1232150eu);
  /* 1232150e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321510 jne 0x12321526 */
  if (!C.zf) goto L_12321526;
  /* 12321512 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
  /* 1232151c mov eax, 1 */
  EAX = (0x1u);
  /* 12321521 jmp 0x1232165e */
  goto L_1232165e;
L_12321526:;
  /* 12321526 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12321529 push eax */
  push32((uint32_t)(EAX));
  /* 1232152a mov ecx, dword ptr [0x123419b0] */
  ECX = (r32((uint32_t)(0x123419b0)));
  /* 12321530 push ecx */
  push32((uint32_t)(ECX));
  /* 12321531 call 0x12323ab0 */
  push32(0x12321536u); f_12323ab0();
  /* 12321536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232153b jne 0x123215f0 */
  if (!C.zf) goto L_123215f0;
  /* 12321541 mov edx, dword ptr [0x123419b8] */
  EDX = (r32((uint32_t)(0x123419b8)));
  /* 12321547 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1232154a mov dword ptr [0x123419b8], edx */
  w32((uint32_t)(0x123419b8), (EDX));
  /* 12321550 cmp dword ptr [0x123419ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321557 je 0x1232157a */
  if (C.zf) goto L_1232157a;
  /* 12321559 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 1232155e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12321561 mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
  /* 12321566 cmp dword ptr [0x123419a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232156d jne 0x12321578 */
  if (!C.zf) goto L_12321578;
  /* 1232156f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321572 mov dword ptr [0x123419a0], ecx */
  w32((uint32_t)(0x123419a0), (ECX));
L_12321578:;
  /* 12321578 jmp 0x123215ee */
  goto L_123215ee;
L_1232157a:;
  /* 1232157a cmp dword ptr [0x123419a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321581 je 0x123215cf */
  if (C.zf) goto L_123215cf;
  /* 12321583 mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 12321589 push edx */
  push32((uint32_t)(EDX));
  /* 1232158a call 0x12319430 */
  push32(0x1232158fu); f_12319430();
  /* 1232158f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321592 cmp eax, dword ptr [0x123419a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123419a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321598 jne 0x123215cf */
  if (!C.zf) goto L_123215cf;
  /* 1232159a push 1 */
  push32((uint32_t)(0x1u));
  /* 1232159c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1232159f push eax */
  push32((uint32_t)(EAX));
  /* 123215a0 call 0x12321a30 */
  push32(0x123215a5u); f_12321a30();
  /* 123215a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123215a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123215aa je 0x123215cd */
  if (C.zf) goto L_123215cd;
  /* 123215ac mov ecx, dword ptr [0x123419b8] */
  ECX = (r32((uint32_t)(0x123419b8)));
  /* 123215b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 123215b5 mov dword ptr [0x123419b8], ecx */
  w32((uint32_t)(0x123419b8), (ECX));
  /* 123215bb cmp dword ptr [0x123419a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123215c2 jne 0x123215cd */
  if (!C.zf) goto L_123215cd;
  /* 123215c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123215c7 mov dword ptr [0x123419a0], edx */
  w32((uint32_t)(0x123419a0), (EDX));
L_123215cd:;
  /* 123215cd jmp 0x123215ee */
  goto L_123215ee;
L_123215cf:;
  /* 123215cf mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 123215d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123215d7 mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
  /* 123215dc cmp dword ptr [0x123419a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123215e3 jne 0x123215ee */
  if (!C.zf) goto L_123215ee;
  /* 123215e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123215e8 mov dword ptr [0x123419a0], ecx */
  w32((uint32_t)(0x123419a0), (ECX));
L_123215ee:;
  /* 123215ee jmp 0x12321651 */
  goto L_12321651;
L_123215f0:;
  /* 123215f0 cmp dword ptr [0x123419ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123215f7 jne 0x12321651 */
  if (!C.zf) goto L_12321651;
  /* 123215f9 cmp dword ptr [0x123419a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321600 je 0x12321651 */
  if (C.zf) goto L_12321651;
  /* 12321602 mov edx, dword ptr [0x123419a8] */
  EDX = (r32((uint32_t)(0x123419a8)));
  /* 12321608 push edx */
  push32((uint32_t)(EDX));
  /* 12321609 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1232160c push eax */
  push32((uint32_t)(EAX));
  /* 1232160d mov ecx, dword ptr [0x123419b0] */
  ECX = (r32((uint32_t)(0x123419b0)));
  /* 12321613 push ecx */
  push32((uint32_t)(ECX));
  /* 12321614 call 0x12323b80 */
  push32(0x12321619u); f_12323b80();
  /* 12321619 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232161c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232161e jne 0x12321651 */
  if (!C.zf) goto L_12321651;
  /* 12321620 push 0 */
  push32((uint32_t)(0x0u));
  /* 12321622 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321625 push edx */
  push32((uint32_t)(EDX));
  /* 12321626 call 0x12321a30 */
  push32(0x1232162bu); f_12321a30();
  /* 1232162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232162e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321630 je 0x12321651 */
  if (C.zf) goto L_12321651;
  /* 12321632 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 12321637 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1232163a mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
  /* 1232163f cmp dword ptr [0x123419a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321646 jne 0x12321651 */
  if (!C.zf) goto L_12321651;
  /* 12321648 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1232164b mov dword ptr [0x123419a0], ecx */
  w32((uint32_t)(0x123419a0), (ECX));
L_12321651:;
  /* 12321651 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 12321656 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12321659 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1232165b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232165d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1232165e:;
  /* 1232165e mov esp, ebp */
  ESP = (EBP);
  /* 12321660 pop ebp */
  EBP = (pop32());
  /* 12321661 ret 4 */
  ESPCHK(0x12321340u, _esp0);
  ESP += 8; return;
}

/* FUN_10011670 @ 0x12321670 (116 bytes, 33 insns) */
void f_12321670(void) {
  FTRACE(0x12321670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321670 push ebp */
  push32((uint32_t)(EBP));
  /* 12321671 mov ebp, esp */
  EBP = (ESP);
  /* 12321673 push ecx */
  push32((uint32_t)(ECX));
  /* 12321674 mov eax, dword ptr [0x123419b0] */
  EAX = (r32((uint32_t)(0x123419b0)));
  /* 12321679 push eax */
  push32((uint32_t)(EAX));
  /* 1232167a call 0x12319430 */
  push32(0x1232167fu); f_12319430();
  /* 1232167f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321682 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12321684 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321687 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1232168a mov dword ptr [0x123419ac], ecx */
  w32((uint32_t)(0x123419ac), (ECX));
  /* 12321690 cmp dword ptr [0x123419ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321697 je 0x123216a2 */
  if (C.zf) goto L_123216a2;
  /* 12321699 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123216a0 jmp 0x123216b4 */
  goto L_123216b4;
L_123216a2:;
  /* 123216a2 mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 123216a8 push edx */
  push32((uint32_t)(EDX));
  /* 123216a9 call 0x12321d20 */
  push32(0x123216aeu); f_12321d20();
  /* 123216ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123216b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123216b4:;
  /* 123216b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123216b7 mov dword ptr [0x123419a8], eax */
  w32((uint32_t)(0x123419a8), (EAX));
  /* 123216bc push 1 */
  push32((uint32_t)(0x1u));
  /* 123216be push 0x123216f0 */
  push32((uint32_t)(0x123216f0u));
  /* 123216c3 call dword ptr [0x123442d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442d4))), 0x123216c9u);
  /* 123216c9 mov ecx, dword ptr [0x123419b8] */
  ECX = (r32((uint32_t)(0x123419b8)));
  /* 123216cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123216d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123216d4 jne 0x123216e0 */
  if (!C.zf) goto L_123216e0;
  /* 123216d6 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
L_123216e0:;
  /* 123216e0 mov esp, ebp */
  ESP = (EBP);
  /* 123216e2 pop ebp */
  EBP = (pop32());
  /* 123216e3 ret  */
  ESPCHK(0x12321670u, _esp0);
  ESP += 4; return;
}

/* FUN_100116f0 @ 0x123216f0 (287 bytes, 86 insns) */
void f_123216f0(void) {
  FTRACE(0x123216f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123216f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123216f1 mov ebp, esp */
  EBP = (ESP);
  /* 123216f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123216f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123216f9 push eax */
  push32((uint32_t)(EAX));
  /* 123216fa call 0x12321ca0 */
  push32(0x123216ffu); f_12321ca0();
  /* 123216ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321702 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12321705 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12321707 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1232170a push ecx */
  push32((uint32_t)(ECX));
  /* 1232170b mov edx, dword ptr [0x123419ac] */
  EDX = (r32((uint32_t)(0x123419ac)));
  /* 12321711 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12321713 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321715 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1232171b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321721 push edx */
  push32((uint32_t)(EDX));
  /* 12321722 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321725 push eax */
  push32((uint32_t)(EAX));
  /* 12321726 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x1232172cu);
  /* 1232172c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232172e jne 0x12321744 */
  if (!C.zf) goto L_12321744;
  /* 12321730 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
  /* 1232173a mov eax, 1 */
  EAX = (0x1u);
  /* 1232173f jmp 0x12321809 */
  goto L_12321809;
L_12321744:;
  /* 12321744 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12321747 push ecx */
  push32((uint32_t)(ECX));
  /* 12321748 mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 1232174e push edx */
  push32((uint32_t)(EDX));
  /* 1232174f call 0x12323ab0 */
  push32(0x12321754u); f_12323ab0();
  /* 12321754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321759 jne 0x12321799 */
  if (!C.zf) goto L_12321799;
  /* 1232175b cmp dword ptr [0x123419ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321762 jne 0x12321776 */
  if (!C.zf) goto L_12321776;
  /* 12321764 push 1 */
  push32((uint32_t)(0x1u));
  /* 12321766 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321769 push eax */
  push32((uint32_t)(EAX));
  /* 1232176a call 0x12321a30 */
  push32(0x1232176fu); f_12321a30();
  /* 1232176f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321774 je 0x12321797 */
  if (C.zf) goto L_12321797;
L_12321776:;
  /* 12321776 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321779 mov dword ptr [0x123419bc], ecx */
  w32((uint32_t)(0x123419bc), (ECX));
  /* 1232177f mov edx, dword ptr [0x123419bc] */
  EDX = (r32((uint32_t)(0x123419bc)));
  /* 12321785 mov dword ptr [0x123419a0], edx */
  w32((uint32_t)(0x123419a0), (EDX));
  /* 1232178b mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 12321790 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12321792 mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
L_12321797:;
  /* 12321797 jmp 0x123217fc */
  goto L_123217fc;
L_12321799:;
  /* 12321799 cmp dword ptr [0x123419ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123217a0 jne 0x123217fc */
  if (!C.zf) goto L_123217fc;
  /* 123217a2 cmp dword ptr [0x123419a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123217a9 je 0x123217fc */
  if (C.zf) goto L_123217fc;
  /* 123217ab mov ecx, dword ptr [0x123419a8] */
  ECX = (r32((uint32_t)(0x123419a8)));
  /* 123217b1 push ecx */
  push32((uint32_t)(ECX));
  /* 123217b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 123217b5 push edx */
  push32((uint32_t)(EDX));
  /* 123217b6 mov eax, dword ptr [0x123419b0] */
  EAX = (r32((uint32_t)(0x123419b0)));
  /* 123217bb push eax */
  push32((uint32_t)(EAX));
  /* 123217bc call 0x12323b80 */
  push32(0x123217c1u); f_12323b80();
  /* 123217c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123217c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123217c6 jne 0x123217fc */
  if (!C.zf) goto L_123217fc;
  /* 123217c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123217ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123217cd push ecx */
  push32((uint32_t)(ECX));
  /* 123217ce call 0x12321a30 */
  push32(0x123217d3u); f_12321a30();
  /* 123217d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123217d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123217d8 je 0x123217fc */
  if (C.zf) goto L_123217fc;
  /* 123217da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123217dd mov dword ptr [0x123419bc], edx */
  w32((uint32_t)(0x123419bc), (EDX));
  /* 123217e3 mov eax, dword ptr [0x123419bc] */
  EAX = (r32((uint32_t)(0x123419bc)));
  /* 123217e8 mov dword ptr [0x123419a0], eax */
  w32((uint32_t)(0x123419a0), (EAX));
  /* 123217ed mov ecx, dword ptr [0x123419b8] */
  ECX = (r32((uint32_t)(0x123419b8)));
  /* 123217f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123217f6 mov dword ptr [0x123419b8], ecx */
  w32((uint32_t)(0x123419b8), (ECX));
L_123217fc:;
  /* 123217fc mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 12321801 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12321804 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12321806 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321808 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12321809:;
  /* 12321809 mov esp, ebp */
  ESP = (EBP);
  /* 1232180b pop ebp */
  EBP = (pop32());
  /* 1232180c ret 4 */
  ESPCHK(0x123216f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011810 @ 0x12321810 (69 bytes, 20 insns) */
void f_12321810(void) {
  FTRACE(0x12321810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321810 push ebp */
  push32((uint32_t)(EBP));
  /* 12321811 mov ebp, esp */
  EBP = (ESP);
  /* 12321813 mov eax, dword ptr [0x123419b4] */
  EAX = (r32((uint32_t)(0x123419b4)));
  /* 12321818 push eax */
  push32((uint32_t)(EAX));
  /* 12321819 call 0x12319430 */
  push32(0x1232181eu); f_12319430();
  /* 1232181e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321821 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12321823 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321826 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12321829 mov dword ptr [0x123419a4], ecx */
  w32((uint32_t)(0x123419a4), (ECX));
  /* 1232182f push 1 */
  push32((uint32_t)(0x1u));
  /* 12321831 push 0x12321860 */
  push32((uint32_t)(0x12321860u));
  /* 12321836 call dword ptr [0x123442d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442d4))), 0x1232183cu);
  /* 1232183c mov edx, dword ptr [0x123419b8] */
  EDX = (r32((uint32_t)(0x123419b8)));
  /* 12321842 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12321845 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12321847 jne 0x12321853 */
  if (!C.zf) goto L_12321853;
  /* 12321849 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
L_12321853:;
  /* 12321853 pop ebp */
  EBP = (pop32());
  /* 12321854 ret  */
  ESPCHK(0x12321810u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x12321860 (172 bytes, 54 insns) */
void f_12321860(void) {
  FTRACE(0x12321860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321860 push ebp */
  push32((uint32_t)(EBP));
  /* 12321861 mov ebp, esp */
  EBP = (ESP);
  /* 12321863 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321869 push eax */
  push32((uint32_t)(EAX));
  /* 1232186a call 0x12321ca0 */
  push32(0x1232186fu); f_12321ca0();
  /* 1232186f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321872 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12321875 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12321877 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1232187a push ecx */
  push32((uint32_t)(ECX));
  /* 1232187b mov edx, dword ptr [0x123419a4] */
  EDX = (r32((uint32_t)(0x123419a4)));
  /* 12321881 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12321883 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321885 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1232188b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321891 push edx */
  push32((uint32_t)(EDX));
  /* 12321892 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12321895 push eax */
  push32((uint32_t)(EAX));
  /* 12321896 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x1232189cu);
  /* 1232189c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232189e jne 0x123218b1 */
  if (!C.zf) goto L_123218b1;
  /* 123218a0 mov dword ptr [0x123419b8], 0 */
  w32((uint32_t)(0x123419b8), (0x0u));
  /* 123218aa mov eax, 1 */
  EAX = (0x1u);
  /* 123218af jmp 0x12321906 */
  goto L_12321906;
L_123218b1:;
  /* 123218b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123218b4 push ecx */
  push32((uint32_t)(ECX));
  /* 123218b5 mov edx, dword ptr [0x123419b4] */
  EDX = (r32((uint32_t)(0x123419b4)));
  /* 123218bb push edx */
  push32((uint32_t)(EDX));
  /* 123218bc call 0x12323ab0 */
  push32(0x123218c1u); f_12323ab0();
  /* 123218c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123218c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123218c6 jne 0x123218f9 */
  if (!C.zf) goto L_123218f9;
  /* 123218c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123218cb push eax */
  push32((uint32_t)(EAX));
  /* 123218cc call 0x123219e0 */
  push32(0x123218d1u); f_123219e0();
  /* 123218d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123218d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123218d6 je 0x123218f9 */
  if (C.zf) goto L_123218f9;
  /* 123218d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123218db mov dword ptr [0x123419bc], ecx */
  w32((uint32_t)(0x123419bc), (ECX));
  /* 123218e1 mov edx, dword ptr [0x123419bc] */
  EDX = (r32((uint32_t)(0x123419bc)));
  /* 123218e7 mov dword ptr [0x123419a0], edx */
  w32((uint32_t)(0x123419a0), (EDX));
  /* 123218ed mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 123218f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 123218f4 mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
L_123218f9:;
  /* 123218f9 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 123218fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12321901 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12321903 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321905 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12321906:;
  /* 12321906 mov esp, ebp */
  ESP = (EBP);
  /* 12321908 pop ebp */
  EBP = (pop32());
  /* 12321909 ret 4 */
  ESPCHK(0x12321860u, _esp0);
  ESP += 8; return;
}

/* FUN_10011910 @ 0x12321910 (43 bytes, 11 insns) */
void f_12321910(void) {
  FTRACE(0x12321910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321910 push ebp */
  push32((uint32_t)(EBP));
  /* 12321911 mov ebp, esp */
  EBP = (ESP);
  /* 12321913 mov eax, dword ptr [0x123419b8] */
  EAX = (r32((uint32_t)(0x123419b8)));
  /* 12321918 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1232191d mov dword ptr [0x123419b8], eax */
  w32((uint32_t)(0x123419b8), (EAX));
  /* 12321922 call dword ptr [0x123442d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442d8))), 0x12321928u);
  /* 12321928 mov dword ptr [0x123419bc], eax */
  w32((uint32_t)(0x123419bc), (EAX));
  /* 1232192d mov ecx, dword ptr [0x123419bc] */
  ECX = (r32((uint32_t)(0x123419bc)));
  /* 12321933 mov dword ptr [0x123419a0], ecx */
  w32((uint32_t)(0x123419a0), (ECX));
  /* 12321939 pop ebp */
  EBP = (pop32());
  /* 1232193a ret  */
  ESPCHK(0x12321910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011940 @ 0x12321940 (155 bytes, 57 insns) */
void f_12321940(void) {
  FTRACE(0x12321940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321940 push ebp */
  push32((uint32_t)(EBP));
  /* 12321941 mov ebp, esp */
  EBP = (ESP);
  /* 12321943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321946 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232194a je 0x1232196b */
  if (C.zf) goto L_1232196b;
  /* 1232194c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232194f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12321952 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12321954 je 0x1232196b */
  if (C.zf) goto L_1232196b;
  /* 12321956 push 0x1233e058 */
  push32((uint32_t)(0x1233e058u));
  /* 1232195b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232195e push edx */
  push32((uint32_t)(EDX));
  /* 1232195f call 0x12320ea0 */
  push32(0x12321964u); f_12320ea0();
  /* 12321964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321969 jne 0x12321993 */
  if (!C.zf) goto L_12321993;
L_1232196b:;
  /* 1232196b push 8 */
  push32((uint32_t)(0x8u));
  /* 1232196d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12321970 push eax */
  push32((uint32_t)(EAX));
  /* 12321971 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12321976 mov ecx, dword ptr [0x123419bc] */
  ECX = (r32((uint32_t)(0x123419bc)));
  /* 1232197c push ecx */
  push32((uint32_t)(ECX));
  /* 1232197d call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x12321983u);
  /* 12321983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321985 jne 0x1232198b */
  if (!C.zf) goto L_1232198b;
  /* 12321987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12321989 jmp 0x123219d7 */
  goto L_123219d7;
L_1232198b:;
  /* 1232198b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1232198e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12321991 jmp 0x123219cb */
  goto L_123219cb;
L_12321993:;
  /* 12321993 push 0x1233e054 */
  push32((uint32_t)(0x1233e054u));
  /* 12321998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232199b push eax */
  push32((uint32_t)(EAX));
  /* 1232199c call 0x12320ea0 */
  push32(0x123219a1u); f_12320ea0();
  /* 123219a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123219a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123219a6 jne 0x123219cb */
  if (!C.zf) goto L_123219cb;
  /* 123219a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 123219aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123219ad push ecx */
  push32((uint32_t)(ECX));
  /* 123219ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 123219b0 mov edx, dword ptr [0x123419bc] */
  EDX = (r32((uint32_t)(0x123419bc)));
  /* 123219b6 push edx */
  push32((uint32_t)(EDX));
  /* 123219b7 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x123219bdu);
  /* 123219bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123219bf jne 0x123219c5 */
  if (!C.zf) goto L_123219c5;
  /* 123219c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123219c3 jmp 0x123219d7 */
  goto L_123219d7;
L_123219c5:;
  /* 123219c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123219c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123219cb:;
  /* 123219cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123219ce push ecx */
  push32((uint32_t)(ECX));
  /* 123219cf call 0x12323c90 */
  push32(0x123219d4u); f_12323c90();
  /* 123219d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123219d7:;
  /* 123219d7 mov esp, ebp */
  ESP = (EBP);
  /* 123219d9 pop ebp */
  EBP = (pop32());
  /* 123219da ret  */
  ESPCHK(0x12321940u, _esp0);
  ESP += 4; return;
}

/* FUN_100119e0 @ 0x123219e0 (79 bytes, 26 insns) */
void f_123219e0(void) {
  FTRACE(0x123219e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123219e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123219e1 mov ebp, esp */
  EBP = (ESP);
  /* 123219e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123219e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 123219ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 123219ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123219f5 jmp 0x12321a00 */
  goto L_12321a00;
L_123219f7:;
  /* 123219f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123219fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123219fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12321a00:;
  /* 12321a00 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321a04 jae 0x12321a26 */
  if (!C.cf) goto L_12321a26;
  /* 12321a06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321a09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12321a0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12321a12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12321a14 mov cx, word ptr [eax*2 + 0x123409c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x123409c4)));
  /* 12321a1c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321a1e jne 0x12321a24 */
  if (!C.zf) goto L_12321a24;
  /* 12321a20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12321a22 jmp 0x12321a2b */
  goto L_12321a2b;
L_12321a24:;
  /* 12321a24 jmp 0x123219f7 */
  goto L_123219f7;
L_12321a26:;
  /* 12321a26 mov eax, 1 */
  EAX = (0x1u);
L_12321a2b:;
  /* 12321a2b mov esp, ebp */
  ESP = (EBP);
  /* 12321a2d pop ebp */
  EBP = (pop32());
  /* 12321a2e ret  */
  ESPCHK(0x123219e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a30 @ 0x12321a30 (135 bytes, 48 insns) */
void f_12321a30(void) {
  FTRACE(0x12321a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12321a31 mov ebp, esp */
  EBP = (ESP);
  /* 12321a33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321a36 push esi */
  push32((uint32_t)(ESI));
  /* 12321a37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321a3a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12321a3f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12321a44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12321a49 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12321a4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12321a51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12321a54 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12321a56 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12321a59 push ecx */
  push32((uint32_t)(ECX));
  /* 12321a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12321a5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321a5f push edx */
  push32((uint32_t)(EDX));
  /* 12321a60 call dword ptr [0x123419c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123419c0))), 0x12321a66u);
  /* 12321a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321a68 jne 0x12321a6e */
  if (!C.zf) goto L_12321a6e;
  /* 12321a6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12321a6c jmp 0x12321ab2 */
  goto L_12321ab2;
L_12321a6e:;
  /* 12321a6e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12321a71 push eax */
  push32((uint32_t)(EAX));
  /* 12321a72 call 0x12321ca0 */
  push32(0x12321a77u); f_12321ca0();
  /* 12321a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321a7a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321a7d je 0x12321aad */
  if (C.zf) goto L_12321aad;
  /* 12321a7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321a83 je 0x12321aad */
  if (C.zf) goto L_12321aad;
  /* 12321a85 mov ecx, dword ptr [0x123419b0] */
  ECX = (r32((uint32_t)(0x123419b0)));
  /* 12321a8b push ecx */
  push32((uint32_t)(ECX));
  /* 12321a8c call 0x12321d20 */
  push32(0x12321a91u); f_12321d20();
  /* 12321a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321a94 mov esi, eax */
  ESI = (EAX);
  /* 12321a96 mov edx, dword ptr [0x123419b0] */
  EDX = (r32((uint32_t)(0x123419b0)));
  /* 12321a9c push edx */
  push32((uint32_t)(EDX));
  /* 12321a9d call 0x12319430 */
  push32(0x12321aa2u); f_12319430();
  /* 12321aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321aa5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321aa7 jne 0x12321aad */
  if (!C.zf) goto L_12321aad;
  /* 12321aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12321aab jmp 0x12321ab2 */
  goto L_12321ab2;
L_12321aad:;
  /* 12321aad mov eax, 1 */
  EAX = (0x1u);
L_12321ab2:;
  /* 12321ab2 pop esi */
  ESI = (pop32());
  /* 12321ab3 mov esp, ebp */
  ESP = (EBP);
  /* 12321ab5 pop ebp */
  EBP = (pop32());
  /* 12321ab6 ret  */
  ESPCHK(0x12321a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ac0 @ 0x12321ac0 (77 bytes, 18 insns) */
void f_12321ac0(void) {
  FTRACE(0x12321ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12321ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12321ac3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321ac9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12321ad3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12321ad9 push eax */
  push32((uint32_t)(EAX));
  /* 12321ada call dword ptr [0x123442fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442fc))), 0x12321ae0u);
  /* 12321ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12321ae2 je 0x12321af9 */
  if (C.zf) goto L_12321af9;
  /* 12321ae4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321aeb jne 0x12321af9 */
  if (!C.zf) goto L_12321af9;
  /* 12321aed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12321af7 jmp 0x12321b03 */
  goto L_12321b03;
L_12321af9:;
  /* 12321af9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12321b03:;
  /* 12321b03 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12321b09 mov esp, ebp */
  ESP = (EBP);
  /* 12321b0b pop ebp */
  EBP = (pop32());
  /* 12321b0c ret  */
  ESPCHK(0x12321ac0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12321b10 (388 bytes, 118 insns) */
void f_12321b10(void) {
  FTRACE(0x12321b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12321b11 mov ebp, esp */
  EBP = (ESP);
  /* 12321b13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321b16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12321b1d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12321b24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12321b2b:;
  /* 12321b2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12321b2e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b31 jg 0x12321c78 */
  if ((!C.zf&&C.sf==C.of)) goto L_12321c78;
  /* 12321b37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12321b3a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321b3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12321b3e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321b40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12321b42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12321b45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321b48 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321b4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321b4e cmp edx, dword ptr [ecx + 0x12340520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12340520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b54 jne 0x12321c4e */
  if (!C.zf) goto L_12321c4e;
  /* 12321b5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12321b5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12321b60 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b64 ja 0x12321b87 */
  if ((!C.cf&&!C.zf)) goto L_12321b87;
  /* 12321b66 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b6a je 0x12321bf9 */
  if (C.zf) goto L_12321bf9;
  /* 12321b70 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b74 je 0x12321ba4 */
  if (C.zf) goto L_12321ba4;
  /* 12321b76 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b7a je 0x12321bc6 */
  if (C.zf) goto L_12321bc6;
  /* 12321b7c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b80 je 0x12321be8 */
  if (C.zf) goto L_12321be8;
  /* 12321b82 jmp 0x12321c18 */
  goto L_12321c18;
L_12321b87:;
  /* 12321b87 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b8e je 0x12321bb5 */
  if (C.zf) goto L_12321bb5;
  /* 12321b90 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321b97 je 0x12321bd7 */
  if (C.zf) goto L_12321bd7;
  /* 12321b99 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321ba0 je 0x12321c0a */
  if (C.zf) goto L_12321c0a;
  /* 12321ba2 jmp 0x12321c18 */
  goto L_12321c18;
L_12321ba4:;
  /* 12321ba4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321ba7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321baa add ecx, 0x12340524 */
  { uint32_t _a=(ECX),_b=(0x12340524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321bb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12321bb3 jmp 0x12321c18 */
  goto L_12321c18;
L_12321bb5:;
  /* 12321bb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321bb8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321bbb mov eax, dword ptr [edx + 0x1234052c] */
  EAX = (r32((uint32_t)(EDX + 0x1234052c)));
  /* 12321bc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12321bc4 jmp 0x12321c18 */
  goto L_12321c18;
L_12321bc6:;
  /* 12321bc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321bc9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321bcc add ecx, 0x12340530 */
  { uint32_t _a=(ECX),_b=(0x12340530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321bd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12321bd5 jmp 0x12321c18 */
  goto L_12321c18;
L_12321bd7:;
  /* 12321bd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321bda imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321bdd mov eax, dword ptr [edx + 0x12340534] */
  EAX = (r32((uint32_t)(EDX + 0x12340534)));
  /* 12321be3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12321be6 jmp 0x12321c18 */
  goto L_12321c18;
L_12321be8:;
  /* 12321be8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321beb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321bee add ecx, 0x12340538 */
  { uint32_t _a=(ECX),_b=(0x12340538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321bf4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12321bf7 jmp 0x12321c18 */
  goto L_12321c18;
L_12321bf9:;
  /* 12321bf9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321bfc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321bff add edx, 0x1234053c */
  { uint32_t _a=(EDX),_b=(0x1234053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321c05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12321c08 jmp 0x12321c18 */
  goto L_12321c18;
L_12321c0a:;
  /* 12321c0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321c0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321c10 add eax, 0x12340544 */
  { uint32_t _a=(EAX),_b=(0x12340544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321c15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12321c18:;
  /* 12321c18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321c1c je 0x12321c24 */
  if (C.zf) goto L_12321c24;
  /* 12321c1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321c22 jge 0x12321c26 */
  if ((C.sf==C.of)) goto L_12321c26;
L_12321c24:;
  /* 12321c24 jmp 0x12321c78 */
  goto L_12321c78;
L_12321c26:;
  /* 12321c26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12321c29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321c2c push ecx */
  push32((uint32_t)(ECX));
  /* 12321c2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12321c30 push edx */
  push32((uint32_t)(EDX));
  /* 12321c31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12321c34 push eax */
  push32((uint32_t)(EAX));
  /* 12321c35 call 0x12319e20 */
  push32(0x12321c3au); f_12319e20();
  /* 12321c3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321c3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12321c40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321c43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12321c47 mov eax, 1 */
  EAX = (0x1u);
  /* 12321c4c jmp 0x12321c8e */
  goto L_12321c8e;
L_12321c4e:;
  /* 12321c4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321c51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321c57 cmp eax, dword ptr [edx + 0x12340520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12340520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321c5d jae 0x12321c6a */
  if (!C.cf) goto L_12321c6a;
  /* 12321c5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321c62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321c65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12321c68 jmp 0x12321c73 */
  goto L_12321c73;
L_12321c6a:;
  /* 12321c6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12321c6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321c70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12321c73:;
  /* 12321c73 jmp 0x12321b2b */
  goto L_12321b2b;
L_12321c78:;
  /* 12321c78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12321c7b push eax */
  push32((uint32_t)(EAX));
  /* 12321c7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12321c7f push ecx */
  push32((uint32_t)(ECX));
  /* 12321c80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12321c83 push edx */
  push32((uint32_t)(EDX));
  /* 12321c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321c87 push eax */
  push32((uint32_t)(EAX));
  /* 12321c88 call dword ptr [0x123442f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f4))), 0x12321c8eu);
L_12321c8e:;
  /* 12321c8e mov esp, ebp */
  ESP = (EBP);
  /* 12321c90 pop ebp */
  EBP = (pop32());
  /* 12321c91 ret 0x10 */
  ESPCHK(0x12321b10u, _esp0);
  ESP += 20; return;
}

/* FUN_10011ca0 @ 0x12321ca0 (118 bytes, 42 insns) */
void f_12321ca0(void) {
  FTRACE(0x12321ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12321ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12321ca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321ca6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12321cad:;
  /* 12321cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321cb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12321cb2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12321cb5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12321cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321cbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321cbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12321cc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12321cc4 je 0x12321d0f */
  if (C.zf) goto L_12321d0f;
  /* 12321cc6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12321cca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321ccd jl 0x12321ce2 */
  if ((C.sf!=C.of)) goto L_12321ce2;
  /* 12321ccf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12321cd3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321cd6 jg 0x12321ce2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12321ce2;
  /* 12321cd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12321cdb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12321cdd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12321ce0 jmp 0x12321cfc */
  goto L_12321cfc;
L_12321ce2:;
  /* 12321ce2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12321ce6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321ce9 jl 0x12321cfc */
  if ((C.sf!=C.of)) goto L_12321cfc;
  /* 12321ceb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12321cef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321cf2 jg 0x12321cfc */
  if ((!C.zf&&C.sf==C.of)) goto L_12321cfc;
  /* 12321cf4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12321cf7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12321cf9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12321cfc:;
  /* 12321cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321cff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12321d02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12321d06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12321d0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12321d0d jmp 0x12321cad */
  goto L_12321cad;
L_12321d0f:;
  /* 12321d0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12321d12 mov esp, ebp */
  ESP = (EBP);
  /* 12321d14 pop ebp */
  EBP = (pop32());
  /* 12321d15 ret  */
  ESPCHK(0x12321ca0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12321d20 (101 bytes, 36 insns) */
void f_12321d20(void) {
  FTRACE(0x12321d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12321d21 mov ebp, esp */
  EBP = (ESP);
  /* 12321d23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12321d26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12321d2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321d30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12321d32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12321d35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321d38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321d3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12321d3e:;
  /* 12321d3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12321d42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321d45 jl 0x12321d50 */
  if ((C.sf!=C.of)) goto L_12321d50;
  /* 12321d47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12321d4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321d4e jle 0x12321d62 */
  if ((C.zf||C.sf!=C.of)) goto L_12321d62;
L_12321d50:;
  /* 12321d50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12321d54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321d57 jl 0x12321d7e */
  if ((C.sf!=C.of)) goto L_12321d7e;
  /* 12321d59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12321d5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321d60 jg 0x12321d7e */
  if ((!C.zf&&C.sf==C.of)) goto L_12321d7e;
L_12321d62:;
  /* 12321d62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12321d65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321d68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12321d6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321d6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12321d70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12321d73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321d76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12321d79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12321d7c jmp 0x12321d3e */
  goto L_12321d3e;
L_12321d7e:;
  /* 12321d7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12321d81 mov esp, ebp */
  ESP = (EBP);
  /* 12321d83 pop ebp */
  EBP = (pop32());
  /* 12321d84 ret  */
  ESPCHK(0x12321d20u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12321d88 (32 bytes, 18 insns) */
void f_12321d88(void) {
  FTRACE(0x12321d88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321d88 push ebp */
  push32((uint32_t)(EBP));
  /* 12321d89 mov ebp, esp */
  EBP = (ESP);
  /* 12321d8b push ebx */
  push32((uint32_t)(EBX));
  /* 12321d8c push esi */
  push32((uint32_t)(ESI));
  /* 12321d8d push edi */
  push32((uint32_t)(EDI));
  /* 12321d8e push ebp */
  push32((uint32_t)(EBP));
  /* 12321d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12321d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12321d93 push 0x12321da0 */
  push32((uint32_t)(0x12321da0u));
  /* 12321d98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12321d9b call 0x12325b6c */
  push32(0x12321da0u); f_12325b6c();
  /* 12321da0 pop ebp */
  EBP = (pop32());
  /* 12321da1 pop edi */
  EDI = (pop32());
  /* 12321da2 pop esi */
  ESI = (pop32());
  /* 12321da3 pop ebx */
  EBX = (pop32());
  /* 12321da4 mov esp, ebp */
  ESP = (EBP);
  /* 12321da6 pop ebp */
  EBP = (pop32());
  /* 12321da7 ret  */
  ESPCHK(0x12321d88u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12321dca (104 bytes, 33 insns) */
void f_12321dca(void) {
  FTRACE(0x12321dcau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321dca push ebx */
  push32((uint32_t)(EBX));
  /* 12321dcb push esi */
  push32((uint32_t)(ESI));
  /* 12321dcc push edi */
  push32((uint32_t)(EDI));
  /* 12321dcd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12321dd1 push eax */
  push32((uint32_t)(EAX));
  /* 12321dd2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12321dd4 push 0x12321da8 */
  push32((uint32_t)(0x12321da8u));
  /* 12321dd9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12321de0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12321de7:;
  /* 12321de7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12321deb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12321dee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12321df1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321df4 je 0x12321e24 */
  if (C.zf) goto L_12321e24;
  /* 12321df6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321dfa je 0x12321e24 */
  if (C.zf) goto L_12321e24;
  /* 12321dfc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12321dff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12321e02 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12321e06 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12321e09 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321e0e jne 0x12321e22 */
  if (!C.zf) goto L_12321e22;
  /* 12321e10 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12321e15 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12321e19 call 0x12321e5e */
  push32(0x12321e1eu); f_12321e5e();
  /* 12321e1e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12321e22u);
L_12321e22:;
  /* 12321e22 jmp 0x12321de7 */
  goto L_12321de7;
L_12321e24:;
  /* 12321e24 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12321e2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321e2e pop edi */
  EDI = (pop32());
  /* 12321e2f pop esi */
  ESI = (pop32());
  /* 12321e30 pop ebx */
  EBX = (pop32());
  /* 12321e31 ret  */
  ESPCHK(0x12321dcau, _esp0);
  ESP += 4; return;
}

/* FUN_10011e5e @ 0x12321e5e (24 bytes, 10 insns) */
void f_12321e5e(void) {
  FTRACE(0x12321e5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321e5e push ebx */
  push32((uint32_t)(EBX));
  /* 12321e5f push ecx */
  push32((uint32_t)(ECX));
  /* 12321e60 mov ebx, 0x12340c98 */
  EBX = (0x12340c98u);
  /* 12321e65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321e68 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12321e6b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12321e6e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12321e71 pop ecx */
  ECX = (pop32());
  /* 12321e72 pop ebx */
  EBX = (pop32());
  /* 12321e73 ret 4 */
  ESPCHK(0x12321e5eu, _esp0);
  ESP += 8; return;
}

/* FUN_10011f3d @ 0x12321f3d (27 bytes, 11 insns) */
void f_12321f3d(void) {
  FTRACE(0x12321f3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321f3d push ebp */
  push32((uint32_t)(EBP));
  /* 12321f3e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12321f42 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12321f44 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12321f47 push eax */
  push32((uint32_t)(EAX));
  /* 12321f48 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12321f4b push eax */
  push32((uint32_t)(EAX));
  /* 12321f4c call 0x12321dca */
  push32(0x12321f51u); f_12321dca();
  /* 12321f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321f54 pop ebp */
  EBP = (pop32());
  /* 12321f55 ret 4 */
  ESPCHK(0x12321f3du, _esp0);
  ESP += 8; return;
}

/* FUN_10011f60 @ 0x12321f60 (122 bytes, 39 insns) */
void f_12321f60(void) {
  FTRACE(0x12321f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12321f61 mov ebp, esp */
  EBP = (ESP);
  /* 12321f63 push ecx */
  push32((uint32_t)(ECX));
  /* 12321f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321f67 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321f6d jae 0x12321f91 */
  if (!C.cf) goto L_12321f91;
  /* 12321f6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321f72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12321f75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321f78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12321f7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12321f7e mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 12321f85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12321f8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12321f8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12321f8f jne 0x12321fac */
  if (!C.zf) goto L_12321fac;
L_12321f91:;
  /* 12321f91 call 0x1231db70 */
  push32(0x12321f96u); f_1231db70();
  /* 12321f96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12321f9c call 0x1231db80 */
  push32(0x12321fa1u); f_1231db80();
  /* 12321fa1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12321fa7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12321faa jmp 0x12321fd6 */
  goto L_12321fd6;
L_12321fac:;
  /* 12321fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321faf push edx */
  push32((uint32_t)(EDX));
  /* 12321fb0 call 0x1231e0a0 */
  push32(0x12321fb5u); f_1231e0a0();
  /* 12321fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321fb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321fbb push eax */
  push32((uint32_t)(EAX));
  /* 12321fbc call 0x12321fe0 */
  push32(0x12321fc1u); f_12321fe0();
  /* 12321fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321fc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12321fc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321fca push ecx */
  push32((uint32_t)(ECX));
  /* 12321fcb call 0x1231e130 */
  push32(0x12321fd0u); f_1231e130();
  /* 12321fd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321fd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12321fd6:;
  /* 12321fd6 mov esp, ebp */
  ESP = (EBP);
  /* 12321fd8 pop ebp */
  EBP = (pop32());
  /* 12321fd9 ret  */
  ESPCHK(0x12321f60u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12321fe0 (170 bytes, 59 insns) */
void f_12321fe0(void) {
  FTRACE(0x12321fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12321fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12321fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12321fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12321fe4 push esi */
  push32((uint32_t)(ESI));
  /* 12321fe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12321fe8 push eax */
  push32((uint32_t)(EAX));
  /* 12321fe9 call 0x1231df20 */
  push32(0x12321feeu); f_1231df20();
  /* 12321fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12321ff1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321ff4 je 0x12322033 */
  if (C.zf) goto L_12322033;
  /* 12321ff6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12321ffa je 0x12322002 */
  if (C.zf) goto L_12322002;
  /* 12321ffc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322000 jne 0x1232201c */
  if (!C.zf) goto L_1232201c;
L_12322002:;
  /* 12322002 push 1 */
  push32((uint32_t)(0x1u));
  /* 12322004 call 0x1231df20 */
  push32(0x12322009u); f_1231df20();
  /* 12322009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232200c mov esi, eax */
  ESI = (EAX);
  /* 1232200e push 2 */
  push32((uint32_t)(0x2u));
  /* 12322010 call 0x1231df20 */
  push32(0x12322015u); f_1231df20();
  /* 12322015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322018 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232201a je 0x12322033 */
  if (C.zf) goto L_12322033;
L_1232201c:;
  /* 1232201c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232201f push ecx */
  push32((uint32_t)(ECX));
  /* 12322020 call 0x1231df20 */
  push32(0x12322025u); f_1231df20();
  /* 12322025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322028 push eax */
  push32((uint32_t)(EAX));
  /* 12322029 call dword ptr [0x12344304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344304))), 0x1232202fu);
  /* 1232202f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12322031 je 0x1232203c */
  if (C.zf) goto L_1232203c;
L_12322033:;
  /* 12322033 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1232203a jmp 0x12322045 */
  goto L_12322045;
L_1232203c:;
  /* 1232203c call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x12322042u);
  /* 12322042 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12322045:;
  /* 12322045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322048 push edx */
  push32((uint32_t)(EDX));
  /* 12322049 call 0x1231de40 */
  push32(0x1232204eu); f_1231de40();
  /* 1232204e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322054 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12322057 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232205a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1232205d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12322060 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 12322067 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1232206c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322070 je 0x12322083 */
  if (C.zf) goto L_12322083;
  /* 12322072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322075 push eax */
  push32((uint32_t)(EAX));
  /* 12322076 call 0x1231dad0 */
  push32(0x1232207bu); f_1231dad0();
  /* 1232207b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232207e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12322081 jmp 0x12322085 */
  goto L_12322085;
L_12322083:;
  /* 12322083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12322085:;
  /* 12322085 pop esi */
  ESI = (pop32());
  /* 12322086 mov esp, ebp */
  ESP = (EBP);
  /* 12322088 pop ebp */
  EBP = (pop32());
  /* 12322089 ret  */
  ESPCHK(0x12321fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x12322090 (146 bytes, 52 insns) */
void f_12322090(void) {
  FTRACE(0x12322090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322090 push ebp */
  push32((uint32_t)(EBP));
  /* 12322091 mov ebp, esp */
  EBP = (ESP);
  /* 12322093 push ebx */
  push32((uint32_t)(EBX));
  /* 12322094 push esi */
  push32((uint32_t)(ESI));
  /* 12322095 push edi */
  push32((uint32_t)(EDI));
L_12322096:;
  /* 12322096 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232209a jne 0x123220ba */
  if (!C.zf) goto L_123220ba;
  /* 1232209c push 0x1233d994 */
  push32((uint32_t)(0x1233d994u));
  /* 123220a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123220a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123220a5 push 0x1233e05c */
  push32((uint32_t)(0x1233e05cu));
  /* 123220aa push 2 */
  push32((uint32_t)(0x2u));
  /* 123220ac call 0x123145a0 */
  push32(0x123220b1u); f_123145a0();
  /* 123220b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123220b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123220b7 jne 0x123220ba */
  if (!C.zf) goto L_123220ba;
  /* 123220b9 int3  */
  x86_unimpl("int3 @ 0x123220b9");
L_123220ba:;
  /* 123220ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123220bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123220be jne 0x12322096 */
  if (!C.zf) goto L_12322096;
  /* 123220c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123220c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123220c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 123220cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123220ce je 0x1232211d */
  if (C.zf) goto L_1232211d;
  /* 123220d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123220d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123220d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 123220d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123220db je 0x1232211d */
  if (C.zf) goto L_1232211d;
  /* 123220dd push 2 */
  push32((uint32_t)(0x2u));
  /* 123220df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123220e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123220e5 push eax */
  push32((uint32_t)(EAX));
  /* 123220e6 call 0x12317090 */
  push32(0x123220ebu); f_12317090();
  /* 123220eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123220ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123220f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123220f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 123220fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123220fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12322100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322103 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12322109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232210c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12322113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322116 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1232211d:;
  /* 1232211d pop edi */
  EDI = (pop32());
  /* 1232211e pop esi */
  ESI = (pop32());
  /* 1232211f pop ebx */
  EBX = (pop32());
  /* 12322120 pop ebp */
  EBP = (pop32());
  /* 12322121 ret  */
  ESPCHK(0x12322090u, _esp0);
  ESP += 4; return;
}

/* FUN_10012130 @ 0x12322130 (289 bytes, 97 insns) */
void f_12322130(void) {
  FTRACE(0x12322130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322130 push ebp */
  push32((uint32_t)(EBP));
  /* 12322131 mov ebp, esp */
  EBP = (ESP);
  /* 12322133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322136 push esi */
  push32((uint32_t)(ESI));
  /* 12322137 mov eax, dword ptr [0x12340ca8] */
  EAX = (r32((uint32_t)(0x12340ca8)));
  /* 1232213c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1232213f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12322146 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1232214d jmp 0x12322158 */
  goto L_12322158;
L_1232214f:;
  /* 1232214f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322152 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322155 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12322158:;
  /* 12322158 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232215c jae 0x12322191 */
  if (!C.cf) goto L_12322191;
  /* 1232215e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322164 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12322167 push ecx */
  push32((uint32_t)(ECX));
  /* 12322168 call 0x12319430 */
  push32(0x1232216du); f_12319430();
  /* 1232216d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322170 mov esi, eax */
  ESI = (EAX);
  /* 12322172 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322175 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322178 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1232217c push ecx */
  push32((uint32_t)(ECX));
  /* 1232217d call 0x12319430 */
  push32(0x12322182u); f_12319430();
  /* 12322182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322185 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322188 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1232218c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1232218f jmp 0x1232214f */
  goto L_1232214f;
L_12322191:;
  /* 12322191 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12322194 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322197 push eax */
  push32((uint32_t)(EAX));
  /* 12322198 call 0x123165e0 */
  push32(0x1232219du); f_123165e0();
  /* 1232219d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123221a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123221a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123221a7 je 0x12322249 */
  if (C.zf) goto L_12322249;
  /* 123221ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123221b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123221b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123221ba jmp 0x123221c5 */
  goto L_123221c5;
L_123221bc:;
  /* 123221bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123221bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123221c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123221c5:;
  /* 123221c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123221c9 jae 0x1232223a */
  if (!C.cf) goto L_1232223a;
  /* 123221cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123221ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123221d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123221d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123221d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123221da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123221dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123221e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123221e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123221e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123221e7 push edx */
  push32((uint32_t)(EDX));
  /* 123221e8 call 0x123195b0 */
  push32(0x123221edu); f_123195b0();
  /* 123221ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123221f0 push eax */
  push32((uint32_t)(EAX));
  /* 123221f1 call 0x12319430 */
  push32(0x123221f6u); f_12319430();
  /* 123221f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123221f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123221fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123221fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12322201 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322204 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12322207 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232220a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232220d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12322210 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322213 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322216 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1232221a push eax */
  push32((uint32_t)(EAX));
  /* 1232221b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232221e push ecx */
  push32((uint32_t)(ECX));
  /* 1232221f call 0x123195b0 */
  push32(0x12322224u); f_123195b0();
  /* 12322224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322227 push eax */
  push32((uint32_t)(EAX));
  /* 12322228 call 0x12319430 */
  push32(0x1232222du); f_12319430();
  /* 1232222d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322230 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322233 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322235 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12322238 jmp 0x123221bc */
  goto L_123221bc;
L_1232223a:;
  /* 1232223a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232223d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12322240 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322243 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322246 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12322249:;
  /* 12322249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232224c pop esi */
  ESI = (pop32());
  /* 1232224d mov esp, ebp */
  ESP = (EBP);
  /* 1232224f pop ebp */
  EBP = (pop32());
  /* 12322250 ret  */
  ESPCHK(0x12322130u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x12322260 (291 bytes, 97 insns) */
void f_12322260(void) {
  FTRACE(0x12322260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322260 push ebp */
  push32((uint32_t)(EBP));
  /* 12322261 mov ebp, esp */
  EBP = (ESP);
  /* 12322263 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322266 push esi */
  push32((uint32_t)(ESI));
  /* 12322267 mov eax, dword ptr [0x12340ca8] */
  EAX = (r32((uint32_t)(0x12340ca8)));
  /* 1232226c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1232226f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12322276 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1232227d jmp 0x12322288 */
  goto L_12322288;
L_1232227f:;
  /* 1232227f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322282 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322285 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12322288:;
  /* 12322288 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232228c jae 0x123222c2 */
  if (!C.cf) goto L_123222c2;
  /* 1232228e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322291 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322294 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12322298 push ecx */
  push32((uint32_t)(ECX));
  /* 12322299 call 0x12319430 */
  push32(0x1232229eu); f_12319430();
  /* 1232229e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123222a1 mov esi, eax */
  ESI = (EAX);
  /* 123222a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123222a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123222a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 123222ad push ecx */
  push32((uint32_t)(ECX));
  /* 123222ae call 0x12319430 */
  push32(0x123222b3u); f_12319430();
  /* 123222b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123222b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123222b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123222bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123222c0 jmp 0x1232227f */
  goto L_1232227f;
L_123222c2:;
  /* 123222c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123222c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123222c8 push eax */
  push32((uint32_t)(EAX));
  /* 123222c9 call 0x123165e0 */
  push32(0x123222ceu); f_123165e0();
  /* 123222ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123222d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123222d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123222d8 je 0x1232237b */
  if (C.zf) goto L_1232237b;
  /* 123222de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123222e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123222e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123222eb jmp 0x123222f6 */
  goto L_123222f6;
L_123222ed:;
  /* 123222ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123222f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123222f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123222f6:;
  /* 123222f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123222fa jae 0x1232236c */
  if (!C.cf) goto L_1232236c;
  /* 123222fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123222ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12322302 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322308 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1232230b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232230e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322311 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12322315 push ecx */
  push32((uint32_t)(ECX));
  /* 12322316 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322319 push edx */
  push32((uint32_t)(EDX));
  /* 1232231a call 0x123195b0 */
  push32(0x1232231fu); f_123195b0();
  /* 1232231f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322322 push eax */
  push32((uint32_t)(EAX));
  /* 12322323 call 0x12319430 */
  push32(0x12322328u); f_12319430();
  /* 12322328 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232232b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232232e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322330 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12322333 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322336 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12322339 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232233c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232233f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12322342 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322345 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322348 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1232234c push eax */
  push32((uint32_t)(EAX));
  /* 1232234d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322350 push ecx */
  push32((uint32_t)(ECX));
  /* 12322351 call 0x123195b0 */
  push32(0x12322356u); f_123195b0();
  /* 12322356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322359 push eax */
  push32((uint32_t)(EAX));
  /* 1232235a call 0x12319430 */
  push32(0x1232235fu); f_12319430();
  /* 1232235f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322362 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322365 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322367 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1232236a jmp 0x123222ed */
  goto L_123222ed;
L_1232236c:;
  /* 1232236c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232236f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12322372 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322375 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322378 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1232237b:;
  /* 1232237b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232237e pop esi */
  ESI = (pop32());
  /* 1232237f mov esp, ebp */
  ESP = (EBP);
  /* 12322381 pop ebp */
  EBP = (pop32());
  /* 12322382 ret  */
  ESPCHK(0x12322260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x12322390 (878 bytes, 273 insns) */
void f_12322390(void) {
  FTRACE(0x12322390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322390 push ebp */
  push32((uint32_t)(EBP));
  /* 12322391 mov ebp, esp */
  EBP = (ESP);
  /* 12322393 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322396 push esi */
  push32((uint32_t)(ESI));
  /* 12322397 mov eax, dword ptr [0x12340ca8] */
  EAX = (r32((uint32_t)(0x12340ca8)));
  /* 1232239c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1232239f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123223a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123223ad jmp 0x123223b8 */
  goto L_123223b8;
L_123223af:;
  /* 123223af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123223b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123223b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123223b8:;
  /* 123223b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123223bc jae 0x123223f1 */
  if (!C.cf) goto L_123223f1;
  /* 123223be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123223c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123223c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123223c7 push ecx */
  push32((uint32_t)(ECX));
  /* 123223c8 call 0x12319430 */
  push32(0x123223cdu); f_12319430();
  /* 123223cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123223d0 mov esi, eax */
  ESI = (EAX);
  /* 123223d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123223d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123223d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 123223dc push ecx */
  push32((uint32_t)(ECX));
  /* 123223dd call 0x12319430 */
  push32(0x123223e2u); f_12319430();
  /* 123223e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123223e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123223e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123223ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123223ef jmp 0x123223af */
  goto L_123223af;
L_123223f1:;
  /* 123223f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123223f8 jmp 0x12322403 */
  goto L_12322403;
L_123223fa:;
  /* 123223fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123223fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322400 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12322403:;
  /* 12322403 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322407 jae 0x1232243d */
  if (!C.cf) goto L_1232243d;
  /* 12322409 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232240c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232240f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12322413 push eax */
  push32((uint32_t)(EAX));
  /* 12322414 call 0x12319430 */
  push32(0x12322419u); f_12319430();
  /* 12322419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232241c mov esi, eax */
  ESI = (EAX);
  /* 1232241e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322421 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322424 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12322428 push eax */
  push32((uint32_t)(EAX));
  /* 12322429 call 0x12319430 */
  push32(0x1232242eu); f_12319430();
  /* 1232242e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322431 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322434 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12322438 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1232243b jmp 0x123223fa */
  goto L_123223fa;
L_1232243d:;
  /* 1232243d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322440 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12322446 push eax */
  push32((uint32_t)(EAX));
  /* 12322447 call 0x12319430 */
  push32(0x1232244cu); f_12319430();
  /* 1232244c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232244f mov esi, eax */
  ESI = (EAX);
  /* 12322451 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322454 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1232245a push edx */
  push32((uint32_t)(EDX));
  /* 1232245b call 0x12319430 */
  push32(0x12322460u); f_12319430();
  /* 12322460 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322463 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322466 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1232246a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1232246d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322470 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12322476 push edx */
  push32((uint32_t)(EDX));
  /* 12322477 call 0x12319430 */
  push32(0x1232247cu); f_12319430();
  /* 1232247c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232247f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12322482 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12322486 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12322489 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232248c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12322492 push ecx */
  push32((uint32_t)(ECX));
  /* 12322493 call 0x12319430 */
  push32(0x12322498u); f_12319430();
  /* 12322498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232249b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232249e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123224a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123224a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123224a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 123224ae push edx */
  push32((uint32_t)(EDX));
  /* 123224af call 0x12319430 */
  push32(0x123224b4u); f_12319430();
  /* 123224b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123224b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123224ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123224be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123224c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123224c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123224c9 push eax */
  push32((uint32_t)(EAX));
  /* 123224ca call 0x123165e0 */
  push32(0x123224cfu); f_123165e0();
  /* 123224cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123224d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123224d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123224d9 je 0x123226f6 */
  if (C.zf) goto L_123226f6;
  /* 123224df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123224e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123224e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123224e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123224ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123224f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 123224f6 mov eax, dword ptr [0x12340ca8] */
  EAX = (r32((uint32_t)(0x12340ca8)));
  /* 123224fb push eax */
  push32((uint32_t)(EAX));
  /* 123224fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123224ff push ecx */
  push32((uint32_t)(ECX));
  /* 12322500 call 0x1231d790 */
  push32(0x12322505u); f_1231d790();
  /* 12322505 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322508 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1232250f jmp 0x1232251a */
  goto L_1232251a;
L_12322511:;
  /* 12322511 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322514 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322517 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1232251a:;
  /* 1232251a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232251e jae 0x1232258e */
  if (!C.cf) goto L_1232258e;
  /* 12322520 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322523 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12322526 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322529 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1232252c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232252f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322532 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12322535 push edx */
  push32((uint32_t)(EDX));
  /* 12322536 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322539 push eax */
  push32((uint32_t)(EAX));
  /* 1232253a call 0x123195b0 */
  push32(0x1232253fu); f_123195b0();
  /* 1232253f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322542 push eax */
  push32((uint32_t)(EAX));
  /* 12322543 call 0x12319430 */
  push32(0x12322548u); f_12319430();
  /* 12322548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232254b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232254e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12322552 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12322555 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322558 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1232255b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232255e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12322562 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12322565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322568 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1232256c push edx */
  push32((uint32_t)(EDX));
  /* 1232256d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322570 push eax */
  push32((uint32_t)(EAX));
  /* 12322571 call 0x123195b0 */
  push32(0x12322576u); f_123195b0();
  /* 12322576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322579 push eax */
  push32((uint32_t)(EAX));
  /* 1232257a call 0x12319430 */
  push32(0x1232257fu); f_12319430();
  /* 1232257f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322582 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322585 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12322589 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1232258c jmp 0x12322511 */
  goto L_12322511;
L_1232258e:;
  /* 1232258e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12322595 jmp 0x123225a0 */
  goto L_123225a0;
L_12322597:;
  /* 12322597 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232259a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232259d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123225a0:;
  /* 123225a0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123225a4 jae 0x12322616 */
  if (!C.cf) goto L_12322616;
  /* 123225a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123225a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123225ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123225af mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 123225b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123225b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123225b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123225bd push eax */
  push32((uint32_t)(EAX));
  /* 123225be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123225c1 push ecx */
  push32((uint32_t)(ECX));
  /* 123225c2 call 0x123195b0 */
  push32(0x123225c7u); f_123195b0();
  /* 123225c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123225ca push eax */
  push32((uint32_t)(EAX));
  /* 123225cb call 0x12319430 */
  push32(0x123225d0u); f_12319430();
  /* 123225d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123225d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123225d6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123225da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123225dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123225e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123225e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123225e6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 123225ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123225ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123225f0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123225f4 push eax */
  push32((uint32_t)(EAX));
  /* 123225f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123225f8 push ecx */
  push32((uint32_t)(ECX));
  /* 123225f9 call 0x123195b0 */
  push32(0x123225feu); f_123195b0();
  /* 123225fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322601 push eax */
  push32((uint32_t)(EAX));
  /* 12322602 call 0x12319430 */
  push32(0x12322607u); f_12319430();
  /* 12322607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232260a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232260d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12322611 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12322614 jmp 0x12322597 */
  goto L_12322597;
L_12322616:;
  /* 12322616 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12322619 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232261c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12322622 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322625 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1232262b push ecx */
  push32((uint32_t)(ECX));
  /* 1232262c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1232262f push edx */
  push32((uint32_t)(EDX));
  /* 12322630 call 0x123195b0 */
  push32(0x12322635u); f_123195b0();
  /* 12322635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322638 push eax */
  push32((uint32_t)(EAX));
  /* 12322639 call 0x12319430 */
  push32(0x1232263eu); f_12319430();
  /* 1232263e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322641 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322644 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12322648 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1232264b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1232264e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322651 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12322657 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232265a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12322660 push eax */
  push32((uint32_t)(EAX));
  /* 12322661 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322664 push ecx */
  push32((uint32_t)(ECX));
  /* 12322665 call 0x123195b0 */
  push32(0x1232266au); f_123195b0();
  /* 1232266a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232266d push eax */
  push32((uint32_t)(EAX));
  /* 1232266e call 0x12319430 */
  push32(0x12322673u); f_12319430();
  /* 12322673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322676 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322679 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1232267d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12322680 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12322683 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322686 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1232268c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232268f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12322695 push ecx */
  push32((uint32_t)(ECX));
  /* 12322696 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12322699 push edx */
  push32((uint32_t)(EDX));
  /* 1232269a call 0x123195b0 */
  push32(0x1232269fu); f_123195b0();
  /* 1232269f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123226a2 push eax */
  push32((uint32_t)(EAX));
  /* 123226a3 call 0x12319430 */
  push32(0x123226a8u); f_12319430();
  /* 123226a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123226ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123226ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123226b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123226b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123226b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123226bb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 123226c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123226c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 123226ca push eax */
  push32((uint32_t)(EAX));
  /* 123226cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123226ce push ecx */
  push32((uint32_t)(ECX));
  /* 123226cf call 0x123195b0 */
  push32(0x123226d4u); f_123195b0();
  /* 123226d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123226d7 push eax */
  push32((uint32_t)(EAX));
  /* 123226d8 call 0x12319430 */
  push32(0x123226ddu); f_12319430();
  /* 123226dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123226e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123226e3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123226e7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123226ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123226ed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123226f0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_123226f6:;
  /* 123226f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123226f9 pop esi */
  ESI = (pop32());
  /* 123226fa mov esp, ebp */
  ESP = (EBP);
  /* 123226fc pop ebp */
  EBP = (pop32());
  /* 123226fd ret  */
  ESPCHK(0x12322390u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x12322700 (31 bytes, 15 insns) */
void f_12322700(void) {
  FTRACE(0x12322700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322700 push ebp */
  push32((uint32_t)(EBP));
  /* 12322701 mov ebp, esp */
  EBP = (ESP);
  /* 12322703 push 0 */
  push32((uint32_t)(0x0u));
  /* 12322705 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322708 push eax */
  push32((uint32_t)(EAX));
  /* 12322709 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232270c push ecx */
  push32((uint32_t)(ECX));
  /* 1232270d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322710 push edx */
  push32((uint32_t)(EDX));
  /* 12322711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322714 push eax */
  push32((uint32_t)(EAX));
  /* 12322715 call 0x12322720 */
  push32(0x1232271au); f_12322720();
  /* 1232271a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232271d pop ebp */
  EBP = (pop32());
  /* 1232271e ret  */
  ESPCHK(0x12322700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012720 @ 0x12322720 (394 bytes, 123 insns) */
void f_12322720(void) {
  FTRACE(0x12322720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322720 push ebp */
  push32((uint32_t)(EBP));
  /* 12322721 mov ebp, esp */
  EBP = (ESP);
  /* 12322723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322726 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322729 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1232272c push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 12322731 call dword ptr [0x12344224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344224))), 0x12322737u);
  /* 12322737 cmp dword ptr [0x12341ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232273e je 0x1232275e */
  if (C.zf) goto L_1232275e;
  /* 12322740 push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 12322745 call dword ptr [0x12344218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344218))), 0x1232274bu);
  /* 1232274b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1232274d call 0x1231a9b0 */
  push32(0x12322752u); f_1231a9b0();
  /* 12322752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322755 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1232275c jmp 0x12322765 */
  goto L_12322765;
L_1232275e:;
  /* 1232275e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12322765:;
  /* 12322765 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322769 jne 0x12322776 */
  if (!C.zf) goto L_12322776;
  /* 1232276b mov ecx, dword ptr [0x12340ca8] */
  ECX = (r32((uint32_t)(0x12340ca8)));
  /* 12322771 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12322774 jmp 0x1232277c */
  goto L_1232277c;
L_12322776:;
  /* 12322776 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322779 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1232277c:;
  /* 1232277c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232277f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12322782:;
  /* 12322782 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322786 jbe 0x12322873 */
  if ((C.cf||C.zf)) goto L_12322873;
  /* 1232278c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232278f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12322791 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12322794 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12322798 je 0x123227a2 */
  if (C.zf) goto L_123227a2;
  /* 1232279a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1232279e je 0x123227a7 */
  if (C.zf) goto L_123227a7;
  /* 123227a0 jmp 0x12322801 */
  goto L_12322801;
L_123227a2:;
  /* 123227a2 jmp 0x12322873 */
  goto L_12322873;
L_123227a7:;
  /* 123227a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123227aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123227ad mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 123227b0 mov dword ptr [0x12341aa0], 0 */
  w32((uint32_t)(0x12341aa0), (0x0u));
  /* 123227ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123227bd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123227c0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123227c3 jne 0x123227d8 */
  if (!C.zf) goto L_123227d8;
  /* 123227c5 mov dword ptr [0x12341aa0], 1 */
  w32((uint32_t)(0x12341aa0), (0x1u));
  /* 123227cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123227d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123227d5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123227d8:;
  /* 123227d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123227db push ecx */
  push32((uint32_t)(ECX));
  /* 123227dc lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 123227df push edx */
  push32((uint32_t)(EDX));
  /* 123227e0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 123227e3 push eax */
  push32((uint32_t)(EAX));
  /* 123227e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123227e7 push ecx */
  push32((uint32_t)(ECX));
  /* 123227e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123227eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123227ed push eax */
  push32((uint32_t)(EAX));
  /* 123227ee call 0x123228b0 */
  push32(0x123227f3u); f_123228b0();
  /* 123227f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123227f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123227f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123227fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123227ff jmp 0x1232286e */
  goto L_1232286e;
L_12322801:;
  /* 12322801 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12322806 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12322808 mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 1232280e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12322810 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12322814 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1232281a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1232281c je 0x12322849 */
  if (C.zf) goto L_12322849;
  /* 1232281e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322822 jbe 0x12322849 */
  if ((C.cf||C.zf)) goto L_12322849;
  /* 12322824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322827 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232282a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1232282c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1232282e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322831 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322834 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12322837 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232283a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232283d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12322840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322843 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322846 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12322849:;
  /* 12322849 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232284c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232284f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12322851 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12322853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322856 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322859 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1232285c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232285f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322862 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12322865 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12322868 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232286b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1232286e:;
  /* 1232286e jmp 0x12322782 */
  goto L_12322782;
L_12322873:;
  /* 12322873 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322877 je 0x12322885 */
  if (C.zf) goto L_12322885;
  /* 12322879 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1232287b call 0x1231aa50 */
  push32(0x12322880u); f_1231aa50();
  /* 12322880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322883 jmp 0x12322890 */
  goto L_12322890;
L_12322885:;
  /* 12322885 push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 1232288a call dword ptr [0x12344218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344218))), 0x12322890u);
L_12322890:;
  /* 12322890 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322894 jbe 0x123228a4 */
  if ((C.cf||C.zf)) goto L_123228a4;
  /* 12322896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322899 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1232289c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232289f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123228a2 jmp 0x123228a6 */
  goto L_123228a6;
L_123228a4:;
  /* 123228a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123228a6:;
  /* 123228a6 mov esp, ebp */
  ESP = (EBP);
  /* 123228a8 pop ebp */
  EBP = (pop32());
  /* 123228a9 ret  */
  ESPCHK(0x12322720u, _esp0);
  ESP += 4; return;
}

/* FUN_100128b0 @ 0x123228b0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_123228b0(void) {
  FTRACE(0x123228b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123228b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123228b1 mov ebp, esp */
  EBP = (ESP);
  /* 123228b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123228b6 push esi */
  push32((uint32_t)(ESI));
  /* 123228b7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 123228bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123228be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123228c1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123228c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123228c7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123228cb ja 0x12322e18 */
  if ((!C.cf&&!C.zf)) goto L_12322e18;
  /* 123228d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123228d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123228d6 mov dl, byte ptr [eax + 0x12322e79] */
  DL = (r8((uint32_t)(EAX + 0x12322e79)));
  /* 123228dc jmp dword ptr [edx*4 + 0x12322e1d] */
  switch (EDX) {
    case 0: goto L_12322df6;
    case 1: goto L_12322905;
    case 2: goto L_1232294b;
    case 3: goto L_12322a98;
    case 4: goto L_12322ac0;
    case 5: goto L_12322b5f;
    case 6: goto L_12322bcb;
    case 7: goto L_12322bf4;
    case 8: goto L_12322c35;
    case 9: goto L_12322d17;
    case 10: goto L_12322d7e;
    case 11: goto L_12322dcb;
    case 12: goto L_123228e3;
    case 13: goto L_12322928;
    case 14: goto L_1232296e;
    case 15: goto L_12322a6e;
    case 16: goto L_12322b05;
    case 17: goto L_12322b32;
    case 18: goto L_12322b87;
    case 19: goto L_12322c0b;
    case 20: goto L_12322cb9;
    case 21: goto L_12322d48;
    case 22: goto L_12322e18;
    default: x86_unimpl("switch@0x123228dc out of table"); return;
  }
L_123228e3:;
  /* 123228e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123228e6 push ecx */
  push32((uint32_t)(ECX));
  /* 123228e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123228ea push edx */
  push32((uint32_t)(EDX));
  /* 123228eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123228ee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123228f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123228f4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123228f7 push eax */
  push32((uint32_t)(EAX));
  /* 123228f8 call 0x12322ed0 */
  push32(0x123228fdu); f_12322ed0();
  /* 123228fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322900 jmp 0x12322e18 */
  goto L_12322e18;
L_12322905:;
  /* 12322905 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322908 push ecx */
  push32((uint32_t)(ECX));
  /* 12322909 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232290c push edx */
  push32((uint32_t)(EDX));
  /* 1232290d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322910 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12322913 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322916 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1232291a push eax */
  push32((uint32_t)(EAX));
  /* 1232291b call 0x12322ed0 */
  push32(0x12322920u); f_12322ed0();
  /* 12322920 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322923 jmp 0x12322e18 */
  goto L_12322e18;
L_12322928:;
  /* 12322928 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232292b push ecx */
  push32((uint32_t)(ECX));
  /* 1232292c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232292f push edx */
  push32((uint32_t)(EDX));
  /* 12322930 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322933 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12322936 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322939 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1232293d push eax */
  push32((uint32_t)(EAX));
  /* 1232293e call 0x12322ed0 */
  push32(0x12322943u); f_12322ed0();
  /* 12322943 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322946 jmp 0x12322e18 */
  goto L_12322e18;
L_1232294b:;
  /* 1232294b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232294e push ecx */
  push32((uint32_t)(ECX));
  /* 1232294f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322952 push edx */
  push32((uint32_t)(EDX));
  /* 12322953 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322956 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12322959 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1232295c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12322960 push eax */
  push32((uint32_t)(EAX));
  /* 12322961 call 0x12322ed0 */
  push32(0x12322966u); f_12322ed0();
  /* 12322966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322969 jmp 0x12322e18 */
  goto L_12322e18;
L_1232296e:;
  /* 1232296e cmp dword ptr [0x12341aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322975 je 0x123229f6 */
  if (C.zf) goto L_123229f6;
  /* 12322977 mov dword ptr [0x12341aa0], 0 */
  w32((uint32_t)(0x12341aa0), (0x0u));
  /* 12322981 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322984 push ecx */
  push32((uint32_t)(ECX));
  /* 12322985 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322988 push edx */
  push32((uint32_t)(EDX));
  /* 12322989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232298c push eax */
  push32((uint32_t)(EAX));
  /* 1232298d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322990 push ecx */
  push32((uint32_t)(ECX));
  /* 12322991 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322994 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1232299a push eax */
  push32((uint32_t)(EAX));
  /* 1232299b call 0x12323080 */
  push32(0x123229a0u); f_12323080();
  /* 123229a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123229a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123229a6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123229a9 jne 0x123229b0 */
  if (!C.zf) goto L_123229b0;
  /* 123229ab jmp 0x12322e18 */
  goto L_12322e18;
L_123229b0:;
  /* 123229b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123229b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123229b5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 123229b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123229bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123229bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123229c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123229c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123229c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123229c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123229ca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123229cd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123229d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123229d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123229d5 push ecx */
  push32((uint32_t)(ECX));
  /* 123229d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123229d9 push edx */
  push32((uint32_t)(EDX));
  /* 123229da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123229dd push eax */
  push32((uint32_t)(EAX));
  /* 123229de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123229e1 push ecx */
  push32((uint32_t)(ECX));
  /* 123229e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123229e5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 123229eb push eax */
  push32((uint32_t)(EAX));
  /* 123229ec call 0x12323080 */
  push32(0x123229f1u); f_12323080();
  /* 123229f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123229f4 jmp 0x12322a69 */
  goto L_12322a69;
L_123229f6:;
  /* 123229f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123229f9 push ecx */
  push32((uint32_t)(ECX));
  /* 123229fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123229fd push edx */
  push32((uint32_t)(EDX));
  /* 123229fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322a01 push eax */
  push32((uint32_t)(EAX));
  /* 12322a02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322a05 push ecx */
  push32((uint32_t)(ECX));
  /* 12322a06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322a09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12322a0f push eax */
  push32((uint32_t)(EAX));
  /* 12322a10 call 0x12323080 */
  push32(0x12322a15u); f_12323080();
  /* 12322a15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322a18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322a1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322a1e jne 0x12322a25 */
  if (!C.zf) goto L_12322a25;
  /* 12322a20 jmp 0x12322e18 */
  goto L_12322e18;
L_12322a25:;
  /* 12322a25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322a28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12322a2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12322a2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322a30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12322a32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322a35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322a38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12322a3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322a3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12322a3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322a42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322a45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12322a47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322a4a push ecx */
  push32((uint32_t)(ECX));
  /* 12322a4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322a4e push edx */
  push32((uint32_t)(EDX));
  /* 12322a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322a52 push eax */
  push32((uint32_t)(EAX));
  /* 12322a53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322a56 push ecx */
  push32((uint32_t)(ECX));
  /* 12322a57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322a5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12322a60 push eax */
  push32((uint32_t)(EAX));
  /* 12322a61 call 0x12323080 */
  push32(0x12322a66u); f_12323080();
  /* 12322a66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12322a69:;
  /* 12322a69 jmp 0x12322e18 */
  goto L_12322e18;
L_12322a6e:;
  /* 12322a6e mov ecx, dword ptr [0x12341aa0] */
  ECX = (r32((uint32_t)(0x12341aa0)));
  /* 12322a74 mov dword ptr [0x12341ab0], ecx */
  w32((uint32_t)(0x12341ab0), (ECX));
  /* 12322a7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322a7d push edx */
  push32((uint32_t)(EDX));
  /* 12322a7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322a81 push eax */
  push32((uint32_t)(EAX));
  /* 12322a82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12322a84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322a87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12322a8a push edx */
  push32((uint32_t)(EDX));
  /* 12322a8b call 0x12322f20 */
  push32(0x12322a90u); f_12322f20();
  /* 12322a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322a93 jmp 0x12322e18 */
  goto L_12322e18;
L_12322a98:;
  /* 12322a98 mov eax, dword ptr [0x12341aa0] */
  EAX = (r32((uint32_t)(0x12341aa0)));
  /* 12322a9d mov dword ptr [0x12341ab0], eax */
  w32((uint32_t)(0x12341ab0), (EAX));
  /* 12322aa2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12322aa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322aa9 push edx */
  push32((uint32_t)(EDX));
  /* 12322aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12322aac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322aaf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12322ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 12322ab3 call 0x12322f20 */
  push32(0x12322ab8u); f_12322f20();
  /* 12322ab8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322abb jmp 0x12322e18 */
  goto L_12322e18;
L_12322ac0:;
  /* 12322ac0 mov edx, dword ptr [0x12341aa0] */
  EDX = (r32((uint32_t)(0x12341aa0)));
  /* 12322ac6 mov dword ptr [0x12341ab0], edx */
  w32((uint32_t)(0x12341ab0), (EDX));
  /* 12322acc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322acf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12322ad2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322ad3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12322ad8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322ada mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12322add cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322ae1 jne 0x12322aea */
  if (!C.zf) goto L_12322aea;
  /* 12322ae3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12322aea:;
  /* 12322aea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322aed push edx */
  push32((uint32_t)(EDX));
  /* 12322aee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322af1 push eax */
  push32((uint32_t)(EAX));
  /* 12322af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12322af4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322af7 push ecx */
  push32((uint32_t)(ECX));
  /* 12322af8 call 0x12322f20 */
  push32(0x12322afdu); f_12322f20();
  /* 12322afd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322b00 jmp 0x12322e18 */
  goto L_12322e18;
L_12322b05:;
  /* 12322b05 mov edx, dword ptr [0x12341aa0] */
  EDX = (r32((uint32_t)(0x12341aa0)));
  /* 12322b0b mov dword ptr [0x12341ab0], edx */
  w32((uint32_t)(0x12341ab0), (EDX));
  /* 12322b11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322b14 push eax */
  push32((uint32_t)(EAX));
  /* 12322b15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322b18 push ecx */
  push32((uint32_t)(ECX));
  /* 12322b19 push 3 */
  push32((uint32_t)(0x3u));
  /* 12322b1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322b1e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12322b21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322b24 push eax */
  push32((uint32_t)(EAX));
  /* 12322b25 call 0x12322f20 */
  push32(0x12322b2au); f_12322f20();
  /* 12322b2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322b2d jmp 0x12322e18 */
  goto L_12322e18;
L_12322b32:;
  /* 12322b32 mov ecx, dword ptr [0x12341aa0] */
  ECX = (r32((uint32_t)(0x12341aa0)));
  /* 12322b38 mov dword ptr [0x12341ab0], ecx */
  w32((uint32_t)(0x12341ab0), (ECX));
  /* 12322b3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322b41 push edx */
  push32((uint32_t)(EDX));
  /* 12322b42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322b45 push eax */
  push32((uint32_t)(EAX));
  /* 12322b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12322b48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322b4b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12322b4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322b51 push edx */
  push32((uint32_t)(EDX));
  /* 12322b52 call 0x12322f20 */
  push32(0x12322b57u); f_12322f20();
  /* 12322b57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322b5a jmp 0x12322e18 */
  goto L_12322e18;
L_12322b5f:;
  /* 12322b5f mov eax, dword ptr [0x12341aa0] */
  EAX = (r32((uint32_t)(0x12341aa0)));
  /* 12322b64 mov dword ptr [0x12341ab0], eax */
  w32((uint32_t)(0x12341ab0), (EAX));
  /* 12322b69 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322b6c push ecx */
  push32((uint32_t)(ECX));
  /* 12322b6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322b70 push edx */
  push32((uint32_t)(EDX));
  /* 12322b71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12322b73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322b76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12322b79 push ecx */
  push32((uint32_t)(ECX));
  /* 12322b7a call 0x12322f20 */
  push32(0x12322b7fu); f_12322f20();
  /* 12322b7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322b82 jmp 0x12322e18 */
  goto L_12322e18;
L_12322b87:;
  /* 12322b87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322b8a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322b8e jg 0x12322bac */
  if ((!C.zf&&C.sf==C.of)) goto L_12322bac;
  /* 12322b90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322b93 push eax */
  push32((uint32_t)(EAX));
  /* 12322b94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322b97 push ecx */
  push32((uint32_t)(ECX));
  /* 12322b98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322b9b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12322ba1 push eax */
  push32((uint32_t)(EAX));
  /* 12322ba2 call 0x12322ed0 */
  push32(0x12322ba7u); f_12322ed0();
  /* 12322ba7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322baa jmp 0x12322bc6 */
  goto L_12322bc6;
L_12322bac:;
  /* 12322bac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322baf push ecx */
  push32((uint32_t)(ECX));
  /* 12322bb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322bb3 push edx */
  push32((uint32_t)(EDX));
  /* 12322bb4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322bb7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12322bbd push ecx */
  push32((uint32_t)(ECX));
  /* 12322bbe call 0x12322ed0 */
  push32(0x12322bc3u); f_12322ed0();
  /* 12322bc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12322bc6:;
  /* 12322bc6 jmp 0x12322e18 */
  goto L_12322e18;
L_12322bcb:;
  /* 12322bcb mov edx, dword ptr [0x12341aa0] */
  EDX = (r32((uint32_t)(0x12341aa0)));
  /* 12322bd1 mov dword ptr [0x12341ab0], edx */
  w32((uint32_t)(0x12341ab0), (EDX));
  /* 12322bd7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322bda push eax */
  push32((uint32_t)(EAX));
  /* 12322bdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322bde push ecx */
  push32((uint32_t)(ECX));
  /* 12322bdf push 2 */
  push32((uint32_t)(0x2u));
  /* 12322be1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322be4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12322be6 push eax */
  push32((uint32_t)(EAX));
  /* 12322be7 call 0x12322f20 */
  push32(0x12322becu); f_12322f20();
  /* 12322bec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322bef jmp 0x12322e18 */
  goto L_12322e18;
L_12322bf4:;
  /* 12322bf4 mov ecx, dword ptr [0x12341aa0] */
  ECX = (r32((uint32_t)(0x12341aa0)));
  /* 12322bfa mov dword ptr [0x12341ab0], ecx */
  w32((uint32_t)(0x12341ab0), (ECX));
  /* 12322c00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c03 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12322c06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12322c09 jmp 0x12322c5d */
  goto L_12322c5d;
L_12322c0b:;
  /* 12322c0b mov ecx, dword ptr [0x12341aa0] */
  ECX = (r32((uint32_t)(0x12341aa0)));
  /* 12322c11 mov dword ptr [0x12341ab0], ecx */
  w32((uint32_t)(0x12341ab0), (ECX));
  /* 12322c17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322c1a push edx */
  push32((uint32_t)(EDX));
  /* 12322c1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322c1e push eax */
  push32((uint32_t)(EAX));
  /* 12322c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12322c21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c24 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12322c27 push edx */
  push32((uint32_t)(EDX));
  /* 12322c28 call 0x12322f20 */
  push32(0x12322c2du); f_12322f20();
  /* 12322c2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322c30 jmp 0x12322e18 */
  goto L_12322e18;
L_12322c35:;
  /* 12322c35 mov eax, dword ptr [0x12341aa0] */
  EAX = (r32((uint32_t)(0x12341aa0)));
  /* 12322c3a mov dword ptr [0x12341ab0], eax */
  w32((uint32_t)(0x12341ab0), (EAX));
  /* 12322c3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c42 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322c46 jne 0x12322c51 */
  if (!C.zf) goto L_12322c51;
  /* 12322c48 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12322c4f jmp 0x12322c5d */
  goto L_12322c5d;
L_12322c51:;
  /* 12322c51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c54 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12322c57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322c5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12322c5d:;
  /* 12322c5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c60 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12322c63 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322c66 jge 0x12322c71 */
  if ((C.sf==C.of)) goto L_12322c71;
  /* 12322c68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12322c6f jmp 0x12322c9e */
  goto L_12322c9e;
L_12322c71:;
  /* 12322c71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c74 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12322c77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322c78 mov ecx, 7 */
  ECX = (0x7u);
  /* 12322c7d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322c7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12322c82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322c85 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12322c88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322c89 mov ecx, 7 */
  ECX = (0x7u);
  /* 12322c8e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322c90 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322c93 jl 0x12322c9e */
  if ((C.sf!=C.of)) goto L_12322c9e;
  /* 12322c95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322c98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322c9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12322c9e:;
  /* 12322c9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12322ca2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12322ca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12322ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322cab push edx */
  push32((uint32_t)(EDX));
  /* 12322cac call 0x12322f20 */
  push32(0x12322cb1u); f_12322f20();
  /* 12322cb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322cb4 jmp 0x12322e18 */
  goto L_12322e18;
L_12322cb9:;
  /* 12322cb9 cmp dword ptr [0x12341aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322cc0 je 0x12322cf0 */
  if (C.zf) goto L_12322cf0;
  /* 12322cc2 mov dword ptr [0x12341aa0], 0 */
  w32((uint32_t)(0x12341aa0), (0x0u));
  /* 12322ccc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322ccf push eax */
  push32((uint32_t)(EAX));
  /* 12322cd0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12322cd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322cd7 push edx */
  push32((uint32_t)(EDX));
  /* 12322cd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322cdb push eax */
  push32((uint32_t)(EAX));
  /* 12322cdc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322cdf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12322ce5 push edx */
  push32((uint32_t)(EDX));
  /* 12322ce6 call 0x12323080 */
  push32(0x12322cebu); f_12323080();
  /* 12322ceb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322cee jmp 0x12322d12 */
  goto L_12322d12;
L_12322cf0:;
  /* 12322cf0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322cf3 push eax */
  push32((uint32_t)(EAX));
  /* 12322cf4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12322cf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322cfb push edx */
  push32((uint32_t)(EDX));
  /* 12322cfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322cff push eax */
  push32((uint32_t)(EAX));
  /* 12322d00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322d03 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12322d09 push edx */
  push32((uint32_t)(EDX));
  /* 12322d0a call 0x12323080 */
  push32(0x12322d0fu); f_12323080();
  /* 12322d0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12322d12:;
  /* 12322d12 jmp 0x12322e18 */
  goto L_12322e18;
L_12322d17:;
  /* 12322d17 mov dword ptr [0x12341aa0], 0 */
  w32((uint32_t)(0x12341aa0), (0x0u));
  /* 12322d21 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322d24 push eax */
  push32((uint32_t)(EAX));
  /* 12322d25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322d28 push ecx */
  push32((uint32_t)(ECX));
  /* 12322d29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322d2c push edx */
  push32((uint32_t)(EDX));
  /* 12322d2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322d30 push eax */
  push32((uint32_t)(EAX));
  /* 12322d31 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12322d34 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12322d3a push edx */
  push32((uint32_t)(EDX));
  /* 12322d3b call 0x12323080 */
  push32(0x12322d40u); f_12323080();
  /* 12322d40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322d43 jmp 0x12322e18 */
  goto L_12322e18;
L_12322d48:;
  /* 12322d48 mov eax, dword ptr [0x12341aa0] */
  EAX = (r32((uint32_t)(0x12341aa0)));
  /* 12322d4d mov dword ptr [0x12341ab0], eax */
  w32((uint32_t)(0x12341ab0), (EAX));
  /* 12322d52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322d55 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12322d58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322d59 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12322d5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322d60 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12322d63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322d66 push edx */
  push32((uint32_t)(EDX));
  /* 12322d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322d6a push eax */
  push32((uint32_t)(EAX));
  /* 12322d6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12322d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322d70 push ecx */
  push32((uint32_t)(ECX));
  /* 12322d71 call 0x12322f20 */
  push32(0x12322d76u); f_12322f20();
  /* 12322d76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322d79 jmp 0x12322e18 */
  goto L_12322e18;
L_12322d7e:;
  /* 12322d7e mov edx, dword ptr [0x12341aa0] */
  EDX = (r32((uint32_t)(0x12341aa0)));
  /* 12322d84 mov dword ptr [0x12341ab0], edx */
  w32((uint32_t)(0x12341ab0), (EDX));
  /* 12322d8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322d8d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12322d90 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322d91 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12322d96 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322d98 mov ecx, eax */
  ECX = (EAX);
  /* 12322d9a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322d9d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12322da0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322da3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12322da6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322da7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12322dac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322dae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322db0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12322db3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322db6 push eax */
  push32((uint32_t)(EAX));
  /* 12322db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322dba push ecx */
  push32((uint32_t)(ECX));
  /* 12322dbb push 4 */
  push32((uint32_t)(0x4u));
  /* 12322dbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12322dc1 call 0x12322f20 */
  push32(0x12322dc6u); f_12322f20();
  /* 12322dc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322dc9 jmp 0x12322e18 */
  goto L_12322e18;
L_12322dcb:;
  /* 12322dcb call 0x12323ee0 */
  push32(0x12322dd0u); f_12323ee0();
  /* 12322dd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12322dd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12322dd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322ddb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12322ddd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322de1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12322de4 mov ecx, dword ptr [eax*4 + 0x12340e2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12340e2c)));
  /* 12322deb push ecx */
  push32((uint32_t)(ECX));
  /* 12322dec call 0x12322ed0 */
  push32(0x12322df1u); f_12322ed0();
  /* 12322df1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322df4 jmp 0x12322e18 */
  goto L_12322e18;
L_12322df6:;
  /* 12322df6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322df9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12322dfb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12322dfe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322e01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12322e03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322e06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322e09 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12322e0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322e0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12322e10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322e13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322e16 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12322e18:;
  /* 12322e18 pop esi */
  ESI = (pop32());
  /* 12322e19 mov esp, ebp */
  ESP = (EBP);
  /* 12322e1b pop ebp */
  EBP = (pop32());
  /* 12322e1c ret  */
  ESPCHK(0x123228b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12322ed0 (72 bytes, 30 insns) */
void f_12322ed0(void) {
  FTRACE(0x12322ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12322ed1 mov ebp, esp */
  EBP = (ESP);
L_12322ed3:;
  /* 12322ed3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322ed6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322ed9 je 0x12322f16 */
  if (C.zf) goto L_12322f16;
  /* 12322edb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322ede movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12322ee1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12322ee3 je 0x12322f16 */
  if (C.zf) goto L_12322f16;
  /* 12322ee5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322ee8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12322eea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322eed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12322eef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12322ef1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322ef4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12322ef6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322efc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12322efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322f01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322f04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12322f07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322f0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12322f0c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322f0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322f12 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12322f14 jmp 0x12322ed3 */
  goto L_12322ed3;
L_12322f16:;
  /* 12322f16 pop ebp */
  EBP = (pop32());
  /* 12322f17 ret  */
  ESPCHK(0x12322ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x12322f20 (173 bytes, 64 insns) */
void f_12322f20(void) {
  FTRACE(0x12322f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12322f21 mov ebp, esp */
  EBP = (ESP);
  /* 12322f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12322f24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12322f2b cmp dword ptr [0x12341ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322f32 je 0x12322f4a */
  if (C.zf) goto L_12322f4a;
  /* 12322f34 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322f37 push eax */
  push32((uint32_t)(EAX));
  /* 12322f38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322f3b push ecx */
  push32((uint32_t)(ECX));
  /* 12322f3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322f3f push edx */
  push32((uint32_t)(EDX));
  /* 12322f40 call 0x12322fd0 */
  push32(0x12322f45u); f_12322fd0();
  /* 12322f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12322f48 jmp 0x12322fc9 */
  goto L_12322fc9;
L_12322f4a:;
  /* 12322f4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322f4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322f50 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322f52 jae 0x12322fc0 */
  if (!C.cf) goto L_12322fc0;
  /* 12322f54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322f57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322f5a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12322f5d jmp 0x12322f68 */
  goto L_12322f68;
L_12322f5f:;
  /* 12322f5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322f62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322f65 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12322f68:;
  /* 12322f68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322f6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322f6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12322f70 je 0x12322fa4 */
  if (C.zf) goto L_12322fa4;
  /* 12322f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322f75 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322f76 mov ecx, 0xa */
  ECX = (0xau);
  /* 12322f7b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322f7d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322f80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322f83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12322f85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322f88 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12322f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322f8e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322f8f mov ecx, 0xa */
  ECX = (0xau);
  /* 12322f94 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322f96 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12322f99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322f9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322f9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12322fa2 jmp 0x12322f5f */
  goto L_12322f5f;
L_12322fa4:;
  /* 12322fa4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322fa7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12322fa9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322fac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322faf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12322fb1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322fb4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12322fb6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322fb9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322fbc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12322fbe jmp 0x12322fc9 */
  goto L_12322fc9;
L_12322fc0:;
  /* 12322fc0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12322fc3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12322fc9:;
  /* 12322fc9 mov esp, ebp */
  ESP = (EBP);
  /* 12322fcb pop ebp */
  EBP = (pop32());
  /* 12322fcc ret  */
  ESPCHK(0x12322f20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12322fd0 (172 bytes, 65 insns) */
void f_12322fd0(void) {
  FTRACE(0x12322fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12322fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12322fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12322fd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12322fd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12322fd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12322fdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12322fde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12322fe1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12322fe4 jbe 0x1232302b */
  if ((C.cf||C.zf)) goto L_1232302b;
L_12322fe6:;
  /* 12322fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12322fe9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12322fea mov ecx, 0xa */
  ECX = (0xau);
  /* 12322fef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12322ff1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322ff7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12322ff9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12322ffc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12322fff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12323002 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323005 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12323007 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232300a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232300d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1232300f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323012 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12323013 mov ecx, 0xa */
  ECX = (0xau);
  /* 12323018 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1232301a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1232301d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323021 jle 0x1232302b */
  if ((C.zf||C.sf!=C.of)) goto L_1232302b;
  /* 12323023 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323026 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323029 ja 0x12322fe6 */
  if ((!C.cf&&!C.zf)) goto L_12322fe6;
L_1232302b:;
  /* 1232302b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232302e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12323030 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12323033 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12323036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323039 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1232303b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232303e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323041 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12323044:;
  /* 12323044 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323047 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323049 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1232304c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232304f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323052 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323054 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12323056 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323059 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232305c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1232305f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323062 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12323065 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12323067 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232306a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232306d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12323070 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323073 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323076 jb 0x12323044 */
  if (C.cf) goto L_12323044;
  /* 12323078 mov esp, ebp */
  ESP = (EBP);
  /* 1232307a pop ebp */
  EBP = (pop32());
  /* 1232307b ret  */
  ESPCHK(0x12322fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x12323080 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12323080(void) {
  FTRACE(0x12323080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323080 push ebp */
  push32((uint32_t)(EBP));
  /* 12323081 mov ebp, esp */
  EBP = (ESP);
  /* 12323083 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12323086:;
  /* 12323086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323089 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1232308c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1232308e je 0x123234fc */
  if (C.zf) goto L_123234fc;
  /* 12323094 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323097 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232309a je 0x123234fc */
  if (C.zf) goto L_123234fc;
  /* 123230a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 123230a4 mov dword ptr [0x12341ab0], 0 */
  w32((uint32_t)(0x12341ab0), (0x0u));
  /* 123230ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123230b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123230b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123230bb jmp 0x123230c6 */
  goto L_123230c6;
L_123230bd:;
  /* 123230bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123230c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123230c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123230c6:;
  /* 123230c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123230c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123230cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123230cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123230d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123230d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123230d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123230db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123230dd jne 0x123230e1 */
  if (!C.zf) goto L_123230e1;
  /* 123230df jmp 0x123230bd */
  goto L_123230bd;
L_123230e1:;
  /* 123230e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123230e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123230e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123230ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123230ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123230f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123230f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123230f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123230f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123230fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323100 ja 0x12323450 */
  if ((!C.cf&&!C.zf)) goto L_12323450;
  /* 12323106 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12323109 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232310b mov al, byte ptr [ecx + 0x1232352c] */
  AL = (r8((uint32_t)(ECX + 0x1232352c)));
  /* 12323111 jmp dword ptr [eax*4 + 0x12323500] */
  switch (EAX) {
    case 0: goto L_1232336f;
    case 1: goto L_12323253;
    case 2: goto L_123231de;
    case 3: goto L_12323118;
    case 4: goto L_12323156;
    case 5: goto L_123231b7;
    case 6: goto L_12323205;
    case 7: goto L_1232322c;
    case 8: goto L_1232329a;
    case 9: goto L_12323194;
    case 10: goto L_12323450;
    default: x86_unimpl("switch@0x12323111 out of table"); return;
  }
L_12323118:;
  /* 12323118 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232311b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1232311e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12323121 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323124 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12323127 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232312b ja 0x12323151 */
  if ((!C.cf&&!C.zf)) goto L_12323151;
  /* 1232312d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12323130 jmp dword ptr [ecx*4 + 0x1232357f] */
  switch (ECX) {
    case 0: goto L_12323137;
    case 1: goto L_12323141;
    case 2: goto L_12323147;
    case 3: goto L_1232314d;
    case 4: goto L_12323175;
    case 5: goto L_1232317f;
    case 6: goto L_12323185;
    case 7: goto L_1232318b;
    default: x86_unimpl("switch@0x12323130 out of table"); return;
  }
L_12323137:;
  /* 12323137 mov dword ptr [0x12341ab0], 1 */
  w32((uint32_t)(0x12341ab0), (0x1u));
L_12323141:;
  /* 12323141 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12323145 jmp 0x12323151 */
  goto L_12323151;
L_12323147:;
  /* 12323147 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1232314b jmp 0x12323151 */
  goto L_12323151;
L_1232314d:;
  /* 1232314d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12323151:;
  /* 12323151 jmp 0x12323450 */
  goto L_12323450;
L_12323156:;
  /* 12323156 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323159 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1232315c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1232315f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323162 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12323165 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323169 ja 0x1232318f */
  if ((!C.cf&&!C.zf)) goto L_1232318f;
  /* 1232316b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1232316e jmp dword ptr [ecx*4 + 0x1232358f] */
  switch (ECX) {
    case 0: goto L_12323175;
    case 1: goto L_1232317f;
    case 2: goto L_12323185;
    case 3: goto L_1232318b;
    default: x86_unimpl("switch@0x1232316e out of table"); return;
  }
L_12323175:;
  /* 12323175 mov dword ptr [0x12341ab0], 1 */
  w32((uint32_t)(0x12341ab0), (0x1u));
L_1232317f:;
  /* 1232317f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12323183 jmp 0x1232318f */
  goto L_1232318f;
L_12323185:;
  /* 12323185 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12323189 jmp 0x1232318f */
  goto L_1232318f;
L_1232318b:;
  /* 1232318b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1232318f:;
  /* 1232318f jmp 0x12323450 */
  goto L_12323450;
L_12323194:;
  /* 12323194 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323197 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1232319a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232319e je 0x123231a8 */
  if (C.zf) goto L_123231a8;
  /* 123231a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123231a4 je 0x123231ae */
  if (C.zf) goto L_123231ae;
  /* 123231a6 jmp 0x123231b2 */
  goto L_123231b2;
L_123231a8:;
  /* 123231a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 123231ac jmp 0x123231b2 */
  goto L_123231b2;
L_123231ae:;
  /* 123231ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_123231b2:;
  /* 123231b2 jmp 0x12323450 */
  goto L_12323450;
L_123231b7:;
  /* 123231b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123231ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123231bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123231c1 je 0x123231cb */
  if (C.zf) goto L_123231cb;
  /* 123231c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123231c7 je 0x123231d5 */
  if (C.zf) goto L_123231d5;
  /* 123231c9 jmp 0x123231d9 */
  goto L_123231d9;
L_123231cb:;
  /* 123231cb mov dword ptr [0x12341ab0], 1 */
  w32((uint32_t)(0x12341ab0), (0x1u));
L_123231d5:;
  /* 123231d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_123231d9:;
  /* 123231d9 jmp 0x12323450 */
  goto L_12323450;
L_123231de:;
  /* 123231de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123231e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123231e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123231e8 je 0x123231f2 */
  if (C.zf) goto L_123231f2;
  /* 123231ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123231ee je 0x123231fc */
  if (C.zf) goto L_123231fc;
  /* 123231f0 jmp 0x12323200 */
  goto L_12323200;
L_123231f2:;
  /* 123231f2 mov dword ptr [0x12341ab0], 1 */
  w32((uint32_t)(0x12341ab0), (0x1u));
L_123231fc:;
  /* 123231fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12323200:;
  /* 12323200 jmp 0x12323450 */
  goto L_12323450;
L_12323205:;
  /* 12323205 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323208 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1232320b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232320f je 0x12323219 */
  if (C.zf) goto L_12323219;
  /* 12323211 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323215 je 0x12323223 */
  if (C.zf) goto L_12323223;
  /* 12323217 jmp 0x12323227 */
  goto L_12323227;
L_12323219:;
  /* 12323219 mov dword ptr [0x12341ab0], 1 */
  w32((uint32_t)(0x12341ab0), (0x1u));
L_12323223:;
  /* 12323223 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12323227:;
  /* 12323227 jmp 0x12323450 */
  goto L_12323450;
L_1232322c:;
  /* 1232322c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232322f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12323232 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323236 je 0x12323240 */
  if (C.zf) goto L_12323240;
  /* 12323238 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232323c je 0x1232324a */
  if (C.zf) goto L_1232324a;
  /* 1232323e jmp 0x1232324e */
  goto L_1232324e;
L_12323240:;
  /* 12323240 mov dword ptr [0x12341ab0], 1 */
  w32((uint32_t)(0x12341ab0), (0x1u));
L_1232324a:;
  /* 1232324a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1232324e:;
  /* 1232324e jmp 0x12323450 */
  goto L_12323450;
L_12323253:;
  /* 12323253 push 0x1233e190 */
  push32((uint32_t)(0x1233e190u));
  /* 12323258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232325b push ecx */
  push32((uint32_t)(ECX));
  /* 1232325c call 0x12323ab0 */
  push32(0x12323261u); f_12323ab0();
  /* 12323261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12323266 jne 0x12323273 */
  if (!C.zf) goto L_12323273;
  /* 12323268 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232326b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232326e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12323271 jmp 0x12323291 */
  goto L_12323291;
L_12323273:;
  /* 12323273 push 0x1233e18c */
  push32((uint32_t)(0x1233e18cu));
  /* 12323278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232327b push eax */
  push32((uint32_t)(EAX));
  /* 1232327c call 0x12323ab0 */
  push32(0x12323281u); f_12323ab0();
  /* 12323281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12323286 jne 0x12323291 */
  if (!C.zf) goto L_12323291;
  /* 12323288 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232328b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232328e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12323291:;
  /* 12323291 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12323295 jmp 0x12323450 */
  goto L_12323450;
L_1232329a:;
  /* 1232329a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232329d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123232a1 jg 0x123232b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_123232b1;
  /* 123232a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123232a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 123232ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123232af jmp 0x123232bd */
  goto L_123232bd;
L_123232b1:;
  /* 123232b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123232b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 123232ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123232bd:;
  /* 123232bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123232c1 jle 0x12323364 */
  if ((C.zf||C.sf!=C.of)) goto L_12323364;
  /* 123232c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123232ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123232cd jbe 0x12323364 */
  if ((C.cf||C.zf)) goto L_12323364;
  /* 123232d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123232d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123232d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123232da mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 123232e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123232e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123232e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123232ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123232ee je 0x12323327 */
  if (C.zf) goto L_12323327;
  /* 123232f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123232f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123232f6 jbe 0x12323327 */
  if ((C.cf||C.zf)) goto L_12323327;
  /* 123232f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123232fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123232fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12323300 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12323302 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12323304 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323307 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12323309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232330c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232330f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12323311 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12323314 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323317 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1232331a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232331d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1232331f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323322 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323325 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12323327:;
  /* 12323327 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232332a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1232332c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232332f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323331 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12323333 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323336 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12323338 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232333b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232333e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12323340 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12323343 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323346 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12323349 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232334c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1232334e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323351 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323354 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12323356 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323359 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232335c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1232335f jmp 0x123232bd */
  goto L_123232bd;
L_12323364:;
  /* 12323364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323367 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1232336a jmp 0x12323086 */
  goto L_12323086;
L_1232336f:;
  /* 1232336f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323372 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12323375 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12323377 je 0x12323442 */
  if (C.zf) goto L_12323442;
  /* 1232337d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323380 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323383 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12323386:;
  /* 12323386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323389 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1232338c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1232338e je 0x12323440 */
  if (C.zf) goto L_12323440;
  /* 12323394 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323397 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232339a je 0x12323440 */
  if (C.zf) goto L_12323440;
  /* 123233a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123233a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123233a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123233a9 jne 0x123233b9 */
  if (!C.zf) goto L_123233b9;
  /* 123233ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123233ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123233b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123233b4 jmp 0x12323440 */
  goto L_12323440;
L_123233b9:;
  /* 123233b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123233bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123233be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123233c0 mov edx, dword ptr [0x1233fde8] */
  EDX = (r32((uint32_t)(0x1233fde8)));
  /* 123233c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123233c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 123233cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 123233d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123233d3 je 0x1232340c */
  if (C.zf) goto L_1232340c;
  /* 123233d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123233d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123233db jbe 0x1232340c */
  if ((C.cf||C.zf)) goto L_1232340c;
  /* 123233dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123233e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123233e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123233e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123233e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123233e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123233ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123233ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123233f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123233f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123233f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123233f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123233fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123233ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323402 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12323404 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323407 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232340a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1232340c:;
  /* 1232340c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232340f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12323411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323414 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12323416 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12323418 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232341b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1232341d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323420 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323423 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12323425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323428 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232342b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1232342e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323431 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12323433 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323436 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323439 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1232343b jmp 0x12323386 */
  goto L_12323386;
L_12323440:;
  /* 12323440 jmp 0x1232344b */
  goto L_1232344b;
L_12323442:;
  /* 12323442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323445 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323448 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1232344b:;
  /* 1232344b jmp 0x12323086 */
  goto L_12323086;
L_12323450:;
  /* 12323450 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12323454 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12323456 je 0x1232347c */
  if (C.zf) goto L_1232347c;
  /* 12323458 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1232345b push edx */
  push32((uint32_t)(EDX));
  /* 1232345c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232345f push eax */
  push32((uint32_t)(EAX));
  /* 12323460 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323463 push ecx */
  push32((uint32_t)(ECX));
  /* 12323464 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12323467 push edx */
  push32((uint32_t)(EDX));
  /* 12323468 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1232346b push eax */
  push32((uint32_t)(EAX));
  /* 1232346c call 0x123228b0 */
  push32(0x12323471u); f_123228b0();
  /* 12323471 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323477 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1232347a jmp 0x123234f7 */
  goto L_123234f7;
L_1232347c:;
  /* 1232347c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232347f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323481 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323483 mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 12323489 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1232348b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1232348f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12323495 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12323497 je 0x123234c8 */
  if (C.zf) goto L_123234c8;
  /* 12323499 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232349c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1232349e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123234a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123234a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123234a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123234a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123234aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123234ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123234b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123234b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123234b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123234b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123234bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123234be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123234c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123234c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123234c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123234c8:;
  /* 123234c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123234cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123234cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123234d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123234d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123234d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123234d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123234d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123234dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123234df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123234e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123234e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123234e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123234ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123234ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123234ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123234f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123234f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123234f7:;
  /* 123234f7 jmp 0x12323086 */
  goto L_12323086;
L_123234fc:;
  /* 123234fc mov esp, ebp */
  ESP = (EBP);
  /* 123234fe pop ebp */
  EBP = (pop32());
  /* 123234ff ret  */
  ESPCHK(0x12323080u, _esp0);
  ESP += 4; return;
}

/* FUN_100135a0 @ 0x123235a0 (650 bytes, 178 insns) */
void f_123235a0(void) {
  FTRACE(0x123235a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123235a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123235a1 mov ebp, esp */
  EBP = (ESP);
  /* 123235a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123235a9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123235ad jne 0x12323709 */
  if (!C.zf) goto L_12323709;
  /* 123235b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123235b6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 123235bc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 123235c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123235c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123235cc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 123235d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123235d8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 123235de push edx */
  push32((uint32_t)(EDX));
  /* 123235df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123235e2 push eax */
  push32((uint32_t)(EAX));
  /* 123235e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123235e6 push ecx */
  push32((uint32_t)(ECX));
  /* 123235e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123235ea push edx */
  push32((uint32_t)(EDX));
  /* 123235eb call 0x123249c0 */
  push32(0x123235f0u); f_123249c0();
  /* 123235f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123235f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123235f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123235fa jne 0x1232368f */
  if (!C.zf) goto L_1232368f;
  /* 12323600 call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x12323606u);
  /* 12323606 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323609 je 0x12323610 */
  if (C.zf) goto L_12323610;
  /* 1232360b jmp 0x123236ed */
  goto L_123236ed;
L_12323610:;
  /* 12323610 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323612 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323614 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323616 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323619 push eax */
  push32((uint32_t)(EAX));
  /* 1232361a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232361d push ecx */
  push32((uint32_t)(ECX));
  /* 1232361e call 0x123249c0 */
  push32(0x12323623u); f_123249c0();
  /* 12323623 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323626 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1232362c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323633 jne 0x1232363a */
  if (!C.zf) goto L_1232363a;
  /* 12323635 jmp 0x123236ed */
  goto L_123236ed;
L_1232363a:;
  /* 1232363a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1232363c push 0x1233e198 */
  push32((uint32_t)(0x1233e198u));
  /* 12323641 push 2 */
  push32((uint32_t)(0x2u));
  /* 12323643 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12323649 push edx */
  push32((uint32_t)(EDX));
  /* 1232364a call 0x12316600 */
  push32(0x1232364fu); f_12316600();
  /* 1232364f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323652 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12323655 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323659 jne 0x12323660 */
  if (!C.zf) goto L_12323660;
  /* 1232365b jmp 0x123236ed */
  goto L_123236ed;
L_12323660:;
  /* 12323660 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12323667 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323669 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1232366f push eax */
  push32((uint32_t)(EAX));
  /* 12323670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323673 push ecx */
  push32((uint32_t)(ECX));
  /* 12323674 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323677 push edx */
  push32((uint32_t)(EDX));
  /* 12323678 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232367b push eax */
  push32((uint32_t)(EAX));
  /* 1232367c call 0x123249c0 */
  push32(0x12323681u); f_123249c0();
  /* 12323681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323684 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12323687 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232368b jne 0x1232368f */
  if (!C.zf) goto L_1232368f;
  /* 1232368d jmp 0x123236ed */
  goto L_123236ed;
L_1232368f:;
  /* 1232368f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12323691 push 0x1233e198 */
  push32((uint32_t)(0x1233e198u));
  /* 12323696 push 2 */
  push32((uint32_t)(0x2u));
  /* 12323698 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232369b push ecx */
  push32((uint32_t)(ECX));
  /* 1232369c call 0x12316600 */
  push32(0x123236a1u); f_12316600();
  /* 123236a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123236a4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 123236aa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123236ac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123236b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123236b5 jne 0x123236b9 */
  if (!C.zf) goto L_123236b9;
  /* 123236b7 jmp 0x123236ed */
  goto L_123236ed;
L_123236b9:;
  /* 123236b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123236bc push ecx */
  push32((uint32_t)(ECX));
  /* 123236bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123236c0 push edx */
  push32((uint32_t)(EDX));
  /* 123236c1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123236c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123236c9 push ecx */
  push32((uint32_t)(ECX));
  /* 123236ca call 0x12319e20 */
  push32(0x123236cfu); f_12319e20();
  /* 123236cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123236d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123236d6 je 0x123236e6 */
  if (C.zf) goto L_123236e6;
  /* 123236d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123236da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123236dd push edx */
  push32((uint32_t)(EDX));
  /* 123236de call 0x12317090 */
  push32(0x123236e3u); f_12317090();
  /* 123236e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123236e6:;
  /* 123236e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123236e8 jmp 0x12323826 */
  goto L_12323826;
L_123236ed:;
  /* 123236ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123236f1 je 0x12323701 */
  if (C.zf) goto L_12323701;
  /* 123236f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123236f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123236f8 push eax */
  push32((uint32_t)(EAX));
  /* 123236f9 call 0x12317090 */
  push32(0x123236feu); f_12317090();
  /* 123236fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12323701:;
  /* 12323701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12323704 jmp 0x12323826 */
  goto L_12323826;
L_12323709:;
  /* 12323709 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232370d jne 0x12323823 */
  if (!C.zf) goto L_12323823;
  /* 12323713 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1232371d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323720 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12323726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323728 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1232372e push edx */
  push32((uint32_t)(EDX));
  /* 1232372f push 0x123419c4 */
  push32((uint32_t)(0x123419c4u));
  /* 12323734 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323737 push eax */
  push32((uint32_t)(EAX));
  /* 12323738 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232373b push ecx */
  push32((uint32_t)(ECX));
  /* 1232373c call 0x12324820 */
  push32(0x12323741u); f_12324820();
  /* 12323741 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12323746 jne 0x12323750 */
  if (!C.zf) goto L_12323750;
  /* 12323748 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1232374b jmp 0x12323826 */
  goto L_12323826;
L_12323750:;
  /* 12323750 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12323756 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12323759 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12323763 jmp 0x12323774 */
  goto L_12323774;
L_12323765:;
  /* 12323765 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1232376b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232376e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12323774:;
  /* 12323774 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232377b jge 0x1232381f */
  if ((C.sf==C.of)) goto L_1232381f;
  /* 12323781 cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323788 jle 0x123237bb */
  if ((C.zf||C.sf!=C.of)) goto L_123237bb;
  /* 1232378a push 4 */
  push32((uint32_t)(0x4u));
  /* 1232378c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12323792 mov dl, byte ptr [ecx*2 + 0x123419c4] */
  DL = (r8((uint32_t)(ECX*2 + 0x123419c4)));
  /* 12323799 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1232379f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123237a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123237aa push eax */
  push32((uint32_t)(EAX));
  /* 123237ab call 0x1231cec0 */
  push32(0x123237b0u); f_1231cec0();
  /* 123237b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123237b3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 123237b9 jmp 0x123237ee */
  goto L_123237ee;
L_123237bb:;
  /* 123237bb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123237c1 mov dl, byte ptr [ecx*2 + 0x123419c4] */
  DL = (r8((uint32_t)(ECX*2 + 0x123419c4)));
  /* 123237c8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 123237ce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123237d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123237d9 mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 123237df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123237e1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123237e5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123237e8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_123237ee:;
  /* 123237ee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123237f5 je 0x12323818 */
  if (C.zf) goto L_12323818;
  /* 123237f7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123237fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12323800 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12323803 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1232380a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1232380e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12323814 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12323816 jmp 0x1232381a */
  goto L_1232381a;
L_12323818:;
  /* 12323818 jmp 0x1232381f */
  goto L_1232381f;
L_1232381a:;
  /* 1232381a jmp 0x12323765 */
  goto L_12323765;
L_1232381f:;
  /* 1232381f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323821 jmp 0x12323826 */
  goto L_12323826;
L_12323823:;
  /* 12323823 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12323826:;
  /* 12323826 mov esp, ebp */
  ESP = (EBP);
  /* 12323828 pop ebp */
  EBP = (pop32());
  /* 12323829 ret  */
  ESPCHK(0x123235a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013830 @ 0x12323830 (10 bytes, 5 insns) */
void f_12323830(void) {
  FTRACE(0x12323830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323830 push ebp */
  push32((uint32_t)(EBP));
  /* 12323831 mov ebp, esp */
  EBP = (ESP);
  /* 12323833 mov eax, dword ptr [0x12340d98] */
  EAX = (r32((uint32_t)(0x12340d98)));
  /* 12323838 pop ebp */
  EBP = (pop32());
  /* 12323839 ret  */
  ESPCHK(0x12323830u, _esp0);
  ESP += 4; return;
}

/* FUN_10013840 @ 0x12323840 (575 bytes, 196 insns) */
void f_12323840(void) {
  FTRACE(0x12323840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323840 push ebp */
  push32((uint32_t)(EBP));
  /* 12323841 mov ebp, esp */
  EBP = (ESP);
  /* 12323843 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12323845 push 0x1233e1a8 */
  push32((uint32_t)(0x1233e1a8u));
  /* 1232384a push 0x12321e80 */
  push32((uint32_t)(0x12321e80u));
  /* 1232384f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12323855 push eax */
  push32((uint32_t)(EAX));
  /* 12323856 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1232385d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323860 push ebx */
  push32((uint32_t)(EBX));
  /* 12323861 push esi */
  push32((uint32_t)(ESI));
  /* 12323862 push edi */
  push32((uint32_t)(EDI));
  /* 12323863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12323866 cmp dword ptr [0x123419d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232386d jne 0x123238be */
  if (!C.zf) goto L_123238be;
  /* 1232386f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12323872 push eax */
  push32((uint32_t)(EAX));
  /* 12323873 push 1 */
  push32((uint32_t)(0x1u));
  /* 12323875 push 0x1233d958 */
  push32((uint32_t)(0x1233d958u));
  /* 1232387a push 1 */
  push32((uint32_t)(0x1u));
  /* 1232387c call dword ptr [0x123442dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442dc))), 0x12323882u);
  /* 12323882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12323884 je 0x12323892 */
  if (C.zf) goto L_12323892;
  /* 12323886 mov dword ptr [0x123419d0], 1 */
  w32((uint32_t)(0x123419d0), (0x1u));
  /* 12323890 jmp 0x123238be */
  goto L_123238be;
L_12323892:;
  /* 12323892 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12323895 push ecx */
  push32((uint32_t)(ECX));
  /* 12323896 push 1 */
  push32((uint32_t)(0x1u));
  /* 12323898 push 0x1233d954 */
  push32((uint32_t)(0x1233d954u));
  /* 1232389d push 1 */
  push32((uint32_t)(0x1u));
  /* 1232389f push 0 */
  push32((uint32_t)(0x0u));
  /* 123238a1 call dword ptr [0x12344290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344290))), 0x123238a7u);
  /* 123238a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123238a9 je 0x123238b7 */
  if (C.zf) goto L_123238b7;
  /* 123238ab mov dword ptr [0x123419d0], 2 */
  w32((uint32_t)(0x123419d0), (0x2u));
  /* 123238b5 jmp 0x123238be */
  goto L_123238be;
L_123238b7:;
  /* 123238b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123238b9 jmp 0x12323a99 */
  goto L_12323a99;
L_123238be:;
  /* 123238be cmp dword ptr [0x123419d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123419d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123238c5 jne 0x123238e2 */
  if (!C.zf) goto L_123238e2;
  /* 123238c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123238ca push edx */
  push32((uint32_t)(EDX));
  /* 123238cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123238ce push eax */
  push32((uint32_t)(EAX));
  /* 123238cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123238d2 push ecx */
  push32((uint32_t)(ECX));
  /* 123238d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123238d6 push edx */
  push32((uint32_t)(EDX));
  /* 123238d7 call dword ptr [0x123442dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442dc))), 0x123238ddu);
  /* 123238dd jmp 0x12323a99 */
  goto L_12323a99;
L_123238e2:;
  /* 123238e2 cmp dword ptr [0x123419d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123419d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123238e9 jne 0x12323a97 */
  if (!C.zf) goto L_12323a97;
  /* 123238ef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123238f3 jne 0x123238fd */
  if (!C.zf) goto L_123238fd;
  /* 123238f5 mov eax, dword ptr [0x12341950] */
  EAX = (r32((uint32_t)(0x12341950)));
  /* 123238fa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_123238fd:;
  /* 123238fd push 0 */
  push32((uint32_t)(0x0u));
  /* 123238ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12323901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323903 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323905 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323908 push ecx */
  push32((uint32_t)(ECX));
  /* 12323909 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232390c push edx */
  push32((uint32_t)(EDX));
  /* 1232390d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12323912 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12323915 push eax */
  push32((uint32_t)(EAX));
  /* 12323916 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x1232391cu);
  /* 1232391c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1232391f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323923 jne 0x1232392c */
  if (!C.zf) goto L_1232392c;
  /* 12323925 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323927 jmp 0x12323a99 */
  goto L_12323a99;
L_1232392c:;
  /* 1232392c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12323933 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12323936 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323939 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1232393b call 0x123197a0 */
  push32(0x12323940u); f_123197a0();
  /* 12323940 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12323943 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12323946 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12323949 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1232394c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1232394f push edx */
  push32((uint32_t)(EDX));
  /* 12323950 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323952 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12323955 push eax */
  push32((uint32_t)(EAX));
  /* 12323956 call 0x1231ad20 */
  push32(0x1232395bu); f_1231ad20();
  /* 1232395b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232395e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12323965 jmp 0x1232397e */
  goto L_1232397e;
  /* 12323967 mov eax, 1 */
  EAX = (0x1u);
  /* 1232396c ret  */
  ESPCHK(0x12323840u, _esp0);
  ESP += 4; return;
  /* 1232396d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12323970 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12323977 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1232397e:;
  /* 1232397e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323982 jne 0x1232398b */
  if (!C.zf) goto L_1232398b;
  /* 12323984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323986 jmp 0x12323a99 */
  goto L_12323a99;
L_1232398b:;
  /* 1232398b push 0 */
  push32((uint32_t)(0x0u));
  /* 1232398d push 0 */
  push32((uint32_t)(0x0u));
  /* 1232398f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12323992 push ecx */
  push32((uint32_t)(ECX));
  /* 12323993 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12323996 push edx */
  push32((uint32_t)(EDX));
  /* 12323997 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232399a push eax */
  push32((uint32_t)(EAX));
  /* 1232399b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1232399e push ecx */
  push32((uint32_t)(ECX));
  /* 1232399f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123239a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123239a7 push edx */
  push32((uint32_t)(EDX));
  /* 123239a8 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x123239aeu);
  /* 123239ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123239b0 jne 0x123239b9 */
  if (!C.zf) goto L_123239b9;
  /* 123239b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123239b4 jmp 0x12323a99 */
  goto L_12323a99;
L_123239b9:;
  /* 123239b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123239c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123239c3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 123239c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123239ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123239cc call 0x123197a0 */
  push32(0x123239d1u); f_123197a0();
  /* 123239d1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 123239d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123239d7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123239da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123239dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123239e4 jmp 0x123239fd */
  goto L_123239fd;
  /* 123239e6 mov eax, 1 */
  EAX = (0x1u);
  /* 123239eb ret  */
  ESPCHK(0x12323840u, _esp0);
  ESP += 4; return;
  /* 123239ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123239ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123239f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123239fd:;
  /* 123239fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323a01 jne 0x12323a0a */
  if (!C.zf) goto L_12323a0a;
  /* 12323a03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323a05 jmp 0x12323a99 */
  goto L_12323a99;
L_12323a0a:;
  /* 12323a0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323a0e jne 0x12323a19 */
  if (!C.zf) goto L_12323a19;
  /* 12323a10 mov edx, dword ptr [0x12341940] */
  EDX = (r32((uint32_t)(0x12341940)));
  /* 12323a16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12323a19:;
  /* 12323a19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323a1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12323a1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12323a25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323a28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12323a2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12323a32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12323a35 push ecx */
  push32((uint32_t)(ECX));
  /* 12323a36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12323a39 push edx */
  push32((uint32_t)(EDX));
  /* 12323a3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12323a3d push eax */
  push32((uint32_t)(EAX));
  /* 12323a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323a41 push ecx */
  push32((uint32_t)(ECX));
  /* 12323a42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12323a45 push edx */
  push32((uint32_t)(EDX));
  /* 12323a46 call dword ptr [0x12344290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344290))), 0x12323a4cu);
  /* 12323a4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12323a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323a52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12323a55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323a57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12323a5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323a62 je 0x12323a78 */
  if (C.zf) goto L_12323a78;
  /* 12323a64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323a67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12323a6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323a6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12323a70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323a76 je 0x12323a7c */
  if (C.zf) goto L_12323a7c;
L_12323a78:;
  /* 12323a78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323a7a jmp 0x12323a99 */
  goto L_12323a99;
L_12323a7c:;
  /* 12323a7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323a7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12323a81 push eax */
  push32((uint32_t)(EAX));
  /* 12323a82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12323a85 push ecx */
  push32((uint32_t)(ECX));
  /* 12323a86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12323a89 push edx */
  push32((uint32_t)(EDX));
  /* 12323a8a call 0x1231ef50 */
  push32(0x12323a8fu); f_1231ef50();
  /* 12323a8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323a92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12323a95 jmp 0x12323a99 */
  goto L_12323a99;
L_12323a97:;
  /* 12323a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12323a99:;
  /* 12323a99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12323a9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12323a9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12323aa6 pop edi */
  EDI = (pop32());
  /* 12323aa7 pop esi */
  ESI = (pop32());
  /* 12323aa8 pop ebx */
  EBX = (pop32());
  /* 12323aa9 mov esp, ebp */
  ESP = (EBP);
  /* 12323aab pop ebp */
  EBP = (pop32());
  /* 12323aac ret  */
  ESPCHK(0x12323840u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ab0 @ 0x12323ab0 (208 bytes, 85 insns) */
void f_12323ab0(void) {
  FTRACE(0x12323ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12323ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12323ab3 push edi */
  push32((uint32_t)(EDI));
  /* 12323ab4 push esi */
  push32((uint32_t)(ESI));
  /* 12323ab5 push ebx */
  push32((uint32_t)(EBX));
  /* 12323ab6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12323ab9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12323abc lea eax, [0x12341938] */
  EAX = ((uint32_t)(0x12341938));
  /* 12323ac2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323ac6 jne 0x12323b03 */
  if (!C.zf) goto L_12323b03;
  /* 12323ac8 mov al, 0xff */
  AL = (0xffu);
  /* 12323aca mov edi, edi */
  EDI = (EDI);
L_12323acc:;
  /* 12323acc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12323ace je 0x12323afe */
  if (C.zf) goto L_12323afe;
  /* 12323ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12323ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12323ad3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12323ad5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12323ad6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323ad8 je 0x12323acc */
  if (C.zf) goto L_12323acc;
  /* 12323ada sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12323adc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323ade sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12323ae0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12323ae3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12323ae5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12323ae7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12323ae9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12323aeb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323aed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12323aef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12323af2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12323af4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12323af6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323af8 je 0x12323acc */
  if (C.zf) goto L_12323acc;
  /* 12323afa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12323afc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12323afe:;
  /* 12323afe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12323b01 jmp 0x12323b7b */
  goto L_12323b7b;
L_12323b03:;
  /* 12323b03 lock inc dword ptr [0x12341ac4] */
  x86_unimpl("lock inc @ 0x12323b03");
  /* 12323b0a cmp dword ptr [0x12341ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323b11 jg 0x12323b17 */
  if ((!C.zf&&C.sf==C.of)) goto L_12323b17;
  /* 12323b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323b15 jmp 0x12323b2c */
  goto L_12323b2c;
L_12323b17:;
  /* 12323b17 lock dec dword ptr [0x12341ac4] */
  x86_unimpl("lock dec @ 0x12323b17");
  /* 12323b1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12323b20 call 0x1231a9b0 */
  push32(0x12323b25u); f_1231a9b0();
  /* 12323b25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12323b2c:;
  /* 12323b2c mov eax, 0xff */
  EAX = (0xffu);
  /* 12323b31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12323b33 nop  */
  /* nop */
L_12323b34:;
  /* 12323b34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12323b36 je 0x12323b5f */
  if (C.zf) goto L_12323b5f;
  /* 12323b38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12323b3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12323b3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12323b3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12323b3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323b40 je 0x12323b34 */
  if (C.zf) goto L_12323b34;
  /* 12323b42 push eax */
  push32((uint32_t)(EAX));
  /* 12323b43 push ebx */
  push32((uint32_t)(EBX));
  /* 12323b44 call 0x12324c20 */
  push32(0x12323b49u); f_12324c20();
  /* 12323b49 mov ebx, eax */
  EBX = (EAX);
  /* 12323b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323b4e call 0x12324c20 */
  push32(0x12323b53u); f_12324c20();
  /* 12323b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323b56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323b58 je 0x12323b34 */
  if (C.zf) goto L_12323b34;
  /* 12323b5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323b5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12323b5f:;
  /* 12323b5f mov ebx, eax */
  EBX = (EAX);
  /* 12323b61 pop eax */
  EAX = (pop32());
  /* 12323b62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323b64 jne 0x12323b6f */
  if (!C.zf) goto L_12323b6f;
  /* 12323b66 lock dec dword ptr [0x12341ac4] */
  x86_unimpl("lock dec @ 0x12323b66");
  /* 12323b6d jmp 0x12323b79 */
  goto L_12323b79;
L_12323b6f:;
  /* 12323b6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12323b71 call 0x1231aa50 */
  push32(0x12323b76u); f_1231aa50();
  /* 12323b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12323b79:;
  /* 12323b79 mov eax, ebx */
  EAX = (EBX);
L_12323b7b:;
  /* 12323b7b pop ebx */
  EBX = (pop32());
  /* 12323b7c pop esi */
  ESI = (pop32());
  /* 12323b7d pop edi */
  EDI = (pop32());
  /* 12323b7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12323b7f ret  */
  ESPCHK(0x12323ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x12323b80 (257 bytes, 103 insns) */
void f_12323b80(void) {
  FTRACE(0x12323b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12323b81 mov ebp, esp */
  EBP = (ESP);
  /* 12323b83 push edi */
  push32((uint32_t)(EDI));
  /* 12323b84 push esi */
  push32((uint32_t)(ESI));
  /* 12323b85 push ebx */
  push32((uint32_t)(EBX));
  /* 12323b86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12323b89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12323b8b je 0x12323c7a */
  if (C.zf) goto L_12323c7a;
  /* 12323b91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12323b94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12323b97 lea eax, [0x12341938] */
  EAX = ((uint32_t)(0x12341938));
  /* 12323b9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323ba1 jne 0x12323bf1 */
  if (!C.zf) goto L_12323bf1;
  /* 12323ba3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12323ba5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12323ba7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12323ba9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12323bac:;
  /* 12323bac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12323bae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12323bb0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12323bb2 je 0x12323bd5 */
  if (C.zf) goto L_12323bd5;
  /* 12323bb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12323bb6 je 0x12323bd5 */
  if (C.zf) goto L_12323bd5;
  /* 12323bb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12323bb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12323bba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323bbc jb 0x12323bc4 */
  if (C.cf) goto L_12323bc4;
  /* 12323bbe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323bc0 ja 0x12323bc4 */
  if ((!C.cf&&!C.zf)) goto L_12323bc4;
  /* 12323bc2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12323bc4:;
  /* 12323bc4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323bc6 jb 0x12323bce */
  if (C.cf) goto L_12323bce;
  /* 12323bc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323bca ja 0x12323bce */
  if ((!C.cf&&!C.zf)) goto L_12323bce;
  /* 12323bcc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12323bce:;
  /* 12323bce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323bd0 jne 0x12323bdf */
  if (!C.zf) goto L_12323bdf;
  /* 12323bd2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12323bd3 jne 0x12323bac */
  if (!C.zf) goto L_12323bac;
L_12323bd5:;
  /* 12323bd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12323bd7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12323bd9 je 0x12323c7a */
  if (C.zf) goto L_12323c7a;
L_12323bdf:;
  /* 12323bdf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12323be4 jb 0x12323c7a */
  if (C.cf) goto L_12323c7a;
  /* 12323bea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12323bec jmp 0x12323c7a */
  goto L_12323c7a;
L_12323bf1:;
  /* 12323bf1 lock inc dword ptr [0x12341ac4] */
  x86_unimpl("lock inc @ 0x12323bf1");
  /* 12323bf8 cmp dword ptr [0x12341ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323bff jg 0x12323c05 */
  if ((!C.zf&&C.sf==C.of)) goto L_12323c05;
  /* 12323c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12323c03 jmp 0x12323c1e */
  goto L_12323c1e;
L_12323c05:;
  /* 12323c05 lock dec dword ptr [0x12341ac4] */
  x86_unimpl("lock dec @ 0x12323c05");
  /* 12323c0c mov ebx, ecx */
  EBX = (ECX);
  /* 12323c0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12323c10 call 0x1231a9b0 */
  push32(0x12323c15u); f_1231a9b0();
  /* 12323c15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12323c1c mov ecx, ebx */
  ECX = (EBX);
L_12323c1e:;
  /* 12323c1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323c20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12323c22 mov edi, edi */
  EDI = (EDI);
L_12323c24:;
  /* 12323c24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12323c26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323c28 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12323c2a je 0x12323c4f */
  if (C.zf) goto L_12323c4f;
  /* 12323c2c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12323c2e je 0x12323c4f */
  if (C.zf) goto L_12323c4f;
  /* 12323c30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12323c31 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12323c32 push ecx */
  push32((uint32_t)(ECX));
  /* 12323c33 push eax */
  push32((uint32_t)(EAX));
  /* 12323c34 push ebx */
  push32((uint32_t)(EBX));
  /* 12323c35 call 0x12324c20 */
  push32(0x12323c3au); f_12324c20();
  /* 12323c3a mov ebx, eax */
  EBX = (EAX);
  /* 12323c3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323c3f call 0x12324c20 */
  push32(0x12323c44u); f_12324c20();
  /* 12323c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323c47 pop ecx */
  ECX = (pop32());
  /* 12323c48 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323c4a jne 0x12323c55 */
  if (!C.zf) goto L_12323c55;
  /* 12323c4c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12323c4d jne 0x12323c24 */
  if (!C.zf) goto L_12323c24;
L_12323c4f:;
  /* 12323c4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12323c51 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323c53 je 0x12323c5e */
  if (C.zf) goto L_12323c5e;
L_12323c55:;
  /* 12323c55 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12323c5a jb 0x12323c5e */
  if (C.cf) goto L_12323c5e;
  /* 12323c5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12323c5e:;
  /* 12323c5e pop eax */
  EAX = (pop32());
  /* 12323c5f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323c61 jne 0x12323c6c */
  if (!C.zf) goto L_12323c6c;
  /* 12323c63 lock dec dword ptr [0x12341ac4] */
  x86_unimpl("lock dec @ 0x12323c63");
  /* 12323c6a jmp 0x12323c7a */
  goto L_12323c7a;
L_12323c6c:;
  /* 12323c6c mov ebx, ecx */
  EBX = (ECX);
  /* 12323c6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12323c70 call 0x1231aa50 */
  push32(0x12323c75u); f_1231aa50();
  /* 12323c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323c78 mov ecx, ebx */
  ECX = (EBX);
L_12323c7a:;
  /* 12323c7a mov eax, ecx */
  EAX = (ECX);
  /* 12323c7c pop ebx */
  EBX = (pop32());
  /* 12323c7d pop esi */
  ESI = (pop32());
  /* 12323c7e pop edi */
  EDI = (pop32());
  /* 12323c7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12323c80 ret  */
  ESPCHK(0x12323b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c90 @ 0x12323c90 (255 bytes, 88 insns) */
void f_12323c90(void) {
  FTRACE(0x12323c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12323c91 mov ebp, esp */
  EBP = (ESP);
  /* 12323c93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12323c96:;
  /* 12323c96 cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323c9d jle 0x12323cb6 */
  if ((C.zf||C.sf!=C.of)) goto L_12323cb6;
  /* 12323c9f push 8 */
  push32((uint32_t)(0x8u));
  /* 12323ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323ca4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12323ca6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12323ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 12323ca9 call 0x1231cec0 */
  push32(0x12323caeu); f_1231cec0();
  /* 12323cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323cb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12323cb4 jmp 0x12323ccf */
  goto L_12323ccf;
L_12323cb6:;
  /* 12323cb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323cbb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323cbd mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 12323cc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323cc5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12323cc9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12323ccc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12323ccf:;
  /* 12323ccf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323cd3 je 0x12323ce0 */
  if (C.zf) goto L_12323ce0;
  /* 12323cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323cd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323cdb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12323cde jmp 0x12323c96 */
  goto L_12323c96;
L_12323ce0:;
  /* 12323ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323ce3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323ce5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12323ce7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12323cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323ced add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323cf0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12323cf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323cf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12323cf9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323cfd je 0x12323d05 */
  if (C.zf) goto L_12323d05;
  /* 12323cff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323d03 jne 0x12323d18 */
  if (!C.zf) goto L_12323d18;
L_12323d05:;
  /* 12323d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323d0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323d0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12323d0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323d12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323d15 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12323d18:;
  /* 12323d18 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12323d1f:;
  /* 12323d1f cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323d26 jle 0x12323d3b */
  if ((C.zf||C.sf!=C.of)) goto L_12323d3b;
  /* 12323d28 push 4 */
  push32((uint32_t)(0x4u));
  /* 12323d2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323d2d push edx */
  push32((uint32_t)(EDX));
  /* 12323d2e call 0x1231cec0 */
  push32(0x12323d33u); f_1231cec0();
  /* 12323d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323d36 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12323d39 jmp 0x12323d50 */
  goto L_12323d50;
L_12323d3b:;
  /* 12323d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323d3e mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 12323d44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323d46 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12323d4a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12323d4d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12323d50:;
  /* 12323d50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323d54 je 0x12323d7b */
  if (C.zf) goto L_12323d7b;
  /* 12323d56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323d59 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12323d5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323d5f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12323d63 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12323d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323d69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12323d6b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12323d6d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12323d70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323d73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323d76 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12323d79 jmp 0x12323d1f */
  goto L_12323d1f;
L_12323d7b:;
  /* 12323d7b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323d7f jne 0x12323d88 */
  if (!C.zf) goto L_12323d88;
  /* 12323d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323d84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12323d86 jmp 0x12323d8b */
  goto L_12323d8b;
L_12323d88:;
  /* 12323d88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12323d8b:;
  /* 12323d8b mov esp, ebp */
  ESP = (EBP);
  /* 12323d8d pop ebp */
  EBP = (pop32());
  /* 12323d8e ret  */
  ESPCHK(0x12323c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d90 @ 0x12323d90 (17 bytes, 8 insns) */
void f_12323d90(void) {
  FTRACE(0x12323d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12323d91 mov ebp, esp */
  EBP = (ESP);
  /* 12323d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323d96 push eax */
  push32((uint32_t)(EAX));
  /* 12323d97 call 0x12323c90 */
  push32(0x12323d9cu); f_12323c90();
  /* 12323d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323d9f pop ebp */
  EBP = (pop32());
  /* 12323da0 ret  */
  ESPCHK(0x12323d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013db0 @ 0x12323db0 (297 bytes, 106 insns) */
void f_12323db0(void) {
  FTRACE(0x12323db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12323db1 mov ebp, esp */
  EBP = (ESP);
  /* 12323db3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323db6 push esi */
  push32((uint32_t)(ESI));
L_12323db7:;
  /* 12323db7 cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323dbe jle 0x12323dd7 */
  if ((C.zf||C.sf!=C.of)) goto L_12323dd7;
  /* 12323dc0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12323dc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323dc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12323dc7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12323dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12323dca call 0x1231cec0 */
  push32(0x12323dcfu); f_1231cec0();
  /* 12323dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323dd2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12323dd5 jmp 0x12323df0 */
  goto L_12323df0;
L_12323dd7:;
  /* 12323dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323ddc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323dde mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 12323de4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323de6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12323dea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12323ded mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12323df0:;
  /* 12323df0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323df4 je 0x12323e01 */
  if (C.zf) goto L_12323e01;
  /* 12323df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323df9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323dfc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12323dff jmp 0x12323db7 */
  goto L_12323db7;
L_12323e01:;
  /* 12323e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323e04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323e06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12323e08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12323e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323e0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323e11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12323e14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323e17 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12323e1a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323e1e je 0x12323e26 */
  if (C.zf) goto L_12323e26;
  /* 12323e20 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323e24 jne 0x12323e39 */
  if (!C.zf) goto L_12323e39;
L_12323e26:;
  /* 12323e26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323e2b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323e2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12323e30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323e33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323e36 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12323e39:;
  /* 12323e39 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12323e40 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12323e47:;
  /* 12323e47 cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323e4e jle 0x12323e63 */
  if ((C.zf||C.sf!=C.of)) goto L_12323e63;
  /* 12323e50 push 4 */
  push32((uint32_t)(0x4u));
  /* 12323e52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323e55 push edx */
  push32((uint32_t)(EDX));
  /* 12323e56 call 0x1231cec0 */
  push32(0x12323e5bu); f_1231cec0();
  /* 12323e5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323e5e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12323e61 jmp 0x12323e78 */
  goto L_12323e78;
L_12323e63:;
  /* 12323e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323e66 mov ecx, dword ptr [0x1233fde8] */
  ECX = (r32((uint32_t)(0x1233fde8)));
  /* 12323e6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323e6e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12323e72 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12323e75 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12323e78:;
  /* 12323e78 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323e7c je 0x12323eb9 */
  if (C.zf) goto L_12323eb9;
  /* 12323e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12323e80 push 0xa */
  push32((uint32_t)(0xau));
  /* 12323e82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323e85 push eax */
  push32((uint32_t)(EAX));
  /* 12323e86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323e89 push ecx */
  push32((uint32_t)(ECX));
  /* 12323e8a call 0x12324d50 */
  push32(0x12323e8fu); f_12324d50();
  /* 12323e8f mov ecx, eax */
  ECX = (EAX);
  /* 12323e91 mov esi, edx */
  ESI = (EDX);
  /* 12323e93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12323e96 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323e99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12323e9a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323e9c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12323e9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12323ea1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12323ea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12323ea9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12323eab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12323eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12323eb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323eb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12323eb7 jmp 0x12323e47 */
  goto L_12323e47;
L_12323eb9:;
  /* 12323eb9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323ebd jne 0x12323ece */
  if (!C.zf) goto L_12323ece;
  /* 12323ebf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323ec2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12323ec4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12323ec7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323eca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12323ecc jmp 0x12323ed4 */
  goto L_12323ed4;
L_12323ece:;
  /* 12323ece mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12323ed1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12323ed4:;
  /* 12323ed4 pop esi */
  ESI = (pop32());
  /* 12323ed5 mov esp, ebp */
  ESP = (EBP);
  /* 12323ed7 pop ebp */
  EBP = (pop32());
  /* 12323ed8 ret  */
  ESPCHK(0x12323db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x12323ee0 (61 bytes, 18 insns) */
void f_12323ee0(void) {
  FTRACE(0x12323ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12323ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12323ee3 cmp dword ptr [0x12341a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323eea jne 0x12323f1b */
  if (!C.zf) goto L_12323f1b;
  /* 12323eec push 0xb */
  push32((uint32_t)(0xbu));
  /* 12323eee call 0x1231a9b0 */
  push32(0x12323ef3u); f_1231a9b0();
  /* 12323ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323ef6 cmp dword ptr [0x12341a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323efd jne 0x12323f11 */
  if (!C.zf) goto L_12323f11;
  /* 12323eff call 0x12323f40 */
  push32(0x12323f04u); f_12323f40();
  /* 12323f04 mov eax, dword ptr [0x12341a90] */
  EAX = (r32((uint32_t)(0x12341a90)));
  /* 12323f09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323f0c mov dword ptr [0x12341a90], eax */
  w32((uint32_t)(0x12341a90), (EAX));
L_12323f11:;
  /* 12323f11 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12323f13 call 0x1231aa50 */
  push32(0x12323f18u); f_1231aa50();
  /* 12323f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12323f1b:;
  /* 12323f1b pop ebp */
  EBP = (pop32());
  /* 12323f1c ret  */
  ESPCHK(0x12323ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f20 @ 0x12323f20 (30 bytes, 11 insns) */
void f_12323f20(void) {
  FTRACE(0x12323f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12323f21 mov ebp, esp */
  EBP = (ESP);
  /* 12323f23 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12323f25 call 0x1231a9b0 */
  push32(0x12323f2au); f_1231a9b0();
  /* 12323f2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323f2d call 0x12323f40 */
  push32(0x12323f32u); f_12323f40();
  /* 12323f32 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12323f34 call 0x1231aa50 */
  push32(0x12323f39u); f_1231aa50();
  /* 12323f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323f3c pop ebp */
  EBP = (pop32());
  /* 12323f3d ret  */
  ESPCHK(0x12323f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f40 @ 0x12323f40 (939 bytes, 266 insns) */
void f_12323f40(void) {
  FTRACE(0x12323f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12323f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12323f41 mov ebp, esp */
  EBP = (ESP);
  /* 12323f43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12323f46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12323f4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12323f4f call 0x1231a9b0 */
  push32(0x12323f54u); f_1231a9b0();
  /* 12323f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323f57 mov dword ptr [0x123419d8], 0 */
  w32((uint32_t)(0x123419d8), (0x0u));
  /* 12323f61 mov dword ptr [0x12340e48], 0xffffffff */
  w32((uint32_t)(0x12340e48), (0xffffffffu));
  /* 12323f6b mov eax, dword ptr [0x12340e48] */
  EAX = (r32((uint32_t)(0x12340e48)));
  /* 12323f70 mov dword ptr [0x12340e38], eax */
  w32((uint32_t)(0x12340e38), (EAX));
  /* 12323f75 push 0x1233e208 */
  push32((uint32_t)(0x1233e208u));
  /* 12323f7a call 0x12324dc0 */
  push32(0x12323f7fu); f_12324dc0();
  /* 12323f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323f82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12323f85 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323f89 jne 0x123240c3 */
  if (!C.zf) goto L_123240c3;
  /* 12323f8f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12323f91 call 0x1231aa50 */
  push32(0x12323f96u); f_1231aa50();
  /* 12323f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12323f99 push 0x123419e0 */
  push32((uint32_t)(0x123419e0u));
  /* 12323f9e call dword ptr [0x123442f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f8))), 0x12323fa4u);
  /* 12323fa4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323fa7 je 0x123240be */
  if (C.zf) goto L_123240be;
  /* 12323fad mov dword ptr [0x123419d8], 1 */
  w32((uint32_t)(0x123419d8), (0x1u));
  /* 12323fb7 mov ecx, dword ptr [0x123419e0] */
  ECX = (r32((uint32_t)(0x123419e0)));
  /* 12323fbd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12323fc0 mov dword ptr [0x12340da0], ecx */
  w32((uint32_t)(0x12340da0), (ECX));
  /* 12323fc6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323fc8 mov dx, word ptr [0x12341a26] */
  DX = (r16((uint32_t)(0x12341a26)));
  /* 12323fcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12323fd1 je 0x12323fe9 */
  if (C.zf) goto L_12323fe9;
  /* 12323fd3 mov eax, dword ptr [0x12341a34] */
  EAX = (r32((uint32_t)(0x12341a34)));
  /* 12323fd8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12323fdb mov ecx, dword ptr [0x12340da0] */
  ECX = (r32((uint32_t)(0x12340da0)));
  /* 12323fe1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12323fe3 mov dword ptr [0x12340da0], ecx */
  w32((uint32_t)(0x12340da0), (ECX));
L_12323fe9:;
  /* 12323fe9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12323feb mov dx, word ptr [0x12341a7a] */
  DX = (r16((uint32_t)(0x12341a7a)));
  /* 12323ff2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12323ff4 je 0x1232401e */
  if (C.zf) goto L_1232401e;
  /* 12323ff6 cmp dword ptr [0x12341a88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12323ffd je 0x1232401e */
  if (C.zf) goto L_1232401e;
  /* 12323fff mov dword ptr [0x12340da4], 1 */
  w32((uint32_t)(0x12340da4), (0x1u));
  /* 12324009 mov eax, dword ptr [0x12341a88] */
  EAX = (r32((uint32_t)(0x12341a88)));
  /* 1232400e sub eax, dword ptr [0x12341a34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12341a34))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324014 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12324017 mov dword ptr [0x12340da8], eax */
  w32((uint32_t)(0x12340da8), (EAX));
  /* 1232401c jmp 0x12324032 */
  goto L_12324032;
L_1232401e:;
  /* 1232401e mov dword ptr [0x12340da4], 0 */
  w32((uint32_t)(0x12340da4), (0x0u));
  /* 12324028 mov dword ptr [0x12340da8], 0 */
  w32((uint32_t)(0x12340da8), (0x0u));
L_12324032:;
  /* 12324032 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12324035 push ecx */
  push32((uint32_t)(ECX));
  /* 12324036 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324038 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1232403a mov edx, dword ptr [0x12340e2c] */
  EDX = (r32((uint32_t)(0x12340e2c)));
  /* 12324040 push edx */
  push32((uint32_t)(EDX));
  /* 12324041 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324043 push 0x123419e4 */
  push32((uint32_t)(0x123419e4u));
  /* 12324048 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1232404d mov eax, dword ptr [0x12341950] */
  EAX = (r32((uint32_t)(0x12341950)));
  /* 12324052 push eax */
  push32((uint32_t)(EAX));
  /* 12324053 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12324059u);
  /* 12324059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232405b je 0x1232406f */
  if (C.zf) goto L_1232406f;
  /* 1232405d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324061 jne 0x1232406f */
  if (!C.zf) goto L_1232406f;
  /* 12324063 mov ecx, dword ptr [0x12340e2c] */
  ECX = (r32((uint32_t)(0x12340e2c)));
  /* 12324069 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1232406d jmp 0x12324078 */
  goto L_12324078;
L_1232406f:;
  /* 1232406f mov edx, dword ptr [0x12340e2c] */
  EDX = (r32((uint32_t)(0x12340e2c)));
  /* 12324075 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12324078:;
  /* 12324078 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1232407b push eax */
  push32((uint32_t)(EAX));
  /* 1232407c push 0 */
  push32((uint32_t)(0x0u));
  /* 1232407e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12324080 mov ecx, dword ptr [0x12340e30] */
  ECX = (r32((uint32_t)(0x12340e30)));
  /* 12324086 push ecx */
  push32((uint32_t)(ECX));
  /* 12324087 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324089 push 0x12341a38 */
  push32((uint32_t)(0x12341a38u));
  /* 1232408e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12324093 mov edx, dword ptr [0x12341950] */
  EDX = (r32((uint32_t)(0x12341950)));
  /* 12324099 push edx */
  push32((uint32_t)(EDX));
  /* 1232409a call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x123240a0u);
  /* 123240a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123240a2 je 0x123240b5 */
  if (C.zf) goto L_123240b5;
  /* 123240a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123240a8 jne 0x123240b5 */
  if (!C.zf) goto L_123240b5;
  /* 123240aa mov eax, dword ptr [0x12340e30] */
  EAX = (r32((uint32_t)(0x12340e30)));
  /* 123240af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 123240b3 jmp 0x123240be */
  goto L_123240be;
L_123240b5:;
  /* 123240b5 mov ecx, dword ptr [0x12340e30] */
  ECX = (r32((uint32_t)(0x12340e30)));
  /* 123240bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_123240be:;
  /* 123240be jmp 0x123242e7 */
  goto L_123242e7;
L_123240c3:;
  /* 123240c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123240c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123240c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123240cb je 0x123240ed */
  if (C.zf) goto L_123240ed;
  /* 123240cd cmp dword ptr [0x12341a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123240d4 je 0x123240fc */
  if (C.zf) goto L_123240fc;
  /* 123240d6 mov ecx, dword ptr [0x12341a8c] */
  ECX = (r32((uint32_t)(0x12341a8c)));
  /* 123240dc push ecx */
  push32((uint32_t)(ECX));
  /* 123240dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123240e0 push edx */
  push32((uint32_t)(EDX));
  /* 123240e1 call 0x12320ea0 */
  push32(0x123240e6u); f_12320ea0();
  /* 123240e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123240e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123240eb jne 0x123240fc */
  if (!C.zf) goto L_123240fc;
L_123240ed:;
  /* 123240ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 123240ef call 0x1231aa50 */
  push32(0x123240f4u); f_1231aa50();
  /* 123240f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123240f7 jmp 0x123242e7 */
  goto L_123242e7;
L_123240fc:;
  /* 123240fc push 2 */
  push32((uint32_t)(0x2u));
  /* 123240fe mov eax, dword ptr [0x12341a8c] */
  EAX = (r32((uint32_t)(0x12341a8c)));
  /* 12324103 push eax */
  push32((uint32_t)(EAX));
  /* 12324104 call 0x12317090 */
  push32(0x12324109u); f_12317090();
  /* 12324109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232410c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12324111 push 0x1233e200 */
  push32((uint32_t)(0x1233e200u));
  /* 12324116 push 2 */
  push32((uint32_t)(0x2u));
  /* 12324118 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232411b push ecx */
  push32((uint32_t)(ECX));
  /* 1232411c call 0x12319430 */
  push32(0x12324121u); f_12319430();
  /* 12324121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324124 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324127 push eax */
  push32((uint32_t)(EAX));
  /* 12324128 call 0x12316600 */
  push32(0x1232412du); f_12316600();
  /* 1232412d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324130 mov dword ptr [0x12341a8c], eax */
  w32((uint32_t)(0x12341a8c), (EAX));
  /* 12324135 cmp dword ptr [0x12341a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232413c jne 0x1232414d */
  if (!C.zf) goto L_1232414d;
  /* 1232413e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12324140 call 0x1231aa50 */
  push32(0x12324145u); f_1231aa50();
  /* 12324145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324148 jmp 0x123242e7 */
  goto L_123242e7;
L_1232414d:;
  /* 1232414d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324150 push edx */
  push32((uint32_t)(EDX));
  /* 12324151 mov eax, dword ptr [0x12341a8c] */
  EAX = (r32((uint32_t)(0x12341a8c)));
  /* 12324156 push eax */
  push32((uint32_t)(EAX));
  /* 12324157 call 0x123195b0 */
  push32(0x1232415cu); f_123195b0();
  /* 1232415c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232415f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12324161 call 0x1231aa50 */
  push32(0x12324166u); f_1231aa50();
  /* 12324166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324169 push 3 */
  push32((uint32_t)(0x3u));
  /* 1232416b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232416e push ecx */
  push32((uint32_t)(ECX));
  /* 1232416f mov edx, dword ptr [0x12340e2c] */
  EDX = (r32((uint32_t)(0x12340e2c)));
  /* 12324175 push edx */
  push32((uint32_t)(EDX));
  /* 12324176 call 0x12319e20 */
  push32(0x1232417bu); f_12319e20();
  /* 1232417b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232417e mov eax, dword ptr [0x12340e2c] */
  EAX = (r32((uint32_t)(0x12340e2c)));
  /* 12324183 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12324187 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232418a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232418d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12324190 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324193 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12324196 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324199 jne 0x123241ad */
  if (!C.zf) goto L_123241ad;
  /* 1232419b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232419e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123241a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123241a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123241aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123241ad:;
  /* 123241ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241b0 push eax */
  push32((uint32_t)(EAX));
  /* 123241b1 call 0x12323c90 */
  push32(0x123241b6u); f_12323c90();
  /* 123241b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123241b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123241bf mov dword ptr [0x12340da0], eax */
  w32((uint32_t)(0x12340da0), (EAX));
L_123241c4:;
  /* 123241c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123241ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123241cd je 0x123241e5 */
  if (C.zf) goto L_123241e5;
  /* 123241cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123241d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123241d8 jl 0x123241f0 */
  if ((C.sf!=C.of)) goto L_123241f0;
  /* 123241da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123241e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123241e3 jg 0x123241f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_123241f0;
L_123241e5:;
  /* 123241e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123241eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123241ee jmp 0x123241c4 */
  goto L_123241c4;
L_123241f0:;
  /* 123241f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123241f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123241f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123241f9 jne 0x12324295 */
  if (!C.zf) goto L_12324295;
  /* 123241ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324202 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324205 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12324208 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232420b push edx */
  push32((uint32_t)(EDX));
  /* 1232420c call 0x12323c90 */
  push32(0x12324211u); f_12323c90();
  /* 12324211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324214 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12324217 mov ecx, dword ptr [0x12340da0] */
  ECX = (r32((uint32_t)(0x12340da0)));
  /* 1232421d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232421f mov dword ptr [0x12340da0], ecx */
  w32((uint32_t)(0x12340da0), (ECX));
L_12324225:;
  /* 12324225 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324228 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1232422b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232422e jl 0x12324246 */
  if ((C.sf!=C.of)) goto L_12324246;
  /* 12324230 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324233 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12324236 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324239 jg 0x12324246 */
  if ((!C.zf&&C.sf==C.of)) goto L_12324246;
  /* 1232423b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232423e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324241 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12324244 jmp 0x12324225 */
  goto L_12324225;
L_12324246:;
  /* 12324246 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324249 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1232424c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232424f jne 0x12324295 */
  if (!C.zf) goto L_12324295;
  /* 12324251 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324254 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324257 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1232425a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232425d push ecx */
  push32((uint32_t)(ECX));
  /* 1232425e call 0x12323c90 */
  push32(0x12324263u); f_12323c90();
  /* 12324263 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324266 mov edx, dword ptr [0x12340da0] */
  EDX = (r32((uint32_t)(0x12340da0)));
  /* 1232426c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232426e mov dword ptr [0x12340da0], edx */
  w32((uint32_t)(0x12340da0), (EDX));
L_12324274:;
  /* 12324274 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324277 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1232427a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232427d jl 0x12324295 */
  if ((C.sf!=C.of)) goto L_12324295;
  /* 1232427f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324282 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12324285 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324288 jg 0x12324295 */
  if ((!C.zf&&C.sf==C.of)) goto L_12324295;
  /* 1232428a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232428d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324290 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12324293 jmp 0x12324274 */
  goto L_12324274;
L_12324295:;
  /* 12324295 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324299 je 0x123242a9 */
  if (C.zf) goto L_123242a9;
  /* 1232429b mov edx, dword ptr [0x12340da0] */
  EDX = (r32((uint32_t)(0x12340da0)));
  /* 123242a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123242a3 mov dword ptr [0x12340da0], edx */
  w32((uint32_t)(0x12340da0), (EDX));
L_123242a9:;
  /* 123242a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123242ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123242af mov dword ptr [0x12340da4], ecx */
  w32((uint32_t)(0x12340da4), (ECX));
  /* 123242b5 cmp dword ptr [0x12340da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12340da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123242bc je 0x123242de */
  if (C.zf) goto L_123242de;
  /* 123242be push 3 */
  push32((uint32_t)(0x3u));
  /* 123242c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123242c3 push edx */
  push32((uint32_t)(EDX));
  /* 123242c4 mov eax, dword ptr [0x12340e30] */
  EAX = (r32((uint32_t)(0x12340e30)));
  /* 123242c9 push eax */
  push32((uint32_t)(EAX));
  /* 123242ca call 0x12319e20 */
  push32(0x123242cfu); f_12319e20();
  /* 123242cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123242d2 mov ecx, dword ptr [0x12340e30] */
  ECX = (r32((uint32_t)(0x12340e30)));
  /* 123242d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 123242dc jmp 0x123242e7 */
  goto L_123242e7;
L_123242de:;
  /* 123242de mov edx, dword ptr [0x12340e30] */
  EDX = (r32((uint32_t)(0x12340e30)));
  /* 123242e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_123242e7:;
  /* 123242e7 mov esp, ebp */
  ESP = (EBP);
  /* 123242e9 pop ebp */
  EBP = (pop32());
  /* 123242ea ret  */
  ESPCHK(0x12323f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100142f0 @ 0x123242f0 (46 bytes, 18 insns) */
void f_123242f0(void) {
  FTRACE(0x123242f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123242f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123242f1 mov ebp, esp */
  EBP = (ESP);
  /* 123242f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123242f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123242f6 call 0x1231a9b0 */
  push32(0x123242fbu); f_1231a9b0();
  /* 123242fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123242fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324301 push eax */
  push32((uint32_t)(EAX));
  /* 12324302 call 0x12324320 */
  push32(0x12324307u); f_12324320();
  /* 12324307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232430a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1232430d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1232430f call 0x1231aa50 */
  push32(0x12324314u); f_1231aa50();
  /* 12324314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232431a mov esp, ebp */
  ESP = (EBP);
  /* 1232431c pop ebp */
  EBP = (pop32());
  /* 1232431d ret  */
  ESPCHK(0x123242f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014320 @ 0x12324320 (762 bytes, 246 insns) */
void f_12324320(void) {
  FTRACE(0x12324320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324320 push ebp */
  push32((uint32_t)(EBP));
  /* 12324321 mov ebp, esp */
  EBP = (ESP);
  /* 12324323 push ecx */
  push32((uint32_t)(ECX));
  /* 12324324 cmp dword ptr [0x12340da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12340da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232432b jne 0x12324334 */
  if (!C.zf) goto L_12324334;
  /* 1232432d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232432f jmp 0x12324616 */
  goto L_12324616;
L_12324334:;
  /* 12324334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324337 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1232433a cmp ecx, dword ptr [0x12340e38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12340e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324340 jne 0x12324354 */
  if (!C.zf) goto L_12324354;
  /* 12324342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324345 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12324348 cmp eax, dword ptr [0x12340e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232434e je 0x1232451b */
  if (C.zf) goto L_1232451b;
L_12324354:;
  /* 12324354 cmp dword ptr [0x123419d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123419d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232435b je 0x123244d5 */
  if (C.zf) goto L_123244d5;
  /* 12324361 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12324363 mov cx, word ptr [0x12341a78] */
  CX = (r16((uint32_t)(0x12341a78)));
  /* 1232436a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1232436c jne 0x123243c9 */
  if (!C.zf) goto L_123243c9;
  /* 1232436e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12324370 mov dx, word ptr [0x12341a86] */
  DX = (r16((uint32_t)(0x12341a86)));
  /* 12324377 push edx */
  push32((uint32_t)(EDX));
  /* 12324378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232437a mov ax, word ptr [0x12341a84] */
  AX = (r16((uint32_t)(0x12341a84)));
  /* 12324380 push eax */
  push32((uint32_t)(EAX));
  /* 12324381 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12324383 mov cx, word ptr [0x12341a82] */
  CX = (r16((uint32_t)(0x12341a82)));
  /* 1232438a push ecx */
  push32((uint32_t)(ECX));
  /* 1232438b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1232438d mov dx, word ptr [0x12341a80] */
  DX = (r16((uint32_t)(0x12341a80)));
  /* 12324394 push edx */
  push32((uint32_t)(EDX));
  /* 12324395 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324399 mov ax, word ptr [0x12341a7c] */
  AX = (r16((uint32_t)(0x12341a7c)));
  /* 1232439f push eax */
  push32((uint32_t)(EAX));
  /* 123243a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123243a2 mov cx, word ptr [0x12341a7e] */
  CX = (r16((uint32_t)(0x12341a7e)));
  /* 123243a9 push ecx */
  push32((uint32_t)(ECX));
  /* 123243aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123243ac mov dx, word ptr [0x12341a7a] */
  DX = (r16((uint32_t)(0x12341a7a)));
  /* 123243b3 push edx */
  push32((uint32_t)(EDX));
  /* 123243b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123243b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123243ba push ecx */
  push32((uint32_t)(ECX));
  /* 123243bb push 1 */
  push32((uint32_t)(0x1u));
  /* 123243bd push 1 */
  push32((uint32_t)(0x1u));
  /* 123243bf call 0x12324620 */
  push32(0x123243c4u); f_12324620();
  /* 123243c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123243c7 jmp 0x1232441a */
  goto L_1232441a;
L_123243c9:;
  /* 123243c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123243cb mov dx, word ptr [0x12341a86] */
  DX = (r16((uint32_t)(0x12341a86)));
  /* 123243d2 push edx */
  push32((uint32_t)(EDX));
  /* 123243d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123243d5 mov ax, word ptr [0x12341a84] */
  AX = (r16((uint32_t)(0x12341a84)));
  /* 123243db push eax */
  push32((uint32_t)(EAX));
  /* 123243dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123243de mov cx, word ptr [0x12341a82] */
  CX = (r16((uint32_t)(0x12341a82)));
  /* 123243e5 push ecx */
  push32((uint32_t)(ECX));
  /* 123243e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123243e8 mov dx, word ptr [0x12341a80] */
  DX = (r16((uint32_t)(0x12341a80)));
  /* 123243ef push edx */
  push32((uint32_t)(EDX));
  /* 123243f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123243f2 mov ax, word ptr [0x12341a7e] */
  AX = (r16((uint32_t)(0x12341a7e)));
  /* 123243f8 push eax */
  push32((uint32_t)(EAX));
  /* 123243f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123243fb push 0 */
  push32((uint32_t)(0x0u));
  /* 123243fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123243ff mov cx, word ptr [0x12341a7a] */
  CX = (r16((uint32_t)(0x12341a7a)));
  /* 12324406 push ecx */
  push32((uint32_t)(ECX));
  /* 12324407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232440a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1232440d push eax */
  push32((uint32_t)(EAX));
  /* 1232440e push 0 */
  push32((uint32_t)(0x0u));
  /* 12324410 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324412 call 0x12324620 */
  push32(0x12324417u); f_12324620();
  /* 12324417 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1232441a:;
  /* 1232441a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1232441c mov cx, word ptr [0x12341a24] */
  CX = (r16((uint32_t)(0x12341a24)));
  /* 12324423 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12324425 jne 0x12324482 */
  if (!C.zf) goto L_12324482;
  /* 12324427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12324429 mov dx, word ptr [0x12341a32] */
  DX = (r16((uint32_t)(0x12341a32)));
  /* 12324430 push edx */
  push32((uint32_t)(EDX));
  /* 12324431 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324433 mov ax, word ptr [0x12341a30] */
  AX = (r16((uint32_t)(0x12341a30)));
  /* 12324439 push eax */
  push32((uint32_t)(EAX));
  /* 1232443a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1232443c mov cx, word ptr [0x12341a2e] */
  CX = (r16((uint32_t)(0x12341a2e)));
  /* 12324443 push ecx */
  push32((uint32_t)(ECX));
  /* 12324444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12324446 mov dx, word ptr [0x12341a2c] */
  DX = (r16((uint32_t)(0x12341a2c)));
  /* 1232444d push edx */
  push32((uint32_t)(EDX));
  /* 1232444e push 0 */
  push32((uint32_t)(0x0u));
  /* 12324450 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324452 mov ax, word ptr [0x12341a28] */
  AX = (r16((uint32_t)(0x12341a28)));
  /* 12324458 push eax */
  push32((uint32_t)(EAX));
  /* 12324459 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1232445b mov cx, word ptr [0x12341a2a] */
  CX = (r16((uint32_t)(0x12341a2a)));
  /* 12324462 push ecx */
  push32((uint32_t)(ECX));
  /* 12324463 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12324465 mov dx, word ptr [0x12341a26] */
  DX = (r16((uint32_t)(0x12341a26)));
  /* 1232446c push edx */
  push32((uint32_t)(EDX));
  /* 1232446d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324470 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12324473 push ecx */
  push32((uint32_t)(ECX));
  /* 12324474 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324476 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324478 call 0x12324620 */
  push32(0x1232447du); f_12324620();
  /* 1232447d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324480 jmp 0x123244d3 */
  goto L_123244d3;
L_12324482:;
  /* 12324482 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12324484 mov dx, word ptr [0x12341a32] */
  DX = (r16((uint32_t)(0x12341a32)));
  /* 1232448b push edx */
  push32((uint32_t)(EDX));
  /* 1232448c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232448e mov ax, word ptr [0x12341a30] */
  AX = (r16((uint32_t)(0x12341a30)));
  /* 12324494 push eax */
  push32((uint32_t)(EAX));
  /* 12324495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12324497 mov cx, word ptr [0x12341a2e] */
  CX = (r16((uint32_t)(0x12341a2e)));
  /* 1232449e push ecx */
  push32((uint32_t)(ECX));
  /* 1232449f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123244a1 mov dx, word ptr [0x12341a2c] */
  DX = (r16((uint32_t)(0x12341a2c)));
  /* 123244a8 push edx */
  push32((uint32_t)(EDX));
  /* 123244a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123244ab mov ax, word ptr [0x12341a2a] */
  AX = (r16((uint32_t)(0x12341a2a)));
  /* 123244b1 push eax */
  push32((uint32_t)(EAX));
  /* 123244b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123244b8 mov cx, word ptr [0x12341a26] */
  CX = (r16((uint32_t)(0x12341a26)));
  /* 123244bf push ecx */
  push32((uint32_t)(ECX));
  /* 123244c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123244c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123244c6 push eax */
  push32((uint32_t)(EAX));
  /* 123244c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244cb call 0x12324620 */
  push32(0x123244d0u); f_12324620();
  /* 123244d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123244d3:;
  /* 123244d3 jmp 0x1232451b */
  goto L_1232451b;
L_123244d5:;
  /* 123244d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244db push 2 */
  push32((uint32_t)(0x2u));
  /* 123244dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123244df push 0 */
  push32((uint32_t)(0x0u));
  /* 123244e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123244e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 123244e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123244e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123244eb push edx */
  push32((uint32_t)(EDX));
  /* 123244ec push 1 */
  push32((uint32_t)(0x1u));
  /* 123244ee push 1 */
  push32((uint32_t)(0x1u));
  /* 123244f0 call 0x12324620 */
  push32(0x123244f5u); f_12324620();
  /* 123244f5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123244f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123244fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123244fc push 0 */
  push32((uint32_t)(0x0u));
  /* 123244fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12324500 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324502 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324504 push 5 */
  push32((uint32_t)(0x5u));
  /* 12324506 push 0xa */
  push32((uint32_t)(0xau));
  /* 12324508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232450b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1232450e push ecx */
  push32((uint32_t)(ECX));
  /* 1232450f push 1 */
  push32((uint32_t)(0x1u));
  /* 12324511 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324513 call 0x12324620 */
  push32(0x12324518u); f_12324620();
  /* 12324518 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1232451b:;
  /* 1232451b mov edx, dword ptr [0x12340e3c] */
  EDX = (r32((uint32_t)(0x12340e3c)));
  /* 12324521 cmp edx, dword ptr [0x12340e4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12340e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324527 jge 0x12324574 */
  if ((C.sf==C.of)) goto L_12324574;
  /* 12324529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232452c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1232452f cmp ecx, dword ptr [0x12340e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12340e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324535 jl 0x12324545 */
  if ((C.sf!=C.of)) goto L_12324545;
  /* 12324537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232453a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1232453d cmp eax, dword ptr [0x12340e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324543 jle 0x1232454c */
  if ((C.zf||C.sf!=C.of)) goto L_1232454c;
L_12324545:;
  /* 12324545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324547 jmp 0x12324616 */
  goto L_12324616;
L_1232454c:;
  /* 1232454c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232454f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12324552 cmp edx, dword ptr [0x12340e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12340e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324558 jle 0x12324572 */
  if ((C.zf||C.sf!=C.of)) goto L_12324572;
  /* 1232455a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232455d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12324560 cmp ecx, dword ptr [0x12340e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12340e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324566 jge 0x12324572 */
  if ((C.sf==C.of)) goto L_12324572;
  /* 12324568 mov eax, 1 */
  EAX = (0x1u);
  /* 1232456d jmp 0x12324616 */
  goto L_12324616;
L_12324572:;
  /* 12324572 jmp 0x123245b7 */
  goto L_123245b7;
L_12324574:;
  /* 12324574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324577 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1232457a cmp eax, dword ptr [0x12340e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324580 jl 0x12324590 */
  if ((C.sf!=C.of)) goto L_12324590;
  /* 12324582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324585 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12324588 cmp edx, dword ptr [0x12340e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12340e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232458e jle 0x12324597 */
  if ((C.zf||C.sf!=C.of)) goto L_12324597;
L_12324590:;
  /* 12324590 mov eax, 1 */
  EAX = (0x1u);
  /* 12324595 jmp 0x12324616 */
  goto L_12324616;
L_12324597:;
  /* 12324597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232459a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1232459d cmp ecx, dword ptr [0x12340e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12340e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123245a3 jle 0x123245b7 */
  if ((C.zf||C.sf!=C.of)) goto L_123245b7;
  /* 123245a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123245a8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123245ab cmp eax, dword ptr [0x12340e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123245b1 jge 0x123245b7 */
  if ((C.sf==C.of)) goto L_123245b7;
  /* 123245b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123245b5 jmp 0x12324616 */
  goto L_12324616;
L_123245b7:;
  /* 123245b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123245ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123245bd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123245c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123245c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123245c5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123245c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123245ca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123245cd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123245d3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123245d5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123245db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123245de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123245e1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123245e4 cmp edx, dword ptr [0x12340e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12340e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123245ea jne 0x12324602 */
  if (!C.zf) goto L_12324602;
  /* 123245ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123245ef cmp eax, dword ptr [0x12340e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123245f5 jl 0x123245fe */
  if ((C.sf!=C.of)) goto L_123245fe;
  /* 123245f7 mov eax, 1 */
  EAX = (0x1u);
  /* 123245fc jmp 0x12324616 */
  goto L_12324616;
L_123245fe:;
  /* 123245fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324600 jmp 0x12324616 */
  goto L_12324616;
L_12324602:;
  /* 12324602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324605 cmp ecx, dword ptr [0x12340e50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12340e50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232460b jge 0x12324614 */
  if ((C.sf==C.of)) goto L_12324614;
  /* 1232460d mov eax, 1 */
  EAX = (0x1u);
  /* 12324612 jmp 0x12324616 */
  goto L_12324616;
L_12324614:;
  /* 12324614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12324616:;
  /* 12324616 mov esp, ebp */
  ESP = (EBP);
  /* 12324618 pop ebp */
  EBP = (pop32());
  /* 12324619 ret  */
  ESPCHK(0x12324320u, _esp0);
  ESP += 4; return;
}

/* FUN_10014620 @ 0x12324620 (504 bytes, 145 insns) */
void f_12324620(void) {
  FTRACE(0x12324620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324620 push ebp */
  push32((uint32_t)(EBP));
  /* 12324621 mov ebp, esp */
  EBP = (ESP);
  /* 12324623 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324626 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232462a jne 0x123246fc */
  if (!C.zf) goto L_123246fc;
  /* 12324630 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324633 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12324636 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324638 jne 0x12324649 */
  if (!C.zf) goto L_12324649;
  /* 1232463a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232463d mov edx, dword ptr [ecx*4 + 0x12340e5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12340e5c)));
  /* 12324644 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12324647 jmp 0x12324656 */
  goto L_12324656;
L_12324649:;
  /* 12324649 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232464c mov ecx, dword ptr [eax*4 + 0x12340e90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12340e90)));
  /* 12324653 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12324656:;
  /* 12324656 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324659 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232465c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1232465f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324662 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324665 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1232466b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232466e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324670 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324673 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324676 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12324679 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1232467d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1232467e mov ecx, 7 */
  ECX = (0x7u);
  /* 12324683 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12324685 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12324688 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232468b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232468e jg 0x123246a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_123246a9;
  /* 12324690 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12324693 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324696 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12324699 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232469c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1232469f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123246a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123246a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123246a7 jmp 0x123246bd */
  goto L_123246bd;
L_123246a9:;
  /* 123246a9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123246ac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123246af mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123246b2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123246b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123246b8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123246ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123246bd:;
  /* 123246bd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123246c1 jne 0x123246fa */
  if (!C.zf) goto L_123246fa;
  /* 123246c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123246c6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 123246c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123246cb jne 0x123246dc */
  if (!C.zf) goto L_123246dc;
  /* 123246cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123246d0 mov eax, dword ptr [edx*4 + 0x12340e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12340e60)));
  /* 123246d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123246da jmp 0x123246e9 */
  goto L_123246e9;
L_123246dc:;
  /* 123246dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123246df mov edx, dword ptr [ecx*4 + 0x12340e94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12340e94)));
  /* 123246e6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123246e9:;
  /* 123246e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123246ec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123246ef jle 0x123246fa */
  if ((C.zf||C.sf!=C.of)) goto L_123246fa;
  /* 123246f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123246f4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123246f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123246fa:;
  /* 123246fa jmp 0x12324731 */
  goto L_12324731;
L_123246fc:;
  /* 123246fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123246ff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12324702 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12324704 jne 0x12324715 */
  if (!C.zf) goto L_12324715;
  /* 12324706 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12324709 mov ecx, dword ptr [eax*4 + 0x12340e5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12340e5c)));
  /* 12324710 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12324713 jmp 0x12324722 */
  goto L_12324722;
L_12324715:;
  /* 12324715 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12324718 mov eax, dword ptr [edx*4 + 0x12340e90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12340e90)));
  /* 1232471f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12324722:;
  /* 12324722 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12324725 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12324728 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232472b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232472e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12324731:;
  /* 12324731 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324735 jne 0x12324771 */
  if (!C.zf) goto L_12324771;
  /* 12324737 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232473a mov dword ptr [0x12340e3c], eax */
  w32((uint32_t)(0x12340e3c), (EAX));
  /* 1232473f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12324742 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12324745 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12324748 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232474a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1232474d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12324750 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324752 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12324758 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1232475b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232475d mov dword ptr [0x12340e40], ecx */
  w32((uint32_t)(0x12340e40), (ECX));
  /* 12324763 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324766 mov dword ptr [0x12340e38], edx */
  w32((uint32_t)(0x12340e38), (EDX));
  /* 1232476c jmp 0x12324814 */
  goto L_12324814;
L_12324771:;
  /* 12324771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324774 mov dword ptr [0x12340e4c], eax */
  w32((uint32_t)(0x12340e4c), (EAX));
  /* 12324779 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1232477c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1232477f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12324782 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324784 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12324787 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1232478a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232478c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12324792 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12324795 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324797 mov dword ptr [0x12340e50], ecx */
  w32((uint32_t)(0x12340e50), (ECX));
  /* 1232479d mov edx, dword ptr [0x12340da8] */
  EDX = (r32((uint32_t)(0x12340da8)));
  /* 123247a3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123247a9 mov eax, dword ptr [0x12340e50] */
  EAX = (r32((uint32_t)(0x12340e50)));
  /* 123247ae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123247b0 mov dword ptr [0x12340e50], eax */
  w32((uint32_t)(0x12340e50), (EAX));
  /* 123247b5 cmp dword ptr [0x12340e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12340e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123247bc jge 0x123247e1 */
  if ((C.sf==C.of)) goto L_123247e1;
  /* 123247be mov ecx, dword ptr [0x12340e50] */
  ECX = (r32((uint32_t)(0x12340e50)));
  /* 123247c4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123247ca mov dword ptr [0x12340e50], ecx */
  w32((uint32_t)(0x12340e50), (ECX));
  /* 123247d0 mov edx, dword ptr [0x12340e4c] */
  EDX = (r32((uint32_t)(0x12340e4c)));
  /* 123247d6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123247d9 mov dword ptr [0x12340e4c], edx */
  w32((uint32_t)(0x12340e4c), (EDX));
  /* 123247df jmp 0x1232480b */
  goto L_1232480b;
L_123247e1:;
  /* 123247e1 cmp dword ptr [0x12340e50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12340e50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123247eb jl 0x1232480b */
  if ((C.sf!=C.of)) goto L_1232480b;
  /* 123247ed mov eax, dword ptr [0x12340e50] */
  EAX = (r32((uint32_t)(0x12340e50)));
  /* 123247f2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123247f7 mov dword ptr [0x12340e50], eax */
  w32((uint32_t)(0x12340e50), (EAX));
  /* 123247fc mov ecx, dword ptr [0x12340e4c] */
  ECX = (r32((uint32_t)(0x12340e4c)));
  /* 12324802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324805 mov dword ptr [0x12340e4c], ecx */
  w32((uint32_t)(0x12340e4c), (ECX));
L_1232480b:;
  /* 1232480b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232480e mov dword ptr [0x12340e48], edx */
  w32((uint32_t)(0x12340e48), (EDX));
L_12324814:;
  /* 12324814 mov esp, ebp */
  ESP = (EBP);
  /* 12324816 pop ebp */
  EBP = (pop32());
  /* 12324817 ret  */
  ESPCHK(0x12324620u, _esp0);
  ESP += 4; return;
}

/* FUN_10014820 @ 0x12324820 (382 bytes, 135 insns) */
void f_12324820(void) {
  FTRACE(0x12324820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324820 push ebp */
  push32((uint32_t)(EBP));
  /* 12324821 mov ebp, esp */
  EBP = (ESP);
  /* 12324823 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324825 push 0x1233e210 */
  push32((uint32_t)(0x1233e210u));
  /* 1232482a push 0x12321e80 */
  push32((uint32_t)(0x12321e80u));
  /* 1232482f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12324835 push eax */
  push32((uint32_t)(EAX));
  /* 12324836 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1232483d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324840 push ebx */
  push32((uint32_t)(EBX));
  /* 12324841 push esi */
  push32((uint32_t)(ESI));
  /* 12324842 push edi */
  push32((uint32_t)(EDI));
  /* 12324843 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12324846 cmp dword ptr [0x12341a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232484d jne 0x12324892 */
  if (!C.zf) goto L_12324892;
  /* 1232484f push 0 */
  push32((uint32_t)(0x0u));
  /* 12324851 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324853 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324857 call dword ptr [0x1234430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234430c))), 0x1232485du);
  /* 1232485d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232485f je 0x1232486d */
  if (C.zf) goto L_1232486d;
  /* 12324861 mov dword ptr [0x12341a94], 1 */
  w32((uint32_t)(0x12341a94), (0x1u));
  /* 1232486b jmp 0x12324892 */
  goto L_12324892;
L_1232486d:;
  /* 1232486d push 0 */
  push32((uint32_t)(0x0u));
  /* 1232486f push 0 */
  push32((uint32_t)(0x0u));
  /* 12324871 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324873 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324875 call dword ptr [0x123442f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f4))), 0x1232487bu);
  /* 1232487b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232487d je 0x1232488b */
  if (C.zf) goto L_1232488b;
  /* 1232487f mov dword ptr [0x12341a94], 2 */
  w32((uint32_t)(0x12341a94), (0x2u));
  /* 12324889 jmp 0x12324892 */
  goto L_12324892;
L_1232488b:;
  /* 1232488b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232488d jmp 0x123249a1 */
  goto L_123249a1;
L_12324892:;
  /* 12324892 cmp dword ptr [0x12341a94], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341a94))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324899 jne 0x123248b6 */
  if (!C.zf) goto L_123248b6;
  /* 1232489b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232489e push eax */
  push32((uint32_t)(EAX));
  /* 1232489f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123248a2 push ecx */
  push32((uint32_t)(ECX));
  /* 123248a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123248a6 push edx */
  push32((uint32_t)(EDX));
  /* 123248a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123248aa push eax */
  push32((uint32_t)(EAX));
  /* 123248ab call dword ptr [0x1234430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234430c))), 0x123248b1u);
  /* 123248b1 jmp 0x123249a1 */
  goto L_123249a1;
L_123248b6:;
  /* 123248b6 cmp dword ptr [0x12341a94], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12341a94))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123248bd jne 0x1232499f */
  if (!C.zf) goto L_1232499f;
  /* 123248c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123248c7 jne 0x123248d2 */
  if (!C.zf) goto L_123248d2;
  /* 123248c9 mov ecx, dword ptr [0x12341950] */
  ECX = (r32((uint32_t)(0x12341950)));
  /* 123248cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_123248d2:;
  /* 123248d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123248d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123248d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123248d9 push edx */
  push32((uint32_t)(EDX));
  /* 123248da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123248dd push eax */
  push32((uint32_t)(EAX));
  /* 123248de call dword ptr [0x123442f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f4))), 0x123248e4u);
  /* 123248e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123248e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123248eb jne 0x123248f4 */
  if (!C.zf) goto L_123248f4;
  /* 123248ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123248ef jmp 0x123249a1 */
  goto L_123249a1;
L_123248f4:;
  /* 123248f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123248fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123248fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324901 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12324903 call 0x123197a0 */
  push32(0x12324908u); f_123197a0();
  /* 12324908 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1232490b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1232490e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12324911 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12324914 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1232491b jmp 0x12324934 */
  goto L_12324934;
  /* 1232491d mov eax, 1 */
  EAX = (0x1u);
  /* 12324922 ret  */
  ESPCHK(0x12324820u, _esp0);
  ESP += 4; return;
  /* 12324923 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12324926 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1232492d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12324934:;
  /* 12324934 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324938 jne 0x1232493e */
  if (!C.zf) goto L_1232493e;
  /* 1232493a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232493c jmp 0x123249a1 */
  goto L_123249a1;
L_1232493e:;
  /* 1232493e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12324941 push edx */
  push32((uint32_t)(EDX));
  /* 12324942 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12324945 push eax */
  push32((uint32_t)(EAX));
  /* 12324946 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12324949 push ecx */
  push32((uint32_t)(ECX));
  /* 1232494a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232494d push edx */
  push32((uint32_t)(EDX));
  /* 1232494e call dword ptr [0x123442f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f4))), 0x12324954u);
  /* 12324954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324956 jne 0x1232495c */
  if (!C.zf) goto L_1232495c;
  /* 12324958 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232495a jmp 0x123249a1 */
  goto L_123249a1;
L_1232495c:;
  /* 1232495c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324960 jne 0x1232497d */
  if (!C.zf) goto L_1232497d;
  /* 12324962 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324964 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324966 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324968 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1232496b push eax */
  push32((uint32_t)(EAX));
  /* 1232496c push 1 */
  push32((uint32_t)(0x1u));
  /* 1232496e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12324971 push ecx */
  push32((uint32_t)(ECX));
  /* 12324972 call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x12324978u);
  /* 12324978 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1232497b jmp 0x1232499a */
  goto L_1232499a;
L_1232497d:;
  /* 1232497d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12324980 push edx */
  push32((uint32_t)(EDX));
  /* 12324981 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324984 push eax */
  push32((uint32_t)(EAX));
  /* 12324985 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324987 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1232498a push ecx */
  push32((uint32_t)(ECX));
  /* 1232498b push 1 */
  push32((uint32_t)(0x1u));
  /* 1232498d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12324990 push edx */
  push32((uint32_t)(EDX));
  /* 12324991 call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x12324997u);
  /* 12324997 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1232499a:;
  /* 1232499a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1232499d jmp 0x123249a1 */
  goto L_123249a1;
L_1232499f:;
  /* 1232499f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123249a1:;
  /* 123249a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 123249a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123249a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123249ae pop edi */
  EDI = (pop32());
  /* 123249af pop esi */
  ESI = (pop32());
  /* 123249b0 pop ebx */
  EBX = (pop32());
  /* 123249b1 mov esp, ebp */
  ESP = (EBP);
  /* 123249b3 pop ebp */
  EBP = (pop32());
  /* 123249b4 ret  */
  ESPCHK(0x12324820u, _esp0);
  ESP += 4; return;
}

/* FUN_100149c0 @ 0x123249c0 (398 bytes, 140 insns) */
void f_123249c0(void) {
  FTRACE(0x123249c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123249c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123249c1 mov ebp, esp */
  EBP = (ESP);
  /* 123249c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123249c5 push 0x1233e220 */
  push32((uint32_t)(0x1233e220u));
  /* 123249ca push 0x12321e80 */
  push32((uint32_t)(0x12321e80u));
  /* 123249cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123249d5 push eax */
  push32((uint32_t)(EAX));
  /* 123249d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123249dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123249e0 push ebx */
  push32((uint32_t)(EBX));
  /* 123249e1 push esi */
  push32((uint32_t)(ESI));
  /* 123249e2 push edi */
  push32((uint32_t)(EDI));
  /* 123249e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123249e6 cmp dword ptr [0x12341a98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123249ed jne 0x12324a32 */
  if (!C.zf) goto L_12324a32;
  /* 123249ef push 0 */
  push32((uint32_t)(0x0u));
  /* 123249f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123249f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123249f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123249f7 call dword ptr [0x1234430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234430c))), 0x123249fdu);
  /* 123249fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123249ff je 0x12324a0d */
  if (C.zf) goto L_12324a0d;
  /* 12324a01 mov dword ptr [0x12341a98], 1 */
  w32((uint32_t)(0x12341a98), (0x1u));
  /* 12324a0b jmp 0x12324a32 */
  goto L_12324a32;
L_12324a0d:;
  /* 12324a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12324a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12324a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324a15 call dword ptr [0x123442f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f4))), 0x12324a1bu);
  /* 12324a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324a1d je 0x12324a2b */
  if (C.zf) goto L_12324a2b;
  /* 12324a1f mov dword ptr [0x12341a98], 2 */
  w32((uint32_t)(0x12341a98), (0x2u));
  /* 12324a29 jmp 0x12324a32 */
  goto L_12324a32;
L_12324a2b:;
  /* 12324a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324a2d jmp 0x12324b51 */
  goto L_12324b51;
L_12324a32:;
  /* 12324a32 cmp dword ptr [0x12341a98], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12341a98))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324a39 jne 0x12324a56 */
  if (!C.zf) goto L_12324a56;
  /* 12324a3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12324a3e push eax */
  push32((uint32_t)(EAX));
  /* 12324a3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324a42 push ecx */
  push32((uint32_t)(ECX));
  /* 12324a43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12324a46 push edx */
  push32((uint32_t)(EDX));
  /* 12324a47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324a4a push eax */
  push32((uint32_t)(EAX));
  /* 12324a4b call dword ptr [0x123442f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442f4))), 0x12324a51u);
  /* 12324a51 jmp 0x12324b51 */
  goto L_12324b51;
L_12324a56:;
  /* 12324a56 cmp dword ptr [0x12341a98], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341a98))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324a5d jne 0x12324b4f */
  if (!C.zf) goto L_12324b4f;
  /* 12324a63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324a67 jne 0x12324a72 */
  if (!C.zf) goto L_12324a72;
  /* 12324a69 mov ecx, dword ptr [0x12341950] */
  ECX = (r32((uint32_t)(0x12341950)));
  /* 12324a6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12324a72:;
  /* 12324a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324a76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12324a79 push edx */
  push32((uint32_t)(EDX));
  /* 12324a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324a7d push eax */
  push32((uint32_t)(EAX));
  /* 12324a7e call dword ptr [0x1234430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234430c))), 0x12324a84u);
  /* 12324a84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12324a87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324a8b jne 0x12324a94 */
  if (!C.zf) goto L_12324a94;
  /* 12324a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324a8f jmp 0x12324b51 */
  goto L_12324b51;
L_12324a94:;
  /* 12324a94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12324a9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12324a9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12324aa0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324aa3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12324aa5 call 0x123197a0 */
  push32(0x12324aaau); f_123197a0();
  /* 12324aaa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12324aad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12324ab0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12324ab3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12324ab6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12324abd jmp 0x12324ad6 */
  goto L_12324ad6;
  /* 12324abf mov eax, 1 */
  EAX = (0x1u);
  /* 12324ac4 ret  */
  ESPCHK(0x123249c0u, _esp0);
  ESP += 4; return;
  /* 12324ac5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12324ac8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12324acf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12324ad6:;
  /* 12324ad6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324ada jne 0x12324ae0 */
  if (!C.zf) goto L_12324ae0;
  /* 12324adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324ade jmp 0x12324b51 */
  goto L_12324b51;
L_12324ae0:;
  /* 12324ae0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12324ae3 push edx */
  push32((uint32_t)(EDX));
  /* 12324ae4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12324ae7 push eax */
  push32((uint32_t)(EAX));
  /* 12324ae8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12324aeb push ecx */
  push32((uint32_t)(ECX));
  /* 12324aec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324aef push edx */
  push32((uint32_t)(EDX));
  /* 12324af0 call dword ptr [0x1234430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234430c))), 0x12324af6u);
  /* 12324af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324af8 jne 0x12324afe */
  if (!C.zf) goto L_12324afe;
  /* 12324afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324afc jmp 0x12324b51 */
  goto L_12324b51;
L_12324afe:;
  /* 12324afe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324b02 jne 0x12324b26 */
  if (!C.zf) goto L_12324b26;
  /* 12324b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12324b0c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324b0e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12324b11 push eax */
  push32((uint32_t)(EAX));
  /* 12324b12 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12324b17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12324b1a push ecx */
  push32((uint32_t)(ECX));
  /* 12324b1b call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12324b21u);
  /* 12324b21 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12324b24 jmp 0x12324b4a */
  goto L_12324b4a;
L_12324b26:;
  /* 12324b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324b2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12324b2d push edx */
  push32((uint32_t)(EDX));
  /* 12324b2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324b31 push eax */
  push32((uint32_t)(EAX));
  /* 12324b32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324b34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12324b37 push ecx */
  push32((uint32_t)(ECX));
  /* 12324b38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12324b3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12324b40 push edx */
  push32((uint32_t)(EDX));
  /* 12324b41 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12324b47u);
  /* 12324b47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12324b4a:;
  /* 12324b4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12324b4d jmp 0x12324b51 */
  goto L_12324b51;
L_12324b4f:;
  /* 12324b4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12324b51:;
  /* 12324b51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12324b54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12324b57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12324b5e pop edi */
  EDI = (pop32());
  /* 12324b5f pop esi */
  ESI = (pop32());
  /* 12324b60 pop ebx */
  EBX = (pop32());
  /* 12324b61 mov esp, ebp */
  ESP = (EBP);
  /* 12324b63 pop ebp */
  EBP = (pop32());
  /* 12324b64 ret  */
  ESPCHK(0x123249c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b70 @ 0x12324b70 (11 bytes, 6 insns) */
void f_12324b70(void) {
  FTRACE(0x12324b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12324b71 mov ebp, esp */
  EBP = (ESP);
  /* 12324b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324b76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324b79 pop ebp */
  EBP = (pop32());
  /* 12324b7a ret  */
  ESPCHK(0x12324b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b80 @ 0x12324b80 (147 bytes, 43 insns) */
void f_12324b80(void) {
  FTRACE(0x12324b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12324b81 mov ebp, esp */
  EBP = (ESP);
  /* 12324b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12324b84 cmp dword ptr [0x12341940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324b8b jne 0x12324ba7 */
  if (!C.zf) goto L_12324ba7;
  /* 12324b8d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324b91 jl 0x12324ba2 */
  if ((C.sf!=C.of)) goto L_12324ba2;
  /* 12324b93 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324b97 jg 0x12324ba2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12324ba2;
  /* 12324b99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324b9c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324b9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12324ba2:;
  /* 12324ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324ba5 jmp 0x12324c0f */
  goto L_12324c0f;
L_12324ba7:;
  /* 12324ba7 push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 12324bac call dword ptr [0x12344224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344224))), 0x12324bb2u);
  /* 12324bb2 cmp dword ptr [0x12341ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324bb9 je 0x12324bd9 */
  if (C.zf) goto L_12324bd9;
  /* 12324bbb push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 12324bc0 call dword ptr [0x12344218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344218))), 0x12324bc6u);
  /* 12324bc6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12324bc8 call 0x1231a9b0 */
  push32(0x12324bcdu); f_1231a9b0();
  /* 12324bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324bd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12324bd7 jmp 0x12324be0 */
  goto L_12324be0;
L_12324bd9:;
  /* 12324bd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12324be0:;
  /* 12324be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12324be4 call 0x12324c20 */
  push32(0x12324be9u); f_12324c20();
  /* 12324be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324bec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12324bef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324bf3 je 0x12324c01 */
  if (C.zf) goto L_12324c01;
  /* 12324bf5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12324bf7 call 0x1231aa50 */
  push32(0x12324bfcu); f_1231aa50();
  /* 12324bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324bff jmp 0x12324c0c */
  goto L_12324c0c;
L_12324c01:;
  /* 12324c01 push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 12324c06 call dword ptr [0x12344218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344218))), 0x12324c0cu);
L_12324c0c:;
  /* 12324c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12324c0f:;
  /* 12324c0f mov esp, ebp */
  ESP = (EBP);
  /* 12324c11 pop ebp */
  EBP = (pop32());
  /* 12324c12 ret  */
  ESPCHK(0x12324b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c20 @ 0x12324c20 (299 bytes, 91 insns) */
void f_12324c20(void) {
  FTRACE(0x12324c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12324c21 mov ebp, esp */
  EBP = (ESP);
  /* 12324c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324c26 cmp dword ptr [0x12341940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324c2d jne 0x12324c4c */
  if (!C.zf) goto L_12324c4c;
  /* 12324c2f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324c33 jl 0x12324c44 */
  if ((C.sf!=C.of)) goto L_12324c44;
  /* 12324c35 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324c39 jg 0x12324c44 */
  if ((!C.zf&&C.sf==C.of)) goto L_12324c44;
  /* 12324c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324c3e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324c41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12324c44:;
  /* 12324c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324c47 jmp 0x12324d47 */
  goto L_12324d47;
L_12324c4c:;
  /* 12324c4c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324c53 jge 0x12324c93 */
  if ((C.sf==C.of)) goto L_12324c93;
  /* 12324c55 cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324c5c jle 0x12324c71 */
  if ((C.zf||C.sf!=C.of)) goto L_12324c71;
  /* 12324c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12324c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12324c64 call 0x1231cec0 */
  push32(0x12324c69u); f_1231cec0();
  /* 12324c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324c6c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12324c6f jmp 0x12324c85 */
  goto L_12324c85;
L_12324c71:;
  /* 12324c71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324c74 mov eax, dword ptr [0x1233fde8] */
  EAX = (r32((uint32_t)(0x1233fde8)));
  /* 12324c79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12324c7b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12324c7f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12324c82 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12324c85:;
  /* 12324c85 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324c89 jne 0x12324c93 */
  if (!C.zf) goto L_12324c93;
  /* 12324c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324c8e jmp 0x12324d47 */
  goto L_12324d47;
L_12324c93:;
  /* 12324c93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324c96 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12324c99 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12324c9f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12324ca5 mov eax, dword ptr [0x1233fde8] */
  EAX = (r32((uint32_t)(0x1233fde8)));
  /* 12324caa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12324cac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12324cb0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12324cb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12324cb8 je 0x12324cdc */
  if (C.zf) goto L_12324cdc;
  /* 12324cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324cbd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12324cc0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12324cc6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12324cc9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12324ccc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12324ccf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12324cd3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12324cda jmp 0x12324ced */
  goto L_12324ced;
L_12324cdc:;
  /* 12324cdc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12324cdf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12324ce2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12324ce6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12324ced:;
  /* 12324ced push 1 */
  push32((uint32_t)(0x1u));
  /* 12324cef push 0 */
  push32((uint32_t)(0x0u));
  /* 12324cf1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12324cf3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12324cf6 push edx */
  push32((uint32_t)(EDX));
  /* 12324cf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324cfa push eax */
  push32((uint32_t)(EAX));
  /* 12324cfb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12324cfe push ecx */
  push32((uint32_t)(ECX));
  /* 12324cff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12324d04 mov edx, dword ptr [0x12341940] */
  EDX = (r32((uint32_t)(0x12341940)));
  /* 12324d0a push edx */
  push32((uint32_t)(EDX));
  /* 12324d0b call 0x1231f450 */
  push32(0x12324d10u); f_1231f450();
  /* 12324d10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324d13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12324d16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324d1a jne 0x12324d21 */
  if (!C.zf) goto L_12324d21;
  /* 12324d1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324d1f jmp 0x12324d47 */
  goto L_12324d47;
L_12324d21:;
  /* 12324d21 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324d25 jne 0x12324d31 */
  if (!C.zf) goto L_12324d31;
  /* 12324d27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324d2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12324d2f jmp 0x12324d47 */
  goto L_12324d47;
L_12324d31:;
  /* 12324d31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324d34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12324d39 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12324d3c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12324d42 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12324d45 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12324d47:;
  /* 12324d47 mov esp, ebp */
  ESP = (EBP);
  /* 12324d49 pop ebp */
  EBP = (pop32());
  /* 12324d4a ret  */
  ESPCHK(0x12324c20u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12324d50 (52 bytes, 19 insns) */
void f_12324d50(void) {
  FTRACE(0x12324d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324d50 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12324d54 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12324d58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12324d5a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12324d5e jne 0x12324d69 */
  if (!C.zf) goto L_12324d69;
  /* 12324d60 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12324d64 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12324d66 ret 0x10 */
  ESPCHK(0x12324d50u, _esp0);
  ESP += 20; return;
L_12324d69:;
  /* 12324d69 push ebx */
  push32((uint32_t)(EBX));
  /* 12324d6a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12324d6c mov ebx, eax */
  EBX = (EAX);
  /* 12324d6e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12324d72 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12324d76 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324d78 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12324d7c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12324d7e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324d80 pop ebx */
  EBX = (pop32());
  /* 12324d81 ret 0x10 */
  ESPCHK(0x12324d50u, _esp0);
  ESP += 20; return;
}

/* FUN_10014d90 @ 0x12324d90 (46 bytes, 18 insns) */
void f_12324d90(void) {
  FTRACE(0x12324d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12324d91 mov ebp, esp */
  EBP = (ESP);
  /* 12324d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12324d94 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12324d96 call 0x1231a9b0 */
  push32(0x12324d9bu); f_1231a9b0();
  /* 12324d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324d9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324da1 push eax */
  push32((uint32_t)(EAX));
  /* 12324da2 call 0x12324dc0 */
  push32(0x12324da7u); f_12324dc0();
  /* 12324da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324daa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12324dad push 0xc */
  push32((uint32_t)(0xcu));
  /* 12324daf call 0x1231aa50 */
  push32(0x12324db4u); f_1231aa50();
  /* 12324db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324dba mov esp, ebp */
  ESP = (EBP);
  /* 12324dbc pop ebp */
  EBP = (pop32());
  /* 12324dbd ret  */
  ESPCHK(0x12324d90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12324dc0 (198 bytes, 69 insns) */
void f_12324dc0(void) {
  FTRACE(0x12324dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12324dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12324dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324dc6 mov eax, dword ptr [0x12341754] */
  EAX = (r32((uint32_t)(0x12341754)));
  /* 12324dcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12324dce cmp dword ptr [0x12343240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12343240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324dd5 jne 0x12324dde */
  if (!C.zf) goto L_12324dde;
  /* 12324dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324dd9 jmp 0x12324e82 */
  goto L_12324e82;
L_12324dde:;
  /* 12324dde cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324de2 jne 0x12324e06 */
  if (!C.zf) goto L_12324e06;
  /* 12324de4 cmp dword ptr [0x1234175c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1234175c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324deb je 0x12324e06 */
  if (C.zf) goto L_12324e06;
  /* 12324ded call 0x12324ee0 */
  push32(0x12324df2u); f_12324ee0();
  /* 12324df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324df4 je 0x12324dfd */
  if (C.zf) goto L_12324dfd;
  /* 12324df6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324df8 jmp 0x12324e82 */
  goto L_12324e82;
L_12324dfd:;
  /* 12324dfd mov ecx, dword ptr [0x12341754] */
  ECX = (r32((uint32_t)(0x12341754)));
  /* 12324e03 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12324e06:;
  /* 12324e06 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324e0a je 0x12324e80 */
  if (C.zf) goto L_12324e80;
  /* 12324e0c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324e10 je 0x12324e80 */
  if (C.zf) goto L_12324e80;
  /* 12324e12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324e15 push edx */
  push32((uint32_t)(EDX));
  /* 12324e16 call 0x12319430 */
  push32(0x12324e1bu); f_12319430();
  /* 12324e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324e1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12324e21:;
  /* 12324e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324e24 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324e27 je 0x12324e80 */
  if (C.zf) goto L_12324e80;
  /* 12324e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324e2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12324e2e push edx */
  push32((uint32_t)(EDX));
  /* 12324e2f call 0x12319430 */
  push32(0x12324e34u); f_12319430();
  /* 12324e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324e37 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324e3a jbe 0x12324e75 */
  if ((C.cf||C.zf)) goto L_12324e75;
  /* 12324e3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324e3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12324e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324e44 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12324e48 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324e4b jne 0x12324e75 */
  if (!C.zf) goto L_12324e75;
  /* 12324e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12324e51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324e54 push edx */
  push32((uint32_t)(EDX));
  /* 12324e55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324e58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12324e5a push ecx */
  push32((uint32_t)(ECX));
  /* 12324e5b call 0x12324e90 */
  push32(0x12324e60u); f_12324e90();
  /* 12324e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324e65 jne 0x12324e75 */
  if (!C.zf) goto L_12324e75;
  /* 12324e67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324e6a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12324e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324e6f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12324e73 jmp 0x12324e82 */
  goto L_12324e82;
L_12324e75:;
  /* 12324e75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324e78 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324e7b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12324e7e jmp 0x12324e21 */
  goto L_12324e21;
L_12324e80:;
  /* 12324e80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12324e82:;
  /* 12324e82 mov esp, ebp */
  ESP = (EBP);
  /* 12324e84 pop ebp */
  EBP = (pop32());
  /* 12324e85 ret  */
  ESPCHK(0x12324dc0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12324e90 (79 bytes, 32 insns) */
void f_12324e90(void) {
  FTRACE(0x12324e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12324e91 mov ebp, esp */
  EBP = (ESP);
  /* 12324e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12324e94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324e98 jne 0x12324e9e */
  if (!C.zf) goto L_12324e9e;
  /* 12324e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12324e9c jmp 0x12324edb */
  goto L_12324edb;
L_12324e9e:;
  /* 12324e9e mov eax, dword ptr [0x12341ac8] */
  EAX = (r32((uint32_t)(0x12341ac8)));
  /* 12324ea3 push eax */
  push32((uint32_t)(EAX));
  /* 12324ea4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 12324ea8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12324eab push edx */
  push32((uint32_t)(EDX));
  /* 12324eac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12324eaf push eax */
  push32((uint32_t)(EAX));
  /* 12324eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12324eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12324eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324eb6 mov edx, dword ptr [0x12341d64] */
  EDX = (r32((uint32_t)(0x12341d64)));
  /* 12324ebc push edx */
  push32((uint32_t)(EDX));
  /* 12324ebd call 0x12324f90 */
  push32(0x12324ec2u); f_12324f90();
  /* 12324ec2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324ec5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12324ec8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324ecc jne 0x12324ed5 */
  if (!C.zf) goto L_12324ed5;
  /* 12324ece mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12324ed3 jmp 0x12324edb */
  goto L_12324edb;
L_12324ed5:;
  /* 12324ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324ed8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12324edb:;
  /* 12324edb mov esp, ebp */
  ESP = (EBP);
  /* 12324edd pop ebp */
  EBP = (pop32());
  /* 12324ede ret  */
  ESPCHK(0x12324e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ee0 @ 0x12324ee0 (174 bytes, 66 insns) */
void f_12324ee0(void) {
  FTRACE(0x12324ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12324ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12324ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12324ee6 mov eax, dword ptr [0x1234175c] */
  EAX = (r32((uint32_t)(0x1234175c)));
  /* 12324eeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12324eee:;
  /* 12324eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324ef1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324ef4 je 0x12324f88 */
  if (C.zf) goto L_12324f88;
  /* 12324efa push 0 */
  push32((uint32_t)(0x0u));
  /* 12324efc push 0 */
  push32((uint32_t)(0x0u));
  /* 12324efe push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324f04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324f07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12324f09 push eax */
  push32((uint32_t)(EAX));
  /* 12324f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 12324f0e call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12324f14u);
  /* 12324f14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12324f17 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324f1b jne 0x12324f22 */
  if (!C.zf) goto L_12324f22;
  /* 12324f1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12324f20 jmp 0x12324f8a */
  goto L_12324f8a;
L_12324f22:;
  /* 12324f22 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12324f24 push 0x1233e22c */
  push32((uint32_t)(0x1233e22cu));
  /* 12324f29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12324f2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324f2e push ecx */
  push32((uint32_t)(ECX));
  /* 12324f2f call 0x12316600 */
  push32(0x12324f34u); f_12316600();
  /* 12324f34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324f37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12324f3a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324f3e jne 0x12324f45 */
  if (!C.zf) goto L_12324f45;
  /* 12324f40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12324f43 jmp 0x12324f8a */
  goto L_12324f8a;
L_12324f45:;
  /* 12324f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12324f4c push edx */
  push32((uint32_t)(EDX));
  /* 12324f4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324f50 push eax */
  push32((uint32_t)(EAX));
  /* 12324f51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324f53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324f56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12324f58 push edx */
  push32((uint32_t)(EDX));
  /* 12324f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12324f5d call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12324f63u);
  /* 12324f63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324f65 jne 0x12324f6c */
  if (!C.zf) goto L_12324f6c;
  /* 12324f67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12324f6a jmp 0x12324f8a */
  goto L_12324f8a;
L_12324f6c:;
  /* 12324f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12324f6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12324f71 push eax */
  push32((uint32_t)(EAX));
  /* 12324f72 call 0x123253e0 */
  push32(0x12324f77u); f_123253e0();
  /* 12324f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12324f7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12324f80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12324f83 jmp 0x12324eee */
  goto L_12324eee;
L_12324f88:;
  /* 12324f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12324f8a:;
  /* 12324f8a mov esp, ebp */
  ESP = (EBP);
  /* 12324f8c pop ebp */
  EBP = (pop32());
  /* 12324f8d ret  */
  ESPCHK(0x12324ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f90 @ 0x12324f90 (970 bytes, 340 insns) */
void f_12324f90(void) {
  FTRACE(0x12324f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12324f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12324f91 mov ebp, esp */
  EBP = (ESP);
  /* 12324f93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12324f95 push 0x1233e280 */
  push32((uint32_t)(0x1233e280u));
  /* 12324f9a push 0x12321e80 */
  push32((uint32_t)(0x12321e80u));
  /* 12324f9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12324fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12324fa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12324fad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12324fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 12324fb1 push esi */
  push32((uint32_t)(ESI));
  /* 12324fb2 push edi */
  push32((uint32_t)(EDI));
  /* 12324fb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12324fb6 cmp dword ptr [0x12341a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12324fbd jne 0x12325016 */
  if (!C.zf) goto L_12325016;
  /* 12324fbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12324fc1 push 0x1233d958 */
  push32((uint32_t)(0x1233d958u));
  /* 12324fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324fc8 push 0x1233d958 */
  push32((uint32_t)(0x1233d958u));
  /* 12324fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12324fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12324fd1 call dword ptr [0x12344308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344308))), 0x12324fd7u);
  /* 12324fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12324fd9 je 0x12324fe7 */
  if (C.zf) goto L_12324fe7;
  /* 12324fdb mov dword ptr [0x12341a9c], 1 */
  w32((uint32_t)(0x12341a9c), (0x1u));
  /* 12324fe5 jmp 0x12325016 */
  goto L_12325016;
L_12324fe7:;
  /* 12324fe7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12324fe9 push 0x1233d954 */
  push32((uint32_t)(0x1233d954u));
  /* 12324fee push 1 */
  push32((uint32_t)(0x1u));
  /* 12324ff0 push 0x1233d954 */
  push32((uint32_t)(0x1233d954u));
  /* 12324ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12324ff9 call dword ptr [0x12344310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344310))), 0x12324fffu);
  /* 12324fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12325001 je 0x1232500f */
  if (C.zf) goto L_1232500f;
  /* 12325003 mov dword ptr [0x12341a9c], 2 */
  w32((uint32_t)(0x12341a9c), (0x2u));
  /* 1232500d jmp 0x12325016 */
  goto L_12325016;
L_1232500f:;
  /* 1232500f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12325011 jmp 0x12325374 */
  goto L_12325374;
L_12325016:;
  /* 12325016 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232501a jle 0x1232502f */
  if ((C.zf||C.sf!=C.of)) goto L_1232502f;
  /* 1232501c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232501f push eax */
  push32((uint32_t)(EAX));
  /* 12325020 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12325023 push ecx */
  push32((uint32_t)(ECX));
  /* 12325024 call 0x12325390 */
  push32(0x12325029u); f_12325390();
  /* 12325029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232502c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1232502f:;
  /* 1232502f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325033 jle 0x12325048 */
  if ((C.zf||C.sf!=C.of)) goto L_12325048;
  /* 12325035 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12325038 push edx */
  push32((uint32_t)(EDX));
  /* 12325039 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1232503c push eax */
  push32((uint32_t)(EAX));
  /* 1232503d call 0x12325390 */
  push32(0x12325042u); f_12325390();
  /* 12325042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325045 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12325048:;
  /* 12325048 cmp dword ptr [0x12341a9c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12341a9c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232504f jne 0x12325074 */
  if (!C.zf) goto L_12325074;
  /* 12325051 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12325054 push ecx */
  push32((uint32_t)(ECX));
  /* 12325055 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12325058 push edx */
  push32((uint32_t)(EDX));
  /* 12325059 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232505c push eax */
  push32((uint32_t)(EAX));
  /* 1232505d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12325060 push ecx */
  push32((uint32_t)(ECX));
  /* 12325061 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12325064 push edx */
  push32((uint32_t)(EDX));
  /* 12325065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325068 push eax */
  push32((uint32_t)(EAX));
  /* 12325069 call dword ptr [0x12344310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344310))), 0x1232506fu);
  /* 1232506f jmp 0x12325374 */
  goto L_12325374;
L_12325074:;
  /* 12325074 cmp dword ptr [0x12341a9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341a9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232507b jne 0x12325372 */
  if (!C.zf) goto L_12325372;
  /* 12325081 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325085 jne 0x12325090 */
  if (!C.zf) goto L_12325090;
  /* 12325087 mov ecx, dword ptr [0x12341950] */
  ECX = (r32((uint32_t)(0x12341950)));
  /* 1232508d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12325090:;
  /* 12325090 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325094 je 0x123250a0 */
  if (C.zf) goto L_123250a0;
  /* 12325096 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232509a jne 0x1232521c */
  if (!C.zf) goto L_1232521c;
L_123250a0:;
  /* 123250a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123250a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123250a6 jne 0x123250b2 */
  if (!C.zf) goto L_123250b2;
  /* 123250a8 mov eax, 2 */
  EAX = (0x2u);
  /* 123250ad jmp 0x12325374 */
  goto L_12325374;
L_123250b2:;
  /* 123250b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123250b6 jle 0x123250c2 */
  if ((C.zf||C.sf!=C.of)) goto L_123250c2;
  /* 123250b8 mov eax, 1 */
  EAX = (0x1u);
  /* 123250bd jmp 0x12325374 */
  goto L_12325374;
L_123250c2:;
  /* 123250c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123250c6 jle 0x123250d2 */
  if ((C.zf||C.sf!=C.of)) goto L_123250d2;
  /* 123250c8 mov eax, 3 */
  EAX = (0x3u);
  /* 123250cd jmp 0x12325374 */
  goto L_12325374;
L_123250d2:;
  /* 123250d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 123250d5 push eax */
  push32((uint32_t)(EAX));
  /* 123250d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 123250d9 push ecx */
  push32((uint32_t)(ECX));
  /* 123250da call dword ptr [0x123442c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442c0))), 0x123250e0u);
  /* 123250e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123250e2 jne 0x123250eb */
  if (!C.zf) goto L_123250eb;
  /* 123250e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123250e6 jmp 0x12325374 */
  goto L_12325374;
L_123250eb:;
  /* 123250eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123250ef jne 0x123250f7 */
  if (!C.zf) goto L_123250f7;
  /* 123250f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123250f5 je 0x12325124 */
  if (C.zf) goto L_12325124;
L_123250f7:;
  /* 123250f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123250fb jne 0x12325103 */
  if (!C.zf) goto L_12325103;
  /* 123250fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325101 je 0x12325124 */
  if (C.zf) goto L_12325124;
L_12325103:;
  /* 12325103 push 0x1233e240 */
  push32((uint32_t)(0x1233e240u));
  /* 12325108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1232510a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1232510f push 0x1233e238 */
  push32((uint32_t)(0x1233e238u));
  /* 12325114 push 2 */
  push32((uint32_t)(0x2u));
  /* 12325116 call 0x123145a0 */
  push32(0x1232511bu); f_123145a0();
  /* 1232511b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232511e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325121 jne 0x12325124 */
  if (!C.zf) goto L_12325124;
  /* 12325123 int3  */
  x86_unimpl("int3 @ 0x12325123");
L_12325124:;
  /* 12325124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12325126 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12325128 jne 0x123250eb */
  if (!C.zf) goto L_123250eb;
  /* 1232512a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232512e jle 0x123251a3 */
  if ((C.zf||C.sf!=C.of)) goto L_123251a3;
  /* 12325130 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325134 jae 0x12325140 */
  if (!C.cf) goto L_12325140;
  /* 12325136 mov eax, 3 */
  EAX = (0x3u);
  /* 1232513b jmp 0x12325374 */
  goto L_12325374;
L_12325140:;
  /* 12325140 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12325143 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12325146 jmp 0x12325151 */
  goto L_12325151;
L_12325148:;
  /* 12325148 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1232514b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232514e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12325151:;
  /* 12325151 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12325154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12325156 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12325158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232515a je 0x12325199 */
  if (C.zf) goto L_12325199;
  /* 1232515c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1232515f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12325161 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12325164 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12325166 je 0x12325199 */
  if (C.zf) goto L_12325199;
  /* 12325168 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232516b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1232516d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1232516f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12325172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12325174 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12325176 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325178 jl 0x12325197 */
  if ((C.sf!=C.of)) goto L_12325197;
  /* 1232517a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1232517d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1232517f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12325181 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12325184 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12325186 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12325189 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232518b jg 0x12325197 */
  if ((!C.zf&&C.sf==C.of)) goto L_12325197;
  /* 1232518d mov eax, 2 */
  EAX = (0x2u);
  /* 12325192 jmp 0x12325374 */
  goto L_12325374;
L_12325197:;
  /* 12325197 jmp 0x12325148 */
  goto L_12325148;
L_12325199:;
  /* 12325199 mov eax, 3 */
  EAX = (0x3u);
  /* 1232519e jmp 0x12325374 */
  goto L_12325374;
L_123251a3:;
  /* 123251a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123251a7 jle 0x1232521c */
  if ((C.zf||C.sf!=C.of)) goto L_1232521c;
  /* 123251a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123251ad jae 0x123251b9 */
  if (!C.cf) goto L_123251b9;
  /* 123251af mov eax, 1 */
  EAX = (0x1u);
  /* 123251b4 jmp 0x12325374 */
  goto L_12325374;
L_123251b9:;
  /* 123251b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 123251bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 123251bf jmp 0x123251ca */
  goto L_123251ca;
L_123251c1:;
  /* 123251c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123251c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123251c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_123251ca:;
  /* 123251ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123251cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123251cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123251d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123251d3 je 0x12325212 */
  if (C.zf) goto L_12325212;
  /* 123251d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123251d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123251da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123251dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123251df je 0x12325212 */
  if (C.zf) goto L_12325212;
  /* 123251e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123251e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123251e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123251e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123251eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123251ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123251ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123251f1 jl 0x12325210 */
  if ((C.sf!=C.of)) goto L_12325210;
  /* 123251f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123251f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123251f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123251fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123251fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123251ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12325202 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325204 jg 0x12325210 */
  if ((!C.zf&&C.sf==C.of)) goto L_12325210;
  /* 12325206 mov eax, 2 */
  EAX = (0x2u);
  /* 1232520b jmp 0x12325374 */
  goto L_12325374;
L_12325210:;
  /* 12325210 jmp 0x123251c1 */
  goto L_123251c1;
L_12325212:;
  /* 12325212 mov eax, 1 */
  EAX = (0x1u);
  /* 12325217 jmp 0x12325374 */
  goto L_12325374;
L_1232521c:;
  /* 1232521c push 0 */
  push32((uint32_t)(0x0u));
  /* 1232521e push 0 */
  push32((uint32_t)(0x0u));
  /* 12325220 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12325223 push ecx */
  push32((uint32_t)(ECX));
  /* 12325224 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12325227 push edx */
  push32((uint32_t)(EDX));
  /* 12325228 push 9 */
  push32((uint32_t)(0x9u));
  /* 1232522a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1232522d push eax */
  push32((uint32_t)(EAX));
  /* 1232522e call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x12325234u);
  /* 12325234 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12325237 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232523b jne 0x12325244 */
  if (!C.zf) goto L_12325244;
  /* 1232523d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232523f jmp 0x12325374 */
  goto L_12325374;
L_12325244:;
  /* 12325244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1232524b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1232524e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12325250 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325253 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12325255 call 0x123197a0 */
  push32(0x1232525au); f_123197a0();
  /* 1232525a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1232525d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12325260 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12325263 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12325266 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1232526d jmp 0x12325286 */
  goto L_12325286;
  /* 1232526f mov eax, 1 */
  EAX = (0x1u);
  /* 12325274 ret  */
  ESPCHK(0x12324f90u, _esp0);
  ESP += 4; return;
  /* 12325275 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12325278 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1232527f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12325286:;
  /* 12325286 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232528a jne 0x12325293 */
  if (!C.zf) goto L_12325293;
  /* 1232528c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232528e jmp 0x12325374 */
  goto L_12325374;
L_12325293:;
  /* 12325293 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12325296 push edx */
  push32((uint32_t)(EDX));
  /* 12325297 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1232529a push eax */
  push32((uint32_t)(EAX));
  /* 1232529b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1232529e push ecx */
  push32((uint32_t)(ECX));
  /* 1232529f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123252a2 push edx */
  push32((uint32_t)(EDX));
  /* 123252a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123252a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123252a8 push eax */
  push32((uint32_t)(EAX));
  /* 123252a9 call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x123252afu);
  /* 123252af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123252b1 jne 0x123252ba */
  if (!C.zf) goto L_123252ba;
  /* 123252b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123252b5 jmp 0x12325374 */
  goto L_12325374;
L_123252ba:;
  /* 123252ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123252bc push 0 */
  push32((uint32_t)(0x0u));
  /* 123252be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123252c1 push ecx */
  push32((uint32_t)(ECX));
  /* 123252c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123252c5 push edx */
  push32((uint32_t)(EDX));
  /* 123252c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 123252c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123252cb push eax */
  push32((uint32_t)(EAX));
  /* 123252cc call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x123252d2u);
  /* 123252d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123252d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123252d9 jne 0x123252e2 */
  if (!C.zf) goto L_123252e2;
  /* 123252db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123252dd jmp 0x12325374 */
  goto L_12325374;
L_123252e2:;
  /* 123252e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123252e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123252ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123252ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123252f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123252f3 call 0x123197a0 */
  push32(0x123252f8u); f_123197a0();
  /* 123252f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 123252fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123252fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12325301 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12325304 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1232530b jmp 0x12325324 */
  goto L_12325324;
  /* 1232530d mov eax, 1 */
  EAX = (0x1u);
  /* 12325312 ret  */
  ESPCHK(0x12324f90u, _esp0);
  ESP += 4; return;
  /* 12325313 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12325316 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1232531d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12325324:;
  /* 12325324 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325328 jne 0x1232532e */
  if (!C.zf) goto L_1232532e;
  /* 1232532a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232532c jmp 0x12325374 */
  goto L_12325374;
L_1232532e:;
  /* 1232532e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12325331 push edx */
  push32((uint32_t)(EDX));
  /* 12325332 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12325335 push eax */
  push32((uint32_t)(EAX));
  /* 12325336 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12325339 push ecx */
  push32((uint32_t)(ECX));
  /* 1232533a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1232533d push edx */
  push32((uint32_t)(EDX));
  /* 1232533e push 1 */
  push32((uint32_t)(0x1u));
  /* 12325340 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12325343 push eax */
  push32((uint32_t)(EAX));
  /* 12325344 call dword ptr [0x1234428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234428c))), 0x1232534au);
  /* 1232534a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1232534c jne 0x12325352 */
  if (!C.zf) goto L_12325352;
  /* 1232534e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12325350 jmp 0x12325374 */
  goto L_12325374;
L_12325352:;
  /* 12325352 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12325355 push ecx */
  push32((uint32_t)(ECX));
  /* 12325356 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12325359 push edx */
  push32((uint32_t)(EDX));
  /* 1232535a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1232535d push eax */
  push32((uint32_t)(EAX));
  /* 1232535e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12325361 push ecx */
  push32((uint32_t)(ECX));
  /* 12325362 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12325365 push edx */
  push32((uint32_t)(EDX));
  /* 12325366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325369 push eax */
  push32((uint32_t)(EAX));
  /* 1232536a call dword ptr [0x12344308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344308))), 0x12325370u);
  /* 12325370 jmp 0x12325374 */
  goto L_12325374;
L_12325372:;
  /* 12325372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12325374:;
  /* 12325374 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12325377 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232537a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12325381 pop edi */
  EDI = (pop32());
  /* 12325382 pop esi */
  ESI = (pop32());
  /* 12325383 pop ebx */
  EBX = (pop32());
  /* 12325384 mov esp, ebp */
  ESP = (EBP);
  /* 12325386 pop ebp */
  EBP = (pop32());
  /* 12325387 ret  */
  ESPCHK(0x12324f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015390 @ 0x12325390 (80 bytes, 32 insns) */
void f_12325390(void) {
  FTRACE(0x12325390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12325390 push ebp */
  push32((uint32_t)(EBP));
  /* 12325391 mov ebp, esp */
  EBP = (ESP);
  /* 12325393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12325396 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12325399 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1232539c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232539f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123253a2:;
  /* 123253a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123253a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123253a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123253ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123253ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123253b0 je 0x123253c7 */
  if (C.zf) goto L_123253c7;
  /* 123253b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123253b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123253b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123253ba je 0x123253c7 */
  if (C.zf) goto L_123253c7;
  /* 123253bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123253bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123253c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123253c5 jmp 0x123253a2 */
  goto L_123253a2;
L_123253c7:;
  /* 123253c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123253ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123253cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123253cf jne 0x123253d9 */
  if (!C.zf) goto L_123253d9;
  /* 123253d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123253d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123253d7 jmp 0x123253dc */
  goto L_123253dc;
L_123253d9:;
  /* 123253d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_123253dc:;
  /* 123253dc mov esp, ebp */
  ESP = (EBP);
  /* 123253de pop ebp */
  EBP = (pop32());
  /* 123253df ret  */
  ESPCHK(0x12325390u, _esp0);
  ESP += 4; return;
}

/* FUN_100153e0 @ 0x123253e0 (736 bytes, 224 insns) */
void f_123253e0(void) {
  FTRACE(0x123253e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123253e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123253e1 mov ebp, esp */
  EBP = (ESP);
  /* 123253e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123253e6 push esi */
  push32((uint32_t)(ESI));
  /* 123253e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123253eb je 0x1232540c */
  if (C.zf) goto L_1232540c;
  /* 123253ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123253ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123253f2 push eax */
  push32((uint32_t)(EAX));
  /* 123253f3 call 0x12325830 */
  push32(0x123253f8u); f_12325830();
  /* 123253f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123253fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123253fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325402 je 0x1232540c */
  if (C.zf) goto L_1232540c;
  /* 12325404 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325407 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232540a jne 0x12325414 */
  if (!C.zf) goto L_12325414;
L_1232540c:;
  /* 1232540c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1232540f jmp 0x123256bb */
  goto L_123256bb;
L_12325414:;
  /* 12325414 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12325417 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1232541b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1232541d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232541f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12325420 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12325423 mov ecx, dword ptr [0x12341754] */
  ECX = (r32((uint32_t)(0x12341754)));
  /* 12325429 cmp ecx, dword ptr [0x12341758] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341758))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232542f jne 0x12325445 */
  if (!C.zf) goto L_12325445;
  /* 12325431 mov edx, dword ptr [0x12341754] */
  EDX = (r32((uint32_t)(0x12341754)));
  /* 12325437 push edx */
  push32((uint32_t)(EDX));
  /* 12325438 call 0x12325740 */
  push32(0x1232543du); f_12325740();
  /* 1232543d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325440 mov dword ptr [0x12341754], eax */
  w32((uint32_t)(0x12341754), (EAX));
L_12325445:;
  /* 12325445 cmp dword ptr [0x12341754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232544c jne 0x12325505 */
  if (!C.zf) goto L_12325505;
  /* 12325452 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325456 je 0x12325477 */
  if (C.zf) goto L_12325477;
  /* 12325458 cmp dword ptr [0x1234175c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1234175c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232545f je 0x12325477 */
  if (C.zf) goto L_12325477;
  /* 12325461 call 0x12324ee0 */
  push32(0x12325466u); f_12324ee0();
  /* 12325466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12325468 je 0x12325472 */
  if (C.zf) goto L_12325472;
  /* 1232546a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1232546d jmp 0x123256bb */
  goto L_123256bb;
L_12325472:;
  /* 12325472 jmp 0x12325505 */
  goto L_12325505;
L_12325477:;
  /* 12325477 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232547b je 0x12325484 */
  if (C.zf) goto L_12325484;
  /* 1232547d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232547f jmp 0x123256bb */
  goto L_123256bb;
L_12325484:;
  /* 12325484 cmp dword ptr [0x12341754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232548b jne 0x123254c4 */
  if (!C.zf) goto L_123254c4;
  /* 1232548d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12325492 push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 12325497 push 2 */
  push32((uint32_t)(0x2u));
  /* 12325499 push 4 */
  push32((uint32_t)(0x4u));
  /* 1232549b call 0x12316600 */
  push32(0x123254a0u); f_12316600();
  /* 123254a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123254a3 mov dword ptr [0x12341754], eax */
  w32((uint32_t)(0x12341754), (EAX));
  /* 123254a8 cmp dword ptr [0x12341754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123254af jne 0x123254b9 */
  if (!C.zf) goto L_123254b9;
  /* 123254b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123254b4 jmp 0x123256bb */
  goto L_123256bb;
L_123254b9:;
  /* 123254b9 mov eax, dword ptr [0x12341754] */
  EAX = (r32((uint32_t)(0x12341754)));
  /* 123254be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123254c4:;
  /* 123254c4 cmp dword ptr [0x1234175c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1234175c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123254cb jne 0x12325505 */
  if (!C.zf) goto L_12325505;
  /* 123254cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 123254d2 push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 123254d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123254d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 123254db call 0x12316600 */
  push32(0x123254e0u); f_12316600();
  /* 123254e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123254e3 mov dword ptr [0x1234175c], eax */
  w32((uint32_t)(0x1234175c), (EAX));
  /* 123254e8 cmp dword ptr [0x1234175c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1234175c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123254ef jne 0x123254f9 */
  if (!C.zf) goto L_123254f9;
  /* 123254f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123254f4 jmp 0x123256bb */
  goto L_123256bb;
L_123254f9:;
  /* 123254f9 mov ecx, dword ptr [0x1234175c] */
  ECX = (r32((uint32_t)(0x1234175c)));
  /* 123254ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12325505:;
  /* 12325505 mov edx, dword ptr [0x12341754] */
  EDX = (r32((uint32_t)(0x12341754)));
  /* 1232550b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1232550e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12325511 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12325514 push eax */
  push32((uint32_t)(EAX));
  /* 12325515 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325518 push ecx */
  push32((uint32_t)(ECX));
  /* 12325519 call 0x123256c0 */
  push32(0x1232551eu); f_123256c0();
  /* 1232551e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325521 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12325524 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325528 jl 0x123255c1 */
  if ((C.sf!=C.of)) goto L_123255c1;
  /* 1232552e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325531 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325534 je 0x123255c1 */
  if (C.zf) goto L_123255c1;
  /* 1232553a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232553e je 0x123255b3 */
  if (C.zf) goto L_123255b3;
  /* 12325540 push 2 */
  push32((uint32_t)(0x2u));
  /* 12325542 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325548 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1232554b push edx */
  push32((uint32_t)(EDX));
  /* 1232554c call 0x12317090 */
  push32(0x12325551u); f_12317090();
  /* 12325551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325554 jmp 0x1232555f */
  goto L_1232555f;
L_12325556:;
  /* 12325556 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232555c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1232555f:;
  /* 1232555f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325562 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325565 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325569 je 0x12325580 */
  if (C.zf) goto L_12325580;
  /* 1232556b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232556e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325574 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12325577 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1232557b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1232557e jmp 0x12325556 */
  goto L_12325556;
L_12325580:;
  /* 12325580 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12325585 push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 1232558a push 2 */
  push32((uint32_t)(0x2u));
  /* 1232558c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232558f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12325592 push eax */
  push32((uint32_t)(EAX));
  /* 12325593 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325596 push ecx */
  push32((uint32_t)(ECX));
  /* 12325597 call 0x12316a90 */
  push32(0x1232559cu); f_12316a90();
  /* 1232559c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232559f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123255a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123255a6 je 0x123255b1 */
  if (C.zf) goto L_123255b1;
  /* 123255a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123255ab mov dword ptr [0x12341754], edx */
  w32((uint32_t)(0x12341754), (EDX));
L_123255b1:;
  /* 123255b1 jmp 0x123255bf */
  goto L_123255bf;
L_123255b3:;
  /* 123255b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123255b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123255b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123255bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_123255bf:;
  /* 123255bf jmp 0x12325634 */
  goto L_12325634;
L_123255c1:;
  /* 123255c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123255c5 jne 0x1232562d */
  if (!C.zf) goto L_1232562d;
  /* 123255c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123255cb jge 0x123255d5 */
  if ((C.sf==C.of)) goto L_123255d5;
  /* 123255cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123255d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123255d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123255d5:;
  /* 123255d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 123255da push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 123255df push 2 */
  push32((uint32_t)(0x2u));
  /* 123255e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123255e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 123255eb push edx */
  push32((uint32_t)(EDX));
  /* 123255ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123255ef push eax */
  push32((uint32_t)(EAX));
  /* 123255f0 call 0x12316a90 */
  push32(0x123255f5u); f_12316a90();
  /* 123255f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123255f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123255fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123255ff jne 0x12325609 */
  if (!C.zf) goto L_12325609;
  /* 12325601 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12325604 jmp 0x123256bb */
  goto L_123256bb;
L_12325609:;
  /* 12325609 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1232560c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232560f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325612 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12325615 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325618 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232561b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12325623 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325626 mov dword ptr [0x12341754], eax */
  w32((uint32_t)(0x12341754), (EAX));
  /* 1232562b jmp 0x12325634 */
  goto L_12325634;
L_1232562d:;
  /* 1232562d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232562f jmp 0x123256bb */
  goto L_123256bb;
L_12325634:;
  /* 12325634 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325638 je 0x123256b9 */
  if (C.zf) goto L_123256b9;
  /* 1232563a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1232563f push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 12325644 push 2 */
  push32((uint32_t)(0x2u));
  /* 12325646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325649 push ecx */
  push32((uint32_t)(ECX));
  /* 1232564a call 0x12319430 */
  push32(0x1232564fu); f_12319430();
  /* 1232564f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325652 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325655 push eax */
  push32((uint32_t)(EAX));
  /* 12325656 call 0x12316600 */
  push32(0x1232565bu); f_12316600();
  /* 1232565b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232565e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12325661 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325665 je 0x123256b9 */
  if (C.zf) goto L_123256b9;
  /* 12325667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232566a push edx */
  push32((uint32_t)(EDX));
  /* 1232566b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232566e push eax */
  push32((uint32_t)(EAX));
  /* 1232566f call 0x123195b0 */
  push32(0x12325674u); f_123195b0();
  /* 12325674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325677 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1232567a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232567d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12325680 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325682 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12325685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12325688 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1232568b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232568e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325691 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12325694 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12325697 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12325699 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1232569b not edx */
  EDX = (~(EDX));
  /* 1232569d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 123256a0 push edx */
  push32((uint32_t)(EDX));
  /* 123256a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123256a4 push eax */
  push32((uint32_t)(EAX));
  /* 123256a5 call dword ptr [0x12344314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344314))), 0x123256abu);
  /* 123256ab push 2 */
  push32((uint32_t)(0x2u));
  /* 123256ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123256b0 push ecx */
  push32((uint32_t)(ECX));
  /* 123256b1 call 0x12317090 */
  push32(0x123256b6u); f_12317090();
  /* 123256b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123256b9:;
  /* 123256b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123256bb:;
  /* 123256bb pop esi */
  ESI = (pop32());
  /* 123256bc mov esp, ebp */
  ESP = (EBP);
  /* 123256be pop ebp */
  EBP = (pop32());
  /* 123256bf ret  */
  ESPCHK(0x123253e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x123256c0 (124 bytes, 47 insns) */
void f_123256c0(void) {
  FTRACE(0x123256c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123256c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123256c1 mov ebp, esp */
  EBP = (ESP);
  /* 123256c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123256c4 mov eax, dword ptr [0x12341754] */
  EAX = (r32((uint32_t)(0x12341754)));
  /* 123256c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123256cc jmp 0x123256d7 */
  goto L_123256d7;
L_123256ce:;
  /* 123256ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123256d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123256d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123256d7:;
  /* 123256d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123256da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123256dd je 0x1232572a */
  if (C.zf) goto L_1232572a;
  /* 123256df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123256e2 push eax */
  push32((uint32_t)(EAX));
  /* 123256e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123256e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123256e8 push edx */
  push32((uint32_t)(EDX));
  /* 123256e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123256ec push eax */
  push32((uint32_t)(EAX));
  /* 123256ed call 0x12324e90 */
  push32(0x123256f2u); f_12324e90();
  /* 123256f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123256f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123256f7 jne 0x12325728 */
  if (!C.zf) goto L_12325728;
  /* 123256f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123256fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123256fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12325701 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12325705 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325708 je 0x1232571a */
  if (C.zf) goto L_1232571a;
  /* 1232570a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232570d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1232570f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12325712 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12325716 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12325718 jne 0x12325728 */
  if (!C.zf) goto L_12325728;
L_1232571a:;
  /* 1232571a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232571d sub eax, dword ptr [0x12341754] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12341754))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12325723 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12325726 jmp 0x12325738 */
  goto L_12325738;
L_12325728:;
  /* 12325728 jmp 0x123256ce */
  goto L_123256ce;
L_1232572a:;
  /* 1232572a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1232572d sub eax, dword ptr [0x12341754] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12341754))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12325733 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12325736 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12325738:;
  /* 12325738 mov esp, ebp */
  ESP = (EBP);
  /* 1232573a pop ebp */
  EBP = (pop32());
  /* 1232573b ret  */
  ESPCHK(0x123256c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12325740 (238 bytes, 80 insns) */
void f_12325740(void) {
  FTRACE(0x12325740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12325740 push ebp */
  push32((uint32_t)(EBP));
  /* 12325741 mov ebp, esp */
  EBP = (ESP);
  /* 12325743 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12325746 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1232574d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325750 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12325753 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325757 jne 0x12325760 */
  if (!C.zf) goto L_12325760;
  /* 12325759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1232575b jmp 0x1232582a */
  goto L_1232582a;
L_12325760:;
  /* 12325760 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325763 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12325765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12325768 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232576b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1232576e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12325770 je 0x1232577d */
  if (C.zf) goto L_1232577d;
  /* 12325772 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12325775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325778 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1232577b jmp 0x12325760 */
  goto L_12325760;
L_1232577d:;
  /* 1232577d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12325782 push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 12325787 push 2 */
  push32((uint32_t)(0x2u));
  /* 12325789 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1232578c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12325793 push eax */
  push32((uint32_t)(EAX));
  /* 12325794 call 0x12316600 */
  push32(0x12325799u); f_12316600();
  /* 12325799 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232579c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1232579f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123257a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123257a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123257a9 jne 0x123257b5 */
  if (!C.zf) goto L_123257b5;
  /* 123257ab push 9 */
  push32((uint32_t)(0x9u));
  /* 123257ad call 0x12314450 */
  push32(0x123257b2u); f_12314450();
  /* 123257b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123257b5:;
  /* 123257b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123257b8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123257bb:;
  /* 123257bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123257be cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123257c1 je 0x1232581e */
  if (C.zf) goto L_1232581e;
  /* 123257c3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 123257c8 push 0x1233e298 */
  push32((uint32_t)(0x1233e298u));
  /* 123257cd push 2 */
  push32((uint32_t)(0x2u));
  /* 123257cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123257d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123257d4 push edx */
  push32((uint32_t)(EDX));
  /* 123257d5 call 0x12319430 */
  push32(0x123257dau); f_12319430();
  /* 123257da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123257dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123257e0 push eax */
  push32((uint32_t)(EAX));
  /* 123257e1 call 0x12316600 */
  push32(0x123257e6u); f_12316600();
  /* 123257e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123257e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123257ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123257ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123257f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123257f4 je 0x1232580a */
  if (C.zf) goto L_1232580a;
  /* 123257f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123257f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123257fb push ecx */
  push32((uint32_t)(ECX));
  /* 123257fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123257ff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12325801 push eax */
  push32((uint32_t)(EAX));
  /* 12325802 call 0x123195b0 */
  push32(0x12325807u); f_123195b0();
  /* 12325807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1232580a:;
  /* 1232580a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1232580d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325810 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12325813 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325816 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325819 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1232581c jmp 0x123257bb */
  goto L_123257bb;
L_1232581e:;
  /* 1232581e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12325821 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12325827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1232582a:;
  /* 1232582a mov esp, ebp */
  ESP = (EBP);
  /* 1232582c pop ebp */
  EBP = (pop32());
  /* 1232582d ret  */
  ESPCHK(0x12325740u, _esp0);
  ESP += 4; return;
}

/* FUN_10015830 @ 0x12325830 (237 bytes, 81 insns) */
void f_12325830(void) {
  FTRACE(0x12325830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12325830 push ebp */
  push32((uint32_t)(EBP));
  /* 12325831 mov ebp, esp */
  EBP = (ESP);
  /* 12325833 push ecx */
  push32((uint32_t)(ECX));
  /* 12325834 cmp dword ptr [0x12341b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1232583b jne 0x12325852 */
  if (!C.zf) goto L_12325852;
  /* 1232583d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12325840 push eax */
  push32((uint32_t)(EAX));
  /* 12325841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325844 push ecx */
  push32((uint32_t)(ECX));
  /* 12325845 call 0x12325930 */
  push32(0x1232584au); f_12325930();
  /* 1232584a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232584d jmp 0x12325919 */
  goto L_12325919;
L_12325852:;
  /* 12325852 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12325854 call 0x1231a9b0 */
  push32(0x12325859u); f_1231a9b0();
  /* 12325859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1232585c jmp 0x12325867 */
  goto L_12325867;
L_1232585e:;
  /* 1232585e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325864 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12325867:;
  /* 12325867 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1232586a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1232586e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12325872 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12325875 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1232587b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1232587d je 0x123258fb */
  if (C.zf) goto L_123258fb;
  /* 1232587f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12325882 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12325887 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12325889 mov cl, byte ptr [eax + 0x12341c61] */
  CL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 1232588f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12325892 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12325894 je 0x123258e6 */
  if (C.zf) goto L_123258e6;
  /* 12325896 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325899 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1232589c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1232589f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123258a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123258a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123258a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123258a8 jne 0x123258b8 */
  if (!C.zf) goto L_123258b8;
  /* 123258aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123258ac call 0x1231aa50 */
  push32(0x123258b1u); f_1231aa50();
  /* 123258b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123258b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123258b6 jmp 0x12325919 */
  goto L_12325919;
L_123258b8:;
  /* 123258b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123258bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123258c1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123258c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123258c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123258c9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123258cb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123258cd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123258d0 jne 0x123258e4 */
  if (!C.zf) goto L_123258e4;
  /* 123258d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123258d4 call 0x1231aa50 */
  push32(0x123258d9u); f_1231aa50();
  /* 123258d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123258dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123258df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123258e2 jmp 0x12325919 */
  goto L_12325919;
L_123258e4:;
  /* 123258e4 jmp 0x123258f6 */
  goto L_123258f6;
L_123258e6:;
  /* 123258e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123258e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123258ef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123258f2 jne 0x123258f6 */
  if (!C.zf) goto L_123258f6;
  /* 123258f4 jmp 0x123258fb */
  goto L_123258fb;
L_123258f6:;
  /* 123258f6 jmp 0x1232585e */
  goto L_1232585e;
L_123258fb:;
  /* 123258fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123258fd call 0x1231aa50 */
  push32(0x12325902u); f_1231aa50();
  /* 12325902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12325905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12325908 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1232590d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12325910 jne 0x12325917 */
  if (!C.zf) goto L_12325917;
  /* 12325912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12325915 jmp 0x12325919 */
  goto L_12325919;
L_12325917:;
  /* 12325917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12325919:;
  /* 12325919 mov esp, ebp */
  ESP = (EBP);
  /* 1232591b pop ebp */
  EBP = (pop32());
  /* 1232591c ret  */
  ESPCHK(0x12325830u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12325930 (193 bytes, 87 insns) */
void f_12325930(void) {
  FTRACE(0x12325930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12325930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12325932 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12325936 push ebx */
  push32((uint32_t)(EBX));
  /* 12325937 mov ebx, eax */
  EBX = (EAX);
  /* 12325939 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1232593c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12325940 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12325946 je 0x1232595b */
  if (C.zf) goto L_1232595b;
L_12325948:;
  /* 12325948 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1232594a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1232594b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1232594d je 0x12325920 */
  if (C.zf) { jmp_ind(0x12325920u); return; }
  /* 1232594f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12325951 je 0x123259a4 */
  if (C.zf) goto L_123259a4;
  /* 12325953 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12325959 jne 0x12325948 */
  if (!C.zf) goto L_12325948;
L_1232595b:;
  /* 1232595b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1232595d push edi */
  push32((uint32_t)(EDI));
  /* 1232595e mov eax, ebx */
  EAX = (EBX);
  /* 12325960 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12325963 push esi */
  push32((uint32_t)(ESI));
  /* 12325964 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12325966:;
  /* 12325966 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12325968 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1232596d mov eax, ecx */
  EAX = (ECX);
  /* 1232596f mov esi, edi */
  ESI = (EDI);
  /* 12325971 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12325973 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12325975 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12325977 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1232597a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1232597d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1232597f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12325981 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12325984 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1232598a jne 0x123259a8 */
  if (!C.zf) goto L_123259a8;
  /* 1232598c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12325991 je 0x12325966 */
  if (C.zf) goto L_12325966;
  /* 12325993 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12325998 jne 0x123259a2 */
  if (!C.zf) goto L_123259a2;
  /* 1232599a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 123259a0 jne 0x12325966 */
  if (!C.zf) goto L_12325966;
L_123259a2:;
  /* 123259a2 pop esi */
  ESI = (pop32());
  /* 123259a3 pop edi */
  EDI = (pop32());
L_123259a4:;
  /* 123259a4 pop ebx */
  EBX = (pop32());
  /* 123259a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123259a7 ret  */
  ESPCHK(0x12325930u, _esp0);
  ESP += 4; return;
L_123259a8:;
  /* 123259a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 123259ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123259ad je 0x123259e5 */
  if (C.zf) goto L_123259e5;
  /* 123259af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123259b1 je 0x123259a2 */
  if (C.zf) goto L_123259a2;
  /* 123259b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123259b5 je 0x123259de */
  if (C.zf) goto L_123259de;
  /* 123259b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123259b9 je 0x123259a2 */
  if (C.zf) goto L_123259a2;
  /* 123259bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123259be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123259c0 je 0x123259d7 */
  if (C.zf) goto L_123259d7;
  /* 123259c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123259c4 je 0x123259a2 */
  if (C.zf) goto L_123259a2;
  /* 123259c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123259c8 je 0x123259d0 */
  if (C.zf) goto L_123259d0;
  /* 123259ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123259cc je 0x123259a2 */
  if (C.zf) goto L_123259a2;
  /* 123259ce jmp 0x12325966 */
  goto L_12325966;
L_123259d0:;
  /* 123259d0 pop esi */
  ESI = (pop32());
  /* 123259d1 pop edi */
  EDI = (pop32());
  /* 123259d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 123259d5 pop ebx */
  EBX = (pop32());
  /* 123259d6 ret  */
  ESPCHK(0x12325930u, _esp0);
  ESP += 4; return;
L_123259d7:;
  /* 123259d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 123259da pop esi */
  ESI = (pop32());
  /* 123259db pop edi */
  EDI = (pop32());
  /* 123259dc pop ebx */
  EBX = (pop32());
  /* 123259dd ret  */
  ESPCHK(0x12325930u, _esp0);
  ESP += 4; return;
L_123259de:;
  /* 123259de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 123259e1 pop esi */
  ESI = (pop32());
  /* 123259e2 pop edi */
  EDI = (pop32());
  /* 123259e3 pop ebx */
  EBX = (pop32());
  /* 123259e4 ret  */
  ESPCHK(0x12325930u, _esp0);
  ESP += 4; return;
L_123259e5:;
  /* 123259e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 123259e8 pop esi */
  ESI = (pop32());
  /* 123259e9 pop edi */
  EDI = (pop32());
  /* 123259ea pop ebx */
  EBX = (pop32());
  /* 123259eb ret  */
  ESPCHK(0x12325930u, _esp0);
  ESP += 4; return;
  /* 123259ec jmp dword ptr [0x12344204] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12344204)))); return;
}

/* RtlUnwind @ 0x12325b6c (6 bytes, 1 insns) */
void f_12325b6c(void) {
  FTRACE(0x12325b6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12325b6c jmp dword ptr [0x12344300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12344300)))); return;
}

