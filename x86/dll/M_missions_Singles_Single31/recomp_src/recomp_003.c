#include "recomp.h"

/* FUN_1000fbd0 @ 0x114cfbd0 (26 bytes, 12 insns) */
void f_114cfbd0(void) {
  FTRACE(0x114cfbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfbd1 mov ebp, esp */
  EBP = (ESP);
  /* 114cfbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfbd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfbd8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfbdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfbde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114cfbe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfbe3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfbe5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 114cfbe8 pop ebp */
  EBP = (pop32());
  /* 114cfbe9 ret  */
  ESPCHK(0x114cfbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x114cfbf0 (31 bytes, 14 insns) */
void f_114cfbf0(void) {
  FTRACE(0x114cfbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfbf1 mov ebp, esp */
  EBP = (ESP);
  /* 114cfbf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfbf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfbf8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfbfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfbfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114cfc00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfc05 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfc08 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114cfc0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cfc0d pop ebp */
  EBP = (pop32());
  /* 114cfc0e ret  */
  ESPCHK(0x114cfbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc10 @ 0x114cfc10 (27 bytes, 12 insns) */
void f_114cfc10(void) {
  FTRACE(0x114cfc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfc10 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfc11 mov ebp, esp */
  EBP = (ESP);
  /* 114cfc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfc18 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfc1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114cfc20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfc25 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 114cfc29 pop ebp */
  EBP = (pop32());
  /* 114cfc2a ret  */
  ESPCHK(0x114cfc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x114cfc30 (238 bytes, 75 insns) */
void f_114cfc30(void) {
  FTRACE(0x114cfc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfc30 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfc31 mov ebp, esp */
  EBP = (ESP);
  /* 114cfc33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc39 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfc3e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114cfc41 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfc45 jl 0x114cfc50 */
  if ((C.sf!=C.of)) goto L_114cfc50;
  /* 114cfc47 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfc4e jle 0x114cfc58 */
  if ((C.zf||C.sf!=C.of)) goto L_114cfc58;
L_114cfc50:;
  /* 114cfc50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cfc53 jmp 0x114cfd1a */
  goto L_114cfd1a;
L_114cfc58:;
  /* 114cfc58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfc5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cfc5e add edx, dword ptr [ecx*4 + 0x114fd694] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x114fd694))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfc65 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 114cfc68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc6b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114cfc6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cfc70 jne 0x114cfc81 */
  if (!C.zf) goto L_114cfc81;
  /* 114cfc72 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfc76 jle 0x114cfc81 */
  if ((C.zf||C.sf!=C.of)) goto L_114cfc81;
  /* 114cfc78 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114cfc7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfc7e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_114cfc81:;
  /* 114cfc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc84 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfc87 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cfc8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfc90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfc93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114cfc96 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114cfc99 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfc9b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 114cfc9f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cfca2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfca5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cfca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfcab imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cfcae add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfcb1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cfcb4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfcb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cfcba call 0x114d6220 */
  push32(0x114cfcbfu); f_114d6220();
  /* 114cfcbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfcc2 add ecx, dword ptr [0x114fd5b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd5b0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfcc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cfccb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114cfcce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114cfcd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfcd4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114cfcd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfcda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfcdd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114cfce0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cfce3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114cfce6 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfcea je 0x114cfd0b */
  if (C.zf) goto L_114cfd0b;
  /* 114cfcec cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfcf0 jne 0x114cfd17 */
  if (!C.zf) goto L_114cfd17;
  /* 114cfcf2 cmp dword ptr [0x114fd5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fd5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfcf9 je 0x114cfd17 */
  if (C.zf) goto L_114cfd17;
  /* 114cfcfb lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 114cfcfe push eax */
  push32((uint32_t)(EAX));
  /* 114cfcff call 0x114d6630 */
  push32(0x114cfd04u); f_114d6630();
  /* 114cfd04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfd07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cfd09 je 0x114cfd17 */
  if (C.zf) goto L_114cfd17;
L_114cfd0b:;
  /* 114cfd0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfd0e add ecx, dword ptr [0x114fd5b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd5b8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfd14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114cfd17:;
  /* 114cfd17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114cfd1a:;
  /* 114cfd1a mov esp, ebp */
  ESP = (EBP);
  /* 114cfd1c pop ebp */
  EBP = (pop32());
  /* 114cfd1d ret  */
  ESPCHK(0x114cfc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd20 @ 0x114cfd20 (804 bytes, 236 insns) */
void f_114cfd20(void) {
  FTRACE(0x114cfd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfd20 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfd21 mov ebp, esp */
  EBP = (ESP);
  /* 114cfd23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfd26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 114cfd2b push 0x114f9fb0 */
  push32((uint32_t)(0x114f9fb0u));
  /* 114cfd30 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cfd32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 114cfd37 call 0x114cb900 */
  push32(0x114cfd3cu); f_114cb900();
  /* 114cfd3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfd3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 114cfd42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfd46 jne 0x114cfd52 */
  if (!C.zf) goto L_114cfd52;
  /* 114cfd48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 114cfd4a call 0x114ca370 */
  push32(0x114cfd4fu); f_114ca370();
  /* 114cfd4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cfd52:;
  /* 114cfd52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfd55 mov dword ptr [0x11500b00], eax */
  w32((uint32_t)(0x11500b00), (EAX));
  /* 114cfd5a mov dword ptr [0x11500c3c], 0x20 */
  w32((uint32_t)(0x11500c3c), (0x20u));
  /* 114cfd64 jmp 0x114cfd6f */
  goto L_114cfd6f;
L_114cfd66:;
  /* 114cfd66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfd69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfd6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_114cfd6f:;
  /* 114cfd6f mov edx, dword ptr [0x11500b00] */
  EDX = (r32((uint32_t)(0x11500b00)));
  /* 114cfd75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfd7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfd7e jae 0x114cfda3 */
  if (!C.cf) goto L_114cfda3;
  /* 114cfd80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfd83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 114cfd87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfd8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 114cfd90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfd93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 114cfd97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfd9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 114cfda1 jmp 0x114cfd66 */
  goto L_114cfd66;
L_114cfda3:;
  /* 114cfda3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 114cfda6 push ecx */
  push32((uint32_t)(ECX));
  /* 114cfda7 call dword ptr [0x115013bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013bc))), 0x114cfdadu);
  /* 114cfdad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 114cfdb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cfdb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cfdb8 je 0x114cff45 */
  if (C.zf) goto L_114cff45;
  /* 114cfdbe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfdc2 je 0x114cff45 */
  if (C.zf) goto L_114cff45;
  /* 114cfdc8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114cfdcb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cfdcd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 114cfdd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114cfdd3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfdd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cfdd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfddc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfddf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 114cfde2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfde9 jge 0x114cfdf3 */
  if ((C.sf==C.of)) goto L_114cfdf3;
  /* 114cfdeb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 114cfdee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 114cfdf1 jmp 0x114cfdfa */
  goto L_114cfdfa;
L_114cfdf3:;
  /* 114cfdf3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_114cfdfa:;
  /* 114cfdfa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114cfdfd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 114cfe00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 114cfe07 jmp 0x114cfe12 */
  goto L_114cfe12;
L_114cfe09:;
  /* 114cfe09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 114cfe0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfe0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_114cfe12:;
  /* 114cfe12 mov ecx, dword ptr [0x11500c3c] */
  ECX = (r32((uint32_t)(0x11500c3c)));
  /* 114cfe18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfe1b jge 0x114cfeb2 */
  if ((C.sf==C.of)) goto L_114cfeb2;
  /* 114cfe21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 114cfe26 push 0x114f9fb0 */
  push32((uint32_t)(0x114f9fb0u));
  /* 114cfe2b push 2 */
  push32((uint32_t)(0x2u));
  /* 114cfe2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 114cfe32 call 0x114cb900 */
  push32(0x114cfe37u); f_114cb900();
  /* 114cfe37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfe3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 114cfe3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfe41 jne 0x114cfe4e */
  if (!C.zf) goto L_114cfe4e;
  /* 114cfe43 mov edx, dword ptr [0x11500c3c] */
  EDX = (r32((uint32_t)(0x11500c3c)));
  /* 114cfe49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 114cfe4c jmp 0x114cfeb2 */
  goto L_114cfeb2;
L_114cfe4e:;
  /* 114cfe4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 114cfe51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfe54 mov dword ptr [eax*4 + 0x11500b00], ecx */
  w32((uint32_t)(EAX*4 + 0x11500b00), (ECX));
  /* 114cfe5b mov edx, dword ptr [0x11500c3c] */
  EDX = (r32((uint32_t)(0x11500c3c)));
  /* 114cfe61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfe64 mov dword ptr [0x11500c3c], edx */
  w32((uint32_t)(0x11500c3c), (EDX));
  /* 114cfe6a jmp 0x114cfe75 */
  goto L_114cfe75;
L_114cfe6c:;
  /* 114cfe6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfe6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfe72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_114cfe75:;
  /* 114cfe75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 114cfe78 mov edx, dword ptr [ecx*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114cfe7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfe85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfe88 jae 0x114cfead */
  if (!C.cf) goto L_114cfead;
  /* 114cfe8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfe8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 114cfe91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfe94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 114cfe9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfe9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 114cfea1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cfea4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 114cfeab jmp 0x114cfe6c */
  goto L_114cfe6c;
L_114cfead:;
  /* 114cfead jmp 0x114cfe09 */
  goto L_114cfe09;
L_114cfeb2:;
  /* 114cfeb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 114cfeb9 jmp 0x114cfed6 */
  goto L_114cfed6;
L_114cfebb:;
  /* 114cfebb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cfebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfec1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 114cfec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfec7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfeca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cfecd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 114cfed0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfed3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_114cfed6:;
  /* 114cfed6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cfed9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfedc jge 0x114cff45 */
  if ((C.sf==C.of)) goto L_114cff45;
  /* 114cfede mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 114cfee1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfee4 je 0x114cff40 */
  if (C.zf) goto L_114cff40;
  /* 114cfee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfee9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cfeec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114cfeef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cfef1 je 0x114cff40 */
  if (C.zf) goto L_114cff40;
  /* 114cfef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfef6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114cfef9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 114cfefc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cfefe jne 0x114cff10 */
  if (!C.zf) goto L_114cff10;
  /* 114cff00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 114cff03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cff05 push edx */
  push32((uint32_t)(EDX));
  /* 114cff06 call dword ptr [0x115013cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013cc))), 0x114cff0cu);
  /* 114cff0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cff0e je 0x114cff40 */
  if (C.zf) goto L_114cff40;
L_114cff10:;
  /* 114cff10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cff13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114cff16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cff19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114cff1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cff1f mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114cff26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cff28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 114cff2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cff2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 114cff31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cff33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114cff35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cff38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cff3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114cff3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_114cff40:;
  /* 114cff40 jmp 0x114cfebb */
  goto L_114cfebb;
L_114cff45:;
  /* 114cff45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 114cff4c jmp 0x114cff57 */
  goto L_114cff57;
L_114cff4e:;
  /* 114cff4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cff51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cff54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_114cff57:;
  /* 114cff57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cff5b jge 0x114d0034 */
  if ((C.sf==C.of)) goto L_114d0034;
  /* 114cff61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cff64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cff67 mov edx, dword ptr [0x11500b00] */
  EDX = (r32((uint32_t)(0x11500b00)));
  /* 114cff6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cff6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 114cff72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cff75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cff78 jne 0x114d0020 */
  if (!C.zf) goto L_114d0020;
  /* 114cff7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cff81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 114cff85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cff89 jne 0x114cff94 */
  if (!C.zf) goto L_114cff94;
  /* 114cff8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 114cff92 jmp 0x114cffa4 */
  goto L_114cffa4;
L_114cff94:;
  /* 114cff94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 114cff97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cff9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cff9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cff9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cffa1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_114cffa4:;
  /* 114cffa4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114cffa7 push eax */
  push32((uint32_t)(EAX));
  /* 114cffa8 call dword ptr [0x11501418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501418))), 0x114cffaeu);
  /* 114cffae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 114cffb1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cffb5 je 0x114d000f */
  if (C.zf) goto L_114d000f;
  /* 114cffb7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cffba push ecx */
  push32((uint32_t)(ECX));
  /* 114cffbb call dword ptr [0x115013cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013cc))), 0x114cffc1u);
  /* 114cffc1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 114cffc4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cffc8 je 0x114d000f */
  if (C.zf) goto L_114d000f;
  /* 114cffca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cffcd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cffd0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114cffd2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 114cffd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cffdb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cffde jne 0x114cfff0 */
  if (!C.zf) goto L_114cfff0;
  /* 114cffe0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cffe3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 114cffe6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 114cffe8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cffeb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 114cffee jmp 0x114d000d */
  goto L_114d000d;
L_114cfff0:;
  /* 114cfff0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 114cfff3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cfff9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfffc jne 0x114d000d */
  if (!C.zf) goto L_114d000d;
  /* 114cfffe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114d0001 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d0004 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 114d0007 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114d000a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_114d000d:;
  /* 114d000d jmp 0x114d001e */
  goto L_114d001e;
L_114d000f:;
  /* 114d000f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114d0012 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d0015 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 114d0018 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114d001b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_114d001e:;
  /* 114d001e jmp 0x114d002f */
  goto L_114d002f;
L_114d0020:;
  /* 114d0020 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114d0023 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d0026 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 114d0029 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114d002c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_114d002f:;
  /* 114d002f jmp 0x114cff4e */
  goto L_114cff4e;
L_114d0034:;
  /* 114d0034 mov eax, dword ptr [0x11500c3c] */
  EAX = (r32((uint32_t)(0x11500c3c)));
  /* 114d0039 push eax */
  push32((uint32_t)(EAX));
  /* 114d003a call dword ptr [0x115013c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013c4))), 0x114d0040u);
  /* 114d0040 mov esp, ebp */
  ESP = (EBP);
  /* 114d0042 pop ebp */
  EBP = (pop32());
  /* 114d0043 ret  */
  ESPCHK(0x114cfd20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x114d0050 (155 bytes, 45 insns) */
void f_114d0050(void) {
  FTRACE(0x114d0050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0050 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0051 mov ebp, esp */
  EBP = (ESP);
  /* 114d0053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0056 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d005d jmp 0x114d0068 */
  goto L_114d0068;
L_114d005f:;
  /* 114d005f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0062 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0065 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d0068:;
  /* 114d0068 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d006c jge 0x114d00e7 */
  if ((C.sf==C.of)) goto L_114d00e7;
  /* 114d006e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0071 cmp dword ptr [ecx*4 + 0x11500b00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11500b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0079 je 0x114d00e2 */
  if (C.zf) goto L_114d00e2;
  /* 114d007b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d007e mov eax, dword ptr [edx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114d0085 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d0088 jmp 0x114d0093 */
  goto L_114d0093;
L_114d008a:;
  /* 114d008a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d008d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0090 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d0093:;
  /* 114d0093 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0096 mov eax, dword ptr [edx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114d009d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d00a2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d00a5 jae 0x114d00bf */
  if (!C.cf) goto L_114d00bf;
  /* 114d00a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d00aa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d00ae je 0x114d00bd */
  if (C.zf) goto L_114d00bd;
  /* 114d00b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d00b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d00b6 push edx */
  push32((uint32_t)(EDX));
  /* 114d00b7 call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114d00bdu);
L_114d00bd:;
  /* 114d00bd jmp 0x114d008a */
  goto L_114d008a;
L_114d00bf:;
  /* 114d00bf push 2 */
  push32((uint32_t)(0x2u));
  /* 114d00c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d00c4 mov ecx, dword ptr [eax*4 + 0x11500b00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114d00cb push ecx */
  push32((uint32_t)(ECX));
  /* 114d00cc call 0x114cc390 */
  push32(0x114d00d1u); f_114cc390();
  /* 114d00d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d00d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d00d7 mov dword ptr [edx*4 + 0x11500b00], 0 */
  w32((uint32_t)(EDX*4 + 0x11500b00), (0x0u));
L_114d00e2:;
  /* 114d00e2 jmp 0x114d005f */
  goto L_114d005f;
L_114d00e7:;
  /* 114d00e7 mov esp, ebp */
  ESP = (EBP);
  /* 114d00e9 pop ebp */
  EBP = (pop32());
  /* 114d00ea ret  */
  ESPCHK(0x114d0050u, _esp0);
  ESP += 4; return;
}

/* FUN_100100f0 @ 0x114d00f0 (329 bytes, 102 insns) */
void f_114d00f0(void) {
  FTRACE(0x114d00f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d00f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d00f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d00f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d00f6 cmp dword ptr [0x11500c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d00fd jne 0x114d0104 */
  if (!C.zf) goto L_114d0104;
  /* 114d00ff call 0x114d7340 */
  push32(0x114d0104u); f_114d7340();
L_114d0104:;
  /* 114d0104 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d010b mov eax, dword ptr [0x114ff124] */
  EAX = (r32((uint32_t)(0x114ff124)));
  /* 114d0110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d0113:;
  /* 114d0113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0116 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d0119 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d011b je 0x114d0149 */
  if (C.zf) goto L_114d0149;
  /* 114d011d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0120 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d0123 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0126 je 0x114d0131 */
  if (C.zf) goto L_114d0131;
  /* 114d0128 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d012b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d012e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114d0131:;
  /* 114d0131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0134 push eax */
  push32((uint32_t)(EAX));
  /* 114d0135 call 0x114d0fb0 */
  push32(0x114d013au); f_114d0fb0();
  /* 114d013a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d013d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0140 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114d0144 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d0147 jmp 0x114d0113 */
  goto L_114d0113;
L_114d0149:;
  /* 114d0149 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 114d014b push 0x114f9fbc */
  push32((uint32_t)(0x114f9fbcu));
  /* 114d0150 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d0152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0155 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 114d015c push ecx */
  push32((uint32_t)(ECX));
  /* 114d015d call 0x114cb900 */
  push32(0x114d0162u); f_114cb900();
  /* 114d0162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0165 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d0168 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d016b mov dword ptr [0x114ff1cc], edx */
  w32((uint32_t)(0x114ff1cc), (EDX));
  /* 114d0171 cmp dword ptr [0x114ff1cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0178 jne 0x114d0184 */
  if (!C.zf) goto L_114d0184;
  /* 114d017a push 9 */
  push32((uint32_t)(0x9u));
  /* 114d017c call 0x114ca370 */
  push32(0x114d0181u); f_114ca370();
  /* 114d0181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d0184:;
  /* 114d0184 mov eax, dword ptr [0x114ff124] */
  EAX = (r32((uint32_t)(0x114ff124)));
  /* 114d0189 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d018c jmp 0x114d0197 */
  goto L_114d0197;
L_114d018e:;
  /* 114d018e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0191 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0194 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d0197:;
  /* 114d0197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d019a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d019d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d019f je 0x114d0207 */
  if (C.zf) goto L_114d0207;
  /* 114d01a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d01a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d01a5 call 0x114d0fb0 */
  push32(0x114d01aau); f_114d0fb0();
  /* 114d01aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d01ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d01b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d01b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d01b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d01b9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d01bc je 0x114d0205 */
  if (C.zf) goto L_114d0205;
  /* 114d01be push 0x79 */
  push32((uint32_t)(0x79u));
  /* 114d01c0 push 0x114f9fbc */
  push32((uint32_t)(0x114f9fbcu));
  /* 114d01c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d01c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d01ca push ecx */
  push32((uint32_t)(ECX));
  /* 114d01cb call 0x114cb900 */
  push32(0x114d01d0u); f_114cb900();
  /* 114d01d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d01d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d01d6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d01d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d01db cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d01de jne 0x114d01ea */
  if (!C.zf) goto L_114d01ea;
  /* 114d01e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d01e2 call 0x114ca370 */
  push32(0x114d01e7u); f_114ca370();
  /* 114d01e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d01ea:;
  /* 114d01ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d01ed push ecx */
  push32((uint32_t)(ECX));
  /* 114d01ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d01f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d01f3 push eax */
  push32((uint32_t)(EAX));
  /* 114d01f4 call 0x114d1130 */
  push32(0x114d01f9u); f_114d1130();
  /* 114d01f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d01fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d01ff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114d0205:;
  /* 114d0205 jmp 0x114d018e */
  goto L_114d018e;
L_114d0207:;
  /* 114d0207 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d0209 mov edx, dword ptr [0x114ff124] */
  EDX = (r32((uint32_t)(0x114ff124)));
  /* 114d020f push edx */
  push32((uint32_t)(EDX));
  /* 114d0210 call 0x114cc390 */
  push32(0x114d0215u); f_114cc390();
  /* 114d0215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0218 mov dword ptr [0x114ff124], 0 */
  w32((uint32_t)(0x114ff124), (0x0u));
  /* 114d0222 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0225 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d022b mov dword ptr [0x11500c40], 1 */
  w32((uint32_t)(0x11500c40), (0x1u));
  /* 114d0235 mov esp, ebp */
  ESP = (EBP);
  /* 114d0237 pop ebp */
  EBP = (pop32());
  /* 114d0238 ret  */
  ESPCHK(0x114d00f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010240 @ 0x114d0240 (216 bytes, 69 insns) */
void f_114d0240(void) {
  FTRACE(0x114d0240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0240 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0241 mov ebp, esp */
  EBP = (ESP);
  /* 114d0243 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0246 cmp dword ptr [0x11500c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d024d jne 0x114d0254 */
  if (!C.zf) goto L_114d0254;
  /* 114d024f call 0x114d7340 */
  push32(0x114d0254u); f_114d7340();
L_114d0254:;
  /* 114d0254 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 114d0259 push 0x114ff1f4 */
  push32((uint32_t)(0x114ff1f4u));
  /* 114d025e push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0260 call dword ptr [0x11501434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501434))), 0x114d0266u);
  /* 114d0266 mov dword ptr [0x114ff1dc], 0x114ff1f4 */
  w32((uint32_t)(0x114ff1dc), (0x114ff1f4u));
  /* 114d0270 mov eax, dword ptr [0x11500c74] */
  EAX = (r32((uint32_t)(0x11500c74)));
  /* 114d0275 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d0278 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d027a jne 0x114d0287 */
  if (!C.zf) goto L_114d0287;
  /* 114d027c mov edx, dword ptr [0x114ff1dc] */
  EDX = (r32((uint32_t)(0x114ff1dc)));
  /* 114d0282 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114d0285 jmp 0x114d028f */
  goto L_114d028f;
L_114d0287:;
  /* 114d0287 mov eax, dword ptr [0x11500c74] */
  EAX = (r32((uint32_t)(0x11500c74)));
  /* 114d028c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_114d028f:;
  /* 114d028f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d0292 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d0295 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 114d0298 push edx */
  push32((uint32_t)(EDX));
  /* 114d0299 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114d029c push eax */
  push32((uint32_t)(EAX));
  /* 114d029d push 0 */
  push32((uint32_t)(0x0u));
  /* 114d029f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d02a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d02a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d02a5 call 0x114d0320 */
  push32(0x114d02aau); f_114d0320();
  /* 114d02aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d02ad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114d02b2 push 0x114f9fc8 */
  push32((uint32_t)(0x114f9fc8u));
  /* 114d02b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d02b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d02bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d02bf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 114d02c2 push ecx */
  push32((uint32_t)(ECX));
  /* 114d02c3 call 0x114cb900 */
  push32(0x114d02c8u); f_114cb900();
  /* 114d02c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d02cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d02ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d02d2 jne 0x114d02de */
  if (!C.zf) goto L_114d02de;
  /* 114d02d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 114d02d6 call 0x114ca370 */
  push32(0x114d02dbu); f_114ca370();
  /* 114d02db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d02de:;
  /* 114d02de lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 114d02e1 push edx */
  push32((uint32_t)(EDX));
  /* 114d02e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114d02e5 push eax */
  push32((uint32_t)(EAX));
  /* 114d02e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d02e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d02ec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 114d02ef push eax */
  push32((uint32_t)(EAX));
  /* 114d02f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d02f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d02f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d02f7 push edx */
  push32((uint32_t)(EDX));
  /* 114d02f8 call 0x114d0320 */
  push32(0x114d02fdu); f_114d0320();
  /* 114d02fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0300 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0303 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0306 mov dword ptr [0x114ff1c0], eax */
  w32((uint32_t)(0x114ff1c0), (EAX));
  /* 114d030b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d030e mov dword ptr [0x114ff1c4], ecx */
  w32((uint32_t)(0x114ff1c4), (ECX));
  /* 114d0314 mov esp, ebp */
  ESP = (EBP);
  /* 114d0316 pop ebp */
  EBP = (pop32());
  /* 114d0317 ret  */
  ESPCHK(0x114d0240u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x114d0320 (1060 bytes, 360 insns) */
void f_114d0320(void) {
  FTRACE(0x114d0320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0320 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0321 mov ebp, esp */
  EBP = (ESP);
  /* 114d0323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0326 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0329 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d032f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0332 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 114d0338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d033b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d033e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0342 je 0x114d0355 */
  if (C.zf) goto L_114d0355;
  /* 114d0344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0347 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d034a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d034c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d034f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0352 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_114d0355:;
  /* 114d0355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0358 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d035b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d035e jne 0x114d042d */
  if (!C.zf) goto L_114d042d;
L_114d0364:;
  /* 114d0364 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0367 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d036a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d036d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0370 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d0373 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0376 je 0x114d03f2 */
  if (C.zf) goto L_114d03f2;
  /* 114d0378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d037b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d037e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d0380 je 0x114d03f2 */
  if (C.zf) goto L_114d03f2;
  /* 114d0382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0385 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d0387 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d038b mov al, byte ptr [edx + 0x114ff661] */
  AL = (r8((uint32_t)(EDX + 0x114ff661)));
  /* 114d0391 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114d0394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d0396 je 0x114d03c7 */
  if (C.zf) goto L_114d03c7;
  /* 114d0398 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d039b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d039d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d03a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d03a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d03a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d03a9 je 0x114d03c7 */
  if (C.zf) goto L_114d03c7;
  /* 114d03ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d03ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d03b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d03b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114d03b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d03b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d03bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114d03be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d03c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d03c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d03c7:;
  /* 114d03c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d03ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d03cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d03cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d03d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d03d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d03d8 je 0x114d03ed */
  if (C.zf) goto L_114d03ed;
  /* 114d03da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d03dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d03e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d03e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d03e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d03e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d03ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_114d03ed:;
  /* 114d03ed jmp 0x114d0364 */
  goto L_114d0364;
L_114d03f2:;
  /* 114d03f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d03f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d03f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d03fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d03fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d03ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0403 je 0x114d0414 */
  if (C.zf) goto L_114d0414;
  /* 114d0405 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0408 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 114d040b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d040e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0411 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_114d0414:;
  /* 114d0414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0417 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d041a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d041d jne 0x114d0428 */
  if (!C.zf) goto L_114d0428;
  /* 114d041f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0422 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0425 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d0428:;
  /* 114d0428 jmp 0x114d04fc */
  goto L_114d04fc;
L_114d042d:;
  /* 114d042d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0430 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d0432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0435 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0438 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d043a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d043e je 0x114d0453 */
  if (C.zf) goto L_114d0453;
  /* 114d0440 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0446 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0448 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d044a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d044d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0450 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_114d0453:;
  /* 114d0453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0456 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0458 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 114d045b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d045e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0461 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d0464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0467 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d046d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d046f mov dl, byte ptr [ecx + 0x114ff661] */
  DL = (r8((uint32_t)(ECX + 0x114ff661)));
  /* 114d0475 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d0478 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d047a je 0x114d04ab */
  if (C.zf) goto L_114d04ab;
  /* 114d047c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d047f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d0481 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0484 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0487 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d0489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d048d je 0x114d04a2 */
  if (C.zf) goto L_114d04a2;
  /* 114d048f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0495 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0497 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0499 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d049c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d049f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_114d04a2:;
  /* 114d04a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d04a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d04a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d04ab:;
  /* 114d04ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d04ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d04b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d04b7 je 0x114d04d7 */
  if (C.zf) goto L_114d04d7;
  /* 114d04b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d04bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d04c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d04c3 je 0x114d04d7 */
  if (C.zf) goto L_114d04d7;
  /* 114d04c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d04c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d04ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d04d1 jne 0x114d042d */
  if (!C.zf) goto L_114d042d;
L_114d04d7:;
  /* 114d04d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d04da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d04e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d04e2 jne 0x114d04ef */
  if (!C.zf) goto L_114d04ef;
  /* 114d04e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d04e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d04ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d04ed jmp 0x114d04fc */
  goto L_114d04fc;
L_114d04ef:;
  /* 114d04ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d04f3 je 0x114d04fc */
  if (C.zf) goto L_114d04fc;
  /* 114d04f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d04f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_114d04fc:;
  /* 114d04fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_114d0503:;
  /* 114d0503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0506 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d0509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d050b je 0x114d052e */
  if (C.zf) goto L_114d052e;
L_114d050d:;
  /* 114d050d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0510 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d0513 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0516 je 0x114d0523 */
  if (C.zf) goto L_114d0523;
  /* 114d0518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d051b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d051e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0521 jne 0x114d052e */
  if (!C.zf) goto L_114d052e;
L_114d0523:;
  /* 114d0523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0526 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0529 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d052c jmp 0x114d050d */
  goto L_114d050d;
L_114d052e:;
  /* 114d052e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0531 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d0534 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d0536 jne 0x114d053d */
  if (!C.zf) goto L_114d053d;
  /* 114d0538 jmp 0x114d071b */
  goto L_114d071b;
L_114d053d:;
  /* 114d053d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0541 je 0x114d0554 */
  if (C.zf) goto L_114d0554;
  /* 114d0543 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0546 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0549 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d054b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d054e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0551 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_114d0554:;
  /* 114d0554 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0557 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d0559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d055c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d055f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114d0561:;
  /* 114d0561 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114d0568 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114d056f:;
  /* 114d056f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0572 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d0575 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0578 jne 0x114d058e */
  if (!C.zf) goto L_114d058e;
  /* 114d057a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d057d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0580 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d0583 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d0586 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0589 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d058c jmp 0x114d056f */
  goto L_114d056f;
L_114d058e:;
  /* 114d058e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0591 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d0594 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0597 jne 0x114d05ea */
  if (!C.zf) goto L_114d05ea;
  /* 114d0599 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d059c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d059e mov ecx, 2 */
  ECX = (0x2u);
  /* 114d05a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d05a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d05a7 jne 0x114d05e2 */
  if (!C.zf) goto L_114d05e2;
  /* 114d05a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d05ad je 0x114d05cf */
  if (C.zf) goto L_114d05cf;
  /* 114d05af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d05b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114d05b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d05b9 jne 0x114d05c6 */
  if (!C.zf) goto L_114d05c6;
  /* 114d05bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d05be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d05c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d05c4 jmp 0x114d05cd */
  goto L_114d05cd;
L_114d05c6:;
  /* 114d05c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114d05cd:;
  /* 114d05cd jmp 0x114d05d6 */
  goto L_114d05d6;
L_114d05cf:;
  /* 114d05cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114d05d6:;
  /* 114d05d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d05d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d05dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 114d05df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_114d05e2:;
  /* 114d05e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d05e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d05e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114d05ea:;
  /* 114d05ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d05ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d05f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d05f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d05f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d05f8 je 0x114d061e */
  if (C.zf) goto L_114d061e;
  /* 114d05fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d05fe je 0x114d060f */
  if (C.zf) goto L_114d060f;
  /* 114d0600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0603 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 114d0606 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0609 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d060c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_114d060f:;
  /* 114d060f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0612 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d0614 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0617 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d061a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d061c jmp 0x114d05ea */
  goto L_114d05ea;
L_114d061e:;
  /* 114d061e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0621 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d0624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d0626 je 0x114d0644 */
  if (C.zf) goto L_114d0644;
  /* 114d0628 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d062c jne 0x114d0649 */
  if (!C.zf) goto L_114d0649;
  /* 114d062e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0631 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d0634 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0637 je 0x114d0644 */
  if (C.zf) goto L_114d0644;
  /* 114d0639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d063c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d063f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0642 jne 0x114d0649 */
  if (!C.zf) goto L_114d0649;
L_114d0644:;
  /* 114d0644 jmp 0x114d06f4 */
  goto L_114d06f4;
L_114d0649:;
  /* 114d0649 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d064d je 0x114d06e6 */
  if (C.zf) goto L_114d06e6;
  /* 114d0653 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0657 je 0x114d06ad */
  if (C.zf) goto L_114d06ad;
  /* 114d0659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d065c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d065e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d0660 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d0662 mov cl, byte ptr [eax + 0x114ff661] */
  CL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114d0668 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d066b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d066d je 0x114d0698 */
  if (C.zf) goto L_114d0698;
  /* 114d066f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0675 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114d0677 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114d0679 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d067c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d067f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 114d0682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0685 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0688 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d068b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d068e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d0690 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0693 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0696 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d0698:;
  /* 114d0698 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d069b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d069e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d06a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114d06a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d06a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d06a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114d06ab jmp 0x114d06d9 */
  goto L_114d06d9;
L_114d06ad:;
  /* 114d06ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d06b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d06b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d06b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d06b6 mov cl, byte ptr [eax + 0x114ff661] */
  CL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114d06bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d06bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d06c1 je 0x114d06d9 */
  if (C.zf) goto L_114d06d9;
  /* 114d06c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d06c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d06c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d06cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d06cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d06d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d06d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d06d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d06d9:;
  /* 114d06d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d06dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d06de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d06e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d06e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d06e6:;
  /* 114d06e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d06e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d06ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d06ef jmp 0x114d0561 */
  goto L_114d0561;
L_114d06f4:;
  /* 114d06f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d06f8 je 0x114d0709 */
  if (C.zf) goto L_114d0709;
  /* 114d06fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d06fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 114d0700 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0703 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0706 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_114d0709:;
  /* 114d0709 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d070c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d070e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0711 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d0714 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d0716 jmp 0x114d0503 */
  goto L_114d0503;
L_114d071b:;
  /* 114d071b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d071f je 0x114d0733 */
  if (C.zf) goto L_114d0733;
  /* 114d0721 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0724 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d072a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d072d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0730 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_114d0733:;
  /* 114d0733 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0736 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d0738 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d073b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d073e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d0740 mov esp, ebp */
  ESP = (EBP);
  /* 114d0742 pop ebp */
  EBP = (pop32());
  /* 114d0743 ret  */
  ESPCHK(0x114d0320u, _esp0);
  ESP += 4; return;
}

/* FUN_10010750 @ 0x114d0750 (537 bytes, 173 insns) */
void f_114d0750(void) {
  FTRACE(0x114d0750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0750 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0751 mov ebp, esp */
  EBP = (ESP);
  /* 114d0753 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0756 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114d075d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 114d0764 cmp dword ptr [0x114ff2f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff2f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d076b jne 0x114d07aa */
  if (!C.zf) goto L_114d07aa;
  /* 114d076d call dword ptr [0x115013b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b4))), 0x114d0773u);
  /* 114d0773 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d0776 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d077a je 0x114d0788 */
  if (C.zf) goto L_114d0788;
  /* 114d077c mov dword ptr [0x114ff2f8], 1 */
  w32((uint32_t)(0x114ff2f8), (0x1u));
  /* 114d0786 jmp 0x114d07aa */
  goto L_114d07aa;
L_114d0788:;
  /* 114d0788 call dword ptr [0x115013ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013ac))), 0x114d078eu);
  /* 114d078e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d0791 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0795 je 0x114d07a3 */
  if (C.zf) goto L_114d07a3;
  /* 114d0797 mov dword ptr [0x114ff2f8], 2 */
  w32((uint32_t)(0x114ff2f8), (0x2u));
  /* 114d07a1 jmp 0x114d07aa */
  goto L_114d07aa;
L_114d07a3:;
  /* 114d07a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d07a5 jmp 0x114d0965 */
  goto L_114d0965;
L_114d07aa:;
  /* 114d07aa cmp dword ptr [0x114ff2f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff2f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d07b1 jne 0x114d08ae */
  if (!C.zf) goto L_114d08ae;
  /* 114d07b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d07bb jne 0x114d07d3 */
  if (!C.zf) goto L_114d07d3;
  /* 114d07bd call dword ptr [0x115013b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b4))), 0x114d07c3u);
  /* 114d07c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d07c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d07ca jne 0x114d07d3 */
  if (!C.zf) goto L_114d07d3;
  /* 114d07cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d07ce jmp 0x114d0965 */
  goto L_114d0965;
L_114d07d3:;
  /* 114d07d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d07d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d07d9:;
  /* 114d07d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d07dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d07de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 114d07e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d07e3 je 0x114d0805 */
  if (C.zf) goto L_114d0805;
  /* 114d07e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d07e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d07eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d07ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d07f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d07f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 114d07f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d07f8 jne 0x114d0803 */
  if (!C.zf) goto L_114d0803;
  /* 114d07fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d07fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0800 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d0803:;
  /* 114d0803 jmp 0x114d07d9 */
  goto L_114d07d9;
L_114d0805:;
  /* 114d0805 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0808 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d080b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d080d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0810 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d0813 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0815 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0817 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0819 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d081b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d081e push edx */
  push32((uint32_t)(EDX));
  /* 114d081f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d0822 push eax */
  push32((uint32_t)(EAX));
  /* 114d0823 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0825 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0827 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d082du);
  /* 114d082d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d0830 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0834 je 0x114d0854 */
  if (C.zf) goto L_114d0854;
  /* 114d0836 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 114d0838 push 0x114f9fd4 */
  push32((uint32_t)(0x114f9fd4u));
  /* 114d083d push 2 */
  push32((uint32_t)(0x2u));
  /* 114d083f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d0842 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0843 call 0x114cb900 */
  push32(0x114d0848u); f_114cb900();
  /* 114d0848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d084b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d084e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0852 jne 0x114d0865 */
  if (!C.zf) goto L_114d0865;
L_114d0854:;
  /* 114d0854 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d0857 push edx */
  push32((uint32_t)(EDX));
  /* 114d0858 call dword ptr [0x115013c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013c0))), 0x114d085eu);
  /* 114d085e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d0860 jmp 0x114d0965 */
  goto L_114d0965;
L_114d0865:;
  /* 114d0865 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0867 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0869 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d086c push eax */
  push32((uint32_t)(EAX));
  /* 114d086d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d0870 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0874 push edx */
  push32((uint32_t)(EDX));
  /* 114d0875 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d0878 push eax */
  push32((uint32_t)(EAX));
  /* 114d0879 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d087b push 0 */
  push32((uint32_t)(0x0u));
  /* 114d087d call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d0883u);
  /* 114d0883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d0885 jne 0x114d089c */
  if (!C.zf) goto L_114d089c;
  /* 114d0887 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d0889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d088c push ecx */
  push32((uint32_t)(ECX));
  /* 114d088d call 0x114cc390 */
  push32(0x114d0892u); f_114cc390();
  /* 114d0892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0895 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_114d089c:;
  /* 114d089c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d089f push edx */
  push32((uint32_t)(EDX));
  /* 114d08a0 call dword ptr [0x115013c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013c0))), 0x114d08a6u);
  /* 114d08a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d08a9 jmp 0x114d0965 */
  goto L_114d0965;
L_114d08ae:;
  /* 114d08ae cmp dword ptr [0x114ff2f8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff2f8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d08b5 jne 0x114d0963 */
  if (!C.zf) goto L_114d0963;
  /* 114d08bb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d08bf jne 0x114d08d7 */
  if (!C.zf) goto L_114d08d7;
  /* 114d08c1 call dword ptr [0x115013ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013ac))), 0x114d08c7u);
  /* 114d08c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d08ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d08ce jne 0x114d08d7 */
  if (!C.zf) goto L_114d08d7;
  /* 114d08d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d08d2 jmp 0x114d0965 */
  goto L_114d0965;
L_114d08d7:;
  /* 114d08d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d08da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d08dd:;
  /* 114d08dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d08e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d08e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d08e5 je 0x114d0905 */
  if (C.zf) goto L_114d0905;
  /* 114d08e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d08ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d08ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d08f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d08f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d08f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d08f8 jne 0x114d0903 */
  if (!C.zf) goto L_114d0903;
  /* 114d08fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d08fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0900 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d0903:;
  /* 114d0903 jmp 0x114d08dd */
  goto L_114d08dd;
L_114d0905:;
  /* 114d0905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0908 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d090b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d090e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d0911 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 114d0916 push 0x114f9fd4 */
  push32((uint32_t)(0x114f9fd4u));
  /* 114d091b push 2 */
  push32((uint32_t)(0x2u));
  /* 114d091d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d0920 push edx */
  push32((uint32_t)(EDX));
  /* 114d0921 call 0x114cb900 */
  push32(0x114d0926u); f_114cb900();
  /* 114d0926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d092c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0930 jne 0x114d0940 */
  if (!C.zf) goto L_114d0940;
  /* 114d0932 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d0935 push eax */
  push32((uint32_t)(EAX));
  /* 114d0936 call dword ptr [0x115013b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b8))), 0x114d093cu);
  /* 114d093c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d093e jmp 0x114d0965 */
  goto L_114d0965;
L_114d0940:;
  /* 114d0940 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d0943 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0944 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d0947 push edx */
  push32((uint32_t)(EDX));
  /* 114d0948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d094b push eax */
  push32((uint32_t)(EAX));
  /* 114d094c call 0x114d7370 */
  push32(0x114d0951u); f_114d7370();
  /* 114d0951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0954 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d0957 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0958 call dword ptr [0x115013b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b8))), 0x114d095eu);
  /* 114d095e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0961 jmp 0x114d0965 */
  goto L_114d0965;
L_114d0963:;
  /* 114d0963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d0965:;
  /* 114d0965 mov esp, ebp */
  ESP = (EBP);
  /* 114d0967 pop ebp */
  EBP = (pop32());
  /* 114d0968 ret  */
  ESPCHK(0x114d0750u, _esp0);
  ESP += 4; return;
}

/* FUN_10010970 @ 0x114d0970 (77 bytes, 25 insns) */
void f_114d0970(void) {
  FTRACE(0x114d0970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0970 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0971 mov ebp, esp */
  EBP = (ESP);
  /* 114d0973 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0975 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114d097a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d097c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0980 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114d0983 push eax */
  push32((uint32_t)(EAX));
  /* 114d0984 call dword ptr [0x115013a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a0))), 0x114d098au);
  /* 114d098a mov dword ptr [0x11500ae8], eax */
  w32((uint32_t)(0x11500ae8), (EAX));
  /* 114d098f cmp dword ptr [0x11500ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0996 jne 0x114d099c */
  if (!C.zf) goto L_114d099c;
  /* 114d0998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d099a jmp 0x114d09bb */
  goto L_114d09bb;
L_114d099c:;
  /* 114d099c call 0x114d3720 */
  push32(0x114d09a1u); f_114d3720();
  /* 114d09a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d09a3 jne 0x114d09b6 */
  if (!C.zf) goto L_114d09b6;
  /* 114d09a5 mov ecx, dword ptr [0x11500ae8] */
  ECX = (r32((uint32_t)(0x11500ae8)));
  /* 114d09ab push ecx */
  push32((uint32_t)(ECX));
  /* 114d09ac call dword ptr [0x115013a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a4))), 0x114d09b2u);
  /* 114d09b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d09b4 jmp 0x114d09bb */
  goto L_114d09bb;
L_114d09b6:;
  /* 114d09b6 mov eax, 1 */
  EAX = (0x1u);
L_114d09bb:;
  /* 114d09bb pop ebp */
  EBP = (pop32());
  /* 114d09bc ret  */
  ESPCHK(0x114d0970u, _esp0);
  ESP += 4; return;
}

/* FUN_100109c0 @ 0x114d09c0 (156 bytes, 48 insns) */
void f_114d09c0(void) {
  FTRACE(0x114d09c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d09c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d09c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d09c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d09c6 mov eax, dword ptr [0x11500ae4] */
  EAX = (r32((uint32_t)(0x11500ae4)));
  /* 114d09cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d09ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d09d5 jmp 0x114d09e0 */
  goto L_114d09e0;
L_114d09d7:;
  /* 114d09d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d09da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d09dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d09e0:;
  /* 114d09e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d09e3 cmp edx, dword ptr [0x11500ae0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11500ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d09e9 jge 0x114d0a36 */
  if ((C.sf==C.of)) goto L_114d0a36;
  /* 114d09eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 114d09f0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 114d09f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d09f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114d09fb push ecx */
  push32((uint32_t)(ECX));
  /* 114d09fc call dword ptr [0x11501398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501398))), 0x114d0a02u);
  /* 114d0a02 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114d0a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0a09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0a0c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114d0a0f push eax */
  push32((uint32_t)(EAX));
  /* 114d0a10 call dword ptr [0x11501398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501398))), 0x114d0a16u);
  /* 114d0a16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0a19 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114d0a1c push edx */
  push32((uint32_t)(EDX));
  /* 114d0a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0a1f mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d0a24 push eax */
  push32((uint32_t)(EAX));
  /* 114d0a25 call dword ptr [0x115013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a8))), 0x114d0a2bu);
  /* 114d0a2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0a2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0a31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d0a34 jmp 0x114d09d7 */
  goto L_114d09d7;
L_114d0a36:;
  /* 114d0a36 mov edx, dword ptr [0x11500ae4] */
  EDX = (r32((uint32_t)(0x11500ae4)));
  /* 114d0a3c push edx */
  push32((uint32_t)(EDX));
  /* 114d0a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0a3f mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d0a44 push eax */
  push32((uint32_t)(EAX));
  /* 114d0a45 call dword ptr [0x115013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a8))), 0x114d0a4bu);
  /* 114d0a4b mov ecx, dword ptr [0x11500ae8] */
  ECX = (r32((uint32_t)(0x11500ae8)));
  /* 114d0a51 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0a52 call dword ptr [0x115013a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a4))), 0x114d0a58u);
  /* 114d0a58 mov esp, ebp */
  ESP = (EBP);
  /* 114d0a5a pop ebp */
  EBP = (pop32());
  /* 114d0a5b ret  */
  ESPCHK(0x114d09c0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x114d0a60 (73 bytes, 19 insns) */
void f_114d0a60(void) {
  FTRACE(0x114d0a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0a60 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0a61 mov ebp, esp */
  EBP = (ESP);
  /* 114d0a63 cmp dword ptr [0x114ff12c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff12c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0a6a je 0x114d0a7e */
  if (C.zf) goto L_114d0a7e;
  /* 114d0a6c cmp dword ptr [0x114ff12c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff12c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0a73 jne 0x114d0aa7 */
  if (!C.zf) goto L_114d0aa7;
  /* 114d0a75 cmp dword ptr [0x114ff130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0a7c jne 0x114d0aa7 */
  if (!C.zf) goto L_114d0aa7;
L_114d0a7e:;
  /* 114d0a7e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 114d0a83 call 0x114d0ab0 */
  push32(0x114d0a88u); f_114d0ab0();
  /* 114d0a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0a8b cmp dword ptr [0x114ff2fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff2fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0a92 je 0x114d0a9a */
  if (C.zf) goto L_114d0a9a;
  /* 114d0a94 call dword ptr [0x114ff2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff2fc))), 0x114d0a9au);
L_114d0a9a:;
  /* 114d0a9a push 0xff */
  push32((uint32_t)(0xffu));
  /* 114d0a9f call 0x114d0ab0 */
  push32(0x114d0aa4u); f_114d0ab0();
  /* 114d0aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d0aa7:;
  /* 114d0aa7 pop ebp */
  EBP = (pop32());
  /* 114d0aa8 ret  */
  ESPCHK(0x114d0a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x114d0ab0 (447 bytes, 131 insns) */
void f_114d0ab0(void) {
  FTRACE(0x114d0ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0ab1 mov ebp, esp */
  EBP = (ESP);
  /* 114d0ab3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0ab9 push ebx */
  push32((uint32_t)(EBX));
  /* 114d0aba push esi */
  push32((uint32_t)(ESI));
  /* 114d0abb push edi */
  push32((uint32_t)(EDI));
  /* 114d0abc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d0ac3 jmp 0x114d0ace */
  goto L_114d0ace;
L_114d0ac5:;
  /* 114d0ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0ac8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d0ace:;
  /* 114d0ace cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0ad2 jae 0x114d0ae7 */
  if (!C.cf) goto L_114d0ae7;
  /* 114d0ad4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0ada cmp edx, dword ptr [ecx*8 + 0x114fcfa8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x114fcfa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0ae1 jne 0x114d0ae5 */
  if (!C.zf) goto L_114d0ae5;
  /* 114d0ae3 jmp 0x114d0ae7 */
  goto L_114d0ae7;
L_114d0ae5:;
  /* 114d0ae5 jmp 0x114d0ac5 */
  goto L_114d0ac5;
L_114d0ae7:;
  /* 114d0ae7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0aea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0aed cmp ecx, dword ptr [eax*8 + 0x114fcfa8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114fcfa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0af4 jne 0x114d0c68 */
  if (!C.zf) goto L_114d0c68;
  /* 114d0afa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0b01 je 0x114d0b24 */
  if (C.zf) goto L_114d0b24;
  /* 114d0b03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0b06 mov eax, dword ptr [edx*8 + 0x114fcfac] */
  EAX = (r32((uint32_t)(EDX*8 + 0x114fcfac)));
  /* 114d0b0d push eax */
  push32((uint32_t)(EAX));
  /* 114d0b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0b14 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d0b16 call 0x114ca4c0 */
  push32(0x114d0b1bu); f_114ca4c0();
  /* 114d0b1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0b1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0b21 jne 0x114d0b24 */
  if (!C.zf) goto L_114d0b24;
  /* 114d0b23 int3  */
  x86_unimpl("int3 @ 0x114d0b23");
L_114d0b24:;
  /* 114d0b24 cmp dword ptr [0x114ff12c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff12c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0b2b je 0x114d0b3f */
  if (C.zf) goto L_114d0b3f;
  /* 114d0b2d cmp dword ptr [0x114ff12c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff12c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0b34 jne 0x114d0b78 */
  if (!C.zf) goto L_114d0b78;
  /* 114d0b36 cmp dword ptr [0x114ff130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0b3d jne 0x114d0b78 */
  if (!C.zf) goto L_114d0b78;
L_114d0b3f:;
  /* 114d0b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0b41 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 114d0b44 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0b45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0b48 mov eax, dword ptr [edx*8 + 0x114fcfac] */
  EAX = (r32((uint32_t)(EDX*8 + 0x114fcfac)));
  /* 114d0b4f push eax */
  push32((uint32_t)(EAX));
  /* 114d0b50 call 0x114d0fb0 */
  push32(0x114d0b55u); f_114d0fb0();
  /* 114d0b55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0b58 push eax */
  push32((uint32_t)(EAX));
  /* 114d0b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0b5c mov edx, dword ptr [ecx*8 + 0x114fcfac] */
  EDX = (r32((uint32_t)(ECX*8 + 0x114fcfac)));
  /* 114d0b63 push edx */
  push32((uint32_t)(EDX));
  /* 114d0b64 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 114d0b66 call dword ptr [0x11501418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501418))), 0x114d0b6cu);
  /* 114d0b6c push eax */
  push32((uint32_t)(EAX));
  /* 114d0b6d call dword ptr [0x1150141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150141c))), 0x114d0b73u);
  /* 114d0b73 jmp 0x114d0c68 */
  goto L_114d0c68;
L_114d0b78:;
  /* 114d0b78 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0b7f je 0x114d0c68 */
  if (C.zf) goto L_114d0c68;
  /* 114d0b85 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 114d0b8a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 114d0b90 push eax */
  push32((uint32_t)(EAX));
  /* 114d0b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0b93 call dword ptr [0x11501434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501434))), 0x114d0b99u);
  /* 114d0b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d0b9b jne 0x114d0bb1 */
  if (!C.zf) goto L_114d0bb1;
  /* 114d0b9d push 0x114f9668 */
  push32((uint32_t)(0x114f9668u));
  /* 114d0ba2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 114d0ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0ba9 call 0x114d1130 */
  push32(0x114d0baeu); f_114d1130();
  /* 114d0bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d0bb1:;
  /* 114d0bb1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 114d0bb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d0bba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0bbd push eax */
  push32((uint32_t)(EAX));
  /* 114d0bbe call 0x114d0fb0 */
  push32(0x114d0bc3u); f_114d0fb0();
  /* 114d0bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0bc6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0bc9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0bcc jbe 0x114d0bfa */
  if ((C.cf||C.zf)) goto L_114d0bfa;
  /* 114d0bce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 114d0bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0bd5 call 0x114d0fb0 */
  push32(0x114d0bdau); f_114d0fb0();
  /* 114d0bda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0bdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0be0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 114d0be4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d0be7 push 3 */
  push32((uint32_t)(0x3u));
  /* 114d0be9 push 0x114f9664 */
  push32((uint32_t)(0x114f9664u));
  /* 114d0bee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0bf2 call 0x114d19a0 */
  push32(0x114d0bf7u); f_114d19a0();
  /* 114d0bf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d0bfa:;
  /* 114d0bfa push 0x114fa290 */
  push32((uint32_t)(0x114fa290u));
  /* 114d0bff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 114d0c05 push edx */
  push32((uint32_t)(EDX));
  /* 114d0c06 call 0x114d1130 */
  push32(0x114d0c0bu); f_114d1130();
  /* 114d0c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0c0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0c11 push eax */
  push32((uint32_t)(EAX));
  /* 114d0c12 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 114d0c18 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0c19 call 0x114d1140 */
  push32(0x114d0c1eu); f_114d1140();
  /* 114d0c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0c21 push 0x114f95dc */
  push32((uint32_t)(0x114f95dcu));
  /* 114d0c26 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 114d0c2c push edx */
  push32((uint32_t)(EDX));
  /* 114d0c2d call 0x114d1140 */
  push32(0x114d0c32u); f_114d1140();
  /* 114d0c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0c35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0c38 mov ecx, dword ptr [eax*8 + 0x114fcfac] */
  ECX = (r32((uint32_t)(EAX*8 + 0x114fcfac)));
  /* 114d0c3f push ecx */
  push32((uint32_t)(ECX));
  /* 114d0c40 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 114d0c46 push edx */
  push32((uint32_t)(EDX));
  /* 114d0c47 call 0x114d1140 */
  push32(0x114d0c4cu); f_114d1140();
  /* 114d0c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0c4f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 114d0c54 push 0x114fa268 */
  push32((uint32_t)(0x114fa268u));
  /* 114d0c59 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 114d0c5f push eax */
  push32((uint32_t)(EAX));
  /* 114d0c60 call 0x114d18e0 */
  push32(0x114d0c65u); f_114d18e0();
  /* 114d0c65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d0c68:;
  /* 114d0c68 pop edi */
  EDI = (pop32());
  /* 114d0c69 pop esi */
  ESI = (pop32());
  /* 114d0c6a pop ebx */
  EBX = (pop32());
  /* 114d0c6b mov esp, ebp */
  ESP = (EBP);
  /* 114d0c6d pop ebp */
  EBP = (pop32());
  /* 114d0c6e ret  */
  ESPCHK(0x114d0ab0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x114d0c70 (80 bytes, 27 insns) */
void f_114d0c70(void) {
  FTRACE(0x114d0c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0c70 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0c71 mov ebp, esp */
  EBP = (ESP);
  /* 114d0c73 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0c74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d0c7b jmp 0x114d0c86 */
  goto L_114d0c86;
L_114d0c7d:;
  /* 114d0c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0c80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0c83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d0c86:;
  /* 114d0c86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0c8a jae 0x114d0c9f */
  if (!C.cf) goto L_114d0c9f;
  /* 114d0c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0c8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0c92 cmp edx, dword ptr [ecx*8 + 0x114fcfa8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x114fcfa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0c99 jne 0x114d0c9d */
  if (!C.zf) goto L_114d0c9d;
  /* 114d0c9b jmp 0x114d0c9f */
  goto L_114d0c9f;
L_114d0c9d:;
  /* 114d0c9d jmp 0x114d0c7d */
  goto L_114d0c7d;
L_114d0c9f:;
  /* 114d0c9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0ca5 cmp ecx, dword ptr [eax*8 + 0x114fcfa8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114fcfa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0cac jne 0x114d0cba */
  if (!C.zf) goto L_114d0cba;
  /* 114d0cae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0cb1 mov eax, dword ptr [edx*8 + 0x114fcfac] */
  EAX = (r32((uint32_t)(EDX*8 + 0x114fcfac)));
  /* 114d0cb8 jmp 0x114d0cbc */
  goto L_114d0cbc;
L_114d0cba:;
  /* 114d0cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d0cbc:;
  /* 114d0cbc mov esp, ebp */
  ESP = (EBP);
  /* 114d0cbe pop ebp */
  EBP = (pop32());
  /* 114d0cbf ret  */
  ESPCHK(0x114d0c70u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x114d0cc0 (66 bytes, 28 insns) */
void f_114d0cc0(void) {
  FTRACE(0x114d0cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0cc1 mov ebp, esp */
  EBP = (ESP);
  /* 114d0cc3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0cc7 jne 0x114d0ce7 */
  if (!C.zf) goto L_114d0ce7;
  /* 114d0cc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0ccd jge 0x114d0ce7 */
  if ((C.sf==C.of)) goto L_114d0ce7;
  /* 114d0ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 114d0cd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0cd4 push eax */
  push32((uint32_t)(EAX));
  /* 114d0cd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0cdc push edx */
  push32((uint32_t)(EDX));
  /* 114d0cdd call 0x114d0d10 */
  push32(0x114d0ce2u); f_114d0d10();
  /* 114d0ce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0ce5 jmp 0x114d0cfd */
  goto L_114d0cfd;
L_114d0ce7:;
  /* 114d0ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0ce9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0cec push eax */
  push32((uint32_t)(EAX));
  /* 114d0ced mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0cf4 push edx */
  push32((uint32_t)(EDX));
  /* 114d0cf5 call 0x114d0d10 */
  push32(0x114d0cfau); f_114d0d10();
  /* 114d0cfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d0cfd:;
  /* 114d0cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0d00 pop ebp */
  EBP = (pop32());
  /* 114d0d01 ret  */
  ESPCHK(0x114d0cc0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x114d0d10 (194 bytes, 71 insns) */
void f_114d0d10(void) {
  FTRACE(0x114d0d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0d10 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0d11 mov ebp, esp */
  EBP = (ESP);
  /* 114d0d13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0d16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0d19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d0d1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0d20 je 0x114d0d39 */
  if (C.zf) goto L_114d0d39;
  /* 114d0d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 114d0d28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0d2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d0d31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0d34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d0d36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114d0d39:;
  /* 114d0d39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114d0d3f:;
  /* 114d0d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0d42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d0d44 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d0d47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d0d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d0d4f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d0d52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114d0d55 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0d59 jbe 0x114d0d71 */
  if ((C.cf||C.zf)) goto L_114d0d71;
  /* 114d0d5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0d5e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0d66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0d6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d0d6f jmp 0x114d0d85 */
  goto L_114d0d85;
L_114d0d71:;
  /* 114d0d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0d74 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0d82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d0d85:;
  /* 114d0d85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0d89 ja 0x114d0d3f */
  if ((!C.cf&&!C.zf)) goto L_114d0d3f;
  /* 114d0d8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d8e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114d0d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0d97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d0d9a:;
  /* 114d0d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0d9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0d9f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 114d0da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0da5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0da8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0daa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0dac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0daf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 114d0db2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 114d0db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0db7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0dba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d0dbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0dc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0dc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d0dc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0dc9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0dcc jb 0x114d0d9a */
  if (C.cf) goto L_114d0d9a;
  /* 114d0dce mov esp, ebp */
  ESP = (EBP);
  /* 114d0dd0 pop ebp */
  EBP = (pop32());
  /* 114d0dd1 ret  */
  ESPCHK(0x114d0d10u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x114d0de0 (63 bytes, 24 insns) */
void f_114d0de0(void) {
  FTRACE(0x114d0de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0de0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0de1 mov ebp, esp */
  EBP = (ESP);
  /* 114d0de3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0de4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0de8 jne 0x114d0df9 */
  if (!C.zf) goto L_114d0df9;
  /* 114d0dea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0dee jge 0x114d0df9 */
  if ((C.sf==C.of)) goto L_114d0df9;
  /* 114d0df0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d0df7 jmp 0x114d0e00 */
  goto L_114d0e00;
L_114d0df9:;
  /* 114d0df9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d0e00:;
  /* 114d0e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0e03 push eax */
  push32((uint32_t)(EAX));
  /* 114d0e04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0e07 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0e08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0e0b push edx */
  push32((uint32_t)(EDX));
  /* 114d0e0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0e0f push eax */
  push32((uint32_t)(EAX));
  /* 114d0e10 call 0x114d0d10 */
  push32(0x114d0e15u); f_114d0d10();
  /* 114d0e15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0e18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0e1b mov esp, ebp */
  ESP = (EBP);
  /* 114d0e1d pop ebp */
  EBP = (pop32());
  /* 114d0e1e ret  */
  ESPCHK(0x114d0de0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x114d0e20 (30 bytes, 14 insns) */
void f_114d0e20(void) {
  FTRACE(0x114d0e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0e20 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0e21 mov ebp, esp */
  EBP = (ESP);
  /* 114d0e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0e25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0e28 push eax */
  push32((uint32_t)(EAX));
  /* 114d0e29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0e2c push ecx */
  push32((uint32_t)(ECX));
  /* 114d0e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0e30 push edx */
  push32((uint32_t)(EDX));
  /* 114d0e31 call 0x114d0d10 */
  push32(0x114d0e36u); f_114d0d10();
  /* 114d0e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0e39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0e3c pop ebp */
  EBP = (pop32());
  /* 114d0e3d ret  */
  ESPCHK(0x114d0e20u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x114d0e40 (72 bytes, 28 insns) */
void f_114d0e40(void) {
  FTRACE(0x114d0e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0e40 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0e41 mov ebp, esp */
  EBP = (ESP);
  /* 114d0e43 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0e44 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0e48 jne 0x114d0e61 */
  if (!C.zf) goto L_114d0e61;
  /* 114d0e4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0e4e jg 0x114d0e61 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d0e61;
  /* 114d0e50 jl 0x114d0e58 */
  if ((C.sf!=C.of)) goto L_114d0e58;
  /* 114d0e52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0e56 jae 0x114d0e61 */
  if (!C.cf) goto L_114d0e61;
L_114d0e58:;
  /* 114d0e58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d0e5f jmp 0x114d0e68 */
  goto L_114d0e68;
L_114d0e61:;
  /* 114d0e61 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d0e68:;
  /* 114d0e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0e6b push eax */
  push32((uint32_t)(EAX));
  /* 114d0e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0e6f push ecx */
  push32((uint32_t)(ECX));
  /* 114d0e70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0e73 push edx */
  push32((uint32_t)(EDX));
  /* 114d0e74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0e77 push eax */
  push32((uint32_t)(EAX));
  /* 114d0e78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0e7b push ecx */
  push32((uint32_t)(ECX));
  /* 114d0e7c call 0x114d0e90 */
  push32(0x114d0e81u); f_114d0e90();
  /* 114d0e81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0e84 mov esp, ebp */
  ESP = (EBP);
  /* 114d0e86 pop ebp */
  EBP = (pop32());
  /* 114d0e87 ret  */
  ESPCHK(0x114d0e40u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x114d0e90 (242 bytes, 91 insns) */
void f_114d0e90(void) {
  FTRACE(0x114d0e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0e90 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0e91 mov ebp, esp */
  EBP = (ESP);
  /* 114d0e93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0e96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d0e9c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0ea0 je 0x114d0ec4 */
  if (C.zf) goto L_114d0ec4;
  /* 114d0ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0ea5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 114d0ea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0eab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0eae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d0eb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0eb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d0eb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0eb9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0ebc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d0ebe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114d0ec1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_114d0ec4:;
  /* 114d0ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0ec7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114d0eca:;
  /* 114d0eca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0ecd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d0ecf push ecx */
  push32((uint32_t)(ECX));
  /* 114d0ed0 push eax */
  push32((uint32_t)(EAX));
  /* 114d0ed1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0ed4 push edx */
  push32((uint32_t)(EDX));
  /* 114d0ed5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0ed8 push eax */
  push32((uint32_t)(EAX));
  /* 114d0ed9 call 0x114d61a0 */
  push32(0x114d0edeu); f_114d61a0();
  /* 114d0ede mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d0ee1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0ee4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d0ee6 push edx */
  push32((uint32_t)(EDX));
  /* 114d0ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 114d0ee8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0eeb push eax */
  push32((uint32_t)(EAX));
  /* 114d0eec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0eef push ecx */
  push32((uint32_t)(ECX));
  /* 114d0ef0 call 0x114d6130 */
  push32(0x114d0ef5u); f_114d6130();
  /* 114d0ef5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114d0ef8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 114d0efb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0eff jbe 0x114d0f17 */
  if ((C.cf||C.zf)) goto L_114d0f17;
  /* 114d0f01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0f04 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0f07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0f0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0f12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d0f15 jmp 0x114d0f2b */
  goto L_114d0f2b;
L_114d0f17:;
  /* 114d0f17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d0f1a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0f28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d0f2b:;
  /* 114d0f2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0f2f ja 0x114d0eca */
  if ((!C.cf&&!C.zf)) goto L_114d0eca;
  /* 114d0f31 jb 0x114d0f39 */
  if (C.cf) goto L_114d0f39;
  /* 114d0f33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0f37 ja 0x114d0eca */
  if ((!C.cf&&!C.zf)) goto L_114d0eca;
L_114d0f39:;
  /* 114d0f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f3c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114d0f3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d0f48:;
  /* 114d0f48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0f4d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 114d0f50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0f56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d0f58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d0f5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0f5d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 114d0f60 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 114d0f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d0f65 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d0f68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d0f6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0f6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0f71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d0f74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d0f77 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d0f7a jb 0x114d0f48 */
  if (C.cf) goto L_114d0f48;
  /* 114d0f7c mov esp, ebp */
  ESP = (EBP);
  /* 114d0f7e pop ebp */
  EBP = (pop32());
  /* 114d0f7f ret 0x14 */
  ESPCHK(0x114d0e90u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x114d0f90 (31 bytes, 15 insns) */
void f_114d0f90(void) {
  FTRACE(0x114d0f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0f90 push ebp */
  push32((uint32_t)(EBP));
  /* 114d0f91 mov ebp, esp */
  EBP = (ESP);
  /* 114d0f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d0f95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d0f98 push eax */
  push32((uint32_t)(EAX));
  /* 114d0f99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0f9c push ecx */
  push32((uint32_t)(ECX));
  /* 114d0f9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d0fa0 push edx */
  push32((uint32_t)(EDX));
  /* 114d0fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d0fa4 push eax */
  push32((uint32_t)(EAX));
  /* 114d0fa5 call 0x114d0e90 */
  push32(0x114d0faau); f_114d0e90();
  /* 114d0faa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d0fad pop ebp */
  EBP = (pop32());
  /* 114d0fae ret  */
  ESPCHK(0x114d0f90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x114d0fb0 (123 bytes, 44 insns) */
void f_114d0fb0(void) {
  FTRACE(0x114d0fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d0fb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d0fb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114d0fba je 0x114d0fd0 */
  if (C.zf) goto L_114d0fd0;
L_114d0fbc:;
  /* 114d0fbc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 114d0fbe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114d0fbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114d0fc1 je 0x114d1003 */
  if (C.zf) goto L_114d1003;
  /* 114d0fc3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114d0fc9 jne 0x114d0fbc */
  if (!C.zf) goto L_114d0fbc;
  /* 114d0fcb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_114d0fd0:;
  /* 114d0fd0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114d0fd2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114d0fd7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0fd9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d0fdc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d0fde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d0fe1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114d0fe6 je 0x114d0fd0 */
  if (C.zf) goto L_114d0fd0;
  /* 114d0fe8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 114d0feb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114d0fed je 0x114d1021 */
  if (C.zf) goto L_114d1021;
  /* 114d0fef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 114d0ff1 je 0x114d1017 */
  if (C.zf) goto L_114d1017;
  /* 114d0ff3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 114d0ff8 je 0x114d100d */
  if (C.zf) goto L_114d100d;
  /* 114d0ffa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 114d0fff je 0x114d1003 */
  if (C.zf) goto L_114d1003;
  /* 114d1001 jmp 0x114d0fd0 */
  goto L_114d0fd0;
L_114d1003:;
  /* 114d1003 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 114d1006 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d100a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d100c ret  */
  ESPCHK(0x114d0fb0u, _esp0);
  ESP += 4; return;
L_114d100d:;
  /* 114d100d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 114d1010 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d1014 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1016 ret  */
  ESPCHK(0x114d0fb0u, _esp0);
  ESP += 4; return;
L_114d1017:;
  /* 114d1017 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 114d101a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d101e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1020 ret  */
  ESPCHK(0x114d0fb0u, _esp0);
  ESP += 4; return;
L_114d1021:;
  /* 114d1021 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 114d1024 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d1028 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d102a ret  */
  ESPCHK(0x114d0fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x114d1030 (249 bytes, 93 insns) */
void f_114d1030(void) {
  FTRACE(0x114d1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1030 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1031 mov ebp, esp */
  EBP = (ESP);
  /* 114d1033 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1036 push ebx */
  push32((uint32_t)(EBX));
  /* 114d1037 push esi */
  push32((uint32_t)(ESI));
  /* 114d1038 push edi */
  push32((uint32_t)(EDI));
  /* 114d1039 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 114d103c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114d103f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 114d1042 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_114d1045:;
  /* 114d1045 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1049 jne 0x114d1069 */
  if (!C.zf) goto L_114d1069;
  /* 114d104b push 0x114f9460 */
  push32((uint32_t)(0x114f9460u));
  /* 114d1050 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d1052 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 114d1054 push 0x114f9454 */
  push32((uint32_t)(0x114f9454u));
  /* 114d1059 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d105b call 0x114ca4c0 */
  push32(0x114d1060u); f_114ca4c0();
  /* 114d1060 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1063 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1066 jne 0x114d1069 */
  if (!C.zf) goto L_114d1069;
  /* 114d1068 int3  */
  x86_unimpl("int3 @ 0x114d1068");
L_114d1069:;
  /* 114d1069 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d106b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d106d jne 0x114d1045 */
  if (!C.zf) goto L_114d1045;
L_114d106f:;
  /* 114d106f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1073 jne 0x114d1093 */
  if (!C.zf) goto L_114d1093;
  /* 114d1075 push 0x114f9444 */
  push32((uint32_t)(0x114f9444u));
  /* 114d107a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d107c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 114d107e push 0x114f9454 */
  push32((uint32_t)(0x114f9454u));
  /* 114d1083 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d1085 call 0x114ca4c0 */
  push32(0x114d108au); f_114ca4c0();
  /* 114d108a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d108d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1090 jne 0x114d1093 */
  if (!C.zf) goto L_114d1093;
  /* 114d1092 int3  */
  x86_unimpl("int3 @ 0x114d1092");
L_114d1093:;
  /* 114d1093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d1095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1097 jne 0x114d106f */
  if (!C.zf) goto L_114d106f;
  /* 114d1099 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d109c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 114d10a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d10a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d10ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d10b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d10b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d10ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114d10bd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d10c0 push edx */
  push32((uint32_t)(EDX));
  /* 114d10c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d10c4 push eax */
  push32((uint32_t)(EAX));
  /* 114d10c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10c8 push ecx */
  push32((uint32_t)(ECX));
  /* 114d10c9 call 0x114ced90 */
  push32(0x114d10ceu); f_114ced90();
  /* 114d10ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d10d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d10d4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d10da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d10dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d10e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10e6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d10ea jl 0x114d110e */
  if ((C.sf!=C.of)) goto L_114d110e;
  /* 114d10ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d10ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d10f1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 114d10f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d10f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d10fc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 114d10ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d1102 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d1104 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1107 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d110a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d110c jmp 0x114d111f */
  goto L_114d111f;
L_114d110e:;
  /* 114d110e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d1111 push eax */
  push32((uint32_t)(EAX));
  /* 114d1112 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d1114 call 0x114ceb10 */
  push32(0x114d1119u); f_114ceb10();
  /* 114d1119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d111c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_114d111f:;
  /* 114d111f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d1122 pop edi */
  EDI = (pop32());
  /* 114d1123 pop esi */
  ESI = (pop32());
  /* 114d1124 pop ebx */
  EBX = (pop32());
  /* 114d1125 mov esp, ebp */
  ESP = (EBP);
  /* 114d1127 pop ebp */
  EBP = (pop32());
  /* 114d1128 ret  */
  ESPCHK(0x114d1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011130 @ 0x114d1130 (7 bytes, 3 insns) */
void f_114d1130(void) {
  FTRACE(0x114d1130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1130 push edi */
  push32((uint32_t)(EDI));
  /* 114d1131 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 114d1135 jmp 0x114d11a1 */
  jmp_ind(0x114d11a1u); return;
}

/* FUN_10011140 @ 0x114d1140 (224 bytes, 84 insns) */
void f_114d1140(void) {
  FTRACE(0x114d1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1140 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d1144 push edi */
  push32((uint32_t)(EDI));
  /* 114d1145 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114d114b je 0x114d115c */
  if (C.zf) goto L_114d115c;
L_114d114d:;
  /* 114d114d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 114d114f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114d1150 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114d1152 je 0x114d118f */
  if (C.zf) goto L_114d118f;
  /* 114d1154 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114d115a jne 0x114d114d */
  if (!C.zf) goto L_114d114d;
L_114d115c:;
  /* 114d115c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114d115e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114d1163 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1165 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1168 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d116a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d116d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114d1172 je 0x114d115c */
  if (C.zf) goto L_114d115c;
  /* 114d1174 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 114d1177 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114d1179 je 0x114d119e */
  if (C.zf) goto L_114d119e;
  /* 114d117b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 114d117d je 0x114d1199 */
  if (C.zf) goto L_114d1199;
  /* 114d117f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 114d1184 je 0x114d1194 */
  if (C.zf) goto L_114d1194;
  /* 114d1186 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 114d118b je 0x114d118f */
  if (C.zf) goto L_114d118f;
  /* 114d118d jmp 0x114d115c */
  goto L_114d115c;
L_114d118f:;
  /* 114d118f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 114d1192 jmp 0x114d11a1 */
  goto L_114d11a1;
L_114d1194:;
  /* 114d1194 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 114d1197 jmp 0x114d11a1 */
  goto L_114d11a1;
L_114d1199:;
  /* 114d1199 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 114d119c jmp 0x114d11a1 */
  goto L_114d11a1;
L_114d119e:;
  /* 114d119e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_114d11a1:;
  /* 114d11a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 114d11a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114d11ab je 0x114d11c6 */
  if (C.zf) goto L_114d11c6;
L_114d11ad:;
  /* 114d11ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d11af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114d11b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114d11b2 je 0x114d1218 */
  if (C.zf) goto L_114d1218;
  /* 114d11b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 114d11b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d11b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114d11bd jne 0x114d11ad */
  if (!C.zf) goto L_114d11ad;
  /* 114d11bf jmp 0x114d11c6 */
  goto L_114d11c6;
L_114d11c1:;
  /* 114d11c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114d11c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114d11c6:;
  /* 114d11c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114d11cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114d11cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d11cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d11d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d11d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d11d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d11d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114d11de je 0x114d11c1 */
  if (C.zf) goto L_114d11c1;
  /* 114d11e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114d11e2 je 0x114d1218 */
  if (C.zf) goto L_114d1218;
  /* 114d11e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 114d11e6 je 0x114d120f */
  if (C.zf) goto L_114d120f;
  /* 114d11e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 114d11ee je 0x114d1202 */
  if (C.zf) goto L_114d1202;
  /* 114d11f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 114d11f6 je 0x114d11fa */
  if (C.zf) goto L_114d11fa;
  /* 114d11f8 jmp 0x114d11c1 */
  goto L_114d11c1;
L_114d11fa:;
  /* 114d11fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114d11fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d1200 pop edi */
  EDI = (pop32());
  /* 114d1201 ret  */
  ESPCHK(0x114d1140u, _esp0);
  ESP += 4; return;
L_114d1202:;
  /* 114d1202 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 114d1205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d1209 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 114d120d pop edi */
  EDI = (pop32());
  /* 114d120e ret  */
  ESPCHK(0x114d1140u, _esp0);
  ESP += 4; return;
L_114d120f:;
  /* 114d120f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 114d1212 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d1216 pop edi */
  EDI = (pop32());
  /* 114d1217 ret  */
  ESPCHK(0x114d1140u, _esp0);
  ESP += 4; return;
L_114d1218:;
  /* 114d1218 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 114d121a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d121e pop edi */
  EDI = (pop32());
  /* 114d121f ret  */
  ESPCHK(0x114d1140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x114d1220 (243 bytes, 91 insns) */
void f_114d1220(void) {
  FTRACE(0x114d1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1220 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1221 mov ebp, esp */
  EBP = (ESP);
  /* 114d1223 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1226 push ebx */
  push32((uint32_t)(EBX));
  /* 114d1227 push esi */
  push32((uint32_t)(ESI));
  /* 114d1228 push edi */
  push32((uint32_t)(EDI));
  /* 114d1229 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 114d122c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114d122f:;
  /* 114d122f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1233 jne 0x114d1253 */
  if (!C.zf) goto L_114d1253;
  /* 114d1235 push 0x114f9460 */
  push32((uint32_t)(0x114f9460u));
  /* 114d123a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d123c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 114d123e push 0x114fa2ac */
  push32((uint32_t)(0x114fa2acu));
  /* 114d1243 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d1245 call 0x114ca4c0 */
  push32(0x114d124au); f_114ca4c0();
  /* 114d124a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d124d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1250 jne 0x114d1253 */
  if (!C.zf) goto L_114d1253;
  /* 114d1252 int3  */
  x86_unimpl("int3 @ 0x114d1252");
L_114d1253:;
  /* 114d1253 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d1255 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d1257 jne 0x114d122f */
  if (!C.zf) goto L_114d122f;
L_114d1259:;
  /* 114d1259 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d125d jne 0x114d127d */
  if (!C.zf) goto L_114d127d;
  /* 114d125f push 0x114f9444 */
  push32((uint32_t)(0x114f9444u));
  /* 114d1264 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d1266 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 114d1268 push 0x114fa2ac */
  push32((uint32_t)(0x114fa2acu));
  /* 114d126d push 2 */
  push32((uint32_t)(0x2u));
  /* 114d126f call 0x114ca4c0 */
  push32(0x114d1274u); f_114ca4c0();
  /* 114d1274 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d127a jne 0x114d127d */
  if (!C.zf) goto L_114d127d;
  /* 114d127c int3  */
  x86_unimpl("int3 @ 0x114d127c");
L_114d127d:;
  /* 114d127d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d127f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d1281 jne 0x114d1259 */
  if (!C.zf) goto L_114d1259;
  /* 114d1283 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d1286 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 114d128d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d1290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1293 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 114d1296 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d1299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d129c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d129e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d12a4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 114d12a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d12aa push ecx */
  push32((uint32_t)(ECX));
  /* 114d12ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d12ae push edx */
  push32((uint32_t)(EDX));
  /* 114d12af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12b2 push eax */
  push32((uint32_t)(EAX));
  /* 114d12b3 call 0x114ced90 */
  push32(0x114d12b8u); f_114ced90();
  /* 114d12b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d12bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d12be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d12c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d12c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d12cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12d0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d12d4 jl 0x114d12f8 */
  if ((C.sf!=C.of)) goto L_114d12f8;
  /* 114d12d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d12db mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114d12de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d12e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d12e6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 114d12e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d12ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d12f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d12f6 jmp 0x114d1309 */
  goto L_114d1309;
L_114d12f8:;
  /* 114d12f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d12fb push edx */
  push32((uint32_t)(EDX));
  /* 114d12fc push 0 */
  push32((uint32_t)(0x0u));
  /* 114d12fe call 0x114ceb10 */
  push32(0x114d1303u); f_114ceb10();
  /* 114d1303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1306 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_114d1309:;
  /* 114d1309 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d130c pop edi */
  EDI = (pop32());
  /* 114d130d pop esi */
  ESI = (pop32());
  /* 114d130e pop ebx */
  EBX = (pop32());
  /* 114d130f mov esp, ebp */
  ESP = (EBP);
  /* 114d1311 pop ebp */
  EBP = (pop32());
  /* 114d1312 ret  */
  ESPCHK(0x114d1220u, _esp0);
  ESP += 4; return;
}

/* FUN_10011320 @ 0x114d1320 (47 bytes, 17 insns) */
void f_114d1320(void) {
  FTRACE(0x114d1320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1320 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1321 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1326 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 114d132a jb 0x114d1340 */
  if (C.cf) goto L_114d1340;
L_114d132c:;
  /* 114d132c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1332 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1337 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 114d1339 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d133e jae 0x114d132c */
  if (!C.cf) goto L_114d132c;
L_114d1340:;
  /* 114d1340 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1342 mov eax, esp */
  EAX = (ESP);
  /* 114d1344 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 114d1346 mov esp, ecx */
  ESP = (ECX);
  /* 114d1348 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d134a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d134d push eax */
  push32((uint32_t)(EAX));
  /* 114d134e ret  */
  ESPCHK(0x114d1320u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x114d1350 (507 bytes, 151 insns) [1 switch table(s)] */
void f_114d1350(void) {
  FTRACE(0x114d1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1350 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1351 mov ebp, esp */
  EBP = (ESP);
  /* 114d1353 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1356 push esi */
  push32((uint32_t)(ESI));
  /* 114d1357 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d135b je 0x114d1363 */
  if (C.zf) goto L_114d1363;
  /* 114d135d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1361 jne 0x114d1368 */
  if (!C.zf) goto L_114d1368;
L_114d1363:;
  /* 114d1363 jmp 0x114d1538 */
  goto L_114d1538;
L_114d1368:;
  /* 114d1368 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d136c je 0x114d1384 */
  if (C.zf) goto L_114d1384;
  /* 114d136e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1372 je 0x114d1384 */
  if (C.zf) goto L_114d1384;
  /* 114d1374 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1378 je 0x114d1384 */
  if (C.zf) goto L_114d1384;
  /* 114d137a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d137e jne 0x114d1461 */
  if (!C.zf) goto L_114d1461;
L_114d1384:;
  /* 114d1384 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d1386 call 0x114cb800 */
  push32(0x114d138bu); f_114cb800();
  /* 114d138b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d138e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1392 je 0x114d139a */
  if (C.zf) goto L_114d139a;
  /* 114d1394 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1398 jne 0x114d13df */
  if (!C.zf) goto L_114d13df;
L_114d139a:;
  /* 114d139a cmp dword ptr [0x114ff310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d13a1 jne 0x114d13df */
  if (!C.zf) goto L_114d13df;
  /* 114d13a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d13a5 push 0x114d1580 */
  push32((uint32_t)(0x114d1580u));
  /* 114d13aa call dword ptr [0x11501394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501394))), 0x114d13b0u);
  /* 114d13b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d13b3 jne 0x114d13c1 */
  if (!C.zf) goto L_114d13c1;
  /* 114d13b5 mov dword ptr [0x114ff310], 1 */
  w32((uint32_t)(0x114ff310), (0x1u));
  /* 114d13bf jmp 0x114d13df */
  goto L_114d13df;
L_114d13c1:;
  /* 114d13c1 call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114d13c7u);
  /* 114d13c7 mov esi, eax */
  ESI = (EAX);
  /* 114d13c9 call 0x114d7760 */
  push32(0x114d13ceu); f_114d7760();
  /* 114d13ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 114d13d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d13d2 call 0x114cb8a0 */
  push32(0x114d13d7u); f_114cb8a0();
  /* 114d13d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d13da jmp 0x114d1538 */
  goto L_114d1538;
L_114d13df:;
  /* 114d13df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d13e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d13e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d13e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d13eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d13ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d13f2 ja 0x114d1452 */
  if ((!C.cf&&!C.zf)) goto L_114d1452;
  /* 114d13f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d13f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d13f9 mov dl, byte ptr [eax + 0x114d155f] */
  DL = (r8((uint32_t)(EAX + 0x114d155f)));
  /* 114d13ff jmp dword ptr [edx*4 + 0x114d154b] */
  switch (EDX) {
    case 0: goto L_114d1406;
    case 1: goto L_114d1440;
    case 2: goto L_114d141a;
    case 3: goto L_114d142d;
    case 4: goto L_114d1452;
    default: x86_unimpl("switch@0x114d13ff out of table"); return;
  }
L_114d1406:;
  /* 114d1406 mov ecx, dword ptr [0x114ff300] */
  ECX = (r32((uint32_t)(0x114ff300)));
  /* 114d140c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d140f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1412 mov dword ptr [0x114ff300], edx */
  w32((uint32_t)(0x114ff300), (EDX));
  /* 114d1418 jmp 0x114d1452 */
  goto L_114d1452;
L_114d141a:;
  /* 114d141a mov eax, dword ptr [0x114ff304] */
  EAX = (r32((uint32_t)(0x114ff304)));
  /* 114d141f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d1422 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1425 mov dword ptr [0x114ff304], ecx */
  w32((uint32_t)(0x114ff304), (ECX));
  /* 114d142b jmp 0x114d1452 */
  goto L_114d1452;
L_114d142d:;
  /* 114d142d mov edx, dword ptr [0x114ff308] */
  EDX = (r32((uint32_t)(0x114ff308)));
  /* 114d1433 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d1436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1439 mov dword ptr [0x114ff308], eax */
  w32((uint32_t)(0x114ff308), (EAX));
  /* 114d143e jmp 0x114d1452 */
  goto L_114d1452;
L_114d1440:;
  /* 114d1440 mov ecx, dword ptr [0x114ff30c] */
  ECX = (r32((uint32_t)(0x114ff30c)));
  /* 114d1446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d1449 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d144c mov dword ptr [0x114ff30c], edx */
  w32((uint32_t)(0x114ff30c), (EDX));
L_114d1452:;
  /* 114d1452 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d1454 call 0x114cb8a0 */
  push32(0x114d1459u); f_114cb8a0();
  /* 114d1459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d145c jmp 0x114d1533 */
  goto L_114d1533;
L_114d1461:;
  /* 114d1461 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1465 je 0x114d1478 */
  if (C.zf) goto L_114d1478;
  /* 114d1467 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d146b je 0x114d1478 */
  if (C.zf) goto L_114d1478;
  /* 114d146d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1471 je 0x114d1478 */
  if (C.zf) goto L_114d1478;
  /* 114d1473 jmp 0x114d1538 */
  goto L_114d1538;
L_114d1478:;
  /* 114d1478 call 0x114ce600 */
  push32(0x114d147du); f_114ce600();
  /* 114d147d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d1480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1483 cmp dword ptr [eax + 0x50], 0x114fd2a0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x114fd2a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d148a jne 0x114d14d5 */
  if (!C.zf) goto L_114d14d5;
  /* 114d148c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 114d1491 push 0x114fa2b8 */
  push32((uint32_t)(0x114fa2b8u));
  /* 114d1496 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d1498 mov ecx, dword ptr [0x114fd320] */
  ECX = (r32((uint32_t)(0x114fd320)));
  /* 114d149e push ecx */
  push32((uint32_t)(ECX));
  /* 114d149f call 0x114cb900 */
  push32(0x114d14a4u); f_114cb900();
  /* 114d14a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d14a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d14aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 114d14ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d14b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d14b4 je 0x114d14d3 */
  if (C.zf) goto L_114d14d3;
  /* 114d14b6 mov ecx, dword ptr [0x114fd320] */
  ECX = (r32((uint32_t)(0x114fd320)));
  /* 114d14bc push ecx */
  push32((uint32_t)(ECX));
  /* 114d14bd push 0x114fd2a0 */
  push32((uint32_t)(0x114fd2a0u));
  /* 114d14c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d14c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 114d14c8 push eax */
  push32((uint32_t)(EAX));
  /* 114d14c9 call 0x114d7370 */
  push32(0x114d14ceu); f_114d7370();
  /* 114d14ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d14d1 jmp 0x114d14d5 */
  goto L_114d14d5;
L_114d14d3:;
  /* 114d14d3 jmp 0x114d1538 */
  goto L_114d1538;
L_114d14d5:;
  /* 114d14d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d14d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 114d14db push edx */
  push32((uint32_t)(EDX));
  /* 114d14dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d14df push eax */
  push32((uint32_t)(EAX));
  /* 114d14e0 call 0x114d1860 */
  push32(0x114d14e5u); f_114d1860();
  /* 114d14e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d14e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d14eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d14ef jne 0x114d14f3 */
  if (!C.zf) goto L_114d14f3;
  /* 114d14f1 jmp 0x114d1538 */
  goto L_114d1538;
L_114d14f3:;
  /* 114d14f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d14f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d14f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114d14fc:;
  /* 114d14fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d14ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d1502 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1505 jne 0x114d1533 */
  if (!C.zf) goto L_114d1533;
  /* 114d1507 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d150a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d150d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d1510 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1513 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1516 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d1519 mov edx, dword ptr [0x114fd324] */
  EDX = (r32((uint32_t)(0x114fd324)));
  /* 114d151f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d1522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1525 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 114d1528 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d152a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d152d jb 0x114d1531 */
  if (C.cf) goto L_114d1531;
  /* 114d152f jmp 0x114d1533 */
  goto L_114d1533;
L_114d1531:;
  /* 114d1531 jmp 0x114d14fc */
  goto L_114d14fc;
L_114d1533:;
  /* 114d1533 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1536 jmp 0x114d1546 */
  goto L_114d1546;
L_114d1538:;
  /* 114d1538 call 0x114d7750 */
  push32(0x114d153du); f_114d7750();
  /* 114d153d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 114d1543 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114d1546:;
  /* 114d1546 pop esi */
  ESI = (pop32());
  /* 114d1547 mov esp, ebp */
  ESP = (EBP);
  /* 114d1549 pop ebp */
  EBP = (pop32());
  /* 114d154a ret  */
  ESPCHK(0x114d1350u, _esp0);
  ESP += 4; return;
}

/* FUN_10011580 @ 0x114d1580 (146 bytes, 45 insns) */
void f_114d1580(void) {
  FTRACE(0x114d1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1580 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1581 mov ebp, esp */
  EBP = (ESP);
  /* 114d1583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1586 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d1588 call 0x114cb800 */
  push32(0x114d158du); f_114cb800();
  /* 114d158d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1590 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1594 jne 0x114d15ae */
  if (!C.zf) goto L_114d15ae;
  /* 114d1596 mov dword ptr [ebp - 8], 0x114ff300 */
  w32((uint32_t)(EBP + -0x8), (0x114ff300u));
  /* 114d159d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d15a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d15a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d15a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114d15ac jmp 0x114d15c4 */
  goto L_114d15c4;
L_114d15ae:;
  /* 114d15ae mov dword ptr [ebp - 8], 0x114ff304 */
  w32((uint32_t)(EBP + -0x8), (0x114ff304u));
  /* 114d15b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d15b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d15ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d15bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_114d15c4:;
  /* 114d15c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d15c8 jne 0x114d15d8 */
  if (!C.zf) goto L_114d15d8;
  /* 114d15ca push 1 */
  push32((uint32_t)(0x1u));
  /* 114d15cc call 0x114cb8a0 */
  push32(0x114d15d1u); f_114cb8a0();
  /* 114d15d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d15d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d15d6 jmp 0x114d160c */
  goto L_114d160c;
L_114d15d8:;
  /* 114d15d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d15dc je 0x114d15fd */
  if (C.zf) goto L_114d15fd;
  /* 114d15de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d15e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 114d15e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d15e9 call 0x114cb8a0 */
  push32(0x114d15eeu); f_114cb8a0();
  /* 114d15ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d15f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d15f4 push edx */
  push32((uint32_t)(EDX));
  /* 114d15f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x114d15f8u);
  /* 114d15f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d15fb jmp 0x114d1607 */
  goto L_114d1607;
L_114d15fd:;
  /* 114d15fd push 1 */
  push32((uint32_t)(0x1u));
  /* 114d15ff call 0x114cb8a0 */
  push32(0x114d1604u); f_114cb8a0();
  /* 114d1604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d1607:;
  /* 114d1607 mov eax, 1 */
  EAX = (0x1u);
L_114d160c:;
  /* 114d160c mov esp, ebp */
  ESP = (EBP);
  /* 114d160e pop ebp */
  EBP = (pop32());
  /* 114d160f ret 4 */
  ESPCHK(0x114d1580u, _esp0);
  ESP += 8; return;
}

/* FUN_10011620 @ 0x114d1620 (522 bytes, 162 insns) [1 switch table(s)] */
void f_114d1620(void) {
  FTRACE(0x114d1620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1620 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1621 mov ebp, esp */
  EBP = (ESP);
  /* 114d1623 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1626 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d162d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1630 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d1633 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d1636 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1639 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114d163c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1640 ja 0x114d16ee */
  if ((!C.cf&&!C.zf)) goto L_114d16ee;
  /* 114d1646 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d1649 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d164b mov dl, byte ptr [eax + 0x114d1842] */
  DL = (r8((uint32_t)(EAX + 0x114d1842)));
  /* 114d1651 jmp dword ptr [edx*4 + 0x114d182a] */
  switch (EDX) {
    case 0: goto L_114d1658;
    case 1: goto L_114d16c3;
    case 2: goto L_114d16a9;
    case 3: goto L_114d1675;
    case 4: goto L_114d168f;
    case 5: goto L_114d16ee;
    default: x86_unimpl("switch@0x114d1651 out of table"); return;
  }
L_114d1658:;
  /* 114d1658 mov dword ptr [ebp - 0x18], 0x114ff300 */
  w32((uint32_t)(EBP + -0x18), (0x114ff300u));
  /* 114d165f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d1662 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d1664 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d1667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d166a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d166d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d1670 jmp 0x114d16f6 */
  goto L_114d16f6;
L_114d1675:;
  /* 114d1675 mov dword ptr [ebp - 0x18], 0x114ff304 */
  w32((uint32_t)(EBP + -0x18), (0x114ff304u));
  /* 114d167c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d167f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d1681 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d1684 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1687 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d168a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d168d jmp 0x114d16f6 */
  goto L_114d16f6;
L_114d168f:;
  /* 114d168f mov dword ptr [ebp - 0x18], 0x114ff308 */
  w32((uint32_t)(EBP + -0x18), (0x114ff308u));
  /* 114d1696 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d1699 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d169b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d169e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d16a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d16a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d16a7 jmp 0x114d16f6 */
  goto L_114d16f6;
L_114d16a9:;
  /* 114d16a9 mov dword ptr [ebp - 0x18], 0x114ff30c */
  w32((uint32_t)(EBP + -0x18), (0x114ff30cu));
  /* 114d16b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d16b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d16b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d16b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d16bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d16be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d16c1 jmp 0x114d16f6 */
  goto L_114d16f6;
L_114d16c3:;
  /* 114d16c3 call 0x114ce600 */
  push32(0x114d16c8u); f_114ce600();
  /* 114d16c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d16cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d16ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 114d16d1 push edx */
  push32((uint32_t)(EDX));
  /* 114d16d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d16d5 push eax */
  push32((uint32_t)(EAX));
  /* 114d16d6 call 0x114d1860 */
  push32(0x114d16dbu); f_114d1860();
  /* 114d16db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d16de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d16e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d16e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d16e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d16e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d16ec jmp 0x114d16f6 */
  goto L_114d16f6;
L_114d16ee:;
  /* 114d16ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d16f1 jmp 0x114d1826 */
  goto L_114d1826;
L_114d16f6:;
  /* 114d16f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d16fa je 0x114d1706 */
  if (C.zf) goto L_114d1706;
  /* 114d16fc push 1 */
  push32((uint32_t)(0x1u));
  /* 114d16fe call 0x114cb800 */
  push32(0x114d1703u); f_114cb800();
  /* 114d1703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d1706:;
  /* 114d1706 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d170a jne 0x114d1723 */
  if (!C.zf) goto L_114d1723;
  /* 114d170c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1710 je 0x114d171c */
  if (C.zf) goto L_114d171c;
  /* 114d1712 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d1714 call 0x114cb8a0 */
  push32(0x114d1719u); f_114cb8a0();
  /* 114d1719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d171c:;
  /* 114d171c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d171e jmp 0x114d1826 */
  goto L_114d1826;
L_114d1723:;
  /* 114d1723 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1727 jne 0x114d1740 */
  if (!C.zf) goto L_114d1740;
  /* 114d1729 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d172d je 0x114d1739 */
  if (C.zf) goto L_114d1739;
  /* 114d172f push 1 */
  push32((uint32_t)(0x1u));
  /* 114d1731 call 0x114cb8a0 */
  push32(0x114d1736u); f_114cb8a0();
  /* 114d1736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d1739:;
  /* 114d1739 push 3 */
  push32((uint32_t)(0x3u));
  /* 114d173b call 0x114ce970 */
  push32(0x114d1740u); f_114ce970();
L_114d1740:;
  /* 114d1740 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1744 je 0x114d1752 */
  if (C.zf) goto L_114d1752;
  /* 114d1746 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d174a je 0x114d1752 */
  if (C.zf) goto L_114d1752;
  /* 114d174c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1750 jne 0x114d177e */
  if (!C.zf) goto L_114d177e;
L_114d1752:;
  /* 114d1752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1755 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 114d1758 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d175b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d175e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 114d1765 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1769 jne 0x114d177e */
  if (!C.zf) goto L_114d177e;
  /* 114d176b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d176e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 114d1771 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d1774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1777 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_114d177e:;
  /* 114d177e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1782 jne 0x114d17c0 */
  if (!C.zf) goto L_114d17c0;
  /* 114d1784 mov eax, dword ptr [0x114fd318] */
  EAX = (r32((uint32_t)(0x114fd318)));
  /* 114d1789 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d178c jmp 0x114d1797 */
  goto L_114d1797;
L_114d178e:;
  /* 114d178e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d1791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1794 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114d1797:;
  /* 114d1797 mov edx, dword ptr [0x114fd318] */
  EDX = (r32((uint32_t)(0x114fd318)));
  /* 114d179d add edx, dword ptr [0x114fd31c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114fd31c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d17a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d17a6 jge 0x114d17be */
  if ((C.sf==C.of)) goto L_114d17be;
  /* 114d17a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d17ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d17ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d17b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 114d17b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 114d17bc jmp 0x114d178e */
  goto L_114d178e;
L_114d17be:;
  /* 114d17be jmp 0x114d17c9 */
  goto L_114d17c9;
L_114d17c0:;
  /* 114d17c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d17c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114d17c9:;
  /* 114d17c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d17cd je 0x114d17d9 */
  if (C.zf) goto L_114d17d9;
  /* 114d17cf push 1 */
  push32((uint32_t)(0x1u));
  /* 114d17d1 call 0x114cb8a0 */
  push32(0x114d17d6u); f_114cb8a0();
  /* 114d17d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d17d9:;
  /* 114d17d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d17dd jne 0x114d17f0 */
  if (!C.zf) goto L_114d17f0;
  /* 114d17df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d17e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 114d17e5 push edx */
  push32((uint32_t)(EDX));
  /* 114d17e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 114d17e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x114d17ebu);
  /* 114d17eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d17ee jmp 0x114d17fa */
  goto L_114d17fa;
L_114d17f0:;
  /* 114d17f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d17f3 push eax */
  push32((uint32_t)(EAX));
  /* 114d17f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x114d17f7u);
  /* 114d17f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d17fa:;
  /* 114d17fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d17fe je 0x114d180c */
  if (C.zf) goto L_114d180c;
  /* 114d1800 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1804 je 0x114d180c */
  if (C.zf) goto L_114d180c;
  /* 114d1806 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d180a jne 0x114d1824 */
  if (!C.zf) goto L_114d1824;
L_114d180c:;
  /* 114d180c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d180f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d1812 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 114d1815 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1819 jne 0x114d1824 */
  if (!C.zf) goto L_114d1824;
  /* 114d181b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d181e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1821 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_114d1824:;
  /* 114d1824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d1826:;
  /* 114d1826 mov esp, ebp */
  ESP = (EBP);
  /* 114d1828 pop ebp */
  EBP = (pop32());
  /* 114d1829 ret  */
  ESPCHK(0x114d1620u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x114d1860 (91 bytes, 35 insns) */
void f_114d1860(void) {
  FTRACE(0x114d1860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1860 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1861 mov ebp, esp */
  EBP = (ESP);
  /* 114d1863 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1864 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1867 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d186a:;
  /* 114d186a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d186d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d1870 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1873 je 0x114d1893 */
  if (C.zf) goto L_114d1893;
  /* 114d1875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1878 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d187b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d187e mov ecx, dword ptr [0x114fd324] */
  ECX = (r32((uint32_t)(0x114fd324)));
  /* 114d1884 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d1887 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d188a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d188c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d188f jae 0x114d1893 */
  if (!C.cf) goto L_114d1893;
  /* 114d1891 jmp 0x114d186a */
  goto L_114d186a;
L_114d1893:;
  /* 114d1893 mov eax, dword ptr [0x114fd324] */
  EAX = (r32((uint32_t)(0x114fd324)));
  /* 114d1898 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d189b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d189e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d18a0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d18a3 jae 0x114d18b5 */
  if (!C.cf) goto L_114d18b5;
  /* 114d18a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d18a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d18ab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d18ae jne 0x114d18b5 */
  if (!C.zf) goto L_114d18b5;
  /* 114d18b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d18b3 jmp 0x114d18b7 */
  goto L_114d18b7;
L_114d18b5:;
  /* 114d18b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d18b7:;
  /* 114d18b7 mov esp, ebp */
  ESP = (EBP);
  /* 114d18b9 pop ebp */
  EBP = (pop32());
  /* 114d18ba ret  */
  ESPCHK(0x114d1860u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x114d18c0 (13 bytes, 6 insns) */
void f_114d18c0(void) {
  FTRACE(0x114d18c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d18c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d18c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d18c3 call 0x114ce600 */
  push32(0x114d18c8u); f_114ce600();
  /* 114d18c8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d18cb pop ebp */
  EBP = (pop32());
  /* 114d18cc ret  */
  ESPCHK(0x114d18c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x114d18d0 (13 bytes, 6 insns) */
void f_114d18d0(void) {
  FTRACE(0x114d18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d18d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d18d3 call 0x114ce600 */
  push32(0x114d18d8u); f_114ce600();
  /* 114d18d8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d18db pop ebp */
  EBP = (pop32());
  /* 114d18dc ret  */
  ESPCHK(0x114d18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x114d18e0 (187 bytes, 54 insns) */
void f_114d18e0(void) {
  FTRACE(0x114d18e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d18e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d18e1 mov ebp, esp */
  EBP = (ESP);
  /* 114d18e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d18e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d18ed cmp dword ptr [0x114ff314], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff314))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d18f4 jne 0x114d1953 */
  if (!C.zf) goto L_114d1953;
  /* 114d18f6 push 0x114f953c */
  push32((uint32_t)(0x114f953cu));
  /* 114d18fb call dword ptr [0x1150142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150142c))), 0x114d1901u);
  /* 114d1901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d1904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1908 je 0x114d1927 */
  if (C.zf) goto L_114d1927;
  /* 114d190a push 0x114fa2e8 */
  push32((uint32_t)(0x114fa2e8u));
  /* 114d190f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1912 push eax */
  push32((uint32_t)(EAX));
  /* 114d1913 call dword ptr [0x1150131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150131c))), 0x114d1919u);
  /* 114d1919 mov dword ptr [0x114ff314], eax */
  w32((uint32_t)(0x114ff314), (EAX));
  /* 114d191e cmp dword ptr [0x114ff314], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff314))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1925 jne 0x114d192b */
  if (!C.zf) goto L_114d192b;
L_114d1927:;
  /* 114d1927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d1929 jmp 0x114d1997 */
  goto L_114d1997;
L_114d192b:;
  /* 114d192b push 0x114fa2d8 */
  push32((uint32_t)(0x114fa2d8u));
  /* 114d1930 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1933 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1934 call dword ptr [0x1150131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150131c))), 0x114d193au);
  /* 114d193a mov dword ptr [0x114ff318], eax */
  w32((uint32_t)(0x114ff318), (EAX));
  /* 114d193f push 0x114fa2c4 */
  push32((uint32_t)(0x114fa2c4u));
  /* 114d1944 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1947 push edx */
  push32((uint32_t)(EDX));
  /* 114d1948 call dword ptr [0x1150131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150131c))), 0x114d194eu);
  /* 114d194e mov dword ptr [0x114ff31c], eax */
  w32((uint32_t)(0x114ff31c), (EAX));
L_114d1953:;
  /* 114d1953 cmp dword ptr [0x114ff318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d195a je 0x114d1965 */
  if (C.zf) goto L_114d1965;
  /* 114d195c call dword ptr [0x114ff318] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff318))), 0x114d1962u);
  /* 114d1962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d1965:;
  /* 114d1965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1969 je 0x114d1981 */
  if (C.zf) goto L_114d1981;
  /* 114d196b cmp dword ptr [0x114ff31c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff31c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1972 je 0x114d1981 */
  if (C.zf) goto L_114d1981;
  /* 114d1974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1977 push eax */
  push32((uint32_t)(EAX));
  /* 114d1978 call dword ptr [0x114ff31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff31c))), 0x114d197eu);
  /* 114d197e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d1981:;
  /* 114d1981 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d1984 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1985 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1988 push edx */
  push32((uint32_t)(EDX));
  /* 114d1989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d198c push eax */
  push32((uint32_t)(EAX));
  /* 114d198d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1990 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1991 call dword ptr [0x114ff314] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff314))), 0x114d1997u);
L_114d1997:;
  /* 114d1997 mov esp, ebp */
  ESP = (EBP);
  /* 114d1999 pop ebp */
  EBP = (pop32());
  /* 114d199a ret  */
  ESPCHK(0x114d18e0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x114d19a0 (254 bytes, 109 insns) */
void f_114d19a0(void) {
  FTRACE(0x114d19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d19a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 114d19a4 push edi */
  push32((uint32_t)(EDI));
  /* 114d19a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d19a7 je 0x114d1a23 */
  if (C.zf) goto L_114d1a23;
  /* 114d19a9 push esi */
  push32((uint32_t)(ESI));
  /* 114d19aa push ebx */
  push32((uint32_t)(EBX));
  /* 114d19ab mov ebx, ecx */
  EBX = (ECX);
  /* 114d19ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 114d19b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 114d19b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 114d19bb jne 0x114d19c4 */
  if (!C.zf) goto L_114d19c4;
  /* 114d19bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d19c0 jne 0x114d1a31 */
  if (!C.zf) goto L_114d1a31;
  /* 114d19c2 jmp 0x114d19e5 */
  goto L_114d19e5;
L_114d19c4:;
  /* 114d19c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d19c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114d19c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d19c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d19ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114d19cb je 0x114d19f2 */
  if (C.zf) goto L_114d19f2;
  /* 114d19cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114d19cf je 0x114d19fa */
  if (C.zf) goto L_114d19fa;
  /* 114d19d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 114d19d7 jne 0x114d19c4 */
  if (!C.zf) goto L_114d19c4;
  /* 114d19d9 mov ebx, ecx */
  EBX = (ECX);
  /* 114d19db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d19de jne 0x114d1a31 */
  if (!C.zf) goto L_114d1a31;
L_114d19e0:;
  /* 114d19e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 114d19e3 je 0x114d19f2 */
  if (C.zf) goto L_114d19f2;
L_114d19e5:;
  /* 114d19e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d19e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114d19e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d19ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d19eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114d19ed je 0x114d1a1e */
  if (C.zf) goto L_114d1a1e;
  /* 114d19ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 114d19f0 jne 0x114d19e5 */
  if (!C.zf) goto L_114d19e5;
L_114d19f2:;
  /* 114d19f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 114d19f6 pop ebx */
  EBX = (pop32());
  /* 114d19f7 pop esi */
  ESI = (pop32());
  /* 114d19f8 pop edi */
  EDI = (pop32());
  /* 114d19f9 ret  */
  ESPCHK(0x114d19a0u, _esp0);
  ESP += 4; return;
L_114d19fa:;
  /* 114d19fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114d1a00 je 0x114d1a14 */
  if (C.zf) goto L_114d1a14;
L_114d1a02:;
  /* 114d1a02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d1a04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d1a05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114d1a06 je 0x114d1a96 */
  if (C.zf) goto L_114d1a96;
  /* 114d1a0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114d1a12 jne 0x114d1a02 */
  if (!C.zf) goto L_114d1a02;
L_114d1a14:;
  /* 114d1a14 mov ebx, ecx */
  EBX = (ECX);
  /* 114d1a16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d1a19 jne 0x114d1a87 */
  if (!C.zf) goto L_114d1a87;
L_114d1a1b:;
  /* 114d1a1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d1a1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_114d1a1e:;
  /* 114d1a1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 114d1a1f jne 0x114d1a1b */
  if (!C.zf) goto L_114d1a1b;
  /* 114d1a21 pop ebx */
  EBX = (pop32());
  /* 114d1a22 pop esi */
  ESI = (pop32());
L_114d1a23:;
  /* 114d1a23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d1a27 pop edi */
  EDI = (pop32());
  /* 114d1a28 ret  */
  ESPCHK(0x114d19a0u, _esp0);
  ESP += 4; return;
L_114d1a29:;
  /* 114d1a29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114d1a2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1a2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114d1a2f je 0x114d19e0 */
  if (C.zf) goto L_114d19e0;
L_114d1a31:;
  /* 114d1a31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114d1a36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 114d1a38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1a3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1a3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d1a3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 114d1a41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1a44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114d1a49 je 0x114d1a29 */
  if (C.zf) goto L_114d1a29;
  /* 114d1a4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114d1a4d je 0x114d1a7b */
  if (C.zf) goto L_114d1a7b;
  /* 114d1a4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 114d1a51 je 0x114d1a71 */
  if (C.zf) goto L_114d1a71;
  /* 114d1a53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 114d1a59 je 0x114d1a67 */
  if (C.zf) goto L_114d1a67;
  /* 114d1a5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 114d1a61 jne 0x114d1a29 */
  if (!C.zf) goto L_114d1a29;
  /* 114d1a63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114d1a65 jmp 0x114d1a7f */
  goto L_114d1a7f;
L_114d1a67:;
  /* 114d1a67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d1a6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114d1a6f jmp 0x114d1a7f */
  goto L_114d1a7f;
L_114d1a71:;
  /* 114d1a71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d1a77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114d1a79 jmp 0x114d1a7f */
  goto L_114d1a7f;
L_114d1a7b:;
  /* 114d1a7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d1a7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_114d1a7f:;
  /* 114d1a7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d1a84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114d1a85 je 0x114d1a91 */
  if (C.zf) goto L_114d1a91;
L_114d1a87:;
  /* 114d1a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d1a89:;
  /* 114d1a89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 114d1a8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1a8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114d1a8f jne 0x114d1a89 */
  if (!C.zf) goto L_114d1a89;
L_114d1a91:;
  /* 114d1a91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 114d1a94 jne 0x114d1a1b */
  if (!C.zf) goto L_114d1a1b;
L_114d1a96:;
  /* 114d1a96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 114d1a9a pop ebx */
  EBX = (pop32());
  /* 114d1a9b pop esi */
  ESI = (pop32());
  /* 114d1a9c pop edi */
  EDI = (pop32());
  /* 114d1a9d ret  */
  ESPCHK(0x114d19a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011aa0 @ 0x114d1aa0 (348 bytes, 114 insns) [1 switch table(s)] */
void f_114d1aa0(void) {
  FTRACE(0x114d1aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1aa1 mov ebp, esp */
  EBP = (ESP);
  /* 114d1aa3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1aa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d1aa9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d1aab mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114d1aae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d1ab1 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 114d1ab4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d1ab7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1aba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d1abc mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 114d1abf mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d1ac2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1ac5 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 114d1ac8 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1acc ja 0x114d1b0e */
  if ((!C.cf&&!C.zf)) goto L_114d1b0e;
  /* 114d1ace mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d1ad1 jmp dword ptr [eax*4 + 0x114d1bfc] */
  switch (EAX) {
    case 0: goto L_114d1ad8;
    case 1: goto L_114d1af3;
    case 2: goto L_114d1ae1;
    case 3: goto L_114d1aea;
    case 4: goto L_114d1ad8;
    case 5: goto L_114d1b0e;
    case 6: goto L_114d1b05;
    case 7: goto L_114d1afc;
    default: x86_unimpl("switch@0x114d1ad1 out of table"); return;
  }
L_114d1ad8:;
  /* 114d1ad8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 114d1adf jmp 0x114d1b15 */
  goto L_114d1b15;
L_114d1ae1:;
  /* 114d1ae1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 114d1ae8 jmp 0x114d1b15 */
  goto L_114d1b15;
L_114d1aea:;
  /* 114d1aea mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 114d1af1 jmp 0x114d1b15 */
  goto L_114d1b15;
L_114d1af3:;
  /* 114d1af3 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 114d1afa jmp 0x114d1b15 */
  goto L_114d1b15;
L_114d1afc:;
  /* 114d1afc mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 114d1b03 jmp 0x114d1b15 */
  goto L_114d1b15;
L_114d1b05:;
  /* 114d1b05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1b08 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_114d1b0e:;
  /* 114d1b0e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d1b15:;
  /* 114d1b15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1b19 je 0x114d1baa */
  if (C.zf) goto L_114d1baa;
  /* 114d1b1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1b22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d1b24 push eax */
  push32((uint32_t)(EAX));
  /* 114d1b25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1b28 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1b2b push ecx */
  push32((uint32_t)(ECX));
  /* 114d1b2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1b2f push edx */
  push32((uint32_t)(EDX));
  /* 114d1b30 call 0x114d7ea0 */
  push32(0x114d1b35u); f_114d7ea0();
  /* 114d1b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1b3a jne 0x114d1baa */
  if (!C.zf) goto L_114d1baa;
  /* 114d1b3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1b3f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 114d1b42 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1b46 je 0x114d1b56 */
  if (C.zf) goto L_114d1b56;
  /* 114d1b48 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1b4c je 0x114d1b56 */
  if (C.zf) goto L_114d1b56;
  /* 114d1b4e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1b52 je 0x114d1b56 */
  if (C.zf) goto L_114d1b56;
  /* 114d1b54 jmp 0x114d1b7c */
  goto L_114d1b7c;
L_114d1b56:;
  /* 114d1b56 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d1b59 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1b5c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 114d1b5f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d1b62 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1b65 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1b68 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 114d1b6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1b6e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d1b71 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 114d1b74 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 114d1b77 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 114d1b7a jmp 0x114d1b84 */
  goto L_114d1b84;
L_114d1b7c:;
  /* 114d1b7c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d1b7f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 114d1b81 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_114d1b84:;
  /* 114d1b84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1b87 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1b8a push ecx */
  push32((uint32_t)(ECX));
  /* 114d1b8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1b8e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1b91 push edx */
  push32((uint32_t)(EDX));
  /* 114d1b92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1b95 push eax */
  push32((uint32_t)(EAX));
  /* 114d1b96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1b99 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1b9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1b9d push edx */
  push32((uint32_t)(EDX));
  /* 114d1b9e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 114d1ba1 push eax */
  push32((uint32_t)(EAX));
  /* 114d1ba2 call 0x114d79d0 */
  push32(0x114d1ba7u); f_114d79d0();
  /* 114d1ba7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d1baa:;
  /* 114d1baa push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d1baf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1bb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d1bb4 push edx */
  push32((uint32_t)(EDX));
  /* 114d1bb5 call 0x114d8410 */
  push32(0x114d1bbau); f_114d8410();
  /* 114d1bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1bbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d1bc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1bc7 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1bca je 0x114d1be4 */
  if (C.zf) goto L_114d1be4;
  /* 114d1bcc cmp dword ptr [0x114fda10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fda10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1bd3 jne 0x114d1be4 */
  if (!C.zf) goto L_114d1be4;
  /* 114d1bd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1bd9 call 0x114d83c0 */
  push32(0x114d1bdeu); f_114d83c0();
  /* 114d1bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1be1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d1be4:;
  /* 114d1be4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1be8 jne 0x114d1bf8 */
  if (!C.zf) goto L_114d1bf8;
  /* 114d1bea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1bed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d1bef push eax */
  push32((uint32_t)(EAX));
  /* 114d1bf0 call 0x114d82c0 */
  push32(0x114d1bf5u); f_114d82c0();
  /* 114d1bf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d1bf8:;
  /* 114d1bf8 mov esp, ebp */
  ESP = (EBP);
  /* 114d1bfa pop ebp */
  EBP = (pop32());
  /* 114d1bfb ret  */
  ESPCHK(0x114d1aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c20 @ 0x114d1c20 (31 bytes, 18 insns) */
void f_114d1c20(void) {
  FTRACE(0x114d1c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1c20 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1c21 mov ebp, esp */
  EBP = (ESP);
  /* 114d1c23 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1c24 push ebx */
  push32((uint32_t)(EBX));
  /* 114d1c25 push esi */
  push32((uint32_t)(ESI));
  /* 114d1c26 push edi */
  push32((uint32_t)(EDI));
  /* 114d1c27 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d1c28 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 114d1c2b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1c2f push eax */
  push32((uint32_t)(EAX));
  /* 114d1c30 call 0x114d2010 */
  push32(0x114d1c35u); f_114d2010();
  /* 114d1c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1c38 pop edi */
  EDI = (pop32());
  /* 114d1c39 pop esi */
  ESI = (pop32());
  /* 114d1c3a pop ebx */
  EBX = (pop32());
  /* 114d1c3b mov esp, ebp */
  ESP = (EBP);
  /* 114d1c3d pop ebp */
  EBP = (pop32());
  /* 114d1c3e ret  */
  ESPCHK(0x114d1c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c40 @ 0x114d1c40 (32 bytes, 18 insns) */
void f_114d1c40(void) {
  FTRACE(0x114d1c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1c40 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1c41 mov ebp, esp */
  EBP = (ESP);
  /* 114d1c43 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1c44 push ebx */
  push32((uint32_t)(EBX));
  /* 114d1c45 push esi */
  push32((uint32_t)(ESI));
  /* 114d1c46 push edi */
  push32((uint32_t)(EDI));
  /* 114d1c47 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 114d1c4a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 114d1c4c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1c50 push eax */
  push32((uint32_t)(EAX));
  /* 114d1c51 call 0x114d2010 */
  push32(0x114d1c56u); f_114d2010();
  /* 114d1c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1c59 pop edi */
  EDI = (pop32());
  /* 114d1c5a pop esi */
  ESI = (pop32());
  /* 114d1c5b pop ebx */
  EBX = (pop32());
  /* 114d1c5c mov esp, ebp */
  ESP = (EBP);
  /* 114d1c5e pop ebp */
  EBP = (pop32());
  /* 114d1c5f ret  */
  ESPCHK(0x114d1c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c60 @ 0x114d1c60 (79 bytes, 34 insns) */
void f_114d1c60(void) {
  FTRACE(0x114d1c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1c60 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1c61 mov ebp, esp */
  EBP = (ESP);
  /* 114d1c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1c66 push ebx */
  push32((uint32_t)(EBX));
  /* 114d1c67 push esi */
  push32((uint32_t)(ESI));
  /* 114d1c68 push edi */
  push32((uint32_t)(EDI));
  /* 114d1c69 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d1c6a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 114d1c6d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 114d1c71 push eax */
  push32((uint32_t)(EAX));
  /* 114d1c72 call 0x114d1d30 */
  push32(0x114d1c77u); f_114d1d30();
  /* 114d1c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1c7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d1c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1c80 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 114d1c83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1c86 not edx */
  EDX = (~(EDX));
  /* 114d1c88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1c8b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d1c8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d1c8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d1c92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1c95 push ecx */
  push32((uint32_t)(ECX));
  /* 114d1c96 call 0x114d1eb0 */
  push32(0x114d1c9bu); f_114d1eb0();
  /* 114d1c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1c9e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114d1ca2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 114d1ca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d1ca8 pop edi */
  EDI = (pop32());
  /* 114d1ca9 pop esi */
  ESI = (pop32());
  /* 114d1caa pop ebx */
  EBX = (pop32());
  /* 114d1cab mov esp, ebp */
  ESP = (EBP);
  /* 114d1cad pop ebp */
  EBP = (pop32());
  /* 114d1cae ret  */
  ESPCHK(0x114d1c60u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x114d1cb0 (26 bytes, 11 insns) */
void f_114d1cb0(void) {
  FTRACE(0x114d1cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1cb1 mov ebp, esp */
  EBP = (ESP);
  /* 114d1cb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d1cb6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1cbb push eax */
  push32((uint32_t)(EAX));
  /* 114d1cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1cbf push ecx */
  push32((uint32_t)(ECX));
  /* 114d1cc0 call 0x114d1c60 */
  push32(0x114d1cc5u); f_114d1c60();
  /* 114d1cc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1cc8 pop ebp */
  EBP = (pop32());
  /* 114d1cc9 ret  */
  ESPCHK(0x114d1cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x114d1cd0 (88 bytes, 33 insns) */
void f_114d1cd0(void) {
  FTRACE(0x114d1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 114d1cd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 114d1cd7 push esi */
  push32((uint32_t)(ESI));
  /* 114d1cd8 push edi */
  push32((uint32_t)(EDI));
  /* 114d1cd9 call 0x114d18d0 */
  push32(0x114d1cdeu); f_114d18d0();
  /* 114d1cde mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 114d1ce0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d1ce3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 114d1ce5 call 0x114caf20 */
  push32(0x114d1ceau); f_114caf20();
  /* 114d1cea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1cee je 0x114d1d21 */
  if (C.zf) goto L_114d1d21;
  /* 114d1cf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1cf3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d1cf6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d1cf8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1cff je 0x114d1d21 */
  if (C.zf) goto L_114d1d21;
  /* 114d1d01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1d04 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d1d07 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d1d0a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d1d0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1d10 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114d1d17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d1d1a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_114d1d21:;
  /* 114d1d21 pop edi */
  EDI = (pop32());
  /* 114d1d22 pop esi */
  ESI = (pop32());
  /* 114d1d23 pop ebx */
  EBX = (pop32());
  /* 114d1d24 mov esp, ebp */
  ESP = (EBP);
  /* 114d1d26 pop ebp */
  EBP = (pop32());
  /* 114d1d27 ret  */
  ESPCHK(0x114d1cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d30 @ 0x114d1d30 (377 bytes, 115 insns) */
void f_114d1d30(void) {
  FTRACE(0x114d1d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1d30 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1d31 mov ebp, esp */
  EBP = (ESP);
  /* 114d1d33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1d36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d1d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1d40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1d45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1d4a je 0x114d1d55 */
  if (C.zf) goto L_114d1d55;
  /* 114d1d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1d4f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1d52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d1d55:;
  /* 114d1d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1d58 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d1d5e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1d61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d1d63 je 0x114d1d6d */
  if (C.zf) goto L_114d1d6d;
  /* 114d1d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1d68 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 114d1d6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d1d6d:;
  /* 114d1d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1d70 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d1d76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1d79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d1d7b je 0x114d1d86 */
  if (C.zf) goto L_114d1d86;
  /* 114d1d7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1d80 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1d83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d1d86:;
  /* 114d1d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1d89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1d8e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1d91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1d93 je 0x114d1d9e */
  if (C.zf) goto L_114d1d9e;
  /* 114d1d95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1d98 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1d9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d1d9e:;
  /* 114d1d9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1da1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d1da7 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1daa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d1dac je 0x114d1db6 */
  if (C.zf) goto L_114d1db6;
  /* 114d1dae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1db1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114d1db3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d1db6:;
  /* 114d1db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1db9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d1dbf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1dc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d1dc4 je 0x114d1dd2 */
  if (C.zf) goto L_114d1dd2;
  /* 114d1dc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1dc9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1dcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d1dd2:;
  /* 114d1dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1dd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1dda and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1ddf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d1de2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1de9 jg 0x114d1e05 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d1e05;
  /* 114d1deb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1df2 je 0x114d1e18 */
  if (C.zf) goto L_114d1e18;
  /* 114d1df4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1df8 je 0x114d1e10 */
  if (C.zf) goto L_114d1e10;
  /* 114d1dfa cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1e01 je 0x114d1e23 */
  if (C.zf) goto L_114d1e23;
  /* 114d1e03 jmp 0x114d1e37 */
  goto L_114d1e37;
L_114d1e05:;
  /* 114d1e05 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1e0c je 0x114d1e2e */
  if (C.zf) goto L_114d1e2e;
  /* 114d1e0e jmp 0x114d1e37 */
  goto L_114d1e37;
L_114d1e10:;
  /* 114d1e10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d1e16 jmp 0x114d1e37 */
  goto L_114d1e37;
L_114d1e18:;
  /* 114d1e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e1b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d1e1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d1e21 jmp 0x114d1e37 */
  goto L_114d1e37;
L_114d1e23:;
  /* 114d1e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e26 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 114d1e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d1e2c jmp 0x114d1e37 */
  goto L_114d1e37;
L_114d1e2e:;
  /* 114d1e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e31 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114d1e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d1e37:;
  /* 114d1e37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1e3a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d1e40 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1e46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d1e49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1e4d je 0x114d1e79 */
  if (C.zf) goto L_114d1e79;
  /* 114d1e4f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1e56 je 0x114d1e6b */
  if (C.zf) goto L_114d1e6b;
  /* 114d1e58 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1e5f je 0x114d1e63 */
  if (C.zf) goto L_114d1e63;
  /* 114d1e61 jmp 0x114d1e85 */
  goto L_114d1e85;
L_114d1e63:;
  /* 114d1e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d1e69 jmp 0x114d1e85 */
  goto L_114d1e85;
L_114d1e6b:;
  /* 114d1e6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e6e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1e74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d1e77 jmp 0x114d1e85 */
  goto L_114d1e85;
L_114d1e79:;
  /* 114d1e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e7c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1e82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d1e85:;
  /* 114d1e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1e88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d1e8d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1e94 je 0x114d1ea2 */
  if (C.zf) goto L_114d1ea2;
  /* 114d1e96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1e99 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1e9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d1ea2:;
  /* 114d1ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d1ea5 mov esp, ebp */
  ESP = (EBP);
  /* 114d1ea7 pop ebp */
  EBP = (pop32());
  /* 114d1ea8 ret  */
  ESPCHK(0x114d1d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011eb0 @ 0x114d1eb0 (346 bytes, 106 insns) */
void f_114d1eb0(void) {
  FTRACE(0x114d1eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d1eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d1eb1 mov ebp, esp */
  EBP = (ESP);
  /* 114d1eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d1eb6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d1ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1ebf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1ec4 je 0x114d1ed1 */
  if (C.zf) goto L_114d1ed1;
  /* 114d1ec6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1eca or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 114d1ecd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_114d1ed1:;
  /* 114d1ed1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1ed4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1ed7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d1ed9 je 0x114d1ee5 */
  if (C.zf) goto L_114d1ee5;
  /* 114d1edb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1edf or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114d1ee1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_114d1ee5:;
  /* 114d1ee5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1ee8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1eeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d1eed je 0x114d1efa */
  if (C.zf) goto L_114d1efa;
  /* 114d1eef mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1ef3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 114d1ef6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_114d1efa:;
  /* 114d1efa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1efd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1f02 je 0x114d1f0f */
  if (C.zf) goto L_114d1f0f;
  /* 114d1f04 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f08 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 114d1f0b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_114d1f0f:;
  /* 114d1f0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1f12 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1f15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d1f17 je 0x114d1f23 */
  if (C.zf) goto L_114d1f23;
  /* 114d1f19 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f1d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 114d1f1f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_114d1f23:;
  /* 114d1f23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1f26 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d1f2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d1f2e je 0x114d1f3b */
  if (C.zf) goto L_114d1f3b;
  /* 114d1f30 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f34 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 114d1f37 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_114d1f3b:;
  /* 114d1f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1f3e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1f43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d1f46 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1f4d ja 0x114d1f69 */
  if ((!C.cf&&!C.zf)) goto L_114d1f69;
  /* 114d1f4f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1f56 je 0x114d1f7e */
  if (C.zf) goto L_114d1f7e;
  /* 114d1f58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1f5c je 0x114d1f74 */
  if (C.zf) goto L_114d1f74;
  /* 114d1f5e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1f65 je 0x114d1f8b */
  if (C.zf) goto L_114d1f8b;
  /* 114d1f67 jmp 0x114d1fa3 */
  goto L_114d1fa3;
L_114d1f69:;
  /* 114d1f69 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1f70 je 0x114d1f98 */
  if (C.zf) goto L_114d1f98;
  /* 114d1f72 jmp 0x114d1fa3 */
  goto L_114d1fa3;
L_114d1f74:;
  /* 114d1f74 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f78 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 114d1f7c jmp 0x114d1fa3 */
  goto L_114d1fa3;
L_114d1f7e:;
  /* 114d1f7e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f82 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d1f85 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 114d1f89 jmp 0x114d1fa3 */
  goto L_114d1fa3;
L_114d1f8b:;
  /* 114d1f8b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f8f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 114d1f92 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114d1f96 jmp 0x114d1fa3 */
  goto L_114d1fa3;
L_114d1f98:;
  /* 114d1f98 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1f9c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114d1f9f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_114d1fa3:;
  /* 114d1fa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1fa6 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 114d1fac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d1faf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1fb3 je 0x114d1fc9 */
  if (C.zf) goto L_114d1fc9;
  /* 114d1fb5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1fbc je 0x114d1fd6 */
  if (C.zf) goto L_114d1fd6;
  /* 114d1fbe cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d1fc5 je 0x114d1fe3 */
  if (C.zf) goto L_114d1fe3;
  /* 114d1fc7 jmp 0x114d1feb */
  goto L_114d1feb;
L_114d1fc9:;
  /* 114d1fc9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1fcd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 114d1fd0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114d1fd4 jmp 0x114d1feb */
  goto L_114d1feb;
L_114d1fd6:;
  /* 114d1fd6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1fda or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114d1fdd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 114d1fe1 jmp 0x114d1feb */
  goto L_114d1feb;
L_114d1fe3:;
  /* 114d1fe3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1fe7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_114d1feb:;
  /* 114d1feb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d1fee and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d1ff3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d1ff5 je 0x114d2002 */
  if (C.zf) goto L_114d2002;
  /* 114d1ff7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d1ffb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114d1ffe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_114d2002:;
  /* 114d2002 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d2006 mov esp, ebp */
  ESP = (EBP);
  /* 114d2008 pop ebp */
  EBP = (pop32());
  /* 114d2009 ret  */
  ESPCHK(0x114d1eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x114d2010 (167 bytes, 56 insns) */
void f_114d2010(void) {
  FTRACE(0x114d2010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2010 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2011 mov ebp, esp */
  EBP = (ESP);
  /* 114d2013 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d201b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d201e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d2023 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d2026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d2028 je 0x114d2033 */
  if (C.zf) goto L_114d2033;
  /* 114d202a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d202d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2030 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d2033:;
  /* 114d2033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2036 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d203c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d203f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d2041 je 0x114d204b */
  if (C.zf) goto L_114d204b;
  /* 114d2043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2046 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 114d2048 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d204b:;
  /* 114d204b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d204e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d2054 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d2059 je 0x114d2064 */
  if (C.zf) goto L_114d2064;
  /* 114d205b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d205e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d2061 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d2064:;
  /* 114d2064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2067 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d206c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d206f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d2071 je 0x114d207c */
  if (C.zf) goto L_114d207c;
  /* 114d2073 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2076 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2079 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d207c:;
  /* 114d207c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d207f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d2085 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 114d2088 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d208a je 0x114d2094 */
  if (C.zf) goto L_114d2094;
  /* 114d208c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d208f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114d2091 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d2094:;
  /* 114d2094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2097 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d209d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d20a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d20a2 je 0x114d20b0 */
  if (C.zf) goto L_114d20b0;
  /* 114d20a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d20a7 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 114d20ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d20b0:;
  /* 114d20b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d20b3 mov esp, ebp */
  ESP = (EBP);
  /* 114d20b5 pop ebp */
  EBP = (pop32());
  /* 114d20b6 ret  */
  ESPCHK(0x114d2010u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x114d20c0 (183 bytes, 58 insns) */
void f_114d20c0(void) {
  FTRACE(0x114d20c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d20c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d20c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d20c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d20c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d20c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d20cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d20d1 ja 0x114d20ea */
  if ((!C.cf&&!C.zf)) goto L_114d20ea;
  /* 114d20d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d20d6 mov edx, dword ptr [0x114fd04c] */
  EDX = (r32((uint32_t)(0x114fd04c)));
  /* 114d20dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d20de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 114d20e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 114d20e5 jmp 0x114d2173 */
  goto L_114d2173;
L_114d20ea:;
  /* 114d20ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d20ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 114d20f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d20f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d20fc mov edx, dword ptr [0x114fd04c] */
  EDX = (r32((uint32_t)(0x114fd04c)));
  /* 114d2102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2104 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 114d2108 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d210d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d210f je 0x114d2133 */
  if (C.zf) goto L_114d2133;
  /* 114d2111 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2114 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 114d2117 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d211d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 114d2120 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 114d2123 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 114d2126 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 114d212a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 114d2131 jmp 0x114d2144 */
  goto L_114d2144;
L_114d2133:;
  /* 114d2133 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 114d2136 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 114d2139 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 114d213d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_114d2144:;
  /* 114d2144 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d2146 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2148 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d214a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 114d214d push ecx */
  push32((uint32_t)(ECX));
  /* 114d214e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2151 push edx */
  push32((uint32_t)(EDX));
  /* 114d2152 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114d2155 push eax */
  push32((uint32_t)(EAX));
  /* 114d2156 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d2158 call 0x114d84d0 */
  push32(0x114d215du); f_114d84d0();
  /* 114d215d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d2162 jne 0x114d2168 */
  if (!C.zf) goto L_114d2168;
  /* 114d2164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2166 jmp 0x114d2173 */
  goto L_114d2173;
L_114d2168:;
  /* 114d2168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d216b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d2170 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_114d2173:;
  /* 114d2173 mov esp, ebp */
  ESP = (EBP);
  /* 114d2175 pop ebp */
  EBP = (pop32());
  /* 114d2176 ret  */
  ESPCHK(0x114d20c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012180 @ 0x114d2180 (11 bytes, 6 insns) */
void f_114d2180(void) {
  FTRACE(0x114d2180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2180 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2181 mov ebp, esp */
  EBP = (ESP);
  /* 114d2183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2186 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2189 pop ebp */
  EBP = (pop32());
  /* 114d218a ret  */
  ESPCHK(0x114d2180u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x114d2190 (147 bytes, 43 insns) */
void f_114d2190(void) {
  FTRACE(0x114d2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2190 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2191 mov ebp, esp */
  EBP = (ESP);
  /* 114d2193 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2194 cmp dword ptr [0x114ff408], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff408))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d219b jne 0x114d21b7 */
  if (!C.zf) goto L_114d21b7;
  /* 114d219d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d21a1 jl 0x114d21b2 */
  if ((C.sf!=C.of)) goto L_114d21b2;
  /* 114d21a3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d21a7 jg 0x114d21b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d21b2;
  /* 114d21a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d21ac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d21af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114d21b2:;
  /* 114d21b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d21b5 jmp 0x114d221f */
  goto L_114d221f;
L_114d21b7:;
  /* 114d21b7 push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114d21bc call dword ptr [0x11501430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501430))), 0x114d21c2u);
  /* 114d21c2 cmp dword ptr [0x114ff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d21c9 je 0x114d21e9 */
  if (C.zf) goto L_114d21e9;
  /* 114d21cb push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114d21d0 call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114d21d6u);
  /* 114d21d6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d21d8 call 0x114cb800 */
  push32(0x114d21ddu); f_114cb800();
  /* 114d21dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d21e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d21e7 jmp 0x114d21f0 */
  goto L_114d21f0;
L_114d21e9:;
  /* 114d21e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d21f0:;
  /* 114d21f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d21f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d21f4 call 0x114d2230 */
  push32(0x114d21f9u); f_114d2230();
  /* 114d21f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d21fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114d21ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2203 je 0x114d2211 */
  if (C.zf) goto L_114d2211;
  /* 114d2205 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d2207 call 0x114cb8a0 */
  push32(0x114d220cu); f_114cb8a0();
  /* 114d220c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d220f jmp 0x114d221c */
  goto L_114d221c;
L_114d2211:;
  /* 114d2211 push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114d2216 call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114d221cu);
L_114d221c:;
  /* 114d221c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_114d221f:;
  /* 114d221f mov esp, ebp */
  ESP = (EBP);
  /* 114d2221 pop ebp */
  EBP = (pop32());
  /* 114d2222 ret  */
  ESPCHK(0x114d2190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x114d2230 (299 bytes, 91 insns) */
void f_114d2230(void) {
  FTRACE(0x114d2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2230 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2231 mov ebp, esp */
  EBP = (ESP);
  /* 114d2233 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2236 cmp dword ptr [0x114ff408], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff408))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d223d jne 0x114d225c */
  if (!C.zf) goto L_114d225c;
  /* 114d223f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2243 jl 0x114d2254 */
  if ((C.sf!=C.of)) goto L_114d2254;
  /* 114d2245 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2249 jg 0x114d2254 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d2254;
  /* 114d224b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d224e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2251 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114d2254:;
  /* 114d2254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2257 jmp 0x114d2357 */
  goto L_114d2357;
L_114d225c:;
  /* 114d225c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2263 jge 0x114d22a3 */
  if ((C.sf==C.of)) goto L_114d22a3;
  /* 114d2265 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d226c jle 0x114d2281 */
  if ((C.zf||C.sf!=C.of)) goto L_114d2281;
  /* 114d226e push 1 */
  push32((uint32_t)(0x1u));
  /* 114d2270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2273 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2274 call 0x114d20c0 */
  push32(0x114d2279u); f_114d20c0();
  /* 114d2279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d227c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d227f jmp 0x114d2295 */
  goto L_114d2295;
L_114d2281:;
  /* 114d2281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2284 mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114d2289 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d228b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114d228f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2292 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114d2295:;
  /* 114d2295 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2299 jne 0x114d22a3 */
  if (!C.zf) goto L_114d22a3;
  /* 114d229b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d229e jmp 0x114d2357 */
  goto L_114d2357;
L_114d22a3:;
  /* 114d22a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d22a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 114d22a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d22af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d22b5 mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114d22ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d22bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114d22c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d22c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d22c8 je 0x114d22ec */
  if (C.zf) goto L_114d22ec;
  /* 114d22ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d22cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 114d22d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d22d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 114d22d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 114d22dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 114d22df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 114d22e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114d22ea jmp 0x114d22fd */
  goto L_114d22fd;
L_114d22ec:;
  /* 114d22ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 114d22ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 114d22f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 114d22f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_114d22fd:;
  /* 114d22fd push 1 */
  push32((uint32_t)(0x1u));
  /* 114d22ff push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2301 push 3 */
  push32((uint32_t)(0x3u));
  /* 114d2303 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114d2306 push edx */
  push32((uint32_t)(EDX));
  /* 114d2307 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d230a push eax */
  push32((uint32_t)(EAX));
  /* 114d230b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114d230e push ecx */
  push32((uint32_t)(ECX));
  /* 114d230f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d2314 mov edx, dword ptr [0x114ff408] */
  EDX = (r32((uint32_t)(0x114ff408)));
  /* 114d231a push edx */
  push32((uint32_t)(EDX));
  /* 114d231b call 0x114d90e0 */
  push32(0x114d2320u); f_114d90e0();
  /* 114d2320 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d2326 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d232a jne 0x114d2331 */
  if (!C.zf) goto L_114d2331;
  /* 114d232c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d232f jmp 0x114d2357 */
  goto L_114d2357;
L_114d2331:;
  /* 114d2331 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2335 jne 0x114d2341 */
  if (!C.zf) goto L_114d2341;
  /* 114d2337 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d233a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d233f jmp 0x114d2357 */
  goto L_114d2357;
L_114d2341:;
  /* 114d2341 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2344 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d2349 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 114d234c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d2352 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 114d2355 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_114d2357:;
  /* 114d2357 mov esp, ebp */
  ESP = (EBP);
  /* 114d2359 pop ebp */
  EBP = (pop32());
  /* 114d235a ret  */
  ESPCHK(0x114d2230u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x114d2360 (132 bytes, 51 insns) */
void f_114d2360(void) {
  FTRACE(0x114d2360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2360 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2361 mov ebp, esp */
  EBP = (ESP);
  /* 114d2363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2369 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114d236a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d236d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d236f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d2372 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d2375 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2378 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 114d237d jns 0x114d2384 */
  if (!C.sf) goto L_114d2384;
  /* 114d237f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114d2380 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 114d2383 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114d2384:;
  /* 114d2384 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 114d2389 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d238b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d238e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d2391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2394 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d2396 not edx */
  EDX = (~(EDX));
  /* 114d2398 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d239b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d239e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d23a1 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114d23a4 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 114d23a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d23a9 je 0x114d23af */
  if (C.zf) goto L_114d23af;
  /* 114d23ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d23ad jmp 0x114d23e0 */
  goto L_114d23e0;
L_114d23af:;
  /* 114d23af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d23b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d23b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d23b8 jmp 0x114d23c3 */
  goto L_114d23c3;
L_114d23ba:;
  /* 114d23ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d23bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d23c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114d23c3:;
  /* 114d23c3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d23c7 jge 0x114d23db */
  if ((C.sf==C.of)) goto L_114d23db;
  /* 114d23c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d23cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d23cf cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d23d3 je 0x114d23d9 */
  if (C.zf) goto L_114d23d9;
  /* 114d23d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d23d7 jmp 0x114d23e0 */
  goto L_114d23e0;
L_114d23d9:;
  /* 114d23d9 jmp 0x114d23ba */
  goto L_114d23ba;
L_114d23db:;
  /* 114d23db mov eax, 1 */
  EAX = (0x1u);
L_114d23e0:;
  /* 114d23e0 mov esp, ebp */
  ESP = (EBP);
  /* 114d23e2 pop ebp */
  EBP = (pop32());
  /* 114d23e3 ret  */
  ESPCHK(0x114d2360u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x114d23f0 (168 bytes, 63 insns) */
void f_114d23f0(void) {
  FTRACE(0x114d23f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d23f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d23f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d23f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d23f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d23f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114d23fa and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d23fd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d23ff sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d2402 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d2405 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2408 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 114d240d jns 0x114d2414 */
  if (!C.sf) goto L_114d2414;
  /* 114d240f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114d2410 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 114d2413 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114d2414:;
  /* 114d2414 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 114d2419 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d241b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d241e mov edx, 1 */
  EDX = (0x1u);
  /* 114d2423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2426 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d2428 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d242b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d242e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2431 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 114d2434 push edx */
  push32((uint32_t)(EDX));
  /* 114d2435 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2438 push eax */
  push32((uint32_t)(EAX));
  /* 114d2439 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d243c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d243f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114d2442 push eax */
  push32((uint32_t)(EAX));
  /* 114d2443 call 0x114d9440 */
  push32(0x114d2448u); f_114d9440();
  /* 114d2448 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d244b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d244e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2451 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2454 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d2457 jmp 0x114d2462 */
  goto L_114d2462;
L_114d2459:;
  /* 114d2459 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d245c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d245f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114d2462:;
  /* 114d2462 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2466 jl 0x114d2491 */
  if ((C.sf!=C.of)) goto L_114d2491;
  /* 114d2468 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d246c je 0x114d2491 */
  if (C.zf) goto L_114d2491;
  /* 114d246e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2474 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 114d2477 push edx */
  push32((uint32_t)(EDX));
  /* 114d2478 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d247a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d247d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2480 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114d2483 push edx */
  push32((uint32_t)(EDX));
  /* 114d2484 call 0x114d9440 */
  push32(0x114d2489u); f_114d9440();
  /* 114d2489 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d248c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d248f jmp 0x114d2459 */
  goto L_114d2459;
L_114d2491:;
  /* 114d2491 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d2494 mov esp, ebp */
  ESP = (EBP);
  /* 114d2496 pop ebp */
  EBP = (pop32());
  /* 114d2497 ret  */
  ESPCHK(0x114d23f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124a0 @ 0x114d24a0 (219 bytes, 78 insns) */
void f_114d24a0(void) {
  FTRACE(0x114d24a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d24a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d24a1 mov ebp, esp */
  EBP = (ESP);
  /* 114d24a3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d24a6 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 114d24ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d24b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d24b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d24b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d24b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d24bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d24bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d24c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114d24c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d24c6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d24c8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d24cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d24ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d24d1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d24d7 jns 0x114d24de */
  if (!C.sf) goto L_114d24de;
  /* 114d24d9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 114d24da or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 114d24dd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_114d24de:;
  /* 114d24de mov eax, 0x1f */
  EAX = (0x1fu);
  /* 114d24e3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d24e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d24e8 mov edx, 1 */
  EDX = (0x1u);
  /* 114d24ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d24f0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d24f2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d24f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d24f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d24fb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114d24fe and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 114d2501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d2503 je 0x114d252f */
  if (C.zf) goto L_114d252f;
  /* 114d2505 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2508 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d250b push eax */
  push32((uint32_t)(EAX));
  /* 114d250c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d250f push ecx */
  push32((uint32_t)(ECX));
  /* 114d2510 call 0x114d2360 */
  push32(0x114d2515u); f_114d2360();
  /* 114d2515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d251a jne 0x114d252f */
  if (!C.zf) goto L_114d252f;
  /* 114d251c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d251f push edx */
  push32((uint32_t)(EDX));
  /* 114d2520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2523 push eax */
  push32((uint32_t)(EAX));
  /* 114d2524 call 0x114d23f0 */
  push32(0x114d2529u); f_114d23f0();
  /* 114d2529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d252c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_114d252f:;
  /* 114d252f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d2532 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2535 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d2537 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d253a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d253d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114d2540 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2542 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d2545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2548 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 114d254b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d254e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2551 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d2554 jmp 0x114d255f */
  goto L_114d255f;
L_114d2556:;
  /* 114d2556 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d2559 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d255c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114d255f:;
  /* 114d255f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2563 jge 0x114d2574 */
  if ((C.sf==C.of)) goto L_114d2574;
  /* 114d2565 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d2568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d256b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 114d2572 jmp 0x114d2556 */
  goto L_114d2556;
L_114d2574:;
  /* 114d2574 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d2577 mov esp, ebp */
  ESP = (EBP);
  /* 114d2579 pop ebp */
  EBP = (pop32());
  /* 114d257a ret  */
  ESPCHK(0x114d24a0u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x114d2580 (76 bytes, 28 insns) */
void f_114d2580(void) {
  FTRACE(0x114d2580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2580 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2581 mov ebp, esp */
  EBP = (ESP);
  /* 114d2583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2586 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d258c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d258f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d2592 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d2599 jmp 0x114d25a4 */
  goto L_114d25a4;
L_114d259b:;
  /* 114d259b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d259e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d25a1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114d25a4:;
  /* 114d25a4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d25a8 jge 0x114d25c8 */
  if ((C.sf==C.of)) goto L_114d25c8;
  /* 114d25aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d25ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d25b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d25b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d25b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d25b7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d25ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d25bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d25c0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d25c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d25c6 jmp 0x114d259b */
  goto L_114d259b;
L_114d25c8:;
  /* 114d25c8 mov esp, ebp */
  ESP = (EBP);
  /* 114d25ca pop ebp */
  EBP = (pop32());
  /* 114d25cb ret  */
  ESPCHK(0x114d2580u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x114d25d0 (47 bytes, 17 insns) */
void f_114d25d0(void) {
  FTRACE(0x114d25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d25d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d25d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d25d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d25d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d25db jmp 0x114d25e6 */
  goto L_114d25e6;
L_114d25dd:;
  /* 114d25dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d25e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d25e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d25e6:;
  /* 114d25e6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d25ea jge 0x114d25fb */
  if ((C.sf==C.of)) goto L_114d25fb;
  /* 114d25ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d25ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d25f2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 114d25f9 jmp 0x114d25dd */
  goto L_114d25dd;
L_114d25fb:;
  /* 114d25fb mov esp, ebp */
  ESP = (EBP);
  /* 114d25fd pop ebp */
  EBP = (pop32());
  /* 114d25fe ret  */
  ESPCHK(0x114d25d0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x114d2600 (55 bytes, 21 insns) */
void f_114d2600(void) {
  FTRACE(0x114d2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2600 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2601 mov ebp, esp */
  EBP = (ESP);
  /* 114d2603 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2604 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d260b jmp 0x114d2616 */
  goto L_114d2616;
L_114d260d:;
  /* 114d260d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2610 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2613 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d2616:;
  /* 114d2616 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d261a jge 0x114d262e */
  if ((C.sf==C.of)) goto L_114d262e;
  /* 114d261c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d261f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2622 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2626 je 0x114d262c */
  if (C.zf) goto L_114d262c;
  /* 114d2628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d262a jmp 0x114d2633 */
  goto L_114d2633;
L_114d262c:;
  /* 114d262c jmp 0x114d260d */
  goto L_114d260d;
L_114d262e:;
  /* 114d262e mov eax, 1 */
  EAX = (0x1u);
L_114d2633:;
  /* 114d2633 mov esp, ebp */
  ESP = (EBP);
  /* 114d2635 pop ebp */
  EBP = (pop32());
  /* 114d2636 ret  */
  ESPCHK(0x114d2600u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x114d2640 (236 bytes, 82 insns) */
void f_114d2640(void) {
  FTRACE(0x114d2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2640 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2641 mov ebp, esp */
  EBP = (ESP);
  /* 114d2643 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2646 push esi */
  push32((uint32_t)(ESI));
  /* 114d2647 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d264a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114d264b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d264e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2650 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d2653 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d2656 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2659 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 114d265e jns 0x114d2665 */
  if (!C.sf) goto L_114d2665;
  /* 114d2660 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114d2661 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 114d2664 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114d2665:;
  /* 114d2665 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d2668 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d266b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d266e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d2670 not edx */
  EDX = (~(EDX));
  /* 114d2672 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114d2675 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d267c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d2683 jmp 0x114d268e */
  goto L_114d268e;
L_114d2685:;
  /* 114d2685 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2688 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d268b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d268e:;
  /* 114d268e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2692 jge 0x114d26e1 */
  if ((C.sf==C.of)) goto L_114d26e1;
  /* 114d2694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d269a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114d269d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 114d26a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d26a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d26a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d26a9 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114d26ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d26af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d26b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d26b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d26b7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 114d26ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d26bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d26c0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114d26c3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 114d26c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d26c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d26cc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 114d26cf mov ecx, 0x20 */
  ECX = (0x20u);
  /* 114d26d4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d26d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d26da shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d26dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d26df jmp 0x114d2685 */
  goto L_114d2685;
L_114d26e1:;
  /* 114d26e1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 114d26e8 jmp 0x114d26f3 */
  goto L_114d26f3;
L_114d26ea:;
  /* 114d26ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d26ed sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d26f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d26f3:;
  /* 114d26f3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d26f7 jl 0x114d2727 */
  if ((C.sf!=C.of)) goto L_114d2727;
  /* 114d26f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d26fc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d26ff jl 0x114d2718 */
  if ((C.sf!=C.of)) goto L_114d2718;
  /* 114d2701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2704 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2707 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d270a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d270d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2710 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 114d2713 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 114d2716 jmp 0x114d2725 */
  goto L_114d2725;
L_114d2718:;
  /* 114d2718 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d271b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d271e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_114d2725:;
  /* 114d2725 jmp 0x114d26ea */
  goto L_114d26ea;
L_114d2727:;
  /* 114d2727 pop esi */
  ESI = (pop32());
  /* 114d2728 mov esp, ebp */
  ESP = (EBP);
  /* 114d272a pop ebp */
  EBP = (pop32());
  /* 114d272b ret  */
  ESPCHK(0x114d2640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x114d2730 (578 bytes, 188 insns) */
void f_114d2730(void) {
  FTRACE(0x114d2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2730 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2731 mov ebp, esp */
  EBP = (ESP);
  /* 114d2733 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2739 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d273b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 114d273f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d2745 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d274b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d274e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2751 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2753 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 114d2757 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d275c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d275f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2762 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 114d2765 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114d2768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d276b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 114d276e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d2771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2776 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114d2779 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114d277c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d277f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2786 jne 0x114d27c0 */
  if (!C.zf) goto L_114d27c0;
  /* 114d2788 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d278f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 114d2792 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2793 call 0x114d2600 */
  push32(0x114d2798u); f_114d2600();
  /* 114d2798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d279b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d279d je 0x114d27a8 */
  if (C.zf) goto L_114d27a8;
  /* 114d279f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114d27a6 jmp 0x114d27bb */
  goto L_114d27bb;
L_114d27a8:;
  /* 114d27a8 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 114d27ab push edx */
  push32((uint32_t)(EDX));
  /* 114d27ac call 0x114d25d0 */
  push32(0x114d27b1u); f_114d25d0();
  /* 114d27b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d27b4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_114d27bb:;
  /* 114d27bb jmp 0x114d290c */
  goto L_114d290c;
L_114d27c0:;
  /* 114d27c0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114d27c3 push eax */
  push32((uint32_t)(EAX));
  /* 114d27c4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 114d27c7 push ecx */
  push32((uint32_t)(ECX));
  /* 114d27c8 call 0x114d2580 */
  push32(0x114d27cdu); f_114d2580();
  /* 114d27cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d27d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d27d3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d27d6 push eax */
  push32((uint32_t)(EAX));
  /* 114d27d7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 114d27da push ecx */
  push32((uint32_t)(ECX));
  /* 114d27db call 0x114d24a0 */
  push32(0x114d27e0u); f_114d24a0();
  /* 114d27e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d27e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d27e5 je 0x114d27f0 */
  if (C.zf) goto L_114d27f0;
  /* 114d27e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d27ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d27ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d27f0:;
  /* 114d27f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d27f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d27f6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d27f9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d27fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d27ff jge 0x114d2820 */
  if ((C.sf==C.of)) goto L_114d2820;
  /* 114d2801 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114d2804 push eax */
  push32((uint32_t)(EAX));
  /* 114d2805 call 0x114d25d0 */
  push32(0x114d280au); f_114d25d0();
  /* 114d280a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d280d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d2814 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 114d281b jmp 0x114d290c */
  goto L_114d290c;
L_114d2820:;
  /* 114d2820 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2826 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2829 jg 0x114d2890 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d2890;
  /* 114d282b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d282e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d2831 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2834 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 114d2837 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 114d283a push edx */
  push32((uint32_t)(EDX));
  /* 114d283b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114d283e push eax */
  push32((uint32_t)(EAX));
  /* 114d283f call 0x114d2580 */
  push32(0x114d2844u); f_114d2580();
  /* 114d2844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2847 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d284a push ecx */
  push32((uint32_t)(ECX));
  /* 114d284b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 114d284e push edx */
  push32((uint32_t)(EDX));
  /* 114d284f call 0x114d2640 */
  push32(0x114d2854u); f_114d2640();
  /* 114d2854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2857 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d285a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d285d push ecx */
  push32((uint32_t)(ECX));
  /* 114d285e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 114d2861 push edx */
  push32((uint32_t)(EDX));
  /* 114d2862 call 0x114d24a0 */
  push32(0x114d2867u); f_114d24a0();
  /* 114d2867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d286a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d286d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114d2870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2873 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2874 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 114d2877 push edx */
  push32((uint32_t)(EDX));
  /* 114d2878 call 0x114d2640 */
  push32(0x114d287du); f_114d2640();
  /* 114d287d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d2887 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 114d288e jmp 0x114d290c */
  goto L_114d290c;
L_114d2890:;
  /* 114d2890 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2893 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2896 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2898 jl 0x114d28db */
  if ((C.sf!=C.of)) goto L_114d28db;
  /* 114d289a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 114d289d push edx */
  push32((uint32_t)(EDX));
  /* 114d289e call 0x114d25d0 */
  push32(0x114d28a3u); f_114d25d0();
  /* 114d28a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d28a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d28a9 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d28ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d28b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d28b4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d28b7 push edx */
  push32((uint32_t)(EDX));
  /* 114d28b8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114d28bb push eax */
  push32((uint32_t)(EAX));
  /* 114d28bc call 0x114d2640 */
  push32(0x114d28c1u); f_114d2640();
  /* 114d28c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d28c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d28c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d28c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d28cc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d28cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d28d2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 114d28d9 jmp 0x114d290c */
  goto L_114d290c;
L_114d28db:;
  /* 114d28db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d28de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d28e1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d28e4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d28e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d28ea and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d28ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d28f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d28f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d28f8 push edx */
  push32((uint32_t)(EDX));
  /* 114d28f9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114d28fc push eax */
  push32((uint32_t)(EAX));
  /* 114d28fd call 0x114d2640 */
  push32(0x114d2902u); f_114d2640();
  /* 114d2902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2905 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_114d290c:;
  /* 114d290c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d290f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d2912 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2915 mov eax, 0x20 */
  EAX = (0x20u);
  /* 114d291a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d291c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d291f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2922 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2925 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d2927 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d292a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d292c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d292f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d2931 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2933 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2939 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114d293b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114d293e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2941 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2945 jne 0x114d295a */
  if (!C.zf) goto L_114d295a;
  /* 114d2947 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d294a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d294d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114d2950 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2953 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d2956 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d2958 jmp 0x114d296b */
  goto L_114d296b;
L_114d295a:;
  /* 114d295a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d295d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2961 jne 0x114d296b */
  if (!C.zf) goto L_114d296b;
  /* 114d2963 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2966 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d2969 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_114d296b:;
  /* 114d296b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d296e mov esp, ebp */
  ESP = (EBP);
  /* 114d2970 pop ebp */
  EBP = (pop32());
  /* 114d2971 ret  */
  ESPCHK(0x114d2730u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x114d2980 (26 bytes, 11 insns) */
void f_114d2980(void) {
  FTRACE(0x114d2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2980 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2981 mov ebp, esp */
  EBP = (ESP);
  /* 114d2983 push 0x114fd258 */
  push32((uint32_t)(0x114fd258u));
  /* 114d2988 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d298b push eax */
  push32((uint32_t)(EAX));
  /* 114d298c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d298f push ecx */
  push32((uint32_t)(ECX));
  /* 114d2990 call 0x114d2730 */
  push32(0x114d2995u); f_114d2730();
  /* 114d2995 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2998 pop ebp */
  EBP = (pop32());
  /* 114d2999 ret  */
  ESPCHK(0x114d2980u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x114d29a0 (26 bytes, 11 insns) */
void f_114d29a0(void) {
  FTRACE(0x114d29a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d29a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d29a1 mov ebp, esp */
  EBP = (ESP);
  /* 114d29a3 push 0x114fd270 */
  push32((uint32_t)(0x114fd270u));
  /* 114d29a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d29ab push eax */
  push32((uint32_t)(EAX));
  /* 114d29ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d29af push ecx */
  push32((uint32_t)(ECX));
  /* 114d29b0 call 0x114d2730 */
  push32(0x114d29b5u); f_114d2730();
  /* 114d29b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d29b8 pop ebp */
  EBP = (pop32());
  /* 114d29b9 ret  */
  ESPCHK(0x114d29a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129c0 @ 0x114d29c0 (191 bytes, 58 insns) */
void f_114d29c0(void) {
  FTRACE(0x114d29c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d29c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d29c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d29c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d29c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114d29cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d29d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d29d2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 114d29d6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d29dc mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 114d29e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d29e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d29e5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 114d29e9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d29ee mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 114d29f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d29f5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 114d29f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d29fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d29fe mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 114d2a01 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d2a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2a09 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114d2a0c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114d2a0f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d2a12 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114d2a14 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 114d2a17 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2a18 call 0x114d24a0 */
  push32(0x114d2a1du); f_114d24a0();
  /* 114d2a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d2a22 je 0x114d2a37 */
  if (C.zf) goto L_114d2a37;
  /* 114d2a24 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 114d2a2b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d2a2f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 114d2a33 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_114d2a37:;
  /* 114d2a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2a3a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d2a3f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2a44 jne 0x114d2a4d */
  if (!C.zf) goto L_114d2a4d;
  /* 114d2a46 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_114d2a4d:;
  /* 114d2a4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2a50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d2a53 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 114d2a56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2a59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2a5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d2a5e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d2a61 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d2a67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2a6a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d2a6f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d2a71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2a74 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 114d2a78 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d2a7b mov esp, ebp */
  ESP = (EBP);
  /* 114d2a7d pop ebp */
  EBP = (pop32());
  /* 114d2a7e ret  */
  ESPCHK(0x114d29c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x114d2a80 (54 bytes, 24 insns) */
void f_114d2a80(void) {
  FTRACE(0x114d2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2a81 mov ebp, esp */
  EBP = (ESP);
  /* 114d2a83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2a8e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2a91 push eax */
  push32((uint32_t)(EAX));
  /* 114d2a92 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 114d2a95 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2a96 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114d2a99 push edx */
  push32((uint32_t)(EDX));
  /* 114d2a9a call 0x114d9740 */
  push32(0x114d2a9fu); f_114d9740();
  /* 114d2a9f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2aa5 push eax */
  push32((uint32_t)(EAX));
  /* 114d2aa6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114d2aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2aaa call 0x114d2980 */
  push32(0x114d2aafu); f_114d2980();
  /* 114d2aaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2ab2 mov esp, ebp */
  ESP = (EBP);
  /* 114d2ab4 pop ebp */
  EBP = (pop32());
  /* 114d2ab5 ret  */
  ESPCHK(0x114d2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ac0 @ 0x114d2ac0 (54 bytes, 24 insns) */
void f_114d2ac0(void) {
  FTRACE(0x114d2ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2ac1 mov ebp, esp */
  EBP = (ESP);
  /* 114d2ac3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2aca push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2acc push 1 */
  push32((uint32_t)(0x1u));
  /* 114d2ace mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2ad1 push eax */
  push32((uint32_t)(EAX));
  /* 114d2ad2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 114d2ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2ad6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114d2ad9 push edx */
  push32((uint32_t)(EDX));
  /* 114d2ada call 0x114d9740 */
  push32(0x114d2adfu); f_114d9740();
  /* 114d2adf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2ae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2ae5 push eax */
  push32((uint32_t)(EAX));
  /* 114d2ae6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114d2ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2aea call 0x114d29c0 */
  push32(0x114d2aefu); f_114d29c0();
  /* 114d2aef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2af2 mov esp, ebp */
  ESP = (EBP);
  /* 114d2af4 pop ebp */
  EBP = (pop32());
  /* 114d2af5 ret  */
  ESPCHK(0x114d2ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x114d2b00 (54 bytes, 24 insns) */
void f_114d2b00(void) {
  FTRACE(0x114d2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2b01 mov ebp, esp */
  EBP = (ESP);
  /* 114d2b03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2b0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2b11 push eax */
  push32((uint32_t)(EAX));
  /* 114d2b12 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 114d2b15 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2b16 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114d2b19 push edx */
  push32((uint32_t)(EDX));
  /* 114d2b1a call 0x114d9740 */
  push32(0x114d2b1fu); f_114d9740();
  /* 114d2b1f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2b22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2b25 push eax */
  push32((uint32_t)(EAX));
  /* 114d2b26 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114d2b29 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2b2a call 0x114d29a0 */
  push32(0x114d2b2fu); f_114d29a0();
  /* 114d2b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2b32 mov esp, ebp */
  ESP = (EBP);
  /* 114d2b34 pop ebp */
  EBP = (pop32());
  /* 114d2b35 ret  */
  ESPCHK(0x114d2b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b40 @ 0x114d2b40 (250 bytes, 90 insns) */
void f_114d2b40(void) {
  FTRACE(0x114d2b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2b40 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2b41 mov ebp, esp */
  EBP = (ESP);
  /* 114d2b43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d2b4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2b4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d2b52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d2b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2b58 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 114d2b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2b61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d2b64:;
  /* 114d2b64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2b68 jle 0x114d2bab */
  if ((C.zf||C.sf!=C.of)) goto L_114d2bab;
  /* 114d2b6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2b6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d2b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d2b72 je 0x114d2b88 */
  if (C.zf) goto L_114d2b88;
  /* 114d2b74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2b77 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d2b7a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d2b7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2b80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2b83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d2b86 jmp 0x114d2b8f */
  goto L_114d2b8f;
L_114d2b88:;
  /* 114d2b88 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_114d2b8f:;
  /* 114d2b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2b92 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 114d2b95 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 114d2b97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2b9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d2ba0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2ba3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2ba6 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114d2ba9 jmp 0x114d2b64 */
  goto L_114d2b64;
L_114d2bab:;
  /* 114d2bab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114d2bb1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2bb5 jl 0x114d2bf4 */
  if ((C.sf!=C.of)) goto L_114d2bf4;
  /* 114d2bb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2bba movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d2bbd cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2bc0 jl 0x114d2bf4 */
  if ((C.sf!=C.of)) goto L_114d2bf4;
  /* 114d2bc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bc5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2bc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d2bcb:;
  /* 114d2bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d2bd1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2bd4 jne 0x114d2be7 */
  if (!C.zf) goto L_114d2be7;
  /* 114d2bd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bd9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 114d2bdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2be2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d2be5 jmp 0x114d2bcb */
  goto L_114d2bcb;
L_114d2be7:;
  /* 114d2be7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bea mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d2bec add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d2bef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2bf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_114d2bf4:;
  /* 114d2bf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2bf7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d2bfa cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2bfd jne 0x114d2c10 */
  if (!C.zf) goto L_114d2c10;
  /* 114d2bff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2c02 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d2c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2c0b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d2c0e jmp 0x114d2c36 */
  goto L_114d2c36;
L_114d2c10:;
  /* 114d2c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2c13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c16 push eax */
  push32((uint32_t)(EAX));
  /* 114d2c17 call 0x114d0fb0 */
  push32(0x114d2c1cu); f_114d0fb0();
  /* 114d2c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c22 push eax */
  push32((uint32_t)(EAX));
  /* 114d2c23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2c26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c29 push ecx */
  push32((uint32_t)(ECX));
  /* 114d2c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2c2d push edx */
  push32((uint32_t)(EDX));
  /* 114d2c2e call 0x114d2e90 */
  push32(0x114d2c33u); f_114d2e90();
  /* 114d2c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d2c36:;
  /* 114d2c36 mov esp, ebp */
  ESP = (EBP);
  /* 114d2c38 pop ebp */
  EBP = (pop32());
  /* 114d2c39 ret  */
  ESPCHK(0x114d2b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x114d2c40 (119 bytes, 44 insns) */
void f_114d2c40(void) {
  FTRACE(0x114d2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2c40 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2c41 mov ebp, esp */
  EBP = (ESP);
  /* 114d2c43 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2c46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 114d2c49 push eax */
  push32((uint32_t)(EAX));
  /* 114d2c4a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114d2c4d push ecx */
  push32((uint32_t)(ECX));
  /* 114d2c4e call 0x114d2cc0 */
  push32(0x114d2c53u); f_114d2cc0();
  /* 114d2c53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c56 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 114d2c59 push edx */
  push32((uint32_t)(EDX));
  /* 114d2c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d2c5c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114d2c5e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2c61 mov eax, esp */
  EAX = (ESP);
  /* 114d2c63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2c66 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d2c68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2c6b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d2c6e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d2c72 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 114d2c76 call 0x114da2c0 */
  push32(0x114d2c7bu); f_114da2c0();
  /* 114d2c7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2c7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2c81 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d2c84 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 114d2c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2c8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d2c8d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 114d2c91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2c94 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d2c97 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 114d2c9a push ecx */
  push32((uint32_t)(ECX));
  /* 114d2c9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d2c9e push edx */
  push32((uint32_t)(EDX));
  /* 114d2c9f call 0x114d1130 */
  push32(0x114d2ca4u); f_114d1130();
  /* 114d2ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2ca7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2caa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d2cad mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 114d2cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2cb3 mov esp, ebp */
  ESP = (EBP);
  /* 114d2cb5 pop ebp */
  EBP = (pop32());
  /* 114d2cb6 ret  */
  ESPCHK(0x114d2c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cc0 @ 0x114d2cc0 (354 bytes, 104 insns) */
void f_114d2cc0(void) {
  FTRACE(0x114d2cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2cc1 mov ebp, esp */
  EBP = (ESP);
  /* 114d2cc3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2cc6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 114d2ccd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d2cd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2cd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d2cd8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 114d2cdc and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2ce2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 114d2ce5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 114d2ce9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2cee mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 114d2cf2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d2cf7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 114d2cfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2cfe mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d2d01 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d2d07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d2d0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2d0d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d2d0f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d2d12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d2d15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d2d1b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d2d1e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2d22 je 0x114d2d37 */
  if (C.zf) goto L_114d2d37;
  /* 114d2d24 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2d2b je 0x114d2d2f */
  if (C.zf) goto L_114d2d2f;
  /* 114d2d2d jmp 0x114d2d7a */
  goto L_114d2d7a;
L_114d2d2f:;
  /* 114d2d2f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 114d2d35 jmp 0x114d2d95 */
  goto L_114d2d95;
L_114d2d37:;
  /* 114d2d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2d3b jne 0x114d2d64 */
  if (!C.zf) goto L_114d2d64;
  /* 114d2d3d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2d41 jne 0x114d2d64 */
  if (!C.zf) goto L_114d2d64;
  /* 114d2d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2d46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114d2d4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2d50 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 114d2d56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2d59 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 114d2d5f jmp 0x114d2e1e */
  goto L_114d2e1e;
L_114d2d64:;
  /* 114d2d64 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 114d2d68 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2d6d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114d2d71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d2d78 jmp 0x114d2d95 */
  goto L_114d2d95;
L_114d2d7a:;
  /* 114d2d7a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 114d2d7e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114d2d83 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 114d2d87 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 114d2d8b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2d91 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_114d2d95:;
  /* 114d2d95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d2d98 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 114d2d9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d2d9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d2da0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d2da3 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 114d2da6 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d2da8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2dab mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114d2dae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d2db1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 114d2db4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2db7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d2db9:;
  /* 114d2db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2dbc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d2dbf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d2dc7 jne 0x114d2e04 */
  if (!C.zf) goto L_114d2e04;
  /* 114d2dc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2dcc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d2dcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d2dd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2dd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d2dd6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 114d2ddc neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d2dde sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2de0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d2de2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2de4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2de7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d2dea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2ded mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d2def shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d2df1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2df4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d2df6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 114d2dfa sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114d2dfe mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 114d2e02 jmp 0x114d2db9 */
  goto L_114d2db9;
L_114d2e04:;
  /* 114d2e04 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d2e07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d2e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d2e0f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d2e15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2e17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2e1a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_114d2e1e:;
  /* 114d2e1e mov esp, ebp */
  ESP = (EBP);
  /* 114d2e20 pop ebp */
  EBP = (pop32());
  /* 114d2e21 ret  */
  ESPCHK(0x114d2cc0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x114d2e30 (88 bytes, 40 insns) */
void f_114d2e30(void) {
  FTRACE(0x114d2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2e30 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 114d2e34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d2e38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d2e3a je 0x114d2e83 */
  if (C.zf) goto L_114d2e83;
  /* 114d2e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d2e3e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 114d2e42 push edi */
  push32((uint32_t)(EDI));
  /* 114d2e43 mov edi, ecx */
  EDI = (ECX);
  /* 114d2e45 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2e48 jb 0x114d2e77 */
  if (C.cf) goto L_114d2e77;
  /* 114d2e4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d2e4c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114d2e4f je 0x114d2e59 */
  if (C.zf) goto L_114d2e59;
  /* 114d2e51 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_114d2e53:;
  /* 114d2e53 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d2e55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d2e56 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114d2e57 jne 0x114d2e53 */
  if (!C.zf) goto L_114d2e53;
L_114d2e59:;
  /* 114d2e59 mov ecx, eax */
  ECX = (EAX);
  /* 114d2e5b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 114d2e5e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2e60 mov ecx, eax */
  ECX = (EAX);
  /* 114d2e62 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114d2e65 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2e67 mov ecx, edx */
  ECX = (EDX);
  /* 114d2e69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d2e6c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d2e6f je 0x114d2e77 */
  if (C.zf) goto L_114d2e77;
  /* 114d2e71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114d2e73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d2e75 je 0x114d2e7d */
  if (C.zf) goto L_114d2e7d;
L_114d2e77:;
  /* 114d2e77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d2e79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d2e7a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 114d2e7b jne 0x114d2e77 */
  if (!C.zf) goto L_114d2e77;
L_114d2e7d:;
  /* 114d2e7d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d2e81 pop edi */
  EDI = (pop32());
  /* 114d2e82 ret  */
  ESPCHK(0x114d2e30u, _esp0);
  ESP += 4; return;
L_114d2e83:;
  /* 114d2e83 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d2e87 ret  */
  ESPCHK(0x114d2e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e90 @ 0x114d2e90 (664 bytes, 262 insns) [15 switch table(s)] */
void f_114d2e90(void) {
  FTRACE(0x114d2e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d2e90 push ebp */
  push32((uint32_t)(EBP));
  /* 114d2e91 mov ebp, esp */
  EBP = (ESP);
  /* 114d2e93 push edi */
  push32((uint32_t)(EDI));
  /* 114d2e94 push esi */
  push32((uint32_t)(ESI));
  /* 114d2e95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114d2e98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d2e9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2e9e mov eax, ecx */
  EAX = (ECX);
  /* 114d2ea0 mov edx, ecx */
  EDX = (ECX);
  /* 114d2ea2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2ea4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2ea6 jbe 0x114d2eb0 */
  if ((C.cf||C.zf)) goto L_114d2eb0;
  /* 114d2ea8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2eaa jb 0x114d3028 */
  if (C.cf) goto L_114d3028;
L_114d2eb0:;
  /* 114d2eb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114d2eb6 jne 0x114d2ecc */
  if (!C.zf) goto L_114d2ecc;
  /* 114d2eb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d2ebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d2ebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2ec1 jb 0x114d2eec */
  if (C.cf) goto L_114d2eec;
  /* 114d2ec3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d2ec5 jmp dword ptr [edx*4 + 0x114d2fd8] */
  switch (EDX) {
    case 0: goto L_114d2fe8;
    case 1: goto L_114d2ff0;
    case 2: goto L_114d2ffc;
    case 3: goto L_114d3010;
    default: x86_unimpl("switch@0x114d2ec5 out of table"); return;
  }
L_114d2ecc:;
  /* 114d2ecc mov eax, edi */
  EAX = (EDI);
  /* 114d2ece mov edx, 3 */
  EDX = (0x3u);
  /* 114d2ed3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d2ed6 jb 0x114d2ee4 */
  if (C.cf) goto L_114d2ee4;
  /* 114d2ed8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114d2edb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2edd jmp dword ptr [eax*4 + 0x114d2ef0] */
  switch (EAX) {
    case 1: goto L_114d2f00;
    case 2: goto L_114d2f2c;
    case 3: goto L_114d2f50;
    default: x86_unimpl("switch@0x114d2edd out of table"); return;
  }
L_114d2ee4:;
  /* 114d2ee4 jmp dword ptr [ecx*4 + 0x114d2fe8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x114d2fe8)))); return;
  /* 114d2eeb nop  */
  /* nop */
L_114d2eec:;
  /* 114d2eec jmp dword ptr [ecx*4 + 0x114d2f6c] */
  switch (ECX) {
    case 0: goto L_114d2fcf;
    case 1: goto L_114d2fbc;
    case 2: goto L_114d2fb4;
    case 3: goto L_114d2fac;
    case 4: goto L_114d2fa4;
    case 5: goto L_114d2f9c;
    case 6: goto L_114d2f94;
    case 7: goto L_114d2f8c;
    default: x86_unimpl("switch@0x114d2eec out of table"); return;
  }
  /* 114d2ef3 nop  */
  /* nop */
L_114d2f00:;
  /* 114d2f00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d2f02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d2f04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d2f06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d2f09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d2f0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d2f0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d2f12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d2f15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2f18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2f1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2f1e jb 0x114d2eec */
  if (C.cf) goto L_114d2eec;
  /* 114d2f20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d2f22 jmp dword ptr [edx*4 + 0x114d2fd8] */
  switch (EDX) {
    case 0: goto L_114d2fe8;
    case 1: goto L_114d2ff0;
    case 2: goto L_114d2ffc;
    case 3: goto L_114d3010;
    default: x86_unimpl("switch@0x114d2f22 out of table"); return;
  }
  /* 114d2f29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d2f2c:;
  /* 114d2f2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d2f2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d2f30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d2f32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d2f35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d2f38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d2f3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2f3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2f41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2f44 jb 0x114d2eec */
  if (C.cf) goto L_114d2eec;
  /* 114d2f46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d2f48 jmp dword ptr [edx*4 + 0x114d2fd8] */
  switch (EDX) {
    case 0: goto L_114d2fe8;
    case 1: goto L_114d2ff0;
    case 2: goto L_114d2ffc;
    case 3: goto L_114d3010;
    default: x86_unimpl("switch@0x114d2f48 out of table"); return;
  }
  /* 114d2f4f nop  */
  /* nop */
L_114d2f50:;
  /* 114d2f50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d2f52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d2f54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d2f56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114d2f57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d2f5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d2f5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d2f5e jb 0x114d2eec */
  if (C.cf) goto L_114d2eec;
  /* 114d2f60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d2f62 jmp dword ptr [edx*4 + 0x114d2fd8] */
  switch (EDX) {
    case 0: goto L_114d2fe8;
    case 1: goto L_114d2ff0;
    case 2: goto L_114d2ffc;
    case 3: goto L_114d3010;
    default: x86_unimpl("switch@0x114d2f62 out of table"); return;
  }
  /* 114d2f69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d2f8c:;
  /* 114d2f8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 114d2f90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_114d2f94:;
  /* 114d2f94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 114d2f98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_114d2f9c:;
  /* 114d2f9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 114d2fa0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_114d2fa4:;
  /* 114d2fa4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 114d2fa8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_114d2fac:;
  /* 114d2fac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 114d2fb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_114d2fb4:;
  /* 114d2fb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 114d2fb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_114d2fbc:;
  /* 114d2fbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 114d2fc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 114d2fc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 114d2fcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d2fcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114d2fcf:;
  /* 114d2fcf jmp dword ptr [edx*4 + 0x114d2fd8] */
  switch (EDX) {
    case 0: goto L_114d2fe8;
    case 1: goto L_114d2ff0;
    case 2: goto L_114d2ffc;
    case 3: goto L_114d3010;
    default: x86_unimpl("switch@0x114d2fcf out of table"); return;
  }
  /* 114d2fd6 mov edi, edi */
  EDI = (EDI);
L_114d2fe8:;
  /* 114d2fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2feb pop esi */
  ESI = (pop32());
  /* 114d2fec pop edi */
  EDI = (pop32());
  /* 114d2fed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d2fee ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d2fef nop  */
  /* nop */
L_114d2ff0:;
  /* 114d2ff0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d2ff2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d2ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d2ff7 pop esi */
  ESI = (pop32());
  /* 114d2ff8 pop edi */
  EDI = (pop32());
  /* 114d2ff9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d2ffa ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d2ffb nop  */
  /* nop */
L_114d2ffc:;
  /* 114d2ffc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d2ffe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d3000 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d3003 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d3006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3009 pop esi */
  ESI = (pop32());
  /* 114d300a pop edi */
  EDI = (pop32());
  /* 114d300b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d300c ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d300d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d3010:;
  /* 114d3010 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d3012 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d3014 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d3017 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d301a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d301d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d3020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3023 pop esi */
  ESI = (pop32());
  /* 114d3024 pop edi */
  EDI = (pop32());
  /* 114d3025 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d3026 ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d3027 nop  */
  /* nop */
L_114d3028:;
  /* 114d3028 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 114d302c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 114d3030 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114d3036 jne 0x114d305c */
  if (!C.zf) goto L_114d305c;
  /* 114d3038 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d303b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d303e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3041 jb 0x114d3050 */
  if (C.cf) goto L_114d3050;
  /* 114d3043 std  */
  C.df=1;
  /* 114d3044 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d3046 cld  */
  C.df=0;
  /* 114d3047 jmp dword ptr [edx*4 + 0x114d3170] */
  switch (EDX) {
    case 0: goto L_114d3180;
    case 1: goto L_114d3188;
    case 2: goto L_114d3198;
    case 3: goto L_114d31ac;
    default: x86_unimpl("switch@0x114d3047 out of table"); return;
  }
  /* 114d304e mov edi, edi */
  EDI = (EDI);
L_114d3050:;
  /* 114d3050 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d3052 jmp dword ptr [ecx*4 + 0x114d3120] */
  switch (ECX) {
    case 0: goto L_114d3167;
    default: x86_unimpl("switch@0x114d3052 out of table"); return;
  }
  /* 114d3059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d305c:;
  /* 114d305c mov eax, edi */
  EAX = (EDI);
  /* 114d305e mov edx, 3 */
  EDX = (0x3u);
  /* 114d3063 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3066 jb 0x114d3074 */
  if (C.cf) goto L_114d3074;
  /* 114d3068 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114d306b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d306d jmp dword ptr [eax*4 + 0x114d3078] */
  switch (EAX) {
    case 1: goto L_114d3088;
    case 2: goto L_114d30a8;
    case 3: goto L_114d30d0;
    default: x86_unimpl("switch@0x114d306d out of table"); return;
  }
L_114d3074:;
  /* 114d3074 jmp dword ptr [ecx*4 + 0x114d3170] */
  switch (ECX) {
    case 0: goto L_114d3180;
    case 1: goto L_114d3188;
    case 2: goto L_114d3198;
    case 3: goto L_114d31ac;
    default: x86_unimpl("switch@0x114d3074 out of table"); return;
  }
  /* 114d307b nop  */
  /* nop */
L_114d3088:;
  /* 114d3088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d308b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d308d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d3090 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 114d3091 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d3094 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 114d3095 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3098 jb 0x114d3050 */
  if (C.cf) goto L_114d3050;
  /* 114d309a std  */
  C.df=1;
  /* 114d309b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d309d cld  */
  C.df=0;
  /* 114d309e jmp dword ptr [edx*4 + 0x114d3170] */
  switch (EDX) {
    case 0: goto L_114d3180;
    case 1: goto L_114d3188;
    case 2: goto L_114d3198;
    case 3: goto L_114d31ac;
    default: x86_unimpl("switch@0x114d309e out of table"); return;
  }
  /* 114d30a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d30a8:;
  /* 114d30a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d30ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d30ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d30b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d30b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d30b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d30b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d30bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d30bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d30c2 jb 0x114d3050 */
  if (C.cf) goto L_114d3050;
  /* 114d30c4 std  */
  C.df=1;
  /* 114d30c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d30c7 cld  */
  C.df=0;
  /* 114d30c8 jmp dword ptr [edx*4 + 0x114d3170] */
  switch (EDX) {
    case 0: goto L_114d3180;
    case 1: goto L_114d3188;
    case 2: goto L_114d3198;
    case 3: goto L_114d31ac;
    default: x86_unimpl("switch@0x114d30c8 out of table"); return;
  }
  /* 114d30cf nop  */
  /* nop */
L_114d30d0:;
  /* 114d30d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d30d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d30d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d30d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d30db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d30de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d30e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d30e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d30e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d30ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d30ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d30f0 jb 0x114d3050 */
  if (C.cf) goto L_114d3050;
  /* 114d30f6 std  */
  C.df=1;
  /* 114d30f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d30f9 cld  */
  C.df=0;
  /* 114d30fa jmp dword ptr [edx*4 + 0x114d3170] */
  switch (EDX) {
    case 0: goto L_114d3180;
    case 1: goto L_114d3188;
    case 2: goto L_114d3198;
    case 3: goto L_114d31ac;
    default: x86_unimpl("switch@0x114d30fa out of table"); return;
  }
  /* 114d3101 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 114d3104 and al, 0x31 */
  { uint32_t _r=(AL)&(0x31u); AL = (_r); fl_logic(_r,8); }
  /* 114d3106 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d3107 adc dword ptr [ecx + esi], ebp */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*1))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d310a dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d310b adc dword ptr [ecx + esi], esi */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*1))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d310e dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d310f adc dword ptr [ecx + esi], edi */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*1))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d3112 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d3113 adc dword ptr [ecx + esi + 0x4d], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*1 + 0x4d))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*1 + 0x4d), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d3117 adc dword ptr [ecx + esi + 0x4d], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*1 + 0x4d))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*1 + 0x4d), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d311b adc dword ptr [ecx + esi + 0x4d], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*1 + 0x4d))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*1 + 0x4d), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d3124 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 114d3128 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 114d312c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 114d3130 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 114d3134 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 114d3138 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 114d313c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 114d3140 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 114d3144 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 114d3148 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 114d314c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 114d3150 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 114d3154 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 114d3158 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 114d315c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 114d3163 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3165 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114d3167:;
  /* 114d3167 jmp dword ptr [edx*4 + 0x114d3170] */
  switch (EDX) {
    case 0: goto L_114d3180;
    case 1: goto L_114d3188;
    case 2: goto L_114d3198;
    case 3: goto L_114d31ac;
    default: x86_unimpl("switch@0x114d3167 out of table"); return;
  }
  /* 114d316e mov edi, edi */
  EDI = (EDI);
L_114d3180:;
  /* 114d3180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3183 pop esi */
  ESI = (pop32());
  /* 114d3184 pop edi */
  EDI = (pop32());
  /* 114d3185 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d3186 ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d3187 nop  */
  /* nop */
L_114d3188:;
  /* 114d3188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d318b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d318e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3191 pop esi */
  ESI = (pop32());
  /* 114d3192 pop edi */
  EDI = (pop32());
  /* 114d3193 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d3194 ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d3195 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d3198:;
  /* 114d3198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d319b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d319e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d31a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d31a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d31a7 pop esi */
  ESI = (pop32());
  /* 114d31a8 pop edi */
  EDI = (pop32());
  /* 114d31a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d31aa ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
  /* 114d31ab nop  */
  /* nop */
L_114d31ac:;
  /* 114d31ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d31af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d31b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d31b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d31b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d31bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d31be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d31c1 pop esi */
  ESI = (pop32());
  /* 114d31c2 pop edi */
  EDI = (pop32());
  /* 114d31c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d31c4 ret  */
  ESPCHK(0x114d2e90u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x114d31d0 (15 bytes, 7 insns) */
void f_114d31d0(void) {
  FTRACE(0x114d31d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d31d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d31d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d31d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d31d5 call 0x114ca370 */
  push32(0x114d31dau); f_114ca370();
  /* 114d31da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d31dd pop ebp */
  EBP = (pop32());
  /* 114d31de ret  */
  ESPCHK(0x114d31d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x114d31e0 (48 bytes, 17 insns) */
void f_114d31e0(void) {
  FTRACE(0x114d31e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d31e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d31e1 mov ebp, esp */
  EBP = (ESP);
  /* 114d31e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d31e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d31e6 call 0x114cb800 */
  push32(0x114d31ebu); f_114cb800();
  /* 114d31eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d31ee mov eax, dword ptr [0x114ff324] */
  EAX = (r32((uint32_t)(0x114ff324)));
  /* 114d31f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d31f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d31f9 mov dword ptr [0x114ff324], ecx */
  w32((uint32_t)(0x114ff324), (ECX));
  /* 114d31ff push 9 */
  push32((uint32_t)(0x9u));
  /* 114d3201 call 0x114cb8a0 */
  push32(0x114d3206u); f_114cb8a0();
  /* 114d3206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d320c mov esp, ebp */
  ESP = (EBP);
  /* 114d320e pop ebp */
  EBP = (pop32());
  /* 114d320f ret  */
  ESPCHK(0x114d31e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013210 @ 0x114d3210 (10 bytes, 5 insns) */
void f_114d3210(void) {
  FTRACE(0x114d3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3210 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3211 mov ebp, esp */
  EBP = (ESP);
  /* 114d3213 mov eax, dword ptr [0x114ff324] */
  EAX = (r32((uint32_t)(0x114ff324)));
  /* 114d3218 pop ebp */
  EBP = (pop32());
  /* 114d3219 ret  */
  ESPCHK(0x114d3210u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x114d3220 (45 bytes, 19 insns) */
void f_114d3220(void) {
  FTRACE(0x114d3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3220 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3221 mov ebp, esp */
  EBP = (ESP);
  /* 114d3223 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3224 mov eax, dword ptr [0x114ff324] */
  EAX = (r32((uint32_t)(0x114ff324)));
  /* 114d3229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d322c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3230 je 0x114d3240 */
  if (C.zf) goto L_114d3240;
  /* 114d3232 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3235 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3236 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x114d3239u);
  /* 114d3239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d323c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d323e jne 0x114d3244 */
  if (!C.zf) goto L_114d3244;
L_114d3240:;
  /* 114d3240 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3242 jmp 0x114d3249 */
  goto L_114d3249;
L_114d3244:;
  /* 114d3244 mov eax, 1 */
  EAX = (0x1u);
L_114d3249:;
  /* 114d3249 mov esp, ebp */
  ESP = (EBP);
  /* 114d324b pop ebp */
  EBP = (pop32());
  /* 114d324c ret  */
  ESPCHK(0x114d3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10013250 @ 0x114d3250 (23 bytes, 10 insns) */
void f_114d3250(void) {
  FTRACE(0x114d3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3250 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3251 mov ebp, esp */
  EBP = (ESP);
  /* 114d3253 mov eax, dword ptr [0x114ff320] */
  EAX = (r32((uint32_t)(0x114ff320)));
  /* 114d3258 push eax */
  push32((uint32_t)(EAX));
  /* 114d3259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d325c push ecx */
  push32((uint32_t)(ECX));
  /* 114d325d call 0x114d3270 */
  push32(0x114d3262u); f_114d3270();
  /* 114d3262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3265 pop ebp */
  EBP = (pop32());
  /* 114d3266 ret  */
  ESPCHK(0x114d3250u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x114d3270 (87 bytes, 34 insns) */
void f_114d3270(void) {
  FTRACE(0x114d3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3270 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3271 mov ebp, esp */
  EBP = (ESP);
  /* 114d3273 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3274 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3278 jbe 0x114d327e */
  if ((C.cf||C.zf)) goto L_114d327e;
  /* 114d327a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d327c jmp 0x114d32c3 */
  goto L_114d32c3;
L_114d327e:;
  /* 114d327e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3282 ja 0x114d3295 */
  if ((!C.cf&&!C.zf)) goto L_114d3295;
  /* 114d3284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3287 push eax */
  push32((uint32_t)(EAX));
  /* 114d3288 call 0x114d32d0 */
  push32(0x114d328du); f_114d32d0();
  /* 114d328d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3290 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d3293 jmp 0x114d329c */
  goto L_114d329c;
L_114d3295:;
  /* 114d3295 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d329c:;
  /* 114d329c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d32a0 jne 0x114d32a8 */
  if (!C.zf) goto L_114d32a8;
  /* 114d32a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d32a6 jne 0x114d32ad */
  if (!C.zf) goto L_114d32ad;
L_114d32a8:;
  /* 114d32a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d32ab jmp 0x114d32c3 */
  goto L_114d32c3;
L_114d32ad:;
  /* 114d32ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d32b0 push ecx */
  push32((uint32_t)(ECX));
  /* 114d32b1 call 0x114d3220 */
  push32(0x114d32b6u); f_114d3220();
  /* 114d32b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d32b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d32bb jne 0x114d32c1 */
  if (!C.zf) goto L_114d32c1;
  /* 114d32bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d32bf jmp 0x114d32c3 */
  goto L_114d32c3;
L_114d32c1:;
  /* 114d32c1 jmp 0x114d327e */
  goto L_114d327e;
L_114d32c3:;
  /* 114d32c3 mov esp, ebp */
  ESP = (EBP);
  /* 114d32c5 pop ebp */
  EBP = (pop32());
  /* 114d32c6 ret  */
  ESPCHK(0x114d3270u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x114d32d0 (109 bytes, 37 insns) */
void f_114d32d0(void) {
  FTRACE(0x114d32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d32d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d32d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d32d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d32d7 cmp eax, dword ptr [0x114fd294] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd294))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d32dd ja 0x114d330d */
  if ((!C.cf&&!C.zf)) goto L_114d330d;
  /* 114d32df push 9 */
  push32((uint32_t)(0x9u));
  /* 114d32e1 call 0x114cb800 */
  push32(0x114d32e6u); f_114cb800();
  /* 114d32e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d32e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d32ec push ecx */
  push32((uint32_t)(ECX));
  /* 114d32ed call 0x114d3e10 */
  push32(0x114d32f2u); f_114d3e10();
  /* 114d32f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d32f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d32f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d32fa call 0x114cb8a0 */
  push32(0x114d32ffu); f_114cb8a0();
  /* 114d32ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3302 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3306 je 0x114d330d */
  if (C.zf) goto L_114d330d;
  /* 114d3308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d330b jmp 0x114d3339 */
  goto L_114d3339;
L_114d330d:;
  /* 114d330d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3311 jne 0x114d331a */
  if (!C.zf) goto L_114d331a;
  /* 114d3313 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_114d331a:;
  /* 114d331a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d331d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3320 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 114d3323 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114d3326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3329 push eax */
  push32((uint32_t)(EAX));
  /* 114d332a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d332c mov ecx, dword ptr [0x11500ae8] */
  ECX = (r32((uint32_t)(0x11500ae8)));
  /* 114d3332 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3333 call dword ptr [0x1150139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150139c))), 0x114d3339u);
L_114d3339:;
  /* 114d3339 mov esp, ebp */
  ESP = (EBP);
  /* 114d333b pop ebp */
  EBP = (pop32());
  /* 114d333c ret  */
  ESPCHK(0x114d32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x114d3340 (10 bytes, 5 insns) */
void f_114d3340(void) {
  FTRACE(0x114d3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3340 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3341 mov ebp, esp */
  EBP = (ESP);
  /* 114d3343 mov eax, 1 */
  EAX = (0x1u);
  /* 114d3348 pop ebp */
  EBP = (pop32());
  /* 114d3349 ret  */
  ESPCHK(0x114d3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x114d3350 (173 bytes, 59 insns) */
void f_114d3350(void) {
  FTRACE(0x114d3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3350 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3351 mov ebp, esp */
  EBP = (ESP);
  /* 114d3353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3356 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d335a jbe 0x114d3363 */
  if ((C.cf||C.zf)) goto L_114d3363;
  /* 114d335c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d335e jmp 0x114d33f9 */
  goto L_114d33f9;
L_114d3363:;
  /* 114d3363 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d3365 call 0x114cb800 */
  push32(0x114d336au); f_114cb800();
  /* 114d336a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d336d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3370 push eax */
  push32((uint32_t)(EAX));
  /* 114d3371 call 0x114d3780 */
  push32(0x114d3376u); f_114d3780();
  /* 114d3376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3379 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d337c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3380 je 0x114d33c1 */
  if (C.zf) goto L_114d33c1;
  /* 114d3382 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d3389 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d338c cmp ecx, dword ptr [0x114fd294] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd294))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3392 ja 0x114d33b2 */
  if ((!C.cf&&!C.zf)) goto L_114d33b2;
  /* 114d3394 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3397 push edx */
  push32((uint32_t)(EDX));
  /* 114d3398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d339b push eax */
  push32((uint32_t)(EAX));
  /* 114d339c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d339f push ecx */
  push32((uint32_t)(ECX));
  /* 114d33a0 call 0x114d4650 */
  push32(0x114d33a5u); f_114d4650();
  /* 114d33a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d33a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d33aa je 0x114d33b2 */
  if (C.zf) goto L_114d33b2;
  /* 114d33ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d33af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d33b2:;
  /* 114d33b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d33b4 call 0x114cb8a0 */
  push32(0x114d33b9u); f_114cb8a0();
  /* 114d33b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d33bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d33bf jmp 0x114d33f9 */
  goto L_114d33f9;
L_114d33c1:;
  /* 114d33c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d33c3 call 0x114cb8a0 */
  push32(0x114d33c8u); f_114cb8a0();
  /* 114d33c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d33cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d33cf jne 0x114d33d8 */
  if (!C.zf) goto L_114d33d8;
  /* 114d33d1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_114d33d8:;
  /* 114d33d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d33db add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d33de and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 114d33e0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114d33e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d33e6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d33e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d33ea push edx */
  push32((uint32_t)(EDX));
  /* 114d33eb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 114d33ed mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d33f2 push eax */
  push32((uint32_t)(EAX));
  /* 114d33f3 call dword ptr [0x1150138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150138c))), 0x114d33f9u);
L_114d33f9:;
  /* 114d33f9 mov esp, ebp */
  ESP = (EBP);
  /* 114d33fb pop ebp */
  EBP = (pop32());
  /* 114d33fc ret  */
  ESPCHK(0x114d3350u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x114d3400 (490 bytes, 165 insns) */
void f_114d3400(void) {
  FTRACE(0x114d3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3400 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3401 mov ebp, esp */
  EBP = (ESP);
  /* 114d3403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3406 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d340a jne 0x114d341d */
  if (!C.zf) goto L_114d341d;
  /* 114d340c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d340f push eax */
  push32((uint32_t)(EAX));
  /* 114d3410 call 0x114d3250 */
  push32(0x114d3415u); f_114d3250();
  /* 114d3415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3418 jmp 0x114d35e6 */
  goto L_114d35e6;
L_114d341d:;
  /* 114d341d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3421 jne 0x114d3436 */
  if (!C.zf) goto L_114d3436;
  /* 114d3423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3426 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3427 call 0x114d35f0 */
  push32(0x114d342cu); f_114d35f0();
  /* 114d342c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d342f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3431 jmp 0x114d35e6 */
  goto L_114d35e6;
L_114d3436:;
  /* 114d3436 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d343d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3441 ja 0x114d35b9 */
  if ((!C.cf&&!C.zf)) goto L_114d35b9;
  /* 114d3447 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d3449 call 0x114cb800 */
  push32(0x114d344eu); f_114cb800();
  /* 114d344e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3454 push edx */
  push32((uint32_t)(EDX));
  /* 114d3455 call 0x114d3780 */
  push32(0x114d345au); f_114d3780();
  /* 114d345a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d345d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d3460 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3464 je 0x114d357c */
  if (C.zf) goto L_114d357c;
  /* 114d346a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d346d cmp eax, dword ptr [0x114fd294] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd294))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3473 ja 0x114d34f0 */
  if ((!C.cf&&!C.zf)) goto L_114d34f0;
  /* 114d3475 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3478 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d347c push edx */
  push32((uint32_t)(EDX));
  /* 114d347d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d3480 push eax */
  push32((uint32_t)(EAX));
  /* 114d3481 call 0x114d4650 */
  push32(0x114d3486u); f_114d4650();
  /* 114d3486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d348b je 0x114d3495 */
  if (C.zf) goto L_114d3495;
  /* 114d348d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3490 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d3493 jmp 0x114d34f0 */
  goto L_114d34f0;
L_114d3495:;
  /* 114d3495 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3498 push edx */
  push32((uint32_t)(EDX));
  /* 114d3499 call 0x114d3e10 */
  push32(0x114d349eu); f_114d3e10();
  /* 114d349e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d34a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d34a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d34a8 je 0x114d34f0 */
  if (C.zf) goto L_114d34f0;
  /* 114d34aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d34ad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 114d34b0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d34b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d34b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d34b9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d34bc jae 0x114d34c6 */
  if (!C.cf) goto L_114d34c6;
  /* 114d34be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d34c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d34c4 jmp 0x114d34cc */
  goto L_114d34cc;
L_114d34c6:;
  /* 114d34c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d34c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114d34cc:;
  /* 114d34cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d34cf push edx */
  push32((uint32_t)(EDX));
  /* 114d34d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d34d3 push eax */
  push32((uint32_t)(EAX));
  /* 114d34d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d34d7 push ecx */
  push32((uint32_t)(ECX));
  /* 114d34d8 call 0x114d7370 */
  push32(0x114d34ddu); f_114d7370();
  /* 114d34dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d34e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d34e3 push edx */
  push32((uint32_t)(EDX));
  /* 114d34e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d34e7 push eax */
  push32((uint32_t)(EAX));
  /* 114d34e8 call 0x114d3840 */
  push32(0x114d34edu); f_114d3840();
  /* 114d34ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d34f0:;
  /* 114d34f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d34f4 jne 0x114d3570 */
  if (!C.zf) goto L_114d3570;
  /* 114d34f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d34fa jne 0x114d3503 */
  if (!C.zf) goto L_114d3503;
  /* 114d34fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_114d3503:;
  /* 114d3503 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3506 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3509 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 114d350c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114d350f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3512 push edx */
  push32((uint32_t)(EDX));
  /* 114d3513 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d3515 mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d351a push eax */
  push32((uint32_t)(EAX));
  /* 114d351b call dword ptr [0x1150139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150139c))), 0x114d3521u);
  /* 114d3521 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d3524 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3528 je 0x114d3570 */
  if (C.zf) goto L_114d3570;
  /* 114d352a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d352d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 114d3530 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3533 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d3536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3539 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d353c jae 0x114d3546 */
  if (!C.cf) goto L_114d3546;
  /* 114d353e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3541 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d3544 jmp 0x114d354c */
  goto L_114d354c;
L_114d3546:;
  /* 114d3546 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3549 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_114d354c:;
  /* 114d354c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d354f push eax */
  push32((uint32_t)(EAX));
  /* 114d3550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3553 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3554 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d3557 push edx */
  push32((uint32_t)(EDX));
  /* 114d3558 call 0x114d7370 */
  push32(0x114d355du); f_114d7370();
  /* 114d355d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3563 push eax */
  push32((uint32_t)(EAX));
  /* 114d3564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d3567 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3568 call 0x114d3840 */
  push32(0x114d356du); f_114d3840();
  /* 114d356d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d3570:;
  /* 114d3570 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d3572 call 0x114cb8a0 */
  push32(0x114d3577u); f_114cb8a0();
  /* 114d3577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d357a jmp 0x114d35b9 */
  goto L_114d35b9;
L_114d357c:;
  /* 114d357c push 9 */
  push32((uint32_t)(0x9u));
  /* 114d357e call 0x114cb8a0 */
  push32(0x114d3583u); f_114cb8a0();
  /* 114d3583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3586 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d358a jne 0x114d3593 */
  if (!C.zf) goto L_114d3593;
  /* 114d358c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_114d3593:;
  /* 114d3593 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3596 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3599 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 114d359c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 114d359f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d35a2 push eax */
  push32((uint32_t)(EAX));
  /* 114d35a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d35a6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d35a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d35a9 mov edx, dword ptr [0x11500ae8] */
  EDX = (r32((uint32_t)(0x11500ae8)));
  /* 114d35af push edx */
  push32((uint32_t)(EDX));
  /* 114d35b0 call dword ptr [0x1150138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150138c))), 0x114d35b6u);
  /* 114d35b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d35b9:;
  /* 114d35b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d35bd jne 0x114d35c8 */
  if (!C.zf) goto L_114d35c8;
  /* 114d35bf cmp dword ptr [0x114ff320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d35c6 jne 0x114d35cd */
  if (!C.zf) goto L_114d35cd;
L_114d35c8:;
  /* 114d35c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d35cb jmp 0x114d35e6 */
  goto L_114d35e6;
L_114d35cd:;
  /* 114d35cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d35d0 push eax */
  push32((uint32_t)(EAX));
  /* 114d35d1 call 0x114d3220 */
  push32(0x114d35d6u); f_114d3220();
  /* 114d35d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d35d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d35db jne 0x114d35e1 */
  if (!C.zf) goto L_114d35e1;
  /* 114d35dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d35df jmp 0x114d35e6 */
  goto L_114d35e6;
L_114d35e1:;
  /* 114d35e1 jmp 0x114d3436 */
  goto L_114d3436;
L_114d35e6:;
  /* 114d35e6 mov esp, ebp */
  ESP = (EBP);
  /* 114d35e8 pop ebp */
  EBP = (pop32());
  /* 114d35e9 ret  */
  ESPCHK(0x114d3400u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x114d35f0 (104 bytes, 38 insns) */
void f_114d35f0(void) {
  FTRACE(0x114d35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d35f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d35f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d35f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d35f8 jne 0x114d35fc */
  if (!C.zf) goto L_114d35fc;
  /* 114d35fa jmp 0x114d3654 */
  goto L_114d3654;
L_114d35fc:;
  /* 114d35fc push 9 */
  push32((uint32_t)(0x9u));
  /* 114d35fe call 0x114cb800 */
  push32(0x114d3603u); f_114cb800();
  /* 114d3603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3609 push eax */
  push32((uint32_t)(EAX));
  /* 114d360a call 0x114d3780 */
  push32(0x114d360fu); f_114d3780();
  /* 114d360f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3612 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d3615 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3619 je 0x114d3637 */
  if (C.zf) goto L_114d3637;
  /* 114d361b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d361e push ecx */
  push32((uint32_t)(ECX));
  /* 114d361f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3622 push edx */
  push32((uint32_t)(EDX));
  /* 114d3623 call 0x114d3840 */
  push32(0x114d3628u); f_114d3840();
  /* 114d3628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d362b push 9 */
  push32((uint32_t)(0x9u));
  /* 114d362d call 0x114cb8a0 */
  push32(0x114d3632u); f_114cb8a0();
  /* 114d3632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3635 jmp 0x114d3654 */
  goto L_114d3654;
L_114d3637:;
  /* 114d3637 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d3639 call 0x114cb8a0 */
  push32(0x114d363eu); f_114cb8a0();
  /* 114d363e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3644 push eax */
  push32((uint32_t)(EAX));
  /* 114d3645 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d3647 mov ecx, dword ptr [0x11500ae8] */
  ECX = (r32((uint32_t)(0x11500ae8)));
  /* 114d364d push ecx */
  push32((uint32_t)(ECX));
  /* 114d364e call dword ptr [0x115013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a8))), 0x114d3654u);
L_114d3654:;
  /* 114d3654 mov esp, ebp */
  ESP = (EBP);
  /* 114d3656 pop ebp */
  EBP = (pop32());
  /* 114d3657 ret  */
  ESPCHK(0x114d35f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013660 @ 0x114d3660 (116 bytes, 34 insns) */
void f_114d3660(void) {
  FTRACE(0x114d3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3660 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3661 mov ebp, esp */
  EBP = (ESP);
  /* 114d3663 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3664 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 114d366b push 9 */
  push32((uint32_t)(0x9u));
  /* 114d366d call 0x114cb800 */
  push32(0x114d3672u); f_114cb800();
  /* 114d3672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3675 call 0x114d4d70 */
  push32(0x114d367au); f_114d4d70();
  /* 114d367a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d367c jge 0x114d3685 */
  if ((C.sf==C.of)) goto L_114d3685;
  /* 114d367e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_114d3685:;
  /* 114d3685 push 9 */
  push32((uint32_t)(0x9u));
  /* 114d3687 call 0x114cb8a0 */
  push32(0x114d368cu); f_114cb8a0();
  /* 114d368c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d368f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d3691 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d3693 mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d3698 push eax */
  push32((uint32_t)(EAX));
  /* 114d3699 call dword ptr [0x11501428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501428))), 0x114d369fu);
  /* 114d369f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d36a1 jne 0x114d36cd */
  if (!C.zf) goto L_114d36cd;
  /* 114d36a3 call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114d36a9u);
  /* 114d36a9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d36ac jne 0x114d36c6 */
  if (!C.zf) goto L_114d36c6;
  /* 114d36ae call 0x114d7760 */
  push32(0x114d36b3u); f_114d7760();
  /* 114d36b3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 114d36b9 call 0x114d7750 */
  push32(0x114d36beu); f_114d7750();
  /* 114d36be mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 114d36c4 jmp 0x114d36cd */
  goto L_114d36cd;
L_114d36c6:;
  /* 114d36c6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_114d36cd:;
  /* 114d36cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d36d0 mov esp, ebp */
  ESP = (EBP);
  /* 114d36d2 pop ebp */
  EBP = (pop32());
  /* 114d36d3 ret  */
  ESPCHK(0x114d3660u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x114d36e0 (10 bytes, 5 insns) */
void f_114d36e0(void) {
  FTRACE(0x114d36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d36e1 mov ebp, esp */
  EBP = (ESP);
  /* 114d36e3 call 0x114d3660 */
  push32(0x114d36e8u); f_114d3660();
  /* 114d36e8 pop ebp */
  EBP = (pop32());
  /* 114d36e9 ret  */
  ESPCHK(0x114d36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136f0 @ 0x114d36f0 (10 bytes, 5 insns) */
void f_114d36f0(void) {
  FTRACE(0x114d36f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d36f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d36f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d36f3 mov eax, dword ptr [0x114fd294] */
  EAX = (r32((uint32_t)(0x114fd294)));
  /* 114d36f8 pop ebp */
  EBP = (pop32());
  /* 114d36f9 ret  */
  ESPCHK(0x114d36f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013700 @ 0x114d3700 (31 bytes, 11 insns) */
void f_114d3700(void) {
  FTRACE(0x114d3700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3700 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3701 mov ebp, esp */
  EBP = (ESP);
  /* 114d3703 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d370a jbe 0x114d3710 */
  if ((C.cf||C.zf)) goto L_114d3710;
  /* 114d370c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d370e jmp 0x114d371d */
  goto L_114d371d;
L_114d3710:;
  /* 114d3710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3713 mov dword ptr [0x114fd294], eax */
  w32((uint32_t)(0x114fd294), (EAX));
  /* 114d3718 mov eax, 1 */
  EAX = (0x1u);
L_114d371d:;
  /* 114d371d pop ebp */
  EBP = (pop32());
  /* 114d371e ret  */
  ESPCHK(0x114d3700u, _esp0);
  ESP += 4; return;
}

/* FUN_10013720 @ 0x114d3720 (89 bytes, 20 insns) */
void f_114d3720(void) {
  FTRACE(0x114d3720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3720 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3721 mov ebp, esp */
  EBP = (ESP);
  /* 114d3723 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 114d3728 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d372a mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d372f push eax */
  push32((uint32_t)(EAX));
  /* 114d3730 call dword ptr [0x1150139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150139c))), 0x114d3736u);
  /* 114d3736 mov dword ptr [0x11500ae4], eax */
  w32((uint32_t)(0x11500ae4), (EAX));
  /* 114d373b cmp dword ptr [0x11500ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3742 jne 0x114d3748 */
  if (!C.zf) goto L_114d3748;
  /* 114d3744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3746 jmp 0x114d3777 */
  goto L_114d3777;
L_114d3748:;
  /* 114d3748 mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d374e mov dword ptr [0x11500ad8], ecx */
  w32((uint32_t)(0x11500ad8), (ECX));
  /* 114d3754 mov dword ptr [0x11500adc], 0 */
  w32((uint32_t)(0x11500adc), (0x0u));
  /* 114d375e mov dword ptr [0x11500ae0], 0 */
  w32((uint32_t)(0x11500ae0), (0x0u));
  /* 114d3768 mov dword ptr [0x11500ac4], 0x10 */
  w32((uint32_t)(0x11500ac4), (0x10u));
  /* 114d3772 mov eax, 1 */
  EAX = (0x1u);
L_114d3777:;
  /* 114d3777 pop ebp */
  EBP = (pop32());
  /* 114d3778 ret  */
  ESPCHK(0x114d3720u, _esp0);
  ESP += 4; return;
}

/* FUN_10013780 @ 0x114d3780 (85 bytes, 29 insns) */
void f_114d3780(void) {
  FTRACE(0x114d3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3780 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3781 mov ebp, esp */
  EBP = (ESP);
  /* 114d3783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3786 mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d378b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d378e mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d3794 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3796 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d3799 mov edx, dword ptr [0x11500ae4] */
  EDX = (r32((uint32_t)(0x11500ae4)));
  /* 114d379f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114d37a2:;
  /* 114d37a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d37a5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d37a8 jae 0x114d37cf */
  if (!C.cf) goto L_114d37cf;
  /* 114d37aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d37ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d37b0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d37b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d37b6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d37bd jae 0x114d37c4 */
  if (!C.cf) goto L_114d37c4;
  /* 114d37bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d37c2 jmp 0x114d37d1 */
  goto L_114d37d1;
L_114d37c4:;
  /* 114d37c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d37c7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d37ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d37cd jmp 0x114d37a2 */
  goto L_114d37a2;
L_114d37cf:;
  /* 114d37cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d37d1:;
  /* 114d37d1 mov esp, ebp */
  ESP = (EBP);
  /* 114d37d3 pop ebp */
  EBP = (pop32());
  /* 114d37d4 ret  */
  ESPCHK(0x114d3780u, _esp0);
  ESP += 4; return;
}

/* FUN_100137e0 @ 0x114d37e0 (95 bytes, 33 insns) */
void f_114d37e0(void) {
  FTRACE(0x114d37e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d37e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d37e1 mov ebp, esp */
  EBP = (ESP);
  /* 114d37e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d37e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d37e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d37ec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d37ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d37f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d37f5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 114d37f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d37fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d3800 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3803 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3805 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3808 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d380b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d380d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d380f jne 0x114d3831 */
  if (!C.zf) goto L_114d3831;
  /* 114d3811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d3814 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 114d3817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d3819 jne 0x114d3831 */
  if (!C.zf) goto L_114d3831;
  /* 114d381b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d381e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d3824 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d3826 je 0x114d3831 */
  if (C.zf) goto L_114d3831;
  /* 114d3828 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 114d382f jmp 0x114d3838 */
  goto L_114d3838;
L_114d3831:;
  /* 114d3831 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_114d3838:;
  /* 114d3838 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d383b mov esp, ebp */
  ESP = (EBP);
  /* 114d383d pop ebp */
  EBP = (pop32());
  /* 114d383e ret  */
  ESPCHK(0x114d37e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013840 @ 0x114d3840 (1485 bytes, 453 insns) */
void f_114d3840(void) {
  FTRACE(0x114d3840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3840 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3841 mov ebp, esp */
  EBP = (ESP);
  /* 114d3843 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3849 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d384c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 114d384f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3852 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d3855 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3858 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d385b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d385e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 114d3861 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d3864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3867 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d386d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3870 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 114d3877 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d387a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d387d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3880 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d3883 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3886 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d3888 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d388b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 114d388e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3891 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3894 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 114d3897 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d389a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d389c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d389f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d38a2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 114d38a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d38a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d38ab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d38ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d38b0 jne 0x114d39d8 */
  if (!C.zf) goto L_114d39d8;
  /* 114d38b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d38b9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114d38bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d38bf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114d38c2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d38c6 jbe 0x114d38cf */
  if ((C.cf||C.zf)) goto L_114d38cf;
  /* 114d38c8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_114d38cf:;
  /* 114d38cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d38d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d38d5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d38d8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d38db jne 0x114d39b1 */
  if (!C.zf) goto L_114d39b1;
  /* 114d38e1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d38e5 jae 0x114d3946 */
  if (!C.cf) goto L_114d3946;
  /* 114d38e7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d38ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d38ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d38f1 not eax */
  EAX = (~(EAX));
  /* 114d38f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d38f6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d38f9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 114d38fd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d38ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3902 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3905 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 114d3909 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d390c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d390f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 114d3912 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d3915 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3918 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d391b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 114d391e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3921 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3924 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d3928 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d392a jne 0x114d3944 */
  if (!C.zf) goto L_114d3944;
  /* 114d392c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d3931 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3934 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3936 not eax */
  EAX = (~(EAX));
  /* 114d3938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d393b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d393d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d393f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3942 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d3944:;
  /* 114d3944 jmp 0x114d39b1 */
  goto L_114d39b1;
L_114d3946:;
  /* 114d3946 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3949 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d394c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d3951 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3953 not edx */
  EDX = (~(EDX));
  /* 114d3955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3958 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d395b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 114d3962 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3967 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d396a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 114d3971 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3974 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3977 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d397a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d397d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3980 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3983 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 114d3986 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3989 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d398c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d3990 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d3992 jne 0x114d39b1 */
  if (!C.zf) goto L_114d39b1;
  /* 114d3994 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3997 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d399a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d399f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d39a1 not edx */
  EDX = (~(EDX));
  /* 114d39a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d39a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d39a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d39ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d39ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_114d39b1:;
  /* 114d39b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d39b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d39b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d39ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d39bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d39c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d39c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d39c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d39c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d39cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d39cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d39d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d39d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_114d39d8:;
  /* 114d39d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d39db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114d39de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d39e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d39e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d39e8 jbe 0x114d39f1 */
  if ((C.cf||C.zf)) goto L_114d39f1;
  /* 114d39ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_114d39f1:;
  /* 114d39f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d39f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d39f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d39f9 jne 0x114d3b55 */
  if (!C.zf) goto L_114d3b55;
  /* 114d39ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3a02 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3a05 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 114d3a08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d3a0b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114d3a0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3a11 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114d3a14 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3a18 jbe 0x114d3a21 */
  if ((C.cf||C.zf)) goto L_114d3a21;
  /* 114d3a1a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_114d3a21:;
  /* 114d3a21 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3a24 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3a27 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 114d3a2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3a2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114d3a30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3a33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 114d3a36 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3a3a jbe 0x114d3a43 */
  if ((C.cf||C.zf)) goto L_114d3a43;
  /* 114d3a3c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_114d3a43:;
  /* 114d3a43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d3a46 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3a49 je 0x114d3b4f */
  if (C.zf) goto L_114d3b4f;
  /* 114d3a4f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3a52 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3a55 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d3a58 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3a5b jne 0x114d3b31 */
  if (!C.zf) goto L_114d3b31;
  /* 114d3a61 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3a65 jae 0x114d3ac6 */
  if (!C.cf) goto L_114d3ac6;
  /* 114d3a67 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d3a6c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d3a6f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3a71 not edx */
  EDX = (~(EDX));
  /* 114d3a73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3a76 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3a79 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 114d3a7d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3a7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3a82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3a85 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 114d3a89 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3a8c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3a8f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d3a92 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d3a95 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3a98 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3a9b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 114d3a9e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3aa1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3aa4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d3aa8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d3aaa jne 0x114d3ac4 */
  if (!C.zf) goto L_114d3ac4;
  /* 114d3aac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d3ab1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d3ab4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3ab6 not edx */
  EDX = (~(EDX));
  /* 114d3ab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3abb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d3abd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3abf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3ac2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d3ac4:;
  /* 114d3ac4 jmp 0x114d3b31 */
  goto L_114d3b31;
L_114d3ac6:;
  /* 114d3ac6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d3ac9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3acc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d3ad1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3ad3 not eax */
  EAX = (~(EAX));
  /* 114d3ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3ad8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3adb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 114d3ae2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3ae4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3ae7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3aea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 114d3af1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3af4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3af7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 114d3afa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d3afd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3b00 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3b03 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 114d3b06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3b09 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3b0c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d3b10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d3b12 jne 0x114d3b31 */
  if (!C.zf) goto L_114d3b31;
  /* 114d3b14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d3b17 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3b1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d3b1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3b21 not eax */
  EAX = (~(EAX));
  /* 114d3b23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3b26 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d3b29 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d3b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3b2e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d3b31:;
  /* 114d3b31 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3b34 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d3b37 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3b3a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d3b3d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d3b40 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3b43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d3b46 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3b49 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d3b4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_114d3b4f:;
  /* 114d3b4f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3b52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_114d3b55:;
  /* 114d3b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d3b58 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d3b5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d3b5d jne 0x114d3b6b */
  if (!C.zf) goto L_114d3b6b;
  /* 114d3b5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d3b62 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3b65 je 0x114d3c7b */
  if (C.zf) goto L_114d3c7b;
L_114d3b6b:;
  /* 114d3b6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d3b6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d3b71 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 114d3b74 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114d3b77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3b7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d3b7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d3b80 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d3b83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3b86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d3b89 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 114d3b8c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d3b8f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3b92 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 114d3b95 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3b98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d3b9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3b9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d3ba1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3ba4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3ba7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d3baa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3bad jne 0x114d3c7b */
  if (!C.zf) goto L_114d3c7b;
  /* 114d3bb3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3bb7 jae 0x114d3c14 */
  if (!C.cf) goto L_114d3c14;
  /* 114d3bb9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3bbc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3bbf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d3bc3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3bc6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3bc9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d3bcc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d3bcf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3bd2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3bd5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 114d3bd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d3bda jne 0x114d3bf2 */
  if (!C.zf) goto L_114d3bf2;
  /* 114d3bdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d3be1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d3be4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3be9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d3beb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3bf0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d3bf2:;
  /* 114d3bf2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d3bf7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d3bfa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3bfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3bff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 114d3c06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3c08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3c0b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 114d3c12 jmp 0x114d3c7b */
  goto L_114d3c7b;
L_114d3c14:;
  /* 114d3c14 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c17 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3c1a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d3c1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c21 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3c24 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d3c27 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d3c2a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c2d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3c30 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 114d3c33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d3c35 jne 0x114d3c52 */
  if (!C.zf) goto L_114d3c52;
  /* 114d3c37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d3c3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d3c42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3c47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d3c4a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3c4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3c4f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_114d3c52:;
  /* 114d3c52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d3c55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3c58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d3c5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3c5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3c62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c65 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 114d3c6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3c71 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d3c74 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_114d3c7b:;
  /* 114d3c7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3c7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3c81 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d3c83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d3c86 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3c89 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3c8c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 114d3c8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d3c92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d3c94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d3c9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d3c9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d3c9f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3ca2 jne 0x114d3e09 */
  if (!C.zf) goto L_114d3e09;
  /* 114d3ca8 cmp dword ptr [0x11500adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3caf je 0x114d3df8 */
  if (C.zf) goto L_114d3df8;
  /* 114d3cb5 mov eax, dword ptr [0x11500ad4] */
  EAX = (r32((uint32_t)(0x11500ad4)));
  /* 114d3cba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 114d3cbd mov ecx, dword ptr [0x11500adc] */
  ECX = (r32((uint32_t)(0x11500adc)));
  /* 114d3cc3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d3cc6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3cc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114d3ccb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 114d3cd0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114d3cd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3cd8 push eax */
  push32((uint32_t)(EAX));
  /* 114d3cd9 call dword ptr [0x11501398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501398))), 0x114d3cdfu);
  /* 114d3cdf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d3ce4 mov ecx, dword ptr [0x11500ad4] */
  ECX = (r32((uint32_t)(0x11500ad4)));
  /* 114d3cea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3cec mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d3cf1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d3cf4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3cf6 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d3cfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d3cff mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d04 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d3d07 mov edx, dword ptr [0x11500ad4] */
  EDX = (r32((uint32_t)(0x11500ad4)));
  /* 114d3d0d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 114d3d18 mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d3d20 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 114d3d23 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d3d26 mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d3d2e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 114d3d31 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114d3d3a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 114d3d3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d3d40 jne 0x114d3d56 */
  if (!C.zf) goto L_114d3d56;
  /* 114d3d42 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d3d4b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 114d3d4d mov ecx, dword ptr [0x11500adc] */
  ECX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d53 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_114d3d56:;
  /* 114d3d56 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d5c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3d60 jne 0x114d3df8 */
  if (!C.zf) goto L_114d3df8;
  /* 114d3d66 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114d3d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 114d3d6d mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114d3d75 push ecx */
  push32((uint32_t)(ECX));
  /* 114d3d76 call dword ptr [0x11501398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501398))), 0x114d3d7cu);
  /* 114d3d7c mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d3d82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114d3d85 push eax */
  push32((uint32_t)(EAX));
  /* 114d3d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d3d88 mov ecx, dword ptr [0x11500ae8] */
  ECX = (r32((uint32_t)(0x11500ae8)));
  /* 114d3d8e push ecx */
  push32((uint32_t)(ECX));
  /* 114d3d8f call dword ptr [0x115013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a8))), 0x114d3d95u);
  /* 114d3d95 mov edx, dword ptr [0x11500ae0] */
  EDX = (r32((uint32_t)(0x11500ae0)));
  /* 114d3d9b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d3d9e mov eax, dword ptr [0x11500ae4] */
  EAX = (r32((uint32_t)(0x11500ae4)));
  /* 114d3da3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3da5 mov ecx, dword ptr [0x11500adc] */
  ECX = (r32((uint32_t)(0x11500adc)));
  /* 114d3dab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3dae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3db0 push eax */
  push32((uint32_t)(EAX));
  /* 114d3db1 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d3db7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3dba push edx */
  push32((uint32_t)(EDX));
  /* 114d3dbb mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d3dc0 push eax */
  push32((uint32_t)(EAX));
  /* 114d3dc1 call 0x114d2e90 */
  push32(0x114d3dc6u); f_114d2e90();
  /* 114d3dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3dc9 mov ecx, dword ptr [0x11500ae0] */
  ECX = (r32((uint32_t)(0x11500ae0)));
  /* 114d3dcf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3dd2 mov dword ptr [0x11500ae0], ecx */
  w32((uint32_t)(0x11500ae0), (ECX));
  /* 114d3dd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3ddb cmp edx, dword ptr [0x11500adc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11500adc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3de1 jbe 0x114d3dec */
  if ((C.cf||C.zf)) goto L_114d3dec;
  /* 114d3de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3de6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3de9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114d3dec:;
  /* 114d3dec mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d3df2 mov dword ptr [0x11500ad8], ecx */
  w32((uint32_t)(0x11500ad8), (ECX));
L_114d3df8:;
  /* 114d3df8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3dfb mov dword ptr [0x11500adc], edx */
  w32((uint32_t)(0x11500adc), (EDX));
  /* 114d3e01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d3e04 mov dword ptr [0x11500ad4], eax */
  w32((uint32_t)(0x11500ad4), (EAX));
L_114d3e09:;
  /* 114d3e09 mov esp, ebp */
  ESP = (EBP);
  /* 114d3e0b pop ebp */
  EBP = (pop32());
  /* 114d3e0c ret  */
  ESPCHK(0x114d3840u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e10 @ 0x114d3e10 (1334 bytes, 427 insns) */
void f_114d3e10(void) {
  FTRACE(0x114d3e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d3e10 push ebp */
  push32((uint32_t)(EBP));
  /* 114d3e11 mov ebp, esp */
  EBP = (ESP);
  /* 114d3e13 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3e16 push esi */
  push32((uint32_t)(ESI));
  /* 114d3e17 mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d3e1c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d3e1f mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d3e25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3e27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 114d3e2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d3e2d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3e30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 114d3e33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 114d3e36 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d3e39 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114d3e3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3e3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d3e42 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3e46 jge 0x114d3e5c */
  if ((C.sf==C.of)) goto L_114d3e5c;
  /* 114d3e48 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d3e4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d3e4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d3e50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114d3e53 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 114d3e5a jmp 0x114d3e71 */
  goto L_114d3e71;
L_114d3e5c:;
  /* 114d3e5c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114d3e63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d3e66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d3e69 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d3e6c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d3e6e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_114d3e71:;
  /* 114d3e71 mov ecx, dword ptr [0x11500ad8] */
  ECX = (r32((uint32_t)(0x11500ad8)));
  /* 114d3e77 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_114d3e7a:;
  /* 114d3e7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3e7d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3e80 jae 0x114d3ea6 */
  if (!C.cf) goto L_114d3ea6;
  /* 114d3e82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3e85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3e88 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 114d3e8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3e8d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3e90 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 114d3e93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d3e95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d3e97 je 0x114d3e9b */
  if (C.zf) goto L_114d3e9b;
  /* 114d3e99 jmp 0x114d3ea6 */
  goto L_114d3ea6;
L_114d3e9b:;
  /* 114d3e9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3e9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3ea1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114d3ea4 jmp 0x114d3e7a */
  goto L_114d3e7a;
L_114d3ea6:;
  /* 114d3ea6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3ea9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3eac jne 0x114d3f8d */
  if (!C.zf) goto L_114d3f8d;
  /* 114d3eb2 mov eax, dword ptr [0x11500ae4] */
  EAX = (r32((uint32_t)(0x11500ae4)));
  /* 114d3eb7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_114d3eba:;
  /* 114d3eba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3ebd cmp ecx, dword ptr [0x11500ad8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ad8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3ec3 jae 0x114d3ee9 */
  if (!C.cf) goto L_114d3ee9;
  /* 114d3ec5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3ec8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3ecb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 114d3ecd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3ed0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3ed3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 114d3ed6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d3eda je 0x114d3ede */
  if (C.zf) goto L_114d3ede;
  /* 114d3edc jmp 0x114d3ee9 */
  goto L_114d3ee9;
L_114d3ede:;
  /* 114d3ede mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3ee1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3ee4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d3ee7 jmp 0x114d3eba */
  goto L_114d3eba;
L_114d3ee9:;
  /* 114d3ee9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3eec cmp ecx, dword ptr [0x11500ad8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ad8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3ef2 jne 0x114d3f8d */
  if (!C.zf) goto L_114d3f8d;
L_114d3ef8:;
  /* 114d3ef8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3efb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3efe jae 0x114d3f16 */
  if (!C.cf) goto L_114d3f16;
  /* 114d3f00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f07 je 0x114d3f0b */
  if (C.zf) goto L_114d3f0b;
  /* 114d3f09 jmp 0x114d3f16 */
  goto L_114d3f16;
L_114d3f0b:;
  /* 114d3f0b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3f11 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114d3f14 jmp 0x114d3ef8 */
  goto L_114d3ef8;
L_114d3f16:;
  /* 114d3f16 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f19 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f1c jne 0x114d3f67 */
  if (!C.zf) goto L_114d3f67;
  /* 114d3f1e mov eax, dword ptr [0x11500ae4] */
  EAX = (r32((uint32_t)(0x11500ae4)));
  /* 114d3f23 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_114d3f26:;
  /* 114d3f26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f29 cmp ecx, dword ptr [0x11500ad8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ad8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f2f jae 0x114d3f47 */
  if (!C.cf) goto L_114d3f47;
  /* 114d3f31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f34 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f38 je 0x114d3f3c */
  if (C.zf) goto L_114d3f3c;
  /* 114d3f3a jmp 0x114d3f47 */
  goto L_114d3f47;
L_114d3f3c:;
  /* 114d3f3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f3f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3f42 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d3f45 jmp 0x114d3f26 */
  goto L_114d3f26;
L_114d3f47:;
  /* 114d3f47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f4a cmp ecx, dword ptr [0x11500ad8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ad8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f50 jne 0x114d3f67 */
  if (!C.zf) goto L_114d3f67;
  /* 114d3f52 call 0x114d4350 */
  push32(0x114d3f57u); f_114d4350();
  /* 114d3f57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d3f5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f5e jne 0x114d3f67 */
  if (!C.zf) goto L_114d3f67;
  /* 114d3f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3f62 jmp 0x114d4341 */
  goto L_114d4341;
L_114d3f67:;
  /* 114d3f67 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f6a push edx */
  push32((uint32_t)(EDX));
  /* 114d3f6b call 0x114d4460 */
  push32(0x114d3f70u); f_114d4460();
  /* 114d3f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d3f73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f76 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114d3f79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d3f7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d3f81 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3f84 jne 0x114d3f8d */
  if (!C.zf) goto L_114d3f8d;
  /* 114d3f86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d3f88 jmp 0x114d4341 */
  goto L_114d4341;
L_114d3f8d:;
  /* 114d3f8d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f90 mov dword ptr [0x11500ad8], edx */
  w32((uint32_t)(0x11500ad8), (EDX));
  /* 114d3f96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d3f99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d3f9c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 114d3f9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d3fa2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d3fa4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 114d3fa7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d3fab je 0x114d3fd0 */
  if (C.zf) goto L_114d3fd0;
  /* 114d3fad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3fb0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d3fb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3fb6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 114d3fba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3fbd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d3fc0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3fc3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 114d3fca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 114d3fcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d3fce jne 0x114d4005 */
  if (!C.zf) goto L_114d4005;
L_114d3fd0:;
  /* 114d3fd0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_114d3fd7:;
  /* 114d3fd7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3fda mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d3fdd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d3fe0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 114d3fe4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3fe7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d3fea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 114d3fed and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 114d3ff4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 114d3ff6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d3ff8 jne 0x114d4005 */
  if (!C.zf) goto L_114d4005;
  /* 114d3ffa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d3ffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4000 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 114d4003 jmp 0x114d3fd7 */
  goto L_114d3fd7;
L_114d4005:;
  /* 114d4005 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4008 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d400e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4011 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 114d4018 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d401b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114d4022 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4025 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4028 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d402b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 114d402f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d4032 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4036 jne 0x114d4052 */
  if (!C.zf) goto L_114d4052;
  /* 114d4038 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 114d403f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4042 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4045 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d4048 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 114d404f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_114d4052:;
  /* 114d4052 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4056 jl 0x114d406b */
  if ((C.sf!=C.of)) goto L_114d406b;
  /* 114d4058 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d405b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d405d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114d4060 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4063 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4066 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114d4069 jmp 0x114d4052 */
  goto L_114d4052;
L_114d406b:;
  /* 114d406b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d406e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4071 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 114d4075 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d4078 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d407b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d407d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4080 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d4083 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d4086 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 114d4089 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d408c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d408f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4093 jle 0x114d409c */
  if ((C.zf||C.sf!=C.of)) goto L_114d409c;
  /* 114d4095 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_114d409c:;
  /* 114d409c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d409f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d40a2 je 0x114d42c0 */
  if (C.zf) goto L_114d42c0;
  /* 114d40a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d40ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d40ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d40b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d40b4 jne 0x114d418a */
  if (!C.zf) goto L_114d418a;
  /* 114d40ba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d40be jge 0x114d411f */
  if ((C.sf==C.of)) goto L_114d411f;
  /* 114d40c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d40c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d40c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d40ca not eax */
  EAX = (~(EAX));
  /* 114d40cc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d40cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d40d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 114d40d6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d40d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d40db mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d40de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 114d40e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d40e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d40e8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 114d40eb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d40ee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d40f1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d40f4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 114d40f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d40fa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d40fd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d4101 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d4103 jne 0x114d411d */
  if (!C.zf) goto L_114d411d;
  /* 114d4105 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d410a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d410d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d410f not eax */
  EAX = (~(EAX));
  /* 114d4111 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4114 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d4116 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d4118 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d411b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d411d:;
  /* 114d411d jmp 0x114d418a */
  goto L_114d418a;
L_114d411f:;
  /* 114d411f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4122 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4125 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d412a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d412c not edx */
  EDX = (~(EDX));
  /* 114d412e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4131 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4134 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 114d413b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d413d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4140 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4143 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 114d414a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d414d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4150 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d4153 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d4156 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4159 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d415c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 114d415f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4162 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4165 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d4169 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d416b jne 0x114d418a */
  if (!C.zf) goto L_114d418a;
  /* 114d416d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4170 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4173 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4178 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d417a not edx */
  EDX = (~(EDX));
  /* 114d417c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d417f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d4182 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4184 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4187 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_114d418a:;
  /* 114d418a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d418d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d4190 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d4193 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d4196 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d4199 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d419c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d419f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41a2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d41a5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d41a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d41ac je 0x114d42c0 */
  if (C.zf) goto L_114d42c0;
  /* 114d41b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d41b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d41b8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 114d41bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d41be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d41c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d41c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d41ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d41d0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d41d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d41d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41d9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 114d41dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d41e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41e5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 114d41e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d41ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d41f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d41f4 jne 0x114d42c0 */
  if (!C.zf) goto L_114d42c0;
  /* 114d41fa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d41fe jge 0x114d425a */
  if ((C.sf==C.of)) goto L_114d425a;
  /* 114d4200 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4203 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4206 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d420a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d420d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4210 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 114d4213 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d4215 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4218 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d421b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 114d421e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4220 jne 0x114d4238 */
  if (!C.zf) goto L_114d4238;
  /* 114d4222 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4227 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d422a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d422c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d422f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d4231 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d4233 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4236 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d4238:;
  /* 114d4238 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d423d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4240 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4242 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4245 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4248 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 114d424c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d424e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4251 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4254 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 114d4258 jmp 0x114d42c0 */
  goto L_114d42c0;
L_114d425a:;
  /* 114d425a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d425d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4260 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d4264 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4267 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d426a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 114d426d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d426f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4272 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4275 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 114d4278 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d427a jne 0x114d4297 */
  if (!C.zf) goto L_114d4297;
  /* 114d427c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d427f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4282 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4287 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d4289 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d428c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d428f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d4291 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4294 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d4297:;
  /* 114d4297 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d429a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d429d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d42a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d42a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d42a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d42aa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 114d42b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d42b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d42b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d42b9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_114d42c0:;
  /* 114d42c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d42c4 je 0x114d42da */
  if (C.zf) goto L_114d42da;
  /* 114d42c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d42c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d42cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d42ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d42d1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d42d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d42d7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_114d42da:;
  /* 114d42da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d42dd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d42e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d42e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d42e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d42e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d42ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d42ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d42f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d42f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d42f7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d42fa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 114d42fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4300 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d4302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4305 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d4307 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d430a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d430d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d430f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4311 jne 0x114d4333 */
  if (!C.zf) goto L_114d4333;
  /* 114d4313 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4316 cmp eax, dword ptr [0x11500adc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500adc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d431c jne 0x114d4333 */
  if (!C.zf) goto L_114d4333;
  /* 114d431e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4321 cmp ecx, dword ptr [0x11500ad4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ad4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4327 jne 0x114d4333 */
  if (!C.zf) goto L_114d4333;
  /* 114d4329 mov dword ptr [0x11500adc], 0 */
  w32((uint32_t)(0x11500adc), (0x0u));
L_114d4333:;
  /* 114d4333 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d4336 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4339 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d433b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d433e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_114d4341:;
  /* 114d4341 pop esi */
  ESI = (pop32());
  /* 114d4342 mov esp, ebp */
  ESP = (EBP);
  /* 114d4344 pop ebp */
  EBP = (pop32());
  /* 114d4345 ret  */
  ESPCHK(0x114d3e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014350 @ 0x114d4350 (271 bytes, 78 insns) */
void f_114d4350(void) {
  FTRACE(0x114d4350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d4350 push ebp */
  push32((uint32_t)(EBP));
  /* 114d4351 mov ebp, esp */
  EBP = (ESP);
  /* 114d4353 push ecx */
  push32((uint32_t)(ECX));
  /* 114d4354 mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d4359 cmp eax, dword ptr [0x11500ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d435f jne 0x114d43ab */
  if (!C.zf) goto L_114d43ab;
  /* 114d4361 mov ecx, dword ptr [0x11500ac4] */
  ECX = (r32((uint32_t)(0x11500ac4)));
  /* 114d4367 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d436a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d436d push ecx */
  push32((uint32_t)(ECX));
  /* 114d436e mov edx, dword ptr [0x11500ae4] */
  EDX = (r32((uint32_t)(0x11500ae4)));
  /* 114d4374 push edx */
  push32((uint32_t)(EDX));
  /* 114d4375 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d4377 mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114d437c push eax */
  push32((uint32_t)(EAX));
  /* 114d437d call dword ptr [0x1150138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150138c))), 0x114d4383u);
  /* 114d4383 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d4386 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d438a jne 0x114d4393 */
  if (!C.zf) goto L_114d4393;
  /* 114d438c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d438e jmp 0x114d445b */
  goto L_114d445b;
L_114d4393:;
  /* 114d4393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4396 mov dword ptr [0x11500ae4], ecx */
  w32((uint32_t)(0x11500ae4), (ECX));
  /* 114d439c mov edx, dword ptr [0x11500ac4] */
  EDX = (r32((uint32_t)(0x11500ac4)));
  /* 114d43a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d43a5 mov dword ptr [0x11500ac4], edx */
  w32((uint32_t)(0x11500ac4), (EDX));
L_114d43ab:;
  /* 114d43ab mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d43b0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d43b3 mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d43b9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d43bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d43be push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 114d43c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 114d43c5 mov edx, dword ptr [0x11500ae8] */
  EDX = (r32((uint32_t)(0x11500ae8)));
  /* 114d43cb push edx */
  push32((uint32_t)(EDX));
  /* 114d43cc call dword ptr [0x1150139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150139c))), 0x114d43d2u);
  /* 114d43d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d43d5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 114d43d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d43db cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d43df jne 0x114d43e5 */
  if (!C.zf) goto L_114d43e5;
  /* 114d43e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d43e3 jmp 0x114d445b */
  goto L_114d445b;
L_114d43e5:;
  /* 114d43e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d43e7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 114d43ec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 114d43f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d43f3 call dword ptr [0x11501388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501388))), 0x114d43f9u);
  /* 114d43f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d43fc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 114d43ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4402 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4406 jne 0x114d4422 */
  if (!C.zf) goto L_114d4422;
  /* 114d4408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d440b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d440e push ecx */
  push32((uint32_t)(ECX));
  /* 114d440f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d4411 mov edx, dword ptr [0x11500ae8] */
  EDX = (r32((uint32_t)(0x11500ae8)));
  /* 114d4417 push edx */
  push32((uint32_t)(EDX));
  /* 114d4418 call dword ptr [0x115013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a8))), 0x114d441eu);
  /* 114d441e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d4420 jmp 0x114d445b */
  goto L_114d445b;
L_114d4422:;
  /* 114d4422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4425 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d442b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d442e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114d4435 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4438 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 114d443f mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d4444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4447 mov dword ptr [0x11500ae0], eax */
  w32((uint32_t)(0x11500ae0), (EAX));
  /* 114d444c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d444f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114d4452 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 114d4458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114d445b:;
  /* 114d445b mov esp, ebp */
  ESP = (EBP);
  /* 114d445d pop ebp */
  EBP = (pop32());
  /* 114d445e ret  */
  ESPCHK(0x114d4350u, _esp0);
  ESP += 4; return;
}

/* FUN_10014460 @ 0x114d4460 (494 bytes, 149 insns) */
void f_114d4460(void) {
  FTRACE(0x114d4460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d4460 push ebp */
  push32((uint32_t)(EBP));
  /* 114d4461 mov ebp, esp */
  EBP = (ESP);
  /* 114d4463 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4469 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d446c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 114d446f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4472 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d4475 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d4478 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_114d447f:;
  /* 114d447f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4483 jl 0x114d4498 */
  if ((C.sf!=C.of)) goto L_114d4498;
  /* 114d4485 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d4488 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d448a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d448d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d4490 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4493 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 114d4496 jmp 0x114d447f */
  goto L_114d447f;
L_114d4498:;
  /* 114d4498 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d449b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d44a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d44a4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 114d44ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d44ae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114d44b5 jmp 0x114d44c0 */
  goto L_114d44c0;
L_114d44b7:;
  /* 114d44b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d44ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d44bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_114d44c0:;
  /* 114d44c0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d44c4 jge 0x114d44e6 */
  if ((C.sf==C.of)) goto L_114d44e6;
  /* 114d44c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d44c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d44cc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 114d44cf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d44d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d44d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d44d8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 114d44db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d44de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d44e1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114d44e4 jmp 0x114d44b7 */
  goto L_114d44b7;
L_114d44e6:;
  /* 114d44e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d44e9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 114d44ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d44ef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114d44f2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d44f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d44f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d44f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114d44fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114d4503 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d4506 push edx */
  push32((uint32_t)(EDX));
  /* 114d4507 call dword ptr [0x11501388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501388))), 0x114d450du);
  /* 114d450d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d450f jne 0x114d4519 */
  if (!C.zf) goto L_114d4519;
  /* 114d4511 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d4514 jmp 0x114d464a */
  goto L_114d464a;
L_114d4519:;
  /* 114d4519 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d451c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4521 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114d4524 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d4527 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d452a jmp 0x114d4538 */
  goto L_114d4538;
L_114d452c:;
  /* 114d452c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d452f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4535 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d4538:;
  /* 114d4538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d453b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d453e ja 0x114d459d */
  if ((!C.cf&&!C.zf)) goto L_114d459d;
  /* 114d4540 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4543 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 114d454a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d454d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 114d4557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d455a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d455d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d4560 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4563 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 114d4569 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d456c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4572 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4575 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d4578 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d457b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4581 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4584 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d4587 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d458a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d458f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114d4592 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d4595 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 114d459b jmp 0x114d452c */
  goto L_114d452c;
L_114d459d:;
  /* 114d459d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d45a0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d45a6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114d45a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d45ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d45af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d45b2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d45b5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d45b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d45bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d45be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d45c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d45c4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 114d45c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d45ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d45cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d45d0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 114d45d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d45d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d45d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d45dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d45df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d45e2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 114d45e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d45e8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d45eb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 114d45f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d45f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d45f9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 114d4604 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4607 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 114d460b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d460e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 114d4611 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d4614 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4617 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 114d461a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d461c jne 0x114d462d */
  if (!C.zf) goto L_114d462d;
  /* 114d461e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4621 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4624 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d4627 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d462a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d462d:;
  /* 114d462d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4632 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d4635 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4637 not edx */
  EDX = (~(EDX));
  /* 114d4639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d463c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d463f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4644 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d4647 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_114d464a:;
  /* 114d464a mov esp, ebp */
  ESP = (EBP);
  /* 114d464c pop ebp */
  EBP = (pop32());
  /* 114d464d ret  */
  ESPCHK(0x114d4460u, _esp0);
  ESP += 4; return;
}

/* FUN_10014650 @ 0x114d4650 (1515 bytes, 489 insns) */
void f_114d4650(void) {
  FTRACE(0x114d4650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d4650 push ebp */
  push32((uint32_t)(EBP));
  /* 114d4651 mov ebp, esp */
  EBP = (ESP);
  /* 114d4653 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4656 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d4659 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d465c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 114d465e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114d4661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4664 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114d4667 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 114d466a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d466d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d4670 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4673 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d4676 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d4679 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 114d467c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d467f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4682 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d4688 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d468b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 114d4692 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d4695 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d4698 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d469b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d469e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d46a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d46a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d46a6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 114d46a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d46ac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d46af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114d46b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d46b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d46b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d46ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d46bd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d46c0 jle 0x114d4976 */
  if ((C.zf||C.sf!=C.of)) goto L_114d4976;
  /* 114d46c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d46c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d46cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d46ce jne 0x114d46db */
  if (!C.zf) goto L_114d46db;
  /* 114d46d0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d46d3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d46d6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d46d9 jle 0x114d46e2 */
  if ((C.zf||C.sf!=C.of)) goto L_114d46e2;
L_114d46db:;
  /* 114d46db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d46dd jmp 0x114d4c37 */
  goto L_114d4c37;
L_114d46e2:;
  /* 114d46e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d46e5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114d46e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d46eb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d46ee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d46f2 jbe 0x114d46fb */
  if ((C.cf||C.zf)) goto L_114d46fb;
  /* 114d46f4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_114d46fb:;
  /* 114d46fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d46fe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4701 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4704 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4707 jne 0x114d47dd */
  if (!C.zf) goto L_114d47dd;
  /* 114d470d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4711 jae 0x114d4772 */
  if (!C.cf) goto L_114d4772;
  /* 114d4713 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4718 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d471b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d471d not edx */
  EDX = (~(EDX));
  /* 114d471f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4722 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4725 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 114d4729 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d472b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d472e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4731 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 114d4735 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4738 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d473b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d473e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d4741 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4744 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4747 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 114d474a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d474d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4750 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d4754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4756 jne 0x114d4770 */
  if (!C.zf) goto L_114d4770;
  /* 114d4758 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d475d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4760 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4762 not edx */
  EDX = (~(EDX));
  /* 114d4764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4767 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d4769 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d476b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d476e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d4770:;
  /* 114d4770 jmp 0x114d47dd */
  goto L_114d47dd;
L_114d4772:;
  /* 114d4772 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4775 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4778 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d477d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d477f not eax */
  EAX = (~(EAX));
  /* 114d4781 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4784 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4787 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 114d478e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4790 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4793 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4796 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 114d479d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d47a0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d47a3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 114d47a6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d47a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d47ac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d47af mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 114d47b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d47b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d47b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d47bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d47be jne 0x114d47dd */
  if (!C.zf) goto L_114d47dd;
  /* 114d47c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d47c3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d47c6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d47cb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d47cd not eax */
  EAX = (~(EAX));
  /* 114d47cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d47d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d47d5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d47d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d47da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d47dd:;
  /* 114d47dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d47e0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d47e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d47e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d47e9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d47ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d47ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d47f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d47f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d47f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d47fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d47fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4801 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4804 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d4807 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d480b jle 0x114d4957 */
  if ((C.zf||C.sf!=C.of)) goto L_114d4957;
  /* 114d4811 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4814 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4817 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 114d481a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d481d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114d4820 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4823 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114d4826 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d482a jbe 0x114d4833 */
  if ((C.cf||C.zf)) goto L_114d4833;
  /* 114d482c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_114d4833:;
  /* 114d4833 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4836 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d4839 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 114d483c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114d483f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4842 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4845 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4848 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d484b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d484e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4851 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 114d4854 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4857 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d485a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 114d485d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4860 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4863 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4866 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d4869 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d486c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d486f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4872 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4875 jne 0x114d4943 */
  if (!C.zf) goto L_114d4943;
  /* 114d487b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d487f jae 0x114d48dc */
  if (!C.cf) goto L_114d48dc;
  /* 114d4881 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4884 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4887 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d488b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d488e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4891 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d4894 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d4897 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d489a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d489d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 114d48a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d48a2 jne 0x114d48ba */
  if (!C.zf) goto L_114d48ba;
  /* 114d48a4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d48a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d48ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d48ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d48b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d48b3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d48b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d48b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d48ba:;
  /* 114d48ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d48bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d48c2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d48c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d48c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d48ca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 114d48ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d48d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d48d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d48d6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 114d48da jmp 0x114d4943 */
  goto L_114d4943;
L_114d48dc:;
  /* 114d48dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d48df add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d48e2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d48e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d48e9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d48ec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d48ef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d48f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d48f5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d48f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 114d48fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d48fd jne 0x114d491a */
  if (!C.zf) goto L_114d491a;
  /* 114d48ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4902 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4905 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d490a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d490c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d490f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d4912 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4917 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_114d491a:;
  /* 114d491a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d491d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4920 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4925 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d4927 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d492a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d492d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 114d4934 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4936 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4939 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d493c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_114d4943:;
  /* 114d4943 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4946 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d4949 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d494b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d494e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4951 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d4954 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_114d4957:;
  /* 114d4957 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d495a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d495d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4960 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d4962 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d4965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4968 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d496b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d496e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 114d4971 jmp 0x114d4c32 */
  goto L_114d4c32;
L_114d4976:;
  /* 114d4976 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d4979 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d497c jge 0x114d4c32 */
  if ((C.sf==C.of)) goto L_114d4c32;
  /* 114d4982 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d4985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4988 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d498b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d498d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d4990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4993 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4996 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4999 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 114d499c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d499f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d49a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114d49a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d49a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d49ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d49ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d49b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 114d49b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d49b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114d49ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d49be jbe 0x114d49c7 */
  if ((C.cf||C.zf)) goto L_114d49c7;
  /* 114d49c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_114d49c7:;
  /* 114d49c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d49ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d49cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d49cf jne 0x114d4b10 */
  if (!C.zf) goto L_114d4b10;
  /* 114d49d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d49d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114d49db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d49de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d49e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d49e5 jbe 0x114d49ee */
  if ((C.cf||C.zf)) goto L_114d49ee;
  /* 114d49e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_114d49ee:;
  /* 114d49ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d49f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d49f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d49f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d49fa jne 0x114d4ad0 */
  if (!C.zf) goto L_114d4ad0;
  /* 114d4a00 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4a04 jae 0x114d4a65 */
  if (!C.cf) goto L_114d4a65;
  /* 114d4a06 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4a0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4a0e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4a10 not edx */
  EDX = (~(EDX));
  /* 114d4a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4a15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a18 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 114d4a1c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d4a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4a21 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a24 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 114d4a28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a2b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4a2e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 114d4a31 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d4a34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a37 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4a3a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 114d4a3d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a40 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4a43 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d4a47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4a49 jne 0x114d4a63 */
  if (!C.zf) goto L_114d4a63;
  /* 114d4a4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4a50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4a53 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4a55 not edx */
  EDX = (~(EDX));
  /* 114d4a57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4a5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d4a5c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4a61 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d4a63:;
  /* 114d4a63 jmp 0x114d4ad0 */
  goto L_114d4ad0;
L_114d4a65:;
  /* 114d4a65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4a68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4a6b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4a70 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d4a72 not eax */
  EAX = (~(EAX));
  /* 114d4a74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4a77 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a7a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 114d4a81 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4a86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a89 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 114d4a90 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a93 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4a96 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 114d4a99 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d4a9c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4a9f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4aa2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 114d4aa5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4aa8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4aab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114d4aaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d4ab1 jne 0x114d4ad0 */
  if (!C.zf) goto L_114d4ad0;
  /* 114d4ab3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d4ab6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4ab9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4abe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d4ac0 not eax */
  EAX = (~(EAX));
  /* 114d4ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4ac5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4ac8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d4aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4acd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d4ad0:;
  /* 114d4ad0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4ad3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d4ad6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4ad9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d4adc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d4adf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4ae2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d4ae5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d4ae8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d4aeb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d4aee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d4af1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4af4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d4af7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d4afa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 114d4afd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4b00 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114d4b03 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4b07 jbe 0x114d4b10 */
  if ((C.cf||C.zf)) goto L_114d4b10;
  /* 114d4b09 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_114d4b10:;
  /* 114d4b10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d4b13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d4b16 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 114d4b19 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114d4b1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4b22 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d4b25 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d4b28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4b2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114d4b31 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d4b34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b37 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 114d4b3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b3d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d4b40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 114d4b46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4b4c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d4b4f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4b52 jne 0x114d4c1e */
  if (!C.zf) goto L_114d4c1e;
  /* 114d4b58 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4b5c jae 0x114d4bb8 */
  if (!C.cf) goto L_114d4bb8;
  /* 114d4b5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4b61 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4b64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d4b68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4b6b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4b6e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 114d4b71 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d4b73 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4b76 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4b79 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 114d4b7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4b7e jne 0x114d4b96 */
  if (!C.zf) goto L_114d4b96;
  /* 114d4b80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4b85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d4b88 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d4b8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4b8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d4b8f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d4b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4b94 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d4b96:;
  /* 114d4b96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4b9b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d4b9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4ba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4ba3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4ba6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 114d4baa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d4bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4baf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4bb2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 114d4bb6 jmp 0x114d4c1e */
  goto L_114d4c1e;
L_114d4bb8:;
  /* 114d4bb8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4bbb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4bbe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 114d4bc2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4bc5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4bc8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 114d4bcb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d4bcd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4bd0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4bd3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 114d4bd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4bd8 jne 0x114d4bf5 */
  if (!C.zf) goto L_114d4bf5;
  /* 114d4bda mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d4bdd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4be0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 114d4be5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 114d4be7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4bea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d4bed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d4bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d4bf2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d4bf5:;
  /* 114d4bf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d4bf8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4bfb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4c00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4c05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4c08 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 114d4c0f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d4c11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4c14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d4c17 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_114d4c1e:;
  /* 114d4c1e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4c21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d4c24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d4c26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d4c29 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4c2c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d4c2f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_114d4c32:;
  /* 114d4c32 mov eax, 1 */
  EAX = (0x1u);
L_114d4c37:;
  /* 114d4c37 mov esp, ebp */
  ESP = (EBP);
  /* 114d4c39 pop ebp */
  EBP = (pop32());
  /* 114d4c3a ret  */
  ESPCHK(0x114d4650u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c40 @ 0x114d4c40 (304 bytes, 79 insns) */
void f_114d4c40(void) {
  FTRACE(0x114d4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 114d4c41 mov ebp, esp */
  EBP = (ESP);
  /* 114d4c43 push ecx */
  push32((uint32_t)(ECX));
  /* 114d4c44 cmp dword ptr [0x11500adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4c4b je 0x114d4d6c */
  if (C.zf) goto L_114d4d6c;
  /* 114d4c51 mov eax, dword ptr [0x11500ad4] */
  EAX = (r32((uint32_t)(0x11500ad4)));
  /* 114d4c56 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 114d4c59 mov ecx, dword ptr [0x11500adc] */
  ECX = (r32((uint32_t)(0x11500adc)));
  /* 114d4c5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d4c62 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4c64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d4c67 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 114d4c6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114d4c71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d4c74 push eax */
  push32((uint32_t)(EAX));
  /* 114d4c75 call dword ptr [0x11501398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501398))), 0x114d4c7bu);
  /* 114d4c7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d4c80 mov ecx, dword ptr [0x11500ad4] */
  ECX = (r32((uint32_t)(0x11500ad4)));
  /* 114d4c86 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d4c88 mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d4c8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d4c90 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d4c92 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d4c98 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d4c9b mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d4ca0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d4ca3 mov edx, dword ptr [0x11500ad4] */
  EDX = (r32((uint32_t)(0x11500ad4)));
  /* 114d4ca9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 114d4cb4 mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d4cb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d4cbc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 114d4cbf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114d4cc2 mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d4cc7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d4cca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 114d4ccd mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d4cd3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114d4cd6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 114d4cda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d4cdc jne 0x114d4cf2 */
  if (!C.zf) goto L_114d4cf2;
  /* 114d4cde mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d4ce4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d4ce7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 114d4ce9 mov ecx, dword ptr [0x11500adc] */
  ECX = (r32((uint32_t)(0x11500adc)));
  /* 114d4cef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_114d4cf2:;
  /* 114d4cf2 mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d4cf8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4cfc jne 0x114d4d62 */
  if (!C.zf) goto L_114d4d62;
  /* 114d4cfe cmp dword ptr [0x11500ae0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11500ae0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4d05 jle 0x114d4d62 */
  if ((C.zf||C.sf!=C.of)) goto L_114d4d62;
  /* 114d4d07 mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d4d0c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114d4d0f push ecx */
  push32((uint32_t)(ECX));
  /* 114d4d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d4d12 mov edx, dword ptr [0x11500ae8] */
  EDX = (r32((uint32_t)(0x11500ae8)));
  /* 114d4d18 push edx */
  push32((uint32_t)(EDX));
  /* 114d4d19 call dword ptr [0x115013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013a8))), 0x114d4d1fu);
  /* 114d4d1f mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d4d24 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d4d27 mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d4d2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4d2f mov edx, dword ptr [0x11500adc] */
  EDX = (r32((uint32_t)(0x11500adc)));
  /* 114d4d35 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4d38 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4d3a push ecx */
  push32((uint32_t)(ECX));
  /* 114d4d3b mov eax, dword ptr [0x11500adc] */
  EAX = (r32((uint32_t)(0x11500adc)));
  /* 114d4d40 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4d43 push eax */
  push32((uint32_t)(EAX));
  /* 114d4d44 mov ecx, dword ptr [0x11500adc] */
  ECX = (r32((uint32_t)(0x11500adc)));
  /* 114d4d4a push ecx */
  push32((uint32_t)(ECX));
  /* 114d4d4b call 0x114d2e90 */
  push32(0x114d4d50u); f_114d2e90();
  /* 114d4d50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4d53 mov edx, dword ptr [0x11500ae0] */
  EDX = (r32((uint32_t)(0x11500ae0)));
  /* 114d4d59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4d5c mov dword ptr [0x11500ae0], edx */
  w32((uint32_t)(0x11500ae0), (EDX));
L_114d4d62:;
  /* 114d4d62 mov dword ptr [0x11500adc], 0 */
  w32((uint32_t)(0x11500adc), (0x0u));
L_114d4d6c:;
  /* 114d4d6c mov esp, ebp */
  ESP = (EBP);
  /* 114d4d6e pop ebp */
  EBP = (pop32());
  /* 114d4d6f ret  */
  ESPCHK(0x114d4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d70 @ 0x114d4d70 (1565 bytes, 343 insns) */
void f_114d4d70(void) {
  FTRACE(0x114d4d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d4d70 push ebp */
  push32((uint32_t)(EBP));
  /* 114d4d71 mov ebp, esp */
  EBP = (ESP);
  /* 114d4d73 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4d79 mov eax, dword ptr [0x11500ae0] */
  EAX = (r32((uint32_t)(0x11500ae0)));
  /* 114d4d7e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d4d81 push eax */
  push32((uint32_t)(EAX));
  /* 114d4d82 mov ecx, dword ptr [0x11500ae4] */
  ECX = (r32((uint32_t)(0x11500ae4)));
  /* 114d4d88 push ecx */
  push32((uint32_t)(ECX));
  /* 114d4d89 call dword ptr [0x115013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f8))), 0x114d4d8fu);
  /* 114d4d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d4d91 je 0x114d4d9b */
  if (C.zf) goto L_114d4d9b;
  /* 114d4d93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d4d96 jmp 0x114d5389 */
  goto L_114d5389;
L_114d4d9b:;
  /* 114d4d9b mov edx, dword ptr [0x11500ae4] */
  EDX = (r32((uint32_t)(0x11500ae4)));
  /* 114d4da1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 114d4da7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 114d4db1 jmp 0x114d4dc2 */
  goto L_114d4dc2;
L_114d4db3:;
  /* 114d4db3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 114d4db9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4dbc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_114d4dc2:;
  /* 114d4dc2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 114d4dc8 cmp ecx, dword ptr [0x11500ae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4dce jge 0x114d5387 */
  if ((C.sf==C.of)) goto L_114d5387;
  /* 114d4dd4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 114d4dda mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114d4ddd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 114d4de3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 114d4de8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 114d4dee push ecx */
  push32((uint32_t)(ECX));
  /* 114d4def call dword ptr [0x115013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f8))), 0x114d4df5u);
  /* 114d4df5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d4df7 je 0x114d4e03 */
  if (C.zf) goto L_114d4e03;
  /* 114d4df9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 114d4dfe jmp 0x114d5389 */
  goto L_114d5389;
L_114d4e03:;
  /* 114d4e03 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 114d4e09 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114d4e0c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 114d4e12 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 114d4e18 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4e1e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114d4e21 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 114d4e27 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d4e2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d4e2d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 114d4e37 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 114d4e41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d4e48 jmp 0x114d4e53 */
  goto L_114d4e53;
L_114d4e4a:;
  /* 114d4e4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d4e4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4e50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114d4e53:;
  /* 114d4e53 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4e57 jge 0x114d534b */
  if ((C.sf==C.of)) goto L_114d534b;
  /* 114d4e5d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 114d4e67 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 114d4e71 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 114d4e7b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 114d4e85 jmp 0x114d4e96 */
  goto L_114d4e96;
L_114d4e87:;
  /* 114d4e87 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 114d4e8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4e90 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_114d4e96:;
  /* 114d4e96 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4e9d jge 0x114d4eb2 */
  if ((C.sf==C.of)) goto L_114d4eb2;
  /* 114d4e9f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 114d4ea5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 114d4eb0 jmp 0x114d4e87 */
  goto L_114d4e87;
L_114d4eb2:;
  /* 114d4eb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4eb6 jl 0x114d52ed */
  if ((C.sf!=C.of)) goto L_114d52ed;
  /* 114d4ebc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114d4ec1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 114d4ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 114d4ec8 call dword ptr [0x115013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f8))), 0x114d4eceu);
  /* 114d4ece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d4ed0 je 0x114d4edc */
  if (C.zf) goto L_114d4edc;
  /* 114d4ed2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 114d4ed7 jmp 0x114d5389 */
  goto L_114d5389;
L_114d4edc:;
  /* 114d4edc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 114d4ee2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d4ee5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 114d4eef jmp 0x114d4f00 */
  goto L_114d4f00;
L_114d4ef1:;
  /* 114d4ef1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 114d4ef7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4efa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_114d4f00:;
  /* 114d4f00 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4f07 jge 0x114d5084 */
  if ((C.sf==C.of)) goto L_114d5084;
  /* 114d4f0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d4f10 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4f13 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 114d4f19 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d4f1f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4f25 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 114d4f2b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d4f31 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4f35 jne 0x114d4f42 */
  if (!C.zf) goto L_114d4f42;
  /* 114d4f37 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 114d4f3d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4f40 je 0x114d4f4c */
  if (C.zf) goto L_114d4f4c;
L_114d4f42:;
  /* 114d4f42 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 114d4f47 jmp 0x114d5389 */
  goto L_114d5389;
L_114d4f4c:;
  /* 114d4f4c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d4f52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d4f54 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 114d4f5a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 114d4f60 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 114d4f66 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 114d4f6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d4f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d4f71 je 0x114d4fa9 */
  if (C.zf) goto L_114d4fa9;
  /* 114d4f73 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 114d4f79 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4f7c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 114d4f82 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4f8c jle 0x114d4f98 */
  if ((C.zf||C.sf!=C.of)) goto L_114d4f98;
  /* 114d4f8e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 114d4f93 jmp 0x114d5389 */
  goto L_114d5389;
L_114d4f98:;
  /* 114d4f98 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 114d4f9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4fa1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 114d4fa7 jmp 0x114d4feb */
  goto L_114d4feb;
L_114d4fa9:;
  /* 114d4fa9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 114d4faf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114d4fb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d4fb5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 114d4fbb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4fc2 jle 0x114d4fce */
  if ((C.zf||C.sf!=C.of)) goto L_114d4fce;
  /* 114d4fc4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_114d4fce:;
  /* 114d4fce mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 114d4fd4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 114d4fdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d4fde mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 114d4fe4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_114d4feb:;
  /* 114d4feb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d4ff2 jl 0x114d500d */
  if ((C.sf!=C.of)) goto L_114d500d;
  /* 114d4ff4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 114d4ffa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 114d4ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d4fff jne 0x114d500d */
  if (!C.zf) goto L_114d500d;
  /* 114d5001 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d500b jle 0x114d5017 */
  if ((C.zf||C.sf!=C.of)) goto L_114d5017;
L_114d500d:;
  /* 114d500d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 114d5012 jmp 0x114d5389 */
  goto L_114d5389;
L_114d5017:;
  /* 114d5017 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d501d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5023 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 114d5026 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d502c je 0x114d5038 */
  if (C.zf) goto L_114d5038;
  /* 114d502e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 114d5033 jmp 0x114d5389 */
  goto L_114d5389;
L_114d5038:;
  /* 114d5038 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d503e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5044 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 114d504a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d5050 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5056 jb 0x114d4f4c */
  if (C.cf) goto L_114d4f4c;
  /* 114d505c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d5062 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5068 je 0x114d5074 */
  if (C.zf) goto L_114d5074;
  /* 114d506a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 114d506f jmp 0x114d5389 */
  goto L_114d5389;
L_114d5074:;
  /* 114d5074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5077 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d507c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d507f jmp 0x114d4ef1 */
  goto L_114d4ef1;
L_114d5084:;
  /* 114d5084 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d5087 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d5089 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d508f je 0x114d509b */
  if (C.zf) goto L_114d509b;
  /* 114d5091 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 114d5096 jmp 0x114d5389 */
  goto L_114d5389;
L_114d509b:;
  /* 114d509b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d509e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 114d50a4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114d50ab jmp 0x114d50b6 */
  goto L_114d50b6;
L_114d50ad:;
  /* 114d50ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d50b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d50b3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_114d50b6:;
  /* 114d50b6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d50ba jge 0x114d52ed */
  if ((C.sf==C.of)) goto L_114d52ed;
  /* 114d50c0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 114d50ca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 114d50d0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_114d50d6:;
  /* 114d50d6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d50dc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d50df mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 114d50e5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 114d50eb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d50f1 je 0x114d521a */
  if (C.zf) goto L_114d521a;
  /* 114d50f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d50fa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 114d5100 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5107 je 0x114d521a */
  if (C.zf) goto L_114d521a;
  /* 114d510d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 114d5113 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5119 jb 0x114d512e */
  if (C.cf) goto L_114d512e;
  /* 114d511b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 114d5121 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5126 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d512c jb 0x114d5138 */
  if (C.cf) goto L_114d5138;
L_114d512e:;
  /* 114d512e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 114d5133 jmp 0x114d5389 */
  goto L_114d5389;
L_114d5138:;
  /* 114d5138 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 114d513e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d5144 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 114d514a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 114d5150 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5153 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d5156 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5159 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d515e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_114d5164:;
  /* 114d5164 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5167 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d516d je 0x114d518e */
  if (C.zf) goto L_114d518e;
  /* 114d516f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5172 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5178 jne 0x114d517c */
  if (!C.zf) goto L_114d517c;
  /* 114d517a jmp 0x114d518e */
  goto L_114d518e;
L_114d517c:;
  /* 114d517c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d517f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d5181 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 114d5184 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5187 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5189 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d518c jmp 0x114d5164 */
  goto L_114d5164;
L_114d518e:;
  /* 114d518e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5191 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5197 jne 0x114d51a3 */
  if (!C.zf) goto L_114d51a3;
  /* 114d5199 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 114d519e jmp 0x114d5389 */
  goto L_114d5389;
L_114d51a3:;
  /* 114d51a3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 114d51a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d51ab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114d51ae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d51b1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 114d51b7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d51be jle 0x114d51ca */
  if ((C.zf||C.sf!=C.of)) goto L_114d51ca;
  /* 114d51c0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_114d51ca:;
  /* 114d51ca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 114d51d0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d51d3 je 0x114d51df */
  if (C.zf) goto L_114d51df;
  /* 114d51d5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 114d51da jmp 0x114d5389 */
  goto L_114d5389;
L_114d51df:;
  /* 114d51df mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 114d51e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d51e8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d51ee je 0x114d51fa */
  if (C.zf) goto L_114d51fa;
  /* 114d51f0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 114d51f5 jmp 0x114d5389 */
  goto L_114d5389;
L_114d51fa:;
  /* 114d51fa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 114d5200 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 114d5206 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 114d520c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d520f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 114d5215 jmp 0x114d50d6 */
  goto L_114d50d6;
L_114d521a:;
  /* 114d521a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5221 je 0x114d5291 */
  if (C.zf) goto L_114d5291;
  /* 114d5223 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5227 jge 0x114d525b */
  if ((C.sf==C.of)) goto L_114d525b;
  /* 114d5229 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d522e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d5231 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d5233 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 114d5239 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d523b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 114d5241 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d5246 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d5249 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d524b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 114d5251 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5253 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 114d5259 jmp 0x114d5291 */
  goto L_114d5291;
L_114d525b:;
  /* 114d525b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d525e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5261 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d5266 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d5268 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 114d526e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5270 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 114d5276 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d5279 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d527c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114d5281 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114d5283 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 114d5289 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114d528b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_114d5291:;
  /* 114d5291 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 114d5297 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d529a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d52a0 jne 0x114d52b4 */
  if (!C.zf) goto L_114d52b4;
  /* 114d52a2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d52a5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 114d52ab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d52b2 je 0x114d52be */
  if (C.zf) goto L_114d52be;
L_114d52b4:;
  /* 114d52b4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 114d52b9 jmp 0x114d5389 */
  goto L_114d5389;
L_114d52be:;
  /* 114d52be mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 114d52c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d52c7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d52cd je 0x114d52d9 */
  if (C.zf) goto L_114d52d9;
  /* 114d52cf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 114d52d4 jmp 0x114d5389 */
  goto L_114d5389;
L_114d52d9:;
  /* 114d52d9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 114d52df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d52e2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 114d52e8 jmp 0x114d50ad */
  goto L_114d50ad;
L_114d52ed:;
  /* 114d52ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d52f0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 114d52f6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 114d52fc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5300 jne 0x114d531a */
  if (!C.zf) goto L_114d531a;
  /* 114d5302 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d5305 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 114d530b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 114d5311 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5318 je 0x114d5321 */
  if (C.zf) goto L_114d5321;
L_114d531a:;
  /* 114d531a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 114d531f jmp 0x114d5389 */
  goto L_114d5389;
L_114d5321:;
  /* 114d5321 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 114d5327 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d532d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 114d5333 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d5336 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d533b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d533e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5341 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d5343 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d5346 jmp 0x114d4e4a */
  goto L_114d4e4a;
L_114d534b:;
  /* 114d534b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 114d5351 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 114d5357 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5359 jne 0x114d536c */
  if (!C.zf) goto L_114d536c;
  /* 114d535b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 114d5361 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 114d5367 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d536a je 0x114d5373 */
  if (C.zf) goto L_114d5373;
L_114d536c:;
  /* 114d536c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 114d5371 jmp 0x114d5389 */
  goto L_114d5389;
L_114d5373:;
  /* 114d5373 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 114d5379 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d537c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 114d5382 jmp 0x114d4db3 */
  goto L_114d4db3;
L_114d5387:;
  /* 114d5387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d5389:;
  /* 114d5389 mov esp, ebp */
  ESP = (EBP);
  /* 114d538b pop ebp */
  EBP = (pop32());
  /* 114d538c ret  */
  ESPCHK(0x114d4d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015390 @ 0x114d5390 (91 bytes, 30 insns) */
void f_114d5390(void) {
  FTRACE(0x114d5390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5390 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5391 mov ebp, esp */
  EBP = (ESP);
  /* 114d5393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5396 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d5398 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d539e jne 0x114d53be */
  if (!C.zf) goto L_114d53be;
  /* 114d53a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d53a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d53a5 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d53a9 jne 0x114d53be */
  if (!C.zf) goto L_114d53be;
  /* 114d53ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d53ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d53b0 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d53b7 jne 0x114d53be */
  if (!C.zf) goto L_114d53be;
  /* 114d53b9 call 0x114ce7d0 */
  push32(0x114d53beu); f_114ce7d0();
L_114d53be:;
  /* 114d53be cmp dword ptr [0x114ff328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d53c5 je 0x114d53e5 */
  if (C.zf) goto L_114d53e5;
  /* 114d53c7 mov eax, dword ptr [0x114ff328] */
  EAX = (r32((uint32_t)(0x114ff328)));
  /* 114d53cc push eax */
  push32((uint32_t)(EAX));
  /* 114d53cd call 0x114d5490 */
  push32(0x114d53d2u); f_114d5490();
  /* 114d53d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d53d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d53d7 je 0x114d53e5 */
  if (C.zf) goto L_114d53e5;
  /* 114d53d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d53dc push ecx */
  push32((uint32_t)(ECX));
  /* 114d53dd call dword ptr [0x114ff328] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff328))), 0x114d53e3u);
  /* 114d53e3 jmp 0x114d53e7 */
  goto L_114d53e7;
L_114d53e5:;
  /* 114d53e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d53e7:;
  /* 114d53e7 pop ebp */
  EBP = (pop32());
  /* 114d53e8 ret 4 */
  ESPCHK(0x114d5390u, _esp0);
  ESP += 8; return;
}

/* FUN_100153f0 @ 0x114d53f0 (21 bytes, 7 insns) */
void f_114d53f0(void) {
  FTRACE(0x114d53f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d53f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d53f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d53f3 push 0x114d5390 */
  push32((uint32_t)(0x114d5390u));
  /* 114d53f8 call dword ptr [0x11501390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501390))), 0x114d53feu);
  /* 114d53fe mov dword ptr [0x114ff328], eax */
  w32((uint32_t)(0x114ff328), (EAX));
  /* 114d5403 pop ebp */
  EBP = (pop32());
  /* 114d5404 ret  */
  ESPCHK(0x114d53f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015410 @ 0x114d5410 (17 bytes, 7 insns) */
void f_114d5410(void) {
  FTRACE(0x114d5410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5410 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5411 mov ebp, esp */
  EBP = (ESP);
  /* 114d5413 mov eax, dword ptr [0x114ff328] */
  EAX = (r32((uint32_t)(0x114ff328)));
  /* 114d5418 push eax */
  push32((uint32_t)(EAX));
  /* 114d5419 call dword ptr [0x11501390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501390))), 0x114d541fu);
  /* 114d541f pop ebp */
  EBP = (pop32());
  /* 114d5420 ret  */
  ESPCHK(0x114d5410u, _esp0);
  ESP += 4; return;
}

/* FUN_10015430 @ 0x114d5430 (43 bytes, 16 insns) */
void f_114d5430(void) {
  FTRACE(0x114d5430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5430 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5431 mov ebp, esp */
  EBP = (ESP);
  /* 114d5433 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5434 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d543b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d543e push eax */
  push32((uint32_t)(EAX));
  /* 114d543f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5442 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5443 call dword ptr [0x115013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f4))), 0x114d5449u);
  /* 114d5449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d544b je 0x114d5454 */
  if (C.zf) goto L_114d5454;
  /* 114d544d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d5454:;
  /* 114d5454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5457 mov esp, ebp */
  ESP = (EBP);
  /* 114d5459 pop ebp */
  EBP = (pop32());
  /* 114d545a ret  */
  ESPCHK(0x114d5430u, _esp0);
  ESP += 4; return;
}

/* FUN_10015460 @ 0x114d5460 (43 bytes, 16 insns) */
void f_114d5460(void) {
  FTRACE(0x114d5460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5460 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5461 mov ebp, esp */
  EBP = (ESP);
  /* 114d5463 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5464 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d546b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d546e push eax */
  push32((uint32_t)(EAX));
  /* 114d546f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5472 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5473 call dword ptr [0x115013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f8))), 0x114d5479u);
  /* 114d5479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d547b je 0x114d5484 */
  if (C.zf) goto L_114d5484;
  /* 114d547d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d5484:;
  /* 114d5484 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5487 mov esp, ebp */
  ESP = (EBP);
  /* 114d5489 pop ebp */
  EBP = (pop32());
  /* 114d548a ret  */
  ESPCHK(0x114d5460u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x114d5490 (39 bytes, 14 insns) */
void f_114d5490(void) {
  FTRACE(0x114d5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5490 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5491 mov ebp, esp */
  EBP = (ESP);
  /* 114d5493 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5494 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d549b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d549e push eax */
  push32((uint32_t)(EAX));
  /* 114d549f call dword ptr [0x11501380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501380))), 0x114d54a5u);
  /* 114d54a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d54a7 je 0x114d54b0 */
  if (C.zf) goto L_114d54b0;
  /* 114d54a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d54b0:;
  /* 114d54b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d54b3 mov esp, ebp */
  ESP = (EBP);
  /* 114d54b5 pop ebp */
  EBP = (pop32());
  /* 114d54b6 ret  */
  ESPCHK(0x114d5490u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x114d54c0 (129 bytes, 56 insns) */
void f_114d54c0(void) {
  FTRACE(0x114d54c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d54c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 114d54c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d54c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 114d54ce jne 0x114d550c */
  if (!C.zf) goto L_114d550c;
L_114d54d0:;
  /* 114d54d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d54d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d54d4 jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d54d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114d54d8 je 0x114d5500 */
  if (C.zf) goto L_114d5500;
  /* 114d54da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d54dd jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d54df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 114d54e1 je 0x114d5500 */
  if (C.zf) goto L_114d5500;
  /* 114d54e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114d54e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d54e9 jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d54eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114d54ed je 0x114d5500 */
  if (C.zf) goto L_114d5500;
  /* 114d54ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d54f2 jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d54f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d54f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d54fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 114d54fc jne 0x114d54d0 */
  if (!C.zf) goto L_114d54d0;
  /* 114d54fe mov edi, edi */
  EDI = (EDI);
L_114d5500:;
  /* 114d5500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5502 ret  */
  ESPCHK(0x114d54c0u, _esp0);
  ESP += 4; return;
  /* 114d5503 nop  */
  /* nop */
L_114d5504:;
  /* 114d5504 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5506 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d5508 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114d5509 ret  */
  ESPCHK(0x114d54c0u, _esp0);
  ESP += 4; return;
  /* 114d550a mov edi, edi */
  EDI = (EDI);
L_114d550c:;
  /* 114d550c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 114d5512 je 0x114d5528 */
  if (C.zf) goto L_114d5528;
  /* 114d5514 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d5516 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114d5517 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d5519 jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d551b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114d551c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114d551e je 0x114d5500 */
  if (C.zf) goto L_114d5500;
  /* 114d5520 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 114d5526 je 0x114d54d0 */
  if (C.zf) goto L_114d54d0;
L_114d5528:;
  /* 114d5528 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114d552b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d552e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d5530 jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d5532 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114d5534 je 0x114d5500 */
  if (C.zf) goto L_114d5500;
  /* 114d5536 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d5539 jne 0x114d5504 */
  if (!C.zf) goto L_114d5504;
  /* 114d553b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 114d553d je 0x114d5500 */
  if (C.zf) goto L_114d5500;
  /* 114d553f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5542 jmp 0x114d54d0 */
  goto L_114d54d0;
}

/* FUN_10015609 @ 0x114d5609 (27 bytes, 11 insns) */
void f_114d5609(void) {
  FTRACE(0x114d5609u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5609 push ebp */
  push32((uint32_t)(EBP));
  /* 114d560a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d560e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 114d5610 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114d5613 push eax */
  push32((uint32_t)(EAX));
  /* 114d5614 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 114d5617 push eax */
  push32((uint32_t)(EAX));
  /* 114d5618 call 0x114c9c72 */
  push32(0x114d561du); f_114c9c72();
  /* 114d561d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5620 pop ebp */
  EBP = (pop32());
  /* 114d5621 ret 4 */
  ESPCHK(0x114d5609u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x114d5630 (446 bytes, 130 insns) */
void f_114d5630(void) {
  FTRACE(0x114d5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5630 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5631 mov ebp, esp */
  EBP = (ESP);
  /* 114d5633 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5636 call 0x114ce600 */
  push32(0x114d563bu); f_114ce600();
  /* 114d563b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d563e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5641 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 114d5644 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5648 push edx */
  push32((uint32_t)(EDX));
  /* 114d5649 call 0x114d57f0 */
  push32(0x114d564eu); f_114d57f0();
  /* 114d564e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d5654 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5658 je 0x114d5663 */
  if (C.zf) goto L_114d5663;
  /* 114d565a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d565d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5661 jne 0x114d5672 */
  if (!C.zf) goto L_114d5672;
L_114d5663:;
  /* 114d5663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5666 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5667 call dword ptr [0x1150137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150137c))), 0x114d566du);
  /* 114d566d jmp 0x114d57ea */
  goto L_114d57ea;
L_114d5672:;
  /* 114d5672 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5675 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5679 jne 0x114d568f */
  if (!C.zf) goto L_114d568f;
  /* 114d567b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d567e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 114d5685 mov eax, 1 */
  EAX = (0x1u);
  /* 114d568a jmp 0x114d57ea */
  goto L_114d57ea;
L_114d568f:;
  /* 114d568f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5692 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5696 jne 0x114d56a0 */
  if (!C.zf) goto L_114d56a0;
  /* 114d5698 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d569b jmp 0x114d57ea */
  goto L_114d57ea;
L_114d56a0:;
  /* 114d56a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d56a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d56a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d56a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d56ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 114d56af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114d56b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d56b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d56b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 114d56bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d56be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d56c2 jne 0x114d57c7 */
  if (!C.zf) goto L_114d57c7;
  /* 114d56c8 mov eax, dword ptr [0x114fd318] */
  EAX = (r32((uint32_t)(0x114fd318)));
  /* 114d56cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d56d0 jmp 0x114d56db */
  goto L_114d56db;
L_114d56d2:;
  /* 114d56d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d56d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d56d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_114d56db:;
  /* 114d56db mov edx, dword ptr [0x114fd318] */
  EDX = (r32((uint32_t)(0x114fd318)));
  /* 114d56e1 add edx, dword ptr [0x114fd31c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114fd31c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d56e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d56ea jge 0x114d5702 */
  if ((C.sf==C.of)) goto L_114d5702;
  /* 114d56ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d56ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d56f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d56f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 114d56f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 114d5700 jmp 0x114d56d2 */
  goto L_114d56d2;
L_114d5702:;
  /* 114d5702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5705 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 114d5708 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d570b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d570e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5714 jne 0x114d5725 */
  if (!C.zf) goto L_114d5725;
  /* 114d5716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5719 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 114d5720 jmp 0x114d57ad */
  goto L_114d57ad;
L_114d5725:;
  /* 114d5725 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5728 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d572e jne 0x114d573c */
  if (!C.zf) goto L_114d573c;
  /* 114d5730 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5733 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 114d573a jmp 0x114d57ad */
  goto L_114d57ad;
L_114d573c:;
  /* 114d573c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d573f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5745 jne 0x114d5753 */
  if (!C.zf) goto L_114d5753;
  /* 114d5747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d574a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 114d5751 jmp 0x114d57ad */
  goto L_114d57ad;
L_114d5753:;
  /* 114d5753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5756 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d575c jne 0x114d576a */
  if (!C.zf) goto L_114d576a;
  /* 114d575e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5761 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 114d5768 jmp 0x114d57ad */
  goto L_114d57ad;
L_114d576a:;
  /* 114d576a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d576d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5773 jne 0x114d5781 */
  if (!C.zf) goto L_114d5781;
  /* 114d5775 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5778 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 114d577f jmp 0x114d57ad */
  goto L_114d57ad;
L_114d5781:;
  /* 114d5781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5784 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d578a jne 0x114d5798 */
  if (!C.zf) goto L_114d5798;
  /* 114d578c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d578f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 114d5796 jmp 0x114d57ad */
  goto L_114d57ad;
L_114d5798:;
  /* 114d5798 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d579b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d57a1 jne 0x114d57ad */
  if (!C.zf) goto L_114d57ad;
  /* 114d57a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d57a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_114d57ad:;
  /* 114d57ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d57b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 114d57b3 push edx */
  push32((uint32_t)(EDX));
  /* 114d57b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 114d57b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x114d57b9u);
  /* 114d57b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d57bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d57bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d57c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 114d57c5 jmp 0x114d57de */
  goto L_114d57de;
L_114d57c7:;
  /* 114d57c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d57ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 114d57d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d57d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d57d7 push ecx */
  push32((uint32_t)(ECX));
  /* 114d57d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x114d57dbu);
  /* 114d57db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d57de:;
  /* 114d57de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d57e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d57e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 114d57e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114d57ea:;
  /* 114d57ea mov esp, ebp */
  ESP = (EBP);
  /* 114d57ec pop ebp */
  EBP = (pop32());
  /* 114d57ed ret  */
  ESPCHK(0x114d5630u, _esp0);
  ESP += 4; return;
}

/* FUN_100157f0 @ 0x114d57f0 (89 bytes, 35 insns) */
void f_114d57f0(void) {
  FTRACE(0x114d57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d57f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d57f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d57f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d57f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d57fa:;
  /* 114d57fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d57fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d57ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5802 je 0x114d5822 */
  if (C.zf) goto L_114d5822;
  /* 114d5804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5807 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d580a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d580d mov ecx, dword ptr [0x114fd324] */
  ECX = (r32((uint32_t)(0x114fd324)));
  /* 114d5813 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5816 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5819 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d581b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d581e jae 0x114d5822 */
  if (!C.cf) goto L_114d5822;
  /* 114d5820 jmp 0x114d57fa */
  goto L_114d57fa;
L_114d5822:;
  /* 114d5822 mov eax, dword ptr [0x114fd324] */
  EAX = (r32((uint32_t)(0x114fd324)));
  /* 114d5827 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d582a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d582d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d582f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5832 jae 0x114d583e */
  if (!C.cf) goto L_114d583e;
  /* 114d5834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5837 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d5839 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d583c je 0x114d5842 */
  if (C.zf) goto L_114d5842;
L_114d583e:;
  /* 114d583e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5840 jmp 0x114d5845 */
  goto L_114d5845;
L_114d5842:;
  /* 114d5842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114d5845:;
  /* 114d5845 mov esp, ebp */
  ESP = (EBP);
  /* 114d5847 pop ebp */
  EBP = (pop32());
  /* 114d5848 ret  */
  ESPCHK(0x114d57f0u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x114d5850 (30 bytes, 12 insns) */
void f_114d5850(void) {
  FTRACE(0x114d5850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5850 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5851 mov ebp, esp */
  EBP = (ESP);
  /* 114d5853 push 0xa */
  push32((uint32_t)(0xau));
  /* 114d5855 call 0x114d0ab0 */
  push32(0x114d585au); f_114d0ab0();
  /* 114d585a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d585d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 114d585f call 0x114d1620 */
  push32(0x114d5864u); f_114d1620();
  /* 114d5864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5867 push 3 */
  push32((uint32_t)(0x3u));
  /* 114d5869 call 0x114ce970 */
  push32(0x114d586eu); f_114ce970();
  /* 114d586e pop ebp */
  EBP = (pop32());
  /* 114d586f ret  */
  ESPCHK(0x114d5850u, _esp0);
  ESP += 4; return;
}

/* FUN_10015870 @ 0x114d5870 (130 bytes, 43 insns) */
void f_114d5870(void) {
  FTRACE(0x114d5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5870 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5871 mov ebp, esp */
  EBP = (ESP);
  /* 114d5873 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5877 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d587d jae 0x114d58a1 */
  if (!C.cf) goto L_114d58a1;
  /* 114d587f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5882 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5888 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d588b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d588e mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d5895 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114d589a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d589d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d589f jne 0x114d58bc */
  if (!C.zf) goto L_114d58bc;
L_114d58a1:;
  /* 114d58a1 call 0x114d7750 */
  push32(0x114d58a6u); f_114d7750();
  /* 114d58a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114d58ac call 0x114d7760 */
  push32(0x114d58b1u); f_114d7760();
  /* 114d58b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d58b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d58ba jmp 0x114d58ee */
  goto L_114d58ee;
L_114d58bc:;
  /* 114d58bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d58bf push edx */
  push32((uint32_t)(EDX));
  /* 114d58c0 call 0x114dacf0 */
  push32(0x114d58c5u); f_114dacf0();
  /* 114d58c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d58c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d58cb push eax */
  push32((uint32_t)(EAX));
  /* 114d58cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d58cf push ecx */
  push32((uint32_t)(ECX));
  /* 114d58d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d58d3 push edx */
  push32((uint32_t)(EDX));
  /* 114d58d4 call 0x114d5900 */
  push32(0x114d58d9u); f_114d5900();
  /* 114d58d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d58dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d58df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d58e2 push eax */
  push32((uint32_t)(EAX));
  /* 114d58e3 call 0x114dad80 */
  push32(0x114d58e8u); f_114dad80();
  /* 114d58e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d58eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114d58ee:;
  /* 114d58ee mov esp, ebp */
  ESP = (EBP);
  /* 114d58f0 pop ebp */
  EBP = (pop32());
  /* 114d58f1 ret  */
  ESPCHK(0x114d5870u, _esp0);
  ESP += 4; return;
}

/* FUN_10015900 @ 0x114d5900 (178 bytes, 56 insns) */
void f_114d5900(void) {
  FTRACE(0x114d5900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5900 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5901 mov ebp, esp */
  EBP = (ESP);
  /* 114d5903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5909 push eax */
  push32((uint32_t)(EAX));
  /* 114d590a call 0x114dab70 */
  push32(0x114d590fu); f_114dab70();
  /* 114d590f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5912 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d5915 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5919 jne 0x114d592e */
  if (!C.zf) goto L_114d592e;
  /* 114d591b call 0x114d7750 */
  push32(0x114d5920u); f_114d7750();
  /* 114d5920 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114d5926 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d5929 jmp 0x114d59ae */
  goto L_114d59ae;
L_114d592e:;
  /* 114d592e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d5931 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5932 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d5934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5937 push edx */
  push32((uint32_t)(EDX));
  /* 114d5938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d593b push eax */
  push32((uint32_t)(EAX));
  /* 114d593c call dword ptr [0x11501384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501384))), 0x114d5942u);
  /* 114d5942 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d5945 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5949 jne 0x114d5956 */
  if (!C.zf) goto L_114d5956;
  /* 114d594b call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114d5951u);
  /* 114d5951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d5954 jmp 0x114d595d */
  goto L_114d595d;
L_114d5956:;
  /* 114d5956 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d595d:;
  /* 114d595d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5961 je 0x114d5974 */
  if (C.zf) goto L_114d5974;
  /* 114d5963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5966 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5967 call 0x114d76b0 */
  push32(0x114d596cu); f_114d76b0();
  /* 114d596c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d596f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d5972 jmp 0x114d59ae */
  goto L_114d59ae;
L_114d5974:;
  /* 114d5974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5977 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114d597a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d597d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114d5980 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5983 mov ecx, dword ptr [edx*4 + 0x11500b00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114d598a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 114d598e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 114d5991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5994 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d599a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114d599d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d59a0 mov eax, dword ptr [eax*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114d59a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 114d59ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114d59ae:;
  /* 114d59ae mov esp, ebp */
  ESP = (EBP);
  /* 114d59b0 pop ebp */
  EBP = (pop32());
  /* 114d59b1 ret  */
  ESPCHK(0x114d5900u, _esp0);
  ESP += 4; return;
}

/* FUN_100159c0 @ 0x114d59c0 (130 bytes, 43 insns) */
void f_114d59c0(void) {
  FTRACE(0x114d59c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d59c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d59c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d59c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d59c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d59c7 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d59cd jae 0x114d59f1 */
  if (!C.cf) goto L_114d59f1;
  /* 114d59cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d59d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d59d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d59d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d59db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d59de mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d59e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114d59ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d59ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d59ef jne 0x114d5a0c */
  if (!C.zf) goto L_114d5a0c;
L_114d59f1:;
  /* 114d59f1 call 0x114d7750 */
  push32(0x114d59f6u); f_114d7750();
  /* 114d59f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114d59fc call 0x114d7760 */
  push32(0x114d5a01u); f_114d7760();
  /* 114d5a01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d5a07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d5a0a jmp 0x114d5a3e */
  goto L_114d5a3e;
L_114d5a0c:;
  /* 114d5a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5a0f push edx */
  push32((uint32_t)(EDX));
  /* 114d5a10 call 0x114dacf0 */
  push32(0x114d5a15u); f_114dacf0();
  /* 114d5a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5a18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d5a1b push eax */
  push32((uint32_t)(EAX));
  /* 114d5a1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5a1f push ecx */
  push32((uint32_t)(ECX));
  /* 114d5a20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5a23 push edx */
  push32((uint32_t)(EDX));
  /* 114d5a24 call 0x114d5a50 */
  push32(0x114d5a29u); f_114d5a50();
  /* 114d5a29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5a2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d5a2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5a32 push eax */
  push32((uint32_t)(EAX));
  /* 114d5a33 call 0x114dad80 */
  push32(0x114d5a38u); f_114dad80();
  /* 114d5a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5a3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114d5a3e:;
  /* 114d5a3e mov esp, ebp */
  ESP = (EBP);
  /* 114d5a40 pop ebp */
  EBP = (pop32());
  /* 114d5a41 ret  */
  ESPCHK(0x114d59c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a50 @ 0x114d5a50 (627 bytes, 182 insns) */
void f_114d5a50(void) {
  FTRACE(0x114d5a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5a50 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5a51 mov ebp, esp */
  EBP = (ESP);
  /* 114d5a53 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5a59 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114d5a60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5a63 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 114d5a69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5a6d jne 0x114d5a76 */
  if (!C.zf) goto L_114d5a76;
  /* 114d5a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5a71 jmp 0x114d5cbf */
  goto L_114d5cbf;
L_114d5a76:;
  /* 114d5a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5a79 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5a7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5a7f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d5a82 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5a85 mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d5a8c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114d5a91 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114d5a94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d5a96 je 0x114d5aa8 */
  if (C.zf) goto L_114d5aa8;
  /* 114d5a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d5a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d5a9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5a9f push edx */
  push32((uint32_t)(EDX));
  /* 114d5aa0 call 0x114d5900 */
  push32(0x114d5aa5u); f_114d5900();
  /* 114d5aa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d5aa8:;
  /* 114d5aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5aab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5ab1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114d5ab4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5ab7 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114d5abe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 114d5ac3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 114d5ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d5aca je 0x114d5bdc */
  if (C.zf) goto L_114d5bdc;
  /* 114d5ad0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5ad3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d5ad6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_114d5add:;
  /* 114d5add mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5ae0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5ae3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5ae6 jae 0x114d5bda */
  if (!C.cf) goto L_114d5bda;
  /* 114d5aec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 114d5af2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d5af5:;
  /* 114d5af5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5af8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 114d5afe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5b00 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5b06 jge 0x114d5b67 */
  if ((C.sf==C.of)) goto L_114d5b67;
  /* 114d5b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5b0b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5b0e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5b11 jae 0x114d5b67 */
  if (!C.cf) goto L_114d5b67;
  /* 114d5b13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5b16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d5b18 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 114d5b1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5b21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5b24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d5b27 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 114d5b2e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5b31 jne 0x114d5b51 */
  if (!C.zf) goto L_114d5b51;
  /* 114d5b33 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 114d5b39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5b3c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 114d5b42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5b45 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 114d5b48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5b4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5b4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114d5b51:;
  /* 114d5b51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5b54 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 114d5b5a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 114d5b5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5b5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5b62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d5b65 jmp 0x114d5af5 */
  goto L_114d5af5;
L_114d5b67:;
  /* 114d5b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d5b69 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 114d5b6f push edx */
  push32((uint32_t)(EDX));
  /* 114d5b70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5b73 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 114d5b79 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5b7b push eax */
  push32((uint32_t)(EAX));
  /* 114d5b7c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 114d5b82 push edx */
  push32((uint32_t)(EDX));
  /* 114d5b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5b86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5b8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114d5b8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5b92 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114d5b99 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 114d5b9c push eax */
  push32((uint32_t)(EAX));
  /* 114d5b9d call dword ptr [0x1150141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150141c))), 0x114d5ba3u);
  /* 114d5ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d5ba5 je 0x114d5bca */
  if (C.zf) goto L_114d5bca;
  /* 114d5ba7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5baa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5bb0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d5bb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d5bb6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 114d5bbc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5bbe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5bc4 jge 0x114d5bc8 */
  if ((C.sf==C.of)) goto L_114d5bc8;
  /* 114d5bc6 jmp 0x114d5bda */
  goto L_114d5bda;
L_114d5bc8:;
  /* 114d5bc8 jmp 0x114d5bd5 */
  goto L_114d5bd5;
L_114d5bca:;
  /* 114d5bca call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114d5bd0u);
  /* 114d5bd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d5bd3 jmp 0x114d5bda */
  goto L_114d5bda;
L_114d5bd5:;
  /* 114d5bd5 jmp 0x114d5add */
  goto L_114d5add;
L_114d5bda:;
  /* 114d5bda jmp 0x114d5c2c */
  goto L_114d5c2c;
L_114d5bdc:;
  /* 114d5bdc push 0 */
  push32((uint32_t)(0x0u));
  /* 114d5bde lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 114d5be4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5be5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d5be8 push edx */
  push32((uint32_t)(EDX));
  /* 114d5be9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5bec push eax */
  push32((uint32_t)(EAX));
  /* 114d5bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5bf0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5bf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5bf6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d5bf9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5bfc mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d5c03 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 114d5c06 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5c07 call dword ptr [0x1150141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150141c))), 0x114d5c0du);
  /* 114d5c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d5c0f je 0x114d5c23 */
  if (C.zf) goto L_114d5c23;
  /* 114d5c11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d5c18 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 114d5c1e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d5c21 jmp 0x114d5c2c */
  goto L_114d5c2c;
L_114d5c23:;
  /* 114d5c23 call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114d5c29u);
  /* 114d5c29 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d5c2c:;
  /* 114d5c2c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5c30 jne 0x114d5cb6 */
  if (!C.zf) goto L_114d5cb6;
  /* 114d5c36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5c3a je 0x114d5c6a */
  if (C.zf) goto L_114d5c6a;
  /* 114d5c3c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5c40 jne 0x114d5c59 */
  if (!C.zf) goto L_114d5c59;
  /* 114d5c42 call 0x114d7750 */
  push32(0x114d5c47u); f_114d7750();
  /* 114d5c47 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114d5c4d call 0x114d7760 */
  push32(0x114d5c52u); f_114d7760();
  /* 114d5c52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d5c55 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d5c57 jmp 0x114d5c65 */
  goto L_114d5c65;
L_114d5c59:;
  /* 114d5c59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d5c5c push edx */
  push32((uint32_t)(EDX));
  /* 114d5c5d call 0x114d76b0 */
  push32(0x114d5c62u); f_114d76b0();
  /* 114d5c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d5c65:;
  /* 114d5c65 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d5c68 jmp 0x114d5cbf */
  goto L_114d5cbf;
L_114d5c6a:;
  /* 114d5c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5c6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5c70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5c73 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114d5c76 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5c79 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114d5c80 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 114d5c85 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 114d5c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d5c8a je 0x114d5c9b */
  if (C.zf) goto L_114d5c9b;
  /* 114d5c8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5c8f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d5c92 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5c95 jne 0x114d5c9b */
  if (!C.zf) goto L_114d5c9b;
  /* 114d5c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5c99 jmp 0x114d5cbf */
  goto L_114d5cbf;
L_114d5c9b:;
  /* 114d5c9b call 0x114d7750 */
  push32(0x114d5ca0u); f_114d7750();
  /* 114d5ca0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 114d5ca6 call 0x114d7760 */
  push32(0x114d5cabu); f_114d7760();
  /* 114d5cab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d5cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d5cb4 jmp 0x114d5cbf */
  goto L_114d5cbf;
L_114d5cb6:;
  /* 114d5cb6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d5cb9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_114d5cbf:;
  /* 114d5cbf mov esp, ebp */
  ESP = (EBP);
  /* 114d5cc1 pop ebp */
  EBP = (pop32());
  /* 114d5cc2 ret  */
  ESPCHK(0x114d5a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cd0 @ 0x114d5cd0 (199 bytes, 68 insns) */
void f_114d5cd0(void) {
  FTRACE(0x114d5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 114d5cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5cd4 push ebx */
  push32((uint32_t)(EBX));
  /* 114d5cd5 push esi */
  push32((uint32_t)(ESI));
  /* 114d5cd6 push edi */
  push32((uint32_t)(EDI));
L_114d5cd7:;
  /* 114d5cd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5cdb jne 0x114d5cfb */
  if (!C.zf) goto L_114d5cfb;
  /* 114d5cdd push 0x114f9f14 */
  push32((uint32_t)(0x114f9f14u));
  /* 114d5ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d5ce4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 114d5ce6 push 0x114fa2f4 */
  push32((uint32_t)(0x114fa2f4u));
  /* 114d5ceb push 2 */
  push32((uint32_t)(0x2u));
  /* 114d5ced call 0x114ca4c0 */
  push32(0x114d5cf2u); f_114ca4c0();
  /* 114d5cf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5cf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5cf8 jne 0x114d5cfb */
  if (!C.zf) goto L_114d5cfb;
  /* 114d5cfa int3  */
  x86_unimpl("int3 @ 0x114d5cfa");
L_114d5cfb:;
  /* 114d5cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d5cff jne 0x114d5cd7 */
  if (!C.zf) goto L_114d5cd7;
  /* 114d5d01 mov ecx, dword ptr [0x114ff32c] */
  ECX = (r32((uint32_t)(0x114ff32c)));
  /* 114d5d07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5d0a mov dword ptr [0x114ff32c], ecx */
  w32((uint32_t)(0x114ff32c), (ECX));
  /* 114d5d10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5d13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d5d16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 114d5d18 push 0x114fa2f4 */
  push32((uint32_t)(0x114fa2f4u));
  /* 114d5d1d push 2 */
  push32((uint32_t)(0x2u));
  /* 114d5d1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114d5d24 call 0x114cb900 */
  push32(0x114d5d29u); f_114cb900();
  /* 114d5d29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 114d5d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5d39 je 0x114d5d56 */
  if (C.zf) goto L_114d5d56;
  /* 114d5d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114d5d41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d5d44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 114d5d4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 114d5d54 jmp 0x114d5d7b */
  goto L_114d5d7b;
L_114d5d56:;
  /* 114d5d56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d5d5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d5d5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114d5d65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5d6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d5d71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_114d5d7b:;
  /* 114d5d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d5d84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d5d86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5d89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114d5d90 pop edi */
  EDI = (pop32());
  /* 114d5d91 pop esi */
  ESI = (pop32());
  /* 114d5d92 pop ebx */
  EBX = (pop32());
  /* 114d5d93 mov esp, ebp */
  ESP = (EBP);
  /* 114d5d95 pop ebp */
  EBP = (pop32());
  /* 114d5d96 ret  */
  ESPCHK(0x114d5cd0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x114d5da0 (50 bytes, 17 insns) */
void f_114d5da0(void) {
  FTRACE(0x114d5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5da0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5da1 mov ebp, esp */
  EBP = (ESP);
  /* 114d5da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5da6 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5dac jb 0x114d5db2 */
  if (C.cf) goto L_114d5db2;
  /* 114d5dae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d5db0 jmp 0x114d5dd0 */
  goto L_114d5dd0;
L_114d5db2:;
  /* 114d5db2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5db5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5db8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5dbb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d5dbe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5dc1 mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d5dc8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114d5dcd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_114d5dd0:;
  /* 114d5dd0 pop ebp */
  EBP = (pop32());
  /* 114d5dd1 ret  */
  ESPCHK(0x114d5da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015de0 @ 0x114d5de0 (300 bytes, 80 insns) */
void f_114d5de0(void) {
  FTRACE(0x114d5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5de0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5de1 mov ebp, esp */
  EBP = (ESP);
  /* 114d5de3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5de4 cmp dword ptr [0x11500ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5deb jne 0x114d5df9 */
  if (!C.zf) goto L_114d5df9;
  /* 114d5ded mov dword ptr [0x11500ac0], 0x200 */
  w32((uint32_t)(0x11500ac0), (0x200u));
  /* 114d5df7 jmp 0x114d5e0c */
  goto L_114d5e0c;
L_114d5df9:;
  /* 114d5df9 cmp dword ptr [0x11500ac0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11500ac0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5e00 jge 0x114d5e0c */
  if ((C.sf==C.of)) goto L_114d5e0c;
  /* 114d5e02 mov dword ptr [0x11500ac0], 0x14 */
  w32((uint32_t)(0x11500ac0), (0x14u));
L_114d5e0c:;
  /* 114d5e0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 114d5e11 push 0x114fa300 */
  push32((uint32_t)(0x114fa300u));
  /* 114d5e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d5e18 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d5e1a mov eax, dword ptr [0x11500ac0] */
  EAX = (r32((uint32_t)(0x11500ac0)));
  /* 114d5e1f push eax */
  push32((uint32_t)(EAX));
  /* 114d5e20 call 0x114cbd10 */
  push32(0x114d5e25u); f_114cbd10();
  /* 114d5e25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5e28 mov dword ptr [0x114ff768], eax */
  w32((uint32_t)(0x114ff768), (EAX));
  /* 114d5e2d cmp dword ptr [0x114ff768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5e34 jne 0x114d5e75 */
  if (!C.zf) goto L_114d5e75;
  /* 114d5e36 mov dword ptr [0x11500ac0], 0x14 */
  w32((uint32_t)(0x11500ac0), (0x14u));
  /* 114d5e40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 114d5e45 push 0x114fa300 */
  push32((uint32_t)(0x114fa300u));
  /* 114d5e4a push 2 */
  push32((uint32_t)(0x2u));
  /* 114d5e4c push 4 */
  push32((uint32_t)(0x4u));
  /* 114d5e4e mov ecx, dword ptr [0x11500ac0] */
  ECX = (r32((uint32_t)(0x11500ac0)));
  /* 114d5e54 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5e55 call 0x114cbd10 */
  push32(0x114d5e5au); f_114cbd10();
  /* 114d5e5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5e5d mov dword ptr [0x114ff768], eax */
  w32((uint32_t)(0x114ff768), (EAX));
  /* 114d5e62 cmp dword ptr [0x114ff768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5e69 jne 0x114d5e75 */
  if (!C.zf) goto L_114d5e75;
  /* 114d5e6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 114d5e6d call 0x114ca370 */
  push32(0x114d5e72u); f_114ca370();
  /* 114d5e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d5e75:;
  /* 114d5e75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d5e7c jmp 0x114d5e87 */
  goto L_114d5e87;
L_114d5e7e:;
  /* 114d5e7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5e81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5e84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d5e87:;
  /* 114d5e87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5e8b jge 0x114d5ea6 */
  if ((C.sf==C.of)) goto L_114d5ea6;
  /* 114d5e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5e90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5e93 add eax, 0x114fd328 */
  { uint32_t _a=(EAX),_b=(0x114fd328u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5e98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5e9b mov edx, dword ptr [0x114ff768] */
  EDX = (r32((uint32_t)(0x114ff768)));
  /* 114d5ea1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 114d5ea4 jmp 0x114d5e7e */
  goto L_114d5e7e;
L_114d5ea6:;
  /* 114d5ea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d5ead jmp 0x114d5eb8 */
  goto L_114d5eb8;
L_114d5eaf:;
  /* 114d5eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5eb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5eb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d5eb8:;
  /* 114d5eb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5ebc jge 0x114d5f08 */
  if ((C.sf==C.of)) goto L_114d5f08;
  /* 114d5ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5ec1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5ec7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d5eca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5ecd mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d5ed4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5ed8 je 0x114d5ef6 */
  if (C.zf) goto L_114d5ef6;
  /* 114d5eda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5edd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5ee0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5ee3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d5ee6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d5ee9 mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114d5ef0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5ef4 jne 0x114d5f06 */
  if (!C.zf) goto L_114d5f06;
L_114d5ef6:;
  /* 114d5ef6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d5ef9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114d5efc mov dword ptr [ecx + 0x114fd338], 0xffffffff */
  w32((uint32_t)(ECX + 0x114fd338), (0xffffffffu));
L_114d5f06:;
  /* 114d5f06 jmp 0x114d5eaf */
  goto L_114d5eaf;
L_114d5f08:;
  /* 114d5f08 mov esp, ebp */
  ESP = (EBP);
  /* 114d5f0a pop ebp */
  EBP = (pop32());
  /* 114d5f0b ret  */
  ESPCHK(0x114d5de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f10 @ 0x114d5f10 (26 bytes, 9 insns) */
void f_114d5f10(void) {
  FTRACE(0x114d5f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5f10 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5f11 mov ebp, esp */
  EBP = (ESP);
  /* 114d5f13 call 0x114daff0 */
  push32(0x114d5f18u); f_114daff0();
  /* 114d5f18 movsx eax, byte ptr [0x114ff1e4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114ff1e4))));
  /* 114d5f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d5f21 je 0x114d5f28 */
  if (C.zf) goto L_114d5f28;
  /* 114d5f23 call 0x114dadb0 */
  push32(0x114d5f28u); f_114dadb0();
L_114d5f28:;
  /* 114d5f28 pop ebp */
  EBP = (pop32());
  /* 114d5f29 ret  */
  ESPCHK(0x114d5f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f30 @ 0x114d5f30 (61 bytes, 20 insns) */
void f_114d5f30(void) {
  FTRACE(0x114d5f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5f30 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5f31 mov ebp, esp */
  EBP = (ESP);
  /* 114d5f33 cmp dword ptr [ebp + 8], 0x114fd328 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114fd328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5f3a jb 0x114d5f5e */
  if (C.cf) goto L_114d5f5e;
  /* 114d5f3c cmp dword ptr [ebp + 8], 0x114fd588 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114fd588u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5f43 ja 0x114d5f5e */
  if ((!C.cf&&!C.zf)) goto L_114d5f5e;
  /* 114d5f45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5f48 sub eax, 0x114fd328 */
  { uint32_t _a=(EAX),_b=(0x114fd328u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5f4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5f50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5f53 push eax */
  push32((uint32_t)(EAX));
  /* 114d5f54 call 0x114cb800 */
  push32(0x114d5f59u); f_114cb800();
  /* 114d5f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5f5c jmp 0x114d5f6b */
  goto L_114d5f6b;
L_114d5f5e:;
  /* 114d5f5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5f61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5f64 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5f65 call dword ptr [0x11501440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501440))), 0x114d5f6bu);
L_114d5f6b:;
  /* 114d5f6b pop ebp */
  EBP = (pop32());
  /* 114d5f6c ret  */
  ESPCHK(0x114d5f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f70 @ 0x114d5f70 (41 bytes, 16 insns) */
void f_114d5f70(void) {
  FTRACE(0x114d5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5f71 mov ebp, esp */
  EBP = (ESP);
  /* 114d5f73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5f77 jge 0x114d5f8a */
  if ((C.sf==C.of)) goto L_114d5f8a;
  /* 114d5f79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5f7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5f7f push eax */
  push32((uint32_t)(EAX));
  /* 114d5f80 call 0x114cb800 */
  push32(0x114d5f85u); f_114cb800();
  /* 114d5f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5f88 jmp 0x114d5f97 */
  goto L_114d5f97;
L_114d5f8a:;
  /* 114d5f8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5f8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5f90 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5f91 call dword ptr [0x11501440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501440))), 0x114d5f97u);
L_114d5f97:;
  /* 114d5f97 pop ebp */
  EBP = (pop32());
  /* 114d5f98 ret  */
  ESPCHK(0x114d5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fa0 @ 0x114d5fa0 (61 bytes, 20 insns) */
void f_114d5fa0(void) {
  FTRACE(0x114d5fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5fa1 mov ebp, esp */
  EBP = (ESP);
  /* 114d5fa3 cmp dword ptr [ebp + 8], 0x114fd328 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114fd328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5faa jb 0x114d5fce */
  if (C.cf) goto L_114d5fce;
  /* 114d5fac cmp dword ptr [ebp + 8], 0x114fd588 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114fd588u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5fb3 ja 0x114d5fce */
  if ((!C.cf&&!C.zf)) goto L_114d5fce;
  /* 114d5fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5fb8 sub eax, 0x114fd328 */
  { uint32_t _a=(EAX),_b=(0x114fd328u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d5fbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d5fc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5fc3 push eax */
  push32((uint32_t)(EAX));
  /* 114d5fc4 call 0x114cb8a0 */
  push32(0x114d5fc9u); f_114cb8a0();
  /* 114d5fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5fcc jmp 0x114d5fdb */
  goto L_114d5fdb;
L_114d5fce:;
  /* 114d5fce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5fd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d5fd5 call dword ptr [0x11501444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501444))), 0x114d5fdbu);
L_114d5fdb:;
  /* 114d5fdb pop ebp */
  EBP = (pop32());
  /* 114d5fdc ret  */
  ESPCHK(0x114d5fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fe0 @ 0x114d5fe0 (41 bytes, 16 insns) */
void f_114d5fe0(void) {
  FTRACE(0x114d5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 114d5fe3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d5fe7 jge 0x114d5ffa */
  if ((C.sf==C.of)) goto L_114d5ffa;
  /* 114d5fe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d5fec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5fef push eax */
  push32((uint32_t)(EAX));
  /* 114d5ff0 call 0x114cb8a0 */
  push32(0x114d5ff5u); f_114cb8a0();
  /* 114d5ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d5ff8 jmp 0x114d6007 */
  goto L_114d6007;
L_114d5ffa:;
  /* 114d5ffa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d5ffd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6000 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6001 call dword ptr [0x11501444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501444))), 0x114d6007u);
L_114d6007:;
  /* 114d6007 pop ebp */
  EBP = (pop32());
  /* 114d6008 ret  */
  ESPCHK(0x114d5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016010 @ 0x114d6010 (119 bytes, 34 insns) */
void f_114d6010(void) {
  FTRACE(0x114d6010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6010 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6011 mov ebp, esp */
  EBP = (ESP);
  /* 114d6013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6016 push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114d601b call dword ptr [0x11501430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501430))), 0x114d6021u);
  /* 114d6021 cmp dword ptr [0x114ff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6028 je 0x114d6048 */
  if (C.zf) goto L_114d6048;
  /* 114d602a push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114d602f call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114d6035u);
  /* 114d6035 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d6037 call 0x114cb800 */
  push32(0x114d603cu); f_114cb800();
  /* 114d603c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d603f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d6046 jmp 0x114d604f */
  goto L_114d604f;
L_114d6048:;
  /* 114d6048 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d604f:;
  /* 114d604f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 114d6053 push eax */
  push32((uint32_t)(EAX));
  /* 114d6054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6057 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6058 call 0x114d6090 */
  push32(0x114d605du); f_114d6090();
  /* 114d605d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6060 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d6063 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6067 je 0x114d6075 */
  if (C.zf) goto L_114d6075;
  /* 114d6069 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d606b call 0x114cb8a0 */
  push32(0x114d6070u); f_114cb8a0();
  /* 114d6070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6073 jmp 0x114d6080 */
  goto L_114d6080;
L_114d6075:;
  /* 114d6075 push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114d607a call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114d6080u);
L_114d6080:;
  /* 114d6080 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6083 mov esp, ebp */
  ESP = (EBP);
  /* 114d6085 pop ebp */
  EBP = (pop32());
  /* 114d6086 ret  */
  ESPCHK(0x114d6010u, _esp0);
  ESP += 4; return;
}

/* FUN_10016090 @ 0x114d6090 (160 bytes, 50 insns) */
void f_114d6090(void) {
  FTRACE(0x114d6090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6090 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6091 mov ebp, esp */
  EBP = (ESP);
  /* 114d6093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6096 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d609a jne 0x114d60a3 */
  if (!C.zf) goto L_114d60a3;
  /* 114d609c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d609e jmp 0x114d612c */
  goto L_114d612c;
L_114d60a3:;
  /* 114d60a3 cmp dword ptr [0x114ff408], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff408))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d60aa jne 0x114d60da */
  if (!C.zf) goto L_114d60da;
  /* 114d60ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d60af and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d60b4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d60b9 jle 0x114d60cb */
  if ((C.zf||C.sf!=C.of)) goto L_114d60cb;
  /* 114d60bb call 0x114d7750 */
  push32(0x114d60c0u); f_114d7750();
  /* 114d60c0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 114d60c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d60c9 jmp 0x114d612c */
  goto L_114d612c;
L_114d60cb:;
  /* 114d60cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d60ce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 114d60d1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 114d60d3 mov eax, 1 */
  EAX = (0x1u);
  /* 114d60d8 jmp 0x114d612c */
  goto L_114d612c;
L_114d60da:;
  /* 114d60da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d60e1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 114d60e4 push eax */
  push32((uint32_t)(EAX));
  /* 114d60e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d60e7 mov ecx, dword ptr [0x114fd040] */
  ECX = (r32((uint32_t)(0x114fd040)));
  /* 114d60ed push ecx */
  push32((uint32_t)(ECX));
  /* 114d60ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d60f1 push edx */
  push32((uint32_t)(EDX));
  /* 114d60f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d60f4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 114d60f7 push eax */
  push32((uint32_t)(EAX));
  /* 114d60f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114d60fd mov ecx, dword ptr [0x114ff418] */
  ECX = (r32((uint32_t)(0x114ff418)));
  /* 114d6103 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6104 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d610au);
  /* 114d610a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d610d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6111 je 0x114d6119 */
  if (C.zf) goto L_114d6119;
  /* 114d6113 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6117 je 0x114d6129 */
  if (C.zf) goto L_114d6129;
L_114d6119:;
  /* 114d6119 call 0x114d7750 */
  push32(0x114d611eu); f_114d7750();
  /* 114d611e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 114d6124 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d6127 jmp 0x114d612c */
  goto L_114d612c;
L_114d6129:;
  /* 114d6129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114d612c:;
  /* 114d612c mov esp, ebp */
  ESP = (EBP);
  /* 114d612e pop ebp */
  EBP = (pop32());
  /* 114d612f ret  */
  ESPCHK(0x114d6090u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x114d6130 (104 bytes, 43 insns) */
void f_114d6130(void) {
  FTRACE(0x114d6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6130 push ebx */
  push32((uint32_t)(EBX));
  /* 114d6131 push esi */
  push32((uint32_t)(ESI));
  /* 114d6132 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 114d6136 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6138 jne 0x114d6152 */
  if (!C.zf) goto L_114d6152;
  /* 114d613a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 114d613e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 114d6142 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6144 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d6146 mov ebx, eax */
  EBX = (EAX);
  /* 114d6148 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 114d614c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d614e mov edx, ebx */
  EDX = (EBX);
  /* 114d6150 jmp 0x114d6193 */
  goto L_114d6193;
L_114d6152:;
  /* 114d6152 mov ecx, eax */
  ECX = (EAX);
  /* 114d6154 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 114d6158 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 114d615c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_114d6160:;
  /* 114d6160 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d6162 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 114d6164 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d6166 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 114d6168 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d616a jne 0x114d6160 */
  if (!C.zf) goto L_114d6160;
  /* 114d616c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d616e mov esi, eax */
  ESI = (EAX);
  /* 114d6170 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114d6174 mov ecx, eax */
  ECX = (EAX);
  /* 114d6176 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 114d617a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114d617c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d617e jb 0x114d618e */
  if (C.cf) goto L_114d618e;
  /* 114d6180 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6184 ja 0x114d618e */
  if ((!C.cf&&!C.zf)) goto L_114d618e;
  /* 114d6186 jb 0x114d618f */
  if (C.cf) goto L_114d618f;
  /* 114d6188 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d618c jbe 0x114d618f */
  if ((C.cf||C.zf)) goto L_114d618f;
L_114d618e:;
  /* 114d618e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_114d618f:;
  /* 114d618f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6191 mov eax, esi */
  EAX = (ESI);
L_114d6193:;
  /* 114d6193 pop esi */
  ESI = (pop32());
  /* 114d6194 pop ebx */
  EBX = (pop32());
  /* 114d6195 ret 0x10 */
  ESPCHK(0x114d6130u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x114d61a0 (117 bytes, 44 insns) */
void f_114d61a0(void) {
  FTRACE(0x114d61a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d61a0 push ebx */
  push32((uint32_t)(EBX));
  /* 114d61a1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 114d61a5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d61a7 jne 0x114d61c1 */
  if (!C.zf) goto L_114d61c1;
  /* 114d61a9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 114d61ad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 114d61b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d61b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d61b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114d61b9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d61bb mov eax, edx */
  EAX = (EDX);
  /* 114d61bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d61bf jmp 0x114d6211 */
  goto L_114d6211;
L_114d61c1:;
  /* 114d61c1 mov ecx, eax */
  ECX = (EAX);
  /* 114d61c3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 114d61c7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 114d61cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_114d61cf:;
  /* 114d61cf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d61d1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 114d61d3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d61d5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 114d61d7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d61d9 jne 0x114d61cf */
  if (!C.zf) goto L_114d61cf;
  /* 114d61db div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d61dd mov ecx, eax */
  ECX = (EAX);
  /* 114d61df mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114d61e3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 114d61e4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114d61e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d61ea jb 0x114d61fa */
  if (C.cf) goto L_114d61fa;
  /* 114d61ec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d61f0 ja 0x114d61fa */
  if ((!C.cf&&!C.zf)) goto L_114d61fa;
  /* 114d61f2 jb 0x114d6202 */
  if (C.cf) goto L_114d6202;
  /* 114d61f4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d61f8 jbe 0x114d6202 */
  if ((C.cf||C.zf)) goto L_114d6202;
L_114d61fa:;
  /* 114d61fa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d61fe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_114d6202:;
  /* 114d6202 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6206 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d620a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d620c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d620e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_114d6211:;
  /* 114d6211 pop ebx */
  EBX = (pop32());
  /* 114d6212 ret 0x10 */
  ESPCHK(0x114d61a0u, _esp0);
  ESP += 20; return;
}

