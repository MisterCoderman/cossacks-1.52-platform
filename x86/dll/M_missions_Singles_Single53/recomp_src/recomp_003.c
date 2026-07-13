#include "recomp.h"

/* FUN_1000dd79 @ 0x118edd79 (435 bytes, 149 insns) */
void f_118edd79(void) {
  FTRACE(0x118edd79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118edd79 push ebp */
  push32((uint32_t)(EBP));
  /* 118edd7a mov ebp, esp */
  EBP = (ESP);
  /* 118edd7c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118edd7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118edd82 and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 118edd86 mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 118edd89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118edd8f jl 0x118edd99 */
  if ((C.sf!=C.of)) goto L_118edd99;
  /* 118edd91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118edd94 cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd97 jl 0x118edd9e */
  if ((C.sf!=C.of)) goto L_118edd9e;
L_118edd99:;
  /* 118edd99 call 0x118ee5ad */
  push32(0x118edd9eu); f_118ee5ad();
L_118edd9e:;
  /* 118edd9e push ebx */
  push32((uint32_t)(EBX));
  /* 118edd9f push esi */
  push32((uint32_t)(ESI));
  /* 118edda0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118edda3 mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 118edda8 push edi */
  push32((uint32_t)(EDI));
  /* 118edda9 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 118eddae cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eddb0 jne 0x118edf01 */
  if (!C.zf) goto L_118edf01;
  /* 118eddb6 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eddba jne 0x118ede1e */
  if (!C.zf) goto L_118ede1e;
  /* 118eddbc cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eddbf jne 0x118ede1e */
  if (!C.zf) goto L_118ede1e;
  /* 118eddc1 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eddc5 jne 0x118ede1e */
  if (!C.zf) goto L_118ede1e;
  /* 118eddc7 call 0x118e56f9 */
  push32(0x118eddccu); f_118e56f9();
  /* 118eddcc cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eddd0 je 0x118edefc */
  if (C.zf) goto L_118edefc;
  /* 118eddd6 call 0x118e56f9 */
  push32(0x118edddbu); f_118e56f9();
  /* 118edddb mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 118eddde call 0x118e56f9 */
  push32(0x118edde3u); f_118e56f9();
  /* 118edde3 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 118edde6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118edde8 push esi */
  push32((uint32_t)(ESI));
  /* 118edde9 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 118eddec mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 118eddf0 call 0x118ee667 */
  push32(0x118eddf5u); f_118ee667();
  /* 118eddf5 pop ecx */
  ECX = (pop32());
  /* 118eddf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eddf8 pop ecx */
  ECX = (pop32());
  /* 118eddf9 jne 0x118ede00 */
  if (!C.zf) goto L_118ede00;
  /* 118eddfb call 0x118ee5ad */
  push32(0x118ede00u); f_118ee5ad();
L_118ede00:;
  /* 118ede00 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede02 jne 0x118edf01 */
  if (!C.zf) goto L_118edf01;
  /* 118ede08 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede0c jne 0x118ede1e */
  if (!C.zf) goto L_118ede1e;
  /* 118ede0e cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede11 jne 0x118ede1e */
  if (!C.zf) goto L_118ede1e;
  /* 118ede13 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede17 jne 0x118ede1e */
  if (!C.zf) goto L_118ede1e;
  /* 118ede19 call 0x118ee5ad */
  push32(0x118ede1eu); f_118ee5ad();
L_118ede1e:;
  /* 118ede1e cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede20 jne 0x118edf01 */
  if (!C.zf) goto L_118edf01;
  /* 118ede26 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede2a jne 0x118edf01 */
  if (!C.zf) goto L_118edf01;
  /* 118ede30 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede33 jne 0x118edf01 */
  if (!C.zf) goto L_118edf01;
  /* 118ede39 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 118ede3c lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 118ede3f push eax */
  push32((uint32_t)(EAX));
  /* 118ede40 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118ede43 push eax */
  push32((uint32_t)(EAX));
  /* 118ede44 push edi */
  push32((uint32_t)(EDI));
  /* 118ede45 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ede48 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ede4b call 0x118ed9fc */
  push32(0x118ede50u); f_118ed9fc();
  /* 118ede50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ede53 mov ebx, eax */
  EBX = (EAX);
L_118ede55:;
  /* 118ede55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118ede58 cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede5b jae 0x118edeec */
  if (!C.cf) goto L_118edeec;
  /* 118ede61 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede63 jg 0x118edee1 */
  if ((!C.zf&&C.sf==C.of)) goto L_118edee1;
  /* 118ede65 cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ede68 jg 0x118edee1 */
  if ((!C.zf&&C.sf==C.of)) goto L_118edee1;
  /* 118ede6a mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 118ede6d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118ede70 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 118ede73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ede75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118ede78 jle 0x118edede */
  if ((C.zf||C.sf!=C.of)) goto L_118edede;
L_118ede7a:;
  /* 118ede7a mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118ede7d mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 118ede80 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 118ede83 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 118ede85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ede87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118ede8a jle 0x118edeab */
  if ((C.zf||C.sf!=C.of)) goto L_118edeab;
L_118ede8c:;
  /* 118ede8c push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 118ede8f push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 118ede91 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ede94 call 0x118edfd6 */
  push32(0x118ede99u); f_118edfd6();
  /* 118ede99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ede9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ede9e jne 0x118edeba */
  if (!C.zf) goto L_118edeba;
  /* 118edea0 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 118edea3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118edea6 cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edea9 jg 0x118ede8c */
  if ((!C.zf&&C.sf==C.of)) goto L_118ede8c;
L_118edeab:;
  /* 118edeab dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 118edeae add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118edeb2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edeb6 jg 0x118ede7a */
  if ((!C.zf&&C.sf==C.of)) goto L_118ede7a;
  /* 118edeb8 jmp 0x118edede */
  goto L_118edede;
L_118edeba:;
  /* 118edeba push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 118edebd push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 118edec0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edec3 push ebx */
  push32((uint32_t)(EBX));
  /* 118edec4 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 118edec6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118edec9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118edecc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edecf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118eded2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118eded5 push esi */
  push32((uint32_t)(ESI));
  /* 118eded6 call 0x118ee0e7 */
  push32(0x118ededbu); f_118ee0e7();
  /* 118ededb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118edede:;
  /* 118edede mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_118edee1:;
  /* 118edee1 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118edee4 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118edee7 jmp 0x118ede55 */
  goto L_118ede55;
L_118edeec:;
  /* 118edeec cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edef0 je 0x118edefc */
  if (C.zf) goto L_118edefc;
  /* 118edef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118edef4 push esi */
  push32((uint32_t)(ESI));
  /* 118edef5 call 0x118ee46b */
  push32(0x118edefau); f_118ee46b();
  /* 118edefa pop ecx */
  ECX = (pop32());
  /* 118edefb pop ecx */
  ECX = (pop32());
L_118edefc:;
  /* 118edefc pop edi */
  EDI = (pop32());
  /* 118edefd pop esi */
  ESI = (pop32());
  /* 118edefe pop ebx */
  EBX = (pop32());
  /* 118edeff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118edf00 ret  */
  ESPCHK(0x118edd79u, _esp0);
  ESP += 4; return;
L_118edf01:;
  /* 118edf01 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edf05 jne 0x118edf27 */
  if (!C.zf) goto L_118edf27;
  /* 118edf07 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 118edf0a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edf0d push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 118edf10 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118edf13 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edf16 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118edf19 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118edf1c push esi */
  push32((uint32_t)(ESI));
  /* 118edf1d call 0x118edf2c */
  push32(0x118edf22u); f_118edf2c();
  /* 118edf22 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edf25 jmp 0x118edefc */
  goto L_118edefc;
L_118edf27:;
  /* 118edf27 jmp 0x118ee54c */
  f_118ee54c(); return;
}

/* FUN_1000df2c @ 0x118edf2c (170 bytes, 68 insns) */
void f_118edf2c(void) {
  FTRACE(0x118edf2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118edf2c push ebp */
  push32((uint32_t)(EBP));
  /* 118edf2d mov ebp, esp */
  EBP = (ESP);
  /* 118edf2f push ecx */
  push32((uint32_t)(ECX));
  /* 118edf30 push ecx */
  push32((uint32_t)(ECX));
  /* 118edf31 push esi */
  push32((uint32_t)(ESI));
  /* 118edf32 push edi */
  push32((uint32_t)(EDI));
  /* 118edf33 call 0x118e56f9 */
  push32(0x118edf38u); f_118e56f9();
  /* 118edf38 cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edf3c je 0x118edf5f */
  if (C.zf) goto L_118edf5f;
  /* 118edf3e push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 118edf41 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edf44 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118edf47 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edf4a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118edf4d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118edf50 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118edf53 call 0x118ed8d1 */
  push32(0x118edf58u); f_118ed8d1();
  /* 118edf58 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edf5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118edf5d jne 0x118edfd2 */
  if (!C.zf) goto L_118edfd2;
L_118edf5f:;
  /* 118edf5f mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 118edf62 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118edf65 push eax */
  push32((uint32_t)(EAX));
  /* 118edf66 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118edf69 push eax */
  push32((uint32_t)(EAX));
  /* 118edf6a push edi */
  push32((uint32_t)(EDI));
  /* 118edf6b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edf6e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118edf71 call 0x118ed9fc */
  push32(0x118edf76u); f_118ed9fc();
  /* 118edf76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edf79 mov esi, eax */
  ESI = (EAX);
L_118edf7b:;
  /* 118edf7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118edf7e cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edf81 jae 0x118edfd2 */
  if (!C.cf) goto L_118edfd2;
  /* 118edf83 cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edf85 jl 0x118edfca */
  if ((C.sf!=C.of)) goto L_118edfca;
  /* 118edf87 cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edf8a jg 0x118edfca */
  if ((!C.zf&&C.sf==C.of)) goto L_118edfca;
  /* 118edf8c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118edf8f mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 118edf92 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118edf95 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118edf97 mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 118edf9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118edf9c je 0x118edfa4 */
  if (C.zf) goto L_118edfa4;
  /* 118edf9e cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edfa2 jne 0x118edfca */
  if (!C.zf) goto L_118edfca;
L_118edfa4:;
  /* 118edfa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118edfa6 add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118edfa9 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 118edfac push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edfaf push esi */
  push32((uint32_t)(ESI));
  /* 118edfb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118edfb2 push eax */
  push32((uint32_t)(EAX));
  /* 118edfb3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118edfb6 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edfb9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118edfbc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118edfbf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118edfc2 call 0x118ee0e7 */
  push32(0x118edfc7u); f_118ee0e7();
  /* 118edfc7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118edfca:;
  /* 118edfca inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118edfcd add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118edfd0 jmp 0x118edf7b */
  goto L_118edf7b;
L_118edfd2:;
  /* 118edfd2 pop edi */
  EDI = (pop32());
  /* 118edfd3 pop esi */
  ESI = (pop32());
  /* 118edfd4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118edfd5 ret  */
  ESPCHK(0x118edf2cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd6 @ 0x118edfd6 (93 bytes, 42 insns) */
void f_118edfd6(void) {
  FTRACE(0x118edfd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118edfd6 push esi */
  push32((uint32_t)(ESI));
  /* 118edfd7 push edi */
  push32((uint32_t)(EDI));
  /* 118edfd8 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 118edfdc mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 118edfdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118edfe1 je 0x118ee02d */
  if (C.zf) goto L_118ee02d;
  /* 118edfe3 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edfe7 lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 118edfea je 0x118ee02d */
  if (C.zf) goto L_118ee02d;
  /* 118edfec mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 118edff0 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118edff3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edff5 je 0x118ee007 */
  if (C.zf) goto L_118ee007;
  /* 118edff7 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118edffa push ecx */
  push32((uint32_t)(ECX));
  /* 118edffb push edx */
  push32((uint32_t)(EDX));
  /* 118edffc call 0x118ebbe0 */
  push32(0x118ee001u); f_118ebbe0();
  /* 118ee001 pop ecx */
  ECX = (pop32());
  /* 118ee002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee004 pop ecx */
  ECX = (pop32());
  /* 118ee005 jne 0x118ee029 */
  if (!C.zf) goto L_118ee029;
L_118ee007:;
  /* 118ee007 test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 118ee00a je 0x118ee011 */
  if (C.zf) goto L_118ee011;
  /* 118ee00c test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 118ee00f je 0x118ee029 */
  if (C.zf) goto L_118ee029;
L_118ee011:;
  /* 118ee011 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118ee015 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 118ee017 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118ee019 je 0x118ee020 */
  if (C.zf) goto L_118ee020;
  /* 118ee01b test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 118ee01e je 0x118ee029 */
  if (C.zf) goto L_118ee029;
L_118ee020:;
  /* 118ee020 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 118ee022 je 0x118ee02d */
  if (C.zf) goto L_118ee02d;
  /* 118ee024 test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 118ee027 jne 0x118ee02d */
  if (!C.zf) goto L_118ee02d;
L_118ee029:;
  /* 118ee029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ee02b jmp 0x118ee030 */
  goto L_118ee030;
L_118ee02d:;
  /* 118ee02d push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee02f pop eax */
  EAX = (pop32());
L_118ee030:;
  /* 118ee030 pop edi */
  EDI = (pop32());
  /* 118ee031 pop esi */
  ESI = (pop32());
  /* 118ee032 ret  */
  ESPCHK(0x118edfd6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e033 @ 0x118ee033 (132 bytes, 56 insns) */
void f_118ee033(void) {
  FTRACE(0x118ee033u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee033 push ebp */
  push32((uint32_t)(EBP));
  /* 118ee034 mov ebp, esp */
  EBP = (ESP);
  /* 118ee036 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ee038 push 0x118efa70 */
  push32((uint32_t)(0x118efa70u));
  /* 118ee03d push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ee042 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ee048 push eax */
  push32((uint32_t)(EAX));
  /* 118ee049 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ee050 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ee053 push ebx */
  push32((uint32_t)(EBX));
  /* 118ee054 push esi */
  push32((uint32_t)(ESI));
  /* 118ee055 push edi */
  push32((uint32_t)(EDI));
  /* 118ee056 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ee059 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee05c mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 118ee05f mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 118ee062 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_118ee065:;
  /* 118ee065 cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee068 je 0x118ee0bf */
  if (C.zf) goto L_118ee0bf;
  /* 118ee06a cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee06d jle 0x118ee074 */
  if ((C.zf||C.sf!=C.of)) goto L_118ee074;
  /* 118ee06f cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee072 jl 0x118ee079 */
  if ((C.sf!=C.of)) goto L_118ee079;
L_118ee074:;
  /* 118ee074 call 0x118ee5ad */
  push32(0x118ee079u); f_118ee5ad();
L_118ee079:;
  /* 118ee079 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee07d mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 118ee080 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 118ee084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee086 je 0x118ee094 */
  if (C.zf) goto L_118ee094;
  /* 118ee088 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 118ee08d push ebx */
  push32((uint32_t)(EBX));
  /* 118ee08e push eax */
  push32((uint32_t)(EAX));
  /* 118ee08f call 0x118ee500 */
  push32(0x118ee094u); f_118ee500();
L_118ee094:;
  /* 118ee094 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee098 jmp 0x118ee0b4 */
  goto L_118ee0b4;
  /* 118ee09a push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 118ee09d call 0x118ee0d1 */
  call_ind(0x118ee0d1u, 0x118ee0a2u);
  /* 118ee0a2 pop ecx */
  ECX = (pop32());
  /* 118ee0a3 ret  */
  ESPCHK(0x118ee033u, _esp0);
  ESP += 4; return;
  /* 118ee0a4 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ee0a7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee0ab mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118ee0ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee0b1 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_118ee0b4:;
  /* 118ee0b4 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 118ee0b7 mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 118ee0ba mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 118ee0bd jmp 0x118ee065 */
  goto L_118ee065;
L_118ee0bf:;
  /* 118ee0bf mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 118ee0c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee0c5 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ee0cc pop edi */
  EDI = (pop32());
  /* 118ee0cd pop esi */
  ESI = (pop32());
  /* 118ee0ce pop ebx */
  EBX = (pop32());
  /* 118ee0cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ee0d0 ret  */
  ESPCHK(0x118ee033u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0e7 @ 0x118ee0e7 (123 bytes, 50 insns) */
void f_118ee0e7(void) {
  FTRACE(0x118ee0e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee0e7 push ebp */
  push32((uint32_t)(EBP));
  /* 118ee0e8 mov ebp, esp */
  EBP = (ESP);
  /* 118ee0ea cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee0ee push ebx */
  push32((uint32_t)(EBX));
  /* 118ee0ef mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118ee0f2 push esi */
  push32((uint32_t)(ESI));
  /* 118ee0f3 push edi */
  push32((uint32_t)(EDI));
  /* 118ee0f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118ee0f7 je 0x118ee109 */
  if (C.zf) goto L_118ee109;
  /* 118ee0f9 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ee0fc push ebx */
  push32((uint32_t)(EBX));
  /* 118ee0fd push edi */
  push32((uint32_t)(EDI));
  /* 118ee0fe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ee101 call 0x118ee2a7 */
  push32(0x118ee106u); f_118ee2a7();
  /* 118ee106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118ee109:;
  /* 118ee109 cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee10d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ee110 jne 0x118ee115 */
  if (!C.zf) goto L_118ee115;
  /* 118ee112 push edi */
  push32((uint32_t)(EDI));
  /* 118ee113 jmp 0x118ee118 */
  goto L_118ee118;
L_118ee115:;
  /* 118ee115 push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_118ee118:;
  /* 118ee118 call 0x118ed7d3 */
  push32(0x118ee11du); f_118ed7d3();
  /* 118ee11d mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 118ee120 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118ee122 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ee125 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ee128 push edi */
  push32((uint32_t)(EDI));
  /* 118ee129 call 0x118ee033 */
  push32(0x118ee12eu); f_118ee033();
  /* 118ee12e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118ee131 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 118ee136 push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 118ee139 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ee13a mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 118ee13d push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 118ee140 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ee143 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ee146 push edi */
  push32((uint32_t)(EDI));
  /* 118ee147 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ee14a call 0x118ee162 */
  push32(0x118ee14fu); f_118ee162();
  /* 118ee14f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee154 je 0x118ee15d */
  if (C.zf) goto L_118ee15d;
  /* 118ee156 push edi */
  push32((uint32_t)(EDI));
  /* 118ee157 push eax */
  push32((uint32_t)(EAX));
  /* 118ee158 call 0x118ed791 */
  push32(0x118ee15du); f_118ed791();
L_118ee15d:;
  /* 118ee15d pop edi */
  EDI = (pop32());
  /* 118ee15e pop esi */
  ESI = (pop32());
  /* 118ee15f pop ebx */
  EBX = (pop32());
  /* 118ee160 pop ebp */
  EBP = (pop32());
  /* 118ee161 ret  */
  ESPCHK(0x118ee0e7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e162 @ 0x118ee162 (165 bytes, 52 insns) */
void f_118ee162(void) {
  FTRACE(0x118ee162u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee162 push ebp */
  push32((uint32_t)(EBP));
  /* 118ee163 mov ebp, esp */
  EBP = (ESP);
  /* 118ee165 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ee167 push 0x118efa80 */
  push32((uint32_t)(0x118efa80u));
  /* 118ee16c push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ee171 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ee177 push eax */
  push32((uint32_t)(EAX));
  /* 118ee178 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ee17f sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ee182 push ebx */
  push32((uint32_t)(EBX));
  /* 118ee183 push esi */
  push32((uint32_t)(ESI));
  /* 118ee184 push edi */
  push32((uint32_t)(EDI));
  /* 118ee185 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ee188 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 118ee18b mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 118ee18e and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 118ee192 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118ee195 mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 118ee198 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118ee19b call 0x118e56f9 */
  push32(0x118ee1a0u); f_118e56f9();
  /* 118ee1a0 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 118ee1a3 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118ee1a6 call 0x118e56f9 */
  push32(0x118ee1abu); f_118e56f9();
  /* 118ee1ab mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 118ee1ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118ee1b1 call 0x118e56f9 */
  push32(0x118ee1b6u); f_118e56f9();
  /* 118ee1b6 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee1b9 mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 118ee1bc call 0x118e56f9 */
  push32(0x118ee1c1u); f_118e56f9();
  /* 118ee1c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ee1c4 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 118ee1c7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee1cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118ee1d2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ee1d5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ee1d8 push ebx */
  push32((uint32_t)(EBX));
  /* 118ee1d9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ee1dc push esi */
  push32((uint32_t)(ESI));
  /* 118ee1dd call 0x118ed858 */
  push32(0x118ee1e2u); f_118ed858();
  /* 118ee1e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee1e5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 118ee1e8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee1ec or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee1f0 call 0x118ee22f */
  push32(0x118ee1f5u); f_118ee22f();
  /* 118ee1f5 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118ee1f8 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee1fb mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ee202 pop edi */
  EDI = (pop32());
  /* 118ee203 pop esi */
  ESI = (pop32());
  /* 118ee204 pop ebx */
  EBX = (pop32());
  /* 118ee205 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ee206 ret  */
  ESPCHK(0x118ee162u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e22f @ 0x118ee22f (78 bytes, 25 insns) */
void f_118ee22f(void) {
  FTRACE(0x118ee22fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee22f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118ee232 mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 118ee235 call 0x118e56f9 */
  push32(0x118ee23au); f_118e56f9();
  /* 118ee23a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118ee23d mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 118ee240 call 0x118e56f9 */
  push32(0x118ee245u); f_118e56f9();
  /* 118ee245 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118ee248 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 118ee24b cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee251 jne 0x118ee27c */
  if (!C.zf) goto L_118ee27c;
  /* 118ee253 cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee257 jne 0x118ee27c */
  if (!C.zf) goto L_118ee27c;
  /* 118ee259 cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee260 jne 0x118ee27c */
  if (!C.zf) goto L_118ee27c;
  /* 118ee262 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee266 jne 0x118ee27c */
  if (!C.zf) goto L_118ee27c;
  /* 118ee268 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee26c je 0x118ee27c */
  if (C.zf) goto L_118ee27c;
  /* 118ee26e call 0x118e8c7a */
  push32(0x118ee273u); f_118e8c7a();
  /* 118ee273 push eax */
  push32((uint32_t)(EAX));
  /* 118ee274 push edi */
  push32((uint32_t)(EDI));
  /* 118ee275 call 0x118ee46b */
  push32(0x118ee27au); f_118ee46b();
  /* 118ee27a pop ecx */
  ECX = (pop32());
  /* 118ee27b pop ecx */
  ECX = (pop32());
L_118ee27c:;
  /* 118ee27c ret  */
  ESPCHK(0x118ee22fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a7 @ 0x118ee2a7 (440 bytes, 164 insns) */
void f_118ee2a7(void) {
  FTRACE(0x118ee2a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee2a7 push ebp */
  push32((uint32_t)(EBP));
  /* 118ee2a8 mov ebp, esp */
  EBP = (ESP);
  /* 118ee2aa push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ee2ac push 0x118efa98 */
  push32((uint32_t)(0x118efa98u));
  /* 118ee2b1 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ee2b6 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ee2bc push eax */
  push32((uint32_t)(EAX));
  /* 118ee2bd mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ee2c4 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ee2c7 push ebx */
  push32((uint32_t)(EBX));
  /* 118ee2c8 push esi */
  push32((uint32_t)(ESI));
  /* 118ee2c9 push edi */
  push32((uint32_t)(EDI));
  /* 118ee2ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ee2cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ee2d0 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 118ee2d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee2d5 je 0x118ee450 */
  if (C.zf) goto L_118ee450;
  /* 118ee2db cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ee2df je 0x118ee450 */
  if (C.zf) goto L_118ee450;
  /* 118ee2e5 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 118ee2e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee2ea je 0x118ee450 */
  if (C.zf) goto L_118ee450;
  /* 118ee2f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ee2f3 lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 118ee2f7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee2fb test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 118ee2fe je 0x118ee344 */
  if (C.zf) goto L_118ee344;
  /* 118ee300 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee303 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee305 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 118ee308 call 0x118ee667 */
  push32(0x118ee30du); f_118ee667();
  /* 118ee30d pop ecx */
  ECX = (pop32());
  /* 118ee30e pop ecx */
  ECX = (pop32());
  /* 118ee30f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee311 je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee317 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee319 push edi */
  push32((uint32_t)(EDI));
  /* 118ee31a call 0x118ee683 */
  push32(0x118ee31fu); f_118ee683();
  /* 118ee31f pop ecx */
  ECX = (pop32());
  /* 118ee320 pop ecx */
  ECX = (pop32());
  /* 118ee321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee323 je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee329 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 118ee32c mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118ee32e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118ee331 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee334 push ecx */
  push32((uint32_t)(ECX));
L_118ee335:;
  /* 118ee335 push eax */
  push32((uint32_t)(EAX));
  /* 118ee336 call 0x118ee4d2 */
  push32(0x118ee33bu); f_118ee4d2();
  /* 118ee33b pop ecx */
  ECX = (pop32());
  /* 118ee33c pop ecx */
  ECX = (pop32());
  /* 118ee33d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118ee33f jmp 0x118ee44c */
  goto L_118ee44c;
L_118ee344:;
  /* 118ee344 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 118ee347 test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 118ee34a je 0x118ee39e */
  if (C.zf) goto L_118ee39e;
  /* 118ee34c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee34f push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee351 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 118ee354 call 0x118ee667 */
  push32(0x118ee359u); f_118ee667();
  /* 118ee359 pop ecx */
  ECX = (pop32());
  /* 118ee35a pop ecx */
  ECX = (pop32());
  /* 118ee35b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee35d je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee363 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee365 push edi */
  push32((uint32_t)(EDI));
  /* 118ee366 call 0x118ee683 */
  push32(0x118ee36bu); f_118ee683();
  /* 118ee36b pop ecx */
  ECX = (pop32());
  /* 118ee36c pop ecx */
  ECX = (pop32());
  /* 118ee36d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee36f je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee375 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 118ee378 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 118ee37b push edi */
  push32((uint32_t)(EDI));
  /* 118ee37c call 0x118e70b0 */
  push32(0x118ee381u); f_118e70b0();
  /* 118ee381 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee384 cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee388 jne 0x118ee44c */
  if (!C.zf) goto L_118ee44c;
  /* 118ee38e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118ee390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee392 je 0x118ee44c */
  if (C.zf) goto L_118ee44c;
  /* 118ee398 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee39b push esi */
  push32((uint32_t)(ESI));
  /* 118ee39c jmp 0x118ee335 */
  goto L_118ee335;
L_118ee39e:;
  /* 118ee39e cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee3a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee3a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee3a7 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 118ee3aa jne 0x118ee3e6 */
  if (!C.zf) goto L_118ee3e6;
  /* 118ee3ac call 0x118ee667 */
  push32(0x118ee3b1u); f_118ee667();
  /* 118ee3b1 pop ecx */
  ECX = (pop32());
  /* 118ee3b2 pop ecx */
  ECX = (pop32());
  /* 118ee3b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee3b5 je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee3bb push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee3bd push edi */
  push32((uint32_t)(EDI));
  /* 118ee3be call 0x118ee683 */
  push32(0x118ee3c3u); f_118ee683();
  /* 118ee3c3 pop ecx */
  ECX = (pop32());
  /* 118ee3c4 pop ecx */
  ECX = (pop32());
  /* 118ee3c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee3c7 je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee3c9 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 118ee3cc add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee3cf push esi */
  push32((uint32_t)(ESI));
  /* 118ee3d0 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 118ee3d3 call 0x118ee4d2 */
  push32(0x118ee3d8u); f_118ee4d2();
  /* 118ee3d8 pop ecx */
  ECX = (pop32());
  /* 118ee3d9 pop ecx */
  ECX = (pop32());
  /* 118ee3da push eax */
  push32((uint32_t)(EAX));
  /* 118ee3db push edi */
  push32((uint32_t)(EDI));
  /* 118ee3dc call 0x118e70b0 */
  push32(0x118ee3e1u); f_118e70b0();
  /* 118ee3e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee3e4 jmp 0x118ee44c */
  goto L_118ee44c;
L_118ee3e6:;
  /* 118ee3e6 call 0x118ee667 */
  push32(0x118ee3ebu); f_118ee667();
  /* 118ee3eb pop ecx */
  ECX = (pop32());
  /* 118ee3ec pop ecx */
  ECX = (pop32());
  /* 118ee3ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee3ef je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee3f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee3f3 push edi */
  push32((uint32_t)(EDI));
  /* 118ee3f4 call 0x118ee683 */
  push32(0x118ee3f9u); f_118ee683();
  /* 118ee3f9 pop ecx */
  ECX = (pop32());
  /* 118ee3fa pop ecx */
  ECX = (pop32());
  /* 118ee3fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee3fd je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee3ff push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 118ee402 call 0x118ee69f */
  push32(0x118ee407u); f_118ee69f();
  /* 118ee407 pop ecx */
  ECX = (pop32());
  /* 118ee408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee40a je 0x118ee447 */
  if (C.zf) goto L_118ee447;
  /* 118ee40c test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 118ee40f je 0x118ee42d */
  if (C.zf) goto L_118ee42d;
  /* 118ee411 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee413 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 118ee416 push eax */
  push32((uint32_t)(EAX));
  /* 118ee417 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 118ee41a call 0x118ee4d2 */
  push32(0x118ee41fu); f_118ee4d2();
  /* 118ee41f pop ecx */
  ECX = (pop32());
  /* 118ee420 pop ecx */
  ECX = (pop32());
  /* 118ee421 push eax */
  push32((uint32_t)(EAX));
  /* 118ee422 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 118ee425 push edi */
  push32((uint32_t)(EDI));
  /* 118ee426 call 0x118ed7cc */
  push32(0x118ee42bu); f_118ed7cc();
  /* 118ee42b jmp 0x118ee44c */
  goto L_118ee44c;
L_118ee42d:;
  /* 118ee42d lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 118ee430 push eax */
  push32((uint32_t)(EAX));
  /* 118ee431 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 118ee434 call 0x118ee4d2 */
  push32(0x118ee439u); f_118ee4d2();
  /* 118ee439 pop ecx */
  ECX = (pop32());
  /* 118ee43a pop ecx */
  ECX = (pop32());
  /* 118ee43b push eax */
  push32((uint32_t)(EAX));
  /* 118ee43c push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 118ee43f push edi */
  push32((uint32_t)(EDI));
  /* 118ee440 call 0x118ed7c5 */
  push32(0x118ee445u); f_118ed7c5();
  /* 118ee445 jmp 0x118ee44c */
  goto L_118ee44c;
L_118ee447:;
  /* 118ee447 call 0x118ee5ad */
  push32(0x118ee44cu); f_118ee5ad();
L_118ee44c:;
  /* 118ee44c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118ee450:;
  /* 118ee450 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee453 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ee45a pop edi */
  EDI = (pop32());
  /* 118ee45b pop esi */
  ESI = (pop32());
  /* 118ee45c pop ebx */
  EBX = (pop32());
  /* 118ee45d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ee45e ret  */
  ESPCHK(0x118ee2a7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e46b @ 0x118ee46b (86 bytes, 33 insns) */
void f_118ee46b(void) {
  FTRACE(0x118ee46bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee46b push ebp */
  push32((uint32_t)(EBP));
  /* 118ee46c mov ebp, esp */
  EBP = (ESP);
  /* 118ee46e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ee470 push 0x118efaa8 */
  push32((uint32_t)(0x118efaa8u));
  /* 118ee475 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ee47a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ee480 push eax */
  push32((uint32_t)(EAX));
  /* 118ee481 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ee488 push ecx */
  push32((uint32_t)(ECX));
  /* 118ee489 push ecx */
  push32((uint32_t)(ECX));
  /* 118ee48a push ebx */
  push32((uint32_t)(EBX));
  /* 118ee48b push esi */
  push32((uint32_t)(ESI));
  /* 118ee48c push edi */
  push32((uint32_t)(EDI));
  /* 118ee48d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ee490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee495 je 0x118ee4b2 */
  if (C.zf) goto L_118ee4b2;
  /* 118ee497 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118ee49a mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 118ee49d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118ee49f je 0x118ee4b2 */
  if (C.zf) goto L_118ee4b2;
  /* 118ee4a1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 118ee4a6 push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 118ee4a9 call 0x118ed7c5 */
  push32(0x118ee4aeu); f_118ed7c5();
  /* 118ee4ae or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118ee4b2:;
  /* 118ee4b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee4b5 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ee4bc pop edi */
  EDI = (pop32());
  /* 118ee4bd pop esi */
  ESI = (pop32());
  /* 118ee4be pop ebx */
  EBX = (pop32());
  /* 118ee4bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ee4c0 ret  */
  ESPCHK(0x118ee46bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d2 @ 0x118ee4d2 (35 bytes, 15 insns) */
void f_118ee4d2(void) {
  FTRACE(0x118ee4d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee4d2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ee4d6 push esi */
  push32((uint32_t)(ESI));
  /* 118ee4d7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ee4db mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118ee4dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 118ee4e0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee4e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118ee4e4 jl 0x118ee4f3 */
  if ((C.sf!=C.of)) goto L_118ee4f3;
  /* 118ee4e6 mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 118ee4e9 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 118ee4ec mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 118ee4ef add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee4f1 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118ee4f3:;
  /* 118ee4f3 pop esi */
  ESI = (pop32());
  /* 118ee4f4 ret  */
  ESPCHK(0x118ee4d2u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x118ee500 (76 bytes, 34 insns) */
void f_118ee500(void) {
  FTRACE(0x118ee500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee500 push ebp */
  push32((uint32_t)(EBP));
  /* 118ee501 mov ebp, esp */
  EBP = (ESP);
  /* 118ee503 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ee506 push ebx */
  push32((uint32_t)(EBX));
  /* 118ee507 push ecx */
  push32((uint32_t)(ECX));
  /* 118ee508 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ee50b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee50e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118ee511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ee514 push ebp */
  push32((uint32_t)(EBP));
  /* 118ee515 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ee518 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ee51b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 118ee51e call 0x118e8c9d */
  push32(0x118ee523u); f_118e8c9d();
  /* 118ee523 push esi */
  push32((uint32_t)(ESI));
  /* 118ee524 push edi */
  push32((uint32_t)(EDI));
  /* 118ee525 call eax */
  call_ind((uint32_t)(EAX), 0x118ee527u);
  /* 118ee527 pop edi */
  EDI = (pop32());
  /* 118ee528 pop esi */
  ESI = (pop32());
  /* 118ee529 mov ebx, ebp */
  EBX = (EBP);
  /* 118ee52b pop ebp */
  EBP = (pop32());
  /* 118ee52c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ee52f push ebp */
  push32((uint32_t)(EBP));
  /* 118ee530 mov ebp, ebx */
  EBP = (EBX);
  /* 118ee532 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee538 jne 0x118ee53f */
  if (!C.zf) goto L_118ee53f;
  /* 118ee53a mov ecx, 2 */
  ECX = (0x2u);
L_118ee53f:;
  /* 118ee53f push ecx */
  push32((uint32_t)(ECX));
  /* 118ee540 call 0x118e8c9d */
  push32(0x118ee545u); f_118e8c9d();
  /* 118ee545 pop ebp */
  EBP = (pop32());
  /* 118ee546 pop ecx */
  ECX = (pop32());
  /* 118ee547 pop ebx */
  EBX = (pop32());
  /* 118ee548 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ee549 ret 0xc */
  ESPCHK(0x118ee500u, _esp0);
  ESP += 16; return;
}

/* FUN_1000e54c @ 0x118ee54c (86 bytes, 32 insns) */
void f_118ee54c(void) {
  FTRACE(0x118ee54cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee54c push ebp */
  push32((uint32_t)(EBP));
  /* 118ee54d mov ebp, esp */
  EBP = (ESP);
  /* 118ee54f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ee551 push 0x118efab8 */
  push32((uint32_t)(0x118efab8u));
  /* 118ee556 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ee55b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ee561 push eax */
  push32((uint32_t)(EAX));
  /* 118ee562 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ee569 push ecx */
  push32((uint32_t)(ECX));
  /* 118ee56a push ecx */
  push32((uint32_t)(ECX));
  /* 118ee56b push ebx */
  push32((uint32_t)(EBX));
  /* 118ee56c push esi */
  push32((uint32_t)(ESI));
  /* 118ee56d push edi */
  push32((uint32_t)(EDI));
  /* 118ee56e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ee571 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118ee573 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 118ee576 call 0x118e56f9 */
  push32(0x118ee57bu); f_118e56f9();
  /* 118ee57b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee57e je 0x118ee59f */
  if (C.zf) goto L_118ee59f;
  /* 118ee580 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118ee587 call 0x118e56f9 */
  push32(0x118ee58cu); f_118e56f9();
  /* 118ee58c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x118ee58fu);
  /* 118ee58f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 118ee592 jmp 0x118ee59f */
  goto L_118ee59f;
  /* 118ee594 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee596 pop eax */
  EAX = (pop32());
  /* 118ee597 ret  */
  ESPCHK(0x118ee54cu, _esp0);
  ESP += 4; return;
  /* 118ee598 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ee59b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118ee59f:;
  /* 118ee59f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee5a3 call 0x118ee5a8 */
  call_ind(0x118ee5a8u, 0x118ee5a8u);
  /* 118ee5a8 jmp 0x118ee6b7 */
  f_118ee6b7(); return;
}

/* FUN_1000e5ad @ 0x118ee5ad (79 bytes, 29 insns) */
void f_118ee5ad(void) {
  FTRACE(0x118ee5adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee5ad push ebp */
  push32((uint32_t)(EBP));
  /* 118ee5ae mov ebp, esp */
  EBP = (ESP);
  /* 118ee5b0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ee5b2 push 0x118efad0 */
  push32((uint32_t)(0x118efad0u));
  /* 118ee5b7 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ee5bc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ee5c2 push eax */
  push32((uint32_t)(EAX));
  /* 118ee5c3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ee5ca push ecx */
  push32((uint32_t)(ECX));
  /* 118ee5cb push ecx */
  push32((uint32_t)(ECX));
  /* 118ee5cc push ebx */
  push32((uint32_t)(EBX));
  /* 118ee5cd push esi */
  push32((uint32_t)(ESI));
  /* 118ee5ce push edi */
  push32((uint32_t)(EDI));
  /* 118ee5cf mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ee5d2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee5d6 mov eax, dword ptr [0x118f48f0] */
  EAX = (r32((uint32_t)(0x118f48f0)));
  /* 118ee5db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee5dd je 0x118ee5f5 */
  if (C.zf) goto L_118ee5f5;
  /* 118ee5df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118ee5e6 call eax */
  call_ind((uint32_t)(EAX), 0x118ee5e8u);
  /* 118ee5e8 jmp 0x118ee5f1 */
  goto L_118ee5f1;
  /* 118ee5ea push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee5ec pop eax */
  EAX = (pop32());
  /* 118ee5ed ret  */
  ESPCHK(0x118ee5adu, _esp0);
  ESP += 4; return;
  /* 118ee5ee mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_118ee5f1:;
  /* 118ee5f1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118ee5f5:;
  /* 118ee5f5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ee5f9 call 0x118ee5fe */
  call_ind(0x118ee5feu, 0x118ee5feu);
  /* 118ee5fe jmp 0x118ee54c */
  f_118ee54c(); return;
}

/* FUN_1000e603 @ 0x118ee603 (70 bytes, 24 insns) */
void f_118ee603(void) {
  FTRACE(0x118ee603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee603 push esi */
  push32((uint32_t)(ESI));
  /* 118ee604 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ee608 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ee60a cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee610 jne 0x118ee626 */
  if (!C.zf) goto L_118ee626;
  /* 118ee612 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee616 jne 0x118ee626 */
  if (!C.zf) goto L_118ee626;
  /* 118ee618 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ee61f jne 0x118ee626 */
  if (!C.zf) goto L_118ee626;
  /* 118ee621 jmp 0x118ee54c */
  f_118ee54c(); return;
L_118ee626:;
  /* 118ee626 mov eax, dword ptr [0x119097c0] */
  EAX = (r32((uint32_t)(0x119097c0)));
  /* 118ee62b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee62d je 0x118ee643 */
  if (C.zf) goto L_118ee643;
  /* 118ee62f push eax */
  push32((uint32_t)(EAX));
  /* 118ee630 call 0x118ee69f */
  push32(0x118ee635u); f_118ee69f();
  /* 118ee635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee637 pop ecx */
  ECX = (pop32());
  /* 118ee638 je 0x118ee643 */
  if (C.zf) goto L_118ee643;
  /* 118ee63a push esi */
  push32((uint32_t)(ESI));
  /* 118ee63b call dword ptr [0x119097c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119097c0))), 0x118ee641u);
  /* 118ee641 jmp 0x118ee645 */
  goto L_118ee645;
L_118ee643:;
  /* 118ee643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ee645:;
  /* 118ee645 pop esi */
  ESI = (pop32());
  /* 118ee646 ret 4 */
  ESPCHK(0x118ee603u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e667 @ 0x118ee667 (28 bytes, 12 insns) */
void f_118ee667(void) {
  FTRACE(0x118ee667u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee667 push esi */
  push32((uint32_t)(ESI));
  /* 118ee668 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee66a pop esi */
  ESI = (pop32());
  /* 118ee66b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118ee66f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118ee673 call dword ptr [0x118ef00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef00c))), 0x118ee679u);
  /* 118ee679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee67b je 0x118ee67f */
  if (C.zf) goto L_118ee67f;
  /* 118ee67d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118ee67f:;
  /* 118ee67f mov eax, esi */
  EAX = (ESI);
  /* 118ee681 pop esi */
  ESI = (pop32());
  /* 118ee682 ret  */
  ESPCHK(0x118ee667u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e683 @ 0x118ee683 (28 bytes, 12 insns) */
void f_118ee683(void) {
  FTRACE(0x118ee683u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee683 push esi */
  push32((uint32_t)(ESI));
  /* 118ee684 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee686 pop esi */
  ESI = (pop32());
  /* 118ee687 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118ee68b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118ee68f call dword ptr [0x118ef060] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef060))), 0x118ee695u);
  /* 118ee695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee697 je 0x118ee69b */
  if (C.zf) goto L_118ee69b;
  /* 118ee699 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118ee69b:;
  /* 118ee69b mov eax, esi */
  EAX = (ESI);
  /* 118ee69d pop esi */
  ESI = (pop32());
  /* 118ee69e ret  */
  ESPCHK(0x118ee683u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e69f @ 0x118ee69f (24 bytes, 11 insns) */
void f_118ee69f(void) {
  FTRACE(0x118ee69fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee69f push esi */
  push32((uint32_t)(ESI));
  /* 118ee6a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ee6a2 pop esi */
  ESI = (pop32());
  /* 118ee6a3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118ee6a7 call dword ptr [0x118ef008] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef008))), 0x118ee6adu);
  /* 118ee6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee6af je 0x118ee6b3 */
  if (C.zf) goto L_118ee6b3;
  /* 118ee6b1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118ee6b3:;
  /* 118ee6b3 mov eax, esi */
  EAX = (ESI);
  /* 118ee6b5 pop esi */
  ESI = (pop32());
  /* 118ee6b6 ret  */
  ESPCHK(0x118ee69fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6b7 @ 0x118ee6b7 (23 bytes, 10 insns) */
void f_118ee6b7(void) {
  FTRACE(0x118ee6b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee6b7 push 0xa */
  push32((uint32_t)(0xau));
  /* 118ee6b9 call 0x118e6579 */
  push32(0x118ee6beu); f_118e6579();
  /* 118ee6be push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118ee6c0 call 0x118ea3ee */
  push32(0x118ee6c5u); f_118ea3ee();
  /* 118ee6c5 pop ecx */
  ECX = (pop32());
  /* 118ee6c6 pop ecx */
  ECX = (pop32());
  /* 118ee6c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 118ee6c9 call 0x118e502c */
  push32(0x118ee6ceu); f_118e502c();
  /* 118ee6ce int3  */
  x86_unimpl("int3 @ 0x118ee6ce");
  /* 118ee6cf int3  */
  x86_unimpl("int3 @ 0x118ee6cf");
}

/* Unwind@1000e6d0 @ 0x118ee6d0 (26 bytes, 8 insns) */
void f_118ee6d0(void) {
  FTRACE(0x118ee6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee6d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee6d3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 118ee6d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee6d8 je 0x118ee6e9 */
  if (C.zf) goto L_118ee6e9;
  /* 118ee6de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118ee6e1 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee6e4 jmp 0x118ecdcf */
  f_118ecdcf(); return;
L_118ee6e9:;
  /* 118ee6e9 ret  */
  ESPCHK(0x118ee6d0u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000e6ea @ 0x118ee6ea (10 bytes, 4 insns) */
void f_118ee6ea(void) {
  FTRACE(0x118ee6eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee6ea push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ee6ed call 0x118ed72d */
  push32(0x118ee6f2u); f_118ed72d();
  /* 118ee6f2 pop ecx */
  ECX = (pop32());
  /* 118ee6f3 ret  */
  ESPCHK(0x118ee6eau, _esp0);
  ESP += 4; return;
}

/* Unwind@1000e700 @ 0x118ee700 (26 bytes, 8 insns) */
void f_118ee700(void) {
  FTRACE(0x118ee700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee700 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee703 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 118ee706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee708 je 0x118ee719 */
  if (C.zf) goto L_118ee719;
  /* 118ee70e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118ee711 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee714 jmp 0x118ecdcf */
  f_118ecdcf(); return;
L_118ee719:;
  /* 118ee719 ret  */
  ESPCHK(0x118ee700u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000e71a @ 0x118ee71a (11 bytes, 3 insns) */
void f_118ee71a(void) {
  FTRACE(0x118ee71au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee71a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118ee71d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee720 jmp 0x118ed3a8 */
  f_118ed3a8(); return;
}

/* Unwind@1000e730 @ 0x118ee730 (11 bytes, 3 insns) */
void f_118ee730(void) {
  FTRACE(0x118ee730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee730 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee733 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ee736 jmp 0x118ed3a8 */
  f_118ed3a8(); return;
}

/* Unwind@1000e748 @ 0x118ee748 (8 bytes, 2 insns) */
void f_118ee748(void) {
  FTRACE(0x118ee748u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee748 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee74b jmp 0x118ed4d6 */
  f_118ed4d6(); return;
}

/* Unwind@1000e75c @ 0x118ee75c (26 bytes, 8 insns) */
void f_118ee75c(void) {
  FTRACE(0x118ee75cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee75c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee75f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 118ee762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee764 je 0x118ee775 */
  if (C.zf) goto L_118ee775;
  /* 118ee76a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118ee76d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee770 jmp 0x118ecdcf */
  f_118ecdcf(); return;
L_118ee775:;
  /* 118ee775 ret  */
  ESPCHK(0x118ee75cu, _esp0);
  ESP += 4; return;
}

/* Unwind@1000e780 @ 0x118ee780 (26 bytes, 8 insns) */
void f_118ee780(void) {
  FTRACE(0x118ee780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ee780 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ee783 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 118ee786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ee788 je 0x118ee799 */
  if (C.zf) goto L_118ee799;
  /* 118ee78e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118ee791 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ee794 jmp 0x118ecdcf */
  f_118ecdcf(); return;
L_118ee799:;
  /* 118ee799 ret  */
  ESPCHK(0x118ee780u, _esp0);
  ESP += 4; return;
}

