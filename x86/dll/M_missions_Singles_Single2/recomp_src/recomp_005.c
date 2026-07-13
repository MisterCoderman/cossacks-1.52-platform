#include "recomp.h"

/* crtGetLocaleInfoA @ 0x1125dea0 (388 bytes, 118 insns) */
void f_1125dea0(void) {
  FTRACE(0x1125dea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125dea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125dea1 mov ebp, esp */
  EBP = (ESP);
  /* 1125dea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dea6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125dead mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1125deb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1125debb:;
  /* 1125debb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125debe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dec1 jg 0x1125e008 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e008;
  /* 1125dec7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125deca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125decd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125dece sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ded0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1125ded2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125ded5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125ded8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125dedb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dede cmp edx, dword ptr [ecx + 0x1127fb40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1127fb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dee4 jne 0x1125dfde */
  if (!C.zf) goto L_1125dfde;
  /* 1125deea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125deed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125def0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125def4 ja 0x1125df17 */
  if ((!C.cf&&!C.zf)) goto L_1125df17;
  /* 1125def6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125defa je 0x1125df89 */
  if (C.zf) goto L_1125df89;
  /* 1125df00 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125df04 je 0x1125df34 */
  if (C.zf) goto L_1125df34;
  /* 1125df06 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125df0a je 0x1125df56 */
  if (C.zf) goto L_1125df56;
  /* 1125df0c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125df10 je 0x1125df78 */
  if (C.zf) goto L_1125df78;
  /* 1125df12 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df17:;
  /* 1125df17 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125df1e je 0x1125df45 */
  if (C.zf) goto L_1125df45;
  /* 1125df20 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125df27 je 0x1125df67 */
  if (C.zf) goto L_1125df67;
  /* 1125df29 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125df30 je 0x1125df9a */
  if (C.zf) goto L_1125df9a;
  /* 1125df32 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df34:;
  /* 1125df34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df37 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125df3a add ecx, 0x1127fb44 */
  { uint32_t _a=(ECX),_b=(0x1127fb44u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125df40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125df43 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df45:;
  /* 1125df45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df48 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125df4b mov eax, dword ptr [edx + 0x1127fb4c] */
  EAX = (r32((uint32_t)(EDX + 0x1127fb4c)));
  /* 1125df51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125df54 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df56:;
  /* 1125df56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df59 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125df5c add ecx, 0x1127fb50 */
  { uint32_t _a=(ECX),_b=(0x1127fb50u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125df62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125df65 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df67:;
  /* 1125df67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df6a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125df6d mov eax, dword ptr [edx + 0x1127fb54] */
  EAX = (r32((uint32_t)(EDX + 0x1127fb54)));
  /* 1125df73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125df76 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df78:;
  /* 1125df78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df7b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125df7e add ecx, 0x1127fb58 */
  { uint32_t _a=(ECX),_b=(0x1127fb58u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125df84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125df87 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df89:;
  /* 1125df89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df8c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125df8f add edx, 0x1127fb5c */
  { uint32_t _a=(EDX),_b=(0x1127fb5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125df95 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125df98 jmp 0x1125dfa8 */
  goto L_1125dfa8;
L_1125df9a:;
  /* 1125df9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125df9d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125dfa0 add eax, 0x1127fb64 */
  { uint32_t _a=(EAX),_b=(0x1127fb64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dfa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1125dfa8:;
  /* 1125dfa8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dfac je 0x1125dfb4 */
  if (C.zf) goto L_1125dfb4;
  /* 1125dfae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dfb2 jge 0x1125dfb6 */
  if ((C.sf==C.of)) goto L_1125dfb6;
L_1125dfb4:;
  /* 1125dfb4 jmp 0x1125e008 */
  goto L_1125e008;
L_1125dfb6:;
  /* 1125dfb6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125dfb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dfbc push ecx */
  push32((uint32_t)(ECX));
  /* 1125dfbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125dfc0 push edx */
  push32((uint32_t)(EDX));
  /* 1125dfc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125dfc4 push eax */
  push32((uint32_t)(EAX));
  /* 1125dfc5 call 0x112517a0 */
  push32(0x1125dfcau); f_112517a0();
  /* 1125dfca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dfcd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125dfd0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dfd3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1125dfd7 mov eax, 1 */
  EAX = (0x1u);
  /* 1125dfdc jmp 0x1125e01e */
  goto L_1125e01e;
L_1125dfde:;
  /* 1125dfde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125dfe1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125dfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dfe7 cmp eax, dword ptr [edx + 0x1127fb40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1127fb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dfed jae 0x1125dffa */
  if (!C.cf) goto L_1125dffa;
  /* 1125dfef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125dff2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dff5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125dff8 jmp 0x1125e003 */
  goto L_1125e003;
L_1125dffa:;
  /* 1125dffa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125dffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e000 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125e003:;
  /* 1125e003 jmp 0x1125debb */
  goto L_1125debb;
L_1125e008:;
  /* 1125e008 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125e00b push eax */
  push32((uint32_t)(EAX));
  /* 1125e00c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125e00f push ecx */
  push32((uint32_t)(ECX));
  /* 1125e010 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e013 push edx */
  push32((uint32_t)(EDX));
  /* 1125e014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e017 push eax */
  push32((uint32_t)(EAX));
  /* 1125e018 call dword ptr [0x11283360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283360))), 0x1125e01eu);
L_1125e01e:;
  /* 1125e01e mov esp, ebp */
  ESP = (EBP);
  /* 1125e020 pop ebp */
  EBP = (pop32());
  /* 1125e021 ret 0x10 */
  ESPCHK(0x1125dea0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001e030 @ 0x1125e030 (118 bytes, 42 insns) */
void f_1125e030(void) {
  FTRACE(0x1125e030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e030 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e031 mov ebp, esp */
  EBP = (ESP);
  /* 1125e033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e036 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1125e03d:;
  /* 1125e03d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e040 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125e042 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1125e045 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125e049 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e04c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e04f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125e052 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125e054 je 0x1125e09f */
  if (C.zf) goto L_1125e09f;
  /* 1125e056 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125e05a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e05d jl 0x1125e072 */
  if ((C.sf!=C.of)) goto L_1125e072;
  /* 1125e05f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125e063 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e066 jg 0x1125e072 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e072;
  /* 1125e068 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1125e06b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1125e06d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1125e070 jmp 0x1125e08c */
  goto L_1125e08c;
L_1125e072:;
  /* 1125e072 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125e076 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e079 jl 0x1125e08c */
  if ((C.sf!=C.of)) goto L_1125e08c;
  /* 1125e07b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125e07f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e082 jg 0x1125e08c */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e08c;
  /* 1125e084 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1125e087 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1125e089 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1125e08c:;
  /* 1125e08c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e08f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1125e092 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125e096 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1125e09a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125e09d jmp 0x1125e03d */
  goto L_1125e03d;
L_1125e09f:;
  /* 1125e09f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e0a2 mov esp, ebp */
  ESP = (EBP);
  /* 1125e0a4 pop ebp */
  EBP = (pop32());
  /* 1125e0a5 ret  */
  ESPCHK(0x1125e030u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1125e0b0 (101 bytes, 36 insns) */
void f_1125e0b0(void) {
  FTRACE(0x1125e0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1125e0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e0b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125e0bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e0c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125e0c2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1125e0c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e0c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e0cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1125e0ce:;
  /* 1125e0ce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1125e0d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e0d5 jl 0x1125e0e0 */
  if ((C.sf!=C.of)) goto L_1125e0e0;
  /* 1125e0d7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1125e0db cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e0de jle 0x1125e0f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1125e0f2;
L_1125e0e0:;
  /* 1125e0e0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1125e0e4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e0e7 jl 0x1125e10e */
  if ((C.sf!=C.of)) goto L_1125e10e;
  /* 1125e0e9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1125e0ed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e0f0 jg 0x1125e10e */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e10e;
L_1125e0f2:;
  /* 1125e0f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e0f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e0f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125e0fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e0fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125e100 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1125e103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e106 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e109 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1125e10c jmp 0x1125e0ce */
  goto L_1125e0ce;
L_1125e10e:;
  /* 1125e10e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e111 mov esp, ebp */
  ESP = (EBP);
  /* 1125e113 pop ebp */
  EBP = (pop32());
  /* 1125e114 ret  */
  ESPCHK(0x1125e0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e120 @ 0x1125e120 (1085 bytes, 299 insns) */
void f_1125e120(void) {
  FTRACE(0x1125e120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e120 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e121 mov ebp, esp */
  EBP = (ESP);
  /* 1125e123 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e126 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1125e12c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125e133 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1125e13a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125e141 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125e148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e14b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 1125e14f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 1125e153 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e156 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 1125e15a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 1125e15e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125e161 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e167 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125e16a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e170 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1125e172 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1125e178 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 1125e17c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 1125e180 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 1125e184 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 1125e188 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 1125e18c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 1125e191 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 1125e195 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125e198 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e19e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125e1a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e1a6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e1a8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 1125e1ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125e1af and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e1b5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e1bb jge 0x1125e1dd */
  if ((C.sf==C.of)) goto L_1125e1dd;
  /* 1125e1bd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125e1c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e1c6 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e1cc jge 0x1125e1dd */
  if ((C.sf==C.of)) goto L_1125e1dd;
  /* 1125e1ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125e1d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e1d6 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e1db jle 0x1125e214 */
  if ((C.zf||C.sf!=C.of)) goto L_1125e214;
L_1125e1dd:;
  /* 1125e1dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125e1e0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e1e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125e1e8 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e1ea and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1125e1f0 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e1f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e1f9 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1125e1fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e1ff mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1125e206 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e209 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1125e20f jmp 0x1125e559 */
  goto L_1125e559;
L_1125e214:;
  /* 1125e214 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125e217 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e21d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e223 jg 0x1125e247 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e247;
  /* 1125e225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e228 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1125e22f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e232 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1125e239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e23c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 1125e242 jmp 0x1125e559 */
  goto L_1125e559;
L_1125e247:;
  /* 1125e247 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125e24a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e24f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125e251 jne 0x1125e28d */
  if (!C.zf) goto L_1125e28d;
  /* 1125e253 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e257 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125e25b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 1125e25f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e262 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1125e265 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125e26c jne 0x1125e28d */
  if (!C.zf) goto L_1125e28d;
  /* 1125e26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e271 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e275 jne 0x1125e28d */
  if (!C.zf) goto L_1125e28d;
  /* 1125e277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e27a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e27d jne 0x1125e28d */
  if (!C.zf) goto L_1125e28d;
  /* 1125e27f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e282 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 1125e288 jmp 0x1125e559 */
  goto L_1125e559;
L_1125e28d:;
  /* 1125e28d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125e290 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125e298 jne 0x1125e2e9 */
  if (!C.zf) goto L_1125e2e9;
  /* 1125e29a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e29e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125e2a2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 1125e2a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e2a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125e2ac and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e2b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125e2b4 jne 0x1125e2e9 */
  if (!C.zf) goto L_1125e2e9;
  /* 1125e2b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e2b9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e2bd jne 0x1125e2e9 */
  if (!C.zf) goto L_1125e2e9;
  /* 1125e2bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e2c2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e2c5 jne 0x1125e2e9 */
  if (!C.zf) goto L_1125e2e9;
  /* 1125e2c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e2ca mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 1125e2d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e2d4 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1125e2db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e2de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125e2e4 jmp 0x1125e559 */
  goto L_1125e559;
L_1125e2e9:;
  /* 1125e2e9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1125e2f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1125e2f7 jmp 0x1125e302 */
  goto L_1125e302;
L_1125e2f9:;
  /* 1125e2f9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125e2fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e2ff mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_1125e302:;
  /* 1125e302 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e306 jge 0x1125e3c1 */
  if ((C.sf==C.of)) goto L_1125e3c1;
  /* 1125e30c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125e30f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1125e311 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1125e314 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 1125e31b mov eax, 5 */
  EAX = (0x5u);
  /* 1125e320 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e323 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 1125e326 jmp 0x1125e331 */
  goto L_1125e331;
L_1125e328:;
  /* 1125e328 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1125e32b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e32e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_1125e331:;
  /* 1125e331 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e335 jle 0x1125e3b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1125e3b3;
  /* 1125e337 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e33a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e33d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1125e340 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e343 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e346 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 1125e349 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125e34c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 1125e350 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1125e353 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1125e356 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125e358 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 1125e35b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125e35e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125e360 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1125e363 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125e366 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 1125e369 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1125e36c push ecx */
  push32((uint32_t)(ECX));
  /* 1125e36d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 1125e370 push edx */
  push32((uint32_t)(EDX));
  /* 1125e371 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1125e374 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125e376 push ecx */
  push32((uint32_t)(ECX));
  /* 1125e377 call 0x11259ba0 */
  push32(0x1125e37cu); f_11259ba0();
  /* 1125e37c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e37f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 1125e382 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e386 je 0x1125e39c */
  if (C.zf) goto L_1125e39c;
  /* 1125e388 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125e38b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 1125e390 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125e394 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125e397 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_1125e39c:;
  /* 1125e39c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125e39f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e3a2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1125e3a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e3a8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e3ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125e3ae jmp 0x1125e328 */
  goto L_1125e328;
L_1125e3b3:;
  /* 1125e3b3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125e3b6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e3b9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1125e3bc jmp 0x1125e2f9 */
  goto L_1125e2f9;
L_1125e3c1:;
  /* 1125e3c1 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e3c5 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1125e3ca mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_1125e3ce:;
  /* 1125e3ce movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 1125e3d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125e3d4 jle 0x1125e3fd */
  if ((C.zf||C.sf!=C.of)) goto L_1125e3fd;
  /* 1125e3d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e3d9 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1125e3df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125e3e1 jne 0x1125e3fd */
  if (!C.zf) goto L_1125e3fd;
  /* 1125e3e3 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1125e3e6 push edx */
  push32((uint32_t)(EDX));
  /* 1125e3e7 call 0x11259c90 */
  push32(0x1125e3ecu); f_11259c90();
  /* 1125e3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e3ef mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e3f3 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1125e3f7 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 1125e3fb jmp 0x1125e3ce */
  goto L_1125e3ce;
L_1125e3fd:;
  /* 1125e3fd movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 1125e401 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125e403 jg 0x1125e45d */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e45d;
  /* 1125e405 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e409 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1125e40d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_1125e411:;
  /* 1125e411 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 1125e415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125e417 jge 0x1125e44c */
  if ((C.sf==C.of)) goto L_1125e44c;
  /* 1125e419 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125e41c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e422 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125e425 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125e427 je 0x1125e432 */
  if (C.zf) goto L_1125e432;
  /* 1125e429 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e42c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e42f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125e432:;
  /* 1125e432 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1125e435 push eax */
  push32((uint32_t)(EAX));
  /* 1125e436 call 0x11259cf0 */
  push32(0x1125e43bu); f_11259cf0();
  /* 1125e43b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e43e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e442 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125e446 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 1125e44a jmp 0x1125e411 */
  goto L_1125e411;
L_1125e44c:;
  /* 1125e44c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e450 je 0x1125e45d */
  if (C.zf) goto L_1125e45d;
  /* 1125e452 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 1125e456 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1125e459 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_1125e45d:;
  /* 1125e45d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125e460 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e465 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e46a jg 0x1125e47d */
  if ((!C.zf&&C.sf==C.of)) goto L_1125e47d;
  /* 1125e46c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125e46f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e475 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e47b jne 0x1125e4de */
  if (!C.zf) goto L_1125e4de;
L_1125e47d:;
  /* 1125e47d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e481 jne 0x1125e4d5 */
  if (!C.zf) goto L_1125e4d5;
  /* 1125e483 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 1125e48a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e48e jne 0x1125e4ca */
  if (!C.zf) goto L_1125e4ca;
  /* 1125e490 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 1125e497 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 1125e49a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e4a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e4a6 jne 0x1125e4bc */
  if (!C.zf) goto L_1125e4bc;
  /* 1125e4a8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 1125e4ae mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 1125e4b2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125e4b6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 1125e4ba jmp 0x1125e4c8 */
  goto L_1125e4c8;
L_1125e4bc:;
  /* 1125e4bc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 1125e4c0 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125e4c4 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_1125e4c8:;
  /* 1125e4c8 jmp 0x1125e4d3 */
  goto L_1125e4d3;
L_1125e4ca:;
  /* 1125e4ca mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 1125e4cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e4d0 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_1125e4d3:;
  /* 1125e4d3 jmp 0x1125e4de */
  goto L_1125e4de;
L_1125e4d5:;
  /* 1125e4d5 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 1125e4d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e4db mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_1125e4de:;
  /* 1125e4de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125e4e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e4e7 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e4ed jl 0x1125e523 */
  if ((C.sf!=C.of)) goto L_1125e523;
  /* 1125e4ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125e4f2 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e4f8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125e4fa sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e4fc and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 1125e502 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e50b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1125e50e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e511 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1125e518 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e51b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 1125e521 jmp 0x1125e559 */
  goto L_1125e559;
L_1125e523:;
  /* 1125e523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e526 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 1125e52a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 1125e52d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e530 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125e533 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 1125e536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e539 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e53c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 1125e53f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125e542 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e547 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125e54a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125e550 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1125e552 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e555 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_1125e559:;
  /* 1125e559 mov esp, ebp */
  ESP = (EBP);
  /* 1125e55b pop ebp */
  EBP = (pop32());
  /* 1125e55c ret  */
  ESPCHK(0x1125e120u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e560 @ 0x1125e560 (195 bytes, 67 insns) */
void f_1125e560(void) {
  FTRACE(0x1125e560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e560 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e561 mov ebp, esp */
  EBP = (ESP);
  /* 1125e563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e566 mov eax, 0x112803c0 */
  EAX = (0x112803c0u);
  /* 1125e56b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e56e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125e571 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e575 jne 0x1125e57c */
  if (!C.zf) goto L_1125e57c;
  /* 1125e577 jmp 0x1125e61f */
  goto L_1125e61f;
L_1125e57c:;
  /* 1125e57c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e580 jge 0x1125e595 */
  if ((C.sf==C.of)) goto L_1125e595;
  /* 1125e582 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e585 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125e587 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1125e58a mov edx, 0x11280520 */
  EDX = (0x11280520u);
  /* 1125e58f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e592 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125e595:;
  /* 1125e595 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e599 jne 0x1125e5a3 */
  if (!C.zf) goto L_1125e5a3;
  /* 1125e59b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e59e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_1125e5a3:;
  /* 1125e5a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e5a7 je 0x1125e61f */
  if (C.zf) goto L_1125e61f;
  /* 1125e5a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e5ac add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e5af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125e5b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e5b5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 1125e5b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1125e5bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e5be sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1125e5c1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1125e5c4 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e5c8 jne 0x1125e5cc */
  if (!C.zf) goto L_1125e5cc;
  /* 1125e5ca jmp 0x1125e5a3 */
  goto L_1125e5a3;
L_1125e5cc:;
  /* 1125e5cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125e5cf imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125e5d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e5d5 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e5d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125e5da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e5dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125e5df mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 1125e5e2 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e5e8 jl 0x1125e60d */
  if ((C.sf!=C.of)) goto L_1125e60d;
  /* 1125e5ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e5ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125e5ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125e5f2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1125e5f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1125e5f8 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1125e5fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1125e5fe mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 1125e601 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e604 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 1125e607 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1125e60a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1125e60d:;
  /* 1125e60d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e610 push edx */
  push32((uint32_t)(EDX));
  /* 1125e611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e614 push eax */
  push32((uint32_t)(EAX));
  /* 1125e615 call 0x1125e120 */
  push32(0x1125e61au); f_1125e120();
  /* 1125e61a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e61d jmp 0x1125e5a3 */
  goto L_1125e5a3;
L_1125e61f:;
  /* 1125e61f mov esp, ebp */
  ESP = (EBP);
  /* 1125e621 pop ebp */
  EBP = (pop32());
  /* 1125e622 ret  */
  ESPCHK(0x1125e560u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x1125e630 (52 bytes, 19 insns) */
void f_1125e630(void) {
  FTRACE(0x1125e630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e630 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1125e634 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1125e638 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125e63a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1125e63e jne 0x1125e649 */
  if (!C.zf) goto L_1125e649;
  /* 1125e640 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1125e644 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1125e646 ret 0x10 */
  ESPCHK(0x1125e630u, _esp0);
  ESP += 20; return;
L_1125e649:;
  /* 1125e649 push ebx */
  push32((uint32_t)(EBX));
  /* 1125e64a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1125e64c mov ebx, eax */
  EBX = (EAX);
  /* 1125e64e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1125e652 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1125e656 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e658 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1125e65c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1125e65e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e660 pop ebx */
  EBX = (pop32());
  /* 1125e661 ret 0x10 */
  ESPCHK(0x1125e630u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x1125e670 (79 bytes, 32 insns) */
void f_1125e670(void) {
  FTRACE(0x1125e670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e670 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e671 mov ebp, esp */
  EBP = (ESP);
  /* 1125e673 push ecx */
  push32((uint32_t)(ECX));
  /* 1125e674 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e678 jne 0x1125e67e */
  if (!C.zf) goto L_1125e67e;
  /* 1125e67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125e67c jmp 0x1125e6bb */
  goto L_1125e6bb;
L_1125e67e:;
  /* 1125e67e mov eax, dword ptr [0x11282af8] */
  EAX = (r32((uint32_t)(0x11282af8)));
  /* 1125e683 push eax */
  push32((uint32_t)(EAX));
  /* 1125e684 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125e687 push ecx */
  push32((uint32_t)(ECX));
  /* 1125e688 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e68b push edx */
  push32((uint32_t)(EDX));
  /* 1125e68c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125e68f push eax */
  push32((uint32_t)(EAX));
  /* 1125e690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e693 push ecx */
  push32((uint32_t)(ECX));
  /* 1125e694 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125e696 mov edx, dword ptr [0x11282d84] */
  EDX = (r32((uint32_t)(0x11282d84)));
  /* 1125e69c push edx */
  push32((uint32_t)(EDX));
  /* 1125e69d call 0x11260c30 */
  push32(0x1125e6a2u); f_11260c30();
  /* 1125e6a2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e6a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125e6a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e6ac jne 0x1125e6b5 */
  if (!C.zf) goto L_1125e6b5;
  /* 1125e6ae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 1125e6b3 jmp 0x1125e6bb */
  goto L_1125e6bb;
L_1125e6b5:;
  /* 1125e6b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e6b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1125e6bb:;
  /* 1125e6bb mov esp, ebp */
  ESP = (EBP);
  /* 1125e6bd pop ebp */
  EBP = (pop32());
  /* 1125e6be ret  */
  ESPCHK(0x1125e670u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e6c0 @ 0x1125e6c0 (174 bytes, 66 insns) */
void f_1125e6c0(void) {
  FTRACE(0x1125e6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1125e6c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e6c6 mov eax, dword ptr [0x112814ac] */
  EAX = (r32((uint32_t)(0x112814ac)));
  /* 1125e6cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125e6ce:;
  /* 1125e6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e6d1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e6d4 je 0x1125e768 */
  if (C.zf) goto L_1125e768;
  /* 1125e6da push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e6dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e6de push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e6e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e6e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1125e6e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e6e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125e6e9 push eax */
  push32((uint32_t)(EAX));
  /* 1125e6ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e6ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1125e6ee call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x1125e6f4u);
  /* 1125e6f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125e6f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e6fb jne 0x1125e702 */
  if (!C.zf) goto L_1125e702;
  /* 1125e6fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e700 jmp 0x1125e76a */
  goto L_1125e76a;
L_1125e702:;
  /* 1125e702 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1125e704 push 0x1127ca3c */
  push32((uint32_t)(0x1127ca3cu));
  /* 1125e709 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125e70b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e70e push ecx */
  push32((uint32_t)(ECX));
  /* 1125e70f call 0x1124c820 */
  push32(0x1125e714u); f_1124c820();
  /* 1125e714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e717 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125e71a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e71e jne 0x1125e725 */
  if (!C.zf) goto L_1125e725;
  /* 1125e720 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e723 jmp 0x1125e76a */
  goto L_1125e76a;
L_1125e725:;
  /* 1125e725 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e727 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e72c push edx */
  push32((uint32_t)(EDX));
  /* 1125e72d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e730 push eax */
  push32((uint32_t)(EAX));
  /* 1125e731 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1125e733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e736 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125e738 push edx */
  push32((uint32_t)(EDX));
  /* 1125e739 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e73b push 1 */
  push32((uint32_t)(0x1u));
  /* 1125e73d call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x1125e743u);
  /* 1125e743 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125e745 jne 0x1125e74c */
  if (!C.zf) goto L_1125e74c;
  /* 1125e747 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e74a jmp 0x1125e76a */
  goto L_1125e76a;
L_1125e74c:;
  /* 1125e74c push 0 */
  push32((uint32_t)(0x0u));
  /* 1125e74e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e751 push eax */
  push32((uint32_t)(EAX));
  /* 1125e752 call 0x11261080 */
  push32(0x1125e757u); f_11261080();
  /* 1125e757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e75a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e75d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e760 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125e763 jmp 0x1125e6ce */
  goto L_1125e6ce;
L_1125e768:;
  /* 1125e768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125e76a:;
  /* 1125e76a mov esp, ebp */
  ESP = (EBP);
  /* 1125e76c pop ebp */
  EBP = (pop32());
  /* 1125e76d ret  */
  ESPCHK(0x1125e6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e770 @ 0x1125e770 (482 bytes, 138 insns) */
void f_1125e770(void) {
  FTRACE(0x1125e770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e770 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e771 mov ebp, esp */
  EBP = (ESP);
  /* 1125e773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e776 push esi */
  push32((uint32_t)(ESI));
  /* 1125e777 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1125e77e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1125e780 call 0x1124c720 */
  push32(0x1125e785u); f_1124c720();
  /* 1125e785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e788 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125e78f jmp 0x1125e79a */
  goto L_1125e79a;
L_1125e791:;
  /* 1125e791 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e797 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1125e79a:;
  /* 1125e79a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e79e jge 0x1125e940 */
  if ((C.sf==C.of)) goto L_1125e940;
  /* 1125e7a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e7a7 cmp dword ptr [ecx*4 + 0x11282dc0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11282dc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e7af je 0x1125e8a6 */
  if (C.zf) goto L_1125e8a6;
  /* 1125e7b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e7b8 mov eax, dword ptr [edx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1125e7bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125e7c2 jmp 0x1125e7cd */
  goto L_1125e7cd;
L_1125e7c4:;
  /* 1125e7c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e7c7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e7ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125e7cd:;
  /* 1125e7cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e7d0 mov eax, dword ptr [edx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1125e7d7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e7dc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e7df jae 0x1125e896 */
  if (!C.cf) goto L_1125e896;
  /* 1125e7e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e7e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1125e7ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125e7ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125e7f1 jne 0x1125e891 */
  if (!C.zf) goto L_1125e891;
  /* 1125e7f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e7fa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e7fe jne 0x1125e839 */
  if (!C.zf) goto L_1125e839;
  /* 1125e800 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1125e802 call 0x1124c720 */
  push32(0x1125e807u); f_1124c720();
  /* 1125e807 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e80a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e80d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e811 jne 0x1125e82f */
  if (!C.zf) goto L_1125e82f;
  /* 1125e813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e816 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e819 push edx */
  push32((uint32_t)(EDX));
  /* 1125e81a call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1125e820u);
  /* 1125e820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e823 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125e826 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e82c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1125e82f:;
  /* 1125e82f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1125e831 call 0x1124c7c0 */
  push32(0x1125e836u); f_1124c7c0();
  /* 1125e836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125e839:;
  /* 1125e839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e83c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e83f push eax */
  push32((uint32_t)(EAX));
  /* 1125e840 call dword ptr [0x11283450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283450))), 0x1125e846u);
  /* 1125e846 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e849 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1125e84d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125e850 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125e852 je 0x1125e866 */
  if (C.zf) goto L_1125e866;
  /* 1125e854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e857 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e85a push eax */
  push32((uint32_t)(EAX));
  /* 1125e85b call dword ptr [0x11283420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283420))), 0x1125e861u);
  /* 1125e861 jmp 0x1125e7c4 */
  goto L_1125e7c4;
L_1125e866:;
  /* 1125e866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e869 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1125e86f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e872 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125e875 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e87b sub eax, dword ptr [edx*4 + 0x11282dc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11282dc0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125e882 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125e883 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1125e888 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125e88a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e88c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125e88f jmp 0x1125e896 */
  goto L_1125e896;
L_1125e891:;
  /* 1125e891 jmp 0x1125e7c4 */
  goto L_1125e7c4;
L_1125e896:;
  /* 1125e896 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e89a je 0x1125e8a1 */
  if (C.zf) goto L_1125e8a1;
  /* 1125e89c jmp 0x1125e940 */
  goto L_1125e940;
L_1125e8a1:;
  /* 1125e8a1 jmp 0x1125e93b */
  goto L_1125e93b;
L_1125e8a6:;
  /* 1125e8a6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1125e8a8 push 0x1127ca48 */
  push32((uint32_t)(0x1127ca48u));
  /* 1125e8ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1125e8af push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1125e8b4 call 0x1124c820 */
  push32(0x1125e8b9u); f_1124c820();
  /* 1125e8b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e8bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125e8bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e8c3 je 0x1125e939 */
  if (C.zf) goto L_1125e939;
  /* 1125e8c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e8c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e8cb mov dword ptr [eax*4 + 0x11282dc0], ecx */
  w32((uint32_t)(EAX*4 + 0x11282dc0), (ECX));
  /* 1125e8d2 mov edx, dword ptr [0x11282efc] */
  EDX = (r32((uint32_t)(0x11282efc)));
  /* 1125e8d8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e8db mov dword ptr [0x11282efc], edx */
  w32((uint32_t)(0x11282efc), (EDX));
  /* 1125e8e1 jmp 0x1125e8ec */
  goto L_1125e8ec;
L_1125e8e3:;
  /* 1125e8e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e8e6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e8e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125e8ec:;
  /* 1125e8ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e8ef mov edx, dword ptr [ecx*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125e8f6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e8fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e8ff jae 0x1125e924 */
  if (!C.cf) goto L_1125e924;
  /* 1125e901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e904 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1125e908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e90b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1125e911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e914 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1125e918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125e91b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1125e922 jmp 0x1125e8e3 */
  goto L_1125e8e3;
L_1125e924:;
  /* 1125e924 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125e927 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125e92a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125e92d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e930 push edx */
  push32((uint32_t)(EDX));
  /* 1125e931 call 0x1125ec80 */
  push32(0x1125e936u); f_1125ec80();
  /* 1125e936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125e939:;
  /* 1125e939 jmp 0x1125e940 */
  goto L_1125e940;
L_1125e93b:;
  /* 1125e93b jmp 0x1125e791 */
  goto L_1125e791;
L_1125e940:;
  /* 1125e940 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1125e942 call 0x1124c7c0 */
  push32(0x1125e947u); f_1124c7c0();
  /* 1125e947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125e94a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125e94d pop esi */
  ESI = (pop32());
  /* 1125e94e mov esp, ebp */
  ESP = (EBP);
  /* 1125e950 pop ebp */
  EBP = (pop32());
  /* 1125e951 ret  */
  ESPCHK(0x1125e770u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1125e960 (183 bytes, 57 insns) */
void f_1125e960(void) {
  FTRACE(0x1125e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125e960 push ebp */
  push32((uint32_t)(EBP));
  /* 1125e961 mov ebp, esp */
  EBP = (ESP);
  /* 1125e963 push ecx */
  push32((uint32_t)(ECX));
  /* 1125e964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e967 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e96d jae 0x1125e9fa */
  if (!C.cf) goto L_1125e9fa;
  /* 1125e973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e976 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125e979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e97c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125e97f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125e982 mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125e989 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e98d jne 0x1125e9fa */
  if (!C.zf) goto L_1125e9fa;
  /* 1125e98f cmp dword ptr [0x11281408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e996 jne 0x1125e9da */
  if (!C.zf) goto L_1125e9da;
  /* 1125e998 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e99b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125e99e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e9a2 je 0x1125e9b2 */
  if (C.zf) goto L_1125e9b2;
  /* 1125e9a4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e9a8 je 0x1125e9c0 */
  if (C.zf) goto L_1125e9c0;
  /* 1125e9aa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125e9ae je 0x1125e9ce */
  if (C.zf) goto L_1125e9ce;
  /* 1125e9b0 jmp 0x1125e9da */
  goto L_1125e9da;
L_1125e9b2:;
  /* 1125e9b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e9b5 push edx */
  push32((uint32_t)(EDX));
  /* 1125e9b6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1125e9b8 call dword ptr [0x11283350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283350))), 0x1125e9beu);
  /* 1125e9be jmp 0x1125e9da */
  goto L_1125e9da;
L_1125e9c0:;
  /* 1125e9c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e9c3 push eax */
  push32((uint32_t)(EAX));
  /* 1125e9c4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1125e9c6 call dword ptr [0x11283350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283350))), 0x1125e9ccu);
  /* 1125e9cc jmp 0x1125e9da */
  goto L_1125e9da;
L_1125e9ce:;
  /* 1125e9ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e9d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1125e9d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1125e9d4 call dword ptr [0x11283350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283350))), 0x1125e9dau);
L_1125e9da:;
  /* 1125e9da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e9dd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1125e9e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125e9e3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125e9e6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125e9e9 mov ecx, dword ptr [edx*4 + 0x11282dc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1125e9f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125e9f3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1125e9f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125e9f8 jmp 0x1125ea13 */
  goto L_1125ea13;
L_1125e9fa:;
  /* 1125e9fa call 0x11257eb0 */
  push32(0x1125e9ffu); f_11257eb0();
  /* 1125e9ff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125ea05 call 0x11257ec0 */
  push32(0x1125ea0au); f_11257ec0();
  /* 1125ea0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125ea10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1125ea13:;
  /* 1125ea13 mov esp, ebp */
  ESP = (EBP);
  /* 1125ea15 pop ebp */
  EBP = (pop32());
  /* 1125ea16 ret  */
  ESPCHK(0x1125e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ea20 @ 0x1125ea20 (216 bytes, 63 insns) */
void f_1125ea20(void) {
  FTRACE(0x1125ea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ea20 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ea21 mov ebp, esp */
  EBP = (ESP);
  /* 1125ea23 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ea24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ea27 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ea2d jae 0x1125eadb */
  if (!C.cf) goto L_1125eadb;
  /* 1125ea33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ea36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125ea39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ea3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125ea3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ea42 mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125ea49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1125ea4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125ea51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ea53 je 0x1125eadb */
  if (C.zf) goto L_1125eadb;
  /* 1125ea59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ea5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1125ea5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ea62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ea65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ea68 mov ecx, dword ptr [edx*4 + 0x11282dc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1125ea6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ea73 je 0x1125eadb */
  if (C.zf) goto L_1125eadb;
  /* 1125ea75 cmp dword ptr [0x11281408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ea7c jne 0x1125eaba */
  if (!C.zf) goto L_1125eaba;
  /* 1125ea7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ea81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125ea84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ea88 je 0x1125ea98 */
  if (C.zf) goto L_1125ea98;
  /* 1125ea8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ea8e je 0x1125eaa4 */
  if (C.zf) goto L_1125eaa4;
  /* 1125ea90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ea94 je 0x1125eab0 */
  if (C.zf) goto L_1125eab0;
  /* 1125ea96 jmp 0x1125eaba */
  goto L_1125eaba;
L_1125ea98:;
  /* 1125ea98 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125ea9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1125ea9c call dword ptr [0x11283350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283350))), 0x1125eaa2u);
  /* 1125eaa2 jmp 0x1125eaba */
  goto L_1125eaba;
L_1125eaa4:;
  /* 1125eaa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125eaa6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1125eaa8 call dword ptr [0x11283350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283350))), 0x1125eaaeu);
  /* 1125eaae jmp 0x1125eaba */
  goto L_1125eaba;
L_1125eab0:;
  /* 1125eab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125eab2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1125eab4 call dword ptr [0x11283350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283350))), 0x1125eabau);
L_1125eaba:;
  /* 1125eaba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eabd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125eac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eac3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125eac6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125eac9 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125ead0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1125ead7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125ead9 jmp 0x1125eaf4 */
  goto L_1125eaf4;
L_1125eadb:;
  /* 1125eadb call 0x11257eb0 */
  push32(0x1125eae0u); f_11257eb0();
  /* 1125eae0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125eae6 call 0x11257ec0 */
  push32(0x1125eaebu); f_11257ec0();
  /* 1125eaeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125eaf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1125eaf4:;
  /* 1125eaf4 mov esp, ebp */
  ESP = (EBP);
  /* 1125eaf6 pop ebp */
  EBP = (pop32());
  /* 1125eaf7 ret  */
  ESPCHK(0x1125ea20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb00 @ 0x1125eb00 (102 bytes, 30 insns) */
void f_1125eb00(void) {
  FTRACE(0x1125eb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125eb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1125eb01 mov ebp, esp */
  EBP = (ESP);
  /* 1125eb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eb06 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125eb0c jae 0x1125eb4b */
  if (!C.cf) goto L_1125eb4b;
  /* 1125eb0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eb11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125eb14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eb17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125eb1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125eb1d mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125eb24 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1125eb29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125eb2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125eb2e je 0x1125eb4b */
  if (C.zf) goto L_1125eb4b;
  /* 1125eb30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eb33 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1125eb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eb39 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125eb3c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125eb3f mov ecx, dword ptr [edx*4 + 0x11282dc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1125eb46 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1125eb49 jmp 0x1125eb64 */
  goto L_1125eb64;
L_1125eb4b:;
  /* 1125eb4b call 0x11257eb0 */
  push32(0x1125eb50u); f_11257eb0();
  /* 1125eb50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125eb56 call 0x11257ec0 */
  push32(0x1125eb5bu); f_11257ec0();
  /* 1125eb5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125eb61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1125eb64:;
  /* 1125eb64 pop ebp */
  EBP = (pop32());
  /* 1125eb65 ret  */
  ESPCHK(0x1125eb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb70 @ 0x1125eb70 (260 bytes, 83 insns) */
void f_1125eb70(void) {
  FTRACE(0x1125eb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125eb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1125eb71 mov ebp, esp */
  EBP = (ESP);
  /* 1125eb73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125eb76 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125eb7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125eb7d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1125eb80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125eb82 je 0x1125eb8d */
  if (C.zf) goto L_1125eb8d;
  /* 1125eb84 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125eb87 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1125eb8a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1125eb8d:;
  /* 1125eb8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125eb90 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1125eb96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125eb98 je 0x1125eba2 */
  if (C.zf) goto L_1125eba2;
  /* 1125eb9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125eb9d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1125eb9f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1125eba2:;
  /* 1125eba2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125eba5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1125ebab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ebad je 0x1125ebb8 */
  if (C.zf) goto L_1125ebb8;
  /* 1125ebaf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125ebb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1125ebb5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1125ebb8:;
  /* 1125ebb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ebbb push eax */
  push32((uint32_t)(EAX));
  /* 1125ebbc call dword ptr [0x112833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833e8))), 0x1125ebc2u);
  /* 1125ebc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125ebc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ebc9 jne 0x1125ebe2 */
  if (!C.zf) goto L_1125ebe2;
  /* 1125ebcb call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x1125ebd1u);
  /* 1125ebd1 push eax */
  push32((uint32_t)(EAX));
  /* 1125ebd2 call 0x11257e10 */
  push32(0x1125ebd7u); f_11257e10();
  /* 1125ebd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ebda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ebdd jmp 0x1125ec70 */
  goto L_1125ec70;
L_1125ebe2:;
  /* 1125ebe2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ebe6 jne 0x1125ebf3 */
  if (!C.zf) goto L_1125ebf3;
  /* 1125ebe8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125ebeb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1125ebee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1125ebf1 jmp 0x1125ec02 */
  goto L_1125ec02;
L_1125ebf3:;
  /* 1125ebf3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ebf7 jne 0x1125ec02 */
  if (!C.zf) goto L_1125ec02;
  /* 1125ebf9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125ebfc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1125ebff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1125ec02:;
  /* 1125ec02 call 0x1125e770 */
  push32(0x1125ec07u); f_1125e770();
  /* 1125ec07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125ec0a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ec0e jne 0x1125ec2b */
  if (!C.zf) goto L_1125ec2b;
  /* 1125ec10 call 0x11257eb0 */
  push32(0x1125ec15u); f_11257eb0();
  /* 1125ec15 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1125ec1b call 0x11257ec0 */
  push32(0x1125ec20u); f_11257ec0();
  /* 1125ec20 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125ec26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ec29 jmp 0x1125ec70 */
  goto L_1125ec70;
L_1125ec2b:;
  /* 1125ec2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ec2e push eax */
  push32((uint32_t)(EAX));
  /* 1125ec2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ec32 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ec33 call 0x1125e960 */
  push32(0x1125ec38u); f_1125e960();
  /* 1125ec38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ec3b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125ec3e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1125ec41 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1125ec44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ec47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125ec4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ec4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ec50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ec53 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125ec5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1125ec5d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1125ec61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ec64 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ec65 call 0x1125ed10 */
  push32(0x1125ec6au); f_1125ed10();
  /* 1125ec6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ec6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1125ec70:;
  /* 1125ec70 mov esp, ebp */
  ESP = (EBP);
  /* 1125ec72 pop ebp */
  EBP = (pop32());
  /* 1125ec73 ret  */
  ESPCHK(0x1125eb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ec80 @ 0x1125ec80 (134 bytes, 44 insns) */
void f_1125ec80(void) {
  FTRACE(0x1125ec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ec80 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ec81 mov ebp, esp */
  EBP = (ESP);
  /* 1125ec83 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ec84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ec87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125ec8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ec8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ec90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ec93 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125ec9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ec9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125ec9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125eca2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125eca6 jne 0x1125ece1 */
  if (!C.zf) goto L_1125ece1;
  /* 1125eca8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1125ecaa call 0x1124c720 */
  push32(0x1125ecafu); f_1124c720();
  /* 1125ecaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ecb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ecb5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ecb9 jne 0x1125ecd7 */
  if (!C.zf) goto L_1125ecd7;
  /* 1125ecbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ecbe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ecc1 push edx */
  push32((uint32_t)(EDX));
  /* 1125ecc2 call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1125ecc8u);
  /* 1125ecc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125eccb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125ecce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ecd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ecd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1125ecd7:;
  /* 1125ecd7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1125ecd9 call 0x1124c7c0 */
  push32(0x1125ecdeu); f_1124c7c0();
  /* 1125ecde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125ece1:;
  /* 1125ece1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ece4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125ece7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ecea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125eced imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ecf0 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125ecf7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1125ecfb push eax */
  push32((uint32_t)(EAX));
  /* 1125ecfc call dword ptr [0x11283450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283450))), 0x1125ed02u);
  /* 1125ed02 mov esp, ebp */
  ESP = (EBP);
  /* 1125ed04 pop ebp */
  EBP = (pop32());
  /* 1125ed05 ret  */
  ESPCHK(0x1125ec80u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1125ed10 (38 bytes, 13 insns) */
void f_1125ed10(void) {
  FTRACE(0x1125ed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ed10 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ed11 mov ebp, esp */
  EBP = (ESP);
  /* 1125ed13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ed16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125ed19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ed1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ed1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ed22 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125ed29 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1125ed2d push eax */
  push32((uint32_t)(EAX));
  /* 1125ed2e call dword ptr [0x11283420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283420))), 0x1125ed34u);
  /* 1125ed34 pop ebp */
  EBP = (pop32());
  /* 1125ed35 ret  */
  ESPCHK(0x1125ed10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ed40 @ 0x1125ed40 (218 bytes, 63 insns) */
void f_1125ed40(void) {
  FTRACE(0x1125ed40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ed40 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ed41 mov ebp, esp */
  EBP = (ESP);
  /* 1125ed43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ed46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125ed4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125ed4f call 0x1124c720 */
  push32(0x1125ed54u); f_1124c720();
  /* 1125ed54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ed57 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1125ed5e jmp 0x1125ed69 */
  goto L_1125ed69;
L_1125ed60:;
  /* 1125ed60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ed63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ed66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1125ed69:;
  /* 1125ed69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ed6c cmp ecx, dword ptr [0x11282ae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ed72 jge 0x1125ee09 */
  if ((C.sf==C.of)) goto L_1125ee09;
  /* 1125ed78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ed7b mov eax, dword ptr [0x11281794] */
  EAX = (r32((uint32_t)(0x11281794)));
  /* 1125ed80 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ed84 je 0x1125ee04 */
  if (C.zf) goto L_1125ee04;
  /* 1125ed86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ed89 mov edx, dword ptr [0x11281794] */
  EDX = (r32((uint32_t)(0x11281794)));
  /* 1125ed8f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1125ed92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1125ed95 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1125ed9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ed9d je 0x1125edc1 */
  if (C.zf) goto L_1125edc1;
  /* 1125ed9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125eda2 mov eax, dword ptr [0x11281794] */
  EAX = (r32((uint32_t)(0x11281794)));
  /* 1125eda7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1125edaa push ecx */
  push32((uint32_t)(ECX));
  /* 1125edab call 0x112614d0 */
  push32(0x1125edb0u); f_112614d0();
  /* 1125edb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125edb3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125edb6 je 0x1125edc1 */
  if (C.zf) goto L_1125edc1;
  /* 1125edb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125edbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125edbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125edc1:;
  /* 1125edc1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125edc5 jl 0x1125ee04 */
  if ((C.sf!=C.of)) goto L_1125ee04;
  /* 1125edc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125edca mov ecx, dword ptr [0x11281794] */
  ECX = (r32((uint32_t)(0x11281794)));
  /* 1125edd0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1125edd3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125edd6 push edx */
  push32((uint32_t)(EDX));
  /* 1125edd7 call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1125edddu);
  /* 1125eddd push 2 */
  push32((uint32_t)(0x2u));
  /* 1125eddf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ede2 mov ecx, dword ptr [0x11281794] */
  ECX = (r32((uint32_t)(0x11281794)));
  /* 1125ede8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1125edeb push edx */
  push32((uint32_t)(EDX));
  /* 1125edec call 0x1124d2b0 */
  push32(0x1125edf1u); f_1124d2b0();
  /* 1125edf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125edf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125edf7 mov ecx, dword ptr [0x11281794] */
  ECX = (r32((uint32_t)(0x11281794)));
  /* 1125edfd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1125ee04:;
  /* 1125ee04 jmp 0x1125ed60 */
  goto L_1125ed60;
L_1125ee09:;
  /* 1125ee09 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125ee0b call 0x1124c7c0 */
  push32(0x1125ee10u); f_1124c7c0();
  /* 1125ee10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ee13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ee16 mov esp, ebp */
  ESP = (EBP);
  /* 1125ee18 pop ebp */
  EBP = (pop32());
  /* 1125ee19 ret  */
  ESPCHK(0x1125ed40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ee20 @ 0x1125ee20 (68 bytes, 26 insns) */
void f_1125ee20(void) {
  FTRACE(0x1125ee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ee20 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ee21 mov ebp, esp */
  EBP = (ESP);
  /* 1125ee23 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ee24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ee28 jne 0x1125ee36 */
  if (!C.zf) goto L_1125ee36;
  /* 1125ee2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1125ee2c call 0x1125ef90 */
  push32(0x1125ee31u); f_1125ef90();
  /* 1125ee31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ee34 jmp 0x1125ee60 */
  goto L_1125ee60;
L_1125ee36:;
  /* 1125ee36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ee39 push eax */
  push32((uint32_t)(EAX));
  /* 1125ee3a call 0x1125b950 */
  push32(0x1125ee3fu); f_1125b950();
  /* 1125ee3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ee42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ee45 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ee46 call 0x1125ee70 */
  push32(0x1125ee4bu); f_1125ee70();
  /* 1125ee4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ee4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125ee51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ee54 push edx */
  push32((uint32_t)(EDX));
  /* 1125ee55 call 0x1125b9c0 */
  push32(0x1125ee5au); f_1125b9c0();
  /* 1125ee5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ee5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1125ee60:;
  /* 1125ee60 mov esp, ebp */
  ESP = (EBP);
  /* 1125ee62 pop ebp */
  EBP = (pop32());
  /* 1125ee63 ret  */
  ESPCHK(0x1125ee20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ee70 @ 0x1125ee70 (65 bytes, 26 insns) */
void f_1125ee70(void) {
  FTRACE(0x1125ee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ee70 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ee71 mov ebp, esp */
  EBP = (ESP);
  /* 1125ee73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ee76 push eax */
  push32((uint32_t)(EAX));
  /* 1125ee77 call 0x1125eec0 */
  push32(0x1125ee7cu); f_1125eec0();
  /* 1125ee7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ee7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125ee81 je 0x1125ee88 */
  if (C.zf) goto L_1125ee88;
  /* 1125ee83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ee86 jmp 0x1125eeaf */
  goto L_1125eeaf;
L_1125ee88:;
  /* 1125ee88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ee8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125ee8e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1125ee94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125ee96 je 0x1125eead */
  if (C.zf) goto L_1125eead;
  /* 1125ee98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ee9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125ee9e push ecx */
  push32((uint32_t)(ECX));
  /* 1125ee9f call 0x11261620 */
  push32(0x1125eea4u); f_11261620();
  /* 1125eea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125eea7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125eea9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125eeab jmp 0x1125eeaf */
  goto L_1125eeaf;
L_1125eead:;
  /* 1125eead xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125eeaf:;
  /* 1125eeaf pop ebp */
  EBP = (pop32());
  /* 1125eeb0 ret  */
  ESPCHK(0x1125ee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eec0 @ 0x1125eec0 (183 bytes, 62 insns) */
void f_1125eec0(void) {
  FTRACE(0x1125eec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125eec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125eec1 mov ebp, esp */
  EBP = (ESP);
  /* 1125eec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125eec6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125eecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125eed0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125eed3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125eed6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125eed9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1125eedc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125eedf jne 0x1125ef5b */
  if (!C.zf) goto L_1125ef5b;
  /* 1125eee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125eee4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1125eee7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1125eeed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125eeef je 0x1125ef5b */
  if (C.zf) goto L_1125ef5b;
  /* 1125eef1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125eef4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125eef7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1125eef9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125eefc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125eeff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ef03 jle 0x1125ef5b */
  if ((C.zf||C.sf!=C.of)) goto L_1125ef5b;
  /* 1125ef05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125ef08 push edx */
  push32((uint32_t)(EDX));
  /* 1125ef09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125ef0f push ecx */
  push32((uint32_t)(ECX));
  /* 1125ef10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef13 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1125ef16 push eax */
  push32((uint32_t)(EAX));
  /* 1125ef17 call 0x1125b3e0 */
  push32(0x1125ef1cu); f_1125b3e0();
  /* 1125ef1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ef1f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ef22 jne 0x1125ef45 */
  if (!C.zf) goto L_1125ef45;
  /* 1125ef24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125ef2a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1125ef30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125ef32 je 0x1125ef43 */
  if (C.zf) goto L_1125ef43;
  /* 1125ef34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef37 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1125ef3a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ef3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef40 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1125ef43:;
  /* 1125ef43 jmp 0x1125ef5b */
  goto L_1125ef5b;
L_1125ef45:;
  /* 1125ef45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef48 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1125ef4b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1125ef4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef51 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1125ef54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1125ef5b:;
  /* 1125ef5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef61 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1125ef64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125ef66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ef69 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1125ef70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ef73 mov esp, ebp */
  ESP = (EBP);
  /* 1125ef75 pop ebp */
  EBP = (pop32());
  /* 1125ef76 ret  */
  ESPCHK(0x1125eec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ef80 @ 0x1125ef80 (15 bytes, 7 insns) */
void f_1125ef80(void) {
  FTRACE(0x1125ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1125ef83 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125ef85 call 0x1125ef90 */
  push32(0x1125ef8au); f_1125ef90();
  /* 1125ef8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ef8d pop ebp */
  EBP = (pop32());
  /* 1125ef8e ret  */
  ESPCHK(0x1125ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ef90 @ 0x1125ef90 (319 bytes, 94 insns) */
void f_1125ef90(void) {
  FTRACE(0x1125ef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ef90 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ef91 mov ebp, esp */
  EBP = (ESP);
  /* 1125ef93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ef96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125ef9d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125efa4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125efa6 call 0x1124c720 */
  push32(0x1125efabu); f_1124c720();
  /* 1125efab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125efae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125efb5 jmp 0x1125efc0 */
  goto L_1125efc0;
L_1125efb7:;
  /* 1125efb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125efba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125efbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1125efc0:;
  /* 1125efc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125efc3 cmp ecx, dword ptr [0x11282ae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125efc9 jge 0x1125f0b3 */
  if ((C.sf==C.of)) goto L_1125f0b3;
  /* 1125efcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125efd2 mov eax, dword ptr [0x11281794] */
  EAX = (r32((uint32_t)(0x11281794)));
  /* 1125efd7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125efdb je 0x1125f0ae */
  if (C.zf) goto L_1125f0ae;
  /* 1125efe1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125efe4 mov edx, dword ptr [0x11281794] */
  EDX = (r32((uint32_t)(0x11281794)));
  /* 1125efea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1125efed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1125eff0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1125eff6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125eff8 je 0x1125f0ae */
  if (C.zf) goto L_1125f0ae;
  /* 1125effe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f001 mov eax, dword ptr [0x11281794] */
  EAX = (r32((uint32_t)(0x11281794)));
  /* 1125f006 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1125f009 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f00a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f00d push edx */
  push32((uint32_t)(EDX));
  /* 1125f00e call 0x1125b990 */
  push32(0x1125f013u); f_1125b990();
  /* 1125f013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f016 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f019 mov ecx, dword ptr [0x11281794] */
  ECX = (r32((uint32_t)(0x11281794)));
  /* 1125f01f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1125f022 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1125f025 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1125f02a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125f02c je 0x1125f095 */
  if (C.zf) goto L_1125f095;
  /* 1125f02e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f032 jne 0x1125f059 */
  if (!C.zf) goto L_1125f059;
  /* 1125f034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f037 mov edx, dword ptr [0x11281794] */
  EDX = (r32((uint32_t)(0x11281794)));
  /* 1125f03d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1125f040 push eax */
  push32((uint32_t)(EAX));
  /* 1125f041 call 0x1125ee70 */
  push32(0x1125f046u); f_1125ee70();
  /* 1125f046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f049 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f04c je 0x1125f057 */
  if (C.zf) goto L_1125f057;
  /* 1125f04e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f051 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f054 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125f057:;
  /* 1125f057 jmp 0x1125f095 */
  goto L_1125f095;
L_1125f059:;
  /* 1125f059 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f05d jne 0x1125f095 */
  if (!C.zf) goto L_1125f095;
  /* 1125f05f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f062 mov eax, dword ptr [0x11281794] */
  EAX = (r32((uint32_t)(0x11281794)));
  /* 1125f067 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1125f06a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125f06d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1125f070 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125f072 je 0x1125f095 */
  if (C.zf) goto L_1125f095;
  /* 1125f074 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f077 mov ecx, dword ptr [0x11281794] */
  ECX = (r32((uint32_t)(0x11281794)));
  /* 1125f07d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1125f080 push edx */
  push32((uint32_t)(EDX));
  /* 1125f081 call 0x1125ee70 */
  push32(0x1125f086u); f_1125ee70();
  /* 1125f086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f089 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f08c jne 0x1125f095 */
  if (!C.zf) goto L_1125f095;
  /* 1125f08e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1125f095:;
  /* 1125f095 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f098 mov ecx, dword ptr [0x11281794] */
  ECX = (r32((uint32_t)(0x11281794)));
  /* 1125f09e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1125f0a1 push edx */
  push32((uint32_t)(EDX));
  /* 1125f0a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f0a5 push eax */
  push32((uint32_t)(EAX));
  /* 1125f0a6 call 0x1125ba00 */
  push32(0x1125f0abu); f_1125ba00();
  /* 1125f0ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125f0ae:;
  /* 1125f0ae jmp 0x1125efb7 */
  goto L_1125efb7;
L_1125f0b3:;
  /* 1125f0b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125f0b5 call 0x1124c7c0 */
  push32(0x1125f0bau); f_1124c7c0();
  /* 1125f0ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f0bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f0c1 jne 0x1125f0c8 */
  if (!C.zf) goto L_1125f0c8;
  /* 1125f0c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f0c6 jmp 0x1125f0cb */
  goto L_1125f0cb;
L_1125f0c8:;
  /* 1125f0c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1125f0cb:;
  /* 1125f0cb mov esp, ebp */
  ESP = (EBP);
  /* 1125f0cd pop ebp */
  EBP = (pop32());
  /* 1125f0ce ret  */
  ESPCHK(0x1125ef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f0d0 @ 0x1125f0d0 (289 bytes, 97 insns) */
void f_1125f0d0(void) {
  FTRACE(0x1125f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1125f0d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f0d6 push esi */
  push32((uint32_t)(ESI));
  /* 1125f0d7 mov eax, dword ptr [0x112802c0] */
  EAX = (r32((uint32_t)(0x112802c0)));
  /* 1125f0dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125f0df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125f0e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f0ed jmp 0x1125f0f8 */
  goto L_1125f0f8;
L_1125f0ef:;
  /* 1125f0ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f0f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f0f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1125f0f8:;
  /* 1125f0f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f0fc jae 0x1125f131 */
  if (!C.cf) goto L_1125f131;
  /* 1125f0fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f104 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1125f107 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f108 call 0x11250db0 */
  push32(0x1125f10du); f_11250db0();
  /* 1125f10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f110 mov esi, eax */
  ESI = (EAX);
  /* 1125f112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f115 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f118 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1125f11c push ecx */
  push32((uint32_t)(ECX));
  /* 1125f11d call 0x11250db0 */
  push32(0x1125f122u); f_11250db0();
  /* 1125f122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f125 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f128 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1125f12c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125f12f jmp 0x1125f0ef */
  goto L_1125f0ef;
L_1125f131:;
  /* 1125f131 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125f134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f137 push eax */
  push32((uint32_t)(EAX));
  /* 1125f138 call 0x1124c800 */
  push32(0x1125f13du); f_1124c800();
  /* 1125f13d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125f143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f147 je 0x1125f1e9 */
  if (C.zf) goto L_1125f1e9;
  /* 1125f14d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125f153 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f15a jmp 0x1125f165 */
  goto L_1125f165;
L_1125f15c:;
  /* 1125f15c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f15f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f162 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125f165:;
  /* 1125f165 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f169 jae 0x1125f1da */
  if (!C.cf) goto L_1125f1da;
  /* 1125f16b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f16e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1125f171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f174 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f177 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125f17a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f17d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f180 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1125f183 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f184 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f187 push edx */
  push32((uint32_t)(EDX));
  /* 1125f188 call 0x11250f30 */
  push32(0x1125f18du); f_11250f30();
  /* 1125f18d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f190 push eax */
  push32((uint32_t)(EAX));
  /* 1125f191 call 0x11250db0 */
  push32(0x1125f196u); f_11250db0();
  /* 1125f196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f199 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f19c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f19e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125f1a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f1a4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1125f1a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f1aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f1ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125f1b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f1b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f1b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1125f1ba push eax */
  push32((uint32_t)(EAX));
  /* 1125f1bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f1be push ecx */
  push32((uint32_t)(ECX));
  /* 1125f1bf call 0x11250f30 */
  push32(0x1125f1c4u); f_11250f30();
  /* 1125f1c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1125f1c8 call 0x11250db0 */
  push32(0x1125f1cdu); f_11250db0();
  /* 1125f1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f1d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f1d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f1d5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f1d8 jmp 0x1125f15c */
  goto L_1125f15c;
L_1125f1da:;
  /* 1125f1da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f1dd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1125f1e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f1e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f1e6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1125f1e9:;
  /* 1125f1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f1ec pop esi */
  ESI = (pop32());
  /* 1125f1ed mov esp, ebp */
  ESP = (EBP);
  /* 1125f1ef pop ebp */
  EBP = (pop32());
  /* 1125f1f0 ret  */
  ESPCHK(0x1125f0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f200 @ 0x1125f200 (291 bytes, 97 insns) */
void f_1125f200(void) {
  FTRACE(0x1125f200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125f200 push ebp */
  push32((uint32_t)(EBP));
  /* 1125f201 mov ebp, esp */
  EBP = (ESP);
  /* 1125f203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f206 push esi */
  push32((uint32_t)(ESI));
  /* 1125f207 mov eax, dword ptr [0x112802c0] */
  EAX = (r32((uint32_t)(0x112802c0)));
  /* 1125f20c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125f20f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125f216 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f21d jmp 0x1125f228 */
  goto L_1125f228;
L_1125f21f:;
  /* 1125f21f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f225 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1125f228:;
  /* 1125f228 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f22c jae 0x1125f262 */
  if (!C.cf) goto L_1125f262;
  /* 1125f22e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f234 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1125f238 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f239 call 0x11250db0 */
  push32(0x1125f23eu); f_11250db0();
  /* 1125f23e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f241 mov esi, eax */
  ESI = (EAX);
  /* 1125f243 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f246 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f249 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1125f24d push ecx */
  push32((uint32_t)(ECX));
  /* 1125f24e call 0x11250db0 */
  push32(0x1125f253u); f_11250db0();
  /* 1125f253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f256 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f259 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1125f25d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125f260 jmp 0x1125f21f */
  goto L_1125f21f;
L_1125f262:;
  /* 1125f262 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125f265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f268 push eax */
  push32((uint32_t)(EAX));
  /* 1125f269 call 0x1124c800 */
  push32(0x1125f26eu); f_1124c800();
  /* 1125f26e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125f274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f278 je 0x1125f31b */
  if (C.zf) goto L_1125f31b;
  /* 1125f27e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f281 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125f284 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f28b jmp 0x1125f296 */
  goto L_1125f296;
L_1125f28d:;
  /* 1125f28d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f290 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125f296:;
  /* 1125f296 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f29a jae 0x1125f30c */
  if (!C.cf) goto L_1125f30c;
  /* 1125f29c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f29f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1125f2a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f2a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f2a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125f2ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f2ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f2b1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1125f2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f2b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f2b9 push edx */
  push32((uint32_t)(EDX));
  /* 1125f2ba call 0x11250f30 */
  push32(0x1125f2bfu); f_11250f30();
  /* 1125f2bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1125f2c3 call 0x11250db0 */
  push32(0x1125f2c8u); f_11250db0();
  /* 1125f2c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f2cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f2ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f2d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125f2d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f2d6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1125f2d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f2dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f2df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125f2e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f2e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f2e8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1125f2ec push eax */
  push32((uint32_t)(EAX));
  /* 1125f2ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f2f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f2f1 call 0x11250f30 */
  push32(0x1125f2f6u); f_11250f30();
  /* 1125f2f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f2f9 push eax */
  push32((uint32_t)(EAX));
  /* 1125f2fa call 0x11250db0 */
  push32(0x1125f2ffu); f_11250db0();
  /* 1125f2ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f302 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f305 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f307 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f30a jmp 0x1125f28d */
  goto L_1125f28d;
L_1125f30c:;
  /* 1125f30c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f30f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1125f312 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f318 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1125f31b:;
  /* 1125f31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f31e pop esi */
  ESI = (pop32());
  /* 1125f31f mov esp, ebp */
  ESP = (EBP);
  /* 1125f321 pop ebp */
  EBP = (pop32());
  /* 1125f322 ret  */
  ESPCHK(0x1125f200u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f330 @ 0x1125f330 (878 bytes, 273 insns) */
void f_1125f330(void) {
  FTRACE(0x1125f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125f330 push ebp */
  push32((uint32_t)(EBP));
  /* 1125f331 mov ebp, esp */
  EBP = (ESP);
  /* 1125f333 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f336 push esi */
  push32((uint32_t)(ESI));
  /* 1125f337 mov eax, dword ptr [0x112802c0] */
  EAX = (r32((uint32_t)(0x112802c0)));
  /* 1125f33c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125f33f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125f346 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f34d jmp 0x1125f358 */
  goto L_1125f358;
L_1125f34f:;
  /* 1125f34f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f352 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f355 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1125f358:;
  /* 1125f358 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f35c jae 0x1125f391 */
  if (!C.cf) goto L_1125f391;
  /* 1125f35e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f361 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f364 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1125f367 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f368 call 0x11250db0 */
  push32(0x1125f36du); f_11250db0();
  /* 1125f36d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f370 mov esi, eax */
  ESI = (EAX);
  /* 1125f372 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f375 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f378 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1125f37c push ecx */
  push32((uint32_t)(ECX));
  /* 1125f37d call 0x11250db0 */
  push32(0x1125f382u); f_11250db0();
  /* 1125f382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f385 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f388 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1125f38c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125f38f jmp 0x1125f34f */
  goto L_1125f34f;
L_1125f391:;
  /* 1125f391 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f398 jmp 0x1125f3a3 */
  goto L_1125f3a3;
L_1125f39a:;
  /* 1125f39a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f39d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f3a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1125f3a3:;
  /* 1125f3a3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f3a7 jae 0x1125f3dd */
  if (!C.cf) goto L_1125f3dd;
  /* 1125f3a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f3ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f3af mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1125f3b3 push eax */
  push32((uint32_t)(EAX));
  /* 1125f3b4 call 0x11250db0 */
  push32(0x1125f3b9u); f_11250db0();
  /* 1125f3b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f3bc mov esi, eax */
  ESI = (EAX);
  /* 1125f3be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f3c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f3c4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1125f3c8 push eax */
  push32((uint32_t)(EAX));
  /* 1125f3c9 call 0x11250db0 */
  push32(0x1125f3ceu); f_11250db0();
  /* 1125f3ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f3d1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f3d4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1125f3d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125f3db jmp 0x1125f39a */
  goto L_1125f39a;
L_1125f3dd:;
  /* 1125f3dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f3e0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1125f3e6 push eax */
  push32((uint32_t)(EAX));
  /* 1125f3e7 call 0x11250db0 */
  push32(0x1125f3ecu); f_11250db0();
  /* 1125f3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f3ef mov esi, eax */
  ESI = (EAX);
  /* 1125f3f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f3f4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1125f3fa push edx */
  push32((uint32_t)(EDX));
  /* 1125f3fb call 0x11250db0 */
  push32(0x1125f400u); f_11250db0();
  /* 1125f400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f403 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f406 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1125f40a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125f40d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f410 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1125f416 push edx */
  push32((uint32_t)(EDX));
  /* 1125f417 call 0x11250db0 */
  push32(0x1125f41cu); f_11250db0();
  /* 1125f41c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f41f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125f422 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1125f426 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125f429 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f42c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1125f432 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f433 call 0x11250db0 */
  push32(0x1125f438u); f_11250db0();
  /* 1125f438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f43b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125f43e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1125f442 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125f445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f448 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1125f44e push edx */
  push32((uint32_t)(EDX));
  /* 1125f44f call 0x11250db0 */
  push32(0x1125f454u); f_11250db0();
  /* 1125f454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125f45a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1125f45e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125f461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125f464 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f469 push eax */
  push32((uint32_t)(EAX));
  /* 1125f46a call 0x1124c800 */
  push32(0x1125f46fu); f_1124c800();
  /* 1125f46f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f472 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125f475 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f479 je 0x1125f696 */
  if (C.zf) goto L_1125f696;
  /* 1125f47f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f482 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1125f485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f488 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f48e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f491 push 0xac */
  push32((uint32_t)(0xacu));
  /* 1125f496 mov eax, dword ptr [0x112802c0] */
  EAX = (r32((uint32_t)(0x112802c0)));
  /* 1125f49b push eax */
  push32((uint32_t)(EAX));
  /* 1125f49c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f49f push ecx */
  push32((uint32_t)(ECX));
  /* 1125f4a0 call 0x112568c0 */
  push32(0x1125f4a5u); f_112568c0();
  /* 1125f4a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f4a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f4af jmp 0x1125f4ba */
  goto L_1125f4ba;
L_1125f4b1:;
  /* 1125f4b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f4b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f4b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125f4ba:;
  /* 1125f4ba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f4be jae 0x1125f52e */
  if (!C.cf) goto L_1125f52e;
  /* 1125f4c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f4c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f4c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f4c9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1125f4cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f4cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f4d2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1125f4d5 push edx */
  push32((uint32_t)(EDX));
  /* 1125f4d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f4d9 push eax */
  push32((uint32_t)(EAX));
  /* 1125f4da call 0x11250f30 */
  push32(0x1125f4dfu); f_11250f30();
  /* 1125f4df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f4e2 push eax */
  push32((uint32_t)(EAX));
  /* 1125f4e3 call 0x11250db0 */
  push32(0x1125f4e8u); f_11250db0();
  /* 1125f4e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f4eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f4ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1125f4f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f4f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f4f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f4fb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f4fe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 1125f502 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f508 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1125f50c push edx */
  push32((uint32_t)(EDX));
  /* 1125f50d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f510 push eax */
  push32((uint32_t)(EAX));
  /* 1125f511 call 0x11250f30 */
  push32(0x1125f516u); f_11250f30();
  /* 1125f516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f519 push eax */
  push32((uint32_t)(EAX));
  /* 1125f51a call 0x11250db0 */
  push32(0x1125f51fu); f_11250db0();
  /* 1125f51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f522 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f525 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1125f529 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f52c jmp 0x1125f4b1 */
  goto L_1125f4b1;
L_1125f52e:;
  /* 1125f52e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125f535 jmp 0x1125f540 */
  goto L_1125f540;
L_1125f537:;
  /* 1125f537 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f53a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f53d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1125f540:;
  /* 1125f540 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f544 jae 0x1125f5b6 */
  if (!C.cf) goto L_1125f5b6;
  /* 1125f546 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f549 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f54c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f54f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 1125f553 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f556 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f559 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1125f55d push eax */
  push32((uint32_t)(EAX));
  /* 1125f55e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f561 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f562 call 0x11250f30 */
  push32(0x1125f567u); f_11250f30();
  /* 1125f567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f56a push eax */
  push32((uint32_t)(EAX));
  /* 1125f56b call 0x11250db0 */
  push32(0x1125f570u); f_11250db0();
  /* 1125f570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f573 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f576 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1125f57a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125f57d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f580 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f583 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f586 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1125f58a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f58d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f590 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1125f594 push eax */
  push32((uint32_t)(EAX));
  /* 1125f595 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f598 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f599 call 0x11250f30 */
  push32(0x1125f59eu); f_11250f30();
  /* 1125f59e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f5a1 push eax */
  push32((uint32_t)(EAX));
  /* 1125f5a2 call 0x11250db0 */
  push32(0x1125f5a7u); f_11250db0();
  /* 1125f5a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f5aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f5ad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1125f5b1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125f5b4 jmp 0x1125f537 */
  goto L_1125f537;
L_1125f5b6:;
  /* 1125f5b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f5b9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f5bc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 1125f5c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f5c5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1125f5cb push ecx */
  push32((uint32_t)(ECX));
  /* 1125f5cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f5cf push edx */
  push32((uint32_t)(EDX));
  /* 1125f5d0 call 0x11250f30 */
  push32(0x1125f5d5u); f_11250f30();
  /* 1125f5d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f5d8 push eax */
  push32((uint32_t)(EAX));
  /* 1125f5d9 call 0x11250db0 */
  push32(0x1125f5deu); f_11250db0();
  /* 1125f5de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f5e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f5e4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1125f5e8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f5eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f5ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f5f1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 1125f5f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f5fa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1125f600 push eax */
  push32((uint32_t)(EAX));
  /* 1125f601 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f604 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f605 call 0x11250f30 */
  push32(0x1125f60au); f_11250f30();
  /* 1125f60a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f60d push eax */
  push32((uint32_t)(EAX));
  /* 1125f60e call 0x11250db0 */
  push32(0x1125f613u); f_11250db0();
  /* 1125f613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f616 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f619 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1125f61d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125f620 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f623 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f626 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1125f62c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f62f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 1125f635 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f636 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f639 push edx */
  push32((uint32_t)(EDX));
  /* 1125f63a call 0x11250f30 */
  push32(0x1125f63fu); f_11250f30();
  /* 1125f63f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f642 push eax */
  push32((uint32_t)(EAX));
  /* 1125f643 call 0x11250db0 */
  push32(0x1125f648u); f_11250db0();
  /* 1125f648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f64b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f64e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1125f652 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125f655 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f658 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f65b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 1125f661 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f664 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1125f66a push eax */
  push32((uint32_t)(EAX));
  /* 1125f66b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f66e push ecx */
  push32((uint32_t)(ECX));
  /* 1125f66f call 0x11250f30 */
  push32(0x1125f674u); f_11250f30();
  /* 1125f674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f677 push eax */
  push32((uint32_t)(EAX));
  /* 1125f678 call 0x11250db0 */
  push32(0x1125f67du); f_11250db0();
  /* 1125f67d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f683 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1125f687 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125f68a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125f68d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125f690 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_1125f696:;
  /* 1125f696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f699 pop esi */
  ESI = (pop32());
  /* 1125f69a mov esp, ebp */
  ESP = (EBP);
  /* 1125f69c pop ebp */
  EBP = (pop32());
  /* 1125f69d ret  */
  ESPCHK(0x1125f330u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f6a0 @ 0x1125f6a0 (31 bytes, 15 insns) */
void f_1125f6a0(void) {
  FTRACE(0x1125f6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125f6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125f6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1125f6a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125f6a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f6a8 push eax */
  push32((uint32_t)(EAX));
  /* 1125f6a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f6ac push ecx */
  push32((uint32_t)(ECX));
  /* 1125f6ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1125f6b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125f6b4 push eax */
  push32((uint32_t)(EAX));
  /* 1125f6b5 call 0x1125f6c0 */
  push32(0x1125f6bau); f_1125f6c0();
  /* 1125f6ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f6bd pop ebp */
  EBP = (pop32());
  /* 1125f6be ret  */
  ESPCHK(0x1125f6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f6c0 @ 0x1125f6c0 (393 bytes, 123 insns) */
void f_1125f6c0(void) {
  FTRACE(0x1125f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1125f6c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f6c6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f6ca jne 0x1125f6d6 */
  if (!C.zf) goto L_1125f6d6;
  /* 1125f6cc mov eax, dword ptr [0x112802c0] */
  EAX = (r32((uint32_t)(0x112802c0)));
  /* 1125f6d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125f6d4 jmp 0x1125f6dc */
  goto L_1125f6dc;
L_1125f6d6:;
  /* 1125f6d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f6d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1125f6dc:;
  /* 1125f6dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125f6df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125f6e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f6e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125f6e8 push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 1125f6ed call dword ptr [0x11283460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283460))), 0x1125f6f3u);
  /* 1125f6f3 cmp dword ptr [0x11282ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f6fa je 0x1125f71a */
  if (C.zf) goto L_1125f71a;
  /* 1125f6fc push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 1125f701 call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1125f707u);
  /* 1125f707 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1125f709 call 0x1124c720 */
  push32(0x1125f70eu); f_1124c720();
  /* 1125f70e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f711 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1125f718 jmp 0x1125f721 */
  goto L_1125f721;
L_1125f71a:;
  /* 1125f71a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1125f721:;
  /* 1125f721 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f725 jbe 0x1125f812 */
  if ((C.cf||C.zf)) goto L_1125f812;
  /* 1125f72b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f72e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125f730 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 1125f733 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125f737 je 0x1125f741 */
  if (C.zf) goto L_1125f741;
  /* 1125f739 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125f73d je 0x1125f746 */
  if (C.zf) goto L_1125f746;
  /* 1125f73f jmp 0x1125f7a0 */
  goto L_1125f7a0;
L_1125f741:;
  /* 1125f741 jmp 0x1125f812 */
  goto L_1125f812;
L_1125f746:;
  /* 1125f746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f74c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1125f74f mov dword ptr [0x11281780], 0 */
  w32((uint32_t)(0x11281780), (0x0u));
  /* 1125f759 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f75c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125f75f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f762 jne 0x1125f777 */
  if (!C.zf) goto L_1125f777;
  /* 1125f764 mov dword ptr [0x11281780], 1 */
  w32((uint32_t)(0x11281780), (0x1u));
  /* 1125f76e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f771 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f774 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1125f777:;
  /* 1125f777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125f77a push ecx */
  push32((uint32_t)(ECX));
  /* 1125f77b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1125f77e push edx */
  push32((uint32_t)(EDX));
  /* 1125f77f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1125f782 push eax */
  push32((uint32_t)(EAX));
  /* 1125f783 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f786 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f787 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f78a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125f78c push eax */
  push32((uint32_t)(EAX));
  /* 1125f78d call 0x1125f850 */
  push32(0x1125f792u); f_1125f850();
  /* 1125f792 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f795 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f79b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1125f79e jmp 0x1125f80d */
  goto L_1125f80d;
L_1125f7a0:;
  /* 1125f7a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125f7a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125f7a7 mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1125f7ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125f7af mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1125f7b3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1125f7b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125f7bb je 0x1125f7e8 */
  if (C.zf) goto L_1125f7e8;
  /* 1125f7bd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f7c1 jbe 0x1125f7e8 */
  if ((C.cf||C.zf)) goto L_1125f7e8;
  /* 1125f7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125f7c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f7c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125f7cb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1125f7cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125f7d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f7d3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125f7d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f7d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f7dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1125f7df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f7e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f7e5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1125f7e8:;
  /* 1125f7e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125f7eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f7ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125f7f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1125f7f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125f7f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f7f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125f7fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f7fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f801 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1125f804 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f807 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f80a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1125f80d:;
  /* 1125f80d jmp 0x1125f721 */
  goto L_1125f721;
L_1125f812:;
  /* 1125f812 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f816 je 0x1125f824 */
  if (C.zf) goto L_1125f824;
  /* 1125f818 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1125f81a call 0x1124c7c0 */
  push32(0x1125f81fu); f_1124c7c0();
  /* 1125f81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f822 jmp 0x1125f82f */
  goto L_1125f82f;
L_1125f824:;
  /* 1125f824 push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 1125f829 call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1125f82fu);
L_1125f82f:;
  /* 1125f82f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f833 jbe 0x1125f843 */
  if ((C.cf||C.zf)) goto L_1125f843;
  /* 1125f835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125f838 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1125f83b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f83e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f841 jmp 0x1125f845 */
  goto L_1125f845;
L_1125f843:;
  /* 1125f843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125f845:;
  /* 1125f845 mov esp, ebp */
  ESP = (EBP);
  /* 1125f847 pop ebp */
  EBP = (pop32());
  /* 1125f848 ret  */
  ESPCHK(0x1125f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f850 @ 0x1125f850 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_1125f850(void) {
  FTRACE(0x1125f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125f850 push ebp */
  push32((uint32_t)(EBP));
  /* 1125f851 mov ebp, esp */
  EBP = (ESP);
  /* 1125f853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f856 push esi */
  push32((uint32_t)(ESI));
  /* 1125f857 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1125f85b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125f85e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f861 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f864 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125f867 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f86b ja 0x1125fdb8 */
  if ((!C.cf&&!C.zf)) goto L_1125fdb8;
  /* 1125f871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125f874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125f876 mov dl, byte ptr [eax + 0x1125fe19] */
  DL = (r8((uint32_t)(EAX + 0x1125fe19)));
  /* 1125f87c jmp dword ptr [edx*4 + 0x1125fdbd] */
  switch (EDX) {
    case 0: goto L_1125fd96;
    case 1: goto L_1125f8a5;
    case 2: goto L_1125f8eb;
    case 3: goto L_1125fa38;
    case 4: goto L_1125fa60;
    case 5: goto L_1125faff;
    case 6: goto L_1125fb6b;
    case 7: goto L_1125fb94;
    case 8: goto L_1125fbd5;
    case 9: goto L_1125fcb7;
    case 10: goto L_1125fd1e;
    case 11: goto L_1125fd6b;
    case 12: goto L_1125f883;
    case 13: goto L_1125f8c8;
    case 14: goto L_1125f90e;
    case 15: goto L_1125fa0e;
    case 16: goto L_1125faa5;
    case 17: goto L_1125fad2;
    case 18: goto L_1125fb27;
    case 19: goto L_1125fbab;
    case 20: goto L_1125fc59;
    case 21: goto L_1125fce8;
    case 22: goto L_1125fdb8;
    default: x86_unimpl("switch@0x1125f87c out of table"); return;
  }
L_1125f883:;
  /* 1125f883 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f886 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f887 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f88a push edx */
  push32((uint32_t)(EDX));
  /* 1125f88b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f88e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1125f891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f894 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1125f897 push eax */
  push32((uint32_t)(EAX));
  /* 1125f898 call 0x1125fe70 */
  push32(0x1125f89du); f_1125fe70();
  /* 1125f89d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f8a0 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125f8a5:;
  /* 1125f8a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f8a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f8ac push edx */
  push32((uint32_t)(EDX));
  /* 1125f8ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f8b0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1125f8b3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f8b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1125f8ba push eax */
  push32((uint32_t)(EAX));
  /* 1125f8bb call 0x1125fe70 */
  push32(0x1125f8c0u); f_1125fe70();
  /* 1125f8c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f8c3 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125f8c8:;
  /* 1125f8c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f8cb push ecx */
  push32((uint32_t)(ECX));
  /* 1125f8cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f8cf push edx */
  push32((uint32_t)(EDX));
  /* 1125f8d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f8d3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125f8d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f8d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1125f8dd push eax */
  push32((uint32_t)(EAX));
  /* 1125f8de call 0x1125fe70 */
  push32(0x1125f8e3u); f_1125fe70();
  /* 1125f8e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f8e6 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125f8eb:;
  /* 1125f8eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f8ee push ecx */
  push32((uint32_t)(ECX));
  /* 1125f8ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f8f2 push edx */
  push32((uint32_t)(EDX));
  /* 1125f8f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f8f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125f8f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f8fc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1125f900 push eax */
  push32((uint32_t)(EAX));
  /* 1125f901 call 0x1125fe70 */
  push32(0x1125f906u); f_1125fe70();
  /* 1125f906 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f909 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125f90e:;
  /* 1125f90e cmp dword ptr [0x11281780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f915 je 0x1125f996 */
  if (C.zf) goto L_1125f996;
  /* 1125f917 mov dword ptr [0x11281780], 0 */
  w32((uint32_t)(0x11281780), (0x0u));
  /* 1125f921 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f924 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f925 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f928 push edx */
  push32((uint32_t)(EDX));
  /* 1125f929 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f92c push eax */
  push32((uint32_t)(EAX));
  /* 1125f92d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f930 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f931 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f934 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1125f93a push eax */
  push32((uint32_t)(EAX));
  /* 1125f93b call 0x11260020 */
  push32(0x1125f940u); f_11260020();
  /* 1125f940 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f943 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f946 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f949 jne 0x1125f950 */
  if (!C.zf) goto L_1125f950;
  /* 1125f94b jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125f950:;
  /* 1125f950 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f953 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125f955 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1125f958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f95b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125f95d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f960 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f963 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125f965 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f968 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125f96a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f96d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f970 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125f972 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f975 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f976 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f979 push edx */
  push32((uint32_t)(EDX));
  /* 1125f97a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f97d push eax */
  push32((uint32_t)(EAX));
  /* 1125f97e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f981 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f982 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f985 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1125f98b push eax */
  push32((uint32_t)(EAX));
  /* 1125f98c call 0x11260020 */
  push32(0x1125f991u); f_11260020();
  /* 1125f991 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f994 jmp 0x1125fa09 */
  goto L_1125fa09;
L_1125f996:;
  /* 1125f996 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f999 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f99a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f99d push edx */
  push32((uint32_t)(EDX));
  /* 1125f99e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f9a1 push eax */
  push32((uint32_t)(EAX));
  /* 1125f9a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f9a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f9a9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1125f9af push eax */
  push32((uint32_t)(EAX));
  /* 1125f9b0 call 0x11260020 */
  push32(0x1125f9b5u); f_11260020();
  /* 1125f9b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f9b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f9bb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125f9be jne 0x1125f9c5 */
  if (!C.zf) goto L_1125f9c5;
  /* 1125f9c0 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125f9c5:;
  /* 1125f9c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f9c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125f9ca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1125f9cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f9d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125f9d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125f9d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f9d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125f9da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f9dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125f9df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125f9e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f9e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125f9e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f9ea push ecx */
  push32((uint32_t)(ECX));
  /* 1125f9eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125f9ee push edx */
  push32((uint32_t)(EDX));
  /* 1125f9ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125f9f2 push eax */
  push32((uint32_t)(EAX));
  /* 1125f9f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125f9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1125f9f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125f9fa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1125fa00 push eax */
  push32((uint32_t)(EAX));
  /* 1125fa01 call 0x11260020 */
  push32(0x1125fa06u); f_11260020();
  /* 1125fa06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125fa09:;
  /* 1125fa09 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fa0e:;
  /* 1125fa0e mov ecx, dword ptr [0x11281780] */
  ECX = (r32((uint32_t)(0x11281780)));
  /* 1125fa14 mov dword ptr [0x11281790], ecx */
  w32((uint32_t)(0x11281790), (ECX));
  /* 1125fa1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fa1d push edx */
  push32((uint32_t)(EDX));
  /* 1125fa1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fa21 push eax */
  push32((uint32_t)(EAX));
  /* 1125fa22 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fa24 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fa27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125fa2a push edx */
  push32((uint32_t)(EDX));
  /* 1125fa2b call 0x1125fec0 */
  push32(0x1125fa30u); f_1125fec0();
  /* 1125fa30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fa33 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fa38:;
  /* 1125fa38 mov eax, dword ptr [0x11281780] */
  EAX = (r32((uint32_t)(0x11281780)));
  /* 1125fa3d mov dword ptr [0x11281790], eax */
  w32((uint32_t)(0x11281790), (EAX));
  /* 1125fa42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fa45 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fa46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fa49 push edx */
  push32((uint32_t)(EDX));
  /* 1125fa4a push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fa4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fa4f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125fa52 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fa53 call 0x1125fec0 */
  push32(0x1125fa58u); f_1125fec0();
  /* 1125fa58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fa5b jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fa60:;
  /* 1125fa60 mov edx, dword ptr [0x11281780] */
  EDX = (r32((uint32_t)(0x11281780)));
  /* 1125fa66 mov dword ptr [0x11281790], edx */
  w32((uint32_t)(0x11281790), (EDX));
  /* 1125fa6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fa6f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125fa72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125fa73 mov ecx, 0xc */
  ECX = (0xcu);
  /* 1125fa78 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125fa7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125fa7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fa81 jne 0x1125fa8a */
  if (!C.zf) goto L_1125fa8a;
  /* 1125fa83 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1125fa8a:;
  /* 1125fa8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fa8d push edx */
  push32((uint32_t)(EDX));
  /* 1125fa8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fa91 push eax */
  push32((uint32_t)(EAX));
  /* 1125fa92 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fa94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125fa97 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fa98 call 0x1125fec0 */
  push32(0x1125fa9du); f_1125fec0();
  /* 1125fa9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125faa0 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125faa5:;
  /* 1125faa5 mov edx, dword ptr [0x11281780] */
  EDX = (r32((uint32_t)(0x11281780)));
  /* 1125faab mov dword ptr [0x11281790], edx */
  w32((uint32_t)(0x11281790), (EDX));
  /* 1125fab1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fab4 push eax */
  push32((uint32_t)(EAX));
  /* 1125fab5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fab8 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fab9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1125fabb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fabe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1125fac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fac4 push eax */
  push32((uint32_t)(EAX));
  /* 1125fac5 call 0x1125fec0 */
  push32(0x1125facau); f_1125fec0();
  /* 1125faca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125facd jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fad2:;
  /* 1125fad2 mov ecx, dword ptr [0x11281780] */
  ECX = (r32((uint32_t)(0x11281780)));
  /* 1125fad8 mov dword ptr [0x11281790], ecx */
  w32((uint32_t)(0x11281790), (ECX));
  /* 1125fade mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fae1 push edx */
  push32((uint32_t)(EDX));
  /* 1125fae2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fae5 push eax */
  push32((uint32_t)(EAX));
  /* 1125fae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fae8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125faeb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1125faee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125faf1 push edx */
  push32((uint32_t)(EDX));
  /* 1125faf2 call 0x1125fec0 */
  push32(0x1125faf7u); f_1125fec0();
  /* 1125faf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fafa jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125faff:;
  /* 1125faff mov eax, dword ptr [0x11281780] */
  EAX = (r32((uint32_t)(0x11281780)));
  /* 1125fb04 mov dword ptr [0x11281790], eax */
  w32((uint32_t)(0x11281790), (EAX));
  /* 1125fb09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fb0c push ecx */
  push32((uint32_t)(ECX));
  /* 1125fb0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fb10 push edx */
  push32((uint32_t)(EDX));
  /* 1125fb11 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fb13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fb16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125fb19 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fb1a call 0x1125fec0 */
  push32(0x1125fb1fu); f_1125fec0();
  /* 1125fb1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fb22 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fb27:;
  /* 1125fb27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fb2a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fb2e jg 0x1125fb4c */
  if ((!C.zf&&C.sf==C.of)) goto L_1125fb4c;
  /* 1125fb30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fb33 push eax */
  push32((uint32_t)(EAX));
  /* 1125fb34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fb37 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fb38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fb3b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1125fb41 push eax */
  push32((uint32_t)(EAX));
  /* 1125fb42 call 0x1125fe70 */
  push32(0x1125fb47u); f_1125fe70();
  /* 1125fb47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fb4a jmp 0x1125fb66 */
  goto L_1125fb66;
L_1125fb4c:;
  /* 1125fb4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fb4f push ecx */
  push32((uint32_t)(ECX));
  /* 1125fb50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fb53 push edx */
  push32((uint32_t)(EDX));
  /* 1125fb54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fb57 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1125fb5d push ecx */
  push32((uint32_t)(ECX));
  /* 1125fb5e call 0x1125fe70 */
  push32(0x1125fb63u); f_1125fe70();
  /* 1125fb63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125fb66:;
  /* 1125fb66 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fb6b:;
  /* 1125fb6b mov edx, dword ptr [0x11281780] */
  EDX = (r32((uint32_t)(0x11281780)));
  /* 1125fb71 mov dword ptr [0x11281790], edx */
  w32((uint32_t)(0x11281790), (EDX));
  /* 1125fb77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fb7a push eax */
  push32((uint32_t)(EAX));
  /* 1125fb7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fb7e push ecx */
  push32((uint32_t)(ECX));
  /* 1125fb7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fb81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fb84 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125fb86 push eax */
  push32((uint32_t)(EAX));
  /* 1125fb87 call 0x1125fec0 */
  push32(0x1125fb8cu); f_1125fec0();
  /* 1125fb8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fb8f jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fb94:;
  /* 1125fb94 mov ecx, dword ptr [0x11281780] */
  ECX = (r32((uint32_t)(0x11281780)));
  /* 1125fb9a mov dword ptr [0x11281790], ecx */
  w32((uint32_t)(0x11281790), (ECX));
  /* 1125fba0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fba3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1125fba6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125fba9 jmp 0x1125fbfd */
  goto L_1125fbfd;
L_1125fbab:;
  /* 1125fbab mov ecx, dword ptr [0x11281780] */
  ECX = (r32((uint32_t)(0x11281780)));
  /* 1125fbb1 mov dword ptr [0x11281790], ecx */
  w32((uint32_t)(0x11281790), (ECX));
  /* 1125fbb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fbba push edx */
  push32((uint32_t)(EDX));
  /* 1125fbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fbbe push eax */
  push32((uint32_t)(EAX));
  /* 1125fbbf push 1 */
  push32((uint32_t)(0x1u));
  /* 1125fbc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fbc4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1125fbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1125fbc8 call 0x1125fec0 */
  push32(0x1125fbcdu); f_1125fec0();
  /* 1125fbcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fbd0 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fbd5:;
  /* 1125fbd5 mov eax, dword ptr [0x11281780] */
  EAX = (r32((uint32_t)(0x11281780)));
  /* 1125fbda mov dword ptr [0x11281790], eax */
  w32((uint32_t)(0x11281790), (EAX));
  /* 1125fbdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fbe2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fbe6 jne 0x1125fbf1 */
  if (!C.zf) goto L_1125fbf1;
  /* 1125fbe8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1125fbef jmp 0x1125fbfd */
  goto L_1125fbfd;
L_1125fbf1:;
  /* 1125fbf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fbf4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1125fbf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125fbfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1125fbfd:;
  /* 1125fbfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fc00 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1125fc03 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fc06 jge 0x1125fc11 */
  if ((C.sf==C.of)) goto L_1125fc11;
  /* 1125fc08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125fc0f jmp 0x1125fc3e */
  goto L_1125fc3e;
L_1125fc11:;
  /* 1125fc11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fc14 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1125fc17 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125fc18 mov ecx, 7 */
  ECX = (0x7u);
  /* 1125fc1d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125fc1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125fc22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fc25 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1125fc28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125fc29 mov ecx, 7 */
  ECX = (0x7u);
  /* 1125fc2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125fc30 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fc33 jl 0x1125fc3e */
  if ((C.sf!=C.of)) goto L_1125fc3e;
  /* 1125fc35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125fc38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fc3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125fc3e:;
  /* 1125fc3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fc41 push eax */
  push32((uint32_t)(EAX));
  /* 1125fc42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fc45 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fc46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fc48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125fc4b push edx */
  push32((uint32_t)(EDX));
  /* 1125fc4c call 0x1125fec0 */
  push32(0x1125fc51u); f_1125fec0();
  /* 1125fc51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fc54 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fc59:;
  /* 1125fc59 cmp dword ptr [0x11281780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fc60 je 0x1125fc90 */
  if (C.zf) goto L_1125fc90;
  /* 1125fc62 mov dword ptr [0x11281780], 0 */
  w32((uint32_t)(0x11281780), (0x0u));
  /* 1125fc6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fc6f push eax */
  push32((uint32_t)(EAX));
  /* 1125fc70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fc73 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fc74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fc77 push edx */
  push32((uint32_t)(EDX));
  /* 1125fc78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fc7b push eax */
  push32((uint32_t)(EAX));
  /* 1125fc7c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fc7f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1125fc85 push edx */
  push32((uint32_t)(EDX));
  /* 1125fc86 call 0x11260020 */
  push32(0x1125fc8bu); f_11260020();
  /* 1125fc8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fc8e jmp 0x1125fcb2 */
  goto L_1125fcb2;
L_1125fc90:;
  /* 1125fc90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fc93 push eax */
  push32((uint32_t)(EAX));
  /* 1125fc94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fc97 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fc98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fc9b push edx */
  push32((uint32_t)(EDX));
  /* 1125fc9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fc9f push eax */
  push32((uint32_t)(EAX));
  /* 1125fca0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fca3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1125fca9 push edx */
  push32((uint32_t)(EDX));
  /* 1125fcaa call 0x11260020 */
  push32(0x1125fcafu); f_11260020();
  /* 1125fcaf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125fcb2:;
  /* 1125fcb2 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fcb7:;
  /* 1125fcb7 mov dword ptr [0x11281780], 0 */
  w32((uint32_t)(0x11281780), (0x0u));
  /* 1125fcc1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fcc4 push eax */
  push32((uint32_t)(EAX));
  /* 1125fcc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fcc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fcc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fccc push edx */
  push32((uint32_t)(EDX));
  /* 1125fccd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fcd0 push eax */
  push32((uint32_t)(EAX));
  /* 1125fcd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125fcd4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1125fcda push edx */
  push32((uint32_t)(EDX));
  /* 1125fcdb call 0x11260020 */
  push32(0x1125fce0u); f_11260020();
  /* 1125fce0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fce3 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fce8:;
  /* 1125fce8 mov eax, dword ptr [0x11281780] */
  EAX = (r32((uint32_t)(0x11281780)));
  /* 1125fced mov dword ptr [0x11281790], eax */
  w32((uint32_t)(0x11281790), (EAX));
  /* 1125fcf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fcf5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 1125fcf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125fcf9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1125fcfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125fd00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125fd03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fd06 push edx */
  push32((uint32_t)(EDX));
  /* 1125fd07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fd0a push eax */
  push32((uint32_t)(EAX));
  /* 1125fd0b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125fd0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125fd10 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fd11 call 0x1125fec0 */
  push32(0x1125fd16u); f_1125fec0();
  /* 1125fd16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fd19 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fd1e:;
  /* 1125fd1e mov edx, dword ptr [0x11281780] */
  EDX = (r32((uint32_t)(0x11281780)));
  /* 1125fd24 mov dword ptr [0x11281790], edx */
  w32((uint32_t)(0x11281790), (EDX));
  /* 1125fd2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fd2d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 1125fd30 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125fd31 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1125fd36 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125fd38 mov ecx, eax */
  ECX = (EAX);
  /* 1125fd3a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fd3d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125fd40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fd43 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1125fd46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125fd47 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1125fd4c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125fd4e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fd50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125fd53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fd56 push eax */
  push32((uint32_t)(EAX));
  /* 1125fd57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fd5a push ecx */
  push32((uint32_t)(ECX));
  /* 1125fd5b push 4 */
  push32((uint32_t)(0x4u));
  /* 1125fd5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125fd60 push edx */
  push32((uint32_t)(EDX));
  /* 1125fd61 call 0x1125fec0 */
  push32(0x1125fd66u); f_1125fec0();
  /* 1125fd66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fd69 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fd6b:;
  /* 1125fd6b call 0x11255770 */
  push32(0x1125fd70u); f_11255770();
  /* 1125fd70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fd73 push eax */
  push32((uint32_t)(EAX));
  /* 1125fd74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fd77 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fd78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fd7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125fd7d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fd81 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 1125fd84 mov ecx, dword ptr [eax*4 + 0x1127f354] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127f354)));
  /* 1125fd8b push ecx */
  push32((uint32_t)(ECX));
  /* 1125fd8c call 0x1125fe70 */
  push32(0x1125fd91u); f_1125fe70();
  /* 1125fd91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fd94 jmp 0x1125fdb8 */
  goto L_1125fdb8;
L_1125fd96:;
  /* 1125fd96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fd99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125fd9b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1125fd9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fda1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125fda3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fda6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fda9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125fdab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fdae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125fdb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125fdb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fdb6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1125fdb8:;
  /* 1125fdb8 pop esi */
  ESI = (pop32());
  /* 1125fdb9 mov esp, ebp */
  ESP = (EBP);
  /* 1125fdbb pop ebp */
  EBP = (pop32());
  /* 1125fdbc ret  */
  ESPCHK(0x1125f850u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x1125fe70 (72 bytes, 30 insns) */
void f_1125fe70(void) {
  FTRACE(0x1125fe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125fe70 push ebp */
  push32((uint32_t)(EBP));
  /* 1125fe71 mov ebp, esp */
  EBP = (ESP);
L_1125fe73:;
  /* 1125fe73 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fe76 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fe79 je 0x1125feb6 */
  if (C.zf) goto L_1125feb6;
  /* 1125fe7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125fe7e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125fe81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125fe83 je 0x1125feb6 */
  if (C.zf) goto L_1125feb6;
  /* 1125fe85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fe88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125fe8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125fe8d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125fe8f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1125fe91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fe94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125fe96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fe99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fe9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125fe9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125fea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fea4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1125fea7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125feaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125feac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125feaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125feb2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125feb4 jmp 0x1125fe73 */
  goto L_1125fe73;
L_1125feb6:;
  /* 1125feb6 pop ebp */
  EBP = (pop32());
  /* 1125feb7 ret  */
  ESPCHK(0x1125fe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fec0 @ 0x1125fec0 (173 bytes, 64 insns) */
void f_1125fec0(void) {
  FTRACE(0x1125fec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125fec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125fec1 mov ebp, esp */
  EBP = (ESP);
  /* 1125fec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125fec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125fecb cmp dword ptr [0x11281790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fed2 je 0x1125feea */
  if (C.zf) goto L_1125feea;
  /* 1125fed4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125fed7 push eax */
  push32((uint32_t)(EAX));
  /* 1125fed8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125fedb push ecx */
  push32((uint32_t)(ECX));
  /* 1125fedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125fedf push edx */
  push32((uint32_t)(EDX));
  /* 1125fee0 call 0x1125ff70 */
  push32(0x1125fee5u); f_1125ff70();
  /* 1125fee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125fee8 jmp 0x1125ff69 */
  goto L_1125ff69;
L_1125feea:;
  /* 1125feea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125feed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fef0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125fef2 jae 0x1125ff60 */
  if (!C.cf) goto L_1125ff60;
  /* 1125fef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125fef7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125fefa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1125fefd jmp 0x1125ff08 */
  goto L_1125ff08;
L_1125feff:;
  /* 1125feff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ff02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ff05 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1125ff08:;
  /* 1125ff08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ff0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ff0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ff10 je 0x1125ff44 */
  if (C.zf) goto L_1125ff44;
  /* 1125ff12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ff15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125ff16 mov ecx, 0xa */
  ECX = (0xau);
  /* 1125ff1b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125ff1d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ff20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ff23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125ff25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ff28 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1125ff2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ff2e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125ff2f mov ecx, 0xa */
  ECX = (0xau);
  /* 1125ff34 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125ff36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125ff39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ff3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ff3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125ff42 jmp 0x1125feff */
  goto L_1125feff;
L_1125ff44:;
  /* 1125ff44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ff47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125ff49 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ff4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ff4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1125ff51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125ff54 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125ff56 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ff59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125ff5c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1125ff5e jmp 0x1125ff69 */
  goto L_1125ff69;
L_1125ff60:;
  /* 1125ff60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125ff63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1125ff69:;
  /* 1125ff69 mov esp, ebp */
  ESP = (EBP);
  /* 1125ff6b pop ebp */
  EBP = (pop32());
  /* 1125ff6c ret  */
  ESPCHK(0x1125fec0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x1125ff70 (172 bytes, 65 insns) */
void f_1125ff70(void) {
  FTRACE(0x1125ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ff71 mov ebp, esp */
  EBP = (ESP);
  /* 1125ff73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ff76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ff79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125ff7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ff7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ff81 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ff84 jbe 0x1125ffcb */
  if ((C.cf||C.zf)) goto L_1125ffcb;
L_1125ff86:;
  /* 1125ff86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ff89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125ff8a mov ecx, 0xa */
  ECX = (0xau);
  /* 1125ff8f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125ff91 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ff94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ff97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1125ff99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ff9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ff9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ffa2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ffa5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125ffa7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ffaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ffad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125ffaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ffb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125ffb3 mov ecx, 0xa */
  ECX = (0xau);
  /* 1125ffb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1125ffba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125ffbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ffc1 jle 0x1125ffcb */
  if ((C.zf||C.sf!=C.of)) goto L_1125ffcb;
  /* 1125ffc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125ffc6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ffc9 ja 0x1125ff86 */
  if ((!C.cf&&!C.zf)) goto L_1125ff86;
L_1125ffcb:;
  /* 1125ffcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ffce mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125ffd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125ffd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ffd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ffd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1125ffdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ffde sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ffe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125ffe4:;
  /* 1125ffe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ffe7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125ffe9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1125ffec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ffef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125fff2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125fff4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1125fff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125fff9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125fffc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ffff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11260002 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11260005 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11260007 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126000a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126000d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11260010 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11260013 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260016 jb 0x1125ffe4 */
  if (C.cf) goto L_1125ffe4;
  /* 11260018 mov esp, ebp */
  ESP = (EBP);
  /* 1126001a pop ebp */
  EBP = (pop32());
  /* 1126001b ret  */
  ESPCHK(0x1125ff70u, _esp0);
  ESP += 4; return;
}

/* FUN_10020020 @ 0x11260020 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11260020(void) {
  FTRACE(0x11260020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11260020 push ebp */
  push32((uint32_t)(EBP));
  /* 11260021 mov ebp, esp */
  EBP = (ESP);
  /* 11260023 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11260026:;
  /* 11260026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260029 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1126002c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1126002e je 0x1126049c */
  if (C.zf) goto L_1126049c;
  /* 11260034 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260037 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126003a je 0x1126049c */
  if (C.zf) goto L_1126049c;
  /* 11260040 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11260044 mov dword ptr [0x11281790], 0 */
  w32((uint32_t)(0x11281790), (0x0u));
  /* 1126004e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11260055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1126005b jmp 0x11260066 */
  goto L_11260066;
L_1126005d:;
  /* 1126005d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260060 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260063 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11260066:;
  /* 11260066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11260069 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1126006c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126006f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11260072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11260075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260078 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1126007b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126007d jne 0x11260081 */
  if (!C.zf) goto L_11260081;
  /* 1126007f jmp 0x1126005d */
  goto L_1126005d;
L_11260081:;
  /* 11260081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11260084 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260087 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1126008a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126008d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11260090 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11260093 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11260096 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260099 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1126009c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112600a0 ja 0x112603f0 */
  if ((!C.cf&&!C.zf)) goto L_112603f0;
  /* 112600a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112600a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112600ab mov al, byte ptr [ecx + 0x112604cc] */
  AL = (r8((uint32_t)(ECX + 0x112604cc)));
  /* 112600b1 jmp dword ptr [eax*4 + 0x112604a0] */
  switch (EAX) {
    case 0: goto L_1126030f;
    case 1: goto L_112601f3;
    case 2: goto L_1126017e;
    case 3: goto L_112600b8;
    case 4: goto L_112600f6;
    case 5: goto L_11260157;
    case 6: goto L_112601a5;
    case 7: goto L_112601cc;
    case 8: goto L_1126023a;
    case 9: goto L_11260134;
    case 10: goto L_112603f0;
    default: x86_unimpl("switch@0x112600b1 out of table"); return;
  }
L_112600b8:;
  /* 112600b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112600bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112600be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112600c1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112600c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112600c7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112600cb ja 0x112600f1 */
  if ((!C.cf&&!C.zf)) goto L_112600f1;
  /* 112600cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112600d0 jmp dword ptr [ecx*4 + 0x1126051f] */
  switch (ECX) {
    case 0: goto L_112600d7;
    case 1: goto L_112600e1;
    case 2: goto L_112600e7;
    case 3: goto L_112600ed;
    case 4: goto L_11260115;
    case 5: goto L_1126011f;
    case 6: goto L_11260125;
    case 7: goto L_1126012b;
    default: x86_unimpl("switch@0x112600d0 out of table"); return;
  }
L_112600d7:;
  /* 112600d7 mov dword ptr [0x11281790], 1 */
  w32((uint32_t)(0x11281790), (0x1u));
L_112600e1:;
  /* 112600e1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 112600e5 jmp 0x112600f1 */
  goto L_112600f1;
L_112600e7:;
  /* 112600e7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 112600eb jmp 0x112600f1 */
  goto L_112600f1;
L_112600ed:;
  /* 112600ed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_112600f1:;
  /* 112600f1 jmp 0x112603f0 */
  goto L_112603f0;
L_112600f6:;
  /* 112600f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112600f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112600fc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112600ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260102 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11260105 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260109 ja 0x1126012f */
  if ((!C.cf&&!C.zf)) goto L_1126012f;
  /* 1126010b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1126010e jmp dword ptr [ecx*4 + 0x1126052f] */
  switch (ECX) {
    case 0: goto L_11260115;
    case 1: goto L_1126011f;
    case 2: goto L_11260125;
    case 3: goto L_1126012b;
    default: x86_unimpl("switch@0x1126010e out of table"); return;
  }
L_11260115:;
  /* 11260115 mov dword ptr [0x11281790], 1 */
  w32((uint32_t)(0x11281790), (0x1u));
L_1126011f:;
  /* 1126011f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11260123 jmp 0x1126012f */
  goto L_1126012f;
L_11260125:;
  /* 11260125 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11260129 jmp 0x1126012f */
  goto L_1126012f;
L_1126012b:;
  /* 1126012b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1126012f:;
  /* 1126012f jmp 0x112603f0 */
  goto L_112603f0;
L_11260134:;
  /* 11260134 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260137 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1126013a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126013e je 0x11260148 */
  if (C.zf) goto L_11260148;
  /* 11260140 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260144 je 0x1126014e */
  if (C.zf) goto L_1126014e;
  /* 11260146 jmp 0x11260152 */
  goto L_11260152;
L_11260148:;
  /* 11260148 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1126014c jmp 0x11260152 */
  goto L_11260152;
L_1126014e:;
  /* 1126014e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11260152:;
  /* 11260152 jmp 0x112603f0 */
  goto L_112603f0;
L_11260157:;
  /* 11260157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1126015a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1126015d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260161 je 0x1126016b */
  if (C.zf) goto L_1126016b;
  /* 11260163 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260167 je 0x11260175 */
  if (C.zf) goto L_11260175;
  /* 11260169 jmp 0x11260179 */
  goto L_11260179;
L_1126016b:;
  /* 1126016b mov dword ptr [0x11281790], 1 */
  w32((uint32_t)(0x11281790), (0x1u));
L_11260175:;
  /* 11260175 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11260179:;
  /* 11260179 jmp 0x112603f0 */
  goto L_112603f0;
L_1126017e:;
  /* 1126017e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260181 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11260184 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260188 je 0x11260192 */
  if (C.zf) goto L_11260192;
  /* 1126018a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126018e je 0x1126019c */
  if (C.zf) goto L_1126019c;
  /* 11260190 jmp 0x112601a0 */
  goto L_112601a0;
L_11260192:;
  /* 11260192 mov dword ptr [0x11281790], 1 */
  w32((uint32_t)(0x11281790), (0x1u));
L_1126019c:;
  /* 1126019c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_112601a0:;
  /* 112601a0 jmp 0x112603f0 */
  goto L_112603f0;
L_112601a5:;
  /* 112601a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112601a8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 112601ab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112601af je 0x112601b9 */
  if (C.zf) goto L_112601b9;
  /* 112601b1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112601b5 je 0x112601c3 */
  if (C.zf) goto L_112601c3;
  /* 112601b7 jmp 0x112601c7 */
  goto L_112601c7;
L_112601b9:;
  /* 112601b9 mov dword ptr [0x11281790], 1 */
  w32((uint32_t)(0x11281790), (0x1u));
L_112601c3:;
  /* 112601c3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_112601c7:;
  /* 112601c7 jmp 0x112603f0 */
  goto L_112603f0;
L_112601cc:;
  /* 112601cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112601cf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 112601d2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112601d6 je 0x112601e0 */
  if (C.zf) goto L_112601e0;
  /* 112601d8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112601dc je 0x112601ea */
  if (C.zf) goto L_112601ea;
  /* 112601de jmp 0x112601ee */
  goto L_112601ee;
L_112601e0:;
  /* 112601e0 mov dword ptr [0x11281790], 1 */
  w32((uint32_t)(0x11281790), (0x1u));
L_112601ea:;
  /* 112601ea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_112601ee:;
  /* 112601ee jmp 0x112603f0 */
  goto L_112603f0;
L_112601f3:;
  /* 112601f3 push 0x1127cb7c */
  push32((uint32_t)(0x1127cb7cu));
  /* 112601f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112601fb push ecx */
  push32((uint32_t)(ECX));
  /* 112601fc call 0x11260a50 */
  push32(0x11260201u); f_11260a50();
  /* 11260201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260206 jne 0x11260213 */
  if (!C.zf) goto L_11260213;
  /* 11260208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126020b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126020e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11260211 jmp 0x11260231 */
  goto L_11260231;
L_11260213:;
  /* 11260213 push 0x1127cb78 */
  push32((uint32_t)(0x1127cb78u));
  /* 11260218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126021b push eax */
  push32((uint32_t)(EAX));
  /* 1126021c call 0x11260a50 */
  push32(0x11260221u); f_11260a50();
  /* 11260221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260226 jne 0x11260231 */
  if (!C.zf) goto L_11260231;
  /* 11260228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126022b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126022e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11260231:;
  /* 11260231 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11260235 jmp 0x112603f0 */
  goto L_112603f0;
L_1126023a:;
  /* 1126023a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1126023d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260241 jg 0x11260251 */
  if ((!C.zf&&C.sf==C.of)) goto L_11260251;
  /* 11260243 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260246 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1126024c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1126024f jmp 0x1126025d */
  goto L_1126025d;
L_11260251:;
  /* 11260251 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260254 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1126025a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1126025d:;
  /* 1126025d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260261 jle 0x11260304 */
  if ((C.zf||C.sf!=C.of)) goto L_11260304;
  /* 11260267 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1126026a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126026d jbe 0x11260304 */
  if ((C.cf||C.zf)) goto L_11260304;
  /* 11260273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11260276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260278 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1126027a mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 11260280 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260282 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11260286 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1126028c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1126028e je 0x112602c7 */
  if (C.zf) goto L_112602c7;
  /* 11260290 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260293 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260296 jbe 0x112602c7 */
  if ((C.cf||C.zf)) goto L_112602c7;
  /* 11260298 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126029b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1126029d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112602a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112602a2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112602a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112602a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112602a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112602ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112602af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112602b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112602b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112602b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112602ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112602bd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112602bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112602c2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112602c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112602c7:;
  /* 112602c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112602ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112602cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112602cf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112602d1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112602d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112602d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112602d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112602db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112602de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112602e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112602e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112602e6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112602e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112602ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112602ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112602f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112602f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112602f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112602f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112602fc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112602ff jmp 0x1126025d */
  goto L_1126025d;
L_11260304:;
  /* 11260304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11260307 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1126030a jmp 0x11260026 */
  goto L_11260026;
L_1126030f:;
  /* 1126030f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260312 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11260315 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11260317 je 0x112603e2 */
  if (C.zf) goto L_112603e2;
  /* 1126031d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260320 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260323 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11260326:;
  /* 11260326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260329 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1126032c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1126032e je 0x112603e0 */
  if (C.zf) goto L_112603e0;
  /* 11260334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260337 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126033a je 0x112603e0 */
  if (C.zf) goto L_112603e0;
  /* 11260340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260343 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11260346 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260349 jne 0x11260359 */
  if (!C.zf) goto L_11260359;
  /* 1126034b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126034e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260351 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11260354 jmp 0x112603e0 */
  goto L_112603e0;
L_11260359:;
  /* 11260359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126035c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1126035e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11260360 mov edx, dword ptr [0x1127efec] */
  EDX = (r32((uint32_t)(0x1127efec)));
  /* 11260366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260368 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1126036c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11260371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260373 je 0x112603ac */
  if (C.zf) goto L_112603ac;
  /* 11260375 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260378 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126037b jbe 0x112603ac */
  if ((C.cf||C.zf)) goto L_112603ac;
  /* 1126037d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11260382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260385 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11260387 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11260389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126038c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1126038e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260391 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260394 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11260396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126039c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1126039f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112603a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112603a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112603a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112603aa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112603ac:;
  /* 112603ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112603af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112603b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112603b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112603b6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112603b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112603bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112603bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112603c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112603c3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112603c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112603c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112603cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112603ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112603d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112603d3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112603d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112603d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112603db jmp 0x11260326 */
  goto L_11260326;
L_112603e0:;
  /* 112603e0 jmp 0x112603eb */
  goto L_112603eb;
L_112603e2:;
  /* 112603e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112603e5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112603e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112603eb:;
  /* 112603eb jmp 0x11260026 */
  goto L_11260026;
L_112603f0:;
  /* 112603f0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112603f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112603f6 je 0x1126041c */
  if (C.zf) goto L_1126041c;
  /* 112603f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112603fb push edx */
  push32((uint32_t)(EDX));
  /* 112603fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112603ff push eax */
  push32((uint32_t)(EAX));
  /* 11260400 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260403 push ecx */
  push32((uint32_t)(ECX));
  /* 11260404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11260407 push edx */
  push32((uint32_t)(EDX));
  /* 11260408 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1126040b push eax */
  push32((uint32_t)(EAX));
  /* 1126040c call 0x1125f850 */
  push32(0x11260411u); f_1125f850();
  /* 11260411 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11260417 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1126041a jmp 0x11260497 */
  goto L_11260497;
L_1126041c:;
  /* 1126041c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126041f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260421 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11260423 mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 11260429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1126042b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1126042f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11260435 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11260437 je 0x11260468 */
  if (C.zf) goto L_11260468;
  /* 11260439 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126043c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1126043e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260441 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11260443 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11260445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260448 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1126044a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126044d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260450 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11260452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260458 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1126045b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1126045e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11260460 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260463 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260466 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11260468:;
  /* 11260468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126046b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1126046d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260470 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11260472 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11260474 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260477 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11260479 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126047c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126047f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11260481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260487 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1126048a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1126048d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1126048f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260492 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260495 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11260497:;
  /* 11260497 jmp 0x11260026 */
  goto L_11260026;
L_1126049c:;
  /* 1126049c mov esp, ebp */
  ESP = (EBP);
  /* 1126049e pop ebp */
  EBP = (pop32());
  /* 1126049f ret  */
  ESPCHK(0x11260020u, _esp0);
  ESP += 4; return;
}

/* FUN_10020540 @ 0x11260540 (650 bytes, 178 insns) */
void f_11260540(void) {
  FTRACE(0x11260540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11260540 push ebp */
  push32((uint32_t)(EBP));
  /* 11260541 mov ebp, esp */
  EBP = (ESP);
  /* 11260543 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260549 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126054d jne 0x112606a9 */
  if (!C.zf) goto L_112606a9;
  /* 11260553 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260556 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1126055c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11260562 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11260565 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1126056c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11260576 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260578 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1126057e push edx */
  push32((uint32_t)(EDX));
  /* 1126057f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260582 push eax */
  push32((uint32_t)(EAX));
  /* 11260583 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260586 push ecx */
  push32((uint32_t)(ECX));
  /* 11260587 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1126058a push edx */
  push32((uint32_t)(EDX));
  /* 1126058b call 0x112618a0 */
  push32(0x11260590u); f_112618a0();
  /* 11260590 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260593 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11260596 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126059a jne 0x1126062f */
  if (!C.zf) goto L_1126062f;
  /* 112605a0 call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x112605a6u);
  /* 112605a6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112605a9 je 0x112605b0 */
  if (C.zf) goto L_112605b0;
  /* 112605ab jmp 0x1126068d */
  goto L_1126068d;
L_112605b0:;
  /* 112605b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112605b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112605b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112605b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112605b9 push eax */
  push32((uint32_t)(EAX));
  /* 112605ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112605bd push ecx */
  push32((uint32_t)(ECX));
  /* 112605be call 0x112618a0 */
  push32(0x112605c3u); f_112618a0();
  /* 112605c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112605c6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 112605cc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112605d3 jne 0x112605da */
  if (!C.zf) goto L_112605da;
  /* 112605d5 jmp 0x1126068d */
  goto L_1126068d;
L_112605da:;
  /* 112605da push 0x58 */
  push32((uint32_t)(0x58u));
  /* 112605dc push 0x1127cb84 */
  push32((uint32_t)(0x1127cb84u));
  /* 112605e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112605e3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 112605e9 push edx */
  push32((uint32_t)(EDX));
  /* 112605ea call 0x1124c820 */
  push32(0x112605efu); f_1124c820();
  /* 112605ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112605f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112605f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112605f9 jne 0x11260600 */
  if (!C.zf) goto L_11260600;
  /* 112605fb jmp 0x1126068d */
  goto L_1126068d;
L_11260600:;
  /* 11260600 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11260607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260609 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1126060f push eax */
  push32((uint32_t)(EAX));
  /* 11260610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260613 push ecx */
  push32((uint32_t)(ECX));
  /* 11260614 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260617 push edx */
  push32((uint32_t)(EDX));
  /* 11260618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1126061b push eax */
  push32((uint32_t)(EAX));
  /* 1126061c call 0x112618a0 */
  push32(0x11260621u); f_112618a0();
  /* 11260621 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260624 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11260627 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126062b jne 0x1126062f */
  if (!C.zf) goto L_1126062f;
  /* 1126062d jmp 0x1126068d */
  goto L_1126068d;
L_1126062f:;
  /* 1126062f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11260631 push 0x1127cb84 */
  push32((uint32_t)(0x1127cb84u));
  /* 11260636 push 2 */
  push32((uint32_t)(0x2u));
  /* 11260638 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126063b push ecx */
  push32((uint32_t)(ECX));
  /* 1126063c call 0x1124c820 */
  push32(0x11260641u); f_1124c820();
  /* 11260641 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260644 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1126064a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1126064c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11260652 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260655 jne 0x11260659 */
  if (!C.zf) goto L_11260659;
  /* 11260657 jmp 0x1126068d */
  goto L_1126068d;
L_11260659:;
  /* 11260659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126065c push ecx */
  push32((uint32_t)(ECX));
  /* 1126065d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260660 push edx */
  push32((uint32_t)(EDX));
  /* 11260661 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11260667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11260669 push ecx */
  push32((uint32_t)(ECX));
  /* 1126066a call 0x112517a0 */
  push32(0x1126066fu); f_112517a0();
  /* 1126066f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260672 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260676 je 0x11260686 */
  if (C.zf) goto L_11260686;
  /* 11260678 push 2 */
  push32((uint32_t)(0x2u));
  /* 1126067a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1126067d push edx */
  push32((uint32_t)(EDX));
  /* 1126067e call 0x1124d2b0 */
  push32(0x11260683u); f_1124d2b0();
  /* 11260683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11260686:;
  /* 11260686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260688 jmp 0x112607c6 */
  goto L_112607c6;
L_1126068d:;
  /* 1126068d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260691 je 0x112606a1 */
  if (C.zf) goto L_112606a1;
  /* 11260693 push 2 */
  push32((uint32_t)(0x2u));
  /* 11260695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11260698 push eax */
  push32((uint32_t)(EAX));
  /* 11260699 call 0x1124d2b0 */
  push32(0x1126069eu); f_1124d2b0();
  /* 1126069e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112606a1:;
  /* 112606a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112606a4 jmp 0x112607c6 */
  goto L_112607c6;
L_112606a9:;
  /* 112606a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112606ad jne 0x112607c3 */
  if (!C.zf) goto L_112607c3;
  /* 112606b3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 112606bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112606c0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 112606c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112606c8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 112606ce push edx */
  push32((uint32_t)(EDX));
  /* 112606cf push 0x11281764 */
  push32((uint32_t)(0x11281764u));
  /* 112606d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112606d7 push eax */
  push32((uint32_t)(EAX));
  /* 112606d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112606db push ecx */
  push32((uint32_t)(ECX));
  /* 112606dc call 0x11261700 */
  push32(0x112606e1u); f_11261700();
  /* 112606e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112606e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112606e6 jne 0x112606f0 */
  if (!C.zf) goto L_112606f0;
  /* 112606e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112606eb jmp 0x112607c6 */
  goto L_112607c6;
L_112606f0:;
  /* 112606f0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112606f6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112606f9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11260703 jmp 0x11260714 */
  goto L_11260714;
L_11260705:;
  /* 11260705 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1126070b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126070e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11260714:;
  /* 11260714 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126071b jge 0x112607bf */
  if ((C.sf==C.of)) goto L_112607bf;
  /* 11260721 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260728 jle 0x1126075b */
  if ((C.zf||C.sf!=C.of)) goto L_1126075b;
  /* 1126072a push 4 */
  push32((uint32_t)(0x4u));
  /* 1126072c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11260732 mov dl, byte ptr [ecx*2 + 0x11281764] */
  DL = (r8((uint32_t)(ECX*2 + 0x11281764)));
  /* 11260739 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1126073f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11260745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1126074a push eax */
  push32((uint32_t)(EAX));
  /* 1126074b call 0x11251ec0 */
  push32(0x11260750u); f_11251ec0();
  /* 11260750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260753 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11260759 jmp 0x1126078e */
  goto L_1126078e;
L_1126075b:;
  /* 1126075b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11260761 mov dl, byte ptr [ecx*2 + 0x11281764] */
  DL = (r8((uint32_t)(ECX*2 + 0x11281764)));
  /* 11260768 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1126076e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11260774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11260779 mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1126077f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260781 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11260785 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11260788 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1126078e:;
  /* 1126078e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260795 je 0x112607b8 */
  if (C.zf) goto L_112607b8;
  /* 11260797 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1126079d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112607a0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112607a3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 112607aa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 112607ae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112607b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112607b6 jmp 0x112607ba */
  goto L_112607ba;
L_112607b8:;
  /* 112607b8 jmp 0x112607bf */
  goto L_112607bf;
L_112607ba:;
  /* 112607ba jmp 0x11260705 */
  goto L_11260705;
L_112607bf:;
  /* 112607bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112607c1 jmp 0x112607c6 */
  goto L_112607c6;
L_112607c3:;
  /* 112607c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112607c6:;
  /* 112607c6 mov esp, ebp */
  ESP = (EBP);
  /* 112607c8 pop ebp */
  EBP = (pop32());
  /* 112607c9 ret  */
  ESPCHK(0x11260540u, _esp0);
  ESP += 4; return;
}

/* FUN_100207d0 @ 0x112607d0 (10 bytes, 5 insns) */
void f_112607d0(void) {
  FTRACE(0x112607d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112607d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112607d1 mov ebp, esp */
  EBP = (ESP);
  /* 112607d3 mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 112607d8 pop ebp */
  EBP = (pop32());
  /* 112607d9 ret  */
  ESPCHK(0x112607d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100207e0 @ 0x112607e0 (575 bytes, 196 insns) */
void f_112607e0(void) {
  FTRACE(0x112607e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112607e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112607e1 mov ebp, esp */
  EBP = (ESP);
  /* 112607e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112607e5 push 0x1127cb90 */
  push32((uint32_t)(0x1127cb90u));
  /* 112607ea push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 112607ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112607f5 push eax */
  push32((uint32_t)(EAX));
  /* 112607f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112607fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260800 push ebx */
  push32((uint32_t)(EBX));
  /* 11260801 push esi */
  push32((uint32_t)(ESI));
  /* 11260802 push edi */
  push32((uint32_t)(EDI));
  /* 11260803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11260806 cmp dword ptr [0x11281770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126080d jne 0x1126085e */
  if (!C.zf) goto L_1126085e;
  /* 1126080f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11260812 push eax */
  push32((uint32_t)(EAX));
  /* 11260813 push 1 */
  push32((uint32_t)(0x1u));
  /* 11260815 push 0x1127c2c4 */
  push32((uint32_t)(0x1127c2c4u));
  /* 1126081a push 1 */
  push32((uint32_t)(0x1u));
  /* 1126081c call dword ptr [0x11283388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283388))), 0x11260822u);
  /* 11260822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260824 je 0x11260832 */
  if (C.zf) goto L_11260832;
  /* 11260826 mov dword ptr [0x11281770], 1 */
  w32((uint32_t)(0x11281770), (0x1u));
  /* 11260830 jmp 0x1126085e */
  goto L_1126085e;
L_11260832:;
  /* 11260832 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11260835 push ecx */
  push32((uint32_t)(ECX));
  /* 11260836 push 1 */
  push32((uint32_t)(0x1u));
  /* 11260838 push 0x1127c2c0 */
  push32((uint32_t)(0x1127c2c0u));
  /* 1126083d push 1 */
  push32((uint32_t)(0x1u));
  /* 1126083f push 0 */
  push32((uint32_t)(0x0u));
  /* 11260841 call dword ptr [0x11283380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283380))), 0x11260847u);
  /* 11260847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260849 je 0x11260857 */
  if (C.zf) goto L_11260857;
  /* 1126084b mov dword ptr [0x11281770], 2 */
  w32((uint32_t)(0x11281770), (0x2u));
  /* 11260855 jmp 0x1126085e */
  goto L_1126085e;
L_11260857:;
  /* 11260857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260859 jmp 0x11260a39 */
  goto L_11260a39;
L_1126085e:;
  /* 1126085e cmp dword ptr [0x11281770], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281770))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260865 jne 0x11260882 */
  if (!C.zf) goto L_11260882;
  /* 11260867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1126086a push edx */
  push32((uint32_t)(EDX));
  /* 1126086b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126086e push eax */
  push32((uint32_t)(EAX));
  /* 1126086f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11260872 push ecx */
  push32((uint32_t)(ECX));
  /* 11260873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260876 push edx */
  push32((uint32_t)(EDX));
  /* 11260877 call dword ptr [0x11283388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283388))), 0x1126087du);
  /* 1126087d jmp 0x11260a39 */
  goto L_11260a39;
L_11260882:;
  /* 11260882 cmp dword ptr [0x11281770], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11281770))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260889 jne 0x11260a37 */
  if (!C.zf) goto L_11260a37;
  /* 1126088f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260893 jne 0x1126089d */
  if (!C.zf) goto L_1126089d;
  /* 11260895 mov eax, dword ptr [0x112816f0] */
  EAX = (r32((uint32_t)(0x112816f0)));
  /* 1126089a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1126089d:;
  /* 1126089d push 0 */
  push32((uint32_t)(0x0u));
  /* 1126089f push 0 */
  push32((uint32_t)(0x0u));
  /* 112608a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112608a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112608a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112608a8 push ecx */
  push32((uint32_t)(ECX));
  /* 112608a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112608ac push edx */
  push32((uint32_t)(EDX));
  /* 112608ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112608b2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112608b5 push eax */
  push32((uint32_t)(EAX));
  /* 112608b6 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x112608bcu);
  /* 112608bc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112608bf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112608c3 jne 0x112608cc */
  if (!C.zf) goto L_112608cc;
  /* 112608c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112608c7 jmp 0x11260a39 */
  goto L_11260a39;
L_112608cc:;
  /* 112608cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112608d3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112608d6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112608d9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112608db call 0x11251120 */
  push32(0x112608e0u); f_11251120();
  /* 112608e0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 112608e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112608e6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112608e9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112608ec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112608ef push edx */
  push32((uint32_t)(EDX));
  /* 112608f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112608f2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112608f5 push eax */
  push32((uint32_t)(EAX));
  /* 112608f6 call 0x11252c30 */
  push32(0x112608fbu); f_11252c30();
  /* 112608fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112608fe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11260905 jmp 0x1126091e */
  goto L_1126091e;
  /* 11260907 mov eax, 1 */
  EAX = (0x1u);
  /* 1126090c ret  */
  ESPCHK(0x112607e0u, _esp0);
  ESP += 4; return;
  /* 1126090d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11260910 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11260917 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1126091e:;
  /* 1126091e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260922 jne 0x1126092b */
  if (!C.zf) goto L_1126092b;
  /* 11260924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260926 jmp 0x11260a39 */
  goto L_11260a39;
L_1126092b:;
  /* 1126092b push 0 */
  push32((uint32_t)(0x0u));
  /* 1126092d push 0 */
  push32((uint32_t)(0x0u));
  /* 1126092f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11260932 push ecx */
  push32((uint32_t)(ECX));
  /* 11260933 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11260936 push edx */
  push32((uint32_t)(EDX));
  /* 11260937 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1126093a push eax */
  push32((uint32_t)(EAX));
  /* 1126093b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1126093e push ecx */
  push32((uint32_t)(ECX));
  /* 1126093f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11260944 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260947 push edx */
  push32((uint32_t)(EDX));
  /* 11260948 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x1126094eu);
  /* 1126094e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260950 jne 0x11260959 */
  if (!C.zf) goto L_11260959;
  /* 11260952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260954 jmp 0x11260a39 */
  goto L_11260a39;
L_11260959:;
  /* 11260959 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11260960 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11260963 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11260967 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126096a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1126096c call 0x11251120 */
  push32(0x11260971u); f_11251120();
  /* 11260971 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11260974 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11260977 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1126097a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1126097d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11260984 jmp 0x1126099d */
  goto L_1126099d;
  /* 11260986 mov eax, 1 */
  EAX = (0x1u);
  /* 1126098b ret  */
  ESPCHK(0x112607e0u, _esp0);
  ESP += 4; return;
  /* 1126098c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1126098f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11260996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1126099d:;
  /* 1126099d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112609a1 jne 0x112609aa */
  if (!C.zf) goto L_112609aa;
  /* 112609a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112609a5 jmp 0x11260a39 */
  goto L_11260a39;
L_112609aa:;
  /* 112609aa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112609ae jne 0x112609b9 */
  if (!C.zf) goto L_112609b9;
  /* 112609b0 mov edx, dword ptr [0x112816e0] */
  EDX = (r32((uint32_t)(0x112816e0)));
  /* 112609b6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_112609b9:;
  /* 112609b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112609bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112609bf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 112609c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112609c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112609cb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 112609d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112609d5 push ecx */
  push32((uint32_t)(ECX));
  /* 112609d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112609d9 push edx */
  push32((uint32_t)(EDX));
  /* 112609da mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112609dd push eax */
  push32((uint32_t)(EAX));
  /* 112609de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112609e1 push ecx */
  push32((uint32_t)(ECX));
  /* 112609e2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112609e5 push edx */
  push32((uint32_t)(EDX));
  /* 112609e6 call dword ptr [0x11283380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283380))), 0x112609ecu);
  /* 112609ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112609ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112609f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112609f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112609f7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 112609fc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260a02 je 0x11260a18 */
  if (C.zf) goto L_11260a18;
  /* 11260a04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260a07 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11260a0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260a0c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11260a10 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260a16 je 0x11260a1c */
  if (C.zf) goto L_11260a1c;
L_11260a18:;
  /* 11260a18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260a1a jmp 0x11260a39 */
  goto L_11260a39;
L_11260a1c:;
  /* 11260a1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260a1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11260a21 push eax */
  push32((uint32_t)(EAX));
  /* 11260a22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11260a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11260a26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260a29 push edx */
  push32((uint32_t)(EDX));
  /* 11260a2a call 0x11252c90 */
  push32(0x11260a2fu); f_11252c90();
  /* 11260a2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260a32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11260a35 jmp 0x11260a39 */
  goto L_11260a39;
L_11260a37:;
  /* 11260a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11260a39:;
  /* 11260a39 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11260a3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11260a3f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11260a46 pop edi */
  EDI = (pop32());
  /* 11260a47 pop esi */
  ESI = (pop32());
  /* 11260a48 pop ebx */
  EBX = (pop32());
  /* 11260a49 mov esp, ebp */
  ESP = (EBP);
  /* 11260a4b pop ebp */
  EBP = (pop32());
  /* 11260a4c ret  */
  ESPCHK(0x112607e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020a50 @ 0x11260a50 (208 bytes, 85 insns) */
void f_11260a50(void) {
  FTRACE(0x11260a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11260a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11260a51 mov ebp, esp */
  EBP = (ESP);
  /* 11260a53 push edi */
  push32((uint32_t)(EDI));
  /* 11260a54 push esi */
  push32((uint32_t)(ESI));
  /* 11260a55 push ebx */
  push32((uint32_t)(EBX));
  /* 11260a56 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11260a59 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11260a5c lea eax, [0x112816d8] */
  EAX = ((uint32_t)(0x112816d8));
  /* 11260a62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260a66 jne 0x11260aa3 */
  if (!C.zf) goto L_11260aa3;
  /* 11260a68 mov al, 0xff */
  AL = (0xffu);
  /* 11260a6a mov edi, edi */
  EDI = (EDI);
L_11260a6c:;
  /* 11260a6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11260a6e je 0x11260a9e */
  if (C.zf) goto L_11260a9e;
  /* 11260a70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11260a72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11260a73 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11260a75 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11260a76 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260a78 je 0x11260a6c */
  if (C.zf) goto L_11260a6c;
  /* 11260a7a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11260a7c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260a7e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11260a80 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11260a83 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11260a85 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11260a87 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11260a89 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11260a8b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260a8d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11260a8f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11260a92 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11260a94 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11260a96 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260a98 je 0x11260a6c */
  if (C.zf) goto L_11260a6c;
  /* 11260a9a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11260a9c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11260a9e:;
  /* 11260a9e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11260aa1 jmp 0x11260b1b */
  goto L_11260b1b;
L_11260aa3:;
  /* 11260aa3 lock inc dword ptr [0x11282af4] */
  x86_unimpl("lock inc @ 0x11260aa3");
  /* 11260aaa cmp dword ptr [0x11282ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260ab1 jg 0x11260ab7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11260ab7;
  /* 11260ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260ab5 jmp 0x11260acc */
  goto L_11260acc;
L_11260ab7:;
  /* 11260ab7 lock dec dword ptr [0x11282af4] */
  x86_unimpl("lock dec @ 0x11260ab7");
  /* 11260abe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11260ac0 call 0x1124c720 */
  push32(0x11260ac5u); f_1124c720();
  /* 11260ac5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11260acc:;
  /* 11260acc mov eax, 0xff */
  EAX = (0xffu);
  /* 11260ad1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11260ad3 nop  */
  /* nop */
L_11260ad4:;
  /* 11260ad4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11260ad6 je 0x11260aff */
  if (C.zf) goto L_11260aff;
  /* 11260ad8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11260ada inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11260adb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11260add inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11260ade cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260ae0 je 0x11260ad4 */
  if (C.zf) goto L_11260ad4;
  /* 11260ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11260ae3 push ebx */
  push32((uint32_t)(EBX));
  /* 11260ae4 call 0x11252030 */
  push32(0x11260ae9u); f_11252030();
  /* 11260ae9 mov ebx, eax */
  EBX = (EAX);
  /* 11260aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260aee call 0x11252030 */
  push32(0x11260af3u); f_11252030();
  /* 11260af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260af6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260af8 je 0x11260ad4 */
  if (C.zf) goto L_11260ad4;
  /* 11260afa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11260afc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11260aff:;
  /* 11260aff mov ebx, eax */
  EBX = (EAX);
  /* 11260b01 pop eax */
  EAX = (pop32());
  /* 11260b02 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260b04 jne 0x11260b0f */
  if (!C.zf) goto L_11260b0f;
  /* 11260b06 lock dec dword ptr [0x11282af4] */
  x86_unimpl("lock dec @ 0x11260b06");
  /* 11260b0d jmp 0x11260b19 */
  goto L_11260b19;
L_11260b0f:;
  /* 11260b0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11260b11 call 0x1124c7c0 */
  push32(0x11260b16u); f_1124c7c0();
  /* 11260b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11260b19:;
  /* 11260b19 mov eax, ebx */
  EAX = (EBX);
L_11260b1b:;
  /* 11260b1b pop ebx */
  EBX = (pop32());
  /* 11260b1c pop esi */
  ESI = (pop32());
  /* 11260b1d pop edi */
  EDI = (pop32());
  /* 11260b1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11260b1f ret  */
  ESPCHK(0x11260a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10020b20 @ 0x11260b20 (257 bytes, 103 insns) */
void f_11260b20(void) {
  FTRACE(0x11260b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11260b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11260b21 mov ebp, esp */
  EBP = (ESP);
  /* 11260b23 push edi */
  push32((uint32_t)(EDI));
  /* 11260b24 push esi */
  push32((uint32_t)(ESI));
  /* 11260b25 push ebx */
  push32((uint32_t)(EBX));
  /* 11260b26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260b29 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260b2b je 0x11260c1a */
  if (C.zf) goto L_11260c1a;
  /* 11260b31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11260b34 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11260b37 lea eax, [0x112816d8] */
  EAX = ((uint32_t)(0x112816d8));
  /* 11260b3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260b41 jne 0x11260b91 */
  if (!C.zf) goto L_11260b91;
  /* 11260b43 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11260b45 mov bl, 0x5a */
  BL = (0x5au);
  /* 11260b47 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11260b49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11260b4c:;
  /* 11260b4c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11260b4e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11260b50 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11260b52 je 0x11260b75 */
  if (C.zf) goto L_11260b75;
  /* 11260b54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11260b56 je 0x11260b75 */
  if (C.zf) goto L_11260b75;
  /* 11260b58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11260b59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11260b5a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260b5c jb 0x11260b64 */
  if (C.cf) goto L_11260b64;
  /* 11260b5e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260b60 ja 0x11260b64 */
  if ((!C.cf&&!C.zf)) goto L_11260b64;
  /* 11260b62 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11260b64:;
  /* 11260b64 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260b66 jb 0x11260b6e */
  if (C.cf) goto L_11260b6e;
  /* 11260b68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260b6a ja 0x11260b6e */
  if ((!C.cf&&!C.zf)) goto L_11260b6e;
  /* 11260b6c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11260b6e:;
  /* 11260b6e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260b70 jne 0x11260b7f */
  if (!C.zf) goto L_11260b7f;
  /* 11260b72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11260b73 jne 0x11260b4c */
  if (!C.zf) goto L_11260b4c;
L_11260b75:;
  /* 11260b75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260b77 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11260b79 je 0x11260c1a */
  if (C.zf) goto L_11260c1a;
L_11260b7f:;
  /* 11260b7f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11260b84 jb 0x11260c1a */
  if (C.cf) goto L_11260c1a;
  /* 11260b8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11260b8c jmp 0x11260c1a */
  goto L_11260c1a;
L_11260b91:;
  /* 11260b91 lock inc dword ptr [0x11282af4] */
  x86_unimpl("lock inc @ 0x11260b91");
  /* 11260b98 cmp dword ptr [0x11282ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260b9f jg 0x11260ba5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11260ba5;
  /* 11260ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260ba3 jmp 0x11260bbe */
  goto L_11260bbe;
L_11260ba5:;
  /* 11260ba5 lock dec dword ptr [0x11282af4] */
  x86_unimpl("lock dec @ 0x11260ba5");
  /* 11260bac mov ebx, ecx */
  EBX = (ECX);
  /* 11260bae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11260bb0 call 0x1124c720 */
  push32(0x11260bb5u); f_1124c720();
  /* 11260bb5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11260bbc mov ecx, ebx */
  ECX = (EBX);
L_11260bbe:;
  /* 11260bbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260bc0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11260bc2 mov edi, edi */
  EDI = (EDI);
L_11260bc4:;
  /* 11260bc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11260bc6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260bc8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11260bca je 0x11260bef */
  if (C.zf) goto L_11260bef;
  /* 11260bcc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11260bce je 0x11260bef */
  if (C.zf) goto L_11260bef;
  /* 11260bd0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11260bd1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11260bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11260bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11260bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11260bd5 call 0x11252030 */
  push32(0x11260bdau); f_11252030();
  /* 11260bda mov ebx, eax */
  EBX = (EAX);
  /* 11260bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260bdf call 0x11252030 */
  push32(0x11260be4u); f_11252030();
  /* 11260be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260be7 pop ecx */
  ECX = (pop32());
  /* 11260be8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260bea jne 0x11260bf5 */
  if (!C.zf) goto L_11260bf5;
  /* 11260bec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11260bed jne 0x11260bc4 */
  if (!C.zf) goto L_11260bc4;
L_11260bef:;
  /* 11260bef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260bf1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260bf3 je 0x11260bfe */
  if (C.zf) goto L_11260bfe;
L_11260bf5:;
  /* 11260bf5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11260bfa jb 0x11260bfe */
  if (C.cf) goto L_11260bfe;
  /* 11260bfc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11260bfe:;
  /* 11260bfe pop eax */
  EAX = (pop32());
  /* 11260bff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260c01 jne 0x11260c0c */
  if (!C.zf) goto L_11260c0c;
  /* 11260c03 lock dec dword ptr [0x11282af4] */
  x86_unimpl("lock dec @ 0x11260c03");
  /* 11260c0a jmp 0x11260c1a */
  goto L_11260c1a;
L_11260c0c:;
  /* 11260c0c mov ebx, ecx */
  EBX = (ECX);
  /* 11260c0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11260c10 call 0x1124c7c0 */
  push32(0x11260c15u); f_1124c7c0();
  /* 11260c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260c18 mov ecx, ebx */
  ECX = (EBX);
L_11260c1a:;
  /* 11260c1a mov eax, ecx */
  EAX = (ECX);
  /* 11260c1c pop ebx */
  EBX = (pop32());
  /* 11260c1d pop esi */
  ESI = (pop32());
  /* 11260c1e pop edi */
  EDI = (pop32());
  /* 11260c1f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11260c20 ret  */
  ESPCHK(0x11260b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10020c30 @ 0x11260c30 (970 bytes, 340 insns) */
void f_11260c30(void) {
  FTRACE(0x11260c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11260c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11260c31 mov ebp, esp */
  EBP = (ESP);
  /* 11260c33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11260c35 push 0x1127cbf0 */
  push32((uint32_t)(0x1127cbf0u));
  /* 11260c3a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 11260c3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11260c45 push eax */
  push32((uint32_t)(EAX));
  /* 11260c46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11260c4d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260c50 push ebx */
  push32((uint32_t)(EBX));
  /* 11260c51 push esi */
  push32((uint32_t)(ESI));
  /* 11260c52 push edi */
  push32((uint32_t)(EDI));
  /* 11260c53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11260c56 cmp dword ptr [0x11281774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260c5d jne 0x11260cb6 */
  if (!C.zf) goto L_11260cb6;
  /* 11260c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11260c61 push 0x1127c2c4 */
  push32((uint32_t)(0x1127c2c4u));
  /* 11260c66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11260c68 push 0x1127c2c4 */
  push32((uint32_t)(0x1127c2c4u));
  /* 11260c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11260c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11260c71 call dword ptr [0x11283348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283348))), 0x11260c77u);
  /* 11260c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260c79 je 0x11260c87 */
  if (C.zf) goto L_11260c87;
  /* 11260c7b mov dword ptr [0x11281774], 1 */
  w32((uint32_t)(0x11281774), (0x1u));
  /* 11260c85 jmp 0x11260cb6 */
  goto L_11260cb6;
L_11260c87:;
  /* 11260c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11260c89 push 0x1127c2c0 */
  push32((uint32_t)(0x1127c2c0u));
  /* 11260c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11260c90 push 0x1127c2c0 */
  push32((uint32_t)(0x1127c2c0u));
  /* 11260c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260c99 call dword ptr [0x11283358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283358))), 0x11260c9fu);
  /* 11260c9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260ca1 je 0x11260caf */
  if (C.zf) goto L_11260caf;
  /* 11260ca3 mov dword ptr [0x11281774], 2 */
  w32((uint32_t)(0x11281774), (0x2u));
  /* 11260cad jmp 0x11260cb6 */
  goto L_11260cb6;
L_11260caf:;
  /* 11260caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260cb1 jmp 0x11261014 */
  goto L_11261014;
L_11260cb6:;
  /* 11260cb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260cba jle 0x11260ccf */
  if ((C.zf||C.sf!=C.of)) goto L_11260ccf;
  /* 11260cbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260cbf push eax */
  push32((uint32_t)(EAX));
  /* 11260cc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11260cc4 call 0x11261030 */
  push32(0x11260cc9u); f_11261030();
  /* 11260cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260ccc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11260ccf:;
  /* 11260ccf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260cd3 jle 0x11260ce8 */
  if ((C.zf||C.sf!=C.of)) goto L_11260ce8;
  /* 11260cd5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11260cd8 push edx */
  push32((uint32_t)(EDX));
  /* 11260cd9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260cdc push eax */
  push32((uint32_t)(EAX));
  /* 11260cdd call 0x11261030 */
  push32(0x11260ce2u); f_11261030();
  /* 11260ce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260ce5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11260ce8:;
  /* 11260ce8 cmp dword ptr [0x11281774], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11281774))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260cef jne 0x11260d14 */
  if (!C.zf) goto L_11260d14;
  /* 11260cf1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11260cf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11260cf5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260cf8 push edx */
  push32((uint32_t)(EDX));
  /* 11260cf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260cfc push eax */
  push32((uint32_t)(EAX));
  /* 11260cfd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260d00 push ecx */
  push32((uint32_t)(ECX));
  /* 11260d01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11260d04 push edx */
  push32((uint32_t)(EDX));
  /* 11260d05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11260d08 push eax */
  push32((uint32_t)(EAX));
  /* 11260d09 call dword ptr [0x11283358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283358))), 0x11260d0fu);
  /* 11260d0f jmp 0x11261014 */
  goto L_11261014;
L_11260d14:;
  /* 11260d14 cmp dword ptr [0x11281774], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281774))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d1b jne 0x11261012 */
  if (!C.zf) goto L_11261012;
  /* 11260d21 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d25 jne 0x11260d30 */
  if (!C.zf) goto L_11260d30;
  /* 11260d27 mov ecx, dword ptr [0x112816f0] */
  ECX = (r32((uint32_t)(0x112816f0)));
  /* 11260d2d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11260d30:;
  /* 11260d30 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d34 je 0x11260d40 */
  if (C.zf) goto L_11260d40;
  /* 11260d36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d3a jne 0x11260ebc */
  if (!C.zf) goto L_11260ebc;
L_11260d40:;
  /* 11260d40 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260d43 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d46 jne 0x11260d52 */
  if (!C.zf) goto L_11260d52;
  /* 11260d48 mov eax, 2 */
  EAX = (0x2u);
  /* 11260d4d jmp 0x11261014 */
  goto L_11261014;
L_11260d52:;
  /* 11260d52 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d56 jle 0x11260d62 */
  if ((C.zf||C.sf!=C.of)) goto L_11260d62;
  /* 11260d58 mov eax, 1 */
  EAX = (0x1u);
  /* 11260d5d jmp 0x11261014 */
  goto L_11261014;
L_11260d62:;
  /* 11260d62 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d66 jle 0x11260d72 */
  if ((C.zf||C.sf!=C.of)) goto L_11260d72;
  /* 11260d68 mov eax, 3 */
  EAX = (0x3u);
  /* 11260d6d jmp 0x11261014 */
  goto L_11261014;
L_11260d72:;
  /* 11260d72 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11260d75 push eax */
  push32((uint32_t)(EAX));
  /* 11260d76 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11260d79 push ecx */
  push32((uint32_t)(ECX));
  /* 11260d7a call dword ptr [0x112833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a0))), 0x11260d80u);
  /* 11260d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260d82 jne 0x11260d8b */
  if (!C.zf) goto L_11260d8b;
  /* 11260d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260d86 jmp 0x11261014 */
  goto L_11261014;
L_11260d8b:;
  /* 11260d8b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d8f jne 0x11260d97 */
  if (!C.zf) goto L_11260d97;
  /* 11260d91 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d95 je 0x11260dc4 */
  if (C.zf) goto L_11260dc4;
L_11260d97:;
  /* 11260d97 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260d9b jne 0x11260da3 */
  if (!C.zf) goto L_11260da3;
  /* 11260d9d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260da1 je 0x11260dc4 */
  if (C.zf) goto L_11260dc4;
L_11260da3:;
  /* 11260da3 push 0x1127cbb0 */
  push32((uint32_t)(0x1127cbb0u));
  /* 11260da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11260daa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11260daf push 0x1127cba8 */
  push32((uint32_t)(0x1127cba8u));
  /* 11260db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11260db6 call 0x1124b3e0 */
  push32(0x11260dbbu); f_1124b3e0();
  /* 11260dbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11260dbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260dc1 jne 0x11260dc4 */
  if (!C.zf) goto L_11260dc4;
  /* 11260dc3 int3  */
  x86_unimpl("int3 @ 0x11260dc3");
L_11260dc4:;
  /* 11260dc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260dc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11260dc8 jne 0x11260d8b */
  if (!C.zf) goto L_11260d8b;
  /* 11260dca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260dce jle 0x11260e43 */
  if ((C.zf||C.sf!=C.of)) goto L_11260e43;
  /* 11260dd0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260dd4 jae 0x11260de0 */
  if (!C.cf) goto L_11260de0;
  /* 11260dd6 mov eax, 3 */
  EAX = (0x3u);
  /* 11260ddb jmp 0x11261014 */
  goto L_11261014;
L_11260de0:;
  /* 11260de0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11260de3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11260de6 jmp 0x11260df1 */
  goto L_11260df1;
L_11260de8:;
  /* 11260de8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260deb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260dee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11260df1:;
  /* 11260df1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260df4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260df6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11260df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260dfa je 0x11260e39 */
  if (C.zf) goto L_11260e39;
  /* 11260dfc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260dff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260e01 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11260e04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11260e06 je 0x11260e39 */
  if (C.zf) goto L_11260e39;
  /* 11260e08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260e0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260e0d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11260e0f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260e14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11260e16 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260e18 jl 0x11260e37 */
  if ((C.sf!=C.of)) goto L_11260e37;
  /* 11260e1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260e1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260e1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11260e21 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260e26 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11260e29 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260e2b jg 0x11260e37 */
  if ((!C.zf&&C.sf==C.of)) goto L_11260e37;
  /* 11260e2d mov eax, 2 */
  EAX = (0x2u);
  /* 11260e32 jmp 0x11261014 */
  goto L_11261014;
L_11260e37:;
  /* 11260e37 jmp 0x11260de8 */
  goto L_11260de8;
L_11260e39:;
  /* 11260e39 mov eax, 3 */
  EAX = (0x3u);
  /* 11260e3e jmp 0x11261014 */
  goto L_11261014;
L_11260e43:;
  /* 11260e43 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260e47 jle 0x11260ebc */
  if ((C.zf||C.sf!=C.of)) goto L_11260ebc;
  /* 11260e49 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260e4d jae 0x11260e59 */
  if (!C.cf) goto L_11260e59;
  /* 11260e4f mov eax, 1 */
  EAX = (0x1u);
  /* 11260e54 jmp 0x11261014 */
  goto L_11261014;
L_11260e59:;
  /* 11260e59 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11260e5c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11260e5f jmp 0x11260e6a */
  goto L_11260e6a;
L_11260e61:;
  /* 11260e61 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e64 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260e67 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11260e6a:;
  /* 11260e6a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260e6f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11260e71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11260e73 je 0x11260eb2 */
  if (C.zf) goto L_11260eb2;
  /* 11260e75 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260e7a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11260e7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11260e7f je 0x11260eb2 */
  if (C.zf) goto L_11260eb2;
  /* 11260e81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260e86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11260e88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11260e8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11260e8f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260e91 jl 0x11260eb0 */
  if ((C.sf!=C.of)) goto L_11260eb0;
  /* 11260e93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260e96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11260e98 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11260e9a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11260e9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260e9f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11260ea2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260ea4 jg 0x11260eb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11260eb0;
  /* 11260ea6 mov eax, 2 */
  EAX = (0x2u);
  /* 11260eab jmp 0x11261014 */
  goto L_11261014;
L_11260eb0:;
  /* 11260eb0 jmp 0x11260e61 */
  goto L_11260e61;
L_11260eb2:;
  /* 11260eb2 mov eax, 1 */
  EAX = (0x1u);
  /* 11260eb7 jmp 0x11261014 */
  goto L_11261014;
L_11260ebc:;
  /* 11260ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11260ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11260ec0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11260ec4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260ec7 push edx */
  push32((uint32_t)(EDX));
  /* 11260ec8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11260eca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11260ecd push eax */
  push32((uint32_t)(EAX));
  /* 11260ece call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11260ed4u);
  /* 11260ed4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11260ed7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260edb jne 0x11260ee4 */
  if (!C.zf) goto L_11260ee4;
  /* 11260edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260edf jmp 0x11261014 */
  goto L_11261014;
L_11260ee4:;
  /* 11260ee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11260eeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11260eee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11260ef0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260ef3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11260ef5 call 0x11251120 */
  push32(0x11260efau); f_11251120();
  /* 11260efa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11260efd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11260f00 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11260f03 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11260f06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11260f0d jmp 0x11260f26 */
  goto L_11260f26;
  /* 11260f0f mov eax, 1 */
  EAX = (0x1u);
  /* 11260f14 ret  */
  ESPCHK(0x11260c30u, _esp0);
  ESP += 4; return;
  /* 11260f15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11260f18 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11260f1f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11260f26:;
  /* 11260f26 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260f2a jne 0x11260f33 */
  if (!C.zf) goto L_11260f33;
  /* 11260f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260f2e jmp 0x11261014 */
  goto L_11261014;
L_11260f33:;
  /* 11260f33 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11260f36 push edx */
  push32((uint32_t)(EDX));
  /* 11260f37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11260f3a push eax */
  push32((uint32_t)(EAX));
  /* 11260f3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11260f3e push ecx */
  push32((uint32_t)(ECX));
  /* 11260f3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11260f42 push edx */
  push32((uint32_t)(EDX));
  /* 11260f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11260f45 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11260f48 push eax */
  push32((uint32_t)(EAX));
  /* 11260f49 call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11260f4fu);
  /* 11260f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260f51 jne 0x11260f5a */
  if (!C.zf) goto L_11260f5a;
  /* 11260f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260f55 jmp 0x11261014 */
  goto L_11261014;
L_11260f5a:;
  /* 11260f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11260f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11260f5e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11260f61 push ecx */
  push32((uint32_t)(ECX));
  /* 11260f62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260f65 push edx */
  push32((uint32_t)(EDX));
  /* 11260f66 push 9 */
  push32((uint32_t)(0x9u));
  /* 11260f68 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11260f6b push eax */
  push32((uint32_t)(EAX));
  /* 11260f6c call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11260f72u);
  /* 11260f72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11260f75 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260f79 jne 0x11260f82 */
  if (!C.zf) goto L_11260f82;
  /* 11260f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260f7d jmp 0x11261014 */
  goto L_11261014;
L_11260f82:;
  /* 11260f82 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11260f89 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11260f8c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11260f8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11260f91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11260f93 call 0x11251120 */
  push32(0x11260f98u); f_11251120();
  /* 11260f98 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11260f9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11260f9e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11260fa1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11260fa4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11260fab jmp 0x11260fc4 */
  goto L_11260fc4;
  /* 11260fad mov eax, 1 */
  EAX = (0x1u);
  /* 11260fb2 ret  */
  ESPCHK(0x11260c30u, _esp0);
  ESP += 4; return;
  /* 11260fb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11260fb6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11260fbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11260fc4:;
  /* 11260fc4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11260fc8 jne 0x11260fce */
  if (!C.zf) goto L_11260fce;
  /* 11260fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260fcc jmp 0x11261014 */
  goto L_11261014;
L_11260fce:;
  /* 11260fce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11260fd1 push edx */
  push32((uint32_t)(EDX));
  /* 11260fd2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11260fd5 push eax */
  push32((uint32_t)(EAX));
  /* 11260fd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11260fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11260fda mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11260fdd push edx */
  push32((uint32_t)(EDX));
  /* 11260fde push 1 */
  push32((uint32_t)(0x1u));
  /* 11260fe0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11260fe3 push eax */
  push32((uint32_t)(EAX));
  /* 11260fe4 call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11260feau);
  /* 11260fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11260fec jne 0x11260ff2 */
  if (!C.zf) goto L_11260ff2;
  /* 11260fee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11260ff0 jmp 0x11261014 */
  goto L_11261014;
L_11260ff2:;
  /* 11260ff2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11260ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 11260ff6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11260ff9 push edx */
  push32((uint32_t)(EDX));
  /* 11260ffa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11260ffd push eax */
  push32((uint32_t)(EAX));
  /* 11260ffe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11261001 push ecx */
  push32((uint32_t)(ECX));
  /* 11261002 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261005 push edx */
  push32((uint32_t)(EDX));
  /* 11261006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261009 push eax */
  push32((uint32_t)(EAX));
  /* 1126100a call dword ptr [0x11283348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283348))), 0x11261010u);
  /* 11261010 jmp 0x11261014 */
  goto L_11261014;
L_11261012:;
  /* 11261012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11261014:;
  /* 11261014 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11261017 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1126101a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11261021 pop edi */
  EDI = (pop32());
  /* 11261022 pop esi */
  ESI = (pop32());
  /* 11261023 pop ebx */
  EBX = (pop32());
  /* 11261024 mov esp, ebp */
  ESP = (EBP);
  /* 11261026 pop ebp */
  EBP = (pop32());
  /* 11261027 ret  */
  ESPCHK(0x11260c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10021030 @ 0x11261030 (80 bytes, 32 insns) */
void f_11261030(void) {
  FTRACE(0x11261030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261030 push ebp */
  push32((uint32_t)(EBP));
  /* 11261031 mov ebp, esp */
  EBP = (ESP);
  /* 11261033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11261036 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261039 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1126103c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126103f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11261042:;
  /* 11261042 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261045 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261048 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1126104b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1126104e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11261050 je 0x11261067 */
  if (C.zf) goto L_11261067;
  /* 11261052 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261055 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11261058 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1126105a je 0x11261067 */
  if (C.zf) goto L_11261067;
  /* 1126105c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1126105f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261062 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11261065 jmp 0x11261042 */
  goto L_11261042;
L_11261067:;
  /* 11261067 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1126106a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1126106d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1126106f jne 0x11261079 */
  if (!C.zf) goto L_11261079;
  /* 11261071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261074 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11261077 jmp 0x1126107c */
  goto L_1126107c;
L_11261079:;
  /* 11261079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1126107c:;
  /* 1126107c mov esp, ebp */
  ESP = (EBP);
  /* 1126107e pop ebp */
  EBP = (pop32());
  /* 1126107f ret  */
  ESPCHK(0x11261030u, _esp0);
  ESP += 4; return;
}

/* FUN_10021080 @ 0x11261080 (736 bytes, 224 insns) */
void f_11261080(void) {
  FTRACE(0x11261080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261080 push ebp */
  push32((uint32_t)(EBP));
  /* 11261081 mov ebp, esp */
  EBP = (ESP);
  /* 11261083 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11261086 push esi */
  push32((uint32_t)(ESI));
  /* 11261087 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126108b je 0x112610ac */
  if (C.zf) goto L_112610ac;
  /* 1126108d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1126108f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261092 push eax */
  push32((uint32_t)(EAX));
  /* 11261093 call 0x11261a50 */
  push32(0x11261098u); f_11261a50();
  /* 11261098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1126109b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1126109e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112610a2 je 0x112610ac */
  if (C.zf) goto L_112610ac;
  /* 112610a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112610a7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112610aa jne 0x112610b4 */
  if (!C.zf) goto L_112610b4;
L_112610ac:;
  /* 112610ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112610af jmp 0x1126135b */
  goto L_1126135b;
L_112610b4:;
  /* 112610b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112610b7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112610bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112610bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112610bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112610c0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112610c3 mov ecx, dword ptr [0x112814a4] */
  ECX = (r32((uint32_t)(0x112814a4)));
  /* 112610c9 cmp ecx, dword ptr [0x112814a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112814a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112610cf jne 0x112610e5 */
  if (!C.zf) goto L_112610e5;
  /* 112610d1 mov edx, dword ptr [0x112814a4] */
  EDX = (r32((uint32_t)(0x112814a4)));
  /* 112610d7 push edx */
  push32((uint32_t)(EDX));
  /* 112610d8 call 0x112613e0 */
  push32(0x112610ddu); f_112613e0();
  /* 112610dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112610e0 mov dword ptr [0x112814a4], eax */
  w32((uint32_t)(0x112814a4), (EAX));
L_112610e5:;
  /* 112610e5 cmp dword ptr [0x112814a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112610ec jne 0x112611a5 */
  if (!C.zf) goto L_112611a5;
  /* 112610f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112610f6 je 0x11261117 */
  if (C.zf) goto L_11261117;
  /* 112610f8 cmp dword ptr [0x112814ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112610ff je 0x11261117 */
  if (C.zf) goto L_11261117;
  /* 11261101 call 0x1125e6c0 */
  push32(0x11261106u); f_1125e6c0();
  /* 11261106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261108 je 0x11261112 */
  if (C.zf) goto L_11261112;
  /* 1126110a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1126110d jmp 0x1126135b */
  goto L_1126135b;
L_11261112:;
  /* 11261112 jmp 0x112611a5 */
  goto L_112611a5;
L_11261117:;
  /* 11261117 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126111b je 0x11261124 */
  if (C.zf) goto L_11261124;
  /* 1126111d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1126111f jmp 0x1126135b */
  goto L_1126135b;
L_11261124:;
  /* 11261124 cmp dword ptr [0x112814a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126112b jne 0x11261164 */
  if (!C.zf) goto L_11261164;
  /* 1126112d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11261132 push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 11261137 push 2 */
  push32((uint32_t)(0x2u));
  /* 11261139 push 4 */
  push32((uint32_t)(0x4u));
  /* 1126113b call 0x1124c820 */
  push32(0x11261140u); f_1124c820();
  /* 11261140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261143 mov dword ptr [0x112814a4], eax */
  w32((uint32_t)(0x112814a4), (EAX));
  /* 11261148 cmp dword ptr [0x112814a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126114f jne 0x11261159 */
  if (!C.zf) goto L_11261159;
  /* 11261151 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261154 jmp 0x1126135b */
  goto L_1126135b;
L_11261159:;
  /* 11261159 mov eax, dword ptr [0x112814a4] */
  EAX = (r32((uint32_t)(0x112814a4)));
  /* 1126115e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11261164:;
  /* 11261164 cmp dword ptr [0x112814ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126116b jne 0x112611a5 */
  if (!C.zf) goto L_112611a5;
  /* 1126116d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11261172 push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 11261177 push 2 */
  push32((uint32_t)(0x2u));
  /* 11261179 push 4 */
  push32((uint32_t)(0x4u));
  /* 1126117b call 0x1124c820 */
  push32(0x11261180u); f_1124c820();
  /* 11261180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261183 mov dword ptr [0x112814ac], eax */
  w32((uint32_t)(0x112814ac), (EAX));
  /* 11261188 cmp dword ptr [0x112814ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126118f jne 0x11261199 */
  if (!C.zf) goto L_11261199;
  /* 11261191 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261194 jmp 0x1126135b */
  goto L_1126135b;
L_11261199:;
  /* 11261199 mov ecx, dword ptr [0x112814ac] */
  ECX = (r32((uint32_t)(0x112814ac)));
  /* 1126119f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_112611a5:;
  /* 112611a5 mov edx, dword ptr [0x112814a4] */
  EDX = (r32((uint32_t)(0x112814a4)));
  /* 112611ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112611ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112611b1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112611b4 push eax */
  push32((uint32_t)(EAX));
  /* 112611b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112611b8 push ecx */
  push32((uint32_t)(ECX));
  /* 112611b9 call 0x11261360 */
  push32(0x112611beu); f_11261360();
  /* 112611be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112611c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112611c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112611c8 jl 0x11261261 */
  if ((C.sf!=C.of)) goto L_11261261;
  /* 112611ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112611d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112611d4 je 0x11261261 */
  if (C.zf) goto L_11261261;
  /* 112611da cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112611de je 0x11261253 */
  if (C.zf) goto L_11261253;
  /* 112611e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112611e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112611e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112611e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112611eb push edx */
  push32((uint32_t)(EDX));
  /* 112611ec call 0x1124d2b0 */
  push32(0x112611f1u); f_1124d2b0();
  /* 112611f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112611f4 jmp 0x112611ff */
  goto L_112611ff;
L_112611f6:;
  /* 112611f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112611f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112611fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112611ff:;
  /* 112611ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261202 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261205 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261209 je 0x11261220 */
  if (C.zf) goto L_11261220;
  /* 1126120b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126120e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261211 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261214 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11261217 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1126121b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1126121e jmp 0x112611f6 */
  goto L_112611f6;
L_11261220:;
  /* 11261220 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11261225 push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 1126122a push 2 */
  push32((uint32_t)(0x2u));
  /* 1126122c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126122f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11261232 push eax */
  push32((uint32_t)(EAX));
  /* 11261233 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261236 push ecx */
  push32((uint32_t)(ECX));
  /* 11261237 call 0x1124ccb0 */
  push32(0x1126123cu); f_1124ccb0();
  /* 1126123c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1126123f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11261242 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261246 je 0x11261251 */
  if (C.zf) goto L_11261251;
  /* 11261248 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1126124b mov dword ptr [0x112814a4], edx */
  w32((uint32_t)(0x112814a4), (EDX));
L_11261251:;
  /* 11261251 jmp 0x1126125f */
  goto L_1126125f;
L_11261253:;
  /* 11261253 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261256 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126125c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1126125f:;
  /* 1126125f jmp 0x112612d4 */
  goto L_112612d4;
L_11261261:;
  /* 11261261 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261265 jne 0x112612cd */
  if (!C.zf) goto L_112612cd;
  /* 11261267 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126126b jge 0x11261275 */
  if ((C.sf==C.of)) goto L_11261275;
  /* 1126126d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261270 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11261272 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11261275:;
  /* 11261275 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1126127a push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 1126127f push 2 */
  push32((uint32_t)(0x2u));
  /* 11261281 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261284 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1126128b push edx */
  push32((uint32_t)(EDX));
  /* 1126128c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1126128f push eax */
  push32((uint32_t)(EAX));
  /* 11261290 call 0x1124ccb0 */
  push32(0x11261295u); f_1124ccb0();
  /* 11261295 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261298 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1126129b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126129f jne 0x112612a9 */
  if (!C.zf) goto L_112612a9;
  /* 112612a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112612a4 jmp 0x1126135b */
  goto L_1126135b;
L_112612a9:;
  /* 112612a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112612ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112612af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112612b2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 112612b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112612b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112612bb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 112612c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112612c6 mov dword ptr [0x112814a4], eax */
  w32((uint32_t)(0x112814a4), (EAX));
  /* 112612cb jmp 0x112612d4 */
  goto L_112612d4;
L_112612cd:;
  /* 112612cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112612cf jmp 0x1126135b */
  goto L_1126135b;
L_112612d4:;
  /* 112612d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112612d8 je 0x11261359 */
  if (C.zf) goto L_11261359;
  /* 112612da push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 112612df push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 112612e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112612e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112612e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112612ea call 0x11250db0 */
  push32(0x112612efu); f_11250db0();
  /* 112612ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112612f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112612f5 push eax */
  push32((uint32_t)(EAX));
  /* 112612f6 call 0x1124c820 */
  push32(0x112612fbu); f_1124c820();
  /* 112612fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112612fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11261301 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261305 je 0x11261359 */
  if (C.zf) goto L_11261359;
  /* 11261307 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126130a push edx */
  push32((uint32_t)(EDX));
  /* 1126130b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1126130e push eax */
  push32((uint32_t)(EAX));
  /* 1126130f call 0x11250f30 */
  push32(0x11261314u); f_11250f30();
  /* 11261314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261317 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1126131a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1126131d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11261320 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261322 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11261325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261328 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1126132b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1126132e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261331 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11261334 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11261337 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11261339 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1126133b not edx */
  EDX = (~(EDX));
  /* 1126133d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11261340 push edx */
  push32((uint32_t)(EDX));
  /* 11261341 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11261344 push eax */
  push32((uint32_t)(EAX));
  /* 11261345 call dword ptr [0x11283344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283344))), 0x1126134bu);
  /* 1126134b push 2 */
  push32((uint32_t)(0x2u));
  /* 1126134d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11261350 push ecx */
  push32((uint32_t)(ECX));
  /* 11261351 call 0x1124d2b0 */
  push32(0x11261356u); f_1124d2b0();
  /* 11261356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11261359:;
  /* 11261359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1126135b:;
  /* 1126135b pop esi */
  ESI = (pop32());
  /* 1126135c mov esp, ebp */
  ESP = (EBP);
  /* 1126135e pop ebp */
  EBP = (pop32());
  /* 1126135f ret  */
  ESPCHK(0x11261080u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11261360 (124 bytes, 47 insns) */
void f_11261360(void) {
  FTRACE(0x11261360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261360 push ebp */
  push32((uint32_t)(EBP));
  /* 11261361 mov ebp, esp */
  EBP = (ESP);
  /* 11261363 push ecx */
  push32((uint32_t)(ECX));
  /* 11261364 mov eax, dword ptr [0x112814a4] */
  EAX = (r32((uint32_t)(0x112814a4)));
  /* 11261369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1126136c jmp 0x11261377 */
  goto L_11261377;
L_1126136e:;
  /* 1126136e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261371 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261374 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11261377:;
  /* 11261377 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1126137a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126137d je 0x112613ca */
  if (C.zf) goto L_112613ca;
  /* 1126137f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261382 push eax */
  push32((uint32_t)(EAX));
  /* 11261383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261386 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11261388 push edx */
  push32((uint32_t)(EDX));
  /* 11261389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126138c push eax */
  push32((uint32_t)(EAX));
  /* 1126138d call 0x1125e670 */
  push32(0x11261392u); f_1125e670();
  /* 11261392 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261395 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261397 jne 0x112613c8 */
  if (!C.zf) goto L_112613c8;
  /* 11261399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1126139c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1126139e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112613a1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 112613a5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112613a8 je 0x112613ba */
  if (C.zf) goto L_112613ba;
  /* 112613aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112613ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112613af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112613b2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 112613b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112613b8 jne 0x112613c8 */
  if (!C.zf) goto L_112613c8;
L_112613ba:;
  /* 112613ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112613bd sub eax, dword ptr [0x112814a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112814a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112613c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112613c6 jmp 0x112613d8 */
  goto L_112613d8;
L_112613c8:;
  /* 112613c8 jmp 0x1126136e */
  goto L_1126136e;
L_112613ca:;
  /* 112613ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112613cd sub eax, dword ptr [0x112814a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112814a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112613d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112613d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_112613d8:;
  /* 112613d8 mov esp, ebp */
  ESP = (EBP);
  /* 112613da pop ebp */
  EBP = (pop32());
  /* 112613db ret  */
  ESPCHK(0x11261360u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x112613e0 (238 bytes, 80 insns) */
void f_112613e0(void) {
  FTRACE(0x112613e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112613e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112613e1 mov ebp, esp */
  EBP = (ESP);
  /* 112613e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112613e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112613ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112613f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112613f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112613f7 jne 0x11261400 */
  if (!C.zf) goto L_11261400;
  /* 112613f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112613fb jmp 0x112614ca */
  goto L_112614ca;
L_11261400:;
  /* 11261400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261403 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11261405 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261408 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1126140b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1126140e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11261410 je 0x1126141d */
  if (C.zf) goto L_1126141d;
  /* 11261412 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11261415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261418 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1126141b jmp 0x11261400 */
  goto L_11261400;
L_1126141d:;
  /* 1126141d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11261422 push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 11261427 push 2 */
  push32((uint32_t)(0x2u));
  /* 11261429 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1126142c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11261433 push eax */
  push32((uint32_t)(EAX));
  /* 11261434 call 0x1124c820 */
  push32(0x11261439u); f_1124c820();
  /* 11261439 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1126143c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1126143f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261442 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11261445 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261449 jne 0x11261455 */
  if (!C.zf) goto L_11261455;
  /* 1126144b push 9 */
  push32((uint32_t)(0x9u));
  /* 1126144d call 0x1124b290 */
  push32(0x11261452u); f_1124b290();
  /* 11261452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11261455:;
  /* 11261455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261458 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1126145b:;
  /* 1126145b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1126145e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261461 je 0x112614be */
  if (C.zf) goto L_112614be;
  /* 11261463 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11261468 push 0x1127cc08 */
  push32((uint32_t)(0x1127cc08u));
  /* 1126146d push 2 */
  push32((uint32_t)(0x2u));
  /* 1126146f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261472 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11261474 push edx */
  push32((uint32_t)(EDX));
  /* 11261475 call 0x11250db0 */
  push32(0x1126147au); f_11250db0();
  /* 1126147a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1126147d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261480 push eax */
  push32((uint32_t)(EAX));
  /* 11261481 call 0x1124c820 */
  push32(0x11261486u); f_1124c820();
  /* 11261486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126148c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1126148e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261491 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261494 je 0x112614aa */
  if (C.zf) goto L_112614aa;
  /* 11261496 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11261499 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1126149b push ecx */
  push32((uint32_t)(ECX));
  /* 1126149c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126149f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112614a1 push eax */
  push32((uint32_t)(EAX));
  /* 112614a2 call 0x11250f30 */
  push32(0x112614a7u); f_11250f30();
  /* 112614a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112614aa:;
  /* 112614aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112614ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112614b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112614b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112614b6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112614b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112614bc jmp 0x1126145b */
  goto L_1126145b;
L_112614be:;
  /* 112614be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112614c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112614c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112614ca:;
  /* 112614ca mov esp, ebp */
  ESP = (EBP);
  /* 112614cc pop ebp */
  EBP = (pop32());
  /* 112614cd ret  */
  ESPCHK(0x112613e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100214d0 @ 0x112614d0 (130 bytes, 50 insns) */
void f_112614d0(void) {
  FTRACE(0x112614d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112614d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112614d1 mov ebp, esp */
  EBP = (ESP);
  /* 112614d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112614d4 push ebx */
  push32((uint32_t)(EBX));
  /* 112614d5 push esi */
  push32((uint32_t)(ESI));
  /* 112614d6 push edi */
  push32((uint32_t)(EDI));
  /* 112614d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112614de:;
  /* 112614de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112614e2 jne 0x11261502 */
  if (!C.zf) goto L_11261502;
  /* 112614e4 push 0x1127cc20 */
  push32((uint32_t)(0x1127cc20u));
  /* 112614e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112614eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 112614ed push 0x1127cc14 */
  push32((uint32_t)(0x1127cc14u));
  /* 112614f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112614f4 call 0x1124b3e0 */
  push32(0x112614f9u); f_1124b3e0();
  /* 112614f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112614fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112614ff jne 0x11261502 */
  if (!C.zf) goto L_11261502;
  /* 11261501 int3  */
  x86_unimpl("int3 @ 0x11261501");
L_11261502:;
  /* 11261502 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11261504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261506 jne 0x112614de */
  if (!C.zf) goto L_112614de;
  /* 11261508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126150b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1126150e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11261511 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11261513 je 0x11261521 */
  if (C.zf) goto L_11261521;
  /* 11261515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261518 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1126151f jmp 0x11261548 */
  goto L_11261548;
L_11261521:;
  /* 11261521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261524 push ecx */
  push32((uint32_t)(ECX));
  /* 11261525 call 0x1125b950 */
  push32(0x1126152au); f_1125b950();
  /* 1126152a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1126152d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261530 push edx */
  push32((uint32_t)(EDX));
  /* 11261531 call 0x11261560 */
  push32(0x11261536u); f_11261560();
  /* 11261536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261539 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1126153c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126153f push eax */
  push32((uint32_t)(EAX));
  /* 11261540 call 0x1125b9c0 */
  push32(0x11261545u); f_1125b9c0();
  /* 11261545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11261548:;
  /* 11261548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1126154b pop edi */
  EDI = (pop32());
  /* 1126154c pop esi */
  ESI = (pop32());
  /* 1126154d pop ebx */
  EBX = (pop32());
  /* 1126154e mov esp, ebp */
  ESP = (EBP);
  /* 11261550 pop ebp */
  EBP = (pop32());
  /* 11261551 ret  */
  ESPCHK(0x112614d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021560 @ 0x11261560 (190 bytes, 67 insns) */
void f_11261560(void) {
  FTRACE(0x11261560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261560 push ebp */
  push32((uint32_t)(EBP));
  /* 11261561 mov ebp, esp */
  EBP = (ESP);
  /* 11261563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11261566 push ebx */
  push32((uint32_t)(EBX));
  /* 11261567 push esi */
  push32((uint32_t)(ESI));
  /* 11261568 push edi */
  push32((uint32_t)(EDI));
  /* 11261569 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11261570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261573 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11261576:;
  /* 11261576 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126157a jne 0x1126159a */
  if (!C.zf) goto L_1126159a;
  /* 1126157c push 0x1127c170 */
  push32((uint32_t)(0x1127c170u));
  /* 11261581 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261583 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11261585 push 0x1127cc14 */
  push32((uint32_t)(0x1127cc14u));
  /* 1126158a push 2 */
  push32((uint32_t)(0x2u));
  /* 1126158c call 0x1124b3e0 */
  push32(0x11261591u); f_1124b3e0();
  /* 11261591 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261594 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261597 jne 0x1126159a */
  if (!C.zf) goto L_1126159a;
  /* 11261599 int3  */
  x86_unimpl("int3 @ 0x11261599");
L_1126159a:;
  /* 1126159a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1126159c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1126159e jne 0x11261576 */
  if (!C.zf) goto L_11261576;
  /* 112615a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112615a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112615a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 112615ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112615ad je 0x1126160a */
  if (C.zf) goto L_1126160a;
  /* 112615af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112615b2 push ecx */
  push32((uint32_t)(ECX));
  /* 112615b3 call 0x1125eec0 */
  push32(0x112615b8u); f_1125eec0();
  /* 112615b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112615bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112615be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112615c1 push edx */
  push32((uint32_t)(EDX));
  /* 112615c2 call 0x11261c70 */
  push32(0x112615c7u); f_11261c70();
  /* 112615c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112615ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112615cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112615d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112615d1 call 0x11261b40 */
  push32(0x112615d6u); f_11261b40();
  /* 112615d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112615d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112615db jge 0x112615e6 */
  if ((C.sf==C.of)) goto L_112615e6;
  /* 112615dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112615e4 jmp 0x1126160a */
  goto L_1126160a;
L_112615e6:;
  /* 112615e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112615e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112615ed je 0x1126160a */
  if (C.zf) goto L_1126160a;
  /* 112615ef push 2 */
  push32((uint32_t)(0x2u));
  /* 112615f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112615f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112615f7 push ecx */
  push32((uint32_t)(ECX));
  /* 112615f8 call 0x1124d2b0 */
  push32(0x112615fdu); f_1124d2b0();
  /* 112615fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261600 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11261603 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1126160a:;
  /* 1126160a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1126160d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11261614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261617 pop edi */
  EDI = (pop32());
  /* 11261618 pop esi */
  ESI = (pop32());
  /* 11261619 pop ebx */
  EBX = (pop32());
  /* 1126161a mov esp, ebp */
  ESP = (EBP);
  /* 1126161c pop ebp */
  EBP = (pop32());
  /* 1126161d ret  */
  ESPCHK(0x11261560u, _esp0);
  ESP += 4; return;
}

/* FUN_10021620 @ 0x11261620 (210 bytes, 63 insns) */
void f_11261620(void) {
  FTRACE(0x11261620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261620 push ebp */
  push32((uint32_t)(EBP));
  /* 11261621 mov ebp, esp */
  EBP = (ESP);
  /* 11261623 push ecx */
  push32((uint32_t)(ECX));
  /* 11261624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261627 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126162d jae 0x11261651 */
  if (!C.cf) goto L_11261651;
  /* 1126162f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261632 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11261635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261638 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1126163b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1126163e mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 11261645 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1126164a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1126164d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1126164f jne 0x11261664 */
  if (!C.zf) goto L_11261664;
L_11261651:;
  /* 11261651 call 0x11257eb0 */
  push32(0x11261656u); f_11257eb0();
  /* 11261656 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1126165c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1126165f jmp 0x112616ee */
  goto L_112616ee;
L_11261664:;
  /* 11261664 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261667 push edx */
  push32((uint32_t)(EDX));
  /* 11261668 call 0x1125ec80 */
  push32(0x1126166du); f_1125ec80();
  /* 1126166d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261673 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11261676 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261679 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1126167c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1126167f mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 11261686 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1126168b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1126168e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261690 je 0x112616cd */
  if (C.zf) goto L_112616cd;
  /* 11261692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261695 push ecx */
  push32((uint32_t)(ECX));
  /* 11261696 call 0x1125eb00 */
  push32(0x1126169bu); f_1125eb00();
  /* 1126169b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1126169e push eax */
  push32((uint32_t)(EAX));
  /* 1126169f call dword ptr [0x1128334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128334c))), 0x112616a5u);
  /* 112616a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112616a7 jne 0x112616b4 */
  if (!C.zf) goto L_112616b4;
  /* 112616a9 call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x112616afu);
  /* 112616af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112616b2 jmp 0x112616bb */
  goto L_112616bb;
L_112616b4:;
  /* 112616b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112616bb:;
  /* 112616bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112616bf jne 0x112616c3 */
  if (!C.zf) goto L_112616c3;
  /* 112616c1 jmp 0x112616df */
  goto L_112616df;
L_112616c3:;
  /* 112616c3 call 0x11257ec0 */
  push32(0x112616c8u); f_11257ec0();
  /* 112616c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112616cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112616cd:;
  /* 112616cd call 0x11257eb0 */
  push32(0x112616d2u); f_11257eb0();
  /* 112616d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112616d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112616df:;
  /* 112616df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112616e2 push eax */
  push32((uint32_t)(EAX));
  /* 112616e3 call 0x1125ed10 */
  push32(0x112616e8u); f_1125ed10();
  /* 112616e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112616eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112616ee:;
  /* 112616ee mov esp, ebp */
  ESP = (EBP);
  /* 112616f0 pop ebp */
  EBP = (pop32());
  /* 112616f1 ret  */
  ESPCHK(0x11261620u, _esp0);
  ESP += 4; return;
}

/* FUN_10021700 @ 0x11261700 (382 bytes, 135 insns) */
void f_11261700(void) {
  FTRACE(0x11261700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261700 push ebp */
  push32((uint32_t)(EBP));
  /* 11261701 mov ebp, esp */
  EBP = (ESP);
  /* 11261703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11261705 push 0x1127cc30 */
  push32((uint32_t)(0x1127cc30u));
  /* 1126170a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1126170f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11261715 push eax */
  push32((uint32_t)(EAX));
  /* 11261716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1126171d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261720 push ebx */
  push32((uint32_t)(EBX));
  /* 11261721 push esi */
  push32((uint32_t)(ESI));
  /* 11261722 push edi */
  push32((uint32_t)(EDI));
  /* 11261723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11261726 cmp dword ptr [0x11281778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126172d jne 0x11261772 */
  if (!C.zf) goto L_11261772;
  /* 1126172f push 0 */
  push32((uint32_t)(0x0u));
  /* 11261731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261733 push 1 */
  push32((uint32_t)(0x1u));
  /* 11261735 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261737 call dword ptr [0x11283340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283340))), 0x1126173du);
  /* 1126173d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1126173f je 0x1126174d */
  if (C.zf) goto L_1126174d;
  /* 11261741 mov dword ptr [0x11281778], 1 */
  w32((uint32_t)(0x11281778), (0x1u));
  /* 1126174b jmp 0x11261772 */
  goto L_11261772;
L_1126174d:;
  /* 1126174d push 0 */
  push32((uint32_t)(0x0u));
  /* 1126174f push 0 */
  push32((uint32_t)(0x0u));
  /* 11261751 push 1 */
  push32((uint32_t)(0x1u));
  /* 11261753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261755 call dword ptr [0x11283360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283360))), 0x1126175bu);
  /* 1126175b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1126175d je 0x1126176b */
  if (C.zf) goto L_1126176b;
  /* 1126175f mov dword ptr [0x11281778], 2 */
  w32((uint32_t)(0x11281778), (0x2u));
  /* 11261769 jmp 0x11261772 */
  goto L_11261772;
L_1126176b:;
  /* 1126176b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1126176d jmp 0x11261881 */
  goto L_11261881;
L_11261772:;
  /* 11261772 cmp dword ptr [0x11281778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261779 jne 0x11261796 */
  if (!C.zf) goto L_11261796;
  /* 1126177b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1126177e push eax */
  push32((uint32_t)(EAX));
  /* 1126177f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11261782 push ecx */
  push32((uint32_t)(ECX));
  /* 11261783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261786 push edx */
  push32((uint32_t)(EDX));
  /* 11261787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126178a push eax */
  push32((uint32_t)(EAX));
  /* 1126178b call dword ptr [0x11283340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283340))), 0x11261791u);
  /* 11261791 jmp 0x11261881 */
  goto L_11261881;
L_11261796:;
  /* 11261796 cmp dword ptr [0x11281778], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11281778))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126179d jne 0x1126187f */
  if (!C.zf) goto L_1126187f;
  /* 112617a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112617a7 jne 0x112617b2 */
  if (!C.zf) goto L_112617b2;
  /* 112617a9 mov ecx, dword ptr [0x112816f0] */
  ECX = (r32((uint32_t)(0x112816f0)));
  /* 112617af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_112617b2:;
  /* 112617b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112617b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112617b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112617b9 push edx */
  push32((uint32_t)(EDX));
  /* 112617ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112617bd push eax */
  push32((uint32_t)(EAX));
  /* 112617be call dword ptr [0x11283360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283360))), 0x112617c4u);
  /* 112617c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112617c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112617cb jne 0x112617d4 */
  if (!C.zf) goto L_112617d4;
  /* 112617cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112617cf jmp 0x11261881 */
  goto L_11261881;
L_112617d4:;
  /* 112617d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112617db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112617de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112617e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112617e3 call 0x11251120 */
  push32(0x112617e8u); f_11251120();
  /* 112617e8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 112617eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112617ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112617f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112617f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112617fb jmp 0x11261814 */
  goto L_11261814;
  /* 112617fd mov eax, 1 */
  EAX = (0x1u);
  /* 11261802 ret  */
  ESPCHK(0x11261700u, _esp0);
  ESP += 4; return;
  /* 11261803 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11261806 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1126180d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11261814:;
  /* 11261814 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261818 jne 0x1126181e */
  if (!C.zf) goto L_1126181e;
  /* 1126181a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1126181c jmp 0x11261881 */
  goto L_11261881;
L_1126181e:;
  /* 1126181e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11261821 push edx */
  push32((uint32_t)(EDX));
  /* 11261822 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11261825 push eax */
  push32((uint32_t)(EAX));
  /* 11261826 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261829 push ecx */
  push32((uint32_t)(ECX));
  /* 1126182a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126182d push edx */
  push32((uint32_t)(EDX));
  /* 1126182e call dword ptr [0x11283360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283360))), 0x11261834u);
  /* 11261834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261836 jne 0x1126183c */
  if (!C.zf) goto L_1126183c;
  /* 11261838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1126183a jmp 0x11261881 */
  goto L_11261881;
L_1126183c:;
  /* 1126183c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261840 jne 0x1126185d */
  if (!C.zf) goto L_1126185d;
  /* 11261842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261846 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11261848 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1126184b push eax */
  push32((uint32_t)(EAX));
  /* 1126184c push 1 */
  push32((uint32_t)(0x1u));
  /* 1126184e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11261851 push ecx */
  push32((uint32_t)(ECX));
  /* 11261852 call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11261858u);
  /* 11261858 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1126185b jmp 0x1126187a */
  goto L_1126187a;
L_1126185d:;
  /* 1126185d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11261860 push edx */
  push32((uint32_t)(EDX));
  /* 11261861 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11261864 push eax */
  push32((uint32_t)(EAX));
  /* 11261865 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11261867 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1126186a push ecx */
  push32((uint32_t)(ECX));
  /* 1126186b push 1 */
  push32((uint32_t)(0x1u));
  /* 1126186d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11261870 push edx */
  push32((uint32_t)(EDX));
  /* 11261871 call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11261877u);
  /* 11261877 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1126187a:;
  /* 1126187a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1126187d jmp 0x11261881 */
  goto L_11261881;
L_1126187f:;
  /* 1126187f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11261881:;
  /* 11261881 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11261884 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11261887 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1126188e pop edi */
  EDI = (pop32());
  /* 1126188f pop esi */
  ESI = (pop32());
  /* 11261890 pop ebx */
  EBX = (pop32());
  /* 11261891 mov esp, ebp */
  ESP = (EBP);
  /* 11261893 pop ebp */
  EBP = (pop32());
  /* 11261894 ret  */
  ESPCHK(0x11261700u, _esp0);
  ESP += 4; return;
}

/* FUN_100218a0 @ 0x112618a0 (398 bytes, 140 insns) */
void f_112618a0(void) {
  FTRACE(0x112618a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112618a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112618a1 mov ebp, esp */
  EBP = (ESP);
  /* 112618a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112618a5 push 0x1127cc40 */
  push32((uint32_t)(0x1127cc40u));
  /* 112618aa push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 112618af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112618b5 push eax */
  push32((uint32_t)(EAX));
  /* 112618b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112618bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112618c0 push ebx */
  push32((uint32_t)(EBX));
  /* 112618c1 push esi */
  push32((uint32_t)(ESI));
  /* 112618c2 push edi */
  push32((uint32_t)(EDI));
  /* 112618c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112618c6 cmp dword ptr [0x1128177c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128177c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112618cd jne 0x11261912 */
  if (!C.zf) goto L_11261912;
  /* 112618cf push 0 */
  push32((uint32_t)(0x0u));
  /* 112618d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112618d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112618d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112618d7 call dword ptr [0x11283340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283340))), 0x112618ddu);
  /* 112618dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112618df je 0x112618ed */
  if (C.zf) goto L_112618ed;
  /* 112618e1 mov dword ptr [0x1128177c], 1 */
  w32((uint32_t)(0x1128177c), (0x1u));
  /* 112618eb jmp 0x11261912 */
  goto L_11261912;
L_112618ed:;
  /* 112618ed push 0 */
  push32((uint32_t)(0x0u));
  /* 112618ef push 0 */
  push32((uint32_t)(0x0u));
  /* 112618f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112618f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112618f5 call dword ptr [0x11283360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283360))), 0x112618fbu);
  /* 112618fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112618fd je 0x1126190b */
  if (C.zf) goto L_1126190b;
  /* 112618ff mov dword ptr [0x1128177c], 2 */
  w32((uint32_t)(0x1128177c), (0x2u));
  /* 11261909 jmp 0x11261912 */
  goto L_11261912;
L_1126190b:;
  /* 1126190b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1126190d jmp 0x11261a31 */
  goto L_11261a31;
L_11261912:;
  /* 11261912 cmp dword ptr [0x1128177c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1128177c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261919 jne 0x11261936 */
  if (!C.zf) goto L_11261936;
  /* 1126191b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1126191e push eax */
  push32((uint32_t)(EAX));
  /* 1126191f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11261922 push ecx */
  push32((uint32_t)(ECX));
  /* 11261923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261926 push edx */
  push32((uint32_t)(EDX));
  /* 11261927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126192a push eax */
  push32((uint32_t)(EAX));
  /* 1126192b call dword ptr [0x11283360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283360))), 0x11261931u);
  /* 11261931 jmp 0x11261a31 */
  goto L_11261a31;
L_11261936:;
  /* 11261936 cmp dword ptr [0x1128177c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1128177c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126193d jne 0x11261a2f */
  if (!C.zf) goto L_11261a2f;
  /* 11261943 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261947 jne 0x11261952 */
  if (!C.zf) goto L_11261952;
  /* 11261949 mov ecx, dword ptr [0x112816f0] */
  ECX = (r32((uint32_t)(0x112816f0)));
  /* 1126194f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11261952:;
  /* 11261952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261956 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261959 push edx */
  push32((uint32_t)(EDX));
  /* 1126195a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1126195d push eax */
  push32((uint32_t)(EAX));
  /* 1126195e call dword ptr [0x11283340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283340))), 0x11261964u);
  /* 11261964 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11261967 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1126196b jne 0x11261974 */
  if (!C.zf) goto L_11261974;
  /* 1126196d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1126196f jmp 0x11261a31 */
  goto L_11261a31;
L_11261974:;
  /* 11261974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1126197b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1126197e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11261980 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261983 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11261985 call 0x11251120 */
  push32(0x1126198au); f_11251120();
  /* 1126198a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1126198d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11261990 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11261993 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11261996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1126199d jmp 0x112619b6 */
  goto L_112619b6;
  /* 1126199f mov eax, 1 */
  EAX = (0x1u);
  /* 112619a4 ret  */
  ESPCHK(0x112618a0u, _esp0);
  ESP += 4; return;
  /* 112619a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112619a8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112619af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112619b6:;
  /* 112619b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112619ba jne 0x112619c0 */
  if (!C.zf) goto L_112619c0;
  /* 112619bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112619be jmp 0x11261a31 */
  goto L_11261a31;
L_112619c0:;
  /* 112619c0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112619c3 push edx */
  push32((uint32_t)(EDX));
  /* 112619c4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112619c7 push eax */
  push32((uint32_t)(EAX));
  /* 112619c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112619cb push ecx */
  push32((uint32_t)(ECX));
  /* 112619cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112619cf push edx */
  push32((uint32_t)(EDX));
  /* 112619d0 call dword ptr [0x11283340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283340))), 0x112619d6u);
  /* 112619d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112619d8 jne 0x112619de */
  if (!C.zf) goto L_112619de;
  /* 112619da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112619dc jmp 0x11261a31 */
  goto L_11261a31;
L_112619de:;
  /* 112619de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112619e2 jne 0x11261a06 */
  if (!C.zf) goto L_11261a06;
  /* 112619e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112619e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112619e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112619ea push 0 */
  push32((uint32_t)(0x0u));
  /* 112619ec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112619ee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112619f1 push eax */
  push32((uint32_t)(EAX));
  /* 112619f2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112619f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112619fa push ecx */
  push32((uint32_t)(ECX));
  /* 112619fb call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x11261a01u);
  /* 11261a01 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11261a04 jmp 0x11261a2a */
  goto L_11261a2a;
L_11261a06:;
  /* 11261a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261a0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11261a0d push edx */
  push32((uint32_t)(EDX));
  /* 11261a0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11261a11 push eax */
  push32((uint32_t)(EAX));
  /* 11261a12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11261a14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11261a17 push ecx */
  push32((uint32_t)(ECX));
  /* 11261a18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11261a1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11261a20 push edx */
  push32((uint32_t)(EDX));
  /* 11261a21 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x11261a27u);
  /* 11261a27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11261a2a:;
  /* 11261a2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11261a2d jmp 0x11261a31 */
  goto L_11261a31;
L_11261a2f:;
  /* 11261a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11261a31:;
  /* 11261a31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11261a34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11261a37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11261a3e pop edi */
  EDI = (pop32());
  /* 11261a3f pop esi */
  ESI = (pop32());
  /* 11261a40 pop ebx */
  EBX = (pop32());
  /* 11261a41 mov esp, ebp */
  ESP = (EBP);
  /* 11261a43 pop ebp */
  EBP = (pop32());
  /* 11261a44 ret  */
  ESPCHK(0x112618a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021a50 @ 0x11261a50 (237 bytes, 81 insns) */
void f_11261a50(void) {
  FTRACE(0x11261a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11261a51 mov ebp, esp */
  EBP = (ESP);
  /* 11261a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11261a54 cmp dword ptr [0x11282b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261a5b jne 0x11261a72 */
  if (!C.zf) goto L_11261a72;
  /* 11261a5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11261a60 push eax */
  push32((uint32_t)(EAX));
  /* 11261a61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261a64 push ecx */
  push32((uint32_t)(ECX));
  /* 11261a65 call 0x11261d20 */
  push32(0x11261a6au); f_11261d20();
  /* 11261a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261a6d jmp 0x11261b39 */
  goto L_11261b39;
L_11261a72:;
  /* 11261a72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11261a74 call 0x1124c720 */
  push32(0x11261a79u); f_1124c720();
  /* 11261a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261a7c jmp 0x11261a87 */
  goto L_11261a87;
L_11261a7e:;
  /* 11261a7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261a81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261a84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11261a87:;
  /* 11261a87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261a8a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11261a8e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11261a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261a95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11261a9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11261a9d je 0x11261b1b */
  if (C.zf) goto L_11261b1b;
  /* 11261a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261aa2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261aa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11261aa9 mov cl, byte ptr [eax + 0x11282c81] */
  CL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 11261aaf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11261ab2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11261ab4 je 0x11261b06 */
  if (C.zf) goto L_11261b06;
  /* 11261ab6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261ab9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261abc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11261abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261ac2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11261ac4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11261ac6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11261ac8 jne 0x11261ad8 */
  if (!C.zf) goto L_11261ad8;
  /* 11261aca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11261acc call 0x1124c7c0 */
  push32(0x11261ad1u); f_1124c7c0();
  /* 11261ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11261ad6 jmp 0x11261b39 */
  goto L_11261b39;
L_11261ad8:;
  /* 11261ad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261adb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11261ae1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11261ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261ae7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11261ae9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11261aeb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11261aed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261af0 jne 0x11261b04 */
  if (!C.zf) goto L_11261b04;
  /* 11261af2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11261af4 call 0x1124c7c0 */
  push32(0x11261af9u); f_1124c7c0();
  /* 11261af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261aff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11261b02 jmp 0x11261b39 */
  goto L_11261b39;
L_11261b04:;
  /* 11261b04 jmp 0x11261b16 */
  goto L_11261b16;
L_11261b06:;
  /* 11261b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261b09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11261b0f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261b12 jne 0x11261b16 */
  if (!C.zf) goto L_11261b16;
  /* 11261b14 jmp 0x11261b1b */
  goto L_11261b1b;
L_11261b16:;
  /* 11261b16 jmp 0x11261a7e */
  goto L_11261a7e;
L_11261b1b:;
  /* 11261b1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11261b1d call 0x1124c7c0 */
  push32(0x11261b22u); f_1124c7c0();
  /* 11261b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261b25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261b28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261b2d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261b30 jne 0x11261b37 */
  if (!C.zf) goto L_11261b37;
  /* 11261b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261b35 jmp 0x11261b39 */
  goto L_11261b39;
L_11261b37:;
  /* 11261b37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11261b39:;
  /* 11261b39 mov esp, ebp */
  ESP = (EBP);
  /* 11261b3b pop ebp */
  EBP = (pop32());
  /* 11261b3c ret  */
  ESPCHK(0x11261a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10021b40 @ 0x11261b40 (122 bytes, 39 insns) */
void f_11261b40(void) {
  FTRACE(0x11261b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11261b41 mov ebp, esp */
  EBP = (ESP);
  /* 11261b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11261b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261b47 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261b4d jae 0x11261b71 */
  if (!C.cf) goto L_11261b71;
  /* 11261b4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261b52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11261b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261b58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11261b5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11261b5e mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 11261b65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11261b6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11261b6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11261b6f jne 0x11261b8c */
  if (!C.zf) goto L_11261b8c;
L_11261b71:;
  /* 11261b71 call 0x11257eb0 */
  push32(0x11261b76u); f_11257eb0();
  /* 11261b76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11261b7c call 0x11257ec0 */
  push32(0x11261b81u); f_11257ec0();
  /* 11261b81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11261b87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261b8a jmp 0x11261bb6 */
  goto L_11261bb6;
L_11261b8c:;
  /* 11261b8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261b8f push edx */
  push32((uint32_t)(EDX));
  /* 11261b90 call 0x1125ec80 */
  push32(0x11261b95u); f_1125ec80();
  /* 11261b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261b9b push eax */
  push32((uint32_t)(EAX));
  /* 11261b9c call 0x11261bc0 */
  push32(0x11261ba1u); f_11261bc0();
  /* 11261ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261ba4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11261ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261baa push ecx */
  push32((uint32_t)(ECX));
  /* 11261bab call 0x1125ed10 */
  push32(0x11261bb0u); f_1125ed10();
  /* 11261bb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261bb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11261bb6:;
  /* 11261bb6 mov esp, ebp */
  ESP = (EBP);
  /* 11261bb8 pop ebp */
  EBP = (pop32());
  /* 11261bb9 ret  */
  ESPCHK(0x11261b40u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11261bc0 (170 bytes, 59 insns) */
void f_11261bc0(void) {
  FTRACE(0x11261bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11261bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11261bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11261bc4 push esi */
  push32((uint32_t)(ESI));
  /* 11261bc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11261bc9 call 0x1125eb00 */
  push32(0x11261bceu); f_1125eb00();
  /* 11261bce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261bd1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261bd4 je 0x11261c13 */
  if (C.zf) goto L_11261c13;
  /* 11261bd6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261bda je 0x11261be2 */
  if (C.zf) goto L_11261be2;
  /* 11261bdc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261be0 jne 0x11261bfc */
  if (!C.zf) goto L_11261bfc;
L_11261be2:;
  /* 11261be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11261be4 call 0x1125eb00 */
  push32(0x11261be9u); f_1125eb00();
  /* 11261be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261bec mov esi, eax */
  ESI = (EAX);
  /* 11261bee push 2 */
  push32((uint32_t)(0x2u));
  /* 11261bf0 call 0x1125eb00 */
  push32(0x11261bf5u); f_1125eb00();
  /* 11261bf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261bf8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261bfa je 0x11261c13 */
  if (C.zf) goto L_11261c13;
L_11261bfc:;
  /* 11261bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261bff push ecx */
  push32((uint32_t)(ECX));
  /* 11261c00 call 0x1125eb00 */
  push32(0x11261c05u); f_1125eb00();
  /* 11261c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261c08 push eax */
  push32((uint32_t)(EAX));
  /* 11261c09 call dword ptr [0x1128333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128333c))), 0x11261c0fu);
  /* 11261c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261c11 je 0x11261c1c */
  if (C.zf) goto L_11261c1c;
L_11261c13:;
  /* 11261c13 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11261c1a jmp 0x11261c25 */
  goto L_11261c25;
L_11261c1c:;
  /* 11261c1c call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x11261c22u);
  /* 11261c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11261c25:;
  /* 11261c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261c28 push edx */
  push32((uint32_t)(EDX));
  /* 11261c29 call 0x1125ea20 */
  push32(0x11261c2eu); f_1125ea20();
  /* 11261c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261c31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261c34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11261c37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261c3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11261c3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11261c40 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 11261c47 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11261c4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261c50 je 0x11261c63 */
  if (C.zf) goto L_11261c63;
  /* 11261c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11261c55 push eax */
  push32((uint32_t)(EAX));
  /* 11261c56 call 0x11257e10 */
  push32(0x11261c5bu); f_11257e10();
  /* 11261c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261c5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261c61 jmp 0x11261c65 */
  goto L_11261c65;
L_11261c63:;
  /* 11261c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11261c65:;
  /* 11261c65 pop esi */
  ESI = (pop32());
  /* 11261c66 mov esp, ebp */
  ESP = (EBP);
  /* 11261c68 pop ebp */
  EBP = (pop32());
  /* 11261c69 ret  */
  ESPCHK(0x11261bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021c70 @ 0x11261c70 (146 bytes, 52 insns) */
void f_11261c70(void) {
  FTRACE(0x11261c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11261c71 mov ebp, esp */
  EBP = (ESP);
  /* 11261c73 push ebx */
  push32((uint32_t)(EBX));
  /* 11261c74 push esi */
  push32((uint32_t)(ESI));
  /* 11261c75 push edi */
  push32((uint32_t)(EDI));
L_11261c76:;
  /* 11261c76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261c7a jne 0x11261c9a */
  if (!C.zf) goto L_11261c9a;
  /* 11261c7c push 0x1127cc20 */
  push32((uint32_t)(0x1127cc20u));
  /* 11261c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11261c83 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11261c85 push 0x1127cc4c */
  push32((uint32_t)(0x1127cc4cu));
  /* 11261c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11261c8c call 0x1124b3e0 */
  push32(0x11261c91u); f_1124b3e0();
  /* 11261c91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261c94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11261c97 jne 0x11261c9a */
  if (!C.zf) goto L_11261c9a;
  /* 11261c99 int3  */
  x86_unimpl("int3 @ 0x11261c99");
L_11261c9a:;
  /* 11261c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11261c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11261c9e jne 0x11261c76 */
  if (!C.zf) goto L_11261c76;
  /* 11261ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261ca3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11261ca6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11261cac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11261cae je 0x11261cfd */
  if (C.zf) goto L_11261cfd;
  /* 11261cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261cb3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11261cb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11261cb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11261cbb je 0x11261cfd */
  if (C.zf) goto L_11261cfd;
  /* 11261cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11261cbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261cc2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11261cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11261cc6 call 0x1124d2b0 */
  push32(0x11261ccbu); f_1124d2b0();
  /* 11261ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11261cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261cd1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11261cd4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11261cda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261cdd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11261ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261ce3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11261ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261cec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11261cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11261cf6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11261cfd:;
  /* 11261cfd pop edi */
  EDI = (pop32());
  /* 11261cfe pop esi */
  ESI = (pop32());
  /* 11261cff pop ebx */
  EBX = (pop32());
  /* 11261d00 pop ebp */
  EBP = (pop32());
  /* 11261d01 ret  */
  ESPCHK(0x11261c70u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11261d20 (193 bytes, 87 insns) */
void f_11261d20(void) {
  FTRACE(0x11261d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261d20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11261d22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11261d26 push ebx */
  push32((uint32_t)(EBX));
  /* 11261d27 mov ebx, eax */
  EBX = (EAX);
  /* 11261d29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11261d2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11261d30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11261d36 je 0x11261d4b */
  if (C.zf) goto L_11261d4b;
L_11261d38:;
  /* 11261d38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11261d3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11261d3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11261d3d je 0x11261d10 */
  if (C.zf) { jmp_ind(0x11261d10u); return; }
  /* 11261d3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11261d41 je 0x11261d94 */
  if (C.zf) goto L_11261d94;
  /* 11261d43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11261d49 jne 0x11261d38 */
  if (!C.zf) goto L_11261d38;
L_11261d4b:;
  /* 11261d4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11261d4d push edi */
  push32((uint32_t)(EDI));
  /* 11261d4e mov eax, ebx */
  EAX = (EBX);
  /* 11261d50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11261d53 push esi */
  push32((uint32_t)(ESI));
  /* 11261d54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11261d56:;
  /* 11261d56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11261d58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11261d5d mov eax, ecx */
  EAX = (ECX);
  /* 11261d5f mov esi, edi */
  ESI = (EDI);
  /* 11261d61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11261d63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11261d65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11261d67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11261d6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11261d6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11261d6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11261d71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11261d74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11261d7a jne 0x11261d98 */
  if (!C.zf) goto L_11261d98;
  /* 11261d7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11261d81 je 0x11261d56 */
  if (C.zf) goto L_11261d56;
  /* 11261d83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11261d88 jne 0x11261d92 */
  if (!C.zf) goto L_11261d92;
  /* 11261d8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11261d90 jne 0x11261d56 */
  if (!C.zf) goto L_11261d56;
L_11261d92:;
  /* 11261d92 pop esi */
  ESI = (pop32());
  /* 11261d93 pop edi */
  EDI = (pop32());
L_11261d94:;
  /* 11261d94 pop ebx */
  EBX = (pop32());
  /* 11261d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11261d97 ret  */
  ESPCHK(0x11261d20u, _esp0);
  ESP += 4; return;
L_11261d98:;
  /* 11261d98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11261d9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11261d9d je 0x11261dd5 */
  if (C.zf) goto L_11261dd5;
  /* 11261d9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11261da1 je 0x11261d92 */
  if (C.zf) goto L_11261d92;
  /* 11261da3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11261da5 je 0x11261dce */
  if (C.zf) goto L_11261dce;
  /* 11261da7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11261da9 je 0x11261d92 */
  if (C.zf) goto L_11261d92;
  /* 11261dab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11261dae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11261db0 je 0x11261dc7 */
  if (C.zf) goto L_11261dc7;
  /* 11261db2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11261db4 je 0x11261d92 */
  if (C.zf) goto L_11261d92;
  /* 11261db6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11261db8 je 0x11261dc0 */
  if (C.zf) goto L_11261dc0;
  /* 11261dba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11261dbc je 0x11261d92 */
  if (C.zf) goto L_11261d92;
  /* 11261dbe jmp 0x11261d56 */
  goto L_11261d56;
L_11261dc0:;
  /* 11261dc0 pop esi */
  ESI = (pop32());
  /* 11261dc1 pop edi */
  EDI = (pop32());
  /* 11261dc2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11261dc5 pop ebx */
  EBX = (pop32());
  /* 11261dc6 ret  */
  ESPCHK(0x11261d20u, _esp0);
  ESP += 4; return;
L_11261dc7:;
  /* 11261dc7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11261dca pop esi */
  ESI = (pop32());
  /* 11261dcb pop edi */
  EDI = (pop32());
  /* 11261dcc pop ebx */
  EBX = (pop32());
  /* 11261dcd ret  */
  ESPCHK(0x11261d20u, _esp0);
  ESP += 4; return;
L_11261dce:;
  /* 11261dce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11261dd1 pop esi */
  ESI = (pop32());
  /* 11261dd2 pop edi */
  EDI = (pop32());
  /* 11261dd3 pop ebx */
  EBX = (pop32());
  /* 11261dd4 ret  */
  ESPCHK(0x11261d20u, _esp0);
  ESP += 4; return;
L_11261dd5:;
  /* 11261dd5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11261dd8 pop esi */
  ESI = (pop32());
  /* 11261dd9 pop edi */
  EDI = (pop32());
  /* 11261dda pop ebx */
  EBX = (pop32());
  /* 11261ddb ret  */
  ESPCHK(0x11261d20u, _esp0);
  ESP += 4; return;
  /* 11261dde xor byte ptr [eax + ebp], dh */
  { uint32_t _r=(r8((uint32_t)(EAX + EBP*1)))^(C.d.b.h); w8((uint32_t)(EAX + EBP*1), (_r)); fl_logic(_r,8); }
}

/* RtlUnwind @ 0x11261ddc (6 bytes, 1 insns) */
void f_11261ddc(void) {
  FTRACE(0x11261ddcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11261ddc jmp dword ptr [0x11283430] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11283430)))); return;
}

/* Unwind@10028e10 @ 0x11268e10 (11 bytes, 5 insns) */
void f_11268e10(void) {
  FTRACE(0x11268e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11268e10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11268e13 push eax */
  push32((uint32_t)(EAX));
  /* 11268e14 call 0x1124a7a0 */
  push32(0x11268e19u); f_1124a7a0();
  /* 11268e19 pop ecx */
  ECX = (pop32());
  /* 11268e1a ret  */
  ESPCHK(0x11268e10u, _esp0);
  ESP += 4; return;
}

