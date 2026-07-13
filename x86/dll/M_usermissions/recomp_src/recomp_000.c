#include "recomp.h"

/* FUN_10001010 @ 0x12c81010 (10 bytes, 2 insns) */
void f_12c81010(void) {
  FTRACE(0x12c81010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81010 mov ecx, 0x12c93300 */
  ECX = (0x12c93300u);
  /* 12c81015 jmp 0x12c830c0 */
  f_12c830c0(); return;
}

/* FUN_10001020 @ 0x12c81020 (12 bytes, 4 insns) */
void f_12c81020(void) {
  FTRACE(0x12c81020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81020 push 0x12c81030 */
  push32((uint32_t)(0x12c81030u));
  /* 12c81025 call 0x12c84bb0 */
  push32(0x12c8102au); f_12c84bb0();
  /* 12c8102a pop ecx */
  ECX = (pop32());
  /* 12c8102b ret  */
  ESPCHK(0x12c81020u, _esp0);
  ESP += 4; return;
}

/* FUN_10001050 @ 0x12c81050 (10 bytes, 2 insns) */
void f_12c81050(void) {
  FTRACE(0x12c81050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81050 mov ecx, 0x12c932ec */
  ECX = (0x12c932ecu);
  /* 12c81055 jmp 0x12c83830 */
  f_12c83830(); return;
}

/* FUN_10001060 @ 0x12c81060 (12 bytes, 4 insns) */
void f_12c81060(void) {
  FTRACE(0x12c81060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81060 push 0x12c81070 */
  push32((uint32_t)(0x12c81070u));
  /* 12c81065 call 0x12c84bb0 */
  push32(0x12c8106au); f_12c84bb0();
  /* 12c8106a pop ecx */
  ECX = (pop32());
  /* 12c8106b ret  */
  ESPCHK(0x12c81060u, _esp0);
  ESP += 4; return;
}

/* FUN_100010a0 @ 0x12c810a0 (20 bytes, 6 insns) */
void f_12c810a0(void) {
  FTRACE(0x12c810a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c810a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c810a4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c810a5 jne 0x12c810ac */
  if (!C.zf) goto L_12c810ac;
  /* 12c810a7 call 0x12c810c0 */
  push32(0x12c810acu); f_12c810c0();
L_12c810ac:;
  /* 12c810ac mov eax, 1 */
  EAX = (0x1u);
  /* 12c810b1 ret 0xc */
  ESPCHK(0x12c810a0u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x12c810c0 (388 bytes, 115 insns) */
void f_12c810c0(void) {
  FTRACE(0x12c810c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c810c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c810c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c810c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c810c5 push 0x12c8d53b */
  push32((uint32_t)(0x12c8d53bu));
  /* 12c810ca mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c810d0 push eax */
  push32((uint32_t)(EAX));
  /* 12c810d1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c810d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c810d9 mov eax, 0x48544 */
  EAX = (0x48544u);
  /* 12c810de call 0x12c85470 */
  push32(0x12c810e3u); f_12c85470();
  /* 12c810e3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c810e4 push esi */
  push32((uint32_t)(ESI));
  /* 12c810e5 push edi */
  push32((uint32_t)(EDI));
  /* 12c810e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c810ed mov dword ptr [ebp - 0x10], esp */
  w32((uint32_t)(EBP + -0x10), (ESP));
  /* 12c810f0 push 0x12c90244 */
  push32((uint32_t)(0x12c90244u));
  /* 12c810f5 push 0x12c9022c */
  push32((uint32_t)(0x12c9022cu));
  /* 12c810fa call 0x12c85172 */
  push32(0x12c810ffu); f_12c85172();
  /* 12c810ff mov esi, eax */
  ESI = (EAX);
  /* 12c81101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81104 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c81106 jne 0x12c8111d */
  if (!C.zf) goto L_12c8111d;
  /* 12c81108 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 12c8110b push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c81110 push eax */
  push32((uint32_t)(EAX));
  /* 12c81111 mov dword ptr [ebp - 0x18], 0x12c90210 */
  w32((uint32_t)(EBP + -0x18), (0x12c90210u));
  /* 12c81118 call 0x12c8558e */
  push32(0x12c8111du); f_12c8558e();
L_12c8111d:;
  /* 12c8111d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8111f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c81121 push esi */
  push32((uint32_t)(ESI));
  /* 12c81122 call 0x12c85088 */
  push32(0x12c81127u); f_12c85088();
  /* 12c81127 push esi */
  push32((uint32_t)(ESI));
  /* 12c81128 call 0x12c84f05 */
  push32(0x12c8112du); f_12c84f05();
  /* 12c8112d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8112f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c81131 push esi */
  push32((uint32_t)(ESI));
  /* 12c81132 mov edi, eax */
  EDI = (EAX);
  /* 12c81134 call 0x12c85088 */
  push32(0x12c81139u); f_12c85088();
  /* 12c81139 push esi */
  push32((uint32_t)(ESI));
  /* 12c8113a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8113c lea ecx, [ebp - 0x120] */
  ECX = ((uint32_t)(EBP + -0x120));
  /* 12c81142 push edi */
  push32((uint32_t)(EDI));
  /* 12c81143 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81144 call 0x12c84dee */
  push32(0x12c81149u); f_12c84dee();
  /* 12c81149 lea edx, [ebp - 0x120] */
  EDX = ((uint32_t)(EBP + -0x120));
  /* 12c8114f push 0x12c9020c */
  push32((uint32_t)(0x12c9020cu));
  /* 12c81154 push edx */
  push32((uint32_t)(EDX));
  /* 12c81155 mov byte ptr [ebp + edi - 0x120], 0 */
  w8((uint32_t)(EBP + EDI*1 + -0x120), (0x0u));
  /* 12c8115d call 0x12c84db0 */
  push32(0x12c81162u); f_12c84db0();
  /* 12c81162 push esi */
  push32((uint32_t)(ESI));
  /* 12c81163 mov byte ptr [ebp + eax - 0x120], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x120), (0x0u));
  /* 12c8116b call 0x12c84d2a */
  push32(0x12c81170u); f_12c84d2a();
  /* 12c81170 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81173 lea eax, [ebp - 0x120] */
  EAX = ((uint32_t)(EBP + -0x120));
  /* 12c81179 lea ecx, [ebp - 0x48554] */
  ECX = ((uint32_t)(EBP + -0x48554));
  /* 12c8117f push 0x12c901f0 */
  push32((uint32_t)(0x12c901f0u));
  /* 12c81184 push eax */
  push32((uint32_t)(EAX));
  /* 12c81185 call 0x12c81380 */
  push32(0x12c8118au); f_12c81380();
  /* 12c8118a push 0x12c93300 */
  push32((uint32_t)(0x12c93300u));
  /* 12c8118f lea ecx, [ebp - 0x48554] */
  ECX = ((uint32_t)(EBP + -0x48554));
  /* 12c81195 mov byte ptr [ebp - 4], 1 */
  w8((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c81199 call 0x12c815c0 */
  push32(0x12c8119eu); f_12c815c0();
  /* 12c8119e mov esi, dword ptr [0x12c8e148] */
  ESI = (r32((uint32_t)(0x12c8e148)));
  /* 12c811a4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c811a9 push 0x12caa304 */
  push32((uint32_t)(0x12caa304u));
  /* 12c811ae call esi */
  call_ind((uint32_t)(ESI), 0x12c811b0u);
  /* 12c811b0 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12c811b2 push 0x12cac304 */
  push32((uint32_t)(0x12cac304u));
  /* 12c811b7 call esi */
  call_ind((uint32_t)(ESI), 0x12c811b9u);
  /* 12c811b9 mov edi, dword ptr [0x12c8e158] */
  EDI = (r32((uint32_t)(0x12c8e158)));
  /* 12c811bf push 0x12c932f8 */
  push32((uint32_t)(0x12c932f8u));
  /* 12c811c4 call edi */
  call_ind((uint32_t)(EDI), 0x12c811c6u);
  /* 12c811c6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c811c8 push 0x12c932f8 */
  push32((uint32_t)(0x12c932f8u));
  /* 12c811cd call esi */
  call_ind((uint32_t)(ESI), 0x12c811cfu);
  /* 12c811cf push 0x12c932cc */
  push32((uint32_t)(0x12c932ccu));
  /* 12c811d4 call edi */
  call_ind((uint32_t)(EDI), 0x12c811d6u);
  /* 12c811d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c811d8 push 0x12c932cc */
  push32((uint32_t)(0x12c932ccu));
  /* 12c811dd call esi */
  call_ind((uint32_t)(ESI), 0x12c811dfu);
  /* 12c811df mov edi, dword ptr [0x12c8e15c] */
  EDI = (r32((uint32_t)(0x12c8e15c)));
  /* 12c811e5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c811e8 mov bl, 0x41 */
  BL = (0x41u);
L_12c811ea:;
  /* 12c811ea cmp bl, 0x5a */
  { uint32_t _a=(BL),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c811ed mov byte ptr [ebp - 0x14], bl */
  w8((uint32_t)(EBP + -0x14), (BL));
  /* 12c811f0 jg 0x12c811ff */
  if ((!C.zf&&C.sf==C.of)) goto L_12c811ff;
  /* 12c811f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c811f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c811f6 call edi */
  call_ind((uint32_t)(EDI), 0x12c811f8u);
  /* 12c811f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c811fb inc bl */
  { uint32_t _r=(BL)+1; BL = (_r); fl_inc(_r,8); }
  /* 12c811fd jmp 0x12c811ea */
  goto L_12c811ea;
L_12c811ff:;
  /* 12c811ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c81201 mov cl, 0xff */
  CL = (0xffu);
L_12c81203:;
  /* 12c81203 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81206 jge 0x12c81211 */
  if ((C.sf==C.of)) goto L_12c81211;
  /* 12c81208 mov byte ptr [eax + 0x12c932d8], cl */
  w8((uint32_t)(EAX + 0x12c932d8), (CL));
  /* 12c8120e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8120f jmp 0x12c81203 */
  goto L_12c81203;
L_12c81211:;
  /* 12c81211 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c81213 push 0x12c932d8 */
  push32((uint32_t)(0x12c932d8u));
  /* 12c81218 call esi */
  call_ind((uint32_t)(ESI), 0x12c8121au);
  /* 12c8121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8121d lea ecx, [ebp - 0x48554] */
  ECX = ((uint32_t)(EBP + -0x48554));
  /* 12c81223 mov byte ptr [0x12c932e0], 1 */
  w8((uint32_t)(0x12c932e0), (0x1u));
  /* 12c8122a mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c8122e call 0x12c814a0 */
  push32(0x12c81233u); f_12c814a0();
  /* 12c81233 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c81236 pop edi */
  EDI = (pop32());
  /* 12c81237 pop esi */
  ESI = (pop32());
  /* 12c81238 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8123f pop ebx */
  EBX = (pop32());
  /* 12c81240 mov esp, ebp */
  ESP = (EBP);
  /* 12c81242 pop ebp */
  EBP = (pop32());
  /* 12c81243 ret  */
  ESPCHK(0x12c810c0u, _esp0);
  ESP += 4; return;
}

/* Catch@10001244 @ 0x12c81244 (34 bytes, 8 insns) */
void f_12c81244(void) {
  FTRACE(0x12c81244u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81244 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c81247 push edx */
  push32((uint32_t)(EDX));
  /* 12c81248 push 0x12c901d8 */
  push32((uint32_t)(0x12c901d8u));
  /* 12c8124d call dword ptr [0x12c8e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e154))), 0x12c81253u);
  /* 12c81253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81256 mov dword ptr [0x12c9b300], 6 */
  w32((uint32_t)(0x12c9b300), (0x6u));
  /* 12c81260 mov eax, 0x12c81233 */
  EAX = (0x12c81233u);
  /* 12c81265 ret  */
  ESPCHK(0x12c81244u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x12c81270 (118 bytes, 38 insns) */
void f_12c81270(void) {
  FTRACE(0x12c81270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81270 mov al, byte ptr [0x12c932e0] */
  AL = (r8((uint32_t)(0x12c932e0)));
  /* 12c81275 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c81277 je 0x12c8129f */
  if (C.zf) goto L_12c8129f;
  /* 12c81279 push esi */
  push32((uint32_t)(ESI));
  /* 12c8127a push edi */
  push32((uint32_t)(EDI));
  /* 12c8127b mov edi, dword ptr [0x12c8e140] */
  EDI = (r32((uint32_t)(0x12c8e140)));
  /* 12c81281 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c81283:;
  /* 12c81283 mov al, byte ptr [esi + 0x12c932d8] */
  AL = (r8((uint32_t)(ESI + 0x12c932d8)));
  /* 12c81289 push eax */
  push32((uint32_t)(EAX));
  /* 12c8128a push esi */
  push32((uint32_t)(ESI));
  /* 12c8128b call edi */
  call_ind((uint32_t)(EDI), 0x12c8128du);
  /* 12c8128d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81290 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c81291 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81294 jl 0x12c81283 */
  if ((C.sf!=C.of)) goto L_12c81283;
  /* 12c81296 pop edi */
  EDI = (pop32());
  /* 12c81297 mov byte ptr [0x12c932e0], 0 */
  w8((uint32_t)(0x12c932e0), (0x0u));
  /* 12c8129e pop esi */
  ESI = (pop32());
L_12c8129f:;
  /* 12c8129f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c812a1 push 0x12c932cc */
  push32((uint32_t)(0x12c932ccu));
  /* 12c812a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c812a8 call dword ptr [0x12c8e144] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e144))), 0x12c812aeu);
  /* 12c812ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c812b1 mov ecx, 0x12c93300 */
  ECX = (0x12c93300u);
  /* 12c812b6 call 0x12c831c0 */
  push32(0x12c812bbu); f_12c831c0();
  /* 12c812bb push 0x12c932cc */
  push32((uint32_t)(0x12c932ccu));
  /* 12c812c0 call dword ptr [0x12c8e13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e13c))), 0x12c812c6u);
  /* 12c812c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c812c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c812cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c812cd jle 0x12c812de */
  if ((C.zf||C.sf!=C.of)) goto L_12c812de;
  /* 12c812cf push 0x12c932cc */
  push32((uint32_t)(0x12c932ccu));
  /* 12c812d4 call dword ptr [0x12c8e14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e14c))), 0x12c812dau);
  /* 12c812da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c812dd ret  */
  ESPCHK(0x12c81270u, _esp0);
  ESP += 4; return;
L_12c812de:;
  /* 12c812de call dword ptr [0x12c8e150] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e150))), 0x12c812e4u);
  /* 12c812e4 pop ecx */
  ECX = (pop32());
  /* 12c812e5 ret  */
  ESPCHK(0x12c81270u, _esp0);
  ESP += 4; return;
}

/* FUN_100012f0 @ 0x12c812f0 (71 bytes, 31 insns) */
void f_12c812f0(void) {
  FTRACE(0x12c812f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c812f0 push esi */
  push32((uint32_t)(ESI));
  /* 12c812f1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c812f5 mov edx, 0x12cac330 */
  EDX = (0x12cac330u);
  /* 12c812fa mov eax, esi */
  EAX = (ESI);
  /* 12c812fc sub edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c812fe:;
  /* 12c812fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c81300 mov byte ptr [edx + eax], cl */
  w8((uint32_t)(EDX + EAX*1), (CL));
  /* 12c81303 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c81304 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c81306 jne 0x12c812fe */
  if (!C.zf) goto L_12c812fe;
  /* 12c81308 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8130c push eax */
  push32((uint32_t)(EAX));
  /* 12c8130d push esi */
  push32((uint32_t)(ESI));
  /* 12c8130e push 0x12c90248 */
  push32((uint32_t)(0x12c90248u));
  /* 12c81313 push 0x12cac330 */
  push32((uint32_t)(0x12cac330u));
  /* 12c81318 call 0x12c855c8 */
  push32(0x12c8131du); f_12c855c8();
  /* 12c8131d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81320 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12c81324 mov dword ptr [esp + 8], 0x12cac330 */
  w32((uint32_t)(ESP + 0x8), (0x12cac330u));
  /* 12c8132c push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c81331 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81332 call 0x12c8558e */
  push32(0x12c81337u); f_12c8558e();
  /* 12c81337 pop esi */
  ESI = (pop32());
  /* 12c81338 nop  */
  /* nop */
  /* 12c81339 nop  */
  /* nop */
  /* 12c8133a nop  */
  /* nop */
  /* 12c8133b nop  */
  /* nop */
  /* 12c8133c nop  */
  /* nop */
  /* 12c8133d nop  */
  /* nop */
  /* 12c8133e nop  */
  /* nop */
  /* 12c8133f nop  */
  /* nop */
}

/* FUN_10001340 @ 0x12c81340 (49 bytes, 19 insns) */
void f_12c81340(void) {
  FTRACE(0x12c81340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81340 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c81344 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c81348 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8134b mov eax, 0x23523066 */
  EAX = (0x23523066u);
  /* 12c81350 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c81352 jle 0x12c81370 */
  if ((C.zf||C.sf!=C.of)) goto L_12c81370;
  /* 12c81354 push esi */
  push32((uint32_t)(ESI));
  /* 12c81355 lea esi, [ecx - 1] */
  ESI = ((uint32_t)(ECX + -0x1));
  /* 12c81358 shr esi, 2 */
  ESI = (sh_shr((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c8135b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c8135c:;
  /* 12c8135c mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c8135e add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81361 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81363 xor ecx, 0x61352443 */
  { uint32_t _r=(ECX)^(0x61352443u); ECX = (_r); fl_logic(_r,32); }
  /* 12c81369 mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12c8136c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8136d jne 0x12c8135c */
  if (!C.zf) goto L_12c8135c;
  /* 12c8136f pop esi */
  ESI = (pop32());
L_12c81370:;
  /* 12c81370 ret  */
  ESPCHK(0x12c81340u, _esp0);
  ESP += 4; return;
}

/* FUN_10001380 @ 0x12c81380 (279 bytes, 104 insns) */
void f_12c81380(void) {
  FTRACE(0x12c81380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81380 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c81384 push ebx */
  push32((uint32_t)(EBX));
  /* 12c81385 push ebp */
  push32((uint32_t)(EBP));
  /* 12c81386 push esi */
  push32((uint32_t)(ESI));
  /* 12c81387 push edi */
  push32((uint32_t)(EDI));
  /* 12c81388 mov esi, ecx */
  ESI = (ECX);
  /* 12c8138a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8138c push 0x12c90288 */
  push32((uint32_t)(0x12c90288u));
  /* 12c81391 push eax */
  push32((uint32_t)(EAX));
  /* 12c81392 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 12c81394 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c81397 mov dword ptr [esi + 0xc], ebx */
  w32((uint32_t)(ESI + 0xc), (EBX));
  /* 12c8139a mov dword ptr [esi + 0x10], ebx */
  w32((uint32_t)(ESI + 0x10), (EBX));
  /* 12c8139d call 0x12c85172 */
  push32(0x12c813a2u); f_12c85172();
  /* 12c813a2 mov edi, eax */
  EDI = (EAX);
  /* 12c813a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c813a7 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c813a9 jne 0x12c813c2 */
  if (!C.zf) goto L_12c813c2;
  /* 12c813ab lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c813af push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c813b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c813b5 mov dword ptr [esp + 0x1c], 0x12c90270 */
  w32((uint32_t)(ESP + 0x1c), (0x12c90270u));
  /* 12c813bd call 0x12c8558e */
  push32(0x12c813c2u); f_12c8558e();
L_12c813c2:;
  /* 12c813c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c813c4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c813c5 push edi */
  push32((uint32_t)(EDI));
  /* 12c813c6 call 0x12c85088 */
  push32(0x12c813cbu); f_12c85088();
  /* 12c813cb push edi */
  push32((uint32_t)(EDI));
  /* 12c813cc call 0x12c84f05 */
  push32(0x12c813d1u); f_12c84f05();
  /* 12c813d1 push ebx */
  push32((uint32_t)(EBX));
  /* 12c813d2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c813d3 push edi */
  push32((uint32_t)(EDI));
  /* 12c813d4 mov ebp, eax */
  EBP = (EAX);
  /* 12c813d6 call 0x12c85088 */
  push32(0x12c813dbu); f_12c85088();
  /* 12c813db lea edx, [ebp + 1] */
  EDX = ((uint32_t)(EBP + 0x1));
  /* 12c813de push edx */
  push32((uint32_t)(EDX));
  /* 12c813df call 0x12c8561a */
  push32(0x12c813e4u); f_12c8561a();
  /* 12c813e4 push edi */
  push32((uint32_t)(EDI));
  /* 12c813e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c813e7 push ebp */
  push32((uint32_t)(EBP));
  /* 12c813e8 push eax */
  push32((uint32_t)(EAX));
  /* 12c813e9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c813eb mov dword ptr [esi + 4], ebp */
  w32((uint32_t)(ESI + 0x4), (EBP));
  /* 12c813ee call 0x12c84dee */
  push32(0x12c813f3u); f_12c84dee();
  /* 12c813f3 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c813f6 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c813f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c813f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c813fa call 0x12c81340 */
  push32(0x12c813ffu); f_12c81340();
  /* 12c813ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12c81401 push edi */
  push32((uint32_t)(EDI));
  /* 12c81402 mov byte ptr [edx + ebp], bl */
  w8((uint32_t)(EDX + EBP*1), (BL));
  /* 12c81405 call 0x12c84d2a */
  push32(0x12c8140au); f_12c84d2a();
  /* 12c8140a mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 12c8140e push 0x12c90288 */
  push32((uint32_t)(0x12c90288u));
  /* 12c81413 push eax */
  push32((uint32_t)(EAX));
  /* 12c81414 call 0x12c85172 */
  push32(0x12c81419u); f_12c85172();
  /* 12c81419 mov edi, eax */
  EDI = (EAX);
  /* 12c8141b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8141e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81420 jne 0x12c81439 */
  if (!C.zf) goto L_12c81439;
  /* 12c81422 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c81426 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c8142b push ecx */
  push32((uint32_t)(ECX));
  /* 12c8142c mov dword ptr [esp + 0x1c], 0x12c90250 */
  w32((uint32_t)(ESP + 0x1c), (0x12c90250u));
  /* 12c81434 call 0x12c8558e */
  push32(0x12c81439u); f_12c8558e();
L_12c81439:;
  /* 12c81439 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8143b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8143c push edi */
  push32((uint32_t)(EDI));
  /* 12c8143d call 0x12c85088 */
  push32(0x12c81442u); f_12c85088();
  /* 12c81442 push edi */
  push32((uint32_t)(EDI));
  /* 12c81443 call 0x12c84f05 */
  push32(0x12c81448u); f_12c84f05();
  /* 12c81448 push ebx */
  push32((uint32_t)(EBX));
  /* 12c81449 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8144a push edi */
  push32((uint32_t)(EDI));
  /* 12c8144b mov ebp, eax */
  EBP = (EAX);
  /* 12c8144d call 0x12c85088 */
  push32(0x12c81452u); f_12c85088();
  /* 12c81452 lea edx, [ebp + 1] */
  EDX = ((uint32_t)(EBP + 0x1));
  /* 12c81455 push edx */
  push32((uint32_t)(EDX));
  /* 12c81456 call 0x12c8561a */
  push32(0x12c8145bu); f_12c8561a();
  /* 12c8145b push edi */
  push32((uint32_t)(EDI));
  /* 12c8145c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8145e push ebp */
  push32((uint32_t)(EBP));
  /* 12c8145f push eax */
  push32((uint32_t)(EAX));
  /* 12c81460 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c81463 mov dword ptr [esi + 0x10], ebp */
  w32((uint32_t)(ESI + 0x10), (EBP));
  /* 12c81466 call 0x12c84dee */
  push32(0x12c8146bu); f_12c84dee();
  /* 12c8146b mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8146e mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c81471 push eax */
  push32((uint32_t)(EAX));
  /* 12c81472 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81473 call 0x12c81340 */
  push32(0x12c81478u); f_12c81340();
  /* 12c81478 mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c8147b push edi */
  push32((uint32_t)(EDI));
  /* 12c8147c mov byte ptr [edx + ebp], 0xa */
  w8((uint32_t)(EDX + EBP*1), (0xau));
  /* 12c81480 call 0x12c84d2a */
  push32(0x12c81485u); f_12c84d2a();
  /* 12c81485 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81488 mov dword ptr [esi + 0x48020], ebx */
  w32((uint32_t)(ESI + 0x48020), (EBX));
  /* 12c8148e mov eax, esi */
  EAX = (ESI);
  /* 12c81490 pop edi */
  EDI = (pop32());
  /* 12c81491 pop esi */
  ESI = (pop32());
  /* 12c81492 pop ebp */
  EBP = (pop32());
  /* 12c81493 pop ebx */
  EBX = (pop32());
  /* 12c81494 ret 8 */
  ESPCHK(0x12c81380u, _esp0);
  ESP += 12; return;
}

/* FUN_100014a0 @ 0x12c814a0 (51 bytes, 19 insns) */
void f_12c814a0(void) {
  FTRACE(0x12c814a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c814a0 push esi */
  push32((uint32_t)(ESI));
  /* 12c814a1 mov esi, ecx */
  ESI = (ECX);
  /* 12c814a3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c814a5 push eax */
  push32((uint32_t)(EAX));
  /* 12c814a6 call 0x12c847d0 */
  push32(0x12c814abu); f_12c847d0();
  /* 12c814ab mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c814ae push ecx */
  push32((uint32_t)(ECX));
  /* 12c814af call 0x12c847d0 */
  push32(0x12c814b4u); f_12c847d0();
  /* 12c814b4 mov esi, dword ptr [esi + 0x48028] */
  ESI = (r32((uint32_t)(ESI + 0x48028)));
  /* 12c814ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c814bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c814bf je 0x12c814d1 */
  if (C.zf) goto L_12c814d1;
  /* 12c814c1 mov ecx, esi */
  ECX = (ESI);
  /* 12c814c3 call 0x12c84160 */
  push32(0x12c814c8u); f_12c84160();
  /* 12c814c8 push esi */
  push32((uint32_t)(ESI));
  /* 12c814c9 call 0x12c847d0 */
  push32(0x12c814ceu); f_12c847d0();
  /* 12c814ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c814d1:;
  /* 12c814d1 pop esi */
  ESI = (pop32());
  /* 12c814d2 ret  */
  ESPCHK(0x12c814a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014e0 @ 0x12c814e0 (222 bytes, 80 insns) */
void f_12c814e0(void) {
  FTRACE(0x12c814e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c814e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c814e4 push esi */
  push32((uint32_t)(ESI));
  /* 12c814e5 push edi */
  push32((uint32_t)(EDI));
  /* 12c814e6 mov edi, 0x12c9029c */
  EDI = (0x12c9029cu);
  /* 12c814eb mov esi, eax */
  ESI = (EAX);
  /* 12c814ed mov ecx, 5 */
  ECX = (0x5u);
  /* 12c814f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c814f4 repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c814f6 jne 0x12c814ff */
  if (!C.zf) goto L_12c814ff;
  /* 12c814f8 pop edi */
  EDI = (pop32());
  /* 12c814f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c814fb pop esi */
  ESI = (pop32());
  /* 12c814fc ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c814ff:;
  /* 12c814ff mov edi, 0x12c901b0 */
  EDI = (0x12c901b0u);
  /* 12c81504 mov esi, eax */
  ESI = (EAX);
  /* 12c81506 mov ecx, 5 */
  ECX = (0x5u);
  /* 12c8150b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8150d repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c8150f jne 0x12c8151b */
  if (!C.zf) goto L_12c8151b;
  /* 12c81511 pop edi */
  EDI = (pop32());
  /* 12c81512 mov eax, 1 */
  EAX = (0x1u);
  /* 12c81517 pop esi */
  ESI = (pop32());
  /* 12c81518 ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c8151b:;
  /* 12c8151b mov edi, 0x12c901a8 */
  EDI = (0x12c901a8u);
  /* 12c81520 mov esi, eax */
  ESI = (EAX);
  /* 12c81522 mov ecx, 5 */
  ECX = (0x5u);
  /* 12c81527 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c81529 repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c8152b jne 0x12c81537 */
  if (!C.zf) goto L_12c81537;
  /* 12c8152d pop edi */
  EDI = (pop32());
  /* 12c8152e mov eax, 2 */
  EAX = (0x2u);
  /* 12c81533 pop esi */
  ESI = (pop32());
  /* 12c81534 ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c81537:;
  /* 12c81537 mov edi, 0x12c901a0 */
  EDI = (0x12c901a0u);
  /* 12c8153c mov esi, eax */
  ESI = (EAX);
  /* 12c8153e mov ecx, 5 */
  ECX = (0x5u);
  /* 12c81543 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c81545 repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c81547 jne 0x12c81553 */
  if (!C.zf) goto L_12c81553;
  /* 12c81549 pop edi */
  EDI = (pop32());
  /* 12c8154a mov eax, 3 */
  EAX = (0x3u);
  /* 12c8154f pop esi */
  ESI = (pop32());
  /* 12c81550 ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c81553:;
  /* 12c81553 mov edi, 0x12c90198 */
  EDI = (0x12c90198u);
  /* 12c81558 mov esi, eax */
  ESI = (EAX);
  /* 12c8155a mov ecx, 8 */
  ECX = (0x8u);
  /* 12c8155f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c81561 repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c81563 jne 0x12c8156f */
  if (!C.zf) goto L_12c8156f;
  /* 12c81565 pop edi */
  EDI = (pop32());
  /* 12c81566 mov eax, 4 */
  EAX = (0x4u);
  /* 12c8156b pop esi */
  ESI = (pop32());
  /* 12c8156c ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c8156f:;
  /* 12c8156f mov edi, 0x12c90194 */
  EDI = (0x12c90194u);
  /* 12c81574 mov esi, eax */
  ESI = (EAX);
  /* 12c81576 mov ecx, 4 */
  ECX = (0x4u);
  /* 12c8157b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8157d repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c8157f jne 0x12c8158b */
  if (!C.zf) goto L_12c8158b;
  /* 12c81581 pop edi */
  EDI = (pop32());
  /* 12c81582 mov eax, 5 */
  EAX = (0x5u);
  /* 12c81587 pop esi */
  ESI = (pop32());
  /* 12c81588 ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c8158b:;
  /* 12c8158b mov esi, eax */
  ESI = (EAX);
  /* 12c8158d mov edi, 0x12c9018c */
  EDI = (0x12c9018cu);
  /* 12c81592 mov ecx, 7 */
  ECX = (0x7u);
  /* 12c81597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c81599 repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c8159b jne 0x12c815a7 */
  if (!C.zf) goto L_12c815a7;
  /* 12c8159d pop edi */
  EDI = (pop32());
  /* 12c8159e mov eax, 6 */
  EAX = (0x6u);
  /* 12c815a3 pop esi */
  ESI = (pop32());
  /* 12c815a4 ret 4 */
  ESPCHK(0x12c814e0u, _esp0);
  ESP += 8; return;
L_12c815a7:;
  /* 12c815a7 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 12c815ab push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c815b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c815b1 mov dword ptr [esp + 0x14], 0x12c9028c */
  w32((uint32_t)(ESP + 0x14), (0x12c9028cu));
  /* 12c815b9 call 0x12c8558e */
  push32(0x12c815beu); f_12c8558e();
  /* 12c815be nop  */
  /* nop */
  /* 12c815bf nop  */
  /* nop */
}

/* FUN_100015c0 @ 0x12c815c0 (224 bytes, 69 insns) */
void f_12c815c0(void) {
  FTRACE(0x12c815c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c815c0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c815c2 push 0x12c8d55b */
  push32((uint32_t)(0x12c8d55bu));
  /* 12c815c7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c815cd push eax */
  push32((uint32_t)(EAX));
  /* 12c815ce mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c815d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c815d6 push esi */
  push32((uint32_t)(ESI));
  /* 12c815d7 mov esi, ecx */
  ESI = (ECX);
  /* 12c815d9 push edi */
  push32((uint32_t)(EDI));
  /* 12c815da xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c815dc cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c815de jne 0x12c815f7 */
  if (!C.zf) goto L_12c815f7;
  /* 12c815e0 lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 12c815e4 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c815e9 push eax */
  push32((uint32_t)(EAX));
  /* 12c815ea mov dword ptr [esp + 0x24], 0x12c902b8 */
  w32((uint32_t)(ESP + 0x24), (0x12c902b8u));
  /* 12c815f2 call 0x12c8558e */
  push32(0x12c815f7u); f_12c8558e();
L_12c815f7:;
  /* 12c815f7 cmp dword ptr [esi + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c815fa jne 0x12c81613 */
  if (!C.zf) goto L_12c81613;
  /* 12c815fc lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12c81600 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c81605 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81606 mov dword ptr [esp + 0x10], 0x12c902a4 */
  w32((uint32_t)(ESP + 0x10), (0x12c902a4u));
  /* 12c8160e call 0x12c8558e */
  push32(0x12c81613u); f_12c8558e();
L_12c81613:;
  /* 12c81613 mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c81617 push ebx */
  push32((uint32_t)(EBX));
  /* 12c81618 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c8161a mov dword ptr [esi + 0x48024], edi */
  w32((uint32_t)(ESI + 0x48024), (EDI));
  /* 12c81620 mov dword ptr [esi + 0x1c], edi */
  w32((uint32_t)(ESI + 0x1c), (EDI));
  /* 12c81623 mov dword ptr [esi + 0x18], edi */
  w32((uint32_t)(ESI + 0x18), (EDI));
  /* 12c81626 mov dword ptr [esi + 0x14], edx */
  w32((uint32_t)(ESI + 0x14), (EDX));
  /* 12c81629 call 0x12c8561a */
  push32(0x12c8162eu); f_12c8561a();
  /* 12c8162e mov ebx, eax */
  EBX = (EAX);
  /* 12c81630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81633 mov dword ptr [esp + 0x20], ebx */
  w32((uint32_t)(ESP + 0x20), (EBX));
  /* 12c81637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c81639 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8163b mov dword ptr [esp + 0x18], edi */
  w32((uint32_t)(ESP + 0x18), (EDI));
  /* 12c8163f je 0x12c81656 */
  if (C.zf) goto L_12c81656;
  /* 12c81641 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12c81643 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c81646 mov edi, edx */
  EDI = (EDX);
  /* 12c81648 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c8164a not ecx */
  ECX = (~(ECX));
  /* 12c8164c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8164d push ecx */
  push32((uint32_t)(ECX));
  /* 12c8164e push edx */
  push32((uint32_t)(EDX));
  /* 12c8164f mov ecx, ebx */
  ECX = (EBX);
  /* 12c81651 call 0x12c84120 */
  push32(0x12c81656u); f_12c84120();
L_12c81656:;
  /* 12c81656 mov ecx, esi */
  ECX = (ESI);
  /* 12c81658 mov dword ptr [esp + 0x18], 0xffffffff */
  w32((uint32_t)(ESP + 0x18), (0xffffffffu));
  /* 12c81660 mov dword ptr [esi + 0x48028], eax */
  w32((uint32_t)(ESI + 0x48028), (EAX));
  /* 12c81666 call 0x12c816a0 */
  push32(0x12c8166bu); f_12c816a0();
  /* 12c8166b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c8166d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c81670 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81672 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c81678 mov dword ptr [esi + 0x48030], ecx */
  w32((uint32_t)(ESI + 0x48030), (ECX));
  /* 12c8167e mov ecx, esi */
  ECX = (ESI);
  /* 12c81680 call 0x12c81c40 */
  push32(0x12c81685u); f_12c81c40();
  /* 12c81685 mov ecx, esi */
  ECX = (ESI);
  /* 12c81687 call 0x12c82040 */
  push32(0x12c8168cu); f_12c82040();
  /* 12c8168c mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c81690 pop ebx */
  EBX = (pop32());
  /* 12c81691 pop edi */
  EDI = (pop32());
  /* 12c81692 pop esi */
  ESI = (pop32());
  /* 12c81693 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8169a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8169d ret 4 */
  ESPCHK(0x12c815c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100016a0 @ 0x12c816a0 (703 bytes, 222 insns) */
void f_12c816a0(void) {
  FTRACE(0x12c816a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c816a0 sub esp, 0x31c */
  { uint32_t _a=(ESP),_b=(0x31cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c816a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c816a7 push ebp */
  push32((uint32_t)(EBP));
  /* 12c816a8 push esi */
  push32((uint32_t)(ESI));
  /* 12c816a9 push edi */
  push32((uint32_t)(EDI));
  /* 12c816aa mov edi, dword ptr [0x12c8e004] */
  EDI = (r32((uint32_t)(0x12c8e004)));
  /* 12c816b0 push 0x12c90308 */
  push32((uint32_t)(0x12c90308u));
  /* 12c816b5 mov esi, ecx */
  ESI = (ECX);
  /* 12c816b7 call edi */
  call_ind((uint32_t)(EDI), 0x12c816b9u);
  /* 12c816b9 push 0x12c902fc */
  push32((uint32_t)(0x12c902fcu));
  /* 12c816be mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 12c816c2 call edi */
  call_ind((uint32_t)(EDI), 0x12c816c4u);
  /* 12c816c4 mov ebp, dword ptr [esi + 0xc] */
  EBP = (r32((uint32_t)(ESI + 0xc)));
  /* 12c816c7 mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c816ca add ebx, ebp */
  { uint32_t _a=(EBX),_b=(EBP),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c816cc mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 12c816d0 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c816d2 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 12c816d6 jae 0x12c81926 */
  if (!C.cf) goto L_12c81926;
L_12c816dc:;
  /* 12c816dc push 6 */
  push32((uint32_t)(0x6u));
  /* 12c816de push 0x12c902f4 */
  push32((uint32_t)(0x12c902f4u));
  /* 12c816e3 push ebp */
  push32((uint32_t)(EBP));
  /* 12c816e4 call 0x12c85770 */
  push32(0x12c816e9u); f_12c85770();
  /* 12c816e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c816ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c816ee jne 0x12c8175e */
  if (!C.zf) goto L_12c8175e;
  /* 12c816f0 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 12c816f4 lea ecx, [esp + 0x8c] */
  ECX = ((uint32_t)(ESP + 0x8c));
  /* 12c816fb push eax */
  push32((uint32_t)(EAX));
  /* 12c816fc lea edx, [esp + 0x48] */
  EDX = ((uint32_t)(ESP + 0x48));
  /* 12c81700 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81701 push edx */
  push32((uint32_t)(EDX));
  /* 12c81702 push 0x12c902ec */
  push32((uint32_t)(0x12c902ecu));
  /* 12c81707 push ebp */
  push32((uint32_t)(EBP));
  /* 12c81708 call 0x12c8572e */
  push32(0x12c8170du); f_12c8572e();
  /* 12c8170d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81710 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81713 jne 0x12c81931 */
  if (!C.zf) goto L_12c81931;
  /* 12c81719 mov eax, dword ptr [esi + 0x48020] */
  EAX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c8171f lea ecx, [esp + 0x8c] */
  ECX = ((uint32_t)(ESP + 0x8c));
  /* 12c81726 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c81729 mov dword ptr [esi + eax*8 + 0x40], 3 */
  w32((uint32_t)(ESI + EAX*8 + 0x40), (0x3u));
  /* 12c81731 mov eax, dword ptr [esi + 0x48020] */
  EAX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c81737 lea edx, [eax + eax*8] */
  EDX = ((uint32_t)(EAX + EAX*8));
  /* 12c8173a lea edx, [esi + edx*8 + 0x20] */
  EDX = ((uint32_t)(ESI + EDX*8 + 0x20));
L_12c8173e:;
  /* 12c8173e mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c81740 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c81741 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c81743 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81744 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c81746 jne 0x12c8173e */
  if (!C.zf) goto L_12c8173e;
  /* 12c81748 mov eax, dword ptr [esi + 0x48020] */
  EAX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c8174e mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81752 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c81755 mov dword ptr [esi + eax*8 + 0x44], ecx */
  w32((uint32_t)(ESI + EAX*8 + 0x44), (ECX));
  /* 12c81759 jmp 0x12c81910 */
  goto L_12c81910;
L_12c8175e:;
  /* 12c8175e mov al, byte ptr [ebp] */
  AL = (r8((uint32_t)(EBP)));
  /* 12c81761 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c81763 cmp al, 0x28 */
  { uint32_t _a=(AL),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81765 je 0x12c81774 */
  if (C.zf) goto L_12c81774;
L_12c81767:;
  /* 12c81767 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81769 je 0x12c81774 */
  if (C.zf) goto L_12c81774;
  /* 12c8176b mov al, byte ptr [edi + ebp + 1] */
  AL = (r8((uint32_t)(EDI + EBP*1 + 0x1)));
  /* 12c8176f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c81770 cmp al, 0x28 */
  { uint32_t _a=(AL),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81772 jne 0x12c81767 */
  if (!C.zf) goto L_12c81767;
L_12c81774:;
  /* 12c81774 cmp byte ptr [edi + ebp], 0xa */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81778 je 0x12c81916 */
  if (C.zf) goto L_12c81916;
  /* 12c8177e push edi */
  push32((uint32_t)(EDI));
  /* 12c8177f lea edx, [esp + 0xb0] */
  EDX = ((uint32_t)(ESP + 0xb0));
  /* 12c81786 push ebp */
  push32((uint32_t)(EBP));
  /* 12c81787 push edx */
  push32((uint32_t)(EDX));
  /* 12c81788 call 0x12c85630 */
  push32(0x12c8178du); f_12c85630();
  /* 12c8178d lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 12c81791 lea ecx, [esp + 0x58] */
  ECX = ((uint32_t)(ESP + 0x58));
  /* 12c81795 push eax */
  push32((uint32_t)(EAX));
  /* 12c81796 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81797 lea edx, [esp + 0xc0] */
  EDX = ((uint32_t)(ESP + 0xc0));
  /* 12c8179e push 0x12c902e4 */
  push32((uint32_t)(0x12c902e4u));
  /* 12c817a3 push edx */
  push32((uint32_t)(EDX));
  /* 12c817a4 mov byte ptr [esp + edi + 0xc8], 0 */
  w8((uint32_t)(ESP + EDI*1 + 0xc8), (0x0u));
  /* 12c817ac call 0x12c8572e */
  push32(0x12c817b1u); f_12c8572e();
  /* 12c817b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c817b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c817b7 jne 0x12c817d9 */
  if (!C.zf) goto L_12c817d9;
  /* 12c817b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c817bb:;
  /* 12c817bb mov cl, byte ptr [esp + eax + 0x4c] */
  CL = (r8((uint32_t)(ESP + EAX*1 + 0x4c)));
  /* 12c817bf mov byte ptr [esp + eax + 0x24], cl */
  w8((uint32_t)(ESP + EAX*1 + 0x24), (CL));
  /* 12c817c3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c817c4 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c817c6 jne 0x12c817bb */
  if (!C.zf) goto L_12c817bb;
  /* 12c817c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c817ca:;
  /* 12c817ca mov cl, byte ptr [eax + 0x12c9029c] */
  CL = (r8((uint32_t)(EAX + 0x12c9029c)));
  /* 12c817d0 mov byte ptr [esp + eax + 0x4c], cl */
  w8((uint32_t)(ESP + EAX*1 + 0x4c), (CL));
  /* 12c817d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c817d5 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c817d7 jne 0x12c817ca */
  if (!C.zf) goto L_12c817ca;
L_12c817d9:;
  /* 12c817d9 mov eax, dword ptr [esi + 0x48020] */
  EAX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c817df lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 12c817e3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c817e6 mov dword ptr [esi + eax*8 + 0x40], 7 */
  w32((uint32_t)(ESI + EAX*8 + 0x40), (0x7u));
  /* 12c817ee mov eax, dword ptr [esi + 0x48020] */
  EAX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c817f4 lea edx, [eax + eax*8] */
  EDX = ((uint32_t)(EAX + EAX*8));
  /* 12c817f7 lea edx, [esi + edx*8 + 0x20] */
  EDX = ((uint32_t)(ESI + EDX*8 + 0x20));
L_12c817fb:;
  /* 12c817fb mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c817fd inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c817fe mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c81800 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81801 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c81803 jne 0x12c817fb */
  if (!C.zf) goto L_12c817fb;
  /* 12c81805 lea eax, [esp + 0x4c] */
  EAX = ((uint32_t)(ESP + 0x4c));
  /* 12c81809 mov ecx, esi */
  ECX = (ESI);
  /* 12c8180b push eax */
  push32((uint32_t)(EAX));
  /* 12c8180c call 0x12c814e0 */
  push32(0x12c81811u); f_12c814e0();
  /* 12c81811 mov ecx, dword ptr [esi + 0x48020] */
  ECX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c81817 lea ebp, [edi + ebp + 1] */
  EBP = ((uint32_t)(EDI + EBP*1 + 0x1));
  /* 12c8181b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8181c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8181e lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 12c81821 mov dword ptr [esi + ecx*8], eax */
  w32((uint32_t)(ESI + ECX*8), (EAX));
  /* 12c81824 mov al, byte ptr [ebp] */
  AL = (r8((uint32_t)(EBP)));
  /* 12c81827 cmp al, 0x29 */
  { uint32_t _a=(AL),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81829 je 0x12c81838 */
  if (C.zf) goto L_12c81838;
L_12c8182b:;
  /* 12c8182b cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8182d je 0x12c81838 */
  if (C.zf) goto L_12c81838;
  /* 12c8182f mov al, byte ptr [edi + ebp + 1] */
  AL = (r8((uint32_t)(EDI + EBP*1 + 0x1)));
  /* 12c81833 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c81834 cmp al, 0x29 */
  { uint32_t _a=(AL),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81836 jne 0x12c8182b */
  if (!C.zf) goto L_12c8182b;
L_12c81838:;
  /* 12c81838 push edi */
  push32((uint32_t)(EDI));
  /* 12c81839 lea edx, [esp + 0x130] */
  EDX = ((uint32_t)(ESP + 0x130));
  /* 12c81840 push ebp */
  push32((uint32_t)(EBP));
  /* 12c81841 push edx */
  push32((uint32_t)(EDX));
  /* 12c81842 call 0x12c85630 */
  push32(0x12c81847u); f_12c85630();
  /* 12c81847 mov byte ptr [esp + edi + 0x138], 0 */
  w8((uint32_t)(ESP + EDI*1 + 0x138), (0x0u));
  /* 12c8184f mov cl, byte ptr [esp + 0x138] */
  CL = (r8((uint32_t)(ESP + 0x138)));
  /* 12c81856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81859 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8185b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8185d mov eax, 1 */
  EAX = (0x1u);
  /* 12c81862 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c81864 je 0x12c818cc */
  if (C.zf) goto L_12c818cc;
  /* 12c81866 jmp 0x12c8186c */
  goto L_12c8186c;
L_12c81868:;
  /* 12c81868 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
L_12c8186c:;
  /* 12c8186c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8186e je 0x12c818cc */
  if (C.zf) goto L_12c818cc;
  /* 12c81870 lea eax, [esp + 0x6c] */
  EAX = ((uint32_t)(ESP + 0x6c));
  /* 12c81874 lea ecx, [esp + edi + 0x12c] */
  ECX = ((uint32_t)(ESP + EDI*1 + 0x12c));
  /* 12c8187b push eax */
  push32((uint32_t)(EAX));
  /* 12c8187c push 0x12c902e0 */
  push32((uint32_t)(0x12c902e0u));
  /* 12c81881 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81882 call 0x12c8572e */
  push32(0x12c81887u); f_12c8572e();
  /* 12c81887 mov ecx, eax */
  ECX = (EAX);
  /* 12c81889 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8188c mov dword ptr [esp + 0x1c], ecx */
  w32((uint32_t)(ESP + 0x1c), (ECX));
L_12c81890:;
  /* 12c81890 mov al, byte ptr [esp + edi + 0x12c] */
  AL = (r8((uint32_t)(ESP + EDI*1 + 0x12c)));
  /* 12c81897 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c81899 je 0x12c818a0 */
  if (C.zf) goto L_12c818a0;
  /* 12c8189b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8189c cmp al, 0x2c */
  { uint32_t _a=(AL),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8189e jne 0x12c81890 */
  if (!C.zf) goto L_12c81890;
L_12c818a0:;
  /* 12c818a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c818a2 je 0x12c818c1 */
  if (C.zf) goto L_12c818c1;
  /* 12c818a4 lea edx, [esp + 0x6c] */
  EDX = ((uint32_t)(ESP + 0x6c));
  /* 12c818a8 mov ecx, esi */
  ECX = (ESI);
  /* 12c818aa push edx */
  push32((uint32_t)(EDX));
  /* 12c818ab call 0x12c814e0 */
  push32(0x12c818b0u); f_12c814e0();
  /* 12c818b0 mov ecx, dword ptr [esi + 0x48020] */
  ECX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c818b6 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 12c818b9 lea edx, [ebx + ecx*2] */
  EDX = ((uint32_t)(EBX + ECX*2));
  /* 12c818bc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c818bd mov dword ptr [esi + edx*4 + 0x50], eax */
  w32((uint32_t)(ESI + EDX*4 + 0x50), (EAX));
L_12c818c1:;
  /* 12c818c1 mov al, byte ptr [esp + edi + 0x12c] */
  AL = (r8((uint32_t)(ESP + EDI*1 + 0x12c)));
  /* 12c818c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c818ca jne 0x12c81868 */
  if (!C.zf) goto L_12c81868;
L_12c818cc:;
  /* 12c818cc mov eax, dword ptr [esi + 0x48020] */
  EAX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c818d2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c818d6 mov edi, dword ptr [0x12c8e098] */
  EDI = (r32((uint32_t)(0x12c8e098)));
  /* 12c818dc lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 12c818e0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c818e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c818e4 push edx */
  push32((uint32_t)(EDX));
  /* 12c818e5 mov dword ptr [esi + eax*8 + 0x4c], ebx */
  w32((uint32_t)(ESI + EAX*8 + 0x4c), (EBX));
  /* 12c818e9 call edi */
  call_ind((uint32_t)(EDI), 0x12c818ebu);
  /* 12c818eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c818ed jne 0x12c818ff */
  if (!C.zf) goto L_12c818ff;
  /* 12c818ef mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c818f3 lea eax, [esp + 0x24] */
  EAX = ((uint32_t)(ESP + 0x24));
  /* 12c818f7 push eax */
  push32((uint32_t)(EAX));
  /* 12c818f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c818f9 call edi */
  call_ind((uint32_t)(EDI), 0x12c818fbu);
  /* 12c818fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c818fd je 0x12c81948 */
  if (C.zf) goto L_12c81948;
L_12c818ff:;
  /* 12c818ff mov ecx, dword ptr [esi + 0x48020] */
  ECX = (r32((uint32_t)(ESI + 0x48020)));
  /* 12c81905 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c81909 lea edx, [ecx + ecx*8] */
  EDX = ((uint32_t)(ECX + ECX*8));
  /* 12c8190c mov dword ptr [esi + edx*8 + 0x44], eax */
  w32((uint32_t)(ESI + EDX*8 + 0x44), (EAX));
L_12c81910:;
  /* 12c81910 inc dword ptr [esi + 0x48020] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x48020)))+1; w32((uint32_t)(ESI + 0x48020), (_r)); fl_inc(_r,32); }
L_12c81916:;
  /* 12c81916 mov al, byte ptr [ebp] */
  AL = (r8((uint32_t)(EBP)));
  /* 12c81919 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 12c8191a cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8191c jne 0x12c81916 */
  if (!C.zf) goto L_12c81916;
  /* 12c8191e cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81920 jb 0x12c816dc */
  if (C.cf) goto L_12c816dc;
L_12c81926:;
  /* 12c81926 pop edi */
  EDI = (pop32());
  /* 12c81927 pop esi */
  ESI = (pop32());
  /* 12c81928 pop ebp */
  EBP = (pop32());
  /* 12c81929 pop ebx */
  EBX = (pop32());
  /* 12c8192a add esp, 0x31c */
  { uint32_t _a=(ESP),_b=(0x31cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81930 ret  */
  ESPCHK(0x12c816a0u, _esp0);
  ESP += 4; return;
L_12c81931:;
  /* 12c81931 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c81935 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c8193a push ecx */
  push32((uint32_t)(ECX));
  /* 12c8193b mov dword ptr [esp + 0x18], 0x12c902c4 */
  w32((uint32_t)(ESP + 0x18), (0x12c902c4u));
  /* 12c81943 call 0x12c8558e */
  push32(0x12c81948u); f_12c8558e();
L_12c81948:;
  /* 12c81948 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 12c8194c lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 12c81950 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c81955 push eax */
  push32((uint32_t)(EAX));
  /* 12c81956 mov dword ptr [esp + 0x18], edx */
  w32((uint32_t)(ESP + 0x18), (EDX));
  /* 12c8195a call 0x12c8558e */
  push32(0x12c8195fu); f_12c8558e();
  /* 12c8195f nop  */
  /* nop */
}

/* FUN_10001960 @ 0x12c81960 (130 bytes, 46 insns) */
void f_12c81960(void) {
  FTRACE(0x12c81960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81960 push ebx */
  push32((uint32_t)(EBX));
  /* 12c81961 push edi */
  push32((uint32_t)(EDI));
  /* 12c81962 mov edi, ecx */
  EDI = (ECX);
  /* 12c81964 mov ebx, dword ptr [edi + 0x4802c] */
  EBX = (r32((uint32_t)(EDI + 0x4802c)));
  /* 12c8196a mov eax, dword ptr [edi + 0x48030] */
  EAX = (r32((uint32_t)(EDI + 0x48030)));
  /* 12c81970 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81972 jae 0x12c819df */
  if (!C.cf) goto L_12c819df;
  /* 12c81974 push esi */
  push32((uint32_t)(ESI));
  /* 12c81975 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c81977:;
  /* 12c81977 lea eax, [esi + ebx] */
  EAX = ((uint32_t)(ESI + EBX*1));
  /* 12c8197a push 0x12c90318 */
  push32((uint32_t)(0x12c90318u));
  /* 12c8197f push eax */
  push32((uint32_t)(EAX));
  /* 12c81980 call 0x12c857b0 */
  push32(0x12c81985u); f_12c857b0();
  /* 12c81985 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81987 mov al, byte ptr [esi + ebx] */
  AL = (r8((uint32_t)(ESI + EBX*1)));
  /* 12c8198a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8198d cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8198f lea ecx, [esi + ebx] */
  ECX = ((uint32_t)(ESI + EBX*1));
  /* 12c81992 jne 0x12c819a4 */
  if (!C.zf) goto L_12c819a4;
  /* 12c81994 mov ecx, dword ptr [edi + 0x48024] */
  ECX = (r32((uint32_t)(EDI + 0x48024)));
  /* 12c8199a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8199b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8199c mov dword ptr [edi + 0x48024], ecx */
  w32((uint32_t)(EDI + 0x48024), (ECX));
  /* 12c819a2 jmp 0x12c81977 */
  goto L_12c81977;
L_12c819a4:;
  /* 12c819a4 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c819a6 jne 0x12c819ab */
  if (!C.zf) goto L_12c819ab;
  /* 12c819a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c819a9 jmp 0x12c81977 */
  goto L_12c81977;
L_12c819ab:;
  /* 12c819ab cmp al, 0x25 */
  { uint32_t _a=(AL),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c819ad jne 0x12c819d0 */
  if (!C.zf) goto L_12c819d0;
  /* 12c819af push 0x12c9020c */
  push32((uint32_t)(0x12c9020cu));
  /* 12c819b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c819b5 call 0x12c84db0 */
  push32(0x12c819bau); f_12c84db0();
  /* 12c819ba lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 12c819be mov eax, dword ptr [edi + 0x48024] */
  EAX = (r32((uint32_t)(EDI + 0x48024)));
  /* 12c819c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c819c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c819c8 mov dword ptr [edi + 0x48024], eax */
  w32((uint32_t)(EDI + 0x48024), (EAX));
  /* 12c819ce jmp 0x12c81977 */
  goto L_12c81977;
L_12c819d0:;
  /* 12c819d0 mov eax, dword ptr [edi + 0x4802c] */
  EAX = (r32((uint32_t)(EDI + 0x4802c)));
  /* 12c819d6 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c819d8 pop esi */
  ESI = (pop32());
  /* 12c819d9 mov dword ptr [edi + 0x4802c], eax */
  w32((uint32_t)(EDI + 0x4802c), (EAX));
L_12c819df:;
  /* 12c819df pop edi */
  EDI = (pop32());
  /* 12c819e0 pop ebx */
  EBX = (pop32());
  /* 12c819e1 ret  */
  ESPCHK(0x12c81960u, _esp0);
  ESP += 4; return;
}

/* FUN_100019f0 @ 0x12c819f0 (436 bytes, 129 insns) */
void f_12c819f0(void) {
  FTRACE(0x12c819f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c819f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c819f1 push esi */
  push32((uint32_t)(ESI));
  /* 12c819f2 mov esi, ecx */
  ESI = (ECX);
  /* 12c819f4 push edi */
  push32((uint32_t)(EDI));
  /* 12c819f5 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c819fb mov ebx, eax */
  EBX = (EAX);
  /* 12c819fd cmp byte ptr [eax], 0x20 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a00 je 0x12c81b4e */
  if (C.zf) goto L_12c81b4e;
L_12c81a06:;
  /* 12c81a06 mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81a0c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c81a0e cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a10 je 0x12c81b4e */
  if (C.zf) goto L_12c81b4e;
  /* 12c81a16 cmp al, 9 */
  { uint32_t _a=(AL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a18 je 0x12c81b4e */
  if (C.zf) goto L_12c81b4e;
  /* 12c81a1e cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a20 je 0x12c81b4e */
  if (C.zf) goto L_12c81b4e;
  /* 12c81a26 cmp al, 0x2c */
  { uint32_t _a=(AL),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a28 je 0x12c81b4e */
  if (C.zf) goto L_12c81b4e;
  /* 12c81a2e cmp al, 0x5d */
  { uint32_t _a=(AL),_b=(0x5du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a30 je 0x12c81b4e */
  if (C.zf) goto L_12c81b4e;
  /* 12c81a36 cmp al, 0x28 */
  { uint32_t _a=(AL),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a38 jne 0x12c81af2 */
  if (!C.zf) goto L_12c81af2;
  /* 12c81a3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c81a3f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c81a41 mov dword ptr [esi + 0x4802c], ecx */
  w32((uint32_t)(ESI + 0x4802c), (ECX));
L_12c81a47:;
  /* 12c81a47 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81a4d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c81a4f cmp cl, 0x29 */
  { uint32_t _a=(CL),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a52 jne 0x12c81a68 */
  if (!C.zf) goto L_12c81a68;
  /* 12c81a54 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c81a56 je 0x12c81af2 */
  if (C.zf) goto L_12c81af2;
  /* 12c81a5c cmp cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a5e jne 0x12c81a68 */
  if (!C.zf) goto L_12c81a68;
  /* 12c81a60 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c81a61 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c81a62 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
L_12c81a68:;
  /* 12c81a68 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81a6e cmp byte ptr [eax], 0x28 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a71 jne 0x12c81a7b */
  if (!C.zf) goto L_12c81a7b;
  /* 12c81a73 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c81a74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c81a75 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
L_12c81a7b:;
  /* 12c81a7b mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81a81 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a84 jne 0x12c81abf */
  if (!C.zf) goto L_12c81abf;
  /* 12c81a86 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c81a87 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c81a8d cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81a90 je 0x12c81abf */
  if (C.zf) goto L_12c81abf;
L_12c81a92:;
  /* 12c81a92 cmp eax, dword ptr [esi + 0x48030] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x48030))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81a98 jbe 0x12c81aab */
  if ((C.cf||C.zf)) goto L_12c81aab;
  /* 12c81a9a mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c81a9d push eax */
  push32((uint32_t)(EAX));
  /* 12c81a9e push 0x12c9031c */
  push32((uint32_t)(0x12c9031cu));
  /* 12c81aa3 call 0x12c812f0 */
  push32(0x12c81aa8u); f_12c812f0();
  /* 12c81aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c81aab:;
  /* 12c81aab mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81ab1 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81ab2 mov eax, edx */
  EAX = (EDX);
  /* 12c81ab4 mov dword ptr [esi + 0x4802c], edx */
  w32((uint32_t)(ESI + 0x4802c), (EDX));
  /* 12c81aba cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81abd jne 0x12c81a92 */
  if (!C.zf) goto L_12c81a92;
L_12c81abf:;
  /* 12c81abf mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81ac5 mov ecx, dword ptr [esi + 0x48030] */
  ECX = (r32((uint32_t)(ESI + 0x48030)));
  /* 12c81acb inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81acc mov eax, edx */
  EAX = (EDX);
  /* 12c81ace mov dword ptr [esi + 0x4802c], edx */
  w32((uint32_t)(ESI + 0x4802c), (EDX));
  /* 12c81ad4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81ad6 jbe 0x12c81a47 */
  if ((C.cf||C.zf)) goto L_12c81a47;
  /* 12c81adc mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c81adf push ecx */
  push32((uint32_t)(ECX));
  /* 12c81ae0 push 0x12c9031c */
  push32((uint32_t)(0x12c9031cu));
  /* 12c81ae5 call 0x12c812f0 */
  push32(0x12c81aeau); f_12c812f0();
  /* 12c81aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81aed jmp 0x12c81a47 */
  goto L_12c81a47;
L_12c81af2:;
  /* 12c81af2 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81af8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81afb jne 0x12c81b36 */
  if (!C.zf) goto L_12c81b36;
  /* 12c81afd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c81afe mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c81b04 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81b07 je 0x12c81b36 */
  if (C.zf) goto L_12c81b36;
L_12c81b09:;
  /* 12c81b09 cmp eax, dword ptr [esi + 0x48030] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x48030))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81b0f jbe 0x12c81b22 */
  if ((C.cf||C.zf)) goto L_12c81b22;
  /* 12c81b11 mov edx, dword ptr [esi + 8] */
  EDX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c81b14 push edx */
  push32((uint32_t)(EDX));
  /* 12c81b15 push 0x12c9031c */
  push32((uint32_t)(0x12c9031cu));
  /* 12c81b1a call 0x12c812f0 */
  push32(0x12c81b1fu); f_12c812f0();
  /* 12c81b1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c81b22:;
  /* 12c81b22 mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81b28 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81b29 mov eax, edx */
  EAX = (EDX);
  /* 12c81b2b mov dword ptr [esi + 0x4802c], edx */
  w32((uint32_t)(ESI + 0x4802c), (EDX));
  /* 12c81b31 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81b34 jne 0x12c81b09 */
  if (!C.zf) goto L_12c81b09;
L_12c81b36:;
  /* 12c81b36 mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81b3c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81b3d mov eax, edx */
  EAX = (EDX);
  /* 12c81b3f mov dword ptr [esi + 0x4802c], edx */
  w32((uint32_t)(ESI + 0x4802c), (EDX));
  /* 12c81b45 cmp byte ptr [eax], 0x20 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81b48 jne 0x12c81a06 */
  if (!C.zf) goto L_12c81a06;
L_12c81b4e:;
  /* 12c81b4e mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81b54 lea ecx, [esi + 0x48034] */
  ECX = ((uint32_t)(ESI + 0x48034));
  /* 12c81b5a sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81b5c push eax */
  push32((uint32_t)(EAX));
  /* 12c81b5d push ebx */
  push32((uint32_t)(EBX));
  /* 12c81b5e push ecx */
  push32((uint32_t)(ECX));
  /* 12c81b5f call 0x12c85630 */
  push32(0x12c81b64u); f_12c85630();
  /* 12c81b64 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81b6a mov edx, esi */
  EDX = (ESI);
  /* 12c81b6c sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81b6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81b71 mov ecx, esi */
  ECX = (ESI);
  /* 12c81b73 mov byte ptr [edx + eax + 0x48034], 0 */
  w8((uint32_t)(EDX + EAX*1 + 0x48034), (0x0u));
  /* 12c81b7b call 0x12c81960 */
  push32(0x12c81b80u); f_12c81960();
  /* 12c81b80 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c81b86 cmp byte ptr [eax], 0x2c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81b89 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 12c81b8c test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 12c81b8e je 0x12c81b9e */
  if (C.zf) goto L_12c81b9e;
  /* 12c81b90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c81b91 mov ecx, esi */
  ECX = (ESI);
  /* 12c81b93 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c81b99 call 0x12c81960 */
  push32(0x12c81b9eu); f_12c81960();
L_12c81b9e:;
  /* 12c81b9e pop edi */
  EDI = (pop32());
  /* 12c81b9f mov al, bl */
  AL = (BL);
  /* 12c81ba1 pop esi */
  ESI = (pop32());
  /* 12c81ba2 pop ebx */
  EBX = (pop32());
  /* 12c81ba3 ret  */
  ESPCHK(0x12c819f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bb0 @ 0x12c81bb0 (136 bytes, 48 insns) */
void f_12c81bb0(void) {
  FTRACE(0x12c81bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81bb0 push esi */
  push32((uint32_t)(ESI));
  /* 12c81bb1 push edi */
  push32((uint32_t)(EDI));
  /* 12c81bb2 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c81bb6 mov esi, 0x12c8e168 */
  ESI = (0x12c8e168u);
  /* 12c81bbb test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c81bbd je 0x12c81bc1 */
  if (C.zf) goto L_12c81bc1;
  /* 12c81bbf mov esi, edi */
  ESI = (EDI);
L_12c81bc1:;
  /* 12c81bc1 mov eax, dword ptr [ecx + 0x48020] */
  EAX = (r32((uint32_t)(ECX + 0x48020)));
  /* 12c81bc7 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c81bca lea edx, [ecx + eax*8 + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x20));
L_12c81bce:;
  /* 12c81bce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c81bd0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c81bd1 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c81bd3 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81bd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c81bd6 jne 0x12c81bce */
  if (!C.zf) goto L_12c81bce;
  /* 12c81bd8 mov eax, dword ptr [ecx + 0x48020] */
  EAX = (r32((uint32_t)(ECX + 0x48020)));
  /* 12c81bde lea edx, [eax + eax*8] */
  EDX = ((uint32_t)(EAX + EAX*8));
  /* 12c81be1 mov dword ptr [ecx + edx*8 + 0x40], 5 */
  w32((uint32_t)(ECX + EDX*8 + 0x40), (0x5u));
  /* 12c81be9 mov eax, dword ptr [ecx + 0x48020] */
  EAX = (r32((uint32_t)(ECX + 0x48020)));
  /* 12c81bef mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c81bf3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c81bf6 mov dword ptr [ecx + eax*8 + 0x44], edx */
  w32((uint32_t)(ECX + EAX*8 + 0x44), (EDX));
  /* 12c81bfa mov esi, dword ptr [ecx + 0x18] */
  ESI = (r32((uint32_t)(ECX + 0x18)));
  /* 12c81bfd mov edx, dword ptr [ecx + 0x48020] */
  EDX = (r32((uint32_t)(ECX + 0x48020)));
  /* 12c81c03 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c81c04 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c81c05 mov dword ptr [ecx + 0x18], esi */
  w32((uint32_t)(ECX + 0x18), (ESI));
  /* 12c81c08 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c81c0a mov dword ptr [ecx + 0x48020], edx */
  w32((uint32_t)(ECX + 0x48020), (EDX));
  /* 12c81c10 je 0x12c81c33 */
  if (C.zf) goto L_12c81c33;
  /* 12c81c12 mov cl, byte ptr [edi - 1] */
  CL = (r8((uint32_t)(EDI + -0x1)));
  /* 12c81c15 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 12c81c18 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c81c1a je 0x12c81c2a */
  if (C.zf) goto L_12c81c2a;
  /* 12c81c1c cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81c1f je 0x12c81c2a */
  if (C.zf) goto L_12c81c2a;
  /* 12c81c21 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c81c23 pop edi */
  EDI = (pop32());
  /* 12c81c24 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c81c26 pop esi */
  ESI = (pop32());
  /* 12c81c27 ret 0x14 */
  ESPCHK(0x12c81bb0u, _esp0);
  ESP += 24; return;
L_12c81c2a:;
  /* 12c81c2a push eax */
  push32((uint32_t)(EAX));
  /* 12c81c2b call 0x12c847d0 */
  push32(0x12c81c30u); f_12c847d0();
  /* 12c81c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c81c33:;
  /* 12c81c33 pop edi */
  EDI = (pop32());
  /* 12c81c34 pop esi */
  ESI = (pop32());
  /* 12c81c35 ret 0x14 */
  ESPCHK(0x12c81bb0u, _esp0);
  ESP += 24; return;
}

/* FUN_10001c40 @ 0x12c81c40 (1012 bytes, 317 insns) */
void f_12c81c40(void) {
  FTRACE(0x12c81c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c81c40 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c81c42 push 0x12c8d580 */
  push32((uint32_t)(0x12c8d580u));
  /* 12c81c47 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c81c4d push eax */
  push32((uint32_t)(EAX));
  /* 12c81c4e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c81c55 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81c58 mov al, byte ptr [esp + 3] */
  AL = (r8((uint32_t)(ESP + 0x3)));
  /* 12c81c5c push ebx */
  push32((uint32_t)(EBX));
  /* 12c81c5d push ebp */
  push32((uint32_t)(EBP));
  /* 12c81c5e push esi */
  push32((uint32_t)(ESI));
  /* 12c81c5f push edi */
  push32((uint32_t)(EDI));
  /* 12c81c60 mov ebp, ecx */
  EBP = (ECX);
  /* 12c81c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c81c64 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 12c81c68 mov byte ptr [esp + 0x20], al */
  w8((uint32_t)(ESP + 0x20), (AL));
  /* 12c81c6c call 0x12c83ad0 */
  push32(0x12c81c71u); f_12c83ad0();
  /* 12c81c71 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 12c81c74 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81c7a push 0x12c90390 */
  push32((uint32_t)(0x12c90390u));
  /* 12c81c7f mov dword ptr [esp + 0x48], 0 */
  w32((uint32_t)(ESP + 0x48), (0x0u));
  /* 12c81c87 mov dword ptr [esp + 0x18], edi */
  w32((uint32_t)(ESP + 0x18), (EDI));
  /* 12c81c8b call 0x12c84170 */
  push32(0x12c81c90u); f_12c84170();
  /* 12c81c90 mov ebx, dword ptr [0x12c8e12c] */
  EBX = (r32((uint32_t)(0x12c8e12c)));
L_12c81c96:;
  /* 12c81c96 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 12c81c9a push ecx */
  push32((uint32_t)(ECX));
  /* 12c81c9b mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81ca1 call 0x12c84320 */
  push32(0x12c81ca6u); f_12c84320();
  /* 12c81ca6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81ca9 jne 0x12c81ce2 */
  if (!C.zf) goto L_12c81ce2;
  /* 12c81cab mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c81cae mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c81cb4 lea esi, [edi + edx*8] */
  ESI = ((uint32_t)(EDI + EDX*8));
  /* 12c81cb7 jne 0x12c81cbe */
  if (!C.zf) goto L_12c81cbe;
  /* 12c81cb9 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c81cbe:;
  /* 12c81cbe push eax */
  push32((uint32_t)(EAX));
  /* 12c81cbf push esi */
  push32((uint32_t)(ESI));
  /* 12c81cc0 call ebx */
  call_ind((uint32_t)(EBX), 0x12c81cc2u);
  /* 12c81cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81cc5 lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 12c81cc9 push esi */
  push32((uint32_t)(ESI));
  /* 12c81cca sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81ccd mov ecx, esp */
  ECX = (ESP);
  /* 12c81ccf mov dword ptr [esp + 0x2c], esp */
  w32((uint32_t)(ESP + 0x2c), (ESP));
  /* 12c81cd3 push eax */
  push32((uint32_t)(EAX));
  /* 12c81cd4 call 0x12c836d0 */
  push32(0x12c81cd9u); f_12c836d0();
  /* 12c81cd9 mov ecx, ebp */
  ECX = (EBP);
  /* 12c81cdb call 0x12c81bb0 */
  push32(0x12c81ce0u); f_12c81bb0();
  /* 12c81ce0 jmp 0x12c81c96 */
  goto L_12c81c96;
L_12c81ce2:;
  /* 12c81ce2 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81ce8 push 0x12c90388 */
  push32((uint32_t)(0x12c90388u));
  /* 12c81ced call 0x12c84170 */
  push32(0x12c81cf2u); f_12c84170();
  /* 12c81cf2 mov ebx, dword ptr [0x12c8e124] */
  EBX = (r32((uint32_t)(0x12c8e124)));
L_12c81cf8:;
  /* 12c81cf8 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 12c81cfc push ecx */
  push32((uint32_t)(ECX));
  /* 12c81cfd mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81d03 call 0x12c84320 */
  push32(0x12c81d08u); f_12c84320();
  /* 12c81d08 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81d0b jne 0x12c81d44 */
  if (!C.zf) goto L_12c81d44;
  /* 12c81d0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c81d10 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c81d16 lea esi, [edi + edx*8] */
  ESI = ((uint32_t)(EDI + EDX*8));
  /* 12c81d19 jne 0x12c81d20 */
  if (!C.zf) goto L_12c81d20;
  /* 12c81d1b mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c81d20:;
  /* 12c81d20 push eax */
  push32((uint32_t)(EAX));
  /* 12c81d21 push esi */
  push32((uint32_t)(ESI));
  /* 12c81d22 call ebx */
  call_ind((uint32_t)(EBX), 0x12c81d24u);
  /* 12c81d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81d27 lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 12c81d2b push esi */
  push32((uint32_t)(ESI));
  /* 12c81d2c sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81d2f mov ecx, esp */
  ECX = (ESP);
  /* 12c81d31 mov dword ptr [esp + 0x2c], esp */
  w32((uint32_t)(ESP + 0x2c), (ESP));
  /* 12c81d35 push eax */
  push32((uint32_t)(EAX));
  /* 12c81d36 call 0x12c836d0 */
  push32(0x12c81d3bu); f_12c836d0();
  /* 12c81d3b mov ecx, ebp */
  ECX = (EBP);
  /* 12c81d3d call 0x12c81bb0 */
  push32(0x12c81d42u); f_12c81bb0();
  /* 12c81d42 jmp 0x12c81cf8 */
  goto L_12c81cf8;
L_12c81d44:;
  /* 12c81d44 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81d4a push 0x12c9037c */
  push32((uint32_t)(0x12c9037cu));
  /* 12c81d4f call 0x12c84170 */
  push32(0x12c81d54u); f_12c84170();
  /* 12c81d54 mov ebx, dword ptr [0x12c8e134] */
  EBX = (r32((uint32_t)(0x12c8e134)));
L_12c81d5a:;
  /* 12c81d5a lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 12c81d5e push ecx */
  push32((uint32_t)(ECX));
  /* 12c81d5f mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81d65 call 0x12c84320 */
  push32(0x12c81d6au); f_12c84320();
  /* 12c81d6a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81d6d jne 0x12c81da6 */
  if (!C.zf) goto L_12c81da6;
  /* 12c81d6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c81d72 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c81d78 lea esi, [edi + edx*8] */
  ESI = ((uint32_t)(EDI + EDX*8));
  /* 12c81d7b jne 0x12c81d82 */
  if (!C.zf) goto L_12c81d82;
  /* 12c81d7d mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c81d82:;
  /* 12c81d82 push eax */
  push32((uint32_t)(EAX));
  /* 12c81d83 push esi */
  push32((uint32_t)(ESI));
  /* 12c81d84 call ebx */
  call_ind((uint32_t)(EBX), 0x12c81d86u);
  /* 12c81d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81d89 lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 12c81d8d push esi */
  push32((uint32_t)(ESI));
  /* 12c81d8e sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81d91 mov ecx, esp */
  ECX = (ESP);
  /* 12c81d93 mov dword ptr [esp + 0x2c], esp */
  w32((uint32_t)(ESP + 0x2c), (ESP));
  /* 12c81d97 push eax */
  push32((uint32_t)(EAX));
  /* 12c81d98 call 0x12c836d0 */
  push32(0x12c81d9du); f_12c836d0();
  /* 12c81d9d mov ecx, ebp */
  ECX = (EBP);
  /* 12c81d9f call 0x12c81bb0 */
  push32(0x12c81da4u); f_12c81bb0();
  /* 12c81da4 jmp 0x12c81d5a */
  goto L_12c81d5a;
L_12c81da6:;
  /* 12c81da6 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81dac push 0x12c90374 */
  push32((uint32_t)(0x12c90374u));
  /* 12c81db1 call 0x12c84170 */
  push32(0x12c81db6u); f_12c84170();
  /* 12c81db6 mov esi, dword ptr [0x12c8e138] */
  ESI = (r32((uint32_t)(0x12c8e138)));
  /* 12c81dbc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c81dbe mov dword ptr [0x12c932f0], ebx */
  w32((uint32_t)(0x12c932f0), (EBX));
L_12c81dc4:;
  /* 12c81dc4 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 12c81dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81dc9 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81dcf call 0x12c84320 */
  push32(0x12c81dd4u); f_12c84320();
  /* 12c81dd4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81dd7 jne 0x12c81e37 */
  if (!C.zf) goto L_12c81e37;
  /* 12c81dd9 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81ddd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c81ddf jne 0x12c81de6 */
  if (!C.zf) goto L_12c81de6;
  /* 12c81de1 mov ecx, 0x12c8e168 */
  ECX = (0x12c8e168u);
L_12c81de6:;
  /* 12c81de6 mov al, bl */
  AL = (BL);
  /* 12c81de8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81de9 push eax */
  push32((uint32_t)(EAX));
  /* 12c81dea inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c81deb call esi */
  call_ind((uint32_t)(ESI), 0x12c81dedu);
  /* 12c81ded mov ecx, dword ptr [0x12c932f0] */
  ECX = (r32((uint32_t)(0x12c932f0)));
  /* 12c81df3 mov eax, dword ptr [0x12c932f4] */
  EAX = (r32((uint32_t)(0x12c932f4)));
  /* 12c81df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81dfb cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81dfd je 0x12c81e20 */
  if (C.zf) goto L_12c81e20;
  /* 12c81dff push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c81e01 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 12c81e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c81e07 push edx */
  push32((uint32_t)(EDX));
  /* 12c81e08 mov edx, dword ptr [0x12c932ec] */
  EDX = (r32((uint32_t)(0x12c932ec)));
  /* 12c81e0e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c81e11 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81e13 call 0x12c838d0 */
  push32(0x12c81e18u); f_12c838d0();
  /* 12c81e18 inc dword ptr [0x12c932f0] */
  { uint32_t _r=(r32((uint32_t)(0x12c932f0)))+1; w32((uint32_t)(0x12c932f0), (_r)); fl_inc(_r,32); }
  /* 12c81e1e jmp 0x12c81dc4 */
  goto L_12c81dc4;
L_12c81e20:;
  /* 12c81e20 lea eax, [esp + 0x14] */
  EAX = ((uint32_t)(ESP + 0x14));
  /* 12c81e24 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c81e29 push eax */
  push32((uint32_t)(EAX));
  /* 12c81e2a mov dword ptr [esp + 0x1c], 0x12c90360 */
  w32((uint32_t)(ESP + 0x1c), (0x12c90360u));
  /* 12c81e32 call 0x12c8558e */
  push32(0x12c81e37u); f_12c8558e();
L_12c81e37:;
  /* 12c81e37 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81e3d push 0x12c90354 */
  push32((uint32_t)(0x12c90354u));
  /* 12c81e42 call 0x12c84170 */
  push32(0x12c81e47u); f_12c84170();
L_12c81e47:;
  /* 12c81e47 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 12c81e4b push ecx */
  push32((uint32_t)(ECX));
  /* 12c81e4c mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81e52 call 0x12c84320 */
  push32(0x12c81e57u); f_12c84320();
  /* 12c81e57 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81e5a jne 0x12c81f89 */
  if (!C.zf) goto L_12c81f89;
  /* 12c81e60 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c81e63 mov cl, byte ptr [esp + 0x13] */
  CL = (r8((uint32_t)(ESP + 0x13)));
  /* 12c81e67 mov byte ptr [esp + 0x2c], cl */
  w8((uint32_t)(ESP + 0x2c), (CL));
  /* 12c81e6b or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c81e6e lea eax, [edi + edx*8] */
  EAX = ((uint32_t)(EDI + EDX*8));
  /* 12c81e71 mov edi, 0x12c90350 */
  EDI = (0x12c90350u);
  /* 12c81e76 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 12c81e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c81e7c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c81e7e not ecx */
  ECX = (~(ECX));
  /* 12c81e80 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c81e81 mov dword ptr [esp + 0x30], eax */
  w32((uint32_t)(ESP + 0x30), (EAX));
  /* 12c81e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12c81e86 push 0x12c90350 */
  push32((uint32_t)(0x12c90350u));
  /* 12c81e8b lea ecx, [esp + 0x34] */
  ECX = ((uint32_t)(ESP + 0x34));
  /* 12c81e8f mov dword ptr [esp + 0x3c], eax */
  w32((uint32_t)(ESP + 0x3c), (EAX));
  /* 12c81e93 mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 12c81e97 call 0x12c83b20 */
  push32(0x12c81e9cu); f_12c83b20();
  /* 12c81e9c mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 12c81ea0 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 12c81ea3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81ea6 mov byte ptr [esp + 0x44], 1 */
  w8((uint32_t)(ESP + 0x44), (0x1u));
  /* 12c81eab jae 0x12c81eaf */
  if (!C.cf) goto L_12c81eaf;
  /* 12c81ead mov esi, eax */
  ESI = (EAX);
L_12c81eaf:;
  /* 12c81eaf mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 12c81eb3 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c81eb6 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81eb8 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81eba ja 0x12c81ec1 */
  if ((!C.cf&&!C.zf)) goto L_12c81ec1;
  /* 12c81ebc call 0x12c847db */
  push32(0x12c81ec1u); f_12c847db();
L_12c81ec1:;
  /* 12c81ec1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c81ec3 jbe 0x12c81f12 */
  if ((C.cf||C.zf)) goto L_12c81f12;
  /* 12c81ec5 mov eax, dword ptr [esp + 0x34] */
  EAX = (r32((uint32_t)(ESP + 0x34)));
  /* 12c81ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c81ecb lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 12c81ecf lea ebx, [eax + esi] */
  EBX = ((uint32_t)(EAX + ESI*1));
  /* 12c81ed2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c81ed3 call 0x12c83be0 */
  push32(0x12c81ed8u); f_12c83be0();
  /* 12c81ed8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c81eda je 0x12c81f12 */
  if (C.zf) goto L_12c81f12;
  /* 12c81edc mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81ee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c81ee2 jne 0x12c81ee9 */
  if (!C.zf) goto L_12c81ee9;
  /* 12c81ee4 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c81ee9:;
  /* 12c81ee9 mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 12c81eed mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 12c81ef1 lea edi, [edx + ecx] */
  EDI = ((uint32_t)(EDX + ECX*1));
  /* 12c81ef4 mov ecx, esi */
  ECX = (ESI);
  /* 12c81ef6 mov esi, eax */
  ESI = (EAX);
  /* 12c81ef8 mov eax, ecx */
  EAX = (ECX);
  /* 12c81efa shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c81efd rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c81eff mov ecx, eax */
  ECX = (EAX);
  /* 12c81f01 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c81f04 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c81f06 mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 12c81f0a mov dword ptr [esp + 0x34], ebx */
  w32((uint32_t)(ESP + 0x34), (EBX));
  /* 12c81f0e mov byte ptr [ecx + ebx], 0 */
  w8((uint32_t)(ECX + EBX*1), (0x0u));
L_12c81f12:;
  /* 12c81f12 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 12c81f16 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c81f18 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81f1a jne 0x12c81f21 */
  if (!C.zf) goto L_12c81f21;
  /* 12c81f1c mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c81f21:;
  /* 12c81f21 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
  /* 12c81f25 push eax */
  push32((uint32_t)(EAX));
  /* 12c81f26 push esi */
  push32((uint32_t)(ESI));
  /* 12c81f27 call dword ptr [0x12c8e130] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e130))), 0x12c81f2du);
  /* 12c81f2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81f30 lea edx, [esp + 0x2c] */
  EDX = ((uint32_t)(ESP + 0x2c));
  /* 12c81f34 push esi */
  push32((uint32_t)(ESI));
  /* 12c81f35 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81f38 mov ecx, esp */
  ECX = (ESP);
  /* 12c81f3a mov dword ptr [esp + 0x2c], esp */
  w32((uint32_t)(ESP + 0x2c), (ESP));
  /* 12c81f3e push edx */
  push32((uint32_t)(EDX));
  /* 12c81f3f call 0x12c836d0 */
  push32(0x12c81f44u); f_12c836d0();
  /* 12c81f44 mov ecx, ebp */
  ECX = (EBP);
  /* 12c81f46 call 0x12c81bb0 */
  push32(0x12c81f4bu); f_12c81bb0();
  /* 12c81f4b mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 12c81f4f mov byte ptr [esp + 0x44], 0 */
  w8((uint32_t)(ESP + 0x44), (0x0u));
  /* 12c81f54 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81f56 je 0x12c81f74 */
  if (C.zf) goto L_12c81f74;
  /* 12c81f58 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c81f5b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c81f5c test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c81f5e je 0x12c81f6b */
  if (C.zf) goto L_12c81f6b;
  /* 12c81f60 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81f63 je 0x12c81f6b */
  if (C.zf) goto L_12c81f6b;
  /* 12c81f65 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c81f67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c81f69 jmp 0x12c81f74 */
  goto L_12c81f74;
L_12c81f6b:;
  /* 12c81f6b push eax */
  push32((uint32_t)(EAX));
  /* 12c81f6c call 0x12c847d0 */
  push32(0x12c81f71u); f_12c847d0();
  /* 12c81f71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c81f74:;
  /* 12c81f74 mov dword ptr [esp + 0x30], edi */
  w32((uint32_t)(ESP + 0x30), (EDI));
  /* 12c81f78 mov dword ptr [esp + 0x34], edi */
  w32((uint32_t)(ESP + 0x34), (EDI));
  /* 12c81f7c mov dword ptr [esp + 0x38], edi */
  w32((uint32_t)(ESP + 0x38), (EDI));
  /* 12c81f80 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c81f84 jmp 0x12c81e47 */
  goto L_12c81e47;
L_12c81f89:;
  /* 12c81f89 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81f8f push 0x12c90344 */
  push32((uint32_t)(0x12c90344u));
  /* 12c81f94 call 0x12c84170 */
  push32(0x12c81f99u); f_12c84170();
  /* 12c81f99 mov ebx, dword ptr [0x12c8e158] */
  EBX = (r32((uint32_t)(0x12c8e158)));
  /* 12c81f9f mov edi, dword ptr [0x12c8e148] */
  EDI = (r32((uint32_t)(0x12c8e148)));
L_12c81fa5:;
  /* 12c81fa5 mov ecx, dword ptr [ebp + 0x48028] */
  ECX = (r32((uint32_t)(EBP + 0x48028)));
  /* 12c81fab lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 12c81faf push eax */
  push32((uint32_t)(EAX));
  /* 12c81fb0 call 0x12c84320 */
  push32(0x12c81fb5u); f_12c84320();
  /* 12c81fb5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c81fb8 jne 0x12c81fec */
  if (!C.zf) goto L_12c81fec;
  /* 12c81fba mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c81fbd mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c81fc1 lea esi, [edx + ecx*8] */
  ESI = ((uint32_t)(EDX + ECX*8));
  /* 12c81fc4 push esi */
  push32((uint32_t)(ESI));
  /* 12c81fc5 call ebx */
  call_ind((uint32_t)(EBX), 0x12c81fc7u);
  /* 12c81fc7 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c81fc9 push esi */
  push32((uint32_t)(ESI));
  /* 12c81fca call edi */
  call_ind((uint32_t)(EDI), 0x12c81fccu);
  /* 12c81fcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c81fcf lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 12c81fd3 push esi */
  push32((uint32_t)(ESI));
  /* 12c81fd4 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c81fd7 mov ecx, esp */
  ECX = (ESP);
  /* 12c81fd9 mov dword ptr [esp + 0x2c], esp */
  w32((uint32_t)(ESP + 0x2c), (ESP));
  /* 12c81fdd push eax */
  push32((uint32_t)(EAX));
  /* 12c81fde call 0x12c836d0 */
  push32(0x12c81fe3u); f_12c836d0();
  /* 12c81fe3 mov ecx, ebp */
  ECX = (EBP);
  /* 12c81fe5 call 0x12c81bb0 */
  push32(0x12c81feau); f_12c81bb0();
  /* 12c81fea jmp 0x12c81fa5 */
  goto L_12c81fa5;
L_12c81fec:;
  /* 12c81fec mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c81ff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c81ff2 je 0x12c82021 */
  if (C.zf) goto L_12c82021;
  /* 12c81ff4 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c81ff7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c81ff8 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c81ffa je 0x12c82018 */
  if (C.zf) goto L_12c82018;
  /* 12c81ffc cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c81fff je 0x12c82018 */
  if (C.zf) goto L_12c82018;
  /* 12c82001 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c82003 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c82005 mov ecx, dword ptr [esp + 0x3c] */
  ECX = (r32((uint32_t)(ESP + 0x3c)));
  /* 12c82009 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c82010 pop edi */
  EDI = (pop32());
  /* 12c82011 pop esi */
  ESI = (pop32());
  /* 12c82012 pop ebp */
  EBP = (pop32());
  /* 12c82013 pop ebx */
  EBX = (pop32());
  /* 12c82014 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82017 ret  */
  ESPCHK(0x12c81c40u, _esp0);
  ESP += 4; return;
L_12c82018:;
  /* 12c82018 push eax */
  push32((uint32_t)(EAX));
  /* 12c82019 call 0x12c847d0 */
  push32(0x12c8201eu); f_12c847d0();
  /* 12c8201e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c82021:;
  /* 12c82021 mov ecx, dword ptr [esp + 0x3c] */
  ECX = (r32((uint32_t)(ESP + 0x3c)));
  /* 12c82025 pop edi */
  EDI = (pop32());
  /* 12c82026 pop esi */
  ESI = (pop32());
  /* 12c82027 pop ebp */
  EBP = (pop32());
  /* 12c82028 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8202f pop ebx */
  EBX = (pop32());
  /* 12c82030 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82033 ret  */
  ESPCHK(0x12c81c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002040 @ 0x12c82040 (746 bytes, 237 insns) */
void f_12c82040(void) {
  FTRACE(0x12c82040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82040 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c82043 push ebx */
  push32((uint32_t)(EBX));
  /* 12c82044 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82045 push esi */
  push32((uint32_t)(ESI));
  /* 12c82046 mov esi, ecx */
  ESI = (ECX);
  /* 12c82048 push edi */
  push32((uint32_t)(EDI));
  /* 12c82049 mov ecx, dword ptr [esi + 0x48028] */
  ECX = (r32((uint32_t)(ESI + 0x48028)));
  /* 12c8204f lea ebx, [esi + 0x48030] */
  EBX = ((uint32_t)(ESI + 0x48030));
  /* 12c82055 lea edi, [esi + 0x4802c] */
  EDI = ((uint32_t)(ESI + 0x4802c));
  /* 12c8205b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8205c push edi */
  push32((uint32_t)(EDI));
  /* 12c8205d push 0x12c903dc */
  push32((uint32_t)(0x12c903dcu));
  /* 12c82062 mov dword ptr [esi + 8], 0 */
  w32((uint32_t)(ESI + 0x8), (0x0u));
  /* 12c82069 call 0x12c84230 */
  push32(0x12c8206eu); f_12c84230();
  /* 12c8206e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c82070 mov ecx, dword ptr [ebx] */
  ECX = (r32((uint32_t)(EBX)));
  /* 12c82072 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82074 jae 0x12c8230b */
  if (!C.cf) goto L_12c8230b;
  /* 12c8207a mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8207e mov dword ptr [esp + 0x10], 0x18004 */
  w32((uint32_t)(ESP + 0x10), (0x18004u));
L_12c82086:;
  /* 12c82086 mov ecx, esi */
  ECX = (ESI);
  /* 12c82088 call 0x12c81960 */
  push32(0x12c8208du); f_12c81960();
  /* 12c8208d mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c8208f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c82091 push 0x12c903d0 */
  push32((uint32_t)(0x12c903d0u));
  /* 12c82096 push ecx */
  push32((uint32_t)(ECX));
  /* 12c82097 call 0x12c85770 */
  push32(0x12c8209cu); f_12c85770();
  /* 12c8209c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8209f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c820a1 jne 0x12c82132 */
  if (!C.zf) goto L_12c82132;
  /* 12c820a7 mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 12c820a9 mov ecx, esi */
  ECX = (ESI);
  /* 12c820ab add edx, 9 */
  { uint32_t _a=(EDX),_b=(0x9u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c820ae mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c820b0 call 0x12c81960 */
  push32(0x12c820b5u); f_12c81960();
  /* 12c820b5 mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 12c820b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 12c820b9 push 0x12c903c8 */
  push32((uint32_t)(0x12c903c8u));
  /* 12c820be push edx */
  push32((uint32_t)(EDX));
  /* 12c820bf call 0x12c85770 */
  push32(0x12c820c4u); f_12c85770();
  /* 12c820c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c820c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c820c9 je 0x12c8230b */
  if (C.zf) goto L_12c8230b;
  /* 12c820cf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c820d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12c820d3 push 0x12c903c0 */
  push32((uint32_t)(0x12c903c0u));
  /* 12c820d8 push eax */
  push32((uint32_t)(EAX));
  /* 12c820d9 call 0x12c85770 */
  push32(0x12c820deu); f_12c85770();
  /* 12c820de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c820e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c820e3 je 0x12c8230b */
  if (C.zf) goto L_12c8230b;
  /* 12c820e9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c820eb mov ecx, dword ptr [ebx] */
  ECX = (r32((uint32_t)(EBX)));
  /* 12c820ed cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c820ef jae 0x12c8230b */
  if (!C.cf) goto L_12c8230b;
  /* 12c820f5 push 6 */
  push32((uint32_t)(0x6u));
  /* 12c820f7 push 0x12c903b8 */
  push32((uint32_t)(0x12c903b8u));
  /* 12c820fc push eax */
  push32((uint32_t)(EAX));
  /* 12c820fd call 0x12c85770 */
  push32(0x12c82102u); f_12c85770();
  /* 12c82102 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82105 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82107 jne 0x12c82120 */
  if (!C.zf) goto L_12c82120;
  /* 12c82109 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c8210b add ecx, 6 */
  { uint32_t _a=(ECX),_b=(0x6u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8210e mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
  /* 12c82110 mov ecx, esi */
  ECX = (ESI);
  /* 12c82112 call 0x12c81960 */
  push32(0x12c82117u); f_12c81960();
  /* 12c82117 mov ecx, esi */
  ECX = (ESI);
  /* 12c82119 call 0x12c82ab0 */
  push32(0x12c8211eu); f_12c82ab0();
  /* 12c8211e jmp 0x12c82127 */
  goto L_12c82127;
L_12c82120:;
  /* 12c82120 mov ecx, esi */
  ECX = (ESI);
  /* 12c82122 call 0x12c82810 */
  push32(0x12c82127u); f_12c82810();
L_12c82127:;
  /* 12c82127 mov ebp, dword ptr [esi + 0x1c] */
  EBP = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c8212a mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8212d dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 12c8212e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8212f mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
L_12c82132:;
  /* 12c82132 mov ecx, esi */
  ECX = (ESI);
  /* 12c82134 call 0x12c81960 */
  push32(0x12c82139u); f_12c81960();
  /* 12c82139 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c8213b push 5 */
  push32((uint32_t)(0x5u));
  /* 12c8213d push 0x12c903c0 */
  push32((uint32_t)(0x12c903c0u));
  /* 12c82142 push ecx */
  push32((uint32_t)(ECX));
  /* 12c82143 call 0x12c85770 */
  push32(0x12c82148u); f_12c85770();
  /* 12c82148 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8214b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8214d jne 0x12c821c3 */
  if (!C.zf) goto L_12c821c3;
  /* 12c8214f mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 12c82151 mov ecx, esi */
  ECX = (ESI);
  /* 12c82153 add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82156 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c82158 call 0x12c81960 */
  push32(0x12c8215du); f_12c81960();
  /* 12c8215d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8215f lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 12c82163 push edx */
  push32((uint32_t)(EDX));
  /* 12c82164 push 0x12c903b4 */
  push32((uint32_t)(0x12c903b4u));
  /* 12c82169 push eax */
  push32((uint32_t)(EAX));
  /* 12c8216a call 0x12c8572e */
  push32(0x12c8216fu); f_12c8572e();
  /* 12c8216f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82172 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82175 jne 0x12c82313 */
  if (!C.zf) goto L_12c82313;
  /* 12c8217b mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c8217d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c82180 push edx */
  push32((uint32_t)(EDX));
  /* 12c82181 call 0x12c8581c */
  push32(0x12c82186u); f_12c8581c();
  /* 12c82186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8218b je 0x12c821a2 */
  if (C.zf) goto L_12c821a2;
L_12c8218d:;
  /* 12c8218d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c8218f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82190 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c82192 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c82195 push eax */
  push32((uint32_t)(EAX));
  /* 12c82196 call 0x12c8581c */
  push32(0x12c8219bu); f_12c8581c();
  /* 12c8219b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c821a0 jne 0x12c8218d */
  if (!C.zf) goto L_12c8218d;
L_12c821a2:;
  /* 12c821a2 mov ecx, dword ptr [esi + 0x14] */
  ECX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c821a5 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c821a9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c821ad mov dword ptr [ecx + ebp*4 + 0x17004], edx */
  w32((uint32_t)(ECX + EBP*4 + 0x17004), (EDX));
  /* 12c821b4 mov ecx, dword ptr [esi + 0x14] */
  ECX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c821b7 mov dword ptr [eax + ecx], ebp */
  w32((uint32_t)(EAX + ECX*1), (EBP));
  /* 12c821ba add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c821bd mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 12c821c1 jmp 0x12c821d1 */
  goto L_12c821d1;
L_12c821c3:;
  /* 12c821c3 mov edx, dword ptr [esi + 0x14] */
  EDX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c821c6 mov dword ptr [edx + ebp*4 + 0x17004], 0xffffffff */
  w32((uint32_t)(EDX + EBP*4 + 0x17004), (0xffffffffu));
L_12c821d1:;
  /* 12c821d1 mov ecx, esi */
  ECX = (ESI);
  /* 12c821d3 call 0x12c81960 */
  push32(0x12c821d8u); f_12c81960();
  /* 12c821d8 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c821da push 6 */
  push32((uint32_t)(0x6u));
  /* 12c821dc push 0x12c903c8 */
  push32((uint32_t)(0x12c903c8u));
  /* 12c821e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c821e2 call 0x12c85770 */
  push32(0x12c821e7u); f_12c85770();
  /* 12c821e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c821ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c821ec jne 0x12c822e8 */
  if (!C.zf) goto L_12c822e8;
  /* 12c821f2 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c821f4 mov ecx, esi */
  ECX = (ESI);
  /* 12c821f6 add eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c821f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c821fb call 0x12c81960 */
  push32(0x12c82200u); f_12c81960();
L_12c82200:;
  /* 12c82200 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c82202 mov ecx, dword ptr [esi + 0x48030] */
  ECX = (r32((uint32_t)(ESI + 0x48030)));
  /* 12c82208 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8220a jae 0x12c822c4 */
  if (!C.cf) goto L_12c822c4;
  /* 12c82210 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82213 je 0x12c822c4 */
  if (C.zf) goto L_12c822c4;
  /* 12c82219 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8221b push 0x12c903d0 */
  push32((uint32_t)(0x12c903d0u));
  /* 12c82220 push eax */
  push32((uint32_t)(EAX));
  /* 12c82221 call 0x12c85770 */
  push32(0x12c82226u); f_12c85770();
  /* 12c82226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8222b je 0x12c822c4 */
  if (C.zf) goto L_12c822c4;
  /* 12c82231 mov ecx, esi */
  ECX = (ESI);
  /* 12c82233 call 0x12c819f0 */
  push32(0x12c82238u); f_12c819f0();
  /* 12c82238 lea ebx, [esi + 0x48034] */
  EBX = ((uint32_t)(ESI + 0x48034));
  /* 12c8223e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c82240 push 0x12c903b0 */
  push32((uint32_t)(0x12c903b0u));
  /* 12c82245 push ebx */
  push32((uint32_t)(EBX));
  /* 12c82246 call 0x12c85770 */
  push32(0x12c8224bu); f_12c85770();
  /* 12c8224b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8224e mov ecx, esi */
  ECX = (ESI);
  /* 12c82250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82252 jne 0x12c8226c */
  if (!C.zf) goto L_12c8226c;
  /* 12c82254 call 0x12c82330 */
  push32(0x12c82259u); f_12c82330();
  /* 12c82259 mov ecx, esi */
  ECX = (ESI);
  /* 12c8225b call 0x12c81960 */
  push32(0x12c82260u); f_12c81960();
  /* 12c82260 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c82262 cmp byte ptr [eax], 0x2c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82265 jne 0x12c82297 */
  if (!C.zf) goto L_12c82297;
  /* 12c82267 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82268 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c8226a jmp 0x12c82297 */
  goto L_12c82297;
L_12c8226c:;
  /* 12c8226c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8226d call 0x12c82d20 */
  push32(0x12c82272u); f_12c82d20();
  /* 12c82272 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c82275 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 12c82278 lea edx, [eax + ecx*2] */
  EDX = ((uint32_t)(EAX + ECX*2));
  /* 12c8227b mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c8227e mov ecx, dword ptr [eax + edx*4 + 0x7fd4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x7fd4)));
  /* 12c82285 lea eax, [eax + edx*4 + 0x7fd4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x7fd4));
  /* 12c8228c cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8228f je 0x12c82297 */
  if (C.zf) goto L_12c82297;
  /* 12c82291 mov dword ptr [eax], 2 */
  w32((uint32_t)(EAX), (0x2u));
L_12c82297:;
  /* 12c82297 mov ecx, esi */
  ECX = (ESI);
  /* 12c82299 call 0x12c81960 */
  push32(0x12c8229eu); f_12c81960();
  /* 12c8229e mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c822a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c822a2 push 0x12c903d0 */
  push32((uint32_t)(0x12c903d0u));
  /* 12c822a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c822a8 call 0x12c85770 */
  push32(0x12c822adu); f_12c85770();
  /* 12c822ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c822b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c822b2 je 0x12c822c4 */
  if (C.zf) goto L_12c822c4;
  /* 12c822b4 mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 12c822b6 mov eax, dword ptr [esi + 0x48030] */
  EAX = (r32((uint32_t)(ESI + 0x48030)));
  /* 12c822bc cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c822be jb 0x12c82200 */
  if (C.cf) goto L_12c82200;
L_12c822c4:;
  /* 12c822c4 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c822c7 mov ecx, dword ptr [esi + 0x14] */
  ECX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c822ca lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c822cd lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c822d0 lea edx, [ecx + eax*4 + 0x8000] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x8000));
  /* 12c822d7 lea eax, [ebp + ebp*4] */
  EAX = ((uint32_t)(EBP + EBP*4));
  /* 12c822db lea eax, [ebp + eax*2] */
  EAX = ((uint32_t)(EBP + EAX*2));
  /* 12c822df mov dword ptr [ecx + eax*4 + 0x8028], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x8028), (EDX));
  /* 12c822e6 jmp 0x12c822f5 */
  goto L_12c822f5;
L_12c822e8:;
  /* 12c822e8 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c822ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12c822ec push ecx */
  push32((uint32_t)(ECX));
  /* 12c822ed call 0x12c812f0 */
  push32(0x12c822f2u); f_12c812f0();
  /* 12c822f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c822f5:;
  /* 12c822f5 mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 12c822f7 mov eax, dword ptr [esi + 0x48030] */
  EAX = (r32((uint32_t)(ESI + 0x48030)));
  /* 12c822fd lea ebx, [esi + 0x48030] */
  EBX = ((uint32_t)(ESI + 0x48030));
  /* 12c82303 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82305 jb 0x12c82086 */
  if (C.cf) goto L_12c82086;
L_12c8230b:;
  /* 12c8230b pop edi */
  EDI = (pop32());
  /* 12c8230c pop esi */
  ESI = (pop32());
  /* 12c8230d pop ebp */
  EBP = (pop32());
  /* 12c8230e pop ebx */
  EBX = (pop32());
  /* 12c8230f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82312 ret  */
  ESPCHK(0x12c82040u, _esp0);
  ESP += 4; return;
L_12c82313:;
  /* 12c82313 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 12c82317 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c8231c push eax */
  push32((uint32_t)(EAX));
  /* 12c8231d mov dword ptr [esp + 0x18], 0x12c90398 */
  w32((uint32_t)(ESP + 0x18), (0x12c90398u));
  /* 12c82325 call 0x12c8558e */
  push32(0x12c8232au); f_12c8558e();
  /* 12c8232a nop  */
  /* nop */
  /* 12c8232b nop  */
  /* nop */
  /* 12c8232c nop  */
  /* nop */
  /* 12c8232d nop  */
  /* nop */
  /* 12c8232e nop  */
  /* nop */
  /* 12c8232f nop  */
  /* nop */
}

/* FUN_10002330 @ 0x12c82330 (478 bytes, 130 insns) */
void f_12c82330(void) {
  FTRACE(0x12c82330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82330 push ecx */
  push32((uint32_t)(ECX));
  /* 12c82331 push ebx */
  push32((uint32_t)(EBX));
  /* 12c82332 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82333 push esi */
  push32((uint32_t)(ESI));
  /* 12c82334 push edi */
  push32((uint32_t)(EDI));
  /* 12c82335 mov esi, ecx */
  ESI = (ECX);
  /* 12c82337 call 0x12c81960 */
  push32(0x12c8233cu); f_12c81960();
  /* 12c8233c mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82342 push 6 */
  push32((uint32_t)(0x6u));
  /* 12c82344 push 0x12c903b8 */
  push32((uint32_t)(0x12c903b8u));
  /* 12c82349 push eax */
  push32((uint32_t)(EAX));
  /* 12c8234a call 0x12c85770 */
  push32(0x12c8234fu); f_12c85770();
  /* 12c8234f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82352 mov ecx, esi */
  ECX = (ESI);
  /* 12c82354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82356 jne 0x12c8236d */
  if (!C.zf) goto L_12c8236d;
  /* 12c82358 add dword ptr [esi + 0x4802c], 6 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4802c))),_b=(0x6u),_r=_a+_b; w32((uint32_t)(ESI + 0x4802c), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8235f call 0x12c81960 */
  push32(0x12c82364u); f_12c81960();
  /* 12c82364 mov ecx, esi */
  ECX = (ESI);
  /* 12c82366 call 0x12c82ab0 */
  push32(0x12c8236bu); f_12c82ab0();
  /* 12c8236b jmp 0x12c82372 */
  goto L_12c82372;
L_12c8236d:;
  /* 12c8236d call 0x12c82810 */
  push32(0x12c82372u); f_12c82810();
L_12c82372:;
  /* 12c82372 mov ecx, esi */
  ECX = (ESI);
  /* 12c82374 call 0x12c81960 */
  push32(0x12c82379u); f_12c81960();
  /* 12c82379 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8237f mov ebp, dword ptr [esi + 0x1c] */
  EBP = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c82382 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 12c82383 cmp byte ptr [eax], 0x5b */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82386 je 0x12c8239f */
  if (C.zf) goto L_12c8239f;
  /* 12c82388 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c8238c push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c82391 push ecx */
  push32((uint32_t)(ECX));
  /* 12c82392 mov dword ptr [esp + 0x18], 0x12c90418 */
  w32((uint32_t)(ESP + 0x18), (0x12c90418u));
  /* 12c8239a call 0x12c8558e */
  push32(0x12c8239fu); f_12c8558e();
L_12c8239f:;
  /* 12c8239f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c823a0 mov ecx, esi */
  ECX = (ESI);
  /* 12c823a2 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c823a8 call 0x12c81960 */
  push32(0x12c823adu); f_12c81960();
  /* 12c823ad mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c823b3 cmp byte ptr [edx], 0x5d */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0x5du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c823b6 je 0x12c823ea */
  if (C.zf) goto L_12c823ea;
  /* 12c823b8 lea edi, [esi + 0x48034] */
  EDI = ((uint32_t)(ESI + 0x48034));
L_12c823be:;
  /* 12c823be mov ecx, esi */
  ECX = (ESI);
  /* 12c823c0 call 0x12c819f0 */
  push32(0x12c823c5u); f_12c819f0();
  /* 12c823c5 push edi */
  push32((uint32_t)(EDI));
  /* 12c823c6 mov ecx, esi */
  ECX = (ESI);
  /* 12c823c8 mov bl, al */
  BL = (AL);
  /* 12c823ca call 0x12c82d20 */
  push32(0x12c823cfu); f_12c82d20();
  /* 12c823cf mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c823d2 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 12c823d4 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 12c823d7 lea edx, [eax + ecx*2] */
  EDX = ((uint32_t)(EAX + ECX*2));
  /* 12c823da mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c823dd mov dword ptr [eax + edx*4 + 0x7fd4], 2 */
  w32((uint32_t)(EAX + EDX*4 + 0x7fd4), (0x2u));
  /* 12c823e8 jne 0x12c823be */
  if (!C.zf) goto L_12c823be;
L_12c823ea:;
  /* 12c823ea mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c823f0 mov ecx, esi */
  ECX = (ESI);
  /* 12c823f2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c823f3 mov dword ptr [esi + 0x4802c], edx */
  w32((uint32_t)(ESI + 0x4802c), (EDX));
  /* 12c823f9 call 0x12c81960 */
  push32(0x12c823feu); f_12c81960();
  /* 12c823fe mov edi, dword ptr [esi + 0x1c] */
  EDI = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c82401 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c82404 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c82406 push 0x12c90410 */
  push32((uint32_t)(0x12c90410u));
  /* 12c8240b lea ecx, [edi + edi*4] */
  ECX = ((uint32_t)(EDI + EDI*4));
  /* 12c8240e lea edx, [edi + ecx*2] */
  EDX = ((uint32_t)(EDI + ECX*2));
  /* 12c82411 lea ecx, [eax + edx*4 + 0x8000] */
  ECX = ((uint32_t)(EAX + EDX*4 + 0x8000));
  /* 12c82418 lea edx, [ebp + ebp*4] */
  EDX = ((uint32_t)(EBP + EBP*4));
  /* 12c8241c lea edx, [ebp + edx*2] */
  EDX = ((uint32_t)(EBP + EDX*2));
  /* 12c82420 mov dword ptr [eax + edx*4 + 0x8028], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x8028), (ECX));
  /* 12c82427 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c8242a mov dword ptr [eax + ebp*4 + 0x17004], 0xffffffff */
  w32((uint32_t)(EAX + EBP*4 + 0x17004), (0xffffffffu));
  /* 12c82435 mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8243b push ecx */
  push32((uint32_t)(ECX));
  /* 12c8243c call 0x12c85770 */
  push32(0x12c82441u); f_12c85770();
  /* 12c82441 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82446 jne 0x12c82508 */
  if (!C.zf) goto L_12c82508;
  /* 12c8244c mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82452 mov ecx, esi */
  ECX = (ESI);
  /* 12c82454 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82457 mov dword ptr [esi + 0x4802c], edx */
  w32((uint32_t)(ESI + 0x4802c), (EDX));
  /* 12c8245d call 0x12c81960 */
  push32(0x12c82462u); f_12c81960();
  /* 12c82462 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82468 cmp byte ptr [eax], 0x5b */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8246b je 0x12c82484 */
  if (C.zf) goto L_12c82484;
  /* 12c8246d lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 12c82471 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c82476 push edx */
  push32((uint32_t)(EDX));
  /* 12c82477 mov dword ptr [esp + 0x18], 0x12c903e4 */
  w32((uint32_t)(ESP + 0x18), (0x12c903e4u));
  /* 12c8247f call 0x12c8558e */
  push32(0x12c82484u); f_12c8558e();
L_12c82484:;
  /* 12c82484 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82485 mov ecx, esi */
  ECX = (ESI);
  /* 12c82487 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c8248d call 0x12c81960 */
  push32(0x12c82492u); f_12c81960();
L_12c82492:;
  /* 12c82492 mov ecx, esi */
  ECX = (ESI);
  /* 12c82494 call 0x12c819f0 */
  push32(0x12c82499u); f_12c819f0();
  /* 12c82499 mov bl, al */
  BL = (AL);
  /* 12c8249b lea eax, [esi + 0x48034] */
  EAX = ((uint32_t)(ESI + 0x48034));
  /* 12c824a1 push eax */
  push32((uint32_t)(EAX));
  /* 12c824a2 mov ecx, esi */
  ECX = (ESI);
  /* 12c824a4 call 0x12c82d20 */
  push32(0x12c824a9u); f_12c82d20();
  /* 12c824a9 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c824ac test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 12c824ae lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 12c824b1 lea edx, [eax + ecx*2] */
  EDX = ((uint32_t)(EAX + ECX*2));
  /* 12c824b4 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c824b7 mov dword ptr [eax + edx*4 + 0x7fd4], 2 */
  w32((uint32_t)(EAX + EDX*4 + 0x7fd4), (0x2u));
  /* 12c824c2 jne 0x12c82492 */
  if (!C.zf) goto L_12c82492;
  /* 12c824c4 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c824ca mov ecx, esi */
  ECX = (ESI);
  /* 12c824cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c824cd mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c824d3 call 0x12c81960 */
  push32(0x12c824d8u); f_12c81960();
  /* 12c824d8 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c824db mov ecx, dword ptr [esi + 0x14] */
  ECX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c824de lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c824e1 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c824e4 lea edx, [ecx + eax*4 + 0x8000] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x8000));
  /* 12c824eb lea eax, [edi + edi*4 - 5] */
  EAX = ((uint32_t)(EDI + EDI*4 + -0x5));
  /* 12c824ef lea eax, [edi + eax*2 - 1] */
  EAX = ((uint32_t)(EDI + EAX*2 + -0x1));
  /* 12c824f3 mov dword ptr [ecx + eax*4 + 0x8028], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x8028), (EDX));
  /* 12c824fa mov ecx, dword ptr [esi + 0x14] */
  ECX = (r32((uint32_t)(ESI + 0x14)));
  /* 12c824fd mov dword ptr [ecx + ebp*4 + 0x17004], 0xffffffff */
  w32((uint32_t)(ECX + EBP*4 + 0x17004), (0xffffffffu));
L_12c82508:;
  /* 12c82508 pop edi */
  EDI = (pop32());
  /* 12c82509 pop esi */
  ESI = (pop32());
  /* 12c8250a pop ebp */
  EBP = (pop32());
  /* 12c8250b pop ebx */
  EBX = (pop32());
  /* 12c8250c pop ecx */
  ECX = (pop32());
  /* 12c8250d ret  */
  ESPCHK(0x12c82330u, _esp0);
  ESP += 4; return;
}

/* FUN_10002510 @ 0x12c82510 (575 bytes, 190 insns) */
void f_12c82510(void) {
  FTRACE(0x12c82510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82510 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c82513 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82514 push esi */
  push32((uint32_t)(ESI));
  /* 12c82515 mov esi, ecx */
  ESI = (ECX);
  /* 12c82517 push edi */
  push32((uint32_t)(EDI));
  /* 12c82518 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8251a mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82520 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c82523 push ecx */
  push32((uint32_t)(ECX));
  /* 12c82524 call 0x12c857ee */
  push32(0x12c82529u); f_12c857ee();
  /* 12c82529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8252c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8252e jne 0x12c8253f */
  if (!C.zf) goto L_12c8253f;
  /* 12c82530 mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82536 cmp byte ptr [edx], 0x5f */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82539 jne 0x12c826d8 */
  if (!C.zf) goto L_12c826d8;
L_12c8253f:;
  /* 12c8253f mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82545 movsx ecx, byte ptr [edi + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDI + EAX*1))));
  /* 12c82549 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8254a call 0x12c857ee */
  push32(0x12c8254fu); f_12c857ee();
  /* 12c8254f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82554 jne 0x12c82579 */
  if (!C.zf) goto L_12c82579;
  /* 12c82556 mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8255c movsx eax, byte ptr [edi + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDI + EDX*1))));
  /* 12c82560 push eax */
  push32((uint32_t)(EAX));
  /* 12c82561 call 0x12c8581c */
  push32(0x12c82566u); f_12c8581c();
  /* 12c82566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8256b jne 0x12c82579 */
  if (!C.zf) goto L_12c82579;
  /* 12c8256d mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82573 cmp byte ptr [edi + ecx], 0x5f */
  { uint32_t _a=(r8((uint32_t)(EDI + ECX*1))),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82577 jne 0x12c8257c */
  if (!C.zf) goto L_12c8257c;
L_12c82579:;
  /* 12c82579 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8257a jmp 0x12c8253f */
  goto L_12c8253f;
L_12c8257c:;
  /* 12c8257c mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82582 push edi */
  push32((uint32_t)(EDI));
  /* 12c82583 lea eax, [esp + 0x14] */
  EAX = ((uint32_t)(ESP + 0x14));
  /* 12c82587 push edx */
  push32((uint32_t)(EDX));
  /* 12c82588 push eax */
  push32((uint32_t)(EAX));
  /* 12c82589 call 0x12c85630 */
  push32(0x12c8258eu); f_12c85630();
  /* 12c8258e push 3 */
  push32((uint32_t)(0x3u));
  /* 12c82590 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 12c82594 push 0x12c9049c */
  push32((uint32_t)(0x12c9049cu));
  /* 12c82599 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8259a mov byte ptr [esp + edi + 0x28], 0 */
  w8((uint32_t)(ESP + EDI*1 + 0x28), (0x0u));
  /* 12c8259f call 0x12c85770 */
  push32(0x12c825a4u); f_12c85770();
  /* 12c825a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c825a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c825a9 jne 0x12c825f5 */
  if (!C.zf) goto L_12c825f5;
  /* 12c825ab movsx edx, byte ptr [esp + 0x13] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESP + 0x13))));
  /* 12c825b0 push edx */
  push32((uint32_t)(EDX));
  /* 12c825b1 call 0x12c8581c */
  push32(0x12c825b6u); f_12c8581c();
  /* 12c825b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c825b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c825bb je 0x12c825f5 */
  if (C.zf) goto L_12c825f5;
  /* 12c825bd lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 12c825c1 lea ecx, [esp + 0x13] */
  ECX = ((uint32_t)(ESP + 0x13));
  /* 12c825c5 push eax */
  push32((uint32_t)(EAX));
  /* 12c825c6 push 0x12c903b4 */
  push32((uint32_t)(0x12c903b4u));
  /* 12c825cb push ecx */
  push32((uint32_t)(ECX));
  /* 12c825cc call 0x12c8572e */
  push32(0x12c825d1u); f_12c8572e();
  /* 12c825d1 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c825d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c825d8 mov ecx, esi */
  ECX = (ESI);
  /* 12c825da push edx */
  push32((uint32_t)(EDX));
  /* 12c825db call 0x12c82b10 */
  push32(0x12c825e0u); f_12c82b10();
  /* 12c825e0 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c825e6 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c825e8 pop edi */
  EDI = (pop32());
  /* 12c825e9 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c825ef pop esi */
  ESI = (pop32());
  /* 12c825f0 pop ebp */
  EBP = (pop32());
  /* 12c825f1 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c825f4 ret  */
  ESPCHK(0x12c82510u, _esp0);
  ESP += 4; return;
L_12c825f5:;
  /* 12c825f5 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 12c825f9 mov ecx, esi */
  ECX = (ESI);
  /* 12c825fb push eax */
  push32((uint32_t)(EAX));
  /* 12c825fc call 0x12c82960 */
  push32(0x12c82601u); f_12c82960();
  /* 12c82601 mov ebp, eax */
  EBP = (EAX);
  /* 12c82603 cmp ebp, -1 */
  { uint32_t _a=(EBP),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82606 jne 0x12c8261c */
  if (!C.zf) goto L_12c8261c;
  /* 12c82608 mov ecx, dword ptr [esi + 0x48024] */
  ECX = (r32((uint32_t)(ESI + 0x48024)));
  /* 12c8260e push ecx */
  push32((uint32_t)(ECX));
  /* 12c8260f push 0x12c90464 */
  push32((uint32_t)(0x12c90464u));
  /* 12c82614 call 0x12c812f0 */
  push32(0x12c82619u); f_12c812f0();
  /* 12c82619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c8261c:;
  /* 12c8261c lea edx, [ebp + ebp*8] */
  EDX = ((uint32_t)(EBP + EBP*8));
  /* 12c82620 mov ecx, dword ptr [esi + edx*8 + 0x40] */
  ECX = (r32((uint32_t)(ESI + EDX*8 + 0x40)));
  /* 12c82624 lea eax, [esi + edx*8] */
  EAX = ((uint32_t)(ESI + EDX*8));
  /* 12c82627 cmp ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8262a jne 0x12c8268e */
  if (!C.zf) goto L_12c8268e;
  /* 12c8262c mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82632 cmp byte ptr [eax + edi], 0x28 */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82636 je 0x12c8264f */
  if (C.zf) goto L_12c8264f;
  /* 12c82638 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 12c8263c push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c82641 push eax */
  push32((uint32_t)(EAX));
  /* 12c82642 mov dword ptr [esp + 0x14], 0x12c90444 */
  w32((uint32_t)(ESP + 0x14), (0x12c90444u));
  /* 12c8264a call 0x12c8558e */
  push32(0x12c8264fu); f_12c8558e();
L_12c8264f:;
  /* 12c8264f mov cl, byte ptr [eax + edi] */
  CL = (r8((uint32_t)(EAX + EDI*1)));
  /* 12c82652 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c82653 cmp cl, 0x29 */
  { uint32_t _a=(CL),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82656 jne 0x12c8264f */
  if (!C.zf) goto L_12c8264f;
  /* 12c82658 lea ebp, [esi + 0x48034] */
  EBP = ((uint32_t)(ESI + 0x48034));
  /* 12c8265e push edi */
  push32((uint32_t)(EDI));
  /* 12c8265f push eax */
  push32((uint32_t)(EAX));
  /* 12c82660 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82661 call 0x12c85630 */
  push32(0x12c82666u); f_12c85630();
  /* 12c82666 mov byte ptr [edi + esi + 0x48034], 0 */
  w8((uint32_t)(EDI + ESI*1 + 0x48034), (0x0u));
  /* 12c8266e mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82674 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82677 add ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82679 mov dword ptr [esi + 0x4802c], ecx */
  w32((uint32_t)(ESI + 0x4802c), (ECX));
  /* 12c8267f mov ecx, esi */
  ECX = (ESI);
  /* 12c82681 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82682 call 0x12c82d20 */
  push32(0x12c82687u); f_12c82d20();
  /* 12c82687 pop edi */
  EDI = (pop32());
  /* 12c82688 pop esi */
  ESI = (pop32());
  /* 12c82689 pop ebp */
  EBP = (pop32());
  /* 12c8268a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8268d ret  */
  ESPCHK(0x12c82510u, _esp0);
  ESP += 4; return;
L_12c8268e:;
  /* 12c8268e cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82691 jne 0x12c826b3 */
  if (!C.zf) goto L_12c826b3;
  /* 12c82693 mov edx, dword ptr [eax + 0x44] */
  EDX = (r32((uint32_t)(EAX + 0x44)));
  /* 12c82696 mov ecx, esi */
  ECX = (ESI);
  /* 12c82698 push edx */
  push32((uint32_t)(EDX));
  /* 12c82699 call 0x12c82a40 */
  push32(0x12c8269eu); f_12c82a40();
  /* 12c8269e mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c826a4 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c826a6 pop edi */
  EDI = (pop32());
  /* 12c826a7 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c826ad pop esi */
  ESI = (pop32());
  /* 12c826ae pop ebp */
  EBP = (pop32());
  /* 12c826af add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c826b2 ret  */
  ESPCHK(0x12c82510u, _esp0);
  ESP += 4; return;
L_12c826b3:;
  /* 12c826b3 cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c826b6 jne 0x12c826d8 */
  if (!C.zf) goto L_12c826d8;
  /* 12c826b8 mov eax, dword ptr [eax + 0x44] */
  EAX = (r32((uint32_t)(EAX + 0x44)));
  /* 12c826bb mov ecx, esi */
  ECX = (ESI);
  /* 12c826bd push eax */
  push32((uint32_t)(EAX));
  /* 12c826be call 0x12c82b80 */
  push32(0x12c826c3u); f_12c82b80();
  /* 12c826c3 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c826c9 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c826cb pop edi */
  EDI = (pop32());
  /* 12c826cc mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c826d2 pop esi */
  ESI = (pop32());
  /* 12c826d3 pop ebp */
  EBP = (pop32());
  /* 12c826d4 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c826d7 ret  */
  ESPCHK(0x12c82510u, _esp0);
  ESP += 4; return;
L_12c826d8:;
  /* 12c826d8 mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c826de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c826e1 push edx */
  push32((uint32_t)(EDX));
  /* 12c826e2 call 0x12c8581c */
  push32(0x12c826e7u); f_12c8581c();
  /* 12c826e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c826ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c826ec je 0x12c82748 */
  if (C.zf) goto L_12c82748;
  /* 12c826ee mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c826f4 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 12c826f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c826f9 push 0x12c903b4 */
  push32((uint32_t)(0x12c903b4u));
  /* 12c826fe push ecx */
  push32((uint32_t)(ECX));
  /* 12c826ff call 0x12c8572e */
  push32(0x12c82704u); f_12c8572e();
  /* 12c82704 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c82708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8270b mov ecx, esi */
  ECX = (ESI);
  /* 12c8270d push edx */
  push32((uint32_t)(EDX));
  /* 12c8270e call 0x12c82a40 */
  push32(0x12c82713u); f_12c82a40();
  /* 12c82713 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82719 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c8271c push ecx */
  push32((uint32_t)(ECX));
  /* 12c8271d call 0x12c8581c */
  push32(0x12c82722u); f_12c8581c();
  /* 12c82722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82727 je 0x12c82748 */
  if (C.zf) goto L_12c82748;
L_12c82729:;
  /* 12c82729 mov ebp, dword ptr [esi + 0x4802c] */
  EBP = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8272f inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 12c82730 mov eax, ebp */
  EAX = (EBP);
  /* 12c82732 mov dword ptr [esi + 0x4802c], ebp */
  w32((uint32_t)(ESI + 0x4802c), (EBP));
  /* 12c82738 movsx edx, byte ptr [eax] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c8273b push edx */
  push32((uint32_t)(EDX));
  /* 12c8273c call 0x12c8581c */
  push32(0x12c82741u); f_12c8581c();
  /* 12c82741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82746 jne 0x12c82729 */
  if (!C.zf) goto L_12c82729;
L_12c82748:;
  /* 12c82748 pop edi */
  EDI = (pop32());
  /* 12c82749 pop esi */
  ESI = (pop32());
  /* 12c8274a pop ebp */
  EBP = (pop32());
  /* 12c8274b add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8274e ret  */
  ESPCHK(0x12c82510u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x12c82750 (97 bytes, 37 insns) */
void f_12c82750(void) {
  FTRACE(0x12c82750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82750 mov eax, dword ptr [ecx + 0x4802c] */
  EAX = (r32((uint32_t)(ECX + 0x4802c)));
  /* 12c82756 mov dl, 0x3d */
  DL = (0x3du);
  /* 12c82758 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c8275a cmp cl, 0x3c */
  { uint32_t _a=(CL),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8275d jne 0x12c8276a */
  if (!C.zf) goto L_12c8276a;
  /* 12c8275f cmp byte ptr [eax + 1], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82762 jne 0x12c8276a */
  if (!C.zf) goto L_12c8276a;
  /* 12c82764 mov eax, 5 */
  EAX = (0x5u);
  /* 12c82769 ret  */
  ESPCHK(0x12c82750u, _esp0);
  ESP += 4; return;
L_12c8276a:;
  /* 12c8276a cmp cl, 0x3e */
  { uint32_t _a=(CL),_b=(0x3eu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8276d jne 0x12c8277a */
  if (!C.zf) goto L_12c8277a;
  /* 12c8276f cmp byte ptr [eax + 1], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82772 jne 0x12c8277a */
  if (!C.zf) goto L_12c8277a;
  /* 12c82774 mov eax, 6 */
  EAX = (0x6u);
  /* 12c82779 ret  */
  ESPCHK(0x12c82750u, _esp0);
  ESP += 4; return;
L_12c8277a:;
  /* 12c8277a cmp cl, 0x21 */
  { uint32_t _a=(CL),_b=(0x21u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8277d jne 0x12c8278a */
  if (!C.zf) goto L_12c8278a;
  /* 12c8277f cmp byte ptr [eax + 1], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82782 jne 0x12c8278a */
  if (!C.zf) goto L_12c8278a;
  /* 12c82784 mov eax, 7 */
  EAX = (0x7u);
  /* 12c82789 ret  */
  ESPCHK(0x12c82750u, _esp0);
  ESP += 4; return;
L_12c8278a:;
  /* 12c8278a cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8278c jne 0x12c82799 */
  if (!C.zf) goto L_12c82799;
  /* 12c8278e cmp byte ptr [eax + 1], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82791 jne 0x12c82799 */
  if (!C.zf) goto L_12c82799;
  /* 12c82793 mov eax, 8 */
  EAX = (0x8u);
  /* 12c82798 ret  */
  ESPCHK(0x12c82750u, _esp0);
  ESP += 4; return;
L_12c82799:;
  /* 12c82799 cmp cl, 0x3c */
  { uint32_t _a=(CL),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8279c jne 0x12c827a4 */
  if (!C.zf) goto L_12c827a4;
  /* 12c8279e mov eax, 9 */
  EAX = (0x9u);
  /* 12c827a3 ret  */
  ESPCHK(0x12c82750u, _esp0);
  ESP += 4; return;
L_12c827a4:;
  /* 12c827a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c827a6 cmp cl, 0x3e */
  { uint32_t _a=(CL),_b=(0x3eu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c827a9 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12c827ac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c827ad and eax, 0xa */
  { uint32_t _r=(EAX)&(0xau); EAX = (_r); fl_logic(_r,32); }
  /* 12c827b0 ret  */
  ESPCHK(0x12c82750u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x12c827c0 (69 bytes, 25 insns) */
void f_12c827c0(void) {
  FTRACE(0x12c827c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c827c0 push esi */
  push32((uint32_t)(ESI));
  /* 12c827c1 mov esi, ecx */
  ESI = (ECX);
  /* 12c827c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c827c5 push 0x12c904a4 */
  push32((uint32_t)(0x12c904a4u));
  /* 12c827ca mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c827d0 push eax */
  push32((uint32_t)(EAX));
  /* 12c827d1 call 0x12c85770 */
  push32(0x12c827d6u); f_12c85770();
  /* 12c827d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c827d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c827db jne 0x12c827e4 */
  if (!C.zf) goto L_12c827e4;
  /* 12c827dd mov eax, 0xb */
  EAX = (0xbu);
  /* 12c827e2 pop esi */
  ESI = (pop32());
  /* 12c827e3 ret  */
  ESPCHK(0x12c827c0u, _esp0);
  ESP += 4; return;
L_12c827e4:;
  /* 12c827e4 mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c827ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12c827ec push 0x12c904a0 */
  push32((uint32_t)(0x12c904a0u));
  /* 12c827f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c827f2 call 0x12c85770 */
  push32(0x12c827f7u); f_12c85770();
  /* 12c827f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c827fa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c827fc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c827fe pop esi */
  ESI = (pop32());
  /* 12c827ff and al, 0xf4 */
  { uint32_t _r=(AL)&(0xf4u); AL = (_r); fl_logic(_r,8); }
  /* 12c82801 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82804 ret  */
  ESPCHK(0x12c827c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x12c82810 (335 bytes, 108 insns) */
void f_12c82810(void) {
  FTRACE(0x12c82810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82810 push esi */
  push32((uint32_t)(ESI));
  /* 12c82811 push edi */
  push32((uint32_t)(EDI));
  /* 12c82812 mov esi, ecx */
  ESI = (ECX);
  /* 12c82814 call 0x12c81960 */
  push32(0x12c82819u); f_12c81960();
  /* 12c82819 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8281f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c82822 push ecx */
  push32((uint32_t)(ECX));
  /* 12c82823 call 0x12c857ee */
  push32(0x12c82828u); f_12c857ee();
  /* 12c82828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8282b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8282d jne 0x12c82898 */
  if (!C.zf) goto L_12c82898;
  /* 12c8282f mov edx, dword ptr [esi + 0x4802c] */
  EDX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82835 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c82837 cmp al, 0x5f */
  { uint32_t _a=(AL),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82839 je 0x12c82898 */
  if (C.zf) goto L_12c82898;
  /* 12c8283b movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12c8283e push eax */
  push32((uint32_t)(EAX));
  /* 12c8283f call 0x12c8581c */
  push32(0x12c82844u); f_12c8581c();
  /* 12c82844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82849 jne 0x12c82898 */
  if (!C.zf) goto L_12c82898;
  /* 12c8284b mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82851 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c82853 cmp cl, 0x21 */
  { uint32_t _a=(CL),_b=(0x21u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82856 je 0x12c82898 */
  if (C.zf) goto L_12c82898;
  /* 12c82858 cmp cl, 0x28 */
  { uint32_t _a=(CL),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8285b jne 0x12c8295c */
  if (!C.zf) goto L_12c8295c;
  /* 12c82861 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82862 mov ecx, esi */
  ECX = (ESI);
  /* 12c82864 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c8286a call 0x12c81960 */
  push32(0x12c8286fu); f_12c81960();
  /* 12c8286f mov ecx, esi */
  ECX = (ESI);
  /* 12c82871 call 0x12c82810 */
  push32(0x12c82876u); f_12c82810();
  /* 12c82876 mov ecx, esi */
  ECX = (ESI);
  /* 12c82878 call 0x12c81960 */
  push32(0x12c8287du); f_12c81960();
  /* 12c8287d mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c82883 cmp byte ptr [eax], 0x29 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82886 jne 0x12c82923 */
  if (!C.zf) goto L_12c82923;
  /* 12c8288c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8288d mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c82893 jmp 0x12c82923 */
  goto L_12c82923;
L_12c82898:;
  /* 12c82898 mov eax, dword ptr [esi + 0x4802c] */
  EAX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8289e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c828a0 cmp cl, 0x21 */
  { uint32_t _a=(CL),_b=(0x21u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c828a3 mov ecx, esi */
  ECX = (ESI);
  /* 12c828a5 jne 0x12c828d3 */
  if (!C.zf) goto L_12c828d3;
  /* 12c828a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c828a8 mov dword ptr [esi + 0x4802c], eax */
  w32((uint32_t)(ESI + 0x4802c), (EAX));
  /* 12c828ae call 0x12c81960 */
  push32(0x12c828b3u); f_12c81960();
  /* 12c828b3 mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c828b9 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c828bb mov ecx, esi */
  ECX = (ESI);
  /* 12c828bd cmp al, 0x28 */
  { uint32_t _a=(AL),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c828bf jne 0x12c828ca */
  if (!C.zf) goto L_12c828ca;
  /* 12c828c1 call 0x12c82810 */
  push32(0x12c828c6u); f_12c82810();
  /* 12c828c6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c828c8 jmp 0x12c8291c */
  goto L_12c8291c;
L_12c828ca:;
  /* 12c828ca call 0x12c82510 */
  push32(0x12c828cfu); f_12c82510();
  /* 12c828cf push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c828d1 jmp 0x12c8291c */
  goto L_12c8291c;
L_12c828d3:;
  /* 12c828d3 call 0x12c82510 */
  push32(0x12c828d8u); f_12c82510();
  /* 12c828d8 mov ecx, esi */
  ECX = (ESI);
  /* 12c828da call 0x12c81960 */
  push32(0x12c828dfu); f_12c81960();
  /* 12c828df mov ecx, esi */
  ECX = (ESI);
  /* 12c828e1 call 0x12c82750 */
  push32(0x12c828e6u); f_12c82750();
  /* 12c828e6 mov edi, eax */
  EDI = (EAX);
  /* 12c828e8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c828ea je 0x12c8292a */
  if (C.zf) goto L_12c8292a;
L_12c828ec:;
  /* 12c828ec mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c828f2 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c828f4 cmp al, 0x21 */
  { uint32_t _a=(AL),_b=(0x21u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c828f6 je 0x12c82904 */
  if (C.zf) goto L_12c82904;
  /* 12c828f8 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c828fa je 0x12c82904 */
  if (C.zf) goto L_12c82904;
  /* 12c828fc cmp al, 0x3c */
  { uint32_t _a=(AL),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c828fe je 0x12c82904 */
  if (C.zf) goto L_12c82904;
  /* 12c82900 cmp al, 0x3e */
  { uint32_t _a=(AL),_b=(0x3eu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82902 jne 0x12c8290d */
  if (!C.zf) goto L_12c8290d;
L_12c82904:;
  /* 12c82904 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c82905 mov dword ptr [esi + 0x4802c], ecx */
  w32((uint32_t)(ESI + 0x4802c), (ECX));
  /* 12c8290b jmp 0x12c828ec */
  goto L_12c828ec;
L_12c8290d:;
  /* 12c8290d mov ecx, esi */
  ECX = (ESI);
  /* 12c8290f call 0x12c81960 */
  push32(0x12c82914u); f_12c81960();
  /* 12c82914 mov ecx, esi */
  ECX = (ESI);
  /* 12c82916 call 0x12c82510 */
  push32(0x12c8291bu); f_12c82510();
  /* 12c8291b push edi */
  push32((uint32_t)(EDI));
L_12c8291c:;
  /* 12c8291c mov ecx, esi */
  ECX = (ESI);
  /* 12c8291e call 0x12c829d0 */
  push32(0x12c82923u); f_12c829d0();
L_12c82923:;
  /* 12c82923 mov ecx, esi */
  ECX = (ESI);
  /* 12c82925 call 0x12c81960 */
  push32(0x12c8292au); f_12c81960();
L_12c8292a:;
  /* 12c8292a mov ecx, esi */
  ECX = (ESI);
  /* 12c8292c call 0x12c827c0 */
  push32(0x12c82931u); f_12c827c0();
  /* 12c82931 mov edi, eax */
  EDI = (EAX);
  /* 12c82933 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c82935 je 0x12c8295c */
  if (C.zf) goto L_12c8295c;
  /* 12c82937 mov ecx, dword ptr [esi + 0x4802c] */
  ECX = (r32((uint32_t)(ESI + 0x4802c)));
  /* 12c8293d add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82940 mov dword ptr [esi + 0x4802c], ecx */
  w32((uint32_t)(ESI + 0x4802c), (ECX));
  /* 12c82946 mov ecx, esi */
  ECX = (ESI);
  /* 12c82948 call 0x12c81960 */
  push32(0x12c8294du); f_12c81960();
  /* 12c8294d mov ecx, esi */
  ECX = (ESI);
  /* 12c8294f call 0x12c82810 */
  push32(0x12c82954u); f_12c82810();
  /* 12c82954 mov ecx, esi */
  ECX = (ESI);
  /* 12c82956 push edi */
  push32((uint32_t)(EDI));
  /* 12c82957 call 0x12c829d0 */
  push32(0x12c8295cu); f_12c829d0();
L_12c8295c:;
  /* 12c8295c pop edi */
  EDI = (pop32());
  /* 12c8295d pop esi */
  ESI = (pop32());
  /* 12c8295e ret  */
  ESPCHK(0x12c82810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002960 @ 0x12c82960 (97 bytes, 47 insns) */
void f_12c82960(void) {
  FTRACE(0x12c82960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82960 mov eax, dword ptr [ecx + 0x48020] */
  EAX = (r32((uint32_t)(ECX + 0x48020)));
  /* 12c82966 push ebx */
  push32((uint32_t)(EBX));
  /* 12c82967 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82968 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 12c8296a push esi */
  push32((uint32_t)(ESI));
  /* 12c8296b push edi */
  push32((uint32_t)(EDI));
  /* 12c8296c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8296e jle 0x12c829ae */
  if ((C.zf||C.sf!=C.of)) goto L_12c829ae;
  /* 12c82970 lea edi, [ecx + 0x20] */
  EDI = ((uint32_t)(ECX + 0x20));
L_12c82973:;
  /* 12c82973 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c82977 mov esi, edi */
  ESI = (EDI);
L_12c82979:;
  /* 12c82979 mov bl, byte ptr [ecx] */
  BL = (r8((uint32_t)(ECX)));
  /* 12c8297b mov dl, bl */
  DL = (BL);
  /* 12c8297d cmp bl, byte ptr [esi] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8297f jne 0x12c8299d */
  if (!C.zf) goto L_12c8299d;
  /* 12c82981 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c82983 je 0x12c82999 */
  if (C.zf) goto L_12c82999;
  /* 12c82985 mov bl, byte ptr [ecx + 1] */
  BL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c82988 mov dl, bl */
  DL = (BL);
  /* 12c8298a cmp bl, byte ptr [esi + 1] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ESI + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8298d jne 0x12c8299d */
  if (!C.zf) goto L_12c8299d;
  /* 12c8298f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82992 add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82995 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c82997 jne 0x12c82979 */
  if (!C.zf) goto L_12c82979;
L_12c82999:;
  /* 12c82999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8299b jmp 0x12c829a2 */
  goto L_12c829a2;
L_12c8299d:;
  /* 12c8299d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8299f sbb ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_12c829a2:;
  /* 12c829a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c829a4 je 0x12c829b8 */
  if (C.zf) goto L_12c829b8;
  /* 12c829a6 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 12c829a7 add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c829aa cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c829ac jl 0x12c82973 */
  if ((C.sf!=C.of)) goto L_12c82973;
L_12c829ae:;
  /* 12c829ae pop edi */
  EDI = (pop32());
  /* 12c829af pop esi */
  ESI = (pop32());
  /* 12c829b0 pop ebp */
  EBP = (pop32());
  /* 12c829b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c829b4 pop ebx */
  EBX = (pop32());
  /* 12c829b5 ret 4 */
  ESPCHK(0x12c82960u, _esp0);
  ESP += 8; return;
L_12c829b8:;
  /* 12c829b8 pop edi */
  EDI = (pop32());
  /* 12c829b9 mov eax, ebp */
  EAX = (EBP);
  /* 12c829bb pop esi */
  ESI = (pop32());
  /* 12c829bc pop ebp */
  EBP = (pop32());
  /* 12c829bd pop ebx */
  EBX = (pop32());
  /* 12c829be ret 4 */
  ESPCHK(0x12c82960u, _esp0);
  ESP += 8; return;
}

/* FUN_100029d0 @ 0x12c829d0 (98 bytes, 28 insns) */
void f_12c829d0(void) {
  FTRACE(0x12c829d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c829d0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c829d3 push esi */
  push32((uint32_t)(ESI));
  /* 12c829d4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c829d8 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c829db lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c829de mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c829e1 mov dword ptr [edx + eax*4 + 0x8004], esi */
  w32((uint32_t)(EDX + EAX*4 + 0x8004), (ESI));
  /* 12c829e8 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c829eb mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c829ee lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c829f1 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c829f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c829f6 mov dword ptr [esi + eax*4 + 0x8008], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8008), (EDX));
  /* 12c829fd mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a00 lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 12c82a03 lea eax, [eax + esi*2] */
  EAX = ((uint32_t)(EAX + ESI*2));
  /* 12c82a06 mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82a09 mov dword ptr [esi + eax*4 + 0x8028], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8028), (EDX));
  /* 12c82a10 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a13 pop esi */
  ESI = (pop32());
  /* 12c82a14 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82a17 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82a1a mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82a1d mov dword ptr [edx + eax*4 + 0x8000], 4 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x4u));
  /* 12c82a28 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82a2c mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 12c82a2f ret 4 */
  ESPCHK(0x12c829d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002a40 @ 0x12c82a40 (98 bytes, 28 insns) */
void f_12c82a40(void) {
  FTRACE(0x12c82a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82a40 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a43 push esi */
  push32((uint32_t)(ESI));
  /* 12c82a44 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c82a48 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82a4b lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82a4e mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82a51 mov dword ptr [edx + eax*4 + 0x8004], esi */
  w32((uint32_t)(EDX + EAX*4 + 0x8004), (ESI));
  /* 12c82a58 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a5b mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82a5e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82a61 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82a64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c82a66 mov dword ptr [esi + eax*4 + 0x8008], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8008), (EDX));
  /* 12c82a6d mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a70 lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 12c82a73 lea eax, [eax + esi*2] */
  EAX = ((uint32_t)(EAX + ESI*2));
  /* 12c82a76 mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82a79 mov dword ptr [esi + eax*4 + 0x8028], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8028), (EDX));
  /* 12c82a80 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a83 pop esi */
  ESI = (pop32());
  /* 12c82a84 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82a87 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82a8a mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82a8d mov dword ptr [edx + eax*4 + 0x8000], 3 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x3u));
  /* 12c82a98 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82a9b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82a9c mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 12c82a9f ret 4 */
  ESPCHK(0x12c82a40u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ab0 @ 0x12c82ab0 (92 bytes, 27 insns) */
void f_12c82ab0(void) {
  FTRACE(0x12c82ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82ab0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82ab3 push esi */
  push32((uint32_t)(ESI));
  /* 12c82ab4 mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82ab7 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82aba lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82abd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c82abf mov dword ptr [esi + eax*4 + 0x8004], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8004), (EDX));
  /* 12c82ac6 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82ac9 lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 12c82acc lea eax, [eax + esi*2] */
  EAX = ((uint32_t)(EAX + ESI*2));
  /* 12c82acf mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82ad2 mov dword ptr [esi + eax*4 + 0x8008], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8008), (EDX));
  /* 12c82ad9 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82adc lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 12c82adf lea eax, [eax + esi*2] */
  EAX = ((uint32_t)(EAX + ESI*2));
  /* 12c82ae2 mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82ae5 mov dword ptr [esi + eax*4 + 0x8028], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8028), (EDX));
  /* 12c82aec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82aef pop esi */
  ESI = (pop32());
  /* 12c82af0 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82af3 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82af6 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82af9 mov dword ptr [edx + eax*4 + 0x8000], 8 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x8u));
  /* 12c82b04 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82b08 mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 12c82b0b ret  */
  ESPCHK(0x12c82ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b10 @ 0x12c82b10 (98 bytes, 28 insns) */
void f_12c82b10(void) {
  FTRACE(0x12c82b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82b10 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b13 push esi */
  push32((uint32_t)(ESI));
  /* 12c82b14 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c82b18 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82b1b lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82b1e mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82b21 mov dword ptr [edx + eax*4 + 0x8004], esi */
  w32((uint32_t)(EDX + EAX*4 + 0x8004), (ESI));
  /* 12c82b28 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b2b mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82b2e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82b31 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c82b36 mov dword ptr [esi + eax*4 + 0x8008], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8008), (EDX));
  /* 12c82b3d mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b40 lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 12c82b43 lea eax, [eax + esi*2] */
  EAX = ((uint32_t)(EAX + ESI*2));
  /* 12c82b46 mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82b49 mov dword ptr [esi + eax*4 + 0x8028], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8028), (EDX));
  /* 12c82b50 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b53 pop esi */
  ESI = (pop32());
  /* 12c82b54 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82b57 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82b5a mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82b5d mov dword ptr [edx + eax*4 + 0x8000], 9 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x9u));
  /* 12c82b68 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b6b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82b6c mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 12c82b6f ret 4 */
  ESPCHK(0x12c82b10u, _esp0);
  ESP += 8; return;
}

/* FUN_10002b80 @ 0x12c82b80 (98 bytes, 28 insns) */
void f_12c82b80(void) {
  FTRACE(0x12c82b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82b80 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b83 push esi */
  push32((uint32_t)(ESI));
  /* 12c82b84 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c82b88 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82b8b lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82b8e mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82b91 mov dword ptr [edx + eax*4 + 0x8004], esi */
  w32((uint32_t)(EDX + EAX*4 + 0x8004), (ESI));
  /* 12c82b98 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82b9b mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82b9e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82ba1 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c82ba6 mov dword ptr [esi + eax*4 + 0x8008], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8008), (EDX));
  /* 12c82bad mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82bb0 lea esi, [eax + eax*4] */
  ESI = ((uint32_t)(EAX + EAX*4));
  /* 12c82bb3 lea eax, [eax + esi*2] */
  EAX = ((uint32_t)(EAX + ESI*2));
  /* 12c82bb6 mov esi, dword ptr [ecx + 0x14] */
  ESI = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82bb9 mov dword ptr [esi + eax*4 + 0x8028], edx */
  w32((uint32_t)(ESI + EAX*4 + 0x8028), (EDX));
  /* 12c82bc0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82bc3 pop esi */
  ESI = (pop32());
  /* 12c82bc4 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82bc7 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82bca mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c82bcd mov dword ptr [edx + eax*4 + 0x8000], 5 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x5u));
  /* 12c82bd8 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c82bdb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82bdc mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 12c82bdf ret 4 */
  ESPCHK(0x12c82b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10002bf0 @ 0x12c82bf0 (293 bytes, 86 insns) */
void f_12c82bf0(void) {
  FTRACE(0x12c82bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82bf0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c82bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82bf6 je 0x12c82c10 */
  if (C.zf) goto L_12c82c10;
  /* 12c82bf8 mov dword ptr [0x12c932e4], eax */
  w32((uint32_t)(0x12c932e4), (EAX));
  /* 12c82bfd xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c82bff mov dword ptr [0x12c932c8], 0 */
  w32((uint32_t)(0x12c932c8), (0x0u));
  /* 12c82c09 mov byte ptr [0x12c932d4], al */
  w8((uint32_t)(0x12c932d4), (AL));
  /* 12c82c0e jmp 0x12c82c15 */
  goto L_12c82c15;
L_12c82c10:;
  /* 12c82c10 mov al, byte ptr [0x12c932d4] */
  AL = (r8((uint32_t)(0x12c932d4)));
L_12c82c15:;
  /* 12c82c15 push ebx */
  push32((uint32_t)(EBX));
  /* 12c82c16 push esi */
  push32((uint32_t)(ESI));
  /* 12c82c17 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c82c19 push edi */
  push32((uint32_t)(EDI));
  /* 12c82c1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c82c1c je 0x12c82c38 */
  if (C.zf) goto L_12c82c38;
  /* 12c82c1e mov ecx, dword ptr [0x12c932e4] */
  ECX = (r32((uint32_t)(0x12c932e4)));
  /* 12c82c24 mov edx, dword ptr [0x12c932c8] */
  EDX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82c2a mov byte ptr [ecx + edx], al */
  w8((uint32_t)(ECX + EDX*1), (AL));
  /* 12c82c2d mov eax, dword ptr [0x12c932c8] */
  EAX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82c32 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c82c33 mov dword ptr [0x12c932c8], eax */
  w32((uint32_t)(0x12c932c8), (EAX));
L_12c82c38:;
  /* 12c82c38 mov eax, dword ptr [0x12c932e4] */
  EAX = (r32((uint32_t)(0x12c932e4)));
  /* 12c82c3d mov ecx, dword ptr [0x12c932c8] */
  ECX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82c43 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c82c47 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82c49 push edi */
  push32((uint32_t)(EDI));
  /* 12c82c4a push eax */
  push32((uint32_t)(EAX));
  /* 12c82c4b mov dword ptr [0x12c932e8], eax */
  w32((uint32_t)(0x12c932e8), (EAX));
  /* 12c82c50 call 0x12c857b0 */
  push32(0x12c82c55u); f_12c857b0();
  /* 12c82c55 mov ecx, dword ptr [0x12c932c8] */
  ECX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82c5b mov edx, dword ptr [0x12c932e4] */
  EDX = (r32((uint32_t)(0x12c932e4)));
  /* 12c82c61 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82c63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82c66 mov dword ptr [0x12c932c8], ecx */
  w32((uint32_t)(0x12c932c8), (ECX));
  /* 12c82c6c lea eax, [edx + ecx] */
  EAX = ((uint32_t)(EDX + ECX*1));
  /* 12c82c6f mov dword ptr [0x12c932e8], eax */
  w32((uint32_t)(0x12c932e8), (EAX));
  /* 12c82c74 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82c77 jne 0x12c82c86 */
  if (!C.zf) goto L_12c82c86;
L_12c82c79:;
  /* 12c82c79 mov bl, byte ptr [eax + esi + 1] */
  BL = (r8((uint32_t)(EAX + ESI*1 + 0x1)));
  /* 12c82c7d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c82c7e cmp bl, 0x22 */
  { uint32_t _a=(BL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82c81 jne 0x12c82c79 */
  if (!C.zf) goto L_12c82c79;
  /* 12c82c83 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c82c84 jmp 0x12c82c9e */
  goto L_12c82c9e;
L_12c82c86:;
  /* 12c82c86 push edi */
  push32((uint32_t)(EDI));
  /* 12c82c87 push eax */
  push32((uint32_t)(EAX));
  /* 12c82c88 call 0x12c84db0 */
  push32(0x12c82c8du); f_12c84db0();
  /* 12c82c8d mov ecx, dword ptr [0x12c932c8] */
  ECX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82c93 mov edx, dword ptr [0x12c932e4] */
  EDX = (r32((uint32_t)(0x12c932e4)));
  /* 12c82c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82c9c mov esi, eax */
  ESI = (EAX);
L_12c82c9e:;
  /* 12c82c9e add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82ca0 mov dword ptr [0x12c932c8], ecx */
  w32((uint32_t)(0x12c932c8), (ECX));
  /* 12c82ca6 cmp byte ptr [edx + ecx], 0x28 */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*1))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82caa jne 0x12c82d00 */
  if (!C.zf) goto L_12c82d00;
  /* 12c82cac cmp byte ptr [edx + ecx + 3], 0x29 */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*1 + 0x3))),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82cb1 jne 0x12c82d00 */
  if (!C.zf) goto L_12c82d00;
  /* 12c82cb3 movsx edx, byte ptr [edx + ecx + 1] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x1))));
  /* 12c82cb8 push edx */
  push32((uint32_t)(EDX));
  /* 12c82cb9 call 0x12c8581c */
  push32(0x12c82cbeu); f_12c8581c();
  /* 12c82cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82cc3 jne 0x12c82cf4 */
  if (!C.zf) goto L_12c82cf4;
  /* 12c82cc5 mov eax, dword ptr [0x12c932c8] */
  EAX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82cca mov ecx, dword ptr [0x12c932e4] */
  ECX = (r32((uint32_t)(0x12c932e4)));
  /* 12c82cd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82cd3 push edi */
  push32((uint32_t)(EDI));
  /* 12c82cd4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82cd6 mov dword ptr [0x12c932c8], eax */
  w32((uint32_t)(0x12c932c8), (EAX));
  /* 12c82cdb push ecx */
  push32((uint32_t)(ECX));
  /* 12c82cdc call 0x12c84db0 */
  push32(0x12c82ce1u); f_12c84db0();
  /* 12c82ce1 mov ecx, dword ptr [0x12c932c8] */
  ECX = (r32((uint32_t)(0x12c932c8)));
  /* 12c82ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82cea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82cec mov dword ptr [0x12c932c8], ecx */
  w32((uint32_t)(0x12c932c8), (ECX));
  /* 12c82cf2 jmp 0x12c82cfa */
  goto L_12c82cfa;
L_12c82cf4:;
  /* 12c82cf4 mov ecx, dword ptr [0x12c932c8] */
  ECX = (r32((uint32_t)(0x12c932c8)));
L_12c82cfa:;
  /* 12c82cfa mov edx, dword ptr [0x12c932e4] */
  EDX = (r32((uint32_t)(0x12c932e4)));
L_12c82d00:;
  /* 12c82d00 mov al, byte ptr [edx + ecx] */
  AL = (r8((uint32_t)(EDX + ECX*1)));
  /* 12c82d03 pop edi */
  EDI = (pop32());
  /* 12c82d04 mov byte ptr [0x12c932d4], al */
  w8((uint32_t)(0x12c932d4), (AL));
  /* 12c82d09 mov byte ptr [edx + ecx], 0 */
  w8((uint32_t)(EDX + ECX*1), (0x0u));
  /* 12c82d0d mov eax, dword ptr [0x12c932e8] */
  EAX = (r32((uint32_t)(0x12c932e8)));
  /* 12c82d12 pop esi */
  ESI = (pop32());
  /* 12c82d13 pop ebx */
  EBX = (pop32());
  /* 12c82d14 ret  */
  ESPCHK(0x12c82bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d20 @ 0x12c82d20 (897 bytes, 271 insns) [1 switch table(s)] */
void f_12c82d20(void) {
  FTRACE(0x12c82d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c82d20 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c82d22 push 0x12c8d59b */
  push32((uint32_t)(0x12c8d59bu));
  /* 12c82d27 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c82d2d push eax */
  push32((uint32_t)(EAX));
  /* 12c82d2e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c82d35 sub esp, 0x22c */
  { uint32_t _a=(ESP),_b=(0x22cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c82d3b mov eax, dword ptr [0x12c90500] */
  EAX = (r32((uint32_t)(0x12c90500)));
  /* 12c82d40 push ebx */
  push32((uint32_t)(EBX));
  /* 12c82d41 push ebp */
  push32((uint32_t)(EBP));
  /* 12c82d42 push esi */
  push32((uint32_t)(ESI));
  /* 12c82d43 push edi */
  push32((uint32_t)(EDI));
  /* 12c82d44 mov edi, dword ptr [esp + 0x24c] */
  EDI = (r32((uint32_t)(ESP + 0x24c)));
  /* 12c82d4b lea edx, [esp + 0x2c] */
  EDX = ((uint32_t)(ESP + 0x2c));
  /* 12c82d4f mov ebp, ecx */
  EBP = (ECX);
  /* 12c82d51 mov ecx, dword ptr [0x12c90504] */
  ECX = (r32((uint32_t)(0x12c90504)));
  /* 12c82d57 push edx */
  push32((uint32_t)(EDX));
  /* 12c82d58 push edi */
  push32((uint32_t)(EDI));
  /* 12c82d59 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 12c82d5d mov dword ptr [esp + 0x38], ecx */
  w32((uint32_t)(ESP + 0x38), (ECX));
  /* 12c82d61 call 0x12c82bf0 */
  push32(0x12c82d66u); f_12c82bf0();
  /* 12c82d66 push 0x12c904f8 */
  push32((uint32_t)(0x12c904f8u));
  /* 12c82d6b push edi */
  push32((uint32_t)(EDI));
  /* 12c82d6c mov esi, eax */
  ESI = (EAX);
  /* 12c82d6e call 0x12c84db0 */
  push32(0x12c82d73u); f_12c84db0();
  /* 12c82d73 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c82d75 push 0x12c9049c */
  push32((uint32_t)(0x12c9049cu));
  /* 12c82d7a mov byte ptr [eax + edi], 0 */
  w8((uint32_t)(EAX + EDI*1), (0x0u));
  /* 12c82d7e push esi */
  push32((uint32_t)(ESI));
  /* 12c82d7f mov dword ptr [esp + 0x34], 0xffffffff */
  w32((uint32_t)(ESP + 0x34), (0xffffffffu));
  /* 12c82d87 call 0x12c85770 */
  push32(0x12c82d8cu); f_12c85770();
  /* 12c82d8c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82d91 jne 0x12c82dcb */
  if (!C.zf) goto L_12c82dcb;
  /* 12c82d93 movsx eax, byte ptr [esi + 3] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + 0x3))));
  /* 12c82d97 lea edi, [esi + 3] */
  EDI = ((uint32_t)(ESI + 0x3));
  /* 12c82d9a push eax */
  push32((uint32_t)(EAX));
  /* 12c82d9b call 0x12c8581c */
  push32(0x12c82da0u); f_12c8581c();
  /* 12c82da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82da3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c82da5 je 0x12c82dcb */
  if (C.zf) goto L_12c82dcb;
  /* 12c82da7 lea ecx, [esp + 0x18] */
  ECX = ((uint32_t)(ESP + 0x18));
  /* 12c82dab push ecx */
  push32((uint32_t)(ECX));
  /* 12c82dac push 0x12c903b4 */
  push32((uint32_t)(0x12c903b4u));
  /* 12c82db1 push edi */
  push32((uint32_t)(EDI));
  /* 12c82db2 call 0x12c8572e */
  push32(0x12c82db7u); f_12c8572e();
  /* 12c82db7 lea edx, [esp + 0x38] */
  EDX = ((uint32_t)(ESP + 0x38));
  /* 12c82dbb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c82dbd push edx */
  push32((uint32_t)(EDX));
  /* 12c82dbe push edi */
  push32((uint32_t)(EDI));
  /* 12c82dbf call 0x12c82bf0 */
  push32(0x12c82dc4u); f_12c82bf0();
  /* 12c82dc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82dc7 mov esi, eax */
  ESI = (EAX);
  /* 12c82dc9 jmp 0x12c82dcd */
  goto L_12c82dcd;
L_12c82dcb:;
  /* 12c82dcb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c82dcd:;
  /* 12c82dcd push esi */
  push32((uint32_t)(ESI));
  /* 12c82dce mov ecx, ebp */
  ECX = (EBP);
  /* 12c82dd0 call 0x12c82960 */
  push32(0x12c82dd5u); f_12c82960();
  /* 12c82dd5 mov ebx, eax */
  EBX = (EAX);
  /* 12c82dd7 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82dda jne 0x12c82e06 */
  if (!C.zf) goto L_12c82e06;
  /* 12c82ddc push esi */
  push32((uint32_t)(ESI));
  /* 12c82ddd lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 12c82de1 push 0x12c904d8 */
  push32((uint32_t)(0x12c904d8u));
  /* 12c82de6 push eax */
  push32((uint32_t)(EAX));
  /* 12c82de7 call 0x12c855c8 */
  push32(0x12c82decu); f_12c855c8();
  /* 12c82dec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82def lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 12c82df3 lea ecx, [esp + 0x3c] */
  ECX = ((uint32_t)(ESP + 0x3c));
  /* 12c82df7 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c82dfc push edx */
  push32((uint32_t)(EDX));
  /* 12c82dfd mov dword ptr [esp + 0x18], ecx */
  w32((uint32_t)(ESP + 0x18), (ECX));
  /* 12c82e01 call 0x12c8558e */
  push32(0x12c82e06u); f_12c8558e();
L_12c82e06:;
  /* 12c82e06 mov al, byte ptr [esp + 0x17] */
  AL = (r8((uint32_t)(ESP + 0x17)));
  /* 12c82e0a mov dword ptr [esp + 0x20], edi */
  w32((uint32_t)(ESP + 0x20), (EDI));
  /* 12c82e0e mov byte ptr [esp + 0x1c], al */
  w8((uint32_t)(ESP + 0x1c), (AL));
  /* 12c82e12 mov dword ptr [esp + 0x24], edi */
  w32((uint32_t)(ESP + 0x24), (EDI));
  /* 12c82e16 mov dword ptr [esp + 0x28], edi */
  w32((uint32_t)(ESP + 0x28), (EDI));
  /* 12c82e1a mov edi, esi */
  EDI = (ESI);
  /* 12c82e1c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c82e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c82e21 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c82e23 not ecx */
  ECX = (~(ECX));
  /* 12c82e25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c82e26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c82e28 mov dword ptr [esp + 0x14], ecx */
  w32((uint32_t)(ESP + 0x14), (ECX));
  /* 12c82e2c push ecx */
  push32((uint32_t)(ECX));
  /* 12c82e2d lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 12c82e31 call 0x12c83be0 */
  push32(0x12c82e36u); f_12c83be0();
  /* 12c82e36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c82e38 je 0x12c82e5e */
  if (C.zf) goto L_12c82e5e;
  /* 12c82e3a mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c82e3e mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 12c82e42 mov edx, ecx */
  EDX = (ECX);
  /* 12c82e44 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c82e47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c82e49 mov ecx, edx */
  ECX = (EDX);
  /* 12c82e4b mov eax, edx */
  EAX = (EDX);
  /* 12c82e4d and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c82e50 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c82e52 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c82e56 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 12c82e5a mov byte ptr [ecx + eax], 0 */
  w8((uint32_t)(ECX + EAX*1), (0x0u));
L_12c82e5e:;
  /* 12c82e5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82e61 lea edx, [ebx + ebx*8] */
  EDX = ((uint32_t)(EBX + EBX*8));
  /* 12c82e64 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c82e66 mov esi, dword ptr [ebp + edx*8 + 0x44] */
  ESI = (r32((uint32_t)(EBP + EDX*8 + 0x44)));
  /* 12c82e6a lea ecx, [ebp + edx*8] */
  ECX = ((uint32_t)(EBP + EDX*8));
  /* 12c82e6e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82e71 mov dword ptr [esp + 0x244], edi */
  w32((uint32_t)(ESP + 0x244), (EDI));
  /* 12c82e78 mov dword ptr [esp + 0x10], ecx */
  w32((uint32_t)(ESP + 0x10), (ECX));
  /* 12c82e7c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82e7f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82e82 mov dword ptr [edx + eax*4 + 0x8004], esi */
  w32((uint32_t)(EDX + EAX*4 + 0x8004), (ESI));
  /* 12c82e89 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82e8c mov esi, dword ptr [ecx + 0x4c] */
  ESI = (r32((uint32_t)(ECX + 0x4c)));
  /* 12c82e8f lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82e92 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82e95 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82e98 mov dword ptr [edx + eax*4 + 0x8008], esi */
  w32((uint32_t)(EDX + EAX*4 + 0x8008), (ESI));
  /* 12c82e9f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82ea2 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82ea5 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82ea8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82eab mov dword ptr [edx + eax*4 + 0x8028], edi */
  w32((uint32_t)(EDX + EAX*4 + 0x8028), (EDI));
  /* 12c82eb2 lea eax, [ebx + ebx*8 + 9] */
  EAX = ((uint32_t)(EBX + EBX*8 + 0x9));
  /* 12c82eb6 mov eax, dword ptr [ebp + eax*8] */
  EAX = (r32((uint32_t)(EBP + EAX*8)));
  /* 12c82eba cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82ebd ja 0x12c82ef4 */
  if ((!C.cf&&!C.zf)) goto L_12c82ef4;
  /* 12c82ebf jmp dword ptr [eax*4 + 0x12c830a4] */
  switch (EAX) {
    case 0: goto L_12c82ef4;
    case 1: goto L_12c82edf;
    case 2: goto L_12c82edf;
    case 3: goto L_12c82ef4;
    case 4: goto L_12c82ef4;
    case 5: goto L_12c82ec6;
    default: x86_unimpl("switch@0x12c82ebf out of table"); return;
  }
L_12c82ec6:;
  /* 12c82ec6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82ec9 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82ecc lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82ecf mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82ed2 mov dword ptr [edx + eax*4 + 0x8000], 1 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x1u));
  /* 12c82edd jmp 0x12c82f0b */
  goto L_12c82f0b;
L_12c82edf:;
  /* 12c82edf mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82ee2 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82ee5 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82ee8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82eeb mov dword ptr [edx + eax*4 + 0x8000], edi */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (EDI));
  /* 12c82ef2 jmp 0x12c82f0b */
  goto L_12c82f0b;
L_12c82ef4:;
  /* 12c82ef4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82ef7 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82efa lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82efd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82f00 mov dword ptr [edx + eax*4 + 0x8000], 2 */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0x2u));
L_12c82f0b:;
  /* 12c82f0b cmp dword ptr [esp + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82f10 je 0x12c82f4b */
  if (C.zf) goto L_12c82f4b;
  /* 12c82f12 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82f15 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82f18 lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82f1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82f1e mov dword ptr [edx + eax*4 + 0x8000], 0xa */
  w32((uint32_t)(EDX + EAX*4 + 0x8000), (0xau));
  /* 12c82f29 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82f2c lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82f2f lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 12c82f32 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82f35 mov esi, dword ptr [edx + eax*4 + 0x8000] */
  ESI = (r32((uint32_t)(EDX + EAX*4 + 0x8000)));
  /* 12c82f3c lea eax, [edx + eax*4 + 0x8000] */
  EAX = ((uint32_t)(EDX + EAX*4 + 0x8000));
  /* 12c82f43 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c82f47 add esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82f49 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_12c82f4b:;
  /* 12c82f4b cmp dword ptr [ecx + 0x4c], edi */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82f4e jle 0x12c8301e */
  if ((C.zf||C.sf!=C.of)) goto L_12c8301e;
L_12c82f54:;
  /* 12c82f54 lea eax, [esp + 0x2c] */
  EAX = ((uint32_t)(ESP + 0x2c));
  /* 12c82f58 push eax */
  push32((uint32_t)(EAX));
  /* 12c82f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c82f5b call 0x12c82bf0 */
  push32(0x12c82f60u); f_12c82bf0();
  /* 12c82f60 mov esi, eax */
  ESI = (EAX);
  /* 12c82f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82f65 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82f68 je 0x12c83040 */
  if (C.zf) goto L_12c83040;
  /* 12c82f6e push esi */
  push32((uint32_t)(ESI));
  /* 12c82f6f mov ecx, ebp */
  ECX = (EBP);
  /* 12c82f71 call 0x12c82960 */
  push32(0x12c82f76u); f_12c82960();
  /* 12c82f76 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82f79 je 0x12c82f9a */
  if (C.zf) goto L_12c82f9a;
  /* 12c82f7b lea ecx, [eax + eax*8] */
  ECX = ((uint32_t)(EAX + EAX*8));
  /* 12c82f7e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82f81 add eax, 0x2e9 */
  { uint32_t _a=(EAX),_b=(0x2e9u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82f86 mov ecx, dword ptr [ebp + ecx*8 + 0x44] */
  ECX = (r32((uint32_t)(EBP + ECX*8 + 0x44)));
  /* 12c82f8a lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82f8d add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82f8f lea edx, [eax + edx*2] */
  EDX = ((uint32_t)(EAX + EDX*2));
  /* 12c82f92 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82f95 mov dword ptr [eax + edx*4], ecx */
  w32((uint32_t)(EAX + EDX*4), (ECX));
  /* 12c82f98 jmp 0x12c83010 */
  goto L_12c83010;
L_12c82f9a:;
  /* 12c82f9a lea edx, [esp + 0x38] */
  EDX = ((uint32_t)(ESP + 0x38));
  /* 12c82f9e push edx */
  push32((uint32_t)(EDX));
  /* 12c82f9f push 0x12c903b4 */
  push32((uint32_t)(0x12c903b4u));
  /* 12c82fa4 push esi */
  push32((uint32_t)(ESI));
  /* 12c82fa5 call 0x12c8572e */
  push32(0x12c82faau); f_12c8572e();
  /* 12c82faa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82fad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c82fb0 jne 0x12c82fcf */
  if (!C.zf) goto L_12c82fcf;
  /* 12c82fb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82fb5 add eax, 0x2e9 */
  { uint32_t _a=(EAX),_b=(0x2e9u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82fba lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 12c82fbd lea edx, [edi + eax] */
  EDX = ((uint32_t)(EDI + EAX*1));
  /* 12c82fc0 lea eax, [edx + ecx*2] */
  EAX = ((uint32_t)(EDX + ECX*2));
  /* 12c82fc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82fc6 mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 12c82fca mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12c82fcd jmp 0x12c83010 */
  goto L_12c83010;
L_12c82fcf:;
  /* 12c82fcf cmp byte ptr [esi], 0x27 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c82fd2 jne 0x12c82ff0 */
  if (!C.zf) goto L_12c82ff0;
  /* 12c82fd4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82fd7 movsx ecx, byte ptr [esi + 1] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + 0x1))));
  /* 12c82fdb add eax, 0x2e9 */
  { uint32_t _a=(EAX),_b=(0x2e9u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82fe0 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 12c82fe3 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c82fe5 lea edx, [eax + edx*2] */
  EDX = ((uint32_t)(EAX + EDX*2));
  /* 12c82fe8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82feb mov dword ptr [eax + edx*4], ecx */
  w32((uint32_t)(EAX + EDX*4), (ECX));
  /* 12c82fee jmp 0x12c83010 */
  goto L_12c83010;
L_12c82ff0:;
  /* 12c82ff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c82ff3 push esi */
  push32((uint32_t)(ESI));
  /* 12c82ff4 call 0x12c83140 */
  push32(0x12c82ff9u); f_12c83140();
  /* 12c82ff9 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c82ffc add ecx, 0x2e9 */
  { uint32_t _a=(ECX),_b=(0x2e9u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83002 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 12c83005 add ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83007 lea edx, [ecx + edx*2] */
  EDX = ((uint32_t)(ECX + EDX*2));
  /* 12c8300a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c8300d mov dword ptr [ecx + edx*4], eax */
  w32((uint32_t)(ECX + EDX*4), (EAX));
L_12c83010:;
  /* 12c83010 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c83014 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c83015 cmp edi, dword ptr [edx + 0x4c] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EDX + 0x4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83018 jl 0x12c82f54 */
  if ((C.sf!=C.of)) goto L_12c82f54;
L_12c8301e:;
  /* 12c8301e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c83021 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c83025 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c83026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83028 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
  /* 12c8302b je 0x12c83086 */
  if (C.zf) goto L_12c83086;
  /* 12c8302d mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83030 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c83031 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83033 je 0x12c8307d */
  if (C.zf) goto L_12c8307d;
  /* 12c83035 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83038 je 0x12c8307d */
  if (C.zf) goto L_12c8307d;
  /* 12c8303a dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c8303c mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c8303e jmp 0x12c83086 */
  goto L_12c83086;
L_12c83040:;
  /* 12c83040 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c83044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83046 jne 0x12c8304d */
  if (!C.zf) goto L_12c8304d;
  /* 12c83048 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c8304d:;
  /* 12c8304d push eax */
  push32((uint32_t)(EAX));
  /* 12c8304e lea eax, [esp + 0x140] */
  EAX = ((uint32_t)(ESP + 0x140));
  /* 12c83055 push 0x12c904a8 */
  push32((uint32_t)(0x12c904a8u));
  /* 12c8305a push eax */
  push32((uint32_t)(EAX));
  /* 12c8305b call 0x12c855c8 */
  push32(0x12c83060u); f_12c855c8();
  /* 12c83060 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83063 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 12c83067 lea ecx, [esp + 0x13c] */
  ECX = ((uint32_t)(ESP + 0x13c));
  /* 12c8306e push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c83073 push edx */
  push32((uint32_t)(EDX));
  /* 12c83074 mov dword ptr [esp + 0x3c], ecx */
  w32((uint32_t)(ESP + 0x3c), (ECX));
  /* 12c83078 call 0x12c8558e */
  push32(0x12c8307du); f_12c8558e();
L_12c8307d:;
  /* 12c8307d push eax */
  push32((uint32_t)(EAX));
  /* 12c8307e call 0x12c847d0 */
  push32(0x12c83083u); f_12c847d0();
  /* 12c83083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c83086:;
  /* 12c83086 mov ecx, dword ptr [esp + 0x23c] */
  ECX = (r32((uint32_t)(ESP + 0x23c)));
  /* 12c8308d pop edi */
  EDI = (pop32());
  /* 12c8308e pop esi */
  ESI = (pop32());
  /* 12c8308f pop ebp */
  EBP = (pop32());
  /* 12c83090 pop ebx */
  EBX = (pop32());
  /* 12c83091 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c83098 add esp, 0x238 */
  { uint32_t _a=(ESP),_b=(0x238u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8309e ret 4 */
  ESPCHK(0x12c82d20u, _esp0);
  ESP += 8; return;
}

/* FUN_100030c0 @ 0x12c830c0 (58 bytes, 17 insns) */
void f_12c830c0(void) {
  FTRACE(0x12c830c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c830c0 mov eax, ecx */
  EAX = (ECX);
  /* 12c830c2 push esi */
  push32((uint32_t)(ESI));
  /* 12c830c3 push edi */
  push32((uint32_t)(EDI));
  /* 12c830c4 mov edi, 0x400 */
  EDI = (0x400u);
  /* 12c830c9 lea esi, [eax + 0x8024] */
  ESI = ((uint32_t)(EAX + 0x8024));
  /* 12c830cf lea edx, [eax + 0x17004] */
  EDX = ((uint32_t)(EAX + 0x17004));
L_12c830d5:;
  /* 12c830d5 mov dword ptr [esi - 0x24], 6 */
  w32((uint32_t)(ESI + -0x24), (0x6u));
  /* 12c830dc mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12c830e2 mov dword ptr [esi], edx */
  w32((uint32_t)(ESI), (EDX));
  /* 12c830e4 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c830e7 add esi, 0x2c */
  { uint32_t _a=(ESI),_b=(0x2cu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c830ea dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c830eb jne 0x12c830d5 */
  if (!C.zf) goto L_12c830d5;
  /* 12c830ed pop edi */
  EDI = (pop32());
  /* 12c830ee mov dword ptr [eax + 0x17000], 0 */
  w32((uint32_t)(EAX + 0x17000), (0x0u));
  /* 12c830f8 pop esi */
  ESI = (pop32());
  /* 12c830f9 ret  */
  ESPCHK(0x12c830c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x12c83100 (52 bytes, 22 insns) */
void f_12c83100(void) {
  FTRACE(0x12c83100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83100 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83101 mov ebx, ecx */
  EBX = (ECX);
  /* 12c83103 push esi */
  push32((uint32_t)(ESI));
  /* 12c83104 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c83106 mov eax, dword ptr [ebx + 0x17000] */
  EAX = (r32((uint32_t)(EBX + 0x17000)));
  /* 12c8310c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8310e jle 0x12c83131 */
  if ((C.zf||C.sf!=C.of)) goto L_12c83131;
  /* 12c83110 push edi */
  push32((uint32_t)(EDI));
  /* 12c83111 lea edi, [ebx + 0x13000] */
  EDI = ((uint32_t)(EBX + 0x13000));
L_12c83117:;
  /* 12c83117 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c83119 push eax */
  push32((uint32_t)(EAX));
  /* 12c8311a call 0x12c847d0 */
  push32(0x12c8311fu); f_12c847d0();
  /* 12c8311f mov eax, dword ptr [ebx + 0x17000] */
  EAX = (r32((uint32_t)(EBX + 0x17000)));
  /* 12c83125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83128 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c83129 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8312c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8312e jl 0x12c83117 */
  if ((C.sf!=C.of)) goto L_12c83117;
  /* 12c83130 pop edi */
  EDI = (pop32());
L_12c83131:;
  /* 12c83131 pop esi */
  ESI = (pop32());
  /* 12c83132 pop ebx */
  EBX = (pop32());
  /* 12c83133 ret  */
  ESPCHK(0x12c83100u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x12c83140 (127 bytes, 49 insns) */
void f_12c83140(void) {
  FTRACE(0x12c83140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83140 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83141 push ebp */
  push32((uint32_t)(EBP));
  /* 12c83142 mov ebp, dword ptr [esp + 0xc] */
  EBP = (r32((uint32_t)(ESP + 0xc)));
  /* 12c83146 push esi */
  push32((uint32_t)(ESI));
  /* 12c83147 push edi */
  push32((uint32_t)(EDI));
  /* 12c83148 mov ebx, ecx */
  EBX = (ECX);
  /* 12c8314a mov edi, ebp */
  EDI = (EBP);
  /* 12c8314c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c8314f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c83151 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c83153 mov al, byte ptr [ebp] */
  AL = (r8((uint32_t)(EBP)));
  /* 12c83156 not ecx */
  ECX = (~(ECX));
  /* 12c83158 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c83159 cmp al, 0x22 */
  { uint32_t _a=(AL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8315b mov edi, ecx */
  EDI = (ECX);
  /* 12c8315d jne 0x12c8317d */
  if (!C.zf) goto L_12c8317d;
  /* 12c8315f lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 12c83162 push eax */
  push32((uint32_t)(EAX));
  /* 12c83163 call 0x12c8561a */
  push32(0x12c83168u); f_12c8561a();
  /* 12c83168 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 12c8316b inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 12c8316c mov esi, eax */
  ESI = (EAX);
  /* 12c8316e push ecx */
  push32((uint32_t)(ECX));
  /* 12c8316f push ebp */
  push32((uint32_t)(EBP));
  /* 12c83170 push esi */
  push32((uint32_t)(ESI));
  /* 12c83171 call 0x12c85630 */
  push32(0x12c83176u); f_12c85630();
  /* 12c83176 mov byte ptr [esi + edi - 2], 0 */
  w8((uint32_t)(ESI + EDI*1 + -0x2), (0x0u));
  /* 12c8317b jmp 0x12c83194 */
  goto L_12c83194;
L_12c8317d:;
  /* 12c8317d lea edx, [edi + 1] */
  EDX = ((uint32_t)(EDI + 0x1));
  /* 12c83180 push edx */
  push32((uint32_t)(EDX));
  /* 12c83181 call 0x12c8561a */
  push32(0x12c83186u); f_12c8561a();
  /* 12c83186 mov esi, eax */
  ESI = (EAX);
  /* 12c83188 push edi */
  push32((uint32_t)(EDI));
  /* 12c83189 push ebp */
  push32((uint32_t)(EBP));
  /* 12c8318a push esi */
  push32((uint32_t)(ESI));
  /* 12c8318b call 0x12c85630 */
  push32(0x12c83190u); f_12c85630();
  /* 12c83190 mov byte ptr [esi + edi], 0 */
  w8((uint32_t)(ESI + EDI*1), (0x0u));
L_12c83194:;
  /* 12c83194 mov eax, dword ptr [ebx + 0x17000] */
  EAX = (r32((uint32_t)(EBX + 0x17000)));
  /* 12c8319a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8319d mov dword ptr [ebx + eax*4 + 0x13000], esi */
  w32((uint32_t)(EBX + EAX*4 + 0x13000), (ESI));
  /* 12c831a4 mov ecx, dword ptr [ebx + 0x17000] */
  ECX = (r32((uint32_t)(EBX + 0x17000)));
  /* 12c831aa pop edi */
  EDI = (pop32());
  /* 12c831ab pop esi */
  ESI = (pop32());
  /* 12c831ac mov eax, dword ptr [ebx + ecx*4 + 0x13000] */
  EAX = (r32((uint32_t)(EBX + ECX*4 + 0x13000)));
  /* 12c831b3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c831b4 mov dword ptr [ebx + 0x17000], ecx */
  w32((uint32_t)(EBX + 0x17000), (ECX));
  /* 12c831ba pop ebp */
  EBP = (pop32());
  /* 12c831bb pop ebx */
  EBX = (pop32());
  /* 12c831bc ret 4 */
  ESPCHK(0x12c83140u, _esp0);
  ESP += 8; return;
}

/* FUN_100031c0 @ 0x12c831c0 (649 bytes, 261 insns) */
void f_12c831c0(void) {
  FTRACE(0x12c831c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c831c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c831c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c831c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c831c6 mov eax, dword ptr [0x12c932f0] */
  EAX = (r32((uint32_t)(0x12c932f0)));
  /* 12c831cb push ebx */
  push32((uint32_t)(EBX));
  /* 12c831cc push esi */
  push32((uint32_t)(ESI));
  /* 12c831cd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c831cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c831d1 push edi */
  push32((uint32_t)(EDI));
  /* 12c831d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c831d5 jle 0x12c83218 */
  if ((C.zf||C.sf!=C.of)) goto L_12c83218;
  /* 12c831d7 mov ebx, dword ptr [0x12c8e138] */
  EBX = (r32((uint32_t)(0x12c8e138)));
  /* 12c831dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c831df:;
  /* 12c831df test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c831e1 jl 0x12c83434 */
  if ((C.sf!=C.of)) goto L_12c83434;
  /* 12c831e7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c831e9 jge 0x12c83434 */
  if ((C.sf==C.of)) goto L_12c83434;
  /* 12c831ef mov eax, dword ptr [0x12c932ec] */
  EAX = (r32((uint32_t)(0x12c932ec)));
  /* 12c831f4 mov eax, dword ptr [edi + eax + 4] */
  EAX = (r32((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 12c831f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c831fa jne 0x12c83201 */
  if (!C.zf) goto L_12c83201;
  /* 12c831fc mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c83201:;
  /* 12c83201 push eax */
  push32((uint32_t)(EAX));
  /* 12c83202 push esi */
  push32((uint32_t)(ESI));
  /* 12c83203 call ebx */
  call_ind((uint32_t)(EBX), 0x12c83205u);
  /* 12c83205 mov eax, dword ptr [0x12c932f0] */
  EAX = (r32((uint32_t)(0x12c932f0)));
  /* 12c8320a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8320d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8320e add edi, 0x10 */
  { uint32_t _a=(EDI),_b=(0x10u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83211 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83213 jl 0x12c831df */
  if ((C.sf!=C.of)) goto L_12c831df;
  /* 12c83215 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_12c83218:;
  /* 12c83218 lea edx, [ecx + 0x8000] */
  EDX = ((uint32_t)(ECX + 0x8000));
  /* 12c8321e add ecx, 0x19004 */
  { uint32_t _a=(ECX),_b=(0x19004u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83224 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c83227 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c8322a mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
L_12c8322d:;
  /* 12c8322d cmp byte ptr [ebx], 6 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83230 je 0x12c8342d */
  if (C.zf) goto L_12c8342d;
  /* 12c83236 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83239 jne 0x12c8326b */
  if (!C.zf) goto L_12c8326b;
  /* 12c8323b mov edi, ebx */
  EDI = (EBX);
  /* 12c8323d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83240 mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83243 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83246 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83248 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8324b cmp ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8324e je 0x12c83257 */
  if (C.zf) goto L_12c83257;
L_12c83250:;
  /* 12c83250 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c83252 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83255 loop 0x12c83250 */
  ECX = (ECX - 1);
  if (ECX) goto L_12c83250;
L_12c83257:;
  /* 12c83257 call dword ptr [ebx + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + 0x4))), 0x12c8325au);
  /* 12c8325a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8325d mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83260 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83263 add esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83265 push eax */
  push32((uint32_t)(EAX));
  /* 12c83266 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c8326b:;
  /* 12c8326b cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8326e jl 0x12c832a9 */
  if ((C.sf!=C.of)) goto L_12c832a9;
  /* 12c83270 mov edi, ebx */
  EDI = (EBX);
  /* 12c83272 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83275 mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83278 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8327b add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8327d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83280 cmp ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83283 je 0x12c8328c */
  if (C.zf) goto L_12c8328c;
L_12c83285:;
  /* 12c83285 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c83287 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8328a loop 0x12c83285 */
  ECX = (ECX - 1);
  if (ECX) goto L_12c83285;
L_12c8328c:;
  /* 12c8328c call dword ptr [ebx + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + 0x4))), 0x12c8328fu);
  /* 12c8328f mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83292 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83295 add esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83297 mov ecx, dword ptr [ebx] */
  ECX = (r32((uint32_t)(EBX)));
  /* 12c83299 sub ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8329c shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8329f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c832a4 add ebx, 0x2c */
  { uint32_t _a=(EBX),_b=(0x2cu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832a7 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c832a9:;
  /* 12c832a9 cmp byte ptr [ebx], 1 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c832ac jne 0x12c832de */
  if (!C.zf) goto L_12c832de;
  /* 12c832ae mov edi, ebx */
  EDI = (EBX);
  /* 12c832b0 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832b3 mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c832b6 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c832b9 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c832be cmp ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c832c1 je 0x12c832ca */
  if (C.zf) goto L_12c832ca;
L_12c832c3:;
  /* 12c832c3 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c832c5 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c832c8 loop 0x12c832c3 */
  ECX = (ECX - 1);
  if (ECX) goto L_12c832c3;
L_12c832ca:;
  /* 12c832ca call dword ptr [ebx + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + 0x4))), 0x12c832cdu);
  /* 12c832cd mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c832d0 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c832d3 add esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832d5 push eax */
  push32((uint32_t)(EAX));
  /* 12c832d6 add ebx, 0x2c */
  { uint32_t _a=(EBX),_b=(0x2cu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832d9 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c832de:;
  /* 12c832de cmp byte ptr [ebx], 2 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c832e1 jne 0x12c8331e */
  if (!C.zf) goto L_12c8331e;
  /* 12c832e3 mov edi, ebx */
  EDI = (EBX);
  /* 12c832e5 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832e8 mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c832eb shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c832ee add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c832f0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c832f3 cmp ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c832f6 je 0x12c832ff */
  if (C.zf) goto L_12c832ff;
L_12c832f8:;
  /* 12c832f8 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c832fa sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c832fd loop 0x12c832f8 */
  ECX = (ECX - 1);
  if (ECX) goto L_12c832f8;
L_12c832ff:;
  /* 12c832ff call dword ptr [ebx + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + 0x4))), 0x12c83302u);
  /* 12c83302 mov ecx, dword ptr [ebx + 8] */
  ECX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83305 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83308 add esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8330a mov eax, dword ptr [ebx + 0x28] */
  EAX = (r32((uint32_t)(EBX + 0x28)));
  /* 12c8330d cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83310 je 0x12c83425 */
  if (C.zf) goto L_12c83425;
  /* 12c83316 mov ebx, dword ptr [ebx + 0x28] */
  EBX = (r32((uint32_t)(EBX + 0x28)));
  /* 12c83319 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c8331e:;
  /* 12c8331e cmp byte ptr [ebx], 8 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83321 jne 0x12c8332a */
  if (!C.zf) goto L_12c8332a;
  /* 12c83323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83325 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c8332a:;
  /* 12c8332a cmp byte ptr [ebx], 3 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8332d jne 0x12c8333a */
  if (!C.zf) goto L_12c8333a;
  /* 12c8332f push dword ptr [ebx + 4] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x4))));
  /* 12c83332 add ebx, 0x2c */
  { uint32_t _a=(EBX),_b=(0x2cu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83335 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c8333a:;
  /* 12c8333a cmp byte ptr [ebx], 9 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8333d jne 0x12c83352 */
  if (!C.zf) goto L_12c83352;
  /* 12c8333f mov eax, dword ptr [ebx + 4] */
  EAX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c83342 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12c83345 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83348 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 12c8334a add ebx, 0x2c */
  { uint32_t _a=(EBX),_b=(0x2cu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8334d jmp 0x12c8322d */
  goto L_12c8322d;
L_12c83352:;
  /* 12c83352 cmp byte ptr [ebx], 4 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83355 jne 0x12c83425 */
  if (!C.zf) goto L_12c83425;
  /* 12c8335b cmp byte ptr [ebx + 4], 0xd */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8335f jne 0x12c8336b */
  if (!C.zf) goto L_12c8336b;
  /* 12c83361 pop eax */
  EAX = (pop32());
  /* 12c83362 xor eax, 1 */
  { uint32_t _r=(EAX)^(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c83365 push eax */
  push32((uint32_t)(EAX));
  /* 12c83366 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c8336b:;
  /* 12c8336b cmp byte ptr [ebx + 4], 0xc */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8336f jne 0x12c83378 */
  if (!C.zf) goto L_12c83378;
  /* 12c83371 pop ecx */
  ECX = (pop32());
  /* 12c83372 pop eax */
  EAX = (pop32());
  /* 12c83373 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 12c83375 push eax */
  push32((uint32_t)(EAX));
  /* 12c83376 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c83378:;
  /* 12c83378 cmp byte ptr [ebx + 4], 0xb */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8337c jne 0x12c83385 */
  if (!C.zf) goto L_12c83385;
  /* 12c8337e pop ecx */
  ECX = (pop32());
  /* 12c8337f pop eax */
  EAX = (pop32());
  /* 12c83380 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 12c83382 push eax */
  push32((uint32_t)(EAX));
  /* 12c83383 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c83385:;
  /* 12c83385 cmp byte ptr [ebx + 4], 8 */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83389 jne 0x12c83398 */
  if (!C.zf) goto L_12c83398;
  /* 12c8338b pop ecx */
  ECX = (pop32());
  /* 12c8338c pop eax */
  EAX = (pop32());
  /* 12c8338d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8338f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83391 je 0x12c833f5 */
  if (C.zf) goto L_12c833f5;
  /* 12c83393 pop eax */
  EAX = (pop32());
  /* 12c83394 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c83396 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c83398:;
  /* 12c83398 cmp byte ptr [ebx + 4], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8339c jne 0x12c833ab */
  if (!C.zf) goto L_12c833ab;
  /* 12c8339e pop ecx */
  ECX = (pop32());
  /* 12c8339f pop eax */
  EAX = (pop32());
  /* 12c833a0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c833a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c833a4 jg 0x12c833f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c833f5;
  /* 12c833a6 pop eax */
  EAX = (pop32());
  /* 12c833a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c833a9 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c833ab:;
  /* 12c833ab cmp byte ptr [ebx + 4], 9 */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c833af jne 0x12c833be */
  if (!C.zf) goto L_12c833be;
  /* 12c833b1 pop ecx */
  ECX = (pop32());
  /* 12c833b2 pop eax */
  EAX = (pop32());
  /* 12c833b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c833b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c833b7 jl 0x12c833f5 */
  if ((C.sf!=C.of)) goto L_12c833f5;
  /* 12c833b9 pop eax */
  EAX = (pop32());
  /* 12c833ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c833bc jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c833be:;
  /* 12c833be cmp byte ptr [ebx + 4], 7 */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c833c2 jne 0x12c833d1 */
  if (!C.zf) goto L_12c833d1;
  /* 12c833c4 pop ecx */
  ECX = (pop32());
  /* 12c833c5 pop eax */
  EAX = (pop32());
  /* 12c833c6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c833c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c833ca jne 0x12c833f5 */
  if (!C.zf) goto L_12c833f5;
  /* 12c833cc pop eax */
  EAX = (pop32());
  /* 12c833cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c833cf jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c833d1:;
  /* 12c833d1 cmp byte ptr [ebx + 4], 5 */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c833d5 jle 0x12c833e4 */
  if ((C.zf||C.sf!=C.of)) goto L_12c833e4;
  /* 12c833d7 pop ecx */
  ECX = (pop32());
  /* 12c833d8 pop eax */
  EAX = (pop32());
  /* 12c833d9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c833db push 1 */
  push32((uint32_t)(0x1u));
  /* 12c833dd je 0x12c833f5 */
  if (C.zf) goto L_12c833f5;
  /* 12c833df pop eax */
  EAX = (pop32());
  /* 12c833e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c833e2 jmp 0x12c833f5 */
  goto L_12c833f5;
L_12c833e4:;
  /* 12c833e4 cmp byte ptr [ebx + 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBX + 0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c833e8 jge 0x12c83425 */
  if ((C.sf==C.of)) goto L_12c83425;
  /* 12c833ea pop ecx */
  ECX = (pop32());
  /* 12c833eb pop eax */
  EAX = (pop32());
  /* 12c833ec cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c833ee push 1 */
  push32((uint32_t)(0x1u));
  /* 12c833f0 je 0x12c833f5 */
  if (C.zf) goto L_12c833f5;
  /* 12c833f2 pop eax */
  EAX = (pop32());
  /* 12c833f3 push 0 */
  push32((uint32_t)(0x0u));
L_12c833f5:;
  /* 12c833f5 mov eax, dword ptr [ebx + 0x28] */
  EAX = (r32((uint32_t)(EBX + 0x28)));
  /* 12c833f8 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c833fb je 0x12c83425 */
  if (C.zf) goto L_12c83425;
  /* 12c833fd pop eax */
  EAX = (pop32());
  /* 12c833fe cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83401 je 0x12c83412 */
  if (C.zf) goto L_12c83412;
  /* 12c83403 mov ecx, dword ptr [ebx + 0x24] */
  ECX = (r32((uint32_t)(EBX + 0x24)));
  /* 12c83406 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c83408 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8340b je 0x12c8341d */
  if (C.zf) goto L_12c8341d;
  /* 12c8340d cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83410 jg 0x12c8341a */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8341a;
L_12c83412:;
  /* 12c83412 mov ebx, dword ptr [ebx + 0x28] */
  EBX = (r32((uint32_t)(EBX + 0x28)));
  /* 12c83415 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c8341a:;
  /* 12c8341a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8341b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c8341d:;
  /* 12c8341d add ebx, 0x2c */
  { uint32_t _a=(EBX),_b=(0x2cu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83420 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c83425:;
  /* 12c83425 add ebx, 0x2c */
  { uint32_t _a=(EBX),_b=(0x2cu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83428 jmp 0x12c8322d */
  goto L_12c8322d;
L_12c8342d:;
  /* 12c8342d pop edi */
  EDI = (pop32());
  /* 12c8342e pop esi */
  ESI = (pop32());
  /* 12c8342f pop ebx */
  EBX = (pop32());
  /* 12c83430 mov esp, ebp */
  ESP = (EBP);
  /* 12c83432 pop ebp */
  EBP = (pop32());
  /* 12c83433 ret  */
  ESPCHK(0x12c831c0u, _esp0);
  ESP += 4; return;
L_12c83434:;
  /* 12c83434 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c83437 push 0x12c8ea54 */
  push32((uint32_t)(0x12c8ea54u));
  /* 12c8343c push ecx */
  push32((uint32_t)(ECX));
  /* 12c8343d mov dword ptr [ebp - 8], 0x12c90508 */
  w32((uint32_t)(EBP + -0x8), (0x12c90508u));
  /* 12c83444 call 0x12c8558e */
  push32(0x12c83449u); f_12c8558e();
  /* 12c83449 nop  */
  /* nop */
  /* 12c8344a nop  */
  /* nop */
  /* 12c8344b nop  */
  /* nop */
  /* 12c8344c nop  */
  /* nop */
  /* 12c8344d nop  */
  /* nop */
  /* 12c8344e nop  */
  /* nop */
  /* 12c8344f nop  */
  /* nop */
}

/* RunTimerEx @ 0x12c83450 (53 bytes, 16 insns) */
void f_12c83450(void) {
  FTRACE(0x12c83450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83450 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c83454 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c83457 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c8345a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 12c8345d mov eax, 0x88888889 */
  EAX = (0x88888889u);
  /* 12c83462 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 12c83465 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 12c83467 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83469 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8346d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c83470 mov eax, edx */
  EAX = (EDX);
  /* 12c83472 mov dword ptr [esp + 4], ecx */
  w32((uint32_t)(ESP + 0x4), (ECX));
  /* 12c83476 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 12c83479 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8347b mov dword ptr [esp + 8], edx */
  w32((uint32_t)(ESP + 0x8), (EDX));
  /* 12c8347f jmp dword ptr [0x12c8e128] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e128)))); return;
}

/* ChangeFriendsEx @ 0x12c83490 (71 bytes, 30 insns) */
void f_12c83490(void) {
  FTRACE(0x12c83490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83490 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83491 push esi */
  push32((uint32_t)(ESI));
  /* 12c83492 push edi */
  push32((uint32_t)(EDI));
  /* 12c83493 mov edi, dword ptr [0x12c8e140] */
  EDI = (r32((uint32_t)(0x12c8e140)));
  /* 12c83499 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_12c8349b:;
  /* 12c8349b mov al, byte ptr [esp + esi + 0x14] */
  AL = (r8((uint32_t)(ESP + ESI*1 + 0x14)));
  /* 12c8349f push eax */
  push32((uint32_t)(EAX));
  /* 12c834a0 push esi */
  push32((uint32_t)(ESI));
  /* 12c834a1 mov byte ptr [esi + 0x12c932d8], al */
  w8((uint32_t)(ESI + 0x12c932d8), (AL));
  /* 12c834a7 call edi */
  call_ind((uint32_t)(EDI), 0x12c834a9u);
  /* 12c834a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c834ac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c834ad cmp esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c834b0 jl 0x12c8349b */
  if ((C.sf!=C.of)) goto L_12c8349b;
  /* 12c834b2 mov esi, 4 */
  ESI = (0x4u);
  /* 12c834b7 lea ebx, [esp + 0x18] */
  EBX = ((uint32_t)(ESP + 0x18));
  /* 12c834bb sub ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_12c834bd:;
  /* 12c834bd mov al, byte ptr [ebx + esi] */
  AL = (r8((uint32_t)(EBX + ESI*1)));
  /* 12c834c0 push eax */
  push32((uint32_t)(EAX));
  /* 12c834c1 push esi */
  push32((uint32_t)(ESI));
  /* 12c834c2 mov byte ptr [esi + 0x12c932d8], al */
  w8((uint32_t)(ESI + 0x12c932d8), (AL));
  /* 12c834c8 call edi */
  call_ind((uint32_t)(EDI), 0x12c834cau);
  /* 12c834ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c834cd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c834ce cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c834d1 jl 0x12c834bd */
  if ((C.sf!=C.of)) goto L_12c834bd;
  /* 12c834d3 pop edi */
  EDI = (pop32());
  /* 12c834d4 pop esi */
  ESI = (pop32());
  /* 12c834d5 pop ebx */
  EBX = (pop32());
  /* 12c834d6 ret  */
  ESPCHK(0x12c83490u, _esp0);
  ESP += 4; return;
}

/* ShowPageEx @ 0x12c834e0 (38 bytes, 12 insns) */
void f_12c834e0(void) {
  FTRACE(0x12c834e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c834e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c834e4 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c834e7 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 12c834eb push eax */
  push32((uint32_t)(EAX));
  /* 12c834ec push 0x12c90538 */
  push32((uint32_t)(0x12c90538u));
  /* 12c834f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c834f2 call 0x12c855c8 */
  push32(0x12c834f7u); f_12c855c8();
  /* 12c834f7 lea edx, [esp + 0xc] */
  EDX = ((uint32_t)(ESP + 0xc));
  /* 12c834fb push edx */
  push32((uint32_t)(EDX));
  /* 12c834fc call dword ptr [0x12c8e118] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e118))), 0x12c83502u);
  /* 12c83502 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83505 ret  */
  ESPCHK(0x12c834e0u, _esp0);
  ESP += 4; return;
}

/* AskQuestionEx @ 0x12c83510 (38 bytes, 12 insns) */
void f_12c83510(void) {
  FTRACE(0x12c83510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83510 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c83514 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83517 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 12c8351b push eax */
  push32((uint32_t)(EAX));
  /* 12c8351c push 0x12c90538 */
  push32((uint32_t)(0x12c90538u));
  /* 12c83521 push ecx */
  push32((uint32_t)(ECX));
  /* 12c83522 call 0x12c855c8 */
  push32(0x12c83527u); f_12c855c8();
  /* 12c83527 lea edx, [esp + 0xc] */
  EDX = ((uint32_t)(ESP + 0xc));
  /* 12c8352b push edx */
  push32((uint32_t)(EDX));
  /* 12c8352c call dword ptr [0x12c8e120] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e120))), 0x12c83532u);
  /* 12c83532 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83535 ret  */
  ESPCHK(0x12c83510u, _esp0);
  ESP += 4; return;
}

/* DisableMissionEx @ 0x12c83540 (18 bytes, 5 insns) */
void f_12c83540(void) {
  FTRACE(0x12c83540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83540 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 12c83544 add al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c83546 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c83548 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 12c8354c jmp dword ptr [0x12c8e15c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e15c)))); return;
}

/* EnableMissionEx @ 0x12c83560 (18 bytes, 5 insns) */
void f_12c83560(void) {
  FTRACE(0x12c83560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83560 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 12c83564 add al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c83566 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c83568 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 12c8356c jmp dword ptr [0x12c8e11c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e11c)))); return;
}

/* InitialUpgradeEx @ 0x12c83580 (6 bytes, 1 insns) */
void f_12c83580(void) {
  FTRACE(0x12c83580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83580 jmp dword ptr [0x12c8e10c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e10c)))); return;
}

/* AskMultilineQuestionEx @ 0x12c83590 (53 bytes, 18 insns) */
void f_12c83590(void) {
  FTRACE(0x12c83590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83590 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c83594 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83597 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 12c8359b push eax */
  push32((uint32_t)(EAX));
  /* 12c8359c push 0x12c90538 */
  push32((uint32_t)(0x12c90538u));
  /* 12c835a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c835a2 call 0x12c855c8 */
  push32(0x12c835a7u); f_12c855c8();
  /* 12c835a7 mov edx, dword ptr [esp + 0x3c] */
  EDX = (r32((uint32_t)(ESP + 0x3c)));
  /* 12c835ab mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 12c835af push edx */
  push32((uint32_t)(EDX));
  /* 12c835b0 mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 12c835b4 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c835b8 push eax */
  push32((uint32_t)(EAX));
  /* 12c835b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c835ba push edx */
  push32((uint32_t)(EDX));
  /* 12c835bb call dword ptr [0x12c8e114] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e114))), 0x12c835c1u);
  /* 12c835c1 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c835c4 ret  */
  ESPCHK(0x12c83590u, _esp0);
  ESP += 4; return;
}

/* CheckGroupLeaveAbility @ 0x12c835d0 (44 bytes, 15 insns) */
void f_12c835d0(void) {
  FTRACE(0x12c835d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c835d0 push esi */
  push32((uint32_t)(ESI));
  /* 12c835d1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c835d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c835d7 push 0x12c932f8 */
  push32((uint32_t)(0x12c932f8u));
  /* 12c835dc push esi */
  push32((uint32_t)(ESI));
  /* 12c835dd call dword ptr [0x12c8e144] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e144))), 0x12c835e3u);
  /* 12c835e3 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c835e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c835e9 push eax */
  push32((uint32_t)(EAX));
  /* 12c835ea call dword ptr [0x12c8e14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e14c))), 0x12c835f0u);
  /* 12c835f0 push esi */
  push32((uint32_t)(ESI));
  /* 12c835f1 call dword ptr [0x12c8e110] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e110))), 0x12c835f7u);
  /* 12c835f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c835fa pop esi */
  ESI = (pop32());
  /* 12c835fb ret  */
  ESPCHK(0x12c835d0u, _esp0);
  ESP += 4; return;
}

/* GetGroupNInside @ 0x12c83600 (44 bytes, 15 insns) */
void f_12c83600(void) {
  FTRACE(0x12c83600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83600 push esi */
  push32((uint32_t)(ESI));
  /* 12c83601 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c83605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c83607 push 0x12c932f8 */
  push32((uint32_t)(0x12c932f8u));
  /* 12c8360c push esi */
  push32((uint32_t)(ESI));
  /* 12c8360d call dword ptr [0x12c8e144] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e144))), 0x12c83613u);
  /* 12c83613 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c83617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c83619 push eax */
  push32((uint32_t)(EAX));
  /* 12c8361a call dword ptr [0x12c8e14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e14c))), 0x12c83620u);
  /* 12c83620 push esi */
  push32((uint32_t)(ESI));
  /* 12c83621 call dword ptr [0x12c8e100] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e100))), 0x12c83627u);
  /* 12c83627 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8362a pop esi */
  ESI = (pop32());
  /* 12c8362b ret  */
  ESPCHK(0x12c83600u, _esp0);
  ESP += 4; return;
}

/* CompleteMission @ 0x12c83630 (39 bytes, 14 insns) */
void f_12c83630(void) {
  FTRACE(0x12c83630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83630 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83631 mov bl, byte ptr [esp + 8] */
  BL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c83635 add bl, bl */
  { uint32_t _a=(BL),_b=(BL),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c83637 add bl, 0x41 */
  { uint32_t _a=(BL),_b=(0x41u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8363a mov byte ptr [esp + 8], bl */
  w8((uint32_t)(ESP + 0x8), (BL));
  /* 12c8363e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c83642 push eax */
  push32((uint32_t)(EAX));
  /* 12c83643 call dword ptr [0x12c8e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e15c))), 0x12c83649u);
  /* 12c83649 inc bl */
  { uint32_t _r=(BL)+1; BL = (_r); fl_inc(_r,8); }
  /* 12c8364b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8364c call dword ptr [0x12c8e11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e11c))), 0x12c83652u);
  /* 12c83652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83655 pop ebx */
  EBX = (pop32());
  /* 12c83656 ret  */
  ESPCHK(0x12c83630u, _esp0);
  ESP += 4; return;
}

/* SubResource @ 0x12c83660 (32 bytes, 8 insns) */
void f_12c83660(void) {
  FTRACE(0x12c83660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83660 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c83664 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c83668 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8366c mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12c83670 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c83672 mov dword ptr [esp + 0xc], eax */
  w32((uint32_t)(ESP + 0xc), (EAX));
  /* 12c83676 mov dword ptr [esp + 4], edx */
  w32((uint32_t)(ESP + 0x4), (EDX));
  /* 12c8367a jmp dword ptr [0x12c8e108] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e108)))); return;
}

/* PreserveTrigger @ 0x12c83680 (23 bytes, 4 insns) */
void f_12c83680(void) {
  FTRACE(0x12c83680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83680 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c83684 mov ecx, dword ptr [eax*4 + 0x12cab304] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cab304)));
  /* 12c8368b mov dword ptr [ecx*4 + 0x12caa304], 1 */
  w32((uint32_t)(ECX*4 + 0x12caa304), (0x1u));
  /* 12c83696 ret  */
  ESPCHK(0x12c83680u, _esp0);
  ESP += 4; return;
}

/* StartAIEx @ 0x12c836a0 (34 bytes, 9 insns) */
void f_12c836a0(void) {
  FTRACE(0x12c836a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c836a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c836a4 cmp al, 0x12 */
  { uint32_t _a=(AL),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c836a6 jae 0x12c836c1 */
  if (!C.cf) goto L_12c836c1;
  /* 12c836a8 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c836ac mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 12c836b0 mov edx, dword ptr [ecx*4 + 0x12c90070] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c90070)));
  /* 12c836b7 mov dword ptr [esp + 8], edx */
  w32((uint32_t)(ESP + 0x8), (EDX));
  /* 12c836bb jmp dword ptr [0x12c8e104] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12c8e104)))); return;
L_12c836c1:;
  /* 12c836c1 ret  */
  ESPCHK(0x12c836a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d0 @ 0x12c836d0 (284 bytes, 119 insns) */
void f_12c836d0(void) {
  FTRACE(0x12c836d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c836d0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c836d1 push ebp */
  push32((uint32_t)(EBP));
  /* 12c836d2 push esi */
  push32((uint32_t)(ESI));
  /* 12c836d3 push edi */
  push32((uint32_t)(EDI));
  /* 12c836d4 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c836d8 mov ebx, ecx */
  EBX = (ECX);
  /* 12c836da xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c836dc mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c836de mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 12c836e1 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 12c836e3 mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 12c836e6 mov dword ptr [ebx + 0xc], esi */
  w32((uint32_t)(EBX + 0xc), (ESI));
  /* 12c836e9 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c836ec mov ebp, eax */
  EBP = (EAX);
  /* 12c836ee cmp ebp, -1 */
  { uint32_t _a=(EBP),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c836f1 jbe 0x12c836f6 */
  if ((C.cf||C.zf)) goto L_12c836f6;
  /* 12c836f3 or ebp, 0xffffffff */
  { uint32_t _r=(EBP)|(0xffffffffu); EBP = (_r); fl_logic(_r,32); }
L_12c836f6:;
  /* 12c836f6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c836f8 jne 0x12c8375d */
  if (!C.zf) goto L_12c8375d;
  /* 12c836fa or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c836fd cmp ebp, esi */
  { uint32_t _a=(EBP),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c836ff jbe 0x12c83706 */
  if ((C.cf||C.zf)) goto L_12c83706;
  /* 12c83701 call 0x12c84a07 */
  push32(0x12c83706u); f_12c84a07();
L_12c83706:;
  /* 12c83706 mov ecx, ebx */
  ECX = (EBX);
  /* 12c83708 call 0x12c83e20 */
  push32(0x12c8370du); f_12c83e20();
  /* 12c8370d mov eax, dword ptr [ebx + 8] */
  EAX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83710 sub eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83712 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83715 jae 0x12c8371d */
  if (!C.cf) goto L_12c8371d;
  /* 12c83717 mov edi, eax */
  EDI = (EAX);
  /* 12c83719 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8371b jbe 0x12c8374d */
  if ((C.cf||C.zf)) goto L_12c8374d;
L_12c8371d:;
  /* 12c8371d mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c83720 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83722 add ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83724 push eax */
  push32((uint32_t)(EAX));
  /* 12c83725 lea edx, [ecx + edi] */
  EDX = ((uint32_t)(ECX + EDI*1));
  /* 12c83728 push edx */
  push32((uint32_t)(EDX));
  /* 12c83729 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8372a call 0x12c85870 */
  push32(0x12c8372fu); f_12c85870();
  /* 12c8372f mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83735 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83737 mov ecx, ebx */
  ECX = (EBX);
  /* 12c83739 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8373b push esi */
  push32((uint32_t)(ESI));
  /* 12c8373c call 0x12c83be0 */
  push32(0x12c83741u); f_12c83be0();
  /* 12c83741 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c83743 je 0x12c8374d */
  if (C.zf) goto L_12c8374d;
  /* 12c83745 push esi */
  push32((uint32_t)(ESI));
  /* 12c83746 mov ecx, ebx */
  ECX = (EBX);
  /* 12c83748 call 0x12c83bc0 */
  push32(0x12c8374du); f_12c83bc0();
L_12c8374d:;
  /* 12c8374d mov ecx, ebx */
  ECX = (EBX);
  /* 12c8374f call 0x12c83e20 */
  push32(0x12c83754u); f_12c83e20();
  /* 12c83754 pop edi */
  EDI = (pop32());
  /* 12c83755 pop esi */
  ESI = (pop32());
  /* 12c83756 mov eax, ebx */
  EAX = (EBX);
  /* 12c83758 pop ebp */
  EBP = (pop32());
  /* 12c83759 pop ebx */
  EBX = (pop32());
  /* 12c8375a ret 4 */
  ESPCHK(0x12c836d0u, _esp0);
  ESP += 8; return;
L_12c8375d:;
  /* 12c8375d cmp ebp, esi */
  { uint32_t _a=(EBP),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8375f jbe 0x12c837ac */
  if ((C.cf||C.zf)) goto L_12c837ac;
  /* 12c83761 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83763 jne 0x12c837ac */
  if (!C.zf) goto L_12c837ac;
  /* 12c83765 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c83768 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8376a jne 0x12c83771 */
  if (!C.zf) goto L_12c83771;
  /* 12c8376c mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c83771:;
  /* 12c83771 cmp byte ptr [eax - 1], 0xfe */
  { uint32_t _a=(r8((uint32_t)(EAX + -0x1))),_b=(0xfeu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83775 jae 0x12c837ac */
  if (!C.cf) goto L_12c837ac;
  /* 12c83777 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 12c8377a mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 12c8377d mov dword ptr [ebx + 0xc], esi */
  w32((uint32_t)(EBX + 0xc), (ESI));
  /* 12c83780 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c83783 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83785 jne 0x12c8378c */
  if (!C.zf) goto L_12c8378c;
  /* 12c83787 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c8378c:;
  /* 12c8378c mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c8378f mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c83792 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12c83795 mov edx, dword ptr [edi + 0xc] */
  EDX = (r32((uint32_t)(EDI + 0xc)));
  /* 12c83798 mov dword ptr [ebx + 0xc], edx */
  w32((uint32_t)(EBX + 0xc), (EDX));
  /* 12c8379b mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c8379e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c837a0 pop edi */
  EDI = (pop32());
  /* 12c837a1 mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c837a4 pop esi */
  ESI = (pop32());
  /* 12c837a5 mov eax, ebx */
  EAX = (EBX);
  /* 12c837a7 pop ebp */
  EBP = (pop32());
  /* 12c837a8 pop ebx */
  EBX = (pop32());
  /* 12c837a9 ret 4 */
  ESPCHK(0x12c836d0u, _esp0);
  ESP += 8; return;
L_12c837ac:;
  /* 12c837ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12c837ae push ebp */
  push32((uint32_t)(EBP));
  /* 12c837af mov ecx, ebx */
  ECX = (EBX);
  /* 12c837b1 call 0x12c83be0 */
  push32(0x12c837b6u); f_12c83be0();
  /* 12c837b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c837b8 je 0x12c837e3 */
  if (C.zf) goto L_12c837e3;
  /* 12c837ba mov edi, dword ptr [edi + 4] */
  EDI = (r32((uint32_t)(EDI + 0x4)));
  /* 12c837bd mov esi, 0x12c8e168 */
  ESI = (0x12c8e168u);
  /* 12c837c2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c837c4 je 0x12c837c8 */
  if (C.zf) goto L_12c837c8;
  /* 12c837c6 mov esi, edi */
  ESI = (EDI);
L_12c837c8:;
  /* 12c837c8 mov edi, dword ptr [ebx + 4] */
  EDI = (r32((uint32_t)(EBX + 0x4)));
  /* 12c837cb mov ecx, ebp */
  ECX = (EBP);
  /* 12c837cd mov eax, ecx */
  EAX = (ECX);
  /* 12c837cf push ebp */
  push32((uint32_t)(EBP));
  /* 12c837d0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c837d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c837d5 mov ecx, eax */
  ECX = (EAX);
  /* 12c837d7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c837da rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c837dc mov ecx, ebx */
  ECX = (EBX);
  /* 12c837de call 0x12c83bc0 */
  push32(0x12c837e3u); f_12c83bc0();
L_12c837e3:;
  /* 12c837e3 pop edi */
  EDI = (pop32());
  /* 12c837e4 pop esi */
  ESI = (pop32());
  /* 12c837e5 mov eax, ebx */
  EAX = (EBX);
  /* 12c837e7 pop ebp */
  EBP = (pop32());
  /* 12c837e8 pop ebx */
  EBX = (pop32());
  /* 12c837e9 ret 4 */
  ESPCHK(0x12c836d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100037f0 @ 0x12c837f0 (61 bytes, 22 insns) */
void f_12c837f0(void) {
  FTRACE(0x12c837f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c837f0 push esi */
  push32((uint32_t)(ESI));
  /* 12c837f1 mov esi, ecx */
  ESI = (ECX);
  /* 12c837f3 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c837f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c837f8 je 0x12c83816 */
  if (C.zf) goto L_12c83816;
  /* 12c837fa mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c837fd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c837fe test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83800 je 0x12c8380d */
  if (C.zf) goto L_12c8380d;
  /* 12c83802 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83805 je 0x12c8380d */
  if (C.zf) goto L_12c8380d;
  /* 12c83807 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83809 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c8380b jmp 0x12c83816 */
  goto L_12c83816;
L_12c8380d:;
  /* 12c8380d push eax */
  push32((uint32_t)(EAX));
  /* 12c8380e call 0x12c847d0 */
  push32(0x12c83813u); f_12c847d0();
  /* 12c83813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c83816:;
  /* 12c83816 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 12c8381d mov dword ptr [esi + 8], 0 */
  w32((uint32_t)(ESI + 0x8), (0x0u));
  /* 12c83824 mov dword ptr [esi + 0xc], 0 */
  w32((uint32_t)(ESI + 0xc), (0x0u));
  /* 12c8382b pop esi */
  ESI = (pop32());
  /* 12c8382c ret  */
  ESPCHK(0x12c837f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x12c83830 (126 bytes, 36 insns) */
void f_12c83830(void) {
  FTRACE(0x12c83830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83830 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c83832 push 0x12c8d5bb */
  push32((uint32_t)(0x12c8d5bbu));
  /* 12c83837 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c8383d push eax */
  push32((uint32_t)(EAX));
  /* 12c8383e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c83845 push ecx */
  push32((uint32_t)(ECX));
  /* 12c83846 push esi */
  push32((uint32_t)(ESI));
  /* 12c83847 push edi */
  push32((uint32_t)(EDI));
  /* 12c83848 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12c8384d mov esi, ecx */
  ESI = (ECX);
  /* 12c8384f call 0x12c8561a */
  push32(0x12c83854u); f_12c8561a();
  /* 12c83854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83857 mov dword ptr [esp + 8], eax */
  w32((uint32_t)(ESP + 0x8), (EAX));
  /* 12c8385b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8385d mov dword ptr [esp + 0x14], 0 */
  w32((uint32_t)(ESP + 0x14), (0x0u));
  /* 12c83865 je 0x12c83889 */
  if (C.zf) goto L_12c83889;
  /* 12c83867 push 0x12c837f0 */
  push32((uint32_t)(0x12c837f0u));
  /* 12c8386c push 0x12c838b0 */
  push32((uint32_t)(0x12c838b0u));
  /* 12c83871 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 12c83874 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c83879 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c8387b push edi */
  push32((uint32_t)(EDI));
  /* 12c8387c mov dword ptr [eax], 0x100 */
  w32((uint32_t)(EAX), (0x100u));
  /* 12c83882 call 0x12c85ba5 */
  push32(0x12c83887u); f_12c85ba5();
  /* 12c83887 jmp 0x12c8388b */
  goto L_12c8388b;
L_12c83889:;
  /* 12c83889 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c8388b:;
  /* 12c8388b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8388f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 12c83891 mov dword ptr [esi + 8], 0x100 */
  w32((uint32_t)(ESI + 0x8), (0x100u));
  /* 12c83898 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 12c8389f mov eax, esi */
  EAX = (ESI);
  /* 12c838a1 pop edi */
  EDI = (pop32());
  /* 12c838a2 pop esi */
  ESI = (pop32());
  /* 12c838a3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c838aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c838ad ret  */
  ESPCHK(0x12c83830u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x12c838d0 (510 bytes, 207 insns) */
void f_12c838d0(void) {
  FTRACE(0x12c838d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c838d0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c838d1 push ebp */
  push32((uint32_t)(EBP));
  /* 12c838d2 push esi */
  push32((uint32_t)(ESI));
  /* 12c838d3 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c838d7 push edi */
  push32((uint32_t)(EDI));
  /* 12c838d8 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c838dc mov ebp, ecx */
  EBP = (ECX);
  /* 12c838de cmp dword ptr [edi + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c838e1 jae 0x12c838e8 */
  if (!C.cf) goto L_12c838e8;
  /* 12c838e3 call 0x12c84a07 */
  push32(0x12c838e8u); f_12c84a07();
L_12c838e8:;
  /* 12c838e8 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c838eb mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c838ef mov ebx, eax */
  EBX = (EAX);
  /* 12c838f1 sub ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c838f3 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c838f5 jae 0x12c838f9 */
  if (!C.cf) goto L_12c838f9;
  /* 12c838f7 mov ebx, ecx */
  EBX = (ECX);
L_12c838f9:;
  /* 12c838f9 cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c838fb jne 0x12c839b4 */
  if (!C.zf) goto L_12c839b4;
  /* 12c83901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c83904 add ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83906 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c83909 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8390b jae 0x12c83912 */
  if (!C.cf) goto L_12c83912;
  /* 12c8390d call 0x12c84a07 */
  push32(0x12c83912u); f_12c84a07();
L_12c83912:;
  /* 12c83912 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83914 call 0x12c83e20 */
  push32(0x12c83919u); f_12c83e20();
  /* 12c83919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8391c sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8391e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83921 jae 0x12c83929 */
  if (!C.cf) goto L_12c83929;
  /* 12c83923 mov edi, eax */
  EDI = (EAX);
  /* 12c83925 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c83927 jbe 0x12c8395f */
  if ((C.cf||C.zf)) goto L_12c8395f;
L_12c83929:;
  /* 12c83929 mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c8392c sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8392e add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83930 push eax */
  push32((uint32_t)(EAX));
  /* 12c83931 lea edx, [ecx + edi] */
  EDX = ((uint32_t)(ECX + EDI*1));
  /* 12c83934 push edx */
  push32((uint32_t)(EDX));
  /* 12c83935 push ecx */
  push32((uint32_t)(ECX));
  /* 12c83936 call 0x12c85870 */
  push32(0x12c8393bu); f_12c85870();
  /* 12c8393b mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8393e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83941 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83943 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c83947 push esi */
  push32((uint32_t)(ESI));
  /* 12c83948 call 0x12c83be0 */
  push32(0x12c8394du); f_12c83be0();
  /* 12c8394d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8394f je 0x12c8395b */
  if (C.zf) goto L_12c8395b;
  /* 12c83951 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83954 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 12c83957 mov byte ptr [esi + eax], 0 */
  w8((uint32_t)(ESI + EAX*1), (0x0u));
L_12c8395b:;
  /* 12c8395b mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_12c8395f:;
  /* 12c8395f mov ecx, ebp */
  ECX = (EBP);
  /* 12c83961 mov edi, esi */
  EDI = (ESI);
  /* 12c83963 call 0x12c83e20 */
  push32(0x12c83968u); f_12c83e20();
  /* 12c83968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8396b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8396d jae 0x12c83971 */
  if (!C.cf) goto L_12c83971;
  /* 12c8396f mov edi, eax */
  EDI = (EAX);
L_12c83971:;
  /* 12c83971 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c83973 jbe 0x12c83ac5 */
  if ((C.cf||C.zf)) goto L_12c83ac5;
  /* 12c83979 mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c8397c sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8397e push eax */
  push32((uint32_t)(EAX));
  /* 12c8397f lea edx, [ecx + edi] */
  EDX = ((uint32_t)(ECX + EDI*1));
  /* 12c83982 push edx */
  push32((uint32_t)(EDX));
  /* 12c83983 push ecx */
  push32((uint32_t)(ECX));
  /* 12c83984 call 0x12c85870 */
  push32(0x12c83989u); f_12c85870();
  /* 12c83989 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8398c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8398f sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83991 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83993 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c83995 push esi */
  push32((uint32_t)(ESI));
  /* 12c83996 call 0x12c83be0 */
  push32(0x12c8399bu); f_12c83be0();
  /* 12c8399b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8399d je 0x12c83ac5 */
  if (C.zf) goto L_12c83ac5;
  /* 12c839a3 push esi */
  push32((uint32_t)(ESI));
  /* 12c839a4 mov ecx, ebp */
  ECX = (EBP);
  /* 12c839a6 call 0x12c83bc0 */
  push32(0x12c839abu); f_12c83bc0();
  /* 12c839ab pop edi */
  EDI = (pop32());
  /* 12c839ac mov eax, ebp */
  EAX = (EBP);
  /* 12c839ae pop esi */
  ESI = (pop32());
  /* 12c839af pop ebp */
  EBP = (pop32());
  /* 12c839b0 pop ebx */
  EBX = (pop32());
  /* 12c839b1 ret 0xc */
  ESPCHK(0x12c838d0u, _esp0);
  ESP += 16; return;
L_12c839b4:;
  /* 12c839b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c839b6 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c839b8 jbe 0x12c83a2a */
  if ((C.cf||C.zf)) goto L_12c83a2a;
  /* 12c839ba cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c839bc jne 0x12c83a2a */
  if (!C.zf) goto L_12c83a2a;
  /* 12c839be mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c839c1 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c839c3 jne 0x12c839ca */
  if (!C.zf) goto L_12c839ca;
  /* 12c839c5 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c839ca:;
  /* 12c839ca cmp byte ptr [eax - 1], 0xfe */
  { uint32_t _a=(r8((uint32_t)(EAX + -0x1))),_b=(0xfeu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c839ce jae 0x12c83a2a */
  if (!C.cf) goto L_12c83a2a;
  /* 12c839d0 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c839d3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c839d5 je 0x12c839f5 */
  if (C.zf) goto L_12c839f5;
  /* 12c839d7 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c839da dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c839db test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c839dd je 0x12c839ea */
  if (C.zf) goto L_12c839ea;
  /* 12c839df cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c839e2 je 0x12c839ea */
  if (C.zf) goto L_12c839ea;
  /* 12c839e4 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c839e6 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c839e8 jmp 0x12c839f5 */
  goto L_12c839f5;
L_12c839ea:;
  /* 12c839ea push eax */
  push32((uint32_t)(EAX));
  /* 12c839eb call 0x12c847d0 */
  push32(0x12c839f0u); f_12c847d0();
  /* 12c839f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c839f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_12c839f5:;
  /* 12c839f5 mov dword ptr [ebp + 4], edx */
  w32((uint32_t)(EBP + 0x4), (EDX));
  /* 12c839f8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c839fb mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c839fe mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c83a01 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83a03 jne 0x12c83a0a */
  if (!C.zf) goto L_12c83a0a;
  /* 12c83a05 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c83a0a:;
  /* 12c83a0a mov dword ptr [ebp + 4], eax */
  w32((uint32_t)(EBP + 0x4), (EAX));
  /* 12c83a0d mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c83a10 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c83a13 mov edx, dword ptr [edi + 0xc] */
  EDX = (r32((uint32_t)(EDI + 0xc)));
  /* 12c83a16 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c83a19 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83a1c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c83a1e pop edi */
  EDI = (pop32());
  /* 12c83a1f mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c83a22 mov eax, ebp */
  EAX = (EBP);
  /* 12c83a24 pop esi */
  ESI = (pop32());
  /* 12c83a25 pop ebp */
  EBP = (pop32());
  /* 12c83a26 pop ebx */
  EBX = (pop32());
  /* 12c83a27 ret 0xc */
  ESPCHK(0x12c838d0u, _esp0);
  ESP += 16; return;
L_12c83a2a:;
  /* 12c83a2a mov ecx, ebp */
  ECX = (EBP);
  /* 12c83a2c call 0x12c83d00 */
  push32(0x12c83a31u); f_12c83d00();
  /* 12c83a31 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83a33 jae 0x12c83a3a */
  if (!C.cf) goto L_12c83a3a;
  /* 12c83a35 call 0x12c847db */
  push32(0x12c83a3au); f_12c847db();
L_12c83a3a:;
  /* 12c83a3a mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83a3f je 0x12c83a67 */
  if (C.zf) goto L_12c83a67;
  /* 12c83a41 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83a44 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83a46 je 0x12c83a67 */
  if (C.zf) goto L_12c83a67;
  /* 12c83a48 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83a4b je 0x12c83a67 */
  if (C.zf) goto L_12c83a67;
  /* 12c83a4d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c83a4f jne 0x12c83a92 */
  if (!C.zf) goto L_12c83a92;
  /* 12c83a51 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83a53 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83a54 mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c83a57 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83a59 call 0x12c83ad0 */
  push32(0x12c83a5eu); f_12c83ad0();
  /* 12c83a5e pop edi */
  EDI = (pop32());
  /* 12c83a5f mov eax, ebp */
  EAX = (EBP);
  /* 12c83a61 pop esi */
  ESI = (pop32());
  /* 12c83a62 pop ebp */
  EBP = (pop32());
  /* 12c83a63 pop ebx */
  EBX = (pop32());
  /* 12c83a64 ret 0xc */
  ESPCHK(0x12c838d0u, _esp0);
  ESP += 16; return;
L_12c83a67:;
  /* 12c83a67 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c83a69 jne 0x12c83a7d */
  if (!C.zf) goto L_12c83a7d;
  /* 12c83a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83a6d mov ecx, ebp */
  ECX = (EBP);
  /* 12c83a6f call 0x12c83ad0 */
  push32(0x12c83a74u); f_12c83ad0();
  /* 12c83a74 pop edi */
  EDI = (pop32());
  /* 12c83a75 mov eax, ebp */
  EAX = (EBP);
  /* 12c83a77 pop esi */
  ESI = (pop32());
  /* 12c83a78 pop ebp */
  EBP = (pop32());
  /* 12c83a79 pop ebx */
  EBX = (pop32());
  /* 12c83a7a ret 0xc */
  ESPCHK(0x12c838d0u, _esp0);
  ESP += 16; return;
L_12c83a7d:;
  /* 12c83a7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c83a80 cmp eax, 0x1f */
  { uint32_t _a=(EAX),_b=(0x1fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83a83 ja 0x12c83a89 */
  if ((!C.cf&&!C.zf)) goto L_12c83a89;
  /* 12c83a85 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83a87 jae 0x12c83a9a */
  if (!C.cf) goto L_12c83a9a;
L_12c83a89:;
  /* 12c83a89 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83a8b mov ecx, ebp */
  ECX = (EBP);
  /* 12c83a8d call 0x12c83ad0 */
  push32(0x12c83a92u); f_12c83ad0();
L_12c83a92:;
  /* 12c83a92 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83a94 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83a95 call 0x12c83d10 */
  push32(0x12c83a9au); f_12c83d10();
L_12c83a9a:;
  /* 12c83a9a mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c83a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83a9f jne 0x12c83aa6 */
  if (!C.zf) goto L_12c83aa6;
  /* 12c83aa1 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c83aa6:;
  /* 12c83aa6 mov edi, dword ptr [ebp + 4] */
  EDI = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83aa9 mov ecx, ebx */
  ECX = (EBX);
  /* 12c83aab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83aad mov eax, ecx */
  EAX = (ECX);
  /* 12c83aaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83ab2 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c83ab4 mov ecx, eax */
  ECX = (EAX);
  /* 12c83ab6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c83ab9 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c83abb mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83abe mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c83ac1 mov byte ptr [ebx + ecx], 0 */
  w8((uint32_t)(EBX + ECX*1), (0x0u));
L_12c83ac5:;
  /* 12c83ac5 pop edi */
  EDI = (pop32());
  /* 12c83ac6 mov eax, ebp */
  EAX = (EBP);
  /* 12c83ac8 pop esi */
  ESI = (pop32());
  /* 12c83ac9 pop ebp */
  EBP = (pop32());
  /* 12c83aca pop ebx */
  EBX = (pop32());
  /* 12c83acb ret 0xc */
  ESPCHK(0x12c838d0u, _esp0);
  ESP += 16; return;
}

/* FUN_10003ad0 @ 0x12c83ad0 (71 bytes, 25 insns) */
void f_12c83ad0(void) {
  FTRACE(0x12c83ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83ad0 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 12c83ad4 push esi */
  push32((uint32_t)(ESI));
  /* 12c83ad5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c83ad7 mov esi, ecx */
  ESI = (ECX);
  /* 12c83ad9 je 0x12c83afe */
  if (C.zf) goto L_12c83afe;
  /* 12c83adb mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c83ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83ae0 je 0x12c83afe */
  if (C.zf) goto L_12c83afe;
  /* 12c83ae2 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83ae5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c83ae6 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83ae8 je 0x12c83af5 */
  if (C.zf) goto L_12c83af5;
  /* 12c83aea cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83aed je 0x12c83af5 */
  if (C.zf) goto L_12c83af5;
  /* 12c83aef dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83af1 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c83af3 jmp 0x12c83afe */
  goto L_12c83afe;
L_12c83af5:;
  /* 12c83af5 push eax */
  push32((uint32_t)(EAX));
  /* 12c83af6 call 0x12c847d0 */
  push32(0x12c83afbu); f_12c847d0();
  /* 12c83afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c83afe:;
  /* 12c83afe mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 12c83b05 mov dword ptr [esi + 8], 0 */
  w32((uint32_t)(ESI + 0x8), (0x0u));
  /* 12c83b0c mov dword ptr [esi + 0xc], 0 */
  w32((uint32_t)(ESI + 0xc), (0x0u));
  /* 12c83b13 pop esi */
  ESI = (pop32());
  /* 12c83b14 ret 4 */
  ESPCHK(0x12c83ad0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003b20 @ 0x12c83b20 (157 bytes, 67 insns) */
void f_12c83b20(void) {
  FTRACE(0x12c83b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83b20 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83b21 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c83b25 push ebp */
  push32((uint32_t)(EBP));
  /* 12c83b26 cmp ebx, -3 */
  { uint32_t _a=(EBX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83b29 mov ebp, ecx */
  EBP = (ECX);
  /* 12c83b2b jbe 0x12c83b32 */
  if ((C.cf||C.zf)) goto L_12c83b32;
  /* 12c83b2d call 0x12c847db */
  push32(0x12c83b32u); f_12c847db();
L_12c83b32:;
  /* 12c83b32 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83b35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c83b37 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83b39 je 0x12c83b60 */
  if (C.zf) goto L_12c83b60;
  /* 12c83b3b mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83b3e test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83b40 je 0x12c83b60 */
  if (C.zf) goto L_12c83b60;
  /* 12c83b42 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83b45 je 0x12c83b60 */
  if (C.zf) goto L_12c83b60;
  /* 12c83b47 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83b49 jne 0x12c83b89 */
  if (!C.zf) goto L_12c83b89;
  /* 12c83b4b dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83b4d mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c83b50 mov dword ptr [ebp + 4], edx */
  w32((uint32_t)(EBP + 0x4), (EDX));
  /* 12c83b53 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c83b56 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c83b59 mov eax, ebp */
  EAX = (EBP);
  /* 12c83b5b pop ebp */
  EBP = (pop32());
  /* 12c83b5c pop ebx */
  EBX = (pop32());
  /* 12c83b5d ret 8 */
  ESPCHK(0x12c83b20u, _esp0);
  ESP += 12; return;
L_12c83b60:;
  /* 12c83b60 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83b62 jne 0x12c83b74 */
  if (!C.zf) goto L_12c83b74;
  /* 12c83b64 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83b66 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83b68 call 0x12c83ad0 */
  push32(0x12c83b6du); f_12c83ad0();
  /* 12c83b6d mov eax, ebp */
  EAX = (EBP);
  /* 12c83b6f pop ebp */
  EBP = (pop32());
  /* 12c83b70 pop ebx */
  EBX = (pop32());
  /* 12c83b71 ret 8 */
  ESPCHK(0x12c83b20u, _esp0);
  ESP += 12; return;
L_12c83b74:;
  /* 12c83b74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c83b77 cmp eax, 0x1f */
  { uint32_t _a=(EAX),_b=(0x1fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83b7a ja 0x12c83b80 */
  if ((!C.cf&&!C.zf)) goto L_12c83b80;
  /* 12c83b7c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83b7e jae 0x12c83b91 */
  if (!C.cf) goto L_12c83b91;
L_12c83b80:;
  /* 12c83b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83b82 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83b84 call 0x12c83ad0 */
  push32(0x12c83b89u); f_12c83ad0();
L_12c83b89:;
  /* 12c83b89 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83b8b push ebx */
  push32((uint32_t)(EBX));
  /* 12c83b8c call 0x12c83d10 */
  push32(0x12c83b91u); f_12c83d10();
L_12c83b91:;
  /* 12c83b91 mov ecx, ebx */
  ECX = (EBX);
  /* 12c83b93 push esi */
  push32((uint32_t)(ESI));
  /* 12c83b94 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c83b98 mov eax, ecx */
  EAX = (ECX);
  /* 12c83b9a push edi */
  push32((uint32_t)(EDI));
  /* 12c83b9b mov edi, dword ptr [ebp + 4] */
  EDI = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83b9e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83ba1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c83ba3 mov ecx, eax */
  ECX = (EAX);
  /* 12c83ba5 mov eax, ebp */
  EAX = (EBP);
  /* 12c83ba7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c83baa rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c83bac mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83baf pop edi */
  EDI = (pop32());
  /* 12c83bb0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c83bb3 pop esi */
  ESI = (pop32());
  /* 12c83bb4 mov byte ptr [ebx + ecx], 0 */
  w8((uint32_t)(EBX + ECX*1), (0x0u));
  /* 12c83bb8 pop ebp */
  EBP = (pop32());
  /* 12c83bb9 pop ebx */
  EBX = (pop32());
  /* 12c83bba ret 8 */
  ESPCHK(0x12c83b20u, _esp0);
  ESP += 12; return;
}

/* FUN_10003bc0 @ 0x12c83bc0 (17 bytes, 5 insns) */
void f_12c83bc0(void) {
  FTRACE(0x12c83bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83bc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c83bc4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c83bc7 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c83bca mov byte ptr [eax + ecx], 0 */
  w8((uint32_t)(EAX + ECX*1), (0x0u));
  /* 12c83bce ret 4 */
  ESPCHK(0x12c83bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003be0 @ 0x12c83be0 (280 bytes, 124 insns) */
void f_12c83be0(void) {
  FTRACE(0x12c83be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83be0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83be1 push esi */
  push32((uint32_t)(ESI));
  /* 12c83be2 push edi */
  push32((uint32_t)(EDI));
  /* 12c83be3 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c83be7 cmp edi, -3 */
  { uint32_t _a=(EDI),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83bea mov esi, ecx */
  ESI = (ECX);
  /* 12c83bec jbe 0x12c83bf3 */
  if ((C.cf||C.zf)) goto L_12c83bf3;
  /* 12c83bee call 0x12c847db */
  push32(0x12c83bf3u); f_12c847db();
L_12c83bf3:;
  /* 12c83bf3 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c83bf6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c83bf8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83bfa je 0x12c83c26 */
  if (C.zf) goto L_12c83c26;
  /* 12c83bfc mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83bff cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c01 je 0x12c83c26 */
  if (C.zf) goto L_12c83c26;
  /* 12c83c03 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c06 je 0x12c83c26 */
  if (C.zf) goto L_12c83c26;
  /* 12c83c08 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c0a jne 0x12c83ce8 */
  if (!C.zf) goto L_12c83ce8;
  /* 12c83c10 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83c12 pop edi */
  EDI = (pop32());
  /* 12c83c13 mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c83c16 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c83c19 mov dword ptr [esi + 8], ebx */
  w32((uint32_t)(ESI + 0x8), (EBX));
  /* 12c83c1c mov dword ptr [esi + 0xc], ebx */
  w32((uint32_t)(ESI + 0xc), (EBX));
  /* 12c83c1f pop esi */
  ESI = (pop32());
  /* 12c83c20 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c83c22 pop ebx */
  EBX = (pop32());
  /* 12c83c23 ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
L_12c83c26:;
  /* 12c83c26 mov cl, byte ptr [esp + 0x14] */
  CL = (r8((uint32_t)(ESP + 0x14)));
  /* 12c83c2a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c2c jne 0x12c83c83 */
  if (!C.zf) goto L_12c83c83;
  /* 12c83c2e cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c30 je 0x12c83c72 */
  if (C.zf) goto L_12c83c72;
  /* 12c83c32 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c34 je 0x12c83c61 */
  if (C.zf) goto L_12c83c61;
  /* 12c83c36 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83c39 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c83c3a cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c3c je 0x12c83c58 */
  if (C.zf) goto L_12c83c58;
  /* 12c83c3e cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c41 je 0x12c83c58 */
  if (C.zf) goto L_12c83c58;
  /* 12c83c43 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83c45 pop edi */
  EDI = (pop32());
  /* 12c83c46 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c83c48 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c83c4b mov dword ptr [esi + 8], ebx */
  w32((uint32_t)(ESI + 0x8), (EBX));
  /* 12c83c4e mov dword ptr [esi + 0xc], ebx */
  w32((uint32_t)(ESI + 0xc), (EBX));
  /* 12c83c51 pop esi */
  ESI = (pop32());
  /* 12c83c52 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c83c54 pop ebx */
  EBX = (pop32());
  /* 12c83c55 ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
L_12c83c58:;
  /* 12c83c58 push eax */
  push32((uint32_t)(EAX));
  /* 12c83c59 call 0x12c847d0 */
  push32(0x12c83c5eu); f_12c847d0();
  /* 12c83c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c83c61:;
  /* 12c83c61 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c83c64 mov dword ptr [esi + 8], ebx */
  w32((uint32_t)(ESI + 0x8), (EBX));
  /* 12c83c67 mov dword ptr [esi + 0xc], ebx */
  w32((uint32_t)(ESI + 0xc), (EBX));
  /* 12c83c6a pop edi */
  EDI = (pop32());
  /* 12c83c6b pop esi */
  ESI = (pop32());
  /* 12c83c6c xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c83c6e pop ebx */
  EBX = (pop32());
  /* 12c83c6f ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
L_12c83c72:;
  /* 12c83c72 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c74 je 0x12c83c7b */
  if (C.zf) goto L_12c83c7b;
  /* 12c83c76 mov dword ptr [esi + 8], ebx */
  w32((uint32_t)(ESI + 0x8), (EBX));
  /* 12c83c79 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_12c83c7b:;
  /* 12c83c7b pop edi */
  EDI = (pop32());
  /* 12c83c7c pop esi */
  ESI = (pop32());
  /* 12c83c7d xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c83c7f pop ebx */
  EBX = (pop32());
  /* 12c83c80 ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
L_12c83c83:;
  /* 12c83c83 cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c85 je 0x12c83ce3 */
  if (C.zf) goto L_12c83ce3;
  /* 12c83c87 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c83c8a cmp ecx, 0x1f */
  { uint32_t _a=(ECX),_b=(0x1fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c8d ja 0x12c83c93 */
  if ((!C.cf&&!C.zf)) goto L_12c83c93;
  /* 12c83c8f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c91 jae 0x12c83cf0 */
  if (!C.cf) goto L_12c83cf0;
L_12c83c93:;
  /* 12c83c93 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83c95 je 0x12c83cca */
  if (C.zf) goto L_12c83cca;
  /* 12c83c97 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83c9a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c83c9b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83c9d je 0x12c83cc1 */
  if (C.zf) goto L_12c83cc1;
  /* 12c83c9f cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83ca2 je 0x12c83cc1 */
  if (C.zf) goto L_12c83cc1;
  /* 12c83ca4 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83ca6 push edi */
  push32((uint32_t)(EDI));
  /* 12c83ca7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c83ca9 mov ecx, esi */
  ECX = (ESI);
  /* 12c83cab mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c83cae mov dword ptr [esi + 8], ebx */
  w32((uint32_t)(ESI + 0x8), (EBX));
  /* 12c83cb1 mov dword ptr [esi + 0xc], ebx */
  w32((uint32_t)(ESI + 0xc), (EBX));
  /* 12c83cb4 call 0x12c83d10 */
  push32(0x12c83cb9u); f_12c83d10();
  /* 12c83cb9 pop edi */
  EDI = (pop32());
  /* 12c83cba pop esi */
  ESI = (pop32());
  /* 12c83cbb mov al, 1 */
  AL = (0x1u);
  /* 12c83cbd pop ebx */
  EBX = (pop32());
  /* 12c83cbe ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
L_12c83cc1:;
  /* 12c83cc1 push eax */
  push32((uint32_t)(EAX));
  /* 12c83cc2 call 0x12c847d0 */
  push32(0x12c83cc7u); f_12c847d0();
  /* 12c83cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c83cca:;
  /* 12c83cca mov ecx, esi */
  ECX = (ESI);
  /* 12c83ccc push edi */
  push32((uint32_t)(EDI));
  /* 12c83ccd mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 12c83cd0 mov dword ptr [esi + 8], ebx */
  w32((uint32_t)(ESI + 0x8), (EBX));
  /* 12c83cd3 mov dword ptr [esi + 0xc], ebx */
  w32((uint32_t)(ESI + 0xc), (EBX));
  /* 12c83cd6 call 0x12c83d10 */
  push32(0x12c83cdbu); f_12c83d10();
  /* 12c83cdb pop edi */
  EDI = (pop32());
  /* 12c83cdc pop esi */
  ESI = (pop32());
  /* 12c83cdd mov al, 1 */
  AL = (0x1u);
  /* 12c83cdf pop ebx */
  EBX = (pop32());
  /* 12c83ce0 ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
L_12c83ce3:;
  /* 12c83ce3 cmp dword ptr [esi + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83ce6 jae 0x12c83cf0 */
  if (!C.cf) goto L_12c83cf0;
L_12c83ce8:;
  /* 12c83ce8 mov ecx, esi */
  ECX = (ESI);
  /* 12c83cea push edi */
  push32((uint32_t)(EDI));
  /* 12c83ceb call 0x12c83d10 */
  push32(0x12c83cf0u); f_12c83d10();
L_12c83cf0:;
  /* 12c83cf0 pop edi */
  EDI = (pop32());
  /* 12c83cf1 pop esi */
  ESI = (pop32());
  /* 12c83cf2 mov al, 1 */
  AL = (0x1u);
  /* 12c83cf4 pop ebx */
  EBX = (pop32());
  /* 12c83cf5 ret 8 */
  ESPCHK(0x12c83be0u, _esp0);
  ESP += 12; return;
}

/* FUN_10003d00 @ 0x12c83d00 (6 bytes, 2 insns) */
void f_12c83d00(void) {
  FTRACE(0x12c83d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83d00 mov eax, 0xfffffffd */
  EAX = (0xfffffffdu);
  /* 12c83d05 ret  */
  ESPCHK(0x12c83d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x12c83d10 (89 bytes, 32 insns) */
void f_12c83d10(void) {
  FTRACE(0x12c83d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c83d11 mov ebp, esp */
  EBP = (ESP);
  /* 12c83d13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c83d15 push 0x12c8d5d0 */
  push32((uint32_t)(0x12c8d5d0u));
  /* 12c83d1a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c83d20 push eax */
  push32((uint32_t)(EAX));
  /* 12c83d21 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c83d28 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83d2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c83d2e push ebx */
  push32((uint32_t)(EBX));
  /* 12c83d2f push esi */
  push32((uint32_t)(ESI));
  /* 12c83d30 mov esi, eax */
  ESI = (EAX);
  /* 12c83d32 or esi, 0x1f */
  { uint32_t _r=(ESI)|(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 12c83d35 push edi */
  push32((uint32_t)(EDI));
  /* 12c83d36 mov ebx, ecx */
  EBX = (ECX);
  /* 12c83d38 cmp esi, -3 */
  { uint32_t _a=(ESI),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83d3b mov dword ptr [ebp - 0x10], esp */
  w32((uint32_t)(EBP + -0x10), (ESP));
  /* 12c83d3e mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 12c83d41 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 12c83d44 jbe 0x12c83d4b */
  if ((C.cf||C.zf)) goto L_12c83d4b;
  /* 12c83d46 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c83d49 mov esi, eax */
  ESI = (EAX);
L_12c83d4b:;
  /* 12c83d4b lea eax, [esi + 2] */
  EAX = ((uint32_t)(ESI + 0x2));
  /* 12c83d4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c83d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83d57 jge 0x12c83d5b */
  if ((C.sf==C.of)) goto L_12c83d5b;
  /* 12c83d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c83d5b:;
  /* 12c83d5b push eax */
  push32((uint32_t)(EAX));
  /* 12c83d5c call 0x12c8561a */
  push32(0x12c83d61u); f_12c8561a();
  /* 12c83d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83d64 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c83d67 jmp 0x12c83d90 */
  f_12c83d90(); return;
}

/* Catch@10003d69 @ 0x12c83d69 (33 bytes, 12 insns) */
void f_12c83d69(void) {
  FTRACE(0x12c83d69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c83d6c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c83d6f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83d74 jge 0x12c83d78 */
  if ((C.sf==C.of)) goto L_12c83d78;
  /* 12c83d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c83d78:;
  /* 12c83d78 push eax */
  push32((uint32_t)(EAX));
  /* 12c83d79 call 0x12c8561a */
  push32(0x12c83d7eu); f_12c8561a();
  /* 12c83d7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c83d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83d84 mov eax, 0x12c83d8a */
  EAX = (0x12c83d8au);
  /* 12c83d89 ret  */
  ESPCHK(0x12c83d69u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d90 @ 0x12c83d90 (135 bytes, 53 insns) */
void f_12c83d90(void) {
  FTRACE(0x12c83d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83d90 mov eax, dword ptr [ebx + 8] */
  EAX = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83d95 jbe 0x12c83db9 */
  if ((C.cf||C.zf)) goto L_12c83db9;
  /* 12c83d97 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83d99 jbe 0x12c83d9d */
  if ((C.cf||C.zf)) goto L_12c83d9d;
  /* 12c83d9b mov eax, esi */
  EAX = (ESI);
L_12c83d9d:;
  /* 12c83d9d mov esi, dword ptr [ebx + 4] */
  ESI = (r32((uint32_t)(EBX + 0x4)));
  /* 12c83da0 mov ecx, eax */
  ECX = (EAX);
  /* 12c83da2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c83da5 mov edx, ecx */
  EDX = (ECX);
  /* 12c83da7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83daa lea edi, [eax + 1] */
  EDI = ((uint32_t)(EAX + 0x1));
  /* 12c83dad rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c83daf mov ecx, edx */
  ECX = (EDX);
  /* 12c83db1 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c83db4 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c83db6 mov esi, dword ptr [ebp - 0x14] */
  ESI = (r32((uint32_t)(EBP + -0x14)));
L_12c83db9:;
  /* 12c83db9 mov eax, dword ptr [ebx + 4] */
  EAX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c83dbc mov edi, dword ptr [ebx + 8] */
  EDI = (r32((uint32_t)(EBX + 0x8)));
  /* 12c83dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c83dc1 je 0x12c83ddf */
  if (C.zf) goto L_12c83ddf;
  /* 12c83dc3 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83dc6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c83dc7 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83dc9 je 0x12c83dd6 */
  if (C.zf) goto L_12c83dd6;
  /* 12c83dcb cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83dce je 0x12c83dd6 */
  if (C.zf) goto L_12c83dd6;
  /* 12c83dd0 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83dd2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c83dd4 jmp 0x12c83ddf */
  goto L_12c83ddf;
L_12c83dd6:;
  /* 12c83dd6 push eax */
  push32((uint32_t)(EAX));
  /* 12c83dd7 call 0x12c847d0 */
  push32(0x12c83ddcu); f_12c847d0();
  /* 12c83ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c83ddf:;
  /* 12c83ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c83de2 mov dword ptr [ebx + 8], 0 */
  w32((uint32_t)(EBX + 0x8), (0x0u));
  /* 12c83de9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c83dea cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83dec mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c83def mov byte ptr [eax - 1], 0 */
  w8((uint32_t)(EAX + -0x1), (0x0u));
  /* 12c83df3 mov dword ptr [ebx + 0xc], esi */
  w32((uint32_t)(EBX + 0xc), (ESI));
  /* 12c83df6 ja 0x12c83dfa */
  if ((!C.cf&&!C.zf)) goto L_12c83dfa;
  /* 12c83df8 mov esi, edi */
  ESI = (EDI);
L_12c83dfa:;
  /* 12c83dfa mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 12c83dfd mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 12c83e00 pop edi */
  EDI = (pop32());
  /* 12c83e01 mov byte ptr [esi + ecx], 0 */
  w8((uint32_t)(ESI + ECX*1), (0x0u));
  /* 12c83e05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c83e08 pop esi */
  ESI = (pop32());
  /* 12c83e09 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c83e10 pop ebx */
  EBX = (pop32());
  /* 12c83e11 mov esp, ebp */
  ESP = (EBP);
  /* 12c83e13 pop ebp */
  EBP = (pop32());
  /* 12c83e14 ret 4 */
  ESPCHK(0x12c83d90u, _esp0);
  ESP += 8; return;
}

/* FUN_10003e20 @ 0x12c83e20 (213 bytes, 93 insns) */
void f_12c83e20(void) {
  FTRACE(0x12c83e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83e20 push ecx */
  push32((uint32_t)(ECX));
  /* 12c83e21 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83e22 push ebp */
  push32((uint32_t)(EBP));
  /* 12c83e23 mov ebp, ecx */
  EBP = (ECX);
  /* 12c83e25 push esi */
  push32((uint32_t)(ESI));
  /* 12c83e26 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c83e28 push edi */
  push32((uint32_t)(EDI));
  /* 12c83e29 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83e2c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83e2e je 0x12c83eef */
  if (C.zf) goto L_12c83eef;
  /* 12c83e34 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83e37 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83e39 je 0x12c83eef */
  if (C.zf) goto L_12c83eef;
  /* 12c83e3f cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83e42 je 0x12c83eef */
  if (C.zf) goto L_12c83eef;
  /* 12c83e48 mov bl, cl */
  BL = (CL);
  /* 12c83e4a mov edi, eax */
  EDI = (EAX);
  /* 12c83e4c dec bl */
  { uint32_t _r=(BL)-1; BL = (_r); fl_dec(_r,8); }
  /* 12c83e4e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c83e51 mov byte ptr [eax - 1], bl */
  w8((uint32_t)(EAX + -0x1), (BL));
  /* 12c83e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c83e56 mov dword ptr [esp + 0x10], edi */
  w32((uint32_t)(ESP + 0x10), (EDI));
  /* 12c83e5a mov dword ptr [ebp + 4], esi */
  w32((uint32_t)(EBP + 0x4), (ESI));
  /* 12c83e5d mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 12c83e60 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c83e63 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c83e65 not ecx */
  ECX = (~(ECX));
  /* 12c83e67 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c83e68 mov ebx, ecx */
  EBX = (ECX);
  /* 12c83e6a cmp ebx, -3 */
  { uint32_t _a=(EBX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83e6d jbe 0x12c83e74 */
  if ((C.cf||C.zf)) goto L_12c83e74;
  /* 12c83e6f call 0x12c847db */
  push32(0x12c83e74u); f_12c847db();
L_12c83e74:;
  /* 12c83e74 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83e77 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83e79 je 0x12c83e9e */
  if (C.zf) goto L_12c83e9e;
  /* 12c83e7b mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c83e7e test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c83e80 je 0x12c83e9e */
  if (C.zf) goto L_12c83e9e;
  /* 12c83e82 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c83e85 je 0x12c83e9e */
  if (C.zf) goto L_12c83e9e;
  /* 12c83e87 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83e89 jne 0x12c83ec6 */
  if (!C.zf) goto L_12c83ec6;
  /* 12c83e8b dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c83e8d push esi */
  push32((uint32_t)(ESI));
  /* 12c83e8e mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c83e91 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83e93 call 0x12c83ad0 */
  push32(0x12c83e98u); f_12c83ad0();
  /* 12c83e98 pop edi */
  EDI = (pop32());
  /* 12c83e99 pop esi */
  ESI = (pop32());
  /* 12c83e9a pop ebp */
  EBP = (pop32());
  /* 12c83e9b pop ebx */
  EBX = (pop32());
  /* 12c83e9c pop ecx */
  ECX = (pop32());
  /* 12c83e9d ret  */
  ESPCHK(0x12c83e20u, _esp0);
  ESP += 4; return;
L_12c83e9e:;
  /* 12c83e9e cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83ea0 jne 0x12c83eb1 */
  if (!C.zf) goto L_12c83eb1;
  /* 12c83ea2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83ea4 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83ea6 call 0x12c83ad0 */
  push32(0x12c83eabu); f_12c83ad0();
  /* 12c83eab pop edi */
  EDI = (pop32());
  /* 12c83eac pop esi */
  ESI = (pop32());
  /* 12c83ead pop ebp */
  EBP = (pop32());
  /* 12c83eae pop ebx */
  EBX = (pop32());
  /* 12c83eaf pop ecx */
  ECX = (pop32());
  /* 12c83eb0 ret  */
  ESPCHK(0x12c83e20u, _esp0);
  ESP += 4; return;
L_12c83eb1:;
  /* 12c83eb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c83eb4 cmp eax, 0x1f */
  { uint32_t _a=(EAX),_b=(0x1fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83eb7 ja 0x12c83ebd */
  if ((!C.cf&&!C.zf)) goto L_12c83ebd;
  /* 12c83eb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83ebb jae 0x12c83ece */
  if (!C.cf) goto L_12c83ece;
L_12c83ebd:;
  /* 12c83ebd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83ebf mov ecx, ebp */
  ECX = (EBP);
  /* 12c83ec1 call 0x12c83ad0 */
  push32(0x12c83ec6u); f_12c83ad0();
L_12c83ec6:;
  /* 12c83ec6 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83ec8 push ebx */
  push32((uint32_t)(EBX));
  /* 12c83ec9 call 0x12c83d10 */
  push32(0x12c83eceu); f_12c83d10();
L_12c83ece:;
  /* 12c83ece mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c83ed2 mov edi, dword ptr [ebp + 4] */
  EDI = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83ed5 mov ecx, ebx */
  ECX = (EBX);
  /* 12c83ed7 mov eax, ecx */
  EAX = (ECX);
  /* 12c83ed9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83edc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c83ede mov ecx, eax */
  ECX = (EAX);
  /* 12c83ee0 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c83ee3 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c83ee5 mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c83ee8 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c83eeb mov byte ptr [ebx + ecx], 0 */
  w8((uint32_t)(EBX + ECX*1), (0x0u));
L_12c83eef:;
  /* 12c83eef pop edi */
  EDI = (pop32());
  /* 12c83ef0 pop esi */
  ESI = (pop32());
  /* 12c83ef1 pop ebp */
  EBP = (pop32());
  /* 12c83ef2 pop ebx */
  EBX = (pop32());
  /* 12c83ef3 pop ecx */
  ECX = (pop32());
  /* 12c83ef4 ret  */
  ESPCHK(0x12c83e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f40 @ 0x12c83f40 (479 bytes, 160 insns) */
void f_12c83f40(void) {
  FTRACE(0x12c83f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c83f40 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c83f46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c83f48 push 0x12c8d5eb */
  push32((uint32_t)(0x12c8d5ebu));
  /* 12c83f4d push eax */
  push32((uint32_t)(EAX));
  /* 12c83f4e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c83f55 sub esp, 0x418 */
  { uint32_t _a=(ESP),_b=(0x418u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c83f5b push ebx */
  push32((uint32_t)(EBX));
  /* 12c83f5c push esi */
  push32((uint32_t)(ESI));
  /* 12c83f5d push edi */
  push32((uint32_t)(EDI));
  /* 12c83f5e mov edi, dword ptr [esp + 0x434] */
  EDI = (r32((uint32_t)(ESP + 0x434)));
  /* 12c83f65 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c83f67 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83f69 jne 0x12c83f73 */
  if (!C.zf) goto L_12c83f73;
  /* 12c83f6b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c83f6e jmp 0x12c84107 */
  goto L_12c84107;
L_12c83f73:;
  /* 12c83f73 push 0x12c90544 */
  push32((uint32_t)(0x12c90544u));
  /* 12c83f78 push edi */
  push32((uint32_t)(EDI));
  /* 12c83f79 call 0x12c84db0 */
  push32(0x12c83f7eu); f_12c84db0();
  /* 12c83f7e mov esi, eax */
  ESI = (EAX);
  /* 12c83f80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83f83 cmp esi, 0x400 */
  { uint32_t _a=(ESI),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c83f89 mov dword ptr [esp + 0x20], esi */
  w32((uint32_t)(ESP + 0x20), (ESI));
  /* 12c83f8d jle 0x12c83f97 */
  if ((C.zf||C.sf!=C.of)) goto L_12c83f97;
  /* 12c83f8f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c83f92 jmp 0x12c84107 */
  goto L_12c84107;
L_12c83f97:;
  /* 12c83f97 push ebp */
  push32((uint32_t)(EBP));
  /* 12c83f98 push esi */
  push32((uint32_t)(ESI));
  /* 12c83f99 lea eax, [esp + 0x2c] */
  EAX = ((uint32_t)(ESP + 0x2c));
  /* 12c83f9d push edi */
  push32((uint32_t)(EDI));
  /* 12c83f9e push eax */
  push32((uint32_t)(EAX));
  /* 12c83f9f call 0x12c85630 */
  push32(0x12c83fa4u); f_12c85630();
  /* 12c83fa4 mov cl, byte ptr [esp + 0x2f] */
  CL = (r8((uint32_t)(ESP + 0x2f)));
  /* 12c83fa8 lea edi, [esp + 0x34] */
  EDI = ((uint32_t)(ESP + 0x34));
  /* 12c83fac mov byte ptr [esp + 0x1c], cl */
  w8((uint32_t)(ESP + 0x1c), (CL));
  /* 12c83fb0 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c83fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c83fb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c83fb8 mov byte ptr [esp + esi + 0x28], 0 */
  w8((uint32_t)(ESP + ESI*1 + 0x28), (0x0u));
  /* 12c83fbd mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 12c83fc1 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c83fc3 not ecx */
  ECX = (~(ECX));
  /* 12c83fc5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c83fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c83fc8 mov ebp, ecx */
  EBP = (ECX);
  /* 12c83fca lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c83fce push ebp */
  push32((uint32_t)(EBP));
  /* 12c83fcf mov dword ptr [esp + 0x20], ebx */
  w32((uint32_t)(ESP + 0x20), (EBX));
  /* 12c83fd3 mov dword ptr [esp + 0x24], ebx */
  w32((uint32_t)(ESP + 0x24), (EBX));
  /* 12c83fd7 call 0x12c83be0 */
  push32(0x12c83fdcu); f_12c83be0();
  /* 12c83fdc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c83fde je 0x12c84004 */
  if (C.zf) goto L_12c84004;
  /* 12c83fe0 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c83fe4 mov ecx, ebp */
  ECX = (EBP);
  /* 12c83fe6 mov edx, ecx */
  EDX = (ECX);
  /* 12c83fe8 lea esi, [esp + 0x28] */
  ESI = ((uint32_t)(ESP + 0x28));
  /* 12c83fec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c83fef rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c83ff1 mov ecx, edx */
  ECX = (EDX);
  /* 12c83ff3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c83ff6 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c83ff8 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c83ffc mov dword ptr [esp + 0x18], ebp */
  w32((uint32_t)(ESP + 0x18), (EBP));
  /* 12c84000 mov byte ptr [eax + ebp], 0 */
  w8((uint32_t)(EAX + EBP*1), (0x0u));
L_12c84004:;
  /* 12c84004 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c84008 mov dword ptr [esp + 0x430], ebx */
  w32((uint32_t)(ESP + 0x430), (EBX));
  /* 12c8400f mov ebp, eax */
  EBP = (EAX);
  /* 12c84011 cmp ebp, -1 */
  { uint32_t _a=(EBP),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84014 jbe 0x12c84019 */
  if ((C.cf||C.zf)) goto L_12c84019;
  /* 12c84016 or ebp, 0xffffffff */
  { uint32_t _r=(EBP)|(0xffffffffu); EBP = (_r); fl_logic(_r,32); }
L_12c84019:;
  /* 12c84019 mov ebx, dword ptr [esp + 0x43c] */
  EBX = (r32((uint32_t)(ESP + 0x43c)));
  /* 12c84020 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c84024 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84026 jne 0x12c84042 */
  if (!C.zf) goto L_12c84042;
  /* 12c84028 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8402a push ebp */
  push32((uint32_t)(EBP));
  /* 12c8402b mov ecx, ebx */
  ECX = (EBX);
  /* 12c8402d call 0x12c84590 */
  push32(0x12c84032u); f_12c84590();
  /* 12c84032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84034 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84036 mov ecx, ebx */
  ECX = (EBX);
  /* 12c84038 call 0x12c84590 */
  push32(0x12c8403du); f_12c84590();
  /* 12c8403d jmp 0x12c840c4 */
  goto L_12c840c4;
L_12c84042:;
  /* 12c84042 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 12c84044 jbe 0x12c8408e */
  if ((C.cf||C.zf)) goto L_12c8408e;
  /* 12c84046 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84048 jne 0x12c8408e */
  if (!C.zf) goto L_12c8408e;
  /* 12c8404a mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8404e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84050 jne 0x12c84057 */
  if (!C.zf) goto L_12c84057;
  /* 12c84052 mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c84057:;
  /* 12c84057 cmp byte ptr [eax - 1], 0xfe */
  { uint32_t _a=(r8((uint32_t)(EAX + -0x1))),_b=(0xfeu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8405b jae 0x12c8408e */
  if (!C.cf) goto L_12c8408e;
  /* 12c8405d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8405f mov ecx, ebx */
  ECX = (EBX);
  /* 12c84061 call 0x12c83ad0 */
  push32(0x12c84066u); f_12c83ad0();
  /* 12c84066 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8406a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8406c jne 0x12c84073 */
  if (!C.zf) goto L_12c84073;
  /* 12c8406e mov eax, 0x12c8e168 */
  EAX = (0x12c8e168u);
L_12c84073:;
  /* 12c84073 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c84077 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c8407b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c8407e mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 12c84081 mov dword ptr [ebx + 0xc], ecx */
  w32((uint32_t)(EBX + 0xc), (ECX));
  /* 12c84084 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c84087 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 12c84089 mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c8408c jmp 0x12c840c4 */
  goto L_12c840c4;
L_12c8408e:;
  /* 12c8408e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84090 push ebp */
  push32((uint32_t)(EBP));
  /* 12c84091 mov ecx, ebx */
  ECX = (EBX);
  /* 12c84093 call 0x12c83be0 */
  push32(0x12c84098u); f_12c83be0();
  /* 12c84098 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8409a je 0x12c840c4 */
  if (C.zf) goto L_12c840c4;
  /* 12c8409c mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c840a0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c840a2 jne 0x12c840a9 */
  if (!C.zf) goto L_12c840a9;
  /* 12c840a4 mov esi, 0x12c8e168 */
  ESI = (0x12c8e168u);
L_12c840a9:;
  /* 12c840a9 mov edi, dword ptr [ebx + 4] */
  EDI = (r32((uint32_t)(EBX + 0x4)));
  /* 12c840ac mov ecx, ebp */
  ECX = (EBP);
  /* 12c840ae mov edx, ecx */
  EDX = (ECX);
  /* 12c840b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c840b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c840b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c840b6 mov ecx, edx */
  ECX = (EDX);
  /* 12c840b8 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c840bb rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c840bd mov ecx, ebx */
  ECX = (EBX);
  /* 12c840bf call 0x12c83bc0 */
  push32(0x12c840c4u); f_12c83bc0();
L_12c840c4:;
  /* 12c840c4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c840c8 pop ebp */
  EBP = (pop32());
  /* 12c840c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c840cb je 0x12c840e9 */
  if (C.zf) goto L_12c840e9;
  /* 12c840cd mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c840d0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c840d1 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c840d3 je 0x12c840e0 */
  if (C.zf) goto L_12c840e0;
  /* 12c840d5 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c840d8 je 0x12c840e0 */
  if (C.zf) goto L_12c840e0;
  /* 12c840da dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c840dc mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c840de jmp 0x12c840e9 */
  goto L_12c840e9;
L_12c840e0:;
  /* 12c840e0 push eax */
  push32((uint32_t)(EAX));
  /* 12c840e1 call 0x12c847d0 */
  push32(0x12c840e6u); f_12c847d0();
  /* 12c840e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c840e9:;
  /* 12c840e9 mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 12c840ed mov eax, dword ptr [esp + 0x434] */
  EAX = (r32((uint32_t)(ESP + 0x434)));
  /* 12c840f4 push 0x12c90540 */
  push32((uint32_t)(0x12c90540u));
  /* 12c840f9 lea ecx, [esi + eax] */
  ECX = ((uint32_t)(ESI + EAX*1));
  /* 12c840fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c840fd call 0x12c857b0 */
  push32(0x12c84102u); f_12c857b0();
  /* 12c84102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84105 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c84107:;
  /* 12c84107 mov ecx, dword ptr [esp + 0x424] */
  ECX = (r32((uint32_t)(ESP + 0x424)));
  /* 12c8410e pop edi */
  EDI = (pop32());
  /* 12c8410f pop esi */
  ESI = (pop32());
  /* 12c84110 pop ebx */
  EBX = (pop32());
  /* 12c84111 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84118 add esp, 0x424 */
  { uint32_t _a=(ESP),_b=(0x424u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8411e ret  */
  ESPCHK(0x12c83f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x12c84120 (54 bytes, 23 insns) */
void f_12c84120(void) {
  FTRACE(0x12c84120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84120 push esi */
  push32((uint32_t)(ESI));
  /* 12c84121 push edi */
  push32((uint32_t)(EDI));
  /* 12c84122 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84126 mov esi, ecx */
  ESI = (ECX);
  /* 12c84128 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
  /* 12c8412b push eax */
  push32((uint32_t)(EAX));
  /* 12c8412c call 0x12c8561a */
  push32(0x12c84131u); f_12c8561a();
  /* 12c84131 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84135 push edi */
  push32((uint32_t)(EDI));
  /* 12c84136 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84137 push eax */
  push32((uint32_t)(EAX));
  /* 12c84138 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c8413a call 0x12c85630 */
  push32(0x12c8413fu); f_12c85630();
  /* 12c8413f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12c84141 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c84143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84146 mov byte ptr [edi + edx], al */
  w8((uint32_t)(EDI + EDX*1), (AL));
  /* 12c84149 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c8414c mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 12c8414f mov eax, esi */
  EAX = (ESI);
  /* 12c84151 pop edi */
  EDI = (pop32());
  /* 12c84152 pop esi */
  ESI = (pop32());
  /* 12c84153 ret 8 */
  ESPCHK(0x12c84120u, _esp0);
  ESP += 12; return;
}

/* FUN_10004160 @ 0x12c84160 (10 bytes, 5 insns) */
void f_12c84160(void) {
  FTRACE(0x12c84160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84160 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c84162 push eax */
  push32((uint32_t)(EAX));
  /* 12c84163 call 0x12c847d0 */
  push32(0x12c84168u); f_12c847d0();
  /* 12c84168 pop ecx */
  ECX = (pop32());
  /* 12c84169 ret  */
  ESPCHK(0x12c84160u, _esp0);
  ESP += 4; return;
}

/* FUN_10004170 @ 0x12c84170 (183 bytes, 63 insns) */
void f_12c84170(void) {
  FTRACE(0x12c84170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84170 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c84176 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c84178 push 0x12c8d608 */
  push32((uint32_t)(0x12c8d608u));
  /* 12c8417d push eax */
  push32((uint32_t)(EAX));
  /* 12c8417e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c84185 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84189 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8418c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8418d push esi */
  push32((uint32_t)(ESI));
  /* 12c8418e mov esi, ecx */
  ESI = (ECX);
  /* 12c84190 push eax */
  push32((uint32_t)(EAX));
  /* 12c84191 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c84193 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84194 call 0x12c85c30 */
  push32(0x12c84199u); f_12c85c30();
  /* 12c84199 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8419b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8419e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c841a0 jne 0x12c841bd */
  if (!C.zf) goto L_12c841bd;
  /* 12c841a2 mov eax, 1 */
  EAX = (0x1u);
  /* 12c841a7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c841aa pop esi */
  ESI = (pop32());
  /* 12c841ab pop ebx */
  EBX = (pop32());
  /* 12c841ac mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c841b0 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c841b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c841ba ret 4 */
  ESPCHK(0x12c84170u, _esp0);
  ESP += 8; return;
L_12c841bd:;
  /* 12c841bd mov dl, byte ptr [esp + 0x28] */
  DL = (r8((uint32_t)(ESP + 0x28)));
  /* 12c841c1 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 12c841c4 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 12c841c8 mov dword ptr [esp + 0xc], ebx */
  w32((uint32_t)(ESP + 0xc), (EBX));
  /* 12c841cc mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 12c841d0 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 12c841d4 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12c841d8 mov dword ptr [esp + 0x20], ebx */
  w32((uint32_t)(ESP + 0x20), (EBX));
  /* 12c841dc push ecx */
  push32((uint32_t)(ECX));
  /* 12c841dd push eax */
  push32((uint32_t)(EAX));
  /* 12c841de call 0x12c83f40 */
  push32(0x12c841e3u); f_12c83f40();
  /* 12c841e3 mov edx, dword ptr [esi + 8] */
  EDX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c841e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c841e9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c841eb mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c841ef cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c841f1 mov dword ptr [esi + 8], edx */
  w32((uint32_t)(ESI + 0x8), (EDX));
  /* 12c841f4 je 0x12c84212 */
  if (C.zf) goto L_12c84212;
  /* 12c841f6 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c841f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c841fa cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c841fc je 0x12c84209 */
  if (C.zf) goto L_12c84209;
  /* 12c841fe cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84201 je 0x12c84209 */
  if (C.zf) goto L_12c84209;
  /* 12c84203 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c84205 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c84207 jmp 0x12c84212 */
  goto L_12c84212;
L_12c84209:;
  /* 12c84209 push eax */
  push32((uint32_t)(EAX));
  /* 12c8420a call 0x12c847d0 */
  push32(0x12c8420fu); f_12c847d0();
  /* 12c8420f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c84212:;
  /* 12c84212 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c84216 pop esi */
  ESI = (pop32());
  /* 12c84217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c84219 pop ebx */
  EBX = (pop32());
  /* 12c8421a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84221 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84224 ret 4 */
  ESPCHK(0x12c84170u, _esp0);
  ESP += 8; return;
}

/* FUN_10004230 @ 0x12c84230 (230 bytes, 79 insns) */
void f_12c84230(void) {
  FTRACE(0x12c84230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84230 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c84236 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c84238 push 0x12c8d628 */
  push32((uint32_t)(0x12c8d628u));
  /* 12c8423d push eax */
  push32((uint32_t)(EAX));
  /* 12c8423e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c84245 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84248 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c8424c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8424d push esi */
  push32((uint32_t)(ESI));
  /* 12c8424e push edi */
  push32((uint32_t)(EDI));
  /* 12c8424f mov edi, ecx */
  EDI = (ECX);
  /* 12c84251 push eax */
  push32((uint32_t)(EAX));
  /* 12c84252 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c84254 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84255 call 0x12c85c30 */
  push32(0x12c8425au); f_12c85c30();
  /* 12c8425a mov esi, eax */
  ESI = (EAX);
  /* 12c8425c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8425e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84261 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84263 jne 0x12c84280 */
  if (!C.zf) goto L_12c84280;
  /* 12c84265 mov dword ptr [edi + 4], 1 */
  w32((uint32_t)(EDI + 0x4), (0x1u));
  /* 12c8426c pop edi */
  EDI = (pop32());
  /* 12c8426d pop esi */
  ESI = (pop32());
  /* 12c8426e pop ebx */
  EBX = (pop32());
  /* 12c8426f mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84273 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8427a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8427d ret 0xc */
  ESPCHK(0x12c84230u, _esp0);
  ESP += 16; return;
L_12c84280:;
  /* 12c84280 mov dl, byte ptr [esp + 0x2c] */
  DL = (r8((uint32_t)(ESP + 0x2c)));
  /* 12c84284 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 12c84288 mov byte ptr [esp + 0xc], dl */
  w8((uint32_t)(ESP + 0xc), (DL));
  /* 12c8428c mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 12c84290 mov dword ptr [esp + 0x18], ebx */
  w32((uint32_t)(ESP + 0x18), (EBX));
  /* 12c84294 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 12c84298 mov dword ptr [esp + 0x24], ebx */
  w32((uint32_t)(ESP + 0x24), (EBX));
  /* 12c8429c push eax */
  push32((uint32_t)(EAX));
  /* 12c8429d push esi */
  push32((uint32_t)(ESI));
  /* 12c8429e call 0x12c83f40 */
  push32(0x12c842a3u); f_12c83f40();
  /* 12c842a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c842a5 push 0x12c9054c */
  push32((uint32_t)(0x12c9054cu));
  /* 12c842aa push esi */
  push32((uint32_t)(ESI));
  /* 12c842ab call 0x12c85c30 */
  push32(0x12c842b0u); f_12c85c30();
  /* 12c842b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c842b3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c842b5 jne 0x12c842c0 */
  if (!C.zf) goto L_12c842c0;
  /* 12c842b7 mov dword ptr [edi + 4], 1 */
  w32((uint32_t)(EDI + 0x4), (0x1u));
  /* 12c842be jmp 0x12c842cc */
  goto L_12c842cc;
L_12c842c0:;
  /* 12c842c0 mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 12c842c4 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 12c842c8 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 12c842ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_12c842cc:;
  /* 12c842cc mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c842d0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c842d2 je 0x12c84302 */
  if (C.zf) goto L_12c84302;
  /* 12c842d4 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c842d7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c842d8 cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c842da je 0x12c842f9 */
  if (C.zf) goto L_12c842f9;
  /* 12c842dc cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c842df je 0x12c842f9 */
  if (C.zf) goto L_12c842f9;
  /* 12c842e1 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c842e3 pop edi */
  EDI = (pop32());
  /* 12c842e4 pop esi */
  ESI = (pop32());
  /* 12c842e5 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c842e7 pop ebx */
  EBX = (pop32());
  /* 12c842e8 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c842ec mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c842f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c842f6 ret 0xc */
  ESPCHK(0x12c84230u, _esp0);
  ESP += 16; return;
L_12c842f9:;
  /* 12c842f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c842fa call 0x12c847d0 */
  push32(0x12c842ffu); f_12c847d0();
  /* 12c842ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c84302:;
  /* 12c84302 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c84306 pop edi */
  EDI = (pop32());
  /* 12c84307 pop esi */
  ESI = (pop32());
  /* 12c84308 pop ebx */
  EBX = (pop32());
  /* 12c84309 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84310 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84313 ret 0xc */
  ESPCHK(0x12c84230u, _esp0);
  ESP += 16; return;
}

/* FUN_10004320 @ 0x12c84320 (621 bytes, 200 insns) */
void f_12c84320(void) {
  FTRACE(0x12c84320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84320 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c84322 push 0x12c8d648 */
  push32((uint32_t)(0x12c8d648u));
  /* 12c84327 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c8432d push eax */
  push32((uint32_t)(EAX));
  /* 12c8432e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c84335 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84338 mov al, byte ptr [esp + 0x20] */
  AL = (r8((uint32_t)(ESP + 0x20)));
  /* 12c8433c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8433d push esi */
  push32((uint32_t)(ESI));
  /* 12c8433e push edi */
  push32((uint32_t)(EDI));
  /* 12c8433f mov esi, ecx */
  ESI = (ECX);
  /* 12c84341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84343 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c84347 mov byte ptr [esp + 0x10], al */
  w8((uint32_t)(ESP + 0x10), (AL));
  /* 12c8434b call 0x12c83ad0 */
  push32(0x12c84350u); f_12c83ad0();
  /* 12c84350 mov dword ptr [esp + 0x24], 0 */
  w32((uint32_t)(ESP + 0x24), (0x0u));
L_12c84358:;
  /* 12c84358 mov edx, dword ptr [esi + 8] */
  EDX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8435b lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 12c8435f push ecx */
  push32((uint32_t)(ECX));
  /* 12c84360 push edx */
  push32((uint32_t)(EDX));
  /* 12c84361 call 0x12c83f40 */
  push32(0x12c84366u); f_12c83f40();
  /* 12c84366 mov ebx, eax */
  EBX = (EAX);
  /* 12c84368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8436b cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8436e je 0x12c843f6 */
  if (C.zf) goto L_12c843f6;
  /* 12c84374 mov edi, 0x12c9054c */
  EDI = (0x12c9054cu);
  /* 12c84379 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c8437c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8437e repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c84380 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c84384 not ecx */
  ECX = (~(ECX));
  /* 12c84386 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c84387 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84388 push 0x12c9054c */
  push32((uint32_t)(0x12c9054cu));
  /* 12c8438d push eax */
  push32((uint32_t)(EAX));
  /* 12c8438e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84390 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 12c84394 call 0x12c846b0 */
  push32(0x12c84399u); f_12c846b0();
  /* 12c84399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8439b je 0x12c84422 */
  if (C.zf) goto L_12c84422;
  /* 12c843a1 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c843a4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c843a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c843aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c843ac mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 12c843af je 0x12c84358 */
  if (C.zf) goto L_12c84358;
  /* 12c843b1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c843b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c843b7 je 0x12c84567 */
  if (C.zf) goto L_12c84567;
  /* 12c843bd lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 12c843c1 call 0x12c84720 */
  push32(0x12c843c6u); f_12c84720();
  /* 12c843c6 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c843ca cmp byte ptr [ecx], 0x23 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c843cd jne 0x12c844de */
  if (!C.zf) goto L_12c844de;
  /* 12c843d3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 12c843d7 call 0x12c84720 */
  push32(0x12c843dcu); f_12c84720();
  /* 12c843dc mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c843e0 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 12c843e4 call 0x12c84720 */
  push32(0x12c843e9u); f_12c84720();
  /* 12c843e9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c843eb jne 0x12c84490 */
  if (!C.zf) goto L_12c84490;
  /* 12c843f1 jmp 0x12c84494 */
  goto L_12c84494;
L_12c843f6:;
  /* 12c843f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c843f8 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c843fc mov dword ptr [esp + 0x28], 0xffffffff */
  w32((uint32_t)(ESP + 0x28), (0xffffffffu));
  /* 12c84404 call 0x12c83ad0 */
  push32(0x12c84409u); f_12c83ad0();
  /* 12c84409 pop edi */
  EDI = (pop32());
  /* 12c8440a pop esi */
  ESI = (pop32());
  /* 12c8440b mov eax, 4 */
  EAX = (0x4u);
  /* 12c84410 pop ebx */
  EBX = (pop32());
  /* 12c84411 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84415 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8441c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8441f ret 4 */
  ESPCHK(0x12c84320u, _esp0);
  ESP += 8; return;
L_12c84422:;
  /* 12c84422 mov edi, 0x12c932c0 */
  EDI = (0x12c932c0u);
  /* 12c84427 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c8442a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8442c push ebp */
  push32((uint32_t)(EBP));
  /* 12c8442d repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c8442f mov ebp, dword ptr [esp + 0x30] */
  EBP = (r32((uint32_t)(ESP + 0x30)));
  /* 12c84433 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84435 not ecx */
  ECX = (~(ECX));
  /* 12c84437 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c84438 mov ebx, ecx */
  EBX = (ECX);
  /* 12c8443a mov ecx, ebp */
  ECX = (EBP);
  /* 12c8443c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8443d call 0x12c83be0 */
  push32(0x12c84442u); f_12c83be0();
  /* 12c84442 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c84444 je 0x12c84466 */
  if (C.zf) goto L_12c84466;
  /* 12c84446 mov edi, dword ptr [ebp + 4] */
  EDI = (r32((uint32_t)(EBP + 0x4)));
  /* 12c84449 mov ecx, ebx */
  ECX = (EBX);
  /* 12c8444b mov edx, ecx */
  EDX = (ECX);
  /* 12c8444d mov esi, 0x12c932c0 */
  ESI = (0x12c932c0u);
  /* 12c84452 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c84455 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c84457 mov ecx, edx */
  ECX = (EDX);
  /* 12c84459 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8445a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8445d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c8445f mov ecx, ebp */
  ECX = (EBP);
  /* 12c84461 call 0x12c83bc0 */
  push32(0x12c84466u); f_12c83bc0();
L_12c84466:;
  /* 12c84466 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84468 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c8446c mov dword ptr [esp + 0x2c], 0xffffffff */
  w32((uint32_t)(ESP + 0x2c), (0xffffffffu));
  /* 12c84474 call 0x12c83ad0 */
  push32(0x12c84479u); f_12c83ad0();
  /* 12c84479 pop ebp */
  EBP = (pop32());
  /* 12c8447a pop edi */
  EDI = (pop32());
  /* 12c8447b pop esi */
  ESI = (pop32());
  /* 12c8447c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8447e pop ebx */
  EBX = (pop32());
  /* 12c8447f mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84483 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8448a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8448d ret 4 */
  ESPCHK(0x12c84320u, _esp0);
  ESP += 8; return;
L_12c84490:;
  /* 12c84490 sub esi, dword ptr [esp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_12c84494:;
  /* 12c84494 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84496 push esi */
  push32((uint32_t)(ESI));
  /* 12c84497 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c8449b call 0x12c84590 */
  push32(0x12c844a0u); f_12c84590();
  /* 12c844a0 mov ecx, dword ptr [esp + 0x2c] */
  ECX = (r32((uint32_t)(ESP + 0x2c)));
  /* 12c844a4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c844a6 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 12c844aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c844ac push eax */
  push32((uint32_t)(EAX));
  /* 12c844ad call 0x12c838d0 */
  push32(0x12c844b2u); f_12c838d0();
  /* 12c844b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c844b4 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c844b8 mov dword ptr [esp + 0x28], 0xffffffff */
  w32((uint32_t)(ESP + 0x28), (0xffffffffu));
  /* 12c844c0 call 0x12c83ad0 */
  push32(0x12c844c5u); f_12c83ad0();
  /* 12c844c5 pop edi */
  EDI = (pop32());
  /* 12c844c6 pop esi */
  ESI = (pop32());
  /* 12c844c7 mov eax, 1 */
  EAX = (0x1u);
  /* 12c844cc pop ebx */
  EBX = (pop32());
  /* 12c844cd mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c844d1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c844d8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c844db ret 4 */
  ESPCHK(0x12c84320u, _esp0);
  ESP += 8; return;
L_12c844de:;
  /* 12c844de mov al, byte ptr [ecx - 1] */
  AL = (r8((uint32_t)(ECX + -0x1)));
  /* 12c844e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c844e3 je 0x12c844fd */
  if (C.zf) goto L_12c844fd;
  /* 12c844e5 cmp al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c844e7 je 0x12c844fd */
  if (C.zf) goto L_12c844fd;
  /* 12c844e9 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c844ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12c844ef push ecx */
  push32((uint32_t)(ECX));
  /* 12c844f0 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c844f4 call 0x12c83be0 */
  push32(0x12c844f9u); f_12c83be0();
  /* 12c844f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
L_12c844fd:;
  /* 12c844fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c844ff je 0x12c84567 */
  if (C.zf) goto L_12c84567;
  /* 12c84501 mov byte ptr [ecx - 1], 0xff */
  w8((uint32_t)(ECX + -0x1), (0xffu));
  /* 12c84505 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84509 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8450d lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
L_12c84510:;
  /* 12c84510 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12c84513 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c84514 cmp al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84516 jne 0x12c8453a */
  if (!C.zf) goto L_12c8453a;
L_12c84518:;
  /* 12c84518 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 12c8451c call 0x12c84720 */
  push32(0x12c84521u); f_12c84720();
  /* 12c84521 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84525 mov eax, esi */
  EAX = (ESI);
  /* 12c84527 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84529 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8452b push eax */
  push32((uint32_t)(EAX));
  /* 12c8452c lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 12c84530 call 0x12c84590 */
  push32(0x12c84535u); f_12c84590();
  /* 12c84535 cmp byte ptr [esi], 0x20 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84538 je 0x12c84518 */
  if (C.zf) goto L_12c84518;
L_12c8453a:;
  /* 12c8453a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8453c lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 12c84540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84542 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84543 mov ecx, dword ptr [esp + 0x38] */
  ECX = (r32((uint32_t)(ESP + 0x38)));
  /* 12c84547 call 0x12c838d0 */
  push32(0x12c8454cu); f_12c838d0();
  /* 12c8454c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c84550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84552 je 0x12c84574 */
  if (C.zf) goto L_12c84574;
  /* 12c84554 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c84557 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c84558 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c8455a je 0x12c8456b */
  if (C.zf) goto L_12c8456b;
  /* 12c8455c cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8455f je 0x12c8456b */
  if (C.zf) goto L_12c8456b;
  /* 12c84561 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c84563 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c84565 jmp 0x12c84574 */
  goto L_12c84574;
L_12c84567:;
  /* 12c84567 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c84569 jmp 0x12c84510 */
  goto L_12c84510;
L_12c8456b:;
  /* 12c8456b push eax */
  push32((uint32_t)(EAX));
  /* 12c8456c call 0x12c847d0 */
  push32(0x12c84571u); f_12c847d0();
  /* 12c84571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c84574:;
  /* 12c84574 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c84578 pop edi */
  EDI = (pop32());
  /* 12c84579 pop esi */
  ESI = (pop32());
  /* 12c8457a mov eax, 2 */
  EAX = (0x2u);
  /* 12c8457f pop ebx */
  EBX = (pop32());
  /* 12c84580 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84587 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8458a ret 4 */
  ESPCHK(0x12c84320u, _esp0);
  ESP += 8; return;
}

/* FUN_10004590 @ 0x12c84590 (282 bytes, 121 insns) */
void f_12c84590(void) {
  FTRACE(0x12c84590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84590 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84591 push ebp */
  push32((uint32_t)(EBP));
  /* 12c84592 mov ebp, ecx */
  EBP = (ECX);
  /* 12c84594 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c84598 push esi */
  push32((uint32_t)(ESI));
  /* 12c84599 push edi */
  push32((uint32_t)(EDI));
  /* 12c8459a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8459d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8459f jae 0x12c845a6 */
  if (!C.cf) goto L_12c845a6;
  /* 12c845a1 call 0x12c84a07 */
  push32(0x12c845a6u); f_12c84a07();
L_12c845a6:;
  /* 12c845a6 mov esi, dword ptr [ebp + 4] */
  ESI = (r32((uint32_t)(EBP + 0x4)));
  /* 12c845a9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c845ab cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c845ad je 0x12c84603 */
  if (C.zf) goto L_12c84603;
  /* 12c845af mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12c845b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c845b4 je 0x12c84603 */
  if (C.zf) goto L_12c84603;
  /* 12c845b6 cmp al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c845b8 je 0x12c84603 */
  if (C.zf) goto L_12c84603;
  /* 12c845ba mov cl, al */
  CL = (AL);
  /* 12c845bc mov edi, esi */
  EDI = (ESI);
  /* 12c845be dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c845c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c845c2 mov byte ptr [esi - 1], cl */
  w8((uint32_t)(ESI + -0x1), (CL));
  /* 12c845c5 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c845c8 mov dword ptr [ebp + 4], ebx */
  w32((uint32_t)(EBP + 0x4), (EBX));
  /* 12c845cb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c845ce mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 12c845d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c845d3 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c845d5 not ecx */
  ECX = (~(ECX));
  /* 12c845d7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c845d8 mov ebx, ecx */
  EBX = (ECX);
  /* 12c845da mov ecx, ebp */
  ECX = (EBP);
  /* 12c845dc push ebx */
  push32((uint32_t)(EBX));
  /* 12c845dd call 0x12c83be0 */
  push32(0x12c845e2u); f_12c83be0();
  /* 12c845e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c845e4 je 0x12c84601 */
  if (C.zf) goto L_12c84601;
  /* 12c845e6 mov edi, dword ptr [ebp + 4] */
  EDI = (r32((uint32_t)(EBP + 0x4)));
  /* 12c845e9 mov ecx, ebx */
  ECX = (EBX);
  /* 12c845eb mov edx, ecx */
  EDX = (ECX);
  /* 12c845ed push ebx */
  push32((uint32_t)(EBX));
  /* 12c845ee shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c845f1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c845f3 mov ecx, edx */
  ECX = (EDX);
  /* 12c845f5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c845f8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 12c845fa mov ecx, ebp */
  ECX = (EBP);
  /* 12c845fc call 0x12c83bc0 */
  push32(0x12c84601u); f_12c83bc0();
L_12c84601:;
  /* 12c84601 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_12c84603:;
  /* 12c84603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84606 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8460a mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 12c8460e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84610 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84612 jae 0x12c84616 */
  if (!C.cf) goto L_12c84616;
  /* 12c84614 mov edi, eax */
  EDI = (EAX);
L_12c84616:;
  /* 12c84616 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84618 jbe 0x12c846a1 */
  if ((C.cf||C.zf)) goto L_12c846a1;
  /* 12c8461e mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c84621 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c84625 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84627 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84629 push eax */
  push32((uint32_t)(EAX));
  /* 12c8462a lea eax, [ecx + edi] */
  EAX = ((uint32_t)(ECX + EDI*1));
  /* 12c8462d push eax */
  push32((uint32_t)(EAX));
  /* 12c8462e push ecx */
  push32((uint32_t)(ECX));
  /* 12c8462f call 0x12c85870 */
  push32(0x12c84634u); f_12c85870();
  /* 12c84634 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84637 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8463a sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8463c cmp esi, -3 */
  { uint32_t _a=(ESI),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8463f jbe 0x12c84646 */
  if ((C.cf||C.zf)) goto L_12c84646;
  /* 12c84641 call 0x12c847db */
  push32(0x12c84646u); f_12c847db();
L_12c84646:;
  /* 12c84646 mov eax, dword ptr [ebp + 4] */
  EAX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c84649 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8464b je 0x12c84673 */
  if (C.zf) goto L_12c84673;
  /* 12c8464d mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c84650 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c84652 je 0x12c84673 */
  if (C.zf) goto L_12c84673;
  /* 12c84654 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84657 je 0x12c84673 */
  if (C.zf) goto L_12c84673;
  /* 12c84659 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8465b jne 0x12c8468f */
  if (!C.zf) goto L_12c8468f;
  /* 12c8465d dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c8465f push ebx */
  push32((uint32_t)(EBX));
  /* 12c84660 mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c84663 mov ecx, ebp */
  ECX = (EBP);
  /* 12c84665 call 0x12c83ad0 */
  push32(0x12c8466au); f_12c83ad0();
  /* 12c8466a pop edi */
  EDI = (pop32());
  /* 12c8466b mov eax, ebp */
  EAX = (EBP);
  /* 12c8466d pop esi */
  ESI = (pop32());
  /* 12c8466e pop ebp */
  EBP = (pop32());
  /* 12c8466f pop ebx */
  EBX = (pop32());
  /* 12c84670 ret 8 */
  ESPCHK(0x12c84590u, _esp0);
  ESP += 12; return;
L_12c84673:;
  /* 12c84673 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84675 jne 0x12c8468a */
  if (!C.zf) goto L_12c8468a;
  /* 12c84677 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84679 je 0x12c846a1 */
  if (C.zf) goto L_12c846a1;
  /* 12c8467b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 12c8467e mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c84681 pop edi */
  EDI = (pop32());
  /* 12c84682 mov eax, ebp */
  EAX = (EBP);
  /* 12c84684 pop esi */
  ESI = (pop32());
  /* 12c84685 pop ebp */
  EBP = (pop32());
  /* 12c84686 pop ebx */
  EBX = (pop32());
  /* 12c84687 ret 8 */
  ESPCHK(0x12c84590u, _esp0);
  ESP += 12; return;
L_12c8468a:;
  /* 12c8468a cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8468d jae 0x12c84697 */
  if (!C.cf) goto L_12c84697;
L_12c8468f:;
  /* 12c8468f mov ecx, ebp */
  ECX = (EBP);
  /* 12c84691 push esi */
  push32((uint32_t)(ESI));
  /* 12c84692 call 0x12c83d10 */
  push32(0x12c84697u); f_12c83d10();
L_12c84697:;
  /* 12c84697 mov ecx, dword ptr [ebp + 4] */
  ECX = (r32((uint32_t)(EBP + 0x4)));
  /* 12c8469a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 12c8469d mov byte ptr [esi + ecx], 0 */
  w8((uint32_t)(ESI + ECX*1), (0x0u));
L_12c846a1:;
  /* 12c846a1 pop edi */
  EDI = (pop32());
  /* 12c846a2 mov eax, ebp */
  EAX = (EBP);
  /* 12c846a4 pop esi */
  ESI = (pop32());
  /* 12c846a5 pop ebp */
  EBP = (pop32());
  /* 12c846a6 pop ebx */
  EBX = (pop32());
  /* 12c846a7 ret 8 */
  ESPCHK(0x12c84590u, _esp0);
  ESP += 12; return;
}

/* FUN_100046b0 @ 0x12c846b0 (105 bytes, 47 insns) */
void f_12c846b0(void) {
  FTRACE(0x12c846b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c846b0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c846b1 push esi */
  push32((uint32_t)(ESI));
  /* 12c846b2 mov esi, ecx */
  ESI = (ECX);
  /* 12c846b4 push edi */
  push32((uint32_t)(EDI));
  /* 12c846b5 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c846b9 cmp dword ptr [esi + 8], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c846bc jae 0x12c846c3 */
  if (!C.cf) goto L_12c846c3;
  /* 12c846be call 0x12c84a07 */
  push32(0x12c846c3u); f_12c84a07();
L_12c846c3:;
  /* 12c846c3 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c846c6 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c846ca sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c846cc cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c846ce jae 0x12c846d2 */
  if (!C.cf) goto L_12c846d2;
  /* 12c846d0 mov edx, eax */
  EDX = (EAX);
L_12c846d2:;
  /* 12c846d2 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c846d6 mov ecx, edx */
  ECX = (EDX);
  /* 12c846d8 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c846da jb 0x12c846de */
  if (C.cf) goto L_12c846de;
  /* 12c846dc mov ecx, ebx */
  ECX = (EBX);
L_12c846de:;
  /* 12c846de mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c846e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c846e3 jne 0x12c846e9 */
  if (!C.zf) goto L_12c846e9;
  /* 12c846e5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c846e7 jmp 0x12c846ec */
  goto L_12c846ec;
L_12c846e9:;
  /* 12c846e9 lea esi, [eax + edi] */
  ESI = ((uint32_t)(EAX + EDI*1));
L_12c846ec:;
  /* 12c846ec mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 12c846f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c846f2 repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c846f4 je 0x12c846fb */
  if (C.zf) goto L_12c846fb;
  /* 12c846f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c846f8 sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c846fb:;
  /* 12c846fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c846fd jne 0x12c84713 */
  if (!C.zf) goto L_12c84713;
  /* 12c846ff cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84701 jae 0x12c8470c */
  if (!C.cf) goto L_12c8470c;
  /* 12c84703 pop edi */
  EDI = (pop32());
  /* 12c84704 pop esi */
  ESI = (pop32());
  /* 12c84705 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c84708 pop ebx */
  EBX = (pop32());
  /* 12c84709 ret 0x10 */
  ESPCHK(0x12c846b0u, _esp0);
  ESP += 20; return;
L_12c8470c:;
  /* 12c8470c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8470e cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84710 setne al */
  AL = ((!C.zf) ? 1u : 0u);
L_12c84713:;
  /* 12c84713 pop edi */
  EDI = (pop32());
  /* 12c84714 pop esi */
  ESI = (pop32());
  /* 12c84715 pop ebx */
  EBX = (pop32());
  /* 12c84716 ret 0x10 */
  ESPCHK(0x12c846b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10004720 @ 0x12c84720 (119 bytes, 51 insns) */
void f_12c84720(void) {
  FTRACE(0x12c84720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84720 push esi */
  push32((uint32_t)(ESI));
  /* 12c84721 mov esi, ecx */
  ESI = (ECX);
  /* 12c84723 push edi */
  push32((uint32_t)(EDI));
  /* 12c84724 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c84727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84729 je 0x12c84789 */
  if (C.zf) goto L_12c84789;
  /* 12c8472b mov al, byte ptr [eax - 1] */
  AL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c8472e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c84730 je 0x12c84789 */
  if (C.zf) goto L_12c84789;
  /* 12c84732 cmp al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84734 je 0x12c84789 */
  if (C.zf) goto L_12c84789;
  /* 12c84736 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 12c84739 cmp edi, -3 */
  { uint32_t _a=(EDI),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8473c jbe 0x12c84743 */
  if ((C.cf||C.zf)) goto L_12c84743;
  /* 12c8473e call 0x12c847db */
  push32(0x12c84743u); f_12c847db();
L_12c84743:;
  /* 12c84743 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c84746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84748 je 0x12c8476a */
  if (C.zf) goto L_12c8476a;
  /* 12c8474a mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 12c8474d test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c8474f je 0x12c8476a */
  if (C.zf) goto L_12c8476a;
  /* 12c84751 cmp cl, 0xff */
  { uint32_t _a=(CL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84754 je 0x12c8476a */
  if (C.zf) goto L_12c8476a;
  /* 12c84756 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c84758 jne 0x12c84781 */
  if (!C.zf) goto L_12c84781;
  /* 12c8475a dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 12c8475c mov byte ptr [eax - 1], cl */
  w8((uint32_t)(EAX + -0x1), (CL));
  /* 12c8475f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 12c84762 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 12c84765 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 12c84768 jmp 0x12c84789 */
  goto L_12c84789;
L_12c8476a:;
  /* 12c8476a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c8476c jne 0x12c8477c */
  if (!C.zf) goto L_12c8477c;
  /* 12c8476e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84770 je 0x12c84789 */
  if (C.zf) goto L_12c84789;
  /* 12c84772 push edi */
  push32((uint32_t)(EDI));
  /* 12c84773 mov ecx, esi */
  ECX = (ESI);
  /* 12c84775 call 0x12c83bc0 */
  push32(0x12c8477au); f_12c83bc0();
  /* 12c8477a jmp 0x12c84789 */
  goto L_12c84789;
L_12c8477c:;
  /* 12c8477c cmp dword ptr [esi + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8477f jae 0x12c84789 */
  if (!C.cf) goto L_12c84789;
L_12c84781:;
  /* 12c84781 mov ecx, esi */
  ECX = (ESI);
  /* 12c84783 push edi */
  push32((uint32_t)(EDI));
  /* 12c84784 call 0x12c83d10 */
  push32(0x12c84789u); f_12c83d10();
L_12c84789:;
  /* 12c84789 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 12c8478c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8478e je 0x12c84794 */
  if (C.zf) goto L_12c84794;
  /* 12c84790 mov byte ptr [esi - 1], 0xff */
  w8((uint32_t)(ESI + -0x1), (0xffu));
L_12c84794:;
  /* 12c84794 pop edi */
  EDI = (pop32());
  /* 12c84795 pop esi */
  ESI = (pop32());
  /* 12c84796 ret  */
  ESPCHK(0x12c84720u, _esp0);
  ESP += 4; return;
}

/* FUN_100047d0 @ 0x12c847d0 (11 bytes, 4 insns) */
void f_12c847d0(void) {
  FTRACE(0x12c847d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c847d0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 12c847d4 call 0x12c85e59 */
  push32(0x12c847d9u); f_12c85e59();
  /* 12c847d9 pop ecx */
  ECX = (pop32());
  /* 12c847da ret  */
  ESPCHK(0x12c847d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047db @ 0x12c847db (89 bytes, 28 insns) */
void f_12c847db(void) {
  FTRACE(0x12c847dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c847db mov eax, 0x12c8d65c */
  EAX = (0x12c8d65cu);
  /* 12c847e0 call 0x12c8608c */
  push32(0x12c847e5u); f_12c8608c();
  /* 12c847e5 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c847e8 mov al, byte ptr [ebp - 0xd] */
  AL = (r8((uint32_t)(EBP + -0xd)));
  /* 12c847eb push esi */
  push32((uint32_t)(ESI));
  /* 12c847ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12c847ee lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 12c847f1 mov byte ptr [ebp - 0x20], al */
  w8((uint32_t)(EBP + -0x20), (AL));
  /* 12c847f4 call 0x12c83ad0 */
  push32(0x12c847f9u); f_12c83ad0();
  /* 12c847f9 mov esi, 0x12c8e17c */
  ESI = (0x12c8e17cu);
  /* 12c847fe push esi */
  push32((uint32_t)(ESI));
  /* 12c847ff call 0x12c86010 */
  push32(0x12c84804u); f_12c86010();
  /* 12c84804 pop ecx */
  ECX = (pop32());
  /* 12c84805 push eax */
  push32((uint32_t)(EAX));
  /* 12c84806 push esi */
  push32((uint32_t)(ESI));
  /* 12c84807 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 12c8480a call 0x12c83b20 */
  push32(0x12c8480fu); f_12c83b20();
  /* 12c8480f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84813 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c84816 push eax */
  push32((uint32_t)(EAX));
  /* 12c84817 lea ecx, [ebp - 0x3c] */
  ECX = ((uint32_t)(EBP + -0x3c));
  /* 12c8481a call 0x12c84835 */
  push32(0x12c8481fu); f_12c84835();
  /* 12c8481f lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12c84822 push 0x12c8eca8 */
  push32((uint32_t)(0x12c8eca8u));
  /* 12c84827 push eax */
  push32((uint32_t)(EAX));
  /* 12c84828 mov dword ptr [ebp - 0x3c], 0x12c8e170 */
  w32((uint32_t)(EBP + -0x3c), (0x12c8e170u));
  /* 12c8482f call 0x12c8558e */
  push32(0x12c84834u); f_12c8558e();
  /* 12c84834 pop esi */
  ESI = (pop32());
}

/* FUN_10004835 @ 0x12c84835 (100 bytes, 35 insns) */
void f_12c84835(void) {
  FTRACE(0x12c84835u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84835 mov eax, 0x12c8d670 */
  EAX = (0x12c8d670u);
  /* 12c8483a call 0x12c8608c */
  push32(0x12c8483fu); f_12c8608c();
  /* 12c8483f push ecx */
  push32((uint32_t)(ECX));
  /* 12c84840 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84841 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84842 push esi */
  push32((uint32_t)(ESI));
  /* 12c84843 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 12c84846 push edi */
  push32((uint32_t)(EDI));
  /* 12c84847 mov esi, ecx */
  ESI = (ECX);
  /* 12c84849 push eax */
  push32((uint32_t)(EAX));
  /* 12c8484a mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 12c8484d mov dword ptr [ebp - 0x10], 0x12c932c0 */
  w32((uint32_t)(EBP + -0x10), (0x12c932c0u));
  /* 12c84854 call 0x12c85f5e */
  push32(0x12c84859u); f_12c85f5e();
  /* 12c84859 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8485c and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84860 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 12c84863 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84865 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 12c84867 mov ecx, edi */
  ECX = (EDI);
  /* 12c84869 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c8486b call 0x12c83ad0 */
  push32(0x12c84870u); f_12c83ad0();
  /* 12c84870 push dword ptr [0x12c8e19c] */
  push32((uint32_t)(r32((uint32_t)(0x12c8e19c))));
  /* 12c84876 mov ecx, edi */
  ECX = (EDI);
  /* 12c84878 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8487a push ebx */
  push32((uint32_t)(EBX));
  /* 12c8487b call 0x12c838d0 */
  push32(0x12c84880u); f_12c838d0();
  /* 12c84880 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c84883 mov dword ptr [esi], 0x12c8e190 */
  w32((uint32_t)(ESI), (0x12c8e190u));
  /* 12c84889 mov eax, esi */
  EAX = (ESI);
  /* 12c8488b pop edi */
  EDI = (pop32());
  /* 12c8488c pop esi */
  ESI = (pop32());
  /* 12c8488d pop ebx */
  EBX = (pop32());
  /* 12c8488e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84896 ret 4 */
  ESPCHK(0x12c84835u, _esp0);
  ESP += 8; return;
}

/* FUN_100048a6 @ 0x12c848a6 (29 bytes, 10 insns) */
void f_12c848a6(void) {
  FTRACE(0x12c848a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c848a6 push ebp */
  push32((uint32_t)(EBP));
  /* 12c848a7 mov ebp, esp */
  EBP = (ESP);
  /* 12c848a9 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c848ac push ecx */
  push32((uint32_t)(ECX));
  /* 12c848ad lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c848b0 call 0x12c8491c */
  push32(0x12c848b5u); f_12c8491c();
  /* 12c848b5 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c848b8 push 0x12c8ed18 */
  push32((uint32_t)(0x12c8ed18u));
  /* 12c848bd push eax */
  push32((uint32_t)(EAX));
  /* 12c848be call 0x12c8558e */
  push32(0x12c848c3u); f_12c8558e();
}

/* FUN_100048c3 @ 0x12c848c3 (61 bytes, 19 insns) */
void f_12c848c3(void) {
  FTRACE(0x12c848c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c848c3 mov eax, 0x12c8d684 */
  EAX = (0x12c8d684u);
  /* 12c848c8 call 0x12c8608c */
  push32(0x12c848cdu); f_12c8608c();
  /* 12c848cd push ecx */
  push32((uint32_t)(ECX));
  /* 12c848ce push esi */
  push32((uint32_t)(ESI));
  /* 12c848cf mov esi, ecx */
  ESI = (ECX);
  /* 12c848d1 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 12c848d4 mov dword ptr [esi], 0x12c8e190 */
  w32((uint32_t)(ESI), (0x12c8e190u));
  /* 12c848da and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c848de push 1 */
  push32((uint32_t)(0x1u));
  /* 12c848e0 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 12c848e3 call 0x12c83ad0 */
  push32(0x12c848e8u); f_12c83ad0();
  /* 12c848e8 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c848ec mov ecx, esi */
  ECX = (ESI);
  /* 12c848ee call 0x12c85fe5 */
  push32(0x12c848f3u); f_12c85fe5();
  /* 12c848f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c848f6 pop esi */
  ESI = (pop32());
  /* 12c848f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c848fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c848ff ret  */
  ESPCHK(0x12c848c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004900 @ 0x12c84900 (28 bytes, 11 insns) */
void f_12c84900(void) {
  FTRACE(0x12c84900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84900 push esi */
  push32((uint32_t)(ESI));
  /* 12c84901 mov esi, ecx */
  ESI = (ECX);
  /* 12c84903 call 0x12c848c3 */
  push32(0x12c84908u); f_12c848c3();
  /* 12c84908 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 12c8490d je 0x12c84916 */
  if (C.zf) goto L_12c84916;
  /* 12c8490f push esi */
  push32((uint32_t)(ESI));
  /* 12c84910 call 0x12c847d0 */
  push32(0x12c84915u); f_12c847d0();
  /* 12c84915 pop ecx */
  ECX = (pop32());
L_12c84916:;
  /* 12c84916 mov eax, esi */
  EAX = (ESI);
  /* 12c84918 pop esi */
  ESI = (pop32());
  /* 12c84919 ret 4 */
  ESPCHK(0x12c84900u, _esp0);
  ESP += 8; return;
}

/* FUN_1000491c @ 0x12c8491c (93 bytes, 33 insns) */
void f_12c8491c(void) {
  FTRACE(0x12c8491cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8491c mov eax, 0x12c8d698 */
  EAX = (0x12c8d698u);
  /* 12c84921 call 0x12c8608c */
  push32(0x12c84926u); f_12c8608c();
  /* 12c84926 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84927 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84928 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8492b push esi */
  push32((uint32_t)(ESI));
  /* 12c8492c push edi */
  push32((uint32_t)(EDI));
  /* 12c8492d mov esi, ecx */
  ESI = (ECX);
  /* 12c8492f push ebx */
  push32((uint32_t)(EBX));
  /* 12c84930 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 12c84933 call 0x12c85f9b */
  push32(0x12c84938u); f_12c85f9b();
  /* 12c84938 mov al, byte ptr [ebx + 0xc] */
  AL = (r8((uint32_t)(EBX + 0xc)));
  /* 12c8493b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8493f add ebx, 0xc */
  { uint32_t _a=(EBX),_b=(0xcu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84942 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 12c84945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84947 mov ecx, edi */
  ECX = (EDI);
  /* 12c84949 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c8494b call 0x12c83ad0 */
  push32(0x12c84950u); f_12c83ad0();
  /* 12c84950 push dword ptr [0x12c8e19c] */
  push32((uint32_t)(r32((uint32_t)(0x12c8e19c))));
  /* 12c84956 mov ecx, edi */
  ECX = (EDI);
  /* 12c84958 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8495a push ebx */
  push32((uint32_t)(EBX));
  /* 12c8495b call 0x12c838d0 */
  push32(0x12c84960u); f_12c838d0();
  /* 12c84960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c84963 mov dword ptr [esi], 0x12c8e190 */
  w32((uint32_t)(ESI), (0x12c8e190u));
  /* 12c84969 mov eax, esi */
  EAX = (ESI);
  /* 12c8496b pop edi */
  EDI = (pop32());
  /* 12c8496c pop esi */
  ESI = (pop32());
  /* 12c8496d pop ebx */
  EBX = (pop32());
  /* 12c8496e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84976 ret 4 */
  ESPCHK(0x12c8491cu, _esp0);
  ESP += 8; return;
}

/* FUN_10004979 @ 0x12c84979 (61 bytes, 19 insns) */
void f_12c84979(void) {
  FTRACE(0x12c84979u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84979 mov eax, 0x12c8d6ac */
  EAX = (0x12c8d6acu);
  /* 12c8497e call 0x12c8608c */
  push32(0x12c84983u); f_12c8608c();
  /* 12c84983 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84984 push esi */
  push32((uint32_t)(ESI));
  /* 12c84985 mov esi, ecx */
  ESI = (ECX);
  /* 12c84987 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 12c8498a mov dword ptr [esi], 0x12c8e190 */
  w32((uint32_t)(ESI), (0x12c8e190u));
  /* 12c84990 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84994 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84996 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 12c84999 call 0x12c83ad0 */
  push32(0x12c8499eu); f_12c83ad0();
  /* 12c8499e or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c849a2 mov ecx, esi */
  ECX = (ESI);
  /* 12c849a4 call 0x12c85fe5 */
  push32(0x12c849a9u); f_12c85fe5();
  /* 12c849a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c849ac pop esi */
  ESI = (pop32());
  /* 12c849ad mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c849b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c849b5 ret  */
  ESPCHK(0x12c84979u, _esp0);
  ESP += 4; return;
}

/* FUN_100049b6 @ 0x12c849b6 (29 bytes, 21 insns) */
void f_12c849b6(void) {
  FTRACE(0x12c849b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c849b6 push ebp */
  push32((uint32_t)(EBP));
  /* 12c849b7 mov ebp, esp */
  EBP = (ESP);
  /* 12c849b9 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c849bc push ecx */
  push32((uint32_t)(ECX));
  /* 12c849bd lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c849c0 call 0x12c849ef */
  push32(0x12c849c5u); f_12c849ef();
  /* 12c849c5 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c849c8 push 0x12c8eca8 */
  push32((uint32_t)(0x12c8eca8u));
  /* 12c849cd push eax */
  push32((uint32_t)(EAX));
  /* 12c849ce call 0x12c8558e */
  push32(0x12c849d3u); f_12c8558e();
  /* 12c849d3 push esi */
  push32((uint32_t)(ESI));
  /* 12c849d4 mov esi, ecx */
  ESI = (ECX);
  /* 12c849d6 call 0x12c84979 */
  push32(0x12c849dbu); f_12c84979();
  /* 12c849db test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 12c849e0 je 0x12c849e9 */
  if (C.zf) goto L_12c849e9;
  /* 12c849e2 push esi */
  push32((uint32_t)(ESI));
  /* 12c849e3 call 0x12c847d0 */
  push32(0x12c849e8u); f_12c847d0();
  /* 12c849e8 pop ecx */
  ECX = (pop32());
L_12c849e9:;
  /* 12c849e9 mov eax, esi */
  EAX = (ESI);
  /* 12c849eb pop esi */
  ESI = (pop32());
  /* 12c849ec ret 4 */
  ESPCHK(0x12c849b6u, _esp0);
  ESP += 8; return;
}

/* FUN_100049ef @ 0x12c849ef (24 bytes, 8 insns) */
void f_12c849ef(void) {
  FTRACE(0x12c849efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c849ef push esi */
  push32((uint32_t)(ESI));
  /* 12c849f0 mov esi, ecx */
  ESI = (ECX);
  /* 12c849f2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c849f6 call 0x12c8491c */
  push32(0x12c849fbu); f_12c8491c();
  /* 12c849fb mov dword ptr [esi], 0x12c8e170 */
  w32((uint32_t)(ESI), (0x12c8e170u));
  /* 12c84a01 mov eax, esi */
  EAX = (ESI);
  /* 12c84a03 pop esi */
  ESI = (pop32());
  /* 12c84a04 ret 4 */
  ESPCHK(0x12c849efu, _esp0);
  ESP += 8; return;
}

/* FUN_10004a07 @ 0x12c84a07 (89 bytes, 28 insns) */
void f_12c84a07(void) {
  FTRACE(0x12c84a07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84a07 mov eax, 0x12c8d6c0 */
  EAX = (0x12c8d6c0u);
  /* 12c84a0c call 0x12c8608c */
  push32(0x12c84a11u); f_12c8608c();
  /* 12c84a11 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84a14 mov al, byte ptr [ebp - 0xd] */
  AL = (r8((uint32_t)(EBP + -0xd)));
  /* 12c84a17 push esi */
  push32((uint32_t)(ESI));
  /* 12c84a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c84a1a lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 12c84a1d mov byte ptr [ebp - 0x20], al */
  w8((uint32_t)(EBP + -0x20), (AL));
  /* 12c84a20 call 0x12c83ad0 */
  push32(0x12c84a25u); f_12c83ad0();
  /* 12c84a25 mov esi, 0x12c8e1b0 */
  ESI = (0x12c8e1b0u);
  /* 12c84a2a push esi */
  push32((uint32_t)(ESI));
  /* 12c84a2b call 0x12c86010 */
  push32(0x12c84a30u); f_12c86010();
  /* 12c84a30 pop ecx */
  ECX = (pop32());
  /* 12c84a31 push eax */
  push32((uint32_t)(EAX));
  /* 12c84a32 push esi */
  push32((uint32_t)(ESI));
  /* 12c84a33 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 12c84a36 call 0x12c83b20 */
  push32(0x12c84a3bu); f_12c83b20();
  /* 12c84a3b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84a3f lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c84a42 push eax */
  push32((uint32_t)(EAX));
  /* 12c84a43 lea ecx, [ebp - 0x3c] */
  ECX = ((uint32_t)(EBP + -0x3c));
  /* 12c84a46 call 0x12c84835 */
  push32(0x12c84a4bu); f_12c84835();
  /* 12c84a4b lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12c84a4e push 0x12c8edd0 */
  push32((uint32_t)(0x12c8edd0u));
  /* 12c84a53 push eax */
  push32((uint32_t)(EAX));
  /* 12c84a54 mov dword ptr [ebp - 0x3c], 0x12c8e1a4 */
  w32((uint32_t)(EBP + -0x3c), (0x12c8e1a4u));
  /* 12c84a5b call 0x12c8558e */
  push32(0x12c84a60u); f_12c8558e();
  /* 12c84a60 pop esi */
  ESI = (pop32());
}

/* FUN_10004a61 @ 0x12c84a61 (61 bytes, 19 insns) */
void f_12c84a61(void) {
  FTRACE(0x12c84a61u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84a61 mov eax, 0x12c8d6d4 */
  EAX = (0x12c8d6d4u);
  /* 12c84a66 call 0x12c8608c */
  push32(0x12c84a6bu); f_12c8608c();
  /* 12c84a6b push ecx */
  push32((uint32_t)(ECX));
  /* 12c84a6c push esi */
  push32((uint32_t)(ESI));
  /* 12c84a6d mov esi, ecx */
  ESI = (ECX);
  /* 12c84a6f mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 12c84a72 mov dword ptr [esi], 0x12c8e190 */
  w32((uint32_t)(ESI), (0x12c8e190u));
  /* 12c84a78 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84a7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84a7e lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 12c84a81 call 0x12c83ad0 */
  push32(0x12c84a86u); f_12c83ad0();
  /* 12c84a86 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84a8a mov ecx, esi */
  ECX = (ESI);
  /* 12c84a8c call 0x12c85fe5 */
  push32(0x12c84a91u); f_12c85fe5();
  /* 12c84a91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c84a94 pop esi */
  ESI = (pop32());
  /* 12c84a95 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84a9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84a9d ret  */
  ESPCHK(0x12c84a61u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a9e @ 0x12c84a9e (29 bytes, 21 insns) */
void f_12c84a9e(void) {
  FTRACE(0x12c84a9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84a9e push ebp */
  push32((uint32_t)(EBP));
  /* 12c84a9f mov ebp, esp */
  EBP = (ESP);
  /* 12c84aa1 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84aa5 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c84aa8 call 0x12c84ad7 */
  push32(0x12c84aadu); f_12c84ad7();
  /* 12c84aad lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c84ab0 push 0x12c8edd0 */
  push32((uint32_t)(0x12c8edd0u));
  /* 12c84ab5 push eax */
  push32((uint32_t)(EAX));
  /* 12c84ab6 call 0x12c8558e */
  push32(0x12c84abbu); f_12c8558e();
  /* 12c84abb push esi */
  push32((uint32_t)(ESI));
  /* 12c84abc mov esi, ecx */
  ESI = (ECX);
  /* 12c84abe call 0x12c84a61 */
  push32(0x12c84ac3u); f_12c84a61();
  /* 12c84ac3 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 12c84ac8 je 0x12c84ad1 */
  if (C.zf) goto L_12c84ad1;
  /* 12c84aca push esi */
  push32((uint32_t)(ESI));
  /* 12c84acb call 0x12c847d0 */
  push32(0x12c84ad0u); f_12c847d0();
  /* 12c84ad0 pop ecx */
  ECX = (pop32());
L_12c84ad1:;
  /* 12c84ad1 mov eax, esi */
  EAX = (ESI);
  /* 12c84ad3 pop esi */
  ESI = (pop32());
  /* 12c84ad4 ret 4 */
  ESPCHK(0x12c84a9eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004ad7 @ 0x12c84ad7 (24 bytes, 8 insns) */
void f_12c84ad7(void) {
  FTRACE(0x12c84ad7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84ad7 push esi */
  push32((uint32_t)(ESI));
  /* 12c84ad8 mov esi, ecx */
  ESI = (ECX);
  /* 12c84ada push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c84ade call 0x12c8491c */
  push32(0x12c84ae3u); f_12c8491c();
  /* 12c84ae3 mov dword ptr [esi], 0x12c8e1a4 */
  w32((uint32_t)(ESI), (0x12c8e1a4u));
  /* 12c84ae9 mov eax, esi */
  EAX = (ESI);
  /* 12c84aeb pop esi */
  ESI = (pop32());
  /* 12c84aec ret 4 */
  ESPCHK(0x12c84ad7u, _esp0);
  ESP += 8; return;
}

/* FUN_10004b19 @ 0x12c84b19 (12 bytes, 4 insns) */
void f_12c84b19(void) {
  FTRACE(0x12c84b19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84b19 push 0x12c83f30 */
  push32((uint32_t)(0x12c83f30u));
  /* 12c84b1e call 0x12c84bb0 */
  push32(0x12c84b23u); f_12c84bb0();
  /* 12c84b23 pop ecx */
  ECX = (pop32());
  /* 12c84b24 ret  */
  ESPCHK(0x12c84b19u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b25 @ 0x12c84b25 (12 bytes, 4 insns) */
void f_12c84b25(void) {
  FTRACE(0x12c84b25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84b25 push 0x12c84b31 */
  push32((uint32_t)(0x12c84b31u));
  /* 12c84b2a call 0x12c84bb0 */
  push32(0x12c84b2fu); f_12c84bb0();
  /* 12c84b2f pop ecx */
  ECX = (pop32());
  /* 12c84b30 ret  */
  ESPCHK(0x12c84b25u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b32 @ 0x12c84b32 (126 bytes, 37 insns) */
void f_12c84b32(void) {
  FTRACE(0x12c84b32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84b32 push esi */
  push32((uint32_t)(ESI));
  /* 12c84b33 call 0x12c864d7 */
  push32(0x12c84b38u); f_12c864d7();
  /* 12c84b38 push dword ptr [0x12cadb50] */
  push32((uint32_t)(r32((uint32_t)(0x12cadb50))));
  /* 12c84b3e call 0x12c86832 */
  push32(0x12c84b43u); f_12c86832();
  /* 12c84b43 mov edx, dword ptr [0x12cadb50] */
  EDX = (r32((uint32_t)(0x12cadb50)));
  /* 12c84b49 pop ecx */
  ECX = (pop32());
  /* 12c84b4a mov ecx, dword ptr [0x12cadb4c] */
  ECX = (r32((uint32_t)(0x12cadb4c)));
  /* 12c84b50 mov esi, ecx */
  ESI = (ECX);
  /* 12c84b52 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84b54 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84b57 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84b59 jae 0x12c84b98 */
  if (!C.cf) goto L_12c84b98;
  /* 12c84b5b push edx */
  push32((uint32_t)(EDX));
  /* 12c84b5c call 0x12c86832 */
  push32(0x12c84b61u); f_12c86832();
  /* 12c84b61 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84b64 push eax */
  push32((uint32_t)(EAX));
  /* 12c84b65 push dword ptr [0x12cadb50] */
  push32((uint32_t)(r32((uint32_t)(0x12cadb50))));
  /* 12c84b6b call 0x12c86503 */
  push32(0x12c84b70u); f_12c86503();
  /* 12c84b70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84b75 jne 0x12c84b7b */
  if (!C.zf) goto L_12c84b7b;
  /* 12c84b77 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c84b79 jmp 0x12c84ba7 */
  goto L_12c84ba7;
L_12c84b7b:;
  /* 12c84b7b mov ecx, dword ptr [0x12cadb4c] */
  ECX = (r32((uint32_t)(0x12cadb4c)));
  /* 12c84b81 sub ecx, dword ptr [0x12cadb50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cadb50))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84b87 mov dword ptr [0x12cadb50], eax */
  w32((uint32_t)(0x12cadb50), (EAX));
  /* 12c84b8c sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c84b8f lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
  /* 12c84b92 mov dword ptr [0x12cadb4c], ecx */
  w32((uint32_t)(0x12cadb4c), (ECX));
L_12c84b98:;
  /* 12c84b98 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c84b9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c84b9e add dword ptr [0x12cadb4c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x12cadb4c))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(0x12cadb4c), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c84ba5 mov esi, eax */
  ESI = (EAX);
L_12c84ba7:;
  /* 12c84ba7 call 0x12c864e0 */
  push32(0x12c84bacu); f_12c864e0();
  /* 12c84bac mov eax, esi */
  EAX = (ESI);
  /* 12c84bae pop esi */
  ESI = (pop32());
  /* 12c84baf ret  */
  ESPCHK(0x12c84b32u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb0 @ 0x12c84bb0 (18 bytes, 8 insns) */
void f_12c84bb0(void) {
  FTRACE(0x12c84bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84bb0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 12c84bb4 call 0x12c84b32 */
  push32(0x12c84bb9u); f_12c84b32();
  /* 12c84bb9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c84bbb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84bbd pop ecx */
  ECX = (pop32());
  /* 12c84bbe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c84bc0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c84bc1 ret  */
  ESPCHK(0x12c84bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bf1 @ 0x12c84bf1 (104 bytes, 34 insns) */
void f_12c84bf1(void) {
  FTRACE(0x12c84bf1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84bf1 push ebp */
  push32((uint32_t)(EBP));
  /* 12c84bf2 mov ebp, esp */
  EBP = (ESP);
  /* 12c84bf4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c84bf6 push 0x12c8e1c8 */
  push32((uint32_t)(0x12c8e1c8u));
  /* 12c84bfb push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c84c00 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c84c06 push eax */
  push32((uint32_t)(EAX));
  /* 12c84c07 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c84c0e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84c11 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84c12 push esi */
  push32((uint32_t)(ESI));
  /* 12c84c13 push edi */
  push32((uint32_t)(EDI));
  /* 12c84c14 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
  /* 12c84c18 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c84c1b mov eax, esi */
  EAX = (ESI);
  /* 12c84c1d imul eax, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c84c21 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c84c24 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c84c28:;
  /* 12c84c28 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 12c84c2b js 0x12c84c38 */
  if (C.sf) goto L_12c84c38;
  /* 12c84c2d sub dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c84c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84c33 call dword ptr [ebp + 0x14] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x14))), 0x12c84c36u);
  /* 12c84c36 jmp 0x12c84c28 */
  goto L_12c84c28;
L_12c84c38:;
  /* 12c84c38 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12c84c3f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84c43 call 0x12c84c59 */
  push32(0x12c84c48u); f_12c84c59();
  /* 12c84c48 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c84c4b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84c52 pop edi */
  EDI = (pop32());
  /* 12c84c53 pop esi */
  ESI = (pop32());
  /* 12c84c54 pop ebx */
  EBX = (pop32());
  /* 12c84c55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84c56 ret 0x10 */
  ESPCHK(0x12c84bf1u, _esp0);
  ESP += 20; return;
}

/* FUN_10004c59 @ 0x12c84c59 (24 bytes, 8 insns) */
void f_12c84c59(void) {
  FTRACE(0x12c84c59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84c59 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84c5d jne 0x12c84c70 */
  if (!C.zf) goto L_12c84c70;
  /* 12c84c5f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c84c62 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c84c65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c84c68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c84c6b call 0x12c84c71 */
  push32(0x12c84c70u); f_12c84c71();
L_12c84c70:;
  /* 12c84c70 ret  */
  ESPCHK(0x12c84c59u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c71 @ 0x12c84c71 (81 bytes, 35 insns) */
void f_12c84c71(void) {
  FTRACE(0x12c84c71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84c71 push ebp */
  push32((uint32_t)(EBP));
  /* 12c84c72 mov ebp, esp */
  EBP = (ESP);
  /* 12c84c74 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c84c76 push 0x12c8e1d8 */
  push32((uint32_t)(0x12c8e1d8u));
  /* 12c84c7b push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c84c80 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c84c86 push eax */
  push32((uint32_t)(EAX));
  /* 12c84c87 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c84c8e push ecx */
  push32((uint32_t)(ECX));
  /* 12c84c8f push ecx */
  push32((uint32_t)(ECX));
  /* 12c84c90 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84c91 push esi */
  push32((uint32_t)(ESI));
  /* 12c84c92 push edi */
  push32((uint32_t)(EDI));
  /* 12c84c93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c84c96 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c84c9a:;
  /* 12c84c9a dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 12c84c9d js 0x12c84cba */
  if (C.sf) goto L_12c84cba;
  /* 12c84c9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84ca2 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84ca5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c84ca8 call dword ptr [ebp + 0x14] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x14))), 0x12c84cabu);
  /* 12c84cab jmp 0x12c84c9a */
  goto L_12c84c9a;
  /* 12c84cad push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 12c84cb0 call 0x12c84ccf */
  push32(0x12c84cb5u); f_12c84ccf();
  /* 12c84cb5 pop ecx */
  ECX = (pop32());
  /* 12c84cb6 ret  */
  ESPCHK(0x12c84c71u, _esp0);
  ESP += 4; return;
  /* 12c84cb7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_12c84cba:;
  /* 12c84cba or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c84cbe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c84cc1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c84cc8 pop edi */
  EDI = (pop32());
  /* 12c84cc9 pop esi */
  ESI = (pop32());
  /* 12c84cca pop ebx */
  EBX = (pop32());
  /* 12c84ccb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84ccc ret 0x10 */
  ESPCHK(0x12c84c71u, _esp0);
  ESP += 20; return;
}

/* FUN_10004ccf @ 0x12c84ccf (22 bytes, 7 insns) */
void f_12c84ccf(void) {
  FTRACE(0x12c84ccfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84ccf mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c84cd3 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 12c84cd5 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84cdb je 0x12c84ce0 */
  if (C.zf) goto L_12c84ce0;
  /* 12c84cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c84cdf ret  */
  ESPCHK(0x12c84ccfu, _esp0);
  ESP += 4; return;
L_12c84ce0:;
  /* 12c84ce0 jmp 0x12c86b3c */
  f_12c86b3c(); return;
}

/* FUN_10004ce5 @ 0x12c84ce5 (41 bytes, 17 insns) */
void f_12c84ce5(void) {
  FTRACE(0x12c84ce5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84ce5 push esi */
  push32((uint32_t)(ESI));
  /* 12c84ce6 mov esi, ecx */
  ESI = (ECX);
  /* 12c84ce8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12c84cea mov dword ptr [esi], 0x12c8e1e8 */
  w32((uint32_t)(ESI), (0x12c8e1e8u));
  /* 12c84cf0 call 0x12c86c88 */
  push32(0x12c84cf5u); f_12c86c88();
  /* 12c84cf5 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 12c84cf8 pop ecx */
  ECX = (pop32());
  /* 12c84cf9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c84cfb je 0x12c84d04 */
  if (C.zf) goto L_12c84d04;
  /* 12c84cfd push esi */
  push32((uint32_t)(ESI));
  /* 12c84cfe call 0x12c85e59 */
  push32(0x12c84d03u); f_12c85e59();
  /* 12c84d03 pop ecx */
  ECX = (pop32());
L_12c84d04:;
  /* 12c84d04 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12c84d06 call 0x12c86ce9 */
  push32(0x12c84d0bu); f_12c86ce9();
  /* 12c84d0b pop ecx */
  ECX = (pop32());
  /* 12c84d0c pop esi */
  ESI = (pop32());
  /* 12c84d0d ret  */
  ESPCHK(0x12c84ce5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d0e @ 0x12c84d0e (28 bytes, 11 insns) */
void f_12c84d0e(void) {
  FTRACE(0x12c84d0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84d0e push esi */
  push32((uint32_t)(ESI));
  /* 12c84d0f mov esi, ecx */
  ESI = (ECX);
  /* 12c84d11 call 0x12c84ce5 */
  push32(0x12c84d16u); f_12c84ce5();
  /* 12c84d16 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 12c84d1b je 0x12c84d24 */
  if (C.zf) goto L_12c84d24;
  /* 12c84d1d push esi */
  push32((uint32_t)(ESI));
  /* 12c84d1e call 0x12c847d0 */
  push32(0x12c84d23u); f_12c847d0();
  /* 12c84d23 pop ecx */
  ECX = (pop32());
L_12c84d24:;
  /* 12c84d24 mov eax, esi */
  EAX = (ESI);
  /* 12c84d26 pop esi */
  ESI = (pop32());
  /* 12c84d27 ret 4 */
  ESPCHK(0x12c84d0eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004d2a @ 0x12c84d2a (49 bytes, 20 insns) */
void f_12c84d2a(void) {
  FTRACE(0x12c84d2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84d2a push esi */
  push32((uint32_t)(ESI));
  /* 12c84d2b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c84d2f push edi */
  push32((uint32_t)(EDI));
  /* 12c84d30 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c84d33 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 12c84d37 je 0x12c84d3f */
  if (C.zf) goto L_12c84d3f;
  /* 12c84d39 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c84d3d jmp 0x12c84d56 */
  goto L_12c84d56;
L_12c84d3f:;
  /* 12c84d3f push esi */
  push32((uint32_t)(ESI));
  /* 12c84d40 call 0x12c86e40 */
  push32(0x12c84d45u); f_12c86e40();
  /* 12c84d45 push esi */
  push32((uint32_t)(ESI));
  /* 12c84d46 call 0x12c84d5b */
  push32(0x12c84d4bu); f_12c84d5b();
  /* 12c84d4b push esi */
  push32((uint32_t)(ESI));
  /* 12c84d4c mov edi, eax */
  EDI = (EAX);
  /* 12c84d4e call 0x12c86e92 */
  push32(0x12c84d53u); f_12c86e92();
  /* 12c84d53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c84d56:;
  /* 12c84d56 mov eax, edi */
  EAX = (EDI);
  /* 12c84d58 pop edi */
  EDI = (pop32());
  /* 12c84d59 pop esi */
  ESI = (pop32());
  /* 12c84d5a ret  */
  ESPCHK(0x12c84d2au, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x12c84d5b (76 bytes, 30 insns) */
void f_12c84d5b(void) {
  FTRACE(0x12c84d5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84d5b push esi */
  push32((uint32_t)(ESI));
  /* 12c84d5c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c84d60 push edi */
  push32((uint32_t)(EDI));
  /* 12c84d61 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c84d64 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 12c84d68 je 0x12c84d9e */
  if (C.zf) goto L_12c84d9e;
  /* 12c84d6a push esi */
  push32((uint32_t)(ESI));
  /* 12c84d6b call 0x12c8701d */
  push32(0x12c84d70u); f_12c8701d();
  /* 12c84d70 push esi */
  push32((uint32_t)(ESI));
  /* 12c84d71 mov edi, eax */
  EDI = (EAX);
  /* 12c84d73 call 0x12c86fc4 */
  push32(0x12c84d78u); f_12c86fc4();
  /* 12c84d78 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c84d7b call 0x12c86ee4 */
  push32(0x12c84d80u); f_12c86ee4();
  /* 12c84d80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84d85 jge 0x12c84d8c */
  if ((C.sf==C.of)) goto L_12c84d8c;
  /* 12c84d87 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 12c84d8a jmp 0x12c84d9e */
  goto L_12c84d9e;
L_12c84d8c:;
  /* 12c84d8c mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c84d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84d91 je 0x12c84d9e */
  if (C.zf) goto L_12c84d9e;
  /* 12c84d93 push eax */
  push32((uint32_t)(EAX));
  /* 12c84d94 call 0x12c85e59 */
  push32(0x12c84d99u); f_12c85e59();
  /* 12c84d99 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 12c84d9d pop ecx */
  ECX = (pop32());
L_12c84d9e:;
  /* 12c84d9e and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c84da2 mov eax, edi */
  EAX = (EDI);
  /* 12c84da4 pop edi */
  EDI = (pop32());
  /* 12c84da5 pop esi */
  ESI = (pop32());
  /* 12c84da6 ret  */
  ESPCHK(0x12c84d5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x12c84db0 (62 bytes, 35 insns) */
void f_12c84db0(void) {
  FTRACE(0x12c84db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c84db1 mov ebp, esp */
  EBP = (ESP);
  /* 12c84db3 push esi */
  push32((uint32_t)(ESI));
  /* 12c84db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c84db6 push eax */
  push32((uint32_t)(EAX));
  /* 12c84db7 push eax */
  push32((uint32_t)(EAX));
  /* 12c84db8 push eax */
  push32((uint32_t)(EAX));
  /* 12c84db9 push eax */
  push32((uint32_t)(EAX));
  /* 12c84dba push eax */
  push32((uint32_t)(EAX));
  /* 12c84dbb push eax */
  push32((uint32_t)(EAX));
  /* 12c84dbc push eax */
  push32((uint32_t)(EAX));
  /* 12c84dbd push eax */
  push32((uint32_t)(EAX));
  /* 12c84dbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c84dc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c84dc4:;
  /* 12c84dc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c84dc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c84dc8 je 0x12c84dd1 */
  if (C.zf) goto L_12c84dd1;
  /* 12c84dca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c84dcb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c84dcb");
  /* 12c84dcf jmp 0x12c84dc4 */
  goto L_12c84dc4;
L_12c84dd1:;
  /* 12c84dd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84dd4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c84dd7 nop  */
  /* nop */
L_12c84dd8:;
  /* 12c84dd8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c84dd9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c84ddb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c84ddd je 0x12c84de6 */
  if (C.zf) goto L_12c84de6;
  /* 12c84ddf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c84de0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c84de0");
  /* 12c84de4 jae 0x12c84dd8 */
  if (!C.cf) goto L_12c84dd8;
L_12c84de6:;
  /* 12c84de6 mov eax, ecx */
  EAX = (ECX);
  /* 12c84de8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84deb pop esi */
  ESI = (pop32());
  /* 12c84dec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84ded ret  */
  ESPCHK(0x12c84db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dee @ 0x12c84dee (47 bytes, 18 insns) */
void f_12c84dee(void) {
  FTRACE(0x12c84deeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84dee push ebp */
  push32((uint32_t)(EBP));
  /* 12c84def mov ebp, esp */
  EBP = (ESP);
  /* 12c84df1 push esi */
  push32((uint32_t)(ESI));
  /* 12c84df2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c84df5 call 0x12c86e40 */
  push32(0x12c84dfau); f_12c86e40();
  /* 12c84dfa push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c84dfd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c84e00 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c84e03 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c84e06 call 0x12c84e1d */
  push32(0x12c84e0bu); f_12c84e1d();
  /* 12c84e0b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c84e0e mov esi, eax */
  ESI = (EAX);
  /* 12c84e10 call 0x12c86e92 */
  push32(0x12c84e15u); f_12c86e92();
  /* 12c84e15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84e18 mov eax, esi */
  EAX = (ESI);
  /* 12c84e1a pop esi */
  ESI = (pop32());
  /* 12c84e1b pop ebp */
  EBP = (pop32());
  /* 12c84e1c ret  */
  ESPCHK(0x12c84deeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004e1d @ 0x12c84e1d (232 bytes, 92 insns) */
void f_12c84e1d(void) {
  FTRACE(0x12c84e1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84e1d push ebp */
  push32((uint32_t)(EBP));
  /* 12c84e1e mov ebp, esp */
  EBP = (ESP);
  /* 12c84e20 push ecx */
  push32((uint32_t)(ECX));
  /* 12c84e21 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84e22 push esi */
  push32((uint32_t)(ESI));
  /* 12c84e23 push edi */
  push32((uint32_t)(EDI));
  /* 12c84e24 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c84e27 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c84e2b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84e2e mov ecx, edi */
  ECX = (EDI);
  /* 12c84e30 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c84e32 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 12c84e35 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c84e38 jne 0x12c84e41 */
  if (!C.zf) goto L_12c84e41;
  /* 12c84e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c84e3c jmp 0x12c84eea */
  goto L_12c84eea;
L_12c84e41:;
  /* 12c84e41 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 12c84e44 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 12c84e4a je 0x12c84e54 */
  if (C.zf) goto L_12c84e54;
  /* 12c84e4c mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 12c84e4f mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 12c84e52 jmp 0x12c84e60 */
  goto L_12c84e60;
L_12c84e54:;
  /* 12c84e54 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 12c84e5b jmp 0x12c84e60 */
  goto L_12c84e60;
L_12c84e5d:;
  /* 12c84e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_12c84e60:;
  /* 12c84e60 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 12c84e66 je 0x12c84e92 */
  if (C.zf) goto L_12c84e92;
  /* 12c84e68 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c84e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84e6d je 0x12c84e92 */
  if (C.zf) goto L_12c84e92;
  /* 12c84e6f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84e71 mov edi, ecx */
  EDI = (ECX);
  /* 12c84e73 jb 0x12c84e77 */
  if (C.cf) goto L_12c84e77;
  /* 12c84e75 mov edi, eax */
  EDI = (EAX);
L_12c84e77:;
  /* 12c84e77 push edi */
  push32((uint32_t)(EDI));
  /* 12c84e78 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c84e7a push ebx */
  push32((uint32_t)(EBX));
  /* 12c84e7b call 0x12c860b0 */
  push32(0x12c84e80u); f_12c860b0();
  /* 12c84e80 sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c84e83 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c84e86 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c84e88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84e8b add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84e8d mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 12c84e90 jmp 0x12c84edd */
  goto L_12c84edd;
L_12c84e92:;
  /* 12c84e92 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84e95 jb 0x12c84ec5 */
  if (C.cf) goto L_12c84ec5;
  /* 12c84e97 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84e9b mov eax, ecx */
  EAX = (ECX);
  /* 12c84e9d je 0x12c84ea8 */
  if (C.zf) goto L_12c84ea8;
  /* 12c84e9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c84ea1 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c84ea4 mov eax, ecx */
  EAX = (ECX);
  /* 12c84ea6 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c84ea8:;
  /* 12c84ea8 push eax */
  push32((uint32_t)(EAX));
  /* 12c84ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84eaa push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c84ead call 0x12c87202 */
  push32(0x12c84eb2u); f_12c87202();
  /* 12c84eb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c84eb7 je 0x12c84eef */
  if (C.zf) goto L_12c84eef;
  /* 12c84eb9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84ebc je 0x12c84ef5 */
  if (C.zf) goto L_12c84ef5;
  /* 12c84ebe sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 12c84ec1 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84ec3 jmp 0x12c84edd */
  goto L_12c84edd;
L_12c84ec5:;
  /* 12c84ec5 push esi */
  push32((uint32_t)(ESI));
  /* 12c84ec6 call 0x12c87126 */
  push32(0x12c84ecbu); f_12c87126();
  /* 12c84ecb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84ece pop ecx */
  ECX = (pop32());
  /* 12c84ecf je 0x12c84ef9 */
  if (C.zf) goto L_12c84ef9;
  /* 12c84ed1 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 12c84ed3 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 12c84ed6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c84ed7 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 12c84eda mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12c84edd:;
  /* 12c84edd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84ee1 jne 0x12c84e5d */
  if (!C.zf) goto L_12c84e5d;
  /* 12c84ee7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_12c84eea:;
  /* 12c84eea pop edi */
  EDI = (pop32());
  /* 12c84eeb pop esi */
  ESI = (pop32());
  /* 12c84eec pop ebx */
  EBX = (pop32());
  /* 12c84eed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c84eee ret  */
  ESPCHK(0x12c84e1du, _esp0);
  ESP += 4; return;
L_12c84eef:;
  /* 12c84eef or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c84ef3 jmp 0x12c84ef9 */
  goto L_12c84ef9;
L_12c84ef5:;
  /* 12c84ef5 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_12c84ef9:;
  /* 12c84ef9 mov eax, edi */
  EAX = (EDI);
  /* 12c84efb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c84efd sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84f00 div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c84f03 jmp 0x12c84eea */
  goto L_12c84eea;
}

/* FUN_10004f05 @ 0x12c84f05 (34 bytes, 15 insns) */
void f_12c84f05(void) {
  FTRACE(0x12c84f05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84f05 push esi */
  push32((uint32_t)(ESI));
  /* 12c84f06 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c84f0a push edi */
  push32((uint32_t)(EDI));
  /* 12c84f0b push esi */
  push32((uint32_t)(ESI));
  /* 12c84f0c call 0x12c86e40 */
  push32(0x12c84f11u); f_12c86e40();
  /* 12c84f11 push esi */
  push32((uint32_t)(ESI));
  /* 12c84f12 call 0x12c84f27 */
  push32(0x12c84f17u); f_12c84f27();
  /* 12c84f17 push esi */
  push32((uint32_t)(ESI));
  /* 12c84f18 mov edi, eax */
  EDI = (EAX);
  /* 12c84f1a call 0x12c86e92 */
  push32(0x12c84f1fu); f_12c86e92();
  /* 12c84f1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84f22 mov eax, edi */
  EAX = (EDI);
  /* 12c84f24 pop edi */
  EDI = (pop32());
  /* 12c84f25 pop esi */
  ESI = (pop32());
  /* 12c84f26 ret  */
  ESPCHK(0x12c84f05u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f27 @ 0x12c84f27 (353 bytes, 127 insns) */
void f_12c84f27(void) {
  FTRACE(0x12c84f27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c84f27 push ebp */
  push32((uint32_t)(EBP));
  /* 12c84f28 mov ebp, esp */
  EBP = (ESP);
  /* 12c84f2a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84f2d push ebx */
  push32((uint32_t)(EBX));
  /* 12c84f2e push esi */
  push32((uint32_t)(ESI));
  /* 12c84f2f push edi */
  push32((uint32_t)(EDI));
  /* 12c84f30 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c84f33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c84f35 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 12c84f38 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84f3b mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 12c84f3e jge 0x12c84f43 */
  if ((C.sf==C.of)) goto L_12c84f43;
  /* 12c84f40 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_12c84f43:;
  /* 12c84f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c84f45 push ebx */
  push32((uint32_t)(EBX));
  /* 12c84f46 push esi */
  push32((uint32_t)(ESI));
  /* 12c84f47 call 0x12c876d5 */
  push32(0x12c84f4cu); f_12c876d5();
  /* 12c84f4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84f4f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84f51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c84f54 jl 0x12c84fb5 */
  if ((C.sf!=C.of)) goto L_12c84fb5;
  /* 12c84f56 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 12c84f59 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 12c84f5e jne 0x12c84f68 */
  if (!C.zf) goto L_12c84f68;
  /* 12c84f60 sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84f63 jmp 0x12c85083 */
  goto L_12c85083;
L_12c84f68:;
  /* 12c84f68 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c84f6a mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c84f6d mov ebx, eax */
  EBX = (EAX);
  /* 12c84f6f sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84f71 test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 12c84f74 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 12c84f77 je 0x12c84fa5 */
  if (C.zf) goto L_12c84fa5;
  /* 12c84f79 mov ebx, esi */
  EBX = (ESI);
  /* 12c84f7b mov ecx, esi */
  ECX = (ESI);
  /* 12c84f7d sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 12c84f80 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c84f83 mov ebx, dword ptr [ebx*4 + 0x12caca20] */
  EBX = (r32((uint32_t)(EBX*4 + 0x12caca20)));
  /* 12c84f8a lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 12c84f8d test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 12c84f92 je 0x12c84fbd */
  if (C.zf) goto L_12c84fbd;
  /* 12c84f94 mov ecx, edx */
  ECX = (EDX);
L_12c84f96:;
  /* 12c84f96 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84f98 jae 0x12c84fbd */
  if (!C.cf) goto L_12c84fbd;
  /* 12c84f9a cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c84f9d jne 0x12c84fa2 */
  if (!C.zf) goto L_12c84fa2;
  /* 12c84f9f inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_12c84fa2:;
  /* 12c84fa2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c84fa3 jmp 0x12c84f96 */
  goto L_12c84f96;
L_12c84fa5:;
  /* 12c84fa5 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 12c84fa8 jne 0x12c84fbd */
  if (!C.zf) goto L_12c84fbd;
  /* 12c84faa call 0x12c874b3 */
  push32(0x12c84fafu); f_12c874b3();
  /* 12c84faf mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12c84fb5:;
  /* 12c84fb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c84fb8 jmp 0x12c85083 */
  goto L_12c85083;
L_12c84fbd:;
  /* 12c84fbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c84fc1 jne 0x12c84fcb */
  if (!C.zf) goto L_12c84fcb;
  /* 12c84fc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c84fc6 jmp 0x12c85083 */
  goto L_12c85083;
L_12c84fcb:;
  /* 12c84fcb test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 12c84fcf je 0x12c8507b */
  if (C.zf) goto L_12c8507b;
  /* 12c84fd5 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c84fd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c84fda jne 0x12c84fe4 */
  if (!C.zf) goto L_12c84fe4;
  /* 12c84fdc and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c84fdf jmp 0x12c8507b */
  goto L_12c8507b;
L_12c84fe4:;
  /* 12c84fe4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c84fe6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c84fe8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c84feb mov eax, esi */
  EAX = (ESI);
  /* 12c84fed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c84ff0 lea ebx, [eax*4 + 0x12caca20] */
  EBX = ((uint32_t)(EAX*4 + 0x12caca20));
  /* 12c84ff7 mov eax, esi */
  EAX = (ESI);
  /* 12c84ff9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c84ffc lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c84fff mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c85001 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c85004 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 12c85009 je 0x12c85075 */
  if (C.zf) goto L_12c85075;
  /* 12c8500b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8500d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8500f push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 12c85012 call 0x12c876d5 */
  push32(0x12c85017u); f_12c876d5();
  /* 12c85017 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8501a cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8501d jne 0x12c8503c */
  if (!C.zf) goto L_12c8503c;
  /* 12c8501f mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c85022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85025 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_12c85027:;
  /* 12c85027 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85029 jae 0x12c85036 */
  if (!C.cf) goto L_12c85036;
  /* 12c8502b cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8502e jne 0x12c85033 */
  if (!C.zf) goto L_12c85033;
  /* 12c85030 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_12c85033:;
  /* 12c85033 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c85034 jmp 0x12c85027 */
  goto L_12c85027;
L_12c85036:;
  /* 12c85036 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 12c8503a jmp 0x12c85070 */
  goto L_12c85070;
L_12c8503c:;
  /* 12c8503c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8503e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 12c85041 push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 12c85044 call 0x12c876d5 */
  push32(0x12c85049u); f_12c876d5();
  /* 12c85049 mov eax, 0x200 */
  EAX = (0x200u);
  /* 12c8504e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85051 cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85054 ja 0x12c85063 */
  if ((!C.cf&&!C.zf)) goto L_12c85063;
  /* 12c85056 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 12c85059 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 12c8505c je 0x12c85063 */
  if (C.zf) goto L_12c85063;
  /* 12c8505e test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 12c85061 je 0x12c85066 */
  if (C.zf) goto L_12c85066;
L_12c85063:;
  /* 12c85063 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_12c85066:;
  /* 12c85066 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c85069 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8506b test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_12c85070:;
  /* 12c85070 je 0x12c85075 */
  if (C.zf) goto L_12c85075;
  /* 12c85072 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_12c85075:;
  /* 12c85075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85078 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_12c8507b:;
  /* 12c8507b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c8507e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c85081 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c85083:;
  /* 12c85083 pop edi */
  EDI = (pop32());
  /* 12c85084 pop esi */
  ESI = (pop32());
  /* 12c85085 pop ebx */
  EBX = (pop32());
  /* 12c85086 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85087 ret  */
  ESPCHK(0x12c84f27u, _esp0);
  ESP += 4; return;
}

/* FUN_10005088 @ 0x12c85088 (44 bytes, 17 insns) */
void f_12c85088(void) {
  FTRACE(0x12c85088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85088 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85089 mov ebp, esp */
  EBP = (ESP);
  /* 12c8508b push esi */
  push32((uint32_t)(ESI));
  /* 12c8508c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8508f call 0x12c86e40 */
  push32(0x12c85094u); f_12c86e40();
  /* 12c85094 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c85097 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c8509a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8509d call 0x12c850b4 */
  push32(0x12c850a2u); f_12c850b4();
  /* 12c850a2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c850a5 mov esi, eax */
  ESI = (EAX);
  /* 12c850a7 call 0x12c86e92 */
  push32(0x12c850acu); f_12c86e92();
  /* 12c850ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c850af mov eax, esi */
  EAX = (ESI);
  /* 12c850b1 pop esi */
  ESI = (pop32());
  /* 12c850b2 pop ebp */
  EBP = (pop32());
  /* 12c850b3 ret  */
  ESPCHK(0x12c85088u, _esp0);
  ESP += 4; return;
}

/* FUN_100050b4 @ 0x12c850b4 (141 bytes, 55 insns) */
void f_12c850b4(void) {
  FTRACE(0x12c850b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c850b4 push esi */
  push32((uint32_t)(ESI));
  /* 12c850b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c850b9 push edi */
  push32((uint32_t)(EDI));
  /* 12c850ba mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c850bd test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 12c850bf je 0x12c85130 */
  if (C.zf) goto L_12c85130;
  /* 12c850c1 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c850c5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c850c7 je 0x12c850d3 */
  if (C.zf) goto L_12c850d3;
  /* 12c850c9 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c850cc je 0x12c850d3 */
  if (C.zf) goto L_12c850d3;
  /* 12c850ce cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c850d1 jne 0x12c85130 */
  if (!C.zf) goto L_12c85130;
L_12c850d3:;
  /* 12c850d3 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 12c850d5 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c850d8 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c850db jne 0x12c850ea */
  if (!C.zf) goto L_12c850ea;
  /* 12c850dd push esi */
  push32((uint32_t)(ESI));
  /* 12c850de call 0x12c84f27 */
  push32(0x12c850e3u); f_12c84f27();
  /* 12c850e3 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c850e7 pop ecx */
  ECX = (pop32());
  /* 12c850e8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c850ea:;
  /* 12c850ea push esi */
  push32((uint32_t)(ESI));
  /* 12c850eb call 0x12c8701d */
  push32(0x12c850f0u); f_12c8701d();
  /* 12c850f0 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c850f3 pop ecx */
  ECX = (pop32());
  /* 12c850f4 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 12c850f6 je 0x12c850ff */
  if (C.zf) goto L_12c850ff;
  /* 12c850f8 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c850fa mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c850fd jmp 0x12c85113 */
  goto L_12c85113;
L_12c850ff:;
  /* 12c850ff test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 12c85101 je 0x12c85113 */
  if (C.zf) goto L_12c85113;
  /* 12c85103 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 12c85105 je 0x12c85113 */
  if (C.zf) goto L_12c85113;
  /* 12c85107 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 12c8510a jne 0x12c85113 */
  if (!C.zf) goto L_12c85113;
  /* 12c8510c mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_12c85113:;
  /* 12c85113 push edi */
  push32((uint32_t)(EDI));
  /* 12c85114 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 12c85118 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c8511b call 0x12c876d5 */
  push32(0x12c85120u); f_12c876d5();
  /* 12c85120 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85123 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c85125 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85128 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 12c8512b dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8512c mov eax, ecx */
  EAX = (ECX);
  /* 12c8512e jmp 0x12c8513e */
  goto L_12c8513e;
L_12c85130:;
  /* 12c85130 call 0x12c874b3 */
  push32(0x12c85135u); f_12c874b3();
  /* 12c85135 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12c8513b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c8513e:;
  /* 12c8513e pop edi */
  EDI = (pop32());
  /* 12c8513f pop esi */
  ESI = (pop32());
  /* 12c85140 ret  */
  ESPCHK(0x12c850b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005141 @ 0x12c85141 (49 bytes, 21 insns) */
void f_12c85141(void) {
  FTRACE(0x12c85141u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85141 push esi */
  push32((uint32_t)(ESI));
  /* 12c85142 call 0x12c8791d */
  push32(0x12c85147u); f_12c8791d();
  /* 12c85147 mov esi, eax */
  ESI = (EAX);
  /* 12c85149 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8514b jne 0x12c8514f */
  if (!C.zf) goto L_12c8514f;
  /* 12c8514d pop esi */
  ESI = (pop32());
  /* 12c8514e ret  */
  ESPCHK(0x12c85141u, _esp0);
  ESP += 4; return;
L_12c8514f:;
  /* 12c8514f push edi */
  push32((uint32_t)(EDI));
  /* 12c85150 push esi */
  push32((uint32_t)(ESI));
  /* 12c85151 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c85155 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c85159 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c8515d call 0x12c877ad */
  push32(0x12c85162u); f_12c877ad();
  /* 12c85162 push esi */
  push32((uint32_t)(ESI));
  /* 12c85163 mov edi, eax */
  EDI = (EAX);
  /* 12c85165 call 0x12c86e92 */
  push32(0x12c8516au); f_12c86e92();
  /* 12c8516a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8516d mov eax, edi */
  EAX = (EDI);
  /* 12c8516f pop edi */
  EDI = (pop32());
  /* 12c85170 pop esi */
  ESI = (pop32());
  /* 12c85171 ret  */
  ESPCHK(0x12c85141u, _esp0);
  ESP += 4; return;
}

/* FUN_10005172 @ 0x12c85172 (19 bytes, 6 insns) */
void f_12c85172(void) {
  FTRACE(0x12c85172u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85172 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c85174 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c85178 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c8517c call 0x12c85141 */
  push32(0x12c85181u); f_12c85141();
  /* 12c85181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85184 ret  */
  ESPCHK(0x12c85172u, _esp0);
  ESP += 4; return;
}

/* FUN_10005185 @ 0x12c85185 (45 bytes, 17 insns) */
void f_12c85185(void) {
  FTRACE(0x12c85185u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85185 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85186 mov ebp, esp */
  EBP = (ESP);
  /* 12c85188 push ecx */
  push32((uint32_t)(ECX));
  /* 12c85189 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8518a push esi */
  push32((uint32_t)(ESI));
  /* 12c8518b push edi */
  push32((uint32_t)(EDI));
  /* 12c8518c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8518f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85192 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c85195 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 12c8519c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8519e mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 12c851a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c851a7 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c851aa mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 12c851ad mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 12c851b0 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100051b9 @ 0x12c851b9 (7 bytes, 4 insns) */
void f_12c851b9(void) {
  FTRACE(0x12c851b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c851b9 pop eax */
  EAX = (pop32());
  /* 12c851ba pop ecx */
  ECX = (pop32());
  /* 12c851bb xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 12c851be jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100051c0 @ 0x12c851c0 (7 bytes, 4 insns) */
void f_12c851c0(void) {
  FTRACE(0x12c851c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c851c0 pop eax */
  EAX = (pop32());
  /* 12c851c1 pop ecx */
  ECX = (pop32());
  /* 12c851c2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 12c851c5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100051c7 @ 0x12c851c7 (79 bytes, 29 insns) */
void f_12c851c7(void) {
  FTRACE(0x12c851c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c851c7 push ebp */
  push32((uint32_t)(EBP));
  /* 12c851c8 mov ebp, esp */
  EBP = (ESP);
  /* 12c851ca push ecx */
  push32((uint32_t)(ECX));
  /* 12c851cb push ecx */
  push32((uint32_t)(ECX));
  /* 12c851cc push ebx */
  push32((uint32_t)(EBX));
  /* 12c851cd push esi */
  push32((uint32_t)(ESI));
  /* 12c851ce push edi */
  push32((uint32_t)(EDI));
  /* 12c851cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c851d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c851d8 mov dword ptr [ebp - 4], 0x12c851ef */
  w32((uint32_t)(EBP + -0x4), (0x12c851efu));
  /* 12c851df push 0 */
  push32((uint32_t)(0x0u));
  /* 12c851e1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c851e4 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 12c851e7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c851ea call 0x12c8d51c */
  push32(0x12c851efu); f_12c8d51c();
  /* 12c851ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c851f2 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c851f5 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 12c851f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c851fa mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c851fd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c85203 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c85206 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 12c85208 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 12c8520f pop edi */
  EDI = (pop32());
  /* 12c85210 pop esi */
  ESI = (pop32());
  /* 12c85211 pop ebx */
  EBX = (pop32());
  /* 12c85212 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85213 ret 8 */
  ESPCHK(0x12c851c7u, _esp0);
  ESP += 12; return;
}

/* FUN_10005216 @ 0x12c85216 (54 bytes, 27 insns) */
void f_12c85216(void) {
  FTRACE(0x12c85216u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85216 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85217 mov ebp, esp */
  EBP = (ESP);
  /* 12c85219 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8521c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8521d push esi */
  push32((uint32_t)(ESI));
  /* 12c8521e push edi */
  push32((uint32_t)(EDI));
  /* 12c8521f cld  */
  C.df=0;
  /* 12c85220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c85223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85225 push eax */
  push32((uint32_t)(EAX));
  /* 12c85226 push eax */
  push32((uint32_t)(EAX));
  /* 12c85227 push eax */
  push32((uint32_t)(EAX));
  /* 12c85228 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 12c8522b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c8522e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c85231 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c85234 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c85237 call 0x12c879e5 */
  push32(0x12c8523cu); f_12c879e5();
  /* 12c8523c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8523f mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 12c85242 pop edi */
  EDI = (pop32());
  /* 12c85243 pop esi */
  ESI = (pop32());
  /* 12c85244 pop ebx */
  EBX = (pop32());
  /* 12c85245 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c85248 mov esp, ebp */
  ESP = (EBP);
  /* 12c8524a pop ebp */
  EBP = (pop32());
  /* 12c8524b ret  */
  ESPCHK(0x12c85216u, _esp0);
  ESP += 4; return;
}

/* FUN_1000524c @ 0x12c8524c (84 bytes, 26 insns) */
void f_12c8524c(void) {
  FTRACE(0x12c8524cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8524c push ebp */
  push32((uint32_t)(EBP));
  /* 12c8524d mov ebp, esp */
  EBP = (ESP);
  /* 12c8524f sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85252 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c85255 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 12c85259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8525c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c8525f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c85262 mov dword ptr [ebp - 0x10], 0x12c852a0 */
  w32((uint32_t)(EBP + -0x10), (0x12c852a0u));
  /* 12c85269 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8526a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c8526d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c85270 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c85276 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c85279 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c8527f mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 12c85285 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c85288 push ecx */
  push32((uint32_t)(ECX));
  /* 12c85289 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c8528c call 0x12c881f0 */
  push32(0x12c85291u); f_12c881f0();
  /* 12c85291 mov ecx, eax */
  ECX = (EAX);
  /* 12c85293 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c85296 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 12c8529c mov eax, ecx */
  EAX = (ECX);
  /* 12c8529e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8529f ret  */
  ESPCHK(0x12c8524cu, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x12c852a0 (37 bytes, 16 insns) */
void f_12c852a0(void) {
  FTRACE(0x12c852a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c852a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c852a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c852a3 cld  */
  C.df=0;
  /* 12c852a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c852a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c852a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c852aa push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 12c852ad push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 12c852b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c852b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c852b5 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 12c852b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c852bb call 0x12c879e5 */
  push32(0x12c852c0u); f_12c879e5();
  /* 12c852c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c852c3 pop ebp */
  EBP = (pop32());
  /* 12c852c4 ret  */
  ESPCHK(0x12c852a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c5 @ 0x12c852c5 (182 bytes, 57 insns) */
void f_12c852c5(void) {
  FTRACE(0x12c852c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c852c5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c852c6 mov ebp, esp */
  EBP = (ESP);
  /* 12c852c8 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c852cb push ebx */
  push32((uint32_t)(EBX));
  /* 12c852cc push esi */
  push32((uint32_t)(ESI));
  /* 12c852cd push edi */
  push32((uint32_t)(EDI));
  /* 12c852ce and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 12c852d2 mov dword ptr [ebp - 0x24], 0x12c8537b */
  w32((uint32_t)(EBP + -0x24), (0x12c8537bu));
  /* 12c852d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c852dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c852df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c852e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c852e5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c852e8 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c852eb mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c852ee mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c852f1 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 12c852f5 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 12c852f9 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c852fd and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c85301 mov dword ptr [ebp - 0x10], 0x12c8534d */
  w32((uint32_t)(EBP + -0x10), (0x12c8534du));
  /* 12c85308 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 12c8530b mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 12c8530e mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c85314 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c85317 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 12c8531d mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 12c85323 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 12c8532a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8532d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c85330 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c85333 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c85336 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12c85339 push eax */
  push32((uint32_t)(EAX));
  /* 12c8533a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8533d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 12c8533f call 0x12c882c1 */
  push32(0x12c85344u); f_12c882c1();
  /* 12c85344 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x12c85347u);
  /* 12c85347 pop ecx */
  ECX = (pop32());
  /* 12c85348 pop ecx */
  ECX = (pop32());
  /* 12c85349 and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 12c8534d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85351 je 0x12c8536a */
  if (C.zf) goto L_12c8536a;
  /* 12c85353 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 12c8535a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8535c mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c8535f mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 12c85361 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 12c85368 jmp 0x12c85373 */
  goto L_12c85373;
L_12c8536a:;
  /* 12c8536a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c8536d mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_12c85373:;
  /* 12c85373 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c85376 pop edi */
  EDI = (pop32());
  /* 12c85377 pop esi */
  ESI = (pop32());
  /* 12c85378 pop ebx */
  EBX = (pop32());
  /* 12c85379 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8537a ret  */
  ESPCHK(0x12c852c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000537b @ 0x12c8537b (114 bytes, 47 insns) */
void f_12c8537b(void) {
  FTRACE(0x12c8537bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8537b push ebp */
  push32((uint32_t)(EBP));
  /* 12c8537c mov ebp, esp */
  EBP = (ESP);
  /* 12c8537e push ebx */
  push32((uint32_t)(EBX));
  /* 12c8537f push esi */
  push32((uint32_t)(ESI));
  /* 12c85380 push edi */
  push32((uint32_t)(EDI));
  /* 12c85381 cld  */
  C.df=0;
  /* 12c85382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85385 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c85388 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8538b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8538d je 0x12c8539e */
  if (C.zf) goto L_12c8539e;
  /* 12c8538f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c85392 mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 12c85399 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8539b pop eax */
  EAX = (pop32());
  /* 12c8539c jmp 0x12c853eb */
  goto L_12c853eb;
L_12c8539e:;
  /* 12c8539e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c853a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c853a3 push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 12c853a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c853a9 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 12c853ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c853af push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 12c853b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c853b4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c853b7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c853ba push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 12c853bd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c853c0 call 0x12c879e5 */
  push32(0x12c853c5u); f_12c879e5();
  /* 12c853c5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c853c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c853cb cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c853cf jne 0x12c853dc */
  if (!C.zf) goto L_12c853dc;
  /* 12c853d1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c853d4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c853d7 call 0x12c851c7 */
  push32(0x12c853dcu); f_12c851c7();
L_12c853dc:;
  /* 12c853dc mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c853df mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 12c853e2 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 12c853e5 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 12c853e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c853ea pop eax */
  EAX = (pop32());
L_12c853eb:;
  /* 12c853eb pop edi */
  EDI = (pop32());
  /* 12c853ec pop esi */
  ESI = (pop32());
  /* 12c853ed pop ebx */
  EBX = (pop32());
  /* 12c853ee pop ebp */
  EBP = (pop32());
  /* 12c853ef ret  */
  ESPCHK(0x12c8537bu, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x12c853f0 (123 bytes, 51 insns) */
void f_12c853f0(void) {
  FTRACE(0x12c853f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c853f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c853f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c853f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c853f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c853f5 push esi */
  push32((uint32_t)(ESI));
  /* 12c853f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c853fa push edi */
  push32((uint32_t)(EDI));
  /* 12c853fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c853fe mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 12c85401 mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 12c85404 mov eax, esi */
  EAX = (ESI);
  /* 12c85406 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 12c85409 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c8540c jl 0x12c85447 */
  if ((C.sf!=C.of)) goto L_12c85447;
L_12c8540e:;
  /* 12c8540e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85411 jne 0x12c85418 */
  if (!C.zf) goto L_12c85418;
  /* 12c85413 call 0x12c86b9d */
  push32(0x12c85418u); f_12c86b9d();
L_12c85418:;
  /* 12c85418 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8541b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8541c lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 12c8541f cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85423 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 12c85426 jge 0x12c8542d */
  if ((C.sf==C.of)) goto L_12c8542d;
  /* 12c85428 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8542b jle 0x12c85432 */
  if ((C.zf||C.sf!=C.of)) goto L_12c85432;
L_12c8542d:;
  /* 12c8542d cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85430 jne 0x12c8543e */
  if (!C.zf) goto L_12c8543e;
L_12c85432:;
  /* 12c85432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85435 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 12c85438 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c8543b mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_12c8543e:;
  /* 12c8543e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85442 jge 0x12c8540e */
  if ((C.sf==C.of)) goto L_12c8540e;
  /* 12c85444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c85447:;
  /* 12c85447 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c8544a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8544b mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 12c8544d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c85450 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c85452 cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85455 ja 0x12c8545b */
  if ((!C.cf&&!C.zf)) goto L_12c8545b;
  /* 12c85457 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85459 jbe 0x12c85460 */
  if ((C.cf||C.zf)) goto L_12c85460;
L_12c8545b:;
  /* 12c8545b call 0x12c86b9d */
  push32(0x12c85460u); f_12c86b9d();
L_12c85460:;
  /* 12c85460 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 12c85463 pop edi */
  EDI = (pop32());
  /* 12c85464 pop esi */
  ESI = (pop32());
  /* 12c85465 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 12c85468 pop ebx */
  EBX = (pop32());
  /* 12c85469 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8546a ret  */
  ESPCHK(0x12c853f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x12c85470 (47 bytes, 17 insns) */
void f_12c85470(void) {
  FTRACE(0x12c85470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85470 push ecx */
  push32((uint32_t)(ECX));
  /* 12c85471 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85476 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12c8547a jb 0x12c85490 */
  if (C.cf) goto L_12c85490;
L_12c8547c:;
  /* 12c8547c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85482 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85487 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12c85489 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8548e jae 0x12c8547c */
  if (!C.cf) goto L_12c8547c;
L_12c85490:;
  /* 12c85490 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85492 mov eax, esp */
  EAX = (ESP);
  /* 12c85494 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12c85496 mov esp, ecx */
  ESP = (ECX);
  /* 12c85498 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c8549a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c8549d push eax */
  push32((uint32_t)(EAX));
  /* 12c8549e ret  */
  ESPCHK(0x12c85470u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12c854a0 (32 bytes, 18 insns) */
void f_12c854a0(void) {
  FTRACE(0x12c854a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c854a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c854a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c854a3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c854a4 push esi */
  push32((uint32_t)(ESI));
  /* 12c854a5 push edi */
  push32((uint32_t)(EDI));
  /* 12c854a6 push ebp */
  push32((uint32_t)(EBP));
  /* 12c854a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c854a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c854ab push 0x12c854b8 */
  push32((uint32_t)(0x12c854b8u));
  /* 12c854b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c854b3 call 0x12c8d51c */
  push32(0x12c854b8u); f_12c8d51c();
  /* 12c854b8 pop ebp */
  EBP = (pop32());
  /* 12c854b9 pop edi */
  EDI = (pop32());
  /* 12c854ba pop esi */
  ESI = (pop32());
  /* 12c854bb pop ebx */
  EBX = (pop32());
  /* 12c854bc mov esp, ebp */
  ESP = (EBP);
  /* 12c854be pop ebp */
  EBP = (pop32());
  /* 12c854bf ret  */
  ESPCHK(0x12c854a0u, _esp0);
  ESP += 4; return;
}

