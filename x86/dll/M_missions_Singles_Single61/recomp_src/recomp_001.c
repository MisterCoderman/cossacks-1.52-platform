#include "recomp.h"

/* FUN_10006f70 @ 0x11a26f70 (69 bytes, 19 insns) */
void f_11a26f70(void) {
  FTRACE(0x11a26f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26f70 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a26f74 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a26f78 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26f7b sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11a26f7e lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11a26f82 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a26f86 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a26f89 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a26f8b and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11a26f8e cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f94 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11a26f9b jne 0x11a26fb4 */
  if (!C.zf) goto L_11a26fb4;
  /* 11a26f9d inc dword ptr [0x11a3005c] */
  { uint32_t _r=(r32((uint32_t)(0x11a3005c)))+1; w32((uint32_t)(0x11a3005c), (_r)); fl_inc(_r,32); }
  /* 11a26fa3 cmp dword ptr [0x11a3005c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a3005c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26faa jne 0x11a26fb4 */
  if (!C.zf) goto L_11a26fb4;
  /* 11a26fac push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a26fae call 0x11a26e57 */
  push32(0x11a26fb3u); f_11a26e57();
  /* 11a26fb3 pop ecx */
  ECX = (pop32());
L_11a26fb4:;
  /* 11a26fb4 ret  */
  ESPCHK(0x11a26f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb5 @ 0x11a26fb5 (520 bytes, 180 insns) */
void f_11a26fb5(void) {
  FTRACE(0x11a26fb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26fb5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26fb6 mov ebp, esp */
  EBP = (ESP);
  /* 11a26fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a26fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a26fba push ebx */
  push32((uint32_t)(EBX));
  /* 11a26fbb push esi */
  push32((uint32_t)(ESI));
  /* 11a26fbc mov esi, dword ptr [0x11a2e9e8] */
  ESI = (r32((uint32_t)(0x11a2e9e8)));
  /* 11a26fc2 push edi */
  push32((uint32_t)(EDI));
L_11a26fc3:;
  /* 11a26fc3 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a26fc6 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26fc9 je 0x11a2706e */
  if (C.zf) goto L_11a2706e;
  /* 11a26fcf mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11a26fd2 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11a26fd8 mov eax, edi */
  EAX = (EDI);
  /* 11a26fda sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26fdc sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26fdf sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a26fe2 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a26fe5 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26fe7 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a26fec jae 0x11a27028 */
  if (!C.cf) goto L_11a27028;
L_11a26fee:;
  /* 11a26fee mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11a26ff0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26ff3 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26ff5 jl 0x11a27011 */
  if ((C.sf!=C.of)) goto L_11a27011;
  /* 11a26ff7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26ffa jbe 0x11a27011 */
  if ((C.cf||C.zf)) goto L_11a27011;
  /* 11a26ffc push ebx */
  push32((uint32_t)(EBX));
  /* 11a26ffd push ecx */
  push32((uint32_t)(ECX));
  /* 11a26ffe push eax */
  push32((uint32_t)(EAX));
  /* 11a26fff call 0x11a271bd */
  push32(0x11a27004u); f_11a271bd();
  /* 11a27004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27009 jne 0x11a27080 */
  if (!C.zf) goto L_11a27080;
  /* 11a2700b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a2700e mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a27011:;
  /* 11a27011 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27014 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11a2701a add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2701f cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27021 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a27024 jb 0x11a26fee */
  if (C.cf) goto L_11a26fee;
  /* 11a27026 jmp 0x11a2702b */
  goto L_11a2702b;
L_11a27028:;
  /* 11a27028 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a2702b:;
  /* 11a2702b mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a2702e mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a27031 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11a27034 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a27037 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27039 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a2703c jae 0x11a27071 */
  if (!C.cf) goto L_11a27071;
L_11a2703e:;
  /* 11a2703e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a27040 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27042 jl 0x11a2705d */
  if ((C.sf!=C.of)) goto L_11a2705d;
  /* 11a27044 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27047 jbe 0x11a2705d */
  if ((C.cf||C.zf)) goto L_11a2705d;
  /* 11a27049 push ebx */
  push32((uint32_t)(EBX));
  /* 11a2704a push eax */
  push32((uint32_t)(EAX));
  /* 11a2704b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a2704e call 0x11a271bd */
  push32(0x11a27053u); f_11a271bd();
  /* 11a27053 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27058 jne 0x11a27080 */
  if (!C.zf) goto L_11a27080;
  /* 11a2705a mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a2705d:;
  /* 11a2705d add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a27064 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27067 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2706a jb 0x11a2703e */
  if (C.cf) goto L_11a2703e;
  /* 11a2706c jmp 0x11a27071 */
  goto L_11a27071;
L_11a2706e:;
  /* 11a2706e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a27071:;
  /* 11a27071 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11a27073 cmp esi, dword ptr [0x11a2e9e8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a2e9e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27079 je 0x11a27090 */
  if (C.zf) goto L_11a27090;
  /* 11a2707b jmp 0x11a26fc3 */
  goto L_11a26fc3;
L_11a27080:;
  /* 11a27080 mov dword ptr [0x11a2e9e8], esi */
  w32((uint32_t)(0x11a2e9e8), (ESI));
  /* 11a27086 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a27088 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11a2708b jmp 0x11a271b8 */
  goto L_11a271b8;
L_11a27090:;
  /* 11a27090 mov eax, 0x11a2c9c8 */
  EAX = (0x11a2c9c8u);
  /* 11a27095 mov edi, eax */
  EDI = (EAX);
L_11a27097:;
  /* 11a27097 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2709b je 0x11a270a3 */
  if (C.zf) goto L_11a270a3;
  /* 11a2709d cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a270a1 jne 0x11a270af */
  if (!C.zf) goto L_11a270af;
L_11a270a3:;
  /* 11a270a3 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11a270a5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a270a7 je 0x11a27184 */
  if (C.zf) goto L_11a27184;
  /* 11a270ad jmp 0x11a27097 */
  goto L_11a27097;
L_11a270af:;
  /* 11a270af mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a270b2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a270b6 mov esi, ebx */
  ESI = (EBX);
  /* 11a270b8 mov eax, ebx */
  EAX = (EBX);
  /* 11a270ba sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a270bc sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a270bf sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a270c2 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11a270c5 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a270c8 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a270cb jne 0x11a270de */
  if (!C.zf) goto L_11a270de;
L_11a270cd:;
  /* 11a270cd cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a270d1 jge 0x11a270de */
  if ((C.sf==C.of)) goto L_11a270de;
  /* 11a270d3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a270d6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a270d9 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a270dc je 0x11a270cd */
  if (C.zf) goto L_11a270cd;
L_11a270de:;
  /* 11a270de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a270e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a270e3 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a270e6 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a270eb push eax */
  push32((uint32_t)(EAX));
  /* 11a270ec push esi */
  push32((uint32_t)(ESI));
  /* 11a270ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a270f0 call dword ptr [0x11a2a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a058))), 0x11a270f6u);
  /* 11a270f6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a270f8 jne 0x11a271b6 */
  if (!C.zf) goto L_11a271b6;
  /* 11a270fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11a27100 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11a27103 push esi */
  push32((uint32_t)(ESI));
  /* 11a27104 call 0x11a28bd0 */
  push32(0x11a27109u); f_11a28bd0();
  /* 11a27109 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a2710c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2710f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a27111 mov ecx, ebx */
  ECX = (EBX);
  /* 11a27113 jle 0x11a27145 */
  if ((C.zf||C.sf!=C.of)) goto L_11a27145;
  /* 11a27115 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a27118 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a2711b:;
  /* 11a2711b or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11a27122 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11a27125 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11a27128 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11a2712d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a2712f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a27131 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11a27138 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2713d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27140 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11a27143 jne 0x11a2711b */
  if (!C.zf) goto L_11a2711b;
L_11a27145:;
  /* 11a27145 mov dword ptr [0x11a2e9e8], edi */
  w32((uint32_t)(0x11a2e9e8), (EDI));
  /* 11a2714b lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11a27151:;
  /* 11a27151 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27153 jae 0x11a27161 */
  if (!C.cf) goto L_11a27161;
  /* 11a27155 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27158 je 0x11a2715f */
  if (C.zf) goto L_11a2715f;
  /* 11a2715a add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2715d jmp 0x11a27151 */
  goto L_11a27151;
L_11a2715f:;
  /* 11a2715f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a27161:;
  /* 11a27161 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27163 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a27165 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11a27168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2716b mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11a2716e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11a27171 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a27173 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a27176 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11a2717a lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11a27180 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a27182 jmp 0x11a271b8 */
  goto L_11a271b8;
L_11a27184:;
  /* 11a27184 call 0x11a26cbd */
  push32(0x11a27189u); f_11a26cbd();
  /* 11a27189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2718b je 0x11a271b6 */
  if (C.zf) goto L_11a271b6;
  /* 11a2718d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a27190 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11a27193 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11a27197 mov dword ptr [0x11a2e9e8], eax */
  w32((uint32_t)(0x11a2e9e8), (EAX));
  /* 11a2719c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a2719e mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11a271a3 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a271a5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a271a8 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11a271ab sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a271ae lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11a271b4 jmp 0x11a271b8 */
  goto L_11a271b8;
L_11a271b6:;
  /* 11a271b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a271b8:;
  /* 11a271b8 pop edi */
  EDI = (pop32());
  /* 11a271b9 pop esi */
  ESI = (pop32());
  /* 11a271ba pop ebx */
  EBX = (pop32());
  /* 11a271bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a271bc ret  */
  ESPCHK(0x11a26fb5u, _esp0);
  ESP += 4; return;
}

/* FUN_100071bd @ 0x11a271bd (292 bytes, 125 insns) */
void f_11a271bd(void) {
  FTRACE(0x11a271bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a271bd push ebp */
  push32((uint32_t)(EBP));
  /* 11a271be mov ebp, esp */
  EBP = (ESP);
  /* 11a271c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a271c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a271c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a271c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a271c8 push esi */
  push32((uint32_t)(ESI));
  /* 11a271c9 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a271cc push edi */
  push32((uint32_t)(EDI));
  /* 11a271cd mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11a271cf lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11a271d5 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a271d7 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a271da mov eax, edi */
  EAX = (EDI);
  /* 11a271dc mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a271df jb 0x11a27202 */
  if (C.cf) goto L_11a27202;
  /* 11a271e1 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11a271e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a271e6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a271e8 jae 0x11a271f1 */
  if (!C.cf) goto L_11a271f1;
  /* 11a271ea add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a271ec sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a271ef jmp 0x11a271fa */
  goto L_11a271fa;
L_11a271f1:;
  /* 11a271f1 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a271f5 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11a271f8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a271fa:;
  /* 11a271fa lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11a271fd jmp 0x11a272d0 */
  goto L_11a272d0;
L_11a27202:;
  /* 11a27202 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27204 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27207 je 0x11a2720b */
  if (C.zf) goto L_11a2720b;
  /* 11a27209 mov eax, esi */
  EAX = (ESI);
L_11a2720b:;
  /* 11a2720b lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11a2720e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27210 jae 0x11a27255 */
  if (!C.cf) goto L_11a27255;
L_11a27212:;
  /* 11a27212 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a27214 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11a27216 jne 0x11a27248 */
  if (!C.zf) goto L_11a27248;
  /* 11a27218 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2721a lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11a2721d pop esi */
  ESI = (pop32());
L_11a2721e:;
  /* 11a2721e cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27221 jne 0x11a27227 */
  if (!C.zf) goto L_11a27227;
  /* 11a27223 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a27224 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a27225 jmp 0x11a2721e */
  goto L_11a2721e;
L_11a27227:;
  /* 11a27227 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27229 jae 0x11a27279 */
  if (!C.cf) goto L_11a27279;
  /* 11a2722b cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2722e jne 0x11a27235 */
  if (!C.zf) goto L_11a27235;
  /* 11a27230 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a27233 jmp 0x11a27241 */
  goto L_11a27241;
L_11a27235:;
  /* 11a27235 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a27238 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2723b jb 0x11a272da */
  if (C.cf) goto L_11a272da;
L_11a27241:;
  /* 11a27241 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a27244 mov eax, ebx */
  EAX = (EBX);
  /* 11a27246 jmp 0x11a2724d */
  goto L_11a2724d;
L_11a27248:;
  /* 11a27248 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11a2724b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a2724d:;
  /* 11a2724d lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11a27250 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27253 jb 0x11a27212 */
  if (C.cf) goto L_11a27212;
L_11a27255:;
  /* 11a27255 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11a27258:;
  /* 11a27258 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2725a jae 0x11a272da */
  if (!C.cf) goto L_11a272da;
  /* 11a2725c lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11a2725f cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27262 jae 0x11a272da */
  if (!C.cf) goto L_11a272da;
  /* 11a27264 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a27266 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a27268 jne 0x11a272aa */
  if (!C.zf) goto L_11a272aa;
  /* 11a2726a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2726c lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11a2726f pop eax */
  EAX = (pop32());
L_11a27270:;
  /* 11a27270 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27273 jne 0x11a2729a */
  if (!C.zf) goto L_11a2729a;
  /* 11a27275 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a27276 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a27277 jmp 0x11a27270 */
  goto L_11a27270;
L_11a27279:;
  /* 11a27279 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11a2727c cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2727f jae 0x11a2728a */
  if (!C.cf) goto L_11a2728a;
  /* 11a27281 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27283 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11a27285 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a27288 jmp 0x11a27293 */
  goto L_11a27293;
L_11a2728a:;
  /* 11a2728a and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a2728e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11a27291 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11a27293:;
  /* 11a27293 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a27295 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27298 jmp 0x11a272d0 */
  goto L_11a272d0;
L_11a2729a:;
  /* 11a2729a cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2729c jae 0x11a272b1 */
  if (!C.cf) goto L_11a272b1;
  /* 11a2729e sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a272a1 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a272a4 jb 0x11a272da */
  if (C.cf) goto L_11a272da;
  /* 11a272a6 mov esi, ebx */
  ESI = (EBX);
  /* 11a272a8 jmp 0x11a27258 */
  goto L_11a27258;
L_11a272aa:;
  /* 11a272aa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a272ad add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a272af jmp 0x11a27258 */
  goto L_11a27258;
L_11a272b1:;
  /* 11a272b1 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11a272b4 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a272b7 jae 0x11a272c2 */
  if (!C.cf) goto L_11a272c2;
  /* 11a272b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a272bb mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11a272bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a272c0 jmp 0x11a272cb */
  goto L_11a272cb;
L_11a272c2:;
  /* 11a272c2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a272c6 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11a272c9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a272cb:;
  /* 11a272cb mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a272cd lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11a272d0:;
  /* 11a272d0 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a272d3 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a272d6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a272d8 jmp 0x11a272dc */
  goto L_11a272dc;
L_11a272da:;
  /* 11a272da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a272dc:;
  /* 11a272dc pop edi */
  EDI = (pop32());
  /* 11a272dd pop esi */
  ESI = (pop32());
  /* 11a272de pop ebx */
  EBX = (pop32());
  /* 11a272df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a272e0 ret  */
  ESPCHK(0x11a271bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100072e1 @ 0x11a272e1 (41 bytes, 12 insns) */
void f_11a272e1(void) {
  FTRACE(0x11a272e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a272e1 push esi */
  push32((uint32_t)(ESI));
  /* 11a272e2 mov esi, dword ptr [0x11a2a0cc] */
  ESI = (r32((uint32_t)(0x11a2a0cc)));
  /* 11a272e8 push dword ptr [0x11a2ea34] */
  push32((uint32_t)(r32((uint32_t)(0x11a2ea34))));
  /* 11a272ee call esi */
  call_ind((uint32_t)(ESI), 0x11a272f0u);
  /* 11a272f0 push dword ptr [0x11a2ea24] */
  push32((uint32_t)(r32((uint32_t)(0x11a2ea24))));
  /* 11a272f6 call esi */
  call_ind((uint32_t)(ESI), 0x11a272f8u);
  /* 11a272f8 push dword ptr [0x11a2ea14] */
  push32((uint32_t)(r32((uint32_t)(0x11a2ea14))));
  /* 11a272fe call esi */
  call_ind((uint32_t)(ESI), 0x11a27300u);
  /* 11a27300 push dword ptr [0x11a2e9f4] */
  push32((uint32_t)(r32((uint32_t)(0x11a2e9f4))));
  /* 11a27306 call esi */
  call_ind((uint32_t)(ESI), 0x11a27308u);
  /* 11a27308 pop esi */
  ESI = (pop32());
  /* 11a27309 ret  */
  ESPCHK(0x11a272e1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000730a @ 0x11a2730a (108 bytes, 34 insns) */
void f_11a2730a(void) {
  FTRACE(0x11a2730au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2730a push esi */
  push32((uint32_t)(ESI));
  /* 11a2730b push edi */
  push32((uint32_t)(EDI));
  /* 11a2730c mov edi, dword ptr [0x11a2a0c4] */
  EDI = (r32((uint32_t)(0x11a2a0c4)));
  /* 11a27312 mov esi, 0x11a2e9f0 */
  ESI = (0x11a2e9f0u);
L_11a27317:;
  /* 11a27317 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a27319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2731b je 0x11a27348 */
  if (C.zf) goto L_11a27348;
  /* 11a2731d cmp esi, 0x11a2ea34 */
  { uint32_t _a=(ESI),_b=(0x11a2ea34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27323 je 0x11a27348 */
  if (C.zf) goto L_11a27348;
  /* 11a27325 cmp esi, 0x11a2ea24 */
  { uint32_t _a=(ESI),_b=(0x11a2ea24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2732b je 0x11a27348 */
  if (C.zf) goto L_11a27348;
  /* 11a2732d cmp esi, 0x11a2ea14 */
  { uint32_t _a=(ESI),_b=(0x11a2ea14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27333 je 0x11a27348 */
  if (C.zf) goto L_11a27348;
  /* 11a27335 cmp esi, 0x11a2e9f4 */
  { uint32_t _a=(ESI),_b=(0x11a2e9f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2733b je 0x11a27348 */
  if (C.zf) goto L_11a27348;
  /* 11a2733d push eax */
  push32((uint32_t)(EAX));
  /* 11a2733e call edi */
  call_ind((uint32_t)(EDI), 0x11a27340u);
  /* 11a27340 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a27342 call 0x11a246eb */
  push32(0x11a27347u); f_11a246eb();
  /* 11a27347 pop ecx */
  ECX = (pop32());
L_11a27348:;
  /* 11a27348 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2734b cmp esi, 0x11a2eab0 */
  { uint32_t _a=(ESI),_b=(0x11a2eab0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27351 jl 0x11a27317 */
  if ((C.sf!=C.of)) goto L_11a27317;
  /* 11a27353 push dword ptr [0x11a2ea14] */
  push32((uint32_t)(r32((uint32_t)(0x11a2ea14))));
  /* 11a27359 call edi */
  call_ind((uint32_t)(EDI), 0x11a2735bu);
  /* 11a2735b push dword ptr [0x11a2ea24] */
  push32((uint32_t)(r32((uint32_t)(0x11a2ea24))));
  /* 11a27361 call edi */
  call_ind((uint32_t)(EDI), 0x11a27363u);
  /* 11a27363 push dword ptr [0x11a2ea34] */
  push32((uint32_t)(r32((uint32_t)(0x11a2ea34))));
  /* 11a27369 call edi */
  call_ind((uint32_t)(EDI), 0x11a2736bu);
  /* 11a2736b push dword ptr [0x11a2e9f4] */
  push32((uint32_t)(r32((uint32_t)(0x11a2e9f4))));
  /* 11a27371 call edi */
  call_ind((uint32_t)(EDI), 0x11a27373u);
  /* 11a27373 pop edi */
  EDI = (pop32());
  /* 11a27374 pop esi */
  ESI = (pop32());
  /* 11a27375 ret  */
  ESPCHK(0x11a2730au, _esp0);
  ESP += 4; return;
}

/* FUN_10007376 @ 0x11a27376 (97 bytes, 37 insns) */
void f_11a27376(void) {
  FTRACE(0x11a27376u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27376 push ebp */
  push32((uint32_t)(EBP));
  /* 11a27377 mov ebp, esp */
  EBP = (ESP);
  /* 11a27379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2737c push esi */
  push32((uint32_t)(ESI));
  /* 11a2737d cmp dword ptr [eax*4 + 0x11a2e9f0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11a2e9f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27385 lea esi, [eax*4 + 0x11a2e9f0] */
  ESI = ((uint32_t)(EAX*4 + 0x11a2e9f0));
  /* 11a2738c jne 0x11a273cc */
  if (!C.zf) goto L_11a273cc;
  /* 11a2738e push edi */
  push32((uint32_t)(EDI));
  /* 11a2738f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a27391 call 0x11a252a5 */
  push32(0x11a27396u); f_11a252a5();
  /* 11a27396 mov edi, eax */
  EDI = (EAX);
  /* 11a27398 pop ecx */
  ECX = (pop32());
  /* 11a27399 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a2739b jne 0x11a273a5 */
  if (!C.zf) goto L_11a273a5;
  /* 11a2739d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a2739f call 0x11a246b8 */
  push32(0x11a273a4u); f_11a246b8();
  /* 11a273a4 pop ecx */
  ECX = (pop32());
L_11a273a5:;
  /* 11a273a5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a273a7 call 0x11a27376 */
  push32(0x11a273acu); f_11a27376();
  /* 11a273ac cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a273af pop ecx */
  ECX = (pop32());
  /* 11a273b0 push edi */
  push32((uint32_t)(EDI));
  /* 11a273b1 jne 0x11a273bd */
  if (!C.zf) goto L_11a273bd;
  /* 11a273b3 call dword ptr [0x11a2a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0cc))), 0x11a273b9u);
  /* 11a273b9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a273bb jmp 0x11a273c3 */
  goto L_11a273c3;
L_11a273bd:;
  /* 11a273bd call 0x11a246eb */
  push32(0x11a273c2u); f_11a246eb();
  /* 11a273c2 pop ecx */
  ECX = (pop32());
L_11a273c3:;
  /* 11a273c3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a273c5 call 0x11a273d7 */
  push32(0x11a273cau); f_11a273d7();
  /* 11a273ca pop ecx */
  ECX = (pop32());
  /* 11a273cb pop edi */
  EDI = (pop32());
L_11a273cc:;
  /* 11a273cc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a273ce call dword ptr [0x11a2a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a09c))), 0x11a273d4u);
  /* 11a273d4 pop esi */
  ESI = (pop32());
  /* 11a273d5 pop ebp */
  EBP = (pop32());
  /* 11a273d6 ret  */
  ESPCHK(0x11a27376u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d7 @ 0x11a273d7 (21 bytes, 7 insns) */
void f_11a273d7(void) {
  FTRACE(0x11a273d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a273d7 push ebp */
  push32((uint32_t)(EBP));
  /* 11a273d8 mov ebp, esp */
  EBP = (ESP);
  /* 11a273da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a273dd push dword ptr [eax*4 + 0x11a2e9f0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11a2e9f0))));
  /* 11a273e4 call dword ptr [0x11a2a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a0))), 0x11a273eau);
  /* 11a273ea pop ebp */
  EBP = (pop32());
  /* 11a273eb ret  */
  ESPCHK(0x11a273d7u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a273ec (32 bytes, 18 insns) */
void f_11a273ec(void) {
  FTRACE(0x11a273ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a273ec push ebp */
  push32((uint32_t)(EBP));
  /* 11a273ed mov ebp, esp */
  EBP = (ESP);
  /* 11a273ef push ebx */
  push32((uint32_t)(EBX));
  /* 11a273f0 push esi */
  push32((uint32_t)(ESI));
  /* 11a273f1 push edi */
  push32((uint32_t)(EDI));
  /* 11a273f2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a273f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a273f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a273f7 push 0x11a27404 */
  push32((uint32_t)(0x11a27404u));
  /* 11a273fc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a273ff call 0x11a29794 */
  push32(0x11a27404u); f_11a29794();
  /* 11a27404 pop ebp */
  EBP = (pop32());
  /* 11a27405 pop edi */
  EDI = (pop32());
  /* 11a27406 pop esi */
  ESI = (pop32());
  /* 11a27407 pop ebx */
  EBX = (pop32());
  /* 11a27408 mov esp, ebp */
  ESP = (EBP);
  /* 11a2740a pop ebp */
  EBP = (pop32());
  /* 11a2740b ret  */
  ESPCHK(0x11a273ecu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11a2742e (104 bytes, 33 insns) */
void f_11a2742e(void) {
  FTRACE(0x11a2742eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2742e push ebx */
  push32((uint32_t)(EBX));
  /* 11a2742f push esi */
  push32((uint32_t)(ESI));
  /* 11a27430 push edi */
  push32((uint32_t)(EDI));
  /* 11a27431 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a27435 push eax */
  push32((uint32_t)(EAX));
  /* 11a27436 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a27438 push 0x11a2740c */
  push32((uint32_t)(0x11a2740cu));
  /* 11a2743d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a27444 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a2744b:;
  /* 11a2744b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a2744f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a27452 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a27455 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27458 je 0x11a27488 */
  if (C.zf) goto L_11a27488;
  /* 11a2745a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2745e je 0x11a27488 */
  if (C.zf) goto L_11a27488;
  /* 11a27460 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a27463 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a27466 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a2746a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a2746d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27472 jne 0x11a27486 */
  if (!C.zf) goto L_11a27486;
  /* 11a27474 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a27479 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a2747d call 0x11a274c2 */
  push32(0x11a27482u); f_11a274c2();
  /* 11a27482 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a27486u);
L_11a27486:;
  /* 11a27486 jmp 0x11a2744b */
  goto L_11a2744b;
L_11a27488:;
  /* 11a27488 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a2748f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27492 pop edi */
  EDI = (pop32());
  /* 11a27493 pop esi */
  ESI = (pop32());
  /* 11a27494 pop ebx */
  EBX = (pop32());
  /* 11a27495 ret  */
  ESPCHK(0x11a2742eu, _esp0);
  ESP += 4; return;
}

/* FUN_100074c2 @ 0x11a274c2 (24 bytes, 10 insns) */
void f_11a274c2(void) {
  FTRACE(0x11a274c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a274c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a274c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a274c4 mov ebx, 0x11a2eab0 */
  EBX = (0x11a2eab0u);
  /* 11a274c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a274cc mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a274cf mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a274d2 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a274d5 pop ecx */
  ECX = (pop32());
  /* 11a274d6 pop ebx */
  EBX = (pop32());
  /* 11a274d7 ret 4 */
  ESPCHK(0x11a274c2u, _esp0);
  ESP += 8; return;
}

/* FUN_100075a1 @ 0x11a275a1 (27 bytes, 11 insns) */
void f_11a275a1(void) {
  FTRACE(0x11a275a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a275a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a275a2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a275a6 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a275a8 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a275ab push eax */
  push32((uint32_t)(EAX));
  /* 11a275ac mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a275af push eax */
  push32((uint32_t)(EAX));
  /* 11a275b0 call 0x11a2742e */
  push32(0x11a275b5u); f_11a2742e();
  /* 11a275b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a275b8 pop ebp */
  EBP = (pop32());
  /* 11a275b9 ret 4 */
  ESPCHK(0x11a275a1u, _esp0);
  ESP += 8; return;
}

/* FUN_100075bc @ 0x11a275bc (289 bytes, 98 insns) */
void f_11a275bc(void) {
  FTRACE(0x11a275bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a275bc push ebp */
  push32((uint32_t)(EBP));
  /* 11a275bd mov ebp, esp */
  EBP = (ESP);
  /* 11a275bf push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a275c1 push 0x11a2a508 */
  push32((uint32_t)(0x11a2a508u));
  /* 11a275c6 push 0x11a274e4 */
  push32((uint32_t)(0x11a274e4u));
  /* 11a275cb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a275d1 push eax */
  push32((uint32_t)(EAX));
  /* 11a275d2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a275d9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a275dc push ebx */
  push32((uint32_t)(EBX));
  /* 11a275dd push esi */
  push32((uint32_t)(ESI));
  /* 11a275de push edi */
  push32((uint32_t)(EDI));
  /* 11a275df mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a275e2 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a275e6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a275e9 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11a275ec cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a275ef ja 0x11a27605 */
  if ((!C.cf&&!C.zf)) goto L_11a27605;
  /* 11a275f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a275f3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a275f5 jne 0x11a275fa */
  if (!C.zf) goto L_11a275fa;
  /* 11a275f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a275f9 pop esi */
  ESI = (pop32());
L_11a275fa:;
  /* 11a275fa add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a275fd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a27600 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a27603 jmp 0x11a27607 */
  goto L_11a27607;
L_11a27605:;
  /* 11a27605 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a27607:;
  /* 11a27607 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a2760a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2760d ja 0x11a276bb */
  if ((!C.cf&&!C.zf)) goto L_11a276bb;
  /* 11a27613 mov eax, dword ptr [0x11a304a8] */
  EAX = (r32((uint32_t)(0x11a304a8)));
  /* 11a27618 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2761b jne 0x11a2765e */
  if (!C.zf) goto L_11a2765e;
  /* 11a2761d mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a27620 cmp edi, dword ptr [0x11a304a0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11a304a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27626 ja 0x11a276a4 */
  if ((!C.cf&&!C.zf)) goto L_11a276a4;
  /* 11a27628 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2762a call 0x11a27376 */
  push32(0x11a2762fu); f_11a27376();
  /* 11a2762f pop ecx */
  ECX = (pop32());
  /* 11a27630 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a27633 push edi */
  push32((uint32_t)(EDI));
  /* 11a27634 call 0x11a26808 */
  push32(0x11a27639u); f_11a26808();
  /* 11a27639 pop ecx */
  ECX = (pop32());
  /* 11a2763a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a2763d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a27641 call 0x11a27655 */
  push32(0x11a27646u); f_11a27655();
  /* 11a27646 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27649 je 0x11a276a9 */
  if (C.zf) goto L_11a276a9;
  /* 11a2764b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a2764e jmp 0x11a27698 */
  goto L_11a27698;
  /* 11a27650 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a27652 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a27655 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a27657 call 0x11a273d7 */
  push32(0x11a2765cu); f_11a273d7();
  /* 11a2765c pop ecx */
  ECX = (pop32());
  /* 11a2765d ret  */
  ESPCHK(0x11a275bcu, _esp0);
  ESP += 4; return;
L_11a2765e:;
  /* 11a2765e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27661 jne 0x11a276a4 */
  if (!C.zf) goto L_11a276a4;
  /* 11a27663 cmp esi, dword ptr [0x11a2e9ec] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a2e9ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27669 ja 0x11a276a4 */
  if ((!C.cf&&!C.zf)) goto L_11a276a4;
  /* 11a2766b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2766d call 0x11a27376 */
  push32(0x11a27672u); f_11a27376();
  /* 11a27672 pop ecx */
  ECX = (pop32());
  /* 11a27673 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a2767a mov eax, esi */
  EAX = (ESI);
  /* 11a2767c shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a2767f push eax */
  push32((uint32_t)(EAX));
  /* 11a27680 call 0x11a26fb5 */
  push32(0x11a27685u); f_11a26fb5();
  /* 11a27685 pop ecx */
  ECX = (pop32());
  /* 11a27686 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a27689 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a2768d call 0x11a276de */
  push32(0x11a27692u); f_11a276de();
  /* 11a27692 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27695 je 0x11a276a9 */
  if (C.zf) goto L_11a276a9;
  /* 11a27697 push esi */
  push32((uint32_t)(ESI));
L_11a27698:;
  /* 11a27698 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27699 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a2769c call 0x11a28bd0 */
  push32(0x11a276a1u); f_11a28bd0();
  /* 11a276a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a276a4:;
  /* 11a276a4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a276a7 jne 0x11a276e7 */
  if (!C.zf) { jmp_ind(0x11a276e7u); return; }
L_11a276a9:;
  /* 11a276a9 push esi */
  push32((uint32_t)(ESI));
  /* 11a276aa push 8 */
  push32((uint32_t)(0x8u));
  /* 11a276ac push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a276b2 call dword ptr [0x11a2a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0b0))), 0x11a276b8u);
  /* 11a276b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11a276bb:;
  /* 11a276bb cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a276be jne 0x11a276e7 */
  if (!C.zf) { jmp_ind(0x11a276e7u); return; }
  /* 11a276c0 cmp dword ptr [0x11a300c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a300c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a276c6 je 0x11a276e7 */
  if (C.zf) { jmp_ind(0x11a276e7u); return; }
  /* 11a276c8 push esi */
  push32((uint32_t)(ESI));
  /* 11a276c9 call 0x11a27d22 */
  push32(0x11a276ceu); f_11a27d22();
  /* 11a276ce pop ecx */
  ECX = (pop32());
  /* 11a276cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a276d1 jne 0x11a27607 */
  if (!C.zf) goto L_11a27607;
  /* 11a276d7 jmp 0x11a276ea */
  jmp_ind(0x11a276eau); return;
  /* 11a276d9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10007655 @ 0x11a27655 (9 bytes, 4 insns) */
void f_11a27655(void) {
  FTRACE(0x11a27655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27655 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a27657 call 0x11a273d7 */
  push32(0x11a2765cu); f_11a273d7();
  /* 11a2765c pop ecx */
  ECX = (pop32());
  /* 11a2765d ret  */
  ESPCHK(0x11a27655u, _esp0);
  ESP += 4; return;
}

/* FUN_100076de @ 0x11a276de (9 bytes, 4 insns) */
void f_11a276de(void) {
  FTRACE(0x11a276deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a276de push 9 */
  push32((uint32_t)(0x9u));
  /* 11a276e0 call 0x11a273d7 */
  push32(0x11a276e5u); f_11a273d7();
  /* 11a276e5 pop ecx */
  ECX = (pop32());
  /* 11a276e6 ret  */
  ESPCHK(0x11a276deu, _esp0);
  ESP += 4; return;
}

/* FUN_1000777a @ 0x11a2777a (291 bytes, 103 insns) */
void f_11a2777a(void) {
  FTRACE(0x11a2777au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2777a push ecx */
  push32((uint32_t)(ECX));
  /* 11a2777b push ecx */
  push32((uint32_t)(ECX));
  /* 11a2777c push ebx */
  push32((uint32_t)(EBX));
  /* 11a2777d push ebp */
  push32((uint32_t)(EBP));
  /* 11a2777e push esi */
  push32((uint32_t)(ESI));
  /* 11a2777f push edi */
  push32((uint32_t)(EDI));
  /* 11a27780 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a27782 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a27785 call 0x11a27376 */
  push32(0x11a2778au); f_11a27376();
  /* 11a2778a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a2778c pop ecx */
  ECX = (pop32());
  /* 11a2778d mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11a27791 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11a27795 mov ebp, 0x11a304c0 */
  EBP = (0x11a304c0u);
L_11a2779a:;
  /* 11a2779a mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 11a2779d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a2779f je 0x11a2783e */
  if (C.zf) goto L_11a2783e;
  /* 11a277a5 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a277ab:;
  /* 11a277ab cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a277ad jae 0x11a27823 */
  if (!C.cf) goto L_11a27823;
  /* 11a277af test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a277b3 jne 0x11a277f9 */
  if (!C.zf) goto L_11a277f9;
  /* 11a277b5 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a277b9 jne 0x11a277de */
  if (!C.zf) goto L_11a277de;
  /* 11a277bb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a277bd call 0x11a27376 */
  push32(0x11a277c2u); f_11a27376();
  /* 11a277c2 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a277c6 pop ecx */
  ECX = (pop32());
  /* 11a277c7 jne 0x11a277d6 */
  if (!C.zf) goto L_11a277d6;
  /* 11a277c9 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11a277cc push eax */
  push32((uint32_t)(EAX));
  /* 11a277cd call dword ptr [0x11a2a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0cc))), 0x11a277d3u);
  /* 11a277d3 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11a277d6:;
  /* 11a277d6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a277d8 call 0x11a273d7 */
  push32(0x11a277ddu); f_11a273d7();
  /* 11a277dd pop ecx */
  ECX = (pop32());
L_11a277de:;
  /* 11a277de lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 11a277e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a277e2 call dword ptr [0x11a2a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a09c))), 0x11a277e8u);
  /* 11a277e8 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a277ec je 0x11a27806 */
  if (C.zf) goto L_11a27806;
  /* 11a277ee push ebx */
  push32((uint32_t)(EBX));
  /* 11a277ef call dword ptr [0x11a2a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a0))), 0x11a277f5u);
  /* 11a277f5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a277f9:;
  /* 11a277f9 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 11a277fc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a277ff add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27804 jmp 0x11a277ab */
  goto L_11a277ab;
L_11a27806:;
  /* 11a27806 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a27809 mov eax, esi */
  EAX = (ESI);
  /* 11a2780b sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2780e push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11a27810 pop ecx */
  ECX = (pop32());
  /* 11a27811 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a27812 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a27814 mov edi, eax */
  EDI = (EAX);
  /* 11a27816 add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2781a cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2781d jne 0x11a2788c */
  if (!C.zf) goto L_11a2788c;
  /* 11a2781f mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a27823:;
  /* 11a27823 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a27828 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2782b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a2782c cmp ebp, 0x11a305c0 */
  { uint32_t _a=(EBP),_b=(0x11a305c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27832 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11a27836 jl 0x11a2779a */
  if ((C.sf!=C.of)) goto L_11a2779a;
  /* 11a2783c jmp 0x11a2788c */
  goto L_11a2788c;
L_11a2783e:;
  /* 11a2783e mov esi, 0x480 */
  ESI = (0x480u);
  /* 11a27843 push esi */
  push32((uint32_t)(ESI));
  /* 11a27844 call 0x11a252a5 */
  push32(0x11a27849u); f_11a252a5();
  /* 11a27849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2784b pop ecx */
  ECX = (pop32());
  /* 11a2784c je 0x11a2788c */
  if (C.zf) goto L_11a2788c;
  /* 11a2784e add dword ptr [0x11a305c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a305c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a305c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a27855 lea ecx, [ebx*4 + 0x11a304c0] */
  ECX = ((uint32_t)(EBX*4 + 0x11a304c0));
  /* 11a2785c lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 11a27862 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a27864:;
  /* 11a27864 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27866 jae 0x11a27880 */
  if (!C.cf) goto L_11a27880;
  /* 11a27868 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a2786c or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a2786f and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a27873 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a27877 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a27879 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2787c add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2787e jmp 0x11a27864 */
  goto L_11a27864;
L_11a27880:;
  /* 11a27880 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 11a27883 mov edi, ebx */
  EDI = (EBX);
  /* 11a27885 push edi */
  push32((uint32_t)(EDI));
  /* 11a27886 call 0x11a279da */
  push32(0x11a2788bu); f_11a279da();
  /* 11a2788b pop ecx */
  ECX = (pop32());
L_11a2788c:;
  /* 11a2788c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a2788e call 0x11a273d7 */
  push32(0x11a27893u); f_11a273d7();
  /* 11a27893 pop ecx */
  ECX = (pop32());
  /* 11a27894 mov eax, edi */
  EAX = (EDI);
  /* 11a27896 pop edi */
  EDI = (pop32());
  /* 11a27897 pop esi */
  ESI = (pop32());
  /* 11a27898 pop ebp */
  EBP = (pop32());
  /* 11a27899 pop ebx */
  EBX = (pop32());
  /* 11a2789a pop ecx */
  ECX = (pop32());
  /* 11a2789b pop ecx */
  ECX = (pop32());
  /* 11a2789c ret  */
  ESPCHK(0x11a2777au, _esp0);
  ESP += 4; return;
}

/* FUN_1000789d @ 0x11a2789d (124 bytes, 47 insns) */
void f_11a2789d(void) {
  FTRACE(0x11a2789du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2789d mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a278a1 push esi */
  push32((uint32_t)(ESI));
  /* 11a278a2 cmp ecx, dword ptr [0x11a305c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a278a8 push edi */
  push32((uint32_t)(EDI));
  /* 11a278a9 jae 0x11a27900 */
  if (!C.cf) goto L_11a27900;
  /* 11a278ab mov eax, ecx */
  EAX = (ECX);
  /* 11a278ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a278b0 lea edi, [eax*4 + 0x11a304c0] */
  EDI = ((uint32_t)(EAX*4 + 0x11a304c0));
  /* 11a278b7 mov eax, ecx */
  EAX = (ECX);
  /* 11a278b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a278bc lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a278bf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a278c1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a278c4 cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a278c8 jne 0x11a27900 */
  if (!C.zf) goto L_11a27900;
  /* 11a278ca cmp dword ptr [0x11a2ff04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a278d1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a278d2 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a278d6 jne 0x11a278f6 */
  if (!C.zf) goto L_11a278f6;
  /* 11a278d8 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a278db je 0x11a278ed */
  if (C.zf) goto L_11a278ed;
  /* 11a278dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a278de je 0x11a278e8 */
  if (C.zf) goto L_11a278e8;
  /* 11a278e0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a278e1 jne 0x11a278f6 */
  if (!C.zf) goto L_11a278f6;
  /* 11a278e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a278e4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a278e6 jmp 0x11a278f0 */
  goto L_11a278f0;
L_11a278e8:;
  /* 11a278e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a278e9 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a278eb jmp 0x11a278f0 */
  goto L_11a278f0;
L_11a278ed:;
  /* 11a278ed push ebx */
  push32((uint32_t)(EBX));
  /* 11a278ee push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11a278f0:;
  /* 11a278f0 call dword ptr [0x11a2a040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a040))), 0x11a278f6u);
L_11a278f6:;
  /* 11a278f6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a278f8 mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 11a278fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a278fd pop ebx */
  EBX = (pop32());
  /* 11a278fe jmp 0x11a27916 */
  goto L_11a27916;
L_11a27900:;
  /* 11a27900 call 0x11a25452 */
  push32(0x11a27905u); f_11a25452();
  /* 11a27905 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a2790b call 0x11a2545b */
  push32(0x11a27910u); f_11a2545b();
  /* 11a27910 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a27913 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a27916:;
  /* 11a27916 pop edi */
  EDI = (pop32());
  /* 11a27917 pop esi */
  ESI = (pop32());
  /* 11a27918 ret  */
  ESPCHK(0x11a2789du, _esp0);
  ESP += 4; return;
}

/* FUN_10007919 @ 0x11a27919 (127 bytes, 48 insns) */
void f_11a27919(void) {
  FTRACE(0x11a27919u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27919 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2791d push esi */
  push32((uint32_t)(ESI));
  /* 11a2791e cmp ecx, dword ptr [0x11a305c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27924 push edi */
  push32((uint32_t)(EDI));
  /* 11a27925 jae 0x11a2797f */
  if (!C.cf) goto L_11a2797f;
  /* 11a27927 mov eax, ecx */
  EAX = (ECX);
  /* 11a27929 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a2792c lea edi, [eax*4 + 0x11a304c0] */
  EDI = ((uint32_t)(EAX*4 + 0x11a304c0));
  /* 11a27933 mov eax, ecx */
  EAX = (ECX);
  /* 11a27935 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27938 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a2793b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a2793d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a27940 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27942 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a27946 je 0x11a2797f */
  if (C.zf) goto L_11a2797f;
  /* 11a27948 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2794b je 0x11a2797f */
  if (C.zf) goto L_11a2797f;
  /* 11a2794d cmp dword ptr [0x11a2ff04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27954 jne 0x11a27975 */
  if (!C.zf) goto L_11a27975;
  /* 11a27956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a27958 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2795a je 0x11a2796c */
  if (C.zf) goto L_11a2796c;
  /* 11a2795c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a2795d je 0x11a27967 */
  if (C.zf) goto L_11a27967;
  /* 11a2795f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a27960 jne 0x11a27975 */
  if (!C.zf) goto L_11a27975;
  /* 11a27962 push eax */
  push32((uint32_t)(EAX));
  /* 11a27963 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a27965 jmp 0x11a2796f */
  goto L_11a2796f;
L_11a27967:;
  /* 11a27967 push eax */
  push32((uint32_t)(EAX));
  /* 11a27968 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a2796a jmp 0x11a2796f */
  goto L_11a2796f;
L_11a2796c:;
  /* 11a2796c push eax */
  push32((uint32_t)(EAX));
  /* 11a2796d push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11a2796f:;
  /* 11a2796f call dword ptr [0x11a2a040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a040))), 0x11a27975u);
L_11a27975:;
  /* 11a27975 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a27977 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11a2797b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2797d jmp 0x11a27995 */
  goto L_11a27995;
L_11a2797f:;
  /* 11a2797f call 0x11a25452 */
  push32(0x11a27984u); f_11a25452();
  /* 11a27984 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a2798a call 0x11a2545b */
  push32(0x11a2798fu); f_11a2545b();
  /* 11a2798f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a27992 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a27995:;
  /* 11a27995 pop edi */
  EDI = (pop32());
  /* 11a27996 pop esi */
  ESI = (pop32());
  /* 11a27997 ret  */
  ESPCHK(0x11a27919u, _esp0);
  ESP += 4; return;
}

/* FUN_10007998 @ 0x11a27998 (66 bytes, 19 insns) */
void f_11a27998(void) {
  FTRACE(0x11a27998u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27998 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2799c cmp eax, dword ptr [0x11a305c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a279a2 jae 0x11a279c3 */
  if (!C.cf) goto L_11a279c3;
  /* 11a279a4 mov ecx, eax */
  ECX = (EAX);
  /* 11a279a6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a279a9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a279ac lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a279af mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a279b6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a279bb lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a279be je 0x11a279c3 */
  if (C.zf) goto L_11a279c3;
  /* 11a279c0 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11a279c2 ret  */
  ESPCHK(0x11a27998u, _esp0);
  ESP += 4; return;
L_11a279c3:;
  /* 11a279c3 call 0x11a25452 */
  push32(0x11a279c8u); f_11a25452();
  /* 11a279c8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a279ce call 0x11a2545b */
  push32(0x11a279d3u); f_11a2545b();
  /* 11a279d3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a279d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a279d9 ret  */
  ESPCHK(0x11a27998u, _esp0);
  ESP += 4; return;
}

/* FUN_100079da @ 0x11a279da (95 bytes, 34 insns) */
void f_11a279da(void) {
  FTRACE(0x11a279dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a279da mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a279de push ebx */
  push32((uint32_t)(EBX));
  /* 11a279df mov ecx, eax */
  ECX = (EAX);
  /* 11a279e1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a279e4 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a279e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a279e8 push edi */
  push32((uint32_t)(EDI));
  /* 11a279e9 mov esi, dword ptr [ecx*4 + 0x11a304c0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a279f0 lea ebx, [ecx*4 + 0x11a304c0] */
  EBX = ((uint32_t)(ECX*4 + 0x11a304c0));
  /* 11a279f7 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11a279fa shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11a279fd add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a279ff cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27a03 jne 0x11a27a28 */
  if (!C.zf) goto L_11a27a28;
  /* 11a27a05 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a27a07 call 0x11a27376 */
  push32(0x11a27a0cu); f_11a27376();
  /* 11a27a0c cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27a10 pop ecx */
  ECX = (pop32());
  /* 11a27a11 jne 0x11a27a20 */
  if (!C.zf) goto L_11a27a20;
  /* 11a27a13 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11a27a16 push eax */
  push32((uint32_t)(EAX));
  /* 11a27a17 call dword ptr [0x11a2a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0cc))), 0x11a27a1du);
  /* 11a27a1d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11a27a20:;
  /* 11a27a20 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a27a22 call 0x11a273d7 */
  push32(0x11a27a27u); f_11a273d7();
  /* 11a27a27 pop ecx */
  ECX = (pop32());
L_11a27a28:;
  /* 11a27a28 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a27a2a lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11a27a2e push eax */
  push32((uint32_t)(EAX));
  /* 11a27a2f call dword ptr [0x11a2a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a09c))), 0x11a27a35u);
  /* 11a27a35 pop edi */
  EDI = (pop32());
  /* 11a27a36 pop esi */
  ESI = (pop32());
  /* 11a27a37 pop ebx */
  EBX = (pop32());
  /* 11a27a38 ret  */
  ESPCHK(0x11a279dau, _esp0);
  ESP += 4; return;
}

/* FUN_10007a39 @ 0x11a27a39 (34 bytes, 10 insns) */
void f_11a27a39(void) {
  FTRACE(0x11a27a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27a39 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a27a3d mov ecx, eax */
  ECX = (EAX);
  /* 11a27a3f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27a42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a27a45 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a27a48 mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a27a4f lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11a27a53 push eax */
  push32((uint32_t)(EAX));
  /* 11a27a54 call dword ptr [0x11a2a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a0))), 0x11a27a5au);
  /* 11a27a5a ret  */
  ESPCHK(0x11a27a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a5b @ 0x11a27a5b (147 bytes, 52 insns) */
void f_11a27a5b(void) {
  FTRACE(0x11a27a5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27a5b push ebx */
  push32((uint32_t)(EBX));
  /* 11a27a5c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a27a60 cmp ebx, dword ptr [0x11a305c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27a66 push esi */
  push32((uint32_t)(ESI));
  /* 11a27a67 push edi */
  push32((uint32_t)(EDI));
  /* 11a27a68 jae 0x11a27adc */
  if (!C.cf) goto L_11a27adc;
  /* 11a27a6a mov eax, ebx */
  EAX = (EBX);
  /* 11a27a6c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a27a6f lea edi, [eax*4 + 0x11a304c0] */
  EDI = ((uint32_t)(EAX*4 + 0x11a304c0));
  /* 11a27a76 mov eax, ebx */
  EAX = (EBX);
  /* 11a27a78 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27a7b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a27a7e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a27a80 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a27a83 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a27a88 je 0x11a27adc */
  if (C.zf) goto L_11a27adc;
  /* 11a27a8a push ebx */
  push32((uint32_t)(EBX));
  /* 11a27a8b call 0x11a279da */
  push32(0x11a27a90u); f_11a279da();
  /* 11a27a90 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a27a92 pop ecx */
  ECX = (pop32());
  /* 11a27a93 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a27a98 je 0x11a27ac3 */
  if (C.zf) goto L_11a27ac3;
  /* 11a27a9a push ebx */
  push32((uint32_t)(EBX));
  /* 11a27a9b call 0x11a27998 */
  push32(0x11a27aa0u); f_11a27998();
  /* 11a27aa0 pop ecx */
  ECX = (pop32());
  /* 11a27aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11a27aa2 call dword ptr [0x11a2a048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a048))), 0x11a27aa8u);
  /* 11a27aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27aaa jne 0x11a27ab6 */
  if (!C.zf) goto L_11a27ab6;
  /* 11a27aac call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a27ab2u);
  /* 11a27ab2 mov esi, eax */
  ESI = (EAX);
  /* 11a27ab4 jmp 0x11a27ab8 */
  goto L_11a27ab8;
L_11a27ab6:;
  /* 11a27ab6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a27ab8:;
  /* 11a27ab8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a27aba je 0x11a27ad1 */
  if (C.zf) goto L_11a27ad1;
  /* 11a27abc call 0x11a2545b */
  push32(0x11a27ac1u); f_11a2545b();
  /* 11a27ac1 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11a27ac3:;
  /* 11a27ac3 call 0x11a25452 */
  push32(0x11a27ac8u); f_11a25452();
  /* 11a27ac8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a27ace or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a27ad1:;
  /* 11a27ad1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27ad2 call 0x11a27a39 */
  push32(0x11a27ad7u); f_11a27a39();
  /* 11a27ad7 pop ecx */
  ECX = (pop32());
  /* 11a27ad8 mov eax, esi */
  EAX = (ESI);
  /* 11a27ada jmp 0x11a27aea */
  goto L_11a27aea;
L_11a27adc:;
  /* 11a27adc call 0x11a25452 */
  push32(0x11a27ae1u); f_11a25452();
  /* 11a27ae1 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a27ae7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a27aea:;
  /* 11a27aea pop edi */
  EDI = (pop32());
  /* 11a27aeb pop esi */
  ESI = (pop32());
  /* 11a27aec pop ebx */
  EBX = (pop32());
  /* 11a27aed ret  */
  ESPCHK(0x11a27a5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007aee @ 0x11a27aee (101 bytes, 34 insns) */
void f_11a27aee(void) {
  FTRACE(0x11a27aeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27aee push esi */
  push32((uint32_t)(ESI));
  /* 11a27aef mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a27af3 cmp esi, dword ptr [0x11a305c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27af9 jae 0x11a27b3b */
  if (!C.cf) goto L_11a27b3b;
  /* 11a27afb mov ecx, esi */
  ECX = (ESI);
  /* 11a27afd mov eax, esi */
  EAX = (ESI);
  /* 11a27aff sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a27b02 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27b05 mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a27b0c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a27b0f test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a27b14 je 0x11a27b3b */
  if (C.zf) goto L_11a27b3b;
  /* 11a27b16 push edi */
  push32((uint32_t)(EDI));
  /* 11a27b17 push esi */
  push32((uint32_t)(ESI));
  /* 11a27b18 call 0x11a279da */
  push32(0x11a27b1du); f_11a279da();
  /* 11a27b1d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a27b21 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a27b25 push esi */
  push32((uint32_t)(ESI));
  /* 11a27b26 call 0x11a27b53 */
  push32(0x11a27b2bu); f_11a27b53();
  /* 11a27b2b push esi */
  push32((uint32_t)(ESI));
  /* 11a27b2c mov edi, eax */
  EDI = (EAX);
  /* 11a27b2e call 0x11a27a39 */
  push32(0x11a27b33u); f_11a27a39();
  /* 11a27b33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27b36 mov eax, edi */
  EAX = (EDI);
  /* 11a27b38 pop edi */
  EDI = (pop32());
  /* 11a27b39 pop esi */
  ESI = (pop32());
  /* 11a27b3a ret  */
  ESPCHK(0x11a27aeeu, _esp0);
  ESP += 4; return;
L_11a27b3b:;
  /* 11a27b3b call 0x11a25452 */
  push32(0x11a27b40u); f_11a25452();
  /* 11a27b40 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a27b46 call 0x11a2545b */
  push32(0x11a27b4bu); f_11a2545b();
  /* 11a27b4b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a27b4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27b51 pop esi */
  ESI = (pop32());
  /* 11a27b52 ret  */
  ESPCHK(0x11a27aeeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b53 @ 0x11a27b53 (395 bytes, 135 insns) */
void f_11a27b53(void) {
  FTRACE(0x11a27b53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27b53 push ebp */
  push32((uint32_t)(EBP));
  /* 11a27b54 mov ebp, esp */
  EBP = (ESP);
  /* 11a27b56 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27b5c push ebx */
  push32((uint32_t)(EBX));
  /* 11a27b5d push esi */
  push32((uint32_t)(ESI));
  /* 11a27b5e push edi */
  push32((uint32_t)(EDI));
  /* 11a27b5f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a27b61 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27b64 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11a27b67 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11a27b6a jne 0x11a27b73 */
  if (!C.zf) goto L_11a27b73;
L_11a27b6c:;
  /* 11a27b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a27b6e jmp 0x11a27cd9 */
  goto L_11a27cd9;
L_11a27b73:;
  /* 11a27b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a27b76 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a27b79 lea ebx, [eax*4 + 0x11a304c0] */
  EBX = ((uint32_t)(EAX*4 + 0x11a304c0));
  /* 11a27b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a27b83 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27b86 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a27b89 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a27b8b shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a27b8e test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11a27b93 je 0x11a27ba3 */
  if (C.zf) goto L_11a27ba3;
  /* 11a27b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a27b97 push edi */
  push32((uint32_t)(EDI));
  /* 11a27b98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a27b9b call 0x11a256d9 */
  push32(0x11a27ba0u); f_11a256d9();
  /* 11a27ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a27ba3:;
  /* 11a27ba3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a27ba5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27ba7 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11a27bab je 0x11a27c72 */
  if (C.zf) goto L_11a27c72;
  /* 11a27bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a27bb4 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27bb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a27bba mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11a27bbd jbe 0x11a27cad */
  if ((C.cf||C.zf)) goto L_11a27cad;
L_11a27bc3:;
  /* 11a27bc3 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11a27bc9:;
  /* 11a27bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a27bcc sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27bcf cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27bd2 jae 0x11a27bfd */
  if (!C.cf) goto L_11a27bfd;
  /* 11a27bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a27bd7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a27bda mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11a27bdc cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27bdf jne 0x11a27be8 */
  if (!C.zf) goto L_11a27be8;
  /* 11a27be1 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11a27be4 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11a27be7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a27be8:;
  /* 11a27be8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11a27bea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a27beb mov ecx, eax */
  ECX = (EAX);
  /* 11a27bed lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11a27bf3 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27bf5 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27bfb jl 0x11a27bc9 */
  if ((C.sf!=C.of)) goto L_11a27bc9;
L_11a27bfd:;
  /* 11a27bfd mov edi, eax */
  EDI = (EAX);
  /* 11a27bff lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11a27c05 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27c07 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a27c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a27c0c push eax */
  push32((uint32_t)(EAX));
  /* 11a27c0d lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11a27c13 push edi */
  push32((uint32_t)(EDI));
  /* 11a27c14 push eax */
  push32((uint32_t)(EAX));
  /* 11a27c15 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a27c17 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11a27c1a call dword ptr [0x11a2a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a050))), 0x11a27c20u);
  /* 11a27c20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27c22 je 0x11a27c67 */
  if (C.zf) goto L_11a27c67;
  /* 11a27c24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a27c27 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a27c2a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27c2c jl 0x11a27c39 */
  if ((C.sf!=C.of)) goto L_11a27c39;
  /* 11a27c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a27c31 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27c34 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27c37 jb 0x11a27bc3 */
  if (C.cf) goto L_11a27bc3;
L_11a27c39:;
  /* 11a27c39 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a27c3b:;
  /* 11a27c3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a27c3e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27c40 jne 0x11a27cd6 */
  if (!C.zf) goto L_11a27cd6;
  /* 11a27c46 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27c49 je 0x11a27cad */
  if (C.zf) goto L_11a27cad;
  /* 11a27c4b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a27c4d pop esi */
  ESI = (pop32());
  /* 11a27c4e cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27c51 jne 0x11a27c9f */
  if (!C.zf) goto L_11a27c9f;
  /* 11a27c53 call 0x11a25452 */
  push32(0x11a27c58u); f_11a25452();
  /* 11a27c58 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a27c5e call 0x11a2545b */
  push32(0x11a27c63u); f_11a2545b();
  /* 11a27c63 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11a27c65 jmp 0x11a27ca8 */
  goto L_11a27ca8;
L_11a27c67:;
  /* 11a27c67 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a27c6du);
  /* 11a27c6d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a27c70 jmp 0x11a27c39 */
  goto L_11a27c39;
L_11a27c72:;
  /* 11a27c72 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a27c75 push edi */
  push32((uint32_t)(EDI));
  /* 11a27c76 push ecx */
  push32((uint32_t)(ECX));
  /* 11a27c77 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a27c7a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a27c7d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11a27c7f call dword ptr [0x11a2a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a050))), 0x11a27c85u);
  /* 11a27c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27c87 je 0x11a27c94 */
  if (C.zf) goto L_11a27c94;
  /* 11a27c89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a27c8c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11a27c8f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a27c92 jmp 0x11a27c3b */
  goto L_11a27c3b;
L_11a27c94:;
  /* 11a27c94 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a27c9au);
  /* 11a27c9a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a27c9d jmp 0x11a27c3b */
  goto L_11a27c3b;
L_11a27c9f:;
  /* 11a27c9f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a27ca2 call 0x11a253df */
  push32(0x11a27ca7u); f_11a253df();
  /* 11a27ca7 pop ecx */
  ECX = (pop32());
L_11a27ca8:;
  /* 11a27ca8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27cab jmp 0x11a27cd9 */
  goto L_11a27cd9;
L_11a27cad:;
  /* 11a27cad mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a27caf test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11a27cb4 je 0x11a27cc2 */
  if (C.zf) goto L_11a27cc2;
  /* 11a27cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a27cb9 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27cbc je 0x11a27b6c */
  if (C.zf) goto L_11a27b6c;
L_11a27cc2:;
  /* 11a27cc2 call 0x11a25452 */
  push32(0x11a27cc7u); f_11a25452();
  /* 11a27cc7 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11a27ccd call 0x11a2545b */
  push32(0x11a27cd2u); f_11a2545b();
  /* 11a27cd2 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11a27cd4 jmp 0x11a27ca8 */
  goto L_11a27ca8;
L_11a27cd6:;
  /* 11a27cd6 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a27cd9:;
  /* 11a27cd9 pop edi */
  EDI = (pop32());
  /* 11a27cda pop esi */
  ESI = (pop32());
  /* 11a27cdb pop ebx */
  EBX = (pop32());
  /* 11a27cdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a27cdd ret  */
  ESPCHK(0x11a27b53u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cde @ 0x11a27cde (68 bytes, 19 insns) */
void f_11a27cde(void) {
  FTRACE(0x11a27cdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27cde inc dword ptr [0x11a2ff08] */
  { uint32_t _r=(r32((uint32_t)(0x11a2ff08)))+1; w32((uint32_t)(0x11a2ff08), (_r)); fl_inc(_r,32); }
  /* 11a27ce4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a27ce9 call 0x11a252a5 */
  push32(0x11a27ceeu); f_11a252a5();
  /* 11a27cee pop ecx */
  ECX = (pop32());
  /* 11a27cef mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a27cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27cf5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a27cf8 je 0x11a27d07 */
  if (C.zf) goto L_11a27d07;
  /* 11a27cfa or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a27cfe mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 11a27d05 jmp 0x11a27d18 */
  goto L_11a27d18;
L_11a27d07:;
  /* 11a27d07 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a27d0b lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 11a27d0e mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a27d11 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_11a27d18:;
  /* 11a27d18 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a27d1b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a27d1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a27d21 ret  */
  ESPCHK(0x11a27cdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d22 @ 0x11a27d22 (27 bytes, 13 insns) */
void f_11a27d22(void) {
  FTRACE(0x11a27d22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27d22 mov eax, dword ptr [0x11a300c4] */
  EAX = (r32((uint32_t)(0x11a300c4)));
  /* 11a27d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27d29 je 0x11a27d3a */
  if (C.zf) goto L_11a27d3a;
  /* 11a27d2b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a27d2f call eax */
  call_ind((uint32_t)(EAX), 0x11a27d31u);
  /* 11a27d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27d33 pop ecx */
  ECX = (pop32());
  /* 11a27d34 je 0x11a27d3a */
  if (C.zf) goto L_11a27d3a;
  /* 11a27d36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a27d38 pop eax */
  EAX = (pop32());
  /* 11a27d39 ret  */
  ESPCHK(0x11a27d22u, _esp0);
  ESP += 4; return;
L_11a27d3a:;
  /* 11a27d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a27d3c ret  */
  ESPCHK(0x11a27d22u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d3d @ 0x11a27d3d (719 bytes, 241 insns) */
void f_11a27d3d(void) {
  FTRACE(0x11a27d3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a27d3d push ebp */
  push32((uint32_t)(EBP));
  /* 11a27d3e mov ebp, esp */
  EBP = (ESP);
  /* 11a27d40 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27d43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a27d46 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27d47 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a27d49 push esi */
  push32((uint32_t)(ESI));
  /* 11a27d4a test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a27d4d push edi */
  push32((uint32_t)(EDI));
  /* 11a27d4e mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 11a27d55 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 11a27d58 je 0x11a27d63 */
  if (C.zf) goto L_11a27d63;
  /* 11a27d5a mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a27d5d mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 11a27d61 jmp 0x11a27d6e */
  goto L_11a27d6e;
L_11a27d63:;
  /* 11a27d63 and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 11a27d67 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11a27d6e:;
  /* 11a27d6e mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 11a27d73 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 11a27d75 jne 0x11a27d88 */
  if (!C.zf) goto L_11a27d88;
  /* 11a27d77 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 11a27d7a jne 0x11a27d84 */
  if (!C.zf) goto L_11a27d84;
  /* 11a27d7c cmp dword ptr [0x11a300dc], eax */
  { uint32_t _a=(r32((uint32_t)(0x11a300dc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27d82 je 0x11a27d88 */
  if (C.zf) goto L_11a27d88;
L_11a27d84:;
  /* 11a27d84 or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_11a27d88:;
  /* 11a27d88 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a27d8a mov eax, ecx */
  EAX = (ECX);
  /* 11a27d8c pop esi */
  ESI = (pop32());
  /* 11a27d8d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a27d8f sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a27d91 je 0x11a27daf */
  if (C.zf) goto L_11a27daf;
  /* 11a27d93 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a27d94 je 0x11a27da6 */
  if (C.zf) goto L_11a27da6;
  /* 11a27d96 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a27d97 jne 0x11a27e41 */
  if (!C.zf) goto L_11a27e41;
  /* 11a27d9d mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 11a27da4 jmp 0x11a27db6 */
  goto L_11a27db6;
L_11a27da6:;
  /* 11a27da6 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 11a27dad jmp 0x11a27db6 */
  goto L_11a27db6;
L_11a27daf:;
  /* 11a27daf mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_11a27db6:;
  /* 11a27db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a27db9 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27dbc je 0x11a27de4 */
  if (C.zf) goto L_11a27de4;
  /* 11a27dbe cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27dc1 je 0x11a27ddb */
  if (C.zf) goto L_11a27ddb;
  /* 11a27dc3 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27dc6 je 0x11a27dd2 */
  if (C.zf) goto L_11a27dd2;
  /* 11a27dc8 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27dcb jne 0x11a27e41 */
  if (!C.zf) goto L_11a27e41;
  /* 11a27dcd mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 11a27dd0 jmp 0x11a27de7 */
  goto L_11a27de7;
L_11a27dd2:;
  /* 11a27dd2 mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 11a27dd9 jmp 0x11a27de7 */
  goto L_11a27de7;
L_11a27ddb:;
  /* 11a27ddb mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11a27de2 jmp 0x11a27de7 */
  goto L_11a27de7;
L_11a27de4:;
  /* 11a27de4 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_11a27de7:;
  /* 11a27de7 mov edx, 0x700 */
  EDX = (0x700u);
  /* 11a27dec mov eax, 0x400 */
  EAX = (0x400u);
  /* 11a27df1 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a27df3 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11a27df8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27dfa jg 0x11a27e2d */
  if ((!C.zf&&C.sf==C.of)) goto L_11a27e2d;
  /* 11a27dfc je 0x11a27e28 */
  if (C.zf) goto L_11a27e28;
  /* 11a27dfe cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e00 je 0x11a27e28 */
  if (C.zf) goto L_11a27e28;
  /* 11a27e02 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e04 je 0x11a27e1f */
  if (C.zf) goto L_11a27e1f;
  /* 11a27e06 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e0c je 0x11a27e5b */
  if (C.zf) goto L_11a27e5b;
  /* 11a27e0e cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e14 jne 0x11a27e41 */
  if (!C.zf) goto L_11a27e41;
  /* 11a27e16 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11a27e1d jmp 0x11a27e6b */
  goto L_11a27e6b;
L_11a27e1f:;
  /* 11a27e1f mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 11a27e26 jmp 0x11a27e6b */
  goto L_11a27e6b;
L_11a27e28:;
  /* 11a27e28 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11a27e2b jmp 0x11a27e6b */
  goto L_11a27e6b;
L_11a27e2d:;
  /* 11a27e2d cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e33 je 0x11a27e64 */
  if (C.zf) goto L_11a27e64;
  /* 11a27e35 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e3b je 0x11a27e5b */
  if (C.zf) goto L_11a27e5b;
  /* 11a27e3d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27e3f je 0x11a27e64 */
  if (C.zf) goto L_11a27e64;
L_11a27e41:;
  /* 11a27e41 call 0x11a25452 */
  push32(0x11a27e46u); f_11a25452();
  /* 11a27e46 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a27e4c call 0x11a2545b */
  push32(0x11a27e51u); f_11a2545b();
  /* 11a27e51 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11a27e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27e56 jmp 0x11a28007 */
  goto L_11a28007;
L_11a27e5b:;
  /* 11a27e5b mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 11a27e62 jmp 0x11a27e6b */
  goto L_11a27e6b;
L_11a27e64:;
  /* 11a27e64 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a27e6b:;
  /* 11a27e6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a27e6e mov esi, 0x80 */
  ESI = (0x80u);
  /* 11a27e73 test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 11a27e75 je 0x11a27e8a */
  if (C.zf) goto L_11a27e8a;
  /* 11a27e77 mov ecx, dword ptr [0x11a2ff0c] */
  ECX = (r32((uint32_t)(0x11a2ff0c)));
  /* 11a27e7d not ecx */
  ECX = (~(ECX));
  /* 11a27e7f and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 11a27e82 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a27e85 jne 0x11a27e8a */
  if (!C.zf) goto L_11a27e8a;
  /* 11a27e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a27e89 pop esi */
  ESI = (pop32());
L_11a27e8a:;
  /* 11a27e8a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11a27e8c je 0x11a27e98 */
  if (C.zf) goto L_11a27e98;
  /* 11a27e8e or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a27e94 or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_11a27e98:;
  /* 11a27e98 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 11a27e9b je 0x11a27e9f */
  if (C.zf) goto L_11a27e9f;
  /* 11a27e9d or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_11a27e9f:;
  /* 11a27e9f test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 11a27ea1 je 0x11a27eab */
  if (C.zf) goto L_11a27eab;
  /* 11a27ea3 or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a27ea9 jmp 0x11a27eb5 */
  goto L_11a27eb5;
L_11a27eab:;
  /* 11a27eab test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 11a27ead je 0x11a27eb5 */
  if (C.zf) goto L_11a27eb5;
  /* 11a27eaf or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_11a27eb5:;
  /* 11a27eb5 call 0x11a2777a */
  push32(0x11a27ebau); f_11a2777a();
  /* 11a27eba mov ebx, eax */
  EBX = (EAX);
  /* 11a27ebc or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a27ebf cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27ec1 jne 0x11a27edd */
  if (!C.zf) goto L_11a27edd;
  /* 11a27ec3 call 0x11a25452 */
  push32(0x11a27ec8u); f_11a25452();
  /* 11a27ec8 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11a27ece call 0x11a2545b */
  push32(0x11a27ed3u); f_11a2545b();
  /* 11a27ed3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a27ed6 mov eax, edi */
  EAX = (EDI);
  /* 11a27ed8 jmp 0x11a28007 */
  goto L_11a28007;
L_11a27edd:;
  /* 11a27edd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a27edf push esi */
  push32((uint32_t)(ESI));
  /* 11a27ee0 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11a27ee3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a27ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11a27ee7 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11a27eea push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11a27eed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a27ef0 call dword ptr [0x11a2a038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a038))), 0x11a27ef6u);
  /* 11a27ef6 mov esi, eax */
  ESI = (EAX);
  /* 11a27ef8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27efa jne 0x11a27f10 */
  if (!C.zf) goto L_11a27f10;
L_11a27efc:;
  /* 11a27efc call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a27f02u);
  /* 11a27f02 push eax */
  push32((uint32_t)(EAX));
  /* 11a27f03 call 0x11a253df */
  push32(0x11a27f08u); f_11a253df();
  /* 11a27f08 pop ecx */
  ECX = (pop32());
  /* 11a27f09 mov esi, edi */
  ESI = (EDI);
  /* 11a27f0b jmp 0x11a27ffe */
  goto L_11a27ffe;
L_11a27f10:;
  /* 11a27f10 push esi */
  push32((uint32_t)(ESI));
  /* 11a27f11 call dword ptr [0x11a2a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a004))), 0x11a27f17u);
  /* 11a27f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27f19 jne 0x11a27f24 */
  if (!C.zf) goto L_11a27f24;
  /* 11a27f1b push esi */
  push32((uint32_t)(ESI));
  /* 11a27f1c call dword ptr [0x11a2a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a8))), 0x11a27f22u);
  /* 11a27f22 jmp 0x11a27efc */
  goto L_11a27efc;
L_11a27f24:;
  /* 11a27f24 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27f27 jne 0x11a27f2f */
  if (!C.zf) goto L_11a27f2f;
  /* 11a27f29 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 11a27f2d jmp 0x11a27f38 */
  goto L_11a27f38;
L_11a27f2f:;
  /* 11a27f2f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27f32 jne 0x11a27f38 */
  if (!C.zf) goto L_11a27f38;
  /* 11a27f34 or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_11a27f38:;
  /* 11a27f38 push esi */
  push32((uint32_t)(ESI));
  /* 11a27f39 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27f3a call 0x11a2789d */
  push32(0x11a27f3fu); f_11a2789d();
  /* 11a27f3f mov eax, ebx */
  EAX = (EBX);
  /* 11a27f41 pop ecx */
  ECX = (pop32());
  /* 11a27f42 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a27f45 pop ecx */
  ECX = (pop32());
  /* 11a27f46 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 11a27f49 lea edi, [eax*4 + 0x11a304c0] */
  EDI = ((uint32_t)(EAX*4 + 0x11a304c0));
  /* 11a27f50 mov eax, ebx */
  EAX = (EBX);
  /* 11a27f52 or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11a27f55 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a27f58 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a27f5b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a27f5e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a27f60 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a27f63 and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 11a27f67 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 11a27f6b jne 0x11a27fe5 */
  if (!C.zf) goto L_11a27fe5;
  /* 11a27f6d test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a27f70 je 0x11a27fe5 */
  if (C.zf) goto L_11a27fe5;
  /* 11a27f72 test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 11a27f76 je 0x11a27fe5 */
  if (C.zf) goto L_11a27fe5;
  /* 11a27f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a27f7a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a27f7c push ebx */
  push32((uint32_t)(EBX));
  /* 11a27f7d call 0x11a256d9 */
  push32(0x11a27f82u); f_11a256d9();
  /* 11a27f82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27f85 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27f88 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a27f8b jne 0x11a27fa6 */
  if (!C.zf) goto L_11a27fa6;
  /* 11a27f8d call 0x11a2545b */
  push32(0x11a27f92u); f_11a2545b();
  /* 11a27f92 cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27f98 je 0x11a27fe5 */
  if (C.zf) goto L_11a27fe5;
L_11a27f9a:;
  /* 11a27f9a push ebx */
  push32((uint32_t)(EBX));
  /* 11a27f9b call 0x11a24a0c */
  push32(0x11a27fa0u); f_11a24a0c();
  /* 11a27fa0 pop ecx */
  ECX = (pop32());
  /* 11a27fa1 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a27fa4 jmp 0x11a27ffe */
  goto L_11a27ffe;
L_11a27fa6:;
  /* 11a27fa6 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 11a27faa lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 11a27fad push 1 */
  push32((uint32_t)(0x1u));
  /* 11a27faf push eax */
  push32((uint32_t)(EAX));
  /* 11a27fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27fb1 call 0x11a24d8f */
  push32(0x11a27fb6u); f_11a24d8f();
  /* 11a27fb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a27fbb jne 0x11a27fd3 */
  if (!C.zf) goto L_11a27fd3;
  /* 11a27fbd cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27fc1 jne 0x11a27fd3 */
  if (!C.zf) goto L_11a27fd3;
  /* 11a27fc3 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11a27fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27fc7 call 0x11a28c28 */
  push32(0x11a27fccu); f_11a28c28();
  /* 11a27fcc pop ecx */
  ECX = (pop32());
  /* 11a27fcd cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27fd0 pop ecx */
  ECX = (pop32());
  /* 11a27fd1 je 0x11a27f9a */
  if (C.zf) goto L_11a27f9a;
L_11a27fd3:;
  /* 11a27fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a27fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a27fd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a27fd8 call 0x11a256d9 */
  push32(0x11a27fddu); f_11a256d9();
  /* 11a27fdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a27fe0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a27fe3 je 0x11a27f9a */
  if (C.zf) goto L_11a27f9a;
L_11a27fe5:;
  /* 11a27fe5 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a27fe9 jne 0x11a27ffc */
  if (!C.zf) goto L_11a27ffc;
  /* 11a27feb test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 11a27fef je 0x11a27ffc */
  if (C.zf) goto L_11a27ffc;
  /* 11a27ff1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a27ff3 or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a27ff8 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_11a27ffc:;
  /* 11a27ffc mov esi, ebx */
  ESI = (EBX);
L_11a27ffe:;
  /* 11a27ffe push ebx */
  push32((uint32_t)(EBX));
  /* 11a27fff call 0x11a27a39 */
  push32(0x11a28004u); f_11a27a39();
  /* 11a28004 pop ecx */
  ECX = (pop32());
  /* 11a28005 mov eax, esi */
  EAX = (ESI);
L_11a28007:;
  /* 11a28007 pop edi */
  EDI = (pop32());
  /* 11a28008 pop esi */
  ESI = (pop32());
  /* 11a28009 pop ebx */
  EBX = (pop32());
  /* 11a2800a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2800b ret  */
  ESPCHK(0x11a27d3du, _esp0);
  ESP += 4; return;
}

/* FUN_10008010 @ 0x11a28010 (7 bytes, 3 insns) */
void f_11a28010(void) {
  FTRACE(0x11a28010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28010 push edi */
  push32((uint32_t)(EDI));
  /* 11a28011 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a28015 jmp 0x11a28081 */
  jmp_ind(0x11a28081u); return;
}

/* FUN_10008020 @ 0x11a28020 (224 bytes, 84 insns) */
void f_11a28020(void) {
  FTRACE(0x11a28020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28020 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28024 push edi */
  push32((uint32_t)(EDI));
  /* 11a28025 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a2802b je 0x11a2803c */
  if (C.zf) goto L_11a2803c;
L_11a2802d:;
  /* 11a2802d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a2802f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a28030 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a28032 je 0x11a2806f */
  if (C.zf) goto L_11a2806f;
  /* 11a28034 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a2803a jne 0x11a2802d */
  if (!C.zf) goto L_11a2802d;
L_11a2803c:;
  /* 11a2803c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a2803e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a28043 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28045 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a28048 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2804a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2804d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a28052 je 0x11a2803c */
  if (C.zf) goto L_11a2803c;
  /* 11a28054 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a28057 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a28059 je 0x11a2807e */
  if (C.zf) goto L_11a2807e;
  /* 11a2805b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a2805d je 0x11a28079 */
  if (C.zf) goto L_11a28079;
  /* 11a2805f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a28064 je 0x11a28074 */
  if (C.zf) goto L_11a28074;
  /* 11a28066 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a2806b je 0x11a2806f */
  if (C.zf) goto L_11a2806f;
  /* 11a2806d jmp 0x11a2803c */
  goto L_11a2803c;
L_11a2806f:;
  /* 11a2806f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a28072 jmp 0x11a28081 */
  goto L_11a28081;
L_11a28074:;
  /* 11a28074 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a28077 jmp 0x11a28081 */
  goto L_11a28081;
L_11a28079:;
  /* 11a28079 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a2807c jmp 0x11a28081 */
  goto L_11a28081;
L_11a2807e:;
  /* 11a2807e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a28081:;
  /* 11a28081 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a28085 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a2808b je 0x11a280a6 */
  if (C.zf) goto L_11a280a6;
L_11a2808d:;
  /* 11a2808d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a2808f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a28090 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a28092 je 0x11a280f8 */
  if (C.zf) goto L_11a280f8;
  /* 11a28094 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a28096 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a28097 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a2809d jne 0x11a2808d */
  if (!C.zf) goto L_11a2808d;
  /* 11a2809f jmp 0x11a280a6 */
  goto L_11a280a6;
L_11a280a1:;
  /* 11a280a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a280a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a280a6:;
  /* 11a280a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a280ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a280ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a280af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a280b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a280b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a280b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a280b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a280be je 0x11a280a1 */
  if (C.zf) goto L_11a280a1;
  /* 11a280c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a280c2 je 0x11a280f8 */
  if (C.zf) goto L_11a280f8;
  /* 11a280c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a280c6 je 0x11a280ef */
  if (C.zf) goto L_11a280ef;
  /* 11a280c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a280ce je 0x11a280e2 */
  if (C.zf) goto L_11a280e2;
  /* 11a280d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a280d6 je 0x11a280da */
  if (C.zf) goto L_11a280da;
  /* 11a280d8 jmp 0x11a280a1 */
  goto L_11a280a1;
L_11a280da:;
  /* 11a280da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a280dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a280e0 pop edi */
  EDI = (pop32());
  /* 11a280e1 ret  */
  ESPCHK(0x11a28020u, _esp0);
  ESP += 4; return;
L_11a280e2:;
  /* 11a280e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a280e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a280e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a280ed pop edi */
  EDI = (pop32());
  /* 11a280ee ret  */
  ESPCHK(0x11a28020u, _esp0);
  ESP += 4; return;
L_11a280ef:;
  /* 11a280ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a280f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a280f6 pop edi */
  EDI = (pop32());
  /* 11a280f7 ret  */
  ESPCHK(0x11a28020u, _esp0);
  ESP += 4; return;
L_11a280f8:;
  /* 11a280f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a280fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a280fe pop edi */
  EDI = (pop32());
  /* 11a280ff ret  */
  ESPCHK(0x11a28020u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a28100 (123 bytes, 44 insns) */
void f_11a28100(void) {
  FTRACE(0x11a28100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28100 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28104 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a2810a je 0x11a28120 */
  if (C.zf) goto L_11a28120;
L_11a2810c:;
  /* 11a2810c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a2810e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a2810f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a28111 je 0x11a28153 */
  if (C.zf) goto L_11a28153;
  /* 11a28113 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a28119 jne 0x11a2810c */
  if (!C.zf) goto L_11a2810c;
  /* 11a2811b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a28120:;
  /* 11a28120 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a28122 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a28127 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28129 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a2812c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2812e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28131 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a28136 je 0x11a28120 */
  if (C.zf) goto L_11a28120;
  /* 11a28138 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a2813b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2813d je 0x11a28171 */
  if (C.zf) goto L_11a28171;
  /* 11a2813f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a28141 je 0x11a28167 */
  if (C.zf) goto L_11a28167;
  /* 11a28143 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a28148 je 0x11a2815d */
  if (C.zf) goto L_11a2815d;
  /* 11a2814a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a2814f je 0x11a28153 */
  if (C.zf) goto L_11a28153;
  /* 11a28151 jmp 0x11a28120 */
  goto L_11a28120;
L_11a28153:;
  /* 11a28153 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a28156 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2815a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2815c ret  */
  ESPCHK(0x11a28100u, _esp0);
  ESP += 4; return;
L_11a2815d:;
  /* 11a2815d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a28160 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28164 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28166 ret  */
  ESPCHK(0x11a28100u, _esp0);
  ESP += 4; return;
L_11a28167:;
  /* 11a28167 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a2816a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2816e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28170 ret  */
  ESPCHK(0x11a28100u, _esp0);
  ESP += 4; return;
L_11a28171:;
  /* 11a28171 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a28174 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28178 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2817a ret  */
  ESPCHK(0x11a28100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000817b @ 0x11a2817b (429 bytes, 143 insns) */
void f_11a2817b(void) {
  FTRACE(0x11a2817bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2817b push ebp */
  push32((uint32_t)(EBP));
  /* 11a2817c mov ebp, esp */
  EBP = (ESP);
  /* 11a2817e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28181 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28182 push esi */
  push32((uint32_t)(ESI));
  /* 11a28183 push edi */
  push32((uint32_t)(EDI));
  /* 11a28184 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a28186 call 0x11a27376 */
  push32(0x11a2818bu); f_11a27376();
  /* 11a2818b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a2818e call 0x11a28328 */
  push32(0x11a28193u); f_11a28328();
  /* 11a28193 mov ebx, eax */
  EBX = (EAX);
  /* 11a28195 pop ecx */
  ECX = (pop32());
  /* 11a28196 cmp ebx, dword ptr [0x11a30258] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a30258))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2819c pop ecx */
  ECX = (pop32());
  /* 11a2819d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a281a0 jne 0x11a281a9 */
  if (!C.zf) goto L_11a281a9;
L_11a281a2:;
  /* 11a281a2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a281a4 jmp 0x11a28319 */
  goto L_11a28319;
L_11a281a9:;
  /* 11a281a9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a281ab je 0x11a28307 */
  if (C.zf) goto L_11a28307;
  /* 11a281b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a281b3 mov eax, 0x11a2eb58 */
  EAX = (0x11a2eb58u);
L_11a281b8:;
  /* 11a281b8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a281ba je 0x11a28230 */
  if (C.zf) goto L_11a28230;
  /* 11a281bc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a281bf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a281c0 cmp eax, 0x11a2ec48 */
  { uint32_t _a=(EAX),_b=(0x11a2ec48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a281c5 jl 0x11a281b8 */
  if ((C.sf!=C.of)) goto L_11a281b8;
  /* 11a281c7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a281ca push eax */
  push32((uint32_t)(EAX));
  /* 11a281cb push ebx */
  push32((uint32_t)(EBX));
  /* 11a281cc call dword ptr [0x11a2a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a03c))), 0x11a281d2u);
  /* 11a281d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a281d4 pop esi */
  ESI = (pop32());
  /* 11a281d5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a281d7 jne 0x11a282fe */
  if (!C.zf) goto L_11a282fe;
  /* 11a281dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a281df and dword ptr [0x11a30484], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a30484)))&(0x0u); w32((uint32_t)(0x11a30484), (_r)); fl_logic(_r,32); }
  /* 11a281e6 pop ecx */
  ECX = (pop32());
  /* 11a281e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a281e9 mov edi, 0x11a30380 */
  EDI = (0x11a30380u);
  /* 11a281ee cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a281f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a281f3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a281f4 mov dword ptr [0x11a30258], ebx */
  w32((uint32_t)(0x11a30258), (EBX));
  /* 11a281fa jbe 0x11a282eb */
  if ((C.cf||C.zf)) goto L_11a282eb;
  /* 11a28200 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28204 je 0x11a282c6 */
  if (C.zf) goto L_11a282c6;
  /* 11a2820a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11a2820d:;
  /* 11a2820d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a2820f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a28211 je 0x11a282c6 */
  if (C.zf) goto L_11a282c6;
  /* 11a28217 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11a2821b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11a2821e:;
  /* 11a2821e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28220 ja 0x11a282ba */
  if ((!C.cf&&!C.zf)) goto L_11a282ba;
  /* 11a28226 or byte ptr [eax + 0x11a30381], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(0x4u); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a2822d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a2822e jmp 0x11a2821e */
  goto L_11a2821e;
L_11a28230:;
  /* 11a28230 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a28234 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a28236 pop ecx */
  ECX = (pop32());
  /* 11a28237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a28239 mov edi, 0x11a30380 */
  EDI = (0x11a30380u);
  /* 11a2823e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11a28241 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a28243 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a28246 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a28247 lea ebx, [esi + 0x11a2eb68] */
  EBX = ((uint32_t)(ESI + 0x11a2eb68));
L_11a2824d:;
  /* 11a2824d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28250 mov ecx, ebx */
  ECX = (EBX);
  /* 11a28252 je 0x11a28280 */
  if (C.zf) goto L_11a28280;
L_11a28254:;
  /* 11a28254 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a28257 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a28259 je 0x11a28280 */
  if (C.zf) goto L_11a28280;
  /* 11a2825b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a2825e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11a28261 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28263 ja 0x11a28279 */
  if ((!C.cf&&!C.zf)) goto L_11a28279;
  /* 11a28265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a28268 mov dl, byte ptr [edx + 0x11a2eb50] */
  DL = (r8((uint32_t)(EDX + 0x11a2eb50)));
L_11a2826e:;
  /* 11a2826e or byte ptr [eax + 0x11a30381], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(DL); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a28274 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a28275 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28277 jbe 0x11a2826e */
  if ((C.cf||C.zf)) goto L_11a2826e;
L_11a28279:;
  /* 11a28279 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a2827a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a2827b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2827e jne 0x11a28254 */
  if (!C.zf) goto L_11a28254;
L_11a28280:;
  /* 11a28280 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a28283 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28286 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2828a jb 0x11a2824d */
  if (C.cf) goto L_11a2824d;
  /* 11a2828c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2828f mov dword ptr [0x11a3026c], 1 */
  w32((uint32_t)(0x11a3026c), (0x1u));
  /* 11a28299 push eax */
  push32((uint32_t)(EAX));
  /* 11a2829a mov dword ptr [0x11a30258], eax */
  w32((uint32_t)(0x11a30258), (EAX));
  /* 11a2829f call 0x11a28372 */
  push32(0x11a282a4u); f_11a28372();
  /* 11a282a4 lea esi, [esi + 0x11a2eb5c] */
  ESI = ((uint32_t)(ESI + 0x11a2eb5c));
  /* 11a282aa mov edi, 0x11a30260 */
  EDI = (0x11a30260u);
  /* 11a282af movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a282b0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a282b1 pop ecx */
  ECX = (pop32());
  /* 11a282b2 mov dword ptr [0x11a30484], eax */
  w32((uint32_t)(0x11a30484), (EAX));
  /* 11a282b7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a282b8 jmp 0x11a2830c */
  goto L_11a2830c;
L_11a282ba:;
  /* 11a282ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a282bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a282bc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a282c0 jne 0x11a2820d */
  if (!C.zf) goto L_11a2820d;
L_11a282c6:;
  /* 11a282c6 mov eax, esi */
  EAX = (ESI);
L_11a282c8:;
  /* 11a282c8 or byte ptr [eax + 0x11a30381], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(0x8u); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a282cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a282d0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a282d5 jb 0x11a282c8 */
  if (C.cf) goto L_11a282c8;
  /* 11a282d7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a282d8 call 0x11a28372 */
  push32(0x11a282ddu); f_11a28372();
  /* 11a282dd pop ecx */
  ECX = (pop32());
  /* 11a282de mov dword ptr [0x11a30484], eax */
  w32((uint32_t)(0x11a30484), (EAX));
  /* 11a282e3 mov dword ptr [0x11a3026c], esi */
  w32((uint32_t)(0x11a3026c), (ESI));
  /* 11a282e9 jmp 0x11a282f2 */
  goto L_11a282f2;
L_11a282eb:;
  /* 11a282eb and dword ptr [0x11a3026c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a3026c)))&(0x0u); w32((uint32_t)(0x11a3026c), (_r)); fl_logic(_r,32); }
L_11a282f2:;
  /* 11a282f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a282f4 mov edi, 0x11a30260 */
  EDI = (0x11a30260u);
  /* 11a282f9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a282fa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a282fb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a282fc jmp 0x11a2830c */
  goto L_11a2830c;
L_11a282fe:;
  /* 11a282fe cmp dword ptr [0x11a300cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a300cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28305 je 0x11a28316 */
  if (C.zf) goto L_11a28316;
L_11a28307:;
  /* 11a28307 call 0x11a283a5 */
  push32(0x11a2830cu); f_11a283a5();
L_11a2830c:;
  /* 11a2830c call 0x11a283ce */
  push32(0x11a28311u); f_11a283ce();
  /* 11a28311 jmp 0x11a281a2 */
  goto L_11a281a2;
L_11a28316:;
  /* 11a28316 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a28319:;
  /* 11a28319 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a2831b call 0x11a273d7 */
  push32(0x11a28320u); f_11a273d7();
  /* 11a28320 pop ecx */
  ECX = (pop32());
  /* 11a28321 mov eax, esi */
  EAX = (ESI);
  /* 11a28323 pop edi */
  EDI = (pop32());
  /* 11a28324 pop esi */
  ESI = (pop32());
  /* 11a28325 pop ebx */
  EBX = (pop32());
  /* 11a28326 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28327 ret  */
  ESPCHK(0x11a2817bu, _esp0);
  ESP += 4; return;
}

/* FUN_10008328 @ 0x11a28328 (74 bytes, 15 insns) */
void f_11a28328(void) {
  FTRACE(0x11a28328u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28328 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2832c and dword ptr [0x11a300cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a300cc)))&(0x0u); w32((uint32_t)(0x11a300cc), (_r)); fl_logic(_r,32); }
  /* 11a28333 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28336 jne 0x11a28348 */
  if (!C.zf) goto L_11a28348;
  /* 11a28338 mov dword ptr [0x11a300cc], 1 */
  w32((uint32_t)(0x11a300cc), (0x1u));
  /* 11a28342 jmp dword ptr [0x11a2a02c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a2a02c)))); return;
L_11a28348:;
  /* 11a28348 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2834b jne 0x11a2835d */
  if (!C.zf) goto L_11a2835d;
  /* 11a2834d mov dword ptr [0x11a300cc], 1 */
  w32((uint32_t)(0x11a300cc), (0x1u));
  /* 11a28357 jmp dword ptr [0x11a2a030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a2a030)))); return;
L_11a2835d:;
  /* 11a2835d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28360 jne 0x11a28371 */
  if (!C.zf) goto L_11a28371;
  /* 11a28362 mov eax, dword ptr [0x11a300f8] */
  EAX = (r32((uint32_t)(0x11a300f8)));
  /* 11a28367 mov dword ptr [0x11a300cc], 1 */
  w32((uint32_t)(0x11a300cc), (0x1u));
L_11a28371:;
  /* 11a28371 ret  */
  ESPCHK(0x11a28328u, _esp0);
  ESP += 4; return;
}

/* FUN_10008372 @ 0x11a28372 (51 bytes, 19 insns) */
void f_11a28372(void) {
  FTRACE(0x11a28372u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28372 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28376 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2837b je 0x11a2839f */
  if (C.zf) goto L_11a2839f;
  /* 11a2837d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28380 je 0x11a28399 */
  if (C.zf) goto L_11a28399;
  /* 11a28382 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28385 je 0x11a28393 */
  if (C.zf) goto L_11a28393;
  /* 11a28387 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a28388 je 0x11a2838d */
  if (C.zf) goto L_11a2838d;
  /* 11a2838a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2838c ret  */
  ESPCHK(0x11a28372u, _esp0);
  ESP += 4; return;
L_11a2838d:;
  /* 11a2838d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a28392 ret  */
  ESPCHK(0x11a28372u, _esp0);
  ESP += 4; return;
L_11a28393:;
  /* 11a28393 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a28398 ret  */
  ESPCHK(0x11a28372u, _esp0);
  ESP += 4; return;
L_11a28399:;
  /* 11a28399 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a2839e ret  */
  ESPCHK(0x11a28372u, _esp0);
  ESP += 4; return;
L_11a2839f:;
  /* 11a2839f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a283a4 ret  */
  ESPCHK(0x11a28372u, _esp0);
  ESP += 4; return;
}

/* FUN_100083a5 @ 0x11a283a5 (41 bytes, 17 insns) */
void f_11a283a5(void) {
  FTRACE(0x11a283a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a283a5 push edi */
  push32((uint32_t)(EDI));
  /* 11a283a6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a283a8 pop ecx */
  ECX = (pop32());
  /* 11a283a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a283ab mov edi, 0x11a30380 */
  EDI = (0x11a30380u);
  /* 11a283b0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a283b2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a283b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a283b5 mov edi, 0x11a30260 */
  EDI = (0x11a30260u);
  /* 11a283ba mov dword ptr [0x11a30258], eax */
  w32((uint32_t)(0x11a30258), (EAX));
  /* 11a283bf mov dword ptr [0x11a3026c], eax */
  w32((uint32_t)(0x11a3026c), (EAX));
  /* 11a283c4 mov dword ptr [0x11a30484], eax */
  w32((uint32_t)(0x11a30484), (EAX));
  /* 11a283c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a283ca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a283cb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a283cc pop edi */
  EDI = (pop32());
  /* 11a283cd ret  */
  ESPCHK(0x11a283a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100083ce @ 0x11a283ce (389 bytes, 124 insns) */
void f_11a283ce(void) {
  FTRACE(0x11a283ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a283ce push ebp */
  push32((uint32_t)(EBP));
  /* 11a283cf mov ebp, esp */
  EBP = (ESP);
  /* 11a283d1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a283d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a283da push esi */
  push32((uint32_t)(ESI));
  /* 11a283db push eax */
  push32((uint32_t)(EAX));
  /* 11a283dc push dword ptr [0x11a30258] */
  push32((uint32_t)(r32((uint32_t)(0x11a30258))));
  /* 11a283e2 call dword ptr [0x11a2a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a03c))), 0x11a283e8u);
  /* 11a283e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a283eb jne 0x11a28507 */
  if (!C.zf) goto L_11a28507;
  /* 11a283f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a283f3 mov esi, 0x100 */
  ESI = (0x100u);
L_11a283f8:;
  /* 11a283f8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11a283ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a28400 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28402 jb 0x11a283f8 */
  if (C.cf) goto L_11a283f8;
  /* 11a28404 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11a28407 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11a2840e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a28410 je 0x11a28449 */
  if (C.zf) goto L_11a28449;
  /* 11a28412 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28413 push edi */
  push32((uint32_t)(EDI));
  /* 11a28414 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11a28417:;
  /* 11a28417 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a2841a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a2841d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2841f ja 0x11a2843e */
  if ((!C.cf&&!C.zf)) goto L_11a2843e;
  /* 11a28421 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28423 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11a2842a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a2842b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11a28430 mov ebx, ecx */
  EBX = (ECX);
  /* 11a28432 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28435 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a28437 mov ecx, ebx */
  ECX = (EBX);
  /* 11a28439 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2843c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11a2843e:;
  /* 11a2843e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a2843f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a28440 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11a28443 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a28445 jne 0x11a28417 */
  if (!C.zf) goto L_11a28417;
  /* 11a28447 pop edi */
  EDI = (pop32());
  /* 11a28448 pop ebx */
  EBX = (pop32());
L_11a28449:;
  /* 11a28449 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2844b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11a28451 push dword ptr [0x11a30484] */
  push32((uint32_t)(r32((uint32_t)(0x11a30484))));
  /* 11a28457 push dword ptr [0x11a30258] */
  push32((uint32_t)(r32((uint32_t)(0x11a30258))));
  /* 11a2845d push eax */
  push32((uint32_t)(EAX));
  /* 11a2845e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a28464 push esi */
  push32((uint32_t)(ESI));
  /* 11a28465 push eax */
  push32((uint32_t)(EAX));
  /* 11a28466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28468 call 0x11a28f9c */
  push32(0x11a2846du); f_11a28f9c();
  /* 11a2846d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2846f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11a28475 push dword ptr [0x11a30258] */
  push32((uint32_t)(r32((uint32_t)(0x11a30258))));
  /* 11a2847b push esi */
  push32((uint32_t)(ESI));
  /* 11a2847c push eax */
  push32((uint32_t)(EAX));
  /* 11a2847d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a28483 push esi */
  push32((uint32_t)(ESI));
  /* 11a28484 push eax */
  push32((uint32_t)(EAX));
  /* 11a28485 push esi */
  push32((uint32_t)(ESI));
  /* 11a28486 push dword ptr [0x11a30484] */
  push32((uint32_t)(r32((uint32_t)(0x11a30484))));
  /* 11a2848c call 0x11a28d4d */
  push32(0x11a28491u); f_11a28d4d();
  /* 11a28491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a28493 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11a28499 push dword ptr [0x11a30258] */
  push32((uint32_t)(r32((uint32_t)(0x11a30258))));
  /* 11a2849f push esi */
  push32((uint32_t)(ESI));
  /* 11a284a0 push eax */
  push32((uint32_t)(EAX));
  /* 11a284a1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a284a7 push esi */
  push32((uint32_t)(ESI));
  /* 11a284a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a284a9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a284ae push dword ptr [0x11a30484] */
  push32((uint32_t)(r32((uint32_t)(0x11a30484))));
  /* 11a284b4 call 0x11a28d4d */
  push32(0x11a284b9u); f_11a28d4d();
  /* 11a284b9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a284bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a284be lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11a284c4:;
  /* 11a284c4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a284c7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a284ca je 0x11a284e2 */
  if (C.zf) goto L_11a284e2;
  /* 11a284cc or byte ptr [eax + 0x11a30381], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(0x10u); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a284d3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11a284da:;
  /* 11a284da mov byte ptr [eax + 0x11a30280], dl */
  w8((uint32_t)(EAX + 0x11a30280), (DL));
  /* 11a284e0 jmp 0x11a284fe */
  goto L_11a284fe;
L_11a284e2:;
  /* 11a284e2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11a284e5 je 0x11a284f7 */
  if (C.zf) goto L_11a284f7;
  /* 11a284e7 or byte ptr [eax + 0x11a30381], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(0x20u); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a284ee mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11a284f5 jmp 0x11a284da */
  goto L_11a284da;
L_11a284f7:;
  /* 11a284f7 and byte ptr [eax + 0x11a30280], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30280)))&(0x0u); w8((uint32_t)(EAX + 0x11a30280), (_r)); fl_logic(_r,8); }
L_11a284fe:;
  /* 11a284fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a284ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a28500 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a28501 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28503 jb 0x11a284c4 */
  if (C.cf) goto L_11a284c4;
  /* 11a28505 jmp 0x11a28550 */
  goto L_11a28550;
L_11a28507:;
  /* 11a28507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a28509 mov esi, 0x100 */
  ESI = (0x100u);
L_11a2850e:;
  /* 11a2850e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28511 jb 0x11a2852c */
  if (C.cf) goto L_11a2852c;
  /* 11a28513 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28516 ja 0x11a2852c */
  if ((!C.cf&&!C.zf)) goto L_11a2852c;
  /* 11a28518 or byte ptr [eax + 0x11a30381], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(0x10u); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a2851f mov cl, al */
  CL = (AL);
  /* 11a28521 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11a28524:;
  /* 11a28524 mov byte ptr [eax + 0x11a30280], cl */
  w8((uint32_t)(EAX + 0x11a30280), (CL));
  /* 11a2852a jmp 0x11a2854b */
  goto L_11a2854b;
L_11a2852c:;
  /* 11a2852c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2852f jb 0x11a28544 */
  if (C.cf) goto L_11a28544;
  /* 11a28531 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28534 ja 0x11a28544 */
  if ((!C.cf&&!C.zf)) goto L_11a28544;
  /* 11a28536 or byte ptr [eax + 0x11a30381], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30381)))|(0x20u); w8((uint32_t)(EAX + 0x11a30381), (_r)); fl_logic(_r,8); }
  /* 11a2853d mov cl, al */
  CL = (AL);
  /* 11a2853f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a28542 jmp 0x11a28524 */
  goto L_11a28524;
L_11a28544:;
  /* 11a28544 and byte ptr [eax + 0x11a30280], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a30280)))&(0x0u); w8((uint32_t)(EAX + 0x11a30280), (_r)); fl_logic(_r,8); }
L_11a2854b:;
  /* 11a2854b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a2854c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2854e jb 0x11a2850e */
  if (C.cf) goto L_11a2850e;
L_11a28550:;
  /* 11a28550 pop esi */
  ESI = (pop32());
  /* 11a28551 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28552 ret  */
  ESPCHK(0x11a283ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10008553 @ 0x11a28553 (28 bytes, 7 insns) */
void f_11a28553(void) {
  FTRACE(0x11a28553u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28553 cmp dword ptr [0x11a304b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a304b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2855a jne 0x11a2856e */
  if (!C.zf) goto L_11a2856e;
  /* 11a2855c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a2855e call 0x11a2817b */
  push32(0x11a28563u); f_11a2817b();
  /* 11a28563 pop ecx */
  ECX = (pop32());
  /* 11a28564 mov dword ptr [0x11a304b0], 1 */
  w32((uint32_t)(0x11a304b0), (0x1u));
L_11a2856e:;
  /* 11a2856e ret  */
  ESPCHK(0x11a28553u, _esp0);
  ESP += 4; return;
}

/* FUN_1000856f @ 0x11a2856f (23 bytes, 7 insns) */
void f_11a2856f(void) {
  FTRACE(0x11a2856fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2856f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a28571 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a28575 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a28579 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a2857d call 0x11a28586 */
  push32(0x11a28582u); f_11a28586();
  /* 11a28582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28585 ret  */
  ESPCHK(0x11a2856fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008586 @ 0x11a28586 (517 bytes, 195 insns) */
void f_11a28586(void) {
  FTRACE(0x11a28586u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28586 push ebp */
  push32((uint32_t)(EBP));
  /* 11a28587 mov ebp, esp */
  EBP = (ESP);
  /* 11a28589 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2858c push ebx */
  push32((uint32_t)(EBX));
  /* 11a2858d and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a28591 push esi */
  push32((uint32_t)(ESI));
  /* 11a28592 push edi */
  push32((uint32_t)(EDI));
  /* 11a28593 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28596 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a28598 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11a2859b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a2859e:;
  /* 11a2859e cmp dword ptr [0x11a2ee5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ee5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a285a5 jle 0x11a285b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a285b6;
  /* 11a285a7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a285aa push 8 */
  push32((uint32_t)(0x8u));
  /* 11a285ac push eax */
  push32((uint32_t)(EAX));
  /* 11a285ad call 0x11a29220 */
  push32(0x11a285b2u); f_11a29220();
  /* 11a285b2 pop ecx */
  ECX = (pop32());
  /* 11a285b3 pop ecx */
  ECX = (pop32());
  /* 11a285b4 jmp 0x11a285c5 */
  goto L_11a285c5;
L_11a285b6:;
  /* 11a285b6 mov ecx, dword ptr [0x11a2ec50] */
  ECX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a285bc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a285bf mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11a285c2 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11a285c5:;
  /* 11a285c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a285c7 je 0x11a285ce */
  if (C.zf) goto L_11a285ce;
  /* 11a285c9 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11a285cb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a285cc jmp 0x11a2859e */
  goto L_11a2859e;
L_11a285ce:;
  /* 11a285ce cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a285d1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11a285d4 jne 0x11a285dc */
  if (!C.zf) goto L_11a285dc;
  /* 11a285d6 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a285da jmp 0x11a285e1 */
  goto L_11a285e1;
L_11a285dc:;
  /* 11a285dc cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a285df jne 0x11a285e7 */
  if (!C.zf) goto L_11a285e7;
L_11a285e1:;
  /* 11a285e1 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11a285e3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a285e4 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a285e7:;
  /* 11a285e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a285ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a285ec jl 0x11a2877b */
  if ((C.sf!=C.of)) goto L_11a2877b;
  /* 11a285f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a285f5 je 0x11a2877b */
  if (C.zf) goto L_11a2877b;
  /* 11a285fb cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a285fe jg 0x11a2877b */
  if ((!C.zf&&C.sf==C.of)) goto L_11a2877b;
  /* 11a28604 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a28606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28608 pop ecx */
  ECX = (pop32());
  /* 11a28609 jne 0x11a2862f */
  if (!C.zf) goto L_11a2862f;
  /* 11a2860b cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2860e je 0x11a28619 */
  if (C.zf) goto L_11a28619;
  /* 11a28610 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11a28617 jmp 0x11a2864b */
  goto L_11a2864b;
L_11a28619:;
  /* 11a28619 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a2861b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2861d je 0x11a2862c */
  if (C.zf) goto L_11a2862c;
  /* 11a2861f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28621 je 0x11a2862c */
  if (C.zf) goto L_11a2862c;
  /* 11a28623 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11a2862a jmp 0x11a2864b */
  goto L_11a2864b;
L_11a2862c:;
  /* 11a2862c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11a2862f:;
  /* 11a2862f cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28632 jne 0x11a2864b */
  if (!C.zf) goto L_11a2864b;
  /* 11a28634 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28637 jne 0x11a2864b */
  if (!C.zf) goto L_11a2864b;
  /* 11a28639 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a2863b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2863d je 0x11a28643 */
  if (C.zf) goto L_11a28643;
  /* 11a2863f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28641 jne 0x11a2864b */
  if (!C.zf) goto L_11a2864b;
L_11a28643:;
  /* 11a28643 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28646 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a28647 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a28648 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a2864b:;
  /* 11a2864b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a2864e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a28650 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a28653 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11a28658 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a2865b:;
  /* 11a2865b cmp dword ptr [0x11a2ee5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ee5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28662 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11a28665 jle 0x11a28673 */
  if ((C.zf||C.sf!=C.of)) goto L_11a28673;
  /* 11a28667 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a28669 push esi */
  push32((uint32_t)(ESI));
  /* 11a2866a call 0x11a29220 */
  push32(0x11a2866fu); f_11a29220();
  /* 11a2866f pop ecx */
  ECX = (pop32());
  /* 11a28670 pop ecx */
  ECX = (pop32());
  /* 11a28671 jmp 0x11a2867e */
  goto L_11a2867e;
L_11a28673:;
  /* 11a28673 mov eax, dword ptr [0x11a2ec50] */
  EAX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a28678 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11a2867b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11a2867e:;
  /* 11a2867e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28680 je 0x11a2868a */
  if (C.zf) goto L_11a2868a;
  /* 11a28682 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11a28685 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28688 jmp 0x11a286bc */
  goto L_11a286bc;
L_11a2868a:;
  /* 11a2868a cmp dword ptr [0x11a2ee5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ee5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28691 jle 0x11a2869e */
  if ((C.zf||C.sf!=C.of)) goto L_11a2869e;
  /* 11a28693 push edi */
  push32((uint32_t)(EDI));
  /* 11a28694 push esi */
  push32((uint32_t)(ESI));
  /* 11a28695 call 0x11a29220 */
  push32(0x11a2869au); f_11a29220();
  /* 11a2869a pop ecx */
  ECX = (pop32());
  /* 11a2869b pop ecx */
  ECX = (pop32());
  /* 11a2869c jmp 0x11a286a9 */
  goto L_11a286a9;
L_11a2869e:;
  /* 11a2869e mov eax, dword ptr [0x11a2ec50] */
  EAX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a286a3 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11a286a7 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11a286a9:;
  /* 11a286a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a286ab je 0x11a286f7 */
  if (C.zf) goto L_11a286f7;
  /* 11a286ad movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11a286b0 push eax */
  push32((uint32_t)(EAX));
  /* 11a286b1 call 0x11a290e5 */
  push32(0x11a286b6u); f_11a290e5();
  /* 11a286b6 pop ecx */
  ECX = (pop32());
  /* 11a286b7 mov ecx, eax */
  ECX = (EAX);
  /* 11a286b9 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11a286bc:;
  /* 11a286bc cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a286bf jae 0x11a286f7 */
  if (!C.cf) goto L_11a286f7;
  /* 11a286c1 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11a286c4 or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a286c8 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a286cb jb 0x11a286e1 */
  if (C.cf) goto L_11a286e1;
  /* 11a286cd jne 0x11a286db */
  if (!C.zf) goto L_11a286db;
  /* 11a286cf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a286d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a286d4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a286d7 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a286d9 jbe 0x11a286e1 */
  if ((C.cf||C.zf)) goto L_11a286e1;
L_11a286db:;
  /* 11a286db or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a286df jmp 0x11a286ea */
  goto L_11a286ea;
L_11a286e1:;
  /* 11a286e1 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a286e5 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a286e7 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11a286ea:;
  /* 11a286ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a286ed inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a286f0 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a286f2 jmp 0x11a2865b */
  goto L_11a2865b;
L_11a286f7:;
  /* 11a286f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a286fa dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11a286fd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a28700 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a28702 jne 0x11a28714 */
  if (!C.zf) goto L_11a28714;
  /* 11a28704 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a28706 je 0x11a2870e */
  if (C.zf) goto L_11a2870e;
  /* 11a28708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2870b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a2870e:;
  /* 11a2870e and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a28712 jmp 0x11a2875f */
  goto L_11a2875f;
L_11a28714:;
  /* 11a28714 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11a28716 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11a2871b jne 0x11a28738 */
  if (!C.zf) goto L_11a28738;
  /* 11a2871d test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a2871f jne 0x11a2875f */
  if (!C.zf) goto L_11a2875f;
  /* 11a28721 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11a28724 je 0x11a2872f */
  if (C.zf) goto L_11a2872f;
  /* 11a28726 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2872d ja 0x11a28738 */
  if ((!C.cf&&!C.zf)) goto L_11a28738;
L_11a2872f:;
  /* 11a2872f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28731 jne 0x11a2875f */
  if (!C.zf) goto L_11a2875f;
  /* 11a28733 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28736 jbe 0x11a2875f */
  if ((C.cf||C.zf)) goto L_11a2875f;
L_11a28738:;
  /* 11a28738 call 0x11a25452 */
  push32(0x11a2873du); f_11a25452();
  /* 11a2873d test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11a28741 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11a28747 je 0x11a2874f */
  if (C.zf) goto L_11a2874f;
  /* 11a28749 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a2874d jmp 0x11a2875f */
  goto L_11a2875f;
L_11a2874f:;
  /* 11a2874f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a28752 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a28754 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11a28756 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28758 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a2875a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2875c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a2875f:;
  /* 11a2875f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a28761 je 0x11a28768 */
  if (C.zf) goto L_11a28768;
  /* 11a28763 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a28766 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11a28768:;
  /* 11a28768 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11a2876c je 0x11a28776 */
  if (C.zf) goto L_11a28776;
  /* 11a2876e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a28771 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a28773 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a28776:;
  /* 11a28776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a28779 jmp 0x11a28786 */
  goto L_11a28786;
L_11a2877b:;
  /* 11a2877b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a2877e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28780 je 0x11a28784 */
  if (C.zf) goto L_11a28784;
  /* 11a28782 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11a28784:;
  /* 11a28784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a28786:;
  /* 11a28786 pop edi */
  EDI = (pop32());
  /* 11a28787 pop esi */
  ESI = (pop32());
  /* 11a28788 pop ebx */
  EBX = (pop32());
  /* 11a28789 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2878a ret  */
  ESPCHK(0x11a28586u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11a28790 (56 bytes, 31 insns) */
void f_11a28790(void) {
  FTRACE(0x11a28790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28790 push ebp */
  push32((uint32_t)(EBP));
  /* 11a28791 mov ebp, esp */
  EBP = (ESP);
  /* 11a28793 push edi */
  push32((uint32_t)(EDI));
  /* 11a28794 push esi */
  push32((uint32_t)(ESI));
  /* 11a28795 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28796 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a28799 jecxz 0x11a287c1 */
  x86_unimpl("jecxz @ 0x11a28799");
  /* 11a2879b mov ebx, ecx */
  EBX = (ECX);
  /* 11a2879d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a287a0 mov esi, edi */
  ESI = (EDI);
  /* 11a287a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a287a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a287a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a287a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a287aa mov edi, esi */
  EDI = (ESI);
  /* 11a287ac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a287af repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11a287b1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11a287b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a287b6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a287b9 ja 0x11a287bf */
  if ((!C.cf&&!C.zf)) goto L_11a287bf;
  /* 11a287bb je 0x11a287c1 */
  if (C.zf) goto L_11a287c1;
  /* 11a287bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a287be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11a287bf:;
  /* 11a287bf not ecx */
  ECX = (~(ECX));
L_11a287c1:;
  /* 11a287c1 mov eax, ecx */
  EAX = (ECX);
  /* 11a287c3 pop ebx */
  EBX = (pop32());
  /* 11a287c4 pop esi */
  ESI = (pop32());
  /* 11a287c5 pop edi */
  EDI = (pop32());
  /* 11a287c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a287c7 ret  */
  ESPCHK(0x11a28790u, _esp0);
  ESP += 4; return;
}

/* FUN_100087d0 @ 0x11a287d0 (47 bytes, 17 insns) */
void f_11a287d0(void) {
  FTRACE(0x11a287d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a287d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a287d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a287d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a287da jb 0x11a287f0 */
  if (C.cf) goto L_11a287f0;
L_11a287dc:;
  /* 11a287dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a287e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a287e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a287e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a287ee jae 0x11a287dc */
  if (!C.cf) goto L_11a287dc;
L_11a287f0:;
  /* 11a287f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a287f2 mov eax, esp */
  EAX = (ESP);
  /* 11a287f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a287f6 mov esp, ecx */
  ESP = (ECX);
  /* 11a287f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a287fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a287fd push eax */
  push32((uint32_t)(EAX));
  /* 11a287fe ret  */
  ESPCHK(0x11a287d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087ff @ 0x11a287ff (137 bytes, 50 insns) */
void f_11a287ff(void) {
  FTRACE(0x11a287ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a287ff push ebx */
  push32((uint32_t)(EBX));
  /* 11a28800 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a28802 cmp dword ptr [0x11a300d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a300d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28808 push esi */
  push32((uint32_t)(ESI));
  /* 11a28809 push edi */
  push32((uint32_t)(EDI));
  /* 11a2880a jne 0x11a2884e */
  if (!C.zf) goto L_11a2884e;
  /* 11a2880c push 0x11a2a550 */
  push32((uint32_t)(0x11a2a550u));
  /* 11a28811 call dword ptr [0x11a2a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a024))), 0x11a28817u);
  /* 11a28817 mov edi, eax */
  EDI = (EAX);
  /* 11a28819 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2881b je 0x11a28884 */
  if (C.zf) goto L_11a28884;
  /* 11a2881d mov esi, dword ptr [0x11a2a034] */
  ESI = (r32((uint32_t)(0x11a2a034)));
  /* 11a28823 push 0x11a2a544 */
  push32((uint32_t)(0x11a2a544u));
  /* 11a28828 push edi */
  push32((uint32_t)(EDI));
  /* 11a28829 call esi */
  call_ind((uint32_t)(ESI), 0x11a2882bu);
  /* 11a2882b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2882d mov dword ptr [0x11a300d0], eax */
  w32((uint32_t)(0x11a300d0), (EAX));
  /* 11a28832 je 0x11a28884 */
  if (C.zf) goto L_11a28884;
  /* 11a28834 push 0x11a2a534 */
  push32((uint32_t)(0x11a2a534u));
  /* 11a28839 push edi */
  push32((uint32_t)(EDI));
  /* 11a2883a call esi */
  call_ind((uint32_t)(ESI), 0x11a2883cu);
  /* 11a2883c push 0x11a2a520 */
  push32((uint32_t)(0x11a2a520u));
  /* 11a28841 push edi */
  push32((uint32_t)(EDI));
  /* 11a28842 mov dword ptr [0x11a300d4], eax */
  w32((uint32_t)(0x11a300d4), (EAX));
  /* 11a28847 call esi */
  call_ind((uint32_t)(ESI), 0x11a28849u);
  /* 11a28849 mov dword ptr [0x11a300d8], eax */
  w32((uint32_t)(0x11a300d8), (EAX));
L_11a2884e:;
  /* 11a2884e mov eax, dword ptr [0x11a300d4] */
  EAX = (r32((uint32_t)(0x11a300d4)));
  /* 11a28853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28855 je 0x11a2886d */
  if (C.zf) goto L_11a2886d;
  /* 11a28857 call eax */
  call_ind((uint32_t)(EAX), 0x11a28859u);
  /* 11a28859 mov ebx, eax */
  EBX = (EAX);
  /* 11a2885b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a2885d je 0x11a2886d */
  if (C.zf) goto L_11a2886d;
  /* 11a2885f mov eax, dword ptr [0x11a300d8] */
  EAX = (r32((uint32_t)(0x11a300d8)));
  /* 11a28864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28866 je 0x11a2886d */
  if (C.zf) goto L_11a2886d;
  /* 11a28868 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28869 call eax */
  call_ind((uint32_t)(EAX), 0x11a2886bu);
  /* 11a2886b mov ebx, eax */
  EBX = (EAX);
L_11a2886d:;
  /* 11a2886d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a28871 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a28875 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a28879 push ebx */
  push32((uint32_t)(EBX));
  /* 11a2887a call dword ptr [0x11a300d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a300d0))), 0x11a28880u);
L_11a28880:;
  /* 11a28880 pop edi */
  EDI = (pop32());
  /* 11a28881 pop esi */
  ESI = (pop32());
  /* 11a28882 pop ebx */
  EBX = (pop32());
  /* 11a28883 ret  */
  ESPCHK(0x11a287ffu, _esp0);
  ESP += 4; return;
L_11a28884:;
  /* 11a28884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a28886 jmp 0x11a28880 */
  goto L_11a28880;
}

/* FUN_10008890 @ 0x11a28890 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11a28890(void) {
  FTRACE(0x11a28890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28890 push ebp */
  push32((uint32_t)(EBP));
  /* 11a28891 mov ebp, esp */
  EBP = (ESP);
  /* 11a28893 push edi */
  push32((uint32_t)(EDI));
  /* 11a28894 push esi */
  push32((uint32_t)(ESI));
  /* 11a28895 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a28898 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a2889b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2889e mov eax, ecx */
  EAX = (ECX);
  /* 11a288a0 mov edx, ecx */
  EDX = (ECX);
  /* 11a288a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a288a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a288a6 jbe 0x11a288b0 */
  if ((C.cf||C.zf)) goto L_11a288b0;
  /* 11a288a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a288aa jb 0x11a28a28 */
  if (C.cf) goto L_11a28a28;
L_11a288b0:;
  /* 11a288b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a288b6 jne 0x11a288cc */
  if (!C.zf) goto L_11a288cc;
  /* 11a288b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a288bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a288be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a288c1 jb 0x11a288ec */
  if (C.cf) goto L_11a288ec;
  /* 11a288c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a288c5 jmp dword ptr [edx*4 + 0x11a289d8] */
  switch (EDX) {
    case 0: goto L_11a289e8;
    case 1: goto L_11a289f0;
    case 2: goto L_11a289fc;
    case 3: goto L_11a28a10;
    default: x86_unimpl("switch@0x11a288c5 out of table"); return;
  }
L_11a288cc:;
  /* 11a288cc mov eax, edi */
  EAX = (EDI);
  /* 11a288ce mov edx, 3 */
  EDX = (0x3u);
  /* 11a288d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a288d6 jb 0x11a288e4 */
  if (C.cf) goto L_11a288e4;
  /* 11a288d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a288db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a288dd jmp dword ptr [eax*4 + 0x11a288f0] */
  switch (EAX) {
    case 1: goto L_11a28900;
    case 2: goto L_11a2892c;
    case 3: goto L_11a28950;
    default: x86_unimpl("switch@0x11a288dd out of table"); return;
  }
L_11a288e4:;
  /* 11a288e4 jmp dword ptr [ecx*4 + 0x11a289e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a289e8)))); return;
  /* 11a288eb nop  */
  /* nop */
L_11a288ec:;
  /* 11a288ec jmp dword ptr [ecx*4 + 0x11a2896c] */
  switch (ECX) {
    case 0: goto L_11a289cf;
    case 1: goto L_11a289bc;
    case 2: goto L_11a289b4;
    case 3: goto L_11a289ac;
    case 4: goto L_11a289a4;
    case 5: goto L_11a2899c;
    case 6: goto L_11a28994;
    case 7: goto L_11a2898c;
    default: x86_unimpl("switch@0x11a288ec out of table"); return;
  }
  /* 11a288f3 nop  */
  /* nop */
L_11a28900:;
  /* 11a28900 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a28902 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a28904 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28906 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28909 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a2890c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a2890f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28912 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a28915 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28918 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2891b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2891e jb 0x11a288ec */
  if (C.cf) goto L_11a288ec;
  /* 11a28920 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28922 jmp dword ptr [edx*4 + 0x11a289d8] */
  switch (EDX) {
    case 0: goto L_11a289e8;
    case 1: goto L_11a289f0;
    case 2: goto L_11a289fc;
    case 3: goto L_11a28a10;
    default: x86_unimpl("switch@0x11a28922 out of table"); return;
  }
  /* 11a28929 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a2892c:;
  /* 11a2892c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a2892e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a28930 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28932 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28935 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28938 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a2893b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2893e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28941 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28944 jb 0x11a288ec */
  if (C.cf) goto L_11a288ec;
  /* 11a28946 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28948 jmp dword ptr [edx*4 + 0x11a289d8] */
  switch (EDX) {
    case 0: goto L_11a289e8;
    case 1: goto L_11a289f0;
    case 2: goto L_11a289fc;
    case 3: goto L_11a28a10;
    default: x86_unimpl("switch@0x11a28948 out of table"); return;
  }
  /* 11a2894f nop  */
  /* nop */
L_11a28950:;
  /* 11a28950 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a28952 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a28954 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28956 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a28957 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a2895a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a2895b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2895e jb 0x11a288ec */
  if (C.cf) goto L_11a288ec;
  /* 11a28960 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28962 jmp dword ptr [edx*4 + 0x11a289d8] */
  switch (EDX) {
    case 0: goto L_11a289e8;
    case 1: goto L_11a289f0;
    case 2: goto L_11a289fc;
    case 3: goto L_11a28a10;
    default: x86_unimpl("switch@0x11a28962 out of table"); return;
  }
  /* 11a28969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a2898c:;
  /* 11a2898c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a28990 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a28994:;
  /* 11a28994 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a28998 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a2899c:;
  /* 11a2899c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a289a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a289a4:;
  /* 11a289a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a289a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a289ac:;
  /* 11a289ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a289b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a289b4:;
  /* 11a289b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a289b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a289bc:;
  /* 11a289bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a289c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a289c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a289cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a289cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a289cf:;
  /* 11a289cf jmp dword ptr [edx*4 + 0x11a289d8] */
  switch (EDX) {
    case 0: goto L_11a289e8;
    case 1: goto L_11a289f0;
    case 2: goto L_11a289fc;
    case 3: goto L_11a28a10;
    default: x86_unimpl("switch@0x11a289cf out of table"); return;
  }
  /* 11a289d6 mov edi, edi */
  EDI = (EDI);
L_11a289e8:;
  /* 11a289e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a289eb pop esi */
  ESI = (pop32());
  /* 11a289ec pop edi */
  EDI = (pop32());
  /* 11a289ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a289ee ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a289ef nop  */
  /* nop */
L_11a289f0:;
  /* 11a289f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a289f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a289f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a289f7 pop esi */
  ESI = (pop32());
  /* 11a289f8 pop edi */
  EDI = (pop32());
  /* 11a289f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a289fa ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a289fb nop  */
  /* nop */
L_11a289fc:;
  /* 11a289fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a289fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28a00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28a03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a28a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28a09 pop esi */
  ESI = (pop32());
  /* 11a28a0a pop edi */
  EDI = (pop32());
  /* 11a28a0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28a0c ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a28a0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a28a10:;
  /* 11a28a10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a28a12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28a14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28a17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a28a1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a28a1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a28a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28a23 pop esi */
  ESI = (pop32());
  /* 11a28a24 pop edi */
  EDI = (pop32());
  /* 11a28a25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28a26 ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a28a27 nop  */
  /* nop */
L_11a28a28:;
  /* 11a28a28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a28a2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a28a30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a28a36 jne 0x11a28a5c */
  if (!C.zf) goto L_11a28a5c;
  /* 11a28a38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28a3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a28a3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28a41 jb 0x11a28a50 */
  if (C.cf) goto L_11a28a50;
  /* 11a28a43 std  */
  C.df=1;
  /* 11a28a44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28a46 cld  */
  C.df=0;
  /* 11a28a47 jmp dword ptr [edx*4 + 0x11a28b70] */
  switch (EDX) {
    case 0: goto L_11a28b80;
    case 1: goto L_11a28b88;
    case 2: goto L_11a28b98;
    case 3: goto L_11a28bac;
    default: x86_unimpl("switch@0x11a28a47 out of table"); return;
  }
  /* 11a28a4e mov edi, edi */
  EDI = (EDI);
L_11a28a50:;
  /* 11a28a50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a28a52 jmp dword ptr [ecx*4 + 0x11a28b20] */
  switch (ECX) {
    case 0: goto L_11a28b67;
    default: x86_unimpl("switch@0x11a28a52 out of table"); return;
  }
  /* 11a28a59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a28a5c:;
  /* 11a28a5c mov eax, edi */
  EAX = (EDI);
  /* 11a28a5e mov edx, 3 */
  EDX = (0x3u);
  /* 11a28a63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28a66 jb 0x11a28a74 */
  if (C.cf) goto L_11a28a74;
  /* 11a28a68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a28a6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28a6d jmp dword ptr [eax*4 + 0x11a28a78] */
  switch (EAX) {
    case 1: goto L_11a28a88;
    case 2: goto L_11a28aa8;
    case 3: goto L_11a28ad0;
    default: x86_unimpl("switch@0x11a28a6d out of table"); return;
  }
L_11a28a74:;
  /* 11a28a74 jmp dword ptr [ecx*4 + 0x11a28b70] */
  switch (ECX) {
    case 0: goto L_11a28b80;
    case 1: goto L_11a28b88;
    case 2: goto L_11a28b98;
    case 3: goto L_11a28bac;
    default: x86_unimpl("switch@0x11a28a74 out of table"); return;
  }
  /* 11a28a7b nop  */
  /* nop */
L_11a28a88:;
  /* 11a28a88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a28a8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a28a8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a28a90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a28a91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28a94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a28a95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28a98 jb 0x11a28a50 */
  if (C.cf) goto L_11a28a50;
  /* 11a28a9a std  */
  C.df=1;
  /* 11a28a9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28a9d cld  */
  C.df=0;
  /* 11a28a9e jmp dword ptr [edx*4 + 0x11a28b70] */
  switch (EDX) {
    case 0: goto L_11a28b80;
    case 1: goto L_11a28b88;
    case 2: goto L_11a28b98;
    case 3: goto L_11a28bac;
    default: x86_unimpl("switch@0x11a28a9e out of table"); return;
  }
  /* 11a28aa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a28aa8:;
  /* 11a28aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a28aab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a28aad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a28ab0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a28ab3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28ab6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a28ab9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28abc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28abf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28ac2 jb 0x11a28a50 */
  if (C.cf) goto L_11a28a50;
  /* 11a28ac4 std  */
  C.df=1;
  /* 11a28ac5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28ac7 cld  */
  C.df=0;
  /* 11a28ac8 jmp dword ptr [edx*4 + 0x11a28b70] */
  switch (EDX) {
    case 0: goto L_11a28b80;
    case 1: goto L_11a28b88;
    case 2: goto L_11a28b98;
    case 3: goto L_11a28bac;
    default: x86_unimpl("switch@0x11a28ac8 out of table"); return;
  }
  /* 11a28acf nop  */
  /* nop */
L_11a28ad0:;
  /* 11a28ad0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a28ad3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a28ad5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a28ad8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a28adb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a28ade mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28ae1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28ae4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a28ae7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28aea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28aed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28af0 jb 0x11a28a50 */
  if (C.cf) goto L_11a28a50;
  /* 11a28af6 std  */
  C.df=1;
  /* 11a28af7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a28af9 cld  */
  C.df=0;
  /* 11a28afa jmp dword ptr [edx*4 + 0x11a28b70] */
  switch (EDX) {
    case 0: goto L_11a28b80;
    case 1: goto L_11a28b88;
    case 2: goto L_11a28b98;
    case 3: goto L_11a28bac;
    default: x86_unimpl("switch@0x11a28afa out of table"); return;
  }
  /* 11a28b01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a28b04 and al, 0x8b */
  { uint32_t _r=(AL)&(0x8bu); AL = (_r); fl_logic(_r,8); }
  /* 11a28b06 mov byte ptr [0xa28b2c11], al */
  w8((uint32_t)(0xa28b2c11), (AL));
  /* 11a28b0b adc dword ptr [ebx + ecx*4], esi */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*4))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a28b0e mov byte ptr [0xa28b3c11], al */
  w8((uint32_t)(0xa28b3c11), (AL));
  /* 11a28b13 adc dword ptr [ebx + ecx*4 - 0x5e], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*4 + -0x5e))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*4 + -0x5e), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a28b17 adc dword ptr [ebx + ecx*4 - 0x5e], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*4 + -0x5e))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*4 + -0x5e), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a28b1b adc dword ptr [ebx + ecx*4 - 0x5e], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*4 + -0x5e))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*4 + -0x5e), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a28b24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a28b28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a28b2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a28b30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a28b34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a28b38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a28b3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a28b40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a28b44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a28b48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a28b4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a28b50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a28b54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a28b58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a28b5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a28b63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28b65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a28b67:;
  /* 11a28b67 jmp dword ptr [edx*4 + 0x11a28b70] */
  switch (EDX) {
    case 0: goto L_11a28b80;
    case 1: goto L_11a28b88;
    case 2: goto L_11a28b98;
    case 3: goto L_11a28bac;
    default: x86_unimpl("switch@0x11a28b67 out of table"); return;
  }
  /* 11a28b6e mov edi, edi */
  EDI = (EDI);
L_11a28b80:;
  /* 11a28b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28b83 pop esi */
  ESI = (pop32());
  /* 11a28b84 pop edi */
  EDI = (pop32());
  /* 11a28b85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28b86 ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a28b87 nop  */
  /* nop */
L_11a28b88:;
  /* 11a28b88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a28b8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a28b8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28b91 pop esi */
  ESI = (pop32());
  /* 11a28b92 pop edi */
  EDI = (pop32());
  /* 11a28b93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28b94 ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a28b95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a28b98:;
  /* 11a28b98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a28b9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a28b9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a28ba1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a28ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28ba7 pop esi */
  ESI = (pop32());
  /* 11a28ba8 pop edi */
  EDI = (pop32());
  /* 11a28ba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28baa ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
  /* 11a28bab nop  */
  /* nop */
L_11a28bac:;
  /* 11a28bac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a28baf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a28bb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a28bb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a28bb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a28bbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a28bbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a28bc1 pop esi */
  ESI = (pop32());
  /* 11a28bc2 pop edi */
  EDI = (pop32());
  /* 11a28bc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28bc4 ret  */
  ESPCHK(0x11a28890u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a28bd0 (88 bytes, 40 insns) */
void f_11a28bd0(void) {
  FTRACE(0x11a28bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28bd0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a28bd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28bd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a28bda je 0x11a28c23 */
  if (C.zf) goto L_11a28c23;
  /* 11a28bdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a28bde mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a28be2 push edi */
  push32((uint32_t)(EDI));
  /* 11a28be3 mov edi, ecx */
  EDI = (ECX);
  /* 11a28be5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28be8 jb 0x11a28c17 */
  if (C.cf) goto L_11a28c17;
  /* 11a28bea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a28bec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a28bef je 0x11a28bf9 */
  if (C.zf) goto L_11a28bf9;
  /* 11a28bf1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a28bf3:;
  /* 11a28bf3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28bf5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a28bf6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a28bf7 jne 0x11a28bf3 */
  if (!C.zf) goto L_11a28bf3;
L_11a28bf9:;
  /* 11a28bf9 mov ecx, eax */
  ECX = (EAX);
  /* 11a28bfb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a28bfe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28c00 mov ecx, eax */
  ECX = (EAX);
  /* 11a28c02 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a28c05 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28c07 mov ecx, edx */
  ECX = (EDX);
  /* 11a28c09 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a28c0c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a28c0f je 0x11a28c17 */
  if (C.zf) goto L_11a28c17;
  /* 11a28c11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a28c13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a28c15 je 0x11a28c1d */
  if (C.zf) goto L_11a28c1d;
L_11a28c17:;
  /* 11a28c17 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a28c19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a28c1a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a28c1b jne 0x11a28c17 */
  if (!C.zf) goto L_11a28c17;
L_11a28c1d:;
  /* 11a28c1d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a28c21 pop edi */
  EDI = (pop32());
  /* 11a28c22 ret  */
  ESPCHK(0x11a28bd0u, _esp0);
  ESP += 4; return;
L_11a28c23:;
  /* 11a28c23 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28c27 ret  */
  ESPCHK(0x11a28bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c28 @ 0x11a28c28 (293 bytes, 103 insns) */
void f_11a28c28(void) {
  FTRACE(0x11a28c28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28c28 push ebp */
  push32((uint32_t)(EBP));
  /* 11a28c29 mov ebp, esp */
  EBP = (ESP);
  /* 11a28c2b mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 11a28c30 call 0x11a287d0 */
  push32(0x11a28c35u); f_11a287d0();
  /* 11a28c35 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28c36 push esi */
  push32((uint32_t)(ESI));
  /* 11a28c37 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a28c39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28c3b push esi */
  push32((uint32_t)(ESI));
  /* 11a28c3c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28c3f call 0x11a256d9 */
  push32(0x11a28c44u); f_11a256d9();
  /* 11a28c44 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 11a28c47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28c4a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28c4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a28c4f je 0x11a28d47 */
  if (C.zf) goto L_11a28d47;
  /* 11a28c55 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a28c57 push esi */
  push32((uint32_t)(ESI));
  /* 11a28c58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28c5b call 0x11a256d9 */
  push32(0x11a28c60u); f_11a256d9();
  /* 11a28c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28c63 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28c65 je 0x11a28d47 */
  if (C.zf) goto L_11a28d47;
  /* 11a28c6b push edi */
  push32((uint32_t)(EDI));
  /* 11a28c6c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a28c6f sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28c71 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a28c73 jle 0x11a28cea */
  if ((C.zf||C.sf!=C.of)) goto L_11a28cea;
  /* 11a28c75 mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 11a28c7a lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 11a28c80 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28c81 push esi */
  push32((uint32_t)(ESI));
  /* 11a28c82 push eax */
  push32((uint32_t)(EAX));
  /* 11a28c83 call 0x11a28bd0 */
  push32(0x11a28c88u); f_11a28bd0();
  /* 11a28c88 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a28c8d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28c90 call 0x11a29295 */
  push32(0x11a28c95u); f_11a29295();
  /* 11a28c95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28c98 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a28c9b:;
  /* 11a28c9b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28c9d mov eax, ebx */
  EAX = (EBX);
  /* 11a28c9f jge 0x11a28ca3 */
  if ((C.sf==C.of)) goto L_11a28ca3;
  /* 11a28ca1 mov eax, edi */
  EAX = (EDI);
L_11a28ca3:;
  /* 11a28ca3 push eax */
  push32((uint32_t)(EAX));
  /* 11a28ca4 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 11a28caa push eax */
  push32((uint32_t)(EAX));
  /* 11a28cab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28cae call 0x11a27b53 */
  push32(0x11a28cb3u); f_11a27b53();
  /* 11a28cb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28cb6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28cb9 je 0x11a28cc3 */
  if (C.zf) goto L_11a28cc3;
  /* 11a28cbb sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28cbd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a28cbf jle 0x11a28cdb */
  if ((C.zf||C.sf!=C.of)) goto L_11a28cdb;
  /* 11a28cc1 jmp 0x11a28c9b */
  goto L_11a28c9b;
L_11a28cc3:;
  /* 11a28cc3 call 0x11a2545b */
  push32(0x11a28cc8u); f_11a2545b();
  /* 11a28cc8 cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28ccb jne 0x11a28cd8 */
  if (!C.zf) goto L_11a28cd8;
  /* 11a28ccd call 0x11a25452 */
  push32(0x11a28cd2u); f_11a25452();
  /* 11a28cd2 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_11a28cd8:;
  /* 11a28cd8 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a28cdb:;
  /* 11a28cdb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a28cde push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28ce1 call 0x11a29295 */
  push32(0x11a28ce6u); f_11a29295();
  /* 11a28ce6 pop ecx */
  ECX = (pop32());
  /* 11a28ce7 pop ecx */
  ECX = (pop32());
  /* 11a28ce8 jmp 0x11a28d32 */
  goto L_11a28d32;
L_11a28cea:;
  /* 11a28cea jge 0x11a28d32 */
  if ((C.sf==C.of)) goto L_11a28d32;
  /* 11a28cec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a28cee push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a28cf1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28cf4 call 0x11a256d9 */
  push32(0x11a28cf9u); f_11a256d9();
  /* 11a28cf9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28cfc call 0x11a27998 */
  push32(0x11a28d01u); f_11a27998();
  /* 11a28d01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28d04 push eax */
  push32((uint32_t)(EAX));
  /* 11a28d05 call dword ptr [0x11a2a020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a020))), 0x11a28d0bu);
  /* 11a28d0b mov esi, eax */
  ESI = (EAX);
  /* 11a28d0d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11a28d0f sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28d11 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11a28d13 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a28d14 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28d16 jne 0x11a28d32 */
  if (!C.zf) goto L_11a28d32;
  /* 11a28d18 call 0x11a25452 */
  push32(0x11a28d1du); f_11a25452();
  /* 11a28d1d mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11a28d23 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a28d29u);
  /* 11a28d29 mov edi, eax */
  EDI = (EAX);
  /* 11a28d2b call 0x11a2545b */
  push32(0x11a28d30u); f_11a2545b();
  /* 11a28d30 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11a28d32:;
  /* 11a28d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a28d34 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a28d37 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28d3a call 0x11a256d9 */
  push32(0x11a28d3fu); f_11a256d9();
  /* 11a28d3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28d42 mov eax, esi */
  EAX = (ESI);
  /* 11a28d44 pop edi */
  EDI = (pop32());
  /* 11a28d45 jmp 0x11a28d49 */
  goto L_11a28d49;
L_11a28d47:;
  /* 11a28d47 mov eax, ebx */
  EAX = (EBX);
L_11a28d49:;
  /* 11a28d49 pop esi */
  ESI = (pop32());
  /* 11a28d4a pop ebx */
  EBX = (pop32());
  /* 11a28d4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28d4c ret  */
  ESPCHK(0x11a28c28u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d4d @ 0x11a28d4d (511 bytes, 193 insns) */
void f_11a28d4d(void) {
  FTRACE(0x11a28d4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28d4d push ebp */
  push32((uint32_t)(EBP));
  /* 11a28d4e mov ebp, esp */
  EBP = (ESP);
  /* 11a28d50 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a28d52 push 0x11a2a568 */
  push32((uint32_t)(0x11a2a568u));
  /* 11a28d57 push 0x11a274e4 */
  push32((uint32_t)(0x11a274e4u));
  /* 11a28d5c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a28d62 push eax */
  push32((uint32_t)(EAX));
  /* 11a28d63 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a28d6a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28d6d push ebx */
  push32((uint32_t)(EBX));
  /* 11a28d6e push esi */
  push32((uint32_t)(ESI));
  /* 11a28d6f push edi */
  push32((uint32_t)(EDI));
  /* 11a28d70 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a28d73 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a28d75 cmp dword ptr [0x11a30100], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a30100))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28d7b jne 0x11a28dc3 */
  if (!C.zf) goto L_11a28dc3;
  /* 11a28d7d push edi */
  push32((uint32_t)(EDI));
  /* 11a28d7e push edi */
  push32((uint32_t)(EDI));
  /* 11a28d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28d81 pop ebx */
  EBX = (pop32());
  /* 11a28d82 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28d83 push 0x11a2a560 */
  push32((uint32_t)(0x11a2a560u));
  /* 11a28d88 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11a28d8d push esi */
  push32((uint32_t)(ESI));
  /* 11a28d8e push edi */
  push32((uint32_t)(EDI));
  /* 11a28d8f call dword ptr [0x11a2a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a014))), 0x11a28d95u);
  /* 11a28d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28d97 je 0x11a28da1 */
  if (C.zf) goto L_11a28da1;
  /* 11a28d99 mov dword ptr [0x11a30100], ebx */
  w32((uint32_t)(0x11a30100), (EBX));
  /* 11a28d9f jmp 0x11a28dc3 */
  goto L_11a28dc3;
L_11a28da1:;
  /* 11a28da1 push edi */
  push32((uint32_t)(EDI));
  /* 11a28da2 push edi */
  push32((uint32_t)(EDI));
  /* 11a28da3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28da4 push 0x11a2a55c */
  push32((uint32_t)(0x11a2a55cu));
  /* 11a28da9 push esi */
  push32((uint32_t)(ESI));
  /* 11a28daa push edi */
  push32((uint32_t)(EDI));
  /* 11a28dab call dword ptr [0x11a2a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a018))), 0x11a28db1u);
  /* 11a28db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28db3 je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28db9 mov dword ptr [0x11a30100], 2 */
  w32((uint32_t)(0x11a30100), (0x2u));
L_11a28dc3:;
  /* 11a28dc3 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28dc6 jle 0x11a28dd8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a28dd8;
  /* 11a28dc8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a28dcb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a28dce call 0x11a28f71 */
  push32(0x11a28dd3u); f_11a28f71();
  /* 11a28dd3 pop ecx */
  ECX = (pop32());
  /* 11a28dd4 pop ecx */
  ECX = (pop32());
  /* 11a28dd5 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a28dd8:;
  /* 11a28dd8 mov eax, dword ptr [0x11a30100] */
  EAX = (r32((uint32_t)(0x11a30100)));
  /* 11a28ddd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28de0 jne 0x11a28dff */
  if (!C.zf) goto L_11a28dff;
  /* 11a28de2 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a28de5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a28de8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a28deb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a28dee push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a28df1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28df4 call dword ptr [0x11a2a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a018))), 0x11a28dfau);
  /* 11a28dfa jmp 0x11a28edd */
  goto L_11a28edd;
L_11a28dff:;
  /* 11a28dff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28e02 jne 0x11a28edb */
  if (!C.zf) goto L_11a28edb;
  /* 11a28e08 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28e0b jne 0x11a28e15 */
  if (!C.zf) goto L_11a28e15;
  /* 11a28e0d mov eax, dword ptr [0x11a300f8] */
  EAX = (r32((uint32_t)(0x11a300f8)));
  /* 11a28e12 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a28e15:;
  /* 11a28e15 push edi */
  push32((uint32_t)(EDI));
  /* 11a28e16 push edi */
  push32((uint32_t)(EDI));
  /* 11a28e17 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a28e1a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a28e1d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a28e20 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a28e22 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28e24 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a28e27 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a28e28 push eax */
  push32((uint32_t)(EAX));
  /* 11a28e29 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a28e2c call dword ptr [0x11a2a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a028))), 0x11a28e32u);
  /* 11a28e32 mov ebx, eax */
  EBX = (EAX);
  /* 11a28e34 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11a28e37 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28e39 je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28e3f mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a28e42 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11a28e45 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28e48 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a28e4a call 0x11a287d0 */
  push32(0x11a28e4fu); f_11a287d0();
  /* 11a28e4f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a28e52 mov eax, esp */
  EAX = (ESP);
  /* 11a28e54 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a28e57 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a28e5b jmp 0x11a28e70 */
  goto L_11a28e70;
  /* 11a28e5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28e5f pop eax */
  EAX = (pop32());
  /* 11a28e60 ret  */
  ESPCHK(0x11a28d4du, _esp0);
  ESP += 4; return;
  /* 11a28e61 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a28e64 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a28e66 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a28e69 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a28e6d mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11a28e70:;
  /* 11a28e70 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28e73 je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28e75 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28e76 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a28e79 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a28e7c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a28e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28e81 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a28e84 call dword ptr [0x11a2a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a028))), 0x11a28e8au);
  /* 11a28e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28e8c je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28e8e push edi */
  push32((uint32_t)(EDI));
  /* 11a28e8f push edi */
  push32((uint32_t)(EDI));
  /* 11a28e90 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28e91 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a28e94 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a28e97 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28e9a call dword ptr [0x11a2a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a014))), 0x11a28ea0u);
  /* 11a28ea0 mov esi, eax */
  ESI = (EAX);
  /* 11a28ea2 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11a28ea5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28ea7 je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28ea9 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11a28ead je 0x11a28eef */
  if (C.zf) goto L_11a28eef;
  /* 11a28eaf cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28eb2 je 0x11a28f6a */
  if (C.zf) goto L_11a28f6a;
  /* 11a28eb8 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28ebb jg 0x11a28edb */
  if ((!C.zf&&C.sf==C.of)) goto L_11a28edb;
  /* 11a28ebd push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a28ec0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a28ec3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28ec4 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a28ec7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a28eca push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28ecd call dword ptr [0x11a2a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a014))), 0x11a28ed3u);
  /* 11a28ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28ed5 jne 0x11a28f6a */
  if (!C.zf) goto L_11a28f6a;
L_11a28edb:;
  /* 11a28edb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a28edd:;
  /* 11a28edd lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a28ee0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a28ee3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a28eea pop edi */
  EDI = (pop32());
  /* 11a28eeb pop esi */
  ESI = (pop32());
  /* 11a28eec pop ebx */
  EBX = (pop32());
  /* 11a28eed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a28eee ret  */
  ESPCHK(0x11a28d4du, _esp0);
  ESP += 4; return;
L_11a28eef:;
  /* 11a28eef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a28ef6 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a28ef9 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a28efc and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a28efe call 0x11a287d0 */
  push32(0x11a28f03u); f_11a287d0();
  /* 11a28f03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a28f06 mov ebx, esp */
  EBX = (ESP);
  /* 11a28f08 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a28f0b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a28f0f jmp 0x11a28f23 */
  goto L_11a28f23;
  /* 11a28f11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28f13 pop eax */
  EAX = (pop32());
  /* 11a28f14 ret  */
  ESPCHK(0x11a28d4du, _esp0);
  ESP += 4; return;
  /* 11a28f15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a28f18 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a28f1a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a28f1c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a28f20 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11a28f23:;
  /* 11a28f23 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28f25 je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28f27 push esi */
  push32((uint32_t)(ESI));
  /* 11a28f28 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28f29 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a28f2c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a28f2f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a28f32 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a28f35 call dword ptr [0x11a2a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a014))), 0x11a28f3bu);
  /* 11a28f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28f3d je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
  /* 11a28f3f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28f42 push edi */
  push32((uint32_t)(EDI));
  /* 11a28f43 push edi */
  push32((uint32_t)(EDI));
  /* 11a28f44 jne 0x11a28f4a */
  if (!C.zf) goto L_11a28f4a;
  /* 11a28f46 push edi */
  push32((uint32_t)(EDI));
  /* 11a28f47 push edi */
  push32((uint32_t)(EDI));
  /* 11a28f48 jmp 0x11a28f50 */
  goto L_11a28f50;
L_11a28f4a:;
  /* 11a28f4a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a28f4d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11a28f50:;
  /* 11a28f50 push esi */
  push32((uint32_t)(ESI));
  /* 11a28f51 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28f52 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a28f57 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a28f5a call dword ptr [0x11a2a074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a074))), 0x11a28f60u);
  /* 11a28f60 mov esi, eax */
  ESI = (EAX);
  /* 11a28f62 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28f64 je 0x11a28edb */
  if (C.zf) goto L_11a28edb;
L_11a28f6a:;
  /* 11a28f6a mov eax, esi */
  EAX = (ESI);
  /* 11a28f6c jmp 0x11a28edd */
  goto L_11a28edd;
}

/* FUN_10008f71 @ 0x11a28f71 (43 bytes, 20 insns) */
void f_11a28f71(void) {
  FTRACE(0x11a28f71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28f71 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a28f75 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a28f79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a28f7b push esi */
  push32((uint32_t)(ESI));
  /* 11a28f7c lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11a28f7f je 0x11a28f8e */
  if (C.zf) goto L_11a28f8e;
L_11a28f81:;
  /* 11a28f81 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28f84 je 0x11a28f8e */
  if (C.zf) goto L_11a28f8e;
  /* 11a28f86 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a28f87 mov esi, ecx */
  ESI = (ECX);
  /* 11a28f89 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a28f8a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a28f8c jne 0x11a28f81 */
  if (!C.zf) goto L_11a28f81;
L_11a28f8e:;
  /* 11a28f8e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a28f91 pop esi */
  ESI = (pop32());
  /* 11a28f92 jne 0x11a28f99 */
  if (!C.zf) goto L_11a28f99;
  /* 11a28f94 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28f98 ret  */
  ESPCHK(0x11a28f71u, _esp0);
  ESP += 4; return;
L_11a28f99:;
  /* 11a28f99 mov eax, edx */
  EAX = (EDX);
  /* 11a28f9b ret  */
  ESPCHK(0x11a28f71u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f9c @ 0x11a28f9c (318 bytes, 123 insns) */
void f_11a28f9c(void) {
  FTRACE(0x11a28f9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a28f9c push ebp */
  push32((uint32_t)(EBP));
  /* 11a28f9d mov ebp, esp */
  EBP = (ESP);
  /* 11a28f9f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a28fa1 push 0x11a2a580 */
  push32((uint32_t)(0x11a2a580u));
  /* 11a28fa6 push 0x11a274e4 */
  push32((uint32_t)(0x11a274e4u));
  /* 11a28fab mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a28fb1 push eax */
  push32((uint32_t)(EAX));
  /* 11a28fb2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a28fb9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a28fbc push ebx */
  push32((uint32_t)(EBX));
  /* 11a28fbd push esi */
  push32((uint32_t)(ESI));
  /* 11a28fbe push edi */
  push32((uint32_t)(EDI));
  /* 11a28fbf mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a28fc2 mov eax, dword ptr [0x11a30104] */
  EAX = (r32((uint32_t)(0x11a30104)));
  /* 11a28fc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a28fc9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a28fcb jne 0x11a2900b */
  if (!C.zf) goto L_11a2900b;
  /* 11a28fcd lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a28fd0 push eax */
  push32((uint32_t)(EAX));
  /* 11a28fd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a28fd3 pop esi */
  ESI = (pop32());
  /* 11a28fd4 push esi */
  push32((uint32_t)(ESI));
  /* 11a28fd5 push 0x11a2a560 */
  push32((uint32_t)(0x11a2a560u));
  /* 11a28fda push esi */
  push32((uint32_t)(ESI));
  /* 11a28fdb call dword ptr [0x11a2a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a00c))), 0x11a28fe1u);
  /* 11a28fe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28fe3 je 0x11a28fe9 */
  if (C.zf) goto L_11a28fe9;
  /* 11a28fe5 mov eax, esi */
  EAX = (ESI);
  /* 11a28fe7 jmp 0x11a29006 */
  goto L_11a29006;
L_11a28fe9:;
  /* 11a28fe9 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a28fec push eax */
  push32((uint32_t)(EAX));
  /* 11a28fed push esi */
  push32((uint32_t)(ESI));
  /* 11a28fee push 0x11a2a55c */
  push32((uint32_t)(0x11a2a55cu));
  /* 11a28ff3 push esi */
  push32((uint32_t)(ESI));
  /* 11a28ff4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a28ff5 call dword ptr [0x11a2a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a01c))), 0x11a28ffbu);
  /* 11a28ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a28ffd je 0x11a290d1 */
  if (C.zf) goto L_11a290d1;
  /* 11a29003 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a29005 pop eax */
  EAX = (pop32());
L_11a29006:;
  /* 11a29006 mov dword ptr [0x11a30104], eax */
  w32((uint32_t)(0x11a30104), (EAX));
L_11a2900b:;
  /* 11a2900b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2900e jne 0x11a29034 */
  if (!C.zf) goto L_11a29034;
  /* 11a29010 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a29013 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29015 jne 0x11a2901c */
  if (!C.zf) goto L_11a2901c;
  /* 11a29017 mov eax, dword ptr [0x11a300e8] */
  EAX = (r32((uint32_t)(0x11a300e8)));
L_11a2901c:;
  /* 11a2901c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a2901f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a29022 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a29025 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a29028 push eax */
  push32((uint32_t)(EAX));
  /* 11a29029 call dword ptr [0x11a2a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a01c))), 0x11a2902fu);
  /* 11a2902f jmp 0x11a290d3 */
  goto L_11a290d3;
L_11a29034:;
  /* 11a29034 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29037 jne 0x11a290d1 */
  if (!C.zf) goto L_11a290d1;
  /* 11a2903d cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29040 jne 0x11a2904a */
  if (!C.zf) goto L_11a2904a;
  /* 11a29042 mov eax, dword ptr [0x11a300f8] */
  EAX = (r32((uint32_t)(0x11a300f8)));
  /* 11a29047 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a2904a:;
  /* 11a2904a push ebx */
  push32((uint32_t)(EBX));
  /* 11a2904b push ebx */
  push32((uint32_t)(EBX));
  /* 11a2904c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a2904f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a29052 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a29055 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a29057 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a29059 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a2905c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a2905d push eax */
  push32((uint32_t)(EAX));
  /* 11a2905e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a29061 call dword ptr [0x11a2a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a028))), 0x11a29067u);
  /* 11a29067 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a2906a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2906c je 0x11a290d1 */
  if (C.zf) goto L_11a290d1;
  /* 11a2906e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a29071 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11a29074 mov eax, edi */
  EAX = (EDI);
  /* 11a29076 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29079 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a2907b call 0x11a287d0 */
  push32(0x11a29080u); f_11a287d0();
  /* 11a29080 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a29083 mov esi, esp */
  ESI = (ESP);
  /* 11a29085 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11a29088 push edi */
  push32((uint32_t)(EDI));
  /* 11a29089 push ebx */
  push32((uint32_t)(EBX));
  /* 11a2908a push esi */
  push32((uint32_t)(ESI));
  /* 11a2908b call 0x11a28bd0 */
  push32(0x11a29090u); f_11a28bd0();
  /* 11a29090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29093 jmp 0x11a290a0 */
  goto L_11a290a0;
  /* 11a29095 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a29097 pop eax */
  EAX = (pop32());
  /* 11a29098 ret  */
  ESPCHK(0x11a28f9cu, _esp0);
  ESP += 4; return;
  /* 11a29099 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a2909c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a2909e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a290a0:;
  /* 11a290a0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a290a4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a290a6 je 0x11a290d1 */
  if (C.zf) goto L_11a290d1;
  /* 11a290a8 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a290ab push esi */
  push32((uint32_t)(ESI));
  /* 11a290ac push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a290af push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a290b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a290b4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a290b7 call dword ptr [0x11a2a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a028))), 0x11a290bdu);
  /* 11a290bd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a290bf je 0x11a290d1 */
  if (C.zf) goto L_11a290d1;
  /* 11a290c1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a290c4 push eax */
  push32((uint32_t)(EAX));
  /* 11a290c5 push esi */
  push32((uint32_t)(ESI));
  /* 11a290c6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a290c9 call dword ptr [0x11a2a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a00c))), 0x11a290cfu);
  /* 11a290cf jmp 0x11a290d3 */
  goto L_11a290d3;
L_11a290d1:;
  /* 11a290d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a290d3:;
  /* 11a290d3 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a290d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a290d9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a290e0 pop edi */
  EDI = (pop32());
  /* 11a290e1 pop esi */
  ESI = (pop32());
  /* 11a290e2 pop ebx */
  EBX = (pop32());
  /* 11a290e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a290e4 ret  */
  ESPCHK(0x11a28f9cu, _esp0);
  ESP += 4; return;
}

/* FUN_100090e5 @ 0x11a290e5 (111 bytes, 44 insns) */
void f_11a290e5(void) {
  FTRACE(0x11a290e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a290e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a290e6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a290e8 cmp dword ptr [0x11a300e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a300e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a290ee jne 0x11a29103 */
  if (!C.zf) goto L_11a29103;
  /* 11a290f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a290f4 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a290f7 jl 0x11a29152 */
  if ((C.sf!=C.of)) goto L_11a29152;
  /* 11a290f9 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a290fc jg 0x11a29152 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a29152;
  /* 11a290fe sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a29101 pop ebx */
  EBX = (pop32());
  /* 11a29102 ret  */
  ESPCHK(0x11a290e5u, _esp0);
  ESP += 4; return;
L_11a29103:;
  /* 11a29103 push esi */
  push32((uint32_t)(ESI));
  /* 11a29104 mov esi, 0x11a30254 */
  ESI = (0x11a30254u);
  /* 11a29109 push edi */
  push32((uint32_t)(EDI));
  /* 11a2910a push esi */
  push32((uint32_t)(ESI));
  /* 11a2910b call dword ptr [0x11a2a010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a010))), 0x11a29111u);
  /* 11a29111 cmp dword ptr [0x11a30250], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a30250))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29117 mov edi, dword ptr [0x11a2a008] */
  EDI = (r32((uint32_t)(0x11a2a008)));
  /* 11a2911d je 0x11a2912d */
  if (C.zf) goto L_11a2912d;
  /* 11a2911f push esi */
  push32((uint32_t)(ESI));
  /* 11a29120 call edi */
  call_ind((uint32_t)(EDI), 0x11a29122u);
  /* 11a29122 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a29124 call 0x11a27376 */
  push32(0x11a29129u); f_11a27376();
  /* 11a29129 pop ecx */
  ECX = (pop32());
  /* 11a2912a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2912c pop ebx */
  EBX = (pop32());
L_11a2912d:;
  /* 11a2912d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a29131 call 0x11a29154 */
  push32(0x11a29136u); f_11a29154();
  /* 11a29136 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a29138 pop ecx */
  ECX = (pop32());
  /* 11a29139 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a2913d je 0x11a29149 */
  if (C.zf) goto L_11a29149;
  /* 11a2913f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a29141 call 0x11a273d7 */
  push32(0x11a29146u); f_11a273d7();
  /* 11a29146 pop ecx */
  ECX = (pop32());
  /* 11a29147 jmp 0x11a2914c */
  goto L_11a2914c;
L_11a29149:;
  /* 11a29149 push esi */
  push32((uint32_t)(ESI));
  /* 11a2914a call edi */
  call_ind((uint32_t)(EDI), 0x11a2914cu);
L_11a2914c:;
  /* 11a2914c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a29150 pop edi */
  EDI = (pop32());
  /* 11a29151 pop esi */
  ESI = (pop32());
L_11a29152:;
  /* 11a29152 pop ebx */
  EBX = (pop32());
  /* 11a29153 ret  */
  ESPCHK(0x11a290e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009154 @ 0x11a29154 (204 bytes, 71 insns) */
void f_11a29154(void) {
  FTRACE(0x11a29154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a29154 push ebp */
  push32((uint32_t)(EBP));
  /* 11a29155 mov ebp, esp */
  EBP = (ESP);
  /* 11a29157 push ecx */
  push32((uint32_t)(ECX));
  /* 11a29158 cmp dword ptr [0x11a300e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a300e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2915f push ebx */
  push32((uint32_t)(EBX));
  /* 11a29160 jne 0x11a2917f */
  if (!C.zf) goto L_11a2917f;
  /* 11a29162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a29165 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29168 jl 0x11a2921d */
  if ((C.sf!=C.of)) goto L_11a2921d;
  /* 11a2916e cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29171 jg 0x11a2921d */
  if ((!C.zf&&C.sf==C.of)) goto L_11a2921d;
  /* 11a29177 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2917a jmp 0x11a2921d */
  goto L_11a2921d;
L_11a2917f:;
  /* 11a2917f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a29182 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29188 jge 0x11a291b2 */
  if ((C.sf==C.of)) goto L_11a291b2;
  /* 11a2918a cmp dword ptr [0x11a2ee5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ee5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29191 jle 0x11a2919f */
  if ((C.zf||C.sf!=C.of)) goto L_11a2919f;
  /* 11a29193 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a29195 push ebx */
  push32((uint32_t)(EBX));
  /* 11a29196 call 0x11a29220 */
  push32(0x11a2919bu); f_11a29220();
  /* 11a2919b pop ecx */
  ECX = (pop32());
  /* 11a2919c pop ecx */
  ECX = (pop32());
  /* 11a2919d jmp 0x11a291aa */
  goto L_11a291aa;
L_11a2919f:;
  /* 11a2919f mov eax, dword ptr [0x11a2ec50] */
  EAX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a291a4 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11a291a7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11a291aa:;
  /* 11a291aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a291ac jne 0x11a291b2 */
  if (!C.zf) goto L_11a291b2;
L_11a291ae:;
  /* 11a291ae mov eax, ebx */
  EAX = (EBX);
  /* 11a291b0 jmp 0x11a2921d */
  goto L_11a2921d;
L_11a291b2:;
  /* 11a291b2 mov edx, dword ptr [0x11a2ec50] */
  EDX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a291b8 mov eax, ebx */
  EAX = (EBX);
  /* 11a291ba sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a291bd movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11a291c0 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a291c5 je 0x11a291d5 */
  if (C.zf) goto L_11a291d5;
  /* 11a291c7 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11a291cb mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a291ce mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11a291d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a291d3 jmp 0x11a291de */
  goto L_11a291de;
L_11a291d5:;
  /* 11a291d5 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11a291d9 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a291dc push 1 */
  push32((uint32_t)(0x1u));
L_11a291de:;
  /* 11a291de pop eax */
  EAX = (pop32());
  /* 11a291df lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a291e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a291e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a291e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a291e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a291e9 push eax */
  push32((uint32_t)(EAX));
  /* 11a291ea lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a291ed push eax */
  push32((uint32_t)(EAX));
  /* 11a291ee push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a291f3 push dword ptr [0x11a300e8] */
  push32((uint32_t)(r32((uint32_t)(0x11a300e8))));
  /* 11a291f9 call 0x11a28d4d */
  push32(0x11a291feu); f_11a28d4d();
  /* 11a291fe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a29203 je 0x11a291ae */
  if (C.zf) goto L_11a291ae;
  /* 11a29205 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29208 jne 0x11a29210 */
  if (!C.zf) goto L_11a29210;
  /* 11a2920a movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a2920e jmp 0x11a2921d */
  goto L_11a2921d;
L_11a29210:;
  /* 11a29210 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11a29214 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a29218 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a2921b or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a2921d:;
  /* 11a2921d pop ebx */
  EBX = (pop32());
  /* 11a2921e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2921f ret  */
  ESPCHK(0x11a29154u, _esp0);
  ESP += 4; return;
}

/* FUN_10009220 @ 0x11a29220 (117 bytes, 46 insns) */
void f_11a29220(void) {
  FTRACE(0x11a29220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a29220 push ebp */
  push32((uint32_t)(EBP));
  /* 11a29221 mov ebp, esp */
  EBP = (ESP);
  /* 11a29223 push ecx */
  push32((uint32_t)(ECX));
  /* 11a29224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a29227 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a2922a cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29230 ja 0x11a2923e */
  if ((!C.cf&&!C.zf)) goto L_11a2923e;
  /* 11a29232 mov ecx, dword ptr [0x11a2ec50] */
  ECX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a29238 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11a2923c jmp 0x11a29290 */
  goto L_11a29290;
L_11a2923e:;
  /* 11a2923e mov ecx, eax */
  ECX = (EAX);
  /* 11a29240 push esi */
  push32((uint32_t)(ESI));
  /* 11a29241 mov esi, dword ptr [0x11a2ec50] */
  ESI = (r32((uint32_t)(0x11a2ec50)));
  /* 11a29247 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a2924a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11a2924d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a29252 pop esi */
  ESI = (pop32());
  /* 11a29253 je 0x11a29263 */
  if (C.zf) goto L_11a29263;
  /* 11a29255 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11a29259 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11a2925c mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11a2925f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a29261 jmp 0x11a2926c */
  goto L_11a2926c;
L_11a29263:;
  /* 11a29263 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11a29267 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11a2926a push 1 */
  push32((uint32_t)(0x1u));
L_11a2926c:;
  /* 11a2926c pop eax */
  EAX = (pop32());
  /* 11a2926d lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11a29270 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a29272 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a29274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a29276 push ecx */
  push32((uint32_t)(ECX));
  /* 11a29277 push eax */
  push32((uint32_t)(EAX));
  /* 11a29278 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a2927b push eax */
  push32((uint32_t)(EAX));
  /* 11a2927c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2927e call 0x11a28f9c */
  push32(0x11a29283u); f_11a28f9c();
  /* 11a29283 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a29288 jne 0x11a2928c */
  if (!C.zf) goto L_11a2928c;
  /* 11a2928a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2928b ret  */
  ESPCHK(0x11a29220u, _esp0);
  ESP += 4; return;
L_11a2928c:;
  /* 11a2928c movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11a29290:;
  /* 11a29290 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11a29293 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a29294 ret  */
  ESPCHK(0x11a29220u, _esp0);
  ESP += 4; return;
}

/* FUN_10009295 @ 0x11a29295 (97 bytes, 31 insns) */
void f_11a29295(void) {
  FTRACE(0x11a29295u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a29295 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a29299 push esi */
  push32((uint32_t)(ESI));
  /* 11a2929a mov ecx, eax */
  ECX = (EAX);
  /* 11a2929c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a2929f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a292a2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a292a5 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 11a292aa mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a292b1 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11a292b5 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11a292b9 mov al, cl */
  AL = (CL);
  /* 11a292bb and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11a292c0 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a292c4 jne 0x11a292cb */
  if (!C.zf) goto L_11a292cb;
  /* 11a292c6 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 11a292c9 jmp 0x11a292d8 */
  goto L_11a292d8;
L_11a292cb:;
  /* 11a292cb cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a292d3 jne 0x11a292e6 */
  if (!C.zf) goto L_11a292e6;
  /* 11a292d5 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_11a292d8:;
  /* 11a292d8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a292da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a292dc mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a292de and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 11a292e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a292e4 pop esi */
  ESI = (pop32());
  /* 11a292e5 ret  */
  ESPCHK(0x11a29295u, _esp0);
  ESP += 4; return;
L_11a292e6:;
  /* 11a292e6 call 0x11a25452 */
  push32(0x11a292ebu); f_11a25452();
  /* 11a292eb mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a292f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a292f4 pop esi */
  ESI = (pop32());
  /* 11a292f5 ret  */
  ESPCHK(0x11a29295u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x11a29390 (58 bytes, 32 insns) */
void f_11a29390(void) {
  FTRACE(0x11a29390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a29390 push ebp */
  push32((uint32_t)(EBP));
  /* 11a29391 mov ebp, esp */
  EBP = (ESP);
  /* 11a29393 push esi */
  push32((uint32_t)(ESI));
  /* 11a29394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a29396 push eax */
  push32((uint32_t)(EAX));
  /* 11a29397 push eax */
  push32((uint32_t)(EAX));
  /* 11a29398 push eax */
  push32((uint32_t)(EAX));
  /* 11a29399 push eax */
  push32((uint32_t)(EAX));
  /* 11a2939a push eax */
  push32((uint32_t)(EAX));
  /* 11a2939b push eax */
  push32((uint32_t)(EAX));
  /* 11a2939c push eax */
  push32((uint32_t)(EAX));
  /* 11a2939d push eax */
  push32((uint32_t)(EAX));
  /* 11a2939e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a293a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a293a4:;
  /* 11a293a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a293a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a293a8 je 0x11a293b1 */
  if (C.zf) goto L_11a293b1;
  /* 11a293aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a293ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a293ab");
  /* 11a293af jmp 0x11a293a4 */
  goto L_11a293a4;
L_11a293b1:;
  /* 11a293b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11a293b4:;
  /* 11a293b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a293b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a293b8 je 0x11a293c4 */
  if (C.zf) goto L_11a293c4;
  /* 11a293ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a293bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a293bb");
  /* 11a293bf jae 0x11a293b4 */
  if (!C.cf) goto L_11a293b4;
  /* 11a293c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11a293c4:;
  /* 11a293c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a293c7 pop esi */
  ESI = (pop32());
  /* 11a293c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a293c9 ret  */
  ESPCHK(0x11a29390u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x11a293d0 (208 bytes, 85 insns) */
void f_11a293d0(void) {
  FTRACE(0x11a293d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a293d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a293d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a293d3 push edi */
  push32((uint32_t)(EDI));
  /* 11a293d4 push esi */
  push32((uint32_t)(ESI));
  /* 11a293d5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a293d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a293d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a293dc lea eax, [0x11a300e0] */
  EAX = ((uint32_t)(0x11a300e0));
  /* 11a293e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a293e6 jne 0x11a29423 */
  if (!C.zf) goto L_11a29423;
  /* 11a293e8 mov al, 0xff */
  AL = (0xffu);
  /* 11a293ea mov edi, edi */
  EDI = (EDI);
L_11a293ec:;
  /* 11a293ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a293ee je 0x11a2941e */
  if (C.zf) goto L_11a2941e;
  /* 11a293f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a293f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a293f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11a293f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a293f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a293f8 je 0x11a293ec */
  if (C.zf) goto L_11a293ec;
  /* 11a293fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a293fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a293fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a29400 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a29403 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a29405 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a29407 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11a29409 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a2940b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2940d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a2940f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a29412 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a29414 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a29416 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a29418 je 0x11a293ec */
  if (C.zf) goto L_11a293ec;
  /* 11a2941a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a2941c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11a2941e:;
  /* 11a2941e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a29421 jmp 0x11a2949b */
  goto L_11a2949b;
L_11a29423:;
  /* 11a29423 lock inc dword ptr [0x11a30254] */
  x86_unimpl("lock inc @ 0x11a29423");
  /* 11a2942a cmp dword ptr [0x11a30250], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a30250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29431 jg 0x11a29437 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a29437;
  /* 11a29433 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a29435 jmp 0x11a2944c */
  goto L_11a2944c;
L_11a29437:;
  /* 11a29437 lock dec dword ptr [0x11a30254] */
  x86_unimpl("lock dec @ 0x11a29437");
  /* 11a2943e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a29440 call 0x11a27376 */
  push32(0x11a29445u); f_11a27376();
  /* 11a29445 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11a2944c:;
  /* 11a2944c mov eax, 0xff */
  EAX = (0xffu);
  /* 11a29451 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a29453 nop  */
  /* nop */
L_11a29454:;
  /* 11a29454 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a29456 je 0x11a2947f */
  if (C.zf) goto L_11a2947f;
  /* 11a29458 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a2945a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a2945b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a2945d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a2945e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a29460 je 0x11a29454 */
  if (C.zf) goto L_11a29454;
  /* 11a29462 push eax */
  push32((uint32_t)(EAX));
  /* 11a29463 push ebx */
  push32((uint32_t)(EBX));
  /* 11a29464 call 0x11a29695 */
  push32(0x11a29469u); f_11a29695();
  /* 11a29469 mov ebx, eax */
  EBX = (EAX);
  /* 11a2946b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2946e call 0x11a29695 */
  push32(0x11a29473u); f_11a29695();
  /* 11a29473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29476 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a29478 je 0x11a29454 */
  if (C.zf) goto L_11a29454;
  /* 11a2947a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2947c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a2947f:;
  /* 11a2947f mov ebx, eax */
  EBX = (EAX);
  /* 11a29481 pop eax */
  EAX = (pop32());
  /* 11a29482 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a29484 jne 0x11a2948f */
  if (!C.zf) goto L_11a2948f;
  /* 11a29486 lock dec dword ptr [0x11a30254] */
  x86_unimpl("lock dec @ 0x11a29486");
  /* 11a2948d jmp 0x11a29499 */
  goto L_11a29499;
L_11a2948f:;
  /* 11a2948f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a29491 call 0x11a273d7 */
  push32(0x11a29496u); f_11a273d7();
  /* 11a29496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a29499:;
  /* 11a29499 mov eax, ebx */
  EAX = (EBX);
L_11a2949b:;
  /* 11a2949b pop ebx */
  EBX = (pop32());
  /* 11a2949c pop esi */
  ESI = (pop32());
  /* 11a2949d pop edi */
  EDI = (pop32());
  /* 11a2949e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2949f ret  */
  ESPCHK(0x11a293d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x11a294a0 (257 bytes, 103 insns) */
void f_11a294a0(void) {
  FTRACE(0x11a294a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a294a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a294a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a294a3 push edi */
  push32((uint32_t)(EDI));
  /* 11a294a4 push esi */
  push32((uint32_t)(ESI));
  /* 11a294a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a294a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a294a9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a294ab je 0x11a2959a */
  if (C.zf) goto L_11a2959a;
  /* 11a294b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a294b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a294b7 lea eax, [0x11a300e0] */
  EAX = ((uint32_t)(0x11a300e0));
  /* 11a294bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a294c1 jne 0x11a29511 */
  if (!C.zf) goto L_11a29511;
  /* 11a294c3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11a294c5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11a294c7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11a294c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a294cc:;
  /* 11a294cc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11a294ce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a294d0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a294d2 je 0x11a294f5 */
  if (C.zf) goto L_11a294f5;
  /* 11a294d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a294d6 je 0x11a294f5 */
  if (C.zf) goto L_11a294f5;
  /* 11a294d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a294d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a294da cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a294dc jb 0x11a294e4 */
  if (C.cf) goto L_11a294e4;
  /* 11a294de cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a294e0 ja 0x11a294e4 */
  if ((!C.cf&&!C.zf)) goto L_11a294e4;
  /* 11a294e2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11a294e4:;
  /* 11a294e4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a294e6 jb 0x11a294ee */
  if (C.cf) goto L_11a294ee;
  /* 11a294e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a294ea ja 0x11a294ee */
  if ((!C.cf&&!C.zf)) goto L_11a294ee;
  /* 11a294ec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11a294ee:;
  /* 11a294ee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a294f0 jne 0x11a294ff */
  if (!C.zf) goto L_11a294ff;
  /* 11a294f2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a294f3 jne 0x11a294cc */
  if (!C.zf) goto L_11a294cc;
L_11a294f5:;
  /* 11a294f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a294f7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a294f9 je 0x11a2959a */
  if (C.zf) goto L_11a2959a;
L_11a294ff:;
  /* 11a294ff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a29504 jb 0x11a2959a */
  if (C.cf) goto L_11a2959a;
  /* 11a2950a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a2950c jmp 0x11a2959a */
  goto L_11a2959a;
L_11a29511:;
  /* 11a29511 lock inc dword ptr [0x11a30254] */
  x86_unimpl("lock inc @ 0x11a29511");
  /* 11a29518 cmp dword ptr [0x11a30250], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a30250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2951f jg 0x11a29525 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a29525;
  /* 11a29521 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a29523 jmp 0x11a2953e */
  goto L_11a2953e;
L_11a29525:;
  /* 11a29525 lock dec dword ptr [0x11a30254] */
  x86_unimpl("lock dec @ 0x11a29525");
  /* 11a2952c mov ebx, ecx */
  EBX = (ECX);
  /* 11a2952e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a29530 call 0x11a27376 */
  push32(0x11a29535u); f_11a27376();
  /* 11a29535 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11a2953c mov ecx, ebx */
  ECX = (EBX);
L_11a2953e:;
  /* 11a2953e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a29540 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a29542 mov edi, edi */
  EDI = (EDI);
L_11a29544:;
  /* 11a29544 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a29546 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a29548 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a2954a je 0x11a2956f */
  if (C.zf) goto L_11a2956f;
  /* 11a2954c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a2954e je 0x11a2956f */
  if (C.zf) goto L_11a2956f;
  /* 11a29550 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a29551 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a29552 push ecx */
  push32((uint32_t)(ECX));
  /* 11a29553 push eax */
  push32((uint32_t)(EAX));
  /* 11a29554 push ebx */
  push32((uint32_t)(EBX));
  /* 11a29555 call 0x11a29695 */
  push32(0x11a2955au); f_11a29695();
  /* 11a2955a mov ebx, eax */
  EBX = (EAX);
  /* 11a2955c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2955f call 0x11a29695 */
  push32(0x11a29564u); f_11a29695();
  /* 11a29564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29567 pop ecx */
  ECX = (pop32());
  /* 11a29568 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2956a jne 0x11a29575 */
  if (!C.zf) goto L_11a29575;
  /* 11a2956c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a2956d jne 0x11a29544 */
  if (!C.zf) goto L_11a29544;
L_11a2956f:;
  /* 11a2956f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a29571 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29573 je 0x11a2957e */
  if (C.zf) goto L_11a2957e;
L_11a29575:;
  /* 11a29575 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a2957a jb 0x11a2957e */
  if (C.cf) goto L_11a2957e;
  /* 11a2957c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11a2957e:;
  /* 11a2957e pop eax */
  EAX = (pop32());
  /* 11a2957f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a29581 jne 0x11a2958c */
  if (!C.zf) goto L_11a2958c;
  /* 11a29583 lock dec dword ptr [0x11a30254] */
  x86_unimpl("lock dec @ 0x11a29583");
  /* 11a2958a jmp 0x11a2959a */
  goto L_11a2959a;
L_11a2958c:;
  /* 11a2958c mov ebx, ecx */
  EBX = (ECX);
  /* 11a2958e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a29590 call 0x11a273d7 */
  push32(0x11a29595u); f_11a273d7();
  /* 11a29595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29598 mov ecx, ebx */
  ECX = (EBX);
L_11a2959a:;
  /* 11a2959a mov eax, ecx */
  EAX = (ECX);
  /* 11a2959c pop ebx */
  EBX = (pop32());
  /* 11a2959d pop esi */
  ESI = (pop32());
  /* 11a2959e pop edi */
  EDI = (pop32());
  /* 11a2959f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a295a0 ret  */
  ESPCHK(0x11a294a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009695 @ 0x11a29695 (203 bytes, 78 insns) */
void f_11a29695(void) {
  FTRACE(0x11a29695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a29695 push ebp */
  push32((uint32_t)(EBP));
  /* 11a29696 mov ebp, esp */
  EBP = (ESP);
  /* 11a29698 push ecx */
  push32((uint32_t)(ECX));
  /* 11a29699 cmp dword ptr [0x11a300e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a300e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a296a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a296a1 push esi */
  push32((uint32_t)(ESI));
  /* 11a296a2 push edi */
  push32((uint32_t)(EDI));
  /* 11a296a3 jne 0x11a296c2 */
  if (!C.zf) goto L_11a296c2;
  /* 11a296a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a296a8 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a296ab jl 0x11a2975b */
  if ((C.sf!=C.of)) goto L_11a2975b;
  /* 11a296b1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a296b4 jg 0x11a2975b */
  if ((!C.zf&&C.sf==C.of)) goto L_11a2975b;
  /* 11a296ba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a296bd jmp 0x11a2975b */
  goto L_11a2975b;
L_11a296c2:;
  /* 11a296c2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a296c5 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11a296ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11a296cc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a296ce pop esi */
  ESI = (pop32());
  /* 11a296cf jge 0x11a296f6 */
  if ((C.sf==C.of)) goto L_11a296f6;
  /* 11a296d1 cmp dword ptr [0x11a2ee5c], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a2ee5c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a296d7 jle 0x11a296e4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a296e4;
  /* 11a296d9 push esi */
  push32((uint32_t)(ESI));
  /* 11a296da push ebx */
  push32((uint32_t)(EBX));
  /* 11a296db call 0x11a29220 */
  push32(0x11a296e0u); f_11a29220();
  /* 11a296e0 pop ecx */
  ECX = (pop32());
  /* 11a296e1 pop ecx */
  ECX = (pop32());
  /* 11a296e2 jmp 0x11a296ee */
  goto L_11a296ee;
L_11a296e4:;
  /* 11a296e4 mov eax, dword ptr [0x11a2ec50] */
  EAX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a296e9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11a296ec and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11a296ee:;
  /* 11a296ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a296f0 jne 0x11a296f6 */
  if (!C.zf) goto L_11a296f6;
L_11a296f2:;
  /* 11a296f2 mov eax, ebx */
  EAX = (EBX);
  /* 11a296f4 jmp 0x11a2975b */
  goto L_11a2975b;
L_11a296f6:;
  /* 11a296f6 mov edx, dword ptr [0x11a2ec50] */
  EDX = (r32((uint32_t)(0x11a2ec50)));
  /* 11a296fc mov eax, ebx */
  EAX = (EBX);
  /* 11a296fe sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a29701 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11a29704 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a29709 je 0x11a2971a */
  if (C.zf) goto L_11a2971a;
  /* 11a2970b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11a2970f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a29711 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a29714 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11a29717 pop eax */
  EAX = (pop32());
  /* 11a29718 jmp 0x11a29723 */
  goto L_11a29723;
L_11a2971a:;
  /* 11a2971a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11a2971e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a29721 mov eax, esi */
  EAX = (ESI);
L_11a29723:;
  /* 11a29723 push esi */
  push32((uint32_t)(ESI));
  /* 11a29724 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a29726 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a29729 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2972b push ecx */
  push32((uint32_t)(ECX));
  /* 11a2972c push eax */
  push32((uint32_t)(EAX));
  /* 11a2972d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a29730 push eax */
  push32((uint32_t)(EAX));
  /* 11a29731 push edi */
  push32((uint32_t)(EDI));
  /* 11a29732 push dword ptr [0x11a300e8] */
  push32((uint32_t)(r32((uint32_t)(0x11a300e8))));
  /* 11a29738 call 0x11a28d4d */
  push32(0x11a2973du); f_11a28d4d();
  /* 11a2973d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a29740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a29742 je 0x11a296f2 */
  if (C.zf) goto L_11a296f2;
  /* 11a29744 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a29746 jne 0x11a2974e */
  if (!C.zf) goto L_11a2974e;
  /* 11a29748 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a2974c jmp 0x11a2975b */
  goto L_11a2975b;
L_11a2974e:;
  /* 11a2974e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11a29752 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a29756 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a29759 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a2975b:;
  /* 11a2975b pop edi */
  EDI = (pop32());
  /* 11a2975c pop esi */
  ESI = (pop32());
  /* 11a2975d pop ebx */
  EBX = (pop32());
  /* 11a2975e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2975f ret  */
  ESPCHK(0x11a29695u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11a29794 (6 bytes, 1 insns) */
void f_11a29794(void) {
  FTRACE(0x11a29794u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a29794 jmp dword ptr [0x11a2a044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a2a044)))); return;
}

