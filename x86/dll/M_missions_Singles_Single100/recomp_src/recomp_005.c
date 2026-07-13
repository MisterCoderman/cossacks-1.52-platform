#include "recomp.h"

/* _GetPrimaryLen @ 0x10eecfb0 (101 bytes, 36 insns) */
void f_10eecfb0(void) {
  FTRACE(0x10eecfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecfb1 mov ebp, esp */
  EBP = (ESP);
  /* 10eecfb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecfb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eecfbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecfc0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eecfc2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10eecfc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecfc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecfcb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10eecfce:;
  /* 10eecfce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10eecfd2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecfd5 jl 0x10eecfe0 */
  if ((C.sf!=C.of)) goto L_10eecfe0;
  /* 10eecfd7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10eecfdb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecfde jle 0x10eecff2 */
  if ((C.zf||C.sf!=C.of)) goto L_10eecff2;
L_10eecfe0:;
  /* 10eecfe0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10eecfe4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecfe7 jl 0x10eed00e */
  if ((C.sf!=C.of)) goto L_10eed00e;
  /* 10eecfe9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10eecfed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecff0 jg 0x10eed00e */
  if ((!C.zf&&C.sf==C.of)) goto L_10eed00e;
L_10eecff2:;
  /* 10eecff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eecff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecff8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eecffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecffe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eed000 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10eed003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed006 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed009 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10eed00c jmp 0x10eecfce */
  goto L_10eecfce;
L_10eed00e:;
  /* 10eed00e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed011 mov esp, ebp */
  ESP = (EBP);
  /* 10eed013 pop ebp */
  EBP = (pop32());
  /* 10eed014 ret  */
  ESPCHK(0x10eecfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d020 @ 0x10eed020 (1085 bytes, 299 insns) */
void f_10eed020(void) {
  FTRACE(0x10eed020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed020 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed021 mov ebp, esp */
  EBP = (ESP);
  /* 10eed023 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed026 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10eed02c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eed033 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10eed03a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eed041 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eed048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed04b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 10eed04f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 10eed053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed056 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 10eed05a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 10eed05e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eed061 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed067 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eed06a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed070 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10eed072 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10eed078 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 10eed07c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 10eed080 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 10eed084 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 10eed088 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 10eed08c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 10eed091 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 10eed095 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eed098 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed09e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eed0a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed0a6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed0a8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 10eed0ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eed0af and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed0b5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed0bb jge 0x10eed0dd */
  if ((C.sf==C.of)) goto L_10eed0dd;
  /* 10eed0bd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eed0c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed0c6 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed0cc jge 0x10eed0dd */
  if ((C.sf==C.of)) goto L_10eed0dd;
  /* 10eed0ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eed0d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed0d6 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed0db jle 0x10eed114 */
  if ((C.zf||C.sf!=C.of)) goto L_10eed114;
L_10eed0dd:;
  /* 10eed0dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eed0e0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed0e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eed0e8 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed0ea and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10eed0f0 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed0f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed0f9 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10eed0fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed0ff mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10eed106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed109 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10eed10f jmp 0x10eed459 */
  goto L_10eed459;
L_10eed114:;
  /* 10eed114 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eed117 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed11d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed123 jg 0x10eed147 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eed147;
  /* 10eed125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed128 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10eed12f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed132 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10eed139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed13c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 10eed142 jmp 0x10eed459 */
  goto L_10eed459;
L_10eed147:;
  /* 10eed147 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eed14a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eed151 jne 0x10eed18d */
  if (!C.zf) goto L_10eed18d;
  /* 10eed153 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed157 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 10eed15b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 10eed15f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed162 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eed165 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed16a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eed16c jne 0x10eed18d */
  if (!C.zf) goto L_10eed18d;
  /* 10eed16e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed171 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed175 jne 0x10eed18d */
  if (!C.zf) goto L_10eed18d;
  /* 10eed177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed17a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed17d jne 0x10eed18d */
  if (!C.zf) goto L_10eed18d;
  /* 10eed17f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed182 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 10eed188 jmp 0x10eed459 */
  goto L_10eed459;
L_10eed18d:;
  /* 10eed18d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eed190 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed196 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eed198 jne 0x10eed1e9 */
  if (!C.zf) goto L_10eed1e9;
  /* 10eed19a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed19e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 10eed1a2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 10eed1a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed1a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eed1ac and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed1b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eed1b4 jne 0x10eed1e9 */
  if (!C.zf) goto L_10eed1e9;
  /* 10eed1b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed1b9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed1bd jne 0x10eed1e9 */
  if (!C.zf) goto L_10eed1e9;
  /* 10eed1bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed1c2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed1c5 jne 0x10eed1e9 */
  if (!C.zf) goto L_10eed1e9;
  /* 10eed1c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed1ca mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 10eed1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed1d4 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10eed1db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed1de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eed1e4 jmp 0x10eed459 */
  goto L_10eed459;
L_10eed1e9:;
  /* 10eed1e9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10eed1f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10eed1f7 jmp 0x10eed202 */
  goto L_10eed202;
L_10eed1f9:;
  /* 10eed1f9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eed1fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed1ff mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_10eed202:;
  /* 10eed202 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed206 jge 0x10eed2c1 */
  if ((C.sf==C.of)) goto L_10eed2c1;
  /* 10eed20c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eed20f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10eed211 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10eed214 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 10eed21b mov eax, 5 */
  EAX = (0x5u);
  /* 10eed220 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed223 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 10eed226 jmp 0x10eed231 */
  goto L_10eed231;
L_10eed228:;
  /* 10eed228 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10eed22b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed22e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_10eed231:;
  /* 10eed231 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed235 jle 0x10eed2b3 */
  if ((C.zf||C.sf!=C.of)) goto L_10eed2b3;
  /* 10eed237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed23a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed23d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10eed240 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed243 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed246 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 10eed249 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eed24c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 10eed250 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10eed253 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10eed256 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eed258 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 10eed25b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10eed25e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eed260 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10eed263 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed266 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 10eed269 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eed26c push ecx */
  push32((uint32_t)(ECX));
  /* 10eed26d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 10eed270 push edx */
  push32((uint32_t)(EDX));
  /* 10eed271 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eed274 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eed276 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed277 call 0x10ee8aa0 */
  push32(0x10eed27cu); f_10ee8aa0();
  /* 10eed27c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed27f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 10eed282 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed286 je 0x10eed29c */
  if (C.zf) goto L_10eed29c;
  /* 10eed288 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eed28b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 10eed290 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 10eed294 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eed297 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_10eed29c:;
  /* 10eed29c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eed29f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed2a2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10eed2a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed2a8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed2ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eed2ae jmp 0x10eed228 */
  goto L_10eed228;
L_10eed2b3:;
  /* 10eed2b3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eed2b6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed2b9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10eed2bc jmp 0x10eed1f9 */
  goto L_10eed1f9;
L_10eed2c1:;
  /* 10eed2c1 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed2c5 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10eed2ca mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_10eed2ce:;
  /* 10eed2ce movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 10eed2d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eed2d4 jle 0x10eed2fd */
  if ((C.zf||C.sf!=C.of)) goto L_10eed2fd;
  /* 10eed2d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed2d9 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10eed2df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eed2e1 jne 0x10eed2fd */
  if (!C.zf) goto L_10eed2fd;
  /* 10eed2e3 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10eed2e6 push edx */
  push32((uint32_t)(EDX));
  /* 10eed2e7 call 0x10ee8b90 */
  push32(0x10eed2ecu); f_10ee8b90();
  /* 10eed2ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed2ef mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed2f3 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10eed2f7 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 10eed2fb jmp 0x10eed2ce */
  goto L_10eed2ce;
L_10eed2fd:;
  /* 10eed2fd movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 10eed301 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eed303 jg 0x10eed35d */
  if ((!C.zf&&C.sf==C.of)) goto L_10eed35d;
  /* 10eed305 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed309 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10eed30d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_10eed311:;
  /* 10eed311 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 10eed315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eed317 jge 0x10eed34c */
  if ((C.sf==C.of)) goto L_10eed34c;
  /* 10eed319 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eed31c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed322 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eed325 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eed327 je 0x10eed332 */
  if (C.zf) goto L_10eed332;
  /* 10eed329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed32c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed32f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10eed332:;
  /* 10eed332 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10eed335 push eax */
  push32((uint32_t)(EAX));
  /* 10eed336 call 0x10ee8bf0 */
  push32(0x10eed33bu); f_10ee8bf0();
  /* 10eed33b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed33e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed342 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 10eed346 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 10eed34a jmp 0x10eed311 */
  goto L_10eed311;
L_10eed34c:;
  /* 10eed34c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed350 je 0x10eed35d */
  if (C.zf) goto L_10eed35d;
  /* 10eed352 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 10eed356 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10eed359 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_10eed35d:;
  /* 10eed35d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eed360 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed365 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed36a jg 0x10eed37d */
  if ((!C.zf&&C.sf==C.of)) goto L_10eed37d;
  /* 10eed36c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eed36f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed375 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed37b jne 0x10eed3de */
  if (!C.zf) goto L_10eed3de;
L_10eed37d:;
  /* 10eed37d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed381 jne 0x10eed3d5 */
  if (!C.zf) goto L_10eed3d5;
  /* 10eed383 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 10eed38a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed38e jne 0x10eed3ca */
  if (!C.zf) goto L_10eed3ca;
  /* 10eed390 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 10eed397 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 10eed39a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed3a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed3a6 jne 0x10eed3bc */
  if (!C.zf) goto L_10eed3bc;
  /* 10eed3a8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 10eed3ae mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 10eed3b2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 10eed3b6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 10eed3ba jmp 0x10eed3c8 */
  goto L_10eed3c8;
L_10eed3bc:;
  /* 10eed3bc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 10eed3c0 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 10eed3c4 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_10eed3c8:;
  /* 10eed3c8 jmp 0x10eed3d3 */
  goto L_10eed3d3;
L_10eed3ca:;
  /* 10eed3ca mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 10eed3cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed3d0 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_10eed3d3:;
  /* 10eed3d3 jmp 0x10eed3de */
  goto L_10eed3de;
L_10eed3d5:;
  /* 10eed3d5 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 10eed3d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed3db mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_10eed3de:;
  /* 10eed3de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eed3e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed3e7 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed3ed jl 0x10eed423 */
  if ((C.sf!=C.of)) goto L_10eed423;
  /* 10eed3ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eed3f2 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed3f8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eed3fa sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed3fc and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eed402 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed40b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10eed40e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed411 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10eed418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed41b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 10eed421 jmp 0x10eed459 */
  goto L_10eed459;
L_10eed423:;
  /* 10eed423 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed426 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 10eed42a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 10eed42d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed430 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eed433 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 10eed436 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed43c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 10eed43f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eed442 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed447 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eed44a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed450 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10eed452 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed455 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_10eed459:;
  /* 10eed459 mov esp, ebp */
  ESP = (EBP);
  /* 10eed45b pop ebp */
  EBP = (pop32());
  /* 10eed45c ret  */
  ESPCHK(0x10eed020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d460 @ 0x10eed460 (195 bytes, 67 insns) */
void f_10eed460(void) {
  FTRACE(0x10eed460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed460 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed461 mov ebp, esp */
  EBP = (ESP);
  /* 10eed463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed466 mov eax, 0x10f0e3c0 */
  EAX = (0x10f0e3c0u);
  /* 10eed46b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed46e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eed471 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed475 jne 0x10eed47c */
  if (!C.zf) goto L_10eed47c;
  /* 10eed477 jmp 0x10eed51f */
  goto L_10eed51f;
L_10eed47c:;
  /* 10eed47c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed480 jge 0x10eed495 */
  if ((C.sf==C.of)) goto L_10eed495;
  /* 10eed482 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed485 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eed487 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10eed48a mov edx, 0x10f0e520 */
  EDX = (0x10f0e520u);
  /* 10eed48f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed492 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10eed495:;
  /* 10eed495 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed499 jne 0x10eed4a3 */
  if (!C.zf) goto L_10eed4a3;
  /* 10eed49b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed49e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_10eed4a3:;
  /* 10eed4a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed4a7 je 0x10eed51f */
  if (C.zf) goto L_10eed51f;
  /* 10eed4a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed4ac add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed4af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eed4b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed4b5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 10eed4b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10eed4bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed4be sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10eed4c1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10eed4c4 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed4c8 jne 0x10eed4cc */
  if (!C.zf) goto L_10eed4cc;
  /* 10eed4ca jmp 0x10eed4a3 */
  goto L_10eed4a3;
L_10eed4cc:;
  /* 10eed4cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eed4cf imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed4d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed4d5 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed4d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eed4da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed4dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eed4df mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 10eed4e2 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed4e8 jl 0x10eed50d */
  if ((C.sf!=C.of)) goto L_10eed50d;
  /* 10eed4ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed4ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eed4ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eed4f2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10eed4f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10eed4f8 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eed4fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10eed4fe mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 10eed501 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed504 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 10eed507 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 10eed50a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10eed50d:;
  /* 10eed50d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed510 push edx */
  push32((uint32_t)(EDX));
  /* 10eed511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed514 push eax */
  push32((uint32_t)(EAX));
  /* 10eed515 call 0x10eed020 */
  push32(0x10eed51au); f_10eed020();
  /* 10eed51a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed51d jmp 0x10eed4a3 */
  goto L_10eed4a3;
L_10eed51f:;
  /* 10eed51f mov esp, ebp */
  ESP = (EBP);
  /* 10eed521 pop ebp */
  EBP = (pop32());
  /* 10eed522 ret  */
  ESPCHK(0x10eed460u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10eed530 (52 bytes, 19 insns) */
void f_10eed530(void) {
  FTRACE(0x10eed530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed530 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10eed534 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10eed538 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eed53a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10eed53e jne 0x10eed549 */
  if (!C.zf) goto L_10eed549;
  /* 10eed540 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10eed544 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10eed546 ret 0x10 */
  ESPCHK(0x10eed530u, _esp0);
  ESP += 20; return;
L_10eed549:;
  /* 10eed549 push ebx */
  push32((uint32_t)(EBX));
  /* 10eed54a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10eed54c mov ebx, eax */
  EBX = (EAX);
  /* 10eed54e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10eed552 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10eed556 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed558 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10eed55c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10eed55e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed560 pop ebx */
  EBX = (pop32());
  /* 10eed561 ret 0x10 */
  ESPCHK(0x10eed530u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x10eed570 (79 bytes, 32 insns) */
void f_10eed570(void) {
  FTRACE(0x10eed570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed570 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed571 mov ebp, esp */
  EBP = (ESP);
  /* 10eed573 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed574 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed578 jne 0x10eed57e */
  if (!C.zf) goto L_10eed57e;
  /* 10eed57a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eed57c jmp 0x10eed5bb */
  goto L_10eed5bb;
L_10eed57e:;
  /* 10eed57e mov eax, dword ptr [0x10f10bd8] */
  EAX = (r32((uint32_t)(0x10f10bd8)));
  /* 10eed583 push eax */
  push32((uint32_t)(EAX));
  /* 10eed584 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eed587 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed588 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed58b push edx */
  push32((uint32_t)(EDX));
  /* 10eed58c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eed58f push eax */
  push32((uint32_t)(EAX));
  /* 10eed590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed593 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed594 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eed596 mov edx, dword ptr [0x10f10e64] */
  EDX = (r32((uint32_t)(0x10f10e64)));
  /* 10eed59c push edx */
  push32((uint32_t)(EDX));
  /* 10eed59d call 0x10eefb30 */
  push32(0x10eed5a2u); f_10eefb30();
  /* 10eed5a2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed5a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eed5a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed5ac jne 0x10eed5b5 */
  if (!C.zf) goto L_10eed5b5;
  /* 10eed5ae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10eed5b3 jmp 0x10eed5bb */
  goto L_10eed5bb;
L_10eed5b5:;
  /* 10eed5b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed5b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10eed5bb:;
  /* 10eed5bb mov esp, ebp */
  ESP = (EBP);
  /* 10eed5bd pop ebp */
  EBP = (pop32());
  /* 10eed5be ret  */
  ESPCHK(0x10eed570u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d5c0 @ 0x10eed5c0 (174 bytes, 66 insns) */
void f_10eed5c0(void) {
  FTRACE(0x10eed5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eed5c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed5c6 mov eax, dword ptr [0x10f0f584] */
  EAX = (r32((uint32_t)(0x10f0f584)));
  /* 10eed5cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eed5ce:;
  /* 10eed5ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed5d1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed5d4 je 0x10eed668 */
  if (C.zf) goto L_10eed668;
  /* 10eed5da push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed5dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed5de push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed5e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eed5e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed5e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eed5e9 push eax */
  push32((uint32_t)(EAX));
  /* 10eed5ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed5ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10eed5ee call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10eed5f4u);
  /* 10eed5f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eed5f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed5fb jne 0x10eed602 */
  if (!C.zf) goto L_10eed602;
  /* 10eed5fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed600 jmp 0x10eed66a */
  goto L_10eed66a;
L_10eed602:;
  /* 10eed602 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10eed604 push 0x10f0a9cc */
  push32((uint32_t)(0x10f0a9ccu));
  /* 10eed609 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eed60b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed60e push ecx */
  push32((uint32_t)(ECX));
  /* 10eed60f call 0x10edb720 */
  push32(0x10eed614u); f_10edb720();
  /* 10eed614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed617 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eed61a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed61e jne 0x10eed625 */
  if (!C.zf) goto L_10eed625;
  /* 10eed620 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed623 jmp 0x10eed66a */
  goto L_10eed66a;
L_10eed625:;
  /* 10eed625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed629 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed62c push edx */
  push32((uint32_t)(EDX));
  /* 10eed62d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed630 push eax */
  push32((uint32_t)(EAX));
  /* 10eed631 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eed633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed636 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eed638 push edx */
  push32((uint32_t)(EDX));
  /* 10eed639 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed63b push 1 */
  push32((uint32_t)(0x1u));
  /* 10eed63d call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10eed643u);
  /* 10eed643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eed645 jne 0x10eed64c */
  if (!C.zf) goto L_10eed64c;
  /* 10eed647 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed64a jmp 0x10eed66a */
  goto L_10eed66a;
L_10eed64c:;
  /* 10eed64c push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed64e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed651 push eax */
  push32((uint32_t)(EAX));
  /* 10eed652 call 0x10eeff80 */
  push32(0x10eed657u); f_10eeff80();
  /* 10eed657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed65a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed65d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed660 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eed663 jmp 0x10eed5ce */
  goto L_10eed5ce;
L_10eed668:;
  /* 10eed668 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eed66a:;
  /* 10eed66a mov esp, ebp */
  ESP = (EBP);
  /* 10eed66c pop ebp */
  EBP = (pop32());
  /* 10eed66d ret  */
  ESPCHK(0x10eed5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d670 @ 0x10eed670 (482 bytes, 138 insns) */
void f_10eed670(void) {
  FTRACE(0x10eed670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed670 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed671 mov ebp, esp */
  EBP = (ESP);
  /* 10eed673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed676 push esi */
  push32((uint32_t)(ESI));
  /* 10eed677 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10eed67e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10eed680 call 0x10edb620 */
  push32(0x10eed685u); f_10edb620();
  /* 10eed685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed688 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eed68f jmp 0x10eed69a */
  goto L_10eed69a;
L_10eed691:;
  /* 10eed691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed697 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10eed69a:;
  /* 10eed69a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed69e jge 0x10eed840 */
  if ((C.sf==C.of)) goto L_10eed840;
  /* 10eed6a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed6a7 cmp dword ptr [ecx*4 + 0x10f10ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f10ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed6af je 0x10eed7a6 */
  if (C.zf) goto L_10eed7a6;
  /* 10eed6b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed6b8 mov eax, dword ptr [edx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eed6bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eed6c2 jmp 0x10eed6cd */
  goto L_10eed6cd;
L_10eed6c4:;
  /* 10eed6c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed6c7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed6ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eed6cd:;
  /* 10eed6cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed6d0 mov eax, dword ptr [edx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eed6d7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed6dc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed6df jae 0x10eed796 */
  if (!C.cf) goto L_10eed796;
  /* 10eed6e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed6e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10eed6ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10eed6ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eed6f1 jne 0x10eed791 */
  if (!C.zf) goto L_10eed791;
  /* 10eed6f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed6fa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed6fe jne 0x10eed739 */
  if (!C.zf) goto L_10eed739;
  /* 10eed700 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10eed702 call 0x10edb620 */
  push32(0x10eed707u); f_10edb620();
  /* 10eed707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed70a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed70d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed711 jne 0x10eed72f */
  if (!C.zf) goto L_10eed72f;
  /* 10eed713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed716 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed719 push edx */
  push32((uint32_t)(EDX));
  /* 10eed71a call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10eed720u);
  /* 10eed720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed723 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eed726 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed729 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed72c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10eed72f:;
  /* 10eed72f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10eed731 call 0x10edb6c0 */
  push32(0x10eed736u); f_10edb6c0();
  /* 10eed736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eed739:;
  /* 10eed739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed73c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed73f push eax */
  push32((uint32_t)(EAX));
  /* 10eed740 call dword ptr [0x10f12438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12438))), 0x10eed746u);
  /* 10eed746 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed749 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10eed74d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10eed750 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eed752 je 0x10eed766 */
  if (C.zf) goto L_10eed766;
  /* 10eed754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed757 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed75a push eax */
  push32((uint32_t)(EAX));
  /* 10eed75b call dword ptr [0x10f1243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1243c))), 0x10eed761u);
  /* 10eed761 jmp 0x10eed6c4 */
  goto L_10eed6c4;
L_10eed766:;
  /* 10eed766 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed769 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10eed76f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed772 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eed775 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed77b sub eax, dword ptr [edx*4 + 0x10f10ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10f10ea0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eed782 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eed783 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10eed788 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eed78a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed78c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eed78f jmp 0x10eed796 */
  goto L_10eed796;
L_10eed791:;
  /* 10eed791 jmp 0x10eed6c4 */
  goto L_10eed6c4;
L_10eed796:;
  /* 10eed796 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed79a je 0x10eed7a1 */
  if (C.zf) goto L_10eed7a1;
  /* 10eed79c jmp 0x10eed840 */
  goto L_10eed840;
L_10eed7a1:;
  /* 10eed7a1 jmp 0x10eed83b */
  goto L_10eed83b;
L_10eed7a6:;
  /* 10eed7a6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10eed7a8 push 0x10f0a9d8 */
  push32((uint32_t)(0x10f0a9d8u));
  /* 10eed7ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10eed7af push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10eed7b4 call 0x10edb720 */
  push32(0x10eed7b9u); f_10edb720();
  /* 10eed7b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed7bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eed7bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed7c3 je 0x10eed839 */
  if (C.zf) goto L_10eed839;
  /* 10eed7c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed7c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed7cb mov dword ptr [eax*4 + 0x10f10ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10f10ea0), (ECX));
  /* 10eed7d2 mov edx, dword ptr [0x10f10fdc] */
  EDX = (r32((uint32_t)(0x10f10fdc)));
  /* 10eed7d8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed7db mov dword ptr [0x10f10fdc], edx */
  w32((uint32_t)(0x10f10fdc), (EDX));
  /* 10eed7e1 jmp 0x10eed7ec */
  goto L_10eed7ec;
L_10eed7e3:;
  /* 10eed7e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed7e6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed7e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eed7ec:;
  /* 10eed7ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed7ef mov edx, dword ptr [ecx*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eed7f6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed7fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed7ff jae 0x10eed824 */
  if (!C.cf) goto L_10eed824;
  /* 10eed801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed804 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10eed808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed80b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10eed811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed814 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10eed818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eed81b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10eed822 jmp 0x10eed7e3 */
  goto L_10eed7e3;
L_10eed824:;
  /* 10eed824 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eed827 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eed82a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eed82d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed830 push edx */
  push32((uint32_t)(EDX));
  /* 10eed831 call 0x10eedb80 */
  push32(0x10eed836u); f_10eedb80();
  /* 10eed836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eed839:;
  /* 10eed839 jmp 0x10eed840 */
  goto L_10eed840;
L_10eed83b:;
  /* 10eed83b jmp 0x10eed691 */
  goto L_10eed691;
L_10eed840:;
  /* 10eed840 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10eed842 call 0x10edb6c0 */
  push32(0x10eed847u); f_10edb6c0();
  /* 10eed847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eed84a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eed84d pop esi */
  ESI = (pop32());
  /* 10eed84e mov esp, ebp */
  ESP = (EBP);
  /* 10eed850 pop ebp */
  EBP = (pop32());
  /* 10eed851 ret  */
  ESPCHK(0x10eed670u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10eed860 (183 bytes, 57 insns) */
void f_10eed860(void) {
  FTRACE(0x10eed860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed860 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed861 mov ebp, esp */
  EBP = (ESP);
  /* 10eed863 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed867 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed86d jae 0x10eed8fa */
  if (!C.cf) goto L_10eed8fa;
  /* 10eed873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed876 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eed879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed87c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed87f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed882 mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eed889 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed88d jne 0x10eed8fa */
  if (!C.zf) goto L_10eed8fa;
  /* 10eed88f cmp dword ptr [0x10f0f4e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed896 jne 0x10eed8da */
  if (!C.zf) goto L_10eed8da;
  /* 10eed898 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed89b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eed89e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed8a2 je 0x10eed8b2 */
  if (C.zf) goto L_10eed8b2;
  /* 10eed8a4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed8a8 je 0x10eed8c0 */
  if (C.zf) goto L_10eed8c0;
  /* 10eed8aa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed8ae je 0x10eed8ce */
  if (C.zf) goto L_10eed8ce;
  /* 10eed8b0 jmp 0x10eed8da */
  goto L_10eed8da;
L_10eed8b2:;
  /* 10eed8b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed8b5 push edx */
  push32((uint32_t)(EDX));
  /* 10eed8b6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10eed8b8 call dword ptr [0x10f12334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12334))), 0x10eed8beu);
  /* 10eed8be jmp 0x10eed8da */
  goto L_10eed8da;
L_10eed8c0:;
  /* 10eed8c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed8c3 push eax */
  push32((uint32_t)(EAX));
  /* 10eed8c4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10eed8c6 call dword ptr [0x10f12334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12334))), 0x10eed8ccu);
  /* 10eed8cc jmp 0x10eed8da */
  goto L_10eed8da;
L_10eed8ce:;
  /* 10eed8ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed8d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed8d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10eed8d4 call dword ptr [0x10f12334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12334))), 0x10eed8dau);
L_10eed8da:;
  /* 10eed8da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed8dd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10eed8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed8e3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed8e6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed8e9 mov ecx, dword ptr [edx*4 + 0x10f10ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eed8f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eed8f3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10eed8f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eed8f8 jmp 0x10eed913 */
  goto L_10eed913;
L_10eed8fa:;
  /* 10eed8fa call 0x10ee6db0 */
  push32(0x10eed8ffu); f_10ee6db0();
  /* 10eed8ff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eed905 call 0x10ee6dc0 */
  push32(0x10eed90au); f_10ee6dc0();
  /* 10eed90a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eed910 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10eed913:;
  /* 10eed913 mov esp, ebp */
  ESP = (EBP);
  /* 10eed915 pop ebp */
  EBP = (pop32());
  /* 10eed916 ret  */
  ESPCHK(0x10eed860u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d920 @ 0x10eed920 (216 bytes, 63 insns) */
void f_10eed920(void) {
  FTRACE(0x10eed920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eed920 push ebp */
  push32((uint32_t)(EBP));
  /* 10eed921 mov ebp, esp */
  EBP = (ESP);
  /* 10eed923 push ecx */
  push32((uint32_t)(ECX));
  /* 10eed924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed927 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed92d jae 0x10eed9db */
  if (!C.cf) goto L_10eed9db;
  /* 10eed933 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed936 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eed939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed93c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eed93f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed942 mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eed949 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10eed94e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eed951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eed953 je 0x10eed9db */
  if (C.zf) goto L_10eed9db;
  /* 10eed959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed95c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10eed95f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed962 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10eed965 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed968 mov ecx, dword ptr [edx*4 + 0x10f10ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eed96f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed973 je 0x10eed9db */
  if (C.zf) goto L_10eed9db;
  /* 10eed975 cmp dword ptr [0x10f0f4e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed97c jne 0x10eed9ba */
  if (!C.zf) goto L_10eed9ba;
  /* 10eed97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed981 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eed984 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed988 je 0x10eed998 */
  if (C.zf) goto L_10eed998;
  /* 10eed98a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed98e je 0x10eed9a4 */
  if (C.zf) goto L_10eed9a4;
  /* 10eed990 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eed994 je 0x10eed9b0 */
  if (C.zf) goto L_10eed9b0;
  /* 10eed996 jmp 0x10eed9ba */
  goto L_10eed9ba;
L_10eed998:;
  /* 10eed998 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed99a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10eed99c call dword ptr [0x10f12334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12334))), 0x10eed9a2u);
  /* 10eed9a2 jmp 0x10eed9ba */
  goto L_10eed9ba;
L_10eed9a4:;
  /* 10eed9a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed9a6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10eed9a8 call dword ptr [0x10f12334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12334))), 0x10eed9aeu);
  /* 10eed9ae jmp 0x10eed9ba */
  goto L_10eed9ba;
L_10eed9b0:;
  /* 10eed9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eed9b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10eed9b4 call dword ptr [0x10f12334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12334))), 0x10eed9bau);
L_10eed9ba:;
  /* 10eed9ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed9bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eed9c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eed9c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eed9c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eed9c9 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eed9d0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10eed9d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eed9d9 jmp 0x10eed9f4 */
  goto L_10eed9f4;
L_10eed9db:;
  /* 10eed9db call 0x10ee6db0 */
  push32(0x10eed9e0u); f_10ee6db0();
  /* 10eed9e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eed9e6 call 0x10ee6dc0 */
  push32(0x10eed9ebu); f_10ee6dc0();
  /* 10eed9eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eed9f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10eed9f4:;
  /* 10eed9f4 mov esp, ebp */
  ESP = (EBP);
  /* 10eed9f6 pop ebp */
  EBP = (pop32());
  /* 10eed9f7 ret  */
  ESPCHK(0x10eed920u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da00 @ 0x10eeda00 (102 bytes, 30 insns) */
void f_10eeda00(void) {
  FTRACE(0x10eeda00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeda00 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeda01 mov ebp, esp */
  EBP = (ESP);
  /* 10eeda03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeda06 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeda0c jae 0x10eeda4b */
  if (!C.cf) goto L_10eeda4b;
  /* 10eeda0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeda11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eeda14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeda17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eeda1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eeda1d mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eeda24 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10eeda29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eeda2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eeda2e je 0x10eeda4b */
  if (C.zf) goto L_10eeda4b;
  /* 10eeda30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeda33 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10eeda36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeda39 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeda3c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eeda3f mov ecx, dword ptr [edx*4 + 0x10f10ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eeda46 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10eeda49 jmp 0x10eeda64 */
  goto L_10eeda64;
L_10eeda4b:;
  /* 10eeda4b call 0x10ee6db0 */
  push32(0x10eeda50u); f_10ee6db0();
  /* 10eeda50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eeda56 call 0x10ee6dc0 */
  push32(0x10eeda5bu); f_10ee6dc0();
  /* 10eeda5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eeda61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10eeda64:;
  /* 10eeda64 pop ebp */
  EBP = (pop32());
  /* 10eeda65 ret  */
  ESPCHK(0x10eeda00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da70 @ 0x10eeda70 (260 bytes, 83 insns) */
void f_10eeda70(void) {
  FTRACE(0x10eeda70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeda70 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeda71 mov ebp, esp */
  EBP = (ESP);
  /* 10eeda73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeda76 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eeda7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeda7d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeda80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeda82 je 0x10eeda8d */
  if (C.zf) goto L_10eeda8d;
  /* 10eeda84 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eeda87 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10eeda8a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10eeda8d:;
  /* 10eeda8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeda90 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eeda96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeda98 je 0x10eedaa2 */
  if (C.zf) goto L_10eedaa2;
  /* 10eeda9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eeda9d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10eeda9f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10eedaa2:;
  /* 10eedaa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eedaa5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10eedaab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eedaad je 0x10eedab8 */
  if (C.zf) goto L_10eedab8;
  /* 10eedaaf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eedab2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10eedab5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10eedab8:;
  /* 10eedab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedabb push eax */
  push32((uint32_t)(EAX));
  /* 10eedabc call dword ptr [0x10f123c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123c0))), 0x10eedac2u);
  /* 10eedac2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eedac5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedac9 jne 0x10eedae2 */
  if (!C.zf) goto L_10eedae2;
  /* 10eedacb call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10eedad1u);
  /* 10eedad1 push eax */
  push32((uint32_t)(EAX));
  /* 10eedad2 call 0x10ee6d10 */
  push32(0x10eedad7u); f_10ee6d10();
  /* 10eedad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedada or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eedadd jmp 0x10eedb70 */
  goto L_10eedb70;
L_10eedae2:;
  /* 10eedae2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedae6 jne 0x10eedaf3 */
  if (!C.zf) goto L_10eedaf3;
  /* 10eedae8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eedaeb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10eedaee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10eedaf1 jmp 0x10eedb02 */
  goto L_10eedb02;
L_10eedaf3:;
  /* 10eedaf3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedaf7 jne 0x10eedb02 */
  if (!C.zf) goto L_10eedb02;
  /* 10eedaf9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eedafc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10eedaff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10eedb02:;
  /* 10eedb02 call 0x10eed670 */
  push32(0x10eedb07u); f_10eed670();
  /* 10eedb07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eedb0a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedb0e jne 0x10eedb2b */
  if (!C.zf) goto L_10eedb2b;
  /* 10eedb10 call 0x10ee6db0 */
  push32(0x10eedb15u); f_10ee6db0();
  /* 10eedb15 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10eedb1b call 0x10ee6dc0 */
  push32(0x10eedb20u); f_10ee6dc0();
  /* 10eedb20 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eedb26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eedb29 jmp 0x10eedb70 */
  goto L_10eedb70;
L_10eedb2b:;
  /* 10eedb2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedb2e push eax */
  push32((uint32_t)(EAX));
  /* 10eedb2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedb32 push ecx */
  push32((uint32_t)(ECX));
  /* 10eedb33 call 0x10eed860 */
  push32(0x10eedb38u); f_10eed860();
  /* 10eedb38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedb3b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eedb3e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10eedb41 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10eedb44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedb47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eedb4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedb4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eedb50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eedb53 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eedb5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eedb5d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10eedb61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedb64 push ecx */
  push32((uint32_t)(ECX));
  /* 10eedb65 call 0x10eedc10 */
  push32(0x10eedb6au); f_10eedc10();
  /* 10eedb6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedb6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10eedb70:;
  /* 10eedb70 mov esp, ebp */
  ESP = (EBP);
  /* 10eedb72 pop ebp */
  EBP = (pop32());
  /* 10eedb73 ret  */
  ESPCHK(0x10eeda70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001db80 @ 0x10eedb80 (134 bytes, 44 insns) */
void f_10eedb80(void) {
  FTRACE(0x10eedb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eedb80 push ebp */
  push32((uint32_t)(EBP));
  /* 10eedb81 mov ebp, esp */
  EBP = (ESP);
  /* 10eedb83 push ecx */
  push32((uint32_t)(ECX));
  /* 10eedb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedb87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eedb8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedb8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eedb90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eedb93 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eedb9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedb9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eedb9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedba2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedba6 jne 0x10eedbe1 */
  if (!C.zf) goto L_10eedbe1;
  /* 10eedba8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10eedbaa call 0x10edb620 */
  push32(0x10eedbafu); f_10edb620();
  /* 10eedbaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedbb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedbb5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedbb9 jne 0x10eedbd7 */
  if (!C.zf) goto L_10eedbd7;
  /* 10eedbbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedbbe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedbc1 push edx */
  push32((uint32_t)(EDX));
  /* 10eedbc2 call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10eedbc8u);
  /* 10eedbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedbcb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eedbce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedbd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedbd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10eedbd7:;
  /* 10eedbd7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10eedbd9 call 0x10edb6c0 */
  push32(0x10eedbdeu); f_10edb6c0();
  /* 10eedbde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eedbe1:;
  /* 10eedbe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedbe4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eedbe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedbea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eedbed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eedbf0 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eedbf7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10eedbfb push eax */
  push32((uint32_t)(EAX));
  /* 10eedbfc call dword ptr [0x10f12438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12438))), 0x10eedc02u);
  /* 10eedc02 mov esp, ebp */
  ESP = (EBP);
  /* 10eedc04 pop ebp */
  EBP = (pop32());
  /* 10eedc05 ret  */
  ESPCHK(0x10eedb80u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10eedc10 (38 bytes, 13 insns) */
void f_10eedc10(void) {
  FTRACE(0x10eedc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eedc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10eedc11 mov ebp, esp */
  EBP = (ESP);
  /* 10eedc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedc16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eedc19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedc1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eedc1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eedc22 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eedc29 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10eedc2d push eax */
  push32((uint32_t)(EAX));
  /* 10eedc2e call dword ptr [0x10f1243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1243c))), 0x10eedc34u);
  /* 10eedc34 pop ebp */
  EBP = (pop32());
  /* 10eedc35 ret  */
  ESPCHK(0x10eedc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dc40 @ 0x10eedc40 (218 bytes, 63 insns) */
void f_10eedc40(void) {
  FTRACE(0x10eedc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eedc40 push ebp */
  push32((uint32_t)(EBP));
  /* 10eedc41 mov ebp, esp */
  EBP = (ESP);
  /* 10eedc43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eedc46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eedc4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10eedc4f call 0x10edb620 */
  push32(0x10eedc54u); f_10edb620();
  /* 10eedc54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedc57 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10eedc5e jmp 0x10eedc69 */
  goto L_10eedc69;
L_10eedc60:;
  /* 10eedc60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedc63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedc66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10eedc69:;
  /* 10eedc69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedc6c cmp ecx, dword ptr [0x10f10bc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10bc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedc72 jge 0x10eedd09 */
  if ((C.sf==C.of)) goto L_10eedd09;
  /* 10eedc78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedc7b mov eax, dword ptr [0x10f0f86c] */
  EAX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedc80 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedc84 je 0x10eedd04 */
  if (C.zf) goto L_10eedd04;
  /* 10eedc86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedc89 mov edx, dword ptr [0x10f0f86c] */
  EDX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedc8f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10eedc92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10eedc95 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10eedc9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eedc9d je 0x10eedcc1 */
  if (C.zf) goto L_10eedcc1;
  /* 10eedc9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedca2 mov eax, dword ptr [0x10f0f86c] */
  EAX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedca7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10eedcaa push ecx */
  push32((uint32_t)(ECX));
  /* 10eedcab call 0x10ef03d0 */
  push32(0x10eedcb0u); f_10ef03d0();
  /* 10eedcb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedcb3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedcb6 je 0x10eedcc1 */
  if (C.zf) goto L_10eedcc1;
  /* 10eedcb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedcbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedcbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10eedcc1:;
  /* 10eedcc1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedcc5 jl 0x10eedd04 */
  if ((C.sf!=C.of)) goto L_10eedd04;
  /* 10eedcc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedcca mov ecx, dword ptr [0x10f0f86c] */
  ECX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedcd0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10eedcd3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedcd6 push edx */
  push32((uint32_t)(EDX));
  /* 10eedcd7 call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10eedcddu);
  /* 10eedcdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10eedcdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedce2 mov ecx, dword ptr [0x10f0f86c] */
  ECX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedce8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10eedceb push edx */
  push32((uint32_t)(EDX));
  /* 10eedcec call 0x10edc1b0 */
  push32(0x10eedcf1u); f_10edc1b0();
  /* 10eedcf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedcf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedcf7 mov ecx, dword ptr [0x10f0f86c] */
  ECX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedcfd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10eedd04:;
  /* 10eedd04 jmp 0x10eedc60 */
  goto L_10eedc60;
L_10eedd09:;
  /* 10eedd09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eedd0b call 0x10edb6c0 */
  push32(0x10eedd10u); f_10edb6c0();
  /* 10eedd10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedd13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedd16 mov esp, ebp */
  ESP = (EBP);
  /* 10eedd18 pop ebp */
  EBP = (pop32());
  /* 10eedd19 ret  */
  ESPCHK(0x10eedc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dd20 @ 0x10eedd20 (68 bytes, 26 insns) */
void f_10eedd20(void) {
  FTRACE(0x10eedd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eedd20 push ebp */
  push32((uint32_t)(EBP));
  /* 10eedd21 mov ebp, esp */
  EBP = (ESP);
  /* 10eedd23 push ecx */
  push32((uint32_t)(ECX));
  /* 10eedd24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedd28 jne 0x10eedd36 */
  if (!C.zf) goto L_10eedd36;
  /* 10eedd2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10eedd2c call 0x10eede90 */
  push32(0x10eedd31u); f_10eede90();
  /* 10eedd31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedd34 jmp 0x10eedd60 */
  goto L_10eedd60;
L_10eedd36:;
  /* 10eedd36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedd39 push eax */
  push32((uint32_t)(EAX));
  /* 10eedd3a call 0x10eea850 */
  push32(0x10eedd3fu); f_10eea850();
  /* 10eedd3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedd42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedd45 push ecx */
  push32((uint32_t)(ECX));
  /* 10eedd46 call 0x10eedd70 */
  push32(0x10eedd4bu); f_10eedd70();
  /* 10eedd4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedd4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eedd51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedd54 push edx */
  push32((uint32_t)(EDX));
  /* 10eedd55 call 0x10eea8c0 */
  push32(0x10eedd5au); f_10eea8c0();
  /* 10eedd5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedd5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eedd60:;
  /* 10eedd60 mov esp, ebp */
  ESP = (EBP);
  /* 10eedd62 pop ebp */
  EBP = (pop32());
  /* 10eedd63 ret  */
  ESPCHK(0x10eedd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dd70 @ 0x10eedd70 (65 bytes, 26 insns) */
void f_10eedd70(void) {
  FTRACE(0x10eedd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eedd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10eedd71 mov ebp, esp */
  EBP = (ESP);
  /* 10eedd73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedd76 push eax */
  push32((uint32_t)(EAX));
  /* 10eedd77 call 0x10eeddc0 */
  push32(0x10eedd7cu); f_10eeddc0();
  /* 10eedd7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedd7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eedd81 je 0x10eedd88 */
  if (C.zf) goto L_10eedd88;
  /* 10eedd83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eedd86 jmp 0x10eeddaf */
  goto L_10eeddaf;
L_10eedd88:;
  /* 10eedd88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedd8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eedd8e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eedd94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eedd96 je 0x10eeddad */
  if (C.zf) goto L_10eeddad;
  /* 10eedd98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eedd9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10eedd9e push ecx */
  push32((uint32_t)(ECX));
  /* 10eedd9f call 0x10ef0520 */
  push32(0x10eedda4u); f_10ef0520();
  /* 10eedda4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedda7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eedda9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeddab jmp 0x10eeddaf */
  goto L_10eeddaf;
L_10eeddad:;
  /* 10eeddad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eeddaf:;
  /* 10eeddaf pop ebp */
  EBP = (pop32());
  /* 10eeddb0 ret  */
  ESPCHK(0x10eedd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ddc0 @ 0x10eeddc0 (183 bytes, 62 insns) */
void f_10eeddc0(void) {
  FTRACE(0x10eeddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeddc1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeddc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeddc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eeddcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeddd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eeddd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeddd6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eeddd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10eedddc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedddf jne 0x10eede5b */
  if (!C.zf) goto L_10eede5b;
  /* 10eedde1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eedde4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10eedde7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10eedded test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eeddef je 0x10eede5b */
  if (C.zf) goto L_10eede5b;
  /* 10eeddf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeddf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeddf7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10eeddf9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeddfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeddff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eede03 jle 0x10eede5b */
  if ((C.zf||C.sf!=C.of)) goto L_10eede5b;
  /* 10eede05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eede08 push edx */
  push32((uint32_t)(EDX));
  /* 10eede09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eede0f push ecx */
  push32((uint32_t)(ECX));
  /* 10eede10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede13 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10eede16 push eax */
  push32((uint32_t)(EAX));
  /* 10eede17 call 0x10eea2e0 */
  push32(0x10eede1cu); f_10eea2e0();
  /* 10eede1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eede1f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eede22 jne 0x10eede45 */
  if (!C.zf) goto L_10eede45;
  /* 10eede24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eede2a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10eede30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eede32 je 0x10eede43 */
  if (C.zf) goto L_10eede43;
  /* 10eede34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede37 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10eede3a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10eede3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede40 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10eede43:;
  /* 10eede43 jmp 0x10eede5b */
  goto L_10eede5b;
L_10eede45:;
  /* 10eede45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede48 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10eede4b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10eede4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede51 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10eede54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10eede5b:;
  /* 10eede5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede61 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10eede64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eede66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eede69 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10eede70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eede73 mov esp, ebp */
  ESP = (EBP);
  /* 10eede75 pop ebp */
  EBP = (pop32());
  /* 10eede76 ret  */
  ESPCHK(0x10eeddc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001de80 @ 0x10eede80 (15 bytes, 7 insns) */
void f_10eede80(void) {
  FTRACE(0x10eede80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eede80 push ebp */
  push32((uint32_t)(EBP));
  /* 10eede81 mov ebp, esp */
  EBP = (ESP);
  /* 10eede83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eede85 call 0x10eede90 */
  push32(0x10eede8au); f_10eede90();
  /* 10eede8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eede8d pop ebp */
  EBP = (pop32());
  /* 10eede8e ret  */
  ESPCHK(0x10eede80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001de90 @ 0x10eede90 (319 bytes, 94 insns) */
void f_10eede90(void) {
  FTRACE(0x10eede90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eede90 push ebp */
  push32((uint32_t)(EBP));
  /* 10eede91 mov ebp, esp */
  EBP = (ESP);
  /* 10eede93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eede96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eede9d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eedea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eedea6 call 0x10edb620 */
  push32(0x10eedeabu); f_10edb620();
  /* 10eedeab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedeae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eedeb5 jmp 0x10eedec0 */
  goto L_10eedec0;
L_10eedeb7:;
  /* 10eedeb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedeba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedebd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10eedec0:;
  /* 10eedec0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedec3 cmp ecx, dword ptr [0x10f10bc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10bc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedec9 jge 0x10eedfb3 */
  if ((C.sf==C.of)) goto L_10eedfb3;
  /* 10eedecf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeded2 mov eax, dword ptr [0x10f0f86c] */
  EAX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eeded7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eededb je 0x10eedfae */
  if (C.zf) goto L_10eedfae;
  /* 10eedee1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedee4 mov edx, dword ptr [0x10f0f86c] */
  EDX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedeea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10eedeed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10eedef0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10eedef6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eedef8 je 0x10eedfae */
  if (C.zf) goto L_10eedfae;
  /* 10eedefe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf01 mov eax, dword ptr [0x10f0f86c] */
  EAX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedf06 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10eedf09 push ecx */
  push32((uint32_t)(ECX));
  /* 10eedf0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf0d push edx */
  push32((uint32_t)(EDX));
  /* 10eedf0e call 0x10eea890 */
  push32(0x10eedf13u); f_10eea890();
  /* 10eedf13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedf16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf19 mov ecx, dword ptr [0x10f0f86c] */
  ECX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedf1f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10eedf22 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10eedf25 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10eedf2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eedf2c je 0x10eedf95 */
  if (C.zf) goto L_10eedf95;
  /* 10eedf2e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedf32 jne 0x10eedf59 */
  if (!C.zf) goto L_10eedf59;
  /* 10eedf34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf37 mov edx, dword ptr [0x10f0f86c] */
  EDX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedf3d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10eedf40 push eax */
  push32((uint32_t)(EAX));
  /* 10eedf41 call 0x10eedd70 */
  push32(0x10eedf46u); f_10eedd70();
  /* 10eedf46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedf49 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedf4c je 0x10eedf57 */
  if (C.zf) goto L_10eedf57;
  /* 10eedf4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedf51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedf54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eedf57:;
  /* 10eedf57 jmp 0x10eedf95 */
  goto L_10eedf95;
L_10eedf59:;
  /* 10eedf59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedf5d jne 0x10eedf95 */
  if (!C.zf) goto L_10eedf95;
  /* 10eedf5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf62 mov eax, dword ptr [0x10f0f86c] */
  EAX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedf67 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10eedf6a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eedf6d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10eedf70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eedf72 je 0x10eedf95 */
  if (C.zf) goto L_10eedf95;
  /* 10eedf74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf77 mov ecx, dword ptr [0x10f0f86c] */
  ECX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedf7d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10eedf80 push edx */
  push32((uint32_t)(EDX));
  /* 10eedf81 call 0x10eedd70 */
  push32(0x10eedf86u); f_10eedd70();
  /* 10eedf86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedf89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedf8c jne 0x10eedf95 */
  if (!C.zf) goto L_10eedf95;
  /* 10eedf8e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10eedf95:;
  /* 10eedf95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedf98 mov ecx, dword ptr [0x10f0f86c] */
  ECX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eedf9e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10eedfa1 push edx */
  push32((uint32_t)(EDX));
  /* 10eedfa2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eedfa5 push eax */
  push32((uint32_t)(EAX));
  /* 10eedfa6 call 0x10eea900 */
  push32(0x10eedfabu); f_10eea900();
  /* 10eedfab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eedfae:;
  /* 10eedfae jmp 0x10eedeb7 */
  goto L_10eedeb7;
L_10eedfb3:;
  /* 10eedfb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eedfb5 call 0x10edb6c0 */
  push32(0x10eedfbau); f_10edb6c0();
  /* 10eedfba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedfbd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedfc1 jne 0x10eedfc8 */
  if (!C.zf) goto L_10eedfc8;
  /* 10eedfc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eedfc6 jmp 0x10eedfcb */
  goto L_10eedfcb;
L_10eedfc8:;
  /* 10eedfc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10eedfcb:;
  /* 10eedfcb mov esp, ebp */
  ESP = (EBP);
  /* 10eedfcd pop ebp */
  EBP = (pop32());
  /* 10eedfce ret  */
  ESPCHK(0x10eede90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dfd0 @ 0x10eedfd0 (289 bytes, 97 insns) */
void f_10eedfd0(void) {
  FTRACE(0x10eedfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eedfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eedfd1 mov ebp, esp */
  EBP = (ESP);
  /* 10eedfd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eedfd6 push esi */
  push32((uint32_t)(ESI));
  /* 10eedfd7 mov eax, dword ptr [0x10f0e2c0] */
  EAX = (r32((uint32_t)(0x10f0e2c0)));
  /* 10eedfdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eedfdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eedfe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eedfed jmp 0x10eedff8 */
  goto L_10eedff8;
L_10eedfef:;
  /* 10eedfef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eedff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eedff5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10eedff8:;
  /* 10eedff8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eedffc jae 0x10eee031 */
  if (!C.cf) goto L_10eee031;
  /* 10eedffe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee004 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10eee007 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee008 call 0x10edfcb0 */
  push32(0x10eee00du); f_10edfcb0();
  /* 10eee00d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee010 mov esi, eax */
  ESI = (EAX);
  /* 10eee012 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee015 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee018 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10eee01c push ecx */
  push32((uint32_t)(ECX));
  /* 10eee01d call 0x10edfcb0 */
  push32(0x10eee022u); f_10edfcb0();
  /* 10eee022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee025 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee028 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10eee02c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eee02f jmp 0x10eedfef */
  goto L_10eedfef;
L_10eee031:;
  /* 10eee031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eee034 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee037 push eax */
  push32((uint32_t)(EAX));
  /* 10eee038 call 0x10edb700 */
  push32(0x10eee03du); f_10edb700();
  /* 10eee03d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee040 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eee043 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee047 je 0x10eee0e9 */
  if (C.zf) goto L_10eee0e9;
  /* 10eee04d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee050 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eee053 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee05a jmp 0x10eee065 */
  goto L_10eee065;
L_10eee05c:;
  /* 10eee05c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee05f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee062 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10eee065:;
  /* 10eee065 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee069 jae 0x10eee0da */
  if (!C.cf) goto L_10eee0da;
  /* 10eee06b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee06e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10eee071 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee074 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee077 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eee07a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee07d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee080 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10eee083 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee084 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee087 push edx */
  push32((uint32_t)(EDX));
  /* 10eee088 call 0x10edfe30 */
  push32(0x10eee08du); f_10edfe30();
  /* 10eee08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee090 push eax */
  push32((uint32_t)(EAX));
  /* 10eee091 call 0x10edfcb0 */
  push32(0x10eee096u); f_10edfcb0();
  /* 10eee096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee099 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee09c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee09e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eee0a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee0a4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10eee0a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee0aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee0ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eee0b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee0b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee0b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10eee0ba push eax */
  push32((uint32_t)(EAX));
  /* 10eee0bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee0be push ecx */
  push32((uint32_t)(ECX));
  /* 10eee0bf call 0x10edfe30 */
  push32(0x10eee0c4u); f_10edfe30();
  /* 10eee0c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee0c7 push eax */
  push32((uint32_t)(EAX));
  /* 10eee0c8 call 0x10edfcb0 */
  push32(0x10eee0cdu); f_10edfcb0();
  /* 10eee0cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee0d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee0d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee0d5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee0d8 jmp 0x10eee05c */
  goto L_10eee05c;
L_10eee0da:;
  /* 10eee0da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee0dd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10eee0e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee0e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee0e6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10eee0e9:;
  /* 10eee0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee0ec pop esi */
  ESI = (pop32());
  /* 10eee0ed mov esp, ebp */
  ESP = (EBP);
  /* 10eee0ef pop ebp */
  EBP = (pop32());
  /* 10eee0f0 ret  */
  ESPCHK(0x10eedfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e100 @ 0x10eee100 (291 bytes, 97 insns) */
void f_10eee100(void) {
  FTRACE(0x10eee100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eee100 push ebp */
  push32((uint32_t)(EBP));
  /* 10eee101 mov ebp, esp */
  EBP = (ESP);
  /* 10eee103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee106 push esi */
  push32((uint32_t)(ESI));
  /* 10eee107 mov eax, dword ptr [0x10f0e2c0] */
  EAX = (r32((uint32_t)(0x10f0e2c0)));
  /* 10eee10c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eee10f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eee116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee11d jmp 0x10eee128 */
  goto L_10eee128;
L_10eee11f:;
  /* 10eee11f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee125 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10eee128:;
  /* 10eee128 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee12c jae 0x10eee162 */
  if (!C.cf) goto L_10eee162;
  /* 10eee12e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee134 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10eee138 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee139 call 0x10edfcb0 */
  push32(0x10eee13eu); f_10edfcb0();
  /* 10eee13e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee141 mov esi, eax */
  ESI = (EAX);
  /* 10eee143 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee146 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee149 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10eee14d push ecx */
  push32((uint32_t)(ECX));
  /* 10eee14e call 0x10edfcb0 */
  push32(0x10eee153u); f_10edfcb0();
  /* 10eee153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee156 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee159 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10eee15d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eee160 jmp 0x10eee11f */
  goto L_10eee11f;
L_10eee162:;
  /* 10eee162 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eee165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee168 push eax */
  push32((uint32_t)(EAX));
  /* 10eee169 call 0x10edb700 */
  push32(0x10eee16eu); f_10edb700();
  /* 10eee16e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee171 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eee174 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee178 je 0x10eee21b */
  if (C.zf) goto L_10eee21b;
  /* 10eee17e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee181 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eee184 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee18b jmp 0x10eee196 */
  goto L_10eee196;
L_10eee18d:;
  /* 10eee18d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee190 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee193 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10eee196:;
  /* 10eee196 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee19a jae 0x10eee20c */
  if (!C.cf) goto L_10eee20c;
  /* 10eee19c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee19f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10eee1a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee1a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee1a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eee1ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee1ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee1b1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10eee1b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee1b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee1b9 push edx */
  push32((uint32_t)(EDX));
  /* 10eee1ba call 0x10edfe30 */
  push32(0x10eee1bfu); f_10edfe30();
  /* 10eee1bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee1c2 push eax */
  push32((uint32_t)(EAX));
  /* 10eee1c3 call 0x10edfcb0 */
  push32(0x10eee1c8u); f_10edfcb0();
  /* 10eee1c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee1cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee1ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee1d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eee1d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee1d6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10eee1d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee1dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee1df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eee1e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee1e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee1e8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10eee1ec push eax */
  push32((uint32_t)(EAX));
  /* 10eee1ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee1f1 call 0x10edfe30 */
  push32(0x10eee1f6u); f_10edfe30();
  /* 10eee1f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee1f9 push eax */
  push32((uint32_t)(EAX));
  /* 10eee1fa call 0x10edfcb0 */
  push32(0x10eee1ffu); f_10edfcb0();
  /* 10eee1ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee202 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee205 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee207 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee20a jmp 0x10eee18d */
  goto L_10eee18d;
L_10eee20c:;
  /* 10eee20c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee20f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10eee212 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee218 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10eee21b:;
  /* 10eee21b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee21e pop esi */
  ESI = (pop32());
  /* 10eee21f mov esp, ebp */
  ESP = (EBP);
  /* 10eee221 pop ebp */
  EBP = (pop32());
  /* 10eee222 ret  */
  ESPCHK(0x10eee100u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e230 @ 0x10eee230 (878 bytes, 273 insns) */
void f_10eee230(void) {
  FTRACE(0x10eee230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eee230 push ebp */
  push32((uint32_t)(EBP));
  /* 10eee231 mov ebp, esp */
  EBP = (ESP);
  /* 10eee233 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee236 push esi */
  push32((uint32_t)(ESI));
  /* 10eee237 mov eax, dword ptr [0x10f0e2c0] */
  EAX = (r32((uint32_t)(0x10f0e2c0)));
  /* 10eee23c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eee23f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eee246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee24d jmp 0x10eee258 */
  goto L_10eee258;
L_10eee24f:;
  /* 10eee24f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee255 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10eee258:;
  /* 10eee258 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee25c jae 0x10eee291 */
  if (!C.cf) goto L_10eee291;
  /* 10eee25e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee264 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10eee267 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee268 call 0x10edfcb0 */
  push32(0x10eee26du); f_10edfcb0();
  /* 10eee26d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee270 mov esi, eax */
  ESI = (EAX);
  /* 10eee272 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee278 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10eee27c push ecx */
  push32((uint32_t)(ECX));
  /* 10eee27d call 0x10edfcb0 */
  push32(0x10eee282u); f_10edfcb0();
  /* 10eee282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee285 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee288 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10eee28c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eee28f jmp 0x10eee24f */
  goto L_10eee24f;
L_10eee291:;
  /* 10eee291 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee298 jmp 0x10eee2a3 */
  goto L_10eee2a3;
L_10eee29a:;
  /* 10eee29a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee29d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee2a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10eee2a3:;
  /* 10eee2a3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee2a7 jae 0x10eee2dd */
  if (!C.cf) goto L_10eee2dd;
  /* 10eee2a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee2ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee2af mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10eee2b3 push eax */
  push32((uint32_t)(EAX));
  /* 10eee2b4 call 0x10edfcb0 */
  push32(0x10eee2b9u); f_10edfcb0();
  /* 10eee2b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee2bc mov esi, eax */
  ESI = (EAX);
  /* 10eee2be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee2c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee2c4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10eee2c8 push eax */
  push32((uint32_t)(EAX));
  /* 10eee2c9 call 0x10edfcb0 */
  push32(0x10eee2ceu); f_10edfcb0();
  /* 10eee2ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee2d1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee2d4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10eee2d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eee2db jmp 0x10eee29a */
  goto L_10eee29a;
L_10eee2dd:;
  /* 10eee2dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee2e0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10eee2e6 push eax */
  push32((uint32_t)(EAX));
  /* 10eee2e7 call 0x10edfcb0 */
  push32(0x10eee2ecu); f_10edfcb0();
  /* 10eee2ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee2ef mov esi, eax */
  ESI = (EAX);
  /* 10eee2f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee2f4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10eee2fa push edx */
  push32((uint32_t)(EDX));
  /* 10eee2fb call 0x10edfcb0 */
  push32(0x10eee300u); f_10edfcb0();
  /* 10eee300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee303 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee306 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10eee30a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eee30d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee310 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10eee316 push edx */
  push32((uint32_t)(EDX));
  /* 10eee317 call 0x10edfcb0 */
  push32(0x10eee31cu); f_10edfcb0();
  /* 10eee31c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee31f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eee322 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10eee326 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eee329 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee32c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10eee332 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee333 call 0x10edfcb0 */
  push32(0x10eee338u); f_10edfcb0();
  /* 10eee338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee33b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eee33e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10eee342 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eee345 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee348 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10eee34e push edx */
  push32((uint32_t)(EDX));
  /* 10eee34f call 0x10edfcb0 */
  push32(0x10eee354u); f_10edfcb0();
  /* 10eee354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eee35a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10eee35e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eee361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eee364 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee369 push eax */
  push32((uint32_t)(EAX));
  /* 10eee36a call 0x10edb700 */
  push32(0x10eee36fu); f_10edb700();
  /* 10eee36f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee372 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eee375 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee379 je 0x10eee596 */
  if (C.zf) goto L_10eee596;
  /* 10eee37f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee382 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10eee385 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee388 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee38e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee391 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10eee396 mov eax, dword ptr [0x10f0e2c0] */
  EAX = (r32((uint32_t)(0x10f0e2c0)));
  /* 10eee39b push eax */
  push32((uint32_t)(EAX));
  /* 10eee39c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee39f push ecx */
  push32((uint32_t)(ECX));
  /* 10eee3a0 call 0x10ee57c0 */
  push32(0x10eee3a5u); f_10ee57c0();
  /* 10eee3a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee3a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee3af jmp 0x10eee3ba */
  goto L_10eee3ba;
L_10eee3b1:;
  /* 10eee3b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee3b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee3b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10eee3ba:;
  /* 10eee3ba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee3be jae 0x10eee42e */
  if (!C.cf) goto L_10eee42e;
  /* 10eee3c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee3c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee3c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee3c9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10eee3cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee3cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee3d2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10eee3d5 push edx */
  push32((uint32_t)(EDX));
  /* 10eee3d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee3d9 push eax */
  push32((uint32_t)(EAX));
  /* 10eee3da call 0x10edfe30 */
  push32(0x10eee3dfu); f_10edfe30();
  /* 10eee3df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee3e2 push eax */
  push32((uint32_t)(EAX));
  /* 10eee3e3 call 0x10edfcb0 */
  push32(0x10eee3e8u); f_10edfcb0();
  /* 10eee3e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee3eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee3ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10eee3f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee3f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee3f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee3fb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee3fe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10eee402 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee408 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10eee40c push edx */
  push32((uint32_t)(EDX));
  /* 10eee40d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee410 push eax */
  push32((uint32_t)(EAX));
  /* 10eee411 call 0x10edfe30 */
  push32(0x10eee416u); f_10edfe30();
  /* 10eee416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee419 push eax */
  push32((uint32_t)(EAX));
  /* 10eee41a call 0x10edfcb0 */
  push32(0x10eee41fu); f_10edfcb0();
  /* 10eee41f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee422 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee425 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10eee429 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee42c jmp 0x10eee3b1 */
  goto L_10eee3b1;
L_10eee42e:;
  /* 10eee42e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eee435 jmp 0x10eee440 */
  goto L_10eee440;
L_10eee437:;
  /* 10eee437 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee43a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee43d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10eee440:;
  /* 10eee440 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee444 jae 0x10eee4b6 */
  if (!C.cf) goto L_10eee4b6;
  /* 10eee446 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee449 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee44c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee44f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10eee453 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee456 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee459 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10eee45d push eax */
  push32((uint32_t)(EAX));
  /* 10eee45e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee461 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee462 call 0x10edfe30 */
  push32(0x10eee467u); f_10edfe30();
  /* 10eee467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee46a push eax */
  push32((uint32_t)(EAX));
  /* 10eee46b call 0x10edfcb0 */
  push32(0x10eee470u); f_10edfcb0();
  /* 10eee470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee473 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee476 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10eee47a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eee47d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee480 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee483 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee486 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10eee48a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee48d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee490 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10eee494 push eax */
  push32((uint32_t)(EAX));
  /* 10eee495 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee498 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee499 call 0x10edfe30 */
  push32(0x10eee49eu); f_10edfe30();
  /* 10eee49e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee4a1 push eax */
  push32((uint32_t)(EAX));
  /* 10eee4a2 call 0x10edfcb0 */
  push32(0x10eee4a7u); f_10edfcb0();
  /* 10eee4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee4aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee4ad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10eee4b1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eee4b4 jmp 0x10eee437 */
  goto L_10eee437;
L_10eee4b6:;
  /* 10eee4b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee4b9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee4bc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10eee4c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee4c5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10eee4cb push ecx */
  push32((uint32_t)(ECX));
  /* 10eee4cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee4cf push edx */
  push32((uint32_t)(EDX));
  /* 10eee4d0 call 0x10edfe30 */
  push32(0x10eee4d5u); f_10edfe30();
  /* 10eee4d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee4d8 push eax */
  push32((uint32_t)(EAX));
  /* 10eee4d9 call 0x10edfcb0 */
  push32(0x10eee4deu); f_10edfcb0();
  /* 10eee4de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee4e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee4e4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10eee4e8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee4eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee4ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee4f1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10eee4f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee4fa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10eee500 push eax */
  push32((uint32_t)(EAX));
  /* 10eee501 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee504 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee505 call 0x10edfe30 */
  push32(0x10eee50au); f_10edfe30();
  /* 10eee50a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee50d push eax */
  push32((uint32_t)(EAX));
  /* 10eee50e call 0x10edfcb0 */
  push32(0x10eee513u); f_10edfcb0();
  /* 10eee513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee516 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee519 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10eee51d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eee520 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee523 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee526 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10eee52c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee52f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10eee535 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee536 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee539 push edx */
  push32((uint32_t)(EDX));
  /* 10eee53a call 0x10edfe30 */
  push32(0x10eee53fu); f_10edfe30();
  /* 10eee53f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee542 push eax */
  push32((uint32_t)(EAX));
  /* 10eee543 call 0x10edfcb0 */
  push32(0x10eee548u); f_10edfcb0();
  /* 10eee548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee54b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee54e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10eee552 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eee555 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee558 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee55b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10eee561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee564 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10eee56a push eax */
  push32((uint32_t)(EAX));
  /* 10eee56b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee56e push ecx */
  push32((uint32_t)(ECX));
  /* 10eee56f call 0x10edfe30 */
  push32(0x10eee574u); f_10edfe30();
  /* 10eee574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee577 push eax */
  push32((uint32_t)(EAX));
  /* 10eee578 call 0x10edfcb0 */
  push32(0x10eee57du); f_10edfcb0();
  /* 10eee57d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee583 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10eee587 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eee58a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eee58d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eee590 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10eee596:;
  /* 10eee596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee599 pop esi */
  ESI = (pop32());
  /* 10eee59a mov esp, ebp */
  ESP = (EBP);
  /* 10eee59c pop ebp */
  EBP = (pop32());
  /* 10eee59d ret  */
  ESPCHK(0x10eee230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e5a0 @ 0x10eee5a0 (31 bytes, 15 insns) */
void f_10eee5a0(void) {
  FTRACE(0x10eee5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eee5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eee5a1 mov ebp, esp */
  EBP = (ESP);
  /* 10eee5a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eee5a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee5a8 push eax */
  push32((uint32_t)(EAX));
  /* 10eee5a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee5ac push ecx */
  push32((uint32_t)(ECX));
  /* 10eee5ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee5b0 push edx */
  push32((uint32_t)(EDX));
  /* 10eee5b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eee5b4 push eax */
  push32((uint32_t)(EAX));
  /* 10eee5b5 call 0x10eee5c0 */
  push32(0x10eee5bau); f_10eee5c0();
  /* 10eee5ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee5bd pop ebp */
  EBP = (pop32());
  /* 10eee5be ret  */
  ESPCHK(0x10eee5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e5c0 @ 0x10eee5c0 (393 bytes, 123 insns) */
void f_10eee5c0(void) {
  FTRACE(0x10eee5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eee5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eee5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eee5c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee5c6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee5ca jne 0x10eee5d6 */
  if (!C.zf) goto L_10eee5d6;
  /* 10eee5cc mov eax, dword ptr [0x10f0e2c0] */
  EAX = (r32((uint32_t)(0x10f0e2c0)));
  /* 10eee5d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10eee5d4 jmp 0x10eee5dc */
  goto L_10eee5dc;
L_10eee5d6:;
  /* 10eee5d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee5d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10eee5dc:;
  /* 10eee5dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eee5df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eee5e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee5e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eee5e8 push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10eee5ed call dword ptr [0x10f12428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12428))), 0x10eee5f3u);
  /* 10eee5f3 cmp dword ptr [0x10f10bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee5fa je 0x10eee61a */
  if (C.zf) goto L_10eee61a;
  /* 10eee5fc push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10eee601 call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eee607u);
  /* 10eee607 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eee609 call 0x10edb620 */
  push32(0x10eee60eu); f_10edb620();
  /* 10eee60e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee611 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10eee618 jmp 0x10eee621 */
  goto L_10eee621;
L_10eee61a:;
  /* 10eee61a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10eee621:;
  /* 10eee621 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee625 jbe 0x10eee712 */
  if ((C.cf||C.zf)) goto L_10eee712;
  /* 10eee62b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee62e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eee630 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10eee633 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eee637 je 0x10eee641 */
  if (C.zf) goto L_10eee641;
  /* 10eee639 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eee63d je 0x10eee646 */
  if (C.zf) goto L_10eee646;
  /* 10eee63f jmp 0x10eee6a0 */
  goto L_10eee6a0;
L_10eee641:;
  /* 10eee641 jmp 0x10eee712 */
  goto L_10eee712;
L_10eee646:;
  /* 10eee646 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee649 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee64c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10eee64f mov dword ptr [0x10f0f858], 0 */
  w32((uint32_t)(0x10f0f858), (0x0u));
  /* 10eee659 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee65c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eee65f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee662 jne 0x10eee677 */
  if (!C.zf) goto L_10eee677;
  /* 10eee664 mov dword ptr [0x10f0f858], 1 */
  w32((uint32_t)(0x10f0f858), (0x1u));
  /* 10eee66e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee671 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee674 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10eee677:;
  /* 10eee677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee67a push ecx */
  push32((uint32_t)(ECX));
  /* 10eee67b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10eee67e push edx */
  push32((uint32_t)(EDX));
  /* 10eee67f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10eee682 push eax */
  push32((uint32_t)(EAX));
  /* 10eee683 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee686 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee687 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee68a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eee68c push eax */
  push32((uint32_t)(EAX));
  /* 10eee68d call 0x10eee750 */
  push32(0x10eee692u); f_10eee750();
  /* 10eee692 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee695 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee698 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee69b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10eee69e jmp 0x10eee70d */
  goto L_10eee70d;
L_10eee6a0:;
  /* 10eee6a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee6a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eee6a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eee6a7 mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10eee6ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eee6af mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10eee6b3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eee6b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eee6bb je 0x10eee6e8 */
  if (C.zf) goto L_10eee6e8;
  /* 10eee6bd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee6c1 jbe 0x10eee6e8 */
  if ((C.cf||C.zf)) goto L_10eee6e8;
  /* 10eee6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eee6c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee6c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eee6cb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10eee6cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eee6d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee6d3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eee6d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee6d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee6dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10eee6df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee6e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee6e5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10eee6e8:;
  /* 10eee6e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eee6eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee6ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eee6f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10eee6f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eee6f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee6f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eee6fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee6fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee701 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10eee704 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee707 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee70a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10eee70d:;
  /* 10eee70d jmp 0x10eee621 */
  goto L_10eee621;
L_10eee712:;
  /* 10eee712 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee716 je 0x10eee724 */
  if (C.zf) goto L_10eee724;
  /* 10eee718 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eee71a call 0x10edb6c0 */
  push32(0x10eee71fu); f_10edb6c0();
  /* 10eee71f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee722 jmp 0x10eee72f */
  goto L_10eee72f;
L_10eee724:;
  /* 10eee724 push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10eee729 call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eee72fu);
L_10eee72f:;
  /* 10eee72f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee733 jbe 0x10eee743 */
  if ((C.cf||C.zf)) goto L_10eee743;
  /* 10eee735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eee738 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10eee73b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee73e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee741 jmp 0x10eee745 */
  goto L_10eee745;
L_10eee743:;
  /* 10eee743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eee745:;
  /* 10eee745 mov esp, ebp */
  ESP = (EBP);
  /* 10eee747 pop ebp */
  EBP = (pop32());
  /* 10eee748 ret  */
  ESPCHK(0x10eee5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e750 @ 0x10eee750 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10eee750(void) {
  FTRACE(0x10eee750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eee750 push ebp */
  push32((uint32_t)(EBP));
  /* 10eee751 mov ebp, esp */
  EBP = (ESP);
  /* 10eee753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee756 push esi */
  push32((uint32_t)(ESI));
  /* 10eee757 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10eee75b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eee75e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee761 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee764 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eee767 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee76b ja 0x10eeecb8 */
  if ((!C.cf&&!C.zf)) goto L_10eeecb8;
  /* 10eee771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eee774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eee776 mov dl, byte ptr [eax + 0x10eeed19] */
  DL = (r8((uint32_t)(EAX + 0x10eeed19)));
  /* 10eee77c jmp dword ptr [edx*4 + 0x10eeecbd] */
  switch (EDX) {
    case 0: goto L_10eeec96;
    case 1: goto L_10eee7a5;
    case 2: goto L_10eee7eb;
    case 3: goto L_10eee938;
    case 4: goto L_10eee960;
    case 5: goto L_10eee9ff;
    case 6: goto L_10eeea6b;
    case 7: goto L_10eeea94;
    case 8: goto L_10eeead5;
    case 9: goto L_10eeebb7;
    case 10: goto L_10eeec1e;
    case 11: goto L_10eeec6b;
    case 12: goto L_10eee783;
    case 13: goto L_10eee7c8;
    case 14: goto L_10eee80e;
    case 15: goto L_10eee90e;
    case 16: goto L_10eee9a5;
    case 17: goto L_10eee9d2;
    case 18: goto L_10eeea27;
    case 19: goto L_10eeeaab;
    case 20: goto L_10eeeb59;
    case 21: goto L_10eeebe8;
    case 22: goto L_10eeecb8;
    default: x86_unimpl("switch@0x10eee77c out of table"); return;
  }
L_10eee783:;
  /* 10eee783 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee786 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee787 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee78a push edx */
  push32((uint32_t)(EDX));
  /* 10eee78b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee78e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10eee791 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee794 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10eee797 push eax */
  push32((uint32_t)(EAX));
  /* 10eee798 call 0x10eeed70 */
  push32(0x10eee79du); f_10eeed70();
  /* 10eee79d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee7a0 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee7a5:;
  /* 10eee7a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee7a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee7ac push edx */
  push32((uint32_t)(EDX));
  /* 10eee7ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee7b0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10eee7b3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee7b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10eee7ba push eax */
  push32((uint32_t)(EAX));
  /* 10eee7bb call 0x10eeed70 */
  push32(0x10eee7c0u); f_10eeed70();
  /* 10eee7c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee7c3 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee7c8:;
  /* 10eee7c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee7cb push ecx */
  push32((uint32_t)(ECX));
  /* 10eee7cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee7cf push edx */
  push32((uint32_t)(EDX));
  /* 10eee7d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee7d3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10eee7d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee7d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10eee7dd push eax */
  push32((uint32_t)(EAX));
  /* 10eee7de call 0x10eeed70 */
  push32(0x10eee7e3u); f_10eeed70();
  /* 10eee7e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee7e6 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee7eb:;
  /* 10eee7eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee7ee push ecx */
  push32((uint32_t)(ECX));
  /* 10eee7ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee7f2 push edx */
  push32((uint32_t)(EDX));
  /* 10eee7f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee7f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10eee7f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee7fc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10eee800 push eax */
  push32((uint32_t)(EAX));
  /* 10eee801 call 0x10eeed70 */
  push32(0x10eee806u); f_10eeed70();
  /* 10eee806 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee809 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee80e:;
  /* 10eee80e cmp dword ptr [0x10f0f858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee815 je 0x10eee896 */
  if (C.zf) goto L_10eee896;
  /* 10eee817 mov dword ptr [0x10f0f858], 0 */
  w32((uint32_t)(0x10f0f858), (0x0u));
  /* 10eee821 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee824 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee825 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee828 push edx */
  push32((uint32_t)(EDX));
  /* 10eee829 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee82c push eax */
  push32((uint32_t)(EAX));
  /* 10eee82d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee830 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee831 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee834 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10eee83a push eax */
  push32((uint32_t)(EAX));
  /* 10eee83b call 0x10eeef20 */
  push32(0x10eee840u); f_10eeef20();
  /* 10eee840 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee843 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee846 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee849 jne 0x10eee850 */
  if (!C.zf) goto L_10eee850;
  /* 10eee84b jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee850:;
  /* 10eee850 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee853 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eee855 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10eee858 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee85b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eee85d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee860 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee863 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eee865 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee868 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eee86a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee86d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee870 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eee872 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee875 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee876 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee879 push edx */
  push32((uint32_t)(EDX));
  /* 10eee87a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee87d push eax */
  push32((uint32_t)(EAX));
  /* 10eee87e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee881 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee882 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee885 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10eee88b push eax */
  push32((uint32_t)(EAX));
  /* 10eee88c call 0x10eeef20 */
  push32(0x10eee891u); f_10eeef20();
  /* 10eee891 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee894 jmp 0x10eee909 */
  goto L_10eee909;
L_10eee896:;
  /* 10eee896 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee899 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee89a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee89d push edx */
  push32((uint32_t)(EDX));
  /* 10eee89e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee8a1 push eax */
  push32((uint32_t)(EAX));
  /* 10eee8a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee8a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee8a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee8a9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10eee8af push eax */
  push32((uint32_t)(EAX));
  /* 10eee8b0 call 0x10eeef20 */
  push32(0x10eee8b5u); f_10eeef20();
  /* 10eee8b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee8b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee8bb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee8be jne 0x10eee8c5 */
  if (!C.zf) goto L_10eee8c5;
  /* 10eee8c0 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee8c5:;
  /* 10eee8c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee8c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eee8ca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10eee8cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee8d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eee8d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee8d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee8d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eee8da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee8dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eee8df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eee8e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee8e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eee8e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee8ea push ecx */
  push32((uint32_t)(ECX));
  /* 10eee8eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee8ee push edx */
  push32((uint32_t)(EDX));
  /* 10eee8ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee8f2 push eax */
  push32((uint32_t)(EAX));
  /* 10eee8f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee8f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee8f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eee8fa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10eee900 push eax */
  push32((uint32_t)(EAX));
  /* 10eee901 call 0x10eeef20 */
  push32(0x10eee906u); f_10eeef20();
  /* 10eee906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eee909:;
  /* 10eee909 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee90e:;
  /* 10eee90e mov ecx, dword ptr [0x10f0f858] */
  ECX = (r32((uint32_t)(0x10f0f858)));
  /* 10eee914 mov dword ptr [0x10f0f868], ecx */
  w32((uint32_t)(0x10f0f868), (ECX));
  /* 10eee91a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee91d push edx */
  push32((uint32_t)(EDX));
  /* 10eee91e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee921 push eax */
  push32((uint32_t)(EAX));
  /* 10eee922 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eee924 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee927 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eee92a push edx */
  push32((uint32_t)(EDX));
  /* 10eee92b call 0x10eeedc0 */
  push32(0x10eee930u); f_10eeedc0();
  /* 10eee930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee933 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee938:;
  /* 10eee938 mov eax, dword ptr [0x10f0f858] */
  EAX = (r32((uint32_t)(0x10f0f858)));
  /* 10eee93d mov dword ptr [0x10f0f868], eax */
  w32((uint32_t)(0x10f0f868), (EAX));
  /* 10eee942 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee945 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee946 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee949 push edx */
  push32((uint32_t)(EDX));
  /* 10eee94a push 2 */
  push32((uint32_t)(0x2u));
  /* 10eee94c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee94f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eee952 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee953 call 0x10eeedc0 */
  push32(0x10eee958u); f_10eeedc0();
  /* 10eee958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee95b jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee960:;
  /* 10eee960 mov edx, dword ptr [0x10f0f858] */
  EDX = (r32((uint32_t)(0x10f0f858)));
  /* 10eee966 mov dword ptr [0x10f0f868], edx */
  w32((uint32_t)(0x10f0f868), (EDX));
  /* 10eee96c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee96f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eee972 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eee973 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10eee978 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eee97a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eee97d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eee981 jne 0x10eee98a */
  if (!C.zf) goto L_10eee98a;
  /* 10eee983 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10eee98a:;
  /* 10eee98a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee98d push edx */
  push32((uint32_t)(EDX));
  /* 10eee98e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee991 push eax */
  push32((uint32_t)(EAX));
  /* 10eee992 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eee994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eee997 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee998 call 0x10eeedc0 */
  push32(0x10eee99du); f_10eeedc0();
  /* 10eee99d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee9a0 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee9a5:;
  /* 10eee9a5 mov edx, dword ptr [0x10f0f858] */
  EDX = (r32((uint32_t)(0x10f0f858)));
  /* 10eee9ab mov dword ptr [0x10f0f868], edx */
  w32((uint32_t)(0x10f0f868), (EDX));
  /* 10eee9b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee9b4 push eax */
  push32((uint32_t)(EAX));
  /* 10eee9b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eee9b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10eee9bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee9be mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10eee9c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee9c4 push eax */
  push32((uint32_t)(EAX));
  /* 10eee9c5 call 0x10eeedc0 */
  push32(0x10eee9cau); f_10eeedc0();
  /* 10eee9ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee9cd jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee9d2:;
  /* 10eee9d2 mov ecx, dword ptr [0x10f0f858] */
  ECX = (r32((uint32_t)(0x10f0f858)));
  /* 10eee9d8 mov dword ptr [0x10f0f868], ecx */
  w32((uint32_t)(0x10f0f868), (ECX));
  /* 10eee9de mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eee9e1 push edx */
  push32((uint32_t)(EDX));
  /* 10eee9e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eee9e5 push eax */
  push32((uint32_t)(EAX));
  /* 10eee9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eee9e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eee9eb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10eee9ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee9f1 push edx */
  push32((uint32_t)(EDX));
  /* 10eee9f2 call 0x10eeedc0 */
  push32(0x10eee9f7u); f_10eeedc0();
  /* 10eee9f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eee9fa jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eee9ff:;
  /* 10eee9ff mov eax, dword ptr [0x10f0f858] */
  EAX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeea04 mov dword ptr [0x10f0f868], eax */
  w32((uint32_t)(0x10f0f868), (EAX));
  /* 10eeea09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeea0c push ecx */
  push32((uint32_t)(ECX));
  /* 10eeea0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeea10 push edx */
  push32((uint32_t)(EDX));
  /* 10eeea11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeea13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeea16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10eeea19 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeea1a call 0x10eeedc0 */
  push32(0x10eeea1fu); f_10eeedc0();
  /* 10eeea1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeea22 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeea27:;
  /* 10eeea27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeea2a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeea2e jg 0x10eeea4c */
  if ((!C.zf&&C.sf==C.of)) goto L_10eeea4c;
  /* 10eeea30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeea33 push eax */
  push32((uint32_t)(EAX));
  /* 10eeea34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeea37 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeea38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeea3b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10eeea41 push eax */
  push32((uint32_t)(EAX));
  /* 10eeea42 call 0x10eeed70 */
  push32(0x10eeea47u); f_10eeed70();
  /* 10eeea47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeea4a jmp 0x10eeea66 */
  goto L_10eeea66;
L_10eeea4c:;
  /* 10eeea4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeea4f push ecx */
  push32((uint32_t)(ECX));
  /* 10eeea50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeea53 push edx */
  push32((uint32_t)(EDX));
  /* 10eeea54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeea57 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10eeea5d push ecx */
  push32((uint32_t)(ECX));
  /* 10eeea5e call 0x10eeed70 */
  push32(0x10eeea63u); f_10eeed70();
  /* 10eeea63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eeea66:;
  /* 10eeea66 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeea6b:;
  /* 10eeea6b mov edx, dword ptr [0x10f0f858] */
  EDX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeea71 mov dword ptr [0x10f0f868], edx */
  w32((uint32_t)(0x10f0f868), (EDX));
  /* 10eeea77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeea7a push eax */
  push32((uint32_t)(EAX));
  /* 10eeea7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeea7e push ecx */
  push32((uint32_t)(ECX));
  /* 10eeea7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeea81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeea84 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eeea86 push eax */
  push32((uint32_t)(EAX));
  /* 10eeea87 call 0x10eeedc0 */
  push32(0x10eeea8cu); f_10eeedc0();
  /* 10eeea8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeea8f jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeea94:;
  /* 10eeea94 mov ecx, dword ptr [0x10f0f858] */
  ECX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeea9a mov dword ptr [0x10f0f868], ecx */
  w32((uint32_t)(0x10f0f868), (ECX));
  /* 10eeeaa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeaa3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10eeeaa6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eeeaa9 jmp 0x10eeeafd */
  goto L_10eeeafd;
L_10eeeaab:;
  /* 10eeeaab mov ecx, dword ptr [0x10f0f858] */
  ECX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeeab1 mov dword ptr [0x10f0f868], ecx */
  w32((uint32_t)(0x10f0f868), (ECX));
  /* 10eeeab7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeeaba push edx */
  push32((uint32_t)(EDX));
  /* 10eeeabb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeabe push eax */
  push32((uint32_t)(EAX));
  /* 10eeeabf push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeeac1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeac4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10eeeac7 push edx */
  push32((uint32_t)(EDX));
  /* 10eeeac8 call 0x10eeedc0 */
  push32(0x10eeeacdu); f_10eeedc0();
  /* 10eeeacd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeead0 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeead5:;
  /* 10eeead5 mov eax, dword ptr [0x10f0f858] */
  EAX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeeada mov dword ptr [0x10f0f868], eax */
  w32((uint32_t)(0x10f0f868), (EAX));
  /* 10eeeadf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeae2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeeae6 jne 0x10eeeaf1 */
  if (!C.zf) goto L_10eeeaf1;
  /* 10eeeae8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10eeeaef jmp 0x10eeeafd */
  goto L_10eeeafd;
L_10eeeaf1:;
  /* 10eeeaf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeaf4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10eeeaf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeeafa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10eeeafd:;
  /* 10eeeafd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeb00 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10eeeb03 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeeb06 jge 0x10eeeb11 */
  if ((C.sf==C.of)) goto L_10eeeb11;
  /* 10eeeb08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eeeb0f jmp 0x10eeeb3e */
  goto L_10eeeb3e;
L_10eeeb11:;
  /* 10eeeb11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeb14 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10eeeb17 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeeb18 mov ecx, 7 */
  ECX = (0x7u);
  /* 10eeeb1d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeeb1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeeb22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeb25 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10eeeb28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeeb29 mov ecx, 7 */
  ECX = (0x7u);
  /* 10eeeb2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeeb30 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeeb33 jl 0x10eeeb3e */
  if ((C.sf!=C.of)) goto L_10eeeb3e;
  /* 10eeeb35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeb38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeeb3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10eeeb3e:;
  /* 10eeeb3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeeb41 push eax */
  push32((uint32_t)(EAX));
  /* 10eeeb42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeb45 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeeb46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeeb48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeb4b push edx */
  push32((uint32_t)(EDX));
  /* 10eeeb4c call 0x10eeedc0 */
  push32(0x10eeeb51u); f_10eeedc0();
  /* 10eeeb51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeeb54 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeeb59:;
  /* 10eeeb59 cmp dword ptr [0x10f0f858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeeb60 je 0x10eeeb90 */
  if (C.zf) goto L_10eeeb90;
  /* 10eeeb62 mov dword ptr [0x10f0f858], 0 */
  w32((uint32_t)(0x10f0f858), (0x0u));
  /* 10eeeb6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeeb6f push eax */
  push32((uint32_t)(EAX));
  /* 10eeeb70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeeb73 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeeb74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeb77 push edx */
  push32((uint32_t)(EDX));
  /* 10eeeb78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeb7b push eax */
  push32((uint32_t)(EAX));
  /* 10eeeb7c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeeb7f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10eeeb85 push edx */
  push32((uint32_t)(EDX));
  /* 10eeeb86 call 0x10eeef20 */
  push32(0x10eeeb8bu); f_10eeef20();
  /* 10eeeb8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeeb8e jmp 0x10eeebb2 */
  goto L_10eeebb2;
L_10eeeb90:;
  /* 10eeeb90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeeb93 push eax */
  push32((uint32_t)(EAX));
  /* 10eeeb94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeeb97 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeeb98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeb9b push edx */
  push32((uint32_t)(EDX));
  /* 10eeeb9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeb9f push eax */
  push32((uint32_t)(EAX));
  /* 10eeeba0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeeba3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10eeeba9 push edx */
  push32((uint32_t)(EDX));
  /* 10eeebaa call 0x10eeef20 */
  push32(0x10eeebafu); f_10eeef20();
  /* 10eeebaf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eeebb2:;
  /* 10eeebb2 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeebb7:;
  /* 10eeebb7 mov dword ptr [0x10f0f858], 0 */
  w32((uint32_t)(0x10f0f858), (0x0u));
  /* 10eeebc1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeebc4 push eax */
  push32((uint32_t)(EAX));
  /* 10eeebc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeebc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeebc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeebcc push edx */
  push32((uint32_t)(EDX));
  /* 10eeebcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeebd0 push eax */
  push32((uint32_t)(EAX));
  /* 10eeebd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eeebd4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10eeebda push edx */
  push32((uint32_t)(EDX));
  /* 10eeebdb call 0x10eeef20 */
  push32(0x10eeebe0u); f_10eeef20();
  /* 10eeebe0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeebe3 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeebe8:;
  /* 10eeebe8 mov eax, dword ptr [0x10f0f858] */
  EAX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeebed mov dword ptr [0x10f0f868], eax */
  w32((uint32_t)(0x10f0f868), (EAX));
  /* 10eeebf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeebf5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10eeebf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeebf9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10eeebfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeec00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eeec03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeec06 push edx */
  push32((uint32_t)(EDX));
  /* 10eeec07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeec0a push eax */
  push32((uint32_t)(EAX));
  /* 10eeec0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeec0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeec10 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeec11 call 0x10eeedc0 */
  push32(0x10eeec16u); f_10eeedc0();
  /* 10eeec16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeec19 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeec1e:;
  /* 10eeec1e mov edx, dword ptr [0x10f0f858] */
  EDX = (r32((uint32_t)(0x10f0f858)));
  /* 10eeec24 mov dword ptr [0x10f0f868], edx */
  w32((uint32_t)(0x10f0f868), (EDX));
  /* 10eeec2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeec2d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10eeec30 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeec31 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10eeec36 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeec38 mov ecx, eax */
  ECX = (EAX);
  /* 10eeec3a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeec3d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eeec40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeec43 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10eeec46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeec47 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10eeec4c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeec4e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeec50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeec53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeec56 push eax */
  push32((uint32_t)(EAX));
  /* 10eeec57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeec5a push ecx */
  push32((uint32_t)(ECX));
  /* 10eeec5b push 4 */
  push32((uint32_t)(0x4u));
  /* 10eeec5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeec60 push edx */
  push32((uint32_t)(EDX));
  /* 10eeec61 call 0x10eeedc0 */
  push32(0x10eeec66u); f_10eeedc0();
  /* 10eeec66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeec69 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeec6b:;
  /* 10eeec6b call 0x10ee4670 */
  push32(0x10eeec70u); f_10ee4670();
  /* 10eeec70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeec73 push eax */
  push32((uint32_t)(EAX));
  /* 10eeec74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeec77 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeec78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeec7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeec7d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeec81 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10eeec84 mov ecx, dword ptr [eax*4 + 0x10f0d354] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0d354)));
  /* 10eeec8b push ecx */
  push32((uint32_t)(ECX));
  /* 10eeec8c call 0x10eeed70 */
  push32(0x10eeec91u); f_10eeed70();
  /* 10eeec91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeec94 jmp 0x10eeecb8 */
  goto L_10eeecb8;
L_10eeec96:;
  /* 10eeec96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeec99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eeec9b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10eeec9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeca1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeeca3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeeca6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeca9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eeecab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeecae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeecb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeecb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeecb6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10eeecb8:;
  /* 10eeecb8 pop esi */
  ESI = (pop32());
  /* 10eeecb9 mov esp, ebp */
  ESP = (EBP);
  /* 10eeecbb pop ebp */
  EBP = (pop32());
  /* 10eeecbc ret  */
  ESPCHK(0x10eee750u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10eeed70 (72 bytes, 30 insns) */
void f_10eeed70(void) {
  FTRACE(0x10eeed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeed70 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeed71 mov ebp, esp */
  EBP = (ESP);
L_10eeed73:;
  /* 10eeed73 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeed76 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeed79 je 0x10eeedb6 */
  if (C.zf) goto L_10eeedb6;
  /* 10eeed7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeed7e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eeed81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeed83 je 0x10eeedb6 */
  if (C.zf) goto L_10eeedb6;
  /* 10eeed85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeed88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeed8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeed8d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eeed8f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eeed91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeed94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeed96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeed99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeed9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eeed9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeeda1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeeda4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10eeeda7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeedaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eeedac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeedaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeedb2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eeedb4 jmp 0x10eeed73 */
  goto L_10eeed73;
L_10eeedb6:;
  /* 10eeedb6 pop ebp */
  EBP = (pop32());
  /* 10eeedb7 ret  */
  ESPCHK(0x10eeed70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001edc0 @ 0x10eeedc0 (173 bytes, 64 insns) */
void f_10eeedc0(void) {
  FTRACE(0x10eeedc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeedc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeedc1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeedc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeedc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eeedcb cmp dword ptr [0x10f0f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeedd2 je 0x10eeedea */
  if (C.zf) goto L_10eeedea;
  /* 10eeedd4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeedd7 push eax */
  push32((uint32_t)(EAX));
  /* 10eeedd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeddb push ecx */
  push32((uint32_t)(ECX));
  /* 10eeeddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeeddf push edx */
  push32((uint32_t)(EDX));
  /* 10eeede0 call 0x10eeee70 */
  push32(0x10eeede5u); f_10eeee70();
  /* 10eeede5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeede8 jmp 0x10eeee69 */
  goto L_10eeee69;
L_10eeedea:;
  /* 10eeedea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeeded mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeedf0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeedf2 jae 0x10eeee60 */
  if (!C.cf) goto L_10eeee60;
  /* 10eeedf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeedf7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeedfa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10eeedfd jmp 0x10eeee08 */
  goto L_10eeee08;
L_10eeedff:;
  /* 10eeedff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeee02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeee05 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10eeee08:;
  /* 10eeee08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeee0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeee0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eeee10 je 0x10eeee44 */
  if (C.zf) goto L_10eeee44;
  /* 10eeee12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeee15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeee16 mov ecx, 0xa */
  ECX = (0xau);
  /* 10eeee1b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeee1d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeee20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeee23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeee25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeee28 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10eeee2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeee2e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeee2f mov ecx, 0xa */
  ECX = (0xau);
  /* 10eeee34 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeee36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eeee39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeee3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeee3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eeee42 jmp 0x10eeedff */
  goto L_10eeedff;
L_10eeee44:;
  /* 10eeee44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeee47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeee49 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeee4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeee4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10eeee51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeee54 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeee56 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeee59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeee5c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10eeee5e jmp 0x10eeee69 */
  goto L_10eeee69;
L_10eeee60:;
  /* 10eeee60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeee63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10eeee69:;
  /* 10eeee69 mov esp, ebp */
  ESP = (EBP);
  /* 10eeee6b pop ebp */
  EBP = (pop32());
  /* 10eeee6c ret  */
  ESPCHK(0x10eeedc0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10eeee70 (172 bytes, 65 insns) */
void f_10eeee70(void) {
  FTRACE(0x10eeee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeee70 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeee71 mov ebp, esp */
  EBP = (ESP);
  /* 10eeee73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeee76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeee79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeee7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeee7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeee81 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeee84 jbe 0x10eeeecb */
  if ((C.cf||C.zf)) goto L_10eeeecb;
L_10eeee86:;
  /* 10eeee86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeee89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeee8a mov ecx, 0xa */
  ECX = (0xau);
  /* 10eeee8f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeee91 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeee94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeee97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10eeee99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeee9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeee9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeeea2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeea5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eeeea7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeeeaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeead mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eeeeaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeeeb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eeeeb3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10eeeeb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10eeeeba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eeeebd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeeec1 jle 0x10eeeecb */
  if ((C.zf||C.sf!=C.of)) goto L_10eeeecb;
  /* 10eeeec3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeeec6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeeec9 ja 0x10eeee86 */
  if ((!C.cf&&!C.zf)) goto L_10eeee86;
L_10eeeecb:;
  /* 10eeeecb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeece mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeeed0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eeeed3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeeed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeed9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10eeeedb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeede sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeeee1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eeeee4:;
  /* 10eeeee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeee7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eeeee9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10eeeeec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeeef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeeef2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eeeef4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eeeef6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeeef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeeefc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeeeff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeef02 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10eeef05 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10eeef07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeef0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeef0d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eeef10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeef13 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeef16 jb 0x10eeeee4 */
  if (C.cf) goto L_10eeeee4;
  /* 10eeef18 mov esp, ebp */
  ESP = (EBP);
  /* 10eeef1a pop ebp */
  EBP = (pop32());
  /* 10eeef1b ret  */
  ESPCHK(0x10eeee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ef20 @ 0x10eeef20 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10eeef20(void) {
  FTRACE(0x10eeef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeef20 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeef21 mov ebp, esp */
  EBP = (ESP);
  /* 10eeef23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10eeef26:;
  /* 10eeef26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeef29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eeef2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eeef2e je 0x10eef39c */
  if (C.zf) goto L_10eef39c;
  /* 10eeef34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeef37 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeef3a je 0x10eef39c */
  if (C.zf) goto L_10eef39c;
  /* 10eeef40 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eeef44 mov dword ptr [0x10f0f868], 0 */
  w32((uint32_t)(0x10f0f868), (0x0u));
  /* 10eeef4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eeef55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeef58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeef5b jmp 0x10eeef66 */
  goto L_10eeef66;
L_10eeef5d:;
  /* 10eeef5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeef60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeef63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10eeef66:;
  /* 10eeef66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeef69 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10eeef6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeef6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eeef72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeef75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeef78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeef7b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeef7d jne 0x10eeef81 */
  if (!C.zf) goto L_10eeef81;
  /* 10eeef7f jmp 0x10eeef5d */
  goto L_10eeef5d;
L_10eeef81:;
  /* 10eeef81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeef84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeef87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eeef8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeef8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eeef90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10eeef93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eeef96 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeef99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10eeef9c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeefa0 ja 0x10eef2f0 */
  if ((!C.cf&&!C.zf)) goto L_10eef2f0;
  /* 10eeefa6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eeefa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeefab mov al, byte ptr [ecx + 0x10eef3cc] */
  AL = (r8((uint32_t)(ECX + 0x10eef3cc)));
  /* 10eeefb1 jmp dword ptr [eax*4 + 0x10eef3a0] */
  switch (EAX) {
    case 0: goto L_10eef20f;
    case 1: goto L_10eef0f3;
    case 2: goto L_10eef07e;
    case 3: goto L_10eeefb8;
    case 4: goto L_10eeeff6;
    case 5: goto L_10eef057;
    case 6: goto L_10eef0a5;
    case 7: goto L_10eef0cc;
    case 8: goto L_10eef13a;
    case 9: goto L_10eef034;
    case 10: goto L_10eef2f0;
    default: x86_unimpl("switch@0x10eeefb1 out of table"); return;
  }
L_10eeefb8:;
  /* 10eeefb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeefbb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10eeefbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eeefc1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeefc4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10eeefc7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeefcb ja 0x10eeeff1 */
  if ((!C.cf&&!C.zf)) goto L_10eeeff1;
  /* 10eeefcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eeefd0 jmp dword ptr [ecx*4 + 0x10eef41f] */
  switch (ECX) {
    case 0: goto L_10eeefd7;
    case 1: goto L_10eeefe1;
    case 2: goto L_10eeefe7;
    case 3: goto L_10eeefed;
    case 4: goto L_10eef015;
    case 5: goto L_10eef01f;
    case 6: goto L_10eef025;
    case 7: goto L_10eef02b;
    default: x86_unimpl("switch@0x10eeefd0 out of table"); return;
  }
L_10eeefd7:;
  /* 10eeefd7 mov dword ptr [0x10f0f868], 1 */
  w32((uint32_t)(0x10f0f868), (0x1u));
L_10eeefe1:;
  /* 10eeefe1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10eeefe5 jmp 0x10eeeff1 */
  goto L_10eeeff1;
L_10eeefe7:;
  /* 10eeefe7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10eeefeb jmp 0x10eeeff1 */
  goto L_10eeeff1;
L_10eeefed:;
  /* 10eeefed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10eeeff1:;
  /* 10eeeff1 jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eeeff6:;
  /* 10eeeff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeeff9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10eeeffc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eeefff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef002 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10eef005 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef009 ja 0x10eef02f */
  if ((!C.cf&&!C.zf)) goto L_10eef02f;
  /* 10eef00b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eef00e jmp dword ptr [ecx*4 + 0x10eef42f] */
  switch (ECX) {
    case 0: goto L_10eef015;
    case 1: goto L_10eef01f;
    case 2: goto L_10eef025;
    case 3: goto L_10eef02b;
    default: x86_unimpl("switch@0x10eef00e out of table"); return;
  }
L_10eef015:;
  /* 10eef015 mov dword ptr [0x10f0f868], 1 */
  w32((uint32_t)(0x10f0f868), (0x1u));
L_10eef01f:;
  /* 10eef01f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10eef023 jmp 0x10eef02f */
  goto L_10eef02f;
L_10eef025:;
  /* 10eef025 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10eef029 jmp 0x10eef02f */
  goto L_10eef02f;
L_10eef02b:;
  /* 10eef02b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10eef02f:;
  /* 10eef02f jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef034:;
  /* 10eef034 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef037 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10eef03a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef03e je 0x10eef048 */
  if (C.zf) goto L_10eef048;
  /* 10eef040 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef044 je 0x10eef04e */
  if (C.zf) goto L_10eef04e;
  /* 10eef046 jmp 0x10eef052 */
  goto L_10eef052;
L_10eef048:;
  /* 10eef048 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10eef04c jmp 0x10eef052 */
  goto L_10eef052;
L_10eef04e:;
  /* 10eef04e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10eef052:;
  /* 10eef052 jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef057:;
  /* 10eef057 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef05a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10eef05d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef061 je 0x10eef06b */
  if (C.zf) goto L_10eef06b;
  /* 10eef063 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef067 je 0x10eef075 */
  if (C.zf) goto L_10eef075;
  /* 10eef069 jmp 0x10eef079 */
  goto L_10eef079;
L_10eef06b:;
  /* 10eef06b mov dword ptr [0x10f0f868], 1 */
  w32((uint32_t)(0x10f0f868), (0x1u));
L_10eef075:;
  /* 10eef075 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10eef079:;
  /* 10eef079 jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef07e:;
  /* 10eef07e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef081 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10eef084 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef088 je 0x10eef092 */
  if (C.zf) goto L_10eef092;
  /* 10eef08a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef08e je 0x10eef09c */
  if (C.zf) goto L_10eef09c;
  /* 10eef090 jmp 0x10eef0a0 */
  goto L_10eef0a0;
L_10eef092:;
  /* 10eef092 mov dword ptr [0x10f0f868], 1 */
  w32((uint32_t)(0x10f0f868), (0x1u));
L_10eef09c:;
  /* 10eef09c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10eef0a0:;
  /* 10eef0a0 jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef0a5:;
  /* 10eef0a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef0a8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10eef0ab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef0af je 0x10eef0b9 */
  if (C.zf) goto L_10eef0b9;
  /* 10eef0b1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef0b5 je 0x10eef0c3 */
  if (C.zf) goto L_10eef0c3;
  /* 10eef0b7 jmp 0x10eef0c7 */
  goto L_10eef0c7;
L_10eef0b9:;
  /* 10eef0b9 mov dword ptr [0x10f0f868], 1 */
  w32((uint32_t)(0x10f0f868), (0x1u));
L_10eef0c3:;
  /* 10eef0c3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10eef0c7:;
  /* 10eef0c7 jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef0cc:;
  /* 10eef0cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef0cf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10eef0d2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef0d6 je 0x10eef0e0 */
  if (C.zf) goto L_10eef0e0;
  /* 10eef0d8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef0dc je 0x10eef0ea */
  if (C.zf) goto L_10eef0ea;
  /* 10eef0de jmp 0x10eef0ee */
  goto L_10eef0ee;
L_10eef0e0:;
  /* 10eef0e0 mov dword ptr [0x10f0f868], 1 */
  w32((uint32_t)(0x10f0f868), (0x1u));
L_10eef0ea:;
  /* 10eef0ea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10eef0ee:;
  /* 10eef0ee jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef0f3:;
  /* 10eef0f3 push 0x10f0ab0c */
  push32((uint32_t)(0x10f0ab0cu));
  /* 10eef0f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef0fb push ecx */
  push32((uint32_t)(ECX));
  /* 10eef0fc call 0x10eef950 */
  push32(0x10eef101u); f_10eef950();
  /* 10eef101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef106 jne 0x10eef113 */
  if (!C.zf) goto L_10eef113;
  /* 10eef108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef10b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef10e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eef111 jmp 0x10eef131 */
  goto L_10eef131;
L_10eef113:;
  /* 10eef113 push 0x10f0ab08 */
  push32((uint32_t)(0x10f0ab08u));
  /* 10eef118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef11b push eax */
  push32((uint32_t)(EAX));
  /* 10eef11c call 0x10eef950 */
  push32(0x10eef121u); f_10eef950();
  /* 10eef121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef126 jne 0x10eef131 */
  if (!C.zf) goto L_10eef131;
  /* 10eef128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef12b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef12e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eef131:;
  /* 10eef131 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10eef135 jmp 0x10eef2f0 */
  goto L_10eef2f0;
L_10eef13a:;
  /* 10eef13a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef13d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef141 jg 0x10eef151 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eef151;
  /* 10eef143 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eef146 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10eef14c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10eef14f jmp 0x10eef15d */
  goto L_10eef15d;
L_10eef151:;
  /* 10eef151 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eef154 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10eef15a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10eef15d:;
  /* 10eef15d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef161 jle 0x10eef204 */
  if ((C.zf||C.sf!=C.of)) goto L_10eef204;
  /* 10eef167 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef16a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef16d jbe 0x10eef204 */
  if ((C.cf||C.zf)) goto L_10eef204;
  /* 10eef173 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eef176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef178 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eef17a mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10eef180 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eef182 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10eef186 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eef18c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eef18e je 0x10eef1c7 */
  if (C.zf) goto L_10eef1c7;
  /* 10eef190 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef193 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef196 jbe 0x10eef1c7 */
  if ((C.cf||C.zf)) goto L_10eef1c7;
  /* 10eef198 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef19b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eef19d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eef1a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eef1a2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10eef1a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef1a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eef1a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef1ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef1af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eef1b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eef1b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef1b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10eef1ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef1bd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef1bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef1c2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef1c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10eef1c7:;
  /* 10eef1c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef1ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef1cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eef1cf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eef1d1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eef1d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef1d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eef1d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef1db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef1de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eef1e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eef1e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef1e6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10eef1e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef1ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eef1ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef1f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef1f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eef1f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef1f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef1fc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10eef1ff jmp 0x10eef15d */
  goto L_10eef15d;
L_10eef204:;
  /* 10eef204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eef207 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eef20a jmp 0x10eeef26 */
  goto L_10eeef26;
L_10eef20f:;
  /* 10eef20f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef212 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eef215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eef217 je 0x10eef2e2 */
  if (C.zf) goto L_10eef2e2;
  /* 10eef21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef220 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef223 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10eef226:;
  /* 10eef226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef229 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eef22c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eef22e je 0x10eef2e0 */
  if (C.zf) goto L_10eef2e0;
  /* 10eef234 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef237 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef23a je 0x10eef2e0 */
  if (C.zf) goto L_10eef2e0;
  /* 10eef240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef243 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eef246 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef249 jne 0x10eef259 */
  if (!C.zf) goto L_10eef259;
  /* 10eef24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef24e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef251 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10eef254 jmp 0x10eef2e0 */
  goto L_10eef2e0;
L_10eef259:;
  /* 10eef259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef25c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eef25e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eef260 mov edx, dword ptr [0x10f0cfec] */
  EDX = (r32((uint32_t)(0x10f0cfec)));
  /* 10eef266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef268 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10eef26c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10eef271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef273 je 0x10eef2ac */
  if (C.zf) goto L_10eef2ac;
  /* 10eef275 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef278 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef27b jbe 0x10eef2ac */
  if ((C.cf||C.zf)) goto L_10eef2ac;
  /* 10eef27d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef280 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eef282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef285 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eef287 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10eef289 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef28c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef28e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef291 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef294 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10eef296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef299 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef29c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eef29f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef2a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eef2a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef2a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef2aa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10eef2ac:;
  /* 10eef2ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef2af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eef2b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef2b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eef2b6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10eef2b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef2bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eef2bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef2c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef2c3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eef2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef2c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef2cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10eef2ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef2d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef2d3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef2d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef2d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10eef2db jmp 0x10eef226 */
  goto L_10eef226;
L_10eef2e0:;
  /* 10eef2e0 jmp 0x10eef2eb */
  goto L_10eef2eb;
L_10eef2e2:;
  /* 10eef2e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef2e5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef2e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10eef2eb:;
  /* 10eef2eb jmp 0x10eeef26 */
  goto L_10eeef26;
L_10eef2f0:;
  /* 10eef2f0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eef2f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eef2f6 je 0x10eef31c */
  if (C.zf) goto L_10eef31c;
  /* 10eef2f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eef2fb push edx */
  push32((uint32_t)(EDX));
  /* 10eef2fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef2ff push eax */
  push32((uint32_t)(EAX));
  /* 10eef300 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef303 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef304 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef307 push edx */
  push32((uint32_t)(EDX));
  /* 10eef308 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10eef30b push eax */
  push32((uint32_t)(EAX));
  /* 10eef30c call 0x10eee750 */
  push32(0x10eef311u); f_10eee750();
  /* 10eef311 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef314 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eef317 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10eef31a jmp 0x10eef397 */
  goto L_10eef397;
L_10eef31c:;
  /* 10eef31c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef321 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eef323 mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10eef329 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eef32b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10eef32f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eef335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eef337 je 0x10eef368 */
  if (C.zf) goto L_10eef368;
  /* 10eef339 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef33c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef33e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef341 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eef343 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eef345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef348 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eef34a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef34d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef350 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eef352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef358 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10eef35b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef35e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eef360 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef363 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef366 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10eef368:;
  /* 10eef368 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef36b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eef36d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef370 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eef372 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10eef374 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef377 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef379 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef37c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef37f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10eef381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef384 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef387 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eef38a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef38d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eef38f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef392 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef395 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10eef397:;
  /* 10eef397 jmp 0x10eeef26 */
  goto L_10eeef26;
L_10eef39c:;
  /* 10eef39c mov esp, ebp */
  ESP = (EBP);
  /* 10eef39e pop ebp */
  EBP = (pop32());
  /* 10eef39f ret  */
  ESPCHK(0x10eeef20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f440 @ 0x10eef440 (650 bytes, 178 insns) */
void f_10eef440(void) {
  FTRACE(0x10eef440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eef440 push ebp */
  push32((uint32_t)(EBP));
  /* 10eef441 mov ebp, esp */
  EBP = (ESP);
  /* 10eef443 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef449 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef44d jne 0x10eef5a9 */
  if (!C.zf) goto L_10eef5a9;
  /* 10eef453 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef456 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10eef45c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10eef462 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eef465 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eef46c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10eef476 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef478 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10eef47e push edx */
  push32((uint32_t)(EDX));
  /* 10eef47f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef482 push eax */
  push32((uint32_t)(EAX));
  /* 10eef483 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef486 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef487 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef48a push edx */
  push32((uint32_t)(EDX));
  /* 10eef48b call 0x10ef07a0 */
  push32(0x10eef490u); f_10ef07a0();
  /* 10eef490 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef493 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eef496 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef49a jne 0x10eef52f */
  if (!C.zf) goto L_10eef52f;
  /* 10eef4a0 call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10eef4a6u);
  /* 10eef4a6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef4a9 je 0x10eef4b0 */
  if (C.zf) goto L_10eef4b0;
  /* 10eef4ab jmp 0x10eef58d */
  goto L_10eef58d;
L_10eef4b0:;
  /* 10eef4b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef4b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef4b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef4b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef4b9 push eax */
  push32((uint32_t)(EAX));
  /* 10eef4ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef4bd push ecx */
  push32((uint32_t)(ECX));
  /* 10eef4be call 0x10ef07a0 */
  push32(0x10eef4c3u); f_10ef07a0();
  /* 10eef4c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef4c6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10eef4cc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef4d3 jne 0x10eef4da */
  if (!C.zf) goto L_10eef4da;
  /* 10eef4d5 jmp 0x10eef58d */
  goto L_10eef58d;
L_10eef4da:;
  /* 10eef4da push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10eef4dc push 0x10f0ab14 */
  push32((uint32_t)(0x10f0ab14u));
  /* 10eef4e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eef4e3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10eef4e9 push edx */
  push32((uint32_t)(EDX));
  /* 10eef4ea call 0x10edb720 */
  push32(0x10eef4efu); f_10edb720();
  /* 10eef4ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef4f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eef4f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef4f9 jne 0x10eef500 */
  if (!C.zf) goto L_10eef500;
  /* 10eef4fb jmp 0x10eef58d */
  goto L_10eef58d;
L_10eef500:;
  /* 10eef500 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10eef507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef509 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10eef50f push eax */
  push32((uint32_t)(EAX));
  /* 10eef510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef513 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef514 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef517 push edx */
  push32((uint32_t)(EDX));
  /* 10eef518 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef51b push eax */
  push32((uint32_t)(EAX));
  /* 10eef51c call 0x10ef07a0 */
  push32(0x10eef521u); f_10ef07a0();
  /* 10eef521 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef524 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eef527 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef52b jne 0x10eef52f */
  if (!C.zf) goto L_10eef52f;
  /* 10eef52d jmp 0x10eef58d */
  goto L_10eef58d;
L_10eef52f:;
  /* 10eef52f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10eef531 push 0x10f0ab14 */
  push32((uint32_t)(0x10f0ab14u));
  /* 10eef536 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eef538 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eef53b push ecx */
  push32((uint32_t)(ECX));
  /* 10eef53c call 0x10edb720 */
  push32(0x10eef541u); f_10edb720();
  /* 10eef541 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef544 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10eef54a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10eef54c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10eef552 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef555 jne 0x10eef559 */
  if (!C.zf) goto L_10eef559;
  /* 10eef557 jmp 0x10eef58d */
  goto L_10eef58d;
L_10eef559:;
  /* 10eef559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eef55c push ecx */
  push32((uint32_t)(ECX));
  /* 10eef55d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef560 push edx */
  push32((uint32_t)(EDX));
  /* 10eef561 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10eef567 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eef569 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef56a call 0x10ee06a0 */
  push32(0x10eef56fu); f_10ee06a0();
  /* 10eef56f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef572 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef576 je 0x10eef586 */
  if (C.zf) goto L_10eef586;
  /* 10eef578 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eef57a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef57d push edx */
  push32((uint32_t)(EDX));
  /* 10eef57e call 0x10edc1b0 */
  push32(0x10eef583u); f_10edc1b0();
  /* 10eef583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eef586:;
  /* 10eef586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef588 jmp 0x10eef6c6 */
  goto L_10eef6c6;
L_10eef58d:;
  /* 10eef58d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef591 je 0x10eef5a1 */
  if (C.zf) goto L_10eef5a1;
  /* 10eef593 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eef595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eef598 push eax */
  push32((uint32_t)(EAX));
  /* 10eef599 call 0x10edc1b0 */
  push32(0x10eef59eu); f_10edc1b0();
  /* 10eef59e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eef5a1:;
  /* 10eef5a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eef5a4 jmp 0x10eef6c6 */
  goto L_10eef6c6;
L_10eef5a9:;
  /* 10eef5a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef5ad jne 0x10eef6c3 */
  if (!C.zf) goto L_10eef6c3;
  /* 10eef5b3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10eef5bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef5c0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10eef5c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef5c8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10eef5ce push edx */
  push32((uint32_t)(EDX));
  /* 10eef5cf push 0x10f0f83c */
  push32((uint32_t)(0x10f0f83cu));
  /* 10eef5d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef5d7 push eax */
  push32((uint32_t)(EAX));
  /* 10eef5d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef5db push ecx */
  push32((uint32_t)(ECX));
  /* 10eef5dc call 0x10ef0600 */
  push32(0x10eef5e1u); f_10ef0600();
  /* 10eef5e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef5e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef5e6 jne 0x10eef5f0 */
  if (!C.zf) goto L_10eef5f0;
  /* 10eef5e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eef5eb jmp 0x10eef6c6 */
  goto L_10eef6c6;
L_10eef5f0:;
  /* 10eef5f0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10eef5f6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10eef5f9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10eef603 jmp 0x10eef614 */
  goto L_10eef614;
L_10eef605:;
  /* 10eef605 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10eef60b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef60e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10eef614:;
  /* 10eef614 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef61b jge 0x10eef6bf */
  if ((C.sf==C.of)) goto L_10eef6bf;
  /* 10eef621 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef628 jle 0x10eef65b */
  if ((C.zf||C.sf!=C.of)) goto L_10eef65b;
  /* 10eef62a push 4 */
  push32((uint32_t)(0x4u));
  /* 10eef62c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10eef632 mov dl, byte ptr [ecx*2 + 0x10f0f83c] */
  DL = (r8((uint32_t)(ECX*2 + 0x10f0f83c)));
  /* 10eef639 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10eef63f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10eef645 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eef64a push eax */
  push32((uint32_t)(EAX));
  /* 10eef64b call 0x10ee0dc0 */
  push32(0x10eef650u); f_10ee0dc0();
  /* 10eef650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef653 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10eef659 jmp 0x10eef68e */
  goto L_10eef68e;
L_10eef65b:;
  /* 10eef65b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10eef661 mov dl, byte ptr [ecx*2 + 0x10f0f83c] */
  DL = (r8((uint32_t)(ECX*2 + 0x10f0f83c)));
  /* 10eef668 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10eef66e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10eef674 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eef679 mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10eef67f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eef681 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10eef685 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10eef688 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10eef68e:;
  /* 10eef68e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef695 je 0x10eef6b8 */
  if (C.zf) goto L_10eef6b8;
  /* 10eef697 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10eef69d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eef6a0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eef6a3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10eef6aa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10eef6ae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10eef6b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eef6b6 jmp 0x10eef6ba */
  goto L_10eef6ba;
L_10eef6b8:;
  /* 10eef6b8 jmp 0x10eef6bf */
  goto L_10eef6bf;
L_10eef6ba:;
  /* 10eef6ba jmp 0x10eef605 */
  goto L_10eef605;
L_10eef6bf:;
  /* 10eef6bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef6c1 jmp 0x10eef6c6 */
  goto L_10eef6c6;
L_10eef6c3:;
  /* 10eef6c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10eef6c6:;
  /* 10eef6c6 mov esp, ebp */
  ESP = (EBP);
  /* 10eef6c8 pop ebp */
  EBP = (pop32());
  /* 10eef6c9 ret  */
  ESPCHK(0x10eef440u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f6d0 @ 0x10eef6d0 (10 bytes, 5 insns) */
void f_10eef6d0(void) {
  FTRACE(0x10eef6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eef6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eef6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10eef6d3 mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eef6d8 pop ebp */
  EBP = (pop32());
  /* 10eef6d9 ret  */
  ESPCHK(0x10eef6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f6e0 @ 0x10eef6e0 (575 bytes, 196 insns) */
void f_10eef6e0(void) {
  FTRACE(0x10eef6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eef6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eef6e1 mov ebp, esp */
  EBP = (ESP);
  /* 10eef6e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eef6e5 push 0x10f0ab20 */
  push32((uint32_t)(0x10f0ab20u));
  /* 10eef6ea push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10eef6ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10eef6f5 push eax */
  push32((uint32_t)(EAX));
  /* 10eef6f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10eef6fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef700 push ebx */
  push32((uint32_t)(EBX));
  /* 10eef701 push esi */
  push32((uint32_t)(ESI));
  /* 10eef702 push edi */
  push32((uint32_t)(EDI));
  /* 10eef703 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eef706 cmp dword ptr [0x10f0f848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef70d jne 0x10eef75e */
  if (!C.zf) goto L_10eef75e;
  /* 10eef70f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10eef712 push eax */
  push32((uint32_t)(EAX));
  /* 10eef713 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eef715 push 0x10f0a254 */
  push32((uint32_t)(0x10f0a254u));
  /* 10eef71a push 1 */
  push32((uint32_t)(0x1u));
  /* 10eef71c call dword ptr [0x10f12360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12360))), 0x10eef722u);
  /* 10eef722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef724 je 0x10eef732 */
  if (C.zf) goto L_10eef732;
  /* 10eef726 mov dword ptr [0x10f0f848], 1 */
  w32((uint32_t)(0x10f0f848), (0x1u));
  /* 10eef730 jmp 0x10eef75e */
  goto L_10eef75e;
L_10eef732:;
  /* 10eef732 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10eef735 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef736 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eef738 push 0x10f0a250 */
  push32((uint32_t)(0x10f0a250u));
  /* 10eef73d push 1 */
  push32((uint32_t)(0x1u));
  /* 10eef73f push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef741 call dword ptr [0x10f12364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12364))), 0x10eef747u);
  /* 10eef747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef749 je 0x10eef757 */
  if (C.zf) goto L_10eef757;
  /* 10eef74b mov dword ptr [0x10f0f848], 2 */
  w32((uint32_t)(0x10f0f848), (0x2u));
  /* 10eef755 jmp 0x10eef75e */
  goto L_10eef75e;
L_10eef757:;
  /* 10eef757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef759 jmp 0x10eef939 */
  goto L_10eef939;
L_10eef75e:;
  /* 10eef75e cmp dword ptr [0x10f0f848], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f848))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef765 jne 0x10eef782 */
  if (!C.zf) goto L_10eef782;
  /* 10eef767 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef76a push edx */
  push32((uint32_t)(EDX));
  /* 10eef76b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef76e push eax */
  push32((uint32_t)(EAX));
  /* 10eef76f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef772 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef773 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef776 push edx */
  push32((uint32_t)(EDX));
  /* 10eef777 call dword ptr [0x10f12360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12360))), 0x10eef77du);
  /* 10eef77d jmp 0x10eef939 */
  goto L_10eef939;
L_10eef782:;
  /* 10eef782 cmp dword ptr [0x10f0f848], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f848))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef789 jne 0x10eef937 */
  if (!C.zf) goto L_10eef937;
  /* 10eef78f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef793 jne 0x10eef79d */
  if (!C.zf) goto L_10eef79d;
  /* 10eef795 mov eax, dword ptr [0x10f0f7c8] */
  EAX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10eef79a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10eef79d:;
  /* 10eef79d push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef79f push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef7a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef7a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef7a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef7a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef7ac push edx */
  push32((uint32_t)(EDX));
  /* 10eef7ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10eef7b2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eef7b5 push eax */
  push32((uint32_t)(EAX));
  /* 10eef7b6 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10eef7bcu);
  /* 10eef7bc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10eef7bf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef7c3 jne 0x10eef7cc */
  if (!C.zf) goto L_10eef7cc;
  /* 10eef7c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef7c7 jmp 0x10eef939 */
  goto L_10eef939;
L_10eef7cc:;
  /* 10eef7cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eef7d3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eef7d6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef7d9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10eef7db call 0x10ee0020 */
  push32(0x10eef7e0u); f_10ee0020();
  /* 10eef7e0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10eef7e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eef7e6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eef7e9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10eef7ec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eef7ef push edx */
  push32((uint32_t)(EDX));
  /* 10eef7f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef7f2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eef7f5 push eax */
  push32((uint32_t)(EAX));
  /* 10eef7f6 call 0x10ee1b30 */
  push32(0x10eef7fbu); f_10ee1b30();
  /* 10eef7fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef7fe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10eef805 jmp 0x10eef81e */
  goto L_10eef81e;
  /* 10eef807 mov eax, 1 */
  EAX = (0x1u);
  /* 10eef80c ret  */
  ESPCHK(0x10eef6e0u, _esp0);
  ESP += 4; return;
  /* 10eef80d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10eef810 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10eef817 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10eef81e:;
  /* 10eef81e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef822 jne 0x10eef82b */
  if (!C.zf) goto L_10eef82b;
  /* 10eef824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef826 jmp 0x10eef939 */
  goto L_10eef939;
L_10eef82b:;
  /* 10eef82b push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef82d push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef82f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eef832 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef833 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eef836 push edx */
  push32((uint32_t)(EDX));
  /* 10eef837 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef83a push eax */
  push32((uint32_t)(EAX));
  /* 10eef83b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef83e push ecx */
  push32((uint32_t)(ECX));
  /* 10eef83f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10eef844 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eef847 push edx */
  push32((uint32_t)(EDX));
  /* 10eef848 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10eef84eu);
  /* 10eef84e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eef850 jne 0x10eef859 */
  if (!C.zf) goto L_10eef859;
  /* 10eef852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef854 jmp 0x10eef939 */
  goto L_10eef939;
L_10eef859:;
  /* 10eef859 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10eef860 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eef863 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10eef867 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef86a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10eef86c call 0x10ee0020 */
  push32(0x10eef871u); f_10ee0020();
  /* 10eef871 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10eef874 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eef877 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10eef87a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10eef87d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10eef884 jmp 0x10eef89d */
  goto L_10eef89d;
  /* 10eef886 mov eax, 1 */
  EAX = (0x1u);
  /* 10eef88b ret  */
  ESPCHK(0x10eef6e0u, _esp0);
  ESP += 4; return;
  /* 10eef88c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10eef88f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10eef896 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10eef89d:;
  /* 10eef89d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef8a1 jne 0x10eef8aa */
  if (!C.zf) goto L_10eef8aa;
  /* 10eef8a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef8a5 jmp 0x10eef939 */
  goto L_10eef939;
L_10eef8aa:;
  /* 10eef8aa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef8ae jne 0x10eef8b9 */
  if (!C.zf) goto L_10eef8b9;
  /* 10eef8b0 mov edx, dword ptr [0x10f0f7b8] */
  EDX = (r32((uint32_t)(0x10f0f7b8)));
  /* 10eef8b6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10eef8b9:;
  /* 10eef8b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef8bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eef8bf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10eef8c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef8c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eef8cb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10eef8d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eef8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef8d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eef8d9 push edx */
  push32((uint32_t)(EDX));
  /* 10eef8da mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eef8dd push eax */
  push32((uint32_t)(EAX));
  /* 10eef8de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef8e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef8e2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eef8e5 push edx */
  push32((uint32_t)(EDX));
  /* 10eef8e6 call dword ptr [0x10f12364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12364))), 0x10eef8ecu);
  /* 10eef8ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10eef8ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef8f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eef8f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eef8f7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10eef8fc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef902 je 0x10eef918 */
  if (C.zf) goto L_10eef918;
  /* 10eef904 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef907 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eef90a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eef90c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10eef910 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef916 je 0x10eef91c */
  if (C.zf) goto L_10eef91c;
L_10eef918:;
  /* 10eef918 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eef91a jmp 0x10eef939 */
  goto L_10eef939;
L_10eef91c:;
  /* 10eef91c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eef91f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10eef921 push eax */
  push32((uint32_t)(EAX));
  /* 10eef922 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eef925 push ecx */
  push32((uint32_t)(ECX));
  /* 10eef926 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eef929 push edx */
  push32((uint32_t)(EDX));
  /* 10eef92a call 0x10ee1b90 */
  push32(0x10eef92fu); f_10ee1b90();
  /* 10eef92f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef932 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eef935 jmp 0x10eef939 */
  goto L_10eef939;
L_10eef937:;
  /* 10eef937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eef939:;
  /* 10eef939 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10eef93c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eef93f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10eef946 pop edi */
  EDI = (pop32());
  /* 10eef947 pop esi */
  ESI = (pop32());
  /* 10eef948 pop ebx */
  EBX = (pop32());
  /* 10eef949 mov esp, ebp */
  ESP = (EBP);
  /* 10eef94b pop ebp */
  EBP = (pop32());
  /* 10eef94c ret  */
  ESPCHK(0x10eef6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f950 @ 0x10eef950 (208 bytes, 85 insns) */
void f_10eef950(void) {
  FTRACE(0x10eef950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eef950 push ebp */
  push32((uint32_t)(EBP));
  /* 10eef951 mov ebp, esp */
  EBP = (ESP);
  /* 10eef953 push edi */
  push32((uint32_t)(EDI));
  /* 10eef954 push esi */
  push32((uint32_t)(ESI));
  /* 10eef955 push ebx */
  push32((uint32_t)(EBX));
  /* 10eef956 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10eef959 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10eef95c lea eax, [0x10f0f7b0] */
  EAX = ((uint32_t)(0x10f0f7b0));
  /* 10eef962 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef966 jne 0x10eef9a3 */
  if (!C.zf) goto L_10eef9a3;
  /* 10eef968 mov al, 0xff */
  AL = (0xffu);
  /* 10eef96a mov edi, edi */
  EDI = (EDI);
L_10eef96c:;
  /* 10eef96c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eef96e je 0x10eef99e */
  if (C.zf) goto L_10eef99e;
  /* 10eef970 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10eef972 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10eef973 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10eef975 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10eef976 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eef978 je 0x10eef96c */
  if (C.zf) goto L_10eef96c;
  /* 10eef97a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10eef97c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eef97e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10eef980 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10eef983 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10eef985 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10eef987 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10eef989 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10eef98b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eef98d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10eef98f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10eef992 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10eef994 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10eef996 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eef998 je 0x10eef96c */
  if (C.zf) goto L_10eef96c;
  /* 10eef99a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10eef99c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10eef99e:;
  /* 10eef99e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10eef9a1 jmp 0x10eefa1b */
  goto L_10eefa1b;
L_10eef9a3:;
  /* 10eef9a3 lock inc dword ptr [0x10f10bd4] */
  x86_unimpl("lock inc @ 0x10eef9a3");
  /* 10eef9aa cmp dword ptr [0x10f10bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eef9b1 jg 0x10eef9b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eef9b7;
  /* 10eef9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eef9b5 jmp 0x10eef9cc */
  goto L_10eef9cc;
L_10eef9b7:;
  /* 10eef9b7 lock dec dword ptr [0x10f10bd4] */
  x86_unimpl("lock dec @ 0x10eef9b7");
  /* 10eef9be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eef9c0 call 0x10edb620 */
  push32(0x10eef9c5u); f_10edb620();
  /* 10eef9c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10eef9cc:;
  /* 10eef9cc mov eax, 0xff */
  EAX = (0xffu);
  /* 10eef9d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10eef9d3 nop  */
  /* nop */
L_10eef9d4:;
  /* 10eef9d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eef9d6 je 0x10eef9ff */
  if (C.zf) goto L_10eef9ff;
  /* 10eef9d8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10eef9da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10eef9db mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10eef9dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10eef9de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eef9e0 je 0x10eef9d4 */
  if (C.zf) goto L_10eef9d4;
  /* 10eef9e2 push eax */
  push32((uint32_t)(EAX));
  /* 10eef9e3 push ebx */
  push32((uint32_t)(EBX));
  /* 10eef9e4 call 0x10ee0f30 */
  push32(0x10eef9e9u); f_10ee0f30();
  /* 10eef9e9 mov ebx, eax */
  EBX = (EAX);
  /* 10eef9eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef9ee call 0x10ee0f30 */
  push32(0x10eef9f3u); f_10ee0f30();
  /* 10eef9f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eef9f6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eef9f8 je 0x10eef9d4 */
  if (C.zf) goto L_10eef9d4;
  /* 10eef9fa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eef9fc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10eef9ff:;
  /* 10eef9ff mov ebx, eax */
  EBX = (EAX);
  /* 10eefa01 pop eax */
  EAX = (pop32());
  /* 10eefa02 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefa04 jne 0x10eefa0f */
  if (!C.zf) goto L_10eefa0f;
  /* 10eefa06 lock dec dword ptr [0x10f10bd4] */
  x86_unimpl("lock dec @ 0x10eefa06");
  /* 10eefa0d jmp 0x10eefa19 */
  goto L_10eefa19;
L_10eefa0f:;
  /* 10eefa0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eefa11 call 0x10edb6c0 */
  push32(0x10eefa16u); f_10edb6c0();
  /* 10eefa16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eefa19:;
  /* 10eefa19 mov eax, ebx */
  EAX = (EBX);
L_10eefa1b:;
  /* 10eefa1b pop ebx */
  EBX = (pop32());
  /* 10eefa1c pop esi */
  ESI = (pop32());
  /* 10eefa1d pop edi */
  EDI = (pop32());
  /* 10eefa1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10eefa1f ret  */
  ESPCHK(0x10eef950u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fa20 @ 0x10eefa20 (257 bytes, 103 insns) */
void f_10eefa20(void) {
  FTRACE(0x10eefa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eefa20 push ebp */
  push32((uint32_t)(EBP));
  /* 10eefa21 mov ebp, esp */
  EBP = (ESP);
  /* 10eefa23 push edi */
  push32((uint32_t)(EDI));
  /* 10eefa24 push esi */
  push32((uint32_t)(ESI));
  /* 10eefa25 push ebx */
  push32((uint32_t)(EBX));
  /* 10eefa26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefa29 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefa2b je 0x10eefb1a */
  if (C.zf) goto L_10eefb1a;
  /* 10eefa31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10eefa34 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10eefa37 lea eax, [0x10f0f7b0] */
  EAX = ((uint32_t)(0x10f0f7b0));
  /* 10eefa3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefa41 jne 0x10eefa91 */
  if (!C.zf) goto L_10eefa91;
  /* 10eefa43 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10eefa45 mov bl, 0x5a */
  BL = (0x5au);
  /* 10eefa47 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10eefa49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10eefa4c:;
  /* 10eefa4c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10eefa4e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10eefa50 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10eefa52 je 0x10eefa75 */
  if (C.zf) goto L_10eefa75;
  /* 10eefa54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eefa56 je 0x10eefa75 */
  if (C.zf) goto L_10eefa75;
  /* 10eefa58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10eefa59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10eefa5a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eefa5c jb 0x10eefa64 */
  if (C.cf) goto L_10eefa64;
  /* 10eefa5e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eefa60 ja 0x10eefa64 */
  if ((!C.cf&&!C.zf)) goto L_10eefa64;
  /* 10eefa62 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10eefa64:;
  /* 10eefa64 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eefa66 jb 0x10eefa6e */
  if (C.cf) goto L_10eefa6e;
  /* 10eefa68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eefa6a ja 0x10eefa6e */
  if ((!C.cf&&!C.zf)) goto L_10eefa6e;
  /* 10eefa6c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10eefa6e:;
  /* 10eefa6e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eefa70 jne 0x10eefa7f */
  if (!C.zf) goto L_10eefa7f;
  /* 10eefa72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10eefa73 jne 0x10eefa4c */
  if (!C.zf) goto L_10eefa4c;
L_10eefa75:;
  /* 10eefa75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefa77 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eefa79 je 0x10eefb1a */
  if (C.zf) goto L_10eefb1a;
L_10eefa7f:;
  /* 10eefa7f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10eefa84 jb 0x10eefb1a */
  if (C.cf) goto L_10eefb1a;
  /* 10eefa8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eefa8c jmp 0x10eefb1a */
  goto L_10eefb1a;
L_10eefa91:;
  /* 10eefa91 lock inc dword ptr [0x10f10bd4] */
  x86_unimpl("lock inc @ 0x10eefa91");
  /* 10eefa98 cmp dword ptr [0x10f10bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefa9f jg 0x10eefaa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eefaa5;
  /* 10eefaa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefaa3 jmp 0x10eefabe */
  goto L_10eefabe;
L_10eefaa5:;
  /* 10eefaa5 lock dec dword ptr [0x10f10bd4] */
  x86_unimpl("lock dec @ 0x10eefaa5");
  /* 10eefaac mov ebx, ecx */
  EBX = (ECX);
  /* 10eefaae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eefab0 call 0x10edb620 */
  push32(0x10eefab5u); f_10edb620();
  /* 10eefab5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10eefabc mov ecx, ebx */
  ECX = (EBX);
L_10eefabe:;
  /* 10eefabe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefac0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10eefac2 mov edi, edi */
  EDI = (EDI);
L_10eefac4:;
  /* 10eefac4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10eefac6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefac8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10eefaca je 0x10eefaef */
  if (C.zf) goto L_10eefaef;
  /* 10eefacc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10eeface je 0x10eefaef */
  if (C.zf) goto L_10eefaef;
  /* 10eefad0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10eefad1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10eefad2 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefad3 push eax */
  push32((uint32_t)(EAX));
  /* 10eefad4 push ebx */
  push32((uint32_t)(EBX));
  /* 10eefad5 call 0x10ee0f30 */
  push32(0x10eefadau); f_10ee0f30();
  /* 10eefada mov ebx, eax */
  EBX = (EAX);
  /* 10eefadc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefadf call 0x10ee0f30 */
  push32(0x10eefae4u); f_10ee0f30();
  /* 10eefae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefae7 pop ecx */
  ECX = (pop32());
  /* 10eefae8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefaea jne 0x10eefaf5 */
  if (!C.zf) goto L_10eefaf5;
  /* 10eefaec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10eefaed jne 0x10eefac4 */
  if (!C.zf) goto L_10eefac4;
L_10eefaef:;
  /* 10eefaef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefaf1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefaf3 je 0x10eefafe */
  if (C.zf) goto L_10eefafe;
L_10eefaf5:;
  /* 10eefaf5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10eefafa jb 0x10eefafe */
  if (C.cf) goto L_10eefafe;
  /* 10eefafc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10eefafe:;
  /* 10eefafe pop eax */
  EAX = (pop32());
  /* 10eefaff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefb01 jne 0x10eefb0c */
  if (!C.zf) goto L_10eefb0c;
  /* 10eefb03 lock dec dword ptr [0x10f10bd4] */
  x86_unimpl("lock dec @ 0x10eefb03");
  /* 10eefb0a jmp 0x10eefb1a */
  goto L_10eefb1a;
L_10eefb0c:;
  /* 10eefb0c mov ebx, ecx */
  EBX = (ECX);
  /* 10eefb0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eefb10 call 0x10edb6c0 */
  push32(0x10eefb15u); f_10edb6c0();
  /* 10eefb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefb18 mov ecx, ebx */
  ECX = (EBX);
L_10eefb1a:;
  /* 10eefb1a mov eax, ecx */
  EAX = (ECX);
  /* 10eefb1c pop ebx */
  EBX = (pop32());
  /* 10eefb1d pop esi */
  ESI = (pop32());
  /* 10eefb1e pop edi */
  EDI = (pop32());
  /* 10eefb1f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10eefb20 ret  */
  ESPCHK(0x10eefa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fb30 @ 0x10eefb30 (970 bytes, 340 insns) */
void f_10eefb30(void) {
  FTRACE(0x10eefb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eefb30 push ebp */
  push32((uint32_t)(EBP));
  /* 10eefb31 mov ebp, esp */
  EBP = (ESP);
  /* 10eefb33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eefb35 push 0x10f0ab80 */
  push32((uint32_t)(0x10f0ab80u));
  /* 10eefb3a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10eefb3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10eefb45 push eax */
  push32((uint32_t)(EAX));
  /* 10eefb46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10eefb4d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefb50 push ebx */
  push32((uint32_t)(EBX));
  /* 10eefb51 push esi */
  push32((uint32_t)(ESI));
  /* 10eefb52 push edi */
  push32((uint32_t)(EDI));
  /* 10eefb53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eefb56 cmp dword ptr [0x10f0f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefb5d jne 0x10eefbb6 */
  if (!C.zf) goto L_10eefbb6;
  /* 10eefb5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10eefb61 push 0x10f0a254 */
  push32((uint32_t)(0x10f0a254u));
  /* 10eefb66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eefb68 push 0x10f0a254 */
  push32((uint32_t)(0x10f0a254u));
  /* 10eefb6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefb6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefb71 call dword ptr [0x10f1232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1232c))), 0x10eefb77u);
  /* 10eefb77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eefb79 je 0x10eefb87 */
  if (C.zf) goto L_10eefb87;
  /* 10eefb7b mov dword ptr [0x10f0f84c], 1 */
  w32((uint32_t)(0x10f0f84c), (0x1u));
  /* 10eefb85 jmp 0x10eefbb6 */
  goto L_10eefbb6;
L_10eefb87:;
  /* 10eefb87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eefb89 push 0x10f0a250 */
  push32((uint32_t)(0x10f0a250u));
  /* 10eefb8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10eefb90 push 0x10f0a250 */
  push32((uint32_t)(0x10f0a250u));
  /* 10eefb95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefb97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefb99 call dword ptr [0x10f12330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12330))), 0x10eefb9fu);
  /* 10eefb9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eefba1 je 0x10eefbaf */
  if (C.zf) goto L_10eefbaf;
  /* 10eefba3 mov dword ptr [0x10f0f84c], 2 */
  w32((uint32_t)(0x10f0f84c), (0x2u));
  /* 10eefbad jmp 0x10eefbb6 */
  goto L_10eefbb6;
L_10eefbaf:;
  /* 10eefbaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefbb1 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefbb6:;
  /* 10eefbb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefbba jle 0x10eefbcf */
  if ((C.zf||C.sf!=C.of)) goto L_10eefbcf;
  /* 10eefbbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eefbbf push eax */
  push32((uint32_t)(EAX));
  /* 10eefbc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefbc4 call 0x10eeff30 */
  push32(0x10eefbc9u); f_10eeff30();
  /* 10eefbc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefbcc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10eefbcf:;
  /* 10eefbcf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefbd3 jle 0x10eefbe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10eefbe8;
  /* 10eefbd5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eefbd8 push edx */
  push32((uint32_t)(EDX));
  /* 10eefbd9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eefbdc push eax */
  push32((uint32_t)(EAX));
  /* 10eefbdd call 0x10eeff30 */
  push32(0x10eefbe2u); f_10eeff30();
  /* 10eefbe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefbe5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10eefbe8:;
  /* 10eefbe8 cmp dword ptr [0x10f0f84c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f84c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefbef jne 0x10eefc14 */
  if (!C.zf) goto L_10eefc14;
  /* 10eefbf1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eefbf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefbf5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eefbf8 push edx */
  push32((uint32_t)(EDX));
  /* 10eefbf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eefbfc push eax */
  push32((uint32_t)(EAX));
  /* 10eefbfd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefc00 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefc01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eefc04 push edx */
  push32((uint32_t)(EDX));
  /* 10eefc05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eefc08 push eax */
  push32((uint32_t)(EAX));
  /* 10eefc09 call dword ptr [0x10f12330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12330))), 0x10eefc0fu);
  /* 10eefc0f jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefc14:;
  /* 10eefc14 cmp dword ptr [0x10f0f84c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f84c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc1b jne 0x10eeff12 */
  if (!C.zf) goto L_10eeff12;
  /* 10eefc21 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc25 jne 0x10eefc30 */
  if (!C.zf) goto L_10eefc30;
  /* 10eefc27 mov ecx, dword ptr [0x10f0f7c8] */
  ECX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10eefc2d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10eefc30:;
  /* 10eefc30 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc34 je 0x10eefc40 */
  if (C.zf) goto L_10eefc40;
  /* 10eefc36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc3a jne 0x10eefdbc */
  if (!C.zf) goto L_10eefdbc;
L_10eefc40:;
  /* 10eefc40 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eefc43 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc46 jne 0x10eefc52 */
  if (!C.zf) goto L_10eefc52;
  /* 10eefc48 mov eax, 2 */
  EAX = (0x2u);
  /* 10eefc4d jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefc52:;
  /* 10eefc52 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc56 jle 0x10eefc62 */
  if ((C.zf||C.sf!=C.of)) goto L_10eefc62;
  /* 10eefc58 mov eax, 1 */
  EAX = (0x1u);
  /* 10eefc5d jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefc62:;
  /* 10eefc62 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc66 jle 0x10eefc72 */
  if ((C.zf||C.sf!=C.of)) goto L_10eefc72;
  /* 10eefc68 mov eax, 3 */
  EAX = (0x3u);
  /* 10eefc6d jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefc72:;
  /* 10eefc72 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10eefc75 push eax */
  push32((uint32_t)(EAX));
  /* 10eefc76 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eefc79 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefc7a call dword ptr [0x10f12378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12378))), 0x10eefc80u);
  /* 10eefc80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eefc82 jne 0x10eefc8b */
  if (!C.zf) goto L_10eefc8b;
  /* 10eefc84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefc86 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefc8b:;
  /* 10eefc8b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc8f jne 0x10eefc97 */
  if (!C.zf) goto L_10eefc97;
  /* 10eefc91 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc95 je 0x10eefcc4 */
  if (C.zf) goto L_10eefcc4;
L_10eefc97:;
  /* 10eefc97 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefc9b jne 0x10eefca3 */
  if (!C.zf) goto L_10eefca3;
  /* 10eefc9d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefca1 je 0x10eefcc4 */
  if (C.zf) goto L_10eefcc4;
L_10eefca3:;
  /* 10eefca3 push 0x10f0ab40 */
  push32((uint32_t)(0x10f0ab40u));
  /* 10eefca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefcaa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10eefcaf push 0x10f0ab38 */
  push32((uint32_t)(0x10f0ab38u));
  /* 10eefcb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eefcb6 call 0x10eda2e0 */
  push32(0x10eefcbbu); f_10eda2e0();
  /* 10eefcbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefcbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefcc1 jne 0x10eefcc4 */
  if (!C.zf) goto L_10eefcc4;
  /* 10eefcc3 int3  */
  x86_unimpl("int3 @ 0x10eefcc3");
L_10eefcc4:;
  /* 10eefcc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eefcc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eefcc8 jne 0x10eefc8b */
  if (!C.zf) goto L_10eefc8b;
  /* 10eefcca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefcce jle 0x10eefd43 */
  if ((C.zf||C.sf!=C.of)) goto L_10eefd43;
  /* 10eefcd0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefcd4 jae 0x10eefce0 */
  if (!C.cf) goto L_10eefce0;
  /* 10eefcd6 mov eax, 3 */
  EAX = (0x3u);
  /* 10eefcdb jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefce0:;
  /* 10eefce0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10eefce3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10eefce6 jmp 0x10eefcf1 */
  goto L_10eefcf1;
L_10eefce8:;
  /* 10eefce8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefceb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefcee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10eefcf1:;
  /* 10eefcf1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefcf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefcf6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eefcf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eefcfa je 0x10eefd39 */
  if (C.zf) goto L_10eefd39;
  /* 10eefcfc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefcff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eefd01 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10eefd04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eefd06 je 0x10eefd39 */
  if (C.zf) goto L_10eefd39;
  /* 10eefd08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefd0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefd0d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eefd0f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefd14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eefd16 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefd18 jl 0x10eefd37 */
  if ((C.sf!=C.of)) goto L_10eefd37;
  /* 10eefd1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefd1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eefd1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eefd21 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefd26 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10eefd29 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefd2b jg 0x10eefd37 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eefd37;
  /* 10eefd2d mov eax, 2 */
  EAX = (0x2u);
  /* 10eefd32 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefd37:;
  /* 10eefd37 jmp 0x10eefce8 */
  goto L_10eefce8;
L_10eefd39:;
  /* 10eefd39 mov eax, 3 */
  EAX = (0x3u);
  /* 10eefd3e jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefd43:;
  /* 10eefd43 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefd47 jle 0x10eefdbc */
  if ((C.zf||C.sf!=C.of)) goto L_10eefdbc;
  /* 10eefd49 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefd4d jae 0x10eefd59 */
  if (!C.cf) goto L_10eefd59;
  /* 10eefd4f mov eax, 1 */
  EAX = (0x1u);
  /* 10eefd54 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefd59:;
  /* 10eefd59 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10eefd5c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10eefd5f jmp 0x10eefd6a */
  goto L_10eefd6a;
L_10eefd61:;
  /* 10eefd61 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd64 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefd67 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10eefd6a:;
  /* 10eefd6a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eefd6f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eefd71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eefd73 je 0x10eefdb2 */
  if (C.zf) goto L_10eefdb2;
  /* 10eefd75 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefd7a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10eefd7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eefd7f je 0x10eefdb2 */
  if (C.zf) goto L_10eefdb2;
  /* 10eefd81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eefd84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefd86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eefd88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eefd8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eefd8f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefd91 jl 0x10eefdb0 */
  if ((C.sf!=C.of)) goto L_10eefdb0;
  /* 10eefd93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eefd96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eefd98 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eefd9a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10eefd9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefd9f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10eefda2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefda4 jg 0x10eefdb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eefdb0;
  /* 10eefda6 mov eax, 2 */
  EAX = (0x2u);
  /* 10eefdab jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefdb0:;
  /* 10eefdb0 jmp 0x10eefd61 */
  goto L_10eefd61;
L_10eefdb2:;
  /* 10eefdb2 mov eax, 1 */
  EAX = (0x1u);
  /* 10eefdb7 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefdbc:;
  /* 10eefdbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefdbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefdc0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eefdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefdc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefdc7 push edx */
  push32((uint32_t)(EDX));
  /* 10eefdc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10eefdca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eefdcd push eax */
  push32((uint32_t)(EAX));
  /* 10eefdce call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10eefdd4u);
  /* 10eefdd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10eefdd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefddb jne 0x10eefde4 */
  if (!C.zf) goto L_10eefde4;
  /* 10eefddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefddf jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefde4:;
  /* 10eefde4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eefdeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eefdee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10eefdf0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefdf3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10eefdf5 call 0x10ee0020 */
  push32(0x10eefdfau); f_10ee0020();
  /* 10eefdfa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10eefdfd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eefe00 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10eefe03 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10eefe06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10eefe0d jmp 0x10eefe26 */
  goto L_10eefe26;
  /* 10eefe0f mov eax, 1 */
  EAX = (0x1u);
  /* 10eefe14 ret  */
  ESPCHK(0x10eefb30u, _esp0);
  ESP += 4; return;
  /* 10eefe15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10eefe18 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10eefe1f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10eefe26:;
  /* 10eefe26 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefe2a jne 0x10eefe33 */
  if (!C.zf) goto L_10eefe33;
  /* 10eefe2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefe2e jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefe33:;
  /* 10eefe33 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eefe36 push edx */
  push32((uint32_t)(EDX));
  /* 10eefe37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eefe3a push eax */
  push32((uint32_t)(EAX));
  /* 10eefe3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eefe3e push ecx */
  push32((uint32_t)(ECX));
  /* 10eefe3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eefe42 push edx */
  push32((uint32_t)(EDX));
  /* 10eefe43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eefe45 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eefe48 push eax */
  push32((uint32_t)(EAX));
  /* 10eefe49 call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10eefe4fu);
  /* 10eefe4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eefe51 jne 0x10eefe5a */
  if (!C.zf) goto L_10eefe5a;
  /* 10eefe53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefe55 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefe5a:;
  /* 10eefe5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefe5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10eefe5e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eefe61 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefe62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eefe65 push edx */
  push32((uint32_t)(EDX));
  /* 10eefe66 push 9 */
  push32((uint32_t)(0x9u));
  /* 10eefe68 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eefe6b push eax */
  push32((uint32_t)(EAX));
  /* 10eefe6c call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10eefe72u);
  /* 10eefe72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10eefe75 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefe79 jne 0x10eefe82 */
  if (!C.zf) goto L_10eefe82;
  /* 10eefe7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefe7d jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefe82:;
  /* 10eefe82 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10eefe89 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eefe8c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10eefe8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eefe91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10eefe93 call 0x10ee0020 */
  push32(0x10eefe98u); f_10ee0020();
  /* 10eefe98 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10eefe9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eefe9e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10eefea1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10eefea4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10eefeab jmp 0x10eefec4 */
  goto L_10eefec4;
  /* 10eefead mov eax, 1 */
  EAX = (0x1u);
  /* 10eefeb2 ret  */
  ESPCHK(0x10eefb30u, _esp0);
  ESP += 4; return;
  /* 10eefeb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10eefeb6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10eefebd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10eefec4:;
  /* 10eefec4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefec8 jne 0x10eefece */
  if (!C.zf) goto L_10eefece;
  /* 10eefeca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefecc jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefece:;
  /* 10eefece mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eefed1 push edx */
  push32((uint32_t)(EDX));
  /* 10eefed2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eefed5 push eax */
  push32((uint32_t)(EAX));
  /* 10eefed6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eefed9 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefeda mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eefedd push edx */
  push32((uint32_t)(EDX));
  /* 10eefede push 1 */
  push32((uint32_t)(0x1u));
  /* 10eefee0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eefee3 push eax */
  push32((uint32_t)(EAX));
  /* 10eefee4 call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10eefeeau);
  /* 10eefeea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eefeec jne 0x10eefef2 */
  if (!C.zf) goto L_10eefef2;
  /* 10eefeee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eefef0 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eefef2:;
  /* 10eefef2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eefef5 push ecx */
  push32((uint32_t)(ECX));
  /* 10eefef6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eefef9 push edx */
  push32((uint32_t)(EDX));
  /* 10eefefa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eefefd push eax */
  push32((uint32_t)(EAX));
  /* 10eefefe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eeff01 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeff02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeff05 push edx */
  push32((uint32_t)(EDX));
  /* 10eeff06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeff09 push eax */
  push32((uint32_t)(EAX));
  /* 10eeff0a call dword ptr [0x10f1232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1232c))), 0x10eeff10u);
  /* 10eeff10 jmp 0x10eeff14 */
  goto L_10eeff14;
L_10eeff12:;
  /* 10eeff12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eeff14:;
  /* 10eeff14 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10eeff17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eeff1a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10eeff21 pop edi */
  EDI = (pop32());
  /* 10eeff22 pop esi */
  ESI = (pop32());
  /* 10eeff23 pop ebx */
  EBX = (pop32());
  /* 10eeff24 mov esp, ebp */
  ESP = (EBP);
  /* 10eeff26 pop ebp */
  EBP = (pop32());
  /* 10eeff27 ret  */
  ESPCHK(0x10eefb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ff30 @ 0x10eeff30 (80 bytes, 32 insns) */
void f_10eeff30(void) {
  FTRACE(0x10eeff30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeff30 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeff31 mov ebp, esp */
  EBP = (ESP);
  /* 10eeff33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeff36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeff39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eeff3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeff3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eeff42:;
  /* 10eeff42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeff45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeff48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeff4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eeff4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeff50 je 0x10eeff67 */
  if (C.zf) goto L_10eeff67;
  /* 10eeff52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeff55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eeff58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeff5a je 0x10eeff67 */
  if (C.zf) goto L_10eeff67;
  /* 10eeff5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeff5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeff62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeff65 jmp 0x10eeff42 */
  goto L_10eeff42;
L_10eeff67:;
  /* 10eeff67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeff6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eeff6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeff6f jne 0x10eeff79 */
  if (!C.zf) goto L_10eeff79;
  /* 10eeff71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeff74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeff77 jmp 0x10eeff7c */
  goto L_10eeff7c;
L_10eeff79:;
  /* 10eeff79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10eeff7c:;
  /* 10eeff7c mov esp, ebp */
  ESP = (EBP);
  /* 10eeff7e pop ebp */
  EBP = (pop32());
  /* 10eeff7f ret  */
  ESPCHK(0x10eeff30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ff80 @ 0x10eeff80 (736 bytes, 224 insns) */
void f_10eeff80(void) {
  FTRACE(0x10eeff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeff80 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeff81 mov ebp, esp */
  EBP = (ESP);
  /* 10eeff83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeff86 push esi */
  push32((uint32_t)(ESI));
  /* 10eeff87 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeff8b je 0x10eeffac */
  if (C.zf) goto L_10eeffac;
  /* 10eeff8d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10eeff8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeff92 push eax */
  push32((uint32_t)(EAX));
  /* 10eeff93 call 0x10ef0950 */
  push32(0x10eeff98u); f_10ef0950();
  /* 10eeff98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeff9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10eeff9e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeffa2 je 0x10eeffac */
  if (C.zf) goto L_10eeffac;
  /* 10eeffa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeffa7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeffaa jne 0x10eeffb4 */
  if (!C.zf) goto L_10eeffb4;
L_10eeffac:;
  /* 10eeffac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeffaf jmp 0x10ef025b */
  goto L_10ef025b;
L_10eeffb4:;
  /* 10eeffb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eeffb7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10eeffbb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eeffbd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeffbf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10eeffc0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eeffc3 mov ecx, dword ptr [0x10f0f57c] */
  ECX = (r32((uint32_t)(0x10f0f57c)));
  /* 10eeffc9 cmp ecx, dword ptr [0x10f0f580] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0f580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeffcf jne 0x10eeffe5 */
  if (!C.zf) goto L_10eeffe5;
  /* 10eeffd1 mov edx, dword ptr [0x10f0f57c] */
  EDX = (r32((uint32_t)(0x10f0f57c)));
  /* 10eeffd7 push edx */
  push32((uint32_t)(EDX));
  /* 10eeffd8 call 0x10ef02e0 */
  push32(0x10eeffddu); f_10ef02e0();
  /* 10eeffdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeffe0 mov dword ptr [0x10f0f57c], eax */
  w32((uint32_t)(0x10f0f57c), (EAX));
L_10eeffe5:;
  /* 10eeffe5 cmp dword ptr [0x10f0f57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeffec jne 0x10ef00a5 */
  if (!C.zf) goto L_10ef00a5;
  /* 10eefff2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eefff6 je 0x10ef0017 */
  if (C.zf) goto L_10ef0017;
  /* 10eefff8 cmp dword ptr [0x10f0f584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeffff je 0x10ef0017 */
  if (C.zf) goto L_10ef0017;
  /* 10ef0001 call 0x10eed5c0 */
  push32(0x10ef0006u); f_10eed5c0();
  /* 10ef0006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0008 je 0x10ef0012 */
  if (C.zf) goto L_10ef0012;
  /* 10ef000a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef000d jmp 0x10ef025b */
  goto L_10ef025b;
L_10ef0012:;
  /* 10ef0012 jmp 0x10ef00a5 */
  goto L_10ef00a5;
L_10ef0017:;
  /* 10ef0017 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef001b je 0x10ef0024 */
  if (C.zf) goto L_10ef0024;
  /* 10ef001d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef001f jmp 0x10ef025b */
  goto L_10ef025b;
L_10ef0024:;
  /* 10ef0024 cmp dword ptr [0x10f0f57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef002b jne 0x10ef0064 */
  if (!C.zf) goto L_10ef0064;
  /* 10ef002d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10ef0032 push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef0037 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0039 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ef003b call 0x10edb720 */
  push32(0x10ef0040u); f_10edb720();
  /* 10ef0040 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0043 mov dword ptr [0x10f0f57c], eax */
  w32((uint32_t)(0x10f0f57c), (EAX));
  /* 10ef0048 cmp dword ptr [0x10f0f57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef004f jne 0x10ef0059 */
  if (!C.zf) goto L_10ef0059;
  /* 10ef0051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0054 jmp 0x10ef025b */
  goto L_10ef025b;
L_10ef0059:;
  /* 10ef0059 mov eax, dword ptr [0x10f0f57c] */
  EAX = (r32((uint32_t)(0x10f0f57c)));
  /* 10ef005e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ef0064:;
  /* 10ef0064 cmp dword ptr [0x10f0f584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef006b jne 0x10ef00a5 */
  if (!C.zf) goto L_10ef00a5;
  /* 10ef006d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10ef0072 push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef0077 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0079 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ef007b call 0x10edb720 */
  push32(0x10ef0080u); f_10edb720();
  /* 10ef0080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0083 mov dword ptr [0x10f0f584], eax */
  w32((uint32_t)(0x10f0f584), (EAX));
  /* 10ef0088 cmp dword ptr [0x10f0f584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef008f jne 0x10ef0099 */
  if (!C.zf) goto L_10ef0099;
  /* 10ef0091 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0094 jmp 0x10ef025b */
  goto L_10ef025b;
L_10ef0099:;
  /* 10ef0099 mov ecx, dword ptr [0x10f0f584] */
  ECX = (r32((uint32_t)(0x10f0f584)));
  /* 10ef009f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10ef00a5:;
  /* 10ef00a5 mov edx, dword ptr [0x10f0f57c] */
  EDX = (r32((uint32_t)(0x10f0f57c)));
  /* 10ef00ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ef00ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ef00b1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef00b4 push eax */
  push32((uint32_t)(EAX));
  /* 10ef00b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef00b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef00b9 call 0x10ef0260 */
  push32(0x10ef00beu); f_10ef0260();
  /* 10ef00be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef00c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ef00c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef00c8 jl 0x10ef0161 */
  if ((C.sf!=C.of)) goto L_10ef0161;
  /* 10ef00ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef00d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef00d4 je 0x10ef0161 */
  if (C.zf) goto L_10ef0161;
  /* 10ef00da cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef00de je 0x10ef0153 */
  if (C.zf) goto L_10ef0153;
  /* 10ef00e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef00e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef00e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef00e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ef00eb push edx */
  push32((uint32_t)(EDX));
  /* 10ef00ec call 0x10edc1b0 */
  push32(0x10ef00f1u); f_10edc1b0();
  /* 10ef00f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef00f4 jmp 0x10ef00ff */
  goto L_10ef00ff;
L_10ef00f6:;
  /* 10ef00f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef00f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef00fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ef00ff:;
  /* 10ef00ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0102 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0105 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0109 je 0x10ef0120 */
  if (C.zf) goto L_10ef0120;
  /* 10ef010b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef010e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0111 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0114 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0117 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10ef011b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ef011e jmp 0x10ef00f6 */
  goto L_10ef00f6;
L_10ef0120:;
  /* 10ef0120 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10ef0125 push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef012a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef012c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef012f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ef0132 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0133 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0136 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0137 call 0x10edbbb0 */
  push32(0x10ef013cu); f_10edbbb0();
  /* 10ef013c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef013f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ef0142 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0146 je 0x10ef0151 */
  if (C.zf) goto L_10ef0151;
  /* 10ef0148 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef014b mov dword ptr [0x10f0f57c], edx */
  w32((uint32_t)(0x10f0f57c), (EDX));
L_10ef0151:;
  /* 10ef0151 jmp 0x10ef015f */
  goto L_10ef015f;
L_10ef0153:;
  /* 10ef0153 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0156 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef015c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10ef015f:;
  /* 10ef015f jmp 0x10ef01d4 */
  goto L_10ef01d4;
L_10ef0161:;
  /* 10ef0161 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0165 jne 0x10ef01cd */
  if (!C.zf) goto L_10ef01cd;
  /* 10ef0167 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef016b jge 0x10ef0175 */
  if ((C.sf==C.of)) goto L_10ef0175;
  /* 10ef016d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0170 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ef0172 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ef0175:;
  /* 10ef0175 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10ef017a push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef017f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0181 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0184 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10ef018b push edx */
  push32((uint32_t)(EDX));
  /* 10ef018c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef018f push eax */
  push32((uint32_t)(EAX));
  /* 10ef0190 call 0x10edbbb0 */
  push32(0x10ef0195u); f_10edbbb0();
  /* 10ef0195 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0198 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ef019b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef019f jne 0x10ef01a9 */
  if (!C.zf) goto L_10ef01a9;
  /* 10ef01a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef01a4 jmp 0x10ef025b */
  goto L_10ef025b;
L_10ef01a9:;
  /* 10ef01a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef01ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef01af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef01b2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ef01b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef01b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef01bb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10ef01c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef01c6 mov dword ptr [0x10f0f57c], eax */
  w32((uint32_t)(0x10f0f57c), (EAX));
  /* 10ef01cb jmp 0x10ef01d4 */
  goto L_10ef01d4;
L_10ef01cd:;
  /* 10ef01cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef01cf jmp 0x10ef025b */
  goto L_10ef025b;
L_10ef01d4:;
  /* 10ef01d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef01d8 je 0x10ef0259 */
  if (C.zf) goto L_10ef0259;
  /* 10ef01da push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10ef01df push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef01e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef01e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef01e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef01ea call 0x10edfcb0 */
  push32(0x10ef01efu); f_10edfcb0();
  /* 10ef01ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef01f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef01f5 push eax */
  push32((uint32_t)(EAX));
  /* 10ef01f6 call 0x10edb720 */
  push32(0x10ef01fbu); f_10edb720();
  /* 10ef01fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef01fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ef0201 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0205 je 0x10ef0259 */
  if (C.zf) goto L_10ef0259;
  /* 10ef0207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef020a push edx */
  push32((uint32_t)(EDX));
  /* 10ef020b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef020e push eax */
  push32((uint32_t)(EAX));
  /* 10ef020f call 0x10edfe30 */
  push32(0x10ef0214u); f_10edfe30();
  /* 10ef0214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0217 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ef021a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef021d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef0220 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0222 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ef0225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0228 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ef022b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef022e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0231 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ef0234 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ef0237 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ef0239 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef023b not edx */
  EDX = (~(EDX));
  /* 10ef023d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ef0240 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0241 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef0244 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0245 call dword ptr [0x10f12328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12328))), 0x10ef024bu);
  /* 10ef024b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef024d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef0250 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0251 call 0x10edc1b0 */
  push32(0x10ef0256u); f_10edc1b0();
  /* 10ef0256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ef0259:;
  /* 10ef0259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ef025b:;
  /* 10ef025b pop esi */
  ESI = (pop32());
  /* 10ef025c mov esp, ebp */
  ESP = (EBP);
  /* 10ef025e pop ebp */
  EBP = (pop32());
  /* 10ef025f ret  */
  ESPCHK(0x10eeff80u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10ef0260 (124 bytes, 47 insns) */
void f_10ef0260(void) {
  FTRACE(0x10ef0260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0260 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0261 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0263 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0264 mov eax, dword ptr [0x10f0f57c] */
  EAX = (r32((uint32_t)(0x10f0f57c)));
  /* 10ef0269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ef026c jmp 0x10ef0277 */
  goto L_10ef0277;
L_10ef026e:;
  /* 10ef026e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0271 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0274 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ef0277:;
  /* 10ef0277 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef027a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef027d je 0x10ef02ca */
  if (C.zf) goto L_10ef02ca;
  /* 10ef027f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef0282 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0286 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ef0288 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef028c push eax */
  push32((uint32_t)(EAX));
  /* 10ef028d call 0x10eed570 */
  push32(0x10ef0292u); f_10eed570();
  /* 10ef0292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0297 jne 0x10ef02c8 */
  if (!C.zf) goto L_10ef02c8;
  /* 10ef0299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef029c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ef029e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef02a1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10ef02a5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef02a8 je 0x10ef02ba */
  if (C.zf) goto L_10ef02ba;
  /* 10ef02aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef02ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ef02af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef02b2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10ef02b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ef02b8 jne 0x10ef02c8 */
  if (!C.zf) goto L_10ef02c8;
L_10ef02ba:;
  /* 10ef02ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef02bd sub eax, dword ptr [0x10f0f57c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0f57c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef02c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ef02c6 jmp 0x10ef02d8 */
  goto L_10ef02d8;
L_10ef02c8:;
  /* 10ef02c8 jmp 0x10ef026e */
  goto L_10ef026e;
L_10ef02ca:;
  /* 10ef02ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef02cd sub eax, dword ptr [0x10f0f57c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0f57c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef02d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ef02d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10ef02d8:;
  /* 10ef02d8 mov esp, ebp */
  ESP = (EBP);
  /* 10ef02da pop ebp */
  EBP = (pop32());
  /* 10ef02db ret  */
  ESPCHK(0x10ef0260u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10ef02e0 (238 bytes, 80 insns) */
void f_10ef02e0(void) {
  FTRACE(0x10ef02e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef02e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef02e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ef02e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef02e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ef02ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef02f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ef02f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef02f7 jne 0x10ef0300 */
  if (!C.zf) goto L_10ef0300;
  /* 10ef02f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef02fb jmp 0x10ef03ca */
  goto L_10ef03ca;
L_10ef0300:;
  /* 10ef0300 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0303 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ef0305 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0308 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef030b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ef030e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ef0310 je 0x10ef031d */
  if (C.zf) goto L_10ef031d;
  /* 10ef0312 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef0315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0318 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ef031b jmp 0x10ef0300 */
  goto L_10ef0300;
L_10ef031d:;
  /* 10ef031d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10ef0322 push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef0327 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0329 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef032c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10ef0333 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0334 call 0x10edb720 */
  push32(0x10ef0339u); f_10edb720();
  /* 10ef0339 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef033c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ef033f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0342 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ef0345 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0349 jne 0x10ef0355 */
  if (!C.zf) goto L_10ef0355;
  /* 10ef034b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ef034d call 0x10eda190 */
  push32(0x10ef0352u); f_10eda190();
  /* 10ef0352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ef0355:;
  /* 10ef0355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0358 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ef035b:;
  /* 10ef035b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef035e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0361 je 0x10ef03be */
  if (C.zf) goto L_10ef03be;
  /* 10ef0363 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10ef0368 push 0x10f0ab98 */
  push32((uint32_t)(0x10f0ab98u));
  /* 10ef036d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef036f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ef0374 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0375 call 0x10edfcb0 */
  push32(0x10ef037au); f_10edfcb0();
  /* 10ef037a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef037d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0380 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0381 call 0x10edb720 */
  push32(0x10ef0386u); f_10edb720();
  /* 10ef0386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef038c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ef038e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0391 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0394 je 0x10ef03aa */
  if (C.zf) goto L_10ef03aa;
  /* 10ef0396 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef0399 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ef039b push ecx */
  push32((uint32_t)(ECX));
  /* 10ef039c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef039f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ef03a1 push eax */
  push32((uint32_t)(EAX));
  /* 10ef03a2 call 0x10edfe30 */
  push32(0x10ef03a7u); f_10edfe30();
  /* 10ef03a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ef03aa:;
  /* 10ef03aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ef03ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef03b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ef03b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef03b6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef03b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ef03bc jmp 0x10ef035b */
  goto L_10ef035b;
L_10ef03be:;
  /* 10ef03be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef03c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ef03c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ef03ca:;
  /* 10ef03ca mov esp, ebp */
  ESP = (EBP);
  /* 10ef03cc pop ebp */
  EBP = (pop32());
  /* 10ef03cd ret  */
  ESPCHK(0x10ef02e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100203d0 @ 0x10ef03d0 (130 bytes, 50 insns) */
void f_10ef03d0(void) {
  FTRACE(0x10ef03d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef03d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef03d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ef03d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef03d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ef03d5 push esi */
  push32((uint32_t)(ESI));
  /* 10ef03d6 push edi */
  push32((uint32_t)(EDI));
  /* 10ef03d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ef03de:;
  /* 10ef03de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef03e2 jne 0x10ef0402 */
  if (!C.zf) goto L_10ef0402;
  /* 10ef03e4 push 0x10f0abb0 */
  push32((uint32_t)(0x10f0abb0u));
  /* 10ef03e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef03eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10ef03ed push 0x10f0aba4 */
  push32((uint32_t)(0x10f0aba4u));
  /* 10ef03f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef03f4 call 0x10eda2e0 */
  push32(0x10ef03f9u); f_10eda2e0();
  /* 10ef03f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef03fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef03ff jne 0x10ef0402 */
  if (!C.zf) goto L_10ef0402;
  /* 10ef0401 int3  */
  x86_unimpl("int3 @ 0x10ef0401");
L_10ef0402:;
  /* 10ef0402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0406 jne 0x10ef03de */
  if (!C.zf) goto L_10ef03de;
  /* 10ef0408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef040b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ef040e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10ef0411 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ef0413 je 0x10ef0421 */
  if (C.zf) goto L_10ef0421;
  /* 10ef0415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0418 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10ef041f jmp 0x10ef0448 */
  goto L_10ef0448;
L_10ef0421:;
  /* 10ef0421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0424 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0425 call 0x10eea850 */
  push32(0x10ef042au); f_10eea850();
  /* 10ef042a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef042d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0430 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0431 call 0x10ef0460 */
  push32(0x10ef0436u); f_10ef0460();
  /* 10ef0436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0439 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ef043c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef043f push eax */
  push32((uint32_t)(EAX));
  /* 10ef0440 call 0x10eea8c0 */
  push32(0x10ef0445u); f_10eea8c0();
  /* 10ef0445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ef0448:;
  /* 10ef0448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef044b pop edi */
  EDI = (pop32());
  /* 10ef044c pop esi */
  ESI = (pop32());
  /* 10ef044d pop ebx */
  EBX = (pop32());
  /* 10ef044e mov esp, ebp */
  ESP = (EBP);
  /* 10ef0450 pop ebp */
  EBP = (pop32());
  /* 10ef0451 ret  */
  ESPCHK(0x10ef03d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020460 @ 0x10ef0460 (190 bytes, 67 insns) */
void f_10ef0460(void) {
  FTRACE(0x10ef0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0460 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0461 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef0466 push ebx */
  push32((uint32_t)(EBX));
  /* 10ef0467 push esi */
  push32((uint32_t)(ESI));
  /* 10ef0468 push edi */
  push32((uint32_t)(EDI));
  /* 10ef0469 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ef0470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0473 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ef0476:;
  /* 10ef0476 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef047a jne 0x10ef049a */
  if (!C.zf) goto L_10ef049a;
  /* 10ef047c push 0x10f0a100 */
  push32((uint32_t)(0x10f0a100u));
  /* 10ef0481 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0483 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10ef0485 push 0x10f0aba4 */
  push32((uint32_t)(0x10f0aba4u));
  /* 10ef048a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef048c call 0x10eda2e0 */
  push32(0x10ef0491u); f_10eda2e0();
  /* 10ef0491 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0494 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0497 jne 0x10ef049a */
  if (!C.zf) goto L_10ef049a;
  /* 10ef0499 int3  */
  x86_unimpl("int3 @ 0x10ef0499");
L_10ef049a:;
  /* 10ef049a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ef049c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ef049e jne 0x10ef0476 */
  if (!C.zf) goto L_10ef0476;
  /* 10ef04a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef04a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ef04a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10ef04ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef04ad je 0x10ef050a */
  if (C.zf) goto L_10ef050a;
  /* 10ef04af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef04b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef04b3 call 0x10eeddc0 */
  push32(0x10ef04b8u); f_10eeddc0();
  /* 10ef04b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef04bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ef04be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef04c1 push edx */
  push32((uint32_t)(EDX));
  /* 10ef04c2 call 0x10ef0b70 */
  push32(0x10ef04c7u); f_10ef0b70();
  /* 10ef04c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef04ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef04cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ef04d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef04d1 call 0x10ef0a40 */
  push32(0x10ef04d6u); f_10ef0a40();
  /* 10ef04d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef04d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef04db jge 0x10ef04e6 */
  if ((C.sf==C.of)) goto L_10ef04e6;
  /* 10ef04dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ef04e4 jmp 0x10ef050a */
  goto L_10ef050a;
L_10ef04e6:;
  /* 10ef04e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef04e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef04ed je 0x10ef050a */
  if (C.zf) goto L_10ef050a;
  /* 10ef04ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef04f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef04f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ef04f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef04f8 call 0x10edc1b0 */
  push32(0x10ef04fdu); f_10edc1b0();
  /* 10ef04fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0500 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef0503 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10ef050a:;
  /* 10ef050a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ef050d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10ef0514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0517 pop edi */
  EDI = (pop32());
  /* 10ef0518 pop esi */
  ESI = (pop32());
  /* 10ef0519 pop ebx */
  EBX = (pop32());
  /* 10ef051a mov esp, ebp */
  ESP = (EBP);
  /* 10ef051c pop ebp */
  EBP = (pop32());
  /* 10ef051d ret  */
  ESPCHK(0x10ef0460u, _esp0);
  ESP += 4; return;
}

/* FUN_10020520 @ 0x10ef0520 (210 bytes, 63 insns) */
void f_10ef0520(void) {
  FTRACE(0x10ef0520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0520 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0521 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0523 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0527 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef052d jae 0x10ef0551 */
  if (!C.cf) goto L_10ef0551;
  /* 10ef052f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0532 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ef0535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0538 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ef053b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ef053e mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10ef0545 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ef054a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ef054d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ef054f jne 0x10ef0564 */
  if (!C.zf) goto L_10ef0564;
L_10ef0551:;
  /* 10ef0551 call 0x10ee6db0 */
  push32(0x10ef0556u); f_10ee6db0();
  /* 10ef0556 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ef055c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef055f jmp 0x10ef05ee */
  goto L_10ef05ee;
L_10ef0564:;
  /* 10ef0564 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0567 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0568 call 0x10eedb80 */
  push32(0x10ef056du); f_10eedb80();
  /* 10ef056d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0573 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ef0576 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0579 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ef057c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ef057f mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10ef0586 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10ef058b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ef058e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0590 je 0x10ef05cd */
  if (C.zf) goto L_10ef05cd;
  /* 10ef0592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0595 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0596 call 0x10eeda00 */
  push32(0x10ef059bu); f_10eeda00();
  /* 10ef059b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef059e push eax */
  push32((uint32_t)(EAX));
  /* 10ef059f call dword ptr [0x10f12324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12324))), 0x10ef05a5u);
  /* 10ef05a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef05a7 jne 0x10ef05b4 */
  if (!C.zf) goto L_10ef05b4;
  /* 10ef05a9 call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10ef05afu);
  /* 10ef05af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ef05b2 jmp 0x10ef05bb */
  goto L_10ef05bb;
L_10ef05b4:;
  /* 10ef05b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ef05bb:;
  /* 10ef05bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef05bf jne 0x10ef05c3 */
  if (!C.zf) goto L_10ef05c3;
  /* 10ef05c1 jmp 0x10ef05df */
  goto L_10ef05df;
L_10ef05c3:;
  /* 10ef05c3 call 0x10ee6dc0 */
  push32(0x10ef05c8u); f_10ee6dc0();
  /* 10ef05c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef05cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ef05cd:;
  /* 10ef05cd call 0x10ee6db0 */
  push32(0x10ef05d2u); f_10ee6db0();
  /* 10ef05d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ef05d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ef05df:;
  /* 10ef05df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef05e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ef05e3 call 0x10eedc10 */
  push32(0x10ef05e8u); f_10eedc10();
  /* 10ef05e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef05eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ef05ee:;
  /* 10ef05ee mov esp, ebp */
  ESP = (EBP);
  /* 10ef05f0 pop ebp */
  EBP = (pop32());
  /* 10ef05f1 ret  */
  ESPCHK(0x10ef0520u, _esp0);
  ESP += 4; return;
}

/* FUN_10020600 @ 0x10ef0600 (382 bytes, 135 insns) */
void f_10ef0600(void) {
  FTRACE(0x10ef0600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0600 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0601 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0603 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ef0605 push 0x10f0abc0 */
  push32((uint32_t)(0x10f0abc0u));
  /* 10ef060a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ef060f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ef0615 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0616 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ef061d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0620 push ebx */
  push32((uint32_t)(EBX));
  /* 10ef0621 push esi */
  push32((uint32_t)(ESI));
  /* 10ef0622 push edi */
  push32((uint32_t)(EDI));
  /* 10ef0623 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ef0626 cmp dword ptr [0x10f0f850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef062d jne 0x10ef0672 */
  if (!C.zf) goto L_10ef0672;
  /* 10ef062f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0633 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef0635 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0637 call dword ptr [0x10f12320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12320))), 0x10ef063du);
  /* 10ef063d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef063f je 0x10ef064d */
  if (C.zf) goto L_10ef064d;
  /* 10ef0641 mov dword ptr [0x10f0f850], 1 */
  w32((uint32_t)(0x10f0f850), (0x1u));
  /* 10ef064b jmp 0x10ef0672 */
  goto L_10ef0672;
L_10ef064d:;
  /* 10ef064d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef064f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0651 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef0653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0655 call dword ptr [0x10f12344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12344))), 0x10ef065bu);
  /* 10ef065b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef065d je 0x10ef066b */
  if (C.zf) goto L_10ef066b;
  /* 10ef065f mov dword ptr [0x10f0f850], 2 */
  w32((uint32_t)(0x10f0f850), (0x2u));
  /* 10ef0669 jmp 0x10ef0672 */
  goto L_10ef0672;
L_10ef066b:;
  /* 10ef066b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef066d jmp 0x10ef0781 */
  goto L_10ef0781;
L_10ef0672:;
  /* 10ef0672 cmp dword ptr [0x10f0f850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0679 jne 0x10ef0696 */
  if (!C.zf) goto L_10ef0696;
  /* 10ef067b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ef067e push eax */
  push32((uint32_t)(EAX));
  /* 10ef067f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ef0682 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0683 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef0686 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0687 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef068a push eax */
  push32((uint32_t)(EAX));
  /* 10ef068b call dword ptr [0x10f12320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12320))), 0x10ef0691u);
  /* 10ef0691 jmp 0x10ef0781 */
  goto L_10ef0781;
L_10ef0696:;
  /* 10ef0696 cmp dword ptr [0x10f0f850], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f850))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef069d jne 0x10ef077f */
  if (!C.zf) goto L_10ef077f;
  /* 10ef06a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef06a7 jne 0x10ef06b2 */
  if (!C.zf) goto L_10ef06b2;
  /* 10ef06a9 mov ecx, dword ptr [0x10f0f7c8] */
  ECX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ef06af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ef06b2:;
  /* 10ef06b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef06b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef06b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef06b9 push edx */
  push32((uint32_t)(EDX));
  /* 10ef06ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef06bd push eax */
  push32((uint32_t)(EAX));
  /* 10ef06be call dword ptr [0x10f12344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12344))), 0x10ef06c4u);
  /* 10ef06c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ef06c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef06cb jne 0x10ef06d4 */
  if (!C.zf) goto L_10ef06d4;
  /* 10ef06cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef06cf jmp 0x10ef0781 */
  goto L_10ef0781;
L_10ef06d4:;
  /* 10ef06d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ef06db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ef06de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef06e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ef06e3 call 0x10ee0020 */
  push32(0x10ef06e8u); f_10ee0020();
  /* 10ef06e8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ef06eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ef06ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ef06f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ef06f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ef06fb jmp 0x10ef0714 */
  goto L_10ef0714;
  /* 10ef06fd mov eax, 1 */
  EAX = (0x1u);
  /* 10ef0702 ret  */
  ESPCHK(0x10ef0600u, _esp0);
  ESP += 4; return;
  /* 10ef0703 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ef0706 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ef070d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ef0714:;
  /* 10ef0714 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0718 jne 0x10ef071e */
  if (!C.zf) goto L_10ef071e;
  /* 10ef071a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef071c jmp 0x10ef0781 */
  goto L_10ef0781;
L_10ef071e:;
  /* 10ef071e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ef0721 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0722 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ef0725 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0726 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef0729 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef072a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef072d push edx */
  push32((uint32_t)(EDX));
  /* 10ef072e call dword ptr [0x10f12344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12344))), 0x10ef0734u);
  /* 10ef0734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0736 jne 0x10ef073c */
  if (!C.zf) goto L_10ef073c;
  /* 10ef0738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef073a jmp 0x10ef0781 */
  goto L_10ef0781;
L_10ef073c:;
  /* 10ef073c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0740 jne 0x10ef075d */
  if (!C.zf) goto L_10ef075d;
  /* 10ef0742 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0746 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ef0748 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ef074b push eax */
  push32((uint32_t)(EAX));
  /* 10ef074c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef074e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ef0751 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0752 call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10ef0758u);
  /* 10ef0758 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ef075b jmp 0x10ef077a */
  goto L_10ef077a;
L_10ef075d:;
  /* 10ef075d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ef0760 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0761 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ef0764 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0765 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ef0767 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ef076a push ecx */
  push32((uint32_t)(ECX));
  /* 10ef076b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef076d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ef0770 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0771 call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10ef0777u);
  /* 10ef0777 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ef077a:;
  /* 10ef077a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ef077d jmp 0x10ef0781 */
  goto L_10ef0781;
L_10ef077f:;
  /* 10ef077f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ef0781:;
  /* 10ef0781 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ef0784 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef0787 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ef078e pop edi */
  EDI = (pop32());
  /* 10ef078f pop esi */
  ESI = (pop32());
  /* 10ef0790 pop ebx */
  EBX = (pop32());
  /* 10ef0791 mov esp, ebp */
  ESP = (EBP);
  /* 10ef0793 pop ebp */
  EBP = (pop32());
  /* 10ef0794 ret  */
  ESPCHK(0x10ef0600u, _esp0);
  ESP += 4; return;
}

/* FUN_100207a0 @ 0x10ef07a0 (398 bytes, 140 insns) */
void f_10ef07a0(void) {
  FTRACE(0x10ef07a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef07a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef07a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ef07a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ef07a5 push 0x10f0abd0 */
  push32((uint32_t)(0x10f0abd0u));
  /* 10ef07aa push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ef07af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ef07b5 push eax */
  push32((uint32_t)(EAX));
  /* 10ef07b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ef07bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef07c0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ef07c1 push esi */
  push32((uint32_t)(ESI));
  /* 10ef07c2 push edi */
  push32((uint32_t)(EDI));
  /* 10ef07c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ef07c6 cmp dword ptr [0x10f0f854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef07cd jne 0x10ef0812 */
  if (!C.zf) goto L_10ef0812;
  /* 10ef07cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef07d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef07d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef07d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef07d7 call dword ptr [0x10f12320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12320))), 0x10ef07ddu);
  /* 10ef07dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef07df je 0x10ef07ed */
  if (C.zf) goto L_10ef07ed;
  /* 10ef07e1 mov dword ptr [0x10f0f854], 1 */
  w32((uint32_t)(0x10f0f854), (0x1u));
  /* 10ef07eb jmp 0x10ef0812 */
  goto L_10ef0812;
L_10ef07ed:;
  /* 10ef07ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef07ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef07f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef07f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef07f5 call dword ptr [0x10f12344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12344))), 0x10ef07fbu);
  /* 10ef07fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef07fd je 0x10ef080b */
  if (C.zf) goto L_10ef080b;
  /* 10ef07ff mov dword ptr [0x10f0f854], 2 */
  w32((uint32_t)(0x10f0f854), (0x2u));
  /* 10ef0809 jmp 0x10ef0812 */
  goto L_10ef0812;
L_10ef080b:;
  /* 10ef080b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef080d jmp 0x10ef0931 */
  goto L_10ef0931;
L_10ef0812:;
  /* 10ef0812 cmp dword ptr [0x10f0f854], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f854))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0819 jne 0x10ef0836 */
  if (!C.zf) goto L_10ef0836;
  /* 10ef081b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ef081e push eax */
  push32((uint32_t)(EAX));
  /* 10ef081f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ef0822 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0823 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef0826 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef082a push eax */
  push32((uint32_t)(EAX));
  /* 10ef082b call dword ptr [0x10f12344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12344))), 0x10ef0831u);
  /* 10ef0831 jmp 0x10ef0931 */
  goto L_10ef0931;
L_10ef0836:;
  /* 10ef0836 cmp dword ptr [0x10f0f854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef083d jne 0x10ef092f */
  if (!C.zf) goto L_10ef092f;
  /* 10ef0843 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0847 jne 0x10ef0852 */
  if (!C.zf) goto L_10ef0852;
  /* 10ef0849 mov ecx, dword ptr [0x10f0f7c8] */
  ECX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ef084f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ef0852:;
  /* 10ef0852 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0854 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0856 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef0859 push edx */
  push32((uint32_t)(EDX));
  /* 10ef085a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef085d push eax */
  push32((uint32_t)(EAX));
  /* 10ef085e call dword ptr [0x10f12320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12320))), 0x10ef0864u);
  /* 10ef0864 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ef0867 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef086b jne 0x10ef0874 */
  if (!C.zf) goto L_10ef0874;
  /* 10ef086d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef086f jmp 0x10ef0931 */
  goto L_10ef0931;
L_10ef0874:;
  /* 10ef0874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ef087b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ef087e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ef0880 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0883 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ef0885 call 0x10ee0020 */
  push32(0x10ef088au); f_10ee0020();
  /* 10ef088a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ef088d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ef0890 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ef0893 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ef0896 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ef089d jmp 0x10ef08b6 */
  goto L_10ef08b6;
  /* 10ef089f mov eax, 1 */
  EAX = (0x1u);
  /* 10ef08a4 ret  */
  ESPCHK(0x10ef07a0u, _esp0);
  ESP += 4; return;
  /* 10ef08a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ef08a8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ef08af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ef08b6:;
  /* 10ef08b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef08ba jne 0x10ef08c0 */
  if (!C.zf) goto L_10ef08c0;
  /* 10ef08bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef08be jmp 0x10ef0931 */
  goto L_10ef0931;
L_10ef08c0:;
  /* 10ef08c0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ef08c3 push edx */
  push32((uint32_t)(EDX));
  /* 10ef08c4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ef08c7 push eax */
  push32((uint32_t)(EAX));
  /* 10ef08c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef08cb push ecx */
  push32((uint32_t)(ECX));
  /* 10ef08cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef08cf push edx */
  push32((uint32_t)(EDX));
  /* 10ef08d0 call dword ptr [0x10f12320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12320))), 0x10ef08d6u);
  /* 10ef08d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef08d8 jne 0x10ef08de */
  if (!C.zf) goto L_10ef08de;
  /* 10ef08da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef08dc jmp 0x10ef0931 */
  goto L_10ef0931;
L_10ef08de:;
  /* 10ef08de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef08e2 jne 0x10ef0906 */
  if (!C.zf) goto L_10ef0906;
  /* 10ef08e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef08e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef08e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef08ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef08ec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ef08ee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ef08f1 push eax */
  push32((uint32_t)(EAX));
  /* 10ef08f2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ef08f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ef08fa push ecx */
  push32((uint32_t)(ECX));
  /* 10ef08fb call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10ef0901u);
  /* 10ef0901 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ef0904 jmp 0x10ef092a */
  goto L_10ef092a;
L_10ef0906:;
  /* 10ef0906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0908 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef090a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ef090d push edx */
  push32((uint32_t)(EDX));
  /* 10ef090e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ef0911 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0912 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ef0914 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ef0917 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0918 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ef091d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ef0920 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0921 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10ef0927u);
  /* 10ef0927 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ef092a:;
  /* 10ef092a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ef092d jmp 0x10ef0931 */
  goto L_10ef0931;
L_10ef092f:;
  /* 10ef092f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ef0931:;
  /* 10ef0931 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ef0934 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ef0937 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ef093e pop edi */
  EDI = (pop32());
  /* 10ef093f pop esi */
  ESI = (pop32());
  /* 10ef0940 pop ebx */
  EBX = (pop32());
  /* 10ef0941 mov esp, ebp */
  ESP = (EBP);
  /* 10ef0943 pop ebp */
  EBP = (pop32());
  /* 10ef0944 ret  */
  ESPCHK(0x10ef07a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020950 @ 0x10ef0950 (237 bytes, 81 insns) */
void f_10ef0950(void) {
  FTRACE(0x10ef0950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0950 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0951 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0953 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0954 cmp dword ptr [0x10f10c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef095b jne 0x10ef0972 */
  if (!C.zf) goto L_10ef0972;
  /* 10ef095d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ef0960 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0961 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0964 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0965 call 0x10ef0c20 */
  push32(0x10ef096au); f_10ef0c20();
  /* 10ef096a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef096d jmp 0x10ef0a39 */
  goto L_10ef0a39;
L_10ef0972:;
  /* 10ef0972 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ef0974 call 0x10edb620 */
  push32(0x10ef0979u); f_10edb620();
  /* 10ef0979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef097c jmp 0x10ef0987 */
  goto L_10ef0987;
L_10ef097e:;
  /* 10ef097e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0981 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0984 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ef0987:;
  /* 10ef0987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef098a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10ef098e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ef0992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0995 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ef099b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ef099d je 0x10ef0a1b */
  if (C.zf) goto L_10ef0a1b;
  /* 10ef099f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef09a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef09a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ef09a9 mov cl, byte ptr [eax + 0x10f10d61] */
  CL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10ef09af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ef09b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ef09b4 je 0x10ef0a06 */
  if (C.zf) goto L_10ef0a06;
  /* 10ef09b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef09b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef09bc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ef09bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef09c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ef09c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ef09c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ef09c8 jne 0x10ef09d8 */
  if (!C.zf) goto L_10ef09d8;
  /* 10ef09ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ef09cc call 0x10edb6c0 */
  push32(0x10ef09d1u); f_10edb6c0();
  /* 10ef09d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef09d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef09d6 jmp 0x10ef0a39 */
  goto L_10ef0a39;
L_10ef09d8:;
  /* 10ef09d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef09db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ef09e1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ef09e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef09e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ef09e9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ef09eb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ef09ed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef09f0 jne 0x10ef0a04 */
  if (!C.zf) goto L_10ef0a04;
  /* 10ef09f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ef09f4 call 0x10edb6c0 */
  push32(0x10ef09f9u); f_10edb6c0();
  /* 10ef09f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef09fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef09ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ef0a02 jmp 0x10ef0a39 */
  goto L_10ef0a39;
L_10ef0a04:;
  /* 10ef0a04 jmp 0x10ef0a16 */
  goto L_10ef0a16;
L_10ef0a06:;
  /* 10ef0a06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0a09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ef0a0f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0a12 jne 0x10ef0a16 */
  if (!C.zf) goto L_10ef0a16;
  /* 10ef0a14 jmp 0x10ef0a1b */
  goto L_10ef0a1b;
L_10ef0a16:;
  /* 10ef0a16 jmp 0x10ef097e */
  goto L_10ef097e;
L_10ef0a1b:;
  /* 10ef0a1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ef0a1d call 0x10edb6c0 */
  push32(0x10ef0a22u); f_10edb6c0();
  /* 10ef0a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0a28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0a2d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0a30 jne 0x10ef0a37 */
  if (!C.zf) goto L_10ef0a37;
  /* 10ef0a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0a35 jmp 0x10ef0a39 */
  goto L_10ef0a39;
L_10ef0a37:;
  /* 10ef0a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ef0a39:;
  /* 10ef0a39 mov esp, ebp */
  ESP = (EBP);
  /* 10ef0a3b pop ebp */
  EBP = (pop32());
  /* 10ef0a3c ret  */
  ESPCHK(0x10ef0950u, _esp0);
  ESP += 4; return;
}

/* FUN_10020a40 @ 0x10ef0a40 (122 bytes, 39 insns) */
void f_10ef0a40(void) {
  FTRACE(0x10ef0a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0a41 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0a47 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0a4d jae 0x10ef0a71 */
  if (!C.cf) goto L_10ef0a71;
  /* 10ef0a4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0a52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ef0a55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0a58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ef0a5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ef0a5e mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10ef0a65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ef0a6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0a6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ef0a6f jne 0x10ef0a8c */
  if (!C.zf) goto L_10ef0a8c;
L_10ef0a71:;
  /* 10ef0a71 call 0x10ee6db0 */
  push32(0x10ef0a76u); f_10ee6db0();
  /* 10ef0a76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ef0a7c call 0x10ee6dc0 */
  push32(0x10ef0a81u); f_10ee6dc0();
  /* 10ef0a81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ef0a87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0a8a jmp 0x10ef0ab6 */
  goto L_10ef0ab6;
L_10ef0a8c:;
  /* 10ef0a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0a8f push edx */
  push32((uint32_t)(EDX));
  /* 10ef0a90 call 0x10eedb80 */
  push32(0x10ef0a95u); f_10eedb80();
  /* 10ef0a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0a98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0a9b push eax */
  push32((uint32_t)(EAX));
  /* 10ef0a9c call 0x10ef0ac0 */
  push32(0x10ef0aa1u); f_10ef0ac0();
  /* 10ef0aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0aa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ef0aa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0aab call 0x10eedc10 */
  push32(0x10ef0ab0u); f_10eedc10();
  /* 10ef0ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0ab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ef0ab6:;
  /* 10ef0ab6 mov esp, ebp */
  ESP = (EBP);
  /* 10ef0ab8 pop ebp */
  EBP = (pop32());
  /* 10ef0ab9 ret  */
  ESPCHK(0x10ef0a40u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10ef0ac0 (170 bytes, 59 insns) */
void f_10ef0ac0(void) {
  FTRACE(0x10ef0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0ac4 push esi */
  push32((uint32_t)(ESI));
  /* 10ef0ac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0ac9 call 0x10eeda00 */
  push32(0x10ef0aceu); f_10eeda00();
  /* 10ef0ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0ad1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0ad4 je 0x10ef0b13 */
  if (C.zf) goto L_10ef0b13;
  /* 10ef0ad6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0ada je 0x10ef0ae2 */
  if (C.zf) goto L_10ef0ae2;
  /* 10ef0adc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0ae0 jne 0x10ef0afc */
  if (!C.zf) goto L_10ef0afc;
L_10ef0ae2:;
  /* 10ef0ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ef0ae4 call 0x10eeda00 */
  push32(0x10ef0ae9u); f_10eeda00();
  /* 10ef0ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0aec mov esi, eax */
  ESI = (EAX);
  /* 10ef0aee push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0af0 call 0x10eeda00 */
  push32(0x10ef0af5u); f_10eeda00();
  /* 10ef0af5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0af8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0afa je 0x10ef0b13 */
  if (C.zf) goto L_10ef0b13;
L_10ef0afc:;
  /* 10ef0afc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0aff push ecx */
  push32((uint32_t)(ECX));
  /* 10ef0b00 call 0x10eeda00 */
  push32(0x10ef0b05u); f_10eeda00();
  /* 10ef0b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0b08 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0b09 call dword ptr [0x10f1231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1231c))), 0x10ef0b0fu);
  /* 10ef0b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0b11 je 0x10ef0b1c */
  if (C.zf) goto L_10ef0b1c;
L_10ef0b13:;
  /* 10ef0b13 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ef0b1a jmp 0x10ef0b25 */
  goto L_10ef0b25;
L_10ef0b1c:;
  /* 10ef0b1c call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10ef0b22u);
  /* 10ef0b22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ef0b25:;
  /* 10ef0b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0b28 push edx */
  push32((uint32_t)(EDX));
  /* 10ef0b29 call 0x10eed920 */
  push32(0x10ef0b2eu); f_10eed920();
  /* 10ef0b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0b34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ef0b37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0b3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0b3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ef0b40 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10ef0b47 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10ef0b4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0b50 je 0x10ef0b63 */
  if (C.zf) goto L_10ef0b63;
  /* 10ef0b52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ef0b55 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0b56 call 0x10ee6d10 */
  push32(0x10ef0b5bu); f_10ee6d10();
  /* 10ef0b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0b5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0b61 jmp 0x10ef0b65 */
  goto L_10ef0b65;
L_10ef0b63:;
  /* 10ef0b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ef0b65:;
  /* 10ef0b65 pop esi */
  ESI = (pop32());
  /* 10ef0b66 mov esp, ebp */
  ESP = (EBP);
  /* 10ef0b68 pop ebp */
  EBP = (pop32());
  /* 10ef0b69 ret  */
  ESPCHK(0x10ef0ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020b70 @ 0x10ef0b70 (146 bytes, 52 insns) */
void f_10ef0b70(void) {
  FTRACE(0x10ef0b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ef0b71 mov ebp, esp */
  EBP = (ESP);
  /* 10ef0b73 push ebx */
  push32((uint32_t)(EBX));
  /* 10ef0b74 push esi */
  push32((uint32_t)(ESI));
  /* 10ef0b75 push edi */
  push32((uint32_t)(EDI));
L_10ef0b76:;
  /* 10ef0b76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0b7a jne 0x10ef0b9a */
  if (!C.zf) goto L_10ef0b9a;
  /* 10ef0b7c push 0x10f0abb0 */
  push32((uint32_t)(0x10f0abb0u));
  /* 10ef0b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ef0b83 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10ef0b85 push 0x10f0abdc */
  push32((uint32_t)(0x10f0abdcu));
  /* 10ef0b8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0b8c call 0x10eda2e0 */
  push32(0x10ef0b91u); f_10eda2e0();
  /* 10ef0b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0b94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ef0b97 jne 0x10ef0b9a */
  if (!C.zf) goto L_10ef0b9a;
  /* 10ef0b99 int3  */
  x86_unimpl("int3 @ 0x10ef0b99");
L_10ef0b9a:;
  /* 10ef0b9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ef0b9e jne 0x10ef0b76 */
  if (!C.zf) goto L_10ef0b76;
  /* 10ef0ba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0ba3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ef0ba6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10ef0bac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ef0bae je 0x10ef0bfd */
  if (C.zf) goto L_10ef0bfd;
  /* 10ef0bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0bb3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ef0bb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0bb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ef0bbb je 0x10ef0bfd */
  if (C.zf) goto L_10ef0bfd;
  /* 10ef0bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10ef0bbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0bc2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ef0bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10ef0bc6 call 0x10edc1b0 */
  push32(0x10ef0bcbu); f_10edc1b0();
  /* 10ef0bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0bd1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ef0bd4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10ef0bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0bdd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ef0be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0be3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10ef0be9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0bec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ef0bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ef0bf6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10ef0bfd:;
  /* 10ef0bfd pop edi */
  EDI = (pop32());
  /* 10ef0bfe pop esi */
  ESI = (pop32());
  /* 10ef0bff pop ebx */
  EBX = (pop32());
  /* 10ef0c00 pop ebp */
  EBP = (pop32());
  /* 10ef0c01 ret  */
  ESPCHK(0x10ef0b70u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10ef0c20 (193 bytes, 88 insns) */
void f_10ef0c20(void) {
  FTRACE(0x10ef0c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0c22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ef0c26 push ebx */
  push32((uint32_t)(EBX));
  /* 10ef0c27 mov ebx, eax */
  EBX = (EAX);
  /* 10ef0c29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ef0c2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ef0c30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ef0c36 je 0x10ef0c4b */
  if (C.zf) goto L_10ef0c4b;
L_10ef0c38:;
  /* 10ef0c38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10ef0c3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ef0c3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ef0c3d je 0x10ef0c10 */
  if (C.zf) { jmp_ind(0x10ef0c10u); return; }
  /* 10ef0c3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10ef0c41 je 0x10ef0c94 */
  if (C.zf) goto L_10ef0c94;
  /* 10ef0c43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ef0c49 jne 0x10ef0c38 */
  if (!C.zf) goto L_10ef0c38;
L_10ef0c4b:;
  /* 10ef0c4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10ef0c4d push edi */
  push32((uint32_t)(EDI));
  /* 10ef0c4e mov eax, ebx */
  EAX = (EBX);
  /* 10ef0c50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10ef0c53 push esi */
  push32((uint32_t)(ESI));
  /* 10ef0c54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10ef0c56:;
  /* 10ef0c56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ef0c58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10ef0c5d mov eax, ecx */
  EAX = (ECX);
  /* 10ef0c5f mov esi, edi */
  ESI = (EDI);
  /* 10ef0c61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0c63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0c65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0c67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0c6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0c6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0c6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0c71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ef0c74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ef0c7a jne 0x10ef0c98 */
  if (!C.zf) goto L_10ef0c98;
  /* 10ef0c7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0c81 je 0x10ef0c56 */
  if (C.zf) goto L_10ef0c56;
  /* 10ef0c83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0c88 jne 0x10ef0c92 */
  if (!C.zf) goto L_10ef0c92;
  /* 10ef0c8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10ef0c90 jne 0x10ef0c56 */
  if (!C.zf) goto L_10ef0c56;
L_10ef0c92:;
  /* 10ef0c92 pop esi */
  ESI = (pop32());
  /* 10ef0c93 pop edi */
  EDI = (pop32());
L_10ef0c94:;
  /* 10ef0c94 pop ebx */
  EBX = (pop32());
  /* 10ef0c95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ef0c97 ret  */
  ESPCHK(0x10ef0c20u, _esp0);
  ESP += 4; return;
L_10ef0c98:;
  /* 10ef0c98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ef0c9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ef0c9d je 0x10ef0cd5 */
  if (C.zf) goto L_10ef0cd5;
  /* 10ef0c9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ef0ca1 je 0x10ef0c92 */
  if (C.zf) goto L_10ef0c92;
  /* 10ef0ca3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ef0ca5 je 0x10ef0cce */
  if (C.zf) goto L_10ef0cce;
  /* 10ef0ca7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ef0ca9 je 0x10ef0c92 */
  if (C.zf) goto L_10ef0c92;
  /* 10ef0cab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ef0cae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ef0cb0 je 0x10ef0cc7 */
  if (C.zf) goto L_10ef0cc7;
  /* 10ef0cb2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ef0cb4 je 0x10ef0c92 */
  if (C.zf) goto L_10ef0c92;
  /* 10ef0cb6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ef0cb8 je 0x10ef0cc0 */
  if (C.zf) goto L_10ef0cc0;
  /* 10ef0cba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ef0cbc je 0x10ef0c92 */
  if (C.zf) goto L_10ef0c92;
  /* 10ef0cbe jmp 0x10ef0c56 */
  goto L_10ef0c56;
L_10ef0cc0:;
  /* 10ef0cc0 pop esi */
  ESI = (pop32());
  /* 10ef0cc1 pop edi */
  EDI = (pop32());
  /* 10ef0cc2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10ef0cc5 pop ebx */
  EBX = (pop32());
  /* 10ef0cc6 ret  */
  ESPCHK(0x10ef0c20u, _esp0);
  ESP += 4; return;
L_10ef0cc7:;
  /* 10ef0cc7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10ef0cca pop esi */
  ESI = (pop32());
  /* 10ef0ccb pop edi */
  EDI = (pop32());
  /* 10ef0ccc pop ebx */
  EBX = (pop32());
  /* 10ef0ccd ret  */
  ESPCHK(0x10ef0c20u, _esp0);
  ESP += 4; return;
L_10ef0cce:;
  /* 10ef0cce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10ef0cd1 pop esi */
  ESI = (pop32());
  /* 10ef0cd2 pop edi */
  EDI = (pop32());
  /* 10ef0cd3 pop ebx */
  EBX = (pop32());
  /* 10ef0cd4 ret  */
  ESPCHK(0x10ef0c20u, _esp0);
  ESP += 4; return;
L_10ef0cd5:;
  /* 10ef0cd5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10ef0cd8 pop esi */
  ESI = (pop32());
  /* 10ef0cd9 pop edi */
  EDI = (pop32());
  /* 10ef0cda pop ebx */
  EBX = (pop32());
  /* 10ef0cdb ret  */
  ESPCHK(0x10ef0c20u, _esp0);
  ESP += 4; return;
  /* 10ef0cde hlt  */
  x86_unimpl("hlt @ 0x10ef0cde");
  /* 10ef0cdf and esi, ecx */
  { uint32_t _r=(ESI)&(ECX); ESI = (_r); fl_logic(_r,32); }
}

/* RtlUnwind @ 0x10ef0cdc (6 bytes, 1 insns) */
void f_10ef0cdc(void) {
  FTRACE(0x10ef0cdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef0cdc jmp dword ptr [0x10f123f4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10f123f4)))); return;
}

/* Unwind@10027d00 @ 0x10ef7d00 (11 bytes, 5 insns) */
void f_10ef7d00(void) {
  FTRACE(0x10ef7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ef7d00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ef7d03 push eax */
  push32((uint32_t)(EAX));
  /* 10ef7d04 call 0x10ed96a0 */
  push32(0x10ef7d09u); f_10ed96a0();
  /* 10ef7d09 pop ecx */
  ECX = (pop32());
  /* 10ef7d0a ret  */
  ESPCHK(0x10ef7d00u, _esp0);
  ESP += 4; return;
}

