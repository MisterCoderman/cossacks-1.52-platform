#include "recomp.h"

/* FUN_100068e0 @ 0x10c568e0 (10 bytes, 5 insns) */
void f_10c568e0(void) {
  FTRACE(0x10c568e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c568e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c568e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c568e3 mov eax, dword ptr [0x10c7cc94] */
  EAX = (r32((uint32_t)(0x10c7cc94)));
  /* 10c568e8 pop ebp */
  EBP = (pop32());
  /* 10c568e9 ret  */
  ESPCHK(0x10c568e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x10c568f0 (31 bytes, 11 insns) */
void f_10c568f0(void) {
  FTRACE(0x10c568f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c568f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c568f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c568f3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c568fa jbe 0x10c56900 */
  if ((C.cf||C.zf)) goto L_10c56900;
  /* 10c568fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c568fe jmp 0x10c5690d */
  goto L_10c5690d;
L_10c56900:;
  /* 10c56900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56903 mov dword ptr [0x10c7cc94], eax */
  w32((uint32_t)(0x10c7cc94), (EAX));
  /* 10c56908 mov eax, 1 */
  EAX = (0x1u);
L_10c5690d:;
  /* 10c5690d pop ebp */
  EBP = (pop32());
  /* 10c5690e ret  */
  ESPCHK(0x10c568f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x10c56910 (89 bytes, 20 insns) */
void f_10c56910(void) {
  FTRACE(0x10c56910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56910 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56911 mov ebp, esp */
  EBP = (ESP);
  /* 10c56913 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10c56918 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5691a mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c5691f push eax */
  push32((uint32_t)(EAX));
  /* 10c56920 call dword ptr [0x10c802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d0))), 0x10c56926u);
  /* 10c56926 mov dword ptr [0x10c7fda8], eax */
  w32((uint32_t)(0x10c7fda8), (EAX));
  /* 10c5692b cmp dword ptr [0x10c7fda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56932 jne 0x10c56938 */
  if (!C.zf) goto L_10c56938;
  /* 10c56934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c56936 jmp 0x10c56967 */
  goto L_10c56967;
L_10c56938:;
  /* 10c56938 mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c5693e mov dword ptr [0x10c7fd9c], ecx */
  w32((uint32_t)(0x10c7fd9c), (ECX));
  /* 10c56944 mov dword ptr [0x10c7fda0], 0 */
  w32((uint32_t)(0x10c7fda0), (0x0u));
  /* 10c5694e mov dword ptr [0x10c7fda4], 0 */
  w32((uint32_t)(0x10c7fda4), (0x0u));
  /* 10c56958 mov dword ptr [0x10c7fd88], 0x10 */
  w32((uint32_t)(0x10c7fd88), (0x10u));
  /* 10c56962 mov eax, 1 */
  EAX = (0x1u);
L_10c56967:;
  /* 10c56967 pop ebp */
  EBP = (pop32());
  /* 10c56968 ret  */
  ESPCHK(0x10c56910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x10c56970 (85 bytes, 29 insns) */
void f_10c56970(void) {
  FTRACE(0x10c56970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56970 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56971 mov ebp, esp */
  EBP = (ESP);
  /* 10c56973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56976 mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c5697b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5697e mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c56984 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56986 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c56989 mov edx, dword ptr [0x10c7fda8] */
  EDX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c5698f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c56992:;
  /* 10c56992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56995 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56998 jae 0x10c569bf */
  if (!C.cf) goto L_10c569bf;
  /* 10c5699a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5699d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c569a0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c569a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c569a6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c569ad jae 0x10c569b4 */
  if (!C.cf) goto L_10c569b4;
  /* 10c569af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c569b2 jmp 0x10c569c1 */
  goto L_10c569c1;
L_10c569b4:;
  /* 10c569b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c569b7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c569ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c569bd jmp 0x10c56992 */
  goto L_10c56992;
L_10c569bf:;
  /* 10c569bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c569c1:;
  /* 10c569c1 mov esp, ebp */
  ESP = (EBP);
  /* 10c569c3 pop ebp */
  EBP = (pop32());
  /* 10c569c4 ret  */
  ESPCHK(0x10c56970u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d0 @ 0x10c569d0 (95 bytes, 33 insns) */
void f_10c569d0(void) {
  FTRACE(0x10c569d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c569d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c569d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c569d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c569d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c569d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c569dc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c569df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c569e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c569e5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c569e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c569eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c569f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c569f3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c569f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c569f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c569fb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c569fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c569ff jne 0x10c56a21 */
  if (!C.zf) goto L_10c56a21;
  /* 10c56a01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56a04 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10c56a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c56a09 jne 0x10c56a21 */
  if (!C.zf) goto L_10c56a21;
  /* 10c56a0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56a0e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c56a14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56a16 je 0x10c56a21 */
  if (C.zf) goto L_10c56a21;
  /* 10c56a18 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10c56a1f jmp 0x10c56a28 */
  goto L_10c56a28;
L_10c56a21:;
  /* 10c56a21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c56a28:;
  /* 10c56a28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c56a2b mov esp, ebp */
  ESP = (EBP);
  /* 10c56a2d pop ebp */
  EBP = (pop32());
  /* 10c56a2e ret  */
  ESPCHK(0x10c569d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a30 @ 0x10c56a30 (1485 bytes, 453 insns) */
void f_10c56a30(void) {
  FTRACE(0x10c56a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56a31 mov ebp, esp */
  EBP = (ESP);
  /* 10c56a33 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56a39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c56a3c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10c56a3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56a45 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56a48 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c56a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c56a4e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10c56a51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c56a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56a57 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c56a5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56a60 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10c56a67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c56a6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56a6d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56a70 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c56a73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56a76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c56a78 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56a7b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c56a7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56a81 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56a84 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10c56a87 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56a8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c56a8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c56a8f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56a92 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10c56a95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c56a98 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c56a9b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c56a9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56aa0 jne 0x10c56bc8 */
  if (!C.zf) goto L_10c56bc8;
  /* 10c56aa6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c56aa9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c56aac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56aaf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c56ab2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56ab6 jbe 0x10c56abf */
  if ((C.cf||C.zf)) goto L_10c56abf;
  /* 10c56ab8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c56abf:;
  /* 10c56abf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56ac2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56ac5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c56ac8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56acb jne 0x10c56ba1 */
  if (!C.zf) goto L_10c56ba1;
  /* 10c56ad1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56ad5 jae 0x10c56b36 */
  if (!C.cf) goto L_10c56b36;
  /* 10c56ad7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c56adc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c56adf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c56ae1 not eax */
  EAX = (~(EAX));
  /* 10c56ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56ae6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56ae9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c56aed and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56af2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56af5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c56af9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56afc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56aff mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c56b02 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c56b05 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b08 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56b0b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c56b0e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b11 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56b14 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c56b18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c56b1a jne 0x10c56b34 */
  if (!C.zf) goto L_10c56b34;
  /* 10c56b1c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c56b21 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c56b24 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c56b26 not eax */
  EAX = (~(EAX));
  /* 10c56b28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56b2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c56b2d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c56b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56b32 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c56b34:;
  /* 10c56b34 jmp 0x10c56ba1 */
  goto L_10c56ba1;
L_10c56b36:;
  /* 10c56b36 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c56b39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56b3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56b41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56b43 not edx */
  EDX = (~(EDX));
  /* 10c56b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56b48 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b4b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c56b52 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c56b54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56b57 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b5a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10c56b61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b64 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56b67 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c56b6a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c56b6d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56b73 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c56b76 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56b79 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56b7c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c56b80 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56b82 jne 0x10c56ba1 */
  if (!C.zf) goto L_10c56ba1;
  /* 10c56b84 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c56b87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56b8a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56b8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56b91 not edx */
  EDX = (~(EDX));
  /* 10c56b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56b96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c56b99 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56b9e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c56ba1:;
  /* 10c56ba1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56ba4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c56ba7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56baa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c56bad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c56bb0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56bb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c56bb6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c56bb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c56bbc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c56bbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c56bc2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56bc5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10c56bc8:;
  /* 10c56bc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c56bcb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c56bce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56bd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c56bd4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56bd8 jbe 0x10c56be1 */
  if ((C.cf||C.zf)) goto L_10c56be1;
  /* 10c56bda mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10c56be1:;
  /* 10c56be1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c56be4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c56be7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56be9 jne 0x10c56d45 */
  if (!C.zf) goto L_10c56d45;
  /* 10c56bef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56bf2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56bf5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10c56bf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c56bfb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c56bfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56c01 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c56c04 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56c08 jbe 0x10c56c11 */
  if ((C.cf||C.zf)) goto L_10c56c11;
  /* 10c56c0a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10c56c11:;
  /* 10c56c11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c56c14 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56c17 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c56c1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c56c1d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c56c20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56c23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c56c26 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56c2a jbe 0x10c56c33 */
  if ((C.cf||C.zf)) goto L_10c56c33;
  /* 10c56c2c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10c56c33:;
  /* 10c56c33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c56c36 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56c39 je 0x10c56d3f */
  if (C.zf) goto L_10c56d3f;
  /* 10c56c3f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56c42 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56c45 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c56c48 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56c4b jne 0x10c56d21 */
  if (!C.zf) goto L_10c56d21;
  /* 10c56c51 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56c55 jae 0x10c56cb6 */
  if (!C.cf) goto L_10c56cb6;
  /* 10c56c57 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56c5c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c56c5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56c61 not edx */
  EDX = (~(EDX));
  /* 10c56c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56c66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56c69 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c56c6d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c56c6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56c72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56c75 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c56c79 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56c7c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56c7f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c56c82 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c56c85 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56c88 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56c8b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c56c8e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56c91 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56c94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c56c98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56c9a jne 0x10c56cb4 */
  if (!C.zf) goto L_10c56cb4;
  /* 10c56c9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56ca1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c56ca4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56ca6 not edx */
  EDX = (~(EDX));
  /* 10c56ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56cab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c56cad and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56cb2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c56cb4:;
  /* 10c56cb4 jmp 0x10c56d21 */
  goto L_10c56d21;
L_10c56cb6:;
  /* 10c56cb6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c56cb9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56cbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c56cc1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c56cc3 not eax */
  EAX = (~(EAX));
  /* 10c56cc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56cc8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56ccb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c56cd2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56cd7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56cda mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c56ce1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56ce4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56ce7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c56cea sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c56ced mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56cf0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56cf3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c56cf6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56cf9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56cfc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c56d00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c56d02 jne 0x10c56d21 */
  if (!C.zf) goto L_10c56d21;
  /* 10c56d04 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c56d07 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56d0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c56d0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c56d11 not eax */
  EAX = (~(EAX));
  /* 10c56d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56d16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c56d19 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c56d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56d1e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c56d21:;
  /* 10c56d21 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56d24 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c56d27 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56d2a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c56d2d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c56d30 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56d33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c56d36 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56d39 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c56d3c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10c56d3f:;
  /* 10c56d3f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c56d42 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10c56d45:;
  /* 10c56d45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c56d48 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c56d4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56d4d jne 0x10c56d5b */
  if (!C.zf) goto L_10c56d5b;
  /* 10c56d4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c56d52 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56d55 je 0x10c56e6b */
  if (C.zf) goto L_10c56e6b;
L_10c56d5b:;
  /* 10c56d5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c56d5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56d61 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10c56d64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c56d67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c56d6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c56d70 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c56d73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c56d79 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c56d7c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c56d7f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d82 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c56d85 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d88 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c56d8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c56d91 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56d97 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c56d9a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56d9d jne 0x10c56e6b */
  if (!C.zf) goto L_10c56e6b;
  /* 10c56da3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56da7 jae 0x10c56e04 */
  if (!C.cf) goto L_10c56e04;
  /* 10c56da9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56dac add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56daf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c56db3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56db6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56db9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c56dbc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c56dbf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56dc2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56dc5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c56dc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c56dca jne 0x10c56de2 */
  if (!C.zf) goto L_10c56de2;
  /* 10c56dcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56dd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c56dd4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56dd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c56ddb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56de0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c56de2:;
  /* 10c56de2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c56de7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c56dea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c56dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56def mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56df2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c56df6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56dfb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56dfe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c56e02 jmp 0x10c56e6b */
  goto L_10c56e6b;
L_10c56e04:;
  /* 10c56e04 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56e07 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56e0a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c56e0e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56e11 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56e14 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c56e17 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c56e1a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56e1d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56e20 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c56e23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c56e25 jne 0x10c56e42 */
  if (!C.zf) goto L_10c56e42;
  /* 10c56e27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c56e2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56e2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56e32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56e37 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c56e3a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56e3f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c56e42:;
  /* 10c56e42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c56e45 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56e48 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c56e4d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c56e4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56e52 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56e55 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c56e5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56e5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56e61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c56e64 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10c56e6b:;
  /* 10c56e6b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56e6e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c56e71 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c56e73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c56e76 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56e79 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c56e7c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10c56e7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56e82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c56e84 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56e87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56e8a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c56e8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56e8f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56e92 jne 0x10c56ff9 */
  if (!C.zf) goto L_10c56ff9;
  /* 10c56e98 cmp dword ptr [0x10c7fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56e9f je 0x10c56fe8 */
  if (C.zf) goto L_10c56fe8;
  /* 10c56ea5 mov eax, dword ptr [0x10c7fd98] */
  EAX = (r32((uint32_t)(0x10c7fd98)));
  /* 10c56eaa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10c56ead mov ecx, dword ptr [0x10c7fda0] */
  ECX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56eb3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c56eb6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56eb8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c56ebb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c56ec0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c56ec5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c56ec8 push eax */
  push32((uint32_t)(EAX));
  /* 10c56ec9 call dword ptr [0x10c802b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b4))), 0x10c56ecfu);
  /* 10c56ecf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c56ed4 mov ecx, dword ptr [0x10c7fd98] */
  ECX = (r32((uint32_t)(0x10c7fd98)));
  /* 10c56eda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c56edc mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56ee1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c56ee4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c56ee6 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56eec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c56eef mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56ef4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c56ef7 mov edx, dword ptr [0x10c7fd98] */
  EDX = (r32((uint32_t)(0x10c7fd98)));
  /* 10c56efd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10c56f08 mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c56f10 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10c56f13 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c56f16 mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c56f1e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10c56f21 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f27 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c56f2a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10c56f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c56f30 jne 0x10c56f46 */
  if (!C.zf) goto L_10c56f46;
  /* 10c56f32 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c56f3b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10c56f3d mov ecx, dword ptr [0x10c7fda0] */
  ECX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f43 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10c56f46:;
  /* 10c56f46 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f4c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56f50 jne 0x10c56fe8 */
  if (!C.zf) goto L_10c56fe8;
  /* 10c56f56 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c56f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56f5d mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f62 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c56f65 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56f66 call dword ptr [0x10c802b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b4))), 0x10c56f6cu);
  /* 10c56f6c mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c56f75 push eax */
  push32((uint32_t)(EAX));
  /* 10c56f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56f78 mov ecx, dword ptr [0x10c7fdac] */
  ECX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c56f7e push ecx */
  push32((uint32_t)(ECX));
  /* 10c56f7f call dword ptr [0x10c802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b0))), 0x10c56f85u);
  /* 10c56f85 mov edx, dword ptr [0x10c7fda4] */
  EDX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c56f8b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c56f8e mov eax, dword ptr [0x10c7fda8] */
  EAX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c56f93 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56f95 mov ecx, dword ptr [0x10c7fda0] */
  ECX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56f9b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56f9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56fa0 push eax */
  push32((uint32_t)(EAX));
  /* 10c56fa1 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56fa7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56faa push edx */
  push32((uint32_t)(EDX));
  /* 10c56fab mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c56fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10c56fb1 call 0x10c5a560 */
  push32(0x10c56fb6u); f_10c5a560();
  /* 10c56fb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56fb9 mov ecx, dword ptr [0x10c7fda4] */
  ECX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c56fbf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56fc2 mov dword ptr [0x10c7fda4], ecx */
  w32((uint32_t)(0x10c7fda4), (ECX));
  /* 10c56fc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56fcb cmp edx, dword ptr [0x10c7fda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56fd1 jbe 0x10c56fdc */
  if ((C.cf||C.zf)) goto L_10c56fdc;
  /* 10c56fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56fd6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56fd9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c56fdc:;
  /* 10c56fdc mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c56fe2 mov dword ptr [0x10c7fd9c], ecx */
  w32((uint32_t)(0x10c7fd9c), (ECX));
L_10c56fe8:;
  /* 10c56fe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56feb mov dword ptr [0x10c7fda0], edx */
  w32((uint32_t)(0x10c7fda0), (EDX));
  /* 10c56ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56ff4 mov dword ptr [0x10c7fd98], eax */
  w32((uint32_t)(0x10c7fd98), (EAX));
L_10c56ff9:;
  /* 10c56ff9 mov esp, ebp */
  ESP = (EBP);
  /* 10c56ffb pop ebp */
  EBP = (pop32());
  /* 10c56ffc ret  */
  ESPCHK(0x10c56a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x10c57000 (1334 bytes, 427 insns) */
void f_10c57000(void) {
  FTRACE(0x10c57000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c57000 push ebp */
  push32((uint32_t)(EBP));
  /* 10c57001 mov ebp, esp */
  EBP = (ESP);
  /* 10c57003 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57006 push esi */
  push32((uint32_t)(ESI));
  /* 10c57007 mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c5700c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5700f mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c57015 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57017 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c5701a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5701d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57020 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c57023 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c57026 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57029 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c5702c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5702f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c57032 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57036 jge 0x10c5704c */
  if ((C.sf==C.of)) goto L_10c5704c;
  /* 10c57038 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5703b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5703e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57040 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c57043 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10c5704a jmp 0x10c57061 */
  goto L_10c57061;
L_10c5704c:;
  /* 10c5704c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c57053 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57056 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57059 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5705c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c5705e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10c57061:;
  /* 10c57061 mov ecx, dword ptr [0x10c7fd9c] */
  ECX = (r32((uint32_t)(0x10c7fd9c)));
  /* 10c57067 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10c5706a:;
  /* 10c5706a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5706d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57070 jae 0x10c57096 */
  if (!C.cf) goto L_10c57096;
  /* 10c57072 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57075 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57078 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10c5707a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5707d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c57080 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10c57083 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57085 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57087 je 0x10c5708b */
  if (C.zf) goto L_10c5708b;
  /* 10c57089 jmp 0x10c57096 */
  goto L_10c57096;
L_10c5708b:;
  /* 10c5708b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5708e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57091 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c57094 jmp 0x10c5706a */
  goto L_10c5706a;
L_10c57096:;
  /* 10c57096 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57099 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5709c jne 0x10c5717d */
  if (!C.zf) goto L_10c5717d;
  /* 10c570a2 mov eax, dword ptr [0x10c7fda8] */
  EAX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c570a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c570aa:;
  /* 10c570aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570ad cmp ecx, dword ptr [0x10c7fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c570b3 jae 0x10c570d9 */
  if (!C.cf) goto L_10c570d9;
  /* 10c570b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c570bb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10c570bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c570c3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c570c6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c570c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c570ca je 0x10c570ce */
  if (C.zf) goto L_10c570ce;
  /* 10c570cc jmp 0x10c570d9 */
  goto L_10c570d9;
L_10c570ce:;
  /* 10c570ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570d1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c570d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c570d7 jmp 0x10c570aa */
  goto L_10c570aa;
L_10c570d9:;
  /* 10c570d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570dc cmp ecx, dword ptr [0x10c7fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c570e2 jne 0x10c5717d */
  if (!C.zf) goto L_10c5717d;
L_10c570e8:;
  /* 10c570e8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570eb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c570ee jae 0x10c57106 */
  if (!C.cf) goto L_10c57106;
  /* 10c570f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c570f7 je 0x10c570fb */
  if (C.zf) goto L_10c570fb;
  /* 10c570f9 jmp 0x10c57106 */
  goto L_10c57106;
L_10c570fb:;
  /* 10c570fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c570fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57101 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c57104 jmp 0x10c570e8 */
  goto L_10c570e8;
L_10c57106:;
  /* 10c57106 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57109 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5710c jne 0x10c57157 */
  if (!C.zf) goto L_10c57157;
  /* 10c5710e mov eax, dword ptr [0x10c7fda8] */
  EAX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c57113 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c57116:;
  /* 10c57116 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57119 cmp ecx, dword ptr [0x10c7fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5711f jae 0x10c57137 */
  if (!C.cf) goto L_10c57137;
  /* 10c57121 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57124 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57128 je 0x10c5712c */
  if (C.zf) goto L_10c5712c;
  /* 10c5712a jmp 0x10c57137 */
  goto L_10c57137;
L_10c5712c:;
  /* 10c5712c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5712f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57132 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c57135 jmp 0x10c57116 */
  goto L_10c57116;
L_10c57137:;
  /* 10c57137 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5713a cmp ecx, dword ptr [0x10c7fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57140 jne 0x10c57157 */
  if (!C.zf) goto L_10c57157;
  /* 10c57142 call 0x10c57540 */
  push32(0x10c57147u); f_10c57540();
  /* 10c57147 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c5714a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5714e jne 0x10c57157 */
  if (!C.zf) goto L_10c57157;
  /* 10c57150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c57152 jmp 0x10c57531 */
  goto L_10c57531;
L_10c57157:;
  /* 10c57157 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5715a push edx */
  push32((uint32_t)(EDX));
  /* 10c5715b call 0x10c57650 */
  push32(0x10c57160u); f_10c57650();
  /* 10c57160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57163 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57166 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c57169 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c5716b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5716e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c57171 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57174 jne 0x10c5717d */
  if (!C.zf) goto L_10c5717d;
  /* 10c57176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c57178 jmp 0x10c57531 */
  goto L_10c57531;
L_10c5717d:;
  /* 10c5717d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57180 mov dword ptr [0x10c7fd9c], edx */
  w32((uint32_t)(0x10c7fd9c), (EDX));
  /* 10c57186 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57189 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5718c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10c5718f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57192 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c57194 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c57197 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5719b je 0x10c571c0 */
  if (C.zf) goto L_10c571c0;
  /* 10c5719d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c571a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c571a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c571a6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10c571aa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c571ad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c571b0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10c571b3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10c571ba or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10c571bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c571be jne 0x10c571f5 */
  if (!C.zf) goto L_10c571f5;
L_10c571c0:;
  /* 10c571c0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10c571c7:;
  /* 10c571c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c571ca mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c571cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c571d0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10c571d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c571d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c571da mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10c571dd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10c571e4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10c571e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c571e8 jne 0x10c571f5 */
  if (!C.zf) goto L_10c571f5;
  /* 10c571ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c571ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c571f0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c571f3 jmp 0x10c571c7 */
  goto L_10c571c7;
L_10c571f5:;
  /* 10c571f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c571f8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c571fe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57201 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c57208 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5720b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c57212 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57215 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57218 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5721b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10c5721f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c57222 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57226 jne 0x10c57242 */
  if (!C.zf) goto L_10c57242;
  /* 10c57228 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10c5722f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57232 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57235 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c57238 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c5723f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10c57242:;
  /* 10c57242 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57246 jl 0x10c5725b */
  if ((C.sf!=C.of)) goto L_10c5725b;
  /* 10c57248 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5724b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5724d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c57250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57253 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57256 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c57259 jmp 0x10c57242 */
  goto L_10c57242;
L_10c5725b:;
  /* 10c5725b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5725e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57261 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10c57265 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c57268 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5726b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5726d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57270 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c57273 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c57276 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c57279 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5727c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5727f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57283 jle 0x10c5728c */
  if ((C.zf||C.sf!=C.of)) goto L_10c5728c;
  /* 10c57285 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10c5728c:;
  /* 10c5728c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5728f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57292 je 0x10c574b0 */
  if (C.zf) goto L_10c574b0;
  /* 10c57298 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5729b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5729e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c572a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c572a4 jne 0x10c5737a */
  if (!C.zf) goto L_10c5737a;
  /* 10c572aa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c572ae jge 0x10c5730f */
  if ((C.sf==C.of)) goto L_10c5730f;
  /* 10c572b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c572b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c572b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c572ba not eax */
  EAX = (~(EAX));
  /* 10c572bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c572bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c572c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c572c6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c572c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c572cb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c572ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c572d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c572d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c572d8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c572db sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c572de mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c572e1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c572e4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c572e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c572ea add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c572ed movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c572f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c572f3 jne 0x10c5730d */
  if (!C.zf) goto L_10c5730d;
  /* 10c572f5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c572fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c572fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c572ff not eax */
  EAX = (~(EAX));
  /* 10c57301 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57304 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c57306 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c57308 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5730b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c5730d:;
  /* 10c5730d jmp 0x10c5737a */
  goto L_10c5737a;
L_10c5730f:;
  /* 10c5730f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57312 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57315 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c5731a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c5731c not edx */
  EDX = (~(EDX));
  /* 10c5731e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57321 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57324 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c5732b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5732d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57330 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57333 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10c5733a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c5733d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57340 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c57343 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c57346 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57349 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5734c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c5734f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57352 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57355 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c57359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5735b jne 0x10c5737a */
  if (!C.zf) goto L_10c5737a;
  /* 10c5735d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57360 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57363 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57368 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c5736a not edx */
  EDX = (~(EDX));
  /* 10c5736c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5736f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c57372 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57374 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57377 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c5737a:;
  /* 10c5737a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5737d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c57380 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57383 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c57386 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c57389 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5738c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5738f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57392 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c57395 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c57398 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5739c je 0x10c574b0 */
  if (C.zf) goto L_10c574b0;
  /* 10c573a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c573a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c573a8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10c573ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c573ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c573b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c573b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c573ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c573c0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c573c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c573c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573c9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c573cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c573d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573d5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c573d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c573de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c573e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c573e4 jne 0x10c574b0 */
  if (!C.zf) goto L_10c574b0;
  /* 10c573ea cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c573ee jge 0x10c5744a */
  if ((C.sf==C.of)) goto L_10c5744a;
  /* 10c573f0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c573f3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c573f6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c573fa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c573fd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57400 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c57403 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c57405 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57408 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5740b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c5740e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57410 jne 0x10c57428 */
  if (!C.zf) goto L_10c57428;
  /* 10c57412 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57417 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5741a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c5741c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5741f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c57421 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c57423 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57426 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c57428:;
  /* 10c57428 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c5742d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57430 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57432 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57435 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57438 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c5743c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5743e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57441 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57444 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c57448 jmp 0x10c574b0 */
  goto L_10c574b0;
L_10c5744a:;
  /* 10c5744a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c5744d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57450 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c57454 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57457 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5745a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c5745d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c5745f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57462 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57465 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c57468 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5746a jne 0x10c57487 */
  if (!C.zf) goto L_10c57487;
  /* 10c5746c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5746f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57472 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57477 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57479 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5747c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5747f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c57481 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57484 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c57487:;
  /* 10c57487 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5748a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5748d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57492 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57494 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57497 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c5749a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c574a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c574a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c574a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c574a9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10c574b0:;
  /* 10c574b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c574b4 je 0x10c574ca */
  if (C.zf) goto L_10c574ca;
  /* 10c574b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c574b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c574bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c574be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c574c1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c574c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c574c7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10c574ca:;
  /* 10c574ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c574cd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c574d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c574d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c574d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c574d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c574dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c574de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c574e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c574e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c574e7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c574ea mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10c574ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c574f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c574f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c574f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c574f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c574fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c574fd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c574ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57501 jne 0x10c57523 */
  if (!C.zf) goto L_10c57523;
  /* 10c57503 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57506 cmp eax, dword ptr [0x10c7fda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5750c jne 0x10c57523 */
  if (!C.zf) goto L_10c57523;
  /* 10c5750e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57511 cmp ecx, dword ptr [0x10c7fd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57517 jne 0x10c57523 */
  if (!C.zf) goto L_10c57523;
  /* 10c57519 mov dword ptr [0x10c7fda0], 0 */
  w32((uint32_t)(0x10c7fda0), (0x0u));
L_10c57523:;
  /* 10c57523 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c57526 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57529 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c5752b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5752e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c57531:;
  /* 10c57531 pop esi */
  ESI = (pop32());
  /* 10c57532 mov esp, ebp */
  ESP = (EBP);
  /* 10c57534 pop ebp */
  EBP = (pop32());
  /* 10c57535 ret  */
  ESPCHK(0x10c57000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007540 @ 0x10c57540 (271 bytes, 78 insns) */
void f_10c57540(void) {
  FTRACE(0x10c57540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c57540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c57541 mov ebp, esp */
  EBP = (ESP);
  /* 10c57543 push ecx */
  push32((uint32_t)(ECX));
  /* 10c57544 mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c57549 cmp eax, dword ptr [0x10c7fd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7fd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5754f jne 0x10c5759b */
  if (!C.zf) goto L_10c5759b;
  /* 10c57551 mov ecx, dword ptr [0x10c7fd88] */
  ECX = (r32((uint32_t)(0x10c7fd88)));
  /* 10c57557 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5755a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5755d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5755e mov edx, dword ptr [0x10c7fda8] */
  EDX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c57564 push edx */
  push32((uint32_t)(EDX));
  /* 10c57565 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c57567 mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c5756c push eax */
  push32((uint32_t)(EAX));
  /* 10c5756d call dword ptr [0x10c802d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d4))), 0x10c57573u);
  /* 10c57573 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c57576 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5757a jne 0x10c57583 */
  if (!C.zf) goto L_10c57583;
  /* 10c5757c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5757e jmp 0x10c5764b */
  goto L_10c5764b;
L_10c57583:;
  /* 10c57583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57586 mov dword ptr [0x10c7fda8], ecx */
  w32((uint32_t)(0x10c7fda8), (ECX));
  /* 10c5758c mov edx, dword ptr [0x10c7fd88] */
  EDX = (r32((uint32_t)(0x10c7fd88)));
  /* 10c57592 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57595 mov dword ptr [0x10c7fd88], edx */
  w32((uint32_t)(0x10c7fd88), (EDX));
L_10c5759b:;
  /* 10c5759b mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c575a0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c575a3 mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c575a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c575ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c575ae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10c575b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c575b5 mov edx, dword ptr [0x10c7fdac] */
  EDX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c575bb push edx */
  push32((uint32_t)(EDX));
  /* 10c575bc call dword ptr [0x10c802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d0))), 0x10c575c2u);
  /* 10c575c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c575c5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10c575c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c575cb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c575cf jne 0x10c575d5 */
  if (!C.zf) goto L_10c575d5;
  /* 10c575d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c575d3 jmp 0x10c5764b */
  goto L_10c5764b;
L_10c575d5:;
  /* 10c575d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c575d7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10c575dc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10c575e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c575e3 call dword ptr [0x10c802d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d8))), 0x10c575e9u);
  /* 10c575e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c575ec mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10c575ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c575f2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c575f6 jne 0x10c57612 */
  if (!C.zf) goto L_10c57612;
  /* 10c575f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c575fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c575fe push ecx */
  push32((uint32_t)(ECX));
  /* 10c575ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10c57601 mov edx, dword ptr [0x10c7fdac] */
  EDX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c57607 push edx */
  push32((uint32_t)(EDX));
  /* 10c57608 call dword ptr [0x10c802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b0))), 0x10c5760eu);
  /* 10c5760e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c57610 jmp 0x10c5764b */
  goto L_10c5764b;
L_10c57612:;
  /* 10c57612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57615 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5761b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5761e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c57625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57628 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10c5762f mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c57634 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57637 mov dword ptr [0x10c7fda4], eax */
  w32((uint32_t)(0x10c7fda4), (EAX));
  /* 10c5763c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5763f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c57642 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10c57648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5764b:;
  /* 10c5764b mov esp, ebp */
  ESP = (EBP);
  /* 10c5764d pop ebp */
  EBP = (pop32());
  /* 10c5764e ret  */
  ESPCHK(0x10c57540u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x10c57650 (494 bytes, 149 insns) */
void f_10c57650(void) {
  FTRACE(0x10c57650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c57650 push ebp */
  push32((uint32_t)(EBP));
  /* 10c57651 mov ebp, esp */
  EBP = (ESP);
  /* 10c57653 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5765c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c5765f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57662 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c57665 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c57668 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10c5766f:;
  /* 10c5766f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57673 jl 0x10c57688 */
  if ((C.sf!=C.of)) goto L_10c57688;
  /* 10c57675 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c57678 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c5767a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5767d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57680 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57683 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c57686 jmp 0x10c5766f */
  goto L_10c5766f;
L_10c57688:;
  /* 10c57688 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5768b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c57691 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57694 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c5769b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c5769e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c576a5 jmp 0x10c576b0 */
  goto L_10c576b0;
L_10c576a7:;
  /* 10c576a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c576aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c576ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10c576b0:;
  /* 10c576b0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c576b4 jge 0x10c576d6 */
  if ((C.sf==C.of)) goto L_10c576d6;
  /* 10c576b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c576b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c576bc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10c576bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c576c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c576c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c576c8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c576cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c576ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c576d1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c576d4 jmp 0x10c576a7 */
  goto L_10c576a7;
L_10c576d6:;
  /* 10c576d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c576d9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c576dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c576df mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c576e2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c576e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c576e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c576e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c576ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c576f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c576f6 push edx */
  push32((uint32_t)(EDX));
  /* 10c576f7 call dword ptr [0x10c802d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d8))), 0x10c576fdu);
  /* 10c576fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c576ff jne 0x10c57709 */
  if (!C.zf) goto L_10c57709;
  /* 10c57701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c57704 jmp 0x10c5783a */
  goto L_10c5783a;
L_10c57709:;
  /* 10c57709 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5770c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57711 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c57714 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57717 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5771a jmp 0x10c57728 */
  goto L_10c57728;
L_10c5771c:;
  /* 10c5771c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5771f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57725 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c57728:;
  /* 10c57728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5772b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5772e ja 0x10c5778d */
  if ((!C.cf&&!C.zf)) goto L_10c5778d;
  /* 10c57730 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57733 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10c5773a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5773d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10c57747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5774a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5774d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c57750 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57753 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10c57759 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5775c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57762 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57765 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c57768 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5776b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57771 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57774 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c57777 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5777a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5777f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c57782 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57785 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10c5778b jmp 0x10c5771c */
  goto L_10c5771c;
L_10c5778d:;
  /* 10c5778d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c57790 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57796 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c57799 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5779c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5779f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c577a2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c577a5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c577a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c577ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c577ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c577b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c577b4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c577b7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c577ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c577bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c577c0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c577c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c577c6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c577c9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c577cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c577cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c577d2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c577d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c577d8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c577db mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10c577e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c577e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c577e9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10c577f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c577f7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10c577fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c577fe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10c57801 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c57804 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57807 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10c5780a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5780c jne 0x10c5781d */
  if (!C.zf) goto L_10c5781d;
  /* 10c5780e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57811 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57814 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c57817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5781a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c5781d:;
  /* 10c5781d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57822 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57825 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57827 not edx */
  EDX = (~(EDX));
  /* 10c57829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5782c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5782f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57834 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c57837 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10c5783a:;
  /* 10c5783a mov esp, ebp */
  ESP = (EBP);
  /* 10c5783c pop ebp */
  EBP = (pop32());
  /* 10c5783d ret  */
  ESPCHK(0x10c57650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007840 @ 0x10c57840 (1515 bytes, 489 insns) */
void f_10c57840(void) {
  FTRACE(0x10c57840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c57840 push ebp */
  push32((uint32_t)(EBP));
  /* 10c57841 mov ebp, esp */
  EBP = (ESP);
  /* 10c57843 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c57849 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5784c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10c5784e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c57851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57854 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c57857 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c5785a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5785d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c57860 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57863 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c57866 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c57869 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c5786c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5786f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57872 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c57878 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5787b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c57882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c57885 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c57888 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5788b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5788e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57891 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c57893 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57896 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c57899 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5789c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5789f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c578a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c578a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c578a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c578aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c578ad cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c578b0 jle 0x10c57b66 */
  if ((C.zf||C.sf!=C.of)) goto L_10c57b66;
  /* 10c578b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c578b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c578bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c578be jne 0x10c578cb */
  if (!C.zf) goto L_10c578cb;
  /* 10c578c0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c578c3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c578c6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c578c9 jle 0x10c578d2 */
  if ((C.zf||C.sf!=C.of)) goto L_10c578d2;
L_10c578cb:;
  /* 10c578cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c578cd jmp 0x10c57e27 */
  goto L_10c57e27;
L_10c578d2:;
  /* 10c578d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c578d5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c578d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c578db mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c578de cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c578e2 jbe 0x10c578eb */
  if ((C.cf||C.zf)) goto L_10c578eb;
  /* 10c578e4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c578eb:;
  /* 10c578eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c578ee mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c578f1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c578f4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c578f7 jne 0x10c579cd */
  if (!C.zf) goto L_10c579cd;
  /* 10c578fd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57901 jae 0x10c57962 */
  if (!C.cf) goto L_10c57962;
  /* 10c57903 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57908 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5790b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c5790d not edx */
  EDX = (~(EDX));
  /* 10c5790f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57912 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57915 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c57919 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5791b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5791e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57921 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c57925 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57928 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5792b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c5792e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c57931 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57934 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57937 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c5793a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5793d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57940 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c57944 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57946 jne 0x10c57960 */
  if (!C.zf) goto L_10c57960;
  /* 10c57948 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c5794d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57950 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57952 not edx */
  EDX = (~(EDX));
  /* 10c57954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c57959 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5795b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5795e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c57960:;
  /* 10c57960 jmp 0x10c579cd */
  goto L_10c579cd;
L_10c57962:;
  /* 10c57962 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57965 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57968 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c5796d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c5796f not eax */
  EAX = (~(EAX));
  /* 10c57971 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57974 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57977 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c5797e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57980 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57983 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57986 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c5798d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57990 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57993 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c57996 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c57999 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5799c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5799f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c579a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c579a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c579a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c579ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c579ae jne 0x10c579cd */
  if (!C.zf) goto L_10c579cd;
  /* 10c579b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c579b3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c579b6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c579bb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c579bd not eax */
  EAX = (~(EAX));
  /* 10c579bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c579c2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c579c5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c579c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c579ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c579cd:;
  /* 10c579cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c579d0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c579d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c579d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c579d9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c579dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c579df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c579e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c579e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c579e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c579eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c579ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c579f1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c579f4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c579f7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c579fb jle 0x10c57b47 */
  if ((C.zf||C.sf!=C.of)) goto L_10c57b47;
  /* 10c57a01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57a04 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57a07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c57a0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57a0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c57a10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57a13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c57a16 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57a1a jbe 0x10c57a23 */
  if ((C.cf||C.zf)) goto L_10c57a23;
  /* 10c57a1c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c57a23:;
  /* 10c57a23 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57a26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c57a29 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10c57a2c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c57a2f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57a35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57a38 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c57a3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57a41 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c57a44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57a47 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a4a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c57a4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a50 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57a53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a56 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c57a59 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57a5f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57a62 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57a65 jne 0x10c57b33 */
  if (!C.zf) goto L_10c57b33;
  /* 10c57a6b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57a6f jae 0x10c57acc */
  if (!C.cf) goto L_10c57acc;
  /* 10c57a71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57a74 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57a77 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c57a7b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57a7e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57a81 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c57a84 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c57a87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57a8a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57a8d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c57a90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c57a92 jne 0x10c57aaa */
  if (!C.zf) goto L_10c57aaa;
  /* 10c57a94 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57a99 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57a9c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57aa1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c57aa3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57aa8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c57aaa:;
  /* 10c57aaa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57aaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57ab2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57ab7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57aba mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c57abe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57ac0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57ac3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57ac6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c57aca jmp 0x10c57b33 */
  goto L_10c57b33;
L_10c57acc:;
  /* 10c57acc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57acf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57ad2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c57ad6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57ad9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57adc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c57adf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c57ae2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57ae5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57ae8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c57aeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c57aed jne 0x10c57b0a */
  if (!C.zf) goto L_10c57b0a;
  /* 10c57aef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57af2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57af5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57afa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57aff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c57b02 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57b04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57b07 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c57b0a:;
  /* 10c57b0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57b0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57b10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57b15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57b17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57b1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57b1d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c57b24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57b26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57b29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57b2c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10c57b33:;
  /* 10c57b33 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57b36 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57b39 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c57b3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57b3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57b44 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10c57b47:;
  /* 10c57b47 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c57b4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57b50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c57b52 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c57b55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57b5b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b5e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10c57b61 jmp 0x10c57e22 */
  goto L_10c57e22;
L_10c57b66:;
  /* 10c57b66 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c57b69 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57b6c jge 0x10c57e22 */
  if ((C.sf==C.of)) goto L_10c57e22;
  /* 10c57b72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c57b75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57b7b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c57b7d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c57b80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b83 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57b86 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b89 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10c57b8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57b8f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57b92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c57b95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57b98 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57b9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c57b9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57ba1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c57ba4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57ba7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c57baa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57bae jbe 0x10c57bb7 */
  if ((C.cf||C.zf)) goto L_10c57bb7;
  /* 10c57bb0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c57bb7:;
  /* 10c57bb7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57bba and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c57bbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c57bbf jne 0x10c57d00 */
  if (!C.zf) goto L_10c57d00;
  /* 10c57bc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c57bc8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c57bcb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57bce mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c57bd1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57bd5 jbe 0x10c57bde */
  if ((C.cf||C.zf)) goto L_10c57bde;
  /* 10c57bd7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c57bde:;
  /* 10c57bde mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57be1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57be4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57be7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57bea jne 0x10c57cc0 */
  if (!C.zf) goto L_10c57cc0;
  /* 10c57bf0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57bf4 jae 0x10c57c55 */
  if (!C.cf) goto L_10c57c55;
  /* 10c57bf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57bfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57bfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57c00 not edx */
  EDX = (~(EDX));
  /* 10c57c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57c05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c08 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c57c0c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c57c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57c11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c14 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c57c18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c1b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57c1e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c57c21 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c57c24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c27 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57c2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c57c2d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c30 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57c33 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c57c37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57c39 jne 0x10c57c53 */
  if (!C.zf) goto L_10c57c53;
  /* 10c57c3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57c40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57c43 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57c45 not edx */
  EDX = (~(EDX));
  /* 10c57c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57c4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c57c4c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57c51 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c57c53:;
  /* 10c57c53 jmp 0x10c57cc0 */
  goto L_10c57cc0;
L_10c57c55:;
  /* 10c57c55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57c58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57c5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57c60 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57c62 not eax */
  EAX = (~(EAX));
  /* 10c57c64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57c67 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c6a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c57c71 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57c76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c79 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c57c80 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c83 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57c86 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c57c89 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c57c8c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c8f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57c92 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c57c95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57c98 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57c9b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c57c9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c57ca1 jne 0x10c57cc0 */
  if (!C.zf) goto L_10c57cc0;
  /* 10c57ca3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c57ca6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57ca9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57cae shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57cb0 not eax */
  EAX = (~(EAX));
  /* 10c57cb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57cb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57cb8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c57cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57cbd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c57cc0:;
  /* 10c57cc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57cc3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c57cc6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57cc9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c57ccc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c57ccf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57cd2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c57cd5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c57cd8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c57cdb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c57cde mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57ce1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57ce4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c57ce7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57cea sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c57ced sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57cf0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c57cf3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57cf7 jbe 0x10c57d00 */
  if ((C.cf||C.zf)) goto L_10c57d00;
  /* 10c57cf9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c57d00:;
  /* 10c57d00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57d03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c57d06 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10c57d09 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c57d0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57d12 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c57d15 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c57d18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57d1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c57d21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c57d24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d27 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c57d2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d2d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c57d30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c57d36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57d3c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c57d3f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57d42 jne 0x10c57e0e */
  if (!C.zf) goto L_10c57e0e;
  /* 10c57d48 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57d4c jae 0x10c57da8 */
  if (!C.cf) goto L_10c57da8;
  /* 10c57d4e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57d51 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57d54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c57d58 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57d5b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57d5e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c57d61 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c57d63 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57d66 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57d69 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c57d6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57d6e jne 0x10c57d86 */
  if (!C.zf) goto L_10c57d86;
  /* 10c57d70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57d75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57d78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57d7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57d7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c57d7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c57d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57d84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c57d86:;
  /* 10c57d86 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57d8b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57d8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57d93 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57d96 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c57d9a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c57d9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57d9f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57da2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c57da6 jmp 0x10c57e0e */
  goto L_10c57e0e;
L_10c57da8:;
  /* 10c57da8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57dab add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57dae movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c57db2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57db5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57db8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c57dbb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c57dbd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57dc0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57dc3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c57dc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57dc8 jne 0x10c57de5 */
  if (!C.zf) goto L_10c57de5;
  /* 10c57dca mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57dcd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57dd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c57dd5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c57dd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57dda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c57ddd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c57ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c57de2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c57de5:;
  /* 10c57de5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c57de8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57deb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57df0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57df2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57df5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57df8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c57dff or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c57e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57e04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c57e07 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10c57e0e:;
  /* 10c57e0e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57e11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57e14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c57e16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c57e19 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57e1c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c57e1f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10c57e22:;
  /* 10c57e22 mov eax, 1 */
  EAX = (0x1u);
L_10c57e27:;
  /* 10c57e27 mov esp, ebp */
  ESP = (EBP);
  /* 10c57e29 pop ebp */
  EBP = (pop32());
  /* 10c57e2a ret  */
  ESPCHK(0x10c57840u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x10c57e30 (304 bytes, 79 insns) */
void f_10c57e30(void) {
  FTRACE(0x10c57e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c57e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c57e31 mov ebp, esp */
  EBP = (ESP);
  /* 10c57e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c57e34 cmp dword ptr [0x10c7fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57e3b je 0x10c57f5c */
  if (C.zf) goto L_10c57f5c;
  /* 10c57e41 mov eax, dword ptr [0x10c7fd98] */
  EAX = (r32((uint32_t)(0x10c7fd98)));
  /* 10c57e46 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10c57e49 mov ecx, dword ptr [0x10c7fda0] */
  ECX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57e4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c57e52 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57e54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c57e57 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c57e5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c57e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c57e64 push eax */
  push32((uint32_t)(EAX));
  /* 10c57e65 call dword ptr [0x10c802b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b4))), 0x10c57e6bu);
  /* 10c57e6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c57e70 mov ecx, dword ptr [0x10c7fd98] */
  ECX = (r32((uint32_t)(0x10c7fd98)));
  /* 10c57e76 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c57e78 mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57e7d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c57e80 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c57e82 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57e88 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c57e8b mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57e90 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c57e93 mov edx, dword ptr [0x10c7fd98] */
  EDX = (r32((uint32_t)(0x10c7fd98)));
  /* 10c57e99 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10c57ea4 mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57ea9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c57eac mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10c57eaf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c57eb2 mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57eb7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c57eba mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10c57ebd mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57ec3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c57ec6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10c57eca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c57ecc jne 0x10c57ee2 */
  if (!C.zf) goto L_10c57ee2;
  /* 10c57ece mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57ed4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c57ed7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10c57ed9 mov ecx, dword ptr [0x10c7fda0] */
  ECX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57edf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10c57ee2:;
  /* 10c57ee2 mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57ee8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57eec jne 0x10c57f52 */
  if (!C.zf) goto L_10c57f52;
  /* 10c57eee cmp dword ptr [0x10c7fda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57ef5 jle 0x10c57f52 */
  if ((C.zf||C.sf!=C.of)) goto L_10c57f52;
  /* 10c57ef7 mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57efc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c57eff push ecx */
  push32((uint32_t)(ECX));
  /* 10c57f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c57f02 mov edx, dword ptr [0x10c7fdac] */
  EDX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c57f08 push edx */
  push32((uint32_t)(EDX));
  /* 10c57f09 call dword ptr [0x10c802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b0))), 0x10c57f0fu);
  /* 10c57f0f mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c57f14 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c57f17 mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c57f1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57f1f mov edx, dword ptr [0x10c7fda0] */
  EDX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57f25 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57f28 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57f2a push ecx */
  push32((uint32_t)(ECX));
  /* 10c57f2b mov eax, dword ptr [0x10c7fda0] */
  EAX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57f30 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57f33 push eax */
  push32((uint32_t)(EAX));
  /* 10c57f34 mov ecx, dword ptr [0x10c7fda0] */
  ECX = (r32((uint32_t)(0x10c7fda0)));
  /* 10c57f3a push ecx */
  push32((uint32_t)(ECX));
  /* 10c57f3b call 0x10c5a560 */
  push32(0x10c57f40u); f_10c5a560();
  /* 10c57f40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57f43 mov edx, dword ptr [0x10c7fda4] */
  EDX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c57f49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57f4c mov dword ptr [0x10c7fda4], edx */
  w32((uint32_t)(0x10c7fda4), (EDX));
L_10c57f52:;
  /* 10c57f52 mov dword ptr [0x10c7fda0], 0 */
  w32((uint32_t)(0x10c7fda0), (0x0u));
L_10c57f5c:;
  /* 10c57f5c mov esp, ebp */
  ESP = (EBP);
  /* 10c57f5e pop ebp */
  EBP = (pop32());
  /* 10c57f5f ret  */
  ESPCHK(0x10c57e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f60 @ 0x10c57f60 (1565 bytes, 343 insns) */
void f_10c57f60(void) {
  FTRACE(0x10c57f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c57f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c57f61 mov ebp, esp */
  EBP = (ESP);
  /* 10c57f63 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c57f69 mov eax, dword ptr [0x10c7fda4] */
  EAX = (r32((uint32_t)(0x10c7fda4)));
  /* 10c57f6e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c57f71 push eax */
  push32((uint32_t)(EAX));
  /* 10c57f72 mov ecx, dword ptr [0x10c7fda8] */
  ECX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c57f78 push ecx */
  push32((uint32_t)(ECX));
  /* 10c57f79 call dword ptr [0x10c80288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80288))), 0x10c57f7fu);
  /* 10c57f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c57f81 je 0x10c57f8b */
  if (C.zf) goto L_10c57f8b;
  /* 10c57f83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c57f86 jmp 0x10c58579 */
  goto L_10c58579;
L_10c57f8b:;
  /* 10c57f8b mov edx, dword ptr [0x10c7fda8] */
  EDX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c57f91 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10c57f97 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10c57fa1 jmp 0x10c57fb2 */
  goto L_10c57fb2;
L_10c57fa3:;
  /* 10c57fa3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10c57fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c57fac mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10c57fb2:;
  /* 10c57fb2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10c57fb8 cmp ecx, dword ptr [0x10c7fda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c57fbe jge 0x10c58577 */
  if ((C.sf==C.of)) goto L_10c58577;
  /* 10c57fc4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c57fca mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c57fcd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10c57fd3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10c57fd8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c57fde push ecx */
  push32((uint32_t)(ECX));
  /* 10c57fdf call dword ptr [0x10c80288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80288))), 0x10c57fe5u);
  /* 10c57fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c57fe7 je 0x10c57ff3 */
  if (C.zf) goto L_10c57ff3;
  /* 10c57fe9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10c57fee jmp 0x10c58579 */
  goto L_10c58579;
L_10c57ff3:;
  /* 10c57ff3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c57ff9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c57ffc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10c58002 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c58008 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5800e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c58011 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c58017 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c5801a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5801d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10c58027 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10c58031 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c58038 jmp 0x10c58043 */
  goto L_10c58043;
L_10c5803a:;
  /* 10c5803a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5803d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58040 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c58043:;
  /* 10c58043 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58047 jge 0x10c5853b */
  if ((C.sf==C.of)) goto L_10c5853b;
  /* 10c5804d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10c58057 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10c58061 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10c5806b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10c58075 jmp 0x10c58086 */
  goto L_10c58086;
L_10c58077:;
  /* 10c58077 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c5807d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58080 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10c58086:;
  /* 10c58086 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5808d jge 0x10c580a2 */
  if ((C.sf==C.of)) goto L_10c580a2;
  /* 10c5808f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c58095 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10c580a0 jmp 0x10c58077 */
  goto L_10c58077;
L_10c580a2:;
  /* 10c580a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c580a6 jl 0x10c584dd */
  if ((C.sf!=C.of)) goto L_10c584dd;
  /* 10c580ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c580b1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c580b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c580b8 call dword ptr [0x10c80288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80288))), 0x10c580beu);
  /* 10c580be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c580c0 je 0x10c580cc */
  if (C.zf) goto L_10c580cc;
  /* 10c580c2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10c580c7 jmp 0x10c58579 */
  goto L_10c58579;
L_10c580cc:;
  /* 10c580cc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c580d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c580d5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10c580df jmp 0x10c580f0 */
  goto L_10c580f0;
L_10c580e1:;
  /* 10c580e1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10c580e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c580ea mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10c580f0:;
  /* 10c580f0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c580f7 jge 0x10c58274 */
  if ((C.sf==C.of)) goto L_10c58274;
  /* 10c580fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58100 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58103 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10c58109 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c5810f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58115 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10c5811b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c58121 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58125 jne 0x10c58132 */
  if (!C.zf) goto L_10c58132;
  /* 10c58127 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10c5812d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58130 je 0x10c5813c */
  if (C.zf) goto L_10c5813c;
L_10c58132:;
  /* 10c58132 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10c58137 jmp 0x10c58579 */
  goto L_10c58579;
L_10c5813c:;
  /* 10c5813c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c58142 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c58144 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10c5814a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c58150 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10c58156 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10c5815c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5815f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c58161 je 0x10c58199 */
  if (C.zf) goto L_10c58199;
  /* 10c58163 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c58169 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5816c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10c58172 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5817c jle 0x10c58188 */
  if ((C.zf||C.sf!=C.of)) goto L_10c58188;
  /* 10c5817e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10c58183 jmp 0x10c58579 */
  goto L_10c58579;
L_10c58188:;
  /* 10c58188 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10c5818e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58191 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10c58197 jmp 0x10c581db */
  goto L_10c581db;
L_10c58199:;
  /* 10c58199 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c5819f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c581a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c581a5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10c581ab cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c581b2 jle 0x10c581be */
  if ((C.zf||C.sf!=C.of)) goto L_10c581be;
  /* 10c581b4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10c581be:;
  /* 10c581be mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c581c4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10c581cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c581ce mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c581d4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10c581db:;
  /* 10c581db cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c581e2 jl 0x10c581fd */
  if ((C.sf!=C.of)) goto L_10c581fd;
  /* 10c581e4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c581ea and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10c581ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c581ef jne 0x10c581fd */
  if (!C.zf) goto L_10c581fd;
  /* 10c581f1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c581fb jle 0x10c58207 */
  if ((C.zf||C.sf!=C.of)) goto L_10c58207;
L_10c581fd:;
  /* 10c581fd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10c58202 jmp 0x10c58579 */
  goto L_10c58579;
L_10c58207:;
  /* 10c58207 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c5820d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58213 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c58216 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5821c je 0x10c58228 */
  if (C.zf) goto L_10c58228;
  /* 10c5821e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10c58223 jmp 0x10c58579 */
  goto L_10c58579;
L_10c58228:;
  /* 10c58228 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c5822e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58234 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10c5823a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c58240 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58246 jb 0x10c5813c */
  if (C.cf) goto L_10c5813c;
  /* 10c5824c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c58252 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58258 je 0x10c58264 */
  if (C.zf) goto L_10c58264;
  /* 10c5825a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10c5825f jmp 0x10c58579 */
  goto L_10c58579;
L_10c58264:;
  /* 10c58264 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58267 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5826c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5826f jmp 0x10c580e1 */
  goto L_10c580e1;
L_10c58274:;
  /* 10c58274 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c58277 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c58279 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5827f je 0x10c5828b */
  if (C.zf) goto L_10c5828b;
  /* 10c58281 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10c58286 jmp 0x10c58579 */
  goto L_10c58579;
L_10c5828b:;
  /* 10c5828b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5828e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10c58294 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c5829b jmp 0x10c582a6 */
  goto L_10c582a6;
L_10c5829d:;
  /* 10c5829d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c582a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c582a3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c582a6:;
  /* 10c582a6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c582aa jge 0x10c584dd */
  if ((C.sf==C.of)) goto L_10c584dd;
  /* 10c582b0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10c582ba mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c582c0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10c582c6:;
  /* 10c582c6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c582cc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c582cf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10c582d5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c582db cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c582e1 je 0x10c5840a */
  if (C.zf) goto L_10c5840a;
  /* 10c582e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c582ea mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c582f0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c582f7 je 0x10c5840a */
  if (C.zf) goto L_10c5840a;
  /* 10c582fd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c58303 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58309 jb 0x10c5831e */
  if (C.cf) goto L_10c5831e;
  /* 10c5830b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c58311 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58316 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5831c jb 0x10c58328 */
  if (C.cf) goto L_10c58328;
L_10c5831e:;
  /* 10c5831e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10c58323 jmp 0x10c58579 */
  goto L_10c58579;
L_10c58328:;
  /* 10c58328 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c5832e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c58334 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10c5833a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10c58340 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58343 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c58346 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c58349 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5834e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10c58354:;
  /* 10c58354 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c58357 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5835d je 0x10c5837e */
  if (C.zf) goto L_10c5837e;
  /* 10c5835f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c58362 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58368 jne 0x10c5836c */
  if (!C.zf) goto L_10c5836c;
  /* 10c5836a jmp 0x10c5837e */
  goto L_10c5837e;
L_10c5836c:;
  /* 10c5836c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5836f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c58371 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10c58374 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c58377 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58379 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c5837c jmp 0x10c58354 */
  goto L_10c58354;
L_10c5837e:;
  /* 10c5837e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c58381 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58387 jne 0x10c58393 */
  if (!C.zf) goto L_10c58393;
  /* 10c58389 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10c5838e jmp 0x10c58579 */
  goto L_10c58579;
L_10c58393:;
  /* 10c58393 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c58399 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5839b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c5839e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c583a1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10c583a7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c583ae jle 0x10c583ba */
  if ((C.zf||C.sf!=C.of)) goto L_10c583ba;
  /* 10c583b0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10c583ba:;
  /* 10c583ba mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c583c0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c583c3 je 0x10c583cf */
  if (C.zf) goto L_10c583cf;
  /* 10c583c5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10c583ca jmp 0x10c58579 */
  goto L_10c58579;
L_10c583cf:;
  /* 10c583cf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c583d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c583d8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c583de je 0x10c583ea */
  if (C.zf) goto L_10c583ea;
  /* 10c583e0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10c583e5 jmp 0x10c58579 */
  goto L_10c58579;
L_10c583ea:;
  /* 10c583ea mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c583f0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10c583f6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c583fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c583ff mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10c58405 jmp 0x10c582c6 */
  goto L_10c582c6;
L_10c5840a:;
  /* 10c5840a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58411 je 0x10c58481 */
  if (C.zf) goto L_10c58481;
  /* 10c58413 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58417 jge 0x10c5844b */
  if ((C.sf==C.of)) goto L_10c5844b;
  /* 10c58419 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c5841e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c58421 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c58423 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10c58429 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5842b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10c58431 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c58436 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c58439 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c5843b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10c58441 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58443 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10c58449 jmp 0x10c58481 */
  goto L_10c58481;
L_10c5844b:;
  /* 10c5844b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5844e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58451 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c58456 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c58458 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10c5845e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58460 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10c58466 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c58469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5846c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c58471 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c58473 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10c58479 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5847b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10c58481:;
  /* 10c58481 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c58487 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5848a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58490 jne 0x10c584a4 */
  if (!C.zf) goto L_10c584a4;
  /* 10c58492 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c58495 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c5849b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c584a2 je 0x10c584ae */
  if (C.zf) goto L_10c584ae;
L_10c584a4:;
  /* 10c584a4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10c584a9 jmp 0x10c58579 */
  goto L_10c58579;
L_10c584ae:;
  /* 10c584ae mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c584b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c584b7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c584bd je 0x10c584c9 */
  if (C.zf) goto L_10c584c9;
  /* 10c584bf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10c584c4 jmp 0x10c58579 */
  goto L_10c58579;
L_10c584c9:;
  /* 10c584c9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c584cf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c584d2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10c584d8 jmp 0x10c5829d */
  goto L_10c5829d;
L_10c584dd:;
  /* 10c584dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c584e0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c584e6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10c584ec cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c584f0 jne 0x10c5850a */
  if (!C.zf) goto L_10c5850a;
  /* 10c584f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c584f5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c584fb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10c58501 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58508 je 0x10c58511 */
  if (C.zf) goto L_10c58511;
L_10c5850a:;
  /* 10c5850a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10c5850f jmp 0x10c58579 */
  goto L_10c58579;
L_10c58511:;
  /* 10c58511 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c58517 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5851d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10c58523 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c58526 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5852b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c5852e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58531 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c58533 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c58536 jmp 0x10c5803a */
  goto L_10c5803a;
L_10c5853b:;
  /* 10c5853b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c58541 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10c58547 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58549 jne 0x10c5855c */
  if (!C.zf) goto L_10c5855c;
  /* 10c5854b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c58551 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10c58557 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5855a je 0x10c58563 */
  if (C.zf) goto L_10c58563;
L_10c5855c:;
  /* 10c5855c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10c58561 jmp 0x10c58579 */
  goto L_10c58579;
L_10c58563:;
  /* 10c58563 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c58569 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5856c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10c58572 jmp 0x10c57fa3 */
  goto L_10c57fa3;
L_10c58577:;
  /* 10c58577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c58579:;
  /* 10c58579 mov esp, ebp */
  ESP = (EBP);
  /* 10c5857b pop ebp */
  EBP = (pop32());
  /* 10c5857c ret  */
  ESPCHK(0x10c57f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x10c58580 (250 bytes, 92 insns) */
void f_10c58580(void) {
  FTRACE(0x10c58580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58580 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58581 mov ebp, esp */
  EBP = (ESP);
  /* 10c58583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58586 push ebx */
  push32((uint32_t)(EBX));
  /* 10c58587 push esi */
  push32((uint32_t)(ESI));
  /* 10c58588 push edi */
  push32((uint32_t)(EDI));
  /* 10c58589 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c5858c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c5858f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c58592 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10c58595:;
  /* 10c58595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58599 jne 0x10c585b9 */
  if (!C.zf) goto L_10c585b9;
  /* 10c5859b push 0x10c79da8 */
  push32((uint32_t)(0x10c79da8u));
  /* 10c585a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c585a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10c585a4 push 0x10c79d9c */
  push32((uint32_t)(0x10c79d9cu));
  /* 10c585a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c585ab call 0x10c51730 */
  push32(0x10c585b0u); f_10c51730();
  /* 10c585b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c585b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c585b6 jne 0x10c585b9 */
  if (!C.zf) goto L_10c585b9;
  /* 10c585b8 int3  */
  x86_unimpl("int3 @ 0x10c585b8");
L_10c585b9:;
  /* 10c585b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c585bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c585bd jne 0x10c58595 */
  if (!C.zf) goto L_10c58595;
L_10c585bf:;
  /* 10c585bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c585c3 jne 0x10c585e3 */
  if (!C.zf) goto L_10c585e3;
  /* 10c585c5 push 0x10c79d8c */
  push32((uint32_t)(0x10c79d8cu));
  /* 10c585ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c585cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c585ce push 0x10c79d9c */
  push32((uint32_t)(0x10c79d9cu));
  /* 10c585d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c585d5 call 0x10c51730 */
  push32(0x10c585dau); f_10c51730();
  /* 10c585da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c585dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c585e0 jne 0x10c585e3 */
  if (!C.zf) goto L_10c585e3;
  /* 10c585e2 int3  */
  x86_unimpl("int3 @ 0x10c585e2");
L_10c585e3:;
  /* 10c585e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c585e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c585e7 jne 0x10c585bf */
  if (!C.zf) goto L_10c585bf;
  /* 10c585e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c585ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10c585f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c585f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c585f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c585fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c585ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58602 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c58604 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58607 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10c5860e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c58611 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c58615 push edx */
  push32((uint32_t)(EDX));
  /* 10c58616 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58619 push eax */
  push32((uint32_t)(EAX));
  /* 10c5861a call 0x10c59600 */
  push32(0x10c5861fu); f_10c59600();
  /* 10c5861f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58622 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c58625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58628 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5862b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5862e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58631 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c58634 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58637 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5863b jl 0x10c5865f */
  if ((C.sf!=C.of)) goto L_10c5865f;
  /* 10c5863d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58640 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c58642 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c58645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c58647 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5864d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c58650 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58653 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c58655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58658 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5865b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c5865d jmp 0x10c58670 */
  goto L_10c58670;
L_10c5865f:;
  /* 10c5865f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58662 push edx */
  push32((uint32_t)(EDX));
  /* 10c58663 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c58665 call 0x10c59380 */
  push32(0x10c5866au); f_10c59380();
  /* 10c5866a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5866d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10c58670:;
  /* 10c58670 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c58673 pop edi */
  EDI = (pop32());
  /* 10c58674 pop esi */
  ESI = (pop32());
  /* 10c58675 pop ebx */
  EBX = (pop32());
  /* 10c58676 mov esp, ebp */
  ESP = (EBP);
  /* 10c58678 pop ebp */
  EBP = (pop32());
  /* 10c58679 ret  */
  ESPCHK(0x10c58580u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x10c58680 (183 bytes, 58 insns) */
void f_10c58680(void) {
  FTRACE(0x10c58680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58680 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58681 mov ebp, esp */
  EBP = (ESP);
  /* 10c58683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58689 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5868c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58691 ja 0x10c586aa */
  if ((!C.cf&&!C.zf)) goto L_10c586aa;
  /* 10c58693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58696 mov edx, dword ptr [0x10c7cc98] */
  EDX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c5869c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5869e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c586a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10c586a5 jmp 0x10c58733 */
  goto L_10c58733;
L_10c586aa:;
  /* 10c586aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c586ad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c586b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c586b6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c586bc mov edx, dword ptr [0x10c7cc98] */
  EDX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c586c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c586c4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c586c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c586cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c586cf je 0x10c586f3 */
  if (C.zf) goto L_10c586f3;
  /* 10c586d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c586d4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c586d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c586dd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10c586e0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c586e3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10c586e6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10c586ea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10c586f1 jmp 0x10c58704 */
  goto L_10c58704;
L_10c586f3:;
  /* 10c586f3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c586f6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10c586f9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10c586fd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10c58704:;
  /* 10c58704 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c58706 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c58708 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5870a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10c5870d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5870e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58711 push edx */
  push32((uint32_t)(EDX));
  /* 10c58712 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c58715 push eax */
  push32((uint32_t)(EAX));
  /* 10c58716 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c58718 call 0x10c5a8a0 */
  push32(0x10c5871du); f_10c5a8a0();
  /* 10c5871d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c58722 jne 0x10c58728 */
  if (!C.zf) goto L_10c58728;
  /* 10c58724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58726 jmp 0x10c58733 */
  goto L_10c58733;
L_10c58728:;
  /* 10c58728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5872b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c58730 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10c58733:;
  /* 10c58733 mov esp, ebp */
  ESP = (EBP);
  /* 10c58735 pop ebp */
  EBP = (pop32());
  /* 10c58736 ret  */
  ESPCHK(0x10c58680u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x10c58740 (836 bytes, 238 insns) */
void f_10c58740(void) {
  FTRACE(0x10c58740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58740 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58741 mov ebp, esp */
  EBP = (ESP);
  /* 10c58743 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58746 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c58748 call 0x10c56070 */
  push32(0x10c5874du); f_10c56070();
  /* 10c5874d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58753 push eax */
  push32((uint32_t)(EAX));
  /* 10c58754 call 0x10c58a90 */
  push32(0x10c58759u); f_10c58a90();
  /* 10c58759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5875c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c5875f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58762 cmp ecx, dword ptr [0x10c7fae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58768 jne 0x10c5877b */
  if (!C.zf) goto L_10c5877b;
  /* 10c5876a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c5876c call 0x10c56110 */
  push32(0x10c58771u); f_10c56110();
  /* 10c58771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58776 jmp 0x10c58a80 */
  goto L_10c58a80;
L_10c5877b:;
  /* 10c5877b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5877f jne 0x10c5879c */
  if (!C.zf) goto L_10c5879c;
  /* 10c58781 call 0x10c58b70 */
  push32(0x10c58786u); f_10c58b70();
  /* 10c58786 call 0x10c58bf0 */
  push32(0x10c5878bu); f_10c58bf0();
  /* 10c5878b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c5878d call 0x10c56110 */
  push32(0x10c58792u); f_10c56110();
  /* 10c58792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58795 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58797 jmp 0x10c58a80 */
  goto L_10c58a80;
L_10c5879c:;
  /* 10c5879c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c587a3 jmp 0x10c587ae */
  goto L_10c587ae;
L_10c587a5:;
  /* 10c587a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c587a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c587ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c587ae:;
  /* 10c587ae cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c587b2 jae 0x10c588ff */
  if (!C.cf) goto L_10c588ff;
  /* 10c587b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c587bb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c587be mov ecx, dword ptr [eax + 0x10c7ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10c7ceb8)));
  /* 10c587c4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c587c7 jne 0x10c588fa */
  if (!C.zf) goto L_10c588fa;
  /* 10c587cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c587d4 jmp 0x10c587df */
  goto L_10c587df;
L_10c587d6:;
  /* 10c587d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c587d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c587dc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10c587df:;
  /* 10c587df cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c587e6 jae 0x10c587f4 */
  if (!C.cf) goto L_10c587f4;
  /* 10c587e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c587eb mov byte ptr [eax + 0x10c7fc80], 0 */
  w8((uint32_t)(EAX + 0x10c7fc80), (0x0u));
  /* 10c587f2 jmp 0x10c587d6 */
  goto L_10c587d6;
L_10c587f4:;
  /* 10c587f4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c587fb jmp 0x10c58806 */
  goto L_10c58806;
L_10c587fd:;
  /* 10c587fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c58800 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58803 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c58806:;
  /* 10c58806 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5880a jae 0x10c58887 */
  if (!C.cf) goto L_10c58887;
  /* 10c5880c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5880f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c58812 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c58815 lea ecx, [edx + eax*8 + 0x10c7cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10c7cec8));
  /* 10c5881c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5881f jmp 0x10c5882a */
  goto L_10c5882a;
L_10c58821:;
  /* 10c58821 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58824 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58827 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c5882a:;
  /* 10c5882a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5882d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5882f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c58831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c58833 je 0x10c58882 */
  if (C.zf) goto L_10c58882;
  /* 10c58835 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5883a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c5883d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5883f je 0x10c58882 */
  if (C.zf) goto L_10c58882;
  /* 10c58841 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c58848 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c5884b jmp 0x10c58856 */
  goto L_10c58856;
L_10c5884d:;
  /* 10c5884d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58850 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58853 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c58856:;
  /* 10c58856 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c58859 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5885b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c5885e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58861 ja 0x10c58880 */
  if ((!C.cf&&!C.zf)) goto L_10c58880;
  /* 10c58863 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c58869 mov dl, byte ptr [eax + 0x10c7fc81] */
  DL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c5886f or dl, byte ptr [ecx + 0x10c7ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10c7ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10c58875 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58878 mov byte ptr [eax + 0x10c7fc81], dl */
  w8((uint32_t)(EAX + 0x10c7fc81), (DL));
  /* 10c5887e jmp 0x10c5884d */
  goto L_10c5884d;
L_10c58880:;
  /* 10c58880 jmp 0x10c58821 */
  goto L_10c58821;
L_10c58882:;
  /* 10c58882 jmp 0x10c587fd */
  goto L_10c587fd;
L_10c58887:;
  /* 10c58887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5888a mov dword ptr [0x10c7fae4], ecx */
  w32((uint32_t)(0x10c7fae4), (ECX));
  /* 10c58890 mov dword ptr [0x10c7fb6c], 1 */
  w32((uint32_t)(0x10c7fb6c), (0x1u));
  /* 10c5889a mov edx, dword ptr [0x10c7fae4] */
  EDX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c588a0 push edx */
  push32((uint32_t)(EDX));
  /* 10c588a1 call 0x10c58af0 */
  push32(0x10c588a6u); f_10c58af0();
  /* 10c588a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c588a9 mov dword ptr [0x10c7fd84], eax */
  w32((uint32_t)(0x10c7fd84), (EAX));
  /* 10c588ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c588b5 jmp 0x10c588c0 */
  goto L_10c588c0;
L_10c588b7:;
  /* 10c588b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c588ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c588bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c588c0:;
  /* 10c588c0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c588c4 jae 0x10c588e4 */
  if (!C.cf) goto L_10c588e4;
  /* 10c588c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c588c9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c588cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c588cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c588d2 mov cx, word ptr [ecx + eax*2 + 0x10c7cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10c7cebc)));
  /* 10c588da mov word ptr [edx*2 + 0x10c7fb60], cx */
  w16((uint32_t)(EDX*2 + 0x10c7fb60), (CX));
  /* 10c588e2 jmp 0x10c588b7 */
  goto L_10c588b7;
L_10c588e4:;
  /* 10c588e4 call 0x10c58bf0 */
  push32(0x10c588e9u); f_10c58bf0();
  /* 10c588e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c588eb call 0x10c56110 */
  push32(0x10c588f0u); f_10c56110();
  /* 10c588f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c588f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c588f5 jmp 0x10c58a80 */
  goto L_10c58a80;
L_10c588fa:;
  /* 10c588fa jmp 0x10c587a5 */
  goto L_10c587a5;
L_10c588ff:;
  /* 10c588ff lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10c58902 push edx */
  push32((uint32_t)(EDX));
  /* 10c58903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58906 push eax */
  push32((uint32_t)(EAX));
  /* 10c58907 call dword ptr [0x10c802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802dc))), 0x10c5890du);
  /* 10c5890d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58910 jne 0x10c58a52 */
  if (!C.zf) goto L_10c58a52;
  /* 10c58916 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c5891d jmp 0x10c58928 */
  goto L_10c58928;
L_10c5891f:;
  /* 10c5891f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58925 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10c58928:;
  /* 10c58928 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5892f jae 0x10c5893d */
  if (!C.cf) goto L_10c5893d;
  /* 10c58931 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58934 mov byte ptr [edx + 0x10c7fc80], 0 */
  w8((uint32_t)(EDX + 0x10c7fc80), (0x0u));
  /* 10c5893b jmp 0x10c5891f */
  goto L_10c5891f;
L_10c5893d:;
  /* 10c5893d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58940 mov dword ptr [0x10c7fae4], eax */
  w32((uint32_t)(0x10c7fae4), (EAX));
  /* 10c58945 mov dword ptr [0x10c7fd84], 0 */
  w32((uint32_t)(0x10c7fd84), (0x0u));
  /* 10c5894f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58953 jbe 0x10c58a0e */
  if ((C.cf||C.zf)) goto L_10c58a0e;
  /* 10c58959 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10c5895c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c5895f jmp 0x10c5896a */
  goto L_10c5896a;
L_10c58961:;
  /* 10c58961 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c58964 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58967 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10c5896a:;
  /* 10c5896a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5896d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5896f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c58971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c58973 je 0x10c589bc */
  if (C.zf) goto L_10c589bc;
  /* 10c58975 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c58978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5897a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c5897d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5897f je 0x10c589bc */
  if (C.zf) goto L_10c589bc;
  /* 10c58981 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c58984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c58988 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c5898b jmp 0x10c58996 */
  goto L_10c58996;
L_10c5898d:;
  /* 10c5898d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c58990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58993 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c58996:;
  /* 10c58996 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c58999 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5899b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c5899e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c589a1 ja 0x10c589ba */
  if ((!C.cf&&!C.zf)) goto L_10c589ba;
  /* 10c589a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c589a6 mov cl, byte ptr [eax + 0x10c7fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c589ac or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10c589af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c589b2 mov byte ptr [edx + 0x10c7fc81], cl */
  w8((uint32_t)(EDX + 0x10c7fc81), (CL));
  /* 10c589b8 jmp 0x10c5898d */
  goto L_10c5898d;
L_10c589ba:;
  /* 10c589ba jmp 0x10c58961 */
  goto L_10c58961;
L_10c589bc:;
  /* 10c589bc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10c589c3 jmp 0x10c589ce */
  goto L_10c589ce;
L_10c589c5:;
  /* 10c589c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c589c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c589cb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c589ce:;
  /* 10c589ce cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c589d5 jae 0x10c589ee */
  if (!C.cf) goto L_10c589ee;
  /* 10c589d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c589da mov dl, byte ptr [ecx + 0x10c7fc81] */
  DL = (r8((uint32_t)(ECX + 0x10c7fc81)));
  /* 10c589e0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10c589e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c589e6 mov byte ptr [eax + 0x10c7fc81], dl */
  w8((uint32_t)(EAX + 0x10c7fc81), (DL));
  /* 10c589ec jmp 0x10c589c5 */
  goto L_10c589c5;
L_10c589ee:;
  /* 10c589ee mov ecx, dword ptr [0x10c7fae4] */
  ECX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c589f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c589f5 call 0x10c58af0 */
  push32(0x10c589fau); f_10c58af0();
  /* 10c589fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c589fd mov dword ptr [0x10c7fd84], eax */
  w32((uint32_t)(0x10c7fd84), (EAX));
  /* 10c58a02 mov dword ptr [0x10c7fb6c], 1 */
  w32((uint32_t)(0x10c7fb6c), (0x1u));
  /* 10c58a0c jmp 0x10c58a18 */
  goto L_10c58a18;
L_10c58a0e:;
  /* 10c58a0e mov dword ptr [0x10c7fb6c], 0 */
  w32((uint32_t)(0x10c7fb6c), (0x0u));
L_10c58a18:;
  /* 10c58a18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c58a1f jmp 0x10c58a2a */
  goto L_10c58a2a;
L_10c58a21:;
  /* 10c58a21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c58a24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58a27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c58a2a:;
  /* 10c58a2a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58a2e jae 0x10c58a3f */
  if (!C.cf) goto L_10c58a3f;
  /* 10c58a30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c58a33 mov word ptr [eax*2 + 0x10c7fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10c7fb60), (0x0u));
  /* 10c58a3d jmp 0x10c58a21 */
  goto L_10c58a21;
L_10c58a3f:;
  /* 10c58a3f call 0x10c58bf0 */
  push32(0x10c58a44u); f_10c58bf0();
  /* 10c58a44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c58a46 call 0x10c56110 */
  push32(0x10c58a4bu); f_10c56110();
  /* 10c58a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58a4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58a50 jmp 0x10c58a80 */
  goto L_10c58a80;
L_10c58a52:;
  /* 10c58a52 cmp dword ptr [0x10c7e5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58a59 je 0x10c58a73 */
  if (C.zf) goto L_10c58a73;
  /* 10c58a5b call 0x10c58b70 */
  push32(0x10c58a60u); f_10c58b70();
  /* 10c58a60 call 0x10c58bf0 */
  push32(0x10c58a65u); f_10c58bf0();
  /* 10c58a65 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c58a67 call 0x10c56110 */
  push32(0x10c58a6cu); f_10c56110();
  /* 10c58a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c58a71 jmp 0x10c58a80 */
  goto L_10c58a80;
L_10c58a73:;
  /* 10c58a73 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c58a75 call 0x10c56110 */
  push32(0x10c58a7au); f_10c56110();
  /* 10c58a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58a7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c58a80:;
  /* 10c58a80 mov esp, ebp */
  ESP = (EBP);
  /* 10c58a82 pop ebp */
  EBP = (pop32());
  /* 10c58a83 ret  */
  ESPCHK(0x10c58740u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10c58a90 (89 bytes, 21 insns) */
void f_10c58a90(void) {
  FTRACE(0x10c58a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58a91 mov ebp, esp */
  EBP = (ESP);
  /* 10c58a93 mov dword ptr [0x10c7e5f0], 0 */
  w32((uint32_t)(0x10c7e5f0), (0x0u));
  /* 10c58a9d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58aa1 jne 0x10c58ab5 */
  if (!C.zf) goto L_10c58ab5;
  /* 10c58aa3 mov dword ptr [0x10c7e5f0], 1 */
  w32((uint32_t)(0x10c7e5f0), (0x1u));
  /* 10c58aad call dword ptr [0x10c802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802e4))), 0x10c58ab3u);
  /* 10c58ab3 jmp 0x10c58ae7 */
  goto L_10c58ae7;
L_10c58ab5:;
  /* 10c58ab5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58ab9 jne 0x10c58acd */
  if (!C.zf) goto L_10c58acd;
  /* 10c58abb mov dword ptr [0x10c7e5f0], 1 */
  w32((uint32_t)(0x10c7e5f0), (0x1u));
  /* 10c58ac5 call dword ptr [0x10c802e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802e0))), 0x10c58acbu);
  /* 10c58acb jmp 0x10c58ae7 */
  goto L_10c58ae7;
L_10c58acd:;
  /* 10c58acd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58ad1 jne 0x10c58ae4 */
  if (!C.zf) goto L_10c58ae4;
  /* 10c58ad3 mov dword ptr [0x10c7e5f0], 1 */
  w32((uint32_t)(0x10c7e5f0), (0x1u));
  /* 10c58add mov eax, dword ptr [0x10c7e610] */
  EAX = (r32((uint32_t)(0x10c7e610)));
  /* 10c58ae2 jmp 0x10c58ae7 */
  goto L_10c58ae7;
L_10c58ae4:;
  /* 10c58ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10c58ae7:;
  /* 10c58ae7 pop ebp */
  EBP = (pop32());
  /* 10c58ae8 ret  */
  ESPCHK(0x10c58a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008af0 @ 0x10c58af0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10c58af0(void) {
  FTRACE(0x10c58af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58af1 mov ebp, esp */
  EBP = (ESP);
  /* 10c58af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58af4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58af7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c58afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58afd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58b03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c58b06 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58b0a ja 0x10c58b3a */
  if ((!C.cf&&!C.zf)) goto L_10c58b3a;
  /* 10c58b0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58b0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58b11 mov dl, byte ptr [eax + 0x10c58b54] */
  DL = (r8((uint32_t)(EAX + 0x10c58b54)));
  /* 10c58b17 jmp dword ptr [edx*4 + 0x10c58b40] */
  switch (EDX) {
    case 0: goto L_10c58b1e;
    case 1: goto L_10c58b25;
    case 2: goto L_10c58b2c;
    case 3: goto L_10c58b33;
    case 4: goto L_10c58b3a;
    default: x86_unimpl("switch@0x10c58b17 out of table"); return;
  }
L_10c58b1e:;
  /* 10c58b1e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10c58b23 jmp 0x10c58b3c */
  goto L_10c58b3c;
L_10c58b25:;
  /* 10c58b25 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10c58b2a jmp 0x10c58b3c */
  goto L_10c58b3c;
L_10c58b2c:;
  /* 10c58b2c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10c58b31 jmp 0x10c58b3c */
  goto L_10c58b3c;
L_10c58b33:;
  /* 10c58b33 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10c58b38 jmp 0x10c58b3c */
  goto L_10c58b3c;
L_10c58b3a:;
  /* 10c58b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c58b3c:;
  /* 10c58b3c mov esp, ebp */
  ESP = (EBP);
  /* 10c58b3e pop ebp */
  EBP = (pop32());
  /* 10c58b3f ret  */
  ESPCHK(0x10c58af0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10c58b70 (116 bytes, 29 insns) */
void f_10c58b70(void) {
  FTRACE(0x10c58b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58b71 mov ebp, esp */
  EBP = (ESP);
  /* 10c58b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58b74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c58b7b jmp 0x10c58b86 */
  goto L_10c58b86;
L_10c58b7d:;
  /* 10c58b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58b80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58b83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c58b86:;
  /* 10c58b86 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58b8d jge 0x10c58b9b */
  if ((C.sf==C.of)) goto L_10c58b9b;
  /* 10c58b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58b92 mov byte ptr [ecx + 0x10c7fc80], 0 */
  w8((uint32_t)(ECX + 0x10c7fc80), (0x0u));
  /* 10c58b99 jmp 0x10c58b7d */
  goto L_10c58b7d;
L_10c58b9b:;
  /* 10c58b9b mov dword ptr [0x10c7fae4], 0 */
  w32((uint32_t)(0x10c7fae4), (0x0u));
  /* 10c58ba5 mov dword ptr [0x10c7fb6c], 0 */
  w32((uint32_t)(0x10c7fb6c), (0x0u));
  /* 10c58baf mov dword ptr [0x10c7fd84], 0 */
  w32((uint32_t)(0x10c7fd84), (0x0u));
  /* 10c58bb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c58bc0 jmp 0x10c58bcb */
  goto L_10c58bcb;
L_10c58bc2:;
  /* 10c58bc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58bc5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58bc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c58bcb:;
  /* 10c58bcb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58bcf jge 0x10c58be0 */
  if ((C.sf==C.of)) goto L_10c58be0;
  /* 10c58bd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58bd4 mov word ptr [eax*2 + 0x10c7fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10c7fb60), (0x0u));
  /* 10c58bde jmp 0x10c58bc2 */
  goto L_10c58bc2;
L_10c58be0:;
  /* 10c58be0 mov esp, ebp */
  ESP = (EBP);
  /* 10c58be2 pop ebp */
  EBP = (pop32());
  /* 10c58be3 ret  */
  ESPCHK(0x10c58b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x10c58bf0 (770 bytes, 175 insns) */
void f_10c58bf0(void) {
  FTRACE(0x10c58bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c58bf3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58bf9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10c58bff push eax */
  push32((uint32_t)(EAX));
  /* 10c58c00 mov ecx, dword ptr [0x10c7fae4] */
  ECX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c58c06 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58c07 call dword ptr [0x10c802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802dc))), 0x10c58c0du);
  /* 10c58c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58c10 jne 0x10c58e29 */
  if (!C.zf) goto L_10c58e29;
  /* 10c58c16 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c58c20 jmp 0x10c58c31 */
  goto L_10c58c31;
L_10c58c22:;
  /* 10c58c22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58c28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58c2b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10c58c31:;
  /* 10c58c31 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58c3b jae 0x10c58c52 */
  if (!C.cf) goto L_10c58c52;
  /* 10c58c3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58c43 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10c58c49 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10c58c50 jmp 0x10c58c22 */
  goto L_10c58c22;
L_10c58c52:;
  /* 10c58c52 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10c58c59 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10c58c5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c58c62 jmp 0x10c58c6d */
  goto L_10c58c6d;
L_10c58c64:;
  /* 10c58c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58c67 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58c6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c58c6d:;
  /* 10c58c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58c70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58c72 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c58c74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c58c76 je 0x10c58cb8 */
  if (C.zf) goto L_10c58cb8;
  /* 10c58c78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58c7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c58c7d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c58c7f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10c58c85 jmp 0x10c58c96 */
  goto L_10c58c96;
L_10c58c87:;
  /* 10c58c87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58c8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58c90 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10c58c96:;
  /* 10c58c96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c58c99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c58c9b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c58c9e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58ca4 ja 0x10c58cb6 */
  if ((!C.cf&&!C.zf)) goto L_10c58cb6;
  /* 10c58ca6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58cac mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10c58cb4 jmp 0x10c58c87 */
  goto L_10c58c87;
L_10c58cb6:;
  /* 10c58cb6 jmp 0x10c58c64 */
  goto L_10c58c64;
L_10c58cb8:;
  /* 10c58cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c58cba mov eax, dword ptr [0x10c7fd84] */
  EAX = (r32((uint32_t)(0x10c7fd84)));
  /* 10c58cbf push eax */
  push32((uint32_t)(EAX));
  /* 10c58cc0 mov ecx, dword ptr [0x10c7fae4] */
  ECX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c58cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58cc7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10c58ccd push edx */
  push32((uint32_t)(EDX));
  /* 10c58cce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c58cd3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10c58cd9 push eax */
  push32((uint32_t)(EAX));
  /* 10c58cda push 1 */
  push32((uint32_t)(0x1u));
  /* 10c58cdc call 0x10c5a8a0 */
  push32(0x10c58ce1u); f_10c5a8a0();
  /* 10c58ce1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c58ce6 mov ecx, dword ptr [0x10c7fae4] */
  ECX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c58cec push ecx */
  push32((uint32_t)(ECX));
  /* 10c58ced push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c58cf2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10c58cf8 push edx */
  push32((uint32_t)(EDX));
  /* 10c58cf9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c58cfe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10c58d04 push eax */
  push32((uint32_t)(EAX));
  /* 10c58d05 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c58d0a mov ecx, dword ptr [0x10c7fd84] */
  ECX = (r32((uint32_t)(0x10c7fd84)));
  /* 10c58d10 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58d11 call 0x10c5aa60 */
  push32(0x10c58d16u); f_10c5aa60();
  /* 10c58d16 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c58d1b mov edx, dword ptr [0x10c7fae4] */
  EDX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c58d21 push edx */
  push32((uint32_t)(EDX));
  /* 10c58d22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c58d27 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10c58d2d push eax */
  push32((uint32_t)(EAX));
  /* 10c58d2e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c58d33 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10c58d39 push ecx */
  push32((uint32_t)(ECX));
  /* 10c58d3a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10c58d3f mov edx, dword ptr [0x10c7fd84] */
  EDX = (r32((uint32_t)(0x10c7fd84)));
  /* 10c58d45 push edx */
  push32((uint32_t)(EDX));
  /* 10c58d46 call 0x10c5aa60 */
  push32(0x10c58d4bu); f_10c5aa60();
  /* 10c58d4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58d4e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c58d58 jmp 0x10c58d69 */
  goto L_10c58d69;
L_10c58d5a:;
  /* 10c58d5a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58d60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58d63 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10c58d69:;
  /* 10c58d69 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58d73 jae 0x10c58e24 */
  if (!C.cf) goto L_10c58e24;
  /* 10c58d79 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58d7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58d81 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10c58d89 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c58d8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c58d8e je 0x10c58dc6 */
  if (C.zf) goto L_10c58dc6;
  /* 10c58d90 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58d96 mov cl, byte ptr [eax + 0x10c7fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c58d9c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10c58d9f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58da5 mov byte ptr [edx + 0x10c7fc81], cl */
  w8((uint32_t)(EDX + 0x10c7fc81), (CL));
  /* 10c58dab mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58db1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58db7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10c58dbe mov byte ptr [eax + 0x10c7fb80], dl */
  w8((uint32_t)(EAX + 0x10c7fb80), (DL));
  /* 10c58dc4 jmp 0x10c58e1f */
  goto L_10c58e1f;
L_10c58dc6:;
  /* 10c58dc6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58dcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c58dce mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10c58dd6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c58dd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c58ddb je 0x10c58e12 */
  if (C.zf) goto L_10c58e12;
  /* 10c58ddd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58de3 mov al, byte ptr [edx + 0x10c7fc81] */
  AL = (r8((uint32_t)(EDX + 0x10c7fc81)));
  /* 10c58de9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c58deb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58df1 mov byte ptr [ecx + 0x10c7fc81], al */
  w8((uint32_t)(ECX + 0x10c7fc81), (AL));
  /* 10c58df7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58dfd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e03 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10c58e0a mov byte ptr [edx + 0x10c7fb80], cl */
  w8((uint32_t)(EDX + 0x10c7fb80), (CL));
  /* 10c58e10 jmp 0x10c58e1f */
  goto L_10c58e1f;
L_10c58e12:;
  /* 10c58e12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e18 mov byte ptr [edx + 0x10c7fb80], 0 */
  w8((uint32_t)(EDX + 0x10c7fb80), (0x0u));
L_10c58e1f:;
  /* 10c58e1f jmp 0x10c58d5a */
  goto L_10c58d5a;
L_10c58e24:;
  /* 10c58e24 jmp 0x10c58eee */
  goto L_10c58eee;
L_10c58e29:;
  /* 10c58e29 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c58e33 jmp 0x10c58e44 */
  goto L_10c58e44;
L_10c58e35:;
  /* 10c58e35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58e3e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10c58e44:;
  /* 10c58e44 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58e4e jae 0x10c58eee */
  if (!C.cf) goto L_10c58eee;
  /* 10c58e54 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58e5b jb 0x10c58e98 */
  if (C.cf) goto L_10c58e98;
  /* 10c58e5d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58e64 ja 0x10c58e98 */
  if ((!C.cf&&!C.zf)) goto L_10c58e98;
  /* 10c58e66 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e6c mov dl, byte ptr [ecx + 0x10c7fc81] */
  DL = (r8((uint32_t)(ECX + 0x10c7fc81)));
  /* 10c58e72 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10c58e75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e7b mov byte ptr [eax + 0x10c7fc81], dl */
  w8((uint32_t)(EAX + 0x10c7fc81), (DL));
  /* 10c58e81 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e87 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58e8a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58e90 mov byte ptr [edx + 0x10c7fb80], cl */
  w8((uint32_t)(EDX + 0x10c7fb80), (CL));
  /* 10c58e96 jmp 0x10c58ee9 */
  goto L_10c58ee9;
L_10c58e98:;
  /* 10c58e98 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58e9f jb 0x10c58edc */
  if (C.cf) goto L_10c58edc;
  /* 10c58ea1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58ea8 ja 0x10c58edc */
  if ((!C.cf&&!C.zf)) goto L_10c58edc;
  /* 10c58eaa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58eb0 mov cl, byte ptr [eax + 0x10c7fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c58eb6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c58eb9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58ebf mov byte ptr [edx + 0x10c7fc81], cl */
  w8((uint32_t)(EDX + 0x10c7fc81), (CL));
  /* 10c58ec5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58ecb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58ece mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58ed4 mov byte ptr [ecx + 0x10c7fb80], al */
  w8((uint32_t)(ECX + 0x10c7fb80), (AL));
  /* 10c58eda jmp 0x10c58ee9 */
  goto L_10c58ee9;
L_10c58edc:;
  /* 10c58edc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c58ee2 mov byte ptr [edx + 0x10c7fb80], 0 */
  w8((uint32_t)(EDX + 0x10c7fb80), (0x0u));
L_10c58ee9:;
  /* 10c58ee9 jmp 0x10c58e35 */
  goto L_10c58e35;
L_10c58eee:;
  /* 10c58eee mov esp, ebp */
  ESP = (EBP);
  /* 10c58ef0 pop ebp */
  EBP = (pop32());
  /* 10c58ef1 ret  */
  ESPCHK(0x10c58bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x10c58f00 (23 bytes, 9 insns) */
void f_10c58f00(void) {
  FTRACE(0x10c58f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58f01 mov ebp, esp */
  EBP = (ESP);
  /* 10c58f03 cmp dword ptr [0x10c7fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58f0a je 0x10c58f13 */
  if (C.zf) goto L_10c58f13;
  /* 10c58f0c mov eax, dword ptr [0x10c7fae4] */
  EAX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c58f11 jmp 0x10c58f15 */
  goto L_10c58f15;
L_10c58f13:;
  /* 10c58f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c58f15:;
  /* 10c58f15 pop ebp */
  EBP = (pop32());
  /* 10c58f16 ret  */
  ESPCHK(0x10c58f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f20 @ 0x10c58f20 (34 bytes, 10 insns) */
void f_10c58f20(void) {
  FTRACE(0x10c58f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58f21 mov ebp, esp */
  EBP = (ESP);
  /* 10c58f23 cmp dword ptr [0x10c7ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58f2a jne 0x10c58f40 */
  if (!C.zf) goto L_10c58f40;
  /* 10c58f2c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10c58f2e call 0x10c58740 */
  push32(0x10c58f33u); f_10c58740();
  /* 10c58f33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58f36 mov dword ptr [0x10c7ff30], 1 */
  w32((uint32_t)(0x10c7ff30), (0x1u));
L_10c58f40:;
  /* 10c58f40 pop ebp */
  EBP = (pop32());
  /* 10c58f41 ret  */
  ESPCHK(0x10c58f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f50 @ 0x10c58f50 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10c58f50(void) {
  FTRACE(0x10c58f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c58f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c58f51 mov ebp, esp */
  EBP = (ESP);
  /* 10c58f53 push edi */
  push32((uint32_t)(EDI));
  /* 10c58f54 push esi */
  push32((uint32_t)(ESI));
  /* 10c58f55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c58f58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c58f5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c58f5e mov eax, ecx */
  EAX = (ECX);
  /* 10c58f60 mov edx, ecx */
  EDX = (ECX);
  /* 10c58f62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58f64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58f66 jbe 0x10c58f70 */
  if ((C.cf||C.zf)) goto L_10c58f70;
  /* 10c58f68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58f6a jb 0x10c590e8 */
  if (C.cf) goto L_10c590e8;
L_10c58f70:;
  /* 10c58f70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c58f76 jne 0x10c58f8c */
  if (!C.zf) goto L_10c58f8c;
  /* 10c58f78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c58f7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c58f7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58f81 jb 0x10c58fac */
  if (C.cf) goto L_10c58fac;
  /* 10c58f83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c58f85 jmp dword ptr [edx*4 + 0x10c59098] */
  switch (EDX) {
    case 0: goto L_10c590a8;
    case 1: goto L_10c590b0;
    case 2: goto L_10c590bc;
    case 3: goto L_10c590d0;
    default: x86_unimpl("switch@0x10c58f85 out of table"); return;
  }
L_10c58f8c:;
  /* 10c58f8c mov eax, edi */
  EAX = (EDI);
  /* 10c58f8e mov edx, 3 */
  EDX = (0x3u);
  /* 10c58f93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c58f96 jb 0x10c58fa4 */
  if (C.cf) goto L_10c58fa4;
  /* 10c58f98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c58f9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58f9d jmp dword ptr [eax*4 + 0x10c58fb0] */
  switch (EAX) {
    case 1: goto L_10c58fc0;
    case 2: goto L_10c58fec;
    case 3: goto L_10c59010;
    default: x86_unimpl("switch@0x10c58f9d out of table"); return;
  }
L_10c58fa4:;
  /* 10c58fa4 jmp dword ptr [ecx*4 + 0x10c590a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10c590a8)))); return;
  /* 10c58fab nop  */
  /* nop */
L_10c58fac:;
  /* 10c58fac jmp dword ptr [ecx*4 + 0x10c5902c] */
  switch (ECX) {
    case 0: goto L_10c5908f;
    case 1: goto L_10c5907c;
    case 2: goto L_10c59074;
    case 3: goto L_10c5906c;
    case 4: goto L_10c59064;
    case 5: goto L_10c5905c;
    case 6: goto L_10c59054;
    case 7: goto L_10c5904c;
    default: x86_unimpl("switch@0x10c58fac out of table"); return;
  }
  /* 10c58fb3 nop  */
  /* nop */
L_10c58fc0:;
  /* 10c58fc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58fc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c58fc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c58fc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c58fc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c58fcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c58fcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c58fd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c58fd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58fd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58fdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c58fde jb 0x10c58fac */
  if (C.cf) goto L_10c58fac;
  /* 10c58fe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c58fe2 jmp dword ptr [edx*4 + 0x10c59098] */
  switch (EDX) {
    case 0: goto L_10c590a8;
    case 1: goto L_10c590b0;
    case 2: goto L_10c590bc;
    case 3: goto L_10c590d0;
    default: x86_unimpl("switch@0x10c58fe2 out of table"); return;
  }
  /* 10c58fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c58fec:;
  /* 10c58fec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c58fee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c58ff0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c58ff2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c58ff5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c58ff8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c58ffb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c58ffe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59001 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59004 jb 0x10c58fac */
  if (C.cf) goto L_10c58fac;
  /* 10c59006 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c59008 jmp dword ptr [edx*4 + 0x10c59098] */
  switch (EDX) {
    case 0: goto L_10c590a8;
    case 1: goto L_10c590b0;
    case 2: goto L_10c590bc;
    case 3: goto L_10c590d0;
    default: x86_unimpl("switch@0x10c59008 out of table"); return;
  }
  /* 10c5900f nop  */
  /* nop */
L_10c59010:;
  /* 10c59010 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c59012 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c59014 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c59016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c59017 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5901a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c5901b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5901e jb 0x10c58fac */
  if (C.cf) goto L_10c58fac;
  /* 10c59020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c59022 jmp dword ptr [edx*4 + 0x10c59098] */
  switch (EDX) {
    case 0: goto L_10c590a8;
    case 1: goto L_10c590b0;
    case 2: goto L_10c590bc;
    case 3: goto L_10c590d0;
    default: x86_unimpl("switch@0x10c59022 out of table"); return;
  }
  /* 10c59029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5904c:;
  /* 10c5904c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10c59050 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10c59054:;
  /* 10c59054 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10c59058 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10c5905c:;
  /* 10c5905c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10c59060 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10c59064:;
  /* 10c59064 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10c59068 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10c5906c:;
  /* 10c5906c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10c59070 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10c59074:;
  /* 10c59074 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10c59078 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10c5907c:;
  /* 10c5907c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10c59080 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10c59084 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c5908b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5908d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c5908f:;
  /* 10c5908f jmp dword ptr [edx*4 + 0x10c59098] */
  switch (EDX) {
    case 0: goto L_10c590a8;
    case 1: goto L_10c590b0;
    case 2: goto L_10c590bc;
    case 3: goto L_10c590d0;
    default: x86_unimpl("switch@0x10c5908f out of table"); return;
  }
  /* 10c59096 mov edi, edi */
  EDI = (EDI);
L_10c590a8:;
  /* 10c590a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c590ab pop esi */
  ESI = (pop32());
  /* 10c590ac pop edi */
  EDI = (pop32());
  /* 10c590ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c590ae ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c590af nop  */
  /* nop */
L_10c590b0:;
  /* 10c590b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c590b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c590b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c590b7 pop esi */
  ESI = (pop32());
  /* 10c590b8 pop edi */
  EDI = (pop32());
  /* 10c590b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c590ba ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c590bb nop  */
  /* nop */
L_10c590bc:;
  /* 10c590bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c590be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c590c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c590c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c590c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c590c9 pop esi */
  ESI = (pop32());
  /* 10c590ca pop edi */
  EDI = (pop32());
  /* 10c590cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c590cc ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c590cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c590d0:;
  /* 10c590d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c590d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c590d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c590d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c590da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c590dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c590e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c590e3 pop esi */
  ESI = (pop32());
  /* 10c590e4 pop edi */
  EDI = (pop32());
  /* 10c590e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c590e6 ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c590e7 nop  */
  /* nop */
L_10c590e8:;
  /* 10c590e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10c590ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10c590f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c590f6 jne 0x10c5911c */
  if (!C.zf) goto L_10c5911c;
  /* 10c590f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c590fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c590fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59101 jb 0x10c59110 */
  if (C.cf) goto L_10c59110;
  /* 10c59103 std  */
  C.df=1;
  /* 10c59104 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c59106 cld  */
  C.df=0;
  /* 10c59107 jmp dword ptr [edx*4 + 0x10c59230] */
  switch (EDX) {
    case 0: goto L_10c59240;
    case 1: goto L_10c59248;
    case 2: goto L_10c59258;
    case 3: goto L_10c5926c;
    default: x86_unimpl("switch@0x10c59107 out of table"); return;
  }
  /* 10c5910e mov edi, edi */
  EDI = (EDI);
L_10c59110:;
  /* 10c59110 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c59112 jmp dword ptr [ecx*4 + 0x10c591e0] */
  switch (ECX) {
    case 0: goto L_10c59227;
    default: x86_unimpl("switch@0x10c59112 out of table"); return;
  }
  /* 10c59119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5911c:;
  /* 10c5911c mov eax, edi */
  EAX = (EDI);
  /* 10c5911e mov edx, 3 */
  EDX = (0x3u);
  /* 10c59123 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59126 jb 0x10c59134 */
  if (C.cf) goto L_10c59134;
  /* 10c59128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5912b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5912d jmp dword ptr [eax*4 + 0x10c59138] */
  switch (EAX) {
    case 1: goto L_10c59148;
    case 2: goto L_10c59168;
    case 3: goto L_10c59190;
    default: x86_unimpl("switch@0x10c5912d out of table"); return;
  }
L_10c59134:;
  /* 10c59134 jmp dword ptr [ecx*4 + 0x10c59230] */
  switch (ECX) {
    case 0: goto L_10c59240;
    case 1: goto L_10c59248;
    case 2: goto L_10c59258;
    case 3: goto L_10c5926c;
    default: x86_unimpl("switch@0x10c59134 out of table"); return;
  }
  /* 10c5913b nop  */
  /* nop */
L_10c59148:;
  /* 10c59148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5914b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5914d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c59150 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10c59151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c59154 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10c59155 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59158 jb 0x10c59110 */
  if (C.cf) goto L_10c59110;
  /* 10c5915a std  */
  C.df=1;
  /* 10c5915b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5915d cld  */
  C.df=0;
  /* 10c5915e jmp dword ptr [edx*4 + 0x10c59230] */
  switch (EDX) {
    case 0: goto L_10c59240;
    case 1: goto L_10c59248;
    case 2: goto L_10c59258;
    case 3: goto L_10c5926c;
    default: x86_unimpl("switch@0x10c5915e out of table"); return;
  }
  /* 10c59165 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c59168:;
  /* 10c59168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5916b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5916d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c59170 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c59173 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c59176 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c59179 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5917c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5917f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59182 jb 0x10c59110 */
  if (C.cf) goto L_10c59110;
  /* 10c59184 std  */
  C.df=1;
  /* 10c59185 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c59187 cld  */
  C.df=0;
  /* 10c59188 jmp dword ptr [edx*4 + 0x10c59230] */
  switch (EDX) {
    case 0: goto L_10c59240;
    case 1: goto L_10c59248;
    case 2: goto L_10c59258;
    case 3: goto L_10c5926c;
    default: x86_unimpl("switch@0x10c59188 out of table"); return;
  }
  /* 10c5918f nop  */
  /* nop */
L_10c59190:;
  /* 10c59190 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c59193 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c59195 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c59198 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5919b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5919e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c591a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c591a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c591a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c591aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c591ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c591b0 jb 0x10c59110 */
  if (C.cf) goto L_10c59110;
  /* 10c591b6 std  */
  C.df=1;
  /* 10c591b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c591b9 cld  */
  C.df=0;
  /* 10c591ba jmp dword ptr [edx*4 + 0x10c59230] */
  switch (EDX) {
    case 0: goto L_10c59240;
    case 1: goto L_10c59248;
    case 2: goto L_10c59258;
    case 3: goto L_10c5926c;
    default: x86_unimpl("switch@0x10c591ba out of table"); return;
  }
  /* 10c591c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10c591c4 in al, 0x91 */
  x86_unimpl("in @ 0x10c591c4");
  /* 10c591c6 lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591c6");
  /* 10c591c8 in al, dx */
  x86_unimpl("in @ 0x10c591c8");
  /* 10c591c9 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10c591ca lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591ca");
  /* 10c591cc hlt  */
  x86_unimpl("hlt @ 0x10c591cc");
  /* 10c591cd xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10c591ce lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591ce");
  /* 10c591d0 cld  */
  C.df=0;
  /* 10c591d1 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10c591d2 lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591d2");
  /* 10c591d4 add al, 0x92 */
  { uint32_t _a=(AL),_b=(0x92u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c591d6 lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591d6");
  /* 10c591d8 or al, 0x92 */
  { uint32_t _r=(AL)|(0x92u); AL = (_r); fl_logic(_r,8); }
  /* 10c591da lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591da");
  /* 10c591dc adc al, 0x92 */
  { uint32_t _a=(AL),_b=(0x92u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c591de lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c591de");
  /* 10c591e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10c591e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10c591ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10c591f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10c591f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10c591f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10c591fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10c59200 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10c59204 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10c59208 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10c5920c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10c59210 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10c59214 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10c59218 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10c5921c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c59223 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59225 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c59227:;
  /* 10c59227 jmp dword ptr [edx*4 + 0x10c59230] */
  switch (EDX) {
    case 0: goto L_10c59240;
    case 1: goto L_10c59248;
    case 2: goto L_10c59258;
    case 3: goto L_10c5926c;
    default: x86_unimpl("switch@0x10c59227 out of table"); return;
  }
  /* 10c5922e mov edi, edi */
  EDI = (EDI);
L_10c59240:;
  /* 10c59240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c59243 pop esi */
  ESI = (pop32());
  /* 10c59244 pop edi */
  EDI = (pop32());
  /* 10c59245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c59246 ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c59247 nop  */
  /* nop */
L_10c59248:;
  /* 10c59248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5924b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5924e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c59251 pop esi */
  ESI = (pop32());
  /* 10c59252 pop edi */
  EDI = (pop32());
  /* 10c59253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c59254 ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c59255 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c59258:;
  /* 10c59258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5925b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5925e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c59261 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c59264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c59267 pop esi */
  ESI = (pop32());
  /* 10c59268 pop edi */
  EDI = (pop32());
  /* 10c59269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5926a ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
  /* 10c5926b nop  */
  /* nop */
L_10c5926c:;
  /* 10c5926c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5926f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c59272 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c59275 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c59278 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5927b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5927e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c59281 pop esi */
  ESI = (pop32());
  /* 10c59282 pop edi */
  EDI = (pop32());
  /* 10c59283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c59284 ret  */
  ESPCHK(0x10c58f50u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10c59290 (104 bytes, 43 insns) */
void f_10c59290(void) {
  FTRACE(0x10c59290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c59290 push ebx */
  push32((uint32_t)(EBX));
  /* 10c59291 push esi */
  push32((uint32_t)(ESI));
  /* 10c59292 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10c59296 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c59298 jne 0x10c592b2 */
  if (!C.zf) goto L_10c592b2;
  /* 10c5929a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c5929e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c592a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c592a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c592a6 mov ebx, eax */
  EBX = (EAX);
  /* 10c592a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c592ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c592ae mov edx, ebx */
  EDX = (EBX);
  /* 10c592b0 jmp 0x10c592f3 */
  goto L_10c592f3;
L_10c592b2:;
  /* 10c592b2 mov ecx, eax */
  ECX = (EAX);
  /* 10c592b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c592b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c592bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10c592c0:;
  /* 10c592c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c592c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10c592c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c592c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10c592c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c592ca jne 0x10c592c0 */
  if (!C.zf) goto L_10c592c0;
  /* 10c592cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c592ce mov esi, eax */
  ESI = (EAX);
  /* 10c592d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c592d4 mov ecx, eax */
  ECX = (EAX);
  /* 10c592d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c592da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c592dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c592de jb 0x10c592ee */
  if (C.cf) goto L_10c592ee;
  /* 10c592e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c592e4 ja 0x10c592ee */
  if ((!C.cf&&!C.zf)) goto L_10c592ee;
  /* 10c592e6 jb 0x10c592ef */
  if (C.cf) goto L_10c592ef;
  /* 10c592e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c592ec jbe 0x10c592ef */
  if ((C.cf||C.zf)) goto L_10c592ef;
L_10c592ee:;
  /* 10c592ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10c592ef:;
  /* 10c592ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c592f1 mov eax, esi */
  EAX = (ESI);
L_10c592f3:;
  /* 10c592f3 pop esi */
  ESI = (pop32());
  /* 10c592f4 pop ebx */
  EBX = (pop32());
  /* 10c592f5 ret 0x10 */
  ESPCHK(0x10c59290u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10c59300 (117 bytes, 44 insns) */
void f_10c59300(void) {
  FTRACE(0x10c59300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c59300 push ebx */
  push32((uint32_t)(EBX));
  /* 10c59301 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c59305 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c59307 jne 0x10c59321 */
  if (!C.zf) goto L_10c59321;
  /* 10c59309 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c5930d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c59311 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c59313 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c59315 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c59319 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5931b mov eax, edx */
  EAX = (EDX);
  /* 10c5931d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5931f jmp 0x10c59371 */
  goto L_10c59371;
L_10c59321:;
  /* 10c59321 mov ecx, eax */
  ECX = (EAX);
  /* 10c59323 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c59327 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c5932b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10c5932f:;
  /* 10c5932f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c59331 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10c59333 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c59335 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10c59337 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c59339 jne 0x10c5932f */
  if (!C.zf) goto L_10c5932f;
  /* 10c5933b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5933d mov ecx, eax */
  ECX = (EAX);
  /* 10c5933f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c59343 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10c59344 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c59348 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5934a jb 0x10c5935a */
  if (C.cf) goto L_10c5935a;
  /* 10c5934c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59350 ja 0x10c5935a */
  if ((!C.cf&&!C.zf)) goto L_10c5935a;
  /* 10c59352 jb 0x10c59362 */
  if (C.cf) goto L_10c59362;
  /* 10c59354 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59358 jbe 0x10c59362 */
  if ((C.cf||C.zf)) goto L_10c59362;
L_10c5935a:;
  /* 10c5935a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5935e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c59362:;
  /* 10c59362 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59366 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5936a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5936c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5936e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c59371:;
  /* 10c59371 pop ebx */
  EBX = (pop32());
  /* 10c59372 ret 0x10 */
  ESPCHK(0x10c59300u, _esp0);
  ESP += 20; return;
}

/* FUN_10009380 @ 0x10c59380 (628 bytes, 214 insns) */
void f_10c59380(void) {
  FTRACE(0x10c59380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c59380 push ebp */
  push32((uint32_t)(EBP));
  /* 10c59381 mov ebp, esp */
  EBP = (ESP);
  /* 10c59383 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59386 push ebx */
  push32((uint32_t)(EBX));
  /* 10c59387 push esi */
  push32((uint32_t)(ESI));
  /* 10c59388 push edi */
  push32((uint32_t)(EDI));
L_10c59389:;
  /* 10c59389 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5938d jne 0x10c593ad */
  if (!C.zf) goto L_10c593ad;
  /* 10c5938f push 0x10c79e54 */
  push32((uint32_t)(0x10c79e54u));
  /* 10c59394 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c59396 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10c59398 push 0x10c79e48 */
  push32((uint32_t)(0x10c79e48u));
  /* 10c5939d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5939f call 0x10c51730 */
  push32(0x10c593a4u); f_10c51730();
  /* 10c593a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c593a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c593aa jne 0x10c593ad */
  if (!C.zf) goto L_10c593ad;
  /* 10c593ac int3  */
  x86_unimpl("int3 @ 0x10c593ac");
L_10c593ad:;
  /* 10c593ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c593af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c593b1 jne 0x10c59389 */
  if (!C.zf) goto L_10c59389;
  /* 10c593b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c593b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c593b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c593bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c593bf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c593c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c593c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c593c8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10c593ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c593d0 je 0x10c593df */
  if (C.zf) goto L_10c593df;
  /* 10c593d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c593d5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c593d8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10c593db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c593dd je 0x10c593f5 */
  if (C.zf) goto L_10c593f5;
L_10c593df:;
  /* 10c593df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c593e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c593e5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c593e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c593ea mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10c593ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c593f0 jmp 0x10c595ed */
  goto L_10c595ed;
L_10c593f5:;
  /* 10c593f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c593f8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c593fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c593fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59400 je 0x10c5944c */
  if (C.zf) goto L_10c5944c;
  /* 10c59402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59405 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c5940c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5940f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c59412 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59417 je 0x10c59435 */
  if (C.zf) goto L_10c59435;
  /* 10c59419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5941c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5941f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c59422 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c59424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5942a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5942d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59430 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c59433 jmp 0x10c5944c */
  goto L_10c5944c;
L_10c59435:;
  /* 10c59435 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59438 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5943b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5943e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59441 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c59444 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c59447 jmp 0x10c595ed */
  goto L_10c595ed;
L_10c5944c:;
  /* 10c5944c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5944f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c59452 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c59455 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59458 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c5945b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5945e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c59461 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10c59464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59467 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c5946a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5946d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c59474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5947b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5947e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c59481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59484 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c59487 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5948d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5948f jne 0x10c594bf */
  if (!C.zf) goto L_10c594bf;
  /* 10c59491 cmp dword ptr [ebp - 8], 0x10c7d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10c7d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59498 je 0x10c594a3 */
  if (C.zf) goto L_10c594a3;
  /* 10c5949a cmp dword ptr [ebp - 8], 0x10c7d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10c7d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c594a1 jne 0x10c594b3 */
  if (!C.zf) goto L_10c594b3;
L_10c594a3:;
  /* 10c594a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c594a6 push edx */
  push32((uint32_t)(EDX));
  /* 10c594a7 call 0x10c5b2f0 */
  push32(0x10c594acu); f_10c5b2f0();
  /* 10c594ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c594af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c594b1 jne 0x10c594bf */
  if (!C.zf) goto L_10c594bf;
L_10c594b3:;
  /* 10c594b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c594b6 push eax */
  push32((uint32_t)(EAX));
  /* 10c594b7 call 0x10c5b220 */
  push32(0x10c594bcu); f_10c5b220();
  /* 10c594bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c594bf:;
  /* 10c594bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c594c2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c594c5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10c594cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c594cd je 0x10c595ab */
  if (C.zf) goto L_10c595ab;
L_10c594d3:;
  /* 10c594d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c594d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c594d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10c594db sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c594de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c594e0 jge 0x10c59503 */
  if ((C.sf==C.of)) goto L_10c59503;
  /* 10c594e2 push 0x10c79e08 */
  push32((uint32_t)(0x10c79e08u));
  /* 10c594e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c594e9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10c594ee push 0x10c79e48 */
  push32((uint32_t)(0x10c79e48u));
  /* 10c594f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c594f5 call 0x10c51730 */
  push32(0x10c594fau); f_10c51730();
  /* 10c594fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c594fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59500 jne 0x10c59503 */
  if (!C.zf) goto L_10c59503;
  /* 10c59502 int3  */
  x86_unimpl("int3 @ 0x10c59502");
L_10c59503:;
  /* 10c59503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c59505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59507 jne 0x10c594d3 */
  if (!C.zf) goto L_10c594d3;
  /* 10c59509 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5950c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5950f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c59511 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59514 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c59517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5951a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c5951d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59520 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59523 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c59525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59528 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c5952b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5952e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59531 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c59534 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59538 jle 0x10c59556 */
  if ((C.zf||C.sf!=C.of)) goto L_10c59556;
  /* 10c5953a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5953d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5953e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59541 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c59544 push eax */
  push32((uint32_t)(EAX));
  /* 10c59545 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c59548 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59549 call 0x10c5af10 */
  push32(0x10c5954eu); f_10c5af10();
  /* 10c5954e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59551 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c59554 jmp 0x10c5959e */
  goto L_10c5959e;
L_10c59556:;
  /* 10c59556 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5955a je 0x10c59579 */
  if (C.zf) goto L_10c59579;
  /* 10c5955c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5955f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c59562 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c59565 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c59568 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5956b mov ecx, dword ptr [edx*4 + 0x10c7fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c59572 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59574 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c59577 jmp 0x10c59580 */
  goto L_10c59580;
L_10c59579:;
  /* 10c59579 mov dword ptr [ebp - 0x14], 0x10c7ca60 */
  w32((uint32_t)(EBP + -0x14), (0x10c7ca60u));
L_10c59580:;
  /* 10c59580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c59583 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10c59587 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5958a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5958c je 0x10c5959e */
  if (C.zf) goto L_10c5959e;
  /* 10c5958e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c59590 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c59592 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c59595 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59596 call 0x10c5adc0 */
  push32(0x10c5959bu); f_10c5adc0();
  /* 10c5959b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5959e:;
  /* 10c5959e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c595a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c595a4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c595a7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c595a9 jmp 0x10c595c9 */
  goto L_10c595c9;
L_10c595ab:;
  /* 10c595ab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c595b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c595b5 push edx */
  push32((uint32_t)(EDX));
  /* 10c595b6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10c595b9 push eax */
  push32((uint32_t)(EAX));
  /* 10c595ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c595bd push ecx */
  push32((uint32_t)(ECX));
  /* 10c595be call 0x10c5af10 */
  push32(0x10c595c3u); f_10c5af10();
  /* 10c595c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c595c6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c595c9:;
  /* 10c595c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c595cc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c595cf je 0x10c595e5 */
  if (C.zf) goto L_10c595e5;
  /* 10c595d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c595d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c595d7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c595da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c595dd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c595e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c595e3 jmp 0x10c595ed */
  goto L_10c595ed;
L_10c595e5:;
  /* 10c595e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c595e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10c595ed:;
  /* 10c595ed pop edi */
  EDI = (pop32());
  /* 10c595ee pop esi */
  ESI = (pop32());
  /* 10c595ef pop ebx */
  EBX = (pop32());
  /* 10c595f0 mov esp, ebp */
  ESP = (EBP);
  /* 10c595f2 pop ebp */
  EBP = (pop32());
  /* 10c595f3 ret  */
  ESPCHK(0x10c59380u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x10c59600 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10c59600(void) {
  FTRACE(0x10c59600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c59600 push ebp */
  push32((uint32_t)(EBP));
  /* 10c59601 mov ebp, esp */
  EBP = (ESP);
  /* 10c59603 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59609 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5960a push esi */
  push32((uint32_t)(ESI));
  /* 10c5960b push edi */
  push32((uint32_t)(EDI));
  /* 10c5960c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c59613 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10c5961d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10c59624:;
  /* 10c59624 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c59627 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c59629 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10c5962c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59630 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c59633 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59636 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c59639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5963b je 0x10c5a217 */
  if (C.zf) goto L_10c5a217;
  /* 10c59641 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59648 jl 0x10c5a217 */
  if ((C.sf!=C.of)) goto L_10c5a217;
  /* 10c5964e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59652 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59655 jl 0x10c59676 */
  if ((C.sf!=C.of)) goto L_10c59676;
  /* 10c59657 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c5965b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5965e jg 0x10c59676 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c59676;
  /* 10c59660 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59664 movsx ecx, byte ptr [eax + 0x10c79e40] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10c79e40))));
  /* 10c5966b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5966e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10c59674 jmp 0x10c59680 */
  goto L_10c59680;
L_10c59676:;
  /* 10c59676 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10c59680:;
  /* 10c59680 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10c59686 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c59689 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5968c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5968f movsx edx, byte ptr [ecx + eax*8 + 0x10c79e60] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10c79e60))));
  /* 10c59697 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c5969a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c5969d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c596a0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10c596a6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c596ad ja 0x10c5a212 */
  if ((!C.cf&&!C.zf)) goto L_10c5a212;
  /* 10c596b3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10c596b9 jmp dword ptr [ecx*4 + 0x10c5a224] */
  switch (ECX) {
    case 0: goto L_10c596c0;
    case 1: goto L_10c5975a;
    case 2: goto L_10c5979c;
    case 3: goto L_10c5980b;
    case 4: goto L_10c59863;
    case 5: goto L_10c59872;
    case 6: goto L_10c598be;
    case 7: goto L_10c59951;
    case 8: goto L_10c597e8;
    case 9: goto L_10c597f3;
    case 10: goto L_10c597de;
    case 11: goto L_10c597d3;
    case 12: goto L_10c597fe;
    case 13: goto L_10c59806;
    default: x86_unimpl("switch@0x10c596b9 out of table"); return;
  }
L_10c596c0:;
  /* 10c596c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c596c7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c596ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c596d0 mov eax, dword ptr [0x10c7cc98] */
  EAX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c596d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c596d7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c596db and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c596e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c596e3 je 0x10c5973d */
  if (C.zf) goto L_10c5973d;
  /* 10c596e5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10c596eb push edx */
  push32((uint32_t)(EDX));
  /* 10c596ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c596ef push eax */
  push32((uint32_t)(EAX));
  /* 10c596f0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c596f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c596f5 call 0x10c5a330 */
  push32(0x10c596fau); f_10c5a330();
  /* 10c596fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c596fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c59700 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c59702 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10c59705 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c59708 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5970b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c5970e:;
  /* 10c5970e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59714 jne 0x10c59737 */
  if (!C.zf) goto L_10c59737;
  /* 10c59716 push 0x10c79ee0 */
  push32((uint32_t)(0x10c79ee0u));
  /* 10c5971b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5971d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10c59722 push 0x10c79ed4 */
  push32((uint32_t)(0x10c79ed4u));
  /* 10c59727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c59729 call 0x10c51730 */
  push32(0x10c5972eu); f_10c51730();
  /* 10c5972e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59731 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59734 jne 0x10c59737 */
  if (!C.zf) goto L_10c59737;
  /* 10c59736 int3  */
  x86_unimpl("int3 @ 0x10c59736");
L_10c59737:;
  /* 10c59737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c59739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5973b jne 0x10c5970e */
  if (!C.zf) goto L_10c5970e;
L_10c5973d:;
  /* 10c5973d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10c59743 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c59747 push edx */
  push32((uint32_t)(EDX));
  /* 10c59748 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c5974c push eax */
  push32((uint32_t)(EAX));
  /* 10c5974d call 0x10c5a330 */
  push32(0x10c59752u); f_10c5a330();
  /* 10c59752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59755 jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c5975a:;
  /* 10c5975a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c59761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59764 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10c5976a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10c59770 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10c59776 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c5977c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c5977f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c59786 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10c59790 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c59797 jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c5979c:;
  /* 10c5979c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c597a0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10c597a6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10c597ac sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c597af mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10c597b5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c597bc ja 0x10c59806 */
  if ((!C.cf&&!C.zf)) goto L_10c59806;
  /* 10c597be mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10c597c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c597c6 mov al, byte ptr [ecx + 0x10c5a25c] */
  AL = (r8((uint32_t)(ECX + 0x10c5a25c)));
  /* 10c597cc jmp dword ptr [eax*4 + 0x10c5a244] */
  switch (EAX) {
    case 0: goto L_10c597e8;
    case 1: goto L_10c597f3;
    case 2: goto L_10c597de;
    case 3: goto L_10c597d3;
    case 4: goto L_10c597fe;
    case 5: goto L_10c59806;
    default: x86_unimpl("switch@0x10c597cc out of table"); return;
  }
L_10c597d3:;
  /* 10c597d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c597d6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c597d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c597dc jmp 0x10c59806 */
  goto L_10c59806;
L_10c597de:;
  /* 10c597de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c597e1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10c597e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c597e6 jmp 0x10c59806 */
  goto L_10c59806;
L_10c597e8:;
  /* 10c597e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c597eb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c597ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c597f1 jmp 0x10c59806 */
  goto L_10c59806;
L_10c597f3:;
  /* 10c597f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c597f6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10c597f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c597fc jmp 0x10c59806 */
  goto L_10c59806;
L_10c597fe:;
  /* 10c597fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59801 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10c59803 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c59806:;
  /* 10c59806 jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c5980b:;
  /* 10c5980b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c5980f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59812 jne 0x10c59847 */
  if (!C.zf) goto L_10c59847;
  /* 10c59814 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c59817 push edx */
  push32((uint32_t)(EDX));
  /* 10c59818 call 0x10c5a440 */
  push32(0x10c5981du); f_10c5a440();
  /* 10c5981d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59820 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10c59826 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5982d jge 0x10c59845 */
  if ((C.sf==C.of)) goto L_10c59845;
  /* 10c5982f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59832 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c59834 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c59837 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c5983d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5983f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10c59845:;
  /* 10c59845 jmp 0x10c5985e */
  goto L_10c5985e;
L_10c59847:;
  /* 10c59847 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c5984d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c59850 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59854 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10c59858 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10c5985e:;
  /* 10c5985e jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c59863:;
  /* 10c59863 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10c5986d jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c59872:;
  /* 10c59872 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59876 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59879 jne 0x10c598a2 */
  if (!C.zf) goto L_10c598a2;
  /* 10c5987b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c5987e push eax */
  push32((uint32_t)(EAX));
  /* 10c5987f call 0x10c5a440 */
  push32(0x10c59884u); f_10c5a440();
  /* 10c59884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59887 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10c5988d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59894 jge 0x10c598a0 */
  if ((C.sf==C.of)) goto L_10c598a0;
  /* 10c59896 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10c598a0:;
  /* 10c598a0 jmp 0x10c598b9 */
  goto L_10c598b9;
L_10c598a2:;
  /* 10c598a2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c598a8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c598ab movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c598af lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c598b3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10c598b9:;
  /* 10c598b9 jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c598be:;
  /* 10c598be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c598c2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10c598c8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10c598ce sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c598d1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10c598d7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c598de ja 0x10c5994c */
  if ((!C.cf&&!C.zf)) goto L_10c5994c;
  /* 10c598e0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10c598e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c598e8 mov al, byte ptr [ecx + 0x10c5a281] */
  AL = (r8((uint32_t)(ECX + 0x10c5a281)));
  /* 10c598ee jmp dword ptr [eax*4 + 0x10c5a26d] */
  switch (EAX) {
    case 0: goto L_10c59900;
    case 1: goto L_10c59939;
    case 2: goto L_10c598f5;
    case 3: goto L_10c59943;
    case 4: goto L_10c5994c;
    default: x86_unimpl("switch@0x10c598ee out of table"); return;
  }
L_10c598f5:;
  /* 10c598f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c598f8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10c598fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c598fe jmp 0x10c5994c */
  goto L_10c5994c;
L_10c59900:;
  /* 10c59900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c59903 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c59906 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59909 jne 0x10c5992b */
  if (!C.zf) goto L_10c5992b;
  /* 10c5990b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5990e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c59912 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59915 jne 0x10c5992b */
  if (!C.zf) goto L_10c5992b;
  /* 10c59917 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5991a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5991d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c59920 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59923 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c59926 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c59929 jmp 0x10c59937 */
  goto L_10c59937;
L_10c5992b:;
  /* 10c5992b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10c59932 jmp 0x10c596c0 */
  goto L_10c596c0;
L_10c59937:;
  /* 10c59937 jmp 0x10c5994c */
  goto L_10c5994c;
L_10c59939:;
  /* 10c59939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5993c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c5993e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c59941 jmp 0x10c5994c */
  goto L_10c5994c;
L_10c59943:;
  /* 10c59943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59946 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c59949 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5994c:;
  /* 10c5994c jmp 0x10c5a212 */
  goto L_10c5a212;
L_10c59951:;
  /* 10c59951 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59955 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10c5995b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10c59961 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59964 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10c5996a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59971 ja 0x10c5a037 */
  if ((!C.cf&&!C.zf)) goto L_10c5a037;
  /* 10c59977 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10c5997d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5997f mov cl, byte ptr [edx + 0x10c5a2ec] */
  CL = (r8((uint32_t)(EDX + 0x10c5a2ec)));
  /* 10c59985 jmp dword ptr [ecx*4 + 0x10c5a2b0] */
  switch (ECX) {
    case 0: goto L_10c5998c;
    case 1: goto L_10c59c20;
    case 2: goto L_10c59ab0;
    case 3: goto L_10c59d59;
    case 4: goto L_10c59a1b;
    case 5: goto L_10c599a1;
    case 6: goto L_10c59d2b;
    case 7: goto L_10c59c30;
    case 8: goto L_10c59bd5;
    case 9: goto L_10c59da5;
    case 10: goto L_10c59d4f;
    case 11: goto L_10c59ac6;
    case 12: goto L_10c59d43;
    case 13: goto L_10c59d65;
    case 14: goto L_10c5a037;
    default: x86_unimpl("switch@0x10c59985 out of table"); return;
  }
L_10c5998c:;
  /* 10c5998c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5998f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59996 jne 0x10c599a1 */
  if (!C.zf) goto L_10c599a1;
  /* 10c59998 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5999b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c5999e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c599a1:;
  /* 10c599a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c599a4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10c599aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c599ac je 0x10c599e7 */
  if (C.zf) goto L_10c599e7;
  /* 10c599ae lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c599b1 push eax */
  push32((uint32_t)(EAX));
  /* 10c599b2 call 0x10c5a480 */
  push32(0x10c599b7u); f_10c5a480();
  /* 10c599b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c599ba mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10c599be mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10c599c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c599c3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10c599c9 push edx */
  push32((uint32_t)(EDX));
  /* 10c599ca call 0x10c5b560 */
  push32(0x10c599cfu); f_10c5b560();
  /* 10c599cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c599d2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c599d5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c599d9 jge 0x10c599e5 */
  if ((C.sf==C.of)) goto L_10c599e5;
  /* 10c599db mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10c599e5:;
  /* 10c599e5 jmp 0x10c59a0d */
  goto L_10c59a0d;
L_10c599e7:;
  /* 10c599e7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c599ea push eax */
  push32((uint32_t)(EAX));
  /* 10c599eb call 0x10c5a440 */
  push32(0x10c599f0u); f_10c5a440();
  /* 10c599f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c599f3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10c599fa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10c59a00 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10c59a06 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10c59a0d:;
  /* 10c59a0d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10c59a13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c59a16 jmp 0x10c5a037 */
  goto L_10c5a037;
L_10c59a1b:;
  /* 10c59a1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c59a1e push eax */
  push32((uint32_t)(EAX));
  /* 10c59a1f call 0x10c5a440 */
  push32(0x10c59a24u); f_10c5a440();
  /* 10c59a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59a27 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10c59a2d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59a34 je 0x10c59a42 */
  if (C.zf) goto L_10c59a42;
  /* 10c59a36 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c59a3c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59a40 jne 0x10c59a5c */
  if (!C.zf) goto L_10c59a5c;
L_10c59a42:;
  /* 10c59a42 mov edx, dword ptr [0x10c7cfb0] */
  EDX = (r32((uint32_t)(0x10c7cfb0)));
  /* 10c59a48 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c59a4b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59a4e push eax */
  push32((uint32_t)(EAX));
  /* 10c59a4f call 0x10c554a0 */
  push32(0x10c59a54u); f_10c554a0();
  /* 10c59a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59a57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c59a5a jmp 0x10c59aab */
  goto L_10c59aab;
L_10c59a5c:;
  /* 10c59a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59a5f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10c59a65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c59a67 je 0x10c59a8c */
  if (C.zf) goto L_10c59a8c;
  /* 10c59a69 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c59a6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c59a72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c59a75 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c59a7b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10c59a7e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c59a80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c59a83 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10c59a8a jmp 0x10c59aab */
  goto L_10c59aab;
L_10c59a8c:;
  /* 10c59a8c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c59a93 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c59a99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c59a9c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c59a9f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c59aa5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10c59aa8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c59aab:;
  /* 10c59aab jmp 0x10c5a037 */
  goto L_10c5a037;
L_10c59ab0:;
  /* 10c59ab0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59ab3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10c59ab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c59abb jne 0x10c59ac6 */
  if (!C.zf) goto L_10c59ac6;
  /* 10c59abd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59ac0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c59ac3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c59ac6:;
  /* 10c59ac6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59acd jne 0x10c59adb */
  if (!C.zf) goto L_10c59adb;
  /* 10c59acf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10c59ad9 jmp 0x10c59ae7 */
  goto L_10c59ae7;
L_10c59adb:;
  /* 10c59adb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c59ae1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10c59ae7:;
  /* 10c59ae7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10c59aed mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10c59af3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c59af6 push edx */
  push32((uint32_t)(EDX));
  /* 10c59af7 call 0x10c5a440 */
  push32(0x10c59afcu); f_10c5a440();
  /* 10c59afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59aff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c59b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59b05 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59b0c je 0x10c59b76 */
  if (C.zf) goto L_10c59b76;
  /* 10c59b0e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59b12 jne 0x10c59b1d */
  if (!C.zf) goto L_10c59b1d;
  /* 10c59b14 mov ecx, dword ptr [0x10c7cfb4] */
  ECX = (r32((uint32_t)(0x10c7cfb4)));
  /* 10c59b1a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c59b1d:;
  /* 10c59b1d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10c59b24 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59b27 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10c59b2d:;
  /* 10c59b2d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c59b33 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c59b39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59b3c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10c59b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59b44 je 0x10c59b66 */
  if (C.zf) goto L_10c59b66;
  /* 10c59b46 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c59b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c59b4e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10c59b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59b53 je 0x10c59b66 */
  if (C.zf) goto L_10c59b66;
  /* 10c59b55 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c59b5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59b5e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10c59b64 jmp 0x10c59b2d */
  goto L_10c59b2d;
L_10c59b66:;
  /* 10c59b66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c59b6c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59b6f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c59b71 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c59b74 jmp 0x10c59bd0 */
  goto L_10c59bd0;
L_10c59b76:;
  /* 10c59b76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59b7a jne 0x10c59b84 */
  if (!C.zf) goto L_10c59b84;
  /* 10c59b7c mov eax, dword ptr [0x10c7cfb0] */
  EAX = (r32((uint32_t)(0x10c7cfb0)));
  /* 10c59b81 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10c59b84:;
  /* 10c59b84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59b87 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10c59b8d:;
  /* 10c59b8d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c59b93 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c59b99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59b9c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10c59ba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59ba4 je 0x10c59bc4 */
  if (C.zf) goto L_10c59bc4;
  /* 10c59ba6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c59bac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c59baf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59bb1 je 0x10c59bc4 */
  if (C.zf) goto L_10c59bc4;
  /* 10c59bb3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c59bb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59bbc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10c59bc2 jmp 0x10c59b8d */
  goto L_10c59b8d;
L_10c59bc4:;
  /* 10c59bc4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c59bca sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59bcd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10c59bd0:;
  /* 10c59bd0 jmp 0x10c5a037 */
  goto L_10c5a037;
L_10c59bd5:;
  /* 10c59bd5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c59bd8 push edx */
  push32((uint32_t)(EDX));
  /* 10c59bd9 call 0x10c5a440 */
  push32(0x10c59bdeu); f_10c5a440();
  /* 10c59bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59be1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10c59be7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59bea and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59bef je 0x10c59c03 */
  if (C.zf) goto L_10c59c03;
  /* 10c59bf1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10c59bf7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10c59bfe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10c59c01 jmp 0x10c59c11 */
  goto L_10c59c11;
L_10c59c03:;
  /* 10c59c03 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10c59c09 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10c59c0f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10c59c11:;
  /* 10c59c11 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10c59c1b jmp 0x10c5a037 */
  goto L_10c5a037;
L_10c59c20:;
  /* 10c59c20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c59c27 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10c59c2a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c59c2d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10c59c30:;
  /* 10c59c30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59c33 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10c59c35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c59c38 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10c59c3e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c59c41 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59c48 jge 0x10c59c56 */
  if ((C.sf==C.of)) goto L_10c59c56;
  /* 10c59c4a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10c59c54 jmp 0x10c59c72 */
  goto L_10c59c72;
L_10c59c56:;
  /* 10c59c56 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59c5d jne 0x10c59c72 */
  if (!C.zf) goto L_10c59c72;
  /* 10c59c5f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59c63 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59c66 jne 0x10c59c72 */
  if (!C.zf) goto L_10c59c72;
  /* 10c59c68 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10c59c72:;
  /* 10c59c72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c59c75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59c78 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10c59c7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c59c7e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59c81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c59c83 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c59c86 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10c59c8c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10c59c92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c59c95 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59c96 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c59c9c push edx */
  push32((uint32_t)(EDX));
  /* 10c59c9d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59ca1 push eax */
  push32((uint32_t)(EAX));
  /* 10c59ca2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59ca6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10c59cac push edx */
  push32((uint32_t)(EDX));
  /* 10c59cad call dword ptr [0x10c7d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7d3a0))), 0x10c59cb3u);
  /* 10c59cb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59cb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59cb9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59cc0 je 0x10c59cd8 */
  if (C.zf) goto L_10c59cd8;
  /* 10c59cc2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59cc9 jne 0x10c59cd8 */
  if (!C.zf) goto L_10c59cd8;
  /* 10c59ccb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59cce push ecx */
  push32((uint32_t)(ECX));
  /* 10c59ccf call dword ptr [0x10c7d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7d3ac))), 0x10c59cd5u);
  /* 10c59cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c59cd8:;
  /* 10c59cd8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c59cdc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59cdf jne 0x10c59cfa */
  if (!C.zf) goto L_10c59cfa;
  /* 10c59ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59ce4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59ceb jne 0x10c59cfa */
  if (!C.zf) goto L_10c59cfa;
  /* 10c59ced mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59cf1 call dword ptr [0x10c7d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7d3a4))), 0x10c59cf7u);
  /* 10c59cf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c59cfa:;
  /* 10c59cfa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59cfd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c59d00 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59d03 jne 0x10c59d17 */
  if (!C.zf) goto L_10c59d17;
  /* 10c59d05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59d08 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c59d0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c59d0e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59d11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59d14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c59d17:;
  /* 10c59d17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59d1a push eax */
  push32((uint32_t)(EAX));
  /* 10c59d1b call 0x10c554a0 */
  push32(0x10c59d20u); f_10c554a0();
  /* 10c59d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59d23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c59d26 jmp 0x10c5a037 */
  goto L_10c5a037;
L_10c59d2b:;
  /* 10c59d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59d2e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10c59d31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c59d34 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10c59d3e jmp 0x10c59dc5 */
  goto L_10c59dc5;
L_10c59d43:;
  /* 10c59d43 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10c59d4d jmp 0x10c59dc5 */
  goto L_10c59dc5;
L_10c59d4f:;
  /* 10c59d4f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10c59d59:;
  /* 10c59d59 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10c59d63 jmp 0x10c59d6f */
  goto L_10c59d6f;
L_10c59d65:;
  /* 10c59d65 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10c59d6f:;
  /* 10c59d6f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10c59d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59d7c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10c59d82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59d84 je 0x10c59da3 */
  if (C.zf) goto L_10c59da3;
  /* 10c59d86 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10c59d8d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10c59d93 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59d96 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10c59d9c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10c59da3:;
  /* 10c59da3 jmp 0x10c59dc5 */
  goto L_10c59dc5;
L_10c59da5:;
  /* 10c59da5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10c59daf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59db2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10c59db8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c59dba je 0x10c59dc5 */
  if (C.zf) goto L_10c59dc5;
  /* 10c59dbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59dbf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c59dc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c59dc5:;
  /* 10c59dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59dc8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59dcf je 0x10c59dee */
  if (C.zf) goto L_10c59dee;
  /* 10c59dd1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c59dd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59dd5 call 0x10c5a460 */
  push32(0x10c59ddau); f_10c5a460();
  /* 10c59dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59ddd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c59de3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c59de9 jmp 0x10c59e7f */
  goto L_10c59e7f;
L_10c59dee:;
  /* 10c59dee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59df1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10c59df4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59df6 je 0x10c59e40 */
  if (C.zf) goto L_10c59e40;
  /* 10c59df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59dfb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59e00 je 0x10c59e20 */
  if (C.zf) goto L_10c59e20;
  /* 10c59e02 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c59e05 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59e06 call 0x10c5a440 */
  push32(0x10c59e0bu); f_10c5a440();
  /* 10c59e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59e0e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10c59e11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c59e12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c59e18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c59e1e jmp 0x10c59e3e */
  goto L_10c59e3e;
L_10c59e20:;
  /* 10c59e20 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c59e23 push edx */
  push32((uint32_t)(EDX));
  /* 10c59e24 call 0x10c5a440 */
  push32(0x10c59e29u); f_10c5a440();
  /* 10c59e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59e2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c59e31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c59e32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c59e38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10c59e3e:;
  /* 10c59e3e jmp 0x10c59e7f */
  goto L_10c59e7f;
L_10c59e40:;
  /* 10c59e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59e43 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c59e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59e48 je 0x10c59e65 */
  if (C.zf) goto L_10c59e65;
  /* 10c59e4a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c59e4d push ecx */
  push32((uint32_t)(ECX));
  /* 10c59e4e call 0x10c5a440 */
  push32(0x10c59e53u); f_10c5a440();
  /* 10c59e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59e56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c59e57 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c59e5d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c59e63 jmp 0x10c59e7f */
  goto L_10c59e7f;
L_10c59e65:;
  /* 10c59e65 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c59e68 push edx */
  push32((uint32_t)(EDX));
  /* 10c59e69 call 0x10c5a440 */
  push32(0x10c59e6eu); f_10c5a440();
  /* 10c59e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59e71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c59e73 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c59e79 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10c59e7f:;
  /* 10c59e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59e82 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10c59e85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59e87 je 0x10c59ec7 */
  if (C.zf) goto L_10c59ec7;
  /* 10c59e89 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59e90 jg 0x10c59ec7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c59ec7;
  /* 10c59e92 jl 0x10c59e9d */
  if ((C.sf!=C.of)) goto L_10c59e9d;
  /* 10c59e94 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59e9b jae 0x10c59ec7 */
  if (!C.cf) goto L_10c59ec7;
L_10c59e9d:;
  /* 10c59e9d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10c59ea3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c59ea5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10c59eab adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59eae neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c59eb0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c59eb6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10c59ebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59ebf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c59ec2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c59ec5 jmp 0x10c59edf */
  goto L_10c59edf;
L_10c59ec7:;
  /* 10c59ec7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10c59ecd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c59ed3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10c59ed9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10c59edf:;
  /* 10c59edf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59ee2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c59ee8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59eea jne 0x10c59f07 */
  if (!C.zf) goto L_10c59f07;
  /* 10c59eec mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c59ef2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c59ef8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10c59efb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c59f01 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10c59f07:;
  /* 10c59f07 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59f0e jge 0x10c59f1c */
  if ((C.sf==C.of)) goto L_10c59f1c;
  /* 10c59f10 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10c59f1a jmp 0x10c59f25 */
  goto L_10c59f25;
L_10c59f1c:;
  /* 10c59f1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c59f1f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10c59f22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c59f25:;
  /* 10c59f25 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c59f2b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10c59f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c59f33 jne 0x10c59f3c */
  if (!C.zf) goto L_10c59f3c;
  /* 10c59f35 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c59f3c:;
  /* 10c59f3c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10c59f3f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c59f42:;
  /* 10c59f42 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c59f48 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c59f4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59f51 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10c59f57 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c59f59 jg 0x10c59f6f */
  if ((!C.zf&&C.sf==C.of)) goto L_10c59f6f;
  /* 10c59f5b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c59f61 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10c59f67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c59f69 je 0x10c59ff0 */
  if (C.zf) goto L_10c59ff0;
L_10c59f6f:;
  /* 10c59f6f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10c59f75 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c59f76 push edx */
  push32((uint32_t)(EDX));
  /* 10c59f77 push eax */
  push32((uint32_t)(EAX));
  /* 10c59f78 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c59f7e push edx */
  push32((uint32_t)(EDX));
  /* 10c59f7f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c59f85 push eax */
  push32((uint32_t)(EAX));
  /* 10c59f86 call 0x10c59300 */
  push32(0x10c59f8bu); f_10c59300();
  /* 10c59f8b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59f8e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10c59f94 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10c59f9a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c59f9b push edx */
  push32((uint32_t)(EDX));
  /* 10c59f9c push eax */
  push32((uint32_t)(EAX));
  /* 10c59f9d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c59fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c59fa4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c59faa push edx */
  push32((uint32_t)(EDX));
  /* 10c59fab call 0x10c59290 */
  push32(0x10c59fb0u); f_10c59290();
  /* 10c59fb0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c59fb6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10c59fbc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c59fc3 jle 0x10c59fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10c59fd7;
  /* 10c59fc5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10c59fcb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59fd1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10c59fd7:;
  /* 10c59fd7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59fda mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10c59fe0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10c59fe2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59fe5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59fe8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c59feb jmp 0x10c59f42 */
  goto L_10c59f42;
L_10c59ff0:;
  /* 10c59ff0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10c59ff3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c59ff6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c59ff9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c59ffc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c59fff mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c5a002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a005 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a00a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a00c je 0x10c5a037 */
  if (C.zf) goto L_10c5a037;
  /* 10c5a00e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a011 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5a014 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a017 jne 0x10c5a01f */
  if (!C.zf) goto L_10c5a01f;
  /* 10c5a019 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a01d jne 0x10c5a037 */
  if (!C.zf) goto L_10c5a037;
L_10c5a01f:;
  /* 10c5a01f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a022 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a025 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c5a028 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a02b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10c5a02e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5a031 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a034 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10c5a037:;
  /* 10c5a037 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a03e jne 0x10c5a212 */
  if (!C.zf) goto L_10c5a212;
  /* 10c5a044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a047 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a04c je 0x10c5a09d */
  if (C.zf) goto L_10c5a09d;
  /* 10c5a04e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a051 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5a057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5a059 je 0x10c5a06b */
  if (C.zf) goto L_10c5a06b;
  /* 10c5a05b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10c5a062 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c5a069 jmp 0x10c5a09d */
  goto L_10c5a09d;
L_10c5a06b:;
  /* 10c5a06b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a06e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5a073 je 0x10c5a085 */
  if (C.zf) goto L_10c5a085;
  /* 10c5a075 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10c5a07c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c5a083 jmp 0x10c5a09d */
  goto L_10c5a09d;
L_10c5a085:;
  /* 10c5a085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a088 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a08b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a08d je 0x10c5a09d */
  if (C.zf) goto L_10c5a09d;
  /* 10c5a08f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10c5a096 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10c5a09d:;
  /* 10c5a09d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c5a0a3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a0a6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a0a9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10c5a0af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a0b2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a0b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5a0b7 jne 0x10c5a0d5 */
  if (!C.zf) goto L_10c5a0d5;
  /* 10c5a0b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c5a0bf push eax */
  push32((uint32_t)(EAX));
  /* 10c5a0c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a0c4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c5a0ca push edx */
  push32((uint32_t)(EDX));
  /* 10c5a0cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c5a0cd call 0x10c5a3b0 */
  push32(0x10c5a0d2u); f_10c5a3b0();
  /* 10c5a0d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5a0d5:;
  /* 10c5a0d5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c5a0db push eax */
  push32((uint32_t)(EAX));
  /* 10c5a0dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a0df push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a0e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5a0e3 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a0e4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10c5a0ea push eax */
  push32((uint32_t)(EAX));
  /* 10c5a0eb call 0x10c5a3f0 */
  push32(0x10c5a0f0u); f_10c5a3f0();
  /* 10c5a0f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a0f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5a0f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5a0fb je 0x10c5a123 */
  if (C.zf) goto L_10c5a123;
  /* 10c5a0fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a100 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a103 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5a105 jne 0x10c5a123 */
  if (!C.zf) goto L_10c5a123;
  /* 10c5a107 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c5a10d push eax */
  push32((uint32_t)(EAX));
  /* 10c5a10e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a111 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a112 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c5a118 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a119 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c5a11b call 0x10c5a3b0 */
  push32(0x10c5a120u); f_10c5a3b0();
  /* 10c5a120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5a123:;
  /* 10c5a123 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a127 je 0x10c5a1d1 */
  if (C.zf) goto L_10c5a1d1;
  /* 10c5a12d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a131 jle 0x10c5a1d1 */
  if ((C.zf||C.sf!=C.of)) goto L_10c5a1d1;
  /* 10c5a137 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a13a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10c5a140 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5a143 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10c5a149:;
  /* 10c5a149 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10c5a14f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10c5a155 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a158 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10c5a15e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5a160 je 0x10c5a1cf */
  if (C.zf) goto L_10c5a1cf;
  /* 10c5a162 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10c5a168 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c5a16b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10c5a172 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10c5a179 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a17a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10c5a180 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a181 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10c5a187 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a18a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10c5a190 call 0x10c5b560 */
  push32(0x10c5a195u); f_10c5b560();
  /* 10c5a195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a198 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10c5a19e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a1a5 jg 0x10c5a1a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5a1a9;
  /* 10c5a1a7 jmp 0x10c5a1cf */
  goto L_10c5a1cf;
L_10c5a1a9:;
  /* 10c5a1a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c5a1af push eax */
  push32((uint32_t)(EAX));
  /* 10c5a1b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a1b4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10c5a1ba push edx */
  push32((uint32_t)(EDX));
  /* 10c5a1bb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10c5a1c1 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a1c2 call 0x10c5a3f0 */
  push32(0x10c5a1c7u); f_10c5a3f0();
  /* 10c5a1c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a1ca jmp 0x10c5a149 */
  goto L_10c5a149;
L_10c5a1cf:;
  /* 10c5a1cf jmp 0x10c5a1ec */
  goto L_10c5a1ec;
L_10c5a1d1:;
  /* 10c5a1d1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10c5a1d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a1d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a1db push edx */
  push32((uint32_t)(EDX));
  /* 10c5a1dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5a1df push eax */
  push32((uint32_t)(EAX));
  /* 10c5a1e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a1e4 call 0x10c5a3f0 */
  push32(0x10c5a1e9u); f_10c5a3f0();
  /* 10c5a1e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5a1ec:;
  /* 10c5a1ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a1ef and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a1f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5a1f4 je 0x10c5a212 */
  if (C.zf) goto L_10c5a212;
  /* 10c5a1f6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c5a1fc push eax */
  push32((uint32_t)(EAX));
  /* 10c5a1fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a200 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a201 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c5a207 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a208 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c5a20a call 0x10c5a3b0 */
  push32(0x10c5a20fu); f_10c5a3b0();
  /* 10c5a20f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5a212:;
  /* 10c5a212 jmp 0x10c59624 */
  goto L_10c59624;
L_10c5a217:;
  /* 10c5a217 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10c5a21d pop edi */
  EDI = (pop32());
  /* 10c5a21e pop esi */
  ESI = (pop32());
  /* 10c5a21f pop ebx */
  EBX = (pop32());
  /* 10c5a220 mov esp, ebp */
  ESP = (EBP);
  /* 10c5a222 pop ebp */
  EBP = (pop32());
  /* 10c5a223 ret  */
  ESPCHK(0x10c59600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a330 @ 0x10c5a330 (119 bytes, 44 insns) */
void f_10c5a330(void) {
  FTRACE(0x10c5a330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a330 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a331 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a333 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a337 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c5a33a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a33d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a340 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c5a343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a346 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a34a jl 0x10c5a372 */
  if ((C.sf!=C.of)) goto L_10c5a372;
  /* 10c5a34c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a34f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5a351 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c5a354 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c5a356 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10c5a35a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5a360 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5a363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a366 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5a368 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a36b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a36e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c5a370 jmp 0x10c5a385 */
  goto L_10c5a385;
L_10c5a372:;
  /* 10c5a372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a375 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a379 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a37a call 0x10c59380 */
  push32(0x10c5a37fu); f_10c59380();
  /* 10c5a37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a382 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5a385:;
  /* 10c5a385 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a389 jne 0x10c5a396 */
  if (!C.zf) goto L_10c5a396;
  /* 10c5a38b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a38e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c5a394 jmp 0x10c5a3a3 */
  goto L_10c5a3a3;
L_10c5a396:;
  /* 10c5a396 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a399 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5a39b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a39e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a3a1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c5a3a3:;
  /* 10c5a3a3 mov esp, ebp */
  ESP = (EBP);
  /* 10c5a3a5 pop ebp */
  EBP = (pop32());
  /* 10c5a3a6 ret  */
  ESPCHK(0x10c5a330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b0 @ 0x10c5a3b0 (53 bytes, 23 insns) */
void f_10c5a3b0(void) {
  FTRACE(0x10c5a3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a3b1 mov ebp, esp */
  EBP = (ESP);
L_10c5a3b3:;
  /* 10c5a3b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a3b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a3b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a3bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c5a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a3c1 jle 0x10c5a3e3 */
  if ((C.zf||C.sf!=C.of)) goto L_10c5a3e3;
  /* 10c5a3c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5a3c6 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a3c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a3ca push eax */
  push32((uint32_t)(EAX));
  /* 10c5a3cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a3ce push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a3cf call 0x10c5a330 */
  push32(0x10c5a3d4u); f_10c5a330();
  /* 10c5a3d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a3d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5a3da cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a3dd jne 0x10c5a3e1 */
  if (!C.zf) goto L_10c5a3e1;
  /* 10c5a3df jmp 0x10c5a3e3 */
  goto L_10c5a3e3;
L_10c5a3e1:;
  /* 10c5a3e1 jmp 0x10c5a3b3 */
  goto L_10c5a3b3;
L_10c5a3e3:;
  /* 10c5a3e3 pop ebp */
  EBP = (pop32());
  /* 10c5a3e4 ret  */
  ESPCHK(0x10c5a3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3f0 @ 0x10c5a3f0 (74 bytes, 31 insns) */
void f_10c5a3f0(void) {
  FTRACE(0x10c5a3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a3f3 push ecx */
  push32((uint32_t)(ECX));
L_10c5a3f4:;
  /* 10c5a3f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a3f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a3fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a3fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c5a400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a402 jle 0x10c5a436 */
  if ((C.zf||C.sf!=C.of)) goto L_10c5a436;
  /* 10c5a404 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5a407 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a408 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a40b push eax */
  push32((uint32_t)(EAX));
  /* 10c5a40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a40f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5a412 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5a415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a418 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a41c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a41f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c5a422 call 0x10c5a330 */
  push32(0x10c5a427u); f_10c5a330();
  /* 10c5a427 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a42a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5a42d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a430 jne 0x10c5a434 */
  if (!C.zf) goto L_10c5a434;
  /* 10c5a432 jmp 0x10c5a436 */
  goto L_10c5a436;
L_10c5a434:;
  /* 10c5a434 jmp 0x10c5a3f4 */
  goto L_10c5a3f4;
L_10c5a436:;
  /* 10c5a436 mov esp, ebp */
  ESP = (EBP);
  /* 10c5a438 pop ebp */
  EBP = (pop32());
  /* 10c5a439 ret  */
  ESPCHK(0x10c5a3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x10c5a440 (26 bytes, 12 insns) */
void f_10c5a440(void) {
  FTRACE(0x10c5a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a440 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a441 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a446 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5a448 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a44b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a44e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c5a450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a453 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5a455 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c5a458 pop ebp */
  EBP = (pop32());
  /* 10c5a459 ret  */
  ESPCHK(0x10c5a440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a460 @ 0x10c5a460 (31 bytes, 14 insns) */
void f_10c5a460(void) {
  FTRACE(0x10c5a460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a460 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a461 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a466 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5a468 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a46e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c5a470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a473 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5a475 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a478 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c5a47a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5a47d pop ebp */
  EBP = (pop32());
  /* 10c5a47e ret  */
  ESPCHK(0x10c5a460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a480 @ 0x10c5a480 (27 bytes, 12 insns) */
void f_10c5a480(void) {
  FTRACE(0x10c5a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a480 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a481 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a486 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5a488 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a48e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c5a490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5a495 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10c5a499 pop ebp */
  EBP = (pop32());
  /* 10c5a49a ret  */
  ESPCHK(0x10c5a480u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10c5a4a0 (145 bytes, 42 insns) */
void f_10c5a4a0(void) {
  FTRACE(0x10c5a4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a4a4 call 0x10c5a550 */
  push32(0x10c5a4a9u); f_10c5a550();
  /* 10c5a4a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a4ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c5a4ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5a4b5 jmp 0x10c5a4c0 */
  goto L_10c5a4c0;
L_10c5a4b7:;
  /* 10c5a4b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a4ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a4bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c5a4c0:;
  /* 10c5a4c0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a4c4 jae 0x10c5a4ea */
  if (!C.cf) goto L_10c5a4ea;
  /* 10c5a4c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a4c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a4cc cmp ecx, dword ptr [eax*8 + 0x10c7cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10c7cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a4d3 jne 0x10c5a4e8 */
  if (!C.zf) goto L_10c5a4e8;
  /* 10c5a4d5 call 0x10c5a540 */
  push32(0x10c5a4dau); f_10c5a540();
  /* 10c5a4da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5a4dd mov ecx, dword ptr [edx*8 + 0x10c7cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10c7cfbc)));
  /* 10c5a4e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c5a4e6 jmp 0x10c5a52d */
  goto L_10c5a52d;
L_10c5a4e8:;
  /* 10c5a4e8 jmp 0x10c5a4b7 */
  goto L_10c5a4b7;
L_10c5a4ea:;
  /* 10c5a4ea cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a4ee jb 0x10c5a503 */
  if (C.cf) goto L_10c5a503;
  /* 10c5a4f0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a4f4 ja 0x10c5a503 */
  if ((!C.cf&&!C.zf)) goto L_10c5a503;
  /* 10c5a4f6 call 0x10c5a540 */
  push32(0x10c5a4fbu); f_10c5a540();
  /* 10c5a4fb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10c5a501 jmp 0x10c5a52d */
  goto L_10c5a52d;
L_10c5a503:;
  /* 10c5a503 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a50a jb 0x10c5a522 */
  if (C.cf) goto L_10c5a522;
  /* 10c5a50c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a513 ja 0x10c5a522 */
  if ((!C.cf&&!C.zf)) goto L_10c5a522;
  /* 10c5a515 call 0x10c5a540 */
  push32(0x10c5a51au); f_10c5a540();
  /* 10c5a51a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10c5a520 jmp 0x10c5a52d */
  goto L_10c5a52d;
L_10c5a522:;
  /* 10c5a522 call 0x10c5a540 */
  push32(0x10c5a527u); f_10c5a540();
  /* 10c5a527 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10c5a52d:;
  /* 10c5a52d mov esp, ebp */
  ESP = (EBP);
  /* 10c5a52f pop ebp */
  EBP = (pop32());
  /* 10c5a530 ret  */
  ESPCHK(0x10c5a4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a540 @ 0x10c5a540 (13 bytes, 6 insns) */
void f_10c5a540(void) {
  FTRACE(0x10c5a540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a541 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a543 call 0x10c520b0 */
  push32(0x10c5a548u); f_10c520b0();
  /* 10c5a548 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a54b pop ebp */
  EBP = (pop32());
  /* 10c5a54c ret  */
  ESPCHK(0x10c5a540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a550 @ 0x10c5a550 (13 bytes, 6 insns) */
void f_10c5a550(void) {
  FTRACE(0x10c5a550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a550 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a551 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a553 call 0x10c520b0 */
  push32(0x10c5a558u); f_10c520b0();
  /* 10c5a558 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a55b pop ebp */
  EBP = (pop32());
  /* 10c5a55c ret  */
  ESPCHK(0x10c5a550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a560 @ 0x10c5a560 (664 bytes, 267 insns) [15 switch table(s)] */
void f_10c5a560(void) {
  FTRACE(0x10c5a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a560 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a561 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a563 push edi */
  push32((uint32_t)(EDI));
  /* 10c5a564 push esi */
  push32((uint32_t)(ESI));
  /* 10c5a565 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a568 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a56b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a56e mov eax, ecx */
  EAX = (ECX);
  /* 10c5a570 mov edx, ecx */
  EDX = (ECX);
  /* 10c5a572 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a574 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a576 jbe 0x10c5a580 */
  if ((C.cf||C.zf)) goto L_10c5a580;
  /* 10c5a578 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a57a jb 0x10c5a6f8 */
  if (C.cf) goto L_10c5a6f8;
L_10c5a580:;
  /* 10c5a580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c5a586 jne 0x10c5a59c */
  if (!C.zf) goto L_10c5a59c;
  /* 10c5a588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a58b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a58e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a591 jb 0x10c5a5bc */
  if (C.cf) goto L_10c5a5bc;
  /* 10c5a593 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a595 jmp dword ptr [edx*4 + 0x10c5a6a8] */
  switch (EDX) {
    case 0: goto L_10c5a6b8;
    case 1: goto L_10c5a6c0;
    case 2: goto L_10c5a6cc;
    case 3: goto L_10c5a6e0;
    default: x86_unimpl("switch@0x10c5a595 out of table"); return;
  }
L_10c5a59c:;
  /* 10c5a59c mov eax, edi */
  EAX = (EDI);
  /* 10c5a59e mov edx, 3 */
  EDX = (0x3u);
  /* 10c5a5a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a5a6 jb 0x10c5a5b4 */
  if (C.cf) goto L_10c5a5b4;
  /* 10c5a5a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a5ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a5ad jmp dword ptr [eax*4 + 0x10c5a5c0] */
  switch (EAX) {
    case 1: goto L_10c5a5d0;
    case 2: goto L_10c5a5fc;
    case 3: goto L_10c5a620;
    default: x86_unimpl("switch@0x10c5a5ad out of table"); return;
  }
L_10c5a5b4:;
  /* 10c5a5b4 jmp dword ptr [ecx*4 + 0x10c5a6b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10c5a6b8)))); return;
  /* 10c5a5bb nop  */
  /* nop */
L_10c5a5bc:;
  /* 10c5a5bc jmp dword ptr [ecx*4 + 0x10c5a63c] */
  switch (ECX) {
    case 0: goto L_10c5a69f;
    case 1: goto L_10c5a68c;
    case 2: goto L_10c5a684;
    case 3: goto L_10c5a67c;
    case 4: goto L_10c5a674;
    case 5: goto L_10c5a66c;
    case 6: goto L_10c5a664;
    case 7: goto L_10c5a65c;
    default: x86_unimpl("switch@0x10c5a5bc out of table"); return;
  }
  /* 10c5a5c3 nop  */
  /* nop */
L_10c5a5d0:;
  /* 10c5a5d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a5d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5a5d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c5a5d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5a5d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5a5dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5a5df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a5e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5a5e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a5e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a5eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a5ee jb 0x10c5a5bc */
  if (C.cf) goto L_10c5a5bc;
  /* 10c5a5f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a5f2 jmp dword ptr [edx*4 + 0x10c5a6a8] */
  switch (EDX) {
    case 0: goto L_10c5a6b8;
    case 1: goto L_10c5a6c0;
    case 2: goto L_10c5a6cc;
    case 3: goto L_10c5a6e0;
    default: x86_unimpl("switch@0x10c5a5f2 out of table"); return;
  }
  /* 10c5a5f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5a5fc:;
  /* 10c5a5fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a5fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5a600 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c5a602 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5a605 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a608 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5a60b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a60e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a611 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a614 jb 0x10c5a5bc */
  if (C.cf) goto L_10c5a5bc;
  /* 10c5a616 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a618 jmp dword ptr [edx*4 + 0x10c5a6a8] */
  switch (EDX) {
    case 0: goto L_10c5a6b8;
    case 1: goto L_10c5a6c0;
    case 2: goto L_10c5a6cc;
    case 3: goto L_10c5a6e0;
    default: x86_unimpl("switch@0x10c5a618 out of table"); return;
  }
  /* 10c5a61f nop  */
  /* nop */
L_10c5a620:;
  /* 10c5a620 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a622 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5a624 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c5a626 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c5a627 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a62a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c5a62b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a62e jb 0x10c5a5bc */
  if (C.cf) goto L_10c5a5bc;
  /* 10c5a630 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a632 jmp dword ptr [edx*4 + 0x10c5a6a8] */
  switch (EDX) {
    case 0: goto L_10c5a6b8;
    case 1: goto L_10c5a6c0;
    case 2: goto L_10c5a6cc;
    case 3: goto L_10c5a6e0;
    default: x86_unimpl("switch@0x10c5a632 out of table"); return;
  }
  /* 10c5a639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5a65c:;
  /* 10c5a65c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10c5a660 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10c5a664:;
  /* 10c5a664 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10c5a668 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10c5a66c:;
  /* 10c5a66c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10c5a670 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10c5a674:;
  /* 10c5a674 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10c5a678 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10c5a67c:;
  /* 10c5a67c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10c5a680 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10c5a684:;
  /* 10c5a684 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10c5a688 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10c5a68c:;
  /* 10c5a68c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10c5a690 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10c5a694 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c5a69b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a69d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c5a69f:;
  /* 10c5a69f jmp dword ptr [edx*4 + 0x10c5a6a8] */
  switch (EDX) {
    case 0: goto L_10c5a6b8;
    case 1: goto L_10c5a6c0;
    case 2: goto L_10c5a6cc;
    case 3: goto L_10c5a6e0;
    default: x86_unimpl("switch@0x10c5a69f out of table"); return;
  }
  /* 10c5a6a6 mov edi, edi */
  EDI = (EDI);
L_10c5a6b8:;
  /* 10c5a6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a6bb pop esi */
  ESI = (pop32());
  /* 10c5a6bc pop edi */
  EDI = (pop32());
  /* 10c5a6bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a6be ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a6bf nop  */
  /* nop */
L_10c5a6c0:;
  /* 10c5a6c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5a6c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c5a6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a6c7 pop esi */
  ESI = (pop32());
  /* 10c5a6c8 pop edi */
  EDI = (pop32());
  /* 10c5a6c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a6ca ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a6cb nop  */
  /* nop */
L_10c5a6cc:;
  /* 10c5a6cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5a6ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c5a6d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5a6d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5a6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a6d9 pop esi */
  ESI = (pop32());
  /* 10c5a6da pop edi */
  EDI = (pop32());
  /* 10c5a6db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a6dc ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a6dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5a6e0:;
  /* 10c5a6e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5a6e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c5a6e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5a6e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5a6ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5a6ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5a6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a6f3 pop esi */
  ESI = (pop32());
  /* 10c5a6f4 pop edi */
  EDI = (pop32());
  /* 10c5a6f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a6f6 ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a6f7 nop  */
  /* nop */
L_10c5a6f8:;
  /* 10c5a6f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10c5a6fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10c5a700 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c5a706 jne 0x10c5a72c */
  if (!C.zf) goto L_10c5a72c;
  /* 10c5a708 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a70b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a70e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a711 jb 0x10c5a720 */
  if (C.cf) goto L_10c5a720;
  /* 10c5a713 std  */
  C.df=1;
  /* 10c5a714 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a716 cld  */
  C.df=0;
  /* 10c5a717 jmp dword ptr [edx*4 + 0x10c5a840] */
  switch (EDX) {
    case 0: goto L_10c5a850;
    case 1: goto L_10c5a858;
    case 2: goto L_10c5a868;
    case 3: goto L_10c5a87c;
    default: x86_unimpl("switch@0x10c5a717 out of table"); return;
  }
  /* 10c5a71e mov edi, edi */
  EDI = (EDI);
L_10c5a720:;
  /* 10c5a720 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5a722 jmp dword ptr [ecx*4 + 0x10c5a7f0] */
  switch (ECX) {
    case 0: goto L_10c5a837;
    default: x86_unimpl("switch@0x10c5a722 out of table"); return;
  }
  /* 10c5a729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5a72c:;
  /* 10c5a72c mov eax, edi */
  EAX = (EDI);
  /* 10c5a72e mov edx, 3 */
  EDX = (0x3u);
  /* 10c5a733 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a736 jb 0x10c5a744 */
  if (C.cf) goto L_10c5a744;
  /* 10c5a738 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a73b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a73d jmp dword ptr [eax*4 + 0x10c5a748] */
  switch (EAX) {
    case 1: goto L_10c5a758;
    case 2: goto L_10c5a778;
    case 3: goto L_10c5a7a0;
    default: x86_unimpl("switch@0x10c5a73d out of table"); return;
  }
L_10c5a744:;
  /* 10c5a744 jmp dword ptr [ecx*4 + 0x10c5a840] */
  switch (ECX) {
    case 0: goto L_10c5a850;
    case 1: goto L_10c5a858;
    case 2: goto L_10c5a868;
    case 3: goto L_10c5a87c;
    default: x86_unimpl("switch@0x10c5a744 out of table"); return;
  }
  /* 10c5a74b nop  */
  /* nop */
L_10c5a758:;
  /* 10c5a758 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5a75b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a75d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5a760 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10c5a761 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a764 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10c5a765 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a768 jb 0x10c5a720 */
  if (C.cf) goto L_10c5a720;
  /* 10c5a76a std  */
  C.df=1;
  /* 10c5a76b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a76d cld  */
  C.df=0;
  /* 10c5a76e jmp dword ptr [edx*4 + 0x10c5a840] */
  switch (EDX) {
    case 0: goto L_10c5a850;
    case 1: goto L_10c5a858;
    case 2: goto L_10c5a868;
    case 3: goto L_10c5a87c;
    default: x86_unimpl("switch@0x10c5a76e out of table"); return;
  }
  /* 10c5a775 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5a778:;
  /* 10c5a778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5a77b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a77d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5a780 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5a783 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a786 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5a789 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a78c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a78f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a792 jb 0x10c5a720 */
  if (C.cf) goto L_10c5a720;
  /* 10c5a794 std  */
  C.df=1;
  /* 10c5a795 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a797 cld  */
  C.df=0;
  /* 10c5a798 jmp dword ptr [edx*4 + 0x10c5a840] */
  switch (EDX) {
    case 0: goto L_10c5a850;
    case 1: goto L_10c5a858;
    case 2: goto L_10c5a868;
    case 3: goto L_10c5a87c;
    default: x86_unimpl("switch@0x10c5a798 out of table"); return;
  }
  /* 10c5a79f nop  */
  /* nop */
L_10c5a7a0:;
  /* 10c5a7a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5a7a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a7a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5a7a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5a7ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5a7ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5a7b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5a7b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5a7b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a7ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a7bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a7c0 jb 0x10c5a720 */
  if (C.cf) goto L_10c5a720;
  /* 10c5a7c6 std  */
  C.df=1;
  /* 10c5a7c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c5a7c9 cld  */
  C.df=0;
  /* 10c5a7ca jmp dword ptr [edx*4 + 0x10c5a840] */
  switch (EDX) {
    case 0: goto L_10c5a850;
    case 1: goto L_10c5a858;
    case 2: goto L_10c5a868;
    case 3: goto L_10c5a87c;
    default: x86_unimpl("switch@0x10c5a7ca out of table"); return;
  }
  /* 10c5a7d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10c5a7d4 hlt  */
  x86_unimpl("hlt @ 0x10c5a7d4");
  /* 10c5a7d5 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10c5a7d6 lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7d6");
  /* 10c5a7d8 cld  */
  C.df=0;
  /* 10c5a7d9 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10c5a7da lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7da");
  /* 10c5a7dc add al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c5a7de lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7de");
  /* 10c5a7e0 or al, 0xa8 */
  { uint32_t _r=(AL)|(0xa8u); AL = (_r); fl_logic(_r,8); }
  /* 10c5a7e2 lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7e2");
  /* 10c5a7e4 adc al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c5a7e6 lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7e6");
  /* 10c5a7e8 sbb al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c5a7ea lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7ea");
  /* 10c5a7ec and al, 0xa8 */
  { uint32_t _r=(AL)&(0xa8u); AL = (_r); fl_logic(_r,8); }
  /* 10c5a7ee lds edx, ptr [eax] */
  x86_unimpl("lds @ 0x10c5a7ee");
  /* 10c5a7f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10c5a7f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10c5a7fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10c5a800 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10c5a804 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10c5a808 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10c5a80c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10c5a810 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10c5a814 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10c5a818 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10c5a81c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10c5a820 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10c5a824 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10c5a828 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10c5a82c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c5a833 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a835 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c5a837:;
  /* 10c5a837 jmp dword ptr [edx*4 + 0x10c5a840] */
  switch (EDX) {
    case 0: goto L_10c5a850;
    case 1: goto L_10c5a858;
    case 2: goto L_10c5a868;
    case 3: goto L_10c5a87c;
    default: x86_unimpl("switch@0x10c5a837 out of table"); return;
  }
  /* 10c5a83e mov edi, edi */
  EDI = (EDI);
L_10c5a850:;
  /* 10c5a850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a853 pop esi */
  ESI = (pop32());
  /* 10c5a854 pop edi */
  EDI = (pop32());
  /* 10c5a855 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a856 ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a857 nop  */
  /* nop */
L_10c5a858:;
  /* 10c5a858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5a85b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5a85e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a861 pop esi */
  ESI = (pop32());
  /* 10c5a862 pop edi */
  EDI = (pop32());
  /* 10c5a863 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a864 ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a865 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5a868:;
  /* 10c5a868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5a86b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5a86e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5a871 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5a874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a877 pop esi */
  ESI = (pop32());
  /* 10c5a878 pop edi */
  EDI = (pop32());
  /* 10c5a879 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a87a ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
  /* 10c5a87b nop  */
  /* nop */
L_10c5a87c:;
  /* 10c5a87c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c5a87f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c5a882 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c5a885 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c5a888 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c5a88b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c5a88e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a891 pop esi */
  ESI = (pop32());
  /* 10c5a892 pop edi */
  EDI = (pop32());
  /* 10c5a893 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5a894 ret  */
  ESPCHK(0x10c5a560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8a0 @ 0x10c5a8a0 (421 bytes, 148 insns) */
void f_10c5a8a0(void) {
  FTRACE(0x10c5a8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5a8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5a8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5a8a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c5a8a5 push 0x10c79ef8 */
  push32((uint32_t)(0x10c79ef8u));
  /* 10c5a8aa push 0x10c5b778 */
  push32((uint32_t)(0x10c5b778u));
  /* 10c5a8af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c5a8b5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a8b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c5a8bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a8c0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5a8c1 push esi */
  push32((uint32_t)(ESI));
  /* 10c5a8c2 push edi */
  push32((uint32_t)(EDI));
  /* 10c5a8c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c5a8c6 cmp dword ptr [0x10c7e5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a8cd jne 0x10c5a91e */
  if (!C.zf) goto L_10c5a91e;
  /* 10c5a8cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10c5a8d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a8d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5a8d5 push 0x10c79ef4 */
  push32((uint32_t)(0x10c79ef4u));
  /* 10c5a8da push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5a8dc call dword ptr [0x10c802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f0))), 0x10c5a8e2u);
  /* 10c5a8e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a8e4 je 0x10c5a8f2 */
  if (C.zf) goto L_10c5a8f2;
  /* 10c5a8e6 mov dword ptr [0x10c7e5f4], 1 */
  w32((uint32_t)(0x10c7e5f4), (0x1u));
  /* 10c5a8f0 jmp 0x10c5a91e */
  goto L_10c5a91e;
L_10c5a8f2:;
  /* 10c5a8f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10c5a8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a8f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5a8f8 push 0x10c79ef0 */
  push32((uint32_t)(0x10c79ef0u));
  /* 10c5a8fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5a8ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5a901 call dword ptr [0x10c802ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802ec))), 0x10c5a907u);
  /* 10c5a907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5a909 je 0x10c5a917 */
  if (C.zf) goto L_10c5a917;
  /* 10c5a90b mov dword ptr [0x10c7e5f4], 2 */
  w32((uint32_t)(0x10c7e5f4), (0x2u));
  /* 10c5a915 jmp 0x10c5a91e */
  goto L_10c5a91e;
L_10c5a917:;
  /* 10c5a917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a919 jmp 0x10c5aa48 */
  goto L_10c5aa48;
L_10c5a91e:;
  /* 10c5a91e cmp dword ptr [0x10c7e5f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e5f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a925 jne 0x10c5a955 */
  if (!C.zf) goto L_10c5a955;
  /* 10c5a927 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a92b jne 0x10c5a936 */
  if (!C.zf) goto L_10c5a936;
  /* 10c5a92d mov edx, dword ptr [0x10c7e600] */
  EDX = (r32((uint32_t)(0x10c7e600)));
  /* 10c5a933 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10c5a936:;
  /* 10c5a936 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5a939 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a93a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a93d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a93e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a941 push edx */
  push32((uint32_t)(EDX));
  /* 10c5a942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5a945 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a946 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c5a949 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a94a call dword ptr [0x10c802ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802ec))), 0x10c5a950u);
  /* 10c5a950 jmp 0x10c5aa48 */
  goto L_10c5aa48;
L_10c5a955:;
  /* 10c5a955 cmp dword ptr [0x10c7e5f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e5f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a95c jne 0x10c5aa46 */
  if (!C.zf) goto L_10c5aa46;
  /* 10c5a962 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a966 jne 0x10c5a971 */
  if (!C.zf) goto L_10c5a971;
  /* 10c5a968 mov edx, dword ptr [0x10c7e610] */
  EDX = (r32((uint32_t)(0x10c7e610)));
  /* 10c5a96e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10c5a971:;
  /* 10c5a971 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5a973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5a975 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5a978 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a979 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5a97c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5a97d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c5a980 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5a982 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5a984 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5a987 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a98a push edx */
  push32((uint32_t)(EDX));
  /* 10c5a98b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5a98e push eax */
  push32((uint32_t)(EAX));
  /* 10c5a98f call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c5a995u);
  /* 10c5a995 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c5a998 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a99c jne 0x10c5a9a5 */
  if (!C.zf) goto L_10c5a9a5;
  /* 10c5a99e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5a9a0 jmp 0x10c5aa48 */
  goto L_10c5aa48;
L_10c5a9a5:;
  /* 10c5a9a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5a9ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a9af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5a9b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a9b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c5a9b6 call 0x10c55810 */
  push32(0x10c5a9bbu); f_10c55810();
  /* 10c5a9bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10c5a9be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c5a9c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5a9c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c5a9c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5a9ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c5a9cc push edx */
  push32((uint32_t)(EDX));
  /* 10c5a9cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5a9cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5a9d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5a9d3 call 0x10c563e0 */
  push32(0x10c5a9d8u); f_10c563e0();
  /* 10c5a9d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5a9db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c5a9e2 jmp 0x10c5a9fb */
  goto L_10c5a9fb;
  /* 10c5a9e4 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5a9e9 ret  */
  ESPCHK(0x10c5a8a0u, _esp0);
  ESP += 4; return;
  /* 10c5a9ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5a9ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c5a9f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c5a9fb:;
  /* 10c5a9fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5a9ff jne 0x10c5aa05 */
  if (!C.zf) goto L_10c5aa05;
  /* 10c5aa01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5aa03 jmp 0x10c5aa48 */
  goto L_10c5aa48;
L_10c5aa05:;
  /* 10c5aa05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5aa08 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5aa09 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5aa0c push edx */
  push32((uint32_t)(EDX));
  /* 10c5aa0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5aa10 push eax */
  push32((uint32_t)(EAX));
  /* 10c5aa11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5aa14 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5aa15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5aa17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5aa1a push edx */
  push32((uint32_t)(EDX));
  /* 10c5aa1b call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c5aa21u);
  /* 10c5aa21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c5aa24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5aa28 jne 0x10c5aa2e */
  if (!C.zf) goto L_10c5aa2e;
  /* 10c5aa2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5aa2c jmp 0x10c5aa48 */
  goto L_10c5aa48;
L_10c5aa2e:;
  /* 10c5aa2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5aa31 push eax */
  push32((uint32_t)(EAX));
  /* 10c5aa32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5aa35 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5aa36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5aa39 push edx */
  push32((uint32_t)(EDX));
  /* 10c5aa3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5aa3d push eax */
  push32((uint32_t)(EAX));
  /* 10c5aa3e call dword ptr [0x10c802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f0))), 0x10c5aa44u);
  /* 10c5aa44 jmp 0x10c5aa48 */
  goto L_10c5aa48;
L_10c5aa46:;
  /* 10c5aa46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5aa48:;
  /* 10c5aa48 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10c5aa4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5aa4e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c5aa55 pop edi */
  EDI = (pop32());
  /* 10c5aa56 pop esi */
  ESI = (pop32());
  /* 10c5aa57 pop ebx */
  EBX = (pop32());
  /* 10c5aa58 mov esp, ebp */
  ESP = (EBP);
  /* 10c5aa5a pop ebp */
  EBP = (pop32());
  /* 10c5aa5b ret  */
  ESPCHK(0x10c5a8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x10c5aa60 (727 bytes, 263 insns) */
void f_10c5aa60(void) {
  FTRACE(0x10c5aa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5aa60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5aa61 mov ebp, esp */
  EBP = (ESP);
  /* 10c5aa63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c5aa65 push 0x10c79f08 */
  push32((uint32_t)(0x10c79f08u));
  /* 10c5aa6a push 0x10c5b778 */
  push32((uint32_t)(0x10c5b778u));
  /* 10c5aa6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c5aa75 push eax */
  push32((uint32_t)(EAX));
  /* 10c5aa76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c5aa7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5aa80 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5aa81 push esi */
  push32((uint32_t)(ESI));
  /* 10c5aa82 push edi */
  push32((uint32_t)(EDI));
  /* 10c5aa83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c5aa86 cmp dword ptr [0x10c7e618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5aa8d jne 0x10c5aae6 */
  if (!C.zf) goto L_10c5aae6;
  /* 10c5aa8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5aa91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5aa93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5aa95 push 0x10c79ef4 */
  push32((uint32_t)(0x10c79ef4u));
  /* 10c5aa9a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c5aa9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5aaa1 call dword ptr [0x10c802f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f8))), 0x10c5aaa7u);
  /* 10c5aaa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5aaa9 je 0x10c5aab7 */
  if (C.zf) goto L_10c5aab7;
  /* 10c5aaab mov dword ptr [0x10c7e618], 1 */
  w32((uint32_t)(0x10c7e618), (0x1u));
  /* 10c5aab5 jmp 0x10c5aae6 */
  goto L_10c5aae6;
L_10c5aab7:;
  /* 10c5aab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5aab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5aabb push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5aabd push 0x10c79ef0 */
  push32((uint32_t)(0x10c79ef0u));
  /* 10c5aac2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c5aac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5aac9 call dword ptr [0x10c802f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f4))), 0x10c5aacfu);
  /* 10c5aacf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5aad1 je 0x10c5aadf */
  if (C.zf) goto L_10c5aadf;
  /* 10c5aad3 mov dword ptr [0x10c7e618], 2 */
  w32((uint32_t)(0x10c7e618), (0x2u));
  /* 10c5aadd jmp 0x10c5aae6 */
  goto L_10c5aae6;
L_10c5aadf:;
  /* 10c5aadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5aae1 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5aae6:;
  /* 10c5aae6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5aaea jle 0x10c5aaff */
  if ((C.zf||C.sf!=C.of)) goto L_10c5aaff;
  /* 10c5aaec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5aaef push eax */
  push32((uint32_t)(EAX));
  /* 10c5aaf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5aaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5aaf4 call 0x10c5ad70 */
  push32(0x10c5aaf9u); f_10c5ad70();
  /* 10c5aaf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5aafc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10c5aaff:;
  /* 10c5aaff cmp dword ptr [0x10c7e618], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e618))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ab06 jne 0x10c5ab2b */
  if (!C.zf) goto L_10c5ab2b;
  /* 10c5ab08 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c5ab0b push edx */
  push32((uint32_t)(EDX));
  /* 10c5ab0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ab0f push eax */
  push32((uint32_t)(EAX));
  /* 10c5ab10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5ab13 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ab14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ab17 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ab18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ab1b push eax */
  push32((uint32_t)(EAX));
  /* 10c5ab1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ab1f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ab20 call dword ptr [0x10c802f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f4))), 0x10c5ab26u);
  /* 10c5ab26 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ab2b:;
  /* 10c5ab2b cmp dword ptr [0x10c7e618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ab32 jne 0x10c5ad4f */
  if (!C.zf) goto L_10c5ad4f;
  /* 10c5ab38 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ab3c jne 0x10c5ab47 */
  if (!C.zf) goto L_10c5ab47;
  /* 10c5ab3e mov edx, dword ptr [0x10c7e610] */
  EDX = (r32((uint32_t)(0x10c7e610)));
  /* 10c5ab44 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10c5ab47:;
  /* 10c5ab47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ab49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ab4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5ab4e push eax */
  push32((uint32_t)(EAX));
  /* 10c5ab4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ab52 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ab53 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c5ab56 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5ab58 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ab5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5ab5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ab60 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ab61 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c5ab64 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ab65 call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c5ab6bu);
  /* 10c5ab6b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c5ab6e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ab72 jne 0x10c5ab7b */
  if (!C.zf) goto L_10c5ab7b;
  /* 10c5ab74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ab76 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ab7b:;
  /* 10c5ab7b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5ab82 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5ab85 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5ab87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ab8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c5ab8c call 0x10c55810 */
  push32(0x10c5ab91u); f_10c55810();
  /* 10c5ab91 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10c5ab94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c5ab97 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5ab9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c5ab9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c5aba4 jmp 0x10c5abbd */
  goto L_10c5abbd;
  /* 10c5aba6 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5abab ret  */
  ESPCHK(0x10c5aa60u, _esp0);
  ESP += 4; return;
  /* 10c5abac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5abaf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c5abb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c5abbd:;
  /* 10c5abbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5abc1 jne 0x10c5abca */
  if (!C.zf) goto L_10c5abca;
  /* 10c5abc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5abc5 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5abca:;
  /* 10c5abca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5abcd push edx */
  push32((uint32_t)(EDX));
  /* 10c5abce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5abd1 push eax */
  push32((uint32_t)(EAX));
  /* 10c5abd2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5abd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5abd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5abd9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5abda push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5abdc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c5abdf push eax */
  push32((uint32_t)(EAX));
  /* 10c5abe0 call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c5abe6u);
  /* 10c5abe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5abe8 jne 0x10c5abf1 */
  if (!C.zf) goto L_10c5abf1;
  /* 10c5abea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5abec jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5abf1:;
  /* 10c5abf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5abf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5abf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5abf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5abf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5abfc push edx */
  push32((uint32_t)(EDX));
  /* 10c5abfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ac00 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ac01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ac04 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ac05 call dword ptr [0x10c802f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f8))), 0x10c5ac0bu);
  /* 10c5ac0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c5ac0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ac12 jne 0x10c5ac1b */
  if (!C.zf) goto L_10c5ac1b;
  /* 10c5ac14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ac16 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ac1b:;
  /* 10c5ac1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ac1e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5ac24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5ac26 je 0x10c5ac6b */
  if (C.zf) goto L_10c5ac6b;
  /* 10c5ac28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ac2c je 0x10c5ac66 */
  if (C.zf) goto L_10c5ac66;
  /* 10c5ac2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5ac31 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ac34 jle 0x10c5ac3d */
  if ((C.zf||C.sf!=C.of)) goto L_10c5ac3d;
  /* 10c5ac36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ac38 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ac3d:;
  /* 10c5ac3d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c5ac40 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ac41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ac44 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ac45 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5ac48 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ac49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5ac4c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ac4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ac50 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ac51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ac54 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ac55 call dword ptr [0x10c802f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f8))), 0x10c5ac5bu);
  /* 10c5ac5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ac5d jne 0x10c5ac66 */
  if (!C.zf) goto L_10c5ac66;
  /* 10c5ac5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ac61 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ac66:;
  /* 10c5ac66 jmp 0x10c5ad4a */
  goto L_10c5ad4a;
L_10c5ac6b:;
  /* 10c5ac6b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5ac6e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c5ac71 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c5ac78 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5ac7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5ac7d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ac80 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c5ac82 call 0x10c55810 */
  push32(0x10c5ac87u); f_10c55810();
  /* 10c5ac87 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10c5ac8a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c5ac8d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c5ac90 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c5ac93 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c5ac9a jmp 0x10c5acb3 */
  goto L_10c5acb3;
  /* 10c5ac9c mov eax, 1 */
  EAX = (0x1u);
  /* 10c5aca1 ret  */
  ESPCHK(0x10c5aa60u, _esp0);
  ESP += 4; return;
  /* 10c5aca2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5aca5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c5acac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c5acb3:;
  /* 10c5acb3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5acb7 jne 0x10c5acc0 */
  if (!C.zf) goto L_10c5acc0;
  /* 10c5acb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5acbb jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5acc0:;
  /* 10c5acc0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5acc3 push eax */
  push32((uint32_t)(EAX));
  /* 10c5acc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5acc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5acc8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5accb push edx */
  push32((uint32_t)(EDX));
  /* 10c5accc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5accf push eax */
  push32((uint32_t)(EAX));
  /* 10c5acd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5acd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5acd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5acd7 push edx */
  push32((uint32_t)(EDX));
  /* 10c5acd8 call dword ptr [0x10c802f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f8))), 0x10c5acdeu);
  /* 10c5acde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ace0 jne 0x10c5ace6 */
  if (!C.zf) goto L_10c5ace6;
  /* 10c5ace2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ace4 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ace6:;
  /* 10c5ace6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5acea jne 0x10c5ad1a */
  if (!C.zf) goto L_10c5ad1a;
  /* 10c5acec push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5acee push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5acf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5acf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5acf4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5acf7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5acf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5acfb push ecx */
  push32((uint32_t)(ECX));
  /* 10c5acfc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c5ad01 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c5ad04 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ad05 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c5ad0bu);
  /* 10c5ad0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c5ad0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ad12 jne 0x10c5ad18 */
  if (!C.zf) goto L_10c5ad18;
  /* 10c5ad14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ad16 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ad18:;
  /* 10c5ad18 jmp 0x10c5ad4a */
  goto L_10c5ad4a;
L_10c5ad1a:;
  /* 10c5ad1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ad1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ad1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c5ad21 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ad22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ad25 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ad26 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5ad29 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ad2a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5ad2d push eax */
  push32((uint32_t)(EAX));
  /* 10c5ad2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c5ad33 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c5ad36 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ad37 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c5ad3du);
  /* 10c5ad3d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c5ad40 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ad44 jne 0x10c5ad4a */
  if (!C.zf) goto L_10c5ad4a;
  /* 10c5ad46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ad48 jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ad4a:;
  /* 10c5ad4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5ad4d jmp 0x10c5ad51 */
  goto L_10c5ad51;
L_10c5ad4f:;
  /* 10c5ad4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5ad51:;
  /* 10c5ad51 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10c5ad54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5ad57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c5ad5e pop edi */
  EDI = (pop32());
  /* 10c5ad5f pop esi */
  ESI = (pop32());
  /* 10c5ad60 pop ebx */
  EBX = (pop32());
  /* 10c5ad61 mov esp, ebp */
  ESP = (EBP);
  /* 10c5ad63 pop ebp */
  EBP = (pop32());
  /* 10c5ad64 ret  */
  ESPCHK(0x10c5aa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad70 @ 0x10c5ad70 (80 bytes, 32 insns) */
void f_10c5ad70(void) {
  FTRACE(0x10c5ad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ad70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ad71 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ad73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ad76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ad79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5ad7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ad7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5ad82:;
  /* 10c5ad82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ad85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ad88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ad8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5ad8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5ad90 je 0x10c5ada7 */
  if (C.zf) goto L_10c5ada7;
  /* 10c5ad92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ad95 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5ad98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5ad9a je 0x10c5ada7 */
  if (C.zf) goto L_10c5ada7;
  /* 10c5ad9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ad9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ada2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5ada5 jmp 0x10c5ad82 */
  goto L_10c5ad82;
L_10c5ada7:;
  /* 10c5ada7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5adaa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5adad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5adaf jne 0x10c5adb9 */
  if (!C.zf) goto L_10c5adb9;
  /* 10c5adb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5adb4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5adb7 jmp 0x10c5adbc */
  goto L_10c5adbc;
L_10c5adb9:;
  /* 10c5adb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10c5adbc:;
  /* 10c5adbc mov esp, ebp */
  ESP = (EBP);
  /* 10c5adbe pop ebp */
  EBP = (pop32());
  /* 10c5adbf ret  */
  ESPCHK(0x10c5ad70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x10c5adc0 (130 bytes, 43 insns) */
void f_10c5adc0(void) {
  FTRACE(0x10c5adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5adc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5adc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5adc7 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5adcd jae 0x10c5adf1 */
  if (!C.cf) goto L_10c5adf1;
  /* 10c5adcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5add2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5add5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5add8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5addb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5adde mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5ade5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5adea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5aded test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5adef jne 0x10c5ae0c */
  if (!C.zf) goto L_10c5ae0c;
L_10c5adf1:;
  /* 10c5adf1 call 0x10c5a540 */
  push32(0x10c5adf6u); f_10c5a540();
  /* 10c5adf6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5adfc call 0x10c5a550 */
  push32(0x10c5ae01u); f_10c5a550();
  /* 10c5ae01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5ae07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ae0a jmp 0x10c5ae3e */
  goto L_10c5ae3e;
L_10c5ae0c:;
  /* 10c5ae0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ae0f push edx */
  push32((uint32_t)(EDX));
  /* 10c5ae10 call 0x10c5bd60 */
  push32(0x10c5ae15u); f_10c5bd60();
  /* 10c5ae15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ae18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ae1b push eax */
  push32((uint32_t)(EAX));
  /* 10c5ae1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ae1f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ae20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ae23 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ae24 call 0x10c5ae50 */
  push32(0x10c5ae29u); f_10c5ae50();
  /* 10c5ae29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ae2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5ae2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ae32 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ae33 call 0x10c5bdf0 */
  push32(0x10c5ae38u); f_10c5bdf0();
  /* 10c5ae38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ae3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5ae3e:;
  /* 10c5ae3e mov esp, ebp */
  ESP = (EBP);
  /* 10c5ae40 pop ebp */
  EBP = (pop32());
  /* 10c5ae41 ret  */
  ESPCHK(0x10c5adc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae50 @ 0x10c5ae50 (178 bytes, 56 insns) */
void f_10c5ae50(void) {
  FTRACE(0x10c5ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ae50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ae51 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ae53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ae56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ae59 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ae5a call 0x10c5bbe0 */
  push32(0x10c5ae5fu); f_10c5bbe0();
  /* 10c5ae5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ae62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5ae65 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ae69 jne 0x10c5ae7e */
  if (!C.zf) goto L_10c5ae7e;
  /* 10c5ae6b call 0x10c5a540 */
  push32(0x10c5ae70u); f_10c5a540();
  /* 10c5ae70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5ae76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ae79 jmp 0x10c5aefe */
  goto L_10c5aefe;
L_10c5ae7e:;
  /* 10c5ae7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ae81 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ae82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ae84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ae87 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ae88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5ae8b push eax */
  push32((uint32_t)(EAX));
  /* 10c5ae8c call dword ptr [0x10c802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802fc))), 0x10c5ae92u);
  /* 10c5ae92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5ae95 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ae99 jne 0x10c5aea6 */
  if (!C.zf) goto L_10c5aea6;
  /* 10c5ae9b call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c5aea1u);
  /* 10c5aea1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5aea4 jmp 0x10c5aead */
  goto L_10c5aead;
L_10c5aea6:;
  /* 10c5aea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c5aead:;
  /* 10c5aead cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5aeb1 je 0x10c5aec4 */
  if (C.zf) goto L_10c5aec4;
  /* 10c5aeb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5aeb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5aeb7 call 0x10c5a4a0 */
  push32(0x10c5aebcu); f_10c5a4a0();
  /* 10c5aebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5aebf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5aec2 jmp 0x10c5aefe */
  goto L_10c5aefe;
L_10c5aec4:;
  /* 10c5aec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5aec7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c5aeca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5aecd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5aed0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5aed3 mov ecx, dword ptr [edx*4 + 0x10c7fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c5aeda mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10c5aede and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10c5aee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5aee4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5aee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5aeea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5aeed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5aef0 mov eax, dword ptr [eax*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5aef7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10c5aefb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c5aefe:;
  /* 10c5aefe mov esp, ebp */
  ESP = (EBP);
  /* 10c5af00 pop ebp */
  EBP = (pop32());
  /* 10c5af01 ret  */
  ESPCHK(0x10c5ae50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x10c5af10 (130 bytes, 43 insns) */
void f_10c5af10(void) {
  FTRACE(0x10c5af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5af10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5af11 mov ebp, esp */
  EBP = (ESP);
  /* 10c5af13 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5af14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5af17 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5af1d jae 0x10c5af41 */
  if (!C.cf) goto L_10c5af41;
  /* 10c5af1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5af22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5af25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5af28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5af2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5af2e mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5af35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5af3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5af3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5af3f jne 0x10c5af5c */
  if (!C.zf) goto L_10c5af5c;
L_10c5af41:;
  /* 10c5af41 call 0x10c5a540 */
  push32(0x10c5af46u); f_10c5a540();
  /* 10c5af46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5af4c call 0x10c5a550 */
  push32(0x10c5af51u); f_10c5a550();
  /* 10c5af51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5af57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5af5a jmp 0x10c5af8e */
  goto L_10c5af8e;
L_10c5af5c:;
  /* 10c5af5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5af5f push edx */
  push32((uint32_t)(EDX));
  /* 10c5af60 call 0x10c5bd60 */
  push32(0x10c5af65u); f_10c5bd60();
  /* 10c5af65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5af68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5af6b push eax */
  push32((uint32_t)(EAX));
  /* 10c5af6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5af6f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5af70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5af73 push edx */
  push32((uint32_t)(EDX));
  /* 10c5af74 call 0x10c5afa0 */
  push32(0x10c5af79u); f_10c5afa0();
  /* 10c5af79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5af7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5af7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5af82 push eax */
  push32((uint32_t)(EAX));
  /* 10c5af83 call 0x10c5bdf0 */
  push32(0x10c5af88u); f_10c5bdf0();
  /* 10c5af88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5af8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5af8e:;
  /* 10c5af8e mov esp, ebp */
  ESP = (EBP);
  /* 10c5af90 pop ebp */
  EBP = (pop32());
  /* 10c5af91 ret  */
  ESPCHK(0x10c5af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa0 @ 0x10c5afa0 (627 bytes, 182 insns) */
void f_10c5afa0(void) {
  FTRACE(0x10c5afa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5afa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5afa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5afa3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5afa9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5afb0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5afb3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10c5afb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5afbd jne 0x10c5afc6 */
  if (!C.zf) goto L_10c5afc6;
  /* 10c5afbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5afc1 jmp 0x10c5b20f */
  goto L_10c5b20f;
L_10c5afc6:;
  /* 10c5afc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5afc9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5afcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5afcf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5afd2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5afd5 mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5afdc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5afe1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5afe4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5afe6 je 0x10c5aff8 */
  if (C.zf) goto L_10c5aff8;
  /* 10c5afe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5afea push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5afec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5afef push edx */
  push32((uint32_t)(EDX));
  /* 10c5aff0 call 0x10c5ae50 */
  push32(0x10c5aff5u); f_10c5ae50();
  /* 10c5aff5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5aff8:;
  /* 10c5aff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5affb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5affe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b001 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5b004 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b007 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5b00e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c5b013 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5b01a je 0x10c5b12c */
  if (C.zf) goto L_10c5b12c;
  /* 10c5b020 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5b023 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5b026 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c5b02d:;
  /* 10c5b02d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b030 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b033 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b036 jae 0x10c5b12a */
  if (!C.cf) goto L_10c5b12a;
  /* 10c5b03c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10c5b042 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c5b045:;
  /* 10c5b045 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b048 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10c5b04e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b050 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b056 jge 0x10c5b0b7 */
  if ((C.sf==C.of)) goto L_10c5b0b7;
  /* 10c5b058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b05b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b05e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b061 jae 0x10c5b0b7 */
  if (!C.cf) goto L_10c5b0b7;
  /* 10c5b063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b066 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5b068 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10c5b06e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b071 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b074 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5b077 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10c5b07e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b081 jne 0x10c5b0a1 */
  if (!C.zf) goto L_10c5b0a1;
  /* 10c5b083 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10c5b089 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b08c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10c5b092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b095 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10c5b098 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b09b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b09e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c5b0a1:;
  /* 10c5b0a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b0a4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10c5b0aa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c5b0ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b0af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b0b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5b0b5 jmp 0x10c5b045 */
  goto L_10c5b045;
L_10c5b0b7:;
  /* 10c5b0b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5b0b9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10c5b0bf push edx */
  push32((uint32_t)(EDX));
  /* 10c5b0c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b0c3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10c5b0c9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b0cb push eax */
  push32((uint32_t)(EAX));
  /* 10c5b0cc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10c5b0d2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5b0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b0d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5b0d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b0dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5b0df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b0e2 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5b0e9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10c5b0ec push eax */
  push32((uint32_t)(EAX));
  /* 10c5b0ed call dword ptr [0x10c80230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80230))), 0x10c5b0f3u);
  /* 10c5b0f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5b0f5 je 0x10c5b11a */
  if (C.zf) goto L_10c5b11a;
  /* 10c5b0f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5b0fa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b100 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c5b103 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b106 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10c5b10c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b10e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b114 jge 0x10c5b118 */
  if ((C.sf==C.of)) goto L_10c5b118;
  /* 10c5b116 jmp 0x10c5b12a */
  goto L_10c5b12a;
L_10c5b118:;
  /* 10c5b118 jmp 0x10c5b125 */
  goto L_10c5b125;
L_10c5b11a:;
  /* 10c5b11a call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c5b120u);
  /* 10c5b120 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5b123 jmp 0x10c5b12a */
  goto L_10c5b12a;
L_10c5b125:;
  /* 10c5b125 jmp 0x10c5b02d */
  goto L_10c5b02d;
L_10c5b12a:;
  /* 10c5b12a jmp 0x10c5b17c */
  goto L_10c5b17c;
L_10c5b12c:;
  /* 10c5b12c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5b12e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10c5b134 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b135 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5b138 push edx */
  push32((uint32_t)(EDX));
  /* 10c5b139 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5b13c push eax */
  push32((uint32_t)(EAX));
  /* 10c5b13d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b140 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5b143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b146 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b149 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b14c mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5b153 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10c5b156 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b157 call dword ptr [0x10c80230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80230))), 0x10c5b15du);
  /* 10c5b15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5b15f je 0x10c5b173 */
  if (C.zf) goto L_10c5b173;
  /* 10c5b161 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c5b168 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10c5b16e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c5b171 jmp 0x10c5b17c */
  goto L_10c5b17c;
L_10c5b173:;
  /* 10c5b173 call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c5b179u);
  /* 10c5b179 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c5b17c:;
  /* 10c5b17c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b180 jne 0x10c5b206 */
  if (!C.zf) goto L_10c5b206;
  /* 10c5b186 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b18a je 0x10c5b1ba */
  if (C.zf) goto L_10c5b1ba;
  /* 10c5b18c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b190 jne 0x10c5b1a9 */
  if (!C.zf) goto L_10c5b1a9;
  /* 10c5b192 call 0x10c5a540 */
  push32(0x10c5b197u); f_10c5a540();
  /* 10c5b197 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5b19d call 0x10c5a550 */
  push32(0x10c5b1a2u); f_10c5a550();
  /* 10c5b1a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b1a5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c5b1a7 jmp 0x10c5b1b5 */
  goto L_10c5b1b5;
L_10c5b1a9:;
  /* 10c5b1a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b1ac push edx */
  push32((uint32_t)(EDX));
  /* 10c5b1ad call 0x10c5a4a0 */
  push32(0x10c5b1b2u); f_10c5a4a0();
  /* 10c5b1b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5b1b5:;
  /* 10c5b1b5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b1b8 jmp 0x10c5b20f */
  goto L_10c5b20f;
L_10c5b1ba:;
  /* 10c5b1ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b1bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5b1c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b1c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5b1c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b1c9 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5b1d0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c5b1d5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b1d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5b1da je 0x10c5b1eb */
  if (C.zf) goto L_10c5b1eb;
  /* 10c5b1dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5b1df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5b1e2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b1e5 jne 0x10c5b1eb */
  if (!C.zf) goto L_10c5b1eb;
  /* 10c5b1e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b1e9 jmp 0x10c5b20f */
  goto L_10c5b20f;
L_10c5b1eb:;
  /* 10c5b1eb call 0x10c5a540 */
  push32(0x10c5b1f0u); f_10c5a540();
  /* 10c5b1f0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10c5b1f6 call 0x10c5a550 */
  push32(0x10c5b1fbu); f_10c5a550();
  /* 10c5b1fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5b201 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b204 jmp 0x10c5b20f */
  goto L_10c5b20f;
L_10c5b206:;
  /* 10c5b206 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5b209 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c5b20f:;
  /* 10c5b20f mov esp, ebp */
  ESP = (EBP);
  /* 10c5b211 pop ebp */
  EBP = (pop32());
  /* 10c5b212 ret  */
  ESPCHK(0x10c5afa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x10c5b220 (199 bytes, 68 insns) */
void f_10c5b220(void) {
  FTRACE(0x10c5b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b220 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b221 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b223 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b224 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5b225 push esi */
  push32((uint32_t)(ESI));
  /* 10c5b226 push edi */
  push32((uint32_t)(EDI));
L_10c5b227:;
  /* 10c5b227 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b22b jne 0x10c5b24b */
  if (!C.zf) goto L_10c5b24b;
  /* 10c5b22d push 0x10c79e54 */
  push32((uint32_t)(0x10c79e54u));
  /* 10c5b232 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5b234 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10c5b236 push 0x10c79f20 */
  push32((uint32_t)(0x10c79f20u));
  /* 10c5b23b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5b23d call 0x10c51730 */
  push32(0x10c5b242u); f_10c51730();
  /* 10c5b242 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b245 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b248 jne 0x10c5b24b */
  if (!C.zf) goto L_10c5b24b;
  /* 10c5b24a int3  */
  x86_unimpl("int3 @ 0x10c5b24a");
L_10c5b24b:;
  /* 10c5b24b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5b24f jne 0x10c5b227 */
  if (!C.zf) goto L_10c5b227;
  /* 10c5b251 mov ecx, dword ptr [0x10c7e61c] */
  ECX = (r32((uint32_t)(0x10c7e61c)));
  /* 10c5b257 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b25a mov dword ptr [0x10c7e61c], ecx */
  w32((uint32_t)(0x10c7e61c), (ECX));
  /* 10c5b260 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b263 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5b266 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10c5b268 push 0x10c79f20 */
  push32((uint32_t)(0x10c79f20u));
  /* 10c5b26d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5b26f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c5b274 call 0x10c52670 */
  push32(0x10c5b279u); f_10c52670();
  /* 10c5b279 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b27c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b27f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c5b282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b285 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b289 je 0x10c5b2a6 */
  if (C.zf) goto L_10c5b2a6;
  /* 10c5b28b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b28e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5b291 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5b294 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b297 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c5b29a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b29d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10c5b2a4 jmp 0x10c5b2cb */
  goto L_10c5b2cb;
L_10c5b2a6:;
  /* 10c5b2a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2a9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5b2ac or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2b2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c5b2b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2b8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b2bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2be mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c5b2c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2c4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10c5b2cb:;
  /* 10c5b2cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c5b2d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c5b2d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b2d9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c5b2e0 pop edi */
  EDI = (pop32());
  /* 10c5b2e1 pop esi */
  ESI = (pop32());
  /* 10c5b2e2 pop ebx */
  EBX = (pop32());
  /* 10c5b2e3 mov esp, ebp */
  ESP = (EBP);
  /* 10c5b2e5 pop ebp */
  EBP = (pop32());
  /* 10c5b2e6 ret  */
  ESPCHK(0x10c5b220u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10c5b2f0 (50 bytes, 17 insns) */
void f_10c5b2f0(void) {
  FTRACE(0x10c5b2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b2f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b2f6 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b2fc jb 0x10c5b302 */
  if (C.cf) goto L_10c5b302;
  /* 10c5b2fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b300 jmp 0x10c5b320 */
  goto L_10c5b320;
L_10c5b302:;
  /* 10c5b302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b305 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5b308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b30b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b30e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b311 mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5b318 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5b31d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10c5b320:;
  /* 10c5b320 pop ebp */
  EBP = (pop32());
  /* 10c5b321 ret  */
  ESPCHK(0x10c5b2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x10c5b330 (300 bytes, 80 insns) */
void f_10c5b330(void) {
  FTRACE(0x10c5b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b330 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b331 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b333 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b334 cmp dword ptr [0x10c7fae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b33b jne 0x10c5b349 */
  if (!C.zf) goto L_10c5b349;
  /* 10c5b33d mov dword ptr [0x10c7fae0], 0x200 */
  w32((uint32_t)(0x10c7fae0), (0x200u));
  /* 10c5b347 jmp 0x10c5b35c */
  goto L_10c5b35c;
L_10c5b349:;
  /* 10c5b349 cmp dword ptr [0x10c7fae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b350 jge 0x10c5b35c */
  if ((C.sf==C.of)) goto L_10c5b35c;
  /* 10c5b352 mov dword ptr [0x10c7fae0], 0x14 */
  w32((uint32_t)(0x10c7fae0), (0x14u));
L_10c5b35c:;
  /* 10c5b35c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10c5b361 push 0x10c79f2c */
  push32((uint32_t)(0x10c79f2cu));
  /* 10c5b366 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5b368 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c5b36a mov eax, dword ptr [0x10c7fae0] */
  EAX = (r32((uint32_t)(0x10c7fae0)));
  /* 10c5b36f push eax */
  push32((uint32_t)(EAX));
  /* 10c5b370 call 0x10c52a80 */
  push32(0x10c5b375u); f_10c52a80();
  /* 10c5b375 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b378 mov dword ptr [0x10c7e790], eax */
  w32((uint32_t)(0x10c7e790), (EAX));
  /* 10c5b37d cmp dword ptr [0x10c7e790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b384 jne 0x10c5b3c5 */
  if (!C.zf) goto L_10c5b3c5;
  /* 10c5b386 mov dword ptr [0x10c7fae0], 0x14 */
  w32((uint32_t)(0x10c7fae0), (0x14u));
  /* 10c5b390 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10c5b395 push 0x10c79f2c */
  push32((uint32_t)(0x10c79f2cu));
  /* 10c5b39a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5b39c push 4 */
  push32((uint32_t)(0x4u));
  /* 10c5b39e mov ecx, dword ptr [0x10c7fae0] */
  ECX = (r32((uint32_t)(0x10c7fae0)));
  /* 10c5b3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b3a5 call 0x10c52a80 */
  push32(0x10c5b3aau); f_10c52a80();
  /* 10c5b3aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b3ad mov dword ptr [0x10c7e790], eax */
  w32((uint32_t)(0x10c7e790), (EAX));
  /* 10c5b3b2 cmp dword ptr [0x10c7e790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b3b9 jne 0x10c5b3c5 */
  if (!C.zf) goto L_10c5b3c5;
  /* 10c5b3bb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10c5b3bd call 0x10c515e0 */
  push32(0x10c5b3c2u); f_10c515e0();
  /* 10c5b3c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5b3c5:;
  /* 10c5b3c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5b3cc jmp 0x10c5b3d7 */
  goto L_10c5b3d7;
L_10c5b3ce:;
  /* 10c5b3ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b3d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b3d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c5b3d7:;
  /* 10c5b3d7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b3db jge 0x10c5b3f6 */
  if ((C.sf==C.of)) goto L_10c5b3f6;
  /* 10c5b3dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b3e0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5b3e3 add eax, 0x10c7d120 */
  { uint32_t _a=(EAX),_b=(0x10c7d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b3e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b3eb mov edx, dword ptr [0x10c7e790] */
  EDX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5b3f1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10c5b3f4 jmp 0x10c5b3ce */
  goto L_10c5b3ce;
L_10c5b3f6:;
  /* 10c5b3f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5b3fd jmp 0x10c5b408 */
  goto L_10c5b408;
L_10c5b3ff:;
  /* 10c5b3ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b402 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b405 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5b408:;
  /* 10c5b408 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b40c jge 0x10c5b458 */
  if ((C.sf==C.of)) goto L_10c5b458;
  /* 10c5b40e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b411 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5b414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b417 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b41a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b41d mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5b424 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b428 je 0x10c5b446 */
  if (C.zf) goto L_10c5b446;
  /* 10c5b42a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b42d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5b430 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b433 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b436 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5b439 mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5b440 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b444 jne 0x10c5b456 */
  if (!C.zf) goto L_10c5b456;
L_10c5b446:;
  /* 10c5b446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b449 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5b44c mov dword ptr [ecx + 0x10c7d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10c7d130), (0xffffffffu));
L_10c5b456:;
  /* 10c5b456 jmp 0x10c5b3ff */
  goto L_10c5b3ff;
L_10c5b458:;
  /* 10c5b458 mov esp, ebp */
  ESP = (EBP);
  /* 10c5b45a pop ebp */
  EBP = (pop32());
  /* 10c5b45b ret  */
  ESPCHK(0x10c5b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x10c5b460 (26 bytes, 9 insns) */
void f_10c5b460(void) {
  FTRACE(0x10c5b460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b460 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b461 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b463 call 0x10c5c060 */
  push32(0x10c5b468u); f_10c5c060();
  /* 10c5b468 movsx eax, byte ptr [0x10c7e434] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10c7e434))));
  /* 10c5b46f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5b471 je 0x10c5b478 */
  if (C.zf) goto L_10c5b478;
  /* 10c5b473 call 0x10c5be20 */
  push32(0x10c5b478u); f_10c5be20();
L_10c5b478:;
  /* 10c5b478 pop ebp */
  EBP = (pop32());
  /* 10c5b479 ret  */
  ESPCHK(0x10c5b460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x10c5b480 (61 bytes, 20 insns) */
void f_10c5b480(void) {
  FTRACE(0x10c5b480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b480 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b481 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b483 cmp dword ptr [ebp + 8], 0x10c7d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c7d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b48a jb 0x10c5b4ae */
  if (C.cf) goto L_10c5b4ae;
  /* 10c5b48c cmp dword ptr [ebp + 8], 0x10c7d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c7d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b493 ja 0x10c5b4ae */
  if ((!C.cf&&!C.zf)) goto L_10c5b4ae;
  /* 10c5b495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b498 sub eax, 0x10c7d120 */
  { uint32_t _a=(EAX),_b=(0x10c7d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b49d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5b4a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b4a3 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b4a4 call 0x10c56070 */
  push32(0x10c5b4a9u); f_10c56070();
  /* 10c5b4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b4ac jmp 0x10c5b4bb */
  goto L_10c5b4bb;
L_10c5b4ae:;
  /* 10c5b4ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b4b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b4b5 call dword ptr [0x10c802c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c0))), 0x10c5b4bbu);
L_10c5b4bb:;
  /* 10c5b4bb pop ebp */
  EBP = (pop32());
  /* 10c5b4bc ret  */
  ESPCHK(0x10c5b480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x10c5b4c0 (41 bytes, 16 insns) */
void f_10c5b4c0(void) {
  FTRACE(0x10c5b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b4c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b4c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b4c7 jge 0x10c5b4da */
  if ((C.sf==C.of)) goto L_10c5b4da;
  /* 10c5b4c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b4cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b4cf push eax */
  push32((uint32_t)(EAX));
  /* 10c5b4d0 call 0x10c56070 */
  push32(0x10c5b4d5u); f_10c56070();
  /* 10c5b4d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b4d8 jmp 0x10c5b4e7 */
  goto L_10c5b4e7;
L_10c5b4da:;
  /* 10c5b4da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5b4dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b4e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b4e1 call dword ptr [0x10c802c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c0))), 0x10c5b4e7u);
L_10c5b4e7:;
  /* 10c5b4e7 pop ebp */
  EBP = (pop32());
  /* 10c5b4e8 ret  */
  ESPCHK(0x10c5b4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f0 @ 0x10c5b4f0 (61 bytes, 20 insns) */
void f_10c5b4f0(void) {
  FTRACE(0x10c5b4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b4f3 cmp dword ptr [ebp + 8], 0x10c7d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c7d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b4fa jb 0x10c5b51e */
  if (C.cf) goto L_10c5b51e;
  /* 10c5b4fc cmp dword ptr [ebp + 8], 0x10c7d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c7d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b503 ja 0x10c5b51e */
  if ((!C.cf&&!C.zf)) goto L_10c5b51e;
  /* 10c5b505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b508 sub eax, 0x10c7d120 */
  { uint32_t _a=(EAX),_b=(0x10c7d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b50d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5b510 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b513 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b514 call 0x10c56110 */
  push32(0x10c5b519u); f_10c56110();
  /* 10c5b519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b51c jmp 0x10c5b52b */
  goto L_10c5b52b;
L_10c5b51e:;
  /* 10c5b51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b521 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b524 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b525 call dword ptr [0x10c802c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c4))), 0x10c5b52bu);
L_10c5b52b:;
  /* 10c5b52b pop ebp */
  EBP = (pop32());
  /* 10c5b52c ret  */
  ESPCHK(0x10c5b4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b530 @ 0x10c5b530 (41 bytes, 16 insns) */
void f_10c5b530(void) {
  FTRACE(0x10c5b530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b530 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b531 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b533 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b537 jge 0x10c5b54a */
  if ((C.sf==C.of)) goto L_10c5b54a;
  /* 10c5b539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b53c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b53f push eax */
  push32((uint32_t)(EAX));
  /* 10c5b540 call 0x10c56110 */
  push32(0x10c5b545u); f_10c56110();
  /* 10c5b545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b548 jmp 0x10c5b557 */
  goto L_10c5b557;
L_10c5b54a:;
  /* 10c5b54a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5b54d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b550 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b551 call dword ptr [0x10c802c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c4))), 0x10c5b557u);
L_10c5b557:;
  /* 10c5b557 pop ebp */
  EBP = (pop32());
  /* 10c5b558 ret  */
  ESPCHK(0x10c5b530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b560 @ 0x10c5b560 (119 bytes, 34 insns) */
void f_10c5b560(void) {
  FTRACE(0x10c5b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b560 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b561 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b566 push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c5b56b call dword ptr [0x10c80244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80244))), 0x10c5b571u);
  /* 10c5b571 cmp dword ptr [0x10c7e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b578 je 0x10c5b598 */
  if (C.zf) goto L_10c5b598;
  /* 10c5b57a push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c5b57f call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c5b585u);
  /* 10c5b585 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5b587 call 0x10c56070 */
  push32(0x10c5b58cu); f_10c56070();
  /* 10c5b58c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b58f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c5b596 jmp 0x10c5b59f */
  goto L_10c5b59f;
L_10c5b598:;
  /* 10c5b598 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c5b59f:;
  /* 10c5b59f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10c5b5a3 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b5a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b5a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b5a8 call 0x10c5b5e0 */
  push32(0x10c5b5adu); f_10c5b5e0();
  /* 10c5b5ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b5b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5b5b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b5b7 je 0x10c5b5c5 */
  if (C.zf) goto L_10c5b5c5;
  /* 10c5b5b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5b5bb call 0x10c56110 */
  push32(0x10c5b5c0u); f_10c56110();
  /* 10c5b5c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b5c3 jmp 0x10c5b5d0 */
  goto L_10c5b5d0;
L_10c5b5c5:;
  /* 10c5b5c5 push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c5b5ca call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c5b5d0u);
L_10c5b5d0:;
  /* 10c5b5d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5b5d3 mov esp, ebp */
  ESP = (EBP);
  /* 10c5b5d5 pop ebp */
  EBP = (pop32());
  /* 10c5b5d6 ret  */
  ESPCHK(0x10c5b560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e0 @ 0x10c5b5e0 (160 bytes, 50 insns) */
void f_10c5b5e0(void) {
  FTRACE(0x10c5b5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b5e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b5ea jne 0x10c5b5f3 */
  if (!C.zf) goto L_10c5b5f3;
  /* 10c5b5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b5ee jmp 0x10c5b67c */
  goto L_10c5b67c;
L_10c5b5f3:;
  /* 10c5b5f3 cmp dword ptr [0x10c7e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b5fa jne 0x10c5b62a */
  if (!C.zf) goto L_10c5b62a;
  /* 10c5b5fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5b5ff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b604 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b609 jle 0x10c5b61b */
  if ((C.zf||C.sf!=C.of)) goto L_10c5b61b;
  /* 10c5b60b call 0x10c5a540 */
  push32(0x10c5b610u); f_10c5a540();
  /* 10c5b610 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10c5b616 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b619 jmp 0x10c5b67c */
  goto L_10c5b67c;
L_10c5b61b:;
  /* 10c5b61b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b61e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10c5b621 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10c5b623 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5b628 jmp 0x10c5b67c */
  goto L_10c5b67c;
L_10c5b62a:;
  /* 10c5b62a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5b631 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c5b634 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b635 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5b637 mov ecx, dword ptr [0x10c7cea4] */
  ECX = (r32((uint32_t)(0x10c7cea4)));
  /* 10c5b63d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b641 push edx */
  push32((uint32_t)(EDX));
  /* 10c5b642 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5b644 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10c5b647 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b648 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c5b64d mov ecx, dword ptr [0x10c7e610] */
  ECX = (r32((uint32_t)(0x10c7e610)));
  /* 10c5b653 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b654 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c5b65au);
  /* 10c5b65a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5b65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b661 je 0x10c5b669 */
  if (C.zf) goto L_10c5b669;
  /* 10c5b663 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b667 je 0x10c5b679 */
  if (C.zf) goto L_10c5b679;
L_10c5b669:;
  /* 10c5b669 call 0x10c5a540 */
  push32(0x10c5b66eu); f_10c5a540();
  /* 10c5b66e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10c5b674 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5b677 jmp 0x10c5b67c */
  goto L_10c5b67c;
L_10c5b679:;
  /* 10c5b679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5b67c:;
  /* 10c5b67c mov esp, ebp */
  ESP = (EBP);
  /* 10c5b67e pop ebp */
  EBP = (pop32());
  /* 10c5b67f ret  */
  ESPCHK(0x10c5b5e0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10c5b680 (32 bytes, 18 insns) */
void f_10c5b680(void) {
  FTRACE(0x10c5b680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b680 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b681 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b683 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5b684 push esi */
  push32((uint32_t)(ESI));
  /* 10c5b685 push edi */
  push32((uint32_t)(EDI));
  /* 10c5b686 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b687 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5b689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5b68b push 0x10c5b698 */
  push32((uint32_t)(0x10c5b698u));
  /* 10c5b690 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10c5b693 call 0x10c62dcc */
  push32(0x10c5b698u); f_10c62dcc();
  /* 10c5b698 pop ebp */
  EBP = (pop32());
  /* 10c5b699 pop edi */
  EDI = (pop32());
  /* 10c5b69a pop esi */
  ESI = (pop32());
  /* 10c5b69b pop ebx */
  EBX = (pop32());
  /* 10c5b69c mov esp, ebp */
  ESP = (EBP);
  /* 10c5b69e pop ebp */
  EBP = (pop32());
  /* 10c5b69f ret  */
  ESPCHK(0x10c5b680u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10c5b6c2 (104 bytes, 33 insns) */
void f_10c5b6c2(void) {
  FTRACE(0x10c5b6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b6c2 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5b6c3 push esi */
  push32((uint32_t)(ESI));
  /* 10c5b6c4 push edi */
  push32((uint32_t)(EDI));
  /* 10c5b6c5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c5b6c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b6ca push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10c5b6cc push 0x10c5b6a0 */
  push32((uint32_t)(0x10c5b6a0u));
  /* 10c5b6d1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10c5b6d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10c5b6df:;
  /* 10c5b6df mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10c5b6e3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5b6e6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5b6e9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b6ec je 0x10c5b71c */
  if (C.zf) goto L_10c5b71c;
  /* 10c5b6ee cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b6f2 je 0x10c5b71c */
  if (C.zf) goto L_10c5b71c;
  /* 10c5b6f4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10c5b6f7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10c5b6fa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10c5b6fe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10c5b701 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b706 jne 0x10c5b71a */
  if (!C.zf) goto L_10c5b71a;
  /* 10c5b708 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10c5b70d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10c5b711 call 0x10c5b756 */
  push32(0x10c5b716u); f_10c5b756();
  /* 10c5b716 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10c5b71au);
L_10c5b71a:;
  /* 10c5b71a jmp 0x10c5b6df */
  goto L_10c5b6df;
L_10c5b71c:;
  /* 10c5b71c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10c5b723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b726 pop edi */
  EDI = (pop32());
  /* 10c5b727 pop esi */
  ESI = (pop32());
  /* 10c5b728 pop ebx */
  EBX = (pop32());
  /* 10c5b729 ret  */
  ESPCHK(0x10c5b6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b756 @ 0x10c5b756 (24 bytes, 10 insns) */
void f_10c5b756(void) {
  FTRACE(0x10c5b756u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b756 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5b757 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5b758 mov ebx, 0x10c7d3b8 */
  EBX = (0x10c7d3b8u);
  /* 10c5b75d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5b760 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10c5b763 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10c5b766 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10c5b769 pop ecx */
  ECX = (pop32());
  /* 10c5b76a pop ebx */
  EBX = (pop32());
  /* 10c5b76b ret 4 */
  ESPCHK(0x10c5b756u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b835 @ 0x10c5b835 (27 bytes, 11 insns) */
void f_10c5b835(void) {
  FTRACE(0x10c5b835u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b835 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b836 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c5b83a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10c5b83c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c5b83f push eax */
  push32((uint32_t)(EAX));
  /* 10c5b840 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c5b843 push eax */
  push32((uint32_t)(EAX));
  /* 10c5b844 call 0x10c5b6c2 */
  push32(0x10c5b849u); f_10c5b6c2();
  /* 10c5b849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b84c pop ebp */
  EBP = (pop32());
  /* 10c5b84d ret 4 */
  ESPCHK(0x10c5b835u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b850 @ 0x10c5b850 (482 bytes, 138 insns) */
void f_10c5b850(void) {
  FTRACE(0x10c5b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5b850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5b851 mov ebp, esp */
  EBP = (ESP);
  /* 10c5b853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b856 push esi */
  push32((uint32_t)(ESI));
  /* 10c5b857 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10c5b85e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10c5b860 call 0x10c56070 */
  push32(0x10c5b865u); f_10c56070();
  /* 10c5b865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b868 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c5b86f jmp 0x10c5b87a */
  goto L_10c5b87a;
L_10c5b871:;
  /* 10c5b871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b874 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b877 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c5b87a:;
  /* 10c5b87a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b87e jge 0x10c5ba20 */
  if ((C.sf==C.of)) goto L_10c5ba20;
  /* 10c5b884 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b887 cmp dword ptr [ecx*4 + 0x10c7fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c7fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b88f je 0x10c5b986 */
  if (C.zf) goto L_10c5b986;
  /* 10c5b895 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b898 mov eax, dword ptr [edx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c5b89f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5b8a2 jmp 0x10c5b8ad */
  goto L_10c5b8ad;
L_10c5b8a4:;
  /* 10c5b8a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b8a7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b8aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5b8ad:;
  /* 10c5b8ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b8b0 mov eax, dword ptr [edx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c5b8b7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b8bc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b8bf jae 0x10c5b976 */
  if (!C.cf) goto L_10c5b976;
  /* 10c5b8c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b8c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c5b8cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b8cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5b8d1 jne 0x10c5b971 */
  if (!C.zf) goto L_10c5b971;
  /* 10c5b8d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b8da cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b8de jne 0x10c5b919 */
  if (!C.zf) goto L_10c5b919;
  /* 10c5b8e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c5b8e2 call 0x10c56070 */
  push32(0x10c5b8e7u); f_10c56070();
  /* 10c5b8e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b8ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b8ed cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b8f1 jne 0x10c5b90f */
  if (!C.zf) goto L_10c5b90f;
  /* 10c5b8f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b8f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b8f9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5b8fa call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c5b900u);
  /* 10c5b900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b903 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5b906 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b90c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10c5b90f:;
  /* 10c5b90f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c5b911 call 0x10c56110 */
  push32(0x10c5b916u); f_10c56110();
  /* 10c5b916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5b919:;
  /* 10c5b919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b91c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b91f push eax */
  push32((uint32_t)(EAX));
  /* 10c5b920 call dword ptr [0x10c802c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c0))), 0x10c5b926u);
  /* 10c5b926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b929 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c5b92d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5b930 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5b932 je 0x10c5b946 */
  if (C.zf) goto L_10c5b946;
  /* 10c5b934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b937 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b93a push eax */
  push32((uint32_t)(EAX));
  /* 10c5b93b call dword ptr [0x10c802c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c4))), 0x10c5b941u);
  /* 10c5b941 jmp 0x10c5b8a4 */
  goto L_10c5b8a4;
L_10c5b946:;
  /* 10c5b946 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b949 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c5b94f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b952 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5b955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b95b sub eax, dword ptr [edx*4 + 0x10c7fde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10c7fde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5b962 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5b963 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10c5b968 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5b96a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b96c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5b96f jmp 0x10c5b976 */
  goto L_10c5b976;
L_10c5b971:;
  /* 10c5b971 jmp 0x10c5b8a4 */
  goto L_10c5b8a4;
L_10c5b976:;
  /* 10c5b976 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b97a je 0x10c5b981 */
  if (C.zf) goto L_10c5b981;
  /* 10c5b97c jmp 0x10c5ba20 */
  goto L_10c5ba20;
L_10c5b981:;
  /* 10c5b981 jmp 0x10c5ba1b */
  goto L_10c5ba1b;
L_10c5b986:;
  /* 10c5b986 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10c5b988 push 0x10c79f34 */
  push32((uint32_t)(0x10c79f34u));
  /* 10c5b98d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5b98f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c5b994 call 0x10c52670 */
  push32(0x10c5b999u); f_10c52670();
  /* 10c5b999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b99c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5b99f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b9a3 je 0x10c5ba19 */
  if (C.zf) goto L_10c5ba19;
  /* 10c5b9a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b9a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b9ab mov dword ptr [eax*4 + 0x10c7fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10c7fde0), (ECX));
  /* 10c5b9b2 mov edx, dword ptr [0x10c7ff1c] */
  EDX = (r32((uint32_t)(0x10c7ff1c)));
  /* 10c5b9b8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b9bb mov dword ptr [0x10c7ff1c], edx */
  w32((uint32_t)(0x10c7ff1c), (EDX));
  /* 10c5b9c1 jmp 0x10c5b9cc */
  goto L_10c5b9cc;
L_10c5b9c3:;
  /* 10c5b9c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b9c6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b9c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5b9cc:;
  /* 10c5b9cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5b9cf mov edx, dword ptr [ecx*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5b9d6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5b9dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5b9df jae 0x10c5ba04 */
  if (!C.cf) goto L_10c5ba04;
  /* 10c5b9e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b9e4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c5b9e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b9eb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c5b9f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b9f4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c5b9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5b9fb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c5ba02 jmp 0x10c5b9c3 */
  goto L_10c5b9c3;
L_10c5ba04:;
  /* 10c5ba04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5ba07 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5ba0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5ba0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ba10 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ba11 call 0x10c5bd60 */
  push32(0x10c5ba16u); f_10c5bd60();
  /* 10c5ba16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5ba19:;
  /* 10c5ba19 jmp 0x10c5ba20 */
  goto L_10c5ba20;
L_10c5ba1b:;
  /* 10c5ba1b jmp 0x10c5b871 */
  goto L_10c5b871;
L_10c5ba20:;
  /* 10c5ba20 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10c5ba22 call 0x10c56110 */
  push32(0x10c5ba27u); f_10c56110();
  /* 10c5ba27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ba2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ba2d pop esi */
  ESI = (pop32());
  /* 10c5ba2e mov esp, ebp */
  ESP = (EBP);
  /* 10c5ba30 pop ebp */
  EBP = (pop32());
  /* 10c5ba31 ret  */
  ESPCHK(0x10c5b850u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10c5ba40 (183 bytes, 57 insns) */
void f_10c5ba40(void) {
  FTRACE(0x10c5ba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ba40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ba41 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ba43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ba44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ba47 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ba4d jae 0x10c5bada */
  if (!C.cf) goto L_10c5bada;
  /* 10c5ba53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ba56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5ba59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ba5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5ba5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5ba62 mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5ba69 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ba6d jne 0x10c5bada */
  if (!C.zf) goto L_10c5bada;
  /* 10c5ba6f cmp dword ptr [0x10c7e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ba76 jne 0x10c5baba */
  if (!C.zf) goto L_10c5baba;
  /* 10c5ba78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ba7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5ba7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ba82 je 0x10c5ba92 */
  if (C.zf) goto L_10c5ba92;
  /* 10c5ba84 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ba88 je 0x10c5baa0 */
  if (C.zf) goto L_10c5baa0;
  /* 10c5ba8a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ba8e je 0x10c5baae */
  if (C.zf) goto L_10c5baae;
  /* 10c5ba90 jmp 0x10c5baba */
  goto L_10c5baba;
L_10c5ba92:;
  /* 10c5ba92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ba95 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ba96 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10c5ba98 call dword ptr [0x10c80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80304))), 0x10c5ba9eu);
  /* 10c5ba9e jmp 0x10c5baba */
  goto L_10c5baba;
L_10c5baa0:;
  /* 10c5baa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5baa3 push eax */
  push32((uint32_t)(EAX));
  /* 10c5baa4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c5baa6 call dword ptr [0x10c80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80304))), 0x10c5baacu);
  /* 10c5baac jmp 0x10c5baba */
  goto L_10c5baba;
L_10c5baae:;
  /* 10c5baae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5bab1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bab2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c5bab4 call dword ptr [0x10c80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80304))), 0x10c5babau);
L_10c5baba:;
  /* 10c5baba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5babd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c5bac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bac3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bac6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bac9 mov ecx, dword ptr [edx*4 + 0x10c7fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c5bad0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5bad3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10c5bad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bad8 jmp 0x10c5baf3 */
  goto L_10c5baf3;
L_10c5bada:;
  /* 10c5bada call 0x10c5a540 */
  push32(0x10c5badfu); f_10c5a540();
  /* 10c5badf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5bae5 call 0x10c5a550 */
  push32(0x10c5baeau); f_10c5a550();
  /* 10c5baea mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5baf0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c5baf3:;
  /* 10c5baf3 mov esp, ebp */
  ESP = (EBP);
  /* 10c5baf5 pop ebp */
  EBP = (pop32());
  /* 10c5baf6 ret  */
  ESPCHK(0x10c5ba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x10c5bb00 (216 bytes, 63 insns) */
void f_10c5bb00(void) {
  FTRACE(0x10c5bb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bb00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bb01 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bb03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb07 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bb0d jae 0x10c5bbbb */
  if (!C.cf) goto L_10c5bbbb;
  /* 10c5bb13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5bb19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5bb1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bb22 mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5bb29 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5bb2e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bb31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5bb33 je 0x10c5bbbb */
  if (C.zf) goto L_10c5bbbb;
  /* 10c5bb39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb3c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c5bb3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb42 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bb45 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bb48 mov ecx, dword ptr [edx*4 + 0x10c7fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c5bb4f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bb53 je 0x10c5bbbb */
  if (C.zf) goto L_10c5bbbb;
  /* 10c5bb55 cmp dword ptr [0x10c7e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bb5c jne 0x10c5bb9a */
  if (!C.zf) goto L_10c5bb9a;
  /* 10c5bb5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb61 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5bb64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bb68 je 0x10c5bb78 */
  if (C.zf) goto L_10c5bb78;
  /* 10c5bb6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bb6e je 0x10c5bb84 */
  if (C.zf) goto L_10c5bb84;
  /* 10c5bb70 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bb74 je 0x10c5bb90 */
  if (C.zf) goto L_10c5bb90;
  /* 10c5bb76 jmp 0x10c5bb9a */
  goto L_10c5bb9a;
L_10c5bb78:;
  /* 10c5bb78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5bb7a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10c5bb7c call dword ptr [0x10c80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80304))), 0x10c5bb82u);
  /* 10c5bb82 jmp 0x10c5bb9a */
  goto L_10c5bb9a;
L_10c5bb84:;
  /* 10c5bb84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5bb86 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c5bb88 call dword ptr [0x10c80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80304))), 0x10c5bb8eu);
  /* 10c5bb8e jmp 0x10c5bb9a */
  goto L_10c5bb9a;
L_10c5bb90:;
  /* 10c5bb90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5bb92 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c5bb94 call dword ptr [0x10c80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80304))), 0x10c5bb9au);
L_10c5bb9a:;
  /* 10c5bb9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bb9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5bba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bba3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bba6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bba9 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5bbb0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10c5bbb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bbb9 jmp 0x10c5bbd4 */
  goto L_10c5bbd4;
L_10c5bbbb:;
  /* 10c5bbbb call 0x10c5a540 */
  push32(0x10c5bbc0u); f_10c5a540();
  /* 10c5bbc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5bbc6 call 0x10c5a550 */
  push32(0x10c5bbcbu); f_10c5a550();
  /* 10c5bbcb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5bbd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c5bbd4:;
  /* 10c5bbd4 mov esp, ebp */
  ESP = (EBP);
  /* 10c5bbd6 pop ebp */
  EBP = (pop32());
  /* 10c5bbd7 ret  */
  ESPCHK(0x10c5bb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbe0 @ 0x10c5bbe0 (102 bytes, 30 insns) */
void f_10c5bbe0(void) {
  FTRACE(0x10c5bbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bbe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bbe6 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bbec jae 0x10c5bc2b */
  if (!C.cf) goto L_10c5bc2b;
  /* 10c5bbee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bbf1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5bbf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bbf7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5bbfa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bbfd mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5bc04 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5bc09 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bc0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5bc0e je 0x10c5bc2b */
  if (C.zf) goto L_10c5bc2b;
  /* 10c5bc10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bc13 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c5bc16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bc19 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bc1c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bc1f mov ecx, dword ptr [edx*4 + 0x10c7fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c5bc26 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10c5bc29 jmp 0x10c5bc44 */
  goto L_10c5bc44;
L_10c5bc2b:;
  /* 10c5bc2b call 0x10c5a540 */
  push32(0x10c5bc30u); f_10c5a540();
  /* 10c5bc30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5bc36 call 0x10c5a550 */
  push32(0x10c5bc3bu); f_10c5a550();
  /* 10c5bc3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5bc41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c5bc44:;
  /* 10c5bc44 pop ebp */
  EBP = (pop32());
  /* 10c5bc45 ret  */
  ESPCHK(0x10c5bbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x10c5bc50 (260 bytes, 83 insns) */
void f_10c5bc50(void) {
  FTRACE(0x10c5bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bc51 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bc53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5bc56 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c5bc5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5bc5d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bc60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5bc62 je 0x10c5bc6d */
  if (C.zf) goto L_10c5bc6d;
  /* 10c5bc64 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bc67 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c5bc6a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10c5bc6d:;
  /* 10c5bc6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5bc70 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5bc76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5bc78 je 0x10c5bc82 */
  if (C.zf) goto L_10c5bc82;
  /* 10c5bc7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bc7d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10c5bc7f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10c5bc82:;
  /* 10c5bc82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5bc85 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bc8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5bc8d je 0x10c5bc98 */
  if (C.zf) goto L_10c5bc98;
  /* 10c5bc8f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bc92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10c5bc95 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10c5bc98:;
  /* 10c5bc98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bc9b push eax */
  push32((uint32_t)(EAX));
  /* 10c5bc9c call dword ptr [0x10c8027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8027c))), 0x10c5bca2u);
  /* 10c5bca2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5bca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bca9 jne 0x10c5bcc2 */
  if (!C.zf) goto L_10c5bcc2;
  /* 10c5bcab call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c5bcb1u);
  /* 10c5bcb1 push eax */
  push32((uint32_t)(EAX));
  /* 10c5bcb2 call 0x10c5a4a0 */
  push32(0x10c5bcb7u); f_10c5a4a0();
  /* 10c5bcb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bcba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bcbd jmp 0x10c5bd50 */
  goto L_10c5bd50;
L_10c5bcc2:;
  /* 10c5bcc2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bcc6 jne 0x10c5bcd3 */
  if (!C.zf) goto L_10c5bcd3;
  /* 10c5bcc8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bccb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10c5bcce mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10c5bcd1 jmp 0x10c5bce2 */
  goto L_10c5bce2;
L_10c5bcd3:;
  /* 10c5bcd3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bcd7 jne 0x10c5bce2 */
  if (!C.zf) goto L_10c5bce2;
  /* 10c5bcd9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bcdc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10c5bcdf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10c5bce2:;
  /* 10c5bce2 call 0x10c5b850 */
  push32(0x10c5bce7u); f_10c5b850();
  /* 10c5bce7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5bcea cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bcee jne 0x10c5bd0b */
  if (!C.zf) goto L_10c5bd0b;
  /* 10c5bcf0 call 0x10c5a540 */
  push32(0x10c5bcf5u); f_10c5a540();
  /* 10c5bcf5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10c5bcfb call 0x10c5a550 */
  push32(0x10c5bd00u); f_10c5a550();
  /* 10c5bd00 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5bd06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bd09 jmp 0x10c5bd50 */
  goto L_10c5bd50;
L_10c5bd0b:;
  /* 10c5bd0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bd0e push eax */
  push32((uint32_t)(EAX));
  /* 10c5bd0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bd12 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bd13 call 0x10c5ba40 */
  push32(0x10c5bd18u); f_10c5ba40();
  /* 10c5bd18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bd1b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bd1e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10c5bd21 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10c5bd24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bd27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5bd2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bd2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bd30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bd33 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5bd3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c5bd3d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10c5bd41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bd44 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bd45 call 0x10c5bdf0 */
  push32(0x10c5bd4au); f_10c5bdf0();
  /* 10c5bd4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bd4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c5bd50:;
  /* 10c5bd50 mov esp, ebp */
  ESP = (EBP);
  /* 10c5bd52 pop ebp */
  EBP = (pop32());
  /* 10c5bd53 ret  */
  ESPCHK(0x10c5bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd60 @ 0x10c5bd60 (134 bytes, 44 insns) */
void f_10c5bd60(void) {
  FTRACE(0x10c5bd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bd60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bd61 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bd63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bd64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bd67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5bd6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bd6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bd70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bd73 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5bd7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bd7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5bd7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5bd82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bd86 jne 0x10c5bdc1 */
  if (!C.zf) goto L_10c5bdc1;
  /* 10c5bd88 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c5bd8a call 0x10c56070 */
  push32(0x10c5bd8fu); f_10c56070();
  /* 10c5bd8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bd92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5bd95 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bd99 jne 0x10c5bdb7 */
  if (!C.zf) goto L_10c5bdb7;
  /* 10c5bd9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5bd9e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bda1 push edx */
  push32((uint32_t)(EDX));
  /* 10c5bda2 call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c5bda8u);
  /* 10c5bda8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5bdab mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5bdae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bdb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5bdb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10c5bdb7:;
  /* 10c5bdb7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c5bdb9 call 0x10c56110 */
  push32(0x10c5bdbeu); f_10c56110();
  /* 10c5bdbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5bdc1:;
  /* 10c5bdc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bdc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5bdc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bdca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bdcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5bdd0 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5bdd7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10c5bddb push eax */
  push32((uint32_t)(EAX));
  /* 10c5bddc call dword ptr [0x10c802c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c0))), 0x10c5bde2u);
  /* 10c5bde2 mov esp, ebp */
  ESP = (EBP);
  /* 10c5bde4 pop ebp */
  EBP = (pop32());
  /* 10c5bde5 ret  */
  ESPCHK(0x10c5bd60u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10c5bdf0 (38 bytes, 13 insns) */
void f_10c5bdf0(void) {
  FTRACE(0x10c5bdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bdf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bdf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bdf6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5bdf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bdfc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bdff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5be02 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5be09 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10c5be0d push eax */
  push32((uint32_t)(EAX));
  /* 10c5be0e call dword ptr [0x10c802c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c4))), 0x10c5be14u);
  /* 10c5be14 pop ebp */
  EBP = (pop32());
  /* 10c5be15 ret  */
  ESPCHK(0x10c5bdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be20 @ 0x10c5be20 (218 bytes, 63 insns) */
void f_10c5be20(void) {
  FTRACE(0x10c5be20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5be20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5be21 mov ebp, esp */
  EBP = (ESP);
  /* 10c5be23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5be26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5be2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5be2f call 0x10c56070 */
  push32(0x10c5be34u); f_10c56070();
  /* 10c5be34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5be37 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10c5be3e jmp 0x10c5be49 */
  goto L_10c5be49;
L_10c5be40:;
  /* 10c5be40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5be43 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5be46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c5be49:;
  /* 10c5be49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5be4c cmp ecx, dword ptr [0x10c7fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5be52 jge 0x10c5bee9 */
  if ((C.sf==C.of)) goto L_10c5bee9;
  /* 10c5be58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5be5b mov eax, dword ptr [0x10c7e790] */
  EAX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5be60 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5be64 je 0x10c5bee4 */
  if (C.zf) goto L_10c5bee4;
  /* 10c5be66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5be69 mov edx, dword ptr [0x10c7e790] */
  EDX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5be6f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c5be72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5be75 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5be7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5be7d je 0x10c5bea1 */
  if (C.zf) goto L_10c5bea1;
  /* 10c5be7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5be82 mov eax, dword ptr [0x10c7e790] */
  EAX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5be87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c5be8a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5be8b call 0x10c5cc10 */
  push32(0x10c5be90u); f_10c5cc10();
  /* 10c5be90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5be93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5be96 je 0x10c5bea1 */
  if (C.zf) goto L_10c5bea1;
  /* 10c5be98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5be9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5be9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c5bea1:;
  /* 10c5bea1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bea5 jl 0x10c5bee4 */
  if ((C.sf!=C.of)) goto L_10c5bee4;
  /* 10c5bea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5beaa mov ecx, dword ptr [0x10c7e790] */
  ECX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5beb0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c5beb3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5beb6 push edx */
  push32((uint32_t)(EDX));
  /* 10c5beb7 call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c5bebdu);
  /* 10c5bebd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5bebf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bec2 mov ecx, dword ptr [0x10c7e790] */
  ECX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5bec8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c5becb push edx */
  push32((uint32_t)(EDX));
  /* 10c5becc call 0x10c53100 */
  push32(0x10c5bed1u); f_10c53100();
  /* 10c5bed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bed4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bed7 mov ecx, dword ptr [0x10c7e790] */
  ECX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5bedd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10c5bee4:;
  /* 10c5bee4 jmp 0x10c5be40 */
  goto L_10c5be40;
L_10c5bee9:;
  /* 10c5bee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5beeb call 0x10c56110 */
  push32(0x10c5bef0u); f_10c56110();
  /* 10c5bef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5bef6 mov esp, ebp */
  ESP = (EBP);
  /* 10c5bef8 pop ebp */
  EBP = (pop32());
  /* 10c5bef9 ret  */
  ESPCHK(0x10c5be20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x10c5bf00 (68 bytes, 26 insns) */
void f_10c5bf00(void) {
  FTRACE(0x10c5bf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bf00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bf01 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bf03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bf04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bf08 jne 0x10c5bf16 */
  if (!C.zf) goto L_10c5bf16;
  /* 10c5bf0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5bf0c call 0x10c5c070 */
  push32(0x10c5bf11u); f_10c5c070();
  /* 10c5bf11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bf14 jmp 0x10c5bf40 */
  goto L_10c5bf40;
L_10c5bf16:;
  /* 10c5bf16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bf19 push eax */
  push32((uint32_t)(EAX));
  /* 10c5bf1a call 0x10c5b480 */
  push32(0x10c5bf1fu); f_10c5b480();
  /* 10c5bf1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bf22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bf25 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bf26 call 0x10c5bf50 */
  push32(0x10c5bf2bu); f_10c5bf50();
  /* 10c5bf2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bf2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5bf31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bf34 push edx */
  push32((uint32_t)(EDX));
  /* 10c5bf35 call 0x10c5b4f0 */
  push32(0x10c5bf3au); f_10c5b4f0();
  /* 10c5bf3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bf3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5bf40:;
  /* 10c5bf40 mov esp, ebp */
  ESP = (EBP);
  /* 10c5bf42 pop ebp */
  EBP = (pop32());
  /* 10c5bf43 ret  */
  ESPCHK(0x10c5bf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x10c5bf50 (65 bytes, 26 insns) */
void f_10c5bf50(void) {
  FTRACE(0x10c5bf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bf50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bf51 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bf53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bf56 push eax */
  push32((uint32_t)(EAX));
  /* 10c5bf57 call 0x10c5bfa0 */
  push32(0x10c5bf5cu); f_10c5bfa0();
  /* 10c5bf5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bf5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5bf61 je 0x10c5bf68 */
  if (C.zf) goto L_10c5bf68;
  /* 10c5bf63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5bf66 jmp 0x10c5bf8f */
  goto L_10c5bf8f;
L_10c5bf68:;
  /* 10c5bf68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bf6b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5bf6e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5bf74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5bf76 je 0x10c5bf8d */
  if (C.zf) goto L_10c5bf8d;
  /* 10c5bf78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bf7b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5bf7e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bf7f call 0x10c5cd60 */
  push32(0x10c5bf84u); f_10c5cd60();
  /* 10c5bf84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bf87 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5bf89 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5bf8b jmp 0x10c5bf8f */
  goto L_10c5bf8f;
L_10c5bf8d:;
  /* 10c5bf8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5bf8f:;
  /* 10c5bf8f pop ebp */
  EBP = (pop32());
  /* 10c5bf90 ret  */
  ESPCHK(0x10c5bf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x10c5bfa0 (183 bytes, 62 insns) */
void f_10c5bfa0(void) {
  FTRACE(0x10c5bfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5bfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5bfa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5bfa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5bfa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5bfad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5bfb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5bfb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bfb6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5bfb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5bfbc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bfbf jne 0x10c5c03b */
  if (!C.zf) goto L_10c5c03b;
  /* 10c5bfc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bfc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5bfc7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5bfcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5bfcf je 0x10c5c03b */
  if (C.zf) goto L_10c5c03b;
  /* 10c5bfd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bfd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bfd7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10c5bfd9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5bfdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5bfdf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5bfe3 jle 0x10c5c03b */
  if ((C.zf||C.sf!=C.of)) goto L_10c5c03b;
  /* 10c5bfe5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5bfe8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5bfe9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bfec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5bfef push ecx */
  push32((uint32_t)(ECX));
  /* 10c5bff0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5bff3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c5bff6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5bff7 call 0x10c5af10 */
  push32(0x10c5bffcu); f_10c5af10();
  /* 10c5bffc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5bfff cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c002 jne 0x10c5c025 */
  if (!C.zf) goto L_10c5c025;
  /* 10c5c004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c007 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5c00a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5c010 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5c012 je 0x10c5c023 */
  if (C.zf) goto L_10c5c023;
  /* 10c5c014 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c017 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5c01a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5c01d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c020 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10c5c023:;
  /* 10c5c023 jmp 0x10c5c03b */
  goto L_10c5c03b;
L_10c5c025:;
  /* 10c5c025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c028 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5c02b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5c02e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c031 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c5c034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c5c03b:;
  /* 10c5c03b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c03e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c041 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c5c044 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5c046 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c049 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c5c050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c053 mov esp, ebp */
  ESP = (EBP);
  /* 10c5c055 pop ebp */
  EBP = (pop32());
  /* 10c5c056 ret  */
  ESPCHK(0x10c5bfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c060 @ 0x10c5c060 (15 bytes, 7 insns) */
void f_10c5c060(void) {
  FTRACE(0x10c5c060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c060 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c061 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c063 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5c065 call 0x10c5c070 */
  push32(0x10c5c06au); f_10c5c070();
  /* 10c5c06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c06d pop ebp */
  EBP = (pop32());
  /* 10c5c06e ret  */
  ESPCHK(0x10c5c060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x10c5c070 (319 bytes, 94 insns) */
void f_10c5c070(void) {
  FTRACE(0x10c5c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c070 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c071 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c076 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5c07d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5c084 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c086 call 0x10c56070 */
  push32(0x10c5c08bu); f_10c56070();
  /* 10c5c08b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c08e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c5c095 jmp 0x10c5c0a0 */
  goto L_10c5c0a0;
L_10c5c097:;
  /* 10c5c097 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c09a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c09d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c5c0a0:;
  /* 10c5c0a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c0a3 cmp ecx, dword ptr [0x10c7fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c0a9 jge 0x10c5c193 */
  if ((C.sf==C.of)) goto L_10c5c193;
  /* 10c5c0af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c0b2 mov eax, dword ptr [0x10c7e790] */
  EAX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c0b7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c0bb je 0x10c5c18e */
  if (C.zf) goto L_10c5c18e;
  /* 10c5c0c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c0c4 mov edx, dword ptr [0x10c7e790] */
  EDX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c0ca mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c5c0cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5c0d0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5c0d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5c0d8 je 0x10c5c18e */
  if (C.zf) goto L_10c5c18e;
  /* 10c5c0de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c0e1 mov eax, dword ptr [0x10c7e790] */
  EAX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c0e6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c5c0e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c0ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c0ed push edx */
  push32((uint32_t)(EDX));
  /* 10c5c0ee call 0x10c5b4c0 */
  push32(0x10c5c0f3u); f_10c5b4c0();
  /* 10c5c0f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c0f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c0f9 mov ecx, dword ptr [0x10c7e790] */
  ECX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c0ff mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c5c102 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c5c105 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c10c je 0x10c5c175 */
  if (C.zf) goto L_10c5c175;
  /* 10c5c10e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c112 jne 0x10c5c139 */
  if (!C.zf) goto L_10c5c139;
  /* 10c5c114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c117 mov edx, dword ptr [0x10c7e790] */
  EDX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c11d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c5c120 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c121 call 0x10c5bf50 */
  push32(0x10c5c126u); f_10c5bf50();
  /* 10c5c126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c129 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c12c je 0x10c5c137 */
  if (C.zf) goto L_10c5c137;
  /* 10c5c12e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c131 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c134 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5c137:;
  /* 10c5c137 jmp 0x10c5c175 */
  goto L_10c5c175;
L_10c5c139:;
  /* 10c5c139 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c13d jne 0x10c5c175 */
  if (!C.zf) goto L_10c5c175;
  /* 10c5c13f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c142 mov eax, dword ptr [0x10c7e790] */
  EAX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c147 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c5c14a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5c14d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5c150 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5c152 je 0x10c5c175 */
  if (C.zf) goto L_10c5c175;
  /* 10c5c154 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c157 mov ecx, dword ptr [0x10c7e790] */
  ECX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c15d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c5c160 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c161 call 0x10c5bf50 */
  push32(0x10c5c166u); f_10c5bf50();
  /* 10c5c166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c169 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c16c jne 0x10c5c175 */
  if (!C.zf) goto L_10c5c175;
  /* 10c5c16e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10c5c175:;
  /* 10c5c175 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c178 mov ecx, dword ptr [0x10c7e790] */
  ECX = (r32((uint32_t)(0x10c7e790)));
  /* 10c5c17e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c5c181 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c182 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c185 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c186 call 0x10c5b530 */
  push32(0x10c5c18bu); f_10c5b530();
  /* 10c5c18b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5c18e:;
  /* 10c5c18e jmp 0x10c5c097 */
  goto L_10c5c097;
L_10c5c193:;
  /* 10c5c193 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c195 call 0x10c56110 */
  push32(0x10c5c19au); f_10c56110();
  /* 10c5c19a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c19d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c1a1 jne 0x10c5c1a8 */
  if (!C.zf) goto L_10c5c1a8;
  /* 10c5c1a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c1a6 jmp 0x10c5c1ab */
  goto L_10c5c1ab;
L_10c5c1a8:;
  /* 10c5c1a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c5c1ab:;
  /* 10c5c1ab mov esp, ebp */
  ESP = (EBP);
  /* 10c5c1ad pop ebp */
  EBP = (pop32());
  /* 10c5c1ae ret  */
  ESPCHK(0x10c5c070u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10c5c1b0 (15 bytes, 7 insns) */
void f_10c5c1b0(void) {
  FTRACE(0x10c5c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c1b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c1b5 call 0x10c515e0 */
  push32(0x10c5c1bau); f_10c515e0();
  /* 10c5c1ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c1bd pop ebp */
  EBP = (pop32());
  /* 10c5c1be ret  */
  ESPCHK(0x10c5c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x10c5c1c0 (1007 bytes, 269 insns) */
void f_10c5c1c0(void) {
  FTRACE(0x10c5c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c1c3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c1c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c1cd jl 0x10c5c1d5 */
  if ((C.sf!=C.of)) goto L_10c5c1d5;
  /* 10c5c1cf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c1d3 jle 0x10c5c1dc */
  if ((C.zf||C.sf!=C.of)) goto L_10c5c1dc;
L_10c5c1d5:;
  /* 10c5c1d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c1d7 jmp 0x10c5c5ab */
  goto L_10c5c5ab;
L_10c5c1dc:;
  /* 10c5c1dc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5c1de call 0x10c56070 */
  push32(0x10c5c1e3u); f_10c56070();
  /* 10c5c1e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c1e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c5c1ed mov eax, dword ptr [0x10c7e77c] */
  EAX = (r32((uint32_t)(0x10c7e77c)));
  /* 10c5c1f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c1f5 mov dword ptr [0x10c7e77c], eax */
  w32((uint32_t)(0x10c7e77c), (EAX));
L_10c5c1fa:;
  /* 10c5c1fa cmp dword ptr [0x10c7e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c201 je 0x10c5c20d */
  if (C.zf) goto L_10c5c20d;
  /* 10c5c203 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5c205 call dword ptr [0x10c802e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802e8))), 0x10c5c20bu);
  /* 10c5c20b jmp 0x10c5c1fa */
  goto L_10c5c1fa;
L_10c5c20d:;
  /* 10c5c20d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c211 je 0x10c5c251 */
  if (C.zf) goto L_10c5c251;
  /* 10c5c213 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c217 je 0x10c5c231 */
  if (C.zf) goto L_10c5c231;
  /* 10c5c219 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c21c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c220 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c221 call 0x10c5c5b0 */
  push32(0x10c5c226u); f_10c5c5b0();
  /* 10c5c226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c229 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10c5c22f jmp 0x10c5c243 */
  goto L_10c5c243;
L_10c5c231:;
  /* 10c5c231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c234 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c237 mov ecx, dword ptr [eax + 0x10c7d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10c7d4dc)));
  /* 10c5c23d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10c5c243:;
  /* 10c5c243 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10c5c249 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5c24c jmp 0x10c5c58b */
  goto L_10c5c58b;
L_10c5c251:;
  /* 10c5c251 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10c5c258 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c5c25f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c263 je 0x10c5c583 */
  if (C.zf) goto L_10c5c583;
  /* 10c5c269 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c26c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5c26f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c272 jne 0x10c5c494 */
  if (!C.zf) goto L_10c5c494;
  /* 10c5c278 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c27b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c5c27f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c282 jne 0x10c5c494 */
  if (!C.zf) goto L_10c5c494;
  /* 10c5c288 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c28b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10c5c28f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c292 jne 0x10c5c494 */
  if (!C.zf) goto L_10c5c494;
  /* 10c5c298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c29b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10c5c2a1:;
  /* 10c5c2a1 push 0x10c79f84 */
  push32((uint32_t)(0x10c79f84u));
  /* 10c5c2a6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c5c2ac push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c2ad call 0x10c5e410 */
  push32(0x10c5c2b2u); f_10c5e410();
  /* 10c5c2b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c2b5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10c5c2bb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c2c2 je 0x10c5c2ed */
  if (C.zf) goto L_10c5c2ed;
  /* 10c5c2c4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c2ca sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c2d0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10c5c2d6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c2dd je 0x10c5c2ed */
  if (C.zf) goto L_10c5c2ed;
  /* 10c5c2df mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c2e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5c2e8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c2eb jne 0x10c5c313 */
  if (!C.zf) goto L_10c5c313;
L_10c5c2ed:;
  /* 10c5c2ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c2f1 je 0x10c5c30c */
  if (C.zf) goto L_10c5c30c;
  /* 10c5c2f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5c2f5 call 0x10c56110 */
  push32(0x10c5c2fau); f_10c56110();
  /* 10c5c2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c2fd mov edx, dword ptr [0x10c7e77c] */
  EDX = (r32((uint32_t)(0x10c7e77c)));
  /* 10c5c303 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c306 mov dword ptr [0x10c7e77c], edx */
  w32((uint32_t)(0x10c7e77c), (EDX));
L_10c5c30c:;
  /* 10c5c30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c30e jmp 0x10c5c5ab */
  goto L_10c5c5ab;
L_10c5c313:;
  /* 10c5c313 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c5c31a jmp 0x10c5c325 */
  goto L_10c5c325;
L_10c5c31c:;
  /* 10c5c31c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c31f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c322 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c5c325:;
  /* 10c5c325 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c329 jg 0x10c5c373 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5c373;
  /* 10c5c32b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c5c331 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c332 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c5c338 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c339 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c33c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c33f mov ecx, dword ptr [eax + 0x10c7d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10c7d4d8)));
  /* 10c5c345 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c346 call 0x10c5e3d0 */
  push32(0x10c5c34bu); f_10c5e3d0();
  /* 10c5c34b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c34e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c350 jne 0x10c5c371 */
  if (!C.zf) goto L_10c5c371;
  /* 10c5c352 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c355 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c358 mov eax, dword ptr [edx + 0x10c7d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10c7d4d8)));
  /* 10c5c35e push eax */
  push32((uint32_t)(EAX));
  /* 10c5c35f call 0x10c554a0 */
  push32(0x10c5c364u); f_10c554a0();
  /* 10c5c364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c367 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c36d jne 0x10c5c371 */
  if (!C.zf) goto L_10c5c371;
  /* 10c5c36f jmp 0x10c5c373 */
  goto L_10c5c373;
L_10c5c371:;
  /* 10c5c371 jmp 0x10c5c31c */
  goto L_10c5c31c;
L_10c5c373:;
  /* 10c5c373 push 0x10c79f80 */
  push32((uint32_t)(0x10c79f80u));
  /* 10c5c378 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c37e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c381 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10c5c387 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c38d push edx */
  push32((uint32_t)(EDX));
  /* 10c5c38e call 0x10c5e390 */
  push32(0x10c5c393u); f_10c5e390();
  /* 10c5c393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c396 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10c5c39c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c3a3 jne 0x10c5c3d9 */
  if (!C.zf) goto L_10c5c3d9;
  /* 10c5c3a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c3ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5c3ae cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c3b1 je 0x10c5c3d9 */
  if (C.zf) goto L_10c5c3d9;
  /* 10c5c3b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c3b7 je 0x10c5c3d2 */
  if (C.zf) goto L_10c5c3d2;
  /* 10c5c3b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5c3bb call 0x10c56110 */
  push32(0x10c5c3c0u); f_10c56110();
  /* 10c5c3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c3c3 mov edx, dword ptr [0x10c7e77c] */
  EDX = (r32((uint32_t)(0x10c7e77c)));
  /* 10c5c3c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c3cc mov dword ptr [0x10c7e77c], edx */
  w32((uint32_t)(0x10c7e77c), (EDX));
L_10c5c3d2:;
  /* 10c5c3d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c3d4 jmp 0x10c5c5ab */
  goto L_10c5c5ab;
L_10c5c3d9:;
  /* 10c5c3d9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c3dd jg 0x10c5c42a */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5c42a;
  /* 10c5c3df mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c5c3e5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c3e6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c3ec push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c3ed lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10c5c3f3 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c3f4 call 0x10c55e90 */
  push32(0x10c5c3f9u); f_10c55e90();
  /* 10c5c3f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c3fc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c5c402 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10c5c40a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10c5c410 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c411 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c414 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c415 call 0x10c5c5b0 */
  push32(0x10c5c41au); f_10c5c5b0();
  /* 10c5c41a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c41f je 0x10c5c42a */
  if (C.zf) goto L_10c5c42a;
  /* 10c5c421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c427 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c5c42a:;
  /* 10c5c42a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c430 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c436 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10c5c43c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c5c442 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5c445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c447 je 0x10c5c458 */
  if (C.zf) goto L_10c5c458;
  /* 10c5c449 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c5c44f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c452 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10c5c458:;
  /* 10c5c458 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c5c45e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5c461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c463 jne 0x10c5c2a1 */
  if (!C.zf) goto L_10c5c2a1;
  /* 10c5c469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c46d je 0x10c5c47c */
  if (C.zf) goto L_10c5c47c;
  /* 10c5c46f call 0x10c5c750 */
  push32(0x10c5c474u); f_10c5c750();
  /* 10c5c474 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10c5c47a jmp 0x10c5c486 */
  goto L_10c5c486;
L_10c5c47c:;
  /* 10c5c47c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10c5c486:;
  /* 10c5c486 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10c5c48c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5c48f jmp 0x10c5c581 */
  goto L_10c5c581;
L_10c5c494:;
  /* 10c5c494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c497 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c498 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5c49a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5c49c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10c5c4a2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c4a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c4a7 call 0x10c5c850 */
  push32(0x10c5c4acu); f_10c5c850();
  /* 10c5c4ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c4af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5c4b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c4b6 je 0x10c5c581 */
  if (C.zf) goto L_10c5c581;
  /* 10c5c4bc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5c4c3 jmp 0x10c5c4ce */
  goto L_10c5c4ce;
L_10c5c4c5:;
  /* 10c5c4c5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c4c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c4cb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c5c4ce:;
  /* 10c5c4ce cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c4d2 jg 0x10c5c530 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5c530;
  /* 10c5c4d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c4d8 je 0x10c5c52e */
  if (C.zf) goto L_10c5c52e;
  /* 10c5c4da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c4dd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c4e0 mov ecx, dword ptr [eax + 0x10c7d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10c7d4dc)));
  /* 10c5c4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c4e7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10c5c4ed push edx */
  push32((uint32_t)(EDX));
  /* 10c5c4ee call 0x10c5e300 */
  push32(0x10c5c4f3u); f_10c5e300();
  /* 10c5c4f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c4f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c4f8 je 0x10c5c525 */
  if (C.zf) goto L_10c5c525;
  /* 10c5c4fa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10c5c500 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c501 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5c504 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c505 call 0x10c5c5b0 */
  push32(0x10c5c50au); f_10c5c5b0();
  /* 10c5c50a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c50f je 0x10c5c51c */
  if (C.zf) goto L_10c5c51c;
  /* 10c5c511 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c514 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c517 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c5c51a jmp 0x10c5c523 */
  goto L_10c5c523;
L_10c5c51c:;
  /* 10c5c51c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10c5c523:;
  /* 10c5c523 jmp 0x10c5c52e */
  goto L_10c5c52e;
L_10c5c525:;
  /* 10c5c525 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c528 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c52b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c5c52e:;
  /* 10c5c52e jmp 0x10c5c4c5 */
  goto L_10c5c4c5;
L_10c5c530:;
  /* 10c5c530 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c534 je 0x10c5c55b */
  if (C.zf) goto L_10c5c55b;
  /* 10c5c536 call 0x10c5c750 */
  push32(0x10c5c53bu); f_10c5c750();
  /* 10c5c53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5c53e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c540 mov ecx, dword ptr [0x10c7d4dc] */
  ECX = (r32((uint32_t)(0x10c7d4dc)));
  /* 10c5c546 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c547 call 0x10c53100 */
  push32(0x10c5c54cu); f_10c53100();
  /* 10c5c54c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c54f mov dword ptr [0x10c7d4dc], 0 */
  w32((uint32_t)(0x10c7d4dc), (0x0u));
  /* 10c5c559 jmp 0x10c5c581 */
  goto L_10c5c581;
L_10c5c55b:;
  /* 10c5c55b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c55f je 0x10c5c56e */
  if (C.zf) goto L_10c5c56e;
  /* 10c5c561 call 0x10c5c750 */
  push32(0x10c5c566u); f_10c5c750();
  /* 10c5c566 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10c5c56c jmp 0x10c5c578 */
  goto L_10c5c578;
L_10c5c56e:;
  /* 10c5c56e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10c5c578:;
  /* 10c5c578 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10c5c57e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c5c581:;
  /* 10c5c581 jmp 0x10c5c58b */
  goto L_10c5c58b;
L_10c5c583:;
  /* 10c5c583 call 0x10c5c750 */
  push32(0x10c5c588u); f_10c5c750();
  /* 10c5c588 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c5c58b:;
  /* 10c5c58b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c58f je 0x10c5c5a8 */
  if (C.zf) goto L_10c5c5a8;
  /* 10c5c591 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5c593 call 0x10c56110 */
  push32(0x10c5c598u); f_10c56110();
  /* 10c5c598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c59b mov eax, dword ptr [0x10c7e77c] */
  EAX = (r32((uint32_t)(0x10c7e77c)));
  /* 10c5c5a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c5a3 mov dword ptr [0x10c7e77c], eax */
  w32((uint32_t)(0x10c7e77c), (EAX));
L_10c5c5a8:;
  /* 10c5c5a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c5c5ab:;
  /* 10c5c5ab mov esp, ebp */
  ESP = (EBP);
  /* 10c5c5ad pop ebp */
  EBP = (pop32());
  /* 10c5c5ae ret  */
  ESPCHK(0x10c5c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x10c5c5b0 (403 bytes, 117 insns) */
void f_10c5c5b0(void) {
  FTRACE(0x10c5c5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c5b3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c5b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c5bc push eax */
  push32((uint32_t)(EAX));
  /* 10c5c5bd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10c5c5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c5c4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10c5c5ca push edx */
  push32((uint32_t)(EDX));
  /* 10c5c5cb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10c5c5d1 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c5d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c5d6 call 0x10c5c850 */
  push32(0x10c5c5dbu); f_10c5c850();
  /* 10c5c5db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c5e0 jne 0x10c5c5e9 */
  if (!C.zf) goto L_10c5c5e9;
  /* 10c5c5e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c5e4 jmp 0x10c5c73f */
  goto L_10c5c73f;
L_10c5c5e9:;
  /* 10c5c5e9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10c5c5ee push 0x10c79f88 */
  push32((uint32_t)(0x10c79f88u));
  /* 10c5c5f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c5f5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10c5c5fb push edx */
  push32((uint32_t)(EDX));
  /* 10c5c5fc call 0x10c554a0 */
  push32(0x10c5c601u); f_10c554a0();
  /* 10c5c601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c604 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c607 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c608 call 0x10c52670 */
  push32(0x10c5c60du); f_10c52670();
  /* 10c5c60d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c610 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5c613 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c617 jne 0x10c5c620 */
  if (!C.zf) goto L_10c5c620;
  /* 10c5c619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c61b jmp 0x10c5c73f */
  goto L_10c5c73f;
L_10c5c620:;
  /* 10c5c620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c623 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c626 mov ecx, dword ptr [eax + 0x10c7d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10c7d4dc)));
  /* 10c5c62c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5c62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c632 mov eax, dword ptr [edx*4 + 0x10c7e5f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7e5f8)));
  /* 10c5c639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5c63c push 6 */
  push32((uint32_t)(0x6u));
  /* 10c5c63e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c641 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c644 add ecx, 0x10c7e648 */
  { uint32_t _a=(ECX),_b=(0x10c7e648u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c64a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c64b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10c5c64e push edx */
  push32((uint32_t)(EDX));
  /* 10c5c64f call 0x10c58f50 */
  push32(0x10c5c654u); f_10c58f50();
  /* 10c5c654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c657 mov eax, dword ptr [0x10c7e610] */
  EAX = (r32((uint32_t)(0x10c7e610)));
  /* 10c5c65c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c5c65f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10c5c665 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c666 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c669 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c66a call 0x10c55620 */
  push32(0x10c5c66fu); f_10c55620();
  /* 10c5c66f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c675 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c678 mov dword ptr [ecx + 0x10c7d4dc], eax */
  w32((uint32_t)(ECX + 0x10c7d4dc), (EAX));
  /* 10c5c67e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10c5c684 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5c68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c68d mov dword ptr [eax*4 + 0x10c7e5f8], edx */
  w32((uint32_t)(EAX*4 + 0x10c7e5f8), (EDX));
  /* 10c5c694 push 6 */
  push32((uint32_t)(0x6u));
  /* 10c5c696 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10c5c69c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c69d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c6a0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c6a3 add edx, 0x10c7e648 */
  { uint32_t _a=(EDX),_b=(0x10c7e648u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c6a9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c6aa call 0x10c58f50 */
  push32(0x10c5c6afu); f_10c58f50();
  /* 10c5c6af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c6b2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c6b6 jne 0x10c5c6c3 */
  if (!C.zf) goto L_10c5c6c3;
  /* 10c5c6b8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c6be mov dword ptr [0x10c7e610], eax */
  w32((uint32_t)(0x10c7e610), (EAX));
L_10c5c6c3:;
  /* 10c5c6c3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c6c7 jne 0x10c5c6d5 */
  if (!C.zf) goto L_10c5c6d5;
  /* 10c5c6c9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c5c6cf mov dword ptr [0x10c7e614], ecx */
  w32((uint32_t)(0x10c7e614), (ECX));
L_10c5c6d5:;
  /* 10c5c6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c6d8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c6db call dword ptr [edx + 0x10c7d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10c7d4e0))), 0x10c5c6e1u);
  /* 10c5c6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c6e3 je 0x10c5c71c */
  if (C.zf) goto L_10c5c71c;
  /* 10c5c6e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c6e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c6eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c6ee mov dword ptr [eax + 0x10c7d4dc], ecx */
  w32((uint32_t)(EAX + 0x10c7d4dc), (ECX));
  /* 10c5c6f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c6f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5c6f9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c6fa call 0x10c53100 */
  push32(0x10c5c6ffu); f_10c53100();
  /* 10c5c6ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c708 mov dword ptr [eax*4 + 0x10c7e5f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10c7e5f8), (ECX));
  /* 10c5c70f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5c712 mov dword ptr [0x10c7e610], edx */
  w32((uint32_t)(0x10c7e610), (EDX));
  /* 10c5c718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c71a jmp 0x10c5c73f */
  goto L_10c5c73f;
L_10c5c71c:;
  /* 10c5c71c cmp dword ptr [ebp - 0xc], 0x10c7d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10c7d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c723 je 0x10c5c733 */
  if (C.zf) goto L_10c5c733;
  /* 10c5c725 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c727 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5c72a push eax */
  push32((uint32_t)(EAX));
  /* 10c5c72b call 0x10c53100 */
  push32(0x10c5c730u); f_10c53100();
  /* 10c5c730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5c733:;
  /* 10c5c733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c736 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c739 mov eax, dword ptr [ecx + 0x10c7d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10c7d4dc)));
L_10c5c73f:;
  /* 10c5c73f mov esp, ebp */
  ESP = (EBP);
  /* 10c5c741 pop ebp */
  EBP = (pop32());
  /* 10c5c742 ret  */
  ESPCHK(0x10c5c5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x10c5c750 (256 bytes, 72 insns) */
void f_10c5c750(void) {
  FTRACE(0x10c5c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c750 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c751 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c756 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c5c75d cmp dword ptr [0x10c7d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c764 jne 0x10c5c784 */
  if (!C.zf) goto L_10c5c784;
  /* 10c5c766 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10c5c76b push 0x10c79f88 */
  push32((uint32_t)(0x10c79f88u));
  /* 10c5c770 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c772 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10c5c777 call 0x10c52670 */
  push32(0x10c5c77cu); f_10c52670();
  /* 10c5c77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c77f mov dword ptr [0x10c7d4dc], eax */
  w32((uint32_t)(0x10c7d4dc), (EAX));
L_10c5c784:;
  /* 10c5c784 mov eax, dword ptr [0x10c7d4dc] */
  EAX = (r32((uint32_t)(0x10c7d4dc)));
  /* 10c5c789 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c5c78c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c5c793 jmp 0x10c5c79e */
  goto L_10c5c79e;
L_10c5c795:;
  /* 10c5c795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c79b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5c79e:;
  /* 10c5c79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c7a1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c7a4 mov eax, dword ptr [edx + 0x10c7d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10c7d4dc)));
  /* 10c5c7aa push eax */
  push32((uint32_t)(EAX));
  /* 10c5c7ab push 0x10c79f94 */
  push32((uint32_t)(0x10c79f94u));
  /* 10c5c7b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c7b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c7b6 mov edx, dword ptr [ecx + 0x10c7d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10c7d4d8)));
  /* 10c5c7bc push edx */
  push32((uint32_t)(EDX));
  /* 10c5c7bd push 3 */
  push32((uint32_t)(0x3u));
  /* 10c5c7bf mov eax, dword ptr [0x10c7d4dc] */
  EAX = (r32((uint32_t)(0x10c7d4dc)));
  /* 10c5c7c4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c7c5 call 0x10c5c9f0 */
  push32(0x10c5c7cau); f_10c5c9f0();
  /* 10c5c7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c7cd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c7d1 jge 0x10c5c819 */
  if ((C.sf==C.of)) goto L_10c5c819;
  /* 10c5c7d3 push 0x10c79f80 */
  push32((uint32_t)(0x10c79f80u));
  /* 10c5c7d8 mov ecx, dword ptr [0x10c7d4dc] */
  ECX = (r32((uint32_t)(0x10c7d4dc)));
  /* 10c5c7de push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c7df call 0x10c55630 */
  push32(0x10c5c7e4u); f_10c55630();
  /* 10c5c7e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c7e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c7ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c7ed imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c7f0 mov eax, dword ptr [edx + 0x10c7d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10c7d4dc)));
  /* 10c5c7f6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c7f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5c7fa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5c7fd mov edx, dword ptr [ecx + 0x10c7d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10c7d4dc)));
  /* 10c5c803 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c804 call 0x10c5e300 */
  push32(0x10c5c809u); f_10c5e300();
  /* 10c5c809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c80c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c80e je 0x10c5c817 */
  if (C.zf) goto L_10c5c817;
  /* 10c5c810 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c5c817:;
  /* 10c5c817 jmp 0x10c5c847 */
  goto L_10c5c847;
L_10c5c819:;
  /* 10c5c819 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c81d jne 0x10c5c826 */
  if (!C.zf) goto L_10c5c826;
  /* 10c5c81f mov eax, dword ptr [0x10c7d4dc] */
  EAX = (r32((uint32_t)(0x10c7d4dc)));
  /* 10c5c824 jmp 0x10c5c84c */
  goto L_10c5c84c;
L_10c5c826:;
  /* 10c5c826 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5c828 mov eax, dword ptr [0x10c7d4dc] */
  EAX = (r32((uint32_t)(0x10c7d4dc)));
  /* 10c5c82d push eax */
  push32((uint32_t)(EAX));
  /* 10c5c82e call 0x10c53100 */
  push32(0x10c5c833u); f_10c53100();
  /* 10c5c833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c836 mov dword ptr [0x10c7d4dc], 0 */
  w32((uint32_t)(0x10c7d4dc), (0x0u));
  /* 10c5c840 mov eax, dword ptr [0x10c7d4f4] */
  EAX = (r32((uint32_t)(0x10c7d4f4)));
  /* 10c5c845 jmp 0x10c5c84c */
  goto L_10c5c84c;
L_10c5c847:;
  /* 10c5c847 jmp 0x10c5c795 */
  goto L_10c5c795;
L_10c5c84c:;
  /* 10c5c84c mov esp, ebp */
  ESP = (EBP);
  /* 10c5c84e pop ebp */
  EBP = (pop32());
  /* 10c5c84f ret  */
  ESPCHK(0x10c5c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x10c5c850 (388 bytes, 115 insns) */
void f_10c5c850(void) {
  FTRACE(0x10c5c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c851 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c853 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c859 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c85d jne 0x10c5c866 */
  if (!C.zf) goto L_10c5c866;
  /* 10c5c85f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c861 jmp 0x10c5c9d0 */
  goto L_10c5c9d0;
L_10c5c866:;
  /* 10c5c866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5c86c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c86f jne 0x10c5c8c0 */
  if (!C.zf) goto L_10c5c8c0;
  /* 10c5c871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c874 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c5c878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c87a jne 0x10c5c8c0 */
  if (!C.zf) goto L_10c5c8c0;
  /* 10c5c87c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c87f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10c5c882 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c885 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10c5c889 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c88d je 0x10c5c8a9 */
  if (C.zf) goto L_10c5c8a9;
  /* 10c5c88f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5c892 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10c5c897 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5c89a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10c5c8a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5c8a3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10c5c8a9:;
  /* 10c5c8a9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c8ad je 0x10c5c8b8 */
  if (C.zf) goto L_10c5c8b8;
  /* 10c5c8af mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5c8b2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c5c8b8:;
  /* 10c5c8b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c8bb jmp 0x10c5c9d0 */
  goto L_10c5c9d0;
L_10c5c8c0:;
  /* 10c5c8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c8c4 push 0x10c7d450 */
  push32((uint32_t)(0x10c7d450u));
  /* 10c5c8c9 call 0x10c5e300 */
  push32(0x10c5c8ceu); f_10c5e300();
  /* 10c5c8ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c8d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c8d3 je 0x10c5c988 */
  if (C.zf) goto L_10c5c988;
  /* 10c5c8d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c8dc push edx */
  push32((uint32_t)(EDX));
  /* 10c5c8dd push 0x10c7d3cc */
  push32((uint32_t)(0x10c7d3ccu));
  /* 10c5c8e2 call 0x10c5e300 */
  push32(0x10c5c8e7u); f_10c5e300();
  /* 10c5c8e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c8ec je 0x10c5c988 */
  if (C.zf) goto L_10c5c988;
  /* 10c5c8f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c8f5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c8f6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10c5c8fc push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c8fd call 0x10c5ca40 */
  push32(0x10c5c902u); f_10c5ca40();
  /* 10c5c902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c907 je 0x10c5c910 */
  if (C.zf) goto L_10c5c910;
  /* 10c5c909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c90b jmp 0x10c5c9d0 */
  goto L_10c5c9d0;
L_10c5c910:;
  /* 10c5c910 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10c5c916 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c917 push 0x10c7e620 */
  push32((uint32_t)(0x10c7e620u));
  /* 10c5c91c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10c5c922 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c923 call 0x10c5e450 */
  push32(0x10c5c928u); f_10c5e450();
  /* 10c5c928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c92b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5c92d jne 0x10c5c936 */
  if (!C.zf) goto L_10c5c936;
  /* 10c5c92f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c931 jmp 0x10c5c9d0 */
  goto L_10c5c9d0;
L_10c5c936:;
  /* 10c5c936 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5c938 mov cx, word ptr [0x10c7e624] */
  CX = (r16((uint32_t)(0x10c7e624)));
  /* 10c5c93f mov dword ptr [0x10c7e628], ecx */
  w32((uint32_t)(0x10c7e628), (ECX));
  /* 10c5c945 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10c5c94b push edx */
  push32((uint32_t)(EDX));
  /* 10c5c94c push 0x10c7d450 */
  push32((uint32_t)(0x10c7d450u));
  /* 10c5c951 call 0x10c5cba0 */
  push32(0x10c5c956u); f_10c5cba0();
  /* 10c5c956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c95c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5c95f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5c961 je 0x10c5c976 */
  if (C.zf) goto L_10c5c976;
  /* 10c5c963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5c966 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c967 push 0x10c7d3cc */
  push32((uint32_t)(0x10c7d3ccu));
  /* 10c5c96c call 0x10c55620 */
  push32(0x10c5c971u); f_10c55620();
  /* 10c5c971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c974 jmp 0x10c5c988 */
  goto L_10c5c988;
L_10c5c976:;
  /* 10c5c976 push 0x10c7d450 */
  push32((uint32_t)(0x10c7d450u));
  /* 10c5c97b push 0x10c7d3cc */
  push32((uint32_t)(0x10c7d3ccu));
  /* 10c5c980 call 0x10c55620 */
  push32(0x10c5c985u); f_10c55620();
  /* 10c5c985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5c988:;
  /* 10c5c988 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c98c je 0x10c5c9a1 */
  if (C.zf) goto L_10c5c9a1;
  /* 10c5c98e push 6 */
  push32((uint32_t)(0x6u));
  /* 10c5c990 push 0x10c7e620 */
  push32((uint32_t)(0x10c7e620u));
  /* 10c5c995 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5c998 push eax */
  push32((uint32_t)(EAX));
  /* 10c5c999 call 0x10c58f50 */
  push32(0x10c5c99eu); f_10c58f50();
  /* 10c5c99e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5c9a1:;
  /* 10c5c9a1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5c9a5 je 0x10c5c9ba */
  if (C.zf) goto L_10c5c9ba;
  /* 10c5c9a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c5c9a9 push 0x10c7e628 */
  push32((uint32_t)(0x10c7e628u));
  /* 10c5c9ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5c9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5c9b2 call 0x10c58f50 */
  push32(0x10c5c9b7u); f_10c58f50();
  /* 10c5c9b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5c9ba:;
  /* 10c5c9ba push 0x10c7d450 */
  push32((uint32_t)(0x10c7d450u));
  /* 10c5c9bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5c9c2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5c9c3 call 0x10c55620 */
  push32(0x10c5c9c8u); f_10c55620();
  /* 10c5c9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5c9cb mov eax, 0x10c7d450 */
  EAX = (0x10c7d450u);
L_10c5c9d0:;
  /* 10c5c9d0 mov esp, ebp */
  ESP = (EBP);
  /* 10c5c9d2 pop ebp */
  EBP = (pop32());
  /* 10c5c9d3 ret  */
  ESPCHK(0x10c5c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9e0 @ 0x10c5c9e0 (7 bytes, 5 insns) */
void f_10c5c9e0(void) {
  FTRACE(0x10c5c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c9e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5c9e5 pop ebp */
  EBP = (pop32());
  /* 10c5c9e6 ret  */
  ESPCHK(0x10c5c9e0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10c5c9f0 (79 bytes, 28 insns) */
void f_10c5c9f0(void) {
  FTRACE(0x10c5c9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5c9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5c9f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5c9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5c9f6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c5c9f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5c9fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5ca03 jmp 0x10c5ca0e */
  goto L_10c5ca0e;
L_10c5ca05:;
  /* 10c5ca05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ca08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca0b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c5ca0e:;
  /* 10c5ca0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ca11 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ca14 jge 0x10c5ca34 */
  if ((C.sf==C.of)) goto L_10c5ca34;
  /* 10c5ca16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ca19 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5ca1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ca22 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c5ca25 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ca26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ca29 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ca2a call 0x10c55630 */
  push32(0x10c5ca2fu); f_10c55630();
  /* 10c5ca2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca32 jmp 0x10c5ca05 */
  goto L_10c5ca05;
L_10c5ca34:;
  /* 10c5ca34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5ca3b mov esp, ebp */
  ESP = (EBP);
  /* 10c5ca3d pop ebp */
  EBP = (pop32());
  /* 10c5ca3e ret  */
  ESPCHK(0x10c5c9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x10c5ca40 (349 bytes, 122 insns) */
void f_10c5ca40(void) {
  FTRACE(0x10c5ca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ca40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ca41 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ca43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ca46 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10c5ca4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ca4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ca50 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ca51 call 0x10c563e0 */
  push32(0x10c5ca56u); f_10c563e0();
  /* 10c5ca56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ca5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5ca5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5ca61 jne 0x10c5ca6a */
  if (!C.zf) goto L_10c5ca6a;
  /* 10c5ca63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ca65 jmp 0x10c5cb99 */
  goto L_10c5cb99;
L_10c5ca6a:;
  /* 10c5ca6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ca6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5ca70 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ca73 jne 0x10c5caa0 */
  if (!C.zf) goto L_10c5caa0;
  /* 10c5ca75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ca78 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c5ca7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ca7e je 0x10c5caa0 */
  if (C.zf) goto L_10c5caa0;
  /* 10c5ca80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ca83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca86 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ca87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ca8a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca90 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ca91 call 0x10c55620 */
  push32(0x10c5ca96u); f_10c55620();
  /* 10c5ca96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ca99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ca9b jmp 0x10c5cb99 */
  goto L_10c5cb99;
L_10c5caa0:;
  /* 10c5caa0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5caa7 jmp 0x10c5cab2 */
  goto L_10c5cab2;
L_10c5caa9:;
  /* 10c5caa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5caac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5caaf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5cab2:;
  /* 10c5cab2 push 0x10c79f98 */
  push32((uint32_t)(0x10c79f98u));
  /* 10c5cab7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5caba push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cabb call 0x10c5e390 */
  push32(0x10c5cac0u); f_10c5e390();
  /* 10c5cac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cac3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5cac6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5caca jne 0x10c5cad4 */
  if (!C.zf) goto L_10c5cad4;
  /* 10c5cacc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cacf jmp 0x10c5cb99 */
  goto L_10c5cb99;
L_10c5cad4:;
  /* 10c5cad4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cad7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cada mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5cadc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10c5cadf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cae3 jne 0x10c5cb0a */
  if (!C.zf) goto L_10c5cb0a;
  /* 10c5cae5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cae9 jge 0x10c5cb0a */
  if ((C.sf==C.of)) goto L_10c5cb0a;
  /* 10c5caeb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5caef cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5caf2 je 0x10c5cb0a */
  if (C.zf) goto L_10c5cb0a;
  /* 10c5caf4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5caf7 push edx */
  push32((uint32_t)(EDX));
  /* 10c5caf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cafb push eax */
  push32((uint32_t)(EAX));
  /* 10c5cafc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5caff push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cb00 call 0x10c55e90 */
  push32(0x10c5cb05u); f_10c55e90();
  /* 10c5cb05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cb08 jmp 0x10c5cb70 */
  goto L_10c5cb70;
L_10c5cb0a:;
  /* 10c5cb0a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cb0e jne 0x10c5cb38 */
  if (!C.zf) goto L_10c5cb38;
  /* 10c5cb10 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cb14 jge 0x10c5cb38 */
  if ((C.sf==C.of)) goto L_10c5cb38;
  /* 10c5cb16 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5cb1a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cb1d je 0x10c5cb38 */
  if (C.zf) goto L_10c5cb38;
  /* 10c5cb1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cb22 push eax */
  push32((uint32_t)(EAX));
  /* 10c5cb23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cb26 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cb2a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cb2d push edx */
  push32((uint32_t)(EDX));
  /* 10c5cb2e call 0x10c55e90 */
  push32(0x10c5cb33u); f_10c55e90();
  /* 10c5cb33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cb36 jmp 0x10c5cb70 */
  goto L_10c5cb70;
L_10c5cb38:;
  /* 10c5cb38 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cb3c jne 0x10c5cb6b */
  if (!C.zf) goto L_10c5cb6b;
  /* 10c5cb3e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5cb42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cb44 je 0x10c5cb4f */
  if (C.zf) goto L_10c5cb4f;
  /* 10c5cb46 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5cb4a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cb4d jne 0x10c5cb6b */
  if (!C.zf) goto L_10c5cb6b;
L_10c5cb4f:;
  /* 10c5cb4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cb52 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cb53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cb56 push eax */
  push32((uint32_t)(EAX));
  /* 10c5cb57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cb5a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cb60 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cb61 call 0x10c55e90 */
  push32(0x10c5cb66u); f_10c55e90();
  /* 10c5cb66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cb69 jmp 0x10c5cb70 */
  goto L_10c5cb70;
L_10c5cb6b:;
  /* 10c5cb6b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cb6e jmp 0x10c5cb99 */
  goto L_10c5cb99;
L_10c5cb70:;
  /* 10c5cb70 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5cb74 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cb77 jne 0x10c5cb7b */
  if (!C.zf) goto L_10c5cb7b;
  /* 10c5cb79 jmp 0x10c5cb97 */
  goto L_10c5cb97;
L_10c5cb7b:;
  /* 10c5cb7b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5cb7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cb81 jne 0x10c5cb85 */
  if (!C.zf) goto L_10c5cb85;
  /* 10c5cb83 jmp 0x10c5cb97 */
  goto L_10c5cb97;
L_10c5cb85:;
  /* 10c5cb85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cb88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cb8b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10c5cb8f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c5cb92 jmp 0x10c5caa9 */
  goto L_10c5caa9;
L_10c5cb97:;
  /* 10c5cb97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5cb99:;
  /* 10c5cb99 mov esp, ebp */
  ESP = (EBP);
  /* 10c5cb9b pop ebp */
  EBP = (pop32());
  /* 10c5cb9c ret  */
  ESPCHK(0x10c5ca40u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10c5cba0 (101 bytes, 36 insns) */
void f_10c5cba0(void) {
  FTRACE(0x10c5cba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5cba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5cba1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5cba3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cba6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5cba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cbaa push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cbab call 0x10c55620 */
  push32(0x10c5cbb0u); f_10c55620();
  /* 10c5cbb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cbb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cbb6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10c5cbba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cbbc je 0x10c5cbd8 */
  if (C.zf) goto L_10c5cbd8;
  /* 10c5cbbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cbc1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cbc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cbc5 push 0x10c79fa0 */
  push32((uint32_t)(0x10c79fa0u));
  /* 10c5cbca push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cbcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cbcf push edx */
  push32((uint32_t)(EDX));
  /* 10c5cbd0 call 0x10c5c9f0 */
  push32(0x10c5cbd5u); f_10c5c9f0();
  /* 10c5cbd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5cbd8:;
  /* 10c5cbd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cbdb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10c5cbe2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5cbe4 je 0x10c5cc03 */
  if (C.zf) goto L_10c5cc03;
  /* 10c5cbe6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5cbe9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cbef push edx */
  push32((uint32_t)(EDX));
  /* 10c5cbf0 push 0x10c79f9c */
  push32((uint32_t)(0x10c79f9cu));
  /* 10c5cbf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cbf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cbfa push eax */
  push32((uint32_t)(EAX));
  /* 10c5cbfb call 0x10c5c9f0 */
  push32(0x10c5cc00u); f_10c5c9f0();
  /* 10c5cc00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5cc03:;
  /* 10c5cc03 pop ebp */
  EBP = (pop32());
  /* 10c5cc04 ret  */
  ESPCHK(0x10c5cba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x10c5cc10 (130 bytes, 50 insns) */
void f_10c5cc10(void) {
  FTRACE(0x10c5cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5cc11 mov ebp, esp */
  EBP = (ESP);
  /* 10c5cc13 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cc14 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5cc15 push esi */
  push32((uint32_t)(ESI));
  /* 10c5cc16 push edi */
  push32((uint32_t)(EDI));
  /* 10c5cc17 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c5cc1e:;
  /* 10c5cc1e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cc22 jne 0x10c5cc42 */
  if (!C.zf) goto L_10c5cc42;
  /* 10c5cc24 push 0x10c79fb0 */
  push32((uint32_t)(0x10c79fb0u));
  /* 10c5cc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5cc2b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10c5cc2d push 0x10c79fa4 */
  push32((uint32_t)(0x10c79fa4u));
  /* 10c5cc32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cc34 call 0x10c51730 */
  push32(0x10c5cc39u); f_10c51730();
  /* 10c5cc39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cc3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cc3f jne 0x10c5cc42 */
  if (!C.zf) goto L_10c5cc42;
  /* 10c5cc41 int3  */
  x86_unimpl("int3 @ 0x10c5cc41");
L_10c5cc42:;
  /* 10c5cc42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cc44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cc46 jne 0x10c5cc1e */
  if (!C.zf) goto L_10c5cc1e;
  /* 10c5cc48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cc4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5cc4e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5cc51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5cc53 je 0x10c5cc61 */
  if (C.zf) goto L_10c5cc61;
  /* 10c5cc55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cc58 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10c5cc5f jmp 0x10c5cc88 */
  goto L_10c5cc88;
L_10c5cc61:;
  /* 10c5cc61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cc64 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cc65 call 0x10c5b480 */
  push32(0x10c5cc6au); f_10c5b480();
  /* 10c5cc6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cc6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cc70 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cc71 call 0x10c5cca0 */
  push32(0x10c5cc76u); f_10c5cca0();
  /* 10c5cc76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cc79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5cc7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cc7f push eax */
  push32((uint32_t)(EAX));
  /* 10c5cc80 call 0x10c5b4f0 */
  push32(0x10c5cc85u); f_10c5b4f0();
  /* 10c5cc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5cc88:;
  /* 10c5cc88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cc8b pop edi */
  EDI = (pop32());
  /* 10c5cc8c pop esi */
  ESI = (pop32());
  /* 10c5cc8d pop ebx */
  EBX = (pop32());
  /* 10c5cc8e mov esp, ebp */
  ESP = (EBP);
  /* 10c5cc90 pop ebp */
  EBP = (pop32());
  /* 10c5cc91 ret  */
  ESPCHK(0x10c5cc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x10c5cca0 (190 bytes, 67 insns) */
void f_10c5cca0(void) {
  FTRACE(0x10c5cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5cca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5cca1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5cca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5cca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5cca7 push esi */
  push32((uint32_t)(ESI));
  /* 10c5cca8 push edi */
  push32((uint32_t)(EDI));
  /* 10c5cca9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c5ccb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ccb3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c5ccb6:;
  /* 10c5ccb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ccba jne 0x10c5ccda */
  if (!C.zf) goto L_10c5ccda;
  /* 10c5ccbc push 0x10c79e54 */
  push32((uint32_t)(0x10c79e54u));
  /* 10c5ccc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ccc3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10c5ccc5 push 0x10c79fa4 */
  push32((uint32_t)(0x10c79fa4u));
  /* 10c5ccca push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cccc call 0x10c51730 */
  push32(0x10c5ccd1u); f_10c51730();
  /* 10c5ccd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ccd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ccd7 jne 0x10c5ccda */
  if (!C.zf) goto L_10c5ccda;
  /* 10c5ccd9 int3  */
  x86_unimpl("int3 @ 0x10c5ccd9");
L_10c5ccda:;
  /* 10c5ccda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5ccdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5ccde jne 0x10c5ccb6 */
  if (!C.zf) goto L_10c5ccb6;
  /* 10c5cce0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cce3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c5cce6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cced je 0x10c5cd4a */
  if (C.zf) goto L_10c5cd4a;
  /* 10c5ccef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ccf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ccf3 call 0x10c5bfa0 */
  push32(0x10c5ccf8u); f_10c5bfa0();
  /* 10c5ccf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ccfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5ccfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cd01 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cd02 call 0x10c5f320 */
  push32(0x10c5cd07u); f_10c5f320();
  /* 10c5cd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cd0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cd0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5cd10 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cd11 call 0x10c5f1f0 */
  push32(0x10c5cd16u); f_10c5f1f0();
  /* 10c5cd16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cd19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cd1b jge 0x10c5cd26 */
  if ((C.sf==C.of)) goto L_10c5cd26;
  /* 10c5cd1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c5cd24 jmp 0x10c5cd4a */
  goto L_10c5cd4a;
L_10c5cd26:;
  /* 10c5cd26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cd29 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cd2d je 0x10c5cd4a */
  if (C.zf) goto L_10c5cd4a;
  /* 10c5cd2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cd31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cd34 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c5cd37 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cd38 call 0x10c53100 */
  push32(0x10c5cd3du); f_10c53100();
  /* 10c5cd3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cd40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cd43 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10c5cd4a:;
  /* 10c5cd4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5cd4d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10c5cd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cd57 pop edi */
  EDI = (pop32());
  /* 10c5cd58 pop esi */
  ESI = (pop32());
  /* 10c5cd59 pop ebx */
  EBX = (pop32());
  /* 10c5cd5a mov esp, ebp */
  ESP = (EBP);
  /* 10c5cd5c pop ebp */
  EBP = (pop32());
  /* 10c5cd5d ret  */
  ESPCHK(0x10c5cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x10c5cd60 (210 bytes, 63 insns) */
void f_10c5cd60(void) {
  FTRACE(0x10c5cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5cd61 mov ebp, esp */
  EBP = (ESP);
  /* 10c5cd63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cd64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cd67 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cd6d jae 0x10c5cd91 */
  if (!C.cf) goto L_10c5cd91;
  /* 10c5cd6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cd72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5cd75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cd78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5cd7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5cd7e mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5cd85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5cd8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cd8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5cd8f jne 0x10c5cda4 */
  if (!C.zf) goto L_10c5cda4;
L_10c5cd91:;
  /* 10c5cd91 call 0x10c5a540 */
  push32(0x10c5cd96u); f_10c5a540();
  /* 10c5cd96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5cd9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cd9f jmp 0x10c5ce2e */
  goto L_10c5ce2e;
L_10c5cda4:;
  /* 10c5cda4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cda7 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cda8 call 0x10c5bd60 */
  push32(0x10c5cdadu); f_10c5bd60();
  /* 10c5cdad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cdb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cdb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5cdb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cdb9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cdbc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5cdbf mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5cdc6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c5cdcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cdce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cdd0 je 0x10c5ce0d */
  if (C.zf) goto L_10c5ce0d;
  /* 10c5cdd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cdd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cdd6 call 0x10c5bbe0 */
  push32(0x10c5cddbu); f_10c5bbe0();
  /* 10c5cddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cdde push eax */
  push32((uint32_t)(EAX));
  /* 10c5cddf call dword ptr [0x10c8030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8030c))), 0x10c5cde5u);
  /* 10c5cde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5cde7 jne 0x10c5cdf4 */
  if (!C.zf) goto L_10c5cdf4;
  /* 10c5cde9 call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c5cdefu);
  /* 10c5cdef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5cdf2 jmp 0x10c5cdfb */
  goto L_10c5cdfb;
L_10c5cdf4:;
  /* 10c5cdf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c5cdfb:;
  /* 10c5cdfb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cdff jne 0x10c5ce03 */
  if (!C.zf) goto L_10c5ce03;
  /* 10c5ce01 jmp 0x10c5ce1f */
  goto L_10c5ce1f;
L_10c5ce03:;
  /* 10c5ce03 call 0x10c5a550 */
  push32(0x10c5ce08u); f_10c5a550();
  /* 10c5ce08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ce0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c5ce0d:;
  /* 10c5ce0d call 0x10c5a540 */
  push32(0x10c5ce12u); f_10c5a540();
  /* 10c5ce12 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5ce18 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c5ce1f:;
  /* 10c5ce1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ce22 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ce23 call 0x10c5bdf0 */
  push32(0x10c5ce28u); f_10c5bdf0();
  /* 10c5ce28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ce2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5ce2e:;
  /* 10c5ce2e mov esp, ebp */
  ESP = (EBP);
  /* 10c5ce30 pop ebp */
  EBP = (pop32());
  /* 10c5ce31 ret  */
  ESPCHK(0x10c5cd60u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10c5ce40 (219 bytes, 64 insns) */
void f_10c5ce40(void) {
  FTRACE(0x10c5ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ce41 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ce43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ce44 cmp dword ptr [0x10c7e60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ce4b je 0x10c5cee1 */
  if (C.zf) goto L_10c5cee1;
  /* 10c5ce51 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10c5ce53 push 0x10c79fc0 */
  push32((uint32_t)(0x10c79fc0u));
  /* 10c5ce58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5ce5a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10c5ce5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5ce61 call 0x10c52a80 */
  push32(0x10c5ce66u); f_10c52a80();
  /* 10c5ce66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ce69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5ce6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ce70 jne 0x10c5ce7c */
  if (!C.zf) goto L_10c5ce7c;
  /* 10c5ce72 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5ce77 jmp 0x10c5cf17 */
  goto L_10c5cf17;
L_10c5ce7c:;
  /* 10c5ce7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ce7f push eax */
  push32((uint32_t)(EAX));
  /* 10c5ce80 call 0x10c5cf20 */
  push32(0x10c5ce85u); f_10c5cf20();
  /* 10c5ce85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ce88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ce8a je 0x10c5cead */
  if (C.zf) goto L_10c5cead;
  /* 10c5ce8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ce8f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ce90 call 0x10c5d4b0 */
  push32(0x10c5ce95u); f_10c5d4b0();
  /* 10c5ce95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ce98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5ce9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ce9d push edx */
  push32((uint32_t)(EDX));
  /* 10c5ce9e call 0x10c53100 */
  push32(0x10c5cea3u); f_10c53100();
  /* 10c5cea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cea6 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5ceab jmp 0x10c5cf17 */
  goto L_10c5cf17;
L_10c5cead:;
  /* 10c5cead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ceb0 mov dword ptr [0x10c7dc98], eax */
  w32((uint32_t)(0x10c7dc98), (EAX));
  /* 10c5ceb5 mov ecx, dword ptr [0x10c7e62c] */
  ECX = (r32((uint32_t)(0x10c7e62c)));
  /* 10c5cebb push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cebc call 0x10c5d4b0 */
  push32(0x10c5cec1u); f_10c5d4b0();
  /* 10c5cec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cec4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cec6 mov edx, dword ptr [0x10c7e62c] */
  EDX = (r32((uint32_t)(0x10c7e62c)));
  /* 10c5cecc push edx */
  push32((uint32_t)(EDX));
  /* 10c5cecd call 0x10c53100 */
  push32(0x10c5ced2u); f_10c53100();
  /* 10c5ced2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ced5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ced8 mov dword ptr [0x10c7e62c], eax */
  w32((uint32_t)(0x10c7e62c), (EAX));
  /* 10c5cedd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cedf jmp 0x10c5cf17 */
  goto L_10c5cf17;
L_10c5cee1:;
  /* 10c5cee1 mov dword ptr [0x10c7dc98], 0x10c7dca0 */
  w32((uint32_t)(0x10c7dc98), (0x10c7dca0u));
  /* 10c5ceeb mov ecx, dword ptr [0x10c7e62c] */
  ECX = (r32((uint32_t)(0x10c7e62c)));
  /* 10c5cef1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5cef2 call 0x10c5d4b0 */
  push32(0x10c5cef7u); f_10c5d4b0();
  /* 10c5cef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cefa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5cefc mov edx, dword ptr [0x10c7e62c] */
  EDX = (r32((uint32_t)(0x10c7e62c)));
  /* 10c5cf02 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cf03 call 0x10c53100 */
  push32(0x10c5cf08u); f_10c53100();
  /* 10c5cf08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cf0b mov dword ptr [0x10c7e62c], 0 */
  w32((uint32_t)(0x10c7e62c), (0x0u));
  /* 10c5cf15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5cf17:;
  /* 10c5cf17 mov esp, ebp */
  ESP = (EBP);
  /* 10c5cf19 pop ebp */
  EBP = (pop32());
  /* 10c5cf1a ret  */
  ESPCHK(0x10c5ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x10c5cf20 (1423 bytes, 533 insns) */
void f_10c5cf20(void) {
  FTRACE(0x10c5cf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5cf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5cf21 mov ebp, esp */
  EBP = (ESP);
  /* 10c5cf23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5cf26 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c5cf2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cf2f mov ax, word ptr [0x10c7e666] */
  AX = (r16((uint32_t)(0x10c7e666)));
  /* 10c5cf35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5cf38 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cf3a mov cx, word ptr [0x10c7e668] */
  CX = (r16((uint32_t)(0x10c7e668)));
  /* 10c5cf41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5cf44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5cf48 jne 0x10c5cf52 */
  if (!C.zf) goto L_10c5cf52;
  /* 10c5cf4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5cf4d jmp 0x10c5d4ab */
  goto L_10c5d4ab;
L_10c5cf52:;
  /* 10c5cf52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cf55 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cf58 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cf59 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10c5cf5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cf5e push eax */
  push32((uint32_t)(EAX));
  /* 10c5cf5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5cf61 call 0x10c60830 */
  push32(0x10c5cf66u); f_10c60830();
  /* 10c5cf66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cf69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cf6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cf6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5cf71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cf74 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cf77 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cf78 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10c5cf7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cf7d push eax */
  push32((uint32_t)(EAX));
  /* 10c5cf7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5cf80 call 0x10c60830 */
  push32(0x10c5cf85u); f_10c60830();
  /* 10c5cf85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cf88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cf8b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cf8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5cf90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cf93 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cf96 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cf97 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10c5cf99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cf9c push eax */
  push32((uint32_t)(EAX));
  /* 10c5cf9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5cf9f call 0x10c60830 */
  push32(0x10c5cfa4u); f_10c60830();
  /* 10c5cfa4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cfa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cfaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cfac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5cfaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cfb2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cfb5 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cfb6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10c5cfb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cfbb push eax */
  push32((uint32_t)(EAX));
  /* 10c5cfbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5cfbe call 0x10c60830 */
  push32(0x10c5cfc3u); f_10c60830();
  /* 10c5cfc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cfc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cfc9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cfcb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5cfce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cfd1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cfd4 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cfd5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10c5cfd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cfda push eax */
  push32((uint32_t)(EAX));
  /* 10c5cfdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5cfdd call 0x10c60830 */
  push32(0x10c5cfe2u); f_10c60830();
  /* 10c5cfe2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cfe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5cfe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5cfea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5cfed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5cff0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5cff3 push edx */
  push32((uint32_t)(EDX));
  /* 10c5cff4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10c5cff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5cff9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5cffa push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5cffc call 0x10c60830 */
  push32(0x10c5d001u); f_10c60830();
  /* 10c5d001 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d004 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d007 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d009 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d00c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d00f push edx */
  push32((uint32_t)(EDX));
  /* 10c5d010 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10c5d012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d015 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d016 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d018 call 0x10c60830 */
  push32(0x10c5d01du); f_10c60830();
  /* 10c5d01d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d020 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d023 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d025 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d02b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d02e push edx */
  push32((uint32_t)(EDX));
  /* 10c5d02f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10c5d031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d034 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d035 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d037 call 0x10c60830 */
  push32(0x10c5d03cu); f_10c60830();
  /* 10c5d03c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d03f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d042 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d044 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d04a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d04d push edx */
  push32((uint32_t)(EDX));
  /* 10c5d04e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10c5d050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d053 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d054 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d056 call 0x10c60830 */
  push32(0x10c5d05bu); f_10c60830();
  /* 10c5d05b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d05e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d061 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d063 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d066 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d069 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d06c push edx */
  push32((uint32_t)(EDX));
  /* 10c5d06d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10c5d06f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d072 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d073 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d075 call 0x10c60830 */
  push32(0x10c5d07au); f_10c60830();
  /* 10c5d07a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d07d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d080 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d082 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d088 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d08b push edx */
  push32((uint32_t)(EDX));
  /* 10c5d08c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10c5d08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d091 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d094 call 0x10c60830 */
  push32(0x10c5d099u); f_10c60830();
  /* 10c5d099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d09c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d09f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d0a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d0a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d0a7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d0aa push edx */
  push32((uint32_t)(EDX));
  /* 10c5d0ab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10c5d0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d0b0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d0b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d0b3 call 0x10c60830 */
  push32(0x10c5d0b8u); f_10c60830();
  /* 10c5d0b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d0bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d0be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d0c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d0c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d0c6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d0c9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d0ca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10c5d0cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d0cf push eax */
  push32((uint32_t)(EAX));
  /* 10c5d0d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d0d2 call 0x10c60830 */
  push32(0x10c5d0d7u); f_10c60830();
  /* 10c5d0d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d0da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d0dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d0df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d0e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d0e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d0e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d0e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c5d0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d0ee push eax */
  push32((uint32_t)(EAX));
  /* 10c5d0ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d0f1 call 0x10c60830 */
  push32(0x10c5d0f6u); f_10c60830();
  /* 10c5d0f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d0f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d0fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d0fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d104 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d107 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d108 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10c5d10a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d10d push eax */
  push32((uint32_t)(EAX));
  /* 10c5d10e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d110 call 0x10c60830 */
  push32(0x10c5d115u); f_10c60830();
  /* 10c5d115 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d118 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d11b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d11d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d120 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d123 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d126 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d127 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10c5d129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d12c push eax */
  push32((uint32_t)(EAX));
  /* 10c5d12d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d12f call 0x10c60830 */
  push32(0x10c5d134u); f_10c60830();
  /* 10c5d134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d137 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d13a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d13c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d142 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d145 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d146 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10c5d148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d14b push eax */
  push32((uint32_t)(EAX));
  /* 10c5d14c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d14e call 0x10c60830 */
  push32(0x10c5d153u); f_10c60830();
  /* 10c5d153 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d156 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d159 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d15b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d15e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d161 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d164 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d165 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10c5d167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d16a push eax */
  push32((uint32_t)(EAX));
  /* 10c5d16b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d16d call 0x10c60830 */
  push32(0x10c5d172u); f_10c60830();
  /* 10c5d172 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d175 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d178 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d17a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d17d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d180 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d183 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d184 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10c5d186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d189 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d18a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d18c call 0x10c60830 */
  push32(0x10c5d191u); f_10c60830();
  /* 10c5d191 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d194 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d197 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d199 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d19c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d19f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1a2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d1a3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10c5d1a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d1a8 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d1a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d1ab call 0x10c60830 */
  push32(0x10c5d1b0u); f_10c60830();
  /* 10c5d1b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d1b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d1b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d1bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d1be add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1c1 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d1c2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10c5d1c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d1c7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d1c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d1ca call 0x10c60830 */
  push32(0x10c5d1cfu); f_10c60830();
  /* 10c5d1cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d1d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d1d7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d1da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d1dd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1e0 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d1e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10c5d1e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d1e6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d1e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d1e9 call 0x10c60830 */
  push32(0x10c5d1eeu); f_10c60830();
  /* 10c5d1ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d1f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d1f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d1fc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d1ff push edx */
  push32((uint32_t)(EDX));
  /* 10c5d200 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10c5d202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d205 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d206 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d208 call 0x10c60830 */
  push32(0x10c5d20du); f_10c60830();
  /* 10c5d20d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d210 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d213 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d215 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d21b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d21e push edx */
  push32((uint32_t)(EDX));
  /* 10c5d21f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10c5d221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d224 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d225 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d227 call 0x10c60830 */
  push32(0x10c5d22cu); f_10c60830();
  /* 10c5d22c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d22f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d232 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d234 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d23a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d23d push edx */
  push32((uint32_t)(EDX));
  /* 10c5d23e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10c5d240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d243 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d244 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d246 call 0x10c60830 */
  push32(0x10c5d24bu); f_10c60830();
  /* 10c5d24b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d24e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d251 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d253 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d256 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d259 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d25c push edx */
  push32((uint32_t)(EDX));
  /* 10c5d25d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10c5d25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d262 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d263 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d265 call 0x10c60830 */
  push32(0x10c5d26au); f_10c60830();
  /* 10c5d26a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d26d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d270 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d272 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d278 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d27b push edx */
  push32((uint32_t)(EDX));
  /* 10c5d27c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10c5d27e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d281 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d282 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d284 call 0x10c60830 */
  push32(0x10c5d289u); f_10c60830();
  /* 10c5d289 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d28c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d28f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d291 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d297 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d29a push edx */
  push32((uint32_t)(EDX));
  /* 10c5d29b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10c5d29d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d2a0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d2a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d2a3 call 0x10c60830 */
  push32(0x10c5d2a8u); f_10c60830();
  /* 10c5d2a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d2ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d2ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d2b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d2b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d2b6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d2b9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d2ba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10c5d2bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d2bf push eax */
  push32((uint32_t)(EAX));
  /* 10c5d2c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d2c2 call 0x10c60830 */
  push32(0x10c5d2c7u); f_10c60830();
  /* 10c5d2c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d2ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d2cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d2cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d2d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d2d5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d2d8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d2d9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10c5d2db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d2de push eax */
  push32((uint32_t)(EAX));
  /* 10c5d2df push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d2e1 call 0x10c60830 */
  push32(0x10c5d2e6u); f_10c60830();
  /* 10c5d2e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d2e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d2ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d2ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d2f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d2f4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d2f7 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d2f8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10c5d2fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d2fd push eax */
  push32((uint32_t)(EAX));
  /* 10c5d2fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d300 call 0x10c60830 */
  push32(0x10c5d305u); f_10c60830();
  /* 10c5d305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d308 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d30b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d30d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d310 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d313 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d316 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d317 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c5d319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d31c push eax */
  push32((uint32_t)(EAX));
  /* 10c5d31d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d31f call 0x10c60830 */
  push32(0x10c5d324u); f_10c60830();
  /* 10c5d324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d32a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d32c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d32f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d332 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d338 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d339 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10c5d33b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d33e push eax */
  push32((uint32_t)(EAX));
  /* 10c5d33f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d341 call 0x10c60830 */
  push32(0x10c5d346u); f_10c60830();
  /* 10c5d346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d349 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d34c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d34e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d354 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d35a push edx */
  push32((uint32_t)(EDX));
  /* 10c5d35b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c5d35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d360 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d361 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d363 call 0x10c60830 */
  push32(0x10c5d368u); f_10c60830();
  /* 10c5d368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d36b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d36e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d376 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d37c push edx */
  push32((uint32_t)(EDX));
  /* 10c5d37d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c5d37f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d382 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d383 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d385 call 0x10c60830 */
  push32(0x10c5d38au); f_10c60830();
  /* 10c5d38a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d38d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d390 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d392 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d398 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d39e push edx */
  push32((uint32_t)(EDX));
  /* 10c5d39f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10c5d3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d3a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d3a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d3a7 call 0x10c60830 */
  push32(0x10c5d3acu); f_10c60830();
  /* 10c5d3ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d3af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d3b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d3b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d3b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d3ba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d3c0 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d3c1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10c5d3c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d3c6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d3c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d3c9 call 0x10c60830 */
  push32(0x10c5d3ceu); f_10c60830();
  /* 10c5d3ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d3d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d3d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d3d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d3d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d3dc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d3e2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d3e3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10c5d3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d3e8 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d3e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d3eb call 0x10c60830 */
  push32(0x10c5d3f0u); f_10c60830();
  /* 10c5d3f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d3f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d3f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d3f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d3fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d3fe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d404 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d405 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10c5d407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d40a push eax */
  push32((uint32_t)(EAX));
  /* 10c5d40b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d40d call 0x10c60830 */
  push32(0x10c5d412u); f_10c60830();
  /* 10c5d412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d418 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d41a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d420 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d426 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d427 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10c5d429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d42c push eax */
  push32((uint32_t)(EAX));
  /* 10c5d42d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d42f call 0x10c60830 */
  push32(0x10c5d434u); f_10c60830();
  /* 10c5d434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d43a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d442 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d448 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d449 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10c5d44b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5d44e push eax */
  push32((uint32_t)(EAX));
  /* 10c5d44f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d451 call 0x10c60830 */
  push32(0x10c5d456u); f_10c60830();
  /* 10c5d456 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d45c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d45e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d464 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d46a push edx */
  push32((uint32_t)(EDX));
  /* 10c5d46b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c5d46d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5d470 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d471 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d473 call 0x10c60830 */
  push32(0x10c5d478u); f_10c60830();
  /* 10c5d478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d47b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d47e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d480 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d486 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d48c push edx */
  push32((uint32_t)(EDX));
  /* 10c5d48d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10c5d492 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5d495 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d496 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d498 call 0x10c60830 */
  push32(0x10c5d49du); f_10c60830();
  /* 10c5d49d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d4a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5d4a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d4a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5d4a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10c5d4ab:;
  /* 10c5d4ab mov esp, ebp */
  ESP = (EBP);
  /* 10c5d4ad pop ebp */
  EBP = (pop32());
  /* 10c5d4ae ret  */
  ESPCHK(0x10c5cf20u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10c5d4b0 (779 bytes, 265 insns) */
void f_10c5d4b0(void) {
  FTRACE(0x10c5d4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5d4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5d4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5d4b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5d4b7 jne 0x10c5d4be */
  if (!C.zf) goto L_10c5d4be;
  /* 10c5d4b9 jmp 0x10c5d7b9 */
  goto L_10c5d7b9;
L_10c5d4be:;
  /* 10c5d4be push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d4c3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c5d4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d4c7 call 0x10c53100 */
  push32(0x10c5d4ccu); f_10c53100();
  /* 10c5d4cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d4cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d4d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d4d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c5d4d7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d4d8 call 0x10c53100 */
  push32(0x10c5d4ddu); f_10c53100();
  /* 10c5d4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d4e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d4e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d4e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5d4e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d4e9 call 0x10c53100 */
  push32(0x10c5d4eeu); f_10c53100();
  /* 10c5d4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d4f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d4f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5d4f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d4fa call 0x10c53100 */
  push32(0x10c5d4ffu); f_10c53100();
  /* 10c5d4ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d502 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d507 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c5d50a push eax */
  push32((uint32_t)(EAX));
  /* 10c5d50b call 0x10c53100 */
  push32(0x10c5d510u); f_10c53100();
  /* 10c5d510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d513 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d515 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d518 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c5d51b push edx */
  push32((uint32_t)(EDX));
  /* 10c5d51c call 0x10c53100 */
  push32(0x10c5d521u); f_10c53100();
  /* 10c5d521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d524 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d529 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5d52b push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d52c call 0x10c53100 */
  push32(0x10c5d531u); f_10c53100();
  /* 10c5d531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d534 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d536 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d539 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10c5d53c push eax */
  push32((uint32_t)(EAX));
  /* 10c5d53d call 0x10c53100 */
  push32(0x10c5d542u); f_10c53100();
  /* 10c5d542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d545 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d54a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10c5d54d push edx */
  push32((uint32_t)(EDX));
  /* 10c5d54e call 0x10c53100 */
  push32(0x10c5d553u); f_10c53100();
  /* 10c5d553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d556 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d55b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10c5d55e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d55f call 0x10c53100 */
  push32(0x10c5d564u); f_10c53100();
  /* 10c5d564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d567 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d56c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10c5d56f push eax */
  push32((uint32_t)(EAX));
  /* 10c5d570 call 0x10c53100 */
  push32(0x10c5d575u); f_10c53100();
  /* 10c5d575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d578 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d57a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d57d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10c5d580 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d581 call 0x10c53100 */
  push32(0x10c5d586u); f_10c53100();
  /* 10c5d586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d589 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d58b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d58e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10c5d591 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d592 call 0x10c53100 */
  push32(0x10c5d597u); f_10c53100();
  /* 10c5d597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d59a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d59c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d59f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c5d5a2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d5a3 call 0x10c53100 */
  push32(0x10c5d5a8u); f_10c53100();
  /* 10c5d5a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d5ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d5ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d5b0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10c5d5b3 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d5b4 call 0x10c53100 */
  push32(0x10c5d5b9u); f_10c53100();
  /* 10c5d5b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d5bc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d5be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d5c1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10c5d5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d5c5 call 0x10c53100 */
  push32(0x10c5d5cau); f_10c53100();
  /* 10c5d5ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d5cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d5d2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10c5d5d5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d5d6 call 0x10c53100 */
  push32(0x10c5d5dbu); f_10c53100();
  /* 10c5d5db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d5de push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d5e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d5e3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10c5d5e6 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d5e7 call 0x10c53100 */
  push32(0x10c5d5ecu); f_10c53100();
  /* 10c5d5ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d5ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d5f4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10c5d5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d5f8 call 0x10c53100 */
  push32(0x10c5d5fdu); f_10c53100();
  /* 10c5d5fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d600 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d605 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10c5d608 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d609 call 0x10c53100 */
  push32(0x10c5d60eu); f_10c53100();
  /* 10c5d60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d611 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d616 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c5d619 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d61a call 0x10c53100 */
  push32(0x10c5d61fu); f_10c53100();
  /* 10c5d61f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d622 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d627 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10c5d62a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d62b call 0x10c53100 */
  push32(0x10c5d630u); f_10c53100();
  /* 10c5d630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d633 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d638 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10c5d63b push eax */
  push32((uint32_t)(EAX));
  /* 10c5d63c call 0x10c53100 */
  push32(0x10c5d641u); f_10c53100();
  /* 10c5d641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d644 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d649 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10c5d64c push edx */
  push32((uint32_t)(EDX));
  /* 10c5d64d call 0x10c53100 */
  push32(0x10c5d652u); f_10c53100();
  /* 10c5d652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d655 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d65a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10c5d65d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d65e call 0x10c53100 */
  push32(0x10c5d663u); f_10c53100();
  /* 10c5d663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d666 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d66b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10c5d66e push eax */
  push32((uint32_t)(EAX));
  /* 10c5d66f call 0x10c53100 */
  push32(0x10c5d674u); f_10c53100();
  /* 10c5d674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d677 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d67c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10c5d67f push edx */
  push32((uint32_t)(EDX));
  /* 10c5d680 call 0x10c53100 */
  push32(0x10c5d685u); f_10c53100();
  /* 10c5d685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d688 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d68d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10c5d690 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d691 call 0x10c53100 */
  push32(0x10c5d696u); f_10c53100();
  /* 10c5d696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d699 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d69e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10c5d6a1 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d6a2 call 0x10c53100 */
  push32(0x10c5d6a7u); f_10c53100();
  /* 10c5d6a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d6ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d6af mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10c5d6b2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d6b3 call 0x10c53100 */
  push32(0x10c5d6b8u); f_10c53100();
  /* 10c5d6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d6bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d6bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d6c0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10c5d6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d6c4 call 0x10c53100 */
  push32(0x10c5d6c9u); f_10c53100();
  /* 10c5d6c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d6cc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d6ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d6d1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10c5d6d4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d6d5 call 0x10c53100 */
  push32(0x10c5d6dau); f_10c53100();
  /* 10c5d6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d6df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d6e2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10c5d6e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d6e9 call 0x10c53100 */
  push32(0x10c5d6eeu); f_10c53100();
  /* 10c5d6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d6f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d6f6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10c5d6fc push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d6fd call 0x10c53100 */
  push32(0x10c5d702u); f_10c53100();
  /* 10c5d702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d705 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d70a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10c5d710 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d711 call 0x10c53100 */
  push32(0x10c5d716u); f_10c53100();
  /* 10c5d716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d719 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d71b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d71e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10c5d724 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d725 call 0x10c53100 */
  push32(0x10c5d72au); f_10c53100();
  /* 10c5d72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d72d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d732 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10c5d738 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d739 call 0x10c53100 */
  push32(0x10c5d73eu); f_10c53100();
  /* 10c5d73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d741 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d746 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10c5d74c push eax */
  push32((uint32_t)(EAX));
  /* 10c5d74d call 0x10c53100 */
  push32(0x10c5d752u); f_10c53100();
  /* 10c5d752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d755 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d75a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10c5d760 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d761 call 0x10c53100 */
  push32(0x10c5d766u); f_10c53100();
  /* 10c5d766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d769 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d76b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d76e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10c5d774 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d775 call 0x10c53100 */
  push32(0x10c5d77au); f_10c53100();
  /* 10c5d77a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d77d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d77f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d782 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10c5d788 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d789 call 0x10c53100 */
  push32(0x10c5d78eu); f_10c53100();
  /* 10c5d78e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d791 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d796 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10c5d79c push edx */
  push32((uint32_t)(EDX));
  /* 10c5d79d call 0x10c53100 */
  push32(0x10c5d7a2u); f_10c53100();
  /* 10c5d7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d7a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5d7aa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10c5d7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d7b1 call 0x10c53100 */
  push32(0x10c5d7b6u); f_10c53100();
  /* 10c5d7b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5d7b9:;
  /* 10c5d7b9 pop ebp */
  EBP = (pop32());
  /* 10c5d7ba ret  */
  ESPCHK(0x10c5d4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x10c5d7c0 (678 bytes, 180 insns) */
void f_10c5d7c0(void) {
  FTRACE(0x10c5d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5d7c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5d7c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5d7cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5d7cf mov ax, word ptr [0x10c7e662] */
  AX = (r16((uint32_t)(0x10c7e662)));
  /* 10c5d7d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5d7d8 cmp dword ptr [0x10c7e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5d7df je 0x10c5d93a */
  if (C.zf) goto L_10c5d93a;
  /* 10c5d7e5 push 0x10c7e630 */
  push32((uint32_t)(0x10c7e630u));
  /* 10c5d7ea push 0xe */
  push32((uint32_t)(0xeu));
  /* 10c5d7ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d7ef push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d7f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d7f2 call 0x10c60830 */
  push32(0x10c5d7f7u); f_10c60830();
  /* 10c5d7f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d7fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5d7fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5d7ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5d802 push 0x10c7e634 */
  push32((uint32_t)(0x10c7e634u));
  /* 10c5d807 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10c5d809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d80c push eax */
  push32((uint32_t)(EAX));
  /* 10c5d80d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d80f call 0x10c60830 */
  push32(0x10c5d814u); f_10c60830();
  /* 10c5d814 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5d81a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d81c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5d81f push 0x10c7e638 */
  push32((uint32_t)(0x10c7e638u));
  /* 10c5d824 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c5d826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5d829 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d82a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5d82c call 0x10c60830 */
  push32(0x10c5d831u); f_10c60830();
  /* 10c5d831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d834 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5d837 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5d839 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5d83c mov edx, dword ptr [0x10c7e638] */
  EDX = (r32((uint32_t)(0x10c7e638)));
  /* 10c5d842 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d843 call 0x10c5da70 */
  push32(0x10c5d848u); f_10c5da70();
  /* 10c5d848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d84b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5d84f je 0x10c5d8a9 */
  if (C.zf) goto L_10c5d8a9;
  /* 10c5d851 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d853 mov eax, dword ptr [0x10c7e630] */
  EAX = (r32((uint32_t)(0x10c7e630)));
  /* 10c5d858 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d859 call 0x10c53100 */
  push32(0x10c5d85eu); f_10c53100();
  /* 10c5d85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d861 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d863 mov ecx, dword ptr [0x10c7e634] */
  ECX = (r32((uint32_t)(0x10c7e634)));
  /* 10c5d869 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d86a call 0x10c53100 */
  push32(0x10c5d86fu); f_10c53100();
  /* 10c5d86f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d872 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d874 mov edx, dword ptr [0x10c7e638] */
  EDX = (r32((uint32_t)(0x10c7e638)));
  /* 10c5d87a push edx */
  push32((uint32_t)(EDX));
  /* 10c5d87b call 0x10c53100 */
  push32(0x10c5d880u); f_10c53100();
  /* 10c5d880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d883 mov dword ptr [0x10c7e630], 0 */
  w32((uint32_t)(0x10c7e630), (0x0u));
  /* 10c5d88d mov dword ptr [0x10c7e634], 0 */
  w32((uint32_t)(0x10c7e634), (0x0u));
  /* 10c5d897 mov dword ptr [0x10c7e638], 0 */
  w32((uint32_t)(0x10c7e638), (0x0u));
  /* 10c5d8a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5d8a4 jmp 0x10c5da62 */
  goto L_10c5da62;
L_10c5d8a9:;
  /* 10c5d8a9 mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d8ae cmp dword ptr [eax], 0x10c7dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10c7dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5d8b4 je 0x10c5d8f0 */
  if (C.zf) goto L_10c5d8f0;
  /* 10c5d8b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d8b8 mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d8be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5d8c0 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d8c1 call 0x10c53100 */
  push32(0x10c5d8c6u); f_10c53100();
  /* 10c5d8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d8c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d8cb mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d8d0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c5d8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d8d4 call 0x10c53100 */
  push32(0x10c5d8d9u); f_10c53100();
  /* 10c5d8d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d8dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d8de mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d8e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c5d8e7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d8e8 call 0x10c53100 */
  push32(0x10c5d8edu); f_10c53100();
  /* 10c5d8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5d8f0:;
  /* 10c5d8f0 mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d8f6 mov edx, dword ptr [0x10c7e630] */
  EDX = (r32((uint32_t)(0x10c7e630)));
  /* 10c5d8fc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c5d8fe mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d903 mov ecx, dword ptr [0x10c7e634] */
  ECX = (r32((uint32_t)(0x10c7e634)));
  /* 10c5d909 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c5d90c mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d912 mov eax, dword ptr [0x10c7e638] */
  EAX = (r32((uint32_t)(0x10c7e638)));
  /* 10c5d917 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c5d91a mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d920 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5d922 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5d924 mov byte ptr [0x10c7cea8], al */
  w8((uint32_t)(0x10c7cea8), (AL));
  /* 10c5d929 mov dword ptr [0x10c7ceac], 1 */
  w32((uint32_t)(0x10c7ceac), (0x1u));
  /* 10c5d933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5d935 jmp 0x10c5da62 */
  goto L_10c5da62;
L_10c5d93a:;
  /* 10c5d93a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d93c mov ecx, dword ptr [0x10c7e630] */
  ECX = (r32((uint32_t)(0x10c7e630)));
  /* 10c5d942 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d943 call 0x10c53100 */
  push32(0x10c5d948u); f_10c53100();
  /* 10c5d948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d94b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d94d mov edx, dword ptr [0x10c7e634] */
  EDX = (r32((uint32_t)(0x10c7e634)));
  /* 10c5d953 push edx */
  push32((uint32_t)(EDX));
  /* 10c5d954 call 0x10c53100 */
  push32(0x10c5d959u); f_10c53100();
  /* 10c5d959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d95c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d95e mov eax, dword ptr [0x10c7e638] */
  EAX = (r32((uint32_t)(0x10c7e638)));
  /* 10c5d963 push eax */
  push32((uint32_t)(EAX));
  /* 10c5d964 call 0x10c53100 */
  push32(0x10c5d969u); f_10c53100();
  /* 10c5d969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d96c mov dword ptr [0x10c7e630], 0 */
  w32((uint32_t)(0x10c7e630), (0x0u));
  /* 10c5d976 mov dword ptr [0x10c7e634], 0 */
  w32((uint32_t)(0x10c7e634), (0x0u));
  /* 10c5d980 mov dword ptr [0x10c7e638], 0 */
  w32((uint32_t)(0x10c7e638), (0x0u));
  /* 10c5d98a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10c5d98f push 0x10c79fcc */
  push32((uint32_t)(0x10c79fccu));
  /* 10c5d994 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d996 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d998 call 0x10c52670 */
  push32(0x10c5d99du); f_10c52670();
  /* 10c5d99d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d9a0 mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d9a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c5d9a8 mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d9ae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5d9b1 jne 0x10c5d9bb */
  if (!C.zf) goto L_10c5d9bb;
  /* 10c5d9b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5d9b6 jmp 0x10c5da62 */
  goto L_10c5da62;
L_10c5d9bb:;
  /* 10c5d9bb push 0x10c79f9c */
  push32((uint32_t)(0x10c79f9cu));
  /* 10c5d9c0 mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d9c5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5d9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5d9c8 call 0x10c55620 */
  push32(0x10c5d9cdu); f_10c55620();
  /* 10c5d9cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d9d0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10c5d9d5 push 0x10c79fcc */
  push32((uint32_t)(0x10c79fccu));
  /* 10c5d9da push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d9dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5d9de call 0x10c52670 */
  push32(0x10c5d9e3u); f_10c52670();
  /* 10c5d9e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5d9e6 mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d9ec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c5d9ef mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5d9f4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5d9f8 jne 0x10c5d9ff */
  if (!C.zf) goto L_10c5d9ff;
  /* 10c5d9fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5d9fd jmp 0x10c5da62 */
  goto L_10c5da62;
L_10c5d9ff:;
  /* 10c5d9ff mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5da05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5da08 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c5da0b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10c5da10 push 0x10c79fcc */
  push32((uint32_t)(0x10c79fccu));
  /* 10c5da15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5da17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5da19 call 0x10c52670 */
  push32(0x10c5da1eu); f_10c52670();
  /* 10c5da1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5da21 mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5da27 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c5da2a mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5da30 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5da34 jne 0x10c5da3b */
  if (!C.zf) goto L_10c5da3b;
  /* 10c5da36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5da39 jmp 0x10c5da62 */
  goto L_10c5da62;
L_10c5da3b:;
  /* 10c5da3b mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5da40 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5da43 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c5da46 mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5da4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5da4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c5da50 mov byte ptr [0x10c7cea8], cl */
  w8((uint32_t)(0x10c7cea8), (CL));
  /* 10c5da56 mov dword ptr [0x10c7ceac], 1 */
  w32((uint32_t)(0x10c7ceac), (0x1u));
  /* 10c5da60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5da62:;
  /* 10c5da62 mov esp, ebp */
  ESP = (EBP);
  /* 10c5da64 pop ebp */
  EBP = (pop32());
  /* 10c5da65 ret  */
  ESPCHK(0x10c5d7c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10c5da70 (125 bytes, 49 insns) */
void f_10c5da70(void) {
  FTRACE(0x10c5da70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5da70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5da71 mov ebp, esp */
  EBP = (ESP);
  /* 10c5da73 push ecx */
  push32((uint32_t)(ECX));
L_10c5da74:;
  /* 10c5da74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5da77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5da7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5da7c je 0x10c5dae9 */
  if (C.zf) goto L_10c5dae9;
  /* 10c5da7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5da81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5da84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5da87 jl 0x10c5daad */
  if ((C.sf!=C.of)) goto L_10c5daad;
  /* 10c5da89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5da8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5da8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5da92 jg 0x10c5daad */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5daad;
  /* 10c5da94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5da97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5da9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5da9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5daa0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c5daa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5daa5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5daa8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c5daab jmp 0x10c5dae7 */
  goto L_10c5dae7;
L_10c5daad:;
  /* 10c5daad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dab0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5dab3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5dab6 jne 0x10c5dade */
  if (!C.zf) goto L_10c5dade;
  /* 10c5dab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dabb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5dabe:;
  /* 10c5dabe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dac4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c5dac7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c5dac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dacc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dacf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5dad2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dad5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5dad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5dada jne 0x10c5dabe */
  if (!C.zf) goto L_10c5dabe;
  /* 10c5dadc jmp 0x10c5dae7 */
  goto L_10c5dae7;
L_10c5dade:;
  /* 10c5dade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dae1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dae4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c5dae7:;
  /* 10c5dae7 jmp 0x10c5da74 */
  goto L_10c5da74;
L_10c5dae9:;
  /* 10c5dae9 mov esp, ebp */
  ESP = (EBP);
  /* 10c5daeb pop ebp */
  EBP = (pop32());
  /* 10c5daec ret  */
  ESPCHK(0x10c5da70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daf0 @ 0x10c5daf0 (304 bytes, 85 insns) */
void f_10c5daf0(void) {
  FTRACE(0x10c5daf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5daf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5daf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5daf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5daf4 cmp dword ptr [0x10c7e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5dafb je 0x10c5dbbc */
  if (C.zf) goto L_10c5dbbc;
  /* 10c5db01 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10c5db03 push 0x10c79fd8 */
  push32((uint32_t)(0x10c79fd8u));
  /* 10c5db08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5db0a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c5db0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5db0e call 0x10c52a80 */
  push32(0x10c5db13u); f_10c52a80();
  /* 10c5db13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5db16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5db19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5db1d jne 0x10c5db29 */
  if (!C.zf) goto L_10c5db29;
  /* 10c5db1f mov eax, 1 */
  EAX = (0x1u);
  /* 10c5db24 jmp 0x10c5dc1c */
  goto L_10c5dc1c;
L_10c5db29:;
  /* 10c5db29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db2c push eax */
  push32((uint32_t)(EAX));
  /* 10c5db2d call 0x10c5dc20 */
  push32(0x10c5db32u); f_10c5dc20();
  /* 10c5db32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5db35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5db37 je 0x10c5db5d */
  if (C.zf) goto L_10c5db5d;
  /* 10c5db39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db3c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5db3d call 0x10c5deb0 */
  push32(0x10c5db42u); f_10c5deb0();
  /* 10c5db42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5db45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5db47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db4a push edx */
  push32((uint32_t)(EDX));
  /* 10c5db4b call 0x10c53100 */
  push32(0x10c5db50u); f_10c53100();
  /* 10c5db50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5db53 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5db58 jmp 0x10c5dc1c */
  goto L_10c5dc1c;
L_10c5db5d:;
  /* 10c5db5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db60 mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5db66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5db68 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5db6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db6d mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5db73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c5db76 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c5db79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db7c mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5db82 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c5db85 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c5db88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5db8b mov dword ptr [0x10c7dd88], eax */
  w32((uint32_t)(0x10c7dd88), (EAX));
  /* 10c5db90 mov ecx, dword ptr [0x10c7e63c] */
  ECX = (r32((uint32_t)(0x10c7e63c)));
  /* 10c5db96 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5db97 call 0x10c5deb0 */
  push32(0x10c5db9cu); f_10c5deb0();
  /* 10c5db9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5db9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dba1 mov edx, dword ptr [0x10c7e63c] */
  EDX = (r32((uint32_t)(0x10c7e63c)));
  /* 10c5dba7 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dba8 call 0x10c53100 */
  push32(0x10c5dbadu); f_10c53100();
  /* 10c5dbad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dbb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dbb3 mov dword ptr [0x10c7e63c], eax */
  w32((uint32_t)(0x10c7e63c), (EAX));
  /* 10c5dbb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5dbba jmp 0x10c5dc1c */
  goto L_10c5dc1c;
L_10c5dbbc:;
  /* 10c5dbbc mov ecx, dword ptr [0x10c7dd88] */
  ECX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5dbc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5dbc4 mov dword ptr [0x10c7dd58], edx */
  w32((uint32_t)(0x10c7dd58), (EDX));
  /* 10c5dbca mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5dbcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c5dbd2 mov dword ptr [0x10c7dd5c], ecx */
  w32((uint32_t)(0x10c7dd5c), (ECX));
  /* 10c5dbd8 mov edx, dword ptr [0x10c7dd88] */
  EDX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c5dbde mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c5dbe1 mov dword ptr [0x10c7dd60], eax */
  w32((uint32_t)(0x10c7dd60), (EAX));
  /* 10c5dbe6 mov dword ptr [0x10c7dd88], 0x10c7dd58 */
  w32((uint32_t)(0x10c7dd88), (0x10c7dd58u));
  /* 10c5dbf0 mov ecx, dword ptr [0x10c7e63c] */
  ECX = (r32((uint32_t)(0x10c7e63c)));
  /* 10c5dbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5dbf7 call 0x10c5deb0 */
  push32(0x10c5dbfcu); f_10c5deb0();
  /* 10c5dbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dbff push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dc01 mov edx, dword ptr [0x10c7e63c] */
  EDX = (r32((uint32_t)(0x10c7e63c)));
  /* 10c5dc07 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dc08 call 0x10c53100 */
  push32(0x10c5dc0du); f_10c53100();
  /* 10c5dc0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc10 mov dword ptr [0x10c7e63c], 0 */
  w32((uint32_t)(0x10c7e63c), (0x0u));
  /* 10c5dc1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5dc1c:;
  /* 10c5dc1c mov esp, ebp */
  ESP = (EBP);
  /* 10c5dc1e pop ebp */
  EBP = (pop32());
  /* 10c5dc1f ret  */
  ESPCHK(0x10c5daf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc20 @ 0x10c5dc20 (525 bytes, 200 insns) */
void f_10c5dc20(void) {
  FTRACE(0x10c5dc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5dc20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5dc21 mov ebp, esp */
  EBP = (ESP);
  /* 10c5dc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5dc26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5dc2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5dc2f mov ax, word ptr [0x10c7e65c] */
  AX = (r16((uint32_t)(0x10c7e65c)));
  /* 10c5dc35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5dc38 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5dc3c jne 0x10c5dc46 */
  if (!C.zf) goto L_10c5dc46;
  /* 10c5dc3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5dc41 jmp 0x10c5de29 */
  goto L_10c5de29;
L_10c5dc46:;
  /* 10c5dc46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dc49 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc4c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5dc4d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10c5dc4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dc52 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dc53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dc55 call 0x10c60830 */
  push32(0x10c5dc5au); f_10c60830();
  /* 10c5dc5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dc60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dc62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dc68 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc6b push edx */
  push32((uint32_t)(EDX));
  /* 10c5dc6c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10c5dc6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dc71 push eax */
  push32((uint32_t)(EAX));
  /* 10c5dc72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dc74 call 0x10c60830 */
  push32(0x10c5dc79u); f_10c60830();
  /* 10c5dc79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dc7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dc81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dc84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dc87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc8a push edx */
  push32((uint32_t)(EDX));
  /* 10c5dc8b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c5dc8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dc90 push eax */
  push32((uint32_t)(EAX));
  /* 10c5dc91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dc93 call 0x10c60830 */
  push32(0x10c5dc98u); f_10c60830();
  /* 10c5dc98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dc9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dc9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dca0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dca3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dca6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dca9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dcaa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10c5dcac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dcaf push eax */
  push32((uint32_t)(EAX));
  /* 10c5dcb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dcb2 call 0x10c60830 */
  push32(0x10c5dcb7u); f_10c60830();
  /* 10c5dcb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dcba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dcbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dcbf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dcc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dcc5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dcc8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dcc9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10c5dccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dcce push eax */
  push32((uint32_t)(EAX));
  /* 10c5dccf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dcd1 call 0x10c60830 */
  push32(0x10c5dcd6u); f_10c60830();
  /* 10c5dcd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dcd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dcdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dcde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dce4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c5dce7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5dce8 call 0x10c5de30 */
  push32(0x10c5dcedu); f_10c5de30();
  /* 10c5dced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dcf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dcf3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dcf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5dcf7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10c5dcf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dcfc push edx */
  push32((uint32_t)(EDX));
  /* 10c5dcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dcff call 0x10c60830 */
  push32(0x10c5dd04u); f_10c60830();
  /* 10c5dd04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dd0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dd0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dd0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dd12 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd15 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dd16 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10c5dd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dd1b push eax */
  push32((uint32_t)(EAX));
  /* 10c5dd1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5dd1e call 0x10c60830 */
  push32(0x10c5dd23u); f_10c60830();
  /* 10c5dd23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dd29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dd2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dd2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dd31 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd34 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dd35 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10c5dd37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dd3a push eax */
  push32((uint32_t)(EAX));
  /* 10c5dd3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5dd3d call 0x10c60830 */
  push32(0x10c5dd42u); f_10c60830();
  /* 10c5dd42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dd48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dd4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dd4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dd50 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd53 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dd54 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c5dd56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dd59 push eax */
  push32((uint32_t)(EAX));
  /* 10c5dd5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5dd5c call 0x10c60830 */
  push32(0x10c5dd61u); f_10c60830();
  /* 10c5dd61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dd67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dd69 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dd6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dd6f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd72 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dd73 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10c5dd75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dd78 push eax */
  push32((uint32_t)(EAX));
  /* 10c5dd79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5dd7b call 0x10c60830 */
  push32(0x10c5dd80u); f_10c60830();
  /* 10c5dd80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dd86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dd88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dd8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dd8e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dd91 push edx */
  push32((uint32_t)(EDX));
  /* 10c5dd92 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10c5dd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5dd97 push eax */
  push32((uint32_t)(EAX));
  /* 10c5dd98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5dd9a call 0x10c60830 */
  push32(0x10c5dd9fu); f_10c60830();
  /* 10c5dd9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dda2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dda5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dda7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5ddaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ddad add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ddb0 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ddb1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10c5ddb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ddb6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ddb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ddb9 call 0x10c60830 */
  push32(0x10c5ddbeu); f_10c60830();
  /* 10c5ddbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ddc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ddc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5ddc6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5ddc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ddcc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ddcf push edx */
  push32((uint32_t)(EDX));
  /* 10c5ddd0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10c5ddd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ddd5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ddd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ddd8 call 0x10c60830 */
  push32(0x10c5ddddu); f_10c60830();
  /* 10c5dddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dde0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5dde3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5dde5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5dde8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ddeb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ddee push edx */
  push32((uint32_t)(EDX));
  /* 10c5ddef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10c5ddf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ddf4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ddf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ddf7 call 0x10c60830 */
  push32(0x10c5ddfcu); f_10c60830();
  /* 10c5ddfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ddff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5de02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5de04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5de07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de0a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5de0d push edx */
  push32((uint32_t)(EDX));
  /* 10c5de0e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10c5de10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5de13 push eax */
  push32((uint32_t)(EAX));
  /* 10c5de14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5de16 call 0x10c60830 */
  push32(0x10c5de1bu); f_10c60830();
  /* 10c5de1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5de1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5de21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5de23 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5de26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c5de29:;
  /* 10c5de29 mov esp, ebp */
  ESP = (EBP);
  /* 10c5de2b pop ebp */
  EBP = (pop32());
  /* 10c5de2c ret  */
  ESPCHK(0x10c5dc20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10c5de30 (125 bytes, 49 insns) */
void f_10c5de30(void) {
  FTRACE(0x10c5de30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5de30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5de31 mov ebp, esp */
  EBP = (ESP);
  /* 10c5de33 push ecx */
  push32((uint32_t)(ECX));
L_10c5de34:;
  /* 10c5de34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5de3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5de3c je 0x10c5dea9 */
  if (C.zf) goto L_10c5dea9;
  /* 10c5de3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5de44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5de47 jl 0x10c5de6d */
  if ((C.sf!=C.of)) goto L_10c5de6d;
  /* 10c5de49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5de4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5de52 jg 0x10c5de6d */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5de6d;
  /* 10c5de54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5de5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5de5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c5de62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5de68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c5de6b jmp 0x10c5dea7 */
  goto L_10c5dea7;
L_10c5de6d:;
  /* 10c5de6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5de73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5de76 jne 0x10c5de9e */
  if (!C.zf) goto L_10c5de9e;
  /* 10c5de78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5de7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5de7e:;
  /* 10c5de7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5de81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5de84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c5de87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c5de89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5de8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5de8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5de92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5de95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5de98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5de9a jne 0x10c5de7e */
  if (!C.zf) goto L_10c5de7e;
  /* 10c5de9c jmp 0x10c5dea7 */
  goto L_10c5dea7;
L_10c5de9e:;
  /* 10c5de9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dea4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c5dea7:;
  /* 10c5dea7 jmp 0x10c5de34 */
  goto L_10c5de34;
L_10c5dea9:;
  /* 10c5dea9 mov esp, ebp */
  ESP = (EBP);
  /* 10c5deab pop ebp */
  EBP = (pop32());
  /* 10c5deac ret  */
  ESPCHK(0x10c5de30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x10c5deb0 (147 bytes, 52 insns) */
void f_10c5deb0(void) {
  FTRACE(0x10c5deb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5deb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5deb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5deb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5deb7 jne 0x10c5debe */
  if (!C.zf) goto L_10c5debe;
  /* 10c5deb9 jmp 0x10c5df41 */
  goto L_10c5df41;
L_10c5debe:;
  /* 10c5debe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dec1 cmp dword ptr [eax + 0xc], 0x10c7e698 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10c7e698u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5dec8 je 0x10c5df41 */
  if (C.zf) goto L_10c5df41;
  /* 10c5deca push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5decc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5decf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5ded2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ded3 call 0x10c53100 */
  push32(0x10c5ded8u); f_10c53100();
  /* 10c5ded8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dedb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dedd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5dee0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5dee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5dee4 call 0x10c53100 */
  push32(0x10c5dee9u); f_10c53100();
  /* 10c5dee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5deec push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5deee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5def1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c5def4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5def5 call 0x10c53100 */
  push32(0x10c5defau); f_10c53100();
  /* 10c5defa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5defd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5deff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5df02 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c5df05 push edx */
  push32((uint32_t)(EDX));
  /* 10c5df06 call 0x10c53100 */
  push32(0x10c5df0bu); f_10c53100();
  /* 10c5df0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5df0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5df10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5df13 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c5df16 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5df17 call 0x10c53100 */
  push32(0x10c5df1cu); f_10c53100();
  /* 10c5df1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5df1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5df21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5df24 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10c5df27 push eax */
  push32((uint32_t)(EAX));
  /* 10c5df28 call 0x10c53100 */
  push32(0x10c5df2du); f_10c53100();
  /* 10c5df2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5df30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5df32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5df35 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10c5df38 push edx */
  push32((uint32_t)(EDX));
  /* 10c5df39 call 0x10c53100 */
  push32(0x10c5df3eu); f_10c53100();
  /* 10c5df3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5df41:;
  /* 10c5df41 pop ebp */
  EBP = (pop32());
  /* 10c5df42 ret  */
  ESPCHK(0x10c5deb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df50 @ 0x10c5df50 (928 bytes, 284 insns) */
void f_10c5df50(void) {
  FTRACE(0x10c5df50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5df50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5df51 mov ebp, esp */
  EBP = (ESP);
  /* 10c5df53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5df56 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10c5df5d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10c5df64 cmp dword ptr [0x10c7e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5df6b je 0x10c5e2a1 */
  if (C.zf) goto L_10c5e2a1;
  /* 10c5df71 cmp dword ptr [0x10c7e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5df78 jne 0x10c5dfa0 */
  if (!C.zf) goto L_10c5dfa0;
  /* 10c5df7a push 0x10c7e610 */
  push32((uint32_t)(0x10c7e610u));
  /* 10c5df7f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10c5df84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5df86 mov ax, word ptr [0x10c7e654] */
  AX = (r16((uint32_t)(0x10c7e654)));
  /* 10c5df8c push eax */
  push32((uint32_t)(EAX));
  /* 10c5df8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5df8f call 0x10c60830 */
  push32(0x10c5df94u); f_10c60830();
  /* 10c5df94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5df97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5df99 je 0x10c5dfa0 */
  if (C.zf) goto L_10c5dfa0;
  /* 10c5df9b jmp 0x10c5e262 */
  goto L_10c5e262;
L_10c5dfa0:;
  /* 10c5dfa0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10c5dfa2 push 0x10c79fe4 */
  push32((uint32_t)(0x10c79fe4u));
  /* 10c5dfa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dfa9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c5dfae call 0x10c52670 */
  push32(0x10c5dfb3u); f_10c52670();
  /* 10c5dfb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dfb6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c5dfb9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c5dfbb push 0x10c79fe4 */
  push32((uint32_t)(0x10c79fe4u));
  /* 10c5dfc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dfc2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c5dfc7 call 0x10c52670 */
  push32(0x10c5dfccu); f_10c52670();
  /* 10c5dfcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dfcf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c5dfd2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10c5dfd4 push 0x10c79fe4 */
  push32((uint32_t)(0x10c79fe4u));
  /* 10c5dfd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dfdb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10c5dfe0 call 0x10c52670 */
  push32(0x10c5dfe5u); f_10c52670();
  /* 10c5dfe5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5dfe8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c5dfeb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10c5dfed push 0x10c79fe4 */
  push32((uint32_t)(0x10c79fe4u));
  /* 10c5dff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5dff4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c5dff9 call 0x10c52670 */
  push32(0x10c5dffeu); f_10c52670();
  /* 10c5dffe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e001 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c5e004 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e008 je 0x10c5e01c */
  if (C.zf) goto L_10c5e01c;
  /* 10c5e00a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e00e je 0x10c5e01c */
  if (C.zf) goto L_10c5e01c;
  /* 10c5e010 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e014 je 0x10c5e01c */
  if (C.zf) goto L_10c5e01c;
  /* 10c5e016 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e01a jne 0x10c5e021 */
  if (!C.zf) goto L_10c5e021;
L_10c5e01c:;
  /* 10c5e01c jmp 0x10c5e262 */
  goto L_10c5e262;
L_10c5e021:;
  /* 10c5e021 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5e024 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c5e027 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c5e02e jmp 0x10c5e039 */
  goto L_10c5e039;
L_10c5e030:;
  /* 10c5e030 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5e033 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e036 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c5e039:;
  /* 10c5e039 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e040 jge 0x10c5e055 */
  if ((C.sf==C.of)) goto L_10c5e055;
  /* 10c5e042 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e045 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10c5e048 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c5e04a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e04d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e050 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c5e053 jmp 0x10c5e030 */
  goto L_10c5e030;
L_10c5e055:;
  /* 10c5e055 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10c5e058 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e059 mov ecx, dword ptr [0x10c7e610] */
  ECX = (r32((uint32_t)(0x10c7e610)));
  /* 10c5e05f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e060 call dword ptr [0x10c802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802dc))), 0x10c5e066u);
  /* 10c5e066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e068 jne 0x10c5e06f */
  if (!C.zf) goto L_10c5e06f;
  /* 10c5e06a jmp 0x10c5e262 */
  goto L_10c5e262;
L_10c5e06f:;
  /* 10c5e06f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e073 jbe 0x10c5e07a */
  if ((C.cf||C.zf)) goto L_10c5e07a;
  /* 10c5e075 jmp 0x10c5e262 */
  goto L_10c5e262;
L_10c5e07a:;
  /* 10c5e07a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5e07d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e083 mov dword ptr [0x10c7cea4], edx */
  w32((uint32_t)(0x10c7cea4), (EDX));
  /* 10c5e089 cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e090 jle 0x10c5e0e9 */
  if ((C.zf||C.sf!=C.of)) goto L_10c5e0e9;
  /* 10c5e092 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10c5e095 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c5e098 jmp 0x10c5e0a3 */
  goto L_10c5e0a3;
L_10c5e09a:;
  /* 10c5e09a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e09d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e0a0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10c5e0a3:;
  /* 10c5e0a3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e0a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e0a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5e0aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e0ac je 0x10c5e0e9 */
  if (C.zf) goto L_10c5e0e9;
  /* 10c5e0ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e0b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e0b3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c5e0b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5e0b8 je 0x10c5e0e9 */
  if (C.zf) goto L_10c5e0e9;
  /* 10c5e0ba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e0bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e0bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c5e0c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c5e0c4 jmp 0x10c5e0cf */
  goto L_10c5e0cf;
L_10c5e0c6:;
  /* 10c5e0c6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5e0c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e0cc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c5e0cf:;
  /* 10c5e0cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e0d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e0d4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c5e0d7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e0da jg 0x10c5e0e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5e0e7;
  /* 10c5e0dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5e0df add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e0e2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c5e0e5 jmp 0x10c5e0c6 */
  goto L_10c5e0c6;
L_10c5e0e7:;
  /* 10c5e0e7 jmp 0x10c5e09a */
  goto L_10c5e09a;
L_10c5e0e9:;
  /* 10c5e0e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5e0eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5e0ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5e0ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5e0f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e0f5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e0f6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c5e0fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5e0fe push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e0ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5e101 call 0x10c5a8a0 */
  push32(0x10c5e106u); f_10c5a8a0();
  /* 10c5e106 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e10b jne 0x10c5e112 */
  if (!C.zf) goto L_10c5e112;
  /* 10c5e10d jmp 0x10c5e262 */
  goto L_10c5e262;
L_10c5e112:;
  /* 10c5e112 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5e115 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10c5e11a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5e11d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c5e120 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c5e127 jmp 0x10c5e132 */
  goto L_10c5e132;
L_10c5e129:;
  /* 10c5e129 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5e12c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e12f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c5e132:;
  /* 10c5e132 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e139 jge 0x10c5e150 */
  if ((C.sf==C.of)) goto L_10c5e150;
  /* 10c5e13b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5e13e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10c5e142 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10c5e145 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5e148 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e14b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c5e14e jmp 0x10c5e129 */
  goto L_10c5e129;
L_10c5e150:;
  /* 10c5e150 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5e152 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5e154 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5e157 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e15a push edx */
  push32((uint32_t)(EDX));
  /* 10c5e15b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c5e160 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5e163 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e164 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5e166 call 0x10c60ad0 */
  push32(0x10c5e16bu); f_10c60ad0();
  /* 10c5e16b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e16e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e170 jne 0x10c5e177 */
  if (!C.zf) goto L_10c5e177;
  /* 10c5e172 jmp 0x10c5e262 */
  goto L_10c5e262;
L_10c5e177:;
  /* 10c5e177 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5e17a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10c5e17f cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e186 jle 0x10c5e1e3 */
  if ((C.zf||C.sf!=C.of)) goto L_10c5e1e3;
  /* 10c5e188 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10c5e18b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c5e18e jmp 0x10c5e199 */
  goto L_10c5e199;
L_10c5e190:;
  /* 10c5e190 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e193 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e196 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c5e199:;
  /* 10c5e199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e19c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e19e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5e1a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5e1a2 je 0x10c5e1e3 */
  if (C.zf) goto L_10c5e1e3;
  /* 10c5e1a4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e1a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e1a9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c5e1ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5e1ae je 0x10c5e1e3 */
  if (C.zf) goto L_10c5e1e3;
  /* 10c5e1b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e1b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e1b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5e1b7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c5e1ba jmp 0x10c5e1c5 */
  goto L_10c5e1c5;
L_10c5e1bc:;
  /* 10c5e1bc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5e1bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e1c2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c5e1c5:;
  /* 10c5e1c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5e1c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e1ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c5e1cd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e1d0 jg 0x10c5e1e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5e1e1;
  /* 10c5e1d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c5e1d5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5e1d8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10c5e1df jmp 0x10c5e1bc */
  goto L_10c5e1bc;
L_10c5e1e1:;
  /* 10c5e1e1 jmp 0x10c5e190 */
  goto L_10c5e190;
L_10c5e1e3:;
  /* 10c5e1e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5e1e6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e1e9 mov dword ptr [0x10c7cc98], eax */
  w32((uint32_t)(0x10c7cc98), (EAX));
  /* 10c5e1ee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5e1f1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e1f4 mov dword ptr [0x10c7cc9c], ecx */
  w32((uint32_t)(0x10c7cc9c), (ECX));
  /* 10c5e1fa cmp dword ptr [0x10c7e640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e201 je 0x10c5e214 */
  if (C.zf) goto L_10c5e214;
  /* 10c5e203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e205 mov edx, dword ptr [0x10c7e640] */
  EDX = (r32((uint32_t)(0x10c7e640)));
  /* 10c5e20b push edx */
  push32((uint32_t)(EDX));
  /* 10c5e20c call 0x10c53100 */
  push32(0x10c5e211u); f_10c53100();
  /* 10c5e211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5e214:;
  /* 10c5e214 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5e217 mov dword ptr [0x10c7e640], eax */
  w32((uint32_t)(0x10c7e640), (EAX));
  /* 10c5e21c cmp dword ptr [0x10c7e644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e223 je 0x10c5e236 */
  if (C.zf) goto L_10c5e236;
  /* 10c5e225 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e227 mov ecx, dword ptr [0x10c7e644] */
  ECX = (r32((uint32_t)(0x10c7e644)));
  /* 10c5e22d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e22e call 0x10c53100 */
  push32(0x10c5e233u); f_10c53100();
  /* 10c5e233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5e236:;
  /* 10c5e236 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5e239 mov dword ptr [0x10c7e644], edx */
  w32((uint32_t)(0x10c7e644), (EDX));
  /* 10c5e23f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e241 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5e244 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e245 call 0x10c53100 */
  push32(0x10c5e24au); f_10c53100();
  /* 10c5e24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e24d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e24f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5e252 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e253 call 0x10c53100 */
  push32(0x10c5e258u); f_10c53100();
  /* 10c5e258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e25b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e25d jmp 0x10c5e2ec */
  goto L_10c5e2ec;
L_10c5e262:;
  /* 10c5e262 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e264 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c5e267 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e268 call 0x10c53100 */
  push32(0x10c5e26du); f_10c53100();
  /* 10c5e26d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e270 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e272 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c5e275 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e276 call 0x10c53100 */
  push32(0x10c5e27bu); f_10c53100();
  /* 10c5e27b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e27e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e280 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c5e283 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e284 call 0x10c53100 */
  push32(0x10c5e289u); f_10c53100();
  /* 10c5e289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e28c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e28e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c5e291 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e292 call 0x10c53100 */
  push32(0x10c5e297u); f_10c53100();
  /* 10c5e297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e29a mov eax, 1 */
  EAX = (0x1u);
  /* 10c5e29f jmp 0x10c5e2ec */
  goto L_10c5e2ec;
L_10c5e2a1:;
  /* 10c5e2a1 mov dword ptr [0x10c7cc98], 0x10c7cca2 */
  w32((uint32_t)(0x10c7cc98), (0x10c7cca2u));
  /* 10c5e2ab mov dword ptr [0x10c7cc9c], 0x10c7cca2 */
  w32((uint32_t)(0x10c7cc9c), (0x10c7cca2u));
  /* 10c5e2b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e2b7 mov eax, dword ptr [0x10c7e640] */
  EAX = (r32((uint32_t)(0x10c7e640)));
  /* 10c5e2bc push eax */
  push32((uint32_t)(EAX));
  /* 10c5e2bd call 0x10c53100 */
  push32(0x10c5e2c2u); f_10c53100();
  /* 10c5e2c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e2c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5e2c7 mov ecx, dword ptr [0x10c7e644] */
  ECX = (r32((uint32_t)(0x10c7e644)));
  /* 10c5e2cd push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e2ce call 0x10c53100 */
  push32(0x10c5e2d3u); f_10c53100();
  /* 10c5e2d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e2d6 mov dword ptr [0x10c7e640], 0 */
  w32((uint32_t)(0x10c7e640), (0x0u));
  /* 10c5e2e0 mov dword ptr [0x10c7e644], 0 */
  w32((uint32_t)(0x10c7e644), (0x0u));
  /* 10c5e2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5e2ec:;
  /* 10c5e2ec mov esp, ebp */
  ESP = (EBP);
  /* 10c5e2ee pop ebp */
  EBP = (pop32());
  /* 10c5e2ef ret  */
  ESPCHK(0x10c5df50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x10c5e2f0 (7 bytes, 5 insns) */
void f_10c5e2f0(void) {
  FTRACE(0x10c5e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e2f5 pop ebp */
  EBP = (pop32());
  /* 10c5e2f6 ret  */
  ESPCHK(0x10c5e2f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10c5e300 (129 bytes, 56 insns) */
void f_10c5e300(void) {
  FTRACE(0x10c5e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e300 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c5e304 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c5e308 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c5e30e jne 0x10c5e34c */
  if (!C.zf) goto L_10c5e34c;
L_10c5e310:;
  /* 10c5e310 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5e312 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e314 jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e318 je 0x10c5e340 */
  if (C.zf) goto L_10c5e340;
  /* 10c5e31a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e31d jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e31f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c5e321 je 0x10c5e340 */
  if (C.zf) goto L_10c5e340;
  /* 10c5e323 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c5e326 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e329 jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e32b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e32d je 0x10c5e340 */
  if (C.zf) goto L_10c5e340;
  /* 10c5e32f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e332 jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e334 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e337 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e33a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c5e33c jne 0x10c5e310 */
  if (!C.zf) goto L_10c5e310;
  /* 10c5e33e mov edi, edi */
  EDI = (EDI);
L_10c5e340:;
  /* 10c5e340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e342 ret  */
  ESPCHK(0x10c5e300u, _esp0);
  ESP += 4; return;
  /* 10c5e343 nop  */
  /* nop */
L_10c5e344:;
  /* 10c5e344 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e346 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5e348 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10c5e349 ret  */
  ESPCHK(0x10c5e300u, _esp0);
  ESP += 4; return;
  /* 10c5e34a mov edi, edi */
  EDI = (EDI);
L_10c5e34c:;
  /* 10c5e34c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10c5e352 je 0x10c5e368 */
  if (C.zf) goto L_10c5e368;
  /* 10c5e354 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5e356 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c5e357 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e359 jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e35b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c5e35c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e35e je 0x10c5e340 */
  if (C.zf) goto L_10c5e340;
  /* 10c5e360 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10c5e366 je 0x10c5e310 */
  if (C.zf) goto L_10c5e310;
L_10c5e368:;
  /* 10c5e368 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10c5e36b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e36e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e370 jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e372 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e374 je 0x10c5e340 */
  if (C.zf) goto L_10c5e340;
  /* 10c5e376 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e379 jne 0x10c5e344 */
  if (!C.zf) goto L_10c5e344;
  /* 10c5e37b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c5e37d je 0x10c5e340 */
  if (C.zf) goto L_10c5e340;
  /* 10c5e37f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e382 jmp 0x10c5e310 */
  goto L_10c5e310;
}

/* FUN_1000e390 @ 0x10c5e390 (62 bytes, 35 insns) */
void f_10c5e390(void) {
  FTRACE(0x10c5e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e390 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e391 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e393 push esi */
  push32((uint32_t)(ESI));
  /* 10c5e394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e396 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e397 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e398 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e399 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e39a push eax */
  push32((uint32_t)(EAX));
  /* 10c5e39b push eax */
  push32((uint32_t)(EAX));
  /* 10c5e39c push eax */
  push32((uint32_t)(EAX));
  /* 10c5e39d push eax */
  push32((uint32_t)(EAX));
  /* 10c5e39e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5e3a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5e3a4:;
  /* 10c5e3a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5e3a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e3a8 je 0x10c5e3b1 */
  if (C.zf) goto L_10c5e3b1;
  /* 10c5e3aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c5e3ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10c5e3ab");
  /* 10c5e3af jmp 0x10c5e3a4 */
  goto L_10c5e3a4;
L_10c5e3b1:;
  /* 10c5e3b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e3b4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e3b7 nop  */
  /* nop */
L_10c5e3b8:;
  /* 10c5e3b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c5e3b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5e3bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e3bd je 0x10c5e3c6 */
  if (C.zf) goto L_10c5e3c6;
  /* 10c5e3bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c5e3c0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10c5e3c0");
  /* 10c5e3c4 jae 0x10c5e3b8 */
  if (!C.cf) goto L_10c5e3b8;
L_10c5e3c6:;
  /* 10c5e3c6 mov eax, ecx */
  EAX = (ECX);
  /* 10c5e3c8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e3cb pop esi */
  ESI = (pop32());
  /* 10c5e3cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5e3cd ret  */
  ESPCHK(0x10c5e390u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10c5e3d0 (56 bytes, 31 insns) */
void f_10c5e3d0(void) {
  FTRACE(0x10c5e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e3d3 push edi */
  push32((uint32_t)(EDI));
  /* 10c5e3d4 push esi */
  push32((uint32_t)(ESI));
  /* 10c5e3d5 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5e3d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5e3d9 jecxz 0x10c5e401 */
  x86_unimpl("jecxz @ 0x10c5e3d9");
  /* 10c5e3db mov ebx, ecx */
  EBX = (ECX);
  /* 10c5e3dd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e3e0 mov esi, edi */
  ESI = (EDI);
  /* 10c5e3e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e3e4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10c5e3e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5e3e8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e3ea mov edi, esi */
  EDI = (ESI);
  /* 10c5e3ec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5e3ef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10c5e3f1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10c5e3f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e3f6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5e3f9 ja 0x10c5e3ff */
  if ((!C.cf&&!C.zf)) goto L_10c5e3ff;
  /* 10c5e3fb je 0x10c5e401 */
  if (C.zf) goto L_10c5e401;
  /* 10c5e3fd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c5e3fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10c5e3ff:;
  /* 10c5e3ff not ecx */
  ECX = (~(ECX));
L_10c5e401:;
  /* 10c5e401 mov eax, ecx */
  EAX = (ECX);
  /* 10c5e403 pop ebx */
  EBX = (pop32());
  /* 10c5e404 pop esi */
  ESI = (pop32());
  /* 10c5e405 pop edi */
  EDI = (pop32());
  /* 10c5e406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5e407 ret  */
  ESPCHK(0x10c5e3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e410 @ 0x10c5e410 (58 bytes, 32 insns) */
void f_10c5e410(void) {
  FTRACE(0x10c5e410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e410 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e411 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e413 push esi */
  push32((uint32_t)(ESI));
  /* 10c5e414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e416 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e417 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e418 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e419 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e41a push eax */
  push32((uint32_t)(EAX));
  /* 10c5e41b push eax */
  push32((uint32_t)(EAX));
  /* 10c5e41c push eax */
  push32((uint32_t)(EAX));
  /* 10c5e41d push eax */
  push32((uint32_t)(EAX));
  /* 10c5e41e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5e421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c5e424:;
  /* 10c5e424 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5e426 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e428 je 0x10c5e431 */
  if (C.zf) goto L_10c5e431;
  /* 10c5e42a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c5e42b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10c5e42b");
  /* 10c5e42f jmp 0x10c5e424 */
  goto L_10c5e424;
L_10c5e431:;
  /* 10c5e431 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10c5e434:;
  /* 10c5e434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c5e436 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c5e438 je 0x10c5e444 */
  if (C.zf) goto L_10c5e444;
  /* 10c5e43a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c5e43b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10c5e43b");
  /* 10c5e43f jae 0x10c5e434 */
  if (!C.cf) goto L_10c5e434;
  /* 10c5e441 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10c5e444:;
  /* 10c5e444 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e447 pop esi */
  ESI = (pop32());
  /* 10c5e448 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c5e449 ret  */
  ESPCHK(0x10c5e410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e450 @ 0x10c5e450 (512 bytes, 147 insns) */
void f_10c5e450(void) {
  FTRACE(0x10c5e450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e450 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e451 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e456 cmp dword ptr [0x10c7e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e45d jne 0x10c5e482 */
  if (!C.zf) goto L_10c5e482;
  /* 10c5e45f call 0x10c5ef20 */
  push32(0x10c5e464u); f_10c5ef20();
  /* 10c5e464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e466 je 0x10c5e472 */
  if (C.zf) goto L_10c5e472;
  /* 10c5e468 mov eax, dword ptr [0x10c80308] */
  EAX = (r32((uint32_t)(0x10c80308)));
  /* 10c5e46d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5e470 jmp 0x10c5e479 */
  goto L_10c5e479;
L_10c5e472:;
  /* 10c5e472 mov dword ptr [ebp - 8], 0x10c5ef70 */
  w32((uint32_t)(EBP + -0x8), (0x10c5ef70u));
L_10c5e479:;
  /* 10c5e479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5e47c mov dword ptr [0x10c7e68c], ecx */
  w32((uint32_t)(0x10c7e68c), (ECX));
L_10c5e482:;
  /* 10c5e482 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e486 jne 0x10c5e492 */
  if (!C.zf) goto L_10c5e492;
  /* 10c5e488 call 0x10c5ed70 */
  push32(0x10c5e48du); f_10c5ed70();
  /* 10c5e48d jmp 0x10c5e55e */
  goto L_10c5e55e;
L_10c5e492:;
  /* 10c5e492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e495 mov dword ptr [0x10c7e67c], edx */
  w32((uint32_t)(0x10c7e67c), (EDX));
  /* 10c5e49b cmp dword ptr [0x10c7e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e4a2 je 0x10c5e4c4 */
  if (C.zf) goto L_10c5e4c4;
  /* 10c5e4a4 mov eax, dword ptr [0x10c7e67c] */
  EAX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e4a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5e4ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5e4ae je 0x10c5e4c4 */
  if (C.zf) goto L_10c5e4c4;
  /* 10c5e4b0 push 0x10c7e67c */
  push32((uint32_t)(0x10c7e67cu));
  /* 10c5e4b5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c5e4b7 push 0x10c7da90 */
  push32((uint32_t)(0x10c7da90u));
  /* 10c5e4bc call 0x10c5e650 */
  push32(0x10c5e4c1u); f_10c5e650();
  /* 10c5e4c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5e4c4:;
  /* 10c5e4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e4c7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e4ca mov dword ptr [0x10c7e680], edx */
  w32((uint32_t)(0x10c7e680), (EDX));
  /* 10c5e4d0 cmp dword ptr [0x10c7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e4d7 je 0x10c5e4f9 */
  if (C.zf) goto L_10c5e4f9;
  /* 10c5e4d9 mov eax, dword ptr [0x10c7e680] */
  EAX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5e4de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5e4e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5e4e3 je 0x10c5e4f9 */
  if (C.zf) goto L_10c5e4f9;
  /* 10c5e4e5 push 0x10c7e680 */
  push32((uint32_t)(0x10c7e680u));
  /* 10c5e4ea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c5e4ec push 0x10c7d9d8 */
  push32((uint32_t)(0x10c7d9d8u));
  /* 10c5e4f1 call 0x10c5e650 */
  push32(0x10c5e4f6u); f_10c5e650();
  /* 10c5e4f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5e4f9:;
  /* 10c5e4f9 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
  /* 10c5e503 cmp dword ptr [0x10c7e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e50a je 0x10c5e53d */
  if (C.zf) goto L_10c5e53d;
  /* 10c5e50c mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e512 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5e515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e517 je 0x10c5e53d */
  if (C.zf) goto L_10c5e53d;
  /* 10c5e519 cmp dword ptr [0x10c7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e520 je 0x10c5e536 */
  if (C.zf) goto L_10c5e536;
  /* 10c5e522 mov ecx, dword ptr [0x10c7e680] */
  ECX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5e528 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5e52b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5e52d je 0x10c5e536 */
  if (C.zf) goto L_10c5e536;
  /* 10c5e52f call 0x10c5e6e0 */
  push32(0x10c5e534u); f_10c5e6e0();
  /* 10c5e534 jmp 0x10c5e53b */
  goto L_10c5e53b;
L_10c5e536:;
  /* 10c5e536 call 0x10c5ead0 */
  push32(0x10c5e53bu); f_10c5ead0();
L_10c5e53b:;
  /* 10c5e53b jmp 0x10c5e55e */
  goto L_10c5e55e;
L_10c5e53d:;
  /* 10c5e53d cmp dword ptr [0x10c7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e544 je 0x10c5e559 */
  if (C.zf) goto L_10c5e559;
  /* 10c5e546 mov eax, dword ptr [0x10c7e680] */
  EAX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5e54b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5e54e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5e550 je 0x10c5e559 */
  if (C.zf) goto L_10c5e559;
  /* 10c5e552 call 0x10c5ec70 */
  push32(0x10c5e557u); f_10c5ec70();
  /* 10c5e557 jmp 0x10c5e55e */
  goto L_10c5e55e;
L_10c5e559:;
  /* 10c5e559 call 0x10c5ed70 */
  push32(0x10c5e55eu); f_10c5ed70();
L_10c5e55e:;
  /* 10c5e55e cmp dword ptr [0x10c7e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e565 jne 0x10c5e56e */
  if (!C.zf) goto L_10c5e56e;
  /* 10c5e567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e569 jmp 0x10c5e64c */
  goto L_10c5e64c;
L_10c5e56e:;
  /* 10c5e56e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e571 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e577 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e578 call 0x10c5eda0 */
  push32(0x10c5e57du); f_10c5eda0();
  /* 10c5e57d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e580 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5e583 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e587 je 0x10c5e59c */
  if (C.zf) goto L_10c5e59c;
  /* 10c5e589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e58c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e591 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e592 call dword ptr [0x10c80314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80314))), 0x10c5e598u);
  /* 10c5e598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e59a jne 0x10c5e5a3 */
  if (!C.zf) goto L_10c5e5a3;
L_10c5e59c:;
  /* 10c5e59c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e59e jmp 0x10c5e64c */
  goto L_10c5e64c;
L_10c5e5a3:;
  /* 10c5e5a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5e5a5 mov ecx, dword ptr [0x10c7e66c] */
  ECX = (r32((uint32_t)(0x10c7e66c)));
  /* 10c5e5ab push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e5ac call dword ptr [0x10c80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80310))), 0x10c5e5b2u);
  /* 10c5e5b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e5b4 jne 0x10c5e5bd */
  if (!C.zf) goto L_10c5e5bd;
  /* 10c5e5b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e5b8 jmp 0x10c5e64c */
  goto L_10c5e64c;
L_10c5e5bd:;
  /* 10c5e5bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e5c1 je 0x10c5e5e8 */
  if (C.zf) goto L_10c5e5e8;
  /* 10c5e5c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5e5c6 mov ax, word ptr [0x10c7e66c] */
  AX = (r16((uint32_t)(0x10c7e66c)));
  /* 10c5e5cc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10c5e5cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5e5d2 mov dx, word ptr [0x10c7e688] */
  DX = (r16((uint32_t)(0x10c7e688)));
  /* 10c5e5d9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10c5e5dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5e5e0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10c5e5e4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10c5e5e8:;
  /* 10c5e5e8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e5ec je 0x10c5e647 */
  if (C.zf) goto L_10c5e647;
  /* 10c5e5ee push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c5e5f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5e5f3 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e5f4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10c5e5f9 mov eax, dword ptr [0x10c7e66c] */
  EAX = (r32((uint32_t)(0x10c7e66c)));
  /* 10c5e5fe push eax */
  push32((uint32_t)(EAX));
  /* 10c5e5ff call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5e605u);
  /* 10c5e605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e607 jne 0x10c5e60d */
  if (!C.zf) goto L_10c5e60d;
  /* 10c5e609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e60b jmp 0x10c5e64c */
  goto L_10c5e64c;
L_10c5e60d:;
  /* 10c5e60d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c5e60f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5e612 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e615 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e616 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10c5e61b mov edx, dword ptr [0x10c7e688] */
  EDX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5e621 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e622 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5e628u);
  /* 10c5e628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e62a jne 0x10c5e630 */
  if (!C.zf) goto L_10c5e630;
  /* 10c5e62c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e62e jmp 0x10c5e64c */
  goto L_10c5e64c;
L_10c5e630:;
  /* 10c5e630 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c5e632 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5e635 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e63a push eax */
  push32((uint32_t)(EAX));
  /* 10c5e63b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e63e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e63f call 0x10c551b0 */
  push32(0x10c5e644u); f_10c551b0();
  /* 10c5e644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5e647:;
  /* 10c5e647 mov eax, 1 */
  EAX = (0x1u);
L_10c5e64c:;
  /* 10c5e64c mov esp, ebp */
  ESP = (EBP);
  /* 10c5e64e pop ebp */
  EBP = (pop32());
  /* 10c5e64f ret  */
  ESPCHK(0x10c5e450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e650 @ 0x10c5e650 (130 bytes, 47 insns) */
void f_10c5e650(void) {
  FTRACE(0x10c5e650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e650 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e651 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e656 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c5e65d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c5e664:;
  /* 10c5e664 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5e667 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e66a jg 0x10c5e6ce */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5e6ce;
  /* 10c5e66c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e670 je 0x10c5e6ce */
  if (C.zf) goto L_10c5e6ce;
  /* 10c5e672 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5e675 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e678 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5e679 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e67b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5e67d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5e680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e686 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10c5e689 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e68a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5e68d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5e68f push edx */
  push32((uint32_t)(EDX));
  /* 10c5e690 call 0x10c60d40 */
  push32(0x10c5e695u); f_10c60d40();
  /* 10c5e695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e698 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5e69b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e69f jne 0x10c5e6b2 */
  if (!C.zf) goto L_10c5e6b2;
  /* 10c5e6a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e6a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e6a7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10c5e6ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5e6ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5e6b0 jmp 0x10c5e6cc */
  goto L_10c5e6cc;
L_10c5e6b2:;
  /* 10c5e6b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e6b6 jge 0x10c5e6c3 */
  if ((C.sf==C.of)) goto L_10c5e6c3;
  /* 10c5e6b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e6bb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e6be mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c5e6c1 jmp 0x10c5e6cc */
  goto L_10c5e6cc;
L_10c5e6c3:;
  /* 10c5e6c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e6c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e6c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c5e6cc:;
  /* 10c5e6cc jmp 0x10c5e664 */
  goto L_10c5e664;
L_10c5e6ce:;
  /* 10c5e6ce mov esp, ebp */
  ESP = (EBP);
  /* 10c5e6d0 pop ebp */
  EBP = (pop32());
  /* 10c5e6d1 ret  */
  ESPCHK(0x10c5e650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6e0 @ 0x10c5e6e0 (186 bytes, 50 insns) */
void f_10c5e6e0(void) {
  FTRACE(0x10c5e6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e6e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e6e4 mov eax, dword ptr [0x10c7e67c] */
  EAX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e6e9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e6ea call 0x10c554a0 */
  push32(0x10c5e6efu); f_10c554a0();
  /* 10c5e6ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e6f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e6f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e6f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c5e6fa mov dword ptr [0x10c7e678], ecx */
  w32((uint32_t)(0x10c7e678), (ECX));
  /* 10c5e700 mov edx, dword ptr [0x10c7e680] */
  EDX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5e706 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e707 call 0x10c554a0 */
  push32(0x10c5e70cu); f_10c554a0();
  /* 10c5e70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e70f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e711 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e714 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c5e717 mov dword ptr [0x10c7e670], ecx */
  w32((uint32_t)(0x10c7e670), (ECX));
  /* 10c5e71d mov dword ptr [0x10c7e66c], 0 */
  w32((uint32_t)(0x10c7e66c), (0x0u));
  /* 10c5e727 cmp dword ptr [0x10c7e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e72e je 0x10c5e739 */
  if (C.zf) goto L_10c5e739;
  /* 10c5e730 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c5e737 jmp 0x10c5e74b */
  goto L_10c5e74b;
L_10c5e739:;
  /* 10c5e739 mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e73f push edx */
  push32((uint32_t)(EDX));
  /* 10c5e740 call 0x10c5f180 */
  push32(0x10c5e745u); f_10c5f180();
  /* 10c5e745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5e74b:;
  /* 10c5e74b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5e74e mov dword ptr [0x10c7e674], eax */
  w32((uint32_t)(0x10c7e674), (EAX));
  /* 10c5e753 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5e755 push 0x10c5e7a0 */
  push32((uint32_t)(0x10c5e7a0u));
  /* 10c5e75a call dword ptr [0x10c80318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80318))), 0x10c5e760u);
  /* 10c5e760 mov ecx, dword ptr [0x10c7e684] */
  ECX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e766 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e76c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5e76e je 0x10c5e78c */
  if (C.zf) goto L_10c5e78c;
  /* 10c5e770 mov edx, dword ptr [0x10c7e684] */
  EDX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e776 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e77c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5e77e je 0x10c5e78c */
  if (C.zf) goto L_10c5e78c;
  /* 10c5e780 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e785 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5e788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e78a jne 0x10c5e796 */
  if (!C.zf) goto L_10c5e796;
L_10c5e78c:;
  /* 10c5e78c mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
L_10c5e796:;
  /* 10c5e796 mov esp, ebp */
  ESP = (EBP);
  /* 10c5e798 pop ebp */
  EBP = (pop32());
  /* 10c5e799 ret  */
  ESPCHK(0x10c5e6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7a0 @ 0x10c5e7a0 (804 bytes, 220 insns) */
void f_10c5e7a0(void) {
  FTRACE(0x10c5e7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5e7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5e7a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5e7a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e7a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5e7a9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e7aa call 0x10c5f100 */
  push32(0x10c5e7afu); f_10c5f100();
  /* 10c5e7af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e7b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c5e7b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c5e7b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5e7ba push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e7bb mov edx, dword ptr [0x10c7e670] */
  EDX = (r32((uint32_t)(0x10c7e670)));
  /* 10c5e7c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5e7c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e7c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e7cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e7d1 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e7d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e7d5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e7d6 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5e7dcu);
  /* 10c5e7dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e7de jne 0x10c5e7f4 */
  if (!C.zf) goto L_10c5e7f4;
  /* 10c5e7e0 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
  /* 10c5e7ea mov eax, 1 */
  EAX = (0x1u);
  /* 10c5e7ef jmp 0x10c5eabe */
  goto L_10c5eabe;
L_10c5e7f4:;
  /* 10c5e7f4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5e7f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e7f8 mov edx, dword ptr [0x10c7e680] */
  EDX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5e7fe push edx */
  push32((uint32_t)(EDX));
  /* 10c5e7ff call 0x10c60d40 */
  push32(0x10c5e804u); f_10c60d40();
  /* 10c5e804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e809 jne 0x10c5e92f */
  if (!C.zf) goto L_10c5e92f;
  /* 10c5e80f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c5e811 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c5e814 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e815 mov ecx, dword ptr [0x10c7e678] */
  ECX = (r32((uint32_t)(0x10c7e678)));
  /* 10c5e81b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5e81d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e81f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e825 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e82b push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e82c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e82f push edx */
  push32((uint32_t)(EDX));
  /* 10c5e830 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5e836u);
  /* 10c5e836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e838 jne 0x10c5e84e */
  if (!C.zf) goto L_10c5e84e;
  /* 10c5e83a mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
  /* 10c5e844 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5e849 jmp 0x10c5eabe */
  goto L_10c5eabe;
L_10c5e84e:;
  /* 10c5e84e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c5e851 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e852 mov ecx, dword ptr [0x10c7e67c] */
  ECX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e858 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e859 call 0x10c60d40 */
  push32(0x10c5e85eu); f_10c60d40();
  /* 10c5e85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e863 jne 0x10c5e890 */
  if (!C.zf) goto L_10c5e890;
  /* 10c5e865 mov edx, dword ptr [0x10c7e684] */
  EDX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e86b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e871 mov dword ptr [0x10c7e684], edx */
  w32((uint32_t)(0x10c7e684), (EDX));
  /* 10c5e877 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e87a mov dword ptr [0x10c7e688], eax */
  w32((uint32_t)(0x10c7e688), (EAX));
  /* 10c5e87f mov ecx, dword ptr [0x10c7e688] */
  ECX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5e885 mov dword ptr [0x10c7e66c], ecx */
  w32((uint32_t)(0x10c7e66c), (ECX));
  /* 10c5e88b jmp 0x10c5e92f */
  goto L_10c5e92f;
L_10c5e890:;
  /* 10c5e890 mov edx, dword ptr [0x10c7e684] */
  EDX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e896 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5e89b jne 0x10c5e92f */
  if (!C.zf) goto L_10c5e92f;
  /* 10c5e8a1 cmp dword ptr [0x10c7e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e8a8 je 0x10c5e8fd */
  if (C.zf) goto L_10c5e8fd;
  /* 10c5e8aa mov eax, dword ptr [0x10c7e674] */
  EAX = (r32((uint32_t)(0x10c7e674)));
  /* 10c5e8af push eax */
  push32((uint32_t)(EAX));
  /* 10c5e8b0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5e8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e8b4 mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e8ba push edx */
  push32((uint32_t)(EDX));
  /* 10c5e8bb call 0x10c60e10 */
  push32(0x10c5e8c0u); f_10c60e10();
  /* 10c5e8c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e8c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e8c5 jne 0x10c5e8fd */
  if (!C.zf) goto L_10c5e8fd;
  /* 10c5e8c7 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e8cc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10c5e8ce mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
  /* 10c5e8d3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e8d6 mov dword ptr [0x10c7e688], ecx */
  w32((uint32_t)(0x10c7e688), (ECX));
  /* 10c5e8dc mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e8e2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e8e3 call 0x10c554a0 */
  push32(0x10c5e8e8u); f_10c554a0();
  /* 10c5e8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e8eb cmp eax, dword ptr [0x10c7e674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7e674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e8f1 jne 0x10c5e8fb */
  if (!C.zf) goto L_10c5e8fb;
  /* 10c5e8f3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e8f6 mov dword ptr [0x10c7e66c], eax */
  w32((uint32_t)(0x10c7e66c), (EAX));
L_10c5e8fb:;
  /* 10c5e8fb jmp 0x10c5e92f */
  goto L_10c5e92f;
L_10c5e8fd:;
  /* 10c5e8fd mov ecx, dword ptr [0x10c7e684] */
  ECX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e903 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5e908 jne 0x10c5e92f */
  if (!C.zf) goto L_10c5e92f;
  /* 10c5e90a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e90d push edx */
  push32((uint32_t)(EDX));
  /* 10c5e90e call 0x10c5ee40 */
  push32(0x10c5e913u); f_10c5ee40();
  /* 10c5e913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e918 je 0x10c5e92f */
  if (C.zf) goto L_10c5e92f;
  /* 10c5e91a mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e91f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10c5e921 mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
  /* 10c5e926 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e929 mov dword ptr [0x10c7e688], ecx */
  w32((uint32_t)(0x10c7e688), (ECX));
L_10c5e92f:;
  /* 10c5e92f mov edx, dword ptr [0x10c7e684] */
  EDX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e935 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5e93b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e941 je 0x10c5eab1 */
  if (C.zf) goto L_10c5eab1;
  /* 10c5e947 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c5e949 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c5e94c push eax */
  push32((uint32_t)(EAX));
  /* 10c5e94d mov ecx, dword ptr [0x10c7e678] */
  ECX = (r32((uint32_t)(0x10c7e678)));
  /* 10c5e953 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5e955 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5e957 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5e95d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e963 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e964 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e967 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e968 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5e96eu);
  /* 10c5e96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e970 jne 0x10c5e986 */
  if (!C.zf) goto L_10c5e986;
  /* 10c5e972 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
  /* 10c5e97c mov eax, 1 */
  EAX = (0x1u);
  /* 10c5e981 jmp 0x10c5eabe */
  goto L_10c5eabe;
L_10c5e986:;
  /* 10c5e986 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c5e989 push eax */
  push32((uint32_t)(EAX));
  /* 10c5e98a mov ecx, dword ptr [0x10c7e67c] */
  ECX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e990 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5e991 call 0x10c60d40 */
  push32(0x10c5e996u); f_10c60d40();
  /* 10c5e996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5e99b jne 0x10c5ea50 */
  if (!C.zf) goto L_10c5ea50;
  /* 10c5e9a1 mov edx, dword ptr [0x10c7e684] */
  EDX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e9a7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c5e9aa mov dword ptr [0x10c7e684], edx */
  w32((uint32_t)(0x10c7e684), (EDX));
  /* 10c5e9b0 cmp dword ptr [0x10c7e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e9b7 je 0x10c5e9da */
  if (C.zf) goto L_10c5e9da;
  /* 10c5e9b9 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5e9be or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c5e9c1 mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
  /* 10c5e9c6 cmp dword ptr [0x10c7e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e9cd jne 0x10c5e9d8 */
  if (!C.zf) goto L_10c5e9d8;
  /* 10c5e9cf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e9d2 mov dword ptr [0x10c7e66c], ecx */
  w32((uint32_t)(0x10c7e66c), (ECX));
L_10c5e9d8:;
  /* 10c5e9d8 jmp 0x10c5ea4e */
  goto L_10c5ea4e;
L_10c5e9da:;
  /* 10c5e9da cmp dword ptr [0x10c7e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e9e1 je 0x10c5ea2f */
  if (C.zf) goto L_10c5ea2f;
  /* 10c5e9e3 mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5e9e9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5e9ea call 0x10c554a0 */
  push32(0x10c5e9efu); f_10c554a0();
  /* 10c5e9ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5e9f2 cmp eax, dword ptr [0x10c7e674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7e674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5e9f8 jne 0x10c5ea2f */
  if (!C.zf) goto L_10c5ea2f;
  /* 10c5e9fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5e9fc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5e9ff push eax */
  push32((uint32_t)(EAX));
  /* 10c5ea00 call 0x10c5ee90 */
  push32(0x10c5ea05u); f_10c5ee90();
  /* 10c5ea05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ea08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ea0a je 0x10c5ea2d */
  if (C.zf) goto L_10c5ea2d;
  /* 10c5ea0c mov ecx, dword ptr [0x10c7e684] */
  ECX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ea12 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c5ea15 mov dword ptr [0x10c7e684], ecx */
  w32((uint32_t)(0x10c7e684), (ECX));
  /* 10c5ea1b cmp dword ptr [0x10c7e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ea22 jne 0x10c5ea2d */
  if (!C.zf) goto L_10c5ea2d;
  /* 10c5ea24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ea27 mov dword ptr [0x10c7e66c], edx */
  w32((uint32_t)(0x10c7e66c), (EDX));
L_10c5ea2d:;
  /* 10c5ea2d jmp 0x10c5ea4e */
  goto L_10c5ea4e;
L_10c5ea2f:;
  /* 10c5ea2f mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ea34 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c5ea37 mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
  /* 10c5ea3c cmp dword ptr [0x10c7e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ea43 jne 0x10c5ea4e */
  if (!C.zf) goto L_10c5ea4e;
  /* 10c5ea45 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ea48 mov dword ptr [0x10c7e66c], ecx */
  w32((uint32_t)(0x10c7e66c), (ECX));
L_10c5ea4e:;
  /* 10c5ea4e jmp 0x10c5eab1 */
  goto L_10c5eab1;
L_10c5ea50:;
  /* 10c5ea50 cmp dword ptr [0x10c7e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ea57 jne 0x10c5eab1 */
  if (!C.zf) goto L_10c5eab1;
  /* 10c5ea59 cmp dword ptr [0x10c7e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ea60 je 0x10c5eab1 */
  if (C.zf) goto L_10c5eab1;
  /* 10c5ea62 mov edx, dword ptr [0x10c7e674] */
  EDX = (r32((uint32_t)(0x10c7e674)));
  /* 10c5ea68 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ea69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c5ea6c push eax */
  push32((uint32_t)(EAX));
  /* 10c5ea6d mov ecx, dword ptr [0x10c7e67c] */
  ECX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5ea73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ea74 call 0x10c60e10 */
  push32(0x10c5ea79u); f_10c60e10();
  /* 10c5ea79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ea7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ea7e jne 0x10c5eab1 */
  if (!C.zf) goto L_10c5eab1;
  /* 10c5ea80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ea82 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ea85 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ea86 call 0x10c5ee90 */
  push32(0x10c5ea8bu); f_10c5ee90();
  /* 10c5ea8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ea8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ea90 je 0x10c5eab1 */
  if (C.zf) goto L_10c5eab1;
  /* 10c5ea92 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ea97 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c5ea9a mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
  /* 10c5ea9f cmp dword ptr [0x10c7e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5eaa6 jne 0x10c5eab1 */
  if (!C.zf) goto L_10c5eab1;
  /* 10c5eaa8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5eaab mov dword ptr [0x10c7e66c], ecx */
  w32((uint32_t)(0x10c7e66c), (ECX));
L_10c5eab1:;
  /* 10c5eab1 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5eab6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5eab9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5eabb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5eabd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c5eabe:;
  /* 10c5eabe mov esp, ebp */
  ESP = (EBP);
  /* 10c5eac0 pop ebp */
  EBP = (pop32());
  /* 10c5eac1 ret 4 */
  ESPCHK(0x10c5e7a0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ead0 @ 0x10c5ead0 (116 bytes, 33 insns) */
void f_10c5ead0(void) {
  FTRACE(0x10c5ead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ead0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ead1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ead3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ead4 mov eax, dword ptr [0x10c7e67c] */
  EAX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5ead9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5eada call 0x10c554a0 */
  push32(0x10c5eadfu); f_10c554a0();
  /* 10c5eadf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5eae2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5eae4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5eae7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c5eaea mov dword ptr [0x10c7e678], ecx */
  w32((uint32_t)(0x10c7e678), (ECX));
  /* 10c5eaf0 cmp dword ptr [0x10c7e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5eaf7 je 0x10c5eb02 */
  if (C.zf) goto L_10c5eb02;
  /* 10c5eaf9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c5eb00 jmp 0x10c5eb14 */
  goto L_10c5eb14;
L_10c5eb02:;
  /* 10c5eb02 mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5eb08 push edx */
  push32((uint32_t)(EDX));
  /* 10c5eb09 call 0x10c5f180 */
  push32(0x10c5eb0eu); f_10c5f180();
  /* 10c5eb0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5eb11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5eb14:;
  /* 10c5eb14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5eb17 mov dword ptr [0x10c7e674], eax */
  w32((uint32_t)(0x10c7e674), (EAX));
  /* 10c5eb1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5eb1e push 0x10c5eb50 */
  push32((uint32_t)(0x10c5eb50u));
  /* 10c5eb23 call dword ptr [0x10c80318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80318))), 0x10c5eb29u);
  /* 10c5eb29 mov ecx, dword ptr [0x10c7e684] */
  ECX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5eb2f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5eb32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5eb34 jne 0x10c5eb40 */
  if (!C.zf) goto L_10c5eb40;
  /* 10c5eb36 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
L_10c5eb40:;
  /* 10c5eb40 mov esp, ebp */
  ESP = (EBP);
  /* 10c5eb42 pop ebp */
  EBP = (pop32());
  /* 10c5eb43 ret  */
  ESPCHK(0x10c5ead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x10c5eb50 (287 bytes, 86 insns) */
void f_10c5eb50(void) {
  FTRACE(0x10c5eb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5eb50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5eb51 mov ebp, esp */
  EBP = (ESP);
  /* 10c5eb53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5eb56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5eb59 push eax */
  push32((uint32_t)(EAX));
  /* 10c5eb5a call 0x10c5f100 */
  push32(0x10c5eb5fu); f_10c5f100();
  /* 10c5eb5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5eb62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c5eb65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c5eb67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5eb6a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5eb6b mov edx, dword ptr [0x10c7e678] */
  EDX = (r32((uint32_t)(0x10c7e678)));
  /* 10c5eb71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5eb73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5eb75 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5eb7b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5eb81 push edx */
  push32((uint32_t)(EDX));
  /* 10c5eb82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5eb85 push eax */
  push32((uint32_t)(EAX));
  /* 10c5eb86 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5eb8cu);
  /* 10c5eb8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5eb8e jne 0x10c5eba4 */
  if (!C.zf) goto L_10c5eba4;
  /* 10c5eb90 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
  /* 10c5eb9a mov eax, 1 */
  EAX = (0x1u);
  /* 10c5eb9f jmp 0x10c5ec69 */
  goto L_10c5ec69;
L_10c5eba4:;
  /* 10c5eba4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5eba7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5eba8 mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5ebae push edx */
  push32((uint32_t)(EDX));
  /* 10c5ebaf call 0x10c60d40 */
  push32(0x10c5ebb4u); f_10c60d40();
  /* 10c5ebb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ebb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ebb9 jne 0x10c5ebf9 */
  if (!C.zf) goto L_10c5ebf9;
  /* 10c5ebbb cmp dword ptr [0x10c7e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ebc2 jne 0x10c5ebd6 */
  if (!C.zf) goto L_10c5ebd6;
  /* 10c5ebc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5ebc6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ebca call 0x10c5ee90 */
  push32(0x10c5ebcfu); f_10c5ee90();
  /* 10c5ebcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ebd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ebd4 je 0x10c5ebf7 */
  if (C.zf) goto L_10c5ebf7;
L_10c5ebd6:;
  /* 10c5ebd6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ebd9 mov dword ptr [0x10c7e688], ecx */
  w32((uint32_t)(0x10c7e688), (ECX));
  /* 10c5ebdf mov edx, dword ptr [0x10c7e688] */
  EDX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5ebe5 mov dword ptr [0x10c7e66c], edx */
  w32((uint32_t)(0x10c7e66c), (EDX));
  /* 10c5ebeb mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ebf0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c5ebf2 mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
L_10c5ebf7:;
  /* 10c5ebf7 jmp 0x10c5ec5c */
  goto L_10c5ec5c;
L_10c5ebf9:;
  /* 10c5ebf9 cmp dword ptr [0x10c7e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ec00 jne 0x10c5ec5c */
  if (!C.zf) goto L_10c5ec5c;
  /* 10c5ec02 cmp dword ptr [0x10c7e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ec09 je 0x10c5ec5c */
  if (C.zf) goto L_10c5ec5c;
  /* 10c5ec0b mov ecx, dword ptr [0x10c7e674] */
  ECX = (r32((uint32_t)(0x10c7e674)));
  /* 10c5ec11 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ec12 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10c5ec15 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ec16 mov eax, dword ptr [0x10c7e67c] */
  EAX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5ec1b push eax */
  push32((uint32_t)(EAX));
  /* 10c5ec1c call 0x10c60e10 */
  push32(0x10c5ec21u); f_10c60e10();
  /* 10c5ec21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ec24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ec26 jne 0x10c5ec5c */
  if (!C.zf) goto L_10c5ec5c;
  /* 10c5ec28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5ec2a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ec2d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ec2e call 0x10c5ee90 */
  push32(0x10c5ec33u); f_10c5ee90();
  /* 10c5ec33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ec36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ec38 je 0x10c5ec5c */
  if (C.zf) goto L_10c5ec5c;
  /* 10c5ec3a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ec3d mov dword ptr [0x10c7e688], edx */
  w32((uint32_t)(0x10c7e688), (EDX));
  /* 10c5ec43 mov eax, dword ptr [0x10c7e688] */
  EAX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5ec48 mov dword ptr [0x10c7e66c], eax */
  w32((uint32_t)(0x10c7e66c), (EAX));
  /* 10c5ec4d mov ecx, dword ptr [0x10c7e684] */
  ECX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ec53 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5ec56 mov dword ptr [0x10c7e684], ecx */
  w32((uint32_t)(0x10c7e684), (ECX));
L_10c5ec5c:;
  /* 10c5ec5c mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ec61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ec64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5ec66 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ec68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c5ec69:;
  /* 10c5ec69 mov esp, ebp */
  ESP = (EBP);
  /* 10c5ec6b pop ebp */
  EBP = (pop32());
  /* 10c5ec6c ret 4 */
  ESPCHK(0x10c5eb50u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ec70 @ 0x10c5ec70 (69 bytes, 20 insns) */
void f_10c5ec70(void) {
  FTRACE(0x10c5ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ec71 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ec73 mov eax, dword ptr [0x10c7e680] */
  EAX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5ec78 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ec79 call 0x10c554a0 */
  push32(0x10c5ec7eu); f_10c554a0();
  /* 10c5ec7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ec81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5ec83 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ec86 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c5ec89 mov dword ptr [0x10c7e670], ecx */
  w32((uint32_t)(0x10c7e670), (ECX));
  /* 10c5ec8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5ec91 push 0x10c5ecc0 */
  push32((uint32_t)(0x10c5ecc0u));
  /* 10c5ec96 call dword ptr [0x10c80318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80318))), 0x10c5ec9cu);
  /* 10c5ec9c mov edx, dword ptr [0x10c7e684] */
  EDX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5eca2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5eca5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5eca7 jne 0x10c5ecb3 */
  if (!C.zf) goto L_10c5ecb3;
  /* 10c5eca9 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
L_10c5ecb3:;
  /* 10c5ecb3 pop ebp */
  EBP = (pop32());
  /* 10c5ecb4 ret  */
  ESPCHK(0x10c5ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecc0 @ 0x10c5ecc0 (172 bytes, 54 insns) */
void f_10c5ecc0(void) {
  FTRACE(0x10c5ecc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ecc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ecc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ecc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ecc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ecc9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ecca call 0x10c5f100 */
  push32(0x10c5eccfu); f_10c5f100();
  /* 10c5eccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ecd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c5ecd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c5ecd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5ecda push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ecdb mov edx, dword ptr [0x10c7e670] */
  EDX = (r32((uint32_t)(0x10c7e670)));
  /* 10c5ece1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5ece3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ece5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5eceb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ecf1 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ecf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ecf5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ecf6 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5ecfcu);
  /* 10c5ecfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ecfe jne 0x10c5ed11 */
  if (!C.zf) goto L_10c5ed11;
  /* 10c5ed00 mov dword ptr [0x10c7e684], 0 */
  w32((uint32_t)(0x10c7e684), (0x0u));
  /* 10c5ed0a mov eax, 1 */
  EAX = (0x1u);
  /* 10c5ed0f jmp 0x10c5ed66 */
  goto L_10c5ed66;
L_10c5ed11:;
  /* 10c5ed11 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c5ed14 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ed15 mov edx, dword ptr [0x10c7e680] */
  EDX = (r32((uint32_t)(0x10c7e680)));
  /* 10c5ed1b push edx */
  push32((uint32_t)(EDX));
  /* 10c5ed1c call 0x10c60d40 */
  push32(0x10c5ed21u); f_10c60d40();
  /* 10c5ed21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ed24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ed26 jne 0x10c5ed59 */
  if (!C.zf) goto L_10c5ed59;
  /* 10c5ed28 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ed2b push eax */
  push32((uint32_t)(EAX));
  /* 10c5ed2c call 0x10c5ee40 */
  push32(0x10c5ed31u); f_10c5ee40();
  /* 10c5ed31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ed34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ed36 je 0x10c5ed59 */
  if (C.zf) goto L_10c5ed59;
  /* 10c5ed38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c5ed3b mov dword ptr [0x10c7e688], ecx */
  w32((uint32_t)(0x10c7e688), (ECX));
  /* 10c5ed41 mov edx, dword ptr [0x10c7e688] */
  EDX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5ed47 mov dword ptr [0x10c7e66c], edx */
  w32((uint32_t)(0x10c7e66c), (EDX));
  /* 10c5ed4d mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ed52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c5ed54 mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
L_10c5ed59:;
  /* 10c5ed59 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ed5e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ed61 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c5ed63 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ed65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c5ed66:;
  /* 10c5ed66 mov esp, ebp */
  ESP = (EBP);
  /* 10c5ed68 pop ebp */
  EBP = (pop32());
  /* 10c5ed69 ret 4 */
  ESPCHK(0x10c5ecc0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ed70 @ 0x10c5ed70 (43 bytes, 11 insns) */
void f_10c5ed70(void) {
  FTRACE(0x10c5ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ed71 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ed73 mov eax, dword ptr [0x10c7e684] */
  EAX = (r32((uint32_t)(0x10c7e684)));
  /* 10c5ed78 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ed7d mov dword ptr [0x10c7e684], eax */
  w32((uint32_t)(0x10c7e684), (EAX));
  /* 10c5ed82 call dword ptr [0x10c8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8031c))), 0x10c5ed88u);
  /* 10c5ed88 mov dword ptr [0x10c7e688], eax */
  w32((uint32_t)(0x10c7e688), (EAX));
  /* 10c5ed8d mov ecx, dword ptr [0x10c7e688] */
  ECX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5ed93 mov dword ptr [0x10c7e66c], ecx */
  w32((uint32_t)(0x10c7e66c), (ECX));
  /* 10c5ed99 pop ebp */
  EBP = (pop32());
  /* 10c5ed9a ret  */
  ESPCHK(0x10c5ed70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eda0 @ 0x10c5eda0 (155 bytes, 57 insns) */
void f_10c5eda0(void) {
  FTRACE(0x10c5eda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5eda0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5eda1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5eda3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5eda6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5edaa je 0x10c5edcb */
  if (C.zf) goto L_10c5edcb;
  /* 10c5edac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5edaf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5edb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5edb4 je 0x10c5edcb */
  if (C.zf) goto L_10c5edcb;
  /* 10c5edb6 push 0x10c7a674 */
  push32((uint32_t)(0x10c7a674u));
  /* 10c5edbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5edbe push edx */
  push32((uint32_t)(EDX));
  /* 10c5edbf call 0x10c5e300 */
  push32(0x10c5edc4u); f_10c5e300();
  /* 10c5edc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5edc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5edc9 jne 0x10c5edf3 */
  if (!C.zf) goto L_10c5edf3;
L_10c5edcb:;
  /* 10c5edcb push 8 */
  push32((uint32_t)(0x8u));
  /* 10c5edcd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c5edd0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5edd1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10c5edd6 mov ecx, dword ptr [0x10c7e688] */
  ECX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5eddc push ecx */
  push32((uint32_t)(ECX));
  /* 10c5eddd call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5ede3u);
  /* 10c5ede3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ede5 jne 0x10c5edeb */
  if (!C.zf) goto L_10c5edeb;
  /* 10c5ede7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ede9 jmp 0x10c5ee37 */
  goto L_10c5ee37;
L_10c5edeb:;
  /* 10c5edeb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10c5edee mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c5edf1 jmp 0x10c5ee2b */
  goto L_10c5ee2b;
L_10c5edf3:;
  /* 10c5edf3 push 0x10c7a670 */
  push32((uint32_t)(0x10c7a670u));
  /* 10c5edf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5edfb push eax */
  push32((uint32_t)(EAX));
  /* 10c5edfc call 0x10c5e300 */
  push32(0x10c5ee01u); f_10c5e300();
  /* 10c5ee01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ee04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ee06 jne 0x10c5ee2b */
  if (!C.zf) goto L_10c5ee2b;
  /* 10c5ee08 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c5ee0a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c5ee0d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ee0e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c5ee10 mov edx, dword ptr [0x10c7e688] */
  EDX = (r32((uint32_t)(0x10c7e688)));
  /* 10c5ee16 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ee17 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5ee1du);
  /* 10c5ee1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ee1f jne 0x10c5ee25 */
  if (!C.zf) goto L_10c5ee25;
  /* 10c5ee21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ee23 jmp 0x10c5ee37 */
  goto L_10c5ee37;
L_10c5ee25:;
  /* 10c5ee25 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c5ee28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c5ee2b:;
  /* 10c5ee2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ee2e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ee2f call 0x10c60f20 */
  push32(0x10c5ee34u); f_10c60f20();
  /* 10c5ee34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5ee37:;
  /* 10c5ee37 mov esp, ebp */
  ESP = (EBP);
  /* 10c5ee39 pop ebp */
  EBP = (pop32());
  /* 10c5ee3a ret  */
  ESPCHK(0x10c5eda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x10c5ee40 (79 bytes, 26 insns) */
void f_10c5ee40(void) {
  FTRACE(0x10c5ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ee40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ee41 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ee43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ee46 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10c5ee4a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10c5ee4e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5ee55 jmp 0x10c5ee60 */
  goto L_10c5ee60;
L_10c5ee57:;
  /* 10c5ee57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ee5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ee5d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c5ee60:;
  /* 10c5ee60 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ee64 jae 0x10c5ee86 */
  if (!C.cf) goto L_10c5ee86;
  /* 10c5ee66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ee69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5ee6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5ee72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5ee74 mov cx, word ptr [eax*2 + 0x10c7d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10c7d9c4)));
  /* 10c5ee7c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ee7e jne 0x10c5ee84 */
  if (!C.zf) goto L_10c5ee84;
  /* 10c5ee80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ee82 jmp 0x10c5ee8b */
  goto L_10c5ee8b;
L_10c5ee84:;
  /* 10c5ee84 jmp 0x10c5ee57 */
  goto L_10c5ee57;
L_10c5ee86:;
  /* 10c5ee86 mov eax, 1 */
  EAX = (0x1u);
L_10c5ee8b:;
  /* 10c5ee8b mov esp, ebp */
  ESP = (EBP);
  /* 10c5ee8d pop ebp */
  EBP = (pop32());
  /* 10c5ee8e ret  */
  ESPCHK(0x10c5ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee90 @ 0x10c5ee90 (135 bytes, 48 insns) */
void f_10c5ee90(void) {
  FTRACE(0x10c5ee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ee90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ee91 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ee93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ee96 push esi */
  push32((uint32_t)(ESI));
  /* 10c5ee97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5ee9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ee9f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5eea4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5eea9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10c5eeac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5eeb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5eeb4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c5eeb6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10c5eeb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5eeba push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5eebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5eebf push edx */
  push32((uint32_t)(EDX));
  /* 10c5eec0 call dword ptr [0x10c7e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e68c))), 0x10c5eec6u);
  /* 10c5eec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5eec8 jne 0x10c5eece */
  if (!C.zf) goto L_10c5eece;
  /* 10c5eeca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5eecc jmp 0x10c5ef12 */
  goto L_10c5ef12;
L_10c5eece:;
  /* 10c5eece lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10c5eed1 push eax */
  push32((uint32_t)(EAX));
  /* 10c5eed2 call 0x10c5f100 */
  push32(0x10c5eed7u); f_10c5f100();
  /* 10c5eed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5eeda cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5eedd je 0x10c5ef0d */
  if (C.zf) goto L_10c5ef0d;
  /* 10c5eedf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5eee3 je 0x10c5ef0d */
  if (C.zf) goto L_10c5ef0d;
  /* 10c5eee5 mov ecx, dword ptr [0x10c7e67c] */
  ECX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5eeeb push ecx */
  push32((uint32_t)(ECX));
  /* 10c5eeec call 0x10c5f180 */
  push32(0x10c5eef1u); f_10c5f180();
  /* 10c5eef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5eef4 mov esi, eax */
  ESI = (EAX);
  /* 10c5eef6 mov edx, dword ptr [0x10c7e67c] */
  EDX = (r32((uint32_t)(0x10c7e67c)));
  /* 10c5eefc push edx */
  push32((uint32_t)(EDX));
  /* 10c5eefd call 0x10c554a0 */
  push32(0x10c5ef02u); f_10c554a0();
  /* 10c5ef02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ef05 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ef07 jne 0x10c5ef0d */
  if (!C.zf) goto L_10c5ef0d;
  /* 10c5ef09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5ef0b jmp 0x10c5ef12 */
  goto L_10c5ef12;
L_10c5ef0d:;
  /* 10c5ef0d mov eax, 1 */
  EAX = (0x1u);
L_10c5ef12:;
  /* 10c5ef12 pop esi */
  ESI = (pop32());
  /* 10c5ef13 mov esp, ebp */
  ESP = (EBP);
  /* 10c5ef15 pop ebp */
  EBP = (pop32());
  /* 10c5ef16 ret  */
  ESPCHK(0x10c5ee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x10c5ef20 (77 bytes, 18 insns) */
void f_10c5ef20(void) {
  FTRACE(0x10c5ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ef21 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ef23 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ef29 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10c5ef33 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10c5ef39 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ef3a call dword ptr [0x10c80320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80320))), 0x10c5ef40u);
  /* 10c5ef40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5ef42 je 0x10c5ef59 */
  if (C.zf) goto L_10c5ef59;
  /* 10c5ef44 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ef4b jne 0x10c5ef59 */
  if (!C.zf) goto L_10c5ef59;
  /* 10c5ef4d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10c5ef57 jmp 0x10c5ef63 */
  goto L_10c5ef63;
L_10c5ef59:;
  /* 10c5ef59 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10c5ef63:;
  /* 10c5ef63 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c5ef69 mov esp, ebp */
  ESP = (EBP);
  /* 10c5ef6b pop ebp */
  EBP = (pop32());
  /* 10c5ef6c ret  */
  ESPCHK(0x10c5ef20u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10c5ef70 (388 bytes, 118 insns) */
void f_10c5ef70(void) {
  FTRACE(0x10c5ef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5ef70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5ef71 mov ebp, esp */
  EBP = (ESP);
  /* 10c5ef73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5ef76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5ef7d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10c5ef84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c5ef8b:;
  /* 10c5ef8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5ef8e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ef91 jg 0x10c5f0d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5f0d8;
  /* 10c5ef97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5ef9a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ef9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5ef9e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5efa0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c5efa2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5efa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5efa8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5efab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5efae cmp edx, dword ptr [ecx + 0x10c7d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10c7d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efb4 jne 0x10c5f0ae */
  if (!C.zf) goto L_10c5f0ae;
  /* 10c5efba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5efbd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5efc0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efc4 ja 0x10c5efe7 */
  if ((!C.cf&&!C.zf)) goto L_10c5efe7;
  /* 10c5efc6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efca je 0x10c5f059 */
  if (C.zf) goto L_10c5f059;
  /* 10c5efd0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efd4 je 0x10c5f004 */
  if (C.zf) goto L_10c5f004;
  /* 10c5efd6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efda je 0x10c5f026 */
  if (C.zf) goto L_10c5f026;
  /* 10c5efdc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efe0 je 0x10c5f048 */
  if (C.zf) goto L_10c5f048;
  /* 10c5efe2 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5efe7:;
  /* 10c5efe7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5efee je 0x10c5f015 */
  if (C.zf) goto L_10c5f015;
  /* 10c5eff0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5eff7 je 0x10c5f037 */
  if (C.zf) goto L_10c5f037;
  /* 10c5eff9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f000 je 0x10c5f06a */
  if (C.zf) goto L_10c5f06a;
  /* 10c5f002 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f004:;
  /* 10c5f004 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f007 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f00a add ecx, 0x10c7d524 */
  { uint32_t _a=(ECX),_b=(0x10c7d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f010 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5f013 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f015:;
  /* 10c5f015 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f018 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f01b mov eax, dword ptr [edx + 0x10c7d52c] */
  EAX = (r32((uint32_t)(EDX + 0x10c7d52c)));
  /* 10c5f021 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5f024 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f026:;
  /* 10c5f026 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f029 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f02c add ecx, 0x10c7d530 */
  { uint32_t _a=(ECX),_b=(0x10c7d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f032 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5f035 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f037:;
  /* 10c5f037 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f03a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f03d mov eax, dword ptr [edx + 0x10c7d534] */
  EAX = (r32((uint32_t)(EDX + 0x10c7d534)));
  /* 10c5f043 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5f046 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f048:;
  /* 10c5f048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f04b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f04e add ecx, 0x10c7d538 */
  { uint32_t _a=(ECX),_b=(0x10c7d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f054 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5f057 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f059:;
  /* 10c5f059 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f05c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f05f add edx, 0x10c7d53c */
  { uint32_t _a=(EDX),_b=(0x10c7d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f065 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5f068 jmp 0x10c5f078 */
  goto L_10c5f078;
L_10c5f06a:;
  /* 10c5f06a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f06d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f070 add eax, 0x10c7d544 */
  { uint32_t _a=(EAX),_b=(0x10c7d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f075 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c5f078:;
  /* 10c5f078 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f07c je 0x10c5f084 */
  if (C.zf) goto L_10c5f084;
  /* 10c5f07e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f082 jge 0x10c5f086 */
  if ((C.sf==C.of)) goto L_10c5f086;
L_10c5f084:;
  /* 10c5f084 jmp 0x10c5f0d8 */
  goto L_10c5f0d8;
L_10c5f086:;
  /* 10c5f086 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5f089 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f08c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f08d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f090 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f091 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5f094 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f095 call 0x10c55e90 */
  push32(0x10c5f09au); f_10c55e90();
  /* 10c5f09a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f09d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5f0a0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f0a3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10c5f0a7 mov eax, 1 */
  EAX = (0x1u);
  /* 10c5f0ac jmp 0x10c5f0ee */
  goto L_10c5f0ee;
L_10c5f0ae:;
  /* 10c5f0ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f0b1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f0b7 cmp eax, dword ptr [edx + 0x10c7d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10c7d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f0bd jae 0x10c5f0ca */
  if (!C.cf) goto L_10c5f0ca;
  /* 10c5f0bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f0c2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f0c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5f0c8 jmp 0x10c5f0d3 */
  goto L_10c5f0d3;
L_10c5f0ca:;
  /* 10c5f0ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f0cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f0d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c5f0d3:;
  /* 10c5f0d3 jmp 0x10c5ef8b */
  goto L_10c5ef8b;
L_10c5f0d8:;
  /* 10c5f0d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5f0db push eax */
  push32((uint32_t)(EAX));
  /* 10c5f0dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5f0df push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f0e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5f0e3 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f0e7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f0e8 call dword ptr [0x10c80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80308))), 0x10c5f0eeu);
L_10c5f0ee:;
  /* 10c5f0ee mov esp, ebp */
  ESP = (EBP);
  /* 10c5f0f0 pop ebp */
  EBP = (pop32());
  /* 10c5f0f1 ret 0x10 */
  ESPCHK(0x10c5ef70u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f100 @ 0x10c5f100 (118 bytes, 42 insns) */
void f_10c5f100(void) {
  FTRACE(0x10c5f100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f100 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f101 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c5f10d:;
  /* 10c5f10d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f110 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c5f112 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10c5f115 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5f119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f11c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f11f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c5f122 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5f124 je 0x10c5f16f */
  if (C.zf) goto L_10c5f16f;
  /* 10c5f126 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5f12a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f12d jl 0x10c5f142 */
  if ((C.sf!=C.of)) goto L_10c5f142;
  /* 10c5f12f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5f133 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f136 jg 0x10c5f142 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5f142;
  /* 10c5f138 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c5f13b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c5f13d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10c5f140 jmp 0x10c5f15c */
  goto L_10c5f15c;
L_10c5f142:;
  /* 10c5f142 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5f146 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f149 jl 0x10c5f15c */
  if ((C.sf!=C.of)) goto L_10c5f15c;
  /* 10c5f14b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5f14f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f152 jg 0x10c5f15c */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5f15c;
  /* 10c5f154 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c5f157 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c5f159 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10c5f15c:;
  /* 10c5f15c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f15f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c5f162 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c5f166 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c5f16a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5f16d jmp 0x10c5f10d */
  goto L_10c5f10d;
L_10c5f16f:;
  /* 10c5f16f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f172 mov esp, ebp */
  ESP = (EBP);
  /* 10c5f174 pop ebp */
  EBP = (pop32());
  /* 10c5f175 ret  */
  ESPCHK(0x10c5f100u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10c5f180 (101 bytes, 36 insns) */
void f_10c5f180(void) {
  FTRACE(0x10c5f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f180 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f181 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f186 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5f18d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f190 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c5f192 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10c5f195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f198 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f19b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c5f19e:;
  /* 10c5f19e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c5f1a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f1a5 jl 0x10c5f1b0 */
  if ((C.sf!=C.of)) goto L_10c5f1b0;
  /* 10c5f1a7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c5f1ab cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f1ae jle 0x10c5f1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10c5f1c2;
L_10c5f1b0:;
  /* 10c5f1b0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c5f1b4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f1b7 jl 0x10c5f1de */
  if ((C.sf!=C.of)) goto L_10c5f1de;
  /* 10c5f1b9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c5f1bd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f1c0 jg 0x10c5f1de */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5f1de;
L_10c5f1c2:;
  /* 10c5f1c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f1c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f1c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5f1cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f1ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5f1d0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10c5f1d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f1d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f1d9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c5f1dc jmp 0x10c5f19e */
  goto L_10c5f19e;
L_10c5f1de:;
  /* 10c5f1de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f1e1 mov esp, ebp */
  ESP = (EBP);
  /* 10c5f1e3 pop ebp */
  EBP = (pop32());
  /* 10c5f1e4 ret  */
  ESPCHK(0x10c5f180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x10c5f1f0 (122 bytes, 39 insns) */
void f_10c5f1f0(void) {
  FTRACE(0x10c5f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f1f7 cmp eax, dword ptr [0x10c7ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f1fd jae 0x10c5f221 */
  if (!C.cf) goto L_10c5f221;
  /* 10c5f1ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f202 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c5f205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f208 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5f20b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f20e mov eax, dword ptr [ecx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c5f215 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c5f21a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5f21d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5f21f jne 0x10c5f23c */
  if (!C.zf) goto L_10c5f23c;
L_10c5f221:;
  /* 10c5f221 call 0x10c5a540 */
  push32(0x10c5f226u); f_10c5a540();
  /* 10c5f226 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c5f22c call 0x10c5a550 */
  push32(0x10c5f231u); f_10c5a550();
  /* 10c5f231 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5f237 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5f23a jmp 0x10c5f266 */
  goto L_10c5f266;
L_10c5f23c:;
  /* 10c5f23c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f23f push edx */
  push32((uint32_t)(EDX));
  /* 10c5f240 call 0x10c5bd60 */
  push32(0x10c5f245u); f_10c5bd60();
  /* 10c5f245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f24b push eax */
  push32((uint32_t)(EAX));
  /* 10c5f24c call 0x10c5f270 */
  push32(0x10c5f251u); f_10c5f270();
  /* 10c5f251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5f257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f25a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f25b call 0x10c5bdf0 */
  push32(0x10c5f260u); f_10c5bdf0();
  /* 10c5f260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5f266:;
  /* 10c5f266 mov esp, ebp */
  ESP = (EBP);
  /* 10c5f268 pop ebp */
  EBP = (pop32());
  /* 10c5f269 ret  */
  ESPCHK(0x10c5f1f0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10c5f270 (170 bytes, 59 insns) */
void f_10c5f270(void) {
  FTRACE(0x10c5f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f270 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f271 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f273 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f274 push esi */
  push32((uint32_t)(ESI));
  /* 10c5f275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f278 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f279 call 0x10c5bbe0 */
  push32(0x10c5f27eu); f_10c5bbe0();
  /* 10c5f27e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f281 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f284 je 0x10c5f2c3 */
  if (C.zf) goto L_10c5f2c3;
  /* 10c5f286 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f28a je 0x10c5f292 */
  if (C.zf) goto L_10c5f292;
  /* 10c5f28c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f290 jne 0x10c5f2ac */
  if (!C.zf) goto L_10c5f2ac;
L_10c5f292:;
  /* 10c5f292 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5f294 call 0x10c5bbe0 */
  push32(0x10c5f299u); f_10c5bbe0();
  /* 10c5f299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f29c mov esi, eax */
  ESI = (EAX);
  /* 10c5f29e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5f2a0 call 0x10c5bbe0 */
  push32(0x10c5f2a5u); f_10c5bbe0();
  /* 10c5f2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f2a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f2aa je 0x10c5f2c3 */
  if (C.zf) goto L_10c5f2c3;
L_10c5f2ac:;
  /* 10c5f2ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f2af push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f2b0 call 0x10c5bbe0 */
  push32(0x10c5f2b5u); f_10c5bbe0();
  /* 10c5f2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f2b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f2b9 call dword ptr [0x10c80324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80324))), 0x10c5f2bfu);
  /* 10c5f2bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5f2c1 je 0x10c5f2cc */
  if (C.zf) goto L_10c5f2cc;
L_10c5f2c3:;
  /* 10c5f2c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5f2ca jmp 0x10c5f2d5 */
  goto L_10c5f2d5;
L_10c5f2cc:;
  /* 10c5f2cc call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c5f2d2u);
  /* 10c5f2d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5f2d5:;
  /* 10c5f2d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f2d8 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f2d9 call 0x10c5bb00 */
  push32(0x10c5f2deu); f_10c5bb00();
  /* 10c5f2de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f2e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f2e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c5f2e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f2ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5f2ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5f2f0 mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5f2f7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10c5f2fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f300 je 0x10c5f313 */
  if (C.zf) goto L_10c5f313;
  /* 10c5f302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f305 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f306 call 0x10c5a4a0 */
  push32(0x10c5f30bu); f_10c5a4a0();
  /* 10c5f30b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f30e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5f311 jmp 0x10c5f315 */
  goto L_10c5f315;
L_10c5f313:;
  /* 10c5f313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5f315:;
  /* 10c5f315 pop esi */
  ESI = (pop32());
  /* 10c5f316 mov esp, ebp */
  ESP = (EBP);
  /* 10c5f318 pop ebp */
  EBP = (pop32());
  /* 10c5f319 ret  */
  ESPCHK(0x10c5f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x10c5f320 (146 bytes, 52 insns) */
void f_10c5f320(void) {
  FTRACE(0x10c5f320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f320 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f321 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f323 push ebx */
  push32((uint32_t)(EBX));
  /* 10c5f324 push esi */
  push32((uint32_t)(ESI));
  /* 10c5f325 push edi */
  push32((uint32_t)(EDI));
L_10c5f326:;
  /* 10c5f326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f32a jne 0x10c5f34a */
  if (!C.zf) goto L_10c5f34a;
  /* 10c5f32c push 0x10c79fb0 */
  push32((uint32_t)(0x10c79fb0u));
  /* 10c5f331 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5f333 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c5f335 push 0x10c7a678 */
  push32((uint32_t)(0x10c7a678u));
  /* 10c5f33a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5f33c call 0x10c51730 */
  push32(0x10c5f341u); f_10c51730();
  /* 10c5f341 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f344 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f347 jne 0x10c5f34a */
  if (!C.zf) goto L_10c5f34a;
  /* 10c5f349 int3  */
  x86_unimpl("int3 @ 0x10c5f349");
L_10c5f34a:;
  /* 10c5f34a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5f34c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5f34e jne 0x10c5f326 */
  if (!C.zf) goto L_10c5f326;
  /* 10c5f350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f353 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5f356 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5f35c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5f35e je 0x10c5f3ad */
  if (C.zf) goto L_10c5f3ad;
  /* 10c5f360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f363 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c5f366 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5f369 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5f36b je 0x10c5f3ad */
  if (C.zf) goto L_10c5f3ad;
  /* 10c5f36d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5f36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f372 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c5f375 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f376 call 0x10c53100 */
  push32(0x10c5f37bu); f_10c53100();
  /* 10c5f37b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f381 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5f384 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5f38a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f38d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c5f390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f393 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10c5f399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f39c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c5f3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f3a6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10c5f3ad:;
  /* 10c5f3ad pop edi */
  EDI = (pop32());
  /* 10c5f3ae pop esi */
  ESI = (pop32());
  /* 10c5f3af pop ebx */
  EBX = (pop32());
  /* 10c5f3b0 pop ebp */
  EBP = (pop32());
  /* 10c5f3b1 ret  */
  ESPCHK(0x10c5f320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x10c5f3c0 (289 bytes, 97 insns) */
void f_10c5f3c0(void) {
  FTRACE(0x10c5f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f3c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f3c6 push esi */
  push32((uint32_t)(ESI));
  /* 10c5f3c7 mov eax, dword ptr [0x10c7dc98] */
  EAX = (r32((uint32_t)(0x10c7dc98)));
  /* 10c5f3cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5f3cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5f3d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f3dd jmp 0x10c5f3e8 */
  goto L_10c5f3e8;
L_10c5f3df:;
  /* 10c5f3df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f3e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f3e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c5f3e8:;
  /* 10c5f3e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f3ec jae 0x10c5f421 */
  if (!C.cf) goto L_10c5f421;
  /* 10c5f3ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f3f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f3f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c5f3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f3f8 call 0x10c554a0 */
  push32(0x10c5f3fdu); f_10c554a0();
  /* 10c5f3fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f400 mov esi, eax */
  ESI = (EAX);
  /* 10c5f402 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f405 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f408 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10c5f40c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f40d call 0x10c554a0 */
  push32(0x10c5f412u); f_10c554a0();
  /* 10c5f412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f415 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f418 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c5f41c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5f41f jmp 0x10c5f3df */
  goto L_10c5f3df;
L_10c5f421:;
  /* 10c5f421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f427 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f428 call 0x10c52650 */
  push32(0x10c5f42du); f_10c52650();
  /* 10c5f42d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5f433 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f437 je 0x10c5f4d9 */
  if (C.zf) goto L_10c5f4d9;
  /* 10c5f43d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f440 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5f443 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f44a jmp 0x10c5f455 */
  goto L_10c5f455;
L_10c5f44c:;
  /* 10c5f44c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f44f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f452 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c5f455:;
  /* 10c5f455 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f459 jae 0x10c5f4ca */
  if (!C.cf) goto L_10c5f4ca;
  /* 10c5f45b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f45e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10c5f461 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f464 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f467 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5f46a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f46d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f470 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c5f473 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f474 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f477 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f478 call 0x10c55620 */
  push32(0x10c5f47du); f_10c55620();
  /* 10c5f47d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f480 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f481 call 0x10c554a0 */
  push32(0x10c5f486u); f_10c554a0();
  /* 10c5f486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f489 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f48c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f48e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5f491 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f494 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10c5f497 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f49a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f49d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5f4a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f4a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f4a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10c5f4aa push eax */
  push32((uint32_t)(EAX));
  /* 10c5f4ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f4ae push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f4af call 0x10c55620 */
  push32(0x10c5f4b4u); f_10c55620();
  /* 10c5f4b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f4b7 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f4b8 call 0x10c554a0 */
  push32(0x10c5f4bdu); f_10c554a0();
  /* 10c5f4bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f4c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f4c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f4c5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f4c8 jmp 0x10c5f44c */
  goto L_10c5f44c;
L_10c5f4ca:;
  /* 10c5f4ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f4cd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c5f4d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f4d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f4d6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c5f4d9:;
  /* 10c5f4d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f4dc pop esi */
  ESI = (pop32());
  /* 10c5f4dd mov esp, ebp */
  ESP = (EBP);
  /* 10c5f4df pop ebp */
  EBP = (pop32());
  /* 10c5f4e0 ret  */
  ESPCHK(0x10c5f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4f0 @ 0x10c5f4f0 (291 bytes, 97 insns) */
void f_10c5f4f0(void) {
  FTRACE(0x10c5f4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f4f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f4f6 push esi */
  push32((uint32_t)(ESI));
  /* 10c5f4f7 mov eax, dword ptr [0x10c7dc98] */
  EAX = (r32((uint32_t)(0x10c7dc98)));
  /* 10c5f4fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5f4ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5f506 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f50d jmp 0x10c5f518 */
  goto L_10c5f518;
L_10c5f50f:;
  /* 10c5f50f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f512 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f515 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c5f518:;
  /* 10c5f518 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f51c jae 0x10c5f552 */
  if (!C.cf) goto L_10c5f552;
  /* 10c5f51e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f524 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10c5f528 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f529 call 0x10c554a0 */
  push32(0x10c5f52eu); f_10c554a0();
  /* 10c5f52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f531 mov esi, eax */
  ESI = (EAX);
  /* 10c5f533 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f536 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f539 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10c5f53d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f53e call 0x10c554a0 */
  push32(0x10c5f543u); f_10c554a0();
  /* 10c5f543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f546 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f549 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c5f54d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5f550 jmp 0x10c5f50f */
  goto L_10c5f50f;
L_10c5f552:;
  /* 10c5f552 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f555 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f558 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f559 call 0x10c52650 */
  push32(0x10c5f55eu); f_10c52650();
  /* 10c5f55e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f561 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5f564 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f568 je 0x10c5f60b */
  if (C.zf) goto L_10c5f60b;
  /* 10c5f56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f571 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5f574 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f57b jmp 0x10c5f586 */
  goto L_10c5f586;
L_10c5f57d:;
  /* 10c5f57d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f580 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f583 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c5f586:;
  /* 10c5f586 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f58a jae 0x10c5f5fc */
  if (!C.cf) goto L_10c5f5fc;
  /* 10c5f58c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f58f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10c5f592 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f598 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5f59b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f59e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f5a1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10c5f5a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f5a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5a9 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f5aa call 0x10c55620 */
  push32(0x10c5f5afu); f_10c55620();
  /* 10c5f5af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5b2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f5b3 call 0x10c554a0 */
  push32(0x10c5f5b8u); f_10c554a0();
  /* 10c5f5b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c5f5c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5c6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10c5f5c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5f5d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f5d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f5d8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c5f5dc push eax */
  push32((uint32_t)(EAX));
  /* 10c5f5dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f5e1 call 0x10c55620 */
  push32(0x10c5f5e6u); f_10c55620();
  /* 10c5f5e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5e9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f5ea call 0x10c554a0 */
  push32(0x10c5f5efu); f_10c554a0();
  /* 10c5f5ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5f5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f5f7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f5fa jmp 0x10c5f57d */
  goto L_10c5f57d;
L_10c5f5fc:;
  /* 10c5f5fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f5ff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c5f602 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f605 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f608 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c5f60b:;
  /* 10c5f60b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f60e pop esi */
  ESI = (pop32());
  /* 10c5f60f mov esp, ebp */
  ESP = (EBP);
  /* 10c5f611 pop ebp */
  EBP = (pop32());
  /* 10c5f612 ret  */
  ESPCHK(0x10c5f4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f620 @ 0x10c5f620 (878 bytes, 273 insns) */
void f_10c5f620(void) {
  FTRACE(0x10c5f620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f620 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f621 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f623 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f626 push esi */
  push32((uint32_t)(ESI));
  /* 10c5f627 mov eax, dword ptr [0x10c7dc98] */
  EAX = (r32((uint32_t)(0x10c7dc98)));
  /* 10c5f62c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5f62f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5f636 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f63d jmp 0x10c5f648 */
  goto L_10c5f648;
L_10c5f63f:;
  /* 10c5f63f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f645 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c5f648:;
  /* 10c5f648 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f64c jae 0x10c5f681 */
  if (!C.cf) goto L_10c5f681;
  /* 10c5f64e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f654 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c5f657 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f658 call 0x10c554a0 */
  push32(0x10c5f65du); f_10c554a0();
  /* 10c5f65d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f660 mov esi, eax */
  ESI = (EAX);
  /* 10c5f662 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f665 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f668 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10c5f66c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f66d call 0x10c554a0 */
  push32(0x10c5f672u); f_10c554a0();
  /* 10c5f672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f675 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f678 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c5f67c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5f67f jmp 0x10c5f63f */
  goto L_10c5f63f;
L_10c5f681:;
  /* 10c5f681 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f688 jmp 0x10c5f693 */
  goto L_10c5f693;
L_10c5f68a:;
  /* 10c5f68a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f68d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f690 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c5f693:;
  /* 10c5f693 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f697 jae 0x10c5f6cd */
  if (!C.cf) goto L_10c5f6cd;
  /* 10c5f699 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f69c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f69f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c5f6a3 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f6a4 call 0x10c554a0 */
  push32(0x10c5f6a9u); f_10c554a0();
  /* 10c5f6a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f6ac mov esi, eax */
  ESI = (EAX);
  /* 10c5f6ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f6b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f6b4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c5f6b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f6b9 call 0x10c554a0 */
  push32(0x10c5f6beu); f_10c554a0();
  /* 10c5f6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f6c1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f6c4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c5f6c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c5f6cb jmp 0x10c5f68a */
  goto L_10c5f68a;
L_10c5f6cd:;
  /* 10c5f6cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f6d0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10c5f6d6 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f6d7 call 0x10c554a0 */
  push32(0x10c5f6dcu); f_10c554a0();
  /* 10c5f6dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f6df mov esi, eax */
  ESI = (EAX);
  /* 10c5f6e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f6e4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10c5f6ea push edx */
  push32((uint32_t)(EDX));
  /* 10c5f6eb call 0x10c554a0 */
  push32(0x10c5f6f0u); f_10c554a0();
  /* 10c5f6f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f6f3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f6f6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c5f6fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5f6fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f700 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10c5f706 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f707 call 0x10c554a0 */
  push32(0x10c5f70cu); f_10c554a0();
  /* 10c5f70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f70f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f712 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c5f716 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5f719 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f71c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10c5f722 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f723 call 0x10c554a0 */
  push32(0x10c5f728u); f_10c554a0();
  /* 10c5f728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f72b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f72e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c5f732 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5f735 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f738 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10c5f73e push edx */
  push32((uint32_t)(EDX));
  /* 10c5f73f call 0x10c554a0 */
  push32(0x10c5f744u); f_10c554a0();
  /* 10c5f744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f74a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c5f74e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c5f751 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5f754 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f759 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f75a call 0x10c52650 */
  push32(0x10c5f75fu); f_10c52650();
  /* 10c5f75f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5f765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f769 je 0x10c5f986 */
  if (C.zf) goto L_10c5f986;
  /* 10c5f76f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f772 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c5f775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f778 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f77e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f781 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10c5f786 mov eax, dword ptr [0x10c7dc98] */
  EAX = (r32((uint32_t)(0x10c7dc98)));
  /* 10c5f78b push eax */
  push32((uint32_t)(EAX));
  /* 10c5f78c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f78f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f790 call 0x10c58f50 */
  push32(0x10c5f795u); f_10c58f50();
  /* 10c5f795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f798 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f79f jmp 0x10c5f7aa */
  goto L_10c5f7aa;
L_10c5f7a1:;
  /* 10c5f7a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f7a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f7a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c5f7aa:;
  /* 10c5f7aa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f7ae jae 0x10c5f81e */
  if (!C.cf) goto L_10c5f81e;
  /* 10c5f7b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f7b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f7b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f7b9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10c5f7bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f7bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f7c2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c5f7c5 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f7c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f7c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f7ca call 0x10c55620 */
  push32(0x10c5f7cfu); f_10c55620();
  /* 10c5f7cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f7d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f7d3 call 0x10c554a0 */
  push32(0x10c5f7d8u); f_10c554a0();
  /* 10c5f7d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f7db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f7de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c5f7e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f7e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f7e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f7eb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f7ee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10c5f7f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f7f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f7f8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10c5f7fc push edx */
  push32((uint32_t)(EDX));
  /* 10c5f7fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f800 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f801 call 0x10c55620 */
  push32(0x10c5f806u); f_10c55620();
  /* 10c5f806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f809 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f80a call 0x10c554a0 */
  push32(0x10c5f80fu); f_10c554a0();
  /* 10c5f80f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f812 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f815 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c5f819 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f81c jmp 0x10c5f7a1 */
  goto L_10c5f7a1;
L_10c5f81e:;
  /* 10c5f81e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c5f825 jmp 0x10c5f830 */
  goto L_10c5f830;
L_10c5f827:;
  /* 10c5f827 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f82a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f82d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c5f830:;
  /* 10c5f830 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f834 jae 0x10c5f8a6 */
  if (!C.cf) goto L_10c5f8a6;
  /* 10c5f836 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f839 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f83c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f83f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10c5f843 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f846 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f849 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c5f84d push eax */
  push32((uint32_t)(EAX));
  /* 10c5f84e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f851 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f852 call 0x10c55620 */
  push32(0x10c5f857u); f_10c55620();
  /* 10c5f857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f85a push eax */
  push32((uint32_t)(EAX));
  /* 10c5f85b call 0x10c554a0 */
  push32(0x10c5f860u); f_10c554a0();
  /* 10c5f860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f863 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f866 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c5f86a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5f86d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f870 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f873 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f876 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10c5f87a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f87d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f880 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c5f884 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f885 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f888 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f889 call 0x10c55620 */
  push32(0x10c5f88eu); f_10c55620();
  /* 10c5f88e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f891 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f892 call 0x10c554a0 */
  push32(0x10c5f897u); f_10c554a0();
  /* 10c5f897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f89a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f89d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c5f8a1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5f8a4 jmp 0x10c5f827 */
  goto L_10c5f827;
L_10c5f8a6:;
  /* 10c5f8a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f8a9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f8ac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10c5f8b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f8b5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10c5f8bb push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f8bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f8bf push edx */
  push32((uint32_t)(EDX));
  /* 10c5f8c0 call 0x10c55620 */
  push32(0x10c5f8c5u); f_10c55620();
  /* 10c5f8c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f8c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f8c9 call 0x10c554a0 */
  push32(0x10c5f8ceu); f_10c554a0();
  /* 10c5f8ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f8d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f8d4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c5f8d8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f8db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f8de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f8e1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10c5f8e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f8ea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10c5f8f0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f8f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f8f5 call 0x10c55620 */
  push32(0x10c5f8fau); f_10c55620();
  /* 10c5f8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f8fd push eax */
  push32((uint32_t)(EAX));
  /* 10c5f8fe call 0x10c554a0 */
  push32(0x10c5f903u); f_10c554a0();
  /* 10c5f903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f906 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f909 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c5f90d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5f910 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f913 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f916 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10c5f91c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f91f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10c5f925 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f929 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f92a call 0x10c55620 */
  push32(0x10c5f92fu); f_10c55620();
  /* 10c5f92f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f932 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f933 call 0x10c554a0 */
  push32(0x10c5f938u); f_10c554a0();
  /* 10c5f938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f93b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f93e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c5f942 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c5f945 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f948 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f94b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10c5f951 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5f954 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10c5f95a push eax */
  push32((uint32_t)(EAX));
  /* 10c5f95b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f95e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f95f call 0x10c55620 */
  push32(0x10c5f964u); f_10c55620();
  /* 10c5f964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f967 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f968 call 0x10c554a0 */
  push32(0x10c5f96du); f_10c554a0();
  /* 10c5f96d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f970 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f973 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c5f977 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c5f97a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c5f97d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5f980 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10c5f986:;
  /* 10c5f986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5f989 pop esi */
  ESI = (pop32());
  /* 10c5f98a mov esp, ebp */
  ESP = (EBP);
  /* 10c5f98c pop ebp */
  EBP = (pop32());
  /* 10c5f98d ret  */
  ESPCHK(0x10c5f620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f990 @ 0x10c5f990 (31 bytes, 15 insns) */
void f_10c5f990(void) {
  FTRACE(0x10c5f990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f990 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f991 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5f995 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5f998 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f999 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5f99c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5f99d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5f9a0 push edx */
  push32((uint32_t)(EDX));
  /* 10c5f9a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5f9a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5f9a5 call 0x10c5f9b0 */
  push32(0x10c5f9aau); f_10c5f9b0();
  /* 10c5f9aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5f9ad pop ebp */
  EBP = (pop32());
  /* 10c5f9ae ret  */
  ESPCHK(0x10c5f990u, _esp0);
  ESP += 4; return;
}

