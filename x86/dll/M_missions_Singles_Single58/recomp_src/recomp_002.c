#include "recomp.h"

/* FUN_1000bf90 @ 0x119bbf90 (199 bytes, 68 insns) */
void f_119bbf90(void) {
  FTRACE(0x119bbf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bbf90 push ebp */
  push32((uint32_t)(EBP));
  /* 119bbf91 mov ebp, esp */
  EBP = (ESP);
  /* 119bbf93 push ecx */
  push32((uint32_t)(ECX));
  /* 119bbf94 push ebx */
  push32((uint32_t)(EBX));
  /* 119bbf95 push esi */
  push32((uint32_t)(ESI));
  /* 119bbf96 push edi */
  push32((uint32_t)(EDI));
L_119bbf97:;
  /* 119bbf97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbf9b jne 0x119bbfbb */
  if (!C.zf) goto L_119bbfbb;
  /* 119bbf9d push 0x119e1680 */
  push32((uint32_t)(0x119e1680u));
  /* 119bbfa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bbfa4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 119bbfa6 push 0x119e21dc */
  push32((uint32_t)(0x119e21dcu));
  /* 119bbfab push 2 */
  push32((uint32_t)(0x2u));
  /* 119bbfad call 0x119b59b0 */
  push32(0x119bbfb2u); f_119b59b0();
  /* 119bbfb2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbfb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbfb8 jne 0x119bbfbb */
  if (!C.zf) goto L_119bbfbb;
  /* 119bbfba int3  */
  x86_unimpl("int3 @ 0x119bbfba");
L_119bbfbb:;
  /* 119bbfbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bbfbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bbfbf jne 0x119bbf97 */
  if (!C.zf) goto L_119bbf97;
  /* 119bbfc1 mov ecx, dword ptr [0x119e7290] */
  ECX = (r32((uint32_t)(0x119e7290)));
  /* 119bbfc7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbfca mov dword ptr [0x119e7290], ecx */
  w32((uint32_t)(0x119e7290), (ECX));
  /* 119bbfd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bbfd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119bbfd6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 119bbfd8 push 0x119e21dc */
  push32((uint32_t)(0x119e21dcu));
  /* 119bbfdd push 2 */
  push32((uint32_t)(0x2u));
  /* 119bbfdf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119bbfe4 call 0x119b8210 */
  push32(0x119bbfe9u); f_119b8210();
  /* 119bbfe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bbfec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbfef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 119bbff2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbff5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bbff9 je 0x119bc016 */
  if (C.zf) goto L_119bc016;
  /* 119bbffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bbffe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119bc001 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc007 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 119bc00a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc00d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 119bc014 jmp 0x119bc03b */
  goto L_119bc03b;
L_119bc016:;
  /* 119bc016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc019 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119bc01c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc01f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc022 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119bc025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc028 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc02b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc02e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119bc031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc034 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_119bc03b:;
  /* 119bc03b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc03e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc041 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bc044 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119bc046 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc049 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119bc050 pop edi */
  EDI = (pop32());
  /* 119bc051 pop esi */
  ESI = (pop32());
  /* 119bc052 pop ebx */
  EBX = (pop32());
  /* 119bc053 mov esp, ebp */
  ESP = (EBP);
  /* 119bc055 pop ebp */
  EBP = (pop32());
  /* 119bc056 ret  */
  ESPCHK(0x119bbf90u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x119bc060 (50 bytes, 17 insns) */
void f_119bc060(void) {
  FTRACE(0x119bc060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc060 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc061 mov ebp, esp */
  EBP = (ESP);
  /* 119bc063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc066 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc06c jb 0x119bc072 */
  if (C.cf) goto L_119bc072;
  /* 119bc06e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc070 jmp 0x119bc090 */
  goto L_119bc090;
L_119bc072:;
  /* 119bc072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc075 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bc078 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc07b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc07e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bc081 mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bc088 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119bc08d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_119bc090:;
  /* 119bc090 pop ebp */
  EBP = (pop32());
  /* 119bc091 ret  */
  ESPCHK(0x119bc060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x119bc0a0 (300 bytes, 80 insns) */
void f_119bc0a0(void) {
  FTRACE(0x119bc0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc0a1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc0a4 cmp dword ptr [0x119e8ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc0ab jne 0x119bc0b9 */
  if (!C.zf) goto L_119bc0b9;
  /* 119bc0ad mov dword ptr [0x119e8ac0], 0x200 */
  w32((uint32_t)(0x119e8ac0), (0x200u));
  /* 119bc0b7 jmp 0x119bc0cc */
  goto L_119bc0cc;
L_119bc0b9:;
  /* 119bc0b9 cmp dword ptr [0x119e8ac0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x119e8ac0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc0c0 jge 0x119bc0cc */
  if ((C.sf==C.of)) goto L_119bc0cc;
  /* 119bc0c2 mov dword ptr [0x119e8ac0], 0x14 */
  w32((uint32_t)(0x119e8ac0), (0x14u));
L_119bc0cc:;
  /* 119bc0cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 119bc0d1 push 0x119e21e8 */
  push32((uint32_t)(0x119e21e8u));
  /* 119bc0d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bc0d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 119bc0da mov eax, dword ptr [0x119e8ac0] */
  EAX = (r32((uint32_t)(0x119e8ac0)));
  /* 119bc0df push eax */
  push32((uint32_t)(EAX));
  /* 119bc0e0 call 0x119b8620 */
  push32(0x119bc0e5u); f_119b8620();
  /* 119bc0e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc0e8 mov dword ptr [0x119e776c], eax */
  w32((uint32_t)(0x119e776c), (EAX));
  /* 119bc0ed cmp dword ptr [0x119e776c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e776c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc0f4 jne 0x119bc135 */
  if (!C.zf) goto L_119bc135;
  /* 119bc0f6 mov dword ptr [0x119e8ac0], 0x14 */
  w32((uint32_t)(0x119e8ac0), (0x14u));
  /* 119bc100 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 119bc105 push 0x119e21e8 */
  push32((uint32_t)(0x119e21e8u));
  /* 119bc10a push 2 */
  push32((uint32_t)(0x2u));
  /* 119bc10c push 4 */
  push32((uint32_t)(0x4u));
  /* 119bc10e mov ecx, dword ptr [0x119e8ac0] */
  ECX = (r32((uint32_t)(0x119e8ac0)));
  /* 119bc114 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc115 call 0x119b8620 */
  push32(0x119bc11au); f_119b8620();
  /* 119bc11a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc11d mov dword ptr [0x119e776c], eax */
  w32((uint32_t)(0x119e776c), (EAX));
  /* 119bc122 cmp dword ptr [0x119e776c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e776c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc129 jne 0x119bc135 */
  if (!C.zf) goto L_119bc135;
  /* 119bc12b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 119bc12d call 0x119b5860 */
  push32(0x119bc132u); f_119b5860();
  /* 119bc132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bc135:;
  /* 119bc135 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bc13c jmp 0x119bc147 */
  goto L_119bc147;
L_119bc13e:;
  /* 119bc13e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc141 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc144 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bc147:;
  /* 119bc147 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc14b jge 0x119bc166 */
  if ((C.sf==C.of)) goto L_119bc166;
  /* 119bc14d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc150 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bc153 add eax, 0x119e4b80 */
  { uint32_t _a=(EAX),_b=(0x119e4b80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc15b mov edx, dword ptr [0x119e776c] */
  EDX = (r32((uint32_t)(0x119e776c)));
  /* 119bc161 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 119bc164 jmp 0x119bc13e */
  goto L_119bc13e;
L_119bc166:;
  /* 119bc166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bc16d jmp 0x119bc178 */
  goto L_119bc178;
L_119bc16f:;
  /* 119bc16f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc172 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bc178:;
  /* 119bc178 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc17c jge 0x119bc1c8 */
  if ((C.sf==C.of)) goto L_119bc1c8;
  /* 119bc17e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc181 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bc184 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc187 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc18a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bc18d mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bc194 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc198 je 0x119bc1b6 */
  if (C.zf) goto L_119bc1b6;
  /* 119bc19a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc19d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bc1a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc1a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc1a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bc1a9 mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119bc1b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc1b4 jne 0x119bc1c6 */
  if (!C.zf) goto L_119bc1c6;
L_119bc1b6:;
  /* 119bc1b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc1b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119bc1bc mov dword ptr [ecx + 0x119e4b90], 0xffffffff */
  w32((uint32_t)(ECX + 0x119e4b90), (0xffffffffu));
L_119bc1c6:;
  /* 119bc1c6 jmp 0x119bc16f */
  goto L_119bc16f;
L_119bc1c8:;
  /* 119bc1c8 mov esp, ebp */
  ESP = (EBP);
  /* 119bc1ca pop ebp */
  EBP = (pop32());
  /* 119bc1cb ret  */
  ESPCHK(0x119bc0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x119bc1d0 (26 bytes, 9 insns) */
void f_119bc1d0(void) {
  FTRACE(0x119bc1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc1d1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc1d3 call 0x119c1450 */
  push32(0x119bc1d8u); f_119c1450();
  /* 119bc1d8 movsx eax, byte ptr [0x119e7140] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e7140))));
  /* 119bc1df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc1e1 je 0x119bc1e8 */
  if (C.zf) goto L_119bc1e8;
  /* 119bc1e3 call 0x119c1210 */
  push32(0x119bc1e8u); f_119c1210();
L_119bc1e8:;
  /* 119bc1e8 pop ebp */
  EBP = (pop32());
  /* 119bc1e9 ret  */
  ESPCHK(0x119bc1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f0 @ 0x119bc1f0 (61 bytes, 20 insns) */
void f_119bc1f0(void) {
  FTRACE(0x119bc1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc1f1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc1f3 cmp dword ptr [ebp + 8], 0x119e4b80 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119e4b80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc1fa jb 0x119bc21e */
  if (C.cf) goto L_119bc21e;
  /* 119bc1fc cmp dword ptr [ebp + 8], 0x119e4de0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119e4de0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc203 ja 0x119bc21e */
  if ((!C.cf&&!C.zf)) goto L_119bc21e;
  /* 119bc205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc208 sub eax, 0x119e4b80 */
  { uint32_t _a=(EAX),_b=(0x119e4b80u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc20d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bc210 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc213 push eax */
  push32((uint32_t)(EAX));
  /* 119bc214 call 0x119bdb80 */
  push32(0x119bc219u); f_119bdb80();
  /* 119bc219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc21c jmp 0x119bc22b */
  goto L_119bc22b;
L_119bc21e:;
  /* 119bc21e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc221 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc224 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc225 call dword ptr [0x119e9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9368))), 0x119bc22bu);
L_119bc22b:;
  /* 119bc22b pop ebp */
  EBP = (pop32());
  /* 119bc22c ret  */
  ESPCHK(0x119bc1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c230 @ 0x119bc230 (41 bytes, 16 insns) */
void f_119bc230(void) {
  FTRACE(0x119bc230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc230 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc231 mov ebp, esp */
  EBP = (ESP);
  /* 119bc233 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc237 jge 0x119bc24a */
  if ((C.sf==C.of)) goto L_119bc24a;
  /* 119bc239 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc23c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc23f push eax */
  push32((uint32_t)(EAX));
  /* 119bc240 call 0x119bdb80 */
  push32(0x119bc245u); f_119bdb80();
  /* 119bc245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc248 jmp 0x119bc257 */
  goto L_119bc257;
L_119bc24a:;
  /* 119bc24a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bc24d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc250 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc251 call dword ptr [0x119e9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9368))), 0x119bc257u);
L_119bc257:;
  /* 119bc257 pop ebp */
  EBP = (pop32());
  /* 119bc258 ret  */
  ESPCHK(0x119bc230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x119bc260 (61 bytes, 20 insns) */
void f_119bc260(void) {
  FTRACE(0x119bc260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc260 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc261 mov ebp, esp */
  EBP = (ESP);
  /* 119bc263 cmp dword ptr [ebp + 8], 0x119e4b80 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119e4b80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc26a jb 0x119bc28e */
  if (C.cf) goto L_119bc28e;
  /* 119bc26c cmp dword ptr [ebp + 8], 0x119e4de0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119e4de0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc273 ja 0x119bc28e */
  if ((!C.cf&&!C.zf)) goto L_119bc28e;
  /* 119bc275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc278 sub eax, 0x119e4b80 */
  { uint32_t _a=(EAX),_b=(0x119e4b80u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc27d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bc280 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc283 push eax */
  push32((uint32_t)(EAX));
  /* 119bc284 call 0x119bdc20 */
  push32(0x119bc289u); f_119bdc20();
  /* 119bc289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc28c jmp 0x119bc29b */
  goto L_119bc29b;
L_119bc28e:;
  /* 119bc28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc291 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc294 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc295 call dword ptr [0x119e9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9364))), 0x119bc29bu);
L_119bc29b:;
  /* 119bc29b pop ebp */
  EBP = (pop32());
  /* 119bc29c ret  */
  ESPCHK(0x119bc260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x119bc2a0 (41 bytes, 16 insns) */
void f_119bc2a0(void) {
  FTRACE(0x119bc2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc2a1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc2a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc2a7 jge 0x119bc2ba */
  if ((C.sf==C.of)) goto L_119bc2ba;
  /* 119bc2a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc2ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc2af push eax */
  push32((uint32_t)(EAX));
  /* 119bc2b0 call 0x119bdc20 */
  push32(0x119bc2b5u); f_119bdc20();
  /* 119bc2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc2b8 jmp 0x119bc2c7 */
  goto L_119bc2c7;
L_119bc2ba:;
  /* 119bc2ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bc2bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc2c1 call dword ptr [0x119e9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9364))), 0x119bc2c7u);
L_119bc2c7:;
  /* 119bc2c7 pop ebp */
  EBP = (pop32());
  /* 119bc2c8 ret  */
  ESPCHK(0x119bc2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d0 @ 0x119bc2d0 (119 bytes, 34 insns) */
void f_119bc2d0(void) {
  FTRACE(0x119bc2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc2d1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc2d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc2d6 push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119bc2db call dword ptr [0x119e93d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d4))), 0x119bc2e1u);
  /* 119bc2e1 cmp dword ptr [0x119e748c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e748c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc2e8 je 0x119bc308 */
  if (C.zf) goto L_119bc308;
  /* 119bc2ea push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119bc2ef call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119bc2f5u);
  /* 119bc2f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119bc2f7 call 0x119bdb80 */
  push32(0x119bc2fcu); f_119bdb80();
  /* 119bc2fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc2ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119bc306 jmp 0x119bc30f */
  goto L_119bc30f;
L_119bc308:;
  /* 119bc308 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119bc30f:;
  /* 119bc30f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 119bc313 push eax */
  push32((uint32_t)(EAX));
  /* 119bc314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc317 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc318 call 0x119bc350 */
  push32(0x119bc31du); f_119bc350();
  /* 119bc31d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc320 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bc323 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc327 je 0x119bc335 */
  if (C.zf) goto L_119bc335;
  /* 119bc329 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119bc32b call 0x119bdc20 */
  push32(0x119bc330u); f_119bdc20();
  /* 119bc330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc333 jmp 0x119bc340 */
  goto L_119bc340;
L_119bc335:;
  /* 119bc335 push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119bc33a call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119bc340u);
L_119bc340:;
  /* 119bc340 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bc343 mov esp, ebp */
  ESP = (EBP);
  /* 119bc345 pop ebp */
  EBP = (pop32());
  /* 119bc346 ret  */
  ESPCHK(0x119bc2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c350 @ 0x119bc350 (160 bytes, 50 insns) */
void f_119bc350(void) {
  FTRACE(0x119bc350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc350 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc351 mov ebp, esp */
  EBP = (ESP);
  /* 119bc353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc356 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc35a jne 0x119bc363 */
  if (!C.zf) goto L_119bc363;
  /* 119bc35c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc35e jmp 0x119bc3ec */
  goto L_119bc3ec;
L_119bc363:;
  /* 119bc363 cmp dword ptr [0x119e7318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc36a jne 0x119bc39a */
  if (!C.zf) goto L_119bc39a;
  /* 119bc36c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bc36f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc374 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc379 jle 0x119bc38b */
  if ((C.zf||C.sf!=C.of)) goto L_119bc38b;
  /* 119bc37b call 0x119c0c20 */
  push32(0x119bc380u); f_119c0c20();
  /* 119bc380 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 119bc386 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc389 jmp 0x119bc3ec */
  goto L_119bc3ec;
L_119bc38b:;
  /* 119bc38b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc38e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 119bc391 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 119bc393 mov eax, 1 */
  EAX = (0x1u);
  /* 119bc398 jmp 0x119bc3ec */
  goto L_119bc3ec;
L_119bc39a:;
  /* 119bc39a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119bc3a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119bc3a4 push eax */
  push32((uint32_t)(EAX));
  /* 119bc3a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bc3a7 mov ecx, dword ptr [0x119e5010] */
  ECX = (r32((uint32_t)(0x119e5010)));
  /* 119bc3ad push ecx */
  push32((uint32_t)(ECX));
  /* 119bc3ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc3b1 push edx */
  push32((uint32_t)(EDX));
  /* 119bc3b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bc3b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 119bc3b7 push eax */
  push32((uint32_t)(EAX));
  /* 119bc3b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119bc3bd mov ecx, dword ptr [0x119e7328] */
  ECX = (r32((uint32_t)(0x119e7328)));
  /* 119bc3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc3c4 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119bc3cau);
  /* 119bc3ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bc3cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc3d1 je 0x119bc3d9 */
  if (C.zf) goto L_119bc3d9;
  /* 119bc3d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc3d7 je 0x119bc3e9 */
  if (C.zf) goto L_119bc3e9;
L_119bc3d9:;
  /* 119bc3d9 call 0x119c0c20 */
  push32(0x119bc3deu); f_119c0c20();
  /* 119bc3de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 119bc3e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc3e7 jmp 0x119bc3ec */
  goto L_119bc3ec;
L_119bc3e9:;
  /* 119bc3e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119bc3ec:;
  /* 119bc3ec mov esp, ebp */
  ESP = (EBP);
  /* 119bc3ee pop ebp */
  EBP = (pop32());
  /* 119bc3ef ret  */
  ESPCHK(0x119bc350u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x119bc3f0 (104 bytes, 43 insns) */
void f_119bc3f0(void) {
  FTRACE(0x119bc3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc3f0 push ebx */
  push32((uint32_t)(EBX));
  /* 119bc3f1 push esi */
  push32((uint32_t)(ESI));
  /* 119bc3f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 119bc3f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc3f8 jne 0x119bc412 */
  if (!C.zf) goto L_119bc412;
  /* 119bc3fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 119bc3fe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119bc402 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bc404 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bc406 mov ebx, eax */
  EBX = (EAX);
  /* 119bc408 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 119bc40c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bc40e mov edx, ebx */
  EDX = (EBX);
  /* 119bc410 jmp 0x119bc453 */
  goto L_119bc453;
L_119bc412:;
  /* 119bc412 mov ecx, eax */
  ECX = (EAX);
  /* 119bc414 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 119bc418 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 119bc41c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_119bc420:;
  /* 119bc420 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119bc422 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 119bc424 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119bc426 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 119bc428 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bc42a jne 0x119bc420 */
  if (!C.zf) goto L_119bc420;
  /* 119bc42c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bc42e mov esi, eax */
  ESI = (EAX);
  /* 119bc430 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119bc434 mov ecx, eax */
  ECX = (EAX);
  /* 119bc436 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 119bc43a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119bc43c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc43e jb 0x119bc44e */
  if (C.cf) goto L_119bc44e;
  /* 119bc440 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc444 ja 0x119bc44e */
  if ((!C.cf&&!C.zf)) goto L_119bc44e;
  /* 119bc446 jb 0x119bc44f */
  if (C.cf) goto L_119bc44f;
  /* 119bc448 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc44c jbe 0x119bc44f */
  if ((C.cf||C.zf)) goto L_119bc44f;
L_119bc44e:;
  /* 119bc44e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_119bc44f:;
  /* 119bc44f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bc451 mov eax, esi */
  EAX = (ESI);
L_119bc453:;
  /* 119bc453 pop esi */
  ESI = (pop32());
  /* 119bc454 pop ebx */
  EBX = (pop32());
  /* 119bc455 ret 0x10 */
  ESPCHK(0x119bc3f0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x119bc460 (117 bytes, 44 insns) */
void f_119bc460(void) {
  FTRACE(0x119bc460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc460 push ebx */
  push32((uint32_t)(EBX));
  /* 119bc461 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 119bc465 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc467 jne 0x119bc481 */
  if (!C.zf) goto L_119bc481;
  /* 119bc469 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 119bc46d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 119bc471 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bc473 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bc475 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bc479 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bc47b mov eax, edx */
  EAX = (EDX);
  /* 119bc47d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119bc47f jmp 0x119bc4d1 */
  goto L_119bc4d1;
L_119bc481:;
  /* 119bc481 mov ecx, eax */
  ECX = (EAX);
  /* 119bc483 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 119bc487 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 119bc48b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_119bc48f:;
  /* 119bc48f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119bc491 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 119bc493 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119bc495 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 119bc497 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bc499 jne 0x119bc48f */
  if (!C.zf) goto L_119bc48f;
  /* 119bc49b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119bc49d mov ecx, eax */
  ECX = (EAX);
  /* 119bc49f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119bc4a3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119bc4a4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119bc4a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc4aa jb 0x119bc4ba */
  if (C.cf) goto L_119bc4ba;
  /* 119bc4ac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc4b0 ja 0x119bc4ba */
  if ((!C.cf&&!C.zf)) goto L_119bc4ba;
  /* 119bc4b2 jb 0x119bc4c2 */
  if (C.cf) goto L_119bc4c2;
  /* 119bc4b4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc4b8 jbe 0x119bc4c2 */
  if ((C.cf||C.zf)) goto L_119bc4c2;
L_119bc4ba:;
  /* 119bc4ba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc4be sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_119bc4c2:;
  /* 119bc4c2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc4c6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc4ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bc4cc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bc4ce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_119bc4d1:;
  /* 119bc4d1 pop ebx */
  EBX = (pop32());
  /* 119bc4d2 ret 0x10 */
  ESPCHK(0x119bc460u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c4e0 @ 0x119bc4e0 (31 bytes, 18 insns) */
void f_119bc4e0(void) {
  FTRACE(0x119bc4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc4e1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc4e4 push ebx */
  push32((uint32_t)(EBX));
  /* 119bc4e5 push esi */
  push32((uint32_t)(ESI));
  /* 119bc4e6 push edi */
  push32((uint32_t)(EDI));
  /* 119bc4e7 wait  */
  /* wait (no observable integer/reg state) */
  /* 119bc4e8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 119bc4eb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc4ef push eax */
  push32((uint32_t)(EAX));
  /* 119bc4f0 call 0x119bc8d0 */
  push32(0x119bc4f5u); f_119bc8d0();
  /* 119bc4f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc4f8 pop edi */
  EDI = (pop32());
  /* 119bc4f9 pop esi */
  ESI = (pop32());
  /* 119bc4fa pop ebx */
  EBX = (pop32());
  /* 119bc4fb mov esp, ebp */
  ESP = (EBP);
  /* 119bc4fd pop ebp */
  EBP = (pop32());
  /* 119bc4fe ret  */
  ESPCHK(0x119bc4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c500 @ 0x119bc500 (32 bytes, 18 insns) */
void f_119bc500(void) {
  FTRACE(0x119bc500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc500 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc501 mov ebp, esp */
  EBP = (ESP);
  /* 119bc503 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc504 push ebx */
  push32((uint32_t)(EBX));
  /* 119bc505 push esi */
  push32((uint32_t)(ESI));
  /* 119bc506 push edi */
  push32((uint32_t)(EDI));
  /* 119bc507 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 119bc50a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 119bc50c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc510 push eax */
  push32((uint32_t)(EAX));
  /* 119bc511 call 0x119bc8d0 */
  push32(0x119bc516u); f_119bc8d0();
  /* 119bc516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc519 pop edi */
  EDI = (pop32());
  /* 119bc51a pop esi */
  ESI = (pop32());
  /* 119bc51b pop ebx */
  EBX = (pop32());
  /* 119bc51c mov esp, ebp */
  ESP = (EBP);
  /* 119bc51e pop ebp */
  EBP = (pop32());
  /* 119bc51f ret  */
  ESPCHK(0x119bc500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c520 @ 0x119bc520 (79 bytes, 34 insns) */
void f_119bc520(void) {
  FTRACE(0x119bc520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc520 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc521 mov ebp, esp */
  EBP = (ESP);
  /* 119bc523 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc526 push ebx */
  push32((uint32_t)(EBX));
  /* 119bc527 push esi */
  push32((uint32_t)(ESI));
  /* 119bc528 push edi */
  push32((uint32_t)(EDI));
  /* 119bc529 wait  */
  /* wait (no observable integer/reg state) */
  /* 119bc52a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 119bc52d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 119bc531 push eax */
  push32((uint32_t)(EAX));
  /* 119bc532 call 0x119bc5f0 */
  push32(0x119bc537u); f_119bc5f0();
  /* 119bc537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bc53d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc540 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 119bc543 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bc546 not edx */
  EDX = (~(EDX));
  /* 119bc548 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bc54b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc54d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bc54f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bc552 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bc555 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc556 call 0x119bc770 */
  push32(0x119bc55bu); f_119bc770();
  /* 119bc55b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc55e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119bc562 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 119bc565 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bc568 pop edi */
  EDI = (pop32());
  /* 119bc569 pop esi */
  ESI = (pop32());
  /* 119bc56a pop ebx */
  EBX = (pop32());
  /* 119bc56b mov esp, ebp */
  ESP = (EBP);
  /* 119bc56d pop ebp */
  EBP = (pop32());
  /* 119bc56e ret  */
  ESPCHK(0x119bc520u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x119bc570 (26 bytes, 11 insns) */
void f_119bc570(void) {
  FTRACE(0x119bc570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc570 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc571 mov ebp, esp */
  EBP = (ESP);
  /* 119bc573 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bc576 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc57b push eax */
  push32((uint32_t)(EAX));
  /* 119bc57c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc57f push ecx */
  push32((uint32_t)(ECX));
  /* 119bc580 call 0x119bc520 */
  push32(0x119bc585u); f_119bc520();
  /* 119bc585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc588 pop ebp */
  EBP = (pop32());
  /* 119bc589 ret  */
  ESPCHK(0x119bc570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c590 @ 0x119bc590 (88 bytes, 33 insns) */
void f_119bc590(void) {
  FTRACE(0x119bc590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc590 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc591 mov ebp, esp */
  EBP = (ESP);
  /* 119bc593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc596 push ebx */
  push32((uint32_t)(EBX));
  /* 119bc597 push esi */
  push32((uint32_t)(ESI));
  /* 119bc598 push edi */
  push32((uint32_t)(EDI));
  /* 119bc599 call 0x119bb960 */
  push32(0x119bc59eu); f_119bb960();
  /* 119bc59e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 119bc5a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bc5a3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 119bc5a5 call 0x119b7170 */
  push32(0x119bc5aau); f_119b7170();
  /* 119bc5aa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc5ae je 0x119bc5e1 */
  if (C.zf) goto L_119bc5e1;
  /* 119bc5b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc5b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bc5b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bc5b8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc5bf je 0x119bc5e1 */
  if (C.zf) goto L_119bc5e1;
  /* 119bc5c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc5c4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bc5c7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc5ca mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bc5cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bc5d0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 119bc5d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bc5da mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_119bc5e1:;
  /* 119bc5e1 pop edi */
  EDI = (pop32());
  /* 119bc5e2 pop esi */
  ESI = (pop32());
  /* 119bc5e3 pop ebx */
  EBX = (pop32());
  /* 119bc5e4 mov esp, ebp */
  ESP = (EBP);
  /* 119bc5e6 pop ebp */
  EBP = (pop32());
  /* 119bc5e7 ret  */
  ESPCHK(0x119bc590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f0 @ 0x119bc5f0 (377 bytes, 115 insns) */
void f_119bc5f0(void) {
  FTRACE(0x119bc5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc5f1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc5f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc5f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bc5fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc600 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc605 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc60a je 0x119bc615 */
  if (C.zf) goto L_119bc615;
  /* 119bc60c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc60f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc612 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bc615:;
  /* 119bc615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc618 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc61e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc621 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bc623 je 0x119bc62d */
  if (C.zf) goto L_119bc62d;
  /* 119bc625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc628 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 119bc62a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bc62d:;
  /* 119bc62d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc630 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc636 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc639 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bc63b je 0x119bc646 */
  if (C.zf) goto L_119bc646;
  /* 119bc63d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc640 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc643 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bc646:;
  /* 119bc646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc649 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc64e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc653 je 0x119bc65e */
  if (C.zf) goto L_119bc65e;
  /* 119bc655 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc658 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc65b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bc65e:;
  /* 119bc65e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc661 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc667 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc66a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bc66c je 0x119bc676 */
  if (C.zf) goto L_119bc676;
  /* 119bc66e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc671 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 119bc673 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bc676:;
  /* 119bc676 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc679 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc67f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc682 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bc684 je 0x119bc692 */
  if (C.zf) goto L_119bc692;
  /* 119bc686 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc689 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc68f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bc692:;
  /* 119bc692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc695 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc69a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc69f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bc6a2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc6a9 jg 0x119bc6c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_119bc6c5;
  /* 119bc6ab cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc6b2 je 0x119bc6d8 */
  if (C.zf) goto L_119bc6d8;
  /* 119bc6b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc6b8 je 0x119bc6d0 */
  if (C.zf) goto L_119bc6d0;
  /* 119bc6ba cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc6c1 je 0x119bc6e3 */
  if (C.zf) goto L_119bc6e3;
  /* 119bc6c3 jmp 0x119bc6f7 */
  goto L_119bc6f7;
L_119bc6c5:;
  /* 119bc6c5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc6cc je 0x119bc6ee */
  if (C.zf) goto L_119bc6ee;
  /* 119bc6ce jmp 0x119bc6f7 */
  goto L_119bc6f7;
L_119bc6d0:;
  /* 119bc6d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc6d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bc6d6 jmp 0x119bc6f7 */
  goto L_119bc6f7;
L_119bc6d8:;
  /* 119bc6d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc6db or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119bc6de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119bc6e1 jmp 0x119bc6f7 */
  goto L_119bc6f7;
L_119bc6e3:;
  /* 119bc6e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc6e6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 119bc6e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bc6ec jmp 0x119bc6f7 */
  goto L_119bc6f7;
L_119bc6ee:;
  /* 119bc6ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc6f1 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119bc6f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bc6f7:;
  /* 119bc6f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc6fa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc700 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc706 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119bc709 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc70d je 0x119bc739 */
  if (C.zf) goto L_119bc739;
  /* 119bc70f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc716 je 0x119bc72b */
  if (C.zf) goto L_119bc72b;
  /* 119bc718 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc71f je 0x119bc723 */
  if (C.zf) goto L_119bc723;
  /* 119bc721 jmp 0x119bc745 */
  goto L_119bc745;
L_119bc723:;
  /* 119bc723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc726 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bc729 jmp 0x119bc745 */
  goto L_119bc745;
L_119bc72b:;
  /* 119bc72b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc72e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc734 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bc737 jmp 0x119bc745 */
  goto L_119bc745;
L_119bc739:;
  /* 119bc739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc73c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc742 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bc745:;
  /* 119bc745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc748 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc74d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc754 je 0x119bc762 */
  if (C.zf) goto L_119bc762;
  /* 119bc756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc759 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc75f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bc762:;
  /* 119bc762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc765 mov esp, ebp */
  ESP = (EBP);
  /* 119bc767 pop ebp */
  EBP = (pop32());
  /* 119bc768 ret  */
  ESPCHK(0x119bc5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x119bc770 (346 bytes, 106 insns) */
void f_119bc770(void) {
  FTRACE(0x119bc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc770 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc771 mov ebp, esp */
  EBP = (ESP);
  /* 119bc773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc776 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bc77c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc77f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc784 je 0x119bc791 */
  if (C.zf) goto L_119bc791;
  /* 119bc786 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc78a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 119bc78d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_119bc791:;
  /* 119bc791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc794 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc797 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bc799 je 0x119bc7a5 */
  if (C.zf) goto L_119bc7a5;
  /* 119bc79b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc79f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 119bc7a1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_119bc7a5:;
  /* 119bc7a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc7a8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc7ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bc7ad je 0x119bc7ba */
  if (C.zf) goto L_119bc7ba;
  /* 119bc7af mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc7b3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 119bc7b6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_119bc7ba:;
  /* 119bc7ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc7bd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc7c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc7c2 je 0x119bc7cf */
  if (C.zf) goto L_119bc7cf;
  /* 119bc7c4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc7c8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 119bc7cb mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_119bc7cf:;
  /* 119bc7cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc7d2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc7d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bc7d7 je 0x119bc7e3 */
  if (C.zf) goto L_119bc7e3;
  /* 119bc7d9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc7dd or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 119bc7df mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_119bc7e3:;
  /* 119bc7e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc7e6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc7ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bc7ee je 0x119bc7fb */
  if (C.zf) goto L_119bc7fb;
  /* 119bc7f0 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc7f4 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 119bc7f7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_119bc7fb:;
  /* 119bc7fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc7fe and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc803 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bc806 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc80d ja 0x119bc829 */
  if ((!C.cf&&!C.zf)) goto L_119bc829;
  /* 119bc80f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc816 je 0x119bc83e */
  if (C.zf) goto L_119bc83e;
  /* 119bc818 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc81c je 0x119bc834 */
  if (C.zf) goto L_119bc834;
  /* 119bc81e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc825 je 0x119bc84b */
  if (C.zf) goto L_119bc84b;
  /* 119bc827 jmp 0x119bc863 */
  goto L_119bc863;
L_119bc829:;
  /* 119bc829 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc830 je 0x119bc858 */
  if (C.zf) goto L_119bc858;
  /* 119bc832 jmp 0x119bc863 */
  goto L_119bc863;
L_119bc834:;
  /* 119bc834 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc838 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 119bc83c jmp 0x119bc863 */
  goto L_119bc863;
L_119bc83e:;
  /* 119bc83e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc842 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119bc845 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 119bc849 jmp 0x119bc863 */
  goto L_119bc863;
L_119bc84b:;
  /* 119bc84b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc84f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 119bc852 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119bc856 jmp 0x119bc863 */
  goto L_119bc863;
L_119bc858:;
  /* 119bc858 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc85c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119bc85f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_119bc863:;
  /* 119bc863 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc866 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc86c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119bc86f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc873 je 0x119bc889 */
  if (C.zf) goto L_119bc889;
  /* 119bc875 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc87c je 0x119bc896 */
  if (C.zf) goto L_119bc896;
  /* 119bc87e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc885 je 0x119bc8a3 */
  if (C.zf) goto L_119bc8a3;
  /* 119bc887 jmp 0x119bc8ab */
  goto L_119bc8ab;
L_119bc889:;
  /* 119bc889 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc88d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 119bc890 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119bc894 jmp 0x119bc8ab */
  goto L_119bc8ab;
L_119bc896:;
  /* 119bc896 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc89a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119bc89d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 119bc8a1 jmp 0x119bc8ab */
  goto L_119bc8ab;
L_119bc8a3:;
  /* 119bc8a3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc8a7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_119bc8ab:;
  /* 119bc8ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc8ae and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc8b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc8b5 je 0x119bc8c2 */
  if (C.zf) goto L_119bc8c2;
  /* 119bc8b7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc8bb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119bc8be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_119bc8c2:;
  /* 119bc8c2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bc8c6 mov esp, ebp */
  ESP = (EBP);
  /* 119bc8c8 pop ebp */
  EBP = (pop32());
  /* 119bc8c9 ret  */
  ESPCHK(0x119bc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x119bc8d0 (167 bytes, 56 insns) */
void f_119bc8d0(void) {
  FTRACE(0x119bc8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc8d1 mov ebp, esp */
  EBP = (ESP);
  /* 119bc8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bc8d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bc8db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc8de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc8e3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc8e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc8e8 je 0x119bc8f3 */
  if (C.zf) goto L_119bc8f3;
  /* 119bc8ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc8ed or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc8f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bc8f3:;
  /* 119bc8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc8f6 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc8fc and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc8ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bc901 je 0x119bc90b */
  if (C.zf) goto L_119bc90b;
  /* 119bc903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc906 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 119bc908 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bc90b:;
  /* 119bc90b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc90e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc914 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bc919 je 0x119bc924 */
  if (C.zf) goto L_119bc924;
  /* 119bc91b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc91e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc921 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bc924:;
  /* 119bc924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc927 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bc92c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc92f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc931 je 0x119bc93c */
  if (C.zf) goto L_119bc93c;
  /* 119bc933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc936 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc939 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bc93c:;
  /* 119bc93c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc93f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bc945 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc948 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bc94a je 0x119bc954 */
  if (C.zf) goto L_119bc954;
  /* 119bc94c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc94f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 119bc951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bc954:;
  /* 119bc954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc957 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc95d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119bc960 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bc962 je 0x119bc970 */
  if (C.zf) goto L_119bc970;
  /* 119bc964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc967 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 119bc96d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bc970:;
  /* 119bc970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bc973 mov esp, ebp */
  ESP = (EBP);
  /* 119bc975 pop ebp */
  EBP = (pop32());
  /* 119bc976 ret  */
  ESPCHK(0x119bc8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x119bc980 (183 bytes, 58 insns) */
void f_119bc980(void) {
  FTRACE(0x119bc980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bc980 push ebp */
  push32((uint32_t)(EBP));
  /* 119bc981 mov ebp, esp */
  EBP = (ESP);
  /* 119bc983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bc986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc989 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bc98c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bc991 ja 0x119bc9aa */
  if ((!C.cf&&!C.zf)) goto L_119bc9aa;
  /* 119bc993 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc996 mov edx, dword ptr [0x119e4e00] */
  EDX = (r32((uint32_t)(0x119e4e00)));
  /* 119bc99c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc99e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 119bc9a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 119bc9a5 jmp 0x119bca33 */
  goto L_119bca33;
L_119bc9aa:;
  /* 119bc9aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc9ad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 119bc9b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc9b6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc9bc mov edx, dword ptr [0x119e4e00] */
  EDX = (r32((uint32_t)(0x119e4e00)));
  /* 119bc9c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bc9c4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 119bc9c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bc9cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bc9cf je 0x119bc9f3 */
  if (C.zf) goto L_119bc9f3;
  /* 119bc9d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bc9d4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 119bc9d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bc9dd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 119bc9e0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 119bc9e3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 119bc9e6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 119bc9ea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 119bc9f1 jmp 0x119bca04 */
  goto L_119bca04;
L_119bc9f3:;
  /* 119bc9f3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 119bc9f6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 119bc9f9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 119bc9fd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_119bca04:;
  /* 119bca04 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bca06 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bca08 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bca0a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 119bca0d push ecx */
  push32((uint32_t)(ECX));
  /* 119bca0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bca11 push edx */
  push32((uint32_t)(EDX));
  /* 119bca12 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 119bca15 push eax */
  push32((uint32_t)(EAX));
  /* 119bca16 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bca18 call 0x119c1ff0 */
  push32(0x119bca1du); f_119c1ff0();
  /* 119bca1d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bca20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bca22 jne 0x119bca28 */
  if (!C.zf) goto L_119bca28;
  /* 119bca24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bca26 jmp 0x119bca33 */
  goto L_119bca33;
L_119bca28:;
  /* 119bca28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bca2b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bca30 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_119bca33:;
  /* 119bca33 mov esp, ebp */
  ESP = (EBP);
  /* 119bca35 pop ebp */
  EBP = (pop32());
  /* 119bca36 ret  */
  ESPCHK(0x119bc980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x119bca40 (11 bytes, 6 insns) */
void f_119bca40(void) {
  FTRACE(0x119bca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bca40 push ebp */
  push32((uint32_t)(EBP));
  /* 119bca41 mov ebp, esp */
  EBP = (ESP);
  /* 119bca43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bca46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bca49 pop ebp */
  EBP = (pop32());
  /* 119bca4a ret  */
  ESPCHK(0x119bca40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca50 @ 0x119bca50 (147 bytes, 43 insns) */
void f_119bca50(void) {
  FTRACE(0x119bca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bca50 push ebp */
  push32((uint32_t)(EBP));
  /* 119bca51 mov ebp, esp */
  EBP = (ESP);
  /* 119bca53 push ecx */
  push32((uint32_t)(ECX));
  /* 119bca54 cmp dword ptr [0x119e7318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bca5b jne 0x119bca77 */
  if (!C.zf) goto L_119bca77;
  /* 119bca5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bca61 jl 0x119bca72 */
  if ((C.sf!=C.of)) goto L_119bca72;
  /* 119bca63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bca67 jg 0x119bca72 */
  if ((!C.zf&&C.sf==C.of)) goto L_119bca72;
  /* 119bca69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bca6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bca6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119bca72:;
  /* 119bca72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bca75 jmp 0x119bcadf */
  goto L_119bcadf;
L_119bca77:;
  /* 119bca77 push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119bca7c call dword ptr [0x119e93d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d4))), 0x119bca82u);
  /* 119bca82 cmp dword ptr [0x119e748c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e748c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bca89 je 0x119bcaa9 */
  if (C.zf) goto L_119bcaa9;
  /* 119bca8b push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119bca90 call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119bca96u);
  /* 119bca96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119bca98 call 0x119bdb80 */
  push32(0x119bca9du); f_119bdb80();
  /* 119bca9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcaa0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119bcaa7 jmp 0x119bcab0 */
  goto L_119bcab0;
L_119bcaa9:;
  /* 119bcaa9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119bcab0:;
  /* 119bcab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcab3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bcab4 call 0x119bcaf0 */
  push32(0x119bcab9u); f_119bcaf0();
  /* 119bcab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcabc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119bcabf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcac3 je 0x119bcad1 */
  if (C.zf) goto L_119bcad1;
  /* 119bcac5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119bcac7 call 0x119bdc20 */
  push32(0x119bcaccu); f_119bdc20();
  /* 119bcacc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcacf jmp 0x119bcadc */
  goto L_119bcadc;
L_119bcad1:;
  /* 119bcad1 push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119bcad6 call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119bcadcu);
L_119bcadc:;
  /* 119bcadc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_119bcadf:;
  /* 119bcadf mov esp, ebp */
  ESP = (EBP);
  /* 119bcae1 pop ebp */
  EBP = (pop32());
  /* 119bcae2 ret  */
  ESPCHK(0x119bca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x119bcaf0 (299 bytes, 91 insns) */
void f_119bcaf0(void) {
  FTRACE(0x119bcaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bcaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bcaf1 mov ebp, esp */
  EBP = (ESP);
  /* 119bcaf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcaf6 cmp dword ptr [0x119e7318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcafd jne 0x119bcb1c */
  if (!C.zf) goto L_119bcb1c;
  /* 119bcaff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcb03 jl 0x119bcb14 */
  if ((C.sf!=C.of)) goto L_119bcb14;
  /* 119bcb05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcb09 jg 0x119bcb14 */
  if ((!C.zf&&C.sf==C.of)) goto L_119bcb14;
  /* 119bcb0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcb11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119bcb14:;
  /* 119bcb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb17 jmp 0x119bcc17 */
  goto L_119bcc17;
L_119bcb1c:;
  /* 119bcb1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcb23 jge 0x119bcb63 */
  if ((C.sf==C.of)) goto L_119bcb63;
  /* 119bcb25 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcb2c jle 0x119bcb41 */
  if ((C.zf||C.sf!=C.of)) goto L_119bcb41;
  /* 119bcb2e push 1 */
  push32((uint32_t)(0x1u));
  /* 119bcb30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb33 push ecx */
  push32((uint32_t)(ECX));
  /* 119bcb34 call 0x119bc980 */
  push32(0x119bcb39u); f_119bc980();
  /* 119bcb39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcb3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bcb3f jmp 0x119bcb55 */
  goto L_119bcb55;
L_119bcb41:;
  /* 119bcb41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb44 mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119bcb49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bcb4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119bcb4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119bcb52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119bcb55:;
  /* 119bcb55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcb59 jne 0x119bcb63 */
  if (!C.zf) goto L_119bcb63;
  /* 119bcb5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb5e jmp 0x119bcc17 */
  goto L_119bcc17;
L_119bcb63:;
  /* 119bcb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119bcb69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcb6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcb75 mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119bcb7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bcb7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119bcb80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bcb86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bcb88 je 0x119bcbac */
  if (C.zf) goto L_119bcbac;
  /* 119bcb8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcb8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119bcb90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcb96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 119bcb99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 119bcb9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 119bcb9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 119bcba3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 119bcbaa jmp 0x119bcbbd */
  goto L_119bcbbd;
L_119bcbac:;
  /* 119bcbac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 119bcbaf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 119bcbb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 119bcbb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_119bcbbd:;
  /* 119bcbbd push 1 */
  push32((uint32_t)(0x1u));
  /* 119bcbbf push 0 */
  push32((uint32_t)(0x0u));
  /* 119bcbc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 119bcbc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119bcbc6 push edx */
  push32((uint32_t)(EDX));
  /* 119bcbc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcbca push eax */
  push32((uint32_t)(EAX));
  /* 119bcbcb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 119bcbce push ecx */
  push32((uint32_t)(ECX));
  /* 119bcbcf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119bcbd4 mov edx, dword ptr [0x119e7318] */
  EDX = (r32((uint32_t)(0x119e7318)));
  /* 119bcbda push edx */
  push32((uint32_t)(EDX));
  /* 119bcbdb call 0x119c21b0 */
  push32(0x119bcbe0u); f_119c21b0();
  /* 119bcbe0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcbe3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bcbe6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcbea jne 0x119bcbf1 */
  if (!C.zf) goto L_119bcbf1;
  /* 119bcbec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcbef jmp 0x119bcc17 */
  goto L_119bcc17;
L_119bcbf1:;
  /* 119bcbf1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcbf5 jne 0x119bcc01 */
  if (!C.zf) goto L_119bcc01;
  /* 119bcbf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcbfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bcbff jmp 0x119bcc17 */
  goto L_119bcc17;
L_119bcc01:;
  /* 119bcc01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcc04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bcc09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 119bcc0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bcc12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 119bcc15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_119bcc17:;
  /* 119bcc17 mov esp, ebp */
  ESP = (EBP);
  /* 119bcc19 pop ebp */
  EBP = (pop32());
  /* 119bcc1a ret  */
  ESPCHK(0x119bcaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x119bcc20 (132 bytes, 51 insns) */
void f_119bcc20(void) {
  FTRACE(0x119bcc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bcc20 push ebp */
  push32((uint32_t)(EBP));
  /* 119bcc21 mov ebp, esp */
  EBP = (ESP);
  /* 119bcc23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcc26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bcc29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119bcc2a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcc2d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcc2f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bcc32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bcc35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bcc38 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 119bcc3d jns 0x119bcc44 */
  if (!C.sf) goto L_119bcc44;
  /* 119bcc3f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119bcc40 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 119bcc43 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119bcc44:;
  /* 119bcc44 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 119bcc49 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcc4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bcc4e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcc51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcc54 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bcc56 not edx */
  EDX = (~(EDX));
  /* 119bcc58 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bcc5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcc61 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119bcc64 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119bcc67 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bcc69 je 0x119bcc6f */
  if (C.zf) goto L_119bcc6f;
  /* 119bcc6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bcc6d jmp 0x119bcca0 */
  goto L_119bcca0;
L_119bcc6f:;
  /* 119bcc6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcc72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcc75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bcc78 jmp 0x119bcc83 */
  goto L_119bcc83;
L_119bcc7a:;
  /* 119bcc7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcc7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcc80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119bcc83:;
  /* 119bcc83 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcc87 jge 0x119bcc9b */
  if ((C.sf==C.of)) goto L_119bcc9b;
  /* 119bcc89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcc8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcc8f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcc93 je 0x119bcc99 */
  if (C.zf) goto L_119bcc99;
  /* 119bcc95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bcc97 jmp 0x119bcca0 */
  goto L_119bcca0;
L_119bcc99:;
  /* 119bcc99 jmp 0x119bcc7a */
  goto L_119bcc7a;
L_119bcc9b:;
  /* 119bcc9b mov eax, 1 */
  EAX = (0x1u);
L_119bcca0:;
  /* 119bcca0 mov esp, ebp */
  ESP = (EBP);
  /* 119bcca2 pop ebp */
  EBP = (pop32());
  /* 119bcca3 ret  */
  ESPCHK(0x119bcc20u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x119bccb0 (168 bytes, 63 insns) */
void f_119bccb0(void) {
  FTRACE(0x119bccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bccb1 mov ebp, esp */
  EBP = (ESP);
  /* 119bccb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bccb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bccb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119bccba and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bccbd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bccbf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bccc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bccc5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bccc8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 119bcccd jns 0x119bccd4 */
  if (!C.sf) goto L_119bccd4;
  /* 119bcccf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119bccd0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 119bccd3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119bccd4:;
  /* 119bccd4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 119bccd9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bccdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bccde mov edx, 1 */
  EDX = (0x1u);
  /* 119bcce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcce6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bcce8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bcceb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bccee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bccf1 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 119bccf4 push edx */
  push32((uint32_t)(EDX));
  /* 119bccf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bccf8 push eax */
  push32((uint32_t)(EAX));
  /* 119bccf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bccfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bccff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119bcd02 push eax */
  push32((uint32_t)(EAX));
  /* 119bcd03 call 0x119c2510 */
  push32(0x119bcd08u); f_119c2510();
  /* 119bcd08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcd0b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bcd0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcd11 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcd14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bcd17 jmp 0x119bcd22 */
  goto L_119bcd22;
L_119bcd19:;
  /* 119bcd19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcd1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcd1f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119bcd22:;
  /* 119bcd22 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcd26 jl 0x119bcd51 */
  if ((C.sf!=C.of)) goto L_119bcd51;
  /* 119bcd28 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcd2c je 0x119bcd51 */
  if (C.zf) goto L_119bcd51;
  /* 119bcd2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcd31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcd34 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 119bcd37 push edx */
  push32((uint32_t)(EDX));
  /* 119bcd38 push 1 */
  push32((uint32_t)(0x1u));
  /* 119bcd3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcd3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcd40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119bcd43 push edx */
  push32((uint32_t)(EDX));
  /* 119bcd44 call 0x119c2510 */
  push32(0x119bcd49u); f_119c2510();
  /* 119bcd49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcd4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bcd4f jmp 0x119bcd19 */
  goto L_119bcd19;
L_119bcd51:;
  /* 119bcd51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bcd54 mov esp, ebp */
  ESP = (EBP);
  /* 119bcd56 pop ebp */
  EBP = (pop32());
  /* 119bcd57 ret  */
  ESPCHK(0x119bccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x119bcd60 (219 bytes, 78 insns) */
void f_119bcd60(void) {
  FTRACE(0x119bcd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bcd60 push ebp */
  push32((uint32_t)(EBP));
  /* 119bcd61 mov ebp, esp */
  EBP = (ESP);
  /* 119bcd63 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcd66 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 119bcd6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bcd70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcd73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bcd76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcd79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcd7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bcd7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcd82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119bcd83 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcd86 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcd88 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bcd8b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119bcd8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcd91 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcd97 jns 0x119bcd9e */
  if (!C.sf) goto L_119bcd9e;
  /* 119bcd99 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 119bcd9a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 119bcd9d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_119bcd9e:;
  /* 119bcd9e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 119bcda3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcda5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bcda8 mov edx, 1 */
  EDX = (0x1u);
  /* 119bcdad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bcdb0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bcdb2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bcdb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bcdb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcdbb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119bcdbe and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 119bcdc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bcdc3 je 0x119bcdef */
  if (C.zf) goto L_119bcdef;
  /* 119bcdc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcdc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcdcb push eax */
  push32((uint32_t)(EAX));
  /* 119bcdcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcdcf push ecx */
  push32((uint32_t)(ECX));
  /* 119bcdd0 call 0x119bcc20 */
  push32(0x119bcdd5u); f_119bcc20();
  /* 119bcdd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcdd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bcdda jne 0x119bcdef */
  if (!C.zf) goto L_119bcdef;
  /* 119bcddc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcddf push edx */
  push32((uint32_t)(EDX));
  /* 119bcde0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcde3 push eax */
  push32((uint32_t)(EAX));
  /* 119bcde4 call 0x119bccb0 */
  push32(0x119bcde9u); f_119bccb0();
  /* 119bcde9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcdec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_119bcdef:;
  /* 119bcdef or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcdf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bcdf5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bcdf7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bcdfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcdfd mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119bce00 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bce02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bce05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bce08 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 119bce0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bce0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bce11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bce14 jmp 0x119bce1f */
  goto L_119bce1f;
L_119bce16:;
  /* 119bce16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bce19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bce1c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119bce1f:;
  /* 119bce1f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bce23 jge 0x119bce34 */
  if ((C.sf==C.of)) goto L_119bce34;
  /* 119bce25 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bce28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bce2b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 119bce32 jmp 0x119bce16 */
  goto L_119bce16;
L_119bce34:;
  /* 119bce34 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bce37 mov esp, ebp */
  ESP = (EBP);
  /* 119bce39 pop ebp */
  EBP = (pop32());
  /* 119bce3a ret  */
  ESPCHK(0x119bcd60u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x119bce40 (76 bytes, 28 insns) */
void f_119bce40(void) {
  FTRACE(0x119bce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bce40 push ebp */
  push32((uint32_t)(EBP));
  /* 119bce41 mov ebp, esp */
  EBP = (ESP);
  /* 119bce43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bce46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bce49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bce4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bce4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119bce52 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119bce59 jmp 0x119bce64 */
  goto L_119bce64;
L_119bce5b:;
  /* 119bce5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bce5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bce61 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119bce64:;
  /* 119bce64 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bce68 jge 0x119bce88 */
  if ((C.sf==C.of)) goto L_119bce88;
  /* 119bce6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bce6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bce70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bce72 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119bce74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bce77 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bce7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bce7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bce80 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bce83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bce86 jmp 0x119bce5b */
  goto L_119bce5b;
L_119bce88:;
  /* 119bce88 mov esp, ebp */
  ESP = (EBP);
  /* 119bce8a pop ebp */
  EBP = (pop32());
  /* 119bce8b ret  */
  ESPCHK(0x119bce40u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x119bce90 (47 bytes, 17 insns) */
void f_119bce90(void) {
  FTRACE(0x119bce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bce90 push ebp */
  push32((uint32_t)(EBP));
  /* 119bce91 mov ebp, esp */
  EBP = (ESP);
  /* 119bce93 push ecx */
  push32((uint32_t)(ECX));
  /* 119bce94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bce9b jmp 0x119bcea6 */
  goto L_119bcea6;
L_119bce9d:;
  /* 119bce9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcea0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcea3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bcea6:;
  /* 119bcea6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bceaa jge 0x119bcebb */
  if ((C.sf==C.of)) goto L_119bcebb;
  /* 119bceac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bceaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bceb2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 119bceb9 jmp 0x119bce9d */
  goto L_119bce9d;
L_119bcebb:;
  /* 119bcebb mov esp, ebp */
  ESP = (EBP);
  /* 119bcebd pop ebp */
  EBP = (pop32());
  /* 119bcebe ret  */
  ESPCHK(0x119bce90u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x119bcec0 (55 bytes, 21 insns) */
void f_119bcec0(void) {
  FTRACE(0x119bcec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bcec0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bcec1 mov ebp, esp */
  EBP = (ESP);
  /* 119bcec3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bcec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bcecb jmp 0x119bced6 */
  goto L_119bced6;
L_119bcecd:;
  /* 119bcecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bced0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bced3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bced6:;
  /* 119bced6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bceda jge 0x119bceee */
  if ((C.sf==C.of)) goto L_119bceee;
  /* 119bcedc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcedf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcee2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcee6 je 0x119bceec */
  if (C.zf) goto L_119bceec;
  /* 119bcee8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bceea jmp 0x119bcef3 */
  goto L_119bcef3;
L_119bceec:;
  /* 119bceec jmp 0x119bcecd */
  goto L_119bcecd;
L_119bceee:;
  /* 119bceee mov eax, 1 */
  EAX = (0x1u);
L_119bcef3:;
  /* 119bcef3 mov esp, ebp */
  ESP = (EBP);
  /* 119bcef5 pop ebp */
  EBP = (pop32());
  /* 119bcef6 ret  */
  ESPCHK(0x119bcec0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x119bcf00 (236 bytes, 82 insns) */
void f_119bcf00(void) {
  FTRACE(0x119bcf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bcf00 push ebp */
  push32((uint32_t)(EBP));
  /* 119bcf01 mov ebp, esp */
  EBP = (ESP);
  /* 119bcf03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcf06 push esi */
  push32((uint32_t)(ESI));
  /* 119bcf07 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bcf0a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119bcf0b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcf0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcf10 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119bcf13 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bcf16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bcf19 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 119bcf1e jns 0x119bcf25 */
  if (!C.sf) goto L_119bcf25;
  /* 119bcf20 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119bcf21 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 119bcf24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119bcf25:;
  /* 119bcf25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bcf28 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bcf2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcf2e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bcf30 not edx */
  EDX = (~(EDX));
  /* 119bcf32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119bcf35 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119bcf3c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119bcf43 jmp 0x119bcf4e */
  goto L_119bcf4e;
L_119bcf45:;
  /* 119bcf45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcf48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bcf4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119bcf4e:;
  /* 119bcf4e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcf52 jge 0x119bcfa1 */
  if ((C.sf==C.of)) goto L_119bcfa1;
  /* 119bcf54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcf57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcf5a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119bcf5d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 119bcf60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bcf63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcf66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcf69 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119bcf6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bcf6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bcf71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcf74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcf77 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 119bcf7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcf7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcf80 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119bcf83 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119bcf86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcf89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcf8c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 119bcf8f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 119bcf94 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcf97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bcf9a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bcf9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bcf9f jmp 0x119bcf45 */
  goto L_119bcf45;
L_119bcfa1:;
  /* 119bcfa1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 119bcfa8 jmp 0x119bcfb3 */
  goto L_119bcfb3;
L_119bcfaa:;
  /* 119bcfaa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcfad sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcfb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119bcfb3:;
  /* 119bcfb3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcfb7 jl 0x119bcfe7 */
  if ((C.sf!=C.of)) goto L_119bcfe7;
  /* 119bcfb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcfbc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bcfbf jl 0x119bcfd8 */
  if ((C.sf!=C.of)) goto L_119bcfd8;
  /* 119bcfc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcfc4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcfc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcfca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcfcd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcfd0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 119bcfd3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 119bcfd6 jmp 0x119bcfe5 */
  goto L_119bcfe5;
L_119bcfd8:;
  /* 119bcfd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bcfdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcfde mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_119bcfe5:;
  /* 119bcfe5 jmp 0x119bcfaa */
  goto L_119bcfaa;
L_119bcfe7:;
  /* 119bcfe7 pop esi */
  ESI = (pop32());
  /* 119bcfe8 mov esp, ebp */
  ESP = (EBP);
  /* 119bcfea pop ebp */
  EBP = (pop32());
  /* 119bcfeb ret  */
  ESPCHK(0x119bcf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x119bcff0 (578 bytes, 188 insns) */
void f_119bcff0(void) {
  FTRACE(0x119bcff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bcff0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bcff1 mov ebp, esp */
  EBP = (ESP);
  /* 119bcff3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bcff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bcff9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bcffb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 119bcfff and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bd005 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd00b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bd00e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd011 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd013 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 119bd017 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bd01c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119bd01f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd022 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 119bd025 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119bd028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd02b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 119bd02e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119bd031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd036 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119bd039 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119bd03c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bd03f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd046 jne 0x119bd080 */
  if (!C.zf) goto L_119bd080;
  /* 119bd048 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119bd04f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 119bd052 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd053 call 0x119bcec0 */
  push32(0x119bd058u); f_119bcec0();
  /* 119bd058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd05b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bd05d je 0x119bd068 */
  if (C.zf) goto L_119bd068;
  /* 119bd05f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119bd066 jmp 0x119bd07b */
  goto L_119bd07b;
L_119bd068:;
  /* 119bd068 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 119bd06b push edx */
  push32((uint32_t)(EDX));
  /* 119bd06c call 0x119bce90 */
  push32(0x119bd071u); f_119bce90();
  /* 119bd071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd074 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_119bd07b:;
  /* 119bd07b jmp 0x119bd1cc */
  goto L_119bd1cc;
L_119bd080:;
  /* 119bd080 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 119bd083 push eax */
  push32((uint32_t)(EAX));
  /* 119bd084 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 119bd087 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd088 call 0x119bce40 */
  push32(0x119bd08du); f_119bce40();
  /* 119bd08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd090 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd093 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bd096 push eax */
  push32((uint32_t)(EAX));
  /* 119bd097 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 119bd09a push ecx */
  push32((uint32_t)(ECX));
  /* 119bd09b call 0x119bcd60 */
  push32(0x119bd0a0u); f_119bcd60();
  /* 119bd0a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd0a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bd0a5 je 0x119bd0b0 */
  if (C.zf) goto L_119bd0b0;
  /* 119bd0a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd0aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd0ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bd0b0:;
  /* 119bd0b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd0b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd0b6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bd0b9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd0bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd0bf jge 0x119bd0e0 */
  if ((C.sf==C.of)) goto L_119bd0e0;
  /* 119bd0c1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 119bd0c4 push eax */
  push32((uint32_t)(EAX));
  /* 119bd0c5 call 0x119bce90 */
  push32(0x119bd0cau); f_119bce90();
  /* 119bd0ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd0cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119bd0d4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 119bd0db jmp 0x119bd1cc */
  goto L_119bd1cc;
L_119bd0e0:;
  /* 119bd0e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd0e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd0e6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd0e9 jg 0x119bd150 */
  if ((!C.zf&&C.sf==C.of)) goto L_119bd150;
  /* 119bd0eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd0ee mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bd0f1 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd0f4 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 119bd0f7 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 119bd0fa push edx */
  push32((uint32_t)(EDX));
  /* 119bd0fb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 119bd0fe push eax */
  push32((uint32_t)(EAX));
  /* 119bd0ff call 0x119bce40 */
  push32(0x119bd104u); f_119bce40();
  /* 119bd104 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd107 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119bd10a push ecx */
  push32((uint32_t)(ECX));
  /* 119bd10b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 119bd10e push edx */
  push32((uint32_t)(EDX));
  /* 119bd10f call 0x119bcf00 */
  push32(0x119bd114u); f_119bcf00();
  /* 119bd114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd117 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd11a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119bd11d push ecx */
  push32((uint32_t)(ECX));
  /* 119bd11e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 119bd121 push edx */
  push32((uint32_t)(EDX));
  /* 119bd122 call 0x119bcd60 */
  push32(0x119bd127u); f_119bcd60();
  /* 119bd127 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd12a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd12d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119bd130 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd133 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd134 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 119bd137 push edx */
  push32((uint32_t)(EDX));
  /* 119bd138 call 0x119bcf00 */
  push32(0x119bd13du); f_119bcf00();
  /* 119bd13d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd140 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119bd147 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 119bd14e jmp 0x119bd1cc */
  goto L_119bd1cc;
L_119bd150:;
  /* 119bd150 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd153 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd156 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd158 jl 0x119bd19b */
  if ((C.sf!=C.of)) goto L_119bd19b;
  /* 119bd15a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 119bd15d push edx */
  push32((uint32_t)(EDX));
  /* 119bd15e call 0x119bce90 */
  push32(0x119bd163u); f_119bce90();
  /* 119bd163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd166 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bd169 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bd16e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bd171 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd174 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119bd177 push edx */
  push32((uint32_t)(EDX));
  /* 119bd178 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 119bd17b push eax */
  push32((uint32_t)(EAX));
  /* 119bd17c call 0x119bcf00 */
  push32(0x119bd181u); f_119bcf00();
  /* 119bd181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd187 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bd189 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd18c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd18f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bd192 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 119bd199 jmp 0x119bd1cc */
  goto L_119bd1cc;
L_119bd19b:;
  /* 119bd19b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd19e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd1a1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd1a4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bd1a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bd1aa and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bd1af mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bd1b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd1b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119bd1b8 push edx */
  push32((uint32_t)(EDX));
  /* 119bd1b9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 119bd1bc push eax */
  push32((uint32_t)(EAX));
  /* 119bd1bd call 0x119bcf00 */
  push32(0x119bd1c2u); f_119bcf00();
  /* 119bd1c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd1c5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_119bd1cc:;
  /* 119bd1cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd1cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119bd1d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd1d5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 119bd1da sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd1dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119bd1df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd1e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bd1e5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bd1e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bd1ea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd1ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bd1ef neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bd1f1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd1f3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bd1f9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd1fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119bd1fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd201 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd205 jne 0x119bd21a */
  if (!C.zf) goto L_119bd21a;
  /* 119bd207 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd20a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bd20d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119bd210 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd213 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bd216 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119bd218 jmp 0x119bd22b */
  goto L_119bd22b;
L_119bd21a:;
  /* 119bd21a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd21d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd221 jne 0x119bd22b */
  if (!C.zf) goto L_119bd22b;
  /* 119bd223 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd226 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bd229 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_119bd22b:;
  /* 119bd22b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bd22e mov esp, ebp */
  ESP = (EBP);
  /* 119bd230 pop ebp */
  EBP = (pop32());
  /* 119bd231 ret  */
  ESPCHK(0x119bcff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x119bd240 (26 bytes, 11 insns) */
void f_119bd240(void) {
  FTRACE(0x119bd240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd240 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd241 mov ebp, esp */
  EBP = (ESP);
  /* 119bd243 push 0x119e5020 */
  push32((uint32_t)(0x119e5020u));
  /* 119bd248 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd24b push eax */
  push32((uint32_t)(EAX));
  /* 119bd24c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd24f push ecx */
  push32((uint32_t)(ECX));
  /* 119bd250 call 0x119bcff0 */
  push32(0x119bd255u); f_119bcff0();
  /* 119bd255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd258 pop ebp */
  EBP = (pop32());
  /* 119bd259 ret  */
  ESPCHK(0x119bd240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d260 @ 0x119bd260 (26 bytes, 11 insns) */
void f_119bd260(void) {
  FTRACE(0x119bd260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd260 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd261 mov ebp, esp */
  EBP = (ESP);
  /* 119bd263 push 0x119e5038 */
  push32((uint32_t)(0x119e5038u));
  /* 119bd268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd26b push eax */
  push32((uint32_t)(EAX));
  /* 119bd26c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd26f push ecx */
  push32((uint32_t)(ECX));
  /* 119bd270 call 0x119bcff0 */
  push32(0x119bd275u); f_119bcff0();
  /* 119bd275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd278 pop ebp */
  EBP = (pop32());
  /* 119bd279 ret  */
  ESPCHK(0x119bd260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x119bd280 (191 bytes, 58 insns) */
void f_119bd280(void) {
  FTRACE(0x119bd280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd280 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd281 mov ebp, esp */
  EBP = (ESP);
  /* 119bd283 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd286 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 119bd28d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd290 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bd292 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 119bd296 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bd29c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 119bd2a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd2a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd2a5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 119bd2a9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bd2ae mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 119bd2b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd2b5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 119bd2b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119bd2bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd2be mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 119bd2c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bd2c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd2c9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119bd2cc shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119bd2cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bd2d2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119bd2d4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 119bd2d7 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd2d8 call 0x119bcd60 */
  push32(0x119bd2ddu); f_119bcd60();
  /* 119bd2dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd2e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bd2e2 je 0x119bd2f7 */
  if (C.zf) goto L_119bd2f7;
  /* 119bd2e4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 119bd2eb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bd2ef add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 119bd2f3 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_119bd2f7:;
  /* 119bd2f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd2fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bd2ff cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd304 jne 0x119bd30d */
  if (!C.zf) goto L_119bd30d;
  /* 119bd306 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_119bd30d:;
  /* 119bd30d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd310 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bd313 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119bd316 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd319 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bd31c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119bd31e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bd321 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bd327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd32a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bd32f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd331 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd334 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 119bd338 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bd33b mov esp, ebp */
  ESP = (EBP);
  /* 119bd33d pop ebp */
  EBP = (pop32());
  /* 119bd33e ret  */
  ESPCHK(0x119bd280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d340 @ 0x119bd340 (54 bytes, 24 insns) */
void f_119bd340(void) {
  FTRACE(0x119bd340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd340 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd341 mov ebp, esp */
  EBP = (ESP);
  /* 119bd343 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd346 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd348 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd34a push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd34c push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd34e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd351 push eax */
  push32((uint32_t)(EAX));
  /* 119bd352 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 119bd355 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd356 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119bd359 push edx */
  push32((uint32_t)(EDX));
  /* 119bd35a call 0x119c2810 */
  push32(0x119bd35fu); f_119c2810();
  /* 119bd35f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd365 push eax */
  push32((uint32_t)(EAX));
  /* 119bd366 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 119bd369 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd36a call 0x119bd240 */
  push32(0x119bd36fu); f_119bd240();
  /* 119bd36f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd372 mov esp, ebp */
  ESP = (EBP);
  /* 119bd374 pop ebp */
  EBP = (pop32());
  /* 119bd375 ret  */
  ESPCHK(0x119bd340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d380 @ 0x119bd380 (54 bytes, 24 insns) */
void f_119bd380(void) {
  FTRACE(0x119bd380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd380 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd381 mov ebp, esp */
  EBP = (ESP);
  /* 119bd383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd386 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd388 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd38a push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd38c push 1 */
  push32((uint32_t)(0x1u));
  /* 119bd38e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd391 push eax */
  push32((uint32_t)(EAX));
  /* 119bd392 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 119bd395 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd396 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119bd399 push edx */
  push32((uint32_t)(EDX));
  /* 119bd39a call 0x119c2810 */
  push32(0x119bd39fu); f_119c2810();
  /* 119bd39f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd3a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd3a5 push eax */
  push32((uint32_t)(EAX));
  /* 119bd3a6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 119bd3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd3aa call 0x119bd280 */
  push32(0x119bd3afu); f_119bd280();
  /* 119bd3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd3b2 mov esp, ebp */
  ESP = (EBP);
  /* 119bd3b4 pop ebp */
  EBP = (pop32());
  /* 119bd3b5 ret  */
  ESPCHK(0x119bd380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x119bd3c0 (54 bytes, 24 insns) */
void f_119bd3c0(void) {
  FTRACE(0x119bd3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd3c1 mov ebp, esp */
  EBP = (ESP);
  /* 119bd3c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd3c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd3c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd3ca push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd3ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd3d1 push eax */
  push32((uint32_t)(EAX));
  /* 119bd3d2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 119bd3d5 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd3d6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119bd3d9 push edx */
  push32((uint32_t)(EDX));
  /* 119bd3da call 0x119c2810 */
  push32(0x119bd3dfu); f_119c2810();
  /* 119bd3df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd3e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd3e5 push eax */
  push32((uint32_t)(EAX));
  /* 119bd3e6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 119bd3e9 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd3ea call 0x119bd260 */
  push32(0x119bd3efu); f_119bd260();
  /* 119bd3ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd3f2 mov esp, ebp */
  ESP = (EBP);
  /* 119bd3f4 pop ebp */
  EBP = (pop32());
  /* 119bd3f5 ret  */
  ESPCHK(0x119bd3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x119bd400 (250 bytes, 90 insns) */
void f_119bd400(void) {
  FTRACE(0x119bd400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd400 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd401 mov ebp, esp */
  EBP = (ESP);
  /* 119bd403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd409 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bd40c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd40f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119bd412 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bd415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd418 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 119bd41b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd41e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd421 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119bd424:;
  /* 119bd424 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd428 jle 0x119bd46b */
  if ((C.zf||C.sf!=C.of)) goto L_119bd46b;
  /* 119bd42a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd42d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119bd430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bd432 je 0x119bd448 */
  if (C.zf) goto L_119bd448;
  /* 119bd434 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd437 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119bd43a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119bd43d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd440 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd443 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bd446 jmp 0x119bd44f */
  goto L_119bd44f;
L_119bd448:;
  /* 119bd448 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_119bd44f:;
  /* 119bd44f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd452 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 119bd455 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 119bd457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd45a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd45d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bd460 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd463 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd466 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119bd469 jmp 0x119bd424 */
  goto L_119bd424;
L_119bd46b:;
  /* 119bd46b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd46e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119bd471 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd475 jl 0x119bd4b4 */
  if ((C.sf!=C.of)) goto L_119bd4b4;
  /* 119bd477 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd47a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119bd47d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd480 jl 0x119bd4b4 */
  if ((C.sf!=C.of)) goto L_119bd4b4;
  /* 119bd482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd485 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd488 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bd48b:;
  /* 119bd48b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd48e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119bd491 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd494 jne 0x119bd4a7 */
  if (!C.zf) goto L_119bd4a7;
  /* 119bd496 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd499 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 119bd49c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd49f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd4a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bd4a5 jmp 0x119bd48b */
  goto L_119bd48b;
L_119bd4a7:;
  /* 119bd4a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd4aa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119bd4ac add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bd4af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd4b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_119bd4b4:;
  /* 119bd4b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd4b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119bd4ba cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd4bd jne 0x119bd4d0 */
  if (!C.zf) goto L_119bd4d0;
  /* 119bd4bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd4c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bd4c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd4c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd4cb mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119bd4ce jmp 0x119bd4f6 */
  goto L_119bd4f6;
L_119bd4d0:;
  /* 119bd4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd4d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd4d6 push eax */
  push32((uint32_t)(EAX));
  /* 119bd4d7 call 0x119bb040 */
  push32(0x119bd4dcu); f_119bb040();
  /* 119bd4dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd4df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd4e2 push eax */
  push32((uint32_t)(EAX));
  /* 119bd4e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd4e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd4e9 push ecx */
  push32((uint32_t)(ECX));
  /* 119bd4ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd4ed push edx */
  push32((uint32_t)(EDX));
  /* 119bd4ee call 0x119bd750 */
  push32(0x119bd4f3u); f_119bd750();
  /* 119bd4f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bd4f6:;
  /* 119bd4f6 mov esp, ebp */
  ESP = (EBP);
  /* 119bd4f8 pop ebp */
  EBP = (pop32());
  /* 119bd4f9 ret  */
  ESPCHK(0x119bd400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d500 @ 0x119bd500 (119 bytes, 44 insns) */
void f_119bd500(void) {
  FTRACE(0x119bd500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd500 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd501 mov ebp, esp */
  EBP = (ESP);
  /* 119bd503 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd506 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 119bd509 push eax */
  push32((uint32_t)(EAX));
  /* 119bd50a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 119bd50d push ecx */
  push32((uint32_t)(ECX));
  /* 119bd50e call 0x119bd580 */
  push32(0x119bd513u); f_119bd580();
  /* 119bd513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd516 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 119bd519 push edx */
  push32((uint32_t)(EDX));
  /* 119bd51a push 0 */
  push32((uint32_t)(0x0u));
  /* 119bd51c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119bd51e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd521 mov eax, esp */
  EAX = (ESP);
  /* 119bd523 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bd526 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119bd528 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd52b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119bd52e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bd532 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 119bd536 call 0x119c3390 */
  push32(0x119bd53bu); f_119c3390();
  /* 119bd53b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd53e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd541 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119bd544 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 119bd548 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd54b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119bd54d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 119bd551 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd554 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119bd557 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 119bd55a push ecx */
  push32((uint32_t)(ECX));
  /* 119bd55b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119bd55e push edx */
  push32((uint32_t)(EDX));
  /* 119bd55f call 0x119bb1c0 */
  push32(0x119bd564u); f_119bb1c0();
  /* 119bd564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd567 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd56a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119bd56d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 119bd570 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd573 mov esp, ebp */
  ESP = (EBP);
  /* 119bd575 pop ebp */
  EBP = (pop32());
  /* 119bd576 ret  */
  ESPCHK(0x119bd500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x119bd580 (354 bytes, 104 insns) */
void f_119bd580(void) {
  FTRACE(0x119bd580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd580 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd581 mov ebp, esp */
  EBP = (ESP);
  /* 119bd583 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd586 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 119bd58d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bd593 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd596 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119bd598 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 119bd59c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 119bd5a2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119bd5a5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 119bd5a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd5ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd5ae mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 119bd5b2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119bd5b7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 119bd5bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd5be mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bd5c1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bd5c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bd5ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd5cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bd5cf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119bd5d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bd5d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119bd5db mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119bd5de cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd5e2 je 0x119bd5f7 */
  if (C.zf) goto L_119bd5f7;
  /* 119bd5e4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd5eb je 0x119bd5ef */
  if (C.zf) goto L_119bd5ef;
  /* 119bd5ed jmp 0x119bd63a */
  goto L_119bd63a;
L_119bd5ef:;
  /* 119bd5ef mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 119bd5f5 jmp 0x119bd655 */
  goto L_119bd655;
L_119bd5f7:;
  /* 119bd5f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd5fb jne 0x119bd624 */
  if (!C.zf) goto L_119bd624;
  /* 119bd5fd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd601 jne 0x119bd624 */
  if (!C.zf) goto L_119bd624;
  /* 119bd603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd606 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 119bd60d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd610 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 119bd616 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd619 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 119bd61f jmp 0x119bd6de */
  goto L_119bd6de;
L_119bd624:;
  /* 119bd624 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 119bd628 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd62d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119bd631 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119bd638 jmp 0x119bd655 */
  goto L_119bd655;
L_119bd63a:;
  /* 119bd63a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 119bd63e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119bd643 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 119bd647 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 119bd64b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd651 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_119bd655:;
  /* 119bd655 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bd658 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 119bd65b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bd65e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bd660 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bd663 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 119bd666 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bd668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd66b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119bd66e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bd671 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 119bd674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd677 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119bd679:;
  /* 119bd679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd67c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bd67f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bd685 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bd687 jne 0x119bd6c4 */
  if (!C.zf) goto L_119bd6c4;
  /* 119bd689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd68c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bd68f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119bd691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd694 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bd696 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 119bd69c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bd69e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd6a0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bd6a2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd6a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd6a7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119bd6aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd6ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bd6af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119bd6b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd6b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119bd6b6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 119bd6ba sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119bd6be mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 119bd6c2 jmp 0x119bd679 */
  goto L_119bd679;
L_119bd6c4:;
  /* 119bd6c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bd6c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bd6cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bd6cf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119bd6d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd6d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd6da mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_119bd6de:;
  /* 119bd6de mov esp, ebp */
  ESP = (EBP);
  /* 119bd6e0 pop ebp */
  EBP = (pop32());
  /* 119bd6e1 ret  */
  ESPCHK(0x119bd580u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x119bd6f0 (88 bytes, 40 insns) */
void f_119bd6f0(void) {
  FTRACE(0x119bd6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd6f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 119bd6f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bd6f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bd6fa je 0x119bd743 */
  if (C.zf) goto L_119bd743;
  /* 119bd6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bd6fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 119bd702 push edi */
  push32((uint32_t)(EDI));
  /* 119bd703 mov edi, ecx */
  EDI = (ECX);
  /* 119bd705 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd708 jb 0x119bd737 */
  if (C.cf) goto L_119bd737;
  /* 119bd70a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bd70c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 119bd70f je 0x119bd719 */
  if (C.zf) goto L_119bd719;
  /* 119bd711 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_119bd713:;
  /* 119bd713 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd715 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bd716 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119bd717 jne 0x119bd713 */
  if (!C.zf) goto L_119bd713;
L_119bd719:;
  /* 119bd719 mov ecx, eax */
  ECX = (EAX);
  /* 119bd71b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119bd71e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd720 mov ecx, eax */
  ECX = (EAX);
  /* 119bd722 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119bd725 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd727 mov ecx, edx */
  ECX = (EDX);
  /* 119bd729 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119bd72c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd72f je 0x119bd737 */
  if (C.zf) goto L_119bd737;
  /* 119bd731 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119bd733 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bd735 je 0x119bd73d */
  if (C.zf) goto L_119bd73d;
L_119bd737:;
  /* 119bd737 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd739 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bd73a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 119bd73b jne 0x119bd737 */
  if (!C.zf) goto L_119bd737;
L_119bd73d:;
  /* 119bd73d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119bd741 pop edi */
  EDI = (pop32());
  /* 119bd742 ret  */
  ESPCHK(0x119bd6f0u, _esp0);
  ESP += 4; return;
L_119bd743:;
  /* 119bd743 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119bd747 ret  */
  ESPCHK(0x119bd6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d750 @ 0x119bd750 (664 bytes, 261 insns) [15 switch table(s)] */
void f_119bd750(void) {
  FTRACE(0x119bd750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bd750 push ebp */
  push32((uint32_t)(EBP));
  /* 119bd751 mov ebp, esp */
  EBP = (ESP);
  /* 119bd753 push edi */
  push32((uint32_t)(EDI));
  /* 119bd754 push esi */
  push32((uint32_t)(ESI));
  /* 119bd755 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119bd758 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bd75b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd75e mov eax, ecx */
  EAX = (ECX);
  /* 119bd760 mov edx, ecx */
  EDX = (ECX);
  /* 119bd762 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd764 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd766 jbe 0x119bd770 */
  if ((C.cf||C.zf)) goto L_119bd770;
  /* 119bd768 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd76a jb 0x119bd8e8 */
  if (C.cf) goto L_119bd8e8;
L_119bd770:;
  /* 119bd770 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119bd776 jne 0x119bd78c */
  if (!C.zf) goto L_119bd78c;
  /* 119bd778 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd77b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119bd77e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd781 jb 0x119bd7ac */
  if (C.cf) goto L_119bd7ac;
  /* 119bd783 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd785 jmp dword ptr [edx*4 + 0x119bd898] */
  switch (EDX) {
    case 0: goto L_119bd8a8;
    case 1: goto L_119bd8b0;
    case 2: goto L_119bd8bc;
    case 3: goto L_119bd8d0;
    default: x86_unimpl("switch@0x119bd785 out of table"); return;
  }
L_119bd78c:;
  /* 119bd78c mov eax, edi */
  EAX = (EDI);
  /* 119bd78e mov edx, 3 */
  EDX = (0x3u);
  /* 119bd793 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd796 jb 0x119bd7a4 */
  if (C.cf) goto L_119bd7a4;
  /* 119bd798 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119bd79b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd79d jmp dword ptr [eax*4 + 0x119bd7b0] */
  switch (EAX) {
    case 1: goto L_119bd7c0;
    case 2: goto L_119bd7ec;
    case 3: goto L_119bd810;
    default: x86_unimpl("switch@0x119bd79d out of table"); return;
  }
L_119bd7a4:;
  /* 119bd7a4 jmp dword ptr [ecx*4 + 0x119bd8a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x119bd8a8)))); return;
  /* 119bd7ab nop  */
  /* nop */
L_119bd7ac:;
  /* 119bd7ac jmp dword ptr [ecx*4 + 0x119bd82c] */
  switch (ECX) {
    case 0: goto L_119bd88f;
    case 1: goto L_119bd87c;
    case 2: goto L_119bd874;
    case 3: goto L_119bd86c;
    case 4: goto L_119bd864;
    case 5: goto L_119bd85c;
    case 6: goto L_119bd854;
    case 7: goto L_119bd84c;
    default: x86_unimpl("switch@0x119bd7ac out of table"); return;
  }
  /* 119bd7b3 nop  */
  /* nop */
L_119bd7c0:;
  /* 119bd7c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd7c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bd7c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd7c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119bd7c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119bd7cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119bd7cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd7d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119bd7d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd7d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd7db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd7de jb 0x119bd7ac */
  if (C.cf) goto L_119bd7ac;
  /* 119bd7e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd7e2 jmp dword ptr [edx*4 + 0x119bd898] */
  switch (EDX) {
    case 0: goto L_119bd8a8;
    case 1: goto L_119bd8b0;
    case 2: goto L_119bd8bc;
    case 3: goto L_119bd8d0;
    default: x86_unimpl("switch@0x119bd7e2 out of table"); return;
  }
  /* 119bd7e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119bd7ec:;
  /* 119bd7ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd7ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bd7f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd7f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119bd7f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd7f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119bd7fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd7fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd801 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd804 jb 0x119bd7ac */
  if (C.cf) goto L_119bd7ac;
  /* 119bd806 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd808 jmp dword ptr [edx*4 + 0x119bd898] */
  switch (EDX) {
    case 0: goto L_119bd8a8;
    case 1: goto L_119bd8b0;
    case 2: goto L_119bd8bc;
    case 3: goto L_119bd8d0;
    default: x86_unimpl("switch@0x119bd808 out of table"); return;
  }
  /* 119bd80f nop  */
  /* nop */
L_119bd810:;
  /* 119bd810 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd812 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bd814 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd816 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119bd817 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd81a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119bd81b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd81e jb 0x119bd7ac */
  if (C.cf) goto L_119bd7ac;
  /* 119bd820 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd822 jmp dword ptr [edx*4 + 0x119bd898] */
  switch (EDX) {
    case 0: goto L_119bd8a8;
    case 1: goto L_119bd8b0;
    case 2: goto L_119bd8bc;
    case 3: goto L_119bd8d0;
    default: x86_unimpl("switch@0x119bd822 out of table"); return;
  }
  /* 119bd829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119bd84c:;
  /* 119bd84c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 119bd850 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_119bd854:;
  /* 119bd854 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 119bd858 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_119bd85c:;
  /* 119bd85c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 119bd860 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_119bd864:;
  /* 119bd864 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 119bd868 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_119bd86c:;
  /* 119bd86c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 119bd870 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_119bd874:;
  /* 119bd874 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 119bd878 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_119bd87c:;
  /* 119bd87c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 119bd880 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 119bd884 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119bd88b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd88d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119bd88f:;
  /* 119bd88f jmp dword ptr [edx*4 + 0x119bd898] */
  switch (EDX) {
    case 0: goto L_119bd8a8;
    case 1: goto L_119bd8b0;
    case 2: goto L_119bd8bc;
    case 3: goto L_119bd8d0;
    default: x86_unimpl("switch@0x119bd88f out of table"); return;
  }
  /* 119bd896 mov edi, edi */
  EDI = (EDI);
L_119bd8a8:;
  /* 119bd8a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd8ab pop esi */
  ESI = (pop32());
  /* 119bd8ac pop edi */
  EDI = (pop32());
  /* 119bd8ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bd8ae ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bd8af nop  */
  /* nop */
L_119bd8b0:;
  /* 119bd8b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bd8b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd8b7 pop esi */
  ESI = (pop32());
  /* 119bd8b8 pop edi */
  EDI = (pop32());
  /* 119bd8b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bd8ba ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bd8bb nop  */
  /* nop */
L_119bd8bc:;
  /* 119bd8bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bd8be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd8c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119bd8c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119bd8c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd8c9 pop esi */
  ESI = (pop32());
  /* 119bd8ca pop edi */
  EDI = (pop32());
  /* 119bd8cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bd8cc ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bd8cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119bd8d0:;
  /* 119bd8d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119bd8d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119bd8d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119bd8d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119bd8da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119bd8dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119bd8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bd8e3 pop esi */
  ESI = (pop32());
  /* 119bd8e4 pop edi */
  EDI = (pop32());
  /* 119bd8e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bd8e6 ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bd8e7 nop  */
  /* nop */
L_119bd8e8:;
  /* 119bd8e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 119bd8ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 119bd8f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119bd8f6 jne 0x119bd91c */
  if (!C.zf) goto L_119bd91c;
  /* 119bd8f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd8fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119bd8fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd901 jb 0x119bd910 */
  if (C.cf) goto L_119bd910;
  /* 119bd903 std  */
  C.df=1;
  /* 119bd904 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd906 cld  */
  C.df=0;
  /* 119bd907 jmp dword ptr [edx*4 + 0x119bda30] */
  switch (EDX) {
    case 0: goto L_119bda40;
    case 1: goto L_119bda48;
    case 2: goto L_119bda58;
    case 3: goto L_119bda6c;
    default: x86_unimpl("switch@0x119bd907 out of table"); return;
  }
  /* 119bd90e mov edi, edi */
  EDI = (EDI);
L_119bd910:;
  /* 119bd910 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119bd912 jmp dword ptr [ecx*4 + 0x119bd9e0] */
  switch (ECX) {
    case 0: goto L_119bda27;
    default: x86_unimpl("switch@0x119bd912 out of table"); return;
  }
  /* 119bd919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119bd91c:;
  /* 119bd91c mov eax, edi */
  EAX = (EDI);
  /* 119bd91e mov edx, 3 */
  EDX = (0x3u);
  /* 119bd923 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd926 jb 0x119bd934 */
  if (C.cf) goto L_119bd934;
  /* 119bd928 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119bd92b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd92d jmp dword ptr [eax*4 + 0x119bd938] */
  switch (EAX) {
    case 1: goto L_119bd948;
    case 2: goto L_119bd968;
    case 3: goto L_119bd990;
    default: x86_unimpl("switch@0x119bd92d out of table"); return;
  }
L_119bd934:;
  /* 119bd934 jmp dword ptr [ecx*4 + 0x119bda30] */
  switch (ECX) {
    case 0: goto L_119bda40;
    case 1: goto L_119bda48;
    case 2: goto L_119bda58;
    case 3: goto L_119bda6c;
    default: x86_unimpl("switch@0x119bd934 out of table"); return;
  }
  /* 119bd93b nop  */
  /* nop */
L_119bd948:;
  /* 119bd948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119bd94b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd94d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119bd950 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 119bd951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd954 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119bd955 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd958 jb 0x119bd910 */
  if (C.cf) goto L_119bd910;
  /* 119bd95a std  */
  C.df=1;
  /* 119bd95b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd95d cld  */
  C.df=0;
  /* 119bd95e jmp dword ptr [edx*4 + 0x119bda30] */
  switch (EDX) {
    case 0: goto L_119bda40;
    case 1: goto L_119bda48;
    case 2: goto L_119bda58;
    case 3: goto L_119bda6c;
    default: x86_unimpl("switch@0x119bd95e out of table"); return;
  }
  /* 119bd965 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119bd968:;
  /* 119bd968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119bd96b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd96d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119bd970 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119bd973 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd976 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119bd979 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd97c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd97f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd982 jb 0x119bd910 */
  if (C.cf) goto L_119bd910;
  /* 119bd984 std  */
  C.df=1;
  /* 119bd985 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd987 cld  */
  C.df=0;
  /* 119bd988 jmp dword ptr [edx*4 + 0x119bda30] */
  switch (EDX) {
    case 0: goto L_119bda40;
    case 1: goto L_119bda48;
    case 2: goto L_119bda58;
    case 3: goto L_119bda6c;
    default: x86_unimpl("switch@0x119bd988 out of table"); return;
  }
  /* 119bd98f nop  */
  /* nop */
L_119bd990:;
  /* 119bd990 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119bd993 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119bd995 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119bd998 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119bd99b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119bd99e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119bd9a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119bd9a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119bd9a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd9aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bd9ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bd9b0 jb 0x119bd910 */
  if (C.cf) goto L_119bd910;
  /* 119bd9b6 std  */
  C.df=1;
  /* 119bd9b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119bd9b9 cld  */
  C.df=0;
  /* 119bd9ba jmp dword ptr [edx*4 + 0x119bda30] */
  switch (EDX) {
    case 0: goto L_119bda40;
    case 1: goto L_119bda48;
    case 2: goto L_119bda58;
    case 3: goto L_119bda6c;
    default: x86_unimpl("switch@0x119bd9ba out of table"); return;
  }
  /* 119bd9c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 119bd9c4 in al, 0xd9 */
  x86_unimpl("in @ 0x119bd9c4");
  /* 119bd9c6 wait  */
  /* wait (no observable integer/reg state) */
  /* 119bd9c7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd9c9 fstp dword ptr [ebx - 0x64260bef] */
  wf32((uint32_t)(EBX + -0x64260bef), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 119bd9cf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bd9d1 fstp dword ptr [ebx - 0x6425fbef] */
  wf32((uint32_t)(EBX + -0x6425fbef), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 119bd9d7 adc dword ptr [edx + ebx*8], ecx */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*8))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 119bd9da wait  */
  /* wait (no observable integer/reg state) */
  /* 119bd9db adc dword ptr [edx + ebx*8], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 119bd9de wait  */
  /* wait (no observable integer/reg state) */
  /* 119bd9e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 119bd9e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 119bd9ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 119bd9f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 119bd9f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 119bd9f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 119bd9fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 119bda00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 119bda04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 119bda08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 119bda0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 119bda10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 119bda14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 119bda18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 119bda1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119bda23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119bda25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119bda27:;
  /* 119bda27 jmp dword ptr [edx*4 + 0x119bda30] */
  switch (EDX) {
    case 0: goto L_119bda40;
    case 1: goto L_119bda48;
    case 2: goto L_119bda58;
    case 3: goto L_119bda6c;
    default: x86_unimpl("switch@0x119bda27 out of table"); return;
  }
  /* 119bda2e mov edi, edi */
  EDI = (EDI);
L_119bda40:;
  /* 119bda40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bda43 pop esi */
  ESI = (pop32());
  /* 119bda44 pop edi */
  EDI = (pop32());
  /* 119bda45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bda46 ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bda47 nop  */
  /* nop */
L_119bda48:;
  /* 119bda48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119bda4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119bda4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bda51 pop esi */
  ESI = (pop32());
  /* 119bda52 pop edi */
  EDI = (pop32());
  /* 119bda53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bda54 ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bda55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119bda58:;
  /* 119bda58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119bda5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119bda5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119bda61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119bda64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bda67 pop esi */
  ESI = (pop32());
  /* 119bda68 pop edi */
  EDI = (pop32());
  /* 119bda69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bda6a ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
  /* 119bda6b nop  */
  /* nop */
L_119bda6c:;
  /* 119bda6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119bda6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119bda72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119bda75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119bda78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119bda7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119bda7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bda81 pop esi */
  ESI = (pop32());
  /* 119bda82 pop edi */
  EDI = (pop32());
  /* 119bda83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119bda84 ret  */
  ESPCHK(0x119bd750u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x119bda90 (15 bytes, 7 insns) */
void f_119bda90(void) {
  FTRACE(0x119bda90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bda90 push ebp */
  push32((uint32_t)(EBP));
  /* 119bda91 mov ebp, esp */
  EBP = (ESP);
  /* 119bda93 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bda95 call 0x119b5860 */
  push32(0x119bda9au); f_119b5860();
  /* 119bda9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bda9d pop ebp */
  EBP = (pop32());
  /* 119bda9e ret  */
  ESPCHK(0x119bda90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x119bdaa0 (55 bytes, 16 insns) */
void f_119bdaa0(void) {
  FTRACE(0x119bdaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdaa1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdaa3 mov eax, dword ptr [0x119e5094] */
  EAX = (r32((uint32_t)(0x119e5094)));
  /* 119bdaa8 push eax */
  push32((uint32_t)(EAX));
  /* 119bdaa9 call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119bdaafu);
  /* 119bdaaf mov ecx, dword ptr [0x119e5084] */
  ECX = (r32((uint32_t)(0x119e5084)));
  /* 119bdab5 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdab6 call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119bdabcu);
  /* 119bdabc mov edx, dword ptr [0x119e5074] */
  EDX = (r32((uint32_t)(0x119e5074)));
  /* 119bdac2 push edx */
  push32((uint32_t)(EDX));
  /* 119bdac3 call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119bdac9u);
  /* 119bdac9 mov eax, dword ptr [0x119e5054] */
  EAX = (r32((uint32_t)(0x119e5054)));
  /* 119bdace push eax */
  push32((uint32_t)(EAX));
  /* 119bdacf call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119bdad5u);
  /* 119bdad5 pop ebp */
  EBP = (pop32());
  /* 119bdad6 ret  */
  ESPCHK(0x119bdaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x119bdae0 (159 bytes, 47 insns) */
void f_119bdae0(void) {
  FTRACE(0x119bdae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdae0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdae1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdae3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdae4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119bdaeb jmp 0x119bdaf6 */
  goto L_119bdaf6;
L_119bdaed:;
  /* 119bdaed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdaf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdaf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bdaf6:;
  /* 119bdaf6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdafa jge 0x119bdb49 */
  if ((C.sf==C.of)) goto L_119bdb49;
  /* 119bdafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdaff cmp dword ptr [ecx*4 + 0x119e5050], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119e5050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdb07 je 0x119bdb47 */
  if (C.zf) goto L_119bdb47;
  /* 119bdb09 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdb0d je 0x119bdb47 */
  if (C.zf) goto L_119bdb47;
  /* 119bdb0f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdb13 je 0x119bdb47 */
  if (C.zf) goto L_119bdb47;
  /* 119bdb15 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdb19 je 0x119bdb47 */
  if (C.zf) goto L_119bdb47;
  /* 119bdb1b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdb1f je 0x119bdb47 */
  if (C.zf) goto L_119bdb47;
  /* 119bdb21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdb24 mov eax, dword ptr [edx*4 + 0x119e5050] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e5050)));
  /* 119bdb2b push eax */
  push32((uint32_t)(EAX));
  /* 119bdb2c call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119bdb32u);
  /* 119bdb32 push 2 */
  push32((uint32_t)(0x2u));
  /* 119bdb34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdb37 mov edx, dword ptr [ecx*4 + 0x119e5050] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e5050)));
  /* 119bdb3e push edx */
  push32((uint32_t)(EDX));
  /* 119bdb3f call 0x119b8ca0 */
  push32(0x119bdb44u); f_119b8ca0();
  /* 119bdb44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bdb47:;
  /* 119bdb47 jmp 0x119bdaed */
  goto L_119bdaed;
L_119bdb49:;
  /* 119bdb49 mov eax, dword ptr [0x119e5074] */
  EAX = (r32((uint32_t)(0x119e5074)));
  /* 119bdb4e push eax */
  push32((uint32_t)(EAX));
  /* 119bdb4f call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119bdb55u);
  /* 119bdb55 mov ecx, dword ptr [0x119e5084] */
  ECX = (r32((uint32_t)(0x119e5084)));
  /* 119bdb5b push ecx */
  push32((uint32_t)(ECX));
  /* 119bdb5c call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119bdb62u);
  /* 119bdb62 mov edx, dword ptr [0x119e5094] */
  EDX = (r32((uint32_t)(0x119e5094)));
  /* 119bdb68 push edx */
  push32((uint32_t)(EDX));
  /* 119bdb69 call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119bdb6fu);
  /* 119bdb6f mov eax, dword ptr [0x119e5054] */
  EAX = (r32((uint32_t)(0x119e5054)));
  /* 119bdb74 push eax */
  push32((uint32_t)(EAX));
  /* 119bdb75 call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119bdb7bu);
  /* 119bdb7b mov esp, ebp */
  ESP = (EBP);
  /* 119bdb7d pop ebp */
  EBP = (pop32());
  /* 119bdb7e ret  */
  ESPCHK(0x119bdae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x119bdb80 (151 bytes, 46 insns) */
void f_119bdb80(void) {
  FTRACE(0x119bdb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdb80 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdb81 mov ebp, esp */
  EBP = (ESP);
  /* 119bdb83 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdb87 cmp dword ptr [eax*4 + 0x119e5050], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x119e5050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdb8f jne 0x119bdc02 */
  if (!C.zf) goto L_119bdc02;
  /* 119bdb91 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 119bdb96 push 0x119e21f0 */
  push32((uint32_t)(0x119e21f0u));
  /* 119bdb9b push 2 */
  push32((uint32_t)(0x2u));
  /* 119bdb9d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 119bdb9f call 0x119b8210 */
  push32(0x119bdba4u); f_119b8210();
  /* 119bdba4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdba7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bdbaa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdbae jne 0x119bdbba */
  if (!C.zf) goto L_119bdbba;
  /* 119bdbb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119bdbb2 call 0x119b5860 */
  push32(0x119bdbb7u); f_119b5860();
  /* 119bdbb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bdbba:;
  /* 119bdbba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119bdbbc call 0x119bdb80 */
  push32(0x119bdbc1u); f_119bdb80();
  /* 119bdbc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdbc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdbc7 cmp dword ptr [ecx*4 + 0x119e5050], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119e5050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdbcf jne 0x119bdbea */
  if (!C.zf) goto L_119bdbea;
  /* 119bdbd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdbd4 push edx */
  push32((uint32_t)(EDX));
  /* 119bdbd5 call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119bdbdbu);
  /* 119bdbdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdbde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdbe1 mov dword ptr [eax*4 + 0x119e5050], ecx */
  w32((uint32_t)(EAX*4 + 0x119e5050), (ECX));
  /* 119bdbe8 jmp 0x119bdbf8 */
  goto L_119bdbf8;
L_119bdbea:;
  /* 119bdbea push 2 */
  push32((uint32_t)(0x2u));
  /* 119bdbec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdbef push edx */
  push32((uint32_t)(EDX));
  /* 119bdbf0 call 0x119b8ca0 */
  push32(0x119bdbf5u); f_119b8ca0();
  /* 119bdbf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bdbf8:;
  /* 119bdbf8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119bdbfa call 0x119bdc20 */
  push32(0x119bdbffu); f_119bdc20();
  /* 119bdbff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bdc02:;
  /* 119bdc02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdc05 mov ecx, dword ptr [eax*4 + 0x119e5050] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e5050)));
  /* 119bdc0c push ecx */
  push32((uint32_t)(ECX));
  /* 119bdc0d call dword ptr [0x119e9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9368))), 0x119bdc13u);
  /* 119bdc13 mov esp, ebp */
  ESP = (EBP);
  /* 119bdc15 pop ebp */
  EBP = (pop32());
  /* 119bdc16 ret  */
  ESPCHK(0x119bdb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc20 @ 0x119bdc20 (22 bytes, 8 insns) */
void f_119bdc20(void) {
  FTRACE(0x119bdc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdc20 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdc21 mov ebp, esp */
  EBP = (ESP);
  /* 119bdc23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdc26 mov ecx, dword ptr [eax*4 + 0x119e5050] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e5050)));
  /* 119bdc2d push ecx */
  push32((uint32_t)(ECX));
  /* 119bdc2e call dword ptr [0x119e9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9364))), 0x119bdc34u);
  /* 119bdc34 pop ebp */
  EBP = (pop32());
  /* 119bdc35 ret  */
  ESPCHK(0x119bdc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc40 @ 0x119bdc40 (26 bytes, 10 insns) */
void f_119bdc40(void) {
  FTRACE(0x119bdc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdc40 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdc41 mov ebp, esp */
  EBP = (ESP);
  /* 119bdc43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdc46 push eax */
  push32((uint32_t)(EAX));
  /* 119bdc47 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bdc49 call dword ptr [0x119e935c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e935c))), 0x119bdc4fu);
  /* 119bdc4f push 0xff */
  push32((uint32_t)(0xffu));
  /* 119bdc54 call dword ptr [0x119e93e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93e0))), 0x119bdc5au);
  /* 119bdc5a pop ebp */
  EBP = (pop32());
  /* 119bdc5b ret  */
  ESPCHK(0x119bdc40u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x119bdc60 (446 bytes, 130 insns) */
void f_119bdc60(void) {
  FTRACE(0x119bdc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdc60 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdc61 mov ebp, esp */
  EBP = (ESP);
  /* 119bdc63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bdc66 call 0x119b7c50 */
  push32(0x119bdc6bu); f_119b7c50();
  /* 119bdc6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bdc6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdc71 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 119bdc74 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdc75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdc78 push edx */
  push32((uint32_t)(EDX));
  /* 119bdc79 call 0x119bde20 */
  push32(0x119bdc7eu); f_119bde20();
  /* 119bdc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdc81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bdc84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdc88 je 0x119bdc93 */
  if (C.zf) goto L_119bdc93;
  /* 119bdc8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdc8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdc91 jne 0x119bdca2 */
  if (!C.zf) goto L_119bdca2;
L_119bdc93:;
  /* 119bdc93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bdc96 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdc97 call dword ptr [0x119e9358] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9358))), 0x119bdc9du);
  /* 119bdc9d jmp 0x119bde1a */
  goto L_119bde1a;
L_119bdca2:;
  /* 119bdca2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdca5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdca9 jne 0x119bdcbf */
  if (!C.zf) goto L_119bdcbf;
  /* 119bdcab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdcae mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 119bdcb5 mov eax, 1 */
  EAX = (0x1u);
  /* 119bdcba jmp 0x119bde1a */
  goto L_119bde1a;
L_119bdcbf:;
  /* 119bdcbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdcc2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdcc6 jne 0x119bdcd0 */
  if (!C.zf) goto L_119bdcd0;
  /* 119bdcc8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bdccb jmp 0x119bde1a */
  goto L_119bde1a;
L_119bdcd0:;
  /* 119bdcd0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdcd3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bdcd6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bdcd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdcdc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 119bdcdf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119bdce2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bdce8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 119bdceb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdcee cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdcf2 jne 0x119bddf7 */
  if (!C.zf) goto L_119bddf7;
  /* 119bdcf8 mov eax, dword ptr [0x119e5188] */
  EAX = (r32((uint32_t)(0x119e5188)));
  /* 119bdcfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119bdd00 jmp 0x119bdd0b */
  goto L_119bdd0b;
L_119bdd02:;
  /* 119bdd02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bdd05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdd08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119bdd0b:;
  /* 119bdd0b mov edx, dword ptr [0x119e5188] */
  EDX = (r32((uint32_t)(0x119e5188)));
  /* 119bdd11 add edx, dword ptr [0x119e518c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e518c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdd17 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdd1a jge 0x119bdd32 */
  if ((C.sf==C.of)) goto L_119bdd32;
  /* 119bdd1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bdd1f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bdd22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdd25 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 119bdd28 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 119bdd30 jmp 0x119bdd02 */
  goto L_119bdd02;
L_119bdd32:;
  /* 119bdd32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdd35 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 119bdd38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bdd3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdd3e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdd44 jne 0x119bdd55 */
  if (!C.zf) goto L_119bdd55;
  /* 119bdd46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdd49 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 119bdd50 jmp 0x119bdddd */
  goto L_119bdddd;
L_119bdd55:;
  /* 119bdd55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdd58 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdd5e jne 0x119bdd6c */
  if (!C.zf) goto L_119bdd6c;
  /* 119bdd60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdd63 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 119bdd6a jmp 0x119bdddd */
  goto L_119bdddd;
L_119bdd6c:;
  /* 119bdd6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdd6f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdd75 jne 0x119bdd83 */
  if (!C.zf) goto L_119bdd83;
  /* 119bdd77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdd7a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 119bdd81 jmp 0x119bdddd */
  goto L_119bdddd;
L_119bdd83:;
  /* 119bdd83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdd86 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdd8c jne 0x119bdd9a */
  if (!C.zf) goto L_119bdd9a;
  /* 119bdd8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdd91 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 119bdd98 jmp 0x119bdddd */
  goto L_119bdddd;
L_119bdd9a:;
  /* 119bdd9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bdd9d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdda3 jne 0x119bddb1 */
  if (!C.zf) goto L_119bddb1;
  /* 119bdda5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdda8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 119bddaf jmp 0x119bdddd */
  goto L_119bdddd;
L_119bddb1:;
  /* 119bddb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bddb4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bddba jne 0x119bddc8 */
  if (!C.zf) goto L_119bddc8;
  /* 119bddbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bddbf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 119bddc6 jmp 0x119bdddd */
  goto L_119bdddd;
L_119bddc8:;
  /* 119bddc8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bddcb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bddd1 jne 0x119bdddd */
  if (!C.zf) goto L_119bdddd;
  /* 119bddd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bddd6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_119bdddd:;
  /* 119bdddd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bdde0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 119bdde3 push edx */
  push32((uint32_t)(EDX));
  /* 119bdde4 push 8 */
  push32((uint32_t)(0x8u));
  /* 119bdde6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x119bdde9u);
  /* 119bdde9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bddec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bddef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bddf2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 119bddf5 jmp 0x119bde0e */
  goto L_119bde0e;
L_119bddf7:;
  /* 119bddf7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bddfa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 119bde01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bde04 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bde07 push ecx */
  push32((uint32_t)(ECX));
  /* 119bde08 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x119bde0bu);
  /* 119bde0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119bde0e:;
  /* 119bde0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bde11 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bde14 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 119bde17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119bde1a:;
  /* 119bde1a mov esp, ebp */
  ESP = (EBP);
  /* 119bde1c pop ebp */
  EBP = (pop32());
  /* 119bde1d ret  */
  ESPCHK(0x119bdc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x119bde20 (89 bytes, 35 insns) */
void f_119bde20(void) {
  FTRACE(0x119bde20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bde20 push ebp */
  push32((uint32_t)(EBP));
  /* 119bde21 mov ebp, esp */
  EBP = (ESP);
  /* 119bde23 push ecx */
  push32((uint32_t)(ECX));
  /* 119bde24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bde27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119bde2a:;
  /* 119bde2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bde2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bde2f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bde32 je 0x119bde52 */
  if (C.zf) goto L_119bde52;
  /* 119bde34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bde37 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bde3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bde3d mov ecx, dword ptr [0x119e5194] */
  ECX = (r32((uint32_t)(0x119e5194)));
  /* 119bde43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bde46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bde49 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bde4b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bde4e jae 0x119bde52 */
  if (!C.cf) goto L_119bde52;
  /* 119bde50 jmp 0x119bde2a */
  goto L_119bde2a;
L_119bde52:;
  /* 119bde52 mov eax, dword ptr [0x119e5194] */
  EAX = (r32((uint32_t)(0x119e5194)));
  /* 119bde57 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bde5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bde5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bde5f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bde62 jae 0x119bde6e */
  if (!C.cf) goto L_119bde6e;
  /* 119bde64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bde67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bde69 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bde6c je 0x119bde72 */
  if (C.zf) goto L_119bde72;
L_119bde6e:;
  /* 119bde6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bde70 jmp 0x119bde75 */
  goto L_119bde75;
L_119bde72:;
  /* 119bde72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119bde75:;
  /* 119bde75 mov esp, ebp */
  ESP = (EBP);
  /* 119bde77 pop ebp */
  EBP = (pop32());
  /* 119bde78 ret  */
  ESPCHK(0x119bde20u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x119bde80 (48 bytes, 17 insns) */
void f_119bde80(void) {
  FTRACE(0x119bde80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bde80 push ebp */
  push32((uint32_t)(EBP));
  /* 119bde81 mov ebp, esp */
  EBP = (ESP);
  /* 119bde83 push ecx */
  push32((uint32_t)(ECX));
  /* 119bde84 push 9 */
  push32((uint32_t)(0x9u));
  /* 119bde86 call 0x119bdb80 */
  push32(0x119bde8bu); f_119bdb80();
  /* 119bde8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bde8e mov eax, dword ptr [0x119e72fc] */
  EAX = (r32((uint32_t)(0x119e72fc)));
  /* 119bde93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bde96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bde99 mov dword ptr [0x119e72fc], ecx */
  w32((uint32_t)(0x119e72fc), (ECX));
  /* 119bde9f push 9 */
  push32((uint32_t)(0x9u));
  /* 119bdea1 call 0x119bdc20 */
  push32(0x119bdea6u); f_119bdc20();
  /* 119bdea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdeac mov esp, ebp */
  ESP = (EBP);
  /* 119bdeae pop ebp */
  EBP = (pop32());
  /* 119bdeaf ret  */
  ESPCHK(0x119bde80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x119bdeb0 (10 bytes, 5 insns) */
void f_119bdeb0(void) {
  FTRACE(0x119bdeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdeb1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdeb3 mov eax, dword ptr [0x119e72fc] */
  EAX = (r32((uint32_t)(0x119e72fc)));
  /* 119bdeb8 pop ebp */
  EBP = (pop32());
  /* 119bdeb9 ret  */
  ESPCHK(0x119bdeb0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x119bdec0 (45 bytes, 19 insns) */
void f_119bdec0(void) {
  FTRACE(0x119bdec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdec0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdec1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdec3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdec4 mov eax, dword ptr [0x119e72fc] */
  EAX = (r32((uint32_t)(0x119e72fc)));
  /* 119bdec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bdecc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bded0 je 0x119bdee0 */
  if (C.zf) goto L_119bdee0;
  /* 119bded2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bded5 push ecx */
  push32((uint32_t)(ECX));
  /* 119bded6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x119bded9u);
  /* 119bded9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdedc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bdede jne 0x119bdee4 */
  if (!C.zf) goto L_119bdee4;
L_119bdee0:;
  /* 119bdee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bdee2 jmp 0x119bdee9 */
  goto L_119bdee9;
L_119bdee4:;
  /* 119bdee4 mov eax, 1 */
  EAX = (0x1u);
L_119bdee9:;
  /* 119bdee9 mov esp, ebp */
  ESP = (EBP);
  /* 119bdeeb pop ebp */
  EBP = (pop32());
  /* 119bdeec ret  */
  ESPCHK(0x119bdec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000def0 @ 0x119bdef0 (23 bytes, 10 insns) */
void f_119bdef0(void) {
  FTRACE(0x119bdef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdef0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdef1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdef3 mov eax, dword ptr [0x119e72f8] */
  EAX = (r32((uint32_t)(0x119e72f8)));
  /* 119bdef8 push eax */
  push32((uint32_t)(EAX));
  /* 119bdef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdefc push ecx */
  push32((uint32_t)(ECX));
  /* 119bdefd call 0x119bdf10 */
  push32(0x119bdf02u); f_119bdf10();
  /* 119bdf02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdf05 pop ebp */
  EBP = (pop32());
  /* 119bdf06 ret  */
  ESPCHK(0x119bdef0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x119bdf10 (87 bytes, 34 insns) */
void f_119bdf10(void) {
  FTRACE(0x119bdf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdf10 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdf11 mov ebp, esp */
  EBP = (ESP);
  /* 119bdf13 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdf14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdf18 jbe 0x119bdf1e */
  if ((C.cf||C.zf)) goto L_119bdf1e;
  /* 119bdf1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bdf1c jmp 0x119bdf63 */
  goto L_119bdf63;
L_119bdf1e:;
  /* 119bdf1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdf22 ja 0x119bdf35 */
  if ((!C.cf&&!C.zf)) goto L_119bdf35;
  /* 119bdf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdf27 push eax */
  push32((uint32_t)(EAX));
  /* 119bdf28 call 0x119bdf70 */
  push32(0x119bdf2du); f_119bdf70();
  /* 119bdf2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdf30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bdf33 jmp 0x119bdf3c */
  goto L_119bdf3c;
L_119bdf35:;
  /* 119bdf35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119bdf3c:;
  /* 119bdf3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdf40 jne 0x119bdf48 */
  if (!C.zf) goto L_119bdf48;
  /* 119bdf42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdf46 jne 0x119bdf4d */
  if (!C.zf) goto L_119bdf4d;
L_119bdf48:;
  /* 119bdf48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdf4b jmp 0x119bdf63 */
  goto L_119bdf63;
L_119bdf4d:;
  /* 119bdf4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdf50 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdf51 call 0x119bdec0 */
  push32(0x119bdf56u); f_119bdec0();
  /* 119bdf56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdf59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bdf5b jne 0x119bdf61 */
  if (!C.zf) goto L_119bdf61;
  /* 119bdf5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bdf5f jmp 0x119bdf63 */
  goto L_119bdf63;
L_119bdf61:;
  /* 119bdf61 jmp 0x119bdf1e */
  goto L_119bdf1e;
L_119bdf63:;
  /* 119bdf63 mov esp, ebp */
  ESP = (EBP);
  /* 119bdf65 pop ebp */
  EBP = (pop32());
  /* 119bdf66 ret  */
  ESPCHK(0x119bdf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x119bdf70 (109 bytes, 37 insns) */
void f_119bdf70(void) {
  FTRACE(0x119bdf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdf70 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdf71 mov ebp, esp */
  EBP = (ESP);
  /* 119bdf73 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdf74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdf77 cmp eax, dword ptr [0x119e519c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e519c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdf7d ja 0x119bdfad */
  if ((!C.cf&&!C.zf)) goto L_119bdfad;
  /* 119bdf7f push 9 */
  push32((uint32_t)(0x9u));
  /* 119bdf81 call 0x119bdb80 */
  push32(0x119bdf86u); f_119bdb80();
  /* 119bdf86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdf89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdf8c push ecx */
  push32((uint32_t)(ECX));
  /* 119bdf8d call 0x119beab0 */
  push32(0x119bdf92u); f_119beab0();
  /* 119bdf92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdf95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bdf98 push 9 */
  push32((uint32_t)(0x9u));
  /* 119bdf9a call 0x119bdc20 */
  push32(0x119bdf9fu); f_119bdc20();
  /* 119bdf9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdfa2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdfa6 je 0x119bdfad */
  if (C.zf) goto L_119bdfad;
  /* 119bdfa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bdfab jmp 0x119bdfd9 */
  goto L_119bdfd9;
L_119bdfad:;
  /* 119bdfad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdfb1 jne 0x119bdfba */
  if (!C.zf) goto L_119bdfba;
  /* 119bdfb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_119bdfba:;
  /* 119bdfba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdfbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bdfc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 119bdfc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119bdfc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bdfc9 push eax */
  push32((uint32_t)(EAX));
  /* 119bdfca push 0 */
  push32((uint32_t)(0x0u));
  /* 119bdfcc mov ecx, dword ptr [0x119e8ac4] */
  ECX = (r32((uint32_t)(0x119e8ac4)));
  /* 119bdfd2 push ecx */
  push32((uint32_t)(ECX));
  /* 119bdfd3 call dword ptr [0x119e9354] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9354))), 0x119bdfd9u);
L_119bdfd9:;
  /* 119bdfd9 mov esp, ebp */
  ESP = (EBP);
  /* 119bdfdb pop ebp */
  EBP = (pop32());
  /* 119bdfdc ret  */
  ESPCHK(0x119bdf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x119bdfe0 (10 bytes, 5 insns) */
void f_119bdfe0(void) {
  FTRACE(0x119bdfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdfe1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdfe3 mov eax, 1 */
  EAX = (0x1u);
  /* 119bdfe8 pop ebp */
  EBP = (pop32());
  /* 119bdfe9 ret  */
  ESPCHK(0x119bdfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dff0 @ 0x119bdff0 (173 bytes, 59 insns) */
void f_119bdff0(void) {
  FTRACE(0x119bdff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bdff0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bdff1 mov ebp, esp */
  EBP = (ESP);
  /* 119bdff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bdff6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bdffa jbe 0x119be003 */
  if ((C.cf||C.zf)) goto L_119be003;
  /* 119bdffc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bdffe jmp 0x119be099 */
  goto L_119be099;
L_119be003:;
  /* 119be003 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be005 call 0x119bdb80 */
  push32(0x119be00au); f_119bdb80();
  /* 119be00a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be00d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be010 push eax */
  push32((uint32_t)(EAX));
  /* 119be011 call 0x119be420 */
  push32(0x119be016u); f_119be420();
  /* 119be016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be019 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119be01c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be020 je 0x119be061 */
  if (C.zf) goto L_119be061;
  /* 119be022 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119be029 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be02c cmp ecx, dword ptr [0x119e519c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e519c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be032 ja 0x119be052 */
  if ((!C.cf&&!C.zf)) goto L_119be052;
  /* 119be034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be037 push edx */
  push32((uint32_t)(EDX));
  /* 119be038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be03b push eax */
  push32((uint32_t)(EAX));
  /* 119be03c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be03f push ecx */
  push32((uint32_t)(ECX));
  /* 119be040 call 0x119bf2f0 */
  push32(0x119be045u); f_119bf2f0();
  /* 119be045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119be04a je 0x119be052 */
  if (C.zf) goto L_119be052;
  /* 119be04c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be04f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119be052:;
  /* 119be052 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be054 call 0x119bdc20 */
  push32(0x119be059u); f_119bdc20();
  /* 119be059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be05c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be05f jmp 0x119be099 */
  goto L_119be099;
L_119be061:;
  /* 119be061 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be063 call 0x119bdc20 */
  push32(0x119be068u); f_119bdc20();
  /* 119be068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be06b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be06f jne 0x119be078 */
  if (!C.zf) goto L_119be078;
  /* 119be071 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_119be078:;
  /* 119be078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be07b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be07e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 119be080 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119be083 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be086 push ecx */
  push32((uint32_t)(ECX));
  /* 119be087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be08a push edx */
  push32((uint32_t)(EDX));
  /* 119be08b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 119be08d mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119be092 push eax */
  push32((uint32_t)(EAX));
  /* 119be093 call dword ptr [0x119e9350] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9350))), 0x119be099u);
L_119be099:;
  /* 119be099 mov esp, ebp */
  ESP = (EBP);
  /* 119be09b pop ebp */
  EBP = (pop32());
  /* 119be09c ret  */
  ESPCHK(0x119bdff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x119be0a0 (490 bytes, 165 insns) */
void f_119be0a0(void) {
  FTRACE(0x119be0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119be0a1 mov ebp, esp */
  EBP = (ESP);
  /* 119be0a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be0a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be0aa jne 0x119be0bd */
  if (!C.zf) goto L_119be0bd;
  /* 119be0ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be0af push eax */
  push32((uint32_t)(EAX));
  /* 119be0b0 call 0x119bdef0 */
  push32(0x119be0b5u); f_119bdef0();
  /* 119be0b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be0b8 jmp 0x119be286 */
  goto L_119be286;
L_119be0bd:;
  /* 119be0bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be0c1 jne 0x119be0d6 */
  if (!C.zf) goto L_119be0d6;
  /* 119be0c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be0c6 push ecx */
  push32((uint32_t)(ECX));
  /* 119be0c7 call 0x119be290 */
  push32(0x119be0ccu); f_119be290();
  /* 119be0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be0cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119be0d1 jmp 0x119be286 */
  goto L_119be286;
L_119be0d6:;
  /* 119be0d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119be0dd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be0e1 ja 0x119be259 */
  if ((!C.cf&&!C.zf)) goto L_119be259;
  /* 119be0e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be0e9 call 0x119bdb80 */
  push32(0x119be0eeu); f_119bdb80();
  /* 119be0ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be0f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be0f4 push edx */
  push32((uint32_t)(EDX));
  /* 119be0f5 call 0x119be420 */
  push32(0x119be0fau); f_119be420();
  /* 119be0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be0fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119be100 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be104 je 0x119be21c */
  if (C.zf) goto L_119be21c;
  /* 119be10a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be10d cmp eax, dword ptr [0x119e519c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e519c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be113 ja 0x119be190 */
  if ((!C.cf&&!C.zf)) goto L_119be190;
  /* 119be115 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be118 push ecx */
  push32((uint32_t)(ECX));
  /* 119be119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be11c push edx */
  push32((uint32_t)(EDX));
  /* 119be11d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be120 push eax */
  push32((uint32_t)(EAX));
  /* 119be121 call 0x119bf2f0 */
  push32(0x119be126u); f_119bf2f0();
  /* 119be126 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119be12b je 0x119be135 */
  if (C.zf) goto L_119be135;
  /* 119be12d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be130 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119be133 jmp 0x119be190 */
  goto L_119be190;
L_119be135:;
  /* 119be135 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be138 push edx */
  push32((uint32_t)(EDX));
  /* 119be139 call 0x119beab0 */
  push32(0x119be13eu); f_119beab0();
  /* 119be13e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be141 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119be144 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be148 je 0x119be190 */
  if (C.zf) goto L_119be190;
  /* 119be14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be14d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 119be150 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be153 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119be156 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be159 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be15c jae 0x119be166 */
  if (!C.cf) goto L_119be166;
  /* 119be15e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be161 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119be164 jmp 0x119be16c */
  goto L_119be16c;
L_119be166:;
  /* 119be166 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be169 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119be16c:;
  /* 119be16c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119be16f push edx */
  push32((uint32_t)(EDX));
  /* 119be170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be173 push eax */
  push32((uint32_t)(EAX));
  /* 119be174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be177 push ecx */
  push32((uint32_t)(ECX));
  /* 119be178 call 0x119c0840 */
  push32(0x119be17du); f_119c0840();
  /* 119be17d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be180 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be183 push edx */
  push32((uint32_t)(EDX));
  /* 119be184 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be187 push eax */
  push32((uint32_t)(EAX));
  /* 119be188 call 0x119be4e0 */
  push32(0x119be18du); f_119be4e0();
  /* 119be18d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119be190:;
  /* 119be190 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be194 jne 0x119be210 */
  if (!C.zf) goto L_119be210;
  /* 119be196 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be19a jne 0x119be1a3 */
  if (!C.zf) goto L_119be1a3;
  /* 119be19c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_119be1a3:;
  /* 119be1a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be1a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be1a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 119be1ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119be1af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be1b2 push edx */
  push32((uint32_t)(EDX));
  /* 119be1b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119be1b5 mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119be1ba push eax */
  push32((uint32_t)(EAX));
  /* 119be1bb call dword ptr [0x119e9354] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9354))), 0x119be1c1u);
  /* 119be1c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119be1c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be1c8 je 0x119be210 */
  if (C.zf) goto L_119be210;
  /* 119be1ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be1cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 119be1d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be1d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119be1d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be1d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be1dc jae 0x119be1e6 */
  if (!C.cf) goto L_119be1e6;
  /* 119be1de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be1e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119be1e4 jmp 0x119be1ec */
  goto L_119be1ec;
L_119be1e6:;
  /* 119be1e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be1e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_119be1ec:;
  /* 119be1ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119be1ef push eax */
  push32((uint32_t)(EAX));
  /* 119be1f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119be1f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be1f7 push edx */
  push32((uint32_t)(EDX));
  /* 119be1f8 call 0x119c0840 */
  push32(0x119be1fdu); f_119c0840();
  /* 119be1fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be203 push eax */
  push32((uint32_t)(EAX));
  /* 119be204 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be207 push ecx */
  push32((uint32_t)(ECX));
  /* 119be208 call 0x119be4e0 */
  push32(0x119be20du); f_119be4e0();
  /* 119be20d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119be210:;
  /* 119be210 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be212 call 0x119bdc20 */
  push32(0x119be217u); f_119bdc20();
  /* 119be217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be21a jmp 0x119be259 */
  goto L_119be259;
L_119be21c:;
  /* 119be21c push 9 */
  push32((uint32_t)(0x9u));
  /* 119be21e call 0x119bdc20 */
  push32(0x119be223u); f_119bdc20();
  /* 119be223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be226 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be22a jne 0x119be233 */
  if (!C.zf) goto L_119be233;
  /* 119be22c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_119be233:;
  /* 119be233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be236 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be239 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 119be23c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 119be23f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be242 push eax */
  push32((uint32_t)(EAX));
  /* 119be243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be246 push ecx */
  push32((uint32_t)(ECX));
  /* 119be247 push 0 */
  push32((uint32_t)(0x0u));
  /* 119be249 mov edx, dword ptr [0x119e8ac4] */
  EDX = (r32((uint32_t)(0x119e8ac4)));
  /* 119be24f push edx */
  push32((uint32_t)(EDX));
  /* 119be250 call dword ptr [0x119e9350] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9350))), 0x119be256u);
  /* 119be256 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119be259:;
  /* 119be259 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be25d jne 0x119be268 */
  if (!C.zf) goto L_119be268;
  /* 119be25f cmp dword ptr [0x119e72f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e72f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be266 jne 0x119be26d */
  if (!C.zf) goto L_119be26d;
L_119be268:;
  /* 119be268 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be26b jmp 0x119be286 */
  goto L_119be286;
L_119be26d:;
  /* 119be26d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be270 push eax */
  push32((uint32_t)(EAX));
  /* 119be271 call 0x119bdec0 */
  push32(0x119be276u); f_119bdec0();
  /* 119be276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119be27b jne 0x119be281 */
  if (!C.zf) goto L_119be281;
  /* 119be27d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119be27f jmp 0x119be286 */
  goto L_119be286;
L_119be281:;
  /* 119be281 jmp 0x119be0d6 */
  goto L_119be0d6;
L_119be286:;
  /* 119be286 mov esp, ebp */
  ESP = (EBP);
  /* 119be288 pop ebp */
  EBP = (pop32());
  /* 119be289 ret  */
  ESPCHK(0x119be0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x119be290 (104 bytes, 38 insns) */
void f_119be290(void) {
  FTRACE(0x119be290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be290 push ebp */
  push32((uint32_t)(EBP));
  /* 119be291 mov ebp, esp */
  EBP = (ESP);
  /* 119be293 push ecx */
  push32((uint32_t)(ECX));
  /* 119be294 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be298 jne 0x119be29c */
  if (!C.zf) goto L_119be29c;
  /* 119be29a jmp 0x119be2f4 */
  goto L_119be2f4;
L_119be29c:;
  /* 119be29c push 9 */
  push32((uint32_t)(0x9u));
  /* 119be29e call 0x119bdb80 */
  push32(0x119be2a3u); f_119bdb80();
  /* 119be2a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be2a9 push eax */
  push32((uint32_t)(EAX));
  /* 119be2aa call 0x119be420 */
  push32(0x119be2afu); f_119be420();
  /* 119be2af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be2b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119be2b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be2b9 je 0x119be2d7 */
  if (C.zf) goto L_119be2d7;
  /* 119be2bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be2be push ecx */
  push32((uint32_t)(ECX));
  /* 119be2bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be2c2 push edx */
  push32((uint32_t)(EDX));
  /* 119be2c3 call 0x119be4e0 */
  push32(0x119be2c8u); f_119be4e0();
  /* 119be2c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be2cb push 9 */
  push32((uint32_t)(0x9u));
  /* 119be2cd call 0x119bdc20 */
  push32(0x119be2d2u); f_119bdc20();
  /* 119be2d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be2d5 jmp 0x119be2f4 */
  goto L_119be2f4;
L_119be2d7:;
  /* 119be2d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be2d9 call 0x119bdc20 */
  push32(0x119be2deu); f_119bdc20();
  /* 119be2de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be2e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be2e4 push eax */
  push32((uint32_t)(EAX));
  /* 119be2e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119be2e7 mov ecx, dword ptr [0x119e8ac4] */
  ECX = (r32((uint32_t)(0x119e8ac4)));
  /* 119be2ed push ecx */
  push32((uint32_t)(ECX));
  /* 119be2ee call dword ptr [0x119e9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9378))), 0x119be2f4u);
L_119be2f4:;
  /* 119be2f4 mov esp, ebp */
  ESP = (EBP);
  /* 119be2f6 pop ebp */
  EBP = (pop32());
  /* 119be2f7 ret  */
  ESPCHK(0x119be290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e300 @ 0x119be300 (116 bytes, 34 insns) */
void f_119be300(void) {
  FTRACE(0x119be300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be300 push ebp */
  push32((uint32_t)(EBP));
  /* 119be301 mov ebp, esp */
  EBP = (ESP);
  /* 119be303 push ecx */
  push32((uint32_t)(ECX));
  /* 119be304 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 119be30b push 9 */
  push32((uint32_t)(0x9u));
  /* 119be30d call 0x119bdb80 */
  push32(0x119be312u); f_119bdb80();
  /* 119be312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be315 call 0x119bfa10 */
  push32(0x119be31au); f_119bfa10();
  /* 119be31a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119be31c jge 0x119be325 */
  if ((C.sf==C.of)) goto L_119be325;
  /* 119be31e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_119be325:;
  /* 119be325 push 9 */
  push32((uint32_t)(0x9u));
  /* 119be327 call 0x119bdc20 */
  push32(0x119be32cu); f_119bdc20();
  /* 119be32c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119be32f push 0 */
  push32((uint32_t)(0x0u));
  /* 119be331 push 0 */
  push32((uint32_t)(0x0u));
  /* 119be333 mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119be338 push eax */
  push32((uint32_t)(EAX));
  /* 119be339 call dword ptr [0x119e9398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9398))), 0x119be33fu);
  /* 119be33f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119be341 jne 0x119be36d */
  if (!C.zf) goto L_119be36d;
  /* 119be343 call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119be349u);
  /* 119be349 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be34c jne 0x119be366 */
  if (!C.zf) goto L_119be366;
  /* 119be34e call 0x119c0c30 */
  push32(0x119be353u); f_119c0c30();
  /* 119be353 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 119be359 call 0x119c0c20 */
  push32(0x119be35eu); f_119c0c20();
  /* 119be35e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 119be364 jmp 0x119be36d */
  goto L_119be36d;
L_119be366:;
  /* 119be366 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_119be36d:;
  /* 119be36d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be370 mov esp, ebp */
  ESP = (EBP);
  /* 119be372 pop ebp */
  EBP = (pop32());
  /* 119be373 ret  */
  ESPCHK(0x119be300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x119be380 (10 bytes, 5 insns) */
void f_119be380(void) {
  FTRACE(0x119be380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be380 push ebp */
  push32((uint32_t)(EBP));
  /* 119be381 mov ebp, esp */
  EBP = (ESP);
  /* 119be383 call 0x119be300 */
  push32(0x119be388u); f_119be300();
  /* 119be388 pop ebp */
  EBP = (pop32());
  /* 119be389 ret  */
  ESPCHK(0x119be380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x119be390 (10 bytes, 5 insns) */
void f_119be390(void) {
  FTRACE(0x119be390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be390 push ebp */
  push32((uint32_t)(EBP));
  /* 119be391 mov ebp, esp */
  EBP = (ESP);
  /* 119be393 mov eax, dword ptr [0x119e519c] */
  EAX = (r32((uint32_t)(0x119e519c)));
  /* 119be398 pop ebp */
  EBP = (pop32());
  /* 119be399 ret  */
  ESPCHK(0x119be390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x119be3a0 (31 bytes, 11 insns) */
void f_119be3a0(void) {
  FTRACE(0x119be3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119be3a1 mov ebp, esp */
  EBP = (ESP);
  /* 119be3a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be3aa jbe 0x119be3b0 */
  if ((C.cf||C.zf)) goto L_119be3b0;
  /* 119be3ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119be3ae jmp 0x119be3bd */
  goto L_119be3bd;
L_119be3b0:;
  /* 119be3b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be3b3 mov dword ptr [0x119e519c], eax */
  w32((uint32_t)(0x119e519c), (EAX));
  /* 119be3b8 mov eax, 1 */
  EAX = (0x1u);
L_119be3bd:;
  /* 119be3bd pop ebp */
  EBP = (pop32());
  /* 119be3be ret  */
  ESPCHK(0x119be3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x119be3c0 (89 bytes, 20 insns) */
void f_119be3c0(void) {
  FTRACE(0x119be3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119be3c1 mov ebp, esp */
  EBP = (ESP);
  /* 119be3c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 119be3c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119be3ca mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119be3cf push eax */
  push32((uint32_t)(EAX));
  /* 119be3d0 call dword ptr [0x119e9354] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9354))), 0x119be3d6u);
  /* 119be3d6 mov dword ptr [0x119e7768], eax */
  w32((uint32_t)(0x119e7768), (EAX));
  /* 119be3db cmp dword ptr [0x119e7768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be3e2 jne 0x119be3e8 */
  if (!C.zf) goto L_119be3e8;
  /* 119be3e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119be3e6 jmp 0x119be417 */
  goto L_119be417;
L_119be3e8:;
  /* 119be3e8 mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119be3ee mov dword ptr [0x119e775c], ecx */
  w32((uint32_t)(0x119e775c), (ECX));
  /* 119be3f4 mov dword ptr [0x119e7760], 0 */
  w32((uint32_t)(0x119e7760), (0x0u));
  /* 119be3fe mov dword ptr [0x119e7764], 0 */
  w32((uint32_t)(0x119e7764), (0x0u));
  /* 119be408 mov dword ptr [0x119e7748], 0x10 */
  w32((uint32_t)(0x119e7748), (0x10u));
  /* 119be412 mov eax, 1 */
  EAX = (0x1u);
L_119be417:;
  /* 119be417 pop ebp */
  EBP = (pop32());
  /* 119be418 ret  */
  ESPCHK(0x119be3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x119be420 (85 bytes, 29 insns) */
void f_119be420(void) {
  FTRACE(0x119be420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be420 push ebp */
  push32((uint32_t)(EBP));
  /* 119be421 mov ebp, esp */
  EBP = (ESP);
  /* 119be423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be426 mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119be42b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119be42e mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119be434 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be436 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119be439 mov edx, dword ptr [0x119e7768] */
  EDX = (r32((uint32_t)(0x119e7768)));
  /* 119be43f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119be442:;
  /* 119be442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be445 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be448 jae 0x119be46f */
  if (!C.cf) goto L_119be46f;
  /* 119be44a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be44d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be450 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be453 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119be456 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be45d jae 0x119be464 */
  if (!C.cf) goto L_119be464;
  /* 119be45f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be462 jmp 0x119be471 */
  goto L_119be471;
L_119be464:;
  /* 119be464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be467 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be46a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119be46d jmp 0x119be442 */
  goto L_119be442;
L_119be46f:;
  /* 119be46f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119be471:;
  /* 119be471 mov esp, ebp */
  ESP = (EBP);
  /* 119be473 pop ebp */
  EBP = (pop32());
  /* 119be474 ret  */
  ESPCHK(0x119be420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x119be480 (95 bytes, 33 insns) */
void f_119be480(void) {
  FTRACE(0x119be480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be480 push ebp */
  push32((uint32_t)(EBP));
  /* 119be481 mov ebp, esp */
  EBP = (ESP);
  /* 119be483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be489 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be48c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be48f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119be492 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be495 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 119be498 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119be49b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be4a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be4a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be4a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be4a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119be4ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119be4ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119be4af jne 0x119be4d1 */
  if (!C.zf) goto L_119be4d1;
  /* 119be4b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be4b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 119be4b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119be4b9 jne 0x119be4d1 */
  if (!C.zf) goto L_119be4d1;
  /* 119be4bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be4be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 119be4c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be4c6 je 0x119be4d1 */
  if (C.zf) goto L_119be4d1;
  /* 119be4c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 119be4cf jmp 0x119be4d8 */
  goto L_119be4d8;
L_119be4d1:;
  /* 119be4d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_119be4d8:;
  /* 119be4d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be4db mov esp, ebp */
  ESP = (EBP);
  /* 119be4dd pop ebp */
  EBP = (pop32());
  /* 119be4de ret  */
  ESPCHK(0x119be480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4e0 @ 0x119be4e0 (1485 bytes, 453 insns) */
void f_119be4e0(void) {
  FTRACE(0x119be4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119be4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119be4e1 mov ebp, esp */
  EBP = (ESP);
  /* 119be4e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be4e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119be4ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 119be4ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be4f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be4f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be4f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119be4fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119be4fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 119be501 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119be504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be507 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119be50d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be510 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 119be517 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119be51a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119be51d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be520 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119be523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be526 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119be528 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be52b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 119be52e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be531 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be534 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 119be537 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be53a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119be53c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119be53f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be542 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 119be545 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119be548 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119be54b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119be54e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be550 jne 0x119be678 */
  if (!C.zf) goto L_119be678;
  /* 119be556 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119be559 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 119be55c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be55f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119be562 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be566 jbe 0x119be56f */
  if ((C.cf||C.zf)) goto L_119be56f;
  /* 119be568 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_119be56f:;
  /* 119be56f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be572 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be575 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 119be578 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be57b jne 0x119be651 */
  if (!C.zf) goto L_119be651;
  /* 119be581 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be585 jae 0x119be5e6 */
  if (!C.cf) goto L_119be5e6;
  /* 119be587 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be58c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119be58f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be591 not eax */
  EAX = (~(EAX));
  /* 119be593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be596 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be599 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 119be59d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119be59f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be5a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be5a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 119be5a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be5ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be5af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 119be5b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119be5b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be5b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be5bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 119be5be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be5c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be5c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119be5c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119be5ca jne 0x119be5e4 */
  if (!C.zf) goto L_119be5e4;
  /* 119be5cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be5d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119be5d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be5d6 not eax */
  EAX = (~(EAX));
  /* 119be5d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be5db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119be5dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119be5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be5e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119be5e4:;
  /* 119be5e4 jmp 0x119be651 */
  goto L_119be651;
L_119be5e6:;
  /* 119be5e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119be5e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be5ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be5f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be5f3 not edx */
  EDX = (~(EDX));
  /* 119be5f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be5f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be5fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 119be602 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119be604 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be607 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be60a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 119be611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be614 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be617 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119be61a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119be61d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be620 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be623 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 119be626 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be629 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be62c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119be630 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be632 jne 0x119be651 */
  if (!C.zf) goto L_119be651;
  /* 119be634 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119be637 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be63a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be63f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be641 not edx */
  EDX = (~(EDX));
  /* 119be643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be646 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119be649 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119be64b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be64e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_119be651:;
  /* 119be651 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be654 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119be657 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be65a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119be65d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119be660 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be663 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119be666 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119be669 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119be66c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119be66f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119be672 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be675 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_119be678:;
  /* 119be678 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119be67b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119be67e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be681 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119be684 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be688 jbe 0x119be691 */
  if ((C.cf||C.zf)) goto L_119be691;
  /* 119be68a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_119be691:;
  /* 119be691 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be694 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119be697 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be699 jne 0x119be7f5 */
  if (!C.zf) goto L_119be7f5;
  /* 119be69f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be6a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be6a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 119be6a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be6ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119be6ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be6b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 119be6b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be6b8 jbe 0x119be6c1 */
  if ((C.cf||C.zf)) goto L_119be6c1;
  /* 119be6ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_119be6c1:;
  /* 119be6c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119be6c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be6c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 119be6ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119be6cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 119be6d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be6d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 119be6d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be6da jbe 0x119be6e3 */
  if ((C.cf||C.zf)) goto L_119be6e3;
  /* 119be6dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_119be6e3:;
  /* 119be6e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119be6e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be6e9 je 0x119be7ef */
  if (C.zf) goto L_119be7ef;
  /* 119be6ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be6f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be6f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119be6f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be6fb jne 0x119be7d1 */
  if (!C.zf) goto L_119be7d1;
  /* 119be701 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be705 jae 0x119be766 */
  if (!C.cf) goto L_119be766;
  /* 119be707 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be70c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119be70f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be711 not edx */
  EDX = (~(EDX));
  /* 119be713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be716 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be719 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 119be71d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119be71f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be722 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be725 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 119be729 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be72c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be72f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119be732 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119be735 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be738 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be73b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 119be73e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be741 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be744 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119be748 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be74a jne 0x119be764 */
  if (!C.zf) goto L_119be764;
  /* 119be74c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be751 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119be754 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be756 not edx */
  EDX = (~(EDX));
  /* 119be758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be75b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119be75d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119be75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be762 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119be764:;
  /* 119be764 jmp 0x119be7d1 */
  goto L_119be7d1;
L_119be766:;
  /* 119be766 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119be769 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be76c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be771 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be773 not eax */
  EAX = (~(EAX));
  /* 119be775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be778 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be77b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 119be782 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119be784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be787 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be78a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 119be791 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be794 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be797 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 119be79a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119be79d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be7a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be7a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 119be7a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be7a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be7ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119be7b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119be7b2 jne 0x119be7d1 */
  if (!C.zf) goto L_119be7d1;
  /* 119be7b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119be7b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be7ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be7bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be7c1 not eax */
  EAX = (~(EAX));
  /* 119be7c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be7c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119be7c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119be7cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be7ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_119be7d1:;
  /* 119be7d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be7d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119be7d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be7da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119be7dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119be7e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be7e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119be7e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be7e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119be7ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_119be7ef:;
  /* 119be7ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 119be7f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_119be7f5:;
  /* 119be7f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119be7f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119be7fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be7fd jne 0x119be80b */
  if (!C.zf) goto L_119be80b;
  /* 119be7ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119be802 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be805 je 0x119be91b */
  if (C.zf) goto L_119be91b;
L_119be80b:;
  /* 119be80b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119be80e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be811 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 119be814 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119be817 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be81a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119be81d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119be820 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119be823 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be826 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119be829 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 119be82c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119be82f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be832 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 119be835 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be838 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119be83b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be83e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119be841 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be844 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be847 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119be84a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be84d jne 0x119be91b */
  if (!C.zf) goto L_119be91b;
  /* 119be853 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be857 jae 0x119be8b4 */
  if (!C.cf) goto L_119be8b4;
  /* 119be859 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be85c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be85f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119be863 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be866 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be869 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119be86c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119be86f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be872 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be875 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 119be878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119be87a jne 0x119be892 */
  if (!C.zf) goto L_119be892;
  /* 119be87c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be881 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119be884 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be889 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119be88b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119be88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be890 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119be892:;
  /* 119be892 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be897 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119be89a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be89f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be8a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 119be8a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119be8a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be8ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be8ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 119be8b2 jmp 0x119be91b */
  goto L_119be91b;
L_119be8b4:;
  /* 119be8b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be8b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be8ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119be8be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be8c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be8c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119be8c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119be8ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be8cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be8d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 119be8d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119be8d5 jne 0x119be8f2 */
  if (!C.zf) goto L_119be8f2;
  /* 119be8d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119be8da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be8dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be8e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be8e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119be8ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119be8ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119be8ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_119be8f2:;
  /* 119be8f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119be8f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be8f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119be8fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119be8ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be902 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be905 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 119be90c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119be90e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119be911 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119be914 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_119be91b:;
  /* 119be91b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be91e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119be921 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119be923 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119be926 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be929 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119be92c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 119be92f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be932 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119be934 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119be937 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be93a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119be93c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119be93f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be942 jne 0x119beaa9 */
  if (!C.zf) goto L_119beaa9;
  /* 119be948 cmp dword ptr [0x119e7760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119be94f je 0x119bea98 */
  if (C.zf) goto L_119bea98;
  /* 119be955 mov eax, dword ptr [0x119e7758] */
  EAX = (r32((uint32_t)(0x119e7758)));
  /* 119be95a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 119be95d mov ecx, dword ptr [0x119e7760] */
  ECX = (r32((uint32_t)(0x119e7760)));
  /* 119be963 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119be966 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119be968 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119be96b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119be970 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119be975 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119be978 push eax */
  push32((uint32_t)(EAX));
  /* 119be979 call dword ptr [0x119e9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9374))), 0x119be97fu);
  /* 119be97f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119be984 mov ecx, dword ptr [0x119e7758] */
  ECX = (r32((uint32_t)(0x119e7758)));
  /* 119be98a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119be98c mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119be991 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119be994 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119be996 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119be99c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119be99f mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119be9a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119be9a7 mov edx, dword ptr [0x119e7758] */
  EDX = (r32((uint32_t)(0x119e7758)));
  /* 119be9ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 119be9b8 mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119be9bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119be9c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 119be9c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119be9c6 mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119be9cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119be9ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 119be9d1 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119be9d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119be9da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 119be9de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119be9e0 jne 0x119be9f6 */
  if (!C.zf) goto L_119be9f6;
  /* 119be9e2 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119be9e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119be9eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 119be9ed mov ecx, dword ptr [0x119e7760] */
  ECX = (r32((uint32_t)(0x119e7760)));
  /* 119be9f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_119be9f6:;
  /* 119be9f6 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119be9fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bea00 jne 0x119bea98 */
  if (!C.zf) goto L_119bea98;
  /* 119bea06 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119bea0b push 0 */
  push32((uint32_t)(0x0u));
  /* 119bea0d mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bea12 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119bea15 push ecx */
  push32((uint32_t)(ECX));
  /* 119bea16 call dword ptr [0x119e9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9374))), 0x119bea1cu);
  /* 119bea1c mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bea22 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119bea25 push eax */
  push32((uint32_t)(EAX));
  /* 119bea26 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bea28 mov ecx, dword ptr [0x119e8ac4] */
  ECX = (r32((uint32_t)(0x119e8ac4)));
  /* 119bea2e push ecx */
  push32((uint32_t)(ECX));
  /* 119bea2f call dword ptr [0x119e9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9378))), 0x119bea35u);
  /* 119bea35 mov edx, dword ptr [0x119e7764] */
  EDX = (r32((uint32_t)(0x119e7764)));
  /* 119bea3b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bea3e mov eax, dword ptr [0x119e7768] */
  EAX = (r32((uint32_t)(0x119e7768)));
  /* 119bea43 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bea45 mov ecx, dword ptr [0x119e7760] */
  ECX = (r32((uint32_t)(0x119e7760)));
  /* 119bea4b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bea4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bea50 push eax */
  push32((uint32_t)(EAX));
  /* 119bea51 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bea57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bea5a push edx */
  push32((uint32_t)(EDX));
  /* 119bea5b mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bea60 push eax */
  push32((uint32_t)(EAX));
  /* 119bea61 call 0x119bd750 */
  push32(0x119bea66u); f_119bd750();
  /* 119bea66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bea69 mov ecx, dword ptr [0x119e7764] */
  ECX = (r32((uint32_t)(0x119e7764)));
  /* 119bea6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bea72 mov dword ptr [0x119e7764], ecx */
  w32((uint32_t)(0x119e7764), (ECX));
  /* 119bea78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bea7b cmp edx, dword ptr [0x119e7760] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e7760))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bea81 jbe 0x119bea8c */
  if ((C.cf||C.zf)) goto L_119bea8c;
  /* 119bea83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bea86 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bea89 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119bea8c:;
  /* 119bea8c mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119bea92 mov dword ptr [0x119e775c], ecx */
  w32((uint32_t)(0x119e775c), (ECX));
L_119bea98:;
  /* 119bea98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bea9b mov dword ptr [0x119e7760], edx */
  w32((uint32_t)(0x119e7760), (EDX));
  /* 119beaa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119beaa4 mov dword ptr [0x119e7758], eax */
  w32((uint32_t)(0x119e7758), (EAX));
L_119beaa9:;
  /* 119beaa9 mov esp, ebp */
  ESP = (EBP);
  /* 119beaab pop ebp */
  EBP = (pop32());
  /* 119beaac ret  */
  ESPCHK(0x119be4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eab0 @ 0x119beab0 (1334 bytes, 427 insns) */
void f_119beab0(void) {
  FTRACE(0x119beab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119beab0 push ebp */
  push32((uint32_t)(EBP));
  /* 119beab1 mov ebp, esp */
  EBP = (ESP);
  /* 119beab3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119beab6 push esi */
  push32((uint32_t)(ESI));
  /* 119beab7 mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119beabc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119beabf mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119beac5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beac7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119beaca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119beacd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bead0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 119bead3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 119bead6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bead9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119beadc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119beadf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119beae2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beae6 jge 0x119beafc */
  if ((C.sf==C.of)) goto L_119beafc;
  /* 119beae8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119beaeb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119beaee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119beaf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119beaf3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 119beafa jmp 0x119beb11 */
  goto L_119beb11;
L_119beafc:;
  /* 119beafc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119beb03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119beb06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119beb09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119beb0c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119beb0e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_119beb11:;
  /* 119beb11 mov ecx, dword ptr [0x119e775c] */
  ECX = (r32((uint32_t)(0x119e775c)));
  /* 119beb17 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_119beb1a:;
  /* 119beb1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb1d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beb20 jae 0x119beb46 */
  if (!C.cf) goto L_119beb46;
  /* 119beb22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119beb28 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 119beb2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb2d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 119beb30 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 119beb33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119beb35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119beb37 je 0x119beb3b */
  if (C.zf) goto L_119beb3b;
  /* 119beb39 jmp 0x119beb46 */
  goto L_119beb46;
L_119beb3b:;
  /* 119beb3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beb41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119beb44 jmp 0x119beb1a */
  goto L_119beb1a;
L_119beb46:;
  /* 119beb46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beb4c jne 0x119bec2d */
  if (!C.zf) goto L_119bec2d;
  /* 119beb52 mov eax, dword ptr [0x119e7768] */
  EAX = (r32((uint32_t)(0x119e7768)));
  /* 119beb57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_119beb5a:;
  /* 119beb5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb5d cmp ecx, dword ptr [0x119e775c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e775c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beb63 jae 0x119beb89 */
  if (!C.cf) goto L_119beb89;
  /* 119beb65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119beb6b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 119beb6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 119beb73 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 119beb76 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119beb78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119beb7a je 0x119beb7e */
  if (C.zf) goto L_119beb7e;
  /* 119beb7c jmp 0x119beb89 */
  goto L_119beb89;
L_119beb7e:;
  /* 119beb7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb81 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beb84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119beb87 jmp 0x119beb5a */
  goto L_119beb5a;
L_119beb89:;
  /* 119beb89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb8c cmp ecx, dword ptr [0x119e775c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e775c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beb92 jne 0x119bec2d */
  if (!C.zf) goto L_119bec2d;
L_119beb98:;
  /* 119beb98 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beb9b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beb9e jae 0x119bebb6 */
  if (!C.cf) goto L_119bebb6;
  /* 119beba0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beba3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119beba7 je 0x119bebab */
  if (C.zf) goto L_119bebab;
  /* 119beba9 jmp 0x119bebb6 */
  goto L_119bebb6;
L_119bebab:;
  /* 119bebab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bebae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bebb1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119bebb4 jmp 0x119beb98 */
  goto L_119beb98;
L_119bebb6:;
  /* 119bebb6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bebb9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bebbc jne 0x119bec07 */
  if (!C.zf) goto L_119bec07;
  /* 119bebbe mov eax, dword ptr [0x119e7768] */
  EAX = (r32((uint32_t)(0x119e7768)));
  /* 119bebc3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_119bebc6:;
  /* 119bebc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bebc9 cmp ecx, dword ptr [0x119e775c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e775c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bebcf jae 0x119bebe7 */
  if (!C.cf) goto L_119bebe7;
  /* 119bebd1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bebd4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bebd8 je 0x119bebdc */
  if (C.zf) goto L_119bebdc;
  /* 119bebda jmp 0x119bebe7 */
  goto L_119bebe7;
L_119bebdc:;
  /* 119bebdc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bebdf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bebe2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bebe5 jmp 0x119bebc6 */
  goto L_119bebc6;
L_119bebe7:;
  /* 119bebe7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bebea cmp ecx, dword ptr [0x119e775c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e775c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bebf0 jne 0x119bec07 */
  if (!C.zf) goto L_119bec07;
  /* 119bebf2 call 0x119beff0 */
  push32(0x119bebf7u); f_119beff0();
  /* 119bebf7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bebfa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bebfe jne 0x119bec07 */
  if (!C.zf) goto L_119bec07;
  /* 119bec00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bec02 jmp 0x119befe1 */
  goto L_119befe1;
L_119bec07:;
  /* 119bec07 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bec0a push edx */
  push32((uint32_t)(EDX));
  /* 119bec0b call 0x119bf100 */
  push32(0x119bec10u); f_119bf100();
  /* 119bec10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bec13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bec16 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119bec19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119bec1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bec1e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bec21 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bec24 jne 0x119bec2d */
  if (!C.zf) goto L_119bec2d;
  /* 119bec26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bec28 jmp 0x119befe1 */
  goto L_119befe1;
L_119bec2d:;
  /* 119bec2d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bec30 mov dword ptr [0x119e775c], edx */
  w32((uint32_t)(0x119e775c), (EDX));
  /* 119bec36 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bec39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bec3c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 119bec3f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bec42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bec44 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 119bec47 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bec4b je 0x119bec70 */
  if (C.zf) goto L_119bec70;
  /* 119bec4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bec50 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bec53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bec56 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 119bec5a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bec5d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bec60 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 119bec63 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 119bec6a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 119bec6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bec6e jne 0x119beca5 */
  if (!C.zf) goto L_119beca5;
L_119bec70:;
  /* 119bec70 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_119bec77:;
  /* 119bec77 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bec7a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bec7d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bec80 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 119bec84 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bec87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bec8a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 119bec8d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 119bec94 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 119bec96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bec98 jne 0x119beca5 */
  if (!C.zf) goto L_119beca5;
  /* 119bec9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bec9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beca0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 119beca3 jmp 0x119bec77 */
  goto L_119bec77;
L_119beca5:;
  /* 119beca5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119beca8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119becae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119becb1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 119becb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119becbb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119becc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119becc5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119becc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119beccb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 119beccf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119becd2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119becd6 jne 0x119becf2 */
  if (!C.zf) goto L_119becf2;
  /* 119becd8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 119becdf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bece2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bece5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 119bece8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 119becef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_119becf2:;
  /* 119becf2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119becf6 jl 0x119bed0b */
  if ((C.sf!=C.of)) goto L_119bed0b;
  /* 119becf8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119becfb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119becfd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119bed00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bed03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bed06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119bed09 jmp 0x119becf2 */
  goto L_119becf2;
L_119bed0b:;
  /* 119bed0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bed0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bed11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 119bed15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119bed18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bed1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bed1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bed20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bed23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bed26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119bed29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bed2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119bed2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bed33 jle 0x119bed3c */
  if ((C.zf||C.sf!=C.of)) goto L_119bed3c;
  /* 119bed35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_119bed3c:;
  /* 119bed3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bed3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bed42 je 0x119bef60 */
  if (C.zf) goto L_119bef60;
  /* 119bed48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bed4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bed4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bed51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bed54 jne 0x119bee2a */
  if (!C.zf) goto L_119bee2a;
  /* 119bed5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bed5e jge 0x119bedbf */
  if ((C.sf==C.of)) goto L_119bedbf;
  /* 119bed60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bed65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bed68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bed6a not eax */
  EAX = (~(EAX));
  /* 119bed6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bed6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bed72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 119bed76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bed78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bed7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bed7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 119bed82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bed85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bed88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 119bed8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bed8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bed91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bed94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 119bed97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bed9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bed9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119beda1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119beda3 jne 0x119bedbd */
  if (!C.zf) goto L_119bedbd;
  /* 119beda5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bedaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bedad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bedaf not eax */
  EAX = (~(EAX));
  /* 119bedb1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bedb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bedb6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bedb8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bedbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119bedbd:;
  /* 119bedbd jmp 0x119bee2a */
  goto L_119bee2a;
L_119bedbf:;
  /* 119bedbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bedc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bedc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bedca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bedcc not edx */
  EDX = (~(EDX));
  /* 119bedce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bedd1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bedd4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 119beddb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119beddd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bede0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bede3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 119bedea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beded add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bedf0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119bedf3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bedf6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bedf9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bedfc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 119bedff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bee02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bee05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119bee09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bee0b jne 0x119bee2a */
  if (!C.zf) goto L_119bee2a;
  /* 119bee0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bee10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bee13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bee18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bee1a not edx */
  EDX = (~(EDX));
  /* 119bee1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bee1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bee22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bee24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bee27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_119bee2a:;
  /* 119bee2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119bee30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bee36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119bee39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bee3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119bee45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119bee48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bee4c je 0x119bef60 */
  if (C.zf) goto L_119bef60;
  /* 119bee52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bee55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bee58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 119bee5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bee5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bee64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bee67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119bee6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bee70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119bee73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bee76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119bee7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bee82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119bee88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bee8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bee91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bee94 jne 0x119bef60 */
  if (!C.zf) goto L_119bef60;
  /* 119bee9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bee9e jge 0x119beefa */
  if ((C.sf==C.of)) goto L_119beefa;
  /* 119beea0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beea3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beea6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119beeaa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beead add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beeb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 119beeb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119beeb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beeb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119beebb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 119beebe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119beec0 jne 0x119beed8 */
  if (!C.zf) goto L_119beed8;
  /* 119beec2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119beec7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119beeca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119beecc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beecf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119beed1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119beed3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119beed6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119beed8:;
  /* 119beed8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119beedd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119beee0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119beee2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119beee5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beee8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 119beeec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119beeee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119beef1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beef4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 119beef8 jmp 0x119bef60 */
  goto L_119bef60;
L_119beefa:;
  /* 119beefa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119beefd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119bef04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bef07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 119bef0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bef0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bef12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 119bef18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bef1a jne 0x119bef37 */
  if (!C.zf) goto L_119bef37;
  /* 119bef1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bef1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bef22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bef27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bef29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bef2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bef2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bef31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bef34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_119bef37:;
  /* 119bef37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bef3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bef3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bef42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bef44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bef47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bef4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 119bef51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bef53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bef56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119bef59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_119bef60:;
  /* 119bef60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bef64 je 0x119bef7a */
  if (C.zf) goto L_119bef7a;
  /* 119bef66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bef69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bef6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119bef6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bef71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bef77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_119bef7a:;
  /* 119bef7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bef7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119bef83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bef86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bef8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119bef8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bef91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bef97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bef9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 119bef9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119befa0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119befa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119befa5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119befa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119befaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119befad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119befaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119befb1 jne 0x119befd3 */
  if (!C.zf) goto L_119befd3;
  /* 119befb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119befb6 cmp eax, dword ptr [0x119e7760] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e7760))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119befbc jne 0x119befd3 */
  if (!C.zf) goto L_119befd3;
  /* 119befbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119befc1 cmp ecx, dword ptr [0x119e7758] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e7758))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119befc7 jne 0x119befd3 */
  if (!C.zf) goto L_119befd3;
  /* 119befc9 mov dword ptr [0x119e7760], 0 */
  w32((uint32_t)(0x119e7760), (0x0u));
L_119befd3:;
  /* 119befd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 119befd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119befd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119befdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119befde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_119befe1:;
  /* 119befe1 pop esi */
  ESI = (pop32());
  /* 119befe2 mov esp, ebp */
  ESP = (EBP);
  /* 119befe4 pop ebp */
  EBP = (pop32());
  /* 119befe5 ret  */
  ESPCHK(0x119beab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eff0 @ 0x119beff0 (271 bytes, 78 insns) */
void f_119beff0(void) {
  FTRACE(0x119beff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119beff0 push ebp */
  push32((uint32_t)(EBP));
  /* 119beff1 mov ebp, esp */
  EBP = (ESP);
  /* 119beff3 push ecx */
  push32((uint32_t)(ECX));
  /* 119beff4 mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119beff9 cmp eax, dword ptr [0x119e7748] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e7748))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119befff jne 0x119bf04b */
  if (!C.zf) goto L_119bf04b;
  /* 119bf001 mov ecx, dword ptr [0x119e7748] */
  ECX = (r32((uint32_t)(0x119e7748)));
  /* 119bf007 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf00a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bf00d push ecx */
  push32((uint32_t)(ECX));
  /* 119bf00e mov edx, dword ptr [0x119e7768] */
  EDX = (r32((uint32_t)(0x119e7768)));
  /* 119bf014 push edx */
  push32((uint32_t)(EDX));
  /* 119bf015 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bf017 mov eax, dword ptr [0x119e8ac4] */
  EAX = (r32((uint32_t)(0x119e8ac4)));
  /* 119bf01c push eax */
  push32((uint32_t)(EAX));
  /* 119bf01d call dword ptr [0x119e9350] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9350))), 0x119bf023u);
  /* 119bf023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bf026 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf02a jne 0x119bf033 */
  if (!C.zf) goto L_119bf033;
  /* 119bf02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf02e jmp 0x119bf0fb */
  goto L_119bf0fb;
L_119bf033:;
  /* 119bf033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf036 mov dword ptr [0x119e7768], ecx */
  w32((uint32_t)(0x119e7768), (ECX));
  /* 119bf03c mov edx, dword ptr [0x119e7748] */
  EDX = (r32((uint32_t)(0x119e7748)));
  /* 119bf042 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf045 mov dword ptr [0x119e7748], edx */
  w32((uint32_t)(0x119e7748), (EDX));
L_119bf04b:;
  /* 119bf04b mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119bf050 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bf053 mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119bf059 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf05b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bf05e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 119bf063 push 8 */
  push32((uint32_t)(0x8u));
  /* 119bf065 mov edx, dword ptr [0x119e8ac4] */
  EDX = (r32((uint32_t)(0x119e8ac4)));
  /* 119bf06b push edx */
  push32((uint32_t)(EDX));
  /* 119bf06c call dword ptr [0x119e9354] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9354))), 0x119bf072u);
  /* 119bf072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf075 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 119bf078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf07b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf07f jne 0x119bf085 */
  if (!C.zf) goto L_119bf085;
  /* 119bf081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf083 jmp 0x119bf0fb */
  goto L_119bf0fb;
L_119bf085:;
  /* 119bf085 push 4 */
  push32((uint32_t)(0x4u));
  /* 119bf087 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 119bf08c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 119bf091 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bf093 call dword ptr [0x119e934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e934c))), 0x119bf099u);
  /* 119bf099 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf09c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 119bf09f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf0a2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf0a6 jne 0x119bf0c2 */
  if (!C.zf) goto L_119bf0c2;
  /* 119bf0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf0ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bf0ae push ecx */
  push32((uint32_t)(ECX));
  /* 119bf0af push 0 */
  push32((uint32_t)(0x0u));
  /* 119bf0b1 mov edx, dword ptr [0x119e8ac4] */
  EDX = (r32((uint32_t)(0x119e8ac4)));
  /* 119bf0b7 push edx */
  push32((uint32_t)(EDX));
  /* 119bf0b8 call dword ptr [0x119e9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9378))), 0x119bf0beu);
  /* 119bf0be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf0c0 jmp 0x119bf0fb */
  goto L_119bf0fb;
L_119bf0c2:;
  /* 119bf0c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf0c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119bf0cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf0ce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119bf0d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf0d8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 119bf0df mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119bf0e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf0e7 mov dword ptr [0x119e7764], eax */
  w32((uint32_t)(0x119e7764), (EAX));
  /* 119bf0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf0ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119bf0f2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 119bf0f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119bf0fb:;
  /* 119bf0fb mov esp, ebp */
  ESP = (EBP);
  /* 119bf0fd pop ebp */
  EBP = (pop32());
  /* 119bf0fe ret  */
  ESPCHK(0x119beff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f100 @ 0x119bf100 (494 bytes, 149 insns) */
void f_119bf100(void) {
  FTRACE(0x119bf100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bf100 push ebp */
  push32((uint32_t)(EBP));
  /* 119bf101 mov ebp, esp */
  EBP = (ESP);
  /* 119bf103 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf109 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bf10c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119bf10f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf112 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bf115 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bf118 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_119bf11f:;
  /* 119bf11f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf123 jl 0x119bf138 */
  if ((C.sf!=C.of)) goto L_119bf138;
  /* 119bf125 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bf128 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119bf12a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119bf12d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf130 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf133 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 119bf136 jmp 0x119bf11f */
  goto L_119bf11f;
L_119bf138:;
  /* 119bf138 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf13b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bf141 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf144 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 119bf14b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119bf14e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119bf155 jmp 0x119bf160 */
  goto L_119bf160;
L_119bf157:;
  /* 119bf157 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf15a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf15d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_119bf160:;
  /* 119bf160 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf164 jge 0x119bf186 */
  if ((C.sf==C.of)) goto L_119bf186;
  /* 119bf166 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bf16c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 119bf16f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bf172 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf175 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf178 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119bf17b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf17e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf181 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119bf184 jmp 0x119bf157 */
  goto L_119bf157;
L_119bf186:;
  /* 119bf186 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf189 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 119bf18c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf18f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119bf192 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf194 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119bf197 push 4 */
  push32((uint32_t)(0x4u));
  /* 119bf199 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119bf19e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119bf1a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf1a6 push edx */
  push32((uint32_t)(EDX));
  /* 119bf1a7 call dword ptr [0x119e934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e934c))), 0x119bf1adu);
  /* 119bf1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bf1af jne 0x119bf1b9 */
  if (!C.zf) goto L_119bf1b9;
  /* 119bf1b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bf1b4 jmp 0x119bf2ea */
  goto L_119bf2ea;
L_119bf1b9:;
  /* 119bf1b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf1bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf1c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119bf1c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf1c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bf1ca jmp 0x119bf1d8 */
  goto L_119bf1d8;
L_119bf1cc:;
  /* 119bf1cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf1cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf1d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119bf1d8:;
  /* 119bf1d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf1db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf1de ja 0x119bf23d */
  if ((!C.cf&&!C.zf)) goto L_119bf23d;
  /* 119bf1e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf1e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 119bf1ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf1ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 119bf1f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf1fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf1fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bf200 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf203 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 119bf209 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf20c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf212 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf215 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119bf218 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf21b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf221 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf224 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119bf227 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf22a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf22f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119bf232 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bf235 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 119bf23b jmp 0x119bf1cc */
  goto L_119bf1cc;
L_119bf23d:;
  /* 119bf23d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bf240 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf246 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119bf249 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf24c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf24f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf252 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119bf255 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf258 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bf25b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bf25e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf261 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf264 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119bf267 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf26a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf26d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf270 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 119bf273 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf276 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bf279 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bf27c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf27f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf282 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119bf285 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf288 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf28b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 119bf293 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf296 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf299 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 119bf2a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf2a7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 119bf2ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf2ae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 119bf2b1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bf2b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf2b7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 119bf2ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bf2bc jne 0x119bf2cd */
  if (!C.zf) goto L_119bf2cd;
  /* 119bf2be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf2c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf2c4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119bf2c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf2ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_119bf2cd:;
  /* 119bf2cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf2d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf2d5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf2d7 not edx */
  EDX = (~(EDX));
  /* 119bf2d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf2dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119bf2df and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf2e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf2e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119bf2e7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_119bf2ea:;
  /* 119bf2ea mov esp, ebp */
  ESP = (EBP);
  /* 119bf2ec pop ebp */
  EBP = (pop32());
  /* 119bf2ed ret  */
  ESPCHK(0x119bf100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2f0 @ 0x119bf2f0 (1515 bytes, 489 insns) */
void f_119bf2f0(void) {
  FTRACE(0x119bf2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bf2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bf2f1 mov ebp, esp */
  EBP = (ESP);
  /* 119bf2f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf2f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119bf2f9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf2fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 119bf2fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119bf301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf304 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119bf307 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 119bf30a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf30d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bf310 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf313 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119bf316 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bf319 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 119bf31c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119bf31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf322 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bf328 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf32b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 119bf332 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bf335 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119bf338 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf33b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119bf33e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf341 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bf343 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf346 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 119bf349 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf34c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf34f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 119bf352 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf355 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bf357 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119bf35a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf35d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf360 jle 0x119bf616 */
  if ((C.zf||C.sf!=C.of)) goto L_119bf616;
  /* 119bf366 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf369 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119bf36c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bf36e jne 0x119bf37b */
  if (!C.zf) goto L_119bf37b;
  /* 119bf370 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf373 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf376 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf379 jle 0x119bf382 */
  if ((C.zf||C.sf!=C.of)) goto L_119bf382;
L_119bf37b:;
  /* 119bf37b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf37d jmp 0x119bf8d7 */
  goto L_119bf8d7;
L_119bf382:;
  /* 119bf382 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf385 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119bf388 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf38b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119bf38e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf392 jbe 0x119bf39b */
  if ((C.cf||C.zf)) goto L_119bf39b;
  /* 119bf394 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_119bf39b:;
  /* 119bf39b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf39e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf3a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf3a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf3a7 jne 0x119bf47d */
  if (!C.zf) goto L_119bf47d;
  /* 119bf3ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf3b1 jae 0x119bf412 */
  if (!C.cf) goto L_119bf412;
  /* 119bf3b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf3b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf3bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf3bd not edx */
  EDX = (~(EDX));
  /* 119bf3bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf3c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf3c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 119bf3c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf3cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf3ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf3d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 119bf3d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf3d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf3db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119bf3de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bf3e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf3e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf3e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 119bf3ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf3ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf3f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119bf3f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bf3f6 jne 0x119bf410 */
  if (!C.zf) goto L_119bf410;
  /* 119bf3f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf3fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf400 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf402 not edx */
  EDX = (~(EDX));
  /* 119bf404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf407 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bf409 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf40b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf40e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119bf410:;
  /* 119bf410 jmp 0x119bf47d */
  goto L_119bf47d;
L_119bf412:;
  /* 119bf412 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf415 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf418 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf41d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf41f not eax */
  EAX = (~(EAX));
  /* 119bf421 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf424 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf427 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 119bf42e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf430 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf433 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf436 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 119bf43d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf440 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf443 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 119bf446 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bf449 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf44c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf44f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 119bf452 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf455 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf458 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119bf45c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bf45e jne 0x119bf47d */
  if (!C.zf) goto L_119bf47d;
  /* 119bf460 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf463 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf466 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf46b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf46d not eax */
  EAX = (~(EAX));
  /* 119bf46f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf472 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf475 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bf477 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf47a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_119bf47d:;
  /* 119bf47d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf480 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119bf483 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf486 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bf489 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119bf48c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf48f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bf492 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf495 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119bf498 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119bf49b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf49e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf4a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf4a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119bf4a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf4ab jle 0x119bf5f7 */
  if ((C.zf||C.sf!=C.of)) goto L_119bf5f7;
  /* 119bf4b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf4b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf4b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119bf4ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf4bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 119bf4c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf4c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119bf4c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf4ca jbe 0x119bf4d3 */
  if ((C.cf||C.zf)) goto L_119bf4d3;
  /* 119bf4cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_119bf4d3:;
  /* 119bf4d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bf4d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 119bf4dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119bf4df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf4e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf4e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf4e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119bf4eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf4ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf4f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 119bf4f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf4f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf4fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 119bf4fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf500 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf503 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf506 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119bf509 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf50c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf50f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf512 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf515 jne 0x119bf5e3 */
  if (!C.zf) goto L_119bf5e3;
  /* 119bf51b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf51f jae 0x119bf57c */
  if (!C.cf) goto L_119bf57c;
  /* 119bf521 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf524 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf527 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119bf52b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf52e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf531 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119bf534 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bf537 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf53a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf53d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 119bf540 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bf542 jne 0x119bf55a */
  if (!C.zf) goto L_119bf55a;
  /* 119bf544 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf549 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf54c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf54e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf551 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bf553 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf558 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119bf55a:;
  /* 119bf55a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf55f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf562 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf564 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf567 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf56a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 119bf56e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf570 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf573 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf576 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 119bf57a jmp 0x119bf5e3 */
  goto L_119bf5e3;
L_119bf57c:;
  /* 119bf57c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf57f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf582 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119bf586 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf589 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf58c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119bf58f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bf592 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf595 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf598 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 119bf59b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bf59d jne 0x119bf5ba */
  if (!C.zf) goto L_119bf5ba;
  /* 119bf59f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf5a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf5a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf5aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf5ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf5af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bf5b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf5b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf5b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_119bf5ba:;
  /* 119bf5ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf5bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf5c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf5c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf5c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf5ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf5cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 119bf5d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf5d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf5d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf5dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_119bf5e3:;
  /* 119bf5e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf5e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf5e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119bf5eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf5ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf5f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf5f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_119bf5f7:;
  /* 119bf5f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf5fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf5fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf600 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119bf602 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf605 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf608 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf60b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf60e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 119bf611 jmp 0x119bf8d2 */
  goto L_119bf8d2;
L_119bf616:;
  /* 119bf616 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf619 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf61c jge 0x119bf8d2 */
  if ((C.sf==C.of)) goto L_119bf8d2;
  /* 119bf622 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf625 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf628 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf62b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119bf62d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119bf630 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf633 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf636 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf639 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 119bf63c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf63f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf642 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119bf645 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf648 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf64b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119bf64e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf651 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119bf654 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf657 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119bf65a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf65e jbe 0x119bf667 */
  if ((C.cf||C.zf)) goto L_119bf667;
  /* 119bf660 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_119bf667:;
  /* 119bf667 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf66a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119bf66d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bf66f jne 0x119bf7b0 */
  if (!C.zf) goto L_119bf7b0;
  /* 119bf675 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bf678 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119bf67b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf67e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119bf681 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf685 jbe 0x119bf68e */
  if ((C.cf||C.zf)) goto L_119bf68e;
  /* 119bf687 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_119bf68e:;
  /* 119bf68e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf691 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf694 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf697 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf69a jne 0x119bf770 */
  if (!C.zf) goto L_119bf770;
  /* 119bf6a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf6a4 jae 0x119bf705 */
  if (!C.cf) goto L_119bf705;
  /* 119bf6a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf6ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf6ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf6b0 not edx */
  EDX = (~(EDX));
  /* 119bf6b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf6b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf6b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 119bf6bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf6be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf6c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf6c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 119bf6c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf6cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf6ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 119bf6d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bf6d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf6d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf6da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 119bf6dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf6e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf6e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119bf6e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bf6e9 jne 0x119bf703 */
  if (!C.zf) goto L_119bf703;
  /* 119bf6eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf6f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf6f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf6f5 not edx */
  EDX = (~(EDX));
  /* 119bf6f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf6fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bf6fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf6fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf701 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119bf703:;
  /* 119bf703 jmp 0x119bf770 */
  goto L_119bf770;
L_119bf705:;
  /* 119bf705 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf708 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf70b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf710 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf712 not eax */
  EAX = (~(EAX));
  /* 119bf714 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf717 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf71a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 119bf721 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf726 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf729 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 119bf730 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf733 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf736 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 119bf739 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bf73c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf73f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf742 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 119bf745 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf748 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf74b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119bf74f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bf751 jne 0x119bf770 */
  if (!C.zf) goto L_119bf770;
  /* 119bf753 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119bf756 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf759 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf75e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf760 not eax */
  EAX = (~(EAX));
  /* 119bf762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf765 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf768 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bf76a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf76d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_119bf770:;
  /* 119bf770 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf773 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119bf776 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf779 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bf77c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119bf77f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf782 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bf785 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119bf788 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119bf78b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119bf78e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf791 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf794 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119bf797 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf79a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119bf79d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf7a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119bf7a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf7a7 jbe 0x119bf7b0 */
  if ((C.cf||C.zf)) goto L_119bf7b0;
  /* 119bf7a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_119bf7b0:;
  /* 119bf7b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bf7b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bf7b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 119bf7b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119bf7bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf7c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bf7c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119bf7c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf7ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119bf7d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bf7d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119bf7da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bf7e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119bf7e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf7ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bf7ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf7f2 jne 0x119bf8be */
  if (!C.zf) goto L_119bf8be;
  /* 119bf7f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf7fc jae 0x119bf858 */
  if (!C.cf) goto L_119bf858;
  /* 119bf7fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf801 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf804 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119bf808 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf80b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf80e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 119bf811 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bf813 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf816 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf819 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 119bf81c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bf81e jne 0x119bf836 */
  if (!C.zf) goto L_119bf836;
  /* 119bf820 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bf828 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf82a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf82d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bf82f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bf831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf834 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119bf836:;
  /* 119bf836 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf83b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bf83e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf843 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf846 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 119bf84a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf84c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf84f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf852 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 119bf856 jmp 0x119bf8be */
  goto L_119bf8be;
L_119bf858:;
  /* 119bf858 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf85b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf85e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 119bf862 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf865 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf868 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 119bf86b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119bf86d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf870 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf873 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 119bf876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bf878 jne 0x119bf895 */
  if (!C.zf) goto L_119bf895;
  /* 119bf87a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bf87d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf880 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 119bf885 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119bf887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf88a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bf88d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119bf88f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119bf892 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_119bf895:;
  /* 119bf895 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119bf898 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf89b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf8a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf8a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf8a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf8a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 119bf8af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bf8b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf8b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119bf8b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_119bf8be:;
  /* 119bf8be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf8c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf8c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119bf8c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bf8c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf8cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119bf8cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_119bf8d2:;
  /* 119bf8d2 mov eax, 1 */
  EAX = (0x1u);
L_119bf8d7:;
  /* 119bf8d7 mov esp, ebp */
  ESP = (EBP);
  /* 119bf8d9 pop ebp */
  EBP = (pop32());
  /* 119bf8da ret  */
  ESPCHK(0x119bf2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8e0 @ 0x119bf8e0 (304 bytes, 79 insns) */
void f_119bf8e0(void) {
  FTRACE(0x119bf8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bf8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119bf8e1 mov ebp, esp */
  EBP = (ESP);
  /* 119bf8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119bf8e4 cmp dword ptr [0x119e7760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf8eb je 0x119bfa0c */
  if (C.zf) goto L_119bfa0c;
  /* 119bf8f1 mov eax, dword ptr [0x119e7758] */
  EAX = (r32((uint32_t)(0x119e7758)));
  /* 119bf8f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 119bf8f9 mov ecx, dword ptr [0x119e7760] */
  ECX = (r32((uint32_t)(0x119e7760)));
  /* 119bf8ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119bf902 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf904 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119bf907 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119bf90c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119bf911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bf914 push eax */
  push32((uint32_t)(EAX));
  /* 119bf915 call dword ptr [0x119e9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9374))), 0x119bf91bu);
  /* 119bf91b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bf920 mov ecx, dword ptr [0x119e7758] */
  ECX = (r32((uint32_t)(0x119e7758)));
  /* 119bf926 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bf928 mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bf92d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119bf930 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119bf932 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bf938 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119bf93b mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bf940 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bf943 mov edx, dword ptr [0x119e7758] */
  EDX = (r32((uint32_t)(0x119e7758)));
  /* 119bf949 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 119bf954 mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bf959 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bf95c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 119bf95f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119bf962 mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bf967 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bf96a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 119bf96d mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bf973 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119bf976 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 119bf97a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119bf97c jne 0x119bf992 */
  if (!C.zf) goto L_119bf992;
  /* 119bf97e mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bf984 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119bf987 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 119bf989 mov ecx, dword ptr [0x119e7760] */
  ECX = (r32((uint32_t)(0x119e7760)));
  /* 119bf98f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_119bf992:;
  /* 119bf992 mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bf998 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf99c jne 0x119bfa02 */
  if (!C.zf) goto L_119bfa02;
  /* 119bf99e cmp dword ptr [0x119e7764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bf9a5 jle 0x119bfa02 */
  if ((C.zf||C.sf!=C.of)) goto L_119bfa02;
  /* 119bf9a7 mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bf9ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119bf9af push ecx */
  push32((uint32_t)(ECX));
  /* 119bf9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119bf9b2 mov edx, dword ptr [0x119e8ac4] */
  EDX = (r32((uint32_t)(0x119e8ac4)));
  /* 119bf9b8 push edx */
  push32((uint32_t)(EDX));
  /* 119bf9b9 call dword ptr [0x119e9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9378))), 0x119bf9bfu);
  /* 119bf9bf mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119bf9c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bf9c7 mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119bf9cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf9cf mov edx, dword ptr [0x119e7760] */
  EDX = (r32((uint32_t)(0x119e7760)));
  /* 119bf9d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf9d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf9da push ecx */
  push32((uint32_t)(ECX));
  /* 119bf9db mov eax, dword ptr [0x119e7760] */
  EAX = (r32((uint32_t)(0x119e7760)));
  /* 119bf9e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf9e3 push eax */
  push32((uint32_t)(EAX));
  /* 119bf9e4 mov ecx, dword ptr [0x119e7760] */
  ECX = (r32((uint32_t)(0x119e7760)));
  /* 119bf9ea push ecx */
  push32((uint32_t)(ECX));
  /* 119bf9eb call 0x119bd750 */
  push32(0x119bf9f0u); f_119bd750();
  /* 119bf9f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119bf9f3 mov edx, dword ptr [0x119e7764] */
  EDX = (r32((uint32_t)(0x119e7764)));
  /* 119bf9f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bf9fc mov dword ptr [0x119e7764], edx */
  w32((uint32_t)(0x119e7764), (EDX));
L_119bfa02:;
  /* 119bfa02 mov dword ptr [0x119e7760], 0 */
  w32((uint32_t)(0x119e7760), (0x0u));
L_119bfa0c:;
  /* 119bfa0c mov esp, ebp */
  ESP = (EBP);
  /* 119bfa0e pop ebp */
  EBP = (pop32());
  /* 119bfa0f ret  */
  ESPCHK(0x119bf8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa10 @ 0x119bfa10 (1565 bytes, 343 insns) */
void f_119bfa10(void) {
  FTRACE(0x119bfa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119bfa10 push ebp */
  push32((uint32_t)(EBP));
  /* 119bfa11 mov ebp, esp */
  EBP = (ESP);
  /* 119bfa13 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bfa19 mov eax, dword ptr [0x119e7764] */
  EAX = (r32((uint32_t)(0x119e7764)));
  /* 119bfa1e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119bfa21 push eax */
  push32((uint32_t)(EAX));
  /* 119bfa22 mov ecx, dword ptr [0x119e7768] */
  ECX = (r32((uint32_t)(0x119e7768)));
  /* 119bfa28 push ecx */
  push32((uint32_t)(ECX));
  /* 119bfa29 call dword ptr [0x119e93a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a0))), 0x119bfa2fu);
  /* 119bfa2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bfa31 je 0x119bfa3b */
  if (C.zf) goto L_119bfa3b;
  /* 119bfa33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119bfa36 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfa3b:;
  /* 119bfa3b mov edx, dword ptr [0x119e7768] */
  EDX = (r32((uint32_t)(0x119e7768)));
  /* 119bfa41 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 119bfa47 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 119bfa51 jmp 0x119bfa62 */
  goto L_119bfa62;
L_119bfa53:;
  /* 119bfa53 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 119bfa59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfa5c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_119bfa62:;
  /* 119bfa62 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 119bfa68 cmp ecx, dword ptr [0x119e7764] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e7764))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfa6e jge 0x119c0027 */
  if ((C.sf==C.of)) goto L_119c0027;
  /* 119bfa74 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 119bfa7a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119bfa7d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 119bfa83 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 119bfa88 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 119bfa8e push ecx */
  push32((uint32_t)(ECX));
  /* 119bfa8f call dword ptr [0x119e93a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a0))), 0x119bfa95u);
  /* 119bfa95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bfa97 je 0x119bfaa3 */
  if (C.zf) goto L_119bfaa3;
  /* 119bfa99 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 119bfa9e jmp 0x119c0029 */
  goto L_119c0029;
L_119bfaa3:;
  /* 119bfaa3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 119bfaa9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119bfaac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 119bfab2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 119bfab8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfabe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119bfac1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 119bfac7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bfaca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119bfacd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 119bfad7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 119bfae1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119bfae8 jmp 0x119bfaf3 */
  goto L_119bfaf3;
L_119bfaea:;
  /* 119bfaea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bfaed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfaf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119bfaf3:;
  /* 119bfaf3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfaf7 jge 0x119bffeb */
  if ((C.sf==C.of)) goto L_119bffeb;
  /* 119bfafd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 119bfb07 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 119bfb11 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 119bfb1b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 119bfb25 jmp 0x119bfb36 */
  goto L_119bfb36;
L_119bfb27:;
  /* 119bfb27 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 119bfb2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfb30 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_119bfb36:;
  /* 119bfb36 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfb3d jge 0x119bfb52 */
  if ((C.sf==C.of)) goto L_119bfb52;
  /* 119bfb3f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 119bfb45 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 119bfb50 jmp 0x119bfb27 */
  goto L_119bfb27;
L_119bfb52:;
  /* 119bfb52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfb56 jl 0x119bff8d */
  if ((C.sf!=C.of)) goto L_119bff8d;
  /* 119bfb5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119bfb61 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 119bfb67 push ecx */
  push32((uint32_t)(ECX));
  /* 119bfb68 call dword ptr [0x119e93a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a0))), 0x119bfb6eu);
  /* 119bfb6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bfb70 je 0x119bfb7c */
  if (C.zf) goto L_119bfb7c;
  /* 119bfb72 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 119bfb77 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfb7c:;
  /* 119bfb7c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 119bfb82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119bfb85 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 119bfb8f jmp 0x119bfba0 */
  goto L_119bfba0;
L_119bfb91:;
  /* 119bfb91 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 119bfb97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfb9a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_119bfba0:;
  /* 119bfba0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfba7 jge 0x119bfd24 */
  if ((C.sf==C.of)) goto L_119bfd24;
  /* 119bfbad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bfbb0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfbb3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 119bfbb9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfbbf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfbc5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 119bfbcb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfbd1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfbd5 jne 0x119bfbe2 */
  if (!C.zf) goto L_119bfbe2;
  /* 119bfbd7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 119bfbdd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfbe0 je 0x119bfbec */
  if (C.zf) goto L_119bfbec;
L_119bfbe2:;
  /* 119bfbe2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 119bfbe7 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfbec:;
  /* 119bfbec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfbf2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119bfbf4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 119bfbfa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 119bfc00 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 119bfc06 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 119bfc0c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119bfc0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119bfc11 je 0x119bfc49 */
  if (C.zf) goto L_119bfc49;
  /* 119bfc13 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 119bfc19 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bfc1c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 119bfc22 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfc2c jle 0x119bfc38 */
  if ((C.zf||C.sf!=C.of)) goto L_119bfc38;
  /* 119bfc2e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 119bfc33 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfc38:;
  /* 119bfc38 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 119bfc3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfc41 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 119bfc47 jmp 0x119bfc8b */
  goto L_119bfc8b;
L_119bfc49:;
  /* 119bfc49 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 119bfc4f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 119bfc52 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bfc55 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 119bfc5b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfc62 jle 0x119bfc6e */
  if ((C.zf||C.sf!=C.of)) goto L_119bfc6e;
  /* 119bfc64 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_119bfc6e:;
  /* 119bfc6e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 119bfc74 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 119bfc7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfc7e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 119bfc84 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_119bfc8b:;
  /* 119bfc8b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfc92 jl 0x119bfcad */
  if ((C.sf!=C.of)) goto L_119bfcad;
  /* 119bfc94 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 119bfc9a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 119bfc9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119bfc9f jne 0x119bfcad */
  if (!C.zf) goto L_119bfcad;
  /* 119bfca1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfcab jle 0x119bfcb7 */
  if ((C.zf||C.sf!=C.of)) goto L_119bfcb7;
L_119bfcad:;
  /* 119bfcad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 119bfcb2 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfcb7:;
  /* 119bfcb7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfcbd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfcc3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 119bfcc6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfccc je 0x119bfcd8 */
  if (C.zf) goto L_119bfcd8;
  /* 119bfcce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 119bfcd3 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfcd8:;
  /* 119bfcd8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfcde add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfce4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 119bfcea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfcf0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfcf6 jb 0x119bfbec */
  if (C.cf) goto L_119bfbec;
  /* 119bfcfc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfd02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfd08 je 0x119bfd14 */
  if (C.zf) goto L_119bfd14;
  /* 119bfd0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 119bfd0f jmp 0x119c0029 */
  goto L_119c0029;
L_119bfd14:;
  /* 119bfd14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119bfd17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfd1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119bfd1f jmp 0x119bfb91 */
  goto L_119bfb91;
L_119bfd24:;
  /* 119bfd24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bfd27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bfd29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfd2f je 0x119bfd3b */
  if (C.zf) goto L_119bfd3b;
  /* 119bfd31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 119bfd36 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfd3b:;
  /* 119bfd3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bfd3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 119bfd44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 119bfd4b jmp 0x119bfd56 */
  goto L_119bfd56;
L_119bfd4d:;
  /* 119bfd4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bfd50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfd53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119bfd56:;
  /* 119bfd56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfd5a jge 0x119bff8d */
  if ((C.sf==C.of)) goto L_119bff8d;
  /* 119bfd60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 119bfd6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 119bfd70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_119bfd76:;
  /* 119bfd76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bfd7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119bfd7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 119bfd85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 119bfd8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfd91 je 0x119bfeba */
  if (C.zf) goto L_119bfeba;
  /* 119bfd97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bfd9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 119bfda0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfda7 je 0x119bfeba */
  if (C.zf) goto L_119bfeba;
  /* 119bfdad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 119bfdb3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfdb9 jb 0x119bfdce */
  if (C.cf) goto L_119bfdce;
  /* 119bfdbb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 119bfdc1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfdc6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfdcc jb 0x119bfdd8 */
  if (C.cf) goto L_119bfdd8;
L_119bfdce:;
  /* 119bfdce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 119bfdd3 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfdd8:;
  /* 119bfdd8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 119bfdde and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 119bfde4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 119bfdea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 119bfdf0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfdf3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119bfdf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bfdf9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfdfe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_119bfe04:;
  /* 119bfe04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bfe07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfe0d je 0x119bfe2e */
  if (C.zf) goto L_119bfe2e;
  /* 119bfe0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bfe12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfe18 jne 0x119bfe1c */
  if (!C.zf) goto L_119bfe1c;
  /* 119bfe1a jmp 0x119bfe2e */
  goto L_119bfe2e;
L_119bfe1c:;
  /* 119bfe1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bfe1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119bfe21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 119bfe24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bfe27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfe29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119bfe2c jmp 0x119bfe04 */
  goto L_119bfe04;
L_119bfe2e:;
  /* 119bfe2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119bfe31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfe37 jne 0x119bfe43 */
  if (!C.zf) goto L_119bfe43;
  /* 119bfe39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 119bfe3e jmp 0x119c0029 */
  goto L_119c0029;
L_119bfe43:;
  /* 119bfe43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 119bfe49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119bfe4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 119bfe4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bfe51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 119bfe57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfe5e jle 0x119bfe6a */
  if ((C.zf||C.sf!=C.of)) goto L_119bfe6a;
  /* 119bfe60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_119bfe6a:;
  /* 119bfe6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 119bfe70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfe73 je 0x119bfe7f */
  if (C.zf) goto L_119bfe7f;
  /* 119bfe75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 119bfe7a jmp 0x119c0029 */
  goto L_119c0029;
L_119bfe7f:;
  /* 119bfe7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 119bfe85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119bfe88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfe8e je 0x119bfe9a */
  if (C.zf) goto L_119bfe9a;
  /* 119bfe90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 119bfe95 jmp 0x119c0029 */
  goto L_119c0029;
L_119bfe9a:;
  /* 119bfe9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 119bfea0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 119bfea6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 119bfeac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bfeaf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 119bfeb5 jmp 0x119bfd76 */
  goto L_119bfd76;
L_119bfeba:;
  /* 119bfeba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfec1 je 0x119bff31 */
  if (C.zf) goto L_119bff31;
  /* 119bfec3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfec7 jge 0x119bfefb */
  if ((C.sf==C.of)) goto L_119bfefb;
  /* 119bfec9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bfece mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bfed1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bfed3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 119bfed9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bfedb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 119bfee1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bfee6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bfee9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bfeeb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 119bfef1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bfef3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 119bfef9 jmp 0x119bff31 */
  goto L_119bff31;
L_119bfefb:;
  /* 119bfefb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bfefe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bff01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bff06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bff08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 119bff0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bff10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 119bff16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bff19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119bff1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119bff21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119bff23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 119bff29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119bff2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_119bff31:;
  /* 119bff31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 119bff37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119bff3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bff40 jne 0x119bff54 */
  if (!C.zf) goto L_119bff54;
  /* 119bff42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119bff45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 119bff4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bff52 je 0x119bff5e */
  if (C.zf) goto L_119bff5e;
L_119bff54:;
  /* 119bff54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 119bff59 jmp 0x119c0029 */
  goto L_119c0029;
L_119bff5e:;
  /* 119bff5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 119bff64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119bff67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bff6d je 0x119bff79 */
  if (C.zf) goto L_119bff79;
  /* 119bff6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 119bff74 jmp 0x119c0029 */
  goto L_119c0029;
L_119bff79:;
  /* 119bff79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 119bff7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bff82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 119bff88 jmp 0x119bfd4d */
  goto L_119bfd4d;
L_119bff8d:;
  /* 119bff8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bff90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 119bff96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 119bff9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bffa0 jne 0x119bffba */
  if (!C.zf) goto L_119bffba;
  /* 119bffa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119bffa5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 119bffab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 119bffb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bffb8 je 0x119bffc1 */
  if (C.zf) goto L_119bffc1;
L_119bffba:;
  /* 119bffba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 119bffbf jmp 0x119c0029 */
  goto L_119c0029;
L_119bffc1:;
  /* 119bffc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 119bffc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bffcd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 119bffd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119bffd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119bffdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119bffde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119bffe1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119bffe3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119bffe6 jmp 0x119bfaea */
  goto L_119bfaea;
L_119bffeb:;
  /* 119bffeb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 119bfff1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 119bfff7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119bfff9 jne 0x119c000c */
  if (!C.zf) goto L_119c000c;
  /* 119bfffb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 119c0001 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 119c0007 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c000a je 0x119c0013 */
  if (C.zf) goto L_119c0013;
L_119c000c:;
  /* 119c000c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 119c0011 jmp 0x119c0029 */
  goto L_119c0029;
L_119c0013:;
  /* 119c0013 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 119c0019 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c001c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 119c0022 jmp 0x119bfa53 */
  goto L_119bfa53;
L_119c0027:;
  /* 119c0027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c0029:;
  /* 119c0029 mov esp, ebp */
  ESP = (EBP);
  /* 119c002b pop ebp */
  EBP = (pop32());
  /* 119c002c ret  */
  ESPCHK(0x119bfa10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010030 @ 0x119c0030 (836 bytes, 238 insns) */
void f_119c0030(void) {
  FTRACE(0x119c0030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0030 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0031 mov ebp, esp */
  EBP = (ESP);
  /* 119c0033 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0036 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c0038 call 0x119bdb80 */
  push32(0x119c003du); f_119bdb80();
  /* 119c003d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0043 push eax */
  push32((uint32_t)(EAX));
  /* 119c0044 call 0x119c0380 */
  push32(0x119c0049u); f_119c0380();
  /* 119c0049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c004c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c004f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0052 cmp ecx, dword ptr [0x119e74a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e74a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0058 jne 0x119c006b */
  if (!C.zf) goto L_119c006b;
  /* 119c005a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c005c call 0x119bdc20 */
  push32(0x119c0061u); f_119bdc20();
  /* 119c0061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c0066 jmp 0x119c0370 */
  goto L_119c0370;
L_119c006b:;
  /* 119c006b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c006f jne 0x119c008c */
  if (!C.zf) goto L_119c008c;
  /* 119c0071 call 0x119c0460 */
  push32(0x119c0076u); f_119c0460();
  /* 119c0076 call 0x119c04e0 */
  push32(0x119c007bu); f_119c04e0();
  /* 119c007b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c007d call 0x119bdc20 */
  push32(0x119c0082u); f_119bdc20();
  /* 119c0082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c0087 jmp 0x119c0370 */
  goto L_119c0370;
L_119c008c:;
  /* 119c008c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c0093 jmp 0x119c009e */
  goto L_119c009e;
L_119c0095:;
  /* 119c0095 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c009b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c009e:;
  /* 119c009e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c00a2 jae 0x119c01ef */
  if (!C.cf) goto L_119c01ef;
  /* 119c00a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c00ab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c00ae mov ecx, dword ptr [eax + 0x119e51a8] */
  ECX = (r32((uint32_t)(EAX + 0x119e51a8)));
  /* 119c00b4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c00b7 jne 0x119c01ea */
  if (!C.zf) goto L_119c01ea;
  /* 119c00bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119c00c4 jmp 0x119c00cf */
  goto L_119c00cf;
L_119c00c6:;
  /* 119c00c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c00c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c00cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_119c00cf:;
  /* 119c00cf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c00d6 jae 0x119c00e4 */
  if (!C.cf) goto L_119c00e4;
  /* 119c00d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c00db mov byte ptr [eax + 0x119e7640], 0 */
  w8((uint32_t)(EAX + 0x119e7640), (0x0u));
  /* 119c00e2 jmp 0x119c00c6 */
  goto L_119c00c6;
L_119c00e4:;
  /* 119c00e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c00eb jmp 0x119c00f6 */
  goto L_119c00f6;
L_119c00ed:;
  /* 119c00ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c00f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c00f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119c00f6:;
  /* 119c00f6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c00fa jae 0x119c0177 */
  if (!C.cf) goto L_119c0177;
  /* 119c00fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c00ff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0102 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0105 lea ecx, [edx + eax*8 + 0x119e51b8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x119e51b8));
  /* 119c010c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c010f jmp 0x119c011a */
  goto L_119c011a;
L_119c0111:;
  /* 119c0111 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c0114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0117 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119c011a:;
  /* 119c011a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c011d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c011f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c0121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c0123 je 0x119c0172 */
  if (C.zf) goto L_119c0172;
  /* 119c0125 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c0128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c012a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119c012d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c012f je 0x119c0172 */
  if (C.zf) goto L_119c0172;
  /* 119c0131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c0134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c0138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119c013b jmp 0x119c0146 */
  goto L_119c0146;
L_119c013d:;
  /* 119c013d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119c0146:;
  /* 119c0146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c0149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c014b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119c014e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0151 ja 0x119c0170 */
  if ((!C.cf&&!C.zf)) goto L_119c0170;
  /* 119c0153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0156 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0159 mov dl, byte ptr [eax + 0x119e7641] */
  DL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119c015f or dl, byte ptr [ecx + 0x119e51a0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x119e51a0))); DL = (_r); fl_logic(_r,8); }
  /* 119c0165 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0168 mov byte ptr [eax + 0x119e7641], dl */
  w8((uint32_t)(EAX + 0x119e7641), (DL));
  /* 119c016e jmp 0x119c013d */
  goto L_119c013d;
L_119c0170:;
  /* 119c0170 jmp 0x119c0111 */
  goto L_119c0111;
L_119c0172:;
  /* 119c0172 jmp 0x119c00ed */
  goto L_119c00ed;
L_119c0177:;
  /* 119c0177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c017a mov dword ptr [0x119e74a0], ecx */
  w32((uint32_t)(0x119e74a0), (ECX));
  /* 119c0180 mov dword ptr [0x119e752c], 1 */
  w32((uint32_t)(0x119e752c), (0x1u));
  /* 119c018a mov edx, dword ptr [0x119e74a0] */
  EDX = (r32((uint32_t)(0x119e74a0)));
  /* 119c0190 push edx */
  push32((uint32_t)(EDX));
  /* 119c0191 call 0x119c03e0 */
  push32(0x119c0196u); f_119c03e0();
  /* 119c0196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0199 mov dword ptr [0x119e7744], eax */
  w32((uint32_t)(0x119e7744), (EAX));
  /* 119c019e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c01a5 jmp 0x119c01b0 */
  goto L_119c01b0;
L_119c01a7:;
  /* 119c01a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c01aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c01ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119c01b0:;
  /* 119c01b0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c01b4 jae 0x119c01d4 */
  if (!C.cf) goto L_119c01d4;
  /* 119c01b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c01b9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c01bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c01bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c01c2 mov cx, word ptr [ecx + eax*2 + 0x119e51ac] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x119e51ac)));
  /* 119c01ca mov word ptr [edx*2 + 0x119e7520], cx */
  w16((uint32_t)(EDX*2 + 0x119e7520), (CX));
  /* 119c01d2 jmp 0x119c01a7 */
  goto L_119c01a7;
L_119c01d4:;
  /* 119c01d4 call 0x119c04e0 */
  push32(0x119c01d9u); f_119c04e0();
  /* 119c01d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c01db call 0x119bdc20 */
  push32(0x119c01e0u); f_119bdc20();
  /* 119c01e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c01e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c01e5 jmp 0x119c0370 */
  goto L_119c0370;
L_119c01ea:;
  /* 119c01ea jmp 0x119c0095 */
  goto L_119c0095;
L_119c01ef:;
  /* 119c01ef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 119c01f2 push edx */
  push32((uint32_t)(EDX));
  /* 119c01f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c01f6 push eax */
  push32((uint32_t)(EAX));
  /* 119c01f7 call dword ptr [0x119e9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9348))), 0x119c01fdu);
  /* 119c01fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0200 jne 0x119c0342 */
  if (!C.zf) goto L_119c0342;
  /* 119c0206 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119c020d jmp 0x119c0218 */
  goto L_119c0218;
L_119c020f:;
  /* 119c020f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0215 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_119c0218:;
  /* 119c0218 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c021f jae 0x119c022d */
  if (!C.cf) goto L_119c022d;
  /* 119c0221 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0224 mov byte ptr [edx + 0x119e7640], 0 */
  w8((uint32_t)(EDX + 0x119e7640), (0x0u));
  /* 119c022b jmp 0x119c020f */
  goto L_119c020f;
L_119c022d:;
  /* 119c022d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0230 mov dword ptr [0x119e74a0], eax */
  w32((uint32_t)(0x119e74a0), (EAX));
  /* 119c0235 mov dword ptr [0x119e7744], 0 */
  w32((uint32_t)(0x119e7744), (0x0u));
  /* 119c023f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0243 jbe 0x119c02fe */
  if ((C.cf||C.zf)) goto L_119c02fe;
  /* 119c0249 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 119c024c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 119c024f jmp 0x119c025a */
  goto L_119c025a;
L_119c0251:;
  /* 119c0251 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c0254 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0257 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_119c025a:;
  /* 119c025a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c025d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c025f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c0261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c0263 je 0x119c02ac */
  if (C.zf) goto L_119c02ac;
  /* 119c0265 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c0268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c026a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119c026d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c026f je 0x119c02ac */
  if (C.zf) goto L_119c02ac;
  /* 119c0271 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c0274 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0276 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c0278 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119c027b jmp 0x119c0286 */
  goto L_119c0286;
L_119c027d:;
  /* 119c027d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0283 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119c0286:;
  /* 119c0286 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c0289 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c028b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119c028e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0291 ja 0x119c02aa */
  if ((!C.cf&&!C.zf)) goto L_119c02aa;
  /* 119c0293 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c0296 mov cl, byte ptr [eax + 0x119e7641] */
  CL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119c029c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 119c029f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c02a2 mov byte ptr [edx + 0x119e7641], cl */
  w8((uint32_t)(EDX + 0x119e7641), (CL));
  /* 119c02a8 jmp 0x119c027d */
  goto L_119c027d;
L_119c02aa:;
  /* 119c02aa jmp 0x119c0251 */
  goto L_119c0251;
L_119c02ac:;
  /* 119c02ac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 119c02b3 jmp 0x119c02be */
  goto L_119c02be;
L_119c02b5:;
  /* 119c02b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c02b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c02bb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119c02be:;
  /* 119c02be cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c02c5 jae 0x119c02de */
  if (!C.cf) goto L_119c02de;
  /* 119c02c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c02ca mov dl, byte ptr [ecx + 0x119e7641] */
  DL = (r8((uint32_t)(ECX + 0x119e7641)));
  /* 119c02d0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 119c02d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c02d6 mov byte ptr [eax + 0x119e7641], dl */
  w8((uint32_t)(EAX + 0x119e7641), (DL));
  /* 119c02dc jmp 0x119c02b5 */
  goto L_119c02b5;
L_119c02de:;
  /* 119c02de mov ecx, dword ptr [0x119e74a0] */
  ECX = (r32((uint32_t)(0x119e74a0)));
  /* 119c02e4 push ecx */
  push32((uint32_t)(ECX));
  /* 119c02e5 call 0x119c03e0 */
  push32(0x119c02eau); f_119c03e0();
  /* 119c02ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c02ed mov dword ptr [0x119e7744], eax */
  w32((uint32_t)(0x119e7744), (EAX));
  /* 119c02f2 mov dword ptr [0x119e752c], 1 */
  w32((uint32_t)(0x119e752c), (0x1u));
  /* 119c02fc jmp 0x119c0308 */
  goto L_119c0308;
L_119c02fe:;
  /* 119c02fe mov dword ptr [0x119e752c], 0 */
  w32((uint32_t)(0x119e752c), (0x0u));
L_119c0308:;
  /* 119c0308 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c030f jmp 0x119c031a */
  goto L_119c031a;
L_119c0311:;
  /* 119c0311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0314 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0317 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119c031a:;
  /* 119c031a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c031e jae 0x119c032f */
  if (!C.cf) goto L_119c032f;
  /* 119c0320 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0323 mov word ptr [eax*2 + 0x119e7520], 0 */
  w16((uint32_t)(EAX*2 + 0x119e7520), (0x0u));
  /* 119c032d jmp 0x119c0311 */
  goto L_119c0311;
L_119c032f:;
  /* 119c032f call 0x119c04e0 */
  push32(0x119c0334u); f_119c04e0();
  /* 119c0334 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c0336 call 0x119bdc20 */
  push32(0x119c033bu); f_119bdc20();
  /* 119c033b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c033e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c0340 jmp 0x119c0370 */
  goto L_119c0370;
L_119c0342:;
  /* 119c0342 cmp dword ptr [0x119e7300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0349 je 0x119c0363 */
  if (C.zf) goto L_119c0363;
  /* 119c034b call 0x119c0460 */
  push32(0x119c0350u); f_119c0460();
  /* 119c0350 call 0x119c04e0 */
  push32(0x119c0355u); f_119c04e0();
  /* 119c0355 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c0357 call 0x119bdc20 */
  push32(0x119c035cu); f_119bdc20();
  /* 119c035c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c035f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c0361 jmp 0x119c0370 */
  goto L_119c0370;
L_119c0363:;
  /* 119c0363 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c0365 call 0x119bdc20 */
  push32(0x119c036au); f_119bdc20();
  /* 119c036a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c036d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119c0370:;
  /* 119c0370 mov esp, ebp */
  ESP = (EBP);
  /* 119c0372 pop ebp */
  EBP = (pop32());
  /* 119c0373 ret  */
  ESPCHK(0x119c0030u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x119c0380 (89 bytes, 21 insns) */
void f_119c0380(void) {
  FTRACE(0x119c0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0380 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0381 mov ebp, esp */
  EBP = (ESP);
  /* 119c0383 mov dword ptr [0x119e7300], 0 */
  w32((uint32_t)(0x119e7300), (0x0u));
  /* 119c038d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0391 jne 0x119c03a5 */
  if (!C.zf) goto L_119c03a5;
  /* 119c0393 mov dword ptr [0x119e7300], 1 */
  w32((uint32_t)(0x119e7300), (0x1u));
  /* 119c039d call dword ptr [0x119e9340] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9340))), 0x119c03a3u);
  /* 119c03a3 jmp 0x119c03d7 */
  goto L_119c03d7;
L_119c03a5:;
  /* 119c03a5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c03a9 jne 0x119c03bd */
  if (!C.zf) goto L_119c03bd;
  /* 119c03ab mov dword ptr [0x119e7300], 1 */
  w32((uint32_t)(0x119e7300), (0x1u));
  /* 119c03b5 call dword ptr [0x119e9344] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9344))), 0x119c03bbu);
  /* 119c03bb jmp 0x119c03d7 */
  goto L_119c03d7;
L_119c03bd:;
  /* 119c03bd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c03c1 jne 0x119c03d4 */
  if (!C.zf) goto L_119c03d4;
  /* 119c03c3 mov dword ptr [0x119e7300], 1 */
  w32((uint32_t)(0x119e7300), (0x1u));
  /* 119c03cd mov eax, dword ptr [0x119e7328] */
  EAX = (r32((uint32_t)(0x119e7328)));
  /* 119c03d2 jmp 0x119c03d7 */
  goto L_119c03d7;
L_119c03d4:;
  /* 119c03d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_119c03d7:;
  /* 119c03d7 pop ebp */
  EBP = (pop32());
  /* 119c03d8 ret  */
  ESPCHK(0x119c0380u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x119c03e0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_119c03e0(void) {
  FTRACE(0x119c03e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c03e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c03e1 mov ebp, esp */
  EBP = (ESP);
  /* 119c03e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c03e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c03e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c03ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c03ed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c03f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c03f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c03fa ja 0x119c042a */
  if ((!C.cf&&!C.zf)) goto L_119c042a;
  /* 119c03fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c03ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0401 mov dl, byte ptr [eax + 0x119c0444] */
  DL = (r8((uint32_t)(EAX + 0x119c0444)));
  /* 119c0407 jmp dword ptr [edx*4 + 0x119c0430] */
  switch (EDX) {
    case 0: goto L_119c040e;
    case 1: goto L_119c0415;
    case 2: goto L_119c041c;
    case 3: goto L_119c0423;
    case 4: goto L_119c042a;
    default: x86_unimpl("switch@0x119c0407 out of table"); return;
  }
L_119c040e:;
  /* 119c040e mov eax, 0x411 */
  EAX = (0x411u);
  /* 119c0413 jmp 0x119c042c */
  goto L_119c042c;
L_119c0415:;
  /* 119c0415 mov eax, 0x804 */
  EAX = (0x804u);
  /* 119c041a jmp 0x119c042c */
  goto L_119c042c;
L_119c041c:;
  /* 119c041c mov eax, 0x412 */
  EAX = (0x412u);
  /* 119c0421 jmp 0x119c042c */
  goto L_119c042c;
L_119c0423:;
  /* 119c0423 mov eax, 0x404 */
  EAX = (0x404u);
  /* 119c0428 jmp 0x119c042c */
  goto L_119c042c;
L_119c042a:;
  /* 119c042a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c042c:;
  /* 119c042c mov esp, ebp */
  ESP = (EBP);
  /* 119c042e pop ebp */
  EBP = (pop32());
  /* 119c042f ret  */
  ESPCHK(0x119c03e0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x119c0460 (116 bytes, 29 insns) */
void f_119c0460(void) {
  FTRACE(0x119c0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0460 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0461 mov ebp, esp */
  EBP = (ESP);
  /* 119c0463 push ecx */
  push32((uint32_t)(ECX));
  /* 119c0464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c046b jmp 0x119c0476 */
  goto L_119c0476;
L_119c046d:;
  /* 119c046d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c0476:;
  /* 119c0476 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c047d jge 0x119c048b */
  if ((C.sf==C.of)) goto L_119c048b;
  /* 119c047f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0482 mov byte ptr [ecx + 0x119e7640], 0 */
  w8((uint32_t)(ECX + 0x119e7640), (0x0u));
  /* 119c0489 jmp 0x119c046d */
  goto L_119c046d;
L_119c048b:;
  /* 119c048b mov dword ptr [0x119e74a0], 0 */
  w32((uint32_t)(0x119e74a0), (0x0u));
  /* 119c0495 mov dword ptr [0x119e752c], 0 */
  w32((uint32_t)(0x119e752c), (0x0u));
  /* 119c049f mov dword ptr [0x119e7744], 0 */
  w32((uint32_t)(0x119e7744), (0x0u));
  /* 119c04a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c04b0 jmp 0x119c04bb */
  goto L_119c04bb;
L_119c04b2:;
  /* 119c04b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c04b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c04b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c04bb:;
  /* 119c04bb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c04bf jge 0x119c04d0 */
  if ((C.sf==C.of)) goto L_119c04d0;
  /* 119c04c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c04c4 mov word ptr [eax*2 + 0x119e7520], 0 */
  w16((uint32_t)(EAX*2 + 0x119e7520), (0x0u));
  /* 119c04ce jmp 0x119c04b2 */
  goto L_119c04b2;
L_119c04d0:;
  /* 119c04d0 mov esp, ebp */
  ESP = (EBP);
  /* 119c04d2 pop ebp */
  EBP = (pop32());
  /* 119c04d3 ret  */
  ESPCHK(0x119c0460u, _esp0);
  ESP += 4; return;
}

/* FUN_100104e0 @ 0x119c04e0 (770 bytes, 175 insns) */
void f_119c04e0(void) {
  FTRACE(0x119c04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c04e1 mov ebp, esp */
  EBP = (ESP);
  /* 119c04e3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c04e9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 119c04ef push eax */
  push32((uint32_t)(EAX));
  /* 119c04f0 mov ecx, dword ptr [0x119e74a0] */
  ECX = (r32((uint32_t)(0x119e74a0)));
  /* 119c04f6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c04f7 call dword ptr [0x119e9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9348))), 0x119c04fdu);
  /* 119c04fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0500 jne 0x119c0719 */
  if (!C.zf) goto L_119c0719;
  /* 119c0506 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 119c0510 jmp 0x119c0521 */
  goto L_119c0521;
L_119c0512:;
  /* 119c0512 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0518 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c051b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_119c0521:;
  /* 119c0521 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c052b jae 0x119c0542 */
  if (!C.cf) goto L_119c0542;
  /* 119c052d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0533 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 119c0539 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 119c0540 jmp 0x119c0512 */
  goto L_119c0512;
L_119c0542:;
  /* 119c0542 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 119c0549 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 119c054f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c0552 jmp 0x119c055d */
  goto L_119c055d;
L_119c0554:;
  /* 119c0554 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0557 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c055a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c055d:;
  /* 119c055d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0560 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0562 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c0564 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c0566 je 0x119c05a8 */
  if (C.zf) goto L_119c05a8;
  /* 119c0568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c056b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c056d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c056f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 119c0575 jmp 0x119c0586 */
  goto L_119c0586;
L_119c0577:;
  /* 119c0577 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c057d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0580 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_119c0586:;
  /* 119c0586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0589 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c058b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119c058e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0594 ja 0x119c05a6 */
  if ((!C.cf&&!C.zf)) goto L_119c05a6;
  /* 119c0596 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c059c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 119c05a4 jmp 0x119c0577 */
  goto L_119c0577;
L_119c05a6:;
  /* 119c05a6 jmp 0x119c0554 */
  goto L_119c0554;
L_119c05a8:;
  /* 119c05a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c05aa mov eax, dword ptr [0x119e7744] */
  EAX = (r32((uint32_t)(0x119e7744)));
  /* 119c05af push eax */
  push32((uint32_t)(EAX));
  /* 119c05b0 mov ecx, dword ptr [0x119e74a0] */
  ECX = (r32((uint32_t)(0x119e74a0)));
  /* 119c05b6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c05b7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 119c05bd push edx */
  push32((uint32_t)(EDX));
  /* 119c05be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c05c3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 119c05c9 push eax */
  push32((uint32_t)(EAX));
  /* 119c05ca push 1 */
  push32((uint32_t)(0x1u));
  /* 119c05cc call 0x119c1ff0 */
  push32(0x119c05d1u); f_119c1ff0();
  /* 119c05d1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c05d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c05d6 mov ecx, dword ptr [0x119e74a0] */
  ECX = (r32((uint32_t)(0x119e74a0)));
  /* 119c05dc push ecx */
  push32((uint32_t)(ECX));
  /* 119c05dd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c05e2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 119c05e8 push edx */
  push32((uint32_t)(EDX));
  /* 119c05e9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c05ee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 119c05f4 push eax */
  push32((uint32_t)(EAX));
  /* 119c05f5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c05fa mov ecx, dword ptr [0x119e7744] */
  ECX = (r32((uint32_t)(0x119e7744)));
  /* 119c0600 push ecx */
  push32((uint32_t)(ECX));
  /* 119c0601 call 0x119c21b0 */
  push32(0x119c0606u); f_119c21b0();
  /* 119c0606 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0609 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c060b mov edx, dword ptr [0x119e74a0] */
  EDX = (r32((uint32_t)(0x119e74a0)));
  /* 119c0611 push edx */
  push32((uint32_t)(EDX));
  /* 119c0612 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c0617 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 119c061d push eax */
  push32((uint32_t)(EAX));
  /* 119c061e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c0623 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 119c0629 push ecx */
  push32((uint32_t)(ECX));
  /* 119c062a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 119c062f mov edx, dword ptr [0x119e7744] */
  EDX = (r32((uint32_t)(0x119e7744)));
  /* 119c0635 push edx */
  push32((uint32_t)(EDX));
  /* 119c0636 call 0x119c21b0 */
  push32(0x119c063bu); f_119c21b0();
  /* 119c063b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c063e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 119c0648 jmp 0x119c0659 */
  goto L_119c0659;
L_119c064a:;
  /* 119c064a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0653 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_119c0659:;
  /* 119c0659 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0663 jae 0x119c0714 */
  if (!C.cf) goto L_119c0714;
  /* 119c0669 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c066f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0671 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 119c0679 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119c067c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c067e je 0x119c06b6 */
  if (C.zf) goto L_119c06b6;
  /* 119c0680 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0686 mov cl, byte ptr [eax + 0x119e7641] */
  CL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119c068c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 119c068f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0695 mov byte ptr [edx + 0x119e7641], cl */
  w8((uint32_t)(EDX + 0x119e7641), (CL));
  /* 119c069b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06a7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 119c06ae mov byte ptr [eax + 0x119e7540], dl */
  w8((uint32_t)(EAX + 0x119e7540), (DL));
  /* 119c06b4 jmp 0x119c070f */
  goto L_119c070f;
L_119c06b6:;
  /* 119c06b6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c06be mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 119c06c6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 119c06c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c06cb je 0x119c0702 */
  if (C.zf) goto L_119c0702;
  /* 119c06cd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06d3 mov al, byte ptr [edx + 0x119e7641] */
  AL = (r8((uint32_t)(EDX + 0x119e7641)));
  /* 119c06d9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 119c06db mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06e1 mov byte ptr [ecx + 0x119e7641], al */
  w8((uint32_t)(ECX + 0x119e7641), (AL));
  /* 119c06e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c06f3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 119c06fa mov byte ptr [edx + 0x119e7540], cl */
  w8((uint32_t)(EDX + 0x119e7540), (CL));
  /* 119c0700 jmp 0x119c070f */
  goto L_119c070f;
L_119c0702:;
  /* 119c0702 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0708 mov byte ptr [edx + 0x119e7540], 0 */
  w8((uint32_t)(EDX + 0x119e7540), (0x0u));
L_119c070f:;
  /* 119c070f jmp 0x119c064a */
  goto L_119c064a;
L_119c0714:;
  /* 119c0714 jmp 0x119c07de */
  goto L_119c07de;
L_119c0719:;
  /* 119c0719 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 119c0723 jmp 0x119c0734 */
  goto L_119c0734;
L_119c0725:;
  /* 119c0725 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c072b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c072e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_119c0734:;
  /* 119c0734 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c073e jae 0x119c07de */
  if (!C.cf) goto L_119c07de;
  /* 119c0744 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c074b jb 0x119c0788 */
  if (C.cf) goto L_119c0788;
  /* 119c074d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0754 ja 0x119c0788 */
  if ((!C.cf&&!C.zf)) goto L_119c0788;
  /* 119c0756 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c075c mov dl, byte ptr [ecx + 0x119e7641] */
  DL = (r8((uint32_t)(ECX + 0x119e7641)));
  /* 119c0762 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 119c0765 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c076b mov byte ptr [eax + 0x119e7641], dl */
  w8((uint32_t)(EAX + 0x119e7641), (DL));
  /* 119c0771 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0777 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c077a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c0780 mov byte ptr [edx + 0x119e7540], cl */
  w8((uint32_t)(EDX + 0x119e7540), (CL));
  /* 119c0786 jmp 0x119c07d9 */
  goto L_119c07d9;
L_119c0788:;
  /* 119c0788 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c078f jb 0x119c07cc */
  if (C.cf) goto L_119c07cc;
  /* 119c0791 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0798 ja 0x119c07cc */
  if ((!C.cf&&!C.zf)) goto L_119c07cc;
  /* 119c079a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c07a0 mov cl, byte ptr [eax + 0x119e7641] */
  CL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119c07a6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119c07a9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c07af mov byte ptr [edx + 0x119e7641], cl */
  w8((uint32_t)(EDX + 0x119e7641), (CL));
  /* 119c07b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c07bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c07be mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c07c4 mov byte ptr [ecx + 0x119e7540], al */
  w8((uint32_t)(ECX + 0x119e7540), (AL));
  /* 119c07ca jmp 0x119c07d9 */
  goto L_119c07d9;
L_119c07cc:;
  /* 119c07cc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 119c07d2 mov byte ptr [edx + 0x119e7540], 0 */
  w8((uint32_t)(EDX + 0x119e7540), (0x0u));
L_119c07d9:;
  /* 119c07d9 jmp 0x119c0725 */
  goto L_119c0725;
L_119c07de:;
  /* 119c07de mov esp, ebp */
  ESP = (EBP);
  /* 119c07e0 pop ebp */
  EBP = (pop32());
  /* 119c07e1 ret  */
  ESPCHK(0x119c04e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x119c07f0 (23 bytes, 9 insns) */
void f_119c07f0(void) {
  FTRACE(0x119c07f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c07f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c07f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c07f3 cmp dword ptr [0x119e752c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e752c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c07fa je 0x119c0803 */
  if (C.zf) goto L_119c0803;
  /* 119c07fc mov eax, dword ptr [0x119e74a0] */
  EAX = (r32((uint32_t)(0x119e74a0)));
  /* 119c0801 jmp 0x119c0805 */
  goto L_119c0805;
L_119c0803:;
  /* 119c0803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c0805:;
  /* 119c0805 pop ebp */
  EBP = (pop32());
  /* 119c0806 ret  */
  ESPCHK(0x119c07f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010810 @ 0x119c0810 (34 bytes, 10 insns) */
void f_119c0810(void) {
  FTRACE(0x119c0810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0810 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0811 mov ebp, esp */
  EBP = (ESP);
  /* 119c0813 cmp dword ptr [0x119e8c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c081a jne 0x119c0830 */
  if (!C.zf) goto L_119c0830;
  /* 119c081c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 119c081e call 0x119c0030 */
  push32(0x119c0823u); f_119c0030();
  /* 119c0823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0826 mov dword ptr [0x119e8c30], 1 */
  w32((uint32_t)(0x119e8c30), (0x1u));
L_119c0830:;
  /* 119c0830 pop ebp */
  EBP = (pop32());
  /* 119c0831 ret  */
  ESPCHK(0x119c0810u, _esp0);
  ESP += 4; return;
}

/* FUN_10010840 @ 0x119c0840 (664 bytes, 259 insns) [15 switch table(s)] */
void f_119c0840(void) {
  FTRACE(0x119c0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0840 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0841 mov ebp, esp */
  EBP = (ESP);
  /* 119c0843 push edi */
  push32((uint32_t)(EDI));
  /* 119c0844 push esi */
  push32((uint32_t)(ESI));
  /* 119c0845 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119c0848 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c084b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119c084e mov eax, ecx */
  EAX = (ECX);
  /* 119c0850 mov edx, ecx */
  EDX = (ECX);
  /* 119c0852 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0854 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0856 jbe 0x119c0860 */
  if ((C.cf||C.zf)) goto L_119c0860;
  /* 119c0858 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c085a jb 0x119c09d8 */
  if (C.cf) goto L_119c09d8;
L_119c0860:;
  /* 119c0860 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119c0866 jne 0x119c087c */
  if (!C.zf) goto L_119c087c;
  /* 119c0868 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c086b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119c086e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0871 jb 0x119c089c */
  if (C.cf) goto L_119c089c;
  /* 119c0873 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c0875 jmp dword ptr [edx*4 + 0x119c0988] */
  switch (EDX) {
    case 0: goto L_119c0998;
    case 1: goto L_119c09a0;
    case 2: goto L_119c09ac;
    case 3: goto L_119c09c0;
    default: x86_unimpl("switch@0x119c0875 out of table"); return;
  }
L_119c087c:;
  /* 119c087c mov eax, edi */
  EAX = (EDI);
  /* 119c087e mov edx, 3 */
  EDX = (0x3u);
  /* 119c0883 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0886 jb 0x119c0894 */
  if (C.cf) goto L_119c0894;
  /* 119c0888 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119c088b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c088d jmp dword ptr [eax*4 + 0x119c08a0] */
  switch (EAX) {
    case 1: goto L_119c08b0;
    case 2: goto L_119c08dc;
    case 3: goto L_119c0900;
    default: x86_unimpl("switch@0x119c088d out of table"); return;
  }
L_119c0894:;
  /* 119c0894 jmp dword ptr [ecx*4 + 0x119c0998] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x119c0998)))); return;
  /* 119c089b nop  */
  /* nop */
L_119c089c:;
  /* 119c089c jmp dword ptr [ecx*4 + 0x119c091c] */
  switch (ECX) {
    case 0: goto L_119c097f;
    case 1: goto L_119c096c;
    case 2: goto L_119c0964;
    case 3: goto L_119c095c;
    case 4: goto L_119c0954;
    case 5: goto L_119c094c;
    case 6: goto L_119c0944;
    case 7: goto L_119c093c;
    default: x86_unimpl("switch@0x119c089c out of table"); return;
  }
  /* 119c08a3 nop  */
  /* nop */
L_119c08b0:;
  /* 119c08b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c08b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c08b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119c08b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119c08b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119c08bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119c08bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c08c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119c08c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c08c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c08cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c08ce jb 0x119c089c */
  if (C.cf) goto L_119c089c;
  /* 119c08d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c08d2 jmp dword ptr [edx*4 + 0x119c0988] */
  switch (EDX) {
    case 0: goto L_119c0998;
    case 1: goto L_119c09a0;
    case 2: goto L_119c09ac;
    case 3: goto L_119c09c0;
    default: x86_unimpl("switch@0x119c08d2 out of table"); return;
  }
  /* 119c08d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c08dc:;
  /* 119c08dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c08de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c08e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119c08e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119c08e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c08e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119c08eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c08ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c08f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c08f4 jb 0x119c089c */
  if (C.cf) goto L_119c089c;
  /* 119c08f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c08f8 jmp dword ptr [edx*4 + 0x119c0988] */
  switch (EDX) {
    case 0: goto L_119c0998;
    case 1: goto L_119c09a0;
    case 2: goto L_119c09ac;
    case 3: goto L_119c09c0;
    default: x86_unimpl("switch@0x119c08f8 out of table"); return;
  }
  /* 119c08ff nop  */
  /* nop */
L_119c0900:;
  /* 119c0900 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0902 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c0904 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119c0906 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c0907 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c090a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119c090b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c090e jb 0x119c089c */
  if (C.cf) goto L_119c089c;
  /* 119c0910 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c0912 jmp dword ptr [edx*4 + 0x119c0988] */
  switch (EDX) {
    case 0: goto L_119c0998;
    case 1: goto L_119c09a0;
    case 2: goto L_119c09ac;
    case 3: goto L_119c09c0;
    default: x86_unimpl("switch@0x119c0912 out of table"); return;
  }
  /* 119c0919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c093c:;
  /* 119c093c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 119c0940 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_119c0944:;
  /* 119c0944 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 119c0948 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_119c094c:;
  /* 119c094c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 119c0950 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_119c0954:;
  /* 119c0954 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 119c0958 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_119c095c:;
  /* 119c095c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 119c0960 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_119c0964:;
  /* 119c0964 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 119c0968 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_119c096c:;
  /* 119c096c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 119c0970 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 119c0974 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119c097b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c097d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119c097f:;
  /* 119c097f jmp dword ptr [edx*4 + 0x119c0988] */
  switch (EDX) {
    case 0: goto L_119c0998;
    case 1: goto L_119c09a0;
    case 2: goto L_119c09ac;
    case 3: goto L_119c09c0;
    default: x86_unimpl("switch@0x119c097f out of table"); return;
  }
  /* 119c0986 mov edi, edi */
  EDI = (EDI);
L_119c0998:;
  /* 119c0998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c099b pop esi */
  ESI = (pop32());
  /* 119c099c pop edi */
  EDI = (pop32());
  /* 119c099d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c099e ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c099f nop  */
  /* nop */
L_119c09a0:;
  /* 119c09a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c09a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119c09a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c09a7 pop esi */
  ESI = (pop32());
  /* 119c09a8 pop edi */
  EDI = (pop32());
  /* 119c09a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c09aa ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c09ab nop  */
  /* nop */
L_119c09ac:;
  /* 119c09ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c09ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119c09b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119c09b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119c09b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c09b9 pop esi */
  ESI = (pop32());
  /* 119c09ba pop edi */
  EDI = (pop32());
  /* 119c09bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c09bc ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c09bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c09c0:;
  /* 119c09c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c09c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119c09c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119c09c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119c09ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119c09cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119c09d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c09d3 pop esi */
  ESI = (pop32());
  /* 119c09d4 pop edi */
  EDI = (pop32());
  /* 119c09d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c09d6 ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c09d7 nop  */
  /* nop */
L_119c09d8:;
  /* 119c09d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 119c09dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 119c09e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119c09e6 jne 0x119c0a0c */
  if (!C.zf) goto L_119c0a0c;
  /* 119c09e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c09eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119c09ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c09f1 jb 0x119c0a00 */
  if (C.cf) goto L_119c0a00;
  /* 119c09f3 std  */
  C.df=1;
  /* 119c09f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c09f6 cld  */
  C.df=0;
  /* 119c09f7 jmp dword ptr [edx*4 + 0x119c0b20] */
  switch (EDX) {
    case 0: goto L_119c0b30;
    case 1: goto L_119c0b38;
    case 2: goto L_119c0b48;
    case 3: goto L_119c0b5c;
    default: x86_unimpl("switch@0x119c09f7 out of table"); return;
  }
  /* 119c09fe mov edi, edi */
  EDI = (EDI);
L_119c0a00:;
  /* 119c0a00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c0a02 jmp dword ptr [ecx*4 + 0x119c0ad0] */
  switch (ECX) {
    case 0: goto L_119c0b17;
    default: x86_unimpl("switch@0x119c0a02 out of table"); return;
  }
  /* 119c0a09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c0a0c:;
  /* 119c0a0c mov eax, edi */
  EAX = (EDI);
  /* 119c0a0e mov edx, 3 */
  EDX = (0x3u);
  /* 119c0a13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0a16 jb 0x119c0a24 */
  if (C.cf) goto L_119c0a24;
  /* 119c0a18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119c0a1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0a1d jmp dword ptr [eax*4 + 0x119c0a28] */
  switch (EAX) {
    case 1: goto L_119c0a38;
    case 2: goto L_119c0a58;
    case 3: goto L_119c0a80;
    default: x86_unimpl("switch@0x119c0a1d out of table"); return;
  }
L_119c0a24:;
  /* 119c0a24 jmp dword ptr [ecx*4 + 0x119c0b20] */
  switch (ECX) {
    case 0: goto L_119c0b30;
    case 1: goto L_119c0b38;
    case 2: goto L_119c0b48;
    case 3: goto L_119c0b5c;
    default: x86_unimpl("switch@0x119c0a24 out of table"); return;
  }
  /* 119c0a2b nop  */
  /* nop */
L_119c0a38:;
  /* 119c0a38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119c0a3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0a3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119c0a40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 119c0a41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c0a44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119c0a45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0a48 jb 0x119c0a00 */
  if (C.cf) goto L_119c0a00;
  /* 119c0a4a std  */
  C.df=1;
  /* 119c0a4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c0a4d cld  */
  C.df=0;
  /* 119c0a4e jmp dword ptr [edx*4 + 0x119c0b20] */
  switch (EDX) {
    case 0: goto L_119c0b30;
    case 1: goto L_119c0b38;
    case 2: goto L_119c0b48;
    case 3: goto L_119c0b5c;
    default: x86_unimpl("switch@0x119c0a4e out of table"); return;
  }
  /* 119c0a55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c0a58:;
  /* 119c0a58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119c0a5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0a5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119c0a60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119c0a63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c0a66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119c0a69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0a6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0a6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0a72 jb 0x119c0a00 */
  if (C.cf) goto L_119c0a00;
  /* 119c0a74 std  */
  C.df=1;
  /* 119c0a75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c0a77 cld  */
  C.df=0;
  /* 119c0a78 jmp dword ptr [edx*4 + 0x119c0b20] */
  switch (EDX) {
    case 0: goto L_119c0b30;
    case 1: goto L_119c0b38;
    case 2: goto L_119c0b48;
    case 3: goto L_119c0b5c;
    default: x86_unimpl("switch@0x119c0a78 out of table"); return;
  }
  /* 119c0a7f nop  */
  /* nop */
L_119c0a80:;
  /* 119c0a80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119c0a83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c0a85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119c0a88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119c0a8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119c0a8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119c0a91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119c0a94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119c0a97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0a9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0a9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0aa0 jb 0x119c0a00 */
  if (C.cf) goto L_119c0a00;
  /* 119c0aa6 std  */
  C.df=1;
  /* 119c0aa7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119c0aa9 cld  */
  C.df=0;
  /* 119c0aaa jmp dword ptr [edx*4 + 0x119c0b20] */
  switch (EDX) {
    case 0: goto L_119c0b30;
    case 1: goto L_119c0b38;
    case 2: goto L_119c0b48;
    case 3: goto L_119c0b5c;
    default: x86_unimpl("switch@0x119c0aaa out of table"); return;
  }
  /* 119c0ab1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 119c0ab4 aam 0xa */
  x86_unimpl("aam @ 0x119c0ab4");
  /* 119c0ab6 pushfd  */
  x86_unimpl("pushfd @ 0x119c0ab6");
  /* 119c0ab7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0ab9 or bl, byte ptr [ecx + edx + 0x119c0ae4] */
  { uint32_t _r=(BL)|(r8((uint32_t)(ECX + EDX*1 + 0x119c0ae4))); BL = (_r); fl_logic(_r,8); }
  /* 119c0ac0 in al, dx */
  x86_unimpl("in @ 0x119c0ac0");
  /* 119c0ac1 or bl, byte ptr [ecx + edx + 0x119c0af4] */
  { uint32_t _r=(BL)|(r8((uint32_t)(ECX + EDX*1 + 0x119c0af4))); BL = (_r); fl_logic(_r,8); }
  /* 119c0ac8 cld  */
  C.df=0;
  /* 119c0ac9 or bl, byte ptr [ecx + edx + 0x119c0b04] */
  { uint32_t _r=(BL)|(r8((uint32_t)(ECX + EDX*1 + 0x119c0b04))); BL = (_r); fl_logic(_r,8); }
  /* 119c0ad4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 119c0ad8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 119c0adc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 119c0ae0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 119c0ae4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 119c0ae8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 119c0aec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 119c0af0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 119c0af4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 119c0af8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 119c0afc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 119c0b00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 119c0b04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 119c0b08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 119c0b0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119c0b13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0b15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119c0b17:;
  /* 119c0b17 jmp dword ptr [edx*4 + 0x119c0b20] */
  switch (EDX) {
    case 0: goto L_119c0b30;
    case 1: goto L_119c0b38;
    case 2: goto L_119c0b48;
    case 3: goto L_119c0b5c;
    default: x86_unimpl("switch@0x119c0b17 out of table"); return;
  }
  /* 119c0b1e mov edi, edi */
  EDI = (EDI);
L_119c0b30:;
  /* 119c0b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0b33 pop esi */
  ESI = (pop32());
  /* 119c0b34 pop edi */
  EDI = (pop32());
  /* 119c0b35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c0b36 ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c0b37 nop  */
  /* nop */
L_119c0b38:;
  /* 119c0b38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119c0b3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119c0b3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0b41 pop esi */
  ESI = (pop32());
  /* 119c0b42 pop edi */
  EDI = (pop32());
  /* 119c0b43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c0b44 ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c0b45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c0b48:;
  /* 119c0b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119c0b4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119c0b4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119c0b51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119c0b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0b57 pop esi */
  ESI = (pop32());
  /* 119c0b58 pop edi */
  EDI = (pop32());
  /* 119c0b59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c0b5a ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
  /* 119c0b5b nop  */
  /* nop */
L_119c0b5c:;
  /* 119c0b5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119c0b5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119c0b62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119c0b65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119c0b68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119c0b6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119c0b6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0b71 pop esi */
  ESI = (pop32());
  /* 119c0b72 pop edi */
  EDI = (pop32());
  /* 119c0b73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c0b74 ret  */
  ESPCHK(0x119c0840u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x119c0b80 (145 bytes, 42 insns) */
void f_119c0b80(void) {
  FTRACE(0x119c0b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0b80 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0b81 mov ebp, esp */
  EBP = (ESP);
  /* 119c0b83 push ecx */
  push32((uint32_t)(ECX));
  /* 119c0b84 call 0x119c0c30 */
  push32(0x119c0b89u); f_119c0c30();
  /* 119c0b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0b8c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119c0b8e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c0b95 jmp 0x119c0ba0 */
  goto L_119c0ba0;
L_119c0b97:;
  /* 119c0b97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0b9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0b9d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c0ba0:;
  /* 119c0ba0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0ba4 jae 0x119c0bca */
  if (!C.cf) goto L_119c0bca;
  /* 119c0ba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0ba9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0bac cmp ecx, dword ptr [eax*8 + 0x119e52a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x119e52a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0bb3 jne 0x119c0bc8 */
  if (!C.zf) goto L_119c0bc8;
  /* 119c0bb5 call 0x119c0c20 */
  push32(0x119c0bbau); f_119c0c20();
  /* 119c0bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0bbd mov ecx, dword ptr [edx*8 + 0x119e52a4] */
  ECX = (r32((uint32_t)(EDX*8 + 0x119e52a4)));
  /* 119c0bc4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119c0bc6 jmp 0x119c0c0d */
  goto L_119c0c0d;
L_119c0bc8:;
  /* 119c0bc8 jmp 0x119c0b97 */
  goto L_119c0b97;
L_119c0bca:;
  /* 119c0bca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0bce jb 0x119c0be3 */
  if (C.cf) goto L_119c0be3;
  /* 119c0bd0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0bd4 ja 0x119c0be3 */
  if ((!C.cf&&!C.zf)) goto L_119c0be3;
  /* 119c0bd6 call 0x119c0c20 */
  push32(0x119c0bdbu); f_119c0c20();
  /* 119c0bdb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 119c0be1 jmp 0x119c0c0d */
  goto L_119c0c0d;
L_119c0be3:;
  /* 119c0be3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0bea jb 0x119c0c02 */
  if (C.cf) goto L_119c0c02;
  /* 119c0bec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0bf3 ja 0x119c0c02 */
  if ((!C.cf&&!C.zf)) goto L_119c0c02;
  /* 119c0bf5 call 0x119c0c20 */
  push32(0x119c0bfau); f_119c0c20();
  /* 119c0bfa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 119c0c00 jmp 0x119c0c0d */
  goto L_119c0c0d;
L_119c0c02:;
  /* 119c0c02 call 0x119c0c20 */
  push32(0x119c0c07u); f_119c0c20();
  /* 119c0c07 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_119c0c0d:;
  /* 119c0c0d mov esp, ebp */
  ESP = (EBP);
  /* 119c0c0f pop ebp */
  EBP = (pop32());
  /* 119c0c10 ret  */
  ESPCHK(0x119c0b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x119c0c20 (13 bytes, 6 insns) */
void f_119c0c20(void) {
  FTRACE(0x119c0c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0c20 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0c21 mov ebp, esp */
  EBP = (ESP);
  /* 119c0c23 call 0x119b7c50 */
  push32(0x119c0c28u); f_119b7c50();
  /* 119c0c28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0c2b pop ebp */
  EBP = (pop32());
  /* 119c0c2c ret  */
  ESPCHK(0x119c0c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x119c0c30 (13 bytes, 6 insns) */
void f_119c0c30(void) {
  FTRACE(0x119c0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0c31 mov ebp, esp */
  EBP = (ESP);
  /* 119c0c33 call 0x119b7c50 */
  push32(0x119c0c38u); f_119b7c50();
  /* 119c0c38 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0c3b pop ebp */
  EBP = (pop32());
  /* 119c0c3c ret  */
  ESPCHK(0x119c0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c40 @ 0x119c0c40 (482 bytes, 138 insns) */
void f_119c0c40(void) {
  FTRACE(0x119c0c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0c40 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0c41 mov ebp, esp */
  EBP = (ESP);
  /* 119c0c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0c46 push esi */
  push32((uint32_t)(ESI));
  /* 119c0c47 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 119c0c4e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 119c0c50 call 0x119bdb80 */
  push32(0x119c0c55u); f_119bdb80();
  /* 119c0c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0c58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c0c5f jmp 0x119c0c6a */
  goto L_119c0c6a;
L_119c0c61:;
  /* 119c0c61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0c64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0c67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119c0c6a:;
  /* 119c0c6a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0c6e jge 0x119c0e10 */
  if ((C.sf==C.of)) goto L_119c0e10;
  /* 119c0c74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0c77 cmp dword ptr [ecx*4 + 0x119e8ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119e8ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0c7f je 0x119c0d76 */
  if (C.zf) goto L_119c0d76;
  /* 119c0c85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0c88 mov eax, dword ptr [edx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119c0c8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c0c92 jmp 0x119c0c9d */
  goto L_119c0c9d;
L_119c0c94:;
  /* 119c0c94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0c97 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0c9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c0c9d:;
  /* 119c0c9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0ca0 mov eax, dword ptr [edx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119c0ca7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0cac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0caf jae 0x119c0d66 */
  if (!C.cf) goto L_119c0d66;
  /* 119c0cb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0cb8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119c0cbc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119c0cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c0cc1 jne 0x119c0d61 */
  if (!C.zf) goto L_119c0d61;
  /* 119c0cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0cca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0cce jne 0x119c0d09 */
  if (!C.zf) goto L_119c0d09;
  /* 119c0cd0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119c0cd2 call 0x119bdb80 */
  push32(0x119c0cd7u); f_119bdb80();
  /* 119c0cd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0cda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0cdd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0ce1 jne 0x119c0cff */
  if (!C.zf) goto L_119c0cff;
  /* 119c0ce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0ce6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0ce9 push edx */
  push32((uint32_t)(EDX));
  /* 119c0cea call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119c0cf0u);
  /* 119c0cf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0cf3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c0cf6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0cf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0cfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_119c0cff:;
  /* 119c0cff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119c0d01 call 0x119bdc20 */
  push32(0x119c0d06u); f_119bdc20();
  /* 119c0d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c0d09:;
  /* 119c0d09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0d0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0d0f push eax */
  push32((uint32_t)(EAX));
  /* 119c0d10 call dword ptr [0x119e9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9368))), 0x119c0d16u);
  /* 119c0d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0d19 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119c0d1d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119c0d20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c0d22 je 0x119c0d36 */
  if (C.zf) goto L_119c0d36;
  /* 119c0d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0d27 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0d2a push eax */
  push32((uint32_t)(EAX));
  /* 119c0d2b call dword ptr [0x119e9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9364))), 0x119c0d31u);
  /* 119c0d31 jmp 0x119c0c94 */
  goto L_119c0c94;
L_119c0d36:;
  /* 119c0d36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0d39 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119c0d3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0d42 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c0d45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0d4b sub eax, dword ptr [edx*4 + 0x119e8ae0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x119e8ae0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c0d52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c0d53 mov esi, 0x24 */
  ESI = (0x24u);
  /* 119c0d58 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c0d5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0d5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c0d5f jmp 0x119c0d66 */
  goto L_119c0d66;
L_119c0d61:;
  /* 119c0d61 jmp 0x119c0c94 */
  goto L_119c0c94;
L_119c0d66:;
  /* 119c0d66 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0d6a je 0x119c0d71 */
  if (C.zf) goto L_119c0d71;
  /* 119c0d6c jmp 0x119c0e10 */
  goto L_119c0e10;
L_119c0d71:;
  /* 119c0d71 jmp 0x119c0e0b */
  goto L_119c0e0b;
L_119c0d76:;
  /* 119c0d76 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 119c0d78 push 0x119e21f8 */
  push32((uint32_t)(0x119e21f8u));
  /* 119c0d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 119c0d7f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 119c0d84 call 0x119b8210 */
  push32(0x119c0d89u); f_119b8210();
  /* 119c0d89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0d8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c0d8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0d93 je 0x119c0e09 */
  if (C.zf) goto L_119c0e09;
  /* 119c0d95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0d98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0d9b mov dword ptr [eax*4 + 0x119e8ae0], ecx */
  w32((uint32_t)(EAX*4 + 0x119e8ae0), (ECX));
  /* 119c0da2 mov edx, dword ptr [0x119e8c1c] */
  EDX = (r32((uint32_t)(0x119e8c1c)));
  /* 119c0da8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0dab mov dword ptr [0x119e8c1c], edx */
  w32((uint32_t)(0x119e8c1c), (EDX));
  /* 119c0db1 jmp 0x119c0dbc */
  goto L_119c0dbc;
L_119c0db3:;
  /* 119c0db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0db6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0db9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c0dbc:;
  /* 119c0dbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0dbf mov edx, dword ptr [ecx*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119c0dc6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0dcc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0dcf jae 0x119c0df4 */
  if (!C.cf) goto L_119c0df4;
  /* 119c0dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0dd4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 119c0dd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0ddb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 119c0de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0de4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 119c0de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c0deb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 119c0df2 jmp 0x119c0db3 */
  goto L_119c0db3;
L_119c0df4:;
  /* 119c0df4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c0df7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c0dfa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c0dfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c0e00 push edx */
  push32((uint32_t)(EDX));
  /* 119c0e01 call 0x119c1150 */
  push32(0x119c0e06u); f_119c1150();
  /* 119c0e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c0e09:;
  /* 119c0e09 jmp 0x119c0e10 */
  goto L_119c0e10;
L_119c0e0b:;
  /* 119c0e0b jmp 0x119c0c61 */
  goto L_119c0c61;
L_119c0e10:;
  /* 119c0e10 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 119c0e12 call 0x119bdc20 */
  push32(0x119c0e17u); f_119bdc20();
  /* 119c0e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c0e1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c0e1d pop esi */
  ESI = (pop32());
  /* 119c0e1e mov esp, ebp */
  ESP = (EBP);
  /* 119c0e20 pop ebp */
  EBP = (pop32());
  /* 119c0e21 ret  */
  ESPCHK(0x119c0c40u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x119c0e30 (183 bytes, 57 insns) */
void f_119c0e30(void) {
  FTRACE(0x119c0e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0e30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0e31 mov ebp, esp */
  EBP = (ESP);
  /* 119c0e33 push ecx */
  push32((uint32_t)(ECX));
  /* 119c0e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0e37 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0e3d jae 0x119c0eca */
  if (!C.cf) goto L_119c0eca;
  /* 119c0e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0e46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c0e49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0e4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119c0e4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0e52 mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119c0e59 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0e5d jne 0x119c0eca */
  if (!C.zf) goto L_119c0eca;
  /* 119c0e5f cmp dword ptr [0x119e7100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0e66 jne 0x119c0eaa */
  if (!C.zf) goto L_119c0eaa;
  /* 119c0e68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0e6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c0e6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0e72 je 0x119c0e82 */
  if (C.zf) goto L_119c0e82;
  /* 119c0e74 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0e78 je 0x119c0e90 */
  if (C.zf) goto L_119c0e90;
  /* 119c0e7a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0e7e je 0x119c0e9e */
  if (C.zf) goto L_119c0e9e;
  /* 119c0e80 jmp 0x119c0eaa */
  goto L_119c0eaa;
L_119c0e82:;
  /* 119c0e82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c0e85 push edx */
  push32((uint32_t)(EDX));
  /* 119c0e86 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 119c0e88 call dword ptr [0x119e933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e933c))), 0x119c0e8eu);
  /* 119c0e8e jmp 0x119c0eaa */
  goto L_119c0eaa;
L_119c0e90:;
  /* 119c0e90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c0e93 push eax */
  push32((uint32_t)(EAX));
  /* 119c0e94 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 119c0e96 call dword ptr [0x119e933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e933c))), 0x119c0e9cu);
  /* 119c0e9c jmp 0x119c0eaa */
  goto L_119c0eaa;
L_119c0e9e:;
  /* 119c0e9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c0ea1 push ecx */
  push32((uint32_t)(ECX));
  /* 119c0ea2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119c0ea4 call dword ptr [0x119e933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e933c))), 0x119c0eaau);
L_119c0eaa:;
  /* 119c0eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0ead sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 119c0eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0eb3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119c0eb6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0eb9 mov ecx, dword ptr [edx*4 + 0x119e8ae0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119c0ec0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c0ec3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 119c0ec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c0ec8 jmp 0x119c0ee3 */
  goto L_119c0ee3;
L_119c0eca:;
  /* 119c0eca call 0x119c0c20 */
  push32(0x119c0ecfu); f_119c0c20();
  /* 119c0ecf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119c0ed5 call 0x119c0c30 */
  push32(0x119c0edau); f_119c0c30();
  /* 119c0eda mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c0ee0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119c0ee3:;
  /* 119c0ee3 mov esp, ebp */
  ESP = (EBP);
  /* 119c0ee5 pop ebp */
  EBP = (pop32());
  /* 119c0ee6 ret  */
  ESPCHK(0x119c0e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ef0 @ 0x119c0ef0 (216 bytes, 63 insns) */
void f_119c0ef0(void) {
  FTRACE(0x119c0ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0ef1 mov ebp, esp */
  EBP = (ESP);
  /* 119c0ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c0ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0ef7 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0efd jae 0x119c0fab */
  if (!C.cf) goto L_119c0fab;
  /* 119c0f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c0f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119c0f0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0f12 mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119c0f19 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119c0f1e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c0f21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c0f23 je 0x119c0fab */
  if (C.zf) goto L_119c0fab;
  /* 119c0f29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f2c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 119c0f2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f32 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119c0f35 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0f38 mov ecx, dword ptr [edx*4 + 0x119e8ae0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119c0f3f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0f43 je 0x119c0fab */
  if (C.zf) goto L_119c0fab;
  /* 119c0f45 cmp dword ptr [0x119e7100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0f4c jne 0x119c0f8a */
  if (!C.zf) goto L_119c0f8a;
  /* 119c0f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f51 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c0f54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0f58 je 0x119c0f68 */
  if (C.zf) goto L_119c0f68;
  /* 119c0f5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0f5e je 0x119c0f74 */
  if (C.zf) goto L_119c0f74;
  /* 119c0f60 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0f64 je 0x119c0f80 */
  if (C.zf) goto L_119c0f80;
  /* 119c0f66 jmp 0x119c0f8a */
  goto L_119c0f8a;
L_119c0f68:;
  /* 119c0f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c0f6a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 119c0f6c call dword ptr [0x119e933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e933c))), 0x119c0f72u);
  /* 119c0f72 jmp 0x119c0f8a */
  goto L_119c0f8a;
L_119c0f74:;
  /* 119c0f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c0f76 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 119c0f78 call dword ptr [0x119e933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e933c))), 0x119c0f7eu);
  /* 119c0f7e jmp 0x119c0f8a */
  goto L_119c0f8a;
L_119c0f80:;
  /* 119c0f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c0f82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119c0f84 call dword ptr [0x119e933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e933c))), 0x119c0f8au);
L_119c0f8a:;
  /* 119c0f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c0f90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0f93 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c0f96 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0f99 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c0fa0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 119c0fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c0fa9 jmp 0x119c0fc4 */
  goto L_119c0fc4;
L_119c0fab:;
  /* 119c0fab call 0x119c0c20 */
  push32(0x119c0fb0u); f_119c0c20();
  /* 119c0fb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119c0fb6 call 0x119c0c30 */
  push32(0x119c0fbbu); f_119c0c30();
  /* 119c0fbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c0fc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119c0fc4:;
  /* 119c0fc4 mov esp, ebp */
  ESP = (EBP);
  /* 119c0fc6 pop ebp */
  EBP = (pop32());
  /* 119c0fc7 ret  */
  ESPCHK(0x119c0ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x119c0fd0 (102 bytes, 30 insns) */
void f_119c0fd0(void) {
  FTRACE(0x119c0fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c0fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c0fd1 mov ebp, esp */
  EBP = (ESP);
  /* 119c0fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0fd6 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c0fdc jae 0x119c101b */
  if (!C.cf) goto L_119c101b;
  /* 119c0fde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0fe1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c0fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c0fe7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119c0fea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c0fed mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119c0ff4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119c0ff9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c0ffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c0ffe je 0x119c101b */
  if (C.zf) goto L_119c101b;
  /* 119c1000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1003 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 119c1006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1009 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119c100c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c100f mov ecx, dword ptr [edx*4 + 0x119e8ae0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119e8ae0)));
  /* 119c1016 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 119c1019 jmp 0x119c1034 */
  goto L_119c1034;
L_119c101b:;
  /* 119c101b call 0x119c0c20 */
  push32(0x119c1020u); f_119c0c20();
  /* 119c1020 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119c1026 call 0x119c0c30 */
  push32(0x119c102bu); f_119c0c30();
  /* 119c102b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c1031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119c1034:;
  /* 119c1034 pop ebp */
  EBP = (pop32());
  /* 119c1035 ret  */
  ESPCHK(0x119c0fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x119c1040 (260 bytes, 83 insns) */
void f_119c1040(void) {
  FTRACE(0x119c1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1040 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1041 mov ebp, esp */
  EBP = (ESP);
  /* 119c1043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1046 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c104a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c104d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 119c1050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1052 je 0x119c105d */
  if (C.zf) goto L_119c105d;
  /* 119c1054 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c1057 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119c105a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_119c105d:;
  /* 119c105d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1060 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 119c1066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c1068 je 0x119c1072 */
  if (C.zf) goto L_119c1072;
  /* 119c106a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c106d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 119c106f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_119c1072:;
  /* 119c1072 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1075 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 119c107b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c107d je 0x119c1088 */
  if (C.zf) goto L_119c1088;
  /* 119c107f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c1082 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 119c1085 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_119c1088:;
  /* 119c1088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c108b push eax */
  push32((uint32_t)(EAX));
  /* 119c108c call dword ptr [0x119e93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93ac))), 0x119c1092u);
  /* 119c1092 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c1095 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1099 jne 0x119c10b2 */
  if (!C.zf) goto L_119c10b2;
  /* 119c109b call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119c10a1u);
  /* 119c10a1 push eax */
  push32((uint32_t)(EAX));
  /* 119c10a2 call 0x119c0b80 */
  push32(0x119c10a7u); f_119c0b80();
  /* 119c10a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c10aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c10ad jmp 0x119c1140 */
  goto L_119c1140;
L_119c10b2:;
  /* 119c10b2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c10b6 jne 0x119c10c3 */
  if (!C.zf) goto L_119c10c3;
  /* 119c10b8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c10bb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 119c10be mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 119c10c1 jmp 0x119c10d2 */
  goto L_119c10d2;
L_119c10c3:;
  /* 119c10c3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c10c7 jne 0x119c10d2 */
  if (!C.zf) goto L_119c10d2;
  /* 119c10c9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c10cc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 119c10cf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_119c10d2:;
  /* 119c10d2 call 0x119c0c40 */
  push32(0x119c10d7u); f_119c0c40();
  /* 119c10d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c10da cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c10de jne 0x119c10fb */
  if (!C.zf) goto L_119c10fb;
  /* 119c10e0 call 0x119c0c20 */
  push32(0x119c10e5u); f_119c0c20();
  /* 119c10e5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 119c10eb call 0x119c0c30 */
  push32(0x119c10f0u); f_119c0c30();
  /* 119c10f0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c10f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c10f9 jmp 0x119c1140 */
  goto L_119c1140;
L_119c10fb:;
  /* 119c10fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c10fe push eax */
  push32((uint32_t)(EAX));
  /* 119c10ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1102 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1103 call 0x119c0e30 */
  push32(0x119c1108u); f_119c0e30();
  /* 119c1108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c110b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c110e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 119c1111 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 119c1114 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1117 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c111a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c111d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c1120 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1123 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c112a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c112d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 119c1131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1134 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1135 call 0x119c11e0 */
  push32(0x119c113au); f_119c11e0();
  /* 119c113a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c113d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119c1140:;
  /* 119c1140 mov esp, ebp */
  ESP = (EBP);
  /* 119c1142 pop ebp */
  EBP = (pop32());
  /* 119c1143 ret  */
  ESPCHK(0x119c1040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011150 @ 0x119c1150 (134 bytes, 44 insns) */
void f_119c1150(void) {
  FTRACE(0x119c1150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1150 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1151 mov ebp, esp */
  EBP = (ESP);
  /* 119c1153 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1157 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c115a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c115d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c1160 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1163 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c116a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c116c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c116f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1172 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1176 jne 0x119c11b1 */
  if (!C.zf) goto L_119c11b1;
  /* 119c1178 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119c117a call 0x119bdb80 */
  push32(0x119c117fu); f_119bdb80();
  /* 119c117f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1185 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1189 jne 0x119c11a7 */
  if (!C.zf) goto L_119c11a7;
  /* 119c118b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c118e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1191 push edx */
  push32((uint32_t)(EDX));
  /* 119c1192 call dword ptr [0x119e9360] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9360))), 0x119c1198u);
  /* 119c1198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c119b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c119e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c11a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c11a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_119c11a7:;
  /* 119c11a7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119c11a9 call 0x119bdc20 */
  push32(0x119c11aeu); f_119bdc20();
  /* 119c11ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c11b1:;
  /* 119c11b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c11b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c11b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c11ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c11bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c11c0 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c11c7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 119c11cb push eax */
  push32((uint32_t)(EAX));
  /* 119c11cc call dword ptr [0x119e9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9368))), 0x119c11d2u);
  /* 119c11d2 mov esp, ebp */
  ESP = (EBP);
  /* 119c11d4 pop ebp */
  EBP = (pop32());
  /* 119c11d5 ret  */
  ESPCHK(0x119c1150u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x119c11e0 (38 bytes, 13 insns) */
void f_119c11e0(void) {
  FTRACE(0x119c11e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c11e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c11e1 mov ebp, esp */
  EBP = (ESP);
  /* 119c11e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c11e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c11e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c11ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c11ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c11f2 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c11f9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 119c11fd push eax */
  push32((uint32_t)(EAX));
  /* 119c11fe call dword ptr [0x119e9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9364))), 0x119c1204u);
  /* 119c1204 pop ebp */
  EBP = (pop32());
  /* 119c1205 ret  */
  ESPCHK(0x119c11e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x119c1210 (218 bytes, 63 insns) */
void f_119c1210(void) {
  FTRACE(0x119c1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1210 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1211 mov ebp, esp */
  EBP = (ESP);
  /* 119c1213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c121d push 2 */
  push32((uint32_t)(0x2u));
  /* 119c121f call 0x119bdb80 */
  push32(0x119c1224u); f_119bdb80();
  /* 119c1224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1227 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 119c122e jmp 0x119c1239 */
  goto L_119c1239;
L_119c1230:;
  /* 119c1230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1233 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1236 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c1239:;
  /* 119c1239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c123c cmp ecx, dword ptr [0x119e8ac0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e8ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1242 jge 0x119c12d9 */
  if ((C.sf==C.of)) goto L_119c12d9;
  /* 119c1248 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c124b mov eax, dword ptr [0x119e776c] */
  EAX = (r32((uint32_t)(0x119e776c)));
  /* 119c1250 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1254 je 0x119c12d4 */
  if (C.zf) goto L_119c12d4;
  /* 119c1256 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1259 mov edx, dword ptr [0x119e776c] */
  EDX = (r32((uint32_t)(0x119e776c)));
  /* 119c125f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119c1262 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119c1265 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 119c126b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c126d je 0x119c1291 */
  if (C.zf) goto L_119c1291;
  /* 119c126f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1272 mov eax, dword ptr [0x119e776c] */
  EAX = (r32((uint32_t)(0x119e776c)));
  /* 119c1277 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119c127a push ecx */
  push32((uint32_t)(ECX));
  /* 119c127b call 0x119c38b0 */
  push32(0x119c1280u); f_119c38b0();
  /* 119c1280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1283 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1286 je 0x119c1291 */
  if (C.zf) goto L_119c1291;
  /* 119c1288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c128b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c128e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c1291:;
  /* 119c1291 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1295 jl 0x119c12d4 */
  if ((C.sf!=C.of)) goto L_119c12d4;
  /* 119c1297 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c129a mov ecx, dword ptr [0x119e776c] */
  ECX = (r32((uint32_t)(0x119e776c)));
  /* 119c12a0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c12a3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c12a6 push edx */
  push32((uint32_t)(EDX));
  /* 119c12a7 call dword ptr [0x119e93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93a4))), 0x119c12adu);
  /* 119c12ad push 2 */
  push32((uint32_t)(0x2u));
  /* 119c12af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c12b2 mov ecx, dword ptr [0x119e776c] */
  ECX = (r32((uint32_t)(0x119e776c)));
  /* 119c12b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c12bb push edx */
  push32((uint32_t)(EDX));
  /* 119c12bc call 0x119b8ca0 */
  push32(0x119c12c1u); f_119b8ca0();
  /* 119c12c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c12c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c12c7 mov ecx, dword ptr [0x119e776c] */
  ECX = (r32((uint32_t)(0x119e776c)));
  /* 119c12cd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_119c12d4:;
  /* 119c12d4 jmp 0x119c1230 */
  goto L_119c1230;
L_119c12d9:;
  /* 119c12d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c12db call 0x119bdc20 */
  push32(0x119c12e0u); f_119bdc20();
  /* 119c12e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c12e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c12e6 mov esp, ebp */
  ESP = (EBP);
  /* 119c12e8 pop ebp */
  EBP = (pop32());
  /* 119c12e9 ret  */
  ESPCHK(0x119c1210u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x119c12f0 (68 bytes, 26 insns) */
void f_119c12f0(void) {
  FTRACE(0x119c12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c12f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c12f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c12f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c12f8 jne 0x119c1306 */
  if (!C.zf) goto L_119c1306;
  /* 119c12fa push 0 */
  push32((uint32_t)(0x0u));
  /* 119c12fc call 0x119c1460 */
  push32(0x119c1301u); f_119c1460();
  /* 119c1301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1304 jmp 0x119c1330 */
  goto L_119c1330;
L_119c1306:;
  /* 119c1306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1309 push eax */
  push32((uint32_t)(EAX));
  /* 119c130a call 0x119bc1f0 */
  push32(0x119c130fu); f_119bc1f0();
  /* 119c130f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1315 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1316 call 0x119c1340 */
  push32(0x119c131bu); f_119c1340();
  /* 119c131b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c131e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c1321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1324 push edx */
  push32((uint32_t)(EDX));
  /* 119c1325 call 0x119bc260 */
  push32(0x119c132au); f_119bc260();
  /* 119c132a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c132d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119c1330:;
  /* 119c1330 mov esp, ebp */
  ESP = (EBP);
  /* 119c1332 pop ebp */
  EBP = (pop32());
  /* 119c1333 ret  */
  ESPCHK(0x119c12f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x119c1340 (65 bytes, 26 insns) */
void f_119c1340(void) {
  FTRACE(0x119c1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1340 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1341 mov ebp, esp */
  EBP = (ESP);
  /* 119c1343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1346 push eax */
  push32((uint32_t)(EAX));
  /* 119c1347 call 0x119c1390 */
  push32(0x119c134cu); f_119c1390();
  /* 119c134c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c134f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1351 je 0x119c1358 */
  if (C.zf) goto L_119c1358;
  /* 119c1353 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c1356 jmp 0x119c137f */
  goto L_119c137f;
L_119c1358:;
  /* 119c1358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c135b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c135e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 119c1364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c1366 je 0x119c137d */
  if (C.zf) goto L_119c137d;
  /* 119c1368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c136b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119c136e push ecx */
  push32((uint32_t)(ECX));
  /* 119c136f call 0x119c3a00 */
  push32(0x119c1374u); f_119c3a00();
  /* 119c1374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1377 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c1379 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c137b jmp 0x119c137f */
  goto L_119c137f;
L_119c137d:;
  /* 119c137d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c137f:;
  /* 119c137f pop ebp */
  EBP = (pop32());
  /* 119c1380 ret  */
  ESPCHK(0x119c1340u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x119c1390 (183 bytes, 62 insns) */
void f_119c1390(void) {
  FTRACE(0x119c1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1390 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1391 mov ebp, esp */
  EBP = (ESP);
  /* 119c1393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1396 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c139d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c13a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c13a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13a6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c13a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119c13ac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c13af jne 0x119c142b */
  if (!C.zf) goto L_119c142b;
  /* 119c13b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119c13b7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 119c13bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c13bf je 0x119c142b */
  if (C.zf) goto L_119c142b;
  /* 119c13c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 119c13c9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c13cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c13cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c13d3 jle 0x119c142b */
  if ((C.zf||C.sf!=C.of)) goto L_119c142b;
  /* 119c13d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c13d8 push edx */
  push32((uint32_t)(EDX));
  /* 119c13d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c13df push ecx */
  push32((uint32_t)(ECX));
  /* 119c13e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119c13e6 push eax */
  push32((uint32_t)(EAX));
  /* 119c13e7 call 0x119bbc80 */
  push32(0x119c13ecu); f_119bbc80();
  /* 119c13ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c13ef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c13f2 jne 0x119c1415 */
  if (!C.zf) goto L_119c1415;
  /* 119c13f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c13f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c13fa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 119c1400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c1402 je 0x119c1413 */
  if (C.zf) goto L_119c1413;
  /* 119c1404 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1407 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119c140a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 119c140d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1410 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_119c1413:;
  /* 119c1413 jmp 0x119c142b */
  goto L_119c142b;
L_119c1415:;
  /* 119c1415 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1418 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119c141b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 119c141e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1421 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 119c1424 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c142b:;
  /* 119c142b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c142e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1431 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119c1434 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c1436 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1439 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 119c1440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1443 mov esp, ebp */
  ESP = (EBP);
  /* 119c1445 pop ebp */
  EBP = (pop32());
  /* 119c1446 ret  */
  ESPCHK(0x119c1390u, _esp0);
  ESP += 4; return;
}

/* FUN_10011450 @ 0x119c1450 (15 bytes, 7 insns) */
void f_119c1450(void) {
  FTRACE(0x119c1450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1450 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1451 mov ebp, esp */
  EBP = (ESP);
  /* 119c1453 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c1455 call 0x119c1460 */
  push32(0x119c145au); f_119c1460();
  /* 119c145a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c145d pop ebp */
  EBP = (pop32());
  /* 119c145e ret  */
  ESPCHK(0x119c1450u, _esp0);
  ESP += 4; return;
}

/* FUN_10011460 @ 0x119c1460 (319 bytes, 94 insns) */
void f_119c1460(void) {
  FTRACE(0x119c1460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1460 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1461 mov ebp, esp */
  EBP = (ESP);
  /* 119c1463 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c146d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c1474 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1476 call 0x119bdb80 */
  push32(0x119c147bu); f_119bdb80();
  /* 119c147b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c147e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c1485 jmp 0x119c1490 */
  goto L_119c1490;
L_119c1487:;
  /* 119c1487 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c148a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c148d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119c1490:;
  /* 119c1490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1493 cmp ecx, dword ptr [0x119e8ac0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e8ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1499 jge 0x119c1583 */
  if ((C.sf==C.of)) goto L_119c1583;
  /* 119c149f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c14a2 mov eax, dword ptr [0x119e776c] */
  EAX = (r32((uint32_t)(0x119e776c)));
  /* 119c14a7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c14ab je 0x119c157e */
  if (C.zf) goto L_119c157e;
  /* 119c14b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c14b4 mov edx, dword ptr [0x119e776c] */
  EDX = (r32((uint32_t)(0x119e776c)));
  /* 119c14ba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119c14bd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119c14c0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 119c14c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c14c8 je 0x119c157e */
  if (C.zf) goto L_119c157e;
  /* 119c14ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c14d1 mov eax, dword ptr [0x119e776c] */
  EAX = (r32((uint32_t)(0x119e776c)));
  /* 119c14d6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119c14d9 push ecx */
  push32((uint32_t)(ECX));
  /* 119c14da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c14dd push edx */
  push32((uint32_t)(EDX));
  /* 119c14de call 0x119bc230 */
  push32(0x119c14e3u); f_119bc230();
  /* 119c14e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c14e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c14e9 mov ecx, dword ptr [0x119e776c] */
  ECX = (r32((uint32_t)(0x119e776c)));
  /* 119c14ef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c14f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119c14f5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 119c14fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c14fc je 0x119c1565 */
  if (C.zf) goto L_119c1565;
  /* 119c14fe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1502 jne 0x119c1529 */
  if (!C.zf) goto L_119c1529;
  /* 119c1504 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1507 mov edx, dword ptr [0x119e776c] */
  EDX = (r32((uint32_t)(0x119e776c)));
  /* 119c150d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119c1510 push eax */
  push32((uint32_t)(EAX));
  /* 119c1511 call 0x119c1340 */
  push32(0x119c1516u); f_119c1340();
  /* 119c1516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1519 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c151c je 0x119c1527 */
  if (C.zf) goto L_119c1527;
  /* 119c151e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1524 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c1527:;
  /* 119c1527 jmp 0x119c1565 */
  goto L_119c1565;
L_119c1529:;
  /* 119c1529 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c152d jne 0x119c1565 */
  if (!C.zf) goto L_119c1565;
  /* 119c152f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1532 mov eax, dword ptr [0x119e776c] */
  EAX = (r32((uint32_t)(0x119e776c)));
  /* 119c1537 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119c153a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c153d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 119c1540 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c1542 je 0x119c1565 */
  if (C.zf) goto L_119c1565;
  /* 119c1544 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1547 mov ecx, dword ptr [0x119e776c] */
  ECX = (r32((uint32_t)(0x119e776c)));
  /* 119c154d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c1550 push edx */
  push32((uint32_t)(EDX));
  /* 119c1551 call 0x119c1340 */
  push32(0x119c1556u); f_119c1340();
  /* 119c1556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1559 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c155c jne 0x119c1565 */
  if (!C.zf) goto L_119c1565;
  /* 119c155e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_119c1565:;
  /* 119c1565 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1568 mov ecx, dword ptr [0x119e776c] */
  ECX = (r32((uint32_t)(0x119e776c)));
  /* 119c156e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c1571 push edx */
  push32((uint32_t)(EDX));
  /* 119c1572 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1575 push eax */
  push32((uint32_t)(EAX));
  /* 119c1576 call 0x119bc2a0 */
  push32(0x119c157bu); f_119bc2a0();
  /* 119c157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c157e:;
  /* 119c157e jmp 0x119c1487 */
  goto L_119c1487;
L_119c1583:;
  /* 119c1583 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1585 call 0x119bdc20 */
  push32(0x119c158au); f_119bdc20();
  /* 119c158a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c158d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1591 jne 0x119c1598 */
  if (!C.zf) goto L_119c1598;
  /* 119c1593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1596 jmp 0x119c159b */
  goto L_119c159b;
L_119c1598:;
  /* 119c1598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119c159b:;
  /* 119c159b mov esp, ebp */
  ESP = (EBP);
  /* 119c159d pop ebp */
  EBP = (pop32());
  /* 119c159e ret  */
  ESPCHK(0x119c1460u, _esp0);
  ESP += 4; return;
}

/* FUN_100115a0 @ 0x119c15a0 (1007 bytes, 269 insns) */
void f_119c15a0(void) {
  FTRACE(0x119c15a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c15a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c15a1 mov ebp, esp */
  EBP = (ESP);
  /* 119c15a3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c15a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c15ad jl 0x119c15b5 */
  if ((C.sf!=C.of)) goto L_119c15b5;
  /* 119c15af cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c15b3 jle 0x119c15bc */
  if ((C.zf||C.sf!=C.of)) goto L_119c15bc;
L_119c15b5:;
  /* 119c15b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c15b7 jmp 0x119c198b */
  goto L_119c198b;
L_119c15bc:;
  /* 119c15bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c15be call 0x119bdb80 */
  push32(0x119c15c3u); f_119bdb80();
  /* 119c15c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c15c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119c15cd mov eax, dword ptr [0x119e748c] */
  EAX = (r32((uint32_t)(0x119e748c)));
  /* 119c15d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c15d5 mov dword ptr [0x119e748c], eax */
  w32((uint32_t)(0x119e748c), (EAX));
L_119c15da:;
  /* 119c15da cmp dword ptr [0x119e749c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e749c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c15e1 je 0x119c15ed */
  if (C.zf) goto L_119c15ed;
  /* 119c15e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c15e5 call dword ptr [0x119e9338] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9338))), 0x119c15ebu);
  /* 119c15eb jmp 0x119c15da */
  goto L_119c15da;
L_119c15ed:;
  /* 119c15ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c15f1 je 0x119c1631 */
  if (C.zf) goto L_119c1631;
  /* 119c15f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c15f7 je 0x119c1611 */
  if (C.zf) goto L_119c1611;
  /* 119c15f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c15fc push ecx */
  push32((uint32_t)(ECX));
  /* 119c15fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1600 push edx */
  push32((uint32_t)(EDX));
  /* 119c1601 call 0x119c1990 */
  push32(0x119c1606u); f_119c1990();
  /* 119c1606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1609 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 119c160f jmp 0x119c1623 */
  goto L_119c1623;
L_119c1611:;
  /* 119c1611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1614 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1617 mov ecx, dword ptr [eax + 0x119e551c] */
  ECX = (r32((uint32_t)(EAX + 0x119e551c)));
  /* 119c161d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_119c1623:;
  /* 119c1623 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 119c1629 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c162c jmp 0x119c196b */
  goto L_119c196b;
L_119c1631:;
  /* 119c1631 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 119c1638 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c163f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1643 je 0x119c1963 */
  if (C.zf) goto L_119c1963;
  /* 119c1649 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c164c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c164f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1652 jne 0x119c1874 */
  if (!C.zf) goto L_119c1874;
  /* 119c1658 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c165b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119c165f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1662 jne 0x119c1874 */
  if (!C.zf) goto L_119c1874;
  /* 119c1668 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c166b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 119c166f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1672 jne 0x119c1874 */
  if (!C.zf) goto L_119c1874;
  /* 119c1678 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c167b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_119c1681:;
  /* 119c1681 push 0x119e2248 */
  push32((uint32_t)(0x119e2248u));
  /* 119c1686 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c168c push ecx */
  push32((uint32_t)(ECX));
  /* 119c168d call 0x119c50b0 */
  push32(0x119c1692u); f_119c50b0();
  /* 119c1692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1695 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 119c169b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c16a2 je 0x119c16cd */
  if (C.zf) goto L_119c16cd;
  /* 119c16a4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c16aa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c16b0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 119c16b6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c16bd je 0x119c16cd */
  if (C.zf) goto L_119c16cd;
  /* 119c16bf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c16c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c16c8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c16cb jne 0x119c16f3 */
  if (!C.zf) goto L_119c16f3;
L_119c16cd:;
  /* 119c16cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c16d1 je 0x119c16ec */
  if (C.zf) goto L_119c16ec;
  /* 119c16d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c16d5 call 0x119bdc20 */
  push32(0x119c16dau); f_119bdc20();
  /* 119c16da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c16dd mov edx, dword ptr [0x119e748c] */
  EDX = (r32((uint32_t)(0x119e748c)));
  /* 119c16e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c16e6 mov dword ptr [0x119e748c], edx */
  w32((uint32_t)(0x119e748c), (EDX));
L_119c16ec:;
  /* 119c16ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c16ee jmp 0x119c198b */
  goto L_119c198b;
L_119c16f3:;
  /* 119c16f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 119c16fa jmp 0x119c1705 */
  goto L_119c1705;
L_119c16fc:;
  /* 119c16fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c16ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1702 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119c1705:;
  /* 119c1705 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1709 jg 0x119c1753 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c1753;
  /* 119c170b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 119c1711 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1712 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c1718 push edx */
  push32((uint32_t)(EDX));
  /* 119c1719 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c171c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c171f mov ecx, dword ptr [eax + 0x119e5518] */
  ECX = (r32((uint32_t)(EAX + 0x119e5518)));
  /* 119c1725 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1726 call 0x119c5070 */
  push32(0x119c172bu); f_119c5070();
  /* 119c172b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c172e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1730 jne 0x119c1751 */
  if (!C.zf) goto L_119c1751;
  /* 119c1732 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c1735 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1738 mov eax, dword ptr [edx + 0x119e5518] */
  EAX = (r32((uint32_t)(EDX + 0x119e5518)));
  /* 119c173e push eax */
  push32((uint32_t)(EAX));
  /* 119c173f call 0x119bb040 */
  push32(0x119c1744u); f_119bb040();
  /* 119c1744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1747 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c174d jne 0x119c1751 */
  if (!C.zf) goto L_119c1751;
  /* 119c174f jmp 0x119c1753 */
  goto L_119c1753;
L_119c1751:;
  /* 119c1751 jmp 0x119c16fc */
  goto L_119c16fc;
L_119c1753:;
  /* 119c1753 push 0x119e2244 */
  push32((uint32_t)(0x119e2244u));
  /* 119c1758 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c175e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1761 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 119c1767 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c176d push edx */
  push32((uint32_t)(EDX));
  /* 119c176e call 0x119c5030 */
  push32(0x119c1773u); f_119c5030();
  /* 119c1773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1776 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 119c177c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1783 jne 0x119c17b9 */
  if (!C.zf) goto L_119c17b9;
  /* 119c1785 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c178b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c178e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1791 je 0x119c17b9 */
  if (C.zf) goto L_119c17b9;
  /* 119c1793 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1797 je 0x119c17b2 */
  if (C.zf) goto L_119c17b2;
  /* 119c1799 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c179b call 0x119bdc20 */
  push32(0x119c17a0u); f_119bdc20();
  /* 119c17a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c17a3 mov edx, dword ptr [0x119e748c] */
  EDX = (r32((uint32_t)(0x119e748c)));
  /* 119c17a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c17ac mov dword ptr [0x119e748c], edx */
  w32((uint32_t)(0x119e748c), (EDX));
L_119c17b2:;
  /* 119c17b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c17b4 jmp 0x119c198b */
  goto L_119c198b;
L_119c17b9:;
  /* 119c17b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c17bd jg 0x119c180a */
  if ((!C.zf&&C.sf==C.of)) goto L_119c180a;
  /* 119c17bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 119c17c5 push eax */
  push32((uint32_t)(EAX));
  /* 119c17c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c17cc push ecx */
  push32((uint32_t)(ECX));
  /* 119c17cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 119c17d3 push edx */
  push32((uint32_t)(EDX));
  /* 119c17d4 call 0x119bba30 */
  push32(0x119c17d9u); f_119bba30();
  /* 119c17d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c17dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 119c17e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 119c17ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 119c17f0 push ecx */
  push32((uint32_t)(ECX));
  /* 119c17f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c17f4 push edx */
  push32((uint32_t)(EDX));
  /* 119c17f5 call 0x119c1990 */
  push32(0x119c17fau); f_119c1990();
  /* 119c17fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c17fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c17ff je 0x119c180a */
  if (C.zf) goto L_119c180a;
  /* 119c1801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1804 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1807 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119c180a:;
  /* 119c180a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c1810 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1816 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 119c181c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c1822 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c1825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1827 je 0x119c1838 */
  if (C.zf) goto L_119c1838;
  /* 119c1829 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c182f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1832 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_119c1838:;
  /* 119c1838 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c183e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c1841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1843 jne 0x119c1681 */
  if (!C.zf) goto L_119c1681;
  /* 119c1849 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c184d je 0x119c185c */
  if (C.zf) goto L_119c185c;
  /* 119c184f call 0x119c1b30 */
  push32(0x119c1854u); f_119c1b30();
  /* 119c1854 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 119c185a jmp 0x119c1866 */
  goto L_119c1866;
L_119c185c:;
  /* 119c185c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_119c1866:;
  /* 119c1866 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 119c186c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c186f jmp 0x119c1961 */
  goto L_119c1961;
L_119c1874:;
  /* 119c1874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1877 push edx */
  push32((uint32_t)(EDX));
  /* 119c1878 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c187a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c187c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 119c1882 push eax */
  push32((uint32_t)(EAX));
  /* 119c1883 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1886 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1887 call 0x119c1c30 */
  push32(0x119c188cu); f_119c1c30();
  /* 119c188c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c188f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c1892 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1896 je 0x119c1961 */
  if (C.zf) goto L_119c1961;
  /* 119c189c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c18a3 jmp 0x119c18ae */
  goto L_119c18ae;
L_119c18a5:;
  /* 119c18a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c18a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c18ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c18ae:;
  /* 119c18ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c18b2 jg 0x119c1910 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c1910;
  /* 119c18b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c18b8 je 0x119c190e */
  if (C.zf) goto L_119c190e;
  /* 119c18ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c18bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c18c0 mov ecx, dword ptr [eax + 0x119e551c] */
  ECX = (r32((uint32_t)(EAX + 0x119e551c)));
  /* 119c18c6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c18c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 119c18cd push edx */
  push32((uint32_t)(EDX));
  /* 119c18ce call 0x119c4fa0 */
  push32(0x119c18d3u); f_119c4fa0();
  /* 119c18d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c18d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c18d8 je 0x119c1905 */
  if (C.zf) goto L_119c1905;
  /* 119c18da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 119c18e0 push eax */
  push32((uint32_t)(EAX));
  /* 119c18e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c18e4 push ecx */
  push32((uint32_t)(ECX));
  /* 119c18e5 call 0x119c1990 */
  push32(0x119c18eau); f_119c1990();
  /* 119c18ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c18ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c18ef je 0x119c18fc */
  if (C.zf) goto L_119c18fc;
  /* 119c18f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c18f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c18f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119c18fa jmp 0x119c1903 */
  goto L_119c1903;
L_119c18fc:;
  /* 119c18fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_119c1903:;
  /* 119c1903 jmp 0x119c190e */
  goto L_119c190e;
L_119c1905:;
  /* 119c1905 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1908 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c190b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119c190e:;
  /* 119c190e jmp 0x119c18a5 */
  goto L_119c18a5;
L_119c1910:;
  /* 119c1910 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1914 je 0x119c193b */
  if (C.zf) goto L_119c193b;
  /* 119c1916 call 0x119c1b30 */
  push32(0x119c191bu); f_119c1b30();
  /* 119c191b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c191e push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1920 mov ecx, dword ptr [0x119e551c] */
  ECX = (r32((uint32_t)(0x119e551c)));
  /* 119c1926 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1927 call 0x119b8ca0 */
  push32(0x119c192cu); f_119b8ca0();
  /* 119c192c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c192f mov dword ptr [0x119e551c], 0 */
  w32((uint32_t)(0x119e551c), (0x0u));
  /* 119c1939 jmp 0x119c1961 */
  goto L_119c1961;
L_119c193b:;
  /* 119c193b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c193f je 0x119c194e */
  if (C.zf) goto L_119c194e;
  /* 119c1941 call 0x119c1b30 */
  push32(0x119c1946u); f_119c1b30();
  /* 119c1946 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 119c194c jmp 0x119c1958 */
  goto L_119c1958;
L_119c194e:;
  /* 119c194e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_119c1958:;
  /* 119c1958 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 119c195e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119c1961:;
  /* 119c1961 jmp 0x119c196b */
  goto L_119c196b;
L_119c1963:;
  /* 119c1963 call 0x119c1b30 */
  push32(0x119c1968u); f_119c1b30();
  /* 119c1968 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c196b:;
  /* 119c196b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c196f je 0x119c1988 */
  if (C.zf) goto L_119c1988;
  /* 119c1971 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c1973 call 0x119bdc20 */
  push32(0x119c1978u); f_119bdc20();
  /* 119c1978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c197b mov eax, dword ptr [0x119e748c] */
  EAX = (r32((uint32_t)(0x119e748c)));
  /* 119c1980 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1983 mov dword ptr [0x119e748c], eax */
  w32((uint32_t)(0x119e748c), (EAX));
L_119c1988:;
  /* 119c1988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119c198b:;
  /* 119c198b mov esp, ebp */
  ESP = (EBP);
  /* 119c198d pop ebp */
  EBP = (pop32());
  /* 119c198e ret  */
  ESPCHK(0x119c15a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x119c1990 (403 bytes, 117 insns) */
void f_119c1990(void) {
  FTRACE(0x119c1990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1990 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1991 mov ebp, esp */
  EBP = (ESP);
  /* 119c1993 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c199c push eax */
  push32((uint32_t)(EAX));
  /* 119c199d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 119c19a3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c19a4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 119c19aa push edx */
  push32((uint32_t)(EDX));
  /* 119c19ab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 119c19b1 push eax */
  push32((uint32_t)(EAX));
  /* 119c19b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c19b5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c19b6 call 0x119c1c30 */
  push32(0x119c19bbu); f_119c1c30();
  /* 119c19bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c19be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c19c0 jne 0x119c19c9 */
  if (!C.zf) goto L_119c19c9;
  /* 119c19c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c19c4 jmp 0x119c1b1f */
  goto L_119c1b1f;
L_119c19c9:;
  /* 119c19c9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 119c19ce push 0x119e224c */
  push32((uint32_t)(0x119e224cu));
  /* 119c19d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c19d5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 119c19db push edx */
  push32((uint32_t)(EDX));
  /* 119c19dc call 0x119bb040 */
  push32(0x119c19e1u); f_119bb040();
  /* 119c19e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c19e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c19e7 push eax */
  push32((uint32_t)(EAX));
  /* 119c19e8 call 0x119b8210 */
  push32(0x119c19edu); f_119b8210();
  /* 119c19ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c19f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c19f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c19f7 jne 0x119c1a00 */
  if (!C.zf) goto L_119c1a00;
  /* 119c19f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c19fb jmp 0x119c1b1f */
  goto L_119c1b1f;
L_119c1a00:;
  /* 119c1a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1a03 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1a06 mov ecx, dword ptr [eax + 0x119e551c] */
  ECX = (r32((uint32_t)(EAX + 0x119e551c)));
  /* 119c1a0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c1a0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1a12 mov eax, dword ptr [edx*4 + 0x119e7310] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e7310)));
  /* 119c1a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c1a1c push 6 */
  push32((uint32_t)(0x6u));
  /* 119c1a1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1a21 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1a24 add ecx, 0x119e7354 */
  { uint32_t _a=(ECX),_b=(0x119e7354u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1a2a push ecx */
  push32((uint32_t)(ECX));
  /* 119c1a2b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 119c1a2e push edx */
  push32((uint32_t)(EDX));
  /* 119c1a2f call 0x119c0840 */
  push32(0x119c1a34u); f_119c0840();
  /* 119c1a34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1a37 mov eax, dword ptr [0x119e7328] */
  EAX = (r32((uint32_t)(0x119e7328)));
  /* 119c1a3c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119c1a3f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 119c1a45 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1a46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1a49 push edx */
  push32((uint32_t)(EDX));
  /* 119c1a4a call 0x119bb1c0 */
  push32(0x119c1a4fu); f_119bb1c0();
  /* 119c1a4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1a52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1a55 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1a58 mov dword ptr [ecx + 0x119e551c], eax */
  w32((uint32_t)(ECX + 0x119e551c), (EAX));
  /* 119c1a5e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 119c1a64 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c1a6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1a6d mov dword ptr [eax*4 + 0x119e7310], edx */
  w32((uint32_t)(EAX*4 + 0x119e7310), (EDX));
  /* 119c1a74 push 6 */
  push32((uint32_t)(0x6u));
  /* 119c1a76 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 119c1a7c push ecx */
  push32((uint32_t)(ECX));
  /* 119c1a7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1a80 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1a83 add edx, 0x119e7354 */
  { uint32_t _a=(EDX),_b=(0x119e7354u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1a89 push edx */
  push32((uint32_t)(EDX));
  /* 119c1a8a call 0x119c0840 */
  push32(0x119c1a8fu); f_119c0840();
  /* 119c1a8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1a92 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1a96 jne 0x119c1aa3 */
  if (!C.zf) goto L_119c1aa3;
  /* 119c1a98 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c1a9e mov dword ptr [0x119e7328], eax */
  w32((uint32_t)(0x119e7328), (EAX));
L_119c1aa3:;
  /* 119c1aa3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1aa7 jne 0x119c1ab5 */
  if (!C.zf) goto L_119c1ab5;
  /* 119c1aa9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c1aaf mov dword ptr [0x119e732c], ecx */
  w32((uint32_t)(0x119e732c), (ECX));
L_119c1ab5:;
  /* 119c1ab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1ab8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1abb call dword ptr [edx + 0x119e5520] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x119e5520))), 0x119c1ac1u);
  /* 119c1ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1ac3 je 0x119c1afc */
  if (C.zf) goto L_119c1afc;
  /* 119c1ac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1ac8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1acb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1ace mov dword ptr [eax + 0x119e551c], ecx */
  w32((uint32_t)(EAX + 0x119e551c), (ECX));
  /* 119c1ad4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1ad6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1ad9 push edx */
  push32((uint32_t)(EDX));
  /* 119c1ada call 0x119b8ca0 */
  push32(0x119c1adfu); f_119b8ca0();
  /* 119c1adf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1ae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1ae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1ae8 mov dword ptr [eax*4 + 0x119e7310], ecx */
  w32((uint32_t)(EAX*4 + 0x119e7310), (ECX));
  /* 119c1aef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c1af2 mov dword ptr [0x119e7328], edx */
  w32((uint32_t)(0x119e7328), (EDX));
  /* 119c1af8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1afa jmp 0x119c1b1f */
  goto L_119c1b1f;
L_119c1afc:;
  /* 119c1afc cmp dword ptr [ebp - 0xc], 0x119e5408 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x119e5408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1b03 je 0x119c1b13 */
  if (C.zf) goto L_119c1b13;
  /* 119c1b05 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1b07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1b0a push eax */
  push32((uint32_t)(EAX));
  /* 119c1b0b call 0x119b8ca0 */
  push32(0x119c1b10u); f_119b8ca0();
  /* 119c1b10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c1b13:;
  /* 119c1b13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1b16 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1b19 mov eax, dword ptr [ecx + 0x119e551c] */
  EAX = (r32((uint32_t)(ECX + 0x119e551c)));
L_119c1b1f:;
  /* 119c1b1f mov esp, ebp */
  ESP = (EBP);
  /* 119c1b21 pop ebp */
  EBP = (pop32());
  /* 119c1b22 ret  */
  ESPCHK(0x119c1990u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b30 @ 0x119c1b30 (256 bytes, 72 insns) */
void f_119c1b30(void) {
  FTRACE(0x119c1b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1b30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1b31 mov ebp, esp */
  EBP = (ESP);
  /* 119c1b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1b36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 119c1b3d cmp dword ptr [0x119e551c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e551c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1b44 jne 0x119c1b64 */
  if (!C.zf) goto L_119c1b64;
  /* 119c1b46 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 119c1b4b push 0x119e224c */
  push32((uint32_t)(0x119e224cu));
  /* 119c1b50 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1b52 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 119c1b57 call 0x119b8210 */
  push32(0x119c1b5cu); f_119b8210();
  /* 119c1b5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1b5f mov dword ptr [0x119e551c], eax */
  w32((uint32_t)(0x119e551c), (EAX));
L_119c1b64:;
  /* 119c1b64 mov eax, dword ptr [0x119e551c] */
  EAX = (r32((uint32_t)(0x119e551c)));
  /* 119c1b69 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119c1b6c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119c1b73 jmp 0x119c1b7e */
  goto L_119c1b7e;
L_119c1b75:;
  /* 119c1b75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1b78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1b7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c1b7e:;
  /* 119c1b7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1b81 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1b84 mov eax, dword ptr [edx + 0x119e551c] */
  EAX = (r32((uint32_t)(EDX + 0x119e551c)));
  /* 119c1b8a push eax */
  push32((uint32_t)(EAX));
  /* 119c1b8b push 0x119e2258 */
  push32((uint32_t)(0x119e2258u));
  /* 119c1b90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1b93 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1b96 mov edx, dword ptr [ecx + 0x119e5518] */
  EDX = (r32((uint32_t)(ECX + 0x119e5518)));
  /* 119c1b9c push edx */
  push32((uint32_t)(EDX));
  /* 119c1b9d push 3 */
  push32((uint32_t)(0x3u));
  /* 119c1b9f mov eax, dword ptr [0x119e551c] */
  EAX = (r32((uint32_t)(0x119e551c)));
  /* 119c1ba4 push eax */
  push32((uint32_t)(EAX));
  /* 119c1ba5 call 0x119c1dd0 */
  push32(0x119c1baau); f_119c1dd0();
  /* 119c1baa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1bad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1bb1 jge 0x119c1bf9 */
  if ((C.sf==C.of)) goto L_119c1bf9;
  /* 119c1bb3 push 0x119e2244 */
  push32((uint32_t)(0x119e2244u));
  /* 119c1bb8 mov ecx, dword ptr [0x119e551c] */
  ECX = (r32((uint32_t)(0x119e551c)));
  /* 119c1bbe push ecx */
  push32((uint32_t)(ECX));
  /* 119c1bbf call 0x119bb1d0 */
  push32(0x119c1bc4u); f_119bb1d0();
  /* 119c1bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1bc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1bca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1bcd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1bd0 mov eax, dword ptr [edx + 0x119e551c] */
  EAX = (r32((uint32_t)(EDX + 0x119e551c)));
  /* 119c1bd6 push eax */
  push32((uint32_t)(EAX));
  /* 119c1bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1bda imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c1bdd mov edx, dword ptr [ecx + 0x119e551c] */
  EDX = (r32((uint32_t)(ECX + 0x119e551c)));
  /* 119c1be3 push edx */
  push32((uint32_t)(EDX));
  /* 119c1be4 call 0x119c4fa0 */
  push32(0x119c1be9u); f_119c4fa0();
  /* 119c1be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1bee je 0x119c1bf7 */
  if (C.zf) goto L_119c1bf7;
  /* 119c1bf0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119c1bf7:;
  /* 119c1bf7 jmp 0x119c1c27 */
  goto L_119c1c27;
L_119c1bf9:;
  /* 119c1bf9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1bfd jne 0x119c1c06 */
  if (!C.zf) goto L_119c1c06;
  /* 119c1bff mov eax, dword ptr [0x119e551c] */
  EAX = (r32((uint32_t)(0x119e551c)));
  /* 119c1c04 jmp 0x119c1c2c */
  goto L_119c1c2c;
L_119c1c06:;
  /* 119c1c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1c08 mov eax, dword ptr [0x119e551c] */
  EAX = (r32((uint32_t)(0x119e551c)));
  /* 119c1c0d push eax */
  push32((uint32_t)(EAX));
  /* 119c1c0e call 0x119b8ca0 */
  push32(0x119c1c13u); f_119b8ca0();
  /* 119c1c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1c16 mov dword ptr [0x119e551c], 0 */
  w32((uint32_t)(0x119e551c), (0x0u));
  /* 119c1c20 mov eax, dword ptr [0x119e5534] */
  EAX = (r32((uint32_t)(0x119e5534)));
  /* 119c1c25 jmp 0x119c1c2c */
  goto L_119c1c2c;
L_119c1c27:;
  /* 119c1c27 jmp 0x119c1b75 */
  goto L_119c1b75;
L_119c1c2c:;
  /* 119c1c2c mov esp, ebp */
  ESP = (EBP);
  /* 119c1c2e pop ebp */
  EBP = (pop32());
  /* 119c1c2f ret  */
  ESPCHK(0x119c1b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c30 @ 0x119c1c30 (388 bytes, 115 insns) */
void f_119c1c30(void) {
  FTRACE(0x119c1c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1c30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1c31 mov ebp, esp */
  EBP = (ESP);
  /* 119c1c33 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1c39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1c3d jne 0x119c1c46 */
  if (!C.zf) goto L_119c1c46;
  /* 119c1c3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1c41 jmp 0x119c1db0 */
  goto L_119c1db0;
L_119c1c46:;
  /* 119c1c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1c49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c1c4c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1c4f jne 0x119c1ca0 */
  if (!C.zf) goto L_119c1ca0;
  /* 119c1c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1c54 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119c1c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1c5a jne 0x119c1ca0 */
  if (!C.zf) goto L_119c1ca0;
  /* 119c1c5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1c5f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 119c1c62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1c65 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 119c1c69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1c6d je 0x119c1c89 */
  if (C.zf) goto L_119c1c89;
  /* 119c1c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c1c72 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 119c1c77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c1c7a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 119c1c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c1c83 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_119c1c89:;
  /* 119c1c89 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1c8d je 0x119c1c98 */
  if (C.zf) goto L_119c1c98;
  /* 119c1c8f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c1c92 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_119c1c98:;
  /* 119c1c98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1c9b jmp 0x119c1db0 */
  goto L_119c1db0;
L_119c1ca0:;
  /* 119c1ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1ca4 push 0x119e5490 */
  push32((uint32_t)(0x119e5490u));
  /* 119c1ca9 call 0x119c4fa0 */
  push32(0x119c1caeu); f_119c4fa0();
  /* 119c1cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1cb3 je 0x119c1d68 */
  if (C.zf) goto L_119c1d68;
  /* 119c1cb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1cbc push edx */
  push32((uint32_t)(EDX));
  /* 119c1cbd push 0x119e540c */
  push32((uint32_t)(0x119e540cu));
  /* 119c1cc2 call 0x119c4fa0 */
  push32(0x119c1cc7u); f_119c4fa0();
  /* 119c1cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1ccc je 0x119c1d68 */
  if (C.zf) goto L_119c1d68;
  /* 119c1cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1cd5 push eax */
  push32((uint32_t)(EAX));
  /* 119c1cd6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 119c1cdc push ecx */
  push32((uint32_t)(ECX));
  /* 119c1cdd call 0x119c1e20 */
  push32(0x119c1ce2u); f_119c1e20();
  /* 119c1ce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1ce7 je 0x119c1cf0 */
  if (C.zf) goto L_119c1cf0;
  /* 119c1ce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1ceb jmp 0x119c1db0 */
  goto L_119c1db0;
L_119c1cf0:;
  /* 119c1cf0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 119c1cf6 push edx */
  push32((uint32_t)(EDX));
  /* 119c1cf7 push 0x119e7304 */
  push32((uint32_t)(0x119e7304u));
  /* 119c1cfc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 119c1d02 push eax */
  push32((uint32_t)(EAX));
  /* 119c1d03 call 0x119c50f0 */
  push32(0x119c1d08u); f_119c50f0();
  /* 119c1d08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1d0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1d0d jne 0x119c1d16 */
  if (!C.zf) goto L_119c1d16;
  /* 119c1d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1d11 jmp 0x119c1db0 */
  goto L_119c1db0;
L_119c1d16:;
  /* 119c1d16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c1d18 mov cx, word ptr [0x119e7308] */
  CX = (r16((uint32_t)(0x119e7308)));
  /* 119c1d1f mov dword ptr [0x119e730c], ecx */
  w32((uint32_t)(0x119e730c), (ECX));
  /* 119c1d25 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 119c1d2b push edx */
  push32((uint32_t)(EDX));
  /* 119c1d2c push 0x119e5490 */
  push32((uint32_t)(0x119e5490u));
  /* 119c1d31 call 0x119c1f80 */
  push32(0x119c1d36u); f_119c1f80();
  /* 119c1d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1d39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1d3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c1d3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c1d41 je 0x119c1d56 */
  if (C.zf) goto L_119c1d56;
  /* 119c1d43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1d46 push edx */
  push32((uint32_t)(EDX));
  /* 119c1d47 push 0x119e540c */
  push32((uint32_t)(0x119e540cu));
  /* 119c1d4c call 0x119bb1c0 */
  push32(0x119c1d51u); f_119bb1c0();
  /* 119c1d51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1d54 jmp 0x119c1d68 */
  goto L_119c1d68;
L_119c1d56:;
  /* 119c1d56 push 0x119e5490 */
  push32((uint32_t)(0x119e5490u));
  /* 119c1d5b push 0x119e540c */
  push32((uint32_t)(0x119e540cu));
  /* 119c1d60 call 0x119bb1c0 */
  push32(0x119c1d65u); f_119bb1c0();
  /* 119c1d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c1d68:;
  /* 119c1d68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1d6c je 0x119c1d81 */
  if (C.zf) goto L_119c1d81;
  /* 119c1d6e push 6 */
  push32((uint32_t)(0x6u));
  /* 119c1d70 push 0x119e7304 */
  push32((uint32_t)(0x119e7304u));
  /* 119c1d75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c1d78 push eax */
  push32((uint32_t)(EAX));
  /* 119c1d79 call 0x119c0840 */
  push32(0x119c1d7eu); f_119c0840();
  /* 119c1d7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c1d81:;
  /* 119c1d81 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1d85 je 0x119c1d9a */
  if (C.zf) goto L_119c1d9a;
  /* 119c1d87 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c1d89 push 0x119e730c */
  push32((uint32_t)(0x119e730cu));
  /* 119c1d8e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c1d91 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1d92 call 0x119c0840 */
  push32(0x119c1d97u); f_119c0840();
  /* 119c1d97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c1d9a:;
  /* 119c1d9a push 0x119e5490 */
  push32((uint32_t)(0x119e5490u));
  /* 119c1d9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1da2 push edx */
  push32((uint32_t)(EDX));
  /* 119c1da3 call 0x119bb1c0 */
  push32(0x119c1da8u); f_119bb1c0();
  /* 119c1da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1dab mov eax, 0x119e5490 */
  EAX = (0x119e5490u);
L_119c1db0:;
  /* 119c1db0 mov esp, ebp */
  ESP = (EBP);
  /* 119c1db2 pop ebp */
  EBP = (pop32());
  /* 119c1db3 ret  */
  ESPCHK(0x119c1c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x119c1dc0 (7 bytes, 5 insns) */
void f_119c1dc0(void) {
  FTRACE(0x119c1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 119c1dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1dc5 pop ebp */
  EBP = (pop32());
  /* 119c1dc6 ret  */
  ESPCHK(0x119c1dc0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x119c1dd0 (79 bytes, 28 insns) */
void f_119c1dd0(void) {
  FTRACE(0x119c1dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1dd1 mov ebp, esp */
  EBP = (ESP);
  /* 119c1dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1dd6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 119c1dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c1ddc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c1de3 jmp 0x119c1dee */
  goto L_119c1dee;
L_119c1de5:;
  /* 119c1de5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1de8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1deb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119c1dee:;
  /* 119c1dee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c1df1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1df4 jge 0x119c1e14 */
  if ((C.sf==C.of)) goto L_119c1e14;
  /* 119c1df6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1df9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c1dff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1e02 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 119c1e05 push edx */
  push32((uint32_t)(EDX));
  /* 119c1e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1e09 push eax */
  push32((uint32_t)(EAX));
  /* 119c1e0a call 0x119bb1d0 */
  push32(0x119c1e0fu); f_119bb1d0();
  /* 119c1e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1e12 jmp 0x119c1de5 */
  goto L_119c1de5;
L_119c1e14:;
  /* 119c1e14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c1e1b mov esp, ebp */
  ESP = (EBP);
  /* 119c1e1d pop ebp */
  EBP = (pop32());
  /* 119c1e1e ret  */
  ESPCHK(0x119c1dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e20 @ 0x119c1e20 (349 bytes, 122 insns) */
void f_119c1e20(void) {
  FTRACE(0x119c1e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1e20 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1e21 mov ebp, esp */
  EBP = (ESP);
  /* 119c1e23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c1e26 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 119c1e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 119c1e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1e30 push eax */
  push32((uint32_t)(EAX));
  /* 119c1e31 call 0x119bd6f0 */
  push32(0x119c1e36u); f_119bd6f0();
  /* 119c1e36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1e39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1e3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c1e3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c1e41 jne 0x119c1e4a */
  if (!C.zf) goto L_119c1e4a;
  /* 119c1e43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1e45 jmp 0x119c1f79 */
  goto L_119c1f79;
L_119c1e4a:;
  /* 119c1e4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1e4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c1e50 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1e53 jne 0x119c1e80 */
  if (!C.zf) goto L_119c1e80;
  /* 119c1e55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1e58 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119c1e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1e5e je 0x119c1e80 */
  if (C.zf) goto L_119c1e80;
  /* 119c1e60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1e63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1e66 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1e67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1e6a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1e70 push edx */
  push32((uint32_t)(EDX));
  /* 119c1e71 call 0x119bb1c0 */
  push32(0x119c1e76u); f_119bb1c0();
  /* 119c1e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c1e7b jmp 0x119c1f79 */
  goto L_119c1f79;
L_119c1e80:;
  /* 119c1e80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c1e87 jmp 0x119c1e92 */
  goto L_119c1e92;
L_119c1e89:;
  /* 119c1e89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c1e8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1e8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c1e92:;
  /* 119c1e92 push 0x119e225c */
  push32((uint32_t)(0x119e225cu));
  /* 119c1e97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1e9a push ecx */
  push32((uint32_t)(ECX));
  /* 119c1e9b call 0x119c5030 */
  push32(0x119c1ea0u); f_119c5030();
  /* 119c1ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1ea3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c1ea6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1eaa jne 0x119c1eb4 */
  if (!C.zf) goto L_119c1eb4;
  /* 119c1eac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c1eaf jmp 0x119c1f79 */
  goto L_119c1f79;
L_119c1eb4:;
  /* 119c1eb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1eb7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1eba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c1ebc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 119c1ebf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1ec3 jne 0x119c1eea */
  if (!C.zf) goto L_119c1eea;
  /* 119c1ec5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1ec9 jge 0x119c1eea */
  if ((C.sf==C.of)) goto L_119c1eea;
  /* 119c1ecb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c1ecf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1ed2 je 0x119c1eea */
  if (C.zf) goto L_119c1eea;
  /* 119c1ed4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1ed7 push edx */
  push32((uint32_t)(EDX));
  /* 119c1ed8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1edb push eax */
  push32((uint32_t)(EAX));
  /* 119c1edc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1edf push ecx */
  push32((uint32_t)(ECX));
  /* 119c1ee0 call 0x119bba30 */
  push32(0x119c1ee5u); f_119bba30();
  /* 119c1ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1ee8 jmp 0x119c1f50 */
  goto L_119c1f50;
L_119c1eea:;
  /* 119c1eea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1eee jne 0x119c1f18 */
  if (!C.zf) goto L_119c1f18;
  /* 119c1ef0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1ef4 jge 0x119c1f18 */
  if ((C.sf==C.of)) goto L_119c1f18;
  /* 119c1ef6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c1efa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1efd je 0x119c1f18 */
  if (C.zf) goto L_119c1f18;
  /* 119c1eff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1f02 push eax */
  push32((uint32_t)(EAX));
  /* 119c1f03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1f06 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1f07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1f0a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1f0d push edx */
  push32((uint32_t)(EDX));
  /* 119c1f0e call 0x119bba30 */
  push32(0x119c1f13u); f_119bba30();
  /* 119c1f13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1f16 jmp 0x119c1f50 */
  goto L_119c1f50;
L_119c1f18:;
  /* 119c1f18 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1f1c jne 0x119c1f4b */
  if (!C.zf) goto L_119c1f4b;
  /* 119c1f1e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c1f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1f24 je 0x119c1f2f */
  if (C.zf) goto L_119c1f2f;
  /* 119c1f26 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c1f2a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1f2d jne 0x119c1f4b */
  if (!C.zf) goto L_119c1f4b;
L_119c1f2f:;
  /* 119c1f2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1f32 push edx */
  push32((uint32_t)(EDX));
  /* 119c1f33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1f36 push eax */
  push32((uint32_t)(EAX));
  /* 119c1f37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1f3a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1f40 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1f41 call 0x119bba30 */
  push32(0x119c1f46u); f_119bba30();
  /* 119c1f46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1f49 jmp 0x119c1f50 */
  goto L_119c1f50;
L_119c1f4b:;
  /* 119c1f4b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c1f4e jmp 0x119c1f79 */
  goto L_119c1f79;
L_119c1f50:;
  /* 119c1f50 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c1f54 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c1f57 jne 0x119c1f5b */
  if (!C.zf) goto L_119c1f5b;
  /* 119c1f59 jmp 0x119c1f77 */
  goto L_119c1f77;
L_119c1f5b:;
  /* 119c1f5b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c1f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1f61 jne 0x119c1f65 */
  if (!C.zf) goto L_119c1f65;
  /* 119c1f63 jmp 0x119c1f77 */
  goto L_119c1f77;
L_119c1f65:;
  /* 119c1f65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c1f68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1f6b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 119c1f6f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119c1f72 jmp 0x119c1e89 */
  goto L_119c1e89;
L_119c1f77:;
  /* 119c1f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c1f79:;
  /* 119c1f79 mov esp, ebp */
  ESP = (EBP);
  /* 119c1f7b pop ebp */
  EBP = (pop32());
  /* 119c1f7c ret  */
  ESPCHK(0x119c1e20u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x119c1f80 (101 bytes, 36 insns) */
void f_119c1f80(void) {
  FTRACE(0x119c1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1f80 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1f81 mov ebp, esp */
  EBP = (ESP);
  /* 119c1f83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1f86 push eax */
  push32((uint32_t)(EAX));
  /* 119c1f87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1f8a push ecx */
  push32((uint32_t)(ECX));
  /* 119c1f8b call 0x119bb1c0 */
  push32(0x119c1f90u); f_119bb1c0();
  /* 119c1f90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1f93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1f96 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 119c1f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c1f9c je 0x119c1fb8 */
  if (C.zf) goto L_119c1fb8;
  /* 119c1f9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1fa1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 119c1fa5 push 0x119e2264 */
  push32((uint32_t)(0x119e2264u));
  /* 119c1faa push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1faf push edx */
  push32((uint32_t)(EDX));
  /* 119c1fb0 call 0x119c1dd0 */
  push32(0x119c1fb5u); f_119c1dd0();
  /* 119c1fb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c1fb8:;
  /* 119c1fb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1fbb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 119c1fc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c1fc4 je 0x119c1fe3 */
  if (C.zf) goto L_119c1fe3;
  /* 119c1fc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c1fc9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c1fcf push edx */
  push32((uint32_t)(EDX));
  /* 119c1fd0 push 0x119e2260 */
  push32((uint32_t)(0x119e2260u));
  /* 119c1fd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c1fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c1fda push eax */
  push32((uint32_t)(EAX));
  /* 119c1fdb call 0x119c1dd0 */
  push32(0x119c1fe0u); f_119c1dd0();
  /* 119c1fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c1fe3:;
  /* 119c1fe3 pop ebp */
  EBP = (pop32());
  /* 119c1fe4 ret  */
  ESPCHK(0x119c1f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ff0 @ 0x119c1ff0 (421 bytes, 148 insns) */
void f_119c1ff0(void) {
  FTRACE(0x119c1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c1ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c1ff1 mov ebp, esp */
  EBP = (ESP);
  /* 119c1ff3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c1ff5 push 0x119e2270 */
  push32((uint32_t)(0x119e2270u));
  /* 119c1ffa push 0x119c5f80 */
  push32((uint32_t)(0x119c5f80u));
  /* 119c1fff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119c2005 push eax */
  push32((uint32_t)(EAX));
  /* 119c2006 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119c200d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2010 push ebx */
  push32((uint32_t)(EBX));
  /* 119c2011 push esi */
  push32((uint32_t)(ESI));
  /* 119c2012 push edi */
  push32((uint32_t)(EDI));
  /* 119c2013 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c2016 cmp dword ptr [0x119e7330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c201d jne 0x119c206e */
  if (!C.zf) goto L_119c206e;
  /* 119c201f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 119c2022 push eax */
  push32((uint32_t)(EAX));
  /* 119c2023 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c2025 push 0x119e226c */
  push32((uint32_t)(0x119e226cu));
  /* 119c202a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c202c call dword ptr [0x119e932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e932c))), 0x119c2032u);
  /* 119c2032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c2034 je 0x119c2042 */
  if (C.zf) goto L_119c2042;
  /* 119c2036 mov dword ptr [0x119e7330], 1 */
  w32((uint32_t)(0x119e7330), (0x1u));
  /* 119c2040 jmp 0x119c206e */
  goto L_119c206e;
L_119c2042:;
  /* 119c2042 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 119c2045 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2046 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c2048 push 0x119e2268 */
  push32((uint32_t)(0x119e2268u));
  /* 119c204d push 1 */
  push32((uint32_t)(0x1u));
  /* 119c204f push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2051 call dword ptr [0x119e9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9330))), 0x119c2057u);
  /* 119c2057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c2059 je 0x119c2067 */
  if (C.zf) goto L_119c2067;
  /* 119c205b mov dword ptr [0x119e7330], 2 */
  w32((uint32_t)(0x119e7330), (0x2u));
  /* 119c2065 jmp 0x119c206e */
  goto L_119c206e;
L_119c2067:;
  /* 119c2067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2069 jmp 0x119c2198 */
  goto L_119c2198;
L_119c206e:;
  /* 119c206e cmp dword ptr [0x119e7330], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e7330))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2075 jne 0x119c20a5 */
  if (!C.zf) goto L_119c20a5;
  /* 119c2077 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c207b jne 0x119c2086 */
  if (!C.zf) goto L_119c2086;
  /* 119c207d mov edx, dword ptr [0x119e7318] */
  EDX = (r32((uint32_t)(0x119e7318)));
  /* 119c2083 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_119c2086:;
  /* 119c2086 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c2089 push eax */
  push32((uint32_t)(EAX));
  /* 119c208a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c208d push ecx */
  push32((uint32_t)(ECX));
  /* 119c208e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c2091 push edx */
  push32((uint32_t)(EDX));
  /* 119c2092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2095 push eax */
  push32((uint32_t)(EAX));
  /* 119c2096 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c2099 push ecx */
  push32((uint32_t)(ECX));
  /* 119c209a call dword ptr [0x119e9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9330))), 0x119c20a0u);
  /* 119c20a0 jmp 0x119c2198 */
  goto L_119c2198;
L_119c20a5:;
  /* 119c20a5 cmp dword ptr [0x119e7330], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7330))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c20ac jne 0x119c2196 */
  if (!C.zf) goto L_119c2196;
  /* 119c20b2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c20b6 jne 0x119c20c1 */
  if (!C.zf) goto L_119c20c1;
  /* 119c20b8 mov edx, dword ptr [0x119e7328] */
  EDX = (r32((uint32_t)(0x119e7328)));
  /* 119c20be mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_119c20c1:;
  /* 119c20c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c20c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c20c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c20c8 push eax */
  push32((uint32_t)(EAX));
  /* 119c20c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c20cc push ecx */
  push32((uint32_t)(ECX));
  /* 119c20cd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c20d0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c20d2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c20d4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119c20d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c20da push edx */
  push32((uint32_t)(EDX));
  /* 119c20db mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c20de push eax */
  push32((uint32_t)(EAX));
  /* 119c20df call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c20e5u);
  /* 119c20e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119c20e8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c20ec jne 0x119c20f5 */
  if (!C.zf) goto L_119c20f5;
  /* 119c20ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c20f0 jmp 0x119c2198 */
  goto L_119c2198;
L_119c20f5:;
  /* 119c20f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c20fc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c20ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c2101 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2104 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c2106 call 0x119bb3b0 */
  push32(0x119c210bu); f_119bb3b0();
  /* 119c210b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 119c210e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c2111 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c2114 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119c2117 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c211a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c211c push edx */
  push32((uint32_t)(EDX));
  /* 119c211d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c211f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c2122 push eax */
  push32((uint32_t)(EAX));
  /* 119c2123 call 0x119bd6f0 */
  push32(0x119c2128u); f_119bd6f0();
  /* 119c2128 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c212b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c2132 jmp 0x119c214b */
  goto L_119c214b;
  /* 119c2134 mov eax, 1 */
  EAX = (0x1u);
  /* 119c2139 ret  */
  ESPCHK(0x119c1ff0u, _esp0);
  ESP += 4; return;
  /* 119c213a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c213d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119c2144 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c214b:;
  /* 119c214b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c214f jne 0x119c2155 */
  if (!C.zf) goto L_119c2155;
  /* 119c2151 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2153 jmp 0x119c2198 */
  goto L_119c2198;
L_119c2155:;
  /* 119c2155 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c2158 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2159 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c215c push edx */
  push32((uint32_t)(EDX));
  /* 119c215d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2160 push eax */
  push32((uint32_t)(EAX));
  /* 119c2161 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c2164 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2165 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c2167 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c216a push edx */
  push32((uint32_t)(EDX));
  /* 119c216b call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c2171u);
  /* 119c2171 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119c2174 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2178 jne 0x119c217e */
  if (!C.zf) goto L_119c217e;
  /* 119c217a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c217c jmp 0x119c2198 */
  goto L_119c2198;
L_119c217e:;
  /* 119c217e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c2181 push eax */
  push32((uint32_t)(EAX));
  /* 119c2182 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c2185 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2186 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c2189 push edx */
  push32((uint32_t)(EDX));
  /* 119c218a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c218d push eax */
  push32((uint32_t)(EAX));
  /* 119c218e call dword ptr [0x119e932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e932c))), 0x119c2194u);
  /* 119c2194 jmp 0x119c2198 */
  goto L_119c2198;
L_119c2196:;
  /* 119c2196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c2198:;
  /* 119c2198 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 119c219b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c219e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119c21a5 pop edi */
  EDI = (pop32());
  /* 119c21a6 pop esi */
  ESI = (pop32());
  /* 119c21a7 pop ebx */
  EBX = (pop32());
  /* 119c21a8 mov esp, ebp */
  ESP = (EBP);
  /* 119c21aa pop ebp */
  EBP = (pop32());
  /* 119c21ab ret  */
  ESPCHK(0x119c1ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121b0 @ 0x119c21b0 (727 bytes, 263 insns) */
void f_119c21b0(void) {
  FTRACE(0x119c21b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c21b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c21b1 mov ebp, esp */
  EBP = (ESP);
  /* 119c21b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c21b5 push 0x119e2280 */
  push32((uint32_t)(0x119e2280u));
  /* 119c21ba push 0x119c5f80 */
  push32((uint32_t)(0x119c5f80u));
  /* 119c21bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119c21c5 push eax */
  push32((uint32_t)(EAX));
  /* 119c21c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119c21cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c21d0 push ebx */
  push32((uint32_t)(EBX));
  /* 119c21d1 push esi */
  push32((uint32_t)(ESI));
  /* 119c21d2 push edi */
  push32((uint32_t)(EDI));
  /* 119c21d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c21d6 cmp dword ptr [0x119e7334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c21dd jne 0x119c2236 */
  if (!C.zf) goto L_119c2236;
  /* 119c21df push 0 */
  push32((uint32_t)(0x0u));
  /* 119c21e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c21e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c21e5 push 0x119e226c */
  push32((uint32_t)(0x119e226cu));
  /* 119c21ea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c21ef push 0 */
  push32((uint32_t)(0x0u));
  /* 119c21f1 call dword ptr [0x119e9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9324))), 0x119c21f7u);
  /* 119c21f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c21f9 je 0x119c2207 */
  if (C.zf) goto L_119c2207;
  /* 119c21fb mov dword ptr [0x119e7334], 1 */
  w32((uint32_t)(0x119e7334), (0x1u));
  /* 119c2205 jmp 0x119c2236 */
  goto L_119c2236;
L_119c2207:;
  /* 119c2207 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2209 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c220b push 1 */
  push32((uint32_t)(0x1u));
  /* 119c220d push 0x119e2268 */
  push32((uint32_t)(0x119e2268u));
  /* 119c2212 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c2217 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2219 call dword ptr [0x119e9328] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9328))), 0x119c221fu);
  /* 119c221f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c2221 je 0x119c222f */
  if (C.zf) goto L_119c222f;
  /* 119c2223 mov dword ptr [0x119e7334], 2 */
  w32((uint32_t)(0x119e7334), (0x2u));
  /* 119c222d jmp 0x119c2236 */
  goto L_119c2236;
L_119c222f:;
  /* 119c222f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2231 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c2236:;
  /* 119c2236 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c223a jle 0x119c224f */
  if ((C.zf||C.sf!=C.of)) goto L_119c224f;
  /* 119c223c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c223f push eax */
  push32((uint32_t)(EAX));
  /* 119c2240 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2243 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2244 call 0x119c24c0 */
  push32(0x119c2249u); f_119c24c0();
  /* 119c2249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c224c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_119c224f:;
  /* 119c224f cmp dword ptr [0x119e7334], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e7334))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2256 jne 0x119c227b */
  if (!C.zf) goto L_119c227b;
  /* 119c2258 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c225b push edx */
  push32((uint32_t)(EDX));
  /* 119c225c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c225f push eax */
  push32((uint32_t)(EAX));
  /* 119c2260 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c2263 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2264 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2267 push edx */
  push32((uint32_t)(EDX));
  /* 119c2268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c226b push eax */
  push32((uint32_t)(EAX));
  /* 119c226c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c226f push ecx */
  push32((uint32_t)(ECX));
  /* 119c2270 call dword ptr [0x119e9328] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9328))), 0x119c2276u);
  /* 119c2276 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c227b:;
  /* 119c227b cmp dword ptr [0x119e7334], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7334))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2282 jne 0x119c249f */
  if (!C.zf) goto L_119c249f;
  /* 119c2288 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c228c jne 0x119c2297 */
  if (!C.zf) goto L_119c2297;
  /* 119c228e mov edx, dword ptr [0x119e7328] */
  EDX = (r32((uint32_t)(0x119e7328)));
  /* 119c2294 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_119c2297:;
  /* 119c2297 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2299 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c229b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c229e push eax */
  push32((uint32_t)(EAX));
  /* 119c229f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c22a2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c22a3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 119c22a6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c22a8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c22aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119c22ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c22b0 push edx */
  push32((uint32_t)(EDX));
  /* 119c22b1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c22b4 push eax */
  push32((uint32_t)(EAX));
  /* 119c22b5 call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c22bbu);
  /* 119c22bb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c22be cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c22c2 jne 0x119c22cb */
  if (!C.zf) goto L_119c22cb;
  /* 119c22c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c22c6 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c22cb:;
  /* 119c22cb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c22d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c22d5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c22d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c22da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c22dc call 0x119bb3b0 */
  push32(0x119c22e1u); f_119bb3b0();
  /* 119c22e1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 119c22e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c22e7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c22ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119c22ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c22f4 jmp 0x119c230d */
  goto L_119c230d;
  /* 119c22f6 mov eax, 1 */
  EAX = (0x1u);
  /* 119c22fb ret  */
  ESPCHK(0x119c21b0u, _esp0);
  ESP += 4; return;
  /* 119c22fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c22ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119c2306 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c230d:;
  /* 119c230d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2311 jne 0x119c231a */
  if (!C.zf) goto L_119c231a;
  /* 119c2313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2315 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c231a:;
  /* 119c231a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c231d push edx */
  push32((uint32_t)(EDX));
  /* 119c231e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c2321 push eax */
  push32((uint32_t)(EAX));
  /* 119c2322 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c2325 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2326 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2329 push edx */
  push32((uint32_t)(EDX));
  /* 119c232a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c232c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c232f push eax */
  push32((uint32_t)(EAX));
  /* 119c2330 call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c2336u);
  /* 119c2336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c2338 jne 0x119c2341 */
  if (!C.zf) goto L_119c2341;
  /* 119c233a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c233c jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c2341:;
  /* 119c2341 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2343 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2345 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c2348 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2349 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c234c push edx */
  push32((uint32_t)(EDX));
  /* 119c234d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c2350 push eax */
  push32((uint32_t)(EAX));
  /* 119c2351 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2354 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2355 call dword ptr [0x119e9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9324))), 0x119c235bu);
  /* 119c235b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119c235e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2362 jne 0x119c236b */
  if (!C.zf) goto L_119c236b;
  /* 119c2364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2366 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c236b:;
  /* 119c236b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c236e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 119c2374 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c2376 je 0x119c23bb */
  if (C.zf) goto L_119c23bb;
  /* 119c2378 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c237c je 0x119c23b6 */
  if (C.zf) goto L_119c23b6;
  /* 119c237e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c2381 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2384 jle 0x119c238d */
  if ((C.zf||C.sf!=C.of)) goto L_119c238d;
  /* 119c2386 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2388 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c238d:;
  /* 119c238d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c2390 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2391 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c2394 push edx */
  push32((uint32_t)(EDX));
  /* 119c2395 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c2398 push eax */
  push32((uint32_t)(EAX));
  /* 119c2399 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c239c push ecx */
  push32((uint32_t)(ECX));
  /* 119c239d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c23a0 push edx */
  push32((uint32_t)(EDX));
  /* 119c23a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c23a4 push eax */
  push32((uint32_t)(EAX));
  /* 119c23a5 call dword ptr [0x119e9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9324))), 0x119c23abu);
  /* 119c23ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c23ad jne 0x119c23b6 */
  if (!C.zf) goto L_119c23b6;
  /* 119c23af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c23b1 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c23b6:;
  /* 119c23b6 jmp 0x119c249a */
  goto L_119c249a;
L_119c23bb:;
  /* 119c23bb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c23be mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119c23c1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119c23c8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c23cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c23cd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c23d0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c23d2 call 0x119bb3b0 */
  push32(0x119c23d7u); f_119bb3b0();
  /* 119c23d7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 119c23da mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c23dd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 119c23e0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119c23e3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c23ea jmp 0x119c2403 */
  goto L_119c2403;
  /* 119c23ec mov eax, 1 */
  EAX = (0x1u);
  /* 119c23f1 ret  */
  ESPCHK(0x119c21b0u, _esp0);
  ESP += 4; return;
  /* 119c23f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c23f5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119c23fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c2403:;
  /* 119c2403 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2407 jne 0x119c2410 */
  if (!C.zf) goto L_119c2410;
  /* 119c2409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c240b jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c2410:;
  /* 119c2410 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c2413 push eax */
  push32((uint32_t)(EAX));
  /* 119c2414 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c2417 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2418 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c241b push edx */
  push32((uint32_t)(EDX));
  /* 119c241c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c241f push eax */
  push32((uint32_t)(EAX));
  /* 119c2420 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c2423 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2427 push edx */
  push32((uint32_t)(EDX));
  /* 119c2428 call dword ptr [0x119e9324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9324))), 0x119c242eu);
  /* 119c242e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c2430 jne 0x119c2436 */
  if (!C.zf) goto L_119c2436;
  /* 119c2432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2434 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c2436:;
  /* 119c2436 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c243a jne 0x119c246a */
  if (!C.zf) goto L_119c246a;
  /* 119c243c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c243e push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2440 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2442 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c2444 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c2447 push eax */
  push32((uint32_t)(EAX));
  /* 119c2448 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c244b push ecx */
  push32((uint32_t)(ECX));
  /* 119c244c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c2451 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c2454 push edx */
  push32((uint32_t)(EDX));
  /* 119c2455 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c245bu);
  /* 119c245b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119c245e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2462 jne 0x119c2468 */
  if (!C.zf) goto L_119c2468;
  /* 119c2464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2466 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c2468:;
  /* 119c2468 jmp 0x119c249a */
  goto L_119c249a;
L_119c246a:;
  /* 119c246a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c246c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c246e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c2471 push eax */
  push32((uint32_t)(EAX));
  /* 119c2472 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c2475 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2476 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c2479 push edx */
  push32((uint32_t)(EDX));
  /* 119c247a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c247d push eax */
  push32((uint32_t)(EAX));
  /* 119c247e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c2483 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c2486 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2487 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c248du);
  /* 119c248d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119c2490 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2494 jne 0x119c249a */
  if (!C.zf) goto L_119c249a;
  /* 119c2496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2498 jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c249a:;
  /* 119c249a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c249d jmp 0x119c24a1 */
  goto L_119c24a1;
L_119c249f:;
  /* 119c249f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c24a1:;
  /* 119c24a1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 119c24a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c24a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119c24ae pop edi */
  EDI = (pop32());
  /* 119c24af pop esi */
  ESI = (pop32());
  /* 119c24b0 pop ebx */
  EBX = (pop32());
  /* 119c24b1 mov esp, ebp */
  ESP = (EBP);
  /* 119c24b3 pop ebp */
  EBP = (pop32());
  /* 119c24b4 ret  */
  ESPCHK(0x119c21b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x119c24c0 (80 bytes, 32 insns) */
void f_119c24c0(void) {
  FTRACE(0x119c24c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c24c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c24c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c24c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c24c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c24cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c24cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c24d2:;
  /* 119c24d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c24d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c24d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c24db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c24de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c24e0 je 0x119c24f7 */
  if (C.zf) goto L_119c24f7;
  /* 119c24e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c24e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c24e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c24ea je 0x119c24f7 */
  if (C.zf) goto L_119c24f7;
  /* 119c24ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c24ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c24f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c24f5 jmp 0x119c24d2 */
  goto L_119c24d2;
L_119c24f7:;
  /* 119c24f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c24fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c24fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c24ff jne 0x119c2509 */
  if (!C.zf) goto L_119c2509;
  /* 119c2501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2504 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2507 jmp 0x119c250c */
  goto L_119c250c;
L_119c2509:;
  /* 119c2509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_119c250c:;
  /* 119c250c mov esp, ebp */
  ESP = (EBP);
  /* 119c250e pop ebp */
  EBP = (pop32());
  /* 119c250f ret  */
  ESPCHK(0x119c24c0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x119c2510 (62 bytes, 23 insns) */
void f_119c2510(void) {
  FTRACE(0x119c2510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c2510 push ebp */
  push32((uint32_t)(EBP));
  /* 119c2511 mov ebp, esp */
  EBP = (ESP);
  /* 119c2513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2516 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c251d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2520 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c2526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2529 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c252c jb 0x119c2536 */
  if (C.cf) goto L_119c2536;
  /* 119c252e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2531 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2534 jae 0x119c253f */
  if (!C.cf) goto L_119c253f;
L_119c2536:;
  /* 119c2536 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c2539 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c253c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c253f:;
  /* 119c253f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2545 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119c2547 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c254a mov esp, ebp */
  ESP = (EBP);
  /* 119c254c pop ebp */
  EBP = (pop32());
  /* 119c254d ret  */
  ESPCHK(0x119c2510u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x119c2550 (173 bytes, 66 insns) */
void f_119c2550(void) {
  FTRACE(0x119c2550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c2550 push ebp */
  push32((uint32_t)(EBP));
  /* 119c2551 mov ebp, esp */
  EBP = (ESP);
  /* 119c2553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2559 push eax */
  push32((uint32_t)(EAX));
  /* 119c255a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c255d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c255f push edx */
  push32((uint32_t)(EDX));
  /* 119c2560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c2565 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2566 call 0x119c2510 */
  push32(0x119c256bu); f_119c2510();
  /* 119c256b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c256e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c2571 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2575 je 0x119c25a7 */
  if (C.zf) goto L_119c25a7;
  /* 119c2577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c257a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c257d push edx */
  push32((uint32_t)(EDX));
  /* 119c257e push 1 */
  push32((uint32_t)(0x1u));
  /* 119c2580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2583 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119c2586 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2587 call 0x119c2510 */
  push32(0x119c258cu); f_119c2510();
  /* 119c258c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c258f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c2592 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2596 je 0x119c25a7 */
  if (C.zf) goto L_119c25a7;
  /* 119c2598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c259b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c259e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c25a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25a4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_119c25a7:;
  /* 119c25a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25aa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c25ad push edx */
  push32((uint32_t)(EDX));
  /* 119c25ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c25b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119c25b4 push ecx */
  push32((uint32_t)(ECX));
  /* 119c25b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119c25bb push eax */
  push32((uint32_t)(EAX));
  /* 119c25bc call 0x119c2510 */
  push32(0x119c25c1u); f_119c2510();
  /* 119c25c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c25c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c25c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c25cb je 0x119c25dc */
  if (C.zf) goto L_119c25dc;
  /* 119c25cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25d0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119c25d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c25d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25d9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_119c25dc:;
  /* 119c25dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c25e2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c25e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c25e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c25e9 push eax */
  push32((uint32_t)(EAX));
  /* 119c25ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c25ed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119c25f0 push edx */
  push32((uint32_t)(EDX));
  /* 119c25f1 call 0x119c2510 */
  push32(0x119c25f6u); f_119c2510();
  /* 119c25f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c25f9 mov esp, ebp */
  ESP = (EBP);
  /* 119c25fb pop ebp */
  EBP = (pop32());
  /* 119c25fc ret  */
  ESPCHK(0x119c2550u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x119c2600 (96 bytes, 37 insns) */
void f_119c2600(void) {
  FTRACE(0x119c2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c2600 push ebp */
  push32((uint32_t)(EBP));
  /* 119c2601 mov ebp, esp */
  EBP = (ESP);
  /* 119c2603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2609 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c260b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119c2611 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c2613 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2615 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c2617 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c261a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c261d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119c2620 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 119c2625 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c2627 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2629 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c262b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c262e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2631 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c2633 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c2635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2638 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c263a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c263d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c2640 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c2642 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 119c2645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2648 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119c264b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c264e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119c2651 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c2653 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119c2656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2659 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119c265c mov esp, ebp */
  ESP = (EBP);
  /* 119c265e pop ebp */
  EBP = (pop32());
  /* 119c265f ret  */
  ESPCHK(0x119c2600u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x119c2660 (99 bytes, 37 insns) */
void f_119c2660(void) {
  FTRACE(0x119c2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c2660 push ebp */
  push32((uint32_t)(EBP));
  /* 119c2661 mov ebp, esp */
  EBP = (ESP);
  /* 119c2663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2669 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c266c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c266f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c2671 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2673 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119c2679 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c267c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c267f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 119c2682 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119c2685 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c2687 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2689 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 119c268e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c2691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2694 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119c2697 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c2699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c269c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119c269f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c26a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c26a5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c26a7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119c26aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c26ad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119c26b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c26b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c26b5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c26b7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 119c26ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c26bd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c26bf mov esp, ebp */
  ESP = (EBP);
  /* 119c26c1 pop ebp */
  EBP = (pop32());
  /* 119c26c2 ret  */
  ESPCHK(0x119c2660u, _esp0);
  ESP += 4; return;
}

/* FUN_100126d0 @ 0x119c26d0 (315 bytes, 101 insns) */
void f_119c26d0(void) {
  FTRACE(0x119c26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c26d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c26d1 mov ebp, esp */
  EBP = (ESP);
  /* 119c26d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c26d6 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 119c26dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c26df mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c26e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c26e8 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119c26ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c26f2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 119c26f9 jmp 0x119c270d */
  goto L_119c270d;
L_119c26fb:;
  /* 119c26fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c26fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2701 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119c2704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c2707 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c270a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119c270d:;
  /* 119c270d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2711 jbe 0x119c2787 */
  if ((C.cf||C.zf)) goto L_119c2787;
  /* 119c2713 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2716 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c2718 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c271b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119c271e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c2721 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c2724 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c2727 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c272a push eax */
  push32((uint32_t)(EAX));
  /* 119c272b call 0x119c2600 */
  push32(0x119c2730u); f_119c2600();
  /* 119c2730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2733 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2736 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2737 call 0x119c2600 */
  push32(0x119c273cu); f_119c2600();
  /* 119c273c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c273f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119c2742 push edx */
  push32((uint32_t)(EDX));
  /* 119c2743 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2746 push eax */
  push32((uint32_t)(EAX));
  /* 119c2747 call 0x119c2550 */
  push32(0x119c274cu); f_119c2550();
  /* 119c274c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c274f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2752 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2753 call 0x119c2600 */
  push32(0x119c2758u); f_119c2600();
  /* 119c2758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c275b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c275e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c2761 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c2764 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c276b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c2772 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 119c2775 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2776 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2779 push edx */
  push32((uint32_t)(EDX));
  /* 119c277a call 0x119c2550 */
  push32(0x119c277fu); f_119c2550();
  /* 119c277f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2782 jmp 0x119c26fb */
  goto L_119c26fb;
L_119c2787:;
  /* 119c2787 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c278a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c278e jne 0x119c27d3 */
  if (!C.zf) goto L_119c27d3;
  /* 119c2790 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2793 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c2796 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 119c2799 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c279c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119c279f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c27a5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 119c27a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c27ad shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 119c27b0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c27b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27b5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119c27b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c27bd shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 119c27c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c27c5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 119c27c9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119c27cd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 119c27d1 jmp 0x119c2787 */
  goto L_119c2787;
L_119c27d3:;
  /* 119c27d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c27d9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119c27de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c27e0 jne 0x119c27fc */
  if (!C.zf) goto L_119c27fc;
  /* 119c27e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27e5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c27e6 call 0x119c2600 */
  push32(0x119c27ebu); f_119c2600();
  /* 119c27eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c27ee mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 119c27f2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119c27f6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 119c27fa jmp 0x119c27d3 */
  goto L_119c27d3;
L_119c27fc:;
  /* 119c27fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c27ff mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 119c2803 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 119c2807 mov esp, ebp */
  ESP = (EBP);
  /* 119c2809 pop ebp */
  EBP = (pop32());
  /* 119c280a ret  */
  ESPCHK(0x119c26d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012810 @ 0x119c2810 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_119c2810(void) {
  FTRACE(0x119c2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c2810 push ebp */
  push32((uint32_t)(EBP));
  /* 119c2811 mov ebp, esp */
  EBP = (ESP);
  /* 119c2813 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2819 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 119c281c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 119c281f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119c2825 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 119c282c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 119c2833 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 119c283a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c2841 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 119c2848 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 119c284f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 119c2856 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 119c285d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 119c2864 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 119c286b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 119c2872 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c2875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c2878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c287b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 119c287e jmp 0x119c2889 */
  goto L_119c2889;
L_119c2880:;
  /* 119c2880 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2883 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2886 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2889:;
  /* 119c2889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c288c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c288f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2892 je 0x119c28b5 */
  if (C.zf) goto L_119c28b5;
  /* 119c2894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2897 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c289a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c289d je 0x119c28b5 */
  if (C.zf) goto L_119c28b5;
  /* 119c289f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c28a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c28a5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c28a8 je 0x119c28b5 */
  if (C.zf) goto L_119c28b5;
  /* 119c28aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c28ad movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c28b0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c28b3 jne 0x119c28b7 */
  if (!C.zf) goto L_119c28b7;
L_119c28b5:;
  /* 119c28b5 jmp 0x119c2880 */
  goto L_119c2880;
L_119c28b7:;
  /* 119c28b7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c28bb je 0x119c3018 */
  if (C.zf) goto L_119c3018;
  /* 119c28c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c28c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c28c6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 119c28c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c28cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c28cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c28d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 119c28d5 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 119c28d8 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c28dc ja 0x119c3013 */
  if ((!C.cf&&!C.zf)) goto L_119c3013;
  /* 119c28e2 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 119c28e5 jmp dword ptr [ecx*4 + 0x119c322a] */
  switch (ECX) {
    case 0: goto L_119c28ec;
    case 1: goto L_119c298a;
    case 2: goto L_119c2a40;
    case 3: goto L_119c2aab;
    case 4: goto L_119c2bc3;
    case 5: goto L_119c2cf5;
    case 6: goto L_119c2d6b;
    case 7: goto L_119c2e50;
    case 8: goto L_119c2df2;
    case 9: goto L_119c2ea3;
    case 10: goto L_119c3013;
    case 11: goto L_119c2faf;
    case 12: goto L_119c2a19;
    case 13: goto L_119c2a07;
    case 14: goto L_119c2a10;
    case 15: goto L_119c2a2b;
    default: x86_unimpl("switch@0x119c28e5 out of table"); return;
  }
L_119c28ec:;
  /* 119c28ec movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c28f0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c28f3 jl 0x119c2910 */
  if ((C.sf!=C.of)) goto L_119c2910;
  /* 119c28f5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c28f9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c28fc jg 0x119c2910 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c2910;
  /* 119c28fe mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 119c2905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2908 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c290b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c290e jmp 0x119c2985 */
  goto L_119c2985;
L_119c2910:;
  /* 119c2910 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2914 movsx eax, byte ptr [0x119e5014] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e5014))));
  /* 119c291b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c291d jne 0x119c2928 */
  if (!C.zf) goto L_119c2928;
  /* 119c291f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 119c2926 jmp 0x119c2985 */
  goto L_119c2985;
L_119c2928:;
  /* 119c2928 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 119c292b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 119c2931 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2938 je 0x119c2957 */
  if (C.zf) goto L_119c2957;
  /* 119c293a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2941 je 0x119c2966 */
  if (C.zf) goto L_119c2966;
  /* 119c2943 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c294a je 0x119c294e */
  if (C.zf) goto L_119c294e;
  /* 119c294c jmp 0x119c2975 */
  goto L_119c2975;
L_119c294e:;
  /* 119c294e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 119c2955 jmp 0x119c2985 */
  goto L_119c2985;
L_119c2957:;
  /* 119c2957 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 119c295e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119c2964 jmp 0x119c2985 */
  goto L_119c2985;
L_119c2966:;
  /* 119c2966 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 119c296d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 119c2973 jmp 0x119c2985 */
  goto L_119c2985;
L_119c2975:;
  /* 119c2975 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c297c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c297f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c2985:;
  /* 119c2985 jmp 0x119c3013 */
  goto L_119c3013;
L_119c298a:;
  /* 119c298a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 119c2991 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2995 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2998 jl 0x119c29b8 */
  if ((C.sf!=C.of)) goto L_119c29b8;
  /* 119c299a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c299e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c29a1 jg 0x119c29b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c29b8;
  /* 119c29a3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 119c29aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c29ad sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c29b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c29b3 jmp 0x119c2a3b */
  goto L_119c2a3b;
L_119c29b8:;
  /* 119c29b8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c29bc movsx ecx, byte ptr [0x119e5014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e5014))));
  /* 119c29c3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c29c5 jne 0x119c29d0 */
  if (!C.zf) goto L_119c29d0;
  /* 119c29c7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 119c29ce jmp 0x119c2a3b */
  goto L_119c2a3b;
L_119c29d0:;
  /* 119c29d0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c29d4 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 119c29da mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 119c29e0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c29e3 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 119c29e9 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c29f0 ja 0x119c2a2b */
  if ((!C.cf&&!C.zf)) goto L_119c2a2b;
  /* 119c29f2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 119c29f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c29fa mov cl, byte ptr [edx + 0x119c326a] */
  CL = (r8((uint32_t)(EDX + 0x119c326a)));
  /* 119c2a00 jmp dword ptr [ecx*4 + 0x119c325a] */
  switch (ECX) {
    case 0: goto L_119c2a19;
    case 1: goto L_119c2a07;
    case 2: goto L_119c2a10;
    case 3: goto L_119c2a2b;
    default: x86_unimpl("switch@0x119c2a00 out of table"); return;
  }
L_119c2a07:;
  /* 119c2a07 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 119c2a0e jmp 0x119c2a3b */
  goto L_119c2a3b;
L_119c2a10:;
  /* 119c2a10 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 119c2a17 jmp 0x119c2a3b */
  goto L_119c2a3b;
L_119c2a19:;
  /* 119c2a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2a1c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2a1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c2a22 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 119c2a29 jmp 0x119c2a3b */
  goto L_119c2a3b;
L_119c2a2b:;
  /* 119c2a2b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2a35 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2a38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c2a3b:;
  /* 119c2a3b jmp 0x119c3013 */
  goto L_119c3013;
L_119c2a40:;
  /* 119c2a40 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2a44 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2a47 jl 0x119c2a64 */
  if ((C.sf!=C.of)) goto L_119c2a64;
  /* 119c2a49 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2a4d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2a50 jg 0x119c2a64 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c2a64;
  /* 119c2a52 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 119c2a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2a5c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c2a62 jmp 0x119c2aa6 */
  goto L_119c2aa6;
L_119c2a64:;
  /* 119c2a64 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2a68 movsx eax, byte ptr [0x119e5014] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e5014))));
  /* 119c2a6f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2a71 jne 0x119c2a7c */
  if (!C.zf) goto L_119c2a7c;
  /* 119c2a73 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 119c2a7a jmp 0x119c2aa6 */
  goto L_119c2aa6;
L_119c2a7c:;
  /* 119c2a7c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 119c2a7f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 119c2a85 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2a8c je 0x119c2a90 */
  if (C.zf) goto L_119c2a90;
  /* 119c2a8e jmp 0x119c2a99 */
  goto L_119c2a99;
L_119c2a90:;
  /* 119c2a90 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 119c2a97 jmp 0x119c2aa6 */
  goto L_119c2aa6;
L_119c2a99:;
  /* 119c2a99 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2aa0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 119c2aa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c2aa6:;
  /* 119c2aa6 jmp 0x119c3013 */
  goto L_119c3013;
L_119c2aab:;
  /* 119c2aab mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 119c2ab2 jmp 0x119c2ac5 */
  goto L_119c2ac5;
L_119c2ab4:;
  /* 119c2ab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2ab7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c2ab9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 119c2abc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2abf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2ac2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c2ac5:;
  /* 119c2ac5 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2acc jle 0x119c2ae9 */
  if ((C.zf||C.sf!=C.of)) goto L_119c2ae9;
  /* 119c2ace push 4 */
  push32((uint32_t)(0x4u));
  /* 119c2ad0 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2ad3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c2ad8 push eax */
  push32((uint32_t)(EAX));
  /* 119c2ad9 call 0x119bc980 */
  push32(0x119c2adeu); f_119bc980();
  /* 119c2ade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2ae1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 119c2ae7 jmp 0x119c2b07 */
  goto L_119c2b07;
L_119c2ae9:;
  /* 119c2ae9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2aec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c2af2 mov edx, dword ptr [0x119e4e00] */
  EDX = (r32((uint32_t)(0x119e4e00)));
  /* 119c2af8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2afa mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 119c2afe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119c2b01 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_119c2b07:;
  /* 119c2b07 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2b0e je 0x119c2b44 */
  if (C.zf) goto L_119c2b44;
  /* 119c2b10 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2b14 jae 0x119c2b36 */
  if (!C.cf) goto L_119c2b36;
  /* 119c2b16 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c2b19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2b1c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 119c2b1f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2b23 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2b26 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c2b29 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c2b2b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c2b2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2b31 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 119c2b34 jmp 0x119c2b3f */
  goto L_119c2b3f;
L_119c2b36:;
  /* 119c2b36 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119c2b39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2b3c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_119c2b3f:;
  /* 119c2b3f jmp 0x119c2ab4 */
  goto L_119c2ab4;
L_119c2b44:;
  /* 119c2b44 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2b48 movsx ecx, byte ptr [0x119e5014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119e5014))));
  /* 119c2b4f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2b51 jne 0x119c2b5c */
  if (!C.zf) goto L_119c2b5c;
  /* 119c2b53 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 119c2b5a jmp 0x119c2bbe */
  goto L_119c2bbe;
L_119c2b5c:;
  /* 119c2b5c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2b60 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 119c2b66 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 119c2b6c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2b6f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 119c2b75 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2b7c ja 0x119c2bae */
  if ((!C.cf&&!C.zf)) goto L_119c2bae;
  /* 119c2b7e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 119c2b84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c2b86 mov cl, byte ptr [edx + 0x119c32b1] */
  CL = (r8((uint32_t)(EDX + 0x119c32b1)));
  /* 119c2b8c jmp dword ptr [ecx*4 + 0x119c32a5] */
  switch (ECX) {
    case 0: goto L_119c2b9c;
    case 1: goto L_119c2b93;
    case 2: goto L_119c2bae;
    default: x86_unimpl("switch@0x119c2b8c out of table"); return;
  }
L_119c2b93:;
  /* 119c2b93 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 119c2b9a jmp 0x119c2bbe */
  goto L_119c2bbe;
L_119c2b9c:;
  /* 119c2b9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2ba2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c2ba5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 119c2bac jmp 0x119c2bbe */
  goto L_119c2bbe;
L_119c2bae:;
  /* 119c2bae mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2bb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2bb8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2bbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c2bbe:;
  /* 119c2bbe jmp 0x119c3013 */
  goto L_119c3013;
L_119c2bc3:;
  /* 119c2bc3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 119c2bca mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 119c2bd1 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2bd5 jne 0x119c2bfe */
  if (!C.zf) goto L_119c2bfe;
  /* 119c2bd7 jmp 0x119c2bea */
  goto L_119c2bea;
L_119c2bd9:;
  /* 119c2bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2bdc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c2bde mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 119c2be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2be4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2be7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c2bea:;
  /* 119c2bea movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2bee cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2bf1 jne 0x119c2bfe */
  if (!C.zf) goto L_119c2bfe;
  /* 119c2bf3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119c2bf6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2bf9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 119c2bfc jmp 0x119c2bd9 */
  goto L_119c2bd9;
L_119c2bfe:;
  /* 119c2bfe jmp 0x119c2c11 */
  goto L_119c2c11;
L_119c2c00:;
  /* 119c2c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2c03 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c2c05 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 119c2c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2c0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2c0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2c11:;
  /* 119c2c11 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2c18 jle 0x119c2c36 */
  if ((C.zf||C.sf!=C.of)) goto L_119c2c36;
  /* 119c2c1a push 4 */
  push32((uint32_t)(0x4u));
  /* 119c2c1c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2c1f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c2c25 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2c26 call 0x119bc980 */
  push32(0x119c2c2bu); f_119bc980();
  /* 119c2c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2c2e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 119c2c34 jmp 0x119c2c53 */
  goto L_119c2c53;
L_119c2c36:;
  /* 119c2c36 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2c39 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c2c3f mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119c2c44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c2c46 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119c2c4a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c2c4d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_119c2c53:;
  /* 119c2c53 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2c5a je 0x119c2c8e */
  if (C.zf) goto L_119c2c8e;
  /* 119c2c5c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2c60 jae 0x119c2c89 */
  if (!C.cf) goto L_119c2c89;
  /* 119c2c62 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c2c65 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2c68 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 119c2c6b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2c6f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2c72 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c2c75 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c2c77 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c2c7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2c7d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 119c2c80 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119c2c83 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2c86 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_119c2c89:;
  /* 119c2c89 jmp 0x119c2c00 */
  goto L_119c2c00;
L_119c2c8e:;
  /* 119c2c8e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2c92 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 119c2c98 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c2c9e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2ca1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 119c2ca7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2cae ja 0x119c2ce0 */
  if ((!C.cf&&!C.zf)) goto L_119c2ce0;
  /* 119c2cb0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c2cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c2cb8 mov al, byte ptr [ecx + 0x119c32f8] */
  AL = (r8((uint32_t)(ECX + 0x119c32f8)));
  /* 119c2cbe jmp dword ptr [eax*4 + 0x119c32ec] */
  switch (EAX) {
    case 0: goto L_119c2cce;
    case 1: goto L_119c2cc5;
    case 2: goto L_119c2ce0;
    default: x86_unimpl("switch@0x119c2cbe out of table"); return;
  }
L_119c2cc5:;
  /* 119c2cc5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 119c2ccc jmp 0x119c2cf0 */
  goto L_119c2cf0;
L_119c2cce:;
  /* 119c2cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2cd1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2cd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c2cd7 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 119c2cde jmp 0x119c2cf0 */
  goto L_119c2cf0;
L_119c2ce0:;
  /* 119c2ce0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2cea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2ced mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2cf0:;
  /* 119c2cf0 jmp 0x119c3013 */
  goto L_119c3013;
L_119c2cf5:;
  /* 119c2cf5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 119c2cfc cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2d03 jle 0x119c2d21 */
  if ((C.zf||C.sf!=C.of)) goto L_119c2d21;
  /* 119c2d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c2d07 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2d0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c2d10 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2d11 call 0x119bc980 */
  push32(0x119c2d16u); f_119bc980();
  /* 119c2d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2d19 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 119c2d1f jmp 0x119c2d3e */
  goto L_119c2d3e;
L_119c2d21:;
  /* 119c2d21 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2d24 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c2d2a mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119c2d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c2d31 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119c2d35 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c2d38 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_119c2d3e:;
  /* 119c2d3e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2d45 je 0x119c2d59 */
  if (C.zf) goto L_119c2d59;
  /* 119c2d47 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 119c2d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2d51 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2d54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c2d57 jmp 0x119c2d66 */
  goto L_119c2d66;
L_119c2d59:;
  /* 119c2d59 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2d60 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 119c2d63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2d66:;
  /* 119c2d66 jmp 0x119c3013 */
  goto L_119c3013;
L_119c2d6b:;
  /* 119c2d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2d6e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2d71 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 119c2d74 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2d78 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2d7b jl 0x119c2d98 */
  if ((C.sf!=C.of)) goto L_119c2d98;
  /* 119c2d7d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2d81 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2d84 jg 0x119c2d98 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c2d98;
  /* 119c2d86 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 119c2d8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2d90 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2d93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c2d96 jmp 0x119c2ded */
  goto L_119c2ded;
L_119c2d98:;
  /* 119c2d98 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 119c2d9b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 119c2da1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2da8 je 0x119c2dd7 */
  if (C.zf) goto L_119c2dd7;
  /* 119c2daa cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2db1 je 0x119c2dc7 */
  if (C.zf) goto L_119c2dc7;
  /* 119c2db3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2dba je 0x119c2dbe */
  if (C.zf) goto L_119c2dbe;
  /* 119c2dbc jmp 0x119c2de0 */
  goto L_119c2de0;
L_119c2dbe:;
  /* 119c2dbe mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 119c2dc5 jmp 0x119c2ded */
  goto L_119c2ded;
L_119c2dc7:;
  /* 119c2dc7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 119c2dce mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 119c2dd5 jmp 0x119c2ded */
  goto L_119c2ded;
L_119c2dd7:;
  /* 119c2dd7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 119c2dde jmp 0x119c2ded */
  goto L_119c2ded;
L_119c2de0:;
  /* 119c2de0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2de7 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 119c2dea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2ded:;
  /* 119c2ded jmp 0x119c3013 */
  goto L_119c3013;
L_119c2df2:;
  /* 119c2df2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 119c2df9 jmp 0x119c2e0c */
  goto L_119c2e0c;
L_119c2dfb:;
  /* 119c2dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2dfe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c2e00 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 119c2e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2e06 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2e09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2e0c:;
  /* 119c2e0c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2e10 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2e13 jne 0x119c2e17 */
  if (!C.zf) goto L_119c2e17;
  /* 119c2e15 jmp 0x119c2dfb */
  goto L_119c2dfb;
L_119c2e17:;
  /* 119c2e17 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2e1b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2e1e jl 0x119c2e3b */
  if ((C.sf!=C.of)) goto L_119c2e3b;
  /* 119c2e20 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2e24 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2e27 jg 0x119c2e3b */
  if ((!C.zf&&C.sf==C.of)) goto L_119c2e3b;
  /* 119c2e29 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 119c2e30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2e33 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2e36 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c2e39 jmp 0x119c2e4b */
  goto L_119c2e4b;
L_119c2e3b:;
  /* 119c2e3b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2e45 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2e48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c2e4b:;
  /* 119c2e4b jmp 0x119c3013 */
  goto L_119c3013;
L_119c2e50:;
  /* 119c2e50 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2e54 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2e57 jl 0x119c2e74 */
  if ((C.sf!=C.of)) goto L_119c2e74;
  /* 119c2e59 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2e5d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2e60 jg 0x119c2e74 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c2e74;
  /* 119c2e62 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 119c2e69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2e6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2e6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c2e72 jmp 0x119c2e9e */
  goto L_119c2e9e;
L_119c2e74:;
  /* 119c2e74 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 119c2e77 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 119c2e7d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2e84 je 0x119c2e88 */
  if (C.zf) goto L_119c2e88;
  /* 119c2e86 jmp 0x119c2e91 */
  goto L_119c2e91;
L_119c2e88:;
  /* 119c2e88 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 119c2e8f jmp 0x119c2e9e */
  goto L_119c2e9e;
L_119c2e91:;
  /* 119c2e91 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2e98 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 119c2e9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c2e9e:;
  /* 119c2e9e jmp 0x119c3013 */
  goto L_119c3013;
L_119c2ea3:;
  /* 119c2ea3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 119c2eaa mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 119c2eb1 jmp 0x119c2ec4 */
  goto L_119c2ec4;
L_119c2eb3:;
  /* 119c2eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2eb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c2eb8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 119c2ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2ebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2ec1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c2ec4:;
  /* 119c2ec4 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2ecb jle 0x119c2ee9 */
  if ((C.zf||C.sf!=C.of)) goto L_119c2ee9;
  /* 119c2ecd push 4 */
  push32((uint32_t)(0x4u));
  /* 119c2ecf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2ed2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c2ed8 push edx */
  push32((uint32_t)(EDX));
  /* 119c2ed9 call 0x119bc980 */
  push32(0x119c2edeu); f_119bc980();
  /* 119c2ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2ee1 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 119c2ee7 jmp 0x119c2f06 */
  goto L_119c2f06;
L_119c2ee9:;
  /* 119c2ee9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2eec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c2ef1 mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c2ef7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c2ef9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c2efd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119c2f00 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_119c2f06:;
  /* 119c2f06 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2f0d je 0x119c2f37 */
  if (C.zf) goto L_119c2f37;
  /* 119c2f0f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c2f12 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c2f15 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 119c2f19 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 119c2f1d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 119c2f20 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2f27 jle 0x119c2f32 */
  if ((C.zf||C.sf!=C.of)) goto L_119c2f32;
  /* 119c2f29 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 119c2f30 jmp 0x119c2f37 */
  goto L_119c2f37;
L_119c2f32:;
  /* 119c2f32 jmp 0x119c2eb3 */
  goto L_119c2eb3;
L_119c2f37:;
  /* 119c2f37 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c2f3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c2f3d jmp 0x119c2f50 */
  goto L_119c2f50;
L_119c2f3f:;
  /* 119c2f3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2f42 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c2f44 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 119c2f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2f4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2f4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c2f50:;
  /* 119c2f50 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2f57 jle 0x119c2f75 */
  if ((C.zf||C.sf!=C.of)) goto L_119c2f75;
  /* 119c2f59 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c2f5b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2f5e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c2f64 push ecx */
  push32((uint32_t)(ECX));
  /* 119c2f65 call 0x119bc980 */
  push32(0x119c2f6au); f_119bc980();
  /* 119c2f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c2f6d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 119c2f73 jmp 0x119c2f92 */
  goto L_119c2f92;
L_119c2f75:;
  /* 119c2f75 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c2f78 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c2f7e mov eax, dword ptr [0x119e4e00] */
  EAX = (r32((uint32_t)(0x119e4e00)));
  /* 119c2f83 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c2f85 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119c2f89 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c2f8c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_119c2f92:;
  /* 119c2f92 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2f99 je 0x119c2f9d */
  if (C.zf) goto L_119c2f9d;
  /* 119c2f9b jmp 0x119c2f3f */
  goto L_119c2f3f;
L_119c2f9d:;
  /* 119c2f9d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2fa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2fa7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2faa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c2fad jmp 0x119c3013 */
  goto L_119c3013;
L_119c2faf:;
  /* 119c2faf cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c2fb3 je 0x119c3003 */
  if (C.zf) goto L_119c3003;
  /* 119c2fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c2fb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c2fbb mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 119c2fbe mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 119c2fc1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 119c2fc7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2fce je 0x119c2feb */
  if (C.zf) goto L_119c2feb;
  /* 119c2fd0 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c2fd7 je 0x119c2fdb */
  if (C.zf) goto L_119c2fdb;
  /* 119c2fd9 jmp 0x119c2ff4 */
  goto L_119c2ff4;
L_119c2fdb:;
  /* 119c2fdb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 119c2fe2 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 119c2fe9 jmp 0x119c3001 */
  goto L_119c3001;
L_119c2feb:;
  /* 119c2feb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 119c2ff2 jmp 0x119c3001 */
  goto L_119c3001;
L_119c2ff4:;
  /* 119c2ff4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c2ffb mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 119c2ffe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c3001:;
  /* 119c3001 jmp 0x119c3013 */
  goto L_119c3013;
L_119c3003:;
  /* 119c3003 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 119c300a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c300d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c3013:;
  /* 119c3013 jmp 0x119c28b7 */
  goto L_119c28b7;
L_119c3018:;
  /* 119c3018 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c301b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c301e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119c3020 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3024 je 0x119c3167 */
  if (C.zf) goto L_119c3167;
  /* 119c302a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c302e jne 0x119c3167 */
  if (!C.zf) goto L_119c3167;
  /* 119c3034 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3038 jne 0x119c3167 */
  if (!C.zf) goto L_119c3167;
  /* 119c303e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3042 jbe 0x119c306f */
  if ((C.cf||C.zf)) goto L_119c306f;
  /* 119c3044 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 119c3048 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c304b jl 0x119c3056 */
  if ((C.sf!=C.of)) goto L_119c3056;
  /* 119c304d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 119c3050 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c3053 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_119c3056:;
  /* 119c3056 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 119c305d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c3060 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3063 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 119c3066 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119c3069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c306c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_119c306f:;
  /* 119c306f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3073 jbe 0x119c314a */
  if ((C.cf||C.zf)) goto L_119c314a;
  /* 119c3079 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c307c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c307f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 119c3082 jmp 0x119c308d */
  goto L_119c308d;
L_119c3084:;
  /* 119c3084 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c3087 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c308a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_119c308d:;
  /* 119c308d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c3090 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c3093 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c3095 jne 0x119c30ab */
  if (!C.zf) goto L_119c30ab;
  /* 119c3097 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c309a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c309d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 119c30a0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119c30a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c30a6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 119c30a9 jmp 0x119c3084 */
  goto L_119c3084;
L_119c30ab:;
  /* 119c30ab lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 119c30ae push ecx */
  push32((uint32_t)(ECX));
  /* 119c30af mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c30b2 push edx */
  push32((uint32_t)(EDX));
  /* 119c30b3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 119c30b6 push eax */
  push32((uint32_t)(EAX));
  /* 119c30b7 call 0x119c26d0 */
  push32(0x119c30bcu); f_119c26d0();
  /* 119c30bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c30bf cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c30c3 jge 0x119c30cd */
  if ((C.sf==C.of)) goto L_119c30cd;
  /* 119c30c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c30c8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c30ca mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119c30cd:;
  /* 119c30cd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c30d0 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c30d3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c30d6 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c30da jne 0x119c30e5 */
  if (!C.zf) goto L_119c30e5;
  /* 119c30dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c30df add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c30e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_119c30e5:;
  /* 119c30e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c30e9 jne 0x119c30f4 */
  if (!C.zf) goto L_119c30f4;
  /* 119c30eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c30ee sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c30f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119c30f4:;
  /* 119c30f4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c30fb jle 0x119c3106 */
  if ((C.zf||C.sf!=C.of)) goto L_119c3106;
  /* 119c30fd mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 119c3104 jmp 0x119c3148 */
  goto L_119c3148;
L_119c3106:;
  /* 119c3106 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c310d jge 0x119c3118 */
  if ((C.sf==C.of)) goto L_119c3118;
  /* 119c310f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 119c3116 jmp 0x119c3148 */
  goto L_119c3148;
L_119c3118:;
  /* 119c3118 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c311b push edx */
  push32((uint32_t)(EDX));
  /* 119c311c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c311f push eax */
  push32((uint32_t)(EAX));
  /* 119c3120 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 119c3123 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3124 call 0x119c64a0 */
  push32(0x119c3129u); f_119c64a0();
  /* 119c3129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c312c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 119c3130 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 119c3134 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 119c3137 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c313a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 119c313d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c3140 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 119c3144 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_119c3148:;
  /* 119c3148 jmp 0x119c3167 */
  goto L_119c3167;
L_119c314a:;
  /* 119c314a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 119c3150 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 119c3156 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119c3159 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c315e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c3161 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c3164 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119c3167:;
  /* 119c3167 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c316b jne 0x119c3196 */
  if (!C.zf) goto L_119c3196;
  /* 119c316d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 119c3173 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 119c3179 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 119c317c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c3182 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119c3185 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c3188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c318b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c318e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c3191 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 119c3194 jmp 0x119c31ed */
  goto L_119c31ed;
L_119c3196:;
  /* 119c3196 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c319a je 0x119c31c1 */
  if (C.zf) goto L_119c31c1;
  /* 119c319c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 119c31a2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 119c31a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c31b0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 119c31b6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c31b9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 119c31bc mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 119c31bf jmp 0x119c31ed */
  goto L_119c31ed;
L_119c31c1:;
  /* 119c31c1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c31c5 je 0x119c31ed */
  if (C.zf) goto L_119c31ed;
  /* 119c31c7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 119c31cd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 119c31d3 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119c31d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c31db mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c31de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c31e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c31e4 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c31e7 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119c31ea mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_119c31ed:;
  /* 119c31ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c31f0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 119c31f4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 119c31f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c31fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c31fd mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 119c3200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3203 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c3206 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 119c3209 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 119c320c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c3211 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c3214 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c321a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 119c321c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c321f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 119c3223 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c3226 mov esp, ebp */
  ESP = (EBP);
  /* 119c3228 pop ebp */
  EBP = (pop32());
  /* 119c3229 ret  */
  ESPCHK(0x119c2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x119c3340 (79 bytes, 33 insns) */
void f_119c3340(void) {
  FTRACE(0x119c3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c3340 push ebp */
  push32((uint32_t)(EBP));
  /* 119c3341 mov ebp, esp */
  EBP = (ESP);
  /* 119c3343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3346 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c3348 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c334a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c334c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c334f push eax */
  push32((uint32_t)(EAX));
  /* 119c3350 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c3353 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c3357 push edx */
  push32((uint32_t)(EDX));
  /* 119c3358 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 119c335b push eax */
  push32((uint32_t)(EAX));
  /* 119c335c call 0x119c2810 */
  push32(0x119c3361u); f_119c2810();
  /* 119c3361 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3364 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c3367 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c336a push ecx */
  push32((uint32_t)(ECX));
  /* 119c336b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119c336e push edx */
  push32((uint32_t)(EDX));
  /* 119c336f call 0x119bd280 */
  push32(0x119c3374u); f_119bd280();
  /* 119c3374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3377 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c337a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c337e jne 0x119c3388 */
  if (!C.zf) goto L_119c3388;
  /* 119c3380 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c3383 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 119c3385 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_119c3388:;
  /* 119c3388 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c338b mov esp, ebp */
  ESP = (EBP);
  /* 119c338d pop ebp */
  EBP = (pop32());
  /* 119c338e ret  */
  ESPCHK(0x119c3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013390 @ 0x119c3390 (1302 bytes, 386 insns) */
void f_119c3390(void) {
  FTRACE(0x119c3390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c3390 push ebp */
  push32((uint32_t)(EBP));
  /* 119c3391 mov ebp, esp */
  EBP = (ESP);
  /* 119c3393 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3396 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 119c339c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 119c33a2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 119c33a8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 119c33af mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 119c33b3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 119c33b7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 119c33bb mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 119c33bf mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 119c33c3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 119c33c7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 119c33cb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 119c33cf mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 119c33d3 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 119c33d7 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 119c33db mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 119c33df mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 119c33e6 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 119c33ea mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 119c33ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c33f1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119c33f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c33f7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 119c33fa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c33fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c3402 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119c3407 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 119c340b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 119c340f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 119c3414 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 119c3418 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c341b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c3421 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c3423 je 0x119c342e */
  if (C.zf) goto L_119c342e;
  /* 119c3425 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3428 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 119c342c jmp 0x119c3435 */
  goto L_119c3435;
L_119c342e:;
  /* 119c342e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3431 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_119c3435:;
  /* 119c3435 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c3438 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c343e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c3440 jne 0x119c347c */
  if (!C.zf) goto L_119c347c;
  /* 119c3442 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3446 jne 0x119c347c */
  if (!C.zf) goto L_119c347c;
  /* 119c3448 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c344c jne 0x119c347c */
  if (!C.zf) goto L_119c347c;
  /* 119c344e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3451 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 119c3456 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3459 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 119c345d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3460 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 119c3464 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3467 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 119c346b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c346e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 119c3472 mov eax, 1 */
  EAX = (0x1u);
  /* 119c3477 jmp 0x119c38a2 */
  goto L_119c38a2;
L_119c347c:;
  /* 119c347c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c347f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c3485 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c348b jne 0x119c3576 */
  if (!C.zf) goto L_119c3576;
  /* 119c3491 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3494 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 119c3499 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c34a0 jne 0x119c34a8 */
  if (!C.zf) goto L_119c34a8;
  /* 119c34a2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c34a6 je 0x119c34dc */
  if (C.zf) goto L_119c34dc;
L_119c34a8:;
  /* 119c34a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c34ab and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119c34b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c34b3 jne 0x119c34dc */
  if (!C.zf) goto L_119c34dc;
  /* 119c34b5 push 0x119e22b0 */
  push32((uint32_t)(0x119e22b0u));
  /* 119c34ba mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c34bd add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c34c0 push edx */
  push32((uint32_t)(EDX));
  /* 119c34c1 call 0x119bb1c0 */
  push32(0x119c34c6u); f_119bb1c0();
  /* 119c34c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c34c9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c34cc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 119c34d0 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 119c34d7 jmp 0x119c3571 */
  goto L_119c3571;
L_119c34dc:;
  /* 119c34dc mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 119c34df and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c34e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c34e7 je 0x119c351c */
  if (C.zf) goto L_119c351c;
  /* 119c34e9 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c34f0 jne 0x119c351c */
  if (!C.zf) goto L_119c351c;
  /* 119c34f2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c34f6 jne 0x119c351c */
  if (!C.zf) goto L_119c351c;
  /* 119c34f8 push 0x119e22a8 */
  push32((uint32_t)(0x119e22a8u));
  /* 119c34fd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3500 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3503 push edx */
  push32((uint32_t)(EDX));
  /* 119c3504 call 0x119bb1c0 */
  push32(0x119c3509u); f_119bb1c0();
  /* 119c3509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c350c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c350f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 119c3513 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 119c351a jmp 0x119c3571 */
  goto L_119c3571;
L_119c351c:;
  /* 119c351c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3523 jne 0x119c354f */
  if (!C.zf) goto L_119c354f;
  /* 119c3525 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3529 jne 0x119c354f */
  if (!C.zf) goto L_119c354f;
  /* 119c352b push 0x119e22a0 */
  push32((uint32_t)(0x119e22a0u));
  /* 119c3530 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3533 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3536 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3537 call 0x119bb1c0 */
  push32(0x119c353cu); f_119bb1c0();
  /* 119c353c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c353f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3542 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 119c3546 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 119c354d jmp 0x119c3571 */
  goto L_119c3571;
L_119c354f:;
  /* 119c354f push 0x119e2298 */
  push32((uint32_t)(0x119e2298u));
  /* 119c3554 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3557 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c355a push eax */
  push32((uint32_t)(EAX));
  /* 119c355b call 0x119bb1c0 */
  push32(0x119c3560u); f_119bb1c0();
  /* 119c3560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3563 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3566 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 119c356a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_119c3571:;
  /* 119c3571 jmp 0x119c389f */
  goto L_119c389f;
L_119c3576:;
  /* 119c3576 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c3579 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c357f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119c3582 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 119c3586 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c3589 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c358e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c3593 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 119c3597 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c359a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 119c359d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 119c35a1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 119c35a4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c35aa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 119c35ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c35b2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c35b5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c35b8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c35be mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 119c35c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c35c6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c35c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c35cb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 119c35ce and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c35d4 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c35d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c35dc imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c35df add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c35e1 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c35e4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c35e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c35ea sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 119c35ed mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 119c35f1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 119c35f5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 119c35f9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c35fc mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 119c35ff mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 119c3602 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 119c3605 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 119c360b push 1 */
  push32((uint32_t)(0x1u));
  /* 119c360d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 119c3611 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c3613 push edx */
  push32((uint32_t)(EDX));
  /* 119c3614 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 119c3617 push eax */
  push32((uint32_t)(EAX));
  /* 119c3618 call 0x119c64a0 */
  push32(0x119c361du); f_119c64a0();
  /* 119c361d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3620 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 119c3623 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c3629 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c362f jl 0x119c364d */
  if ((C.sf!=C.of)) goto L_119c364d;
  /* 119c3631 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 119c3635 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c3639 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 119c363d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 119c3640 push eax */
  push32((uint32_t)(EAX));
  /* 119c3641 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 119c3644 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3645 call 0x119c6060 */
  push32(0x119c364au); f_119c6060();
  /* 119c364a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c364d:;
  /* 119c364d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3650 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 119c3654 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 119c3657 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c365a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c365d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c365f je 0x119c36a1 */
  if (C.zf) goto L_119c36a1;
  /* 119c3661 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 119c3665 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c3668 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c366a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 119c366d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3671 jg 0x119c36a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c36a1;
  /* 119c3673 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3676 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 119c367b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c367e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 119c3682 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3685 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 119c3689 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c368c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 119c3690 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3693 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 119c3697 mov eax, 1 */
  EAX = (0x1u);
  /* 119c369c jmp 0x119c38a2 */
  goto L_119c38a2;
L_119c36a1:;
  /* 119c36a1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c36a5 jle 0x119c36ae */
  if ((C.zf||C.sf!=C.of)) goto L_119c36ae;
  /* 119c36a7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_119c36ae:;
  /* 119c36ae mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 119c36b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c36b6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c36bb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 119c36be mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 119c36c4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 119c36cb jmp 0x119c36d6 */
  goto L_119c36d6;
L_119c36cd:;
  /* 119c36cd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c36d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c36d3 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_119c36d6:;
  /* 119c36d6 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c36da jge 0x119c36ea */
  if ((C.sf==C.of)) goto L_119c36ea;
  /* 119c36dc lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 119c36df push edx */
  push32((uint32_t)(EDX));
  /* 119c36e0 call 0x119c2600 */
  push32(0x119c36e5u); f_119c2600();
  /* 119c36e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c36e8 jmp 0x119c36cd */
  goto L_119c36cd;
L_119c36ea:;
  /* 119c36ea cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c36ee jge 0x119c371c */
  if ((C.sf==C.of)) goto L_119c371c;
  /* 119c36f0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c36f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c36f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c36fa mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 119c36fd jmp 0x119c3708 */
  goto L_119c3708;
L_119c36ff:;
  /* 119c36ff mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 119c3702 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3705 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_119c3708:;
  /* 119c3708 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c370c jle 0x119c371c */
  if ((C.zf||C.sf!=C.of)) goto L_119c371c;
  /* 119c370e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 119c3711 push edx */
  push32((uint32_t)(EDX));
  /* 119c3712 call 0x119c2660 */
  push32(0x119c3717u); f_119c2660();
  /* 119c3717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c371a jmp 0x119c36ff */
  goto L_119c36ff;
L_119c371c:;
  /* 119c371c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c371f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3722 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c3725 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c3728 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c372b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c372e jmp 0x119c3739 */
  goto L_119c3739;
L_119c3730:;
  /* 119c3730 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c3733 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3736 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c3739:;
  /* 119c3739 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c373d jle 0x119c37a5 */
  if ((C.zf||C.sf!=C.of)) goto L_119c37a5;
  /* 119c373f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119c3742 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c3745 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119c3748 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119c374b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c374e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c3751 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 119c3754 push eax */
  push32((uint32_t)(EAX));
  /* 119c3755 call 0x119c2600 */
  push32(0x119c375au); f_119c2600();
  /* 119c375a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c375d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 119c3760 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3761 call 0x119c2600 */
  push32(0x119c3766u); f_119c2600();
  /* 119c3766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3769 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 119c376c push edx */
  push32((uint32_t)(EDX));
  /* 119c376d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 119c3770 push eax */
  push32((uint32_t)(EAX));
  /* 119c3771 call 0x119c2550 */
  push32(0x119c3776u); f_119c2550();
  /* 119c3776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3779 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 119c377c push ecx */
  push32((uint32_t)(ECX));
  /* 119c377d call 0x119c2600 */
  push32(0x119c3782u); f_119c2600();
  /* 119c3782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3785 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 119c3788 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c378e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3794 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c3796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3799 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c379c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c379f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 119c37a3 jmp 0x119c3730 */
  goto L_119c3730;
L_119c37a5:;
  /* 119c37a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37a8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c37ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c37ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37b1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c37b3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 119c37b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c37bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c37bf movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 119c37c3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c37c6 jl 0x119c3823 */
  if ((C.sf!=C.of)) goto L_119c3823;
  /* 119c37c8 jmp 0x119c37d3 */
  goto L_119c37d3;
L_119c37ca:;
  /* 119c37ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c37d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c37d3:;
  /* 119c37d3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c37d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c37d9 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c37dc jb 0x119c37f1 */
  if (C.cf) goto L_119c37f1;
  /* 119c37de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c37e4 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c37e7 jne 0x119c37f1 */
  if (!C.zf) goto L_119c37f1;
  /* 119c37e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37ec mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 119c37ef jmp 0x119c37ca */
  goto L_119c37ca;
L_119c37f1:;
  /* 119c37f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c37f4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c37f7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c37fa jae 0x119c3815 */
  if (!C.cf) goto L_119c3815;
  /* 119c37fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c37ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3802 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c3805 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3808 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119c380b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c380f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3812 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_119c3815:;
  /* 119c3815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3818 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c381a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c381c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c381f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c3821 jmp 0x119c387c */
  goto L_119c387c;
L_119c3823:;
  /* 119c3823 jmp 0x119c382e */
  goto L_119c382e;
L_119c3825:;
  /* 119c3825 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3828 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c382b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c382e:;
  /* 119c382e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3831 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3834 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3837 jb 0x119c3846 */
  if (C.cf) goto L_119c3846;
  /* 119c3839 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c383c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c383f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3842 jne 0x119c3846 */
  if (!C.zf) goto L_119c3846;
  /* 119c3844 jmp 0x119c3825 */
  goto L_119c3825;
L_119c3846:;
  /* 119c3846 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3849 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c384c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c384f jae 0x119c387c */
  if (!C.cf) goto L_119c387c;
  /* 119c3851 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3854 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 119c3859 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c385c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 119c3860 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3863 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 119c3867 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c386a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 119c386e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3871 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 119c3875 mov eax, 1 */
  EAX = (0x1u);
  /* 119c387a jmp 0x119c38a2 */
  goto L_119c38a2;
L_119c387c:;
  /* 119c387c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c387f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3882 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3885 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3887 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c388a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c388d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 119c3890 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c3893 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 119c3897 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c389a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_119c389f:;
  /* 119c389f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_119c38a2:;
  /* 119c38a2 mov esp, ebp */
  ESP = (EBP);
  /* 119c38a4 pop ebp */
  EBP = (pop32());
  /* 119c38a5 ret  */
  ESPCHK(0x119c3390u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x119c38b0 (130 bytes, 50 insns) */
void f_119c38b0(void) {
  FTRACE(0x119c38b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c38b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c38b1 mov ebp, esp */
  EBP = (ESP);
  /* 119c38b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c38b4 push ebx */
  push32((uint32_t)(EBX));
  /* 119c38b5 push esi */
  push32((uint32_t)(ESI));
  /* 119c38b6 push edi */
  push32((uint32_t)(EDI));
  /* 119c38b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c38be:;
  /* 119c38be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c38c2 jne 0x119c38e2 */
  if (!C.zf) goto L_119c38e2;
  /* 119c38c4 push 0x119e22c4 */
  push32((uint32_t)(0x119e22c4u));
  /* 119c38c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c38cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 119c38cd push 0x119e22b8 */
  push32((uint32_t)(0x119e22b8u));
  /* 119c38d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c38d4 call 0x119b59b0 */
  push32(0x119c38d9u); f_119b59b0();
  /* 119c38d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c38dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c38df jne 0x119c38e2 */
  if (!C.zf) goto L_119c38e2;
  /* 119c38e1 int3  */
  x86_unimpl("int3 @ 0x119c38e1");
L_119c38e2:;
  /* 119c38e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c38e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c38e6 jne 0x119c38be */
  if (!C.zf) goto L_119c38be;
  /* 119c38e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c38eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c38ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 119c38f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c38f3 je 0x119c3901 */
  if (C.zf) goto L_119c3901;
  /* 119c38f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c38f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 119c38ff jmp 0x119c3928 */
  goto L_119c3928;
L_119c3901:;
  /* 119c3901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3904 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3905 call 0x119bc1f0 */
  push32(0x119c390au); f_119bc1f0();
  /* 119c390a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c390d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3910 push edx */
  push32((uint32_t)(EDX));
  /* 119c3911 call 0x119c3940 */
  push32(0x119c3916u); f_119c3940();
  /* 119c3916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c391c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c391f push eax */
  push32((uint32_t)(EAX));
  /* 119c3920 call 0x119bc260 */
  push32(0x119c3925u); f_119bc260();
  /* 119c3925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c3928:;
  /* 119c3928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c392b pop edi */
  EDI = (pop32());
  /* 119c392c pop esi */
  ESI = (pop32());
  /* 119c392d pop ebx */
  EBX = (pop32());
  /* 119c392e mov esp, ebp */
  ESP = (EBP);
  /* 119c3930 pop ebp */
  EBP = (pop32());
  /* 119c3931 ret  */
  ESPCHK(0x119c38b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x119c3940 (190 bytes, 67 insns) */
void f_119c3940(void) {
  FTRACE(0x119c3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c3940 push ebp */
  push32((uint32_t)(EBP));
  /* 119c3941 mov ebp, esp */
  EBP = (ESP);
  /* 119c3943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3946 push ebx */
  push32((uint32_t)(EBX));
  /* 119c3947 push esi */
  push32((uint32_t)(ESI));
  /* 119c3948 push edi */
  push32((uint32_t)(EDI));
  /* 119c3949 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c3950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3953 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c3956:;
  /* 119c3956 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c395a jne 0x119c397a */
  if (!C.zf) goto L_119c397a;
  /* 119c395c push 0x119e1680 */
  push32((uint32_t)(0x119e1680u));
  /* 119c3961 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c3963 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 119c3965 push 0x119e22b8 */
  push32((uint32_t)(0x119e22b8u));
  /* 119c396a push 2 */
  push32((uint32_t)(0x2u));
  /* 119c396c call 0x119b59b0 */
  push32(0x119c3971u); f_119b59b0();
  /* 119c3971 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3974 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3977 jne 0x119c397a */
  if (!C.zf) goto L_119c397a;
  /* 119c3979 int3  */
  x86_unimpl("int3 @ 0x119c3979");
L_119c397a:;
  /* 119c397a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c397c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c397e jne 0x119c3956 */
  if (!C.zf) goto L_119c3956;
  /* 119c3980 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c3983 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 119c3986 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 119c398b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c398d je 0x119c39ea */
  if (C.zf) goto L_119c39ea;
  /* 119c398f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c3992 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3993 call 0x119c1390 */
  push32(0x119c3998u); f_119c1390();
  /* 119c3998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c399b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c399e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c39a1 push edx */
  push32((uint32_t)(EDX));
  /* 119c39a2 call 0x119c66a0 */
  push32(0x119c39a7u); f_119c66a0();
  /* 119c39a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c39aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c39ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119c39b0 push ecx */
  push32((uint32_t)(ECX));
  /* 119c39b1 call 0x119c6570 */
  push32(0x119c39b6u); f_119c6570();
  /* 119c39b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c39b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c39bb jge 0x119c39c6 */
  if ((C.sf==C.of)) goto L_119c39c6;
  /* 119c39bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c39c4 jmp 0x119c39ea */
  goto L_119c39ea;
L_119c39c6:;
  /* 119c39c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c39c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c39cd je 0x119c39ea */
  if (C.zf) goto L_119c39ea;
  /* 119c39cf push 2 */
  push32((uint32_t)(0x2u));
  /* 119c39d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c39d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119c39d7 push ecx */
  push32((uint32_t)(ECX));
  /* 119c39d8 call 0x119b8ca0 */
  push32(0x119c39ddu); f_119b8ca0();
  /* 119c39dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c39e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c39e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_119c39ea:;
  /* 119c39ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c39ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 119c39f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c39f7 pop edi */
  EDI = (pop32());
  /* 119c39f8 pop esi */
  ESI = (pop32());
  /* 119c39f9 pop ebx */
  EBX = (pop32());
  /* 119c39fa mov esp, ebp */
  ESP = (EBP);
  /* 119c39fc pop ebp */
  EBP = (pop32());
  /* 119c39fd ret  */
  ESPCHK(0x119c3940u, _esp0);
  ESP += 4; return;
}

