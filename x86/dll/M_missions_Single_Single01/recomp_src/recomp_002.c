#include "recomp.h"

/* FUN_1000fb70 @ 0x10bdfb70 (393 bytes, 123 insns) */
void f_10bdfb70(void) {
  FTRACE(0x10bdfb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdfb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdfb71 mov ebp, esp */
  EBP = (ESP);
  /* 10bdfb73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfb76 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfb7a jne 0x10bdfb86 */
  if (!C.zf) goto L_10bdfb86;
  /* 10bdfb7c mov eax, dword ptr [0x10bfdc98] */
  EAX = (r32((uint32_t)(0x10bfdc98)));
  /* 10bdfb81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bdfb84 jmp 0x10bdfb8c */
  goto L_10bdfb8c;
L_10bdfb86:;
  /* 10bdfb86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfb89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10bdfb8c:;
  /* 10bdfb8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdfb8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bdfb92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfb95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdfb98 push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10bdfb9d call dword ptr [0x10c0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0025c))), 0x10bdfba3u);
  /* 10bdfba3 cmp dword ptr [0x10bfe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfbaa je 0x10bdfbca */
  if (C.zf) goto L_10bdfbca;
  /* 10bdfbac push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10bdfbb1 call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bdfbb7u);
  /* 10bdfbb7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdfbb9 call 0x10bd6230 */
  push32(0x10bdfbbeu); f_10bd6230();
  /* 10bdfbbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfbc1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10bdfbc8 jmp 0x10bdfbd1 */
  goto L_10bdfbd1;
L_10bdfbca:;
  /* 10bdfbca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10bdfbd1:;
  /* 10bdfbd1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfbd5 jbe 0x10bdfcc2 */
  if ((C.cf||C.zf)) goto L_10bdfcc2;
  /* 10bdfbdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfbde mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bdfbe0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10bdfbe3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bdfbe7 je 0x10bdfbf1 */
  if (C.zf) goto L_10bdfbf1;
  /* 10bdfbe9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bdfbed je 0x10bdfbf6 */
  if (C.zf) goto L_10bdfbf6;
  /* 10bdfbef jmp 0x10bdfc50 */
  goto L_10bdfc50;
L_10bdfbf1:;
  /* 10bdfbf1 jmp 0x10bdfcc2 */
  goto L_10bdfcc2;
L_10bdfbf6:;
  /* 10bdfbf6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfbf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfbfc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10bdfbff mov dword ptr [0x10bfe778], 0 */
  w32((uint32_t)(0x10bfe778), (0x0u));
  /* 10bdfc09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bdfc0f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfc12 jne 0x10bdfc27 */
  if (!C.zf) goto L_10bdfc27;
  /* 10bdfc14 mov dword ptr [0x10bfe778], 1 */
  w32((uint32_t)(0x10bfe778), (0x1u));
  /* 10bdfc1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfc24 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10bdfc27:;
  /* 10bdfc27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdfc2a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfc2b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10bdfc2e push edx */
  push32((uint32_t)(EDX));
  /* 10bdfc2f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10bdfc32 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfc33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfc36 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfc37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bdfc3c push eax */
  push32((uint32_t)(EAX));
  /* 10bdfc3d call 0x10bdfd00 */
  push32(0x10bdfc42u); f_10bdfd00();
  /* 10bdfc42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfc45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfc4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10bdfc4e jmp 0x10bdfcbd */
  goto L_10bdfcbd;
L_10bdfc50:;
  /* 10bdfc50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdfc55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bdfc57 mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10bdfc5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bdfc5f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10bdfc63 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdfc69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdfc6b je 0x10bdfc98 */
  if (C.zf) goto L_10bdfc98;
  /* 10bdfc6d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfc71 jbe 0x10bdfc98 */
  if ((C.cf||C.zf)) goto L_10bdfc98;
  /* 10bdfc73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdfc76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc79 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bdfc7b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bdfc7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdfc80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfc83 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bdfc86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfc8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10bdfc8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfc92 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfc95 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10bdfc98:;
  /* 10bdfc98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdfc9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfc9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bdfca0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bdfca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdfca5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfca8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bdfcab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfcae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfcb1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10bdfcb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfcb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfcba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10bdfcbd:;
  /* 10bdfcbd jmp 0x10bdfbd1 */
  goto L_10bdfbd1;
L_10bdfcc2:;
  /* 10bdfcc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfcc6 je 0x10bdfcd4 */
  if (C.zf) goto L_10bdfcd4;
  /* 10bdfcc8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdfcca call 0x10bd62d0 */
  push32(0x10bdfccfu); f_10bd62d0();
  /* 10bdfccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfcd2 jmp 0x10bdfcdf */
  goto L_10bdfcdf;
L_10bdfcd4:;
  /* 10bdfcd4 push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10bdfcd9 call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bdfcdfu);
L_10bdfcdf:;
  /* 10bdfcdf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfce3 jbe 0x10bdfcf3 */
  if ((C.cf||C.zf)) goto L_10bdfcf3;
  /* 10bdfce5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdfce8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10bdfceb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfcee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfcf1 jmp 0x10bdfcf5 */
  goto L_10bdfcf5;
L_10bdfcf3:;
  /* 10bdfcf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdfcf5:;
  /* 10bdfcf5 mov esp, ebp */
  ESP = (EBP);
  /* 10bdfcf7 pop ebp */
  EBP = (pop32());
  /* 10bdfcf8 ret  */
  ESPCHK(0x10bdfb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd00 @ 0x10bdfd00 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10bdfd00(void) {
  FTRACE(0x10bdfd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdfd00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdfd01 mov ebp, esp */
  EBP = (ESP);
  /* 10bdfd03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfd06 push esi */
  push32((uint32_t)(ESI));
  /* 10bdfd07 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10bdfd0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdfd0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfd11 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfd14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdfd17 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfd1b ja 0x10be0268 */
  if ((!C.cf&&!C.zf)) goto L_10be0268;
  /* 10bdfd21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfd24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bdfd26 mov dl, byte ptr [eax + 0x10be02c9] */
  DL = (r8((uint32_t)(EAX + 0x10be02c9)));
  /* 10bdfd2c jmp dword ptr [edx*4 + 0x10be026d] */
  switch (EDX) {
    case 0: goto L_10be0246;
    case 1: goto L_10bdfd55;
    case 2: goto L_10bdfd9b;
    case 3: goto L_10bdfee8;
    case 4: goto L_10bdff10;
    case 5: goto L_10bdffaf;
    case 6: goto L_10be001b;
    case 7: goto L_10be0044;
    case 8: goto L_10be0085;
    case 9: goto L_10be0167;
    case 10: goto L_10be01ce;
    case 11: goto L_10be021b;
    case 12: goto L_10bdfd33;
    case 13: goto L_10bdfd78;
    case 14: goto L_10bdfdbe;
    case 15: goto L_10bdfebe;
    case 16: goto L_10bdff55;
    case 17: goto L_10bdff82;
    case 18: goto L_10bdffd7;
    case 19: goto L_10be005b;
    case 20: goto L_10be0109;
    case 21: goto L_10be0198;
    case 22: goto L_10be0268;
    default: x86_unimpl("switch@0x10bdfd2c out of table"); return;
  }
L_10bdfd33:;
  /* 10bdfd33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfd36 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfd37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfd3a push edx */
  push32((uint32_t)(EDX));
  /* 10bdfd3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfd3e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10bdfd41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfd44 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10bdfd47 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfd48 call 0x10be0320 */
  push32(0x10bdfd4du); f_10be0320();
  /* 10bdfd4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfd50 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfd55:;
  /* 10bdfd55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfd58 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfd59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfd5c push edx */
  push32((uint32_t)(EDX));
  /* 10bdfd5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfd60 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10bdfd63 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfd66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10bdfd6a push eax */
  push32((uint32_t)(EAX));
  /* 10bdfd6b call 0x10be0320 */
  push32(0x10bdfd70u); f_10be0320();
  /* 10bdfd70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfd73 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfd78:;
  /* 10bdfd78 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfd7b push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfd7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfd7f push edx */
  push32((uint32_t)(EDX));
  /* 10bdfd80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfd83 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bdfd86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfd89 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10bdfd8d push eax */
  push32((uint32_t)(EAX));
  /* 10bdfd8e call 0x10be0320 */
  push32(0x10bdfd93u); f_10be0320();
  /* 10bdfd93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfd96 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfd9b:;
  /* 10bdfd9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfd9e push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfd9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfda2 push edx */
  push32((uint32_t)(EDX));
  /* 10bdfda3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfda6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bdfda9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfdac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10bdfdb0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfdb1 call 0x10be0320 */
  push32(0x10bdfdb6u); f_10be0320();
  /* 10bdfdb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfdb9 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfdbe:;
  /* 10bdfdbe cmp dword ptr [0x10bfe778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfdc5 je 0x10bdfe46 */
  if (C.zf) goto L_10bdfe46;
  /* 10bdfdc7 mov dword ptr [0x10bfe778], 0 */
  w32((uint32_t)(0x10bfe778), (0x0u));
  /* 10bdfdd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfdd5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfdd8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdfdd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfddc push eax */
  push32((uint32_t)(EAX));
  /* 10bdfddd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfde0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfde1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfde4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10bdfdea push eax */
  push32((uint32_t)(EAX));
  /* 10bdfdeb call 0x10be04d0 */
  push32(0x10bdfdf0u); f_10be04d0();
  /* 10bdfdf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfdf3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfdf6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfdf9 jne 0x10bdfe00 */
  if (!C.zf) goto L_10bdfe00;
  /* 10bdfdfb jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfe00:;
  /* 10bdfe00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bdfe05 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10bdfe08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bdfe0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfe10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bdfe15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bdfe1a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfe1d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bdfe22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfe25 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfe26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe29 push edx */
  push32((uint32_t)(EDX));
  /* 10bdfe2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe2d push eax */
  push32((uint32_t)(EAX));
  /* 10bdfe2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfe31 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfe32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfe35 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10bdfe3b push eax */
  push32((uint32_t)(EAX));
  /* 10bdfe3c call 0x10be04d0 */
  push32(0x10bdfe41u); f_10be04d0();
  /* 10bdfe41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfe44 jmp 0x10bdfeb9 */
  goto L_10bdfeb9;
L_10bdfe46:;
  /* 10bdfe46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfe49 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfe4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe4d push edx */
  push32((uint32_t)(EDX));
  /* 10bdfe4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe51 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfe52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfe55 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfe56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfe59 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10bdfe5f push eax */
  push32((uint32_t)(EAX));
  /* 10bdfe60 call 0x10be04d0 */
  push32(0x10bdfe65u); f_10be04d0();
  /* 10bdfe65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfe68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe6b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdfe6e jne 0x10bdfe75 */
  if (!C.zf) goto L_10bdfe75;
  /* 10bdfe70 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfe75:;
  /* 10bdfe75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bdfe7a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10bdfe7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bdfe82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfe85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfe88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bdfe8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bdfe8f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdfe92 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe95 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bdfe97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfe9a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfe9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfe9e push edx */
  push32((uint32_t)(EDX));
  /* 10bdfe9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfea2 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfea7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdfeaa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10bdfeb0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfeb1 call 0x10be04d0 */
  push32(0x10bdfeb6u); f_10be04d0();
  /* 10bdfeb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdfeb9:;
  /* 10bdfeb9 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfebe:;
  /* 10bdfebe mov ecx, dword ptr [0x10bfe778] */
  ECX = (r32((uint32_t)(0x10bfe778)));
  /* 10bdfec4 mov dword ptr [0x10bfe788], ecx */
  w32((uint32_t)(0x10bfe788), (ECX));
  /* 10bdfeca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfecd push edx */
  push32((uint32_t)(EDX));
  /* 10bdfece mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfed1 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdfed4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfed7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdfeda push edx */
  push32((uint32_t)(EDX));
  /* 10bdfedb call 0x10be0370 */
  push32(0x10bdfee0u); f_10be0370();
  /* 10bdfee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfee3 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdfee8:;
  /* 10bdfee8 mov eax, dword ptr [0x10bfe778] */
  EAX = (r32((uint32_t)(0x10bfe778)));
  /* 10bdfeed mov dword ptr [0x10bfe788], eax */
  w32((uint32_t)(0x10bfe788), (EAX));
  /* 10bdfef2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfef5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfef6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfef9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdfefa push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdfefc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfeff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bdff02 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdff03 call 0x10be0370 */
  push32(0x10bdff08u); f_10be0370();
  /* 10bdff08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdff0b jmp 0x10be0268 */
  goto L_10be0268;
L_10bdff10:;
  /* 10bdff10 mov edx, dword ptr [0x10bfe778] */
  EDX = (r32((uint32_t)(0x10bfe778)));
  /* 10bdff16 mov dword ptr [0x10bfe788], edx */
  w32((uint32_t)(0x10bfe788), (EDX));
  /* 10bdff1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdff1f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bdff22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bdff23 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10bdff28 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bdff2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bdff2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdff31 jne 0x10bdff3a */
  if (!C.zf) goto L_10bdff3a;
  /* 10bdff33 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10bdff3a:;
  /* 10bdff3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdff3d push edx */
  push32((uint32_t)(EDX));
  /* 10bdff3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdff41 push eax */
  push32((uint32_t)(EAX));
  /* 10bdff42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdff44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdff47 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdff48 call 0x10be0370 */
  push32(0x10bdff4du); f_10be0370();
  /* 10bdff4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdff50 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdff55:;
  /* 10bdff55 mov edx, dword ptr [0x10bfe778] */
  EDX = (r32((uint32_t)(0x10bfe778)));
  /* 10bdff5b mov dword ptr [0x10bfe788], edx */
  w32((uint32_t)(0x10bfe788), (EDX));
  /* 10bdff61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdff64 push eax */
  push32((uint32_t)(EAX));
  /* 10bdff65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdff68 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdff69 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bdff6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdff6e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10bdff71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdff74 push eax */
  push32((uint32_t)(EAX));
  /* 10bdff75 call 0x10be0370 */
  push32(0x10bdff7au); f_10be0370();
  /* 10bdff7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdff7d jmp 0x10be0268 */
  goto L_10be0268;
L_10bdff82:;
  /* 10bdff82 mov ecx, dword ptr [0x10bfe778] */
  ECX = (r32((uint32_t)(0x10bfe778)));
  /* 10bdff88 mov dword ptr [0x10bfe788], ecx */
  w32((uint32_t)(0x10bfe788), (ECX));
  /* 10bdff8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdff91 push edx */
  push32((uint32_t)(EDX));
  /* 10bdff92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdff95 push eax */
  push32((uint32_t)(EAX));
  /* 10bdff96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdff98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdff9b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bdff9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdffa1 push edx */
  push32((uint32_t)(EDX));
  /* 10bdffa2 call 0x10be0370 */
  push32(0x10bdffa7u); f_10be0370();
  /* 10bdffa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdffaa jmp 0x10be0268 */
  goto L_10be0268;
L_10bdffaf:;
  /* 10bdffaf mov eax, dword ptr [0x10bfe778] */
  EAX = (r32((uint32_t)(0x10bfe778)));
  /* 10bdffb4 mov dword ptr [0x10bfe788], eax */
  w32((uint32_t)(0x10bfe788), (EAX));
  /* 10bdffb9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdffbc push ecx */
  push32((uint32_t)(ECX));
  /* 10bdffbd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdffc0 push edx */
  push32((uint32_t)(EDX));
  /* 10bdffc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdffc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdffc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bdffc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdffca call 0x10be0370 */
  push32(0x10bdffcfu); f_10be0370();
  /* 10bdffcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdffd2 jmp 0x10be0268 */
  goto L_10be0268;
L_10bdffd7:;
  /* 10bdffd7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdffda cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdffde jg 0x10bdfffc */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdfffc;
  /* 10bdffe0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdffe3 push eax */
  push32((uint32_t)(EAX));
  /* 10bdffe4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdffe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdffe8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdffeb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10bdfff1 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfff2 call 0x10be0320 */
  push32(0x10bdfff7u); f_10be0320();
  /* 10bdfff7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfffa jmp 0x10be0016 */
  goto L_10be0016;
L_10bdfffc:;
  /* 10bdfffc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdffff push ecx */
  push32((uint32_t)(ECX));
  /* 10be0000 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0003 push edx */
  push32((uint32_t)(EDX));
  /* 10be0004 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0007 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10be000d push ecx */
  push32((uint32_t)(ECX));
  /* 10be000e call 0x10be0320 */
  push32(0x10be0013u); f_10be0320();
  /* 10be0013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be0016:;
  /* 10be0016 jmp 0x10be0268 */
  goto L_10be0268;
L_10be001b:;
  /* 10be001b mov edx, dword ptr [0x10bfe778] */
  EDX = (r32((uint32_t)(0x10bfe778)));
  /* 10be0021 mov dword ptr [0x10bfe788], edx */
  w32((uint32_t)(0x10bfe788), (EDX));
  /* 10be0027 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be002a push eax */
  push32((uint32_t)(EAX));
  /* 10be002b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be002e push ecx */
  push32((uint32_t)(ECX));
  /* 10be002f push 2 */
  push32((uint32_t)(0x2u));
  /* 10be0031 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0034 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be0036 push eax */
  push32((uint32_t)(EAX));
  /* 10be0037 call 0x10be0370 */
  push32(0x10be003cu); f_10be0370();
  /* 10be003c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be003f jmp 0x10be0268 */
  goto L_10be0268;
L_10be0044:;
  /* 10be0044 mov ecx, dword ptr [0x10bfe778] */
  ECX = (r32((uint32_t)(0x10bfe778)));
  /* 10be004a mov dword ptr [0x10bfe788], ecx */
  w32((uint32_t)(0x10bfe788), (ECX));
  /* 10be0050 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0053 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10be0056 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be0059 jmp 0x10be00ad */
  goto L_10be00ad;
L_10be005b:;
  /* 10be005b mov ecx, dword ptr [0x10bfe778] */
  ECX = (r32((uint32_t)(0x10bfe778)));
  /* 10be0061 mov dword ptr [0x10bfe788], ecx */
  w32((uint32_t)(0x10bfe788), (ECX));
  /* 10be0067 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be006a push edx */
  push32((uint32_t)(EDX));
  /* 10be006b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be006e push eax */
  push32((uint32_t)(EAX));
  /* 10be006f push 1 */
  push32((uint32_t)(0x1u));
  /* 10be0071 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0074 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10be0077 push edx */
  push32((uint32_t)(EDX));
  /* 10be0078 call 0x10be0370 */
  push32(0x10be007du); f_10be0370();
  /* 10be007d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0080 jmp 0x10be0268 */
  goto L_10be0268;
L_10be0085:;
  /* 10be0085 mov eax, dword ptr [0x10bfe778] */
  EAX = (r32((uint32_t)(0x10bfe778)));
  /* 10be008a mov dword ptr [0x10bfe788], eax */
  w32((uint32_t)(0x10bfe788), (EAX));
  /* 10be008f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0092 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0096 jne 0x10be00a1 */
  if (!C.zf) goto L_10be00a1;
  /* 10be0098 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10be009f jmp 0x10be00ad */
  goto L_10be00ad;
L_10be00a1:;
  /* 10be00a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be00a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10be00a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be00aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10be00ad:;
  /* 10be00ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be00b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10be00b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be00b6 jge 0x10be00c1 */
  if ((C.sf==C.of)) goto L_10be00c1;
  /* 10be00b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be00bf jmp 0x10be00ee */
  goto L_10be00ee;
L_10be00c1:;
  /* 10be00c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be00c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10be00c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be00c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10be00cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be00cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be00d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be00d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10be00d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be00d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10be00de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be00e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be00e3 jl 0x10be00ee */
  if ((C.sf!=C.of)) goto L_10be00ee;
  /* 10be00e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be00e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be00eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10be00ee:;
  /* 10be00ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be00f1 push eax */
  push32((uint32_t)(EAX));
  /* 10be00f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be00f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10be00f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be00f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be00fb push edx */
  push32((uint32_t)(EDX));
  /* 10be00fc call 0x10be0370 */
  push32(0x10be0101u); f_10be0370();
  /* 10be0101 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0104 jmp 0x10be0268 */
  goto L_10be0268;
L_10be0109:;
  /* 10be0109 cmp dword ptr [0x10bfe778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0110 je 0x10be0140 */
  if (C.zf) goto L_10be0140;
  /* 10be0112 mov dword ptr [0x10bfe778], 0 */
  w32((uint32_t)(0x10bfe778), (0x0u));
  /* 10be011c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be011f push eax */
  push32((uint32_t)(EAX));
  /* 10be0120 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0123 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0124 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0127 push edx */
  push32((uint32_t)(EDX));
  /* 10be0128 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be012b push eax */
  push32((uint32_t)(EAX));
  /* 10be012c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be012f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10be0135 push edx */
  push32((uint32_t)(EDX));
  /* 10be0136 call 0x10be04d0 */
  push32(0x10be013bu); f_10be04d0();
  /* 10be013b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be013e jmp 0x10be0162 */
  goto L_10be0162;
L_10be0140:;
  /* 10be0140 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0143 push eax */
  push32((uint32_t)(EAX));
  /* 10be0144 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0147 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0148 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be014b push edx */
  push32((uint32_t)(EDX));
  /* 10be014c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be014f push eax */
  push32((uint32_t)(EAX));
  /* 10be0150 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0153 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10be0159 push edx */
  push32((uint32_t)(EDX));
  /* 10be015a call 0x10be04d0 */
  push32(0x10be015fu); f_10be04d0();
  /* 10be015f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be0162:;
  /* 10be0162 jmp 0x10be0268 */
  goto L_10be0268;
L_10be0167:;
  /* 10be0167 mov dword ptr [0x10bfe778], 0 */
  w32((uint32_t)(0x10bfe778), (0x0u));
  /* 10be0171 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0174 push eax */
  push32((uint32_t)(EAX));
  /* 10be0175 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0178 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0179 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be017c push edx */
  push32((uint32_t)(EDX));
  /* 10be017d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0180 push eax */
  push32((uint32_t)(EAX));
  /* 10be0181 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0184 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10be018a push edx */
  push32((uint32_t)(EDX));
  /* 10be018b call 0x10be04d0 */
  push32(0x10be0190u); f_10be04d0();
  /* 10be0190 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0193 jmp 0x10be0268 */
  goto L_10be0268;
L_10be0198:;
  /* 10be0198 mov eax, dword ptr [0x10bfe778] */
  EAX = (r32((uint32_t)(0x10bfe778)));
  /* 10be019d mov dword ptr [0x10bfe788], eax */
  w32((uint32_t)(0x10bfe788), (EAX));
  /* 10be01a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be01a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10be01a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be01a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10be01ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be01b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be01b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be01b6 push edx */
  push32((uint32_t)(EDX));
  /* 10be01b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be01ba push eax */
  push32((uint32_t)(EAX));
  /* 10be01bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10be01bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be01c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10be01c1 call 0x10be0370 */
  push32(0x10be01c6u); f_10be0370();
  /* 10be01c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be01c9 jmp 0x10be0268 */
  goto L_10be0268;
L_10be01ce:;
  /* 10be01ce mov edx, dword ptr [0x10bfe778] */
  EDX = (r32((uint32_t)(0x10bfe778)));
  /* 10be01d4 mov dword ptr [0x10bfe788], edx */
  w32((uint32_t)(0x10bfe788), (EDX));
  /* 10be01da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be01dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10be01e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be01e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10be01e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be01e8 mov ecx, eax */
  ECX = (EAX);
  /* 10be01ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be01ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be01f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be01f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10be01f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be01f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10be01fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be01fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0200 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be0203 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0206 push eax */
  push32((uint32_t)(EAX));
  /* 10be0207 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be020a push ecx */
  push32((uint32_t)(ECX));
  /* 10be020b push 4 */
  push32((uint32_t)(0x4u));
  /* 10be020d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0210 push edx */
  push32((uint32_t)(EDX));
  /* 10be0211 call 0x10be0370 */
  push32(0x10be0216u); f_10be0370();
  /* 10be0216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0219 jmp 0x10be0268 */
  goto L_10be0268;
L_10be021b:;
  /* 10be021b call 0x10be1330 */
  push32(0x10be0220u); f_10be1330();
  /* 10be0220 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0223 push eax */
  push32((uint32_t)(EAX));
  /* 10be0224 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0227 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0228 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be022b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be022d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0231 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10be0234 mov ecx, dword ptr [eax*4 + 0x10bfde1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfde1c)));
  /* 10be023b push ecx */
  push32((uint32_t)(ECX));
  /* 10be023c call 0x10be0320 */
  push32(0x10be0241u); f_10be0320();
  /* 10be0241 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0244 jmp 0x10be0268 */
  goto L_10be0268;
L_10be0246:;
  /* 10be0246 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0249 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be024b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10be024e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0251 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be0253 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0259 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10be025b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be025e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be0260 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0263 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0266 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10be0268:;
  /* 10be0268 pop esi */
  ESI = (pop32());
  /* 10be0269 mov esp, ebp */
  ESP = (EBP);
  /* 10be026b pop ebp */
  EBP = (pop32());
  /* 10be026c ret  */
  ESPCHK(0x10bdfd00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10be0320 (72 bytes, 30 insns) */
void f_10be0320(void) {
  FTRACE(0x10be0320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0320 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0321 mov ebp, esp */
  EBP = (ESP);
L_10be0323:;
  /* 10be0323 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0326 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0329 je 0x10be0366 */
  if (C.zf) goto L_10be0366;
  /* 10be032b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be032e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be0331 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be0333 je 0x10be0366 */
  if (C.zf) goto L_10be0366;
  /* 10be0335 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0338 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be033a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be033d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be033f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10be0341 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0344 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be0346 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0349 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be034c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10be034e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0351 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0354 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10be0357 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be035a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be035c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be035f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0362 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10be0364 jmp 0x10be0323 */
  goto L_10be0323;
L_10be0366:;
  /* 10be0366 pop ebp */
  EBP = (pop32());
  /* 10be0367 ret  */
  ESPCHK(0x10be0320u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x10be0370 (173 bytes, 64 insns) */
void f_10be0370(void) {
  FTRACE(0x10be0370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0370 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0371 mov ebp, esp */
  EBP = (ESP);
  /* 10be0373 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0374 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be037b cmp dword ptr [0x10bfe788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0382 je 0x10be039a */
  if (C.zf) goto L_10be039a;
  /* 10be0384 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0387 push eax */
  push32((uint32_t)(EAX));
  /* 10be0388 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be038b push ecx */
  push32((uint32_t)(ECX));
  /* 10be038c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be038f push edx */
  push32((uint32_t)(EDX));
  /* 10be0390 call 0x10be0420 */
  push32(0x10be0395u); f_10be0420();
  /* 10be0395 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0398 jmp 0x10be0419 */
  goto L_10be0419;
L_10be039a:;
  /* 10be039a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be039d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be03a0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be03a2 jae 0x10be0410 */
  if (!C.cf) goto L_10be0410;
  /* 10be03a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be03a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be03aa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10be03ad jmp 0x10be03b8 */
  goto L_10be03b8;
L_10be03af:;
  /* 10be03af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be03b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be03b5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10be03b8:;
  /* 10be03b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be03bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be03be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be03c0 je 0x10be03f4 */
  if (C.zf) goto L_10be03f4;
  /* 10be03c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be03c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be03c6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10be03cb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be03cd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be03d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be03d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be03d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be03d8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10be03db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be03de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be03df mov ecx, 0xa */
  ECX = (0xau);
  /* 10be03e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be03e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be03e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be03ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be03ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be03f2 jmp 0x10be03af */
  goto L_10be03af;
L_10be03f4:;
  /* 10be03f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be03f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be03f9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be03fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be03ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10be0401 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0404 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be0406 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0409 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be040c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10be040e jmp 0x10be0419 */
  goto L_10be0419;
L_10be0410:;
  /* 10be0410 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0413 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10be0419:;
  /* 10be0419 mov esp, ebp */
  ESP = (EBP);
  /* 10be041b pop ebp */
  EBP = (pop32());
  /* 10be041c ret  */
  ESPCHK(0x10be0370u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10be0420 (172 bytes, 65 insns) */
void f_10be0420(void) {
  FTRACE(0x10be0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0420 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0421 mov ebp, esp */
  EBP = (ESP);
  /* 10be0423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0426 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0429 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be042b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be042e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0431 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0434 jbe 0x10be047b */
  if ((C.cf||C.zf)) goto L_10be047b;
L_10be0436:;
  /* 10be0436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0439 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be043a mov ecx, 0xa */
  ECX = (0xau);
  /* 10be043f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be0441 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0447 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10be0449 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be044c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be044f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be0452 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0455 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be0457 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be045a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be045d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10be045f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0462 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be0463 mov ecx, 0xa */
  ECX = (0xau);
  /* 10be0468 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be046a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be046d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0471 jle 0x10be047b */
  if ((C.zf||C.sf!=C.of)) goto L_10be047b;
  /* 10be0473 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0476 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0479 ja 0x10be0436 */
  if ((!C.cf&&!C.zf)) goto L_10be0436;
L_10be047b:;
  /* 10be047b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be047e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be0480 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10be0483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0486 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0489 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10be048b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be048e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0491 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10be0494:;
  /* 10be0494 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0497 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be0499 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10be049c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be049f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be04a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be04a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10be04a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be04a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be04ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be04af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be04b2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10be04b5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10be04b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be04ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be04bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10be04c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be04c3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be04c6 jb 0x10be0494 */
  if (C.cf) goto L_10be0494;
  /* 10be04c8 mov esp, ebp */
  ESP = (EBP);
  /* 10be04ca pop ebp */
  EBP = (pop32());
  /* 10be04cb ret  */
  ESPCHK(0x10be0420u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x10be04d0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10be04d0(void) {
  FTRACE(0x10be04d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be04d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be04d1 mov ebp, esp */
  EBP = (ESP);
  /* 10be04d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10be04d6:;
  /* 10be04d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be04d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be04dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be04de je 0x10be094c */
  if (C.zf) goto L_10be094c;
  /* 10be04e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be04e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be04ea je 0x10be094c */
  if (C.zf) goto L_10be094c;
  /* 10be04f0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10be04f4 mov dword ptr [0x10bfe788], 0 */
  w32((uint32_t)(0x10bfe788), (0x0u));
  /* 10be04fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10be0505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0508 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be050b jmp 0x10be0516 */
  goto L_10be0516;
L_10be050d:;
  /* 10be050d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0510 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0513 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10be0516:;
  /* 10be0516 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0519 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be051c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be051f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be0522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0528 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be052b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be052d jne 0x10be0531 */
  if (!C.zf) goto L_10be0531;
  /* 10be052f jmp 0x10be050d */
  goto L_10be050d;
L_10be0531:;
  /* 10be0531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be0534 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0537 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be053a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be053d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be0540 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10be0543 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10be0546 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0549 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10be054c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0550 ja 0x10be08a0 */
  if ((!C.cf&&!C.zf)) goto L_10be08a0;
  /* 10be0556 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10be0559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be055b mov al, byte ptr [ecx + 0x10be097c] */
  AL = (r8((uint32_t)(ECX + 0x10be097c)));
  /* 10be0561 jmp dword ptr [eax*4 + 0x10be0950] */
  switch (EAX) {
    case 0: goto L_10be07bf;
    case 1: goto L_10be06a3;
    case 2: goto L_10be062e;
    case 3: goto L_10be0568;
    case 4: goto L_10be05a6;
    case 5: goto L_10be0607;
    case 6: goto L_10be0655;
    case 7: goto L_10be067c;
    case 8: goto L_10be06ea;
    case 9: goto L_10be05e4;
    case 10: goto L_10be08a0;
    default: x86_unimpl("switch@0x10be0561 out of table"); return;
  }
L_10be0568:;
  /* 10be0568 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be056b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10be056e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10be0571 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0574 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10be0577 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be057b ja 0x10be05a1 */
  if ((!C.cf&&!C.zf)) goto L_10be05a1;
  /* 10be057d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10be0580 jmp dword ptr [ecx*4 + 0x10be09cf] */
  switch (ECX) {
    case 0: goto L_10be0587;
    case 1: goto L_10be0591;
    case 2: goto L_10be0597;
    case 3: goto L_10be059d;
    case 4: goto L_10be05c5;
    case 5: goto L_10be05cf;
    case 6: goto L_10be05d5;
    case 7: goto L_10be05db;
    default: x86_unimpl("switch@0x10be0580 out of table"); return;
  }
L_10be0587:;
  /* 10be0587 mov dword ptr [0x10bfe788], 1 */
  w32((uint32_t)(0x10bfe788), (0x1u));
L_10be0591:;
  /* 10be0591 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10be0595 jmp 0x10be05a1 */
  goto L_10be05a1;
L_10be0597:;
  /* 10be0597 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10be059b jmp 0x10be05a1 */
  goto L_10be05a1;
L_10be059d:;
  /* 10be059d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10be05a1:;
  /* 10be05a1 jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be05a6:;
  /* 10be05a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be05a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10be05ac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be05af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be05b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10be05b5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be05b9 ja 0x10be05df */
  if ((!C.cf&&!C.zf)) goto L_10be05df;
  /* 10be05bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be05be jmp dword ptr [ecx*4 + 0x10be09df] */
  switch (ECX) {
    case 0: goto L_10be05c5;
    case 1: goto L_10be05cf;
    case 2: goto L_10be05d5;
    case 3: goto L_10be05db;
    default: x86_unimpl("switch@0x10be05be out of table"); return;
  }
L_10be05c5:;
  /* 10be05c5 mov dword ptr [0x10bfe788], 1 */
  w32((uint32_t)(0x10bfe788), (0x1u));
L_10be05cf:;
  /* 10be05cf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10be05d3 jmp 0x10be05df */
  goto L_10be05df;
L_10be05d5:;
  /* 10be05d5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10be05d9 jmp 0x10be05df */
  goto L_10be05df;
L_10be05db:;
  /* 10be05db mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10be05df:;
  /* 10be05df jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be05e4:;
  /* 10be05e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be05e7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10be05ea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be05ee je 0x10be05f8 */
  if (C.zf) goto L_10be05f8;
  /* 10be05f0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be05f4 je 0x10be05fe */
  if (C.zf) goto L_10be05fe;
  /* 10be05f6 jmp 0x10be0602 */
  goto L_10be0602;
L_10be05f8:;
  /* 10be05f8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10be05fc jmp 0x10be0602 */
  goto L_10be0602;
L_10be05fe:;
  /* 10be05fe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10be0602:;
  /* 10be0602 jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be0607:;
  /* 10be0607 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be060a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10be060d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0611 je 0x10be061b */
  if (C.zf) goto L_10be061b;
  /* 10be0613 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0617 je 0x10be0625 */
  if (C.zf) goto L_10be0625;
  /* 10be0619 jmp 0x10be0629 */
  goto L_10be0629;
L_10be061b:;
  /* 10be061b mov dword ptr [0x10bfe788], 1 */
  w32((uint32_t)(0x10bfe788), (0x1u));
L_10be0625:;
  /* 10be0625 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10be0629:;
  /* 10be0629 jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be062e:;
  /* 10be062e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0631 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10be0634 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0638 je 0x10be0642 */
  if (C.zf) goto L_10be0642;
  /* 10be063a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be063e je 0x10be064c */
  if (C.zf) goto L_10be064c;
  /* 10be0640 jmp 0x10be0650 */
  goto L_10be0650;
L_10be0642:;
  /* 10be0642 mov dword ptr [0x10bfe788], 1 */
  w32((uint32_t)(0x10bfe788), (0x1u));
L_10be064c:;
  /* 10be064c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10be0650:;
  /* 10be0650 jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be0655:;
  /* 10be0655 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0658 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10be065b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be065f je 0x10be0669 */
  if (C.zf) goto L_10be0669;
  /* 10be0661 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0665 je 0x10be0673 */
  if (C.zf) goto L_10be0673;
  /* 10be0667 jmp 0x10be0677 */
  goto L_10be0677;
L_10be0669:;
  /* 10be0669 mov dword ptr [0x10bfe788], 1 */
  w32((uint32_t)(0x10bfe788), (0x1u));
L_10be0673:;
  /* 10be0673 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10be0677:;
  /* 10be0677 jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be067c:;
  /* 10be067c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be067f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10be0682 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0686 je 0x10be0690 */
  if (C.zf) goto L_10be0690;
  /* 10be0688 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be068c je 0x10be069a */
  if (C.zf) goto L_10be069a;
  /* 10be068e jmp 0x10be069e */
  goto L_10be069e;
L_10be0690:;
  /* 10be0690 mov dword ptr [0x10bfe788], 1 */
  w32((uint32_t)(0x10bfe788), (0x1u));
L_10be069a:;
  /* 10be069a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10be069e:;
  /* 10be069e jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be06a3:;
  /* 10be06a3 push 0x10bfa7f4 */
  push32((uint32_t)(0x10bfa7f4u));
  /* 10be06a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be06ab push ecx */
  push32((uint32_t)(ECX));
  /* 10be06ac call 0x10be0f00 */
  push32(0x10be06b1u); f_10be0f00();
  /* 10be06b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be06b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be06b6 jne 0x10be06c3 */
  if (!C.zf) goto L_10be06c3;
  /* 10be06b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be06bb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be06be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be06c1 jmp 0x10be06e1 */
  goto L_10be06e1;
L_10be06c3:;
  /* 10be06c3 push 0x10bfa7f0 */
  push32((uint32_t)(0x10bfa7f0u));
  /* 10be06c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be06cb push eax */
  push32((uint32_t)(EAX));
  /* 10be06cc call 0x10be0f00 */
  push32(0x10be06d1u); f_10be0f00();
  /* 10be06d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be06d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be06d6 jne 0x10be06e1 */
  if (!C.zf) goto L_10be06e1;
  /* 10be06d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be06db add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be06de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10be06e1:;
  /* 10be06e1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10be06e5 jmp 0x10be08a0 */
  goto L_10be08a0;
L_10be06ea:;
  /* 10be06ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be06ed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be06f1 jg 0x10be0701 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be0701;
  /* 10be06f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be06f6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10be06fc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10be06ff jmp 0x10be070d */
  goto L_10be070d;
L_10be0701:;
  /* 10be0701 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0704 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10be070a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10be070d:;
  /* 10be070d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0711 jle 0x10be07b4 */
  if ((C.zf||C.sf!=C.of)) goto L_10be07b4;
  /* 10be0717 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be071a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be071d jbe 0x10be07b4 */
  if ((C.cf||C.zf)) goto L_10be07b4;
  /* 10be0723 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be0726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0728 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be072a mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be0730 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be0732 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be0736 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10be073c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be073e je 0x10be0777 */
  if (C.zf) goto L_10be0777;
  /* 10be0740 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0743 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0746 jbe 0x10be0777 */
  if ((C.cf||C.zf)) goto L_10be0777;
  /* 10be0748 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be074b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be074d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be0750 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be0752 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10be0754 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0757 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be0759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be075c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be075f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10be0761 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be0764 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0767 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10be076a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be076d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be076f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0772 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0775 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10be0777:;
  /* 10be0777 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be077a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be077c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be077f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be0781 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10be0783 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0786 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be0788 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be078b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be078e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10be0790 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be0793 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0796 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10be0799 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be079c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be079e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be07a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be07a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10be07a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be07a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be07ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10be07af jmp 0x10be070d */
  goto L_10be070d;
L_10be07b4:;
  /* 10be07b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be07b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be07ba jmp 0x10be04d6 */
  goto L_10be04d6;
L_10be07bf:;
  /* 10be07bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be07c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10be07c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be07c7 je 0x10be0892 */
  if (C.zf) goto L_10be0892;
  /* 10be07cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be07d0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be07d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10be07d6:;
  /* 10be07d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be07d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be07dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be07de je 0x10be0890 */
  if (C.zf) goto L_10be0890;
  /* 10be07e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be07e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be07ea je 0x10be0890 */
  if (C.zf) goto L_10be0890;
  /* 10be07f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be07f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be07f6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be07f9 jne 0x10be0809 */
  if (!C.zf) goto L_10be0809;
  /* 10be07fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be07fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0801 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10be0804 jmp 0x10be0890 */
  goto L_10be0890;
L_10be0809:;
  /* 10be0809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be080c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be080e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be0810 mov edx, dword ptr [0x10bfcc98] */
  EDX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be0816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0818 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10be081c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10be0821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be0823 je 0x10be085c */
  if (C.zf) goto L_10be085c;
  /* 10be0825 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0828 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be082b jbe 0x10be085c */
  if ((C.cf||C.zf)) goto L_10be085c;
  /* 10be082d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0830 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be0832 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0835 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be0837 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10be0839 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be083c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be083e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0841 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0844 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10be0846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be084c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be084f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0852 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be0854 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0857 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be085a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10be085c:;
  /* 10be085c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be085f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be0861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0864 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be0866 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10be0868 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be086b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be086d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0870 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0873 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10be0875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0878 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be087b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10be087e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0881 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be0883 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0886 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0889 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10be088b jmp 0x10be07d6 */
  goto L_10be07d6;
L_10be0890:;
  /* 10be0890 jmp 0x10be089b */
  goto L_10be089b;
L_10be0892:;
  /* 10be0892 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0895 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0898 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10be089b:;
  /* 10be089b jmp 0x10be04d6 */
  goto L_10be04d6;
L_10be08a0:;
  /* 10be08a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10be08a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be08a6 je 0x10be08cc */
  if (C.zf) goto L_10be08cc;
  /* 10be08a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be08ab push edx */
  push32((uint32_t)(EDX));
  /* 10be08ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be08af push eax */
  push32((uint32_t)(EAX));
  /* 10be08b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be08b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be08b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be08b7 push edx */
  push32((uint32_t)(EDX));
  /* 10be08b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10be08bb push eax */
  push32((uint32_t)(EAX));
  /* 10be08bc call 0x10bdfd00 */
  push32(0x10be08c1u); f_10bdfd00();
  /* 10be08c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be08c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be08c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10be08ca jmp 0x10be0947 */
  goto L_10be0947;
L_10be08cc:;
  /* 10be08cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be08cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be08d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be08d3 mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be08d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be08db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be08df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10be08e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be08e7 je 0x10be0918 */
  if (C.zf) goto L_10be0918;
  /* 10be08e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be08ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be08ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be08f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be08f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10be08f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be08f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be08fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be08fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0900 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10be0902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0908 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10be090b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be090e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be0910 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0913 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0916 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10be0918:;
  /* 10be0918 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be091b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be091d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0920 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be0922 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10be0924 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0927 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be0929 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be092c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be092f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10be0931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0934 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0937 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be093a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be093d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be093f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0942 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0945 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10be0947:;
  /* 10be0947 jmp 0x10be04d6 */
  goto L_10be04d6;
L_10be094c:;
  /* 10be094c mov esp, ebp */
  ESP = (EBP);
  /* 10be094e pop ebp */
  EBP = (pop32());
  /* 10be094f ret  */
  ESPCHK(0x10be04d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100109f0 @ 0x10be09f0 (650 bytes, 178 insns) */
void f_10be09f0(void) {
  FTRACE(0x10be09f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be09f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be09f1 mov ebp, esp */
  EBP = (ESP);
  /* 10be09f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be09f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be09fd jne 0x10be0b59 */
  if (!C.zf) goto L_10be0b59;
  /* 10be0a03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0a06 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10be0a0c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10be0a12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be0a15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be0a1c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10be0a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0a28 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10be0a2e push edx */
  push32((uint32_t)(EDX));
  /* 10be0a2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0a32 push eax */
  push32((uint32_t)(EAX));
  /* 10be0a33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0a36 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0a37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0a3a push edx */
  push32((uint32_t)(EDX));
  /* 10be0a3b call 0x10be1e10 */
  push32(0x10be0a40u); f_10be1e10();
  /* 10be0a40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0a43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be0a46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0a4a jne 0x10be0adf */
  if (!C.zf) goto L_10be0adf;
  /* 10be0a50 call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10be0a56u);
  /* 10be0a56 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0a59 je 0x10be0a60 */
  if (C.zf) goto L_10be0a60;
  /* 10be0a5b jmp 0x10be0b3d */
  goto L_10be0b3d;
L_10be0a60:;
  /* 10be0a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0a66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0a69 push eax */
  push32((uint32_t)(EAX));
  /* 10be0a6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0a6d push ecx */
  push32((uint32_t)(ECX));
  /* 10be0a6e call 0x10be1e10 */
  push32(0x10be0a73u); f_10be1e10();
  /* 10be0a73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0a76 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10be0a7c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0a83 jne 0x10be0a8a */
  if (!C.zf) goto L_10be0a8a;
  /* 10be0a85 jmp 0x10be0b3d */
  goto L_10be0b3d;
L_10be0a8a:;
  /* 10be0a8a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10be0a8c push 0x10bfa7fc */
  push32((uint32_t)(0x10bfa7fcu));
  /* 10be0a91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be0a93 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10be0a99 push edx */
  push32((uint32_t)(EDX));
  /* 10be0a9a call 0x10bd2830 */
  push32(0x10be0a9fu); f_10bd2830();
  /* 10be0a9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0aa2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be0aa5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0aa9 jne 0x10be0ab0 */
  if (!C.zf) goto L_10be0ab0;
  /* 10be0aab jmp 0x10be0b3d */
  goto L_10be0b3d;
L_10be0ab0:;
  /* 10be0ab0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10be0ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0ab9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10be0abf push eax */
  push32((uint32_t)(EAX));
  /* 10be0ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0ac4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0ac7 push edx */
  push32((uint32_t)(EDX));
  /* 10be0ac8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0acb push eax */
  push32((uint32_t)(EAX));
  /* 10be0acc call 0x10be1e10 */
  push32(0x10be0ad1u); f_10be1e10();
  /* 10be0ad1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0ad4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be0ad7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0adb jne 0x10be0adf */
  if (!C.zf) goto L_10be0adf;
  /* 10be0add jmp 0x10be0b3d */
  goto L_10be0b3d;
L_10be0adf:;
  /* 10be0adf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10be0ae1 push 0x10bfa7fc */
  push32((uint32_t)(0x10bfa7fcu));
  /* 10be0ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be0ae8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be0aeb push ecx */
  push32((uint32_t)(ECX));
  /* 10be0aec call 0x10bd2830 */
  push32(0x10be0af1u); f_10bd2830();
  /* 10be0af1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0af4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10be0afa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10be0afc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10be0b02 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0b05 jne 0x10be0b09 */
  if (!C.zf) goto L_10be0b09;
  /* 10be0b07 jmp 0x10be0b3d */
  goto L_10be0b3d;
L_10be0b09:;
  /* 10be0b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be0b0c push ecx */
  push32((uint32_t)(ECX));
  /* 10be0b0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0b10 push edx */
  push32((uint32_t)(EDX));
  /* 10be0b11 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10be0b17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be0b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0b1a call 0x10bd6050 */
  push32(0x10be0b1fu); f_10bd6050();
  /* 10be0b1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0b22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0b26 je 0x10be0b36 */
  if (C.zf) goto L_10be0b36;
  /* 10be0b28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be0b2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0b2d push edx */
  push32((uint32_t)(EDX));
  /* 10be0b2e call 0x10bd32c0 */
  push32(0x10be0b33u); f_10bd32c0();
  /* 10be0b33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be0b36:;
  /* 10be0b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0b38 jmp 0x10be0c76 */
  goto L_10be0c76;
L_10be0b3d:;
  /* 10be0b3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0b41 je 0x10be0b51 */
  if (C.zf) goto L_10be0b51;
  /* 10be0b43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be0b45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be0b48 push eax */
  push32((uint32_t)(EAX));
  /* 10be0b49 call 0x10bd32c0 */
  push32(0x10be0b4eu); f_10bd32c0();
  /* 10be0b4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be0b51:;
  /* 10be0b51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be0b54 jmp 0x10be0c76 */
  goto L_10be0c76;
L_10be0b59:;
  /* 10be0b59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0b5d jne 0x10be0c73 */
  if (!C.zf) goto L_10be0c73;
  /* 10be0b63 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10be0b6d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0b70 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10be0b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0b78 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10be0b7e push edx */
  push32((uint32_t)(EDX));
  /* 10be0b7f push 0x10bfe6a0 */
  push32((uint32_t)(0x10bfe6a0u));
  /* 10be0b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0b87 push eax */
  push32((uint32_t)(EAX));
  /* 10be0b88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0b8b push ecx */
  push32((uint32_t)(ECX));
  /* 10be0b8c call 0x10be1c70 */
  push32(0x10be0b91u); f_10be1c70();
  /* 10be0b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be0b96 jne 0x10be0ba0 */
  if (!C.zf) goto L_10be0ba0;
  /* 10be0b98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be0b9b jmp 0x10be0c76 */
  goto L_10be0c76;
L_10be0ba0:;
  /* 10be0ba0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10be0ba6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10be0ba9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10be0bb3 jmp 0x10be0bc4 */
  goto L_10be0bc4;
L_10be0bb5:;
  /* 10be0bb5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10be0bbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0bbe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10be0bc4:;
  /* 10be0bc4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0bcb jge 0x10be0c6f */
  if ((C.sf==C.of)) goto L_10be0c6f;
  /* 10be0bd1 cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0bd8 jle 0x10be0c0b */
  if ((C.zf||C.sf!=C.of)) goto L_10be0c0b;
  /* 10be0bda push 4 */
  push32((uint32_t)(0x4u));
  /* 10be0bdc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10be0be2 mov dl, byte ptr [ecx*2 + 0x10bfe6a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x10bfe6a0)));
  /* 10be0be9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10be0bef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10be0bf5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be0bfa push eax */
  push32((uint32_t)(EAX));
  /* 10be0bfb call 0x10bd8840 */
  push32(0x10be0c00u); f_10bd8840();
  /* 10be0c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0c03 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10be0c09 jmp 0x10be0c3e */
  goto L_10be0c3e;
L_10be0c0b:;
  /* 10be0c0b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10be0c11 mov dl, byte ptr [ecx*2 + 0x10bfe6a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x10bfe6a0)));
  /* 10be0c18 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10be0c1e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10be0c24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be0c29 mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be0c2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be0c31 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be0c35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10be0c38 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10be0c3e:;
  /* 10be0c3e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0c45 je 0x10be0c68 */
  if (C.zf) goto L_10be0c68;
  /* 10be0c47 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10be0c4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be0c50 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be0c53 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10be0c5a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10be0c5e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10be0c64 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10be0c66 jmp 0x10be0c6a */
  goto L_10be0c6a;
L_10be0c68:;
  /* 10be0c68 jmp 0x10be0c6f */
  goto L_10be0c6f;
L_10be0c6a:;
  /* 10be0c6a jmp 0x10be0bb5 */
  goto L_10be0bb5;
L_10be0c6f:;
  /* 10be0c6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0c71 jmp 0x10be0c76 */
  goto L_10be0c76;
L_10be0c73:;
  /* 10be0c73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10be0c76:;
  /* 10be0c76 mov esp, ebp */
  ESP = (EBP);
  /* 10be0c78 pop ebp */
  EBP = (pop32());
  /* 10be0c79 ret  */
  ESPCHK(0x10be09f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c80 @ 0x10be0c80 (10 bytes, 5 insns) */
void f_10be0c80(void) {
  FTRACE(0x10be0c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0c81 mov ebp, esp */
  EBP = (ESP);
  /* 10be0c83 mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10be0c88 pop ebp */
  EBP = (pop32());
  /* 10be0c89 ret  */
  ESPCHK(0x10be0c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c90 @ 0x10be0c90 (575 bytes, 196 insns) */
void f_10be0c90(void) {
  FTRACE(0x10be0c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0c91 mov ebp, esp */
  EBP = (ESP);
  /* 10be0c93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be0c95 push 0x10bfa808 */
  push32((uint32_t)(0x10bfa808u));
  /* 10be0c9a push 0x10bdb938 */
  push32((uint32_t)(0x10bdb938u));
  /* 10be0c9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10be0ca5 push eax */
  push32((uint32_t)(EAX));
  /* 10be0ca6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10be0cad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10be0cb1 push esi */
  push32((uint32_t)(ESI));
  /* 10be0cb2 push edi */
  push32((uint32_t)(EDI));
  /* 10be0cb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be0cb6 cmp dword ptr [0x10bfe6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0cbd jne 0x10be0d0e */
  if (!C.zf) goto L_10be0d0e;
  /* 10be0cbf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10be0cc2 push eax */
  push32((uint32_t)(EAX));
  /* 10be0cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be0cc5 push 0x10bf9f38 */
  push32((uint32_t)(0x10bf9f38u));
  /* 10be0cca push 1 */
  push32((uint32_t)(0x1u));
  /* 10be0ccc call dword ptr [0x10c00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00308))), 0x10be0cd2u);
  /* 10be0cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be0cd4 je 0x10be0ce2 */
  if (C.zf) goto L_10be0ce2;
  /* 10be0cd6 mov dword ptr [0x10bfe6ac], 1 */
  w32((uint32_t)(0x10bfe6ac), (0x1u));
  /* 10be0ce0 jmp 0x10be0d0e */
  goto L_10be0d0e;
L_10be0ce2:;
  /* 10be0ce2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10be0ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be0ce8 push 0x10bf9f34 */
  push32((uint32_t)(0x10bf9f34u));
  /* 10be0ced push 1 */
  push32((uint32_t)(0x1u));
  /* 10be0cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0cf1 call dword ptr [0x10c00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00304))), 0x10be0cf7u);
  /* 10be0cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be0cf9 je 0x10be0d07 */
  if (C.zf) goto L_10be0d07;
  /* 10be0cfb mov dword ptr [0x10bfe6ac], 2 */
  w32((uint32_t)(0x10bfe6ac), (0x2u));
  /* 10be0d05 jmp 0x10be0d0e */
  goto L_10be0d0e;
L_10be0d07:;
  /* 10be0d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0d09 jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0d0e:;
  /* 10be0d0e cmp dword ptr [0x10bfe6ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe6ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0d15 jne 0x10be0d32 */
  if (!C.zf) goto L_10be0d32;
  /* 10be0d17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0d1a push edx */
  push32((uint32_t)(EDX));
  /* 10be0d1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0d1e push eax */
  push32((uint32_t)(EAX));
  /* 10be0d1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0d22 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0d23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0d26 push edx */
  push32((uint32_t)(EDX));
  /* 10be0d27 call dword ptr [0x10c00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00308))), 0x10be0d2du);
  /* 10be0d2d jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0d32:;
  /* 10be0d32 cmp dword ptr [0x10bfe6ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe6ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0d39 jne 0x10be0ee7 */
  if (!C.zf) goto L_10be0ee7;
  /* 10be0d3f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0d43 jne 0x10be0d4d */
  if (!C.zf) goto L_10be0d4d;
  /* 10be0d45 mov eax, dword ptr [0x10bfe620] */
  EAX = (r32((uint32_t)(0x10bfe620)));
  /* 10be0d4a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10be0d4d:;
  /* 10be0d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0d55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0d58 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0d59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0d5c push edx */
  push32((uint32_t)(EDX));
  /* 10be0d5d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10be0d62 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0d65 push eax */
  push32((uint32_t)(EAX));
  /* 10be0d66 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be0d6cu);
  /* 10be0d6c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10be0d6f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0d73 jne 0x10be0d7c */
  if (!C.zf) goto L_10be0d7c;
  /* 10be0d75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0d77 jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0d7c:;
  /* 10be0d7c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be0d83 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be0d86 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0d89 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10be0d8b call 0x10bd59d0 */
  push32(0x10be0d90u); f_10bd59d0();
  /* 10be0d90 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10be0d93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be0d96 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10be0d99 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10be0d9c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be0d9f push edx */
  push32((uint32_t)(EDX));
  /* 10be0da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0da2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10be0da5 push eax */
  push32((uint32_t)(EAX));
  /* 10be0da6 call 0x10bd65a0 */
  push32(0x10be0dabu); f_10bd65a0();
  /* 10be0dab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0dae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10be0db5 jmp 0x10be0dce */
  goto L_10be0dce;
  /* 10be0db7 mov eax, 1 */
  EAX = (0x1u);
  /* 10be0dbc ret  */
  ESPCHK(0x10be0c90u, _esp0);
  ESP += 4; return;
  /* 10be0dbd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10be0dc0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10be0dc7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10be0dce:;
  /* 10be0dce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0dd2 jne 0x10be0ddb */
  if (!C.zf) goto L_10be0ddb;
  /* 10be0dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0dd6 jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0ddb:;
  /* 10be0ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0ddf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be0de2 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0de3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10be0de6 push edx */
  push32((uint32_t)(EDX));
  /* 10be0de7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0dea push eax */
  push32((uint32_t)(EAX));
  /* 10be0deb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0dee push ecx */
  push32((uint32_t)(ECX));
  /* 10be0def push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10be0df4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be0df7 push edx */
  push32((uint32_t)(EDX));
  /* 10be0df8 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be0dfeu);
  /* 10be0dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be0e00 jne 0x10be0e09 */
  if (!C.zf) goto L_10be0e09;
  /* 10be0e02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0e04 jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0e09:;
  /* 10be0e09 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10be0e10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be0e13 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10be0e17 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0e1a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10be0e1c call 0x10bd59d0 */
  push32(0x10be0e21u); f_10bd59d0();
  /* 10be0e21 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10be0e24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be0e27 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10be0e2a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10be0e2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10be0e34 jmp 0x10be0e4d */
  goto L_10be0e4d;
  /* 10be0e36 mov eax, 1 */
  EAX = (0x1u);
  /* 10be0e3b ret  */
  ESPCHK(0x10be0c90u, _esp0);
  ESP += 4; return;
  /* 10be0e3c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10be0e3f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10be0e46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10be0e4d:;
  /* 10be0e4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0e51 jne 0x10be0e5a */
  if (!C.zf) goto L_10be0e5a;
  /* 10be0e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0e55 jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0e5a:;
  /* 10be0e5a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0e5e jne 0x10be0e69 */
  if (!C.zf) goto L_10be0e69;
  /* 10be0e60 mov edx, dword ptr [0x10bfe610] */
  EDX = (r32((uint32_t)(0x10bfe610)));
  /* 10be0e66 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10be0e69:;
  /* 10be0e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0e6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be0e6f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10be0e75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0e78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be0e7b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10be0e82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be0e85 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be0e89 push edx */
  push32((uint32_t)(EDX));
  /* 10be0e8a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10be0e8d push eax */
  push32((uint32_t)(EAX));
  /* 10be0e8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0e91 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0e92 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be0e95 push edx */
  push32((uint32_t)(EDX));
  /* 10be0e96 call dword ptr [0x10c00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00304))), 0x10be0e9cu);
  /* 10be0e9c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10be0e9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0ea2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be0ea5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be0ea7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10be0eac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0eb2 je 0x10be0ec8 */
  if (C.zf) goto L_10be0ec8;
  /* 10be0eb4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0eb7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be0eba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be0ebc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be0ec0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0ec6 je 0x10be0ecc */
  if (C.zf) goto L_10be0ecc;
L_10be0ec8:;
  /* 10be0ec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0eca jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0ecc:;
  /* 10be0ecc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0ecf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10be0ed1 push eax */
  push32((uint32_t)(EAX));
  /* 10be0ed2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be0ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 10be0ed6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be0ed9 push edx */
  push32((uint32_t)(EDX));
  /* 10be0eda call 0x10bda720 */
  push32(0x10be0edfu); f_10bda720();
  /* 10be0edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0ee2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be0ee5 jmp 0x10be0ee9 */
  goto L_10be0ee9;
L_10be0ee7:;
  /* 10be0ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be0ee9:;
  /* 10be0ee9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10be0eec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be0eef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10be0ef6 pop edi */
  EDI = (pop32());
  /* 10be0ef7 pop esi */
  ESI = (pop32());
  /* 10be0ef8 pop ebx */
  EBX = (pop32());
  /* 10be0ef9 mov esp, ebp */
  ESP = (EBP);
  /* 10be0efb pop ebp */
  EBP = (pop32());
  /* 10be0efc ret  */
  ESPCHK(0x10be0c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f00 @ 0x10be0f00 (208 bytes, 85 insns) */
void f_10be0f00(void) {
  FTRACE(0x10be0f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0f01 mov ebp, esp */
  EBP = (ESP);
  /* 10be0f03 push edi */
  push32((uint32_t)(EDI));
  /* 10be0f04 push esi */
  push32((uint32_t)(ESI));
  /* 10be0f05 push ebx */
  push32((uint32_t)(EBX));
  /* 10be0f06 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0f09 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0f0c lea eax, [0x10bfe608] */
  EAX = ((uint32_t)(0x10bfe608));
  /* 10be0f12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0f16 jne 0x10be0f53 */
  if (!C.zf) goto L_10be0f53;
  /* 10be0f18 mov al, 0xff */
  AL = (0xffu);
  /* 10be0f1a mov edi, edi */
  EDI = (EDI);
L_10be0f1c:;
  /* 10be0f1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10be0f1e je 0x10be0f4e */
  if (C.zf) goto L_10be0f4e;
  /* 10be0f20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10be0f22 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10be0f23 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10be0f25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10be0f26 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be0f28 je 0x10be0f1c */
  if (C.zf) goto L_10be0f1c;
  /* 10be0f2a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10be0f2c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be0f2e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10be0f30 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10be0f33 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10be0f35 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10be0f37 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10be0f39 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10be0f3b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be0f3d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10be0f3f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10be0f42 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10be0f44 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10be0f46 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be0f48 je 0x10be0f1c */
  if (C.zf) goto L_10be0f1c;
  /* 10be0f4a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10be0f4c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10be0f4e:;
  /* 10be0f4e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10be0f51 jmp 0x10be0fcb */
  goto L_10be0fcb;
L_10be0f53:;
  /* 10be0f53 lock inc dword ptr [0x10bfe79c] */
  x86_unimpl("lock inc @ 0x10be0f53");
  /* 10be0f5a cmp dword ptr [0x10bfe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0f61 jg 0x10be0f67 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be0f67;
  /* 10be0f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be0f65 jmp 0x10be0f7c */
  goto L_10be0f7c;
L_10be0f67:;
  /* 10be0f67 lock dec dword ptr [0x10bfe79c] */
  x86_unimpl("lock dec @ 0x10be0f67");
  /* 10be0f6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10be0f70 call 0x10bd6230 */
  push32(0x10be0f75u); f_10bd6230();
  /* 10be0f75 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10be0f7c:;
  /* 10be0f7c mov eax, 0xff */
  EAX = (0xffu);
  /* 10be0f81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10be0f83 nop  */
  /* nop */
L_10be0f84:;
  /* 10be0f84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10be0f86 je 0x10be0faf */
  if (C.zf) goto L_10be0faf;
  /* 10be0f88 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10be0f8a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10be0f8b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10be0f8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10be0f8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be0f90 je 0x10be0f84 */
  if (C.zf) goto L_10be0f84;
  /* 10be0f92 push eax */
  push32((uint32_t)(EAX));
  /* 10be0f93 push ebx */
  push32((uint32_t)(EBX));
  /* 10be0f94 call 0x10be2070 */
  push32(0x10be0f99u); f_10be2070();
  /* 10be0f99 mov ebx, eax */
  EBX = (EAX);
  /* 10be0f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0f9e call 0x10be2070 */
  push32(0x10be0fa3u); f_10be2070();
  /* 10be0fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be0fa6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be0fa8 je 0x10be0f84 */
  if (C.zf) goto L_10be0f84;
  /* 10be0faa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be0fac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10be0faf:;
  /* 10be0faf mov ebx, eax */
  EBX = (EAX);
  /* 10be0fb1 pop eax */
  EAX = (pop32());
  /* 10be0fb2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be0fb4 jne 0x10be0fbf */
  if (!C.zf) goto L_10be0fbf;
  /* 10be0fb6 lock dec dword ptr [0x10bfe79c] */
  x86_unimpl("lock dec @ 0x10be0fb6");
  /* 10be0fbd jmp 0x10be0fc9 */
  goto L_10be0fc9;
L_10be0fbf:;
  /* 10be0fbf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10be0fc1 call 0x10bd62d0 */
  push32(0x10be0fc6u); f_10bd62d0();
  /* 10be0fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be0fc9:;
  /* 10be0fc9 mov eax, ebx */
  EAX = (EBX);
L_10be0fcb:;
  /* 10be0fcb pop ebx */
  EBX = (pop32());
  /* 10be0fcc pop esi */
  ESI = (pop32());
  /* 10be0fcd pop edi */
  EDI = (pop32());
  /* 10be0fce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10be0fcf ret  */
  ESPCHK(0x10be0f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x10be0fd0 (257 bytes, 103 insns) */
void f_10be0fd0(void) {
  FTRACE(0x10be0fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be0fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be0fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10be0fd3 push edi */
  push32((uint32_t)(EDI));
  /* 10be0fd4 push esi */
  push32((uint32_t)(ESI));
  /* 10be0fd5 push ebx */
  push32((uint32_t)(EBX));
  /* 10be0fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be0fd9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be0fdb je 0x10be10ca */
  if (C.zf) goto L_10be10ca;
  /* 10be0fe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10be0fe4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10be0fe7 lea eax, [0x10bfe608] */
  EAX = ((uint32_t)(0x10bfe608));
  /* 10be0fed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be0ff1 jne 0x10be1041 */
  if (!C.zf) goto L_10be1041;
  /* 10be0ff3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10be0ff5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10be0ff7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10be0ff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10be0ffc:;
  /* 10be0ffc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10be0ffe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10be1000 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10be1002 je 0x10be1025 */
  if (C.zf) goto L_10be1025;
  /* 10be1004 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10be1006 je 0x10be1025 */
  if (C.zf) goto L_10be1025;
  /* 10be1008 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10be1009 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10be100a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be100c jb 0x10be1014 */
  if (C.cf) goto L_10be1014;
  /* 10be100e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be1010 ja 0x10be1014 */
  if ((!C.cf&&!C.zf)) goto L_10be1014;
  /* 10be1012 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10be1014:;
  /* 10be1014 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be1016 jb 0x10be101e */
  if (C.cf) goto L_10be101e;
  /* 10be1018 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be101a ja 0x10be101e */
  if ((!C.cf&&!C.zf)) goto L_10be101e;
  /* 10be101c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10be101e:;
  /* 10be101e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be1020 jne 0x10be102f */
  if (!C.zf) goto L_10be102f;
  /* 10be1022 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10be1023 jne 0x10be0ffc */
  if (!C.zf) goto L_10be0ffc;
L_10be1025:;
  /* 10be1025 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be1027 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be1029 je 0x10be10ca */
  if (C.zf) goto L_10be10ca;
L_10be102f:;
  /* 10be102f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10be1034 jb 0x10be10ca */
  if (C.cf) goto L_10be10ca;
  /* 10be103a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be103c jmp 0x10be10ca */
  goto L_10be10ca;
L_10be1041:;
  /* 10be1041 lock inc dword ptr [0x10bfe79c] */
  x86_unimpl("lock inc @ 0x10be1041");
  /* 10be1048 cmp dword ptr [0x10bfe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be104f jg 0x10be1055 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be1055;
  /* 10be1051 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1053 jmp 0x10be106e */
  goto L_10be106e;
L_10be1055:;
  /* 10be1055 lock dec dword ptr [0x10bfe79c] */
  x86_unimpl("lock dec @ 0x10be1055");
  /* 10be105c mov ebx, ecx */
  EBX = (ECX);
  /* 10be105e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10be1060 call 0x10bd6230 */
  push32(0x10be1065u); f_10bd6230();
  /* 10be1065 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10be106c mov ecx, ebx */
  ECX = (EBX);
L_10be106e:;
  /* 10be106e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1070 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10be1072 mov edi, edi */
  EDI = (EDI);
L_10be1074:;
  /* 10be1074 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10be1076 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1078 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10be107a je 0x10be109f */
  if (C.zf) goto L_10be109f;
  /* 10be107c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10be107e je 0x10be109f */
  if (C.zf) goto L_10be109f;
  /* 10be1080 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10be1081 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10be1082 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1083 push eax */
  push32((uint32_t)(EAX));
  /* 10be1084 push ebx */
  push32((uint32_t)(EBX));
  /* 10be1085 call 0x10be2070 */
  push32(0x10be108au); f_10be2070();
  /* 10be108a mov ebx, eax */
  EBX = (EAX);
  /* 10be108c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be108f call 0x10be2070 */
  push32(0x10be1094u); f_10be2070();
  /* 10be1094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1097 pop ecx */
  ECX = (pop32());
  /* 10be1098 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be109a jne 0x10be10a5 */
  if (!C.zf) goto L_10be10a5;
  /* 10be109c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10be109d jne 0x10be1074 */
  if (!C.zf) goto L_10be1074;
L_10be109f:;
  /* 10be109f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be10a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be10a3 je 0x10be10ae */
  if (C.zf) goto L_10be10ae;
L_10be10a5:;
  /* 10be10a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10be10aa jb 0x10be10ae */
  if (C.cf) goto L_10be10ae;
  /* 10be10ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10be10ae:;
  /* 10be10ae pop eax */
  EAX = (pop32());
  /* 10be10af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be10b1 jne 0x10be10bc */
  if (!C.zf) goto L_10be10bc;
  /* 10be10b3 lock dec dword ptr [0x10bfe79c] */
  x86_unimpl("lock dec @ 0x10be10b3");
  /* 10be10ba jmp 0x10be10ca */
  goto L_10be10ca;
L_10be10bc:;
  /* 10be10bc mov ebx, ecx */
  EBX = (ECX);
  /* 10be10be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10be10c0 call 0x10bd62d0 */
  push32(0x10be10c5u); f_10bd62d0();
  /* 10be10c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be10c8 mov ecx, ebx */
  ECX = (EBX);
L_10be10ca:;
  /* 10be10ca mov eax, ecx */
  EAX = (ECX);
  /* 10be10cc pop ebx */
  EBX = (pop32());
  /* 10be10cd pop esi */
  ESI = (pop32());
  /* 10be10ce pop edi */
  EDI = (pop32());
  /* 10be10cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10be10d0 ret  */
  ESPCHK(0x10be0fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110e0 @ 0x10be10e0 (255 bytes, 88 insns) */
void f_10be10e0(void) {
  FTRACE(0x10be10e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be10e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be10e1 mov ebp, esp */
  EBP = (ESP);
  /* 10be10e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10be10e6:;
  /* 10be10e6 cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be10ed jle 0x10be1106 */
  if ((C.zf||C.sf!=C.of)) goto L_10be1106;
  /* 10be10ef push 8 */
  push32((uint32_t)(0x8u));
  /* 10be10f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be10f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be10f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be10f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10be10f9 call 0x10bd8840 */
  push32(0x10be10feu); f_10bd8840();
  /* 10be10fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1101 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10be1104 jmp 0x10be111f */
  goto L_10be111f;
L_10be1106:;
  /* 10be1106 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1109 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be110b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be110d mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be1113 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1115 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be1119 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10be111c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10be111f:;
  /* 10be111f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1123 je 0x10be1130 */
  if (C.zf) goto L_10be1130;
  /* 10be1125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1128 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be112b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be112e jmp 0x10be10e6 */
  goto L_10be10e6;
L_10be1130:;
  /* 10be1130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1133 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be1137 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be113a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be113d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1140 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be1143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be1146 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be1149 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be114d je 0x10be1155 */
  if (C.zf) goto L_10be1155;
  /* 10be114f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1153 jne 0x10be1168 */
  if (!C.zf) goto L_10be1168;
L_10be1155:;
  /* 10be1155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be115a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be115c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be115f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1162 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1165 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10be1168:;
  /* 10be1168 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10be116f:;
  /* 10be116f cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1176 jle 0x10be118b */
  if ((C.zf||C.sf!=C.of)) goto L_10be118b;
  /* 10be1178 push 4 */
  push32((uint32_t)(0x4u));
  /* 10be117a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be117d push edx */
  push32((uint32_t)(EDX));
  /* 10be117e call 0x10bd8840 */
  push32(0x10be1183u); f_10bd8840();
  /* 10be1183 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1186 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10be1189 jmp 0x10be11a0 */
  goto L_10be11a0;
L_10be118b:;
  /* 10be118b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be118e mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be1194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1196 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be119a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10be119d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10be11a0:;
  /* 10be11a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be11a4 je 0x10be11cb */
  if (C.zf) goto L_10be11cb;
  /* 10be11a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be11a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be11ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be11af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10be11b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10be11b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be11b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be11bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be11bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be11c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be11c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be11c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10be11c9 jmp 0x10be116f */
  goto L_10be116f;
L_10be11cb:;
  /* 10be11cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be11cf jne 0x10be11d8 */
  if (!C.zf) goto L_10be11d8;
  /* 10be11d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be11d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be11d6 jmp 0x10be11db */
  goto L_10be11db;
L_10be11d8:;
  /* 10be11d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10be11db:;
  /* 10be11db mov esp, ebp */
  ESP = (EBP);
  /* 10be11dd pop ebp */
  EBP = (pop32());
  /* 10be11de ret  */
  ESPCHK(0x10be10e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x10be11e0 (17 bytes, 8 insns) */
void f_10be11e0(void) {
  FTRACE(0x10be11e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be11e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be11e1 mov ebp, esp */
  EBP = (ESP);
  /* 10be11e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be11e6 push eax */
  push32((uint32_t)(EAX));
  /* 10be11e7 call 0x10be10e0 */
  push32(0x10be11ecu); f_10be10e0();
  /* 10be11ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be11ef pop ebp */
  EBP = (pop32());
  /* 10be11f0 ret  */
  ESPCHK(0x10be11e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x10be1200 (297 bytes, 106 insns) */
void f_10be1200(void) {
  FTRACE(0x10be1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1200 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1201 mov ebp, esp */
  EBP = (ESP);
  /* 10be1203 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1206 push esi */
  push32((uint32_t)(ESI));
L_10be1207:;
  /* 10be1207 cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be120e jle 0x10be1227 */
  if ((C.zf||C.sf!=C.of)) goto L_10be1227;
  /* 10be1210 push 8 */
  push32((uint32_t)(0x8u));
  /* 10be1212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1215 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be1217 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be1219 push ecx */
  push32((uint32_t)(ECX));
  /* 10be121a call 0x10bd8840 */
  push32(0x10be121fu); f_10bd8840();
  /* 10be121f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1222 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10be1225 jmp 0x10be1240 */
  goto L_10be1240;
L_10be1227:;
  /* 10be1227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be122a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be122c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be122e mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be1234 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1236 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be123a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10be123d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10be1240:;
  /* 10be1240 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1244 je 0x10be1251 */
  if (C.zf) goto L_10be1251;
  /* 10be1246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1249 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be124c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be124f jmp 0x10be1207 */
  goto L_10be1207;
L_10be1251:;
  /* 10be1251 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1254 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1256 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be1258 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be125b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be125e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1261 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be1264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be1267 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10be126a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be126e je 0x10be1276 */
  if (C.zf) goto L_10be1276;
  /* 10be1270 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1274 jne 0x10be1289 */
  if (!C.zf) goto L_10be1289;
L_10be1276:;
  /* 10be1276 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1279 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be127b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be127d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be1280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1283 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1286 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10be1289:;
  /* 10be1289 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10be1290 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10be1297:;
  /* 10be1297 cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be129e jle 0x10be12b3 */
  if ((C.zf||C.sf!=C.of)) goto L_10be12b3;
  /* 10be12a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10be12a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be12a5 push edx */
  push32((uint32_t)(EDX));
  /* 10be12a6 call 0x10bd8840 */
  push32(0x10be12abu); f_10bd8840();
  /* 10be12ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be12ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10be12b1 jmp 0x10be12c8 */
  goto L_10be12c8;
L_10be12b3:;
  /* 10be12b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be12b6 mov ecx, dword ptr [0x10bfcc98] */
  ECX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be12bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be12be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10be12c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10be12c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10be12c8:;
  /* 10be12c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be12cc je 0x10be1309 */
  if (C.zf) goto L_10be1309;
  /* 10be12ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10be12d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10be12d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be12d5 push eax */
  push32((uint32_t)(EAX));
  /* 10be12d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be12d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10be12da call 0x10be21a0 */
  push32(0x10be12dfu); f_10be21a0();
  /* 10be12df mov ecx, eax */
  ECX = (EAX);
  /* 10be12e1 mov esi, edx */
  ESI = (EDX);
  /* 10be12e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be12e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be12e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be12ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be12ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10be12ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be12f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10be12f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be12f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be12f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be12fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be12fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1304 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10be1307 jmp 0x10be1297 */
  goto L_10be1297;
L_10be1309:;
  /* 10be1309 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be130d jne 0x10be131e */
  if (!C.zf) goto L_10be131e;
  /* 10be130f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1312 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be1314 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1317 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be131a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be131c jmp 0x10be1324 */
  goto L_10be1324;
L_10be131e:;
  /* 10be131e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1321 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10be1324:;
  /* 10be1324 pop esi */
  ESI = (pop32());
  /* 10be1325 mov esp, ebp */
  ESP = (EBP);
  /* 10be1327 pop ebp */
  EBP = (pop32());
  /* 10be1328 ret  */
  ESPCHK(0x10be1200u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x10be1330 (61 bytes, 18 insns) */
void f_10be1330(void) {
  FTRACE(0x10be1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1330 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1331 mov ebp, esp */
  EBP = (ESP);
  /* 10be1333 cmp dword ptr [0x10bfe768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be133a jne 0x10be136b */
  if (!C.zf) goto L_10be136b;
  /* 10be133c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10be133e call 0x10bd6230 */
  push32(0x10be1343u); f_10bd6230();
  /* 10be1343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1346 cmp dword ptr [0x10bfe768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be134d jne 0x10be1361 */
  if (!C.zf) goto L_10be1361;
  /* 10be134f call 0x10be1390 */
  push32(0x10be1354u); f_10be1390();
  /* 10be1354 mov eax, dword ptr [0x10bfe768] */
  EAX = (r32((uint32_t)(0x10bfe768)));
  /* 10be1359 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be135c mov dword ptr [0x10bfe768], eax */
  w32((uint32_t)(0x10bfe768), (EAX));
L_10be1361:;
  /* 10be1361 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10be1363 call 0x10bd62d0 */
  push32(0x10be1368u); f_10bd62d0();
  /* 10be1368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be136b:;
  /* 10be136b pop ebp */
  EBP = (pop32());
  /* 10be136c ret  */
  ESPCHK(0x10be1330u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x10be1370 (30 bytes, 11 insns) */
void f_10be1370(void) {
  FTRACE(0x10be1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1370 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1371 mov ebp, esp */
  EBP = (ESP);
  /* 10be1373 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10be1375 call 0x10bd6230 */
  push32(0x10be137au); f_10bd6230();
  /* 10be137a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be137d call 0x10be1390 */
  push32(0x10be1382u); f_10be1390();
  /* 10be1382 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10be1384 call 0x10bd62d0 */
  push32(0x10be1389u); f_10bd62d0();
  /* 10be1389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be138c pop ebp */
  EBP = (pop32());
  /* 10be138d ret  */
  ESPCHK(0x10be1370u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x10be1390 (939 bytes, 266 insns) */
void f_10be1390(void) {
  FTRACE(0x10be1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1390 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1391 mov ebp, esp */
  EBP = (ESP);
  /* 10be1393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1396 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be139d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be139f call 0x10bd6230 */
  push32(0x10be13a4u); f_10bd6230();
  /* 10be13a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be13a7 mov dword ptr [0x10bfe6b0], 0 */
  w32((uint32_t)(0x10bfe6b0), (0x0u));
  /* 10be13b1 mov dword ptr [0x10bfde38], 0xffffffff */
  w32((uint32_t)(0x10bfde38), (0xffffffffu));
  /* 10be13bb mov eax, dword ptr [0x10bfde38] */
  EAX = (r32((uint32_t)(0x10bfde38)));
  /* 10be13c0 mov dword ptr [0x10bfde28], eax */
  w32((uint32_t)(0x10bfde28), (EAX));
  /* 10be13c5 push 0x10bfa868 */
  push32((uint32_t)(0x10bfa868u));
  /* 10be13ca call 0x10be2210 */
  push32(0x10be13cfu); f_10be2210();
  /* 10be13cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be13d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be13d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be13d9 jne 0x10be1513 */
  if (!C.zf) goto L_10be1513;
  /* 10be13df push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be13e1 call 0x10bd62d0 */
  push32(0x10be13e6u); f_10bd62d0();
  /* 10be13e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be13e9 push 0x10bfe6b8 */
  push32((uint32_t)(0x10bfe6b8u));
  /* 10be13ee call dword ptr [0x10c00228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00228))), 0x10be13f4u);
  /* 10be13f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be13f7 je 0x10be150e */
  if (C.zf) goto L_10be150e;
  /* 10be13fd mov dword ptr [0x10bfe6b0], 1 */
  w32((uint32_t)(0x10bfe6b0), (0x1u));
  /* 10be1407 mov ecx, dword ptr [0x10bfe6b8] */
  ECX = (r32((uint32_t)(0x10bfe6b8)));
  /* 10be140d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1410 mov dword ptr [0x10bfdd90], ecx */
  w32((uint32_t)(0x10bfdd90), (ECX));
  /* 10be1416 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1418 mov dx, word ptr [0x10bfe6fe] */
  DX = (r16((uint32_t)(0x10bfe6fe)));
  /* 10be141f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be1421 je 0x10be1439 */
  if (C.zf) goto L_10be1439;
  /* 10be1423 mov eax, dword ptr [0x10bfe70c] */
  EAX = (r32((uint32_t)(0x10bfe70c)));
  /* 10be1428 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be142b mov ecx, dword ptr [0x10bfdd90] */
  ECX = (r32((uint32_t)(0x10bfdd90)));
  /* 10be1431 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1433 mov dword ptr [0x10bfdd90], ecx */
  w32((uint32_t)(0x10bfdd90), (ECX));
L_10be1439:;
  /* 10be1439 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be143b mov dx, word ptr [0x10bfe752] */
  DX = (r16((uint32_t)(0x10bfe752)));
  /* 10be1442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be1444 je 0x10be146e */
  if (C.zf) goto L_10be146e;
  /* 10be1446 cmp dword ptr [0x10bfe760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be144d je 0x10be146e */
  if (C.zf) goto L_10be146e;
  /* 10be144f mov dword ptr [0x10bfdd94], 1 */
  w32((uint32_t)(0x10bfdd94), (0x1u));
  /* 10be1459 mov eax, dword ptr [0x10bfe760] */
  EAX = (r32((uint32_t)(0x10bfe760)));
  /* 10be145e sub eax, dword ptr [0x10bfe70c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfe70c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1464 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1467 mov dword ptr [0x10bfdd98], eax */
  w32((uint32_t)(0x10bfdd98), (EAX));
  /* 10be146c jmp 0x10be1482 */
  goto L_10be1482;
L_10be146e:;
  /* 10be146e mov dword ptr [0x10bfdd94], 0 */
  w32((uint32_t)(0x10bfdd94), (0x0u));
  /* 10be1478 mov dword ptr [0x10bfdd98], 0 */
  w32((uint32_t)(0x10bfdd98), (0x0u));
L_10be1482:;
  /* 10be1482 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10be1485 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1486 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1488 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10be148a mov edx, dword ptr [0x10bfde1c] */
  EDX = (r32((uint32_t)(0x10bfde1c)));
  /* 10be1490 push edx */
  push32((uint32_t)(EDX));
  /* 10be1491 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1493 push 0x10bfe6bc */
  push32((uint32_t)(0x10bfe6bcu));
  /* 10be1498 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10be149d mov eax, dword ptr [0x10bfe620] */
  EAX = (r32((uint32_t)(0x10bfe620)));
  /* 10be14a2 push eax */
  push32((uint32_t)(EAX));
  /* 10be14a3 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be14a9u);
  /* 10be14a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be14ab je 0x10be14bf */
  if (C.zf) goto L_10be14bf;
  /* 10be14ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be14b1 jne 0x10be14bf */
  if (!C.zf) goto L_10be14bf;
  /* 10be14b3 mov ecx, dword ptr [0x10bfde1c] */
  ECX = (r32((uint32_t)(0x10bfde1c)));
  /* 10be14b9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10be14bd jmp 0x10be14c8 */
  goto L_10be14c8;
L_10be14bf:;
  /* 10be14bf mov edx, dword ptr [0x10bfde1c] */
  EDX = (r32((uint32_t)(0x10bfde1c)));
  /* 10be14c5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10be14c8:;
  /* 10be14c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10be14cb push eax */
  push32((uint32_t)(EAX));
  /* 10be14cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10be14ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10be14d0 mov ecx, dword ptr [0x10bfde20] */
  ECX = (r32((uint32_t)(0x10bfde20)));
  /* 10be14d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10be14d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be14d9 push 0x10bfe710 */
  push32((uint32_t)(0x10bfe710u));
  /* 10be14de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10be14e3 mov edx, dword ptr [0x10bfe620] */
  EDX = (r32((uint32_t)(0x10bfe620)));
  /* 10be14e9 push edx */
  push32((uint32_t)(EDX));
  /* 10be14ea call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be14f0u);
  /* 10be14f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be14f2 je 0x10be1505 */
  if (C.zf) goto L_10be1505;
  /* 10be14f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be14f8 jne 0x10be1505 */
  if (!C.zf) goto L_10be1505;
  /* 10be14fa mov eax, dword ptr [0x10bfde20] */
  EAX = (r32((uint32_t)(0x10bfde20)));
  /* 10be14ff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10be1503 jmp 0x10be150e */
  goto L_10be150e;
L_10be1505:;
  /* 10be1505 mov ecx, dword ptr [0x10bfde20] */
  ECX = (r32((uint32_t)(0x10bfde20)));
  /* 10be150b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10be150e:;
  /* 10be150e jmp 0x10be1737 */
  goto L_10be1737;
L_10be1513:;
  /* 10be1513 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1516 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be1519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be151b je 0x10be153d */
  if (C.zf) goto L_10be153d;
  /* 10be151d cmp dword ptr [0x10bfe764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1524 je 0x10be154c */
  if (C.zf) goto L_10be154c;
  /* 10be1526 mov ecx, dword ptr [0x10bfe764] */
  ECX = (r32((uint32_t)(0x10bfe764)));
  /* 10be152c push ecx */
  push32((uint32_t)(ECX));
  /* 10be152d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1530 push edx */
  push32((uint32_t)(EDX));
  /* 10be1531 call 0x10bde4c0 */
  push32(0x10be1536u); f_10bde4c0();
  /* 10be1536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be153b jne 0x10be154c */
  if (!C.zf) goto L_10be154c;
L_10be153d:;
  /* 10be153d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be153f call 0x10bd62d0 */
  push32(0x10be1544u); f_10bd62d0();
  /* 10be1544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1547 jmp 0x10be1737 */
  goto L_10be1737;
L_10be154c:;
  /* 10be154c push 2 */
  push32((uint32_t)(0x2u));
  /* 10be154e mov eax, dword ptr [0x10bfe764] */
  EAX = (r32((uint32_t)(0x10bfe764)));
  /* 10be1553 push eax */
  push32((uint32_t)(EAX));
  /* 10be1554 call 0x10bd32c0 */
  push32(0x10be1559u); f_10bd32c0();
  /* 10be1559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be155c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10be1561 push 0x10bfa860 */
  push32((uint32_t)(0x10bfa860u));
  /* 10be1566 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be1568 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be156b push ecx */
  push32((uint32_t)(ECX));
  /* 10be156c call 0x10bd5660 */
  push32(0x10be1571u); f_10bd5660();
  /* 10be1571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1574 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1577 push eax */
  push32((uint32_t)(EAX));
  /* 10be1578 call 0x10bd2830 */
  push32(0x10be157du); f_10bd2830();
  /* 10be157d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1580 mov dword ptr [0x10bfe764], eax */
  w32((uint32_t)(0x10bfe764), (EAX));
  /* 10be1585 cmp dword ptr [0x10bfe764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be158c jne 0x10be159d */
  if (!C.zf) goto L_10be159d;
  /* 10be158e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be1590 call 0x10bd62d0 */
  push32(0x10be1595u); f_10bd62d0();
  /* 10be1595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1598 jmp 0x10be1737 */
  goto L_10be1737;
L_10be159d:;
  /* 10be159d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be15a0 push edx */
  push32((uint32_t)(EDX));
  /* 10be15a1 mov eax, dword ptr [0x10bfe764] */
  EAX = (r32((uint32_t)(0x10bfe764)));
  /* 10be15a6 push eax */
  push32((uint32_t)(EAX));
  /* 10be15a7 call 0x10bd57e0 */
  push32(0x10be15acu); f_10bd57e0();
  /* 10be15ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be15af push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be15b1 call 0x10bd62d0 */
  push32(0x10be15b6u); f_10bd62d0();
  /* 10be15b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be15b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10be15bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be15be push ecx */
  push32((uint32_t)(ECX));
  /* 10be15bf mov edx, dword ptr [0x10bfde1c] */
  EDX = (r32((uint32_t)(0x10bfde1c)));
  /* 10be15c5 push edx */
  push32((uint32_t)(EDX));
  /* 10be15c6 call 0x10bd6050 */
  push32(0x10be15cbu); f_10bd6050();
  /* 10be15cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be15ce mov eax, dword ptr [0x10bfde1c] */
  EAX = (r32((uint32_t)(0x10bfde1c)));
  /* 10be15d3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10be15d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be15da add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be15dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be15e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be15e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be15e6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be15e9 jne 0x10be15fd */
  if (!C.zf) goto L_10be15fd;
  /* 10be15eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be15ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be15f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be15f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be15f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be15fa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10be15fd:;
  /* 10be15fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1600 push eax */
  push32((uint32_t)(EAX));
  /* 10be1601 call 0x10be10e0 */
  push32(0x10be1606u); f_10be10e0();
  /* 10be1606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1609 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be160f mov dword ptr [0x10bfdd90], eax */
  w32((uint32_t)(0x10bfdd90), (EAX));
L_10be1614:;
  /* 10be1614 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1617 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be161a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be161d je 0x10be1635 */
  if (C.zf) goto L_10be1635;
  /* 10be161f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1622 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be1625 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1628 jl 0x10be1640 */
  if ((C.sf!=C.of)) goto L_10be1640;
  /* 10be162a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be162d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be1630 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1633 jg 0x10be1640 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be1640;
L_10be1635:;
  /* 10be1635 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1638 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be163b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be163e jmp 0x10be1614 */
  goto L_10be1614;
L_10be1640:;
  /* 10be1640 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1643 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be1646 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1649 jne 0x10be16e5 */
  if (!C.zf) goto L_10be16e5;
  /* 10be164f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1655 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be1658 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be165b push edx */
  push32((uint32_t)(EDX));
  /* 10be165c call 0x10be10e0 */
  push32(0x10be1661u); f_10be10e0();
  /* 10be1661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1664 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1667 mov ecx, dword ptr [0x10bfdd90] */
  ECX = (r32((uint32_t)(0x10bfdd90)));
  /* 10be166d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be166f mov dword ptr [0x10bfdd90], ecx */
  w32((uint32_t)(0x10bfdd90), (ECX));
L_10be1675:;
  /* 10be1675 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1678 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be167b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be167e jl 0x10be1696 */
  if ((C.sf!=C.of)) goto L_10be1696;
  /* 10be1680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1683 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be1686 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1689 jg 0x10be1696 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be1696;
  /* 10be168b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be168e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1691 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be1694 jmp 0x10be1675 */
  goto L_10be1675;
L_10be1696:;
  /* 10be1696 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1699 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be169c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be169f jne 0x10be16e5 */
  if (!C.zf) goto L_10be16e5;
  /* 10be16a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be16a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be16a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be16aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be16ad push ecx */
  push32((uint32_t)(ECX));
  /* 10be16ae call 0x10be10e0 */
  push32(0x10be16b3u); f_10be10e0();
  /* 10be16b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be16b6 mov edx, dword ptr [0x10bfdd90] */
  EDX = (r32((uint32_t)(0x10bfdd90)));
  /* 10be16bc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be16be mov dword ptr [0x10bfdd90], edx */
  w32((uint32_t)(0x10bfdd90), (EDX));
L_10be16c4:;
  /* 10be16c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be16c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be16ca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be16cd jl 0x10be16e5 */
  if ((C.sf!=C.of)) goto L_10be16e5;
  /* 10be16cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be16d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10be16d5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be16d8 jg 0x10be16e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be16e5;
  /* 10be16da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be16dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be16e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be16e3 jmp 0x10be16c4 */
  goto L_10be16c4;
L_10be16e5:;
  /* 10be16e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be16e9 je 0x10be16f9 */
  if (C.zf) goto L_10be16f9;
  /* 10be16eb mov edx, dword ptr [0x10bfdd90] */
  EDX = (r32((uint32_t)(0x10bfdd90)));
  /* 10be16f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be16f3 mov dword ptr [0x10bfdd90], edx */
  w32((uint32_t)(0x10bfdd90), (EDX));
L_10be16f9:;
  /* 10be16f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be16fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10be16ff mov dword ptr [0x10bfdd94], ecx */
  w32((uint32_t)(0x10bfdd94), (ECX));
  /* 10be1705 cmp dword ptr [0x10bfdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be170c je 0x10be172e */
  if (C.zf) goto L_10be172e;
  /* 10be170e push 3 */
  push32((uint32_t)(0x3u));
  /* 10be1710 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1713 push edx */
  push32((uint32_t)(EDX));
  /* 10be1714 mov eax, dword ptr [0x10bfde20] */
  EAX = (r32((uint32_t)(0x10bfde20)));
  /* 10be1719 push eax */
  push32((uint32_t)(EAX));
  /* 10be171a call 0x10bd6050 */
  push32(0x10be171fu); f_10bd6050();
  /* 10be171f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1722 mov ecx, dword ptr [0x10bfde20] */
  ECX = (r32((uint32_t)(0x10bfde20)));
  /* 10be1728 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10be172c jmp 0x10be1737 */
  goto L_10be1737;
L_10be172e:;
  /* 10be172e mov edx, dword ptr [0x10bfde20] */
  EDX = (r32((uint32_t)(0x10bfde20)));
  /* 10be1734 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10be1737:;
  /* 10be1737 mov esp, ebp */
  ESP = (EBP);
  /* 10be1739 pop ebp */
  EBP = (pop32());
  /* 10be173a ret  */
  ESPCHK(0x10be1390u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x10be1740 (46 bytes, 18 insns) */
void f_10be1740(void) {
  FTRACE(0x10be1740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1740 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1741 mov ebp, esp */
  EBP = (ESP);
  /* 10be1743 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1744 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10be1746 call 0x10bd6230 */
  push32(0x10be174bu); f_10bd6230();
  /* 10be174b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be174e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1751 push eax */
  push32((uint32_t)(EAX));
  /* 10be1752 call 0x10be1770 */
  push32(0x10be1757u); f_10be1770();
  /* 10be1757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be175a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be175d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10be175f call 0x10bd62d0 */
  push32(0x10be1764u); f_10bd62d0();
  /* 10be1764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be176a mov esp, ebp */
  ESP = (EBP);
  /* 10be176c pop ebp */
  EBP = (pop32());
  /* 10be176d ret  */
  ESPCHK(0x10be1740u, _esp0);
  ESP += 4; return;
}

/* FUN_10011770 @ 0x10be1770 (762 bytes, 246 insns) */
void f_10be1770(void) {
  FTRACE(0x10be1770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1770 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1771 mov ebp, esp */
  EBP = (ESP);
  /* 10be1773 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1774 cmp dword ptr [0x10bfdd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfdd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be177b jne 0x10be1784 */
  if (!C.zf) goto L_10be1784;
  /* 10be177d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be177f jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be1784:;
  /* 10be1784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1787 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10be178a cmp ecx, dword ptr [0x10bfde28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfde28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1790 jne 0x10be17a4 */
  if (!C.zf) goto L_10be17a4;
  /* 10be1792 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1795 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10be1798 cmp eax, dword ptr [0x10bfde38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfde38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be179e je 0x10be196b */
  if (C.zf) goto L_10be196b;
L_10be17a4:;
  /* 10be17a4 cmp dword ptr [0x10bfe6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be17ab je 0x10be1925 */
  if (C.zf) goto L_10be1925;
  /* 10be17b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be17b3 mov cx, word ptr [0x10bfe750] */
  CX = (r16((uint32_t)(0x10bfe750)));
  /* 10be17ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be17bc jne 0x10be1819 */
  if (!C.zf) goto L_10be1819;
  /* 10be17be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be17c0 mov dx, word ptr [0x10bfe75e] */
  DX = (r16((uint32_t)(0x10bfe75e)));
  /* 10be17c7 push edx */
  push32((uint32_t)(EDX));
  /* 10be17c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be17ca mov ax, word ptr [0x10bfe75c] */
  AX = (r16((uint32_t)(0x10bfe75c)));
  /* 10be17d0 push eax */
  push32((uint32_t)(EAX));
  /* 10be17d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be17d3 mov cx, word ptr [0x10bfe75a] */
  CX = (r16((uint32_t)(0x10bfe75a)));
  /* 10be17da push ecx */
  push32((uint32_t)(ECX));
  /* 10be17db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be17dd mov dx, word ptr [0x10bfe758] */
  DX = (r16((uint32_t)(0x10bfe758)));
  /* 10be17e4 push edx */
  push32((uint32_t)(EDX));
  /* 10be17e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be17e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be17e9 mov ax, word ptr [0x10bfe754] */
  AX = (r16((uint32_t)(0x10bfe754)));
  /* 10be17ef push eax */
  push32((uint32_t)(EAX));
  /* 10be17f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be17f2 mov cx, word ptr [0x10bfe756] */
  CX = (r16((uint32_t)(0x10bfe756)));
  /* 10be17f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10be17fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be17fc mov dx, word ptr [0x10bfe752] */
  DX = (r16((uint32_t)(0x10bfe752)));
  /* 10be1803 push edx */
  push32((uint32_t)(EDX));
  /* 10be1804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1807 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10be180a push ecx */
  push32((uint32_t)(ECX));
  /* 10be180b push 1 */
  push32((uint32_t)(0x1u));
  /* 10be180d push 1 */
  push32((uint32_t)(0x1u));
  /* 10be180f call 0x10be1a70 */
  push32(0x10be1814u); f_10be1a70();
  /* 10be1814 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1817 jmp 0x10be186a */
  goto L_10be186a;
L_10be1819:;
  /* 10be1819 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be181b mov dx, word ptr [0x10bfe75e] */
  DX = (r16((uint32_t)(0x10bfe75e)));
  /* 10be1822 push edx */
  push32((uint32_t)(EDX));
  /* 10be1823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1825 mov ax, word ptr [0x10bfe75c] */
  AX = (r16((uint32_t)(0x10bfe75c)));
  /* 10be182b push eax */
  push32((uint32_t)(EAX));
  /* 10be182c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be182e mov cx, word ptr [0x10bfe75a] */
  CX = (r16((uint32_t)(0x10bfe75a)));
  /* 10be1835 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1836 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1838 mov dx, word ptr [0x10bfe758] */
  DX = (r16((uint32_t)(0x10bfe758)));
  /* 10be183f push edx */
  push32((uint32_t)(EDX));
  /* 10be1840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1842 mov ax, word ptr [0x10bfe756] */
  AX = (r16((uint32_t)(0x10bfe756)));
  /* 10be1848 push eax */
  push32((uint32_t)(EAX));
  /* 10be1849 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be184b push 0 */
  push32((uint32_t)(0x0u));
  /* 10be184d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be184f mov cx, word ptr [0x10bfe752] */
  CX = (r16((uint32_t)(0x10bfe752)));
  /* 10be1856 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be185a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10be185d push eax */
  push32((uint32_t)(EAX));
  /* 10be185e push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1860 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1862 call 0x10be1a70 */
  push32(0x10be1867u); f_10be1a70();
  /* 10be1867 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be186a:;
  /* 10be186a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be186c mov cx, word ptr [0x10bfe6fc] */
  CX = (r16((uint32_t)(0x10bfe6fc)));
  /* 10be1873 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be1875 jne 0x10be18d2 */
  if (!C.zf) goto L_10be18d2;
  /* 10be1877 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1879 mov dx, word ptr [0x10bfe70a] */
  DX = (r16((uint32_t)(0x10bfe70a)));
  /* 10be1880 push edx */
  push32((uint32_t)(EDX));
  /* 10be1881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1883 mov ax, word ptr [0x10bfe708] */
  AX = (r16((uint32_t)(0x10bfe708)));
  /* 10be1889 push eax */
  push32((uint32_t)(EAX));
  /* 10be188a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be188c mov cx, word ptr [0x10bfe706] */
  CX = (r16((uint32_t)(0x10bfe706)));
  /* 10be1893 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be1896 mov dx, word ptr [0x10bfe704] */
  DX = (r16((uint32_t)(0x10bfe704)));
  /* 10be189d push edx */
  push32((uint32_t)(EDX));
  /* 10be189e push 0 */
  push32((uint32_t)(0x0u));
  /* 10be18a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be18a2 mov ax, word ptr [0x10bfe700] */
  AX = (r16((uint32_t)(0x10bfe700)));
  /* 10be18a8 push eax */
  push32((uint32_t)(EAX));
  /* 10be18a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be18ab mov cx, word ptr [0x10bfe702] */
  CX = (r16((uint32_t)(0x10bfe702)));
  /* 10be18b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10be18b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be18b5 mov dx, word ptr [0x10bfe6fe] */
  DX = (r16((uint32_t)(0x10bfe6fe)));
  /* 10be18bc push edx */
  push32((uint32_t)(EDX));
  /* 10be18bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be18c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10be18c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be18c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be18c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be18c8 call 0x10be1a70 */
  push32(0x10be18cdu); f_10be1a70();
  /* 10be18cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be18d0 jmp 0x10be1923 */
  goto L_10be1923;
L_10be18d2:;
  /* 10be18d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be18d4 mov dx, word ptr [0x10bfe70a] */
  DX = (r16((uint32_t)(0x10bfe70a)));
  /* 10be18db push edx */
  push32((uint32_t)(EDX));
  /* 10be18dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be18de mov ax, word ptr [0x10bfe708] */
  AX = (r16((uint32_t)(0x10bfe708)));
  /* 10be18e4 push eax */
  push32((uint32_t)(EAX));
  /* 10be18e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be18e7 mov cx, word ptr [0x10bfe706] */
  CX = (r16((uint32_t)(0x10bfe706)));
  /* 10be18ee push ecx */
  push32((uint32_t)(ECX));
  /* 10be18ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be18f1 mov dx, word ptr [0x10bfe704] */
  DX = (r16((uint32_t)(0x10bfe704)));
  /* 10be18f8 push edx */
  push32((uint32_t)(EDX));
  /* 10be18f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be18fb mov ax, word ptr [0x10bfe702] */
  AX = (r16((uint32_t)(0x10bfe702)));
  /* 10be1901 push eax */
  push32((uint32_t)(EAX));
  /* 10be1902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1906 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be1908 mov cx, word ptr [0x10bfe6fe] */
  CX = (r16((uint32_t)(0x10bfe6fe)));
  /* 10be190f push ecx */
  push32((uint32_t)(ECX));
  /* 10be1910 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1913 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10be1916 push eax */
  push32((uint32_t)(EAX));
  /* 10be1917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1919 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be191b call 0x10be1a70 */
  push32(0x10be1920u); f_10be1a70();
  /* 10be1920 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be1923:;
  /* 10be1923 jmp 0x10be196b */
  goto L_10be196b;
L_10be1925:;
  /* 10be1925 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1929 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be192b push 2 */
  push32((uint32_t)(0x2u));
  /* 10be192d push 0 */
  push32((uint32_t)(0x0u));
  /* 10be192f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1933 push 4 */
  push32((uint32_t)(0x4u));
  /* 10be1935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1938 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10be193b push edx */
  push32((uint32_t)(EDX));
  /* 10be193c push 1 */
  push32((uint32_t)(0x1u));
  /* 10be193e push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1940 call 0x10be1a70 */
  push32(0x10be1945u); f_10be1a70();
  /* 10be1945 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1948 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be194a push 0 */
  push32((uint32_t)(0x0u));
  /* 10be194c push 0 */
  push32((uint32_t)(0x0u));
  /* 10be194e push 2 */
  push32((uint32_t)(0x2u));
  /* 10be1950 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1952 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1954 push 5 */
  push32((uint32_t)(0x5u));
  /* 10be1956 push 0xa */
  push32((uint32_t)(0xau));
  /* 10be1958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be195b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10be195e push ecx */
  push32((uint32_t)(ECX));
  /* 10be195f push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1961 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1963 call 0x10be1a70 */
  push32(0x10be1968u); f_10be1a70();
  /* 10be1968 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be196b:;
  /* 10be196b mov edx, dword ptr [0x10bfde2c] */
  EDX = (r32((uint32_t)(0x10bfde2c)));
  /* 10be1971 cmp edx, dword ptr [0x10bfde3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1977 jge 0x10be19c4 */
  if ((C.sf==C.of)) goto L_10be19c4;
  /* 10be1979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be197c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10be197f cmp ecx, dword ptr [0x10bfde2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1985 jl 0x10be1995 */
  if ((C.sf!=C.of)) goto L_10be1995;
  /* 10be1987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be198a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10be198d cmp eax, dword ptr [0x10bfde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1993 jle 0x10be199c */
  if ((C.zf||C.sf!=C.of)) goto L_10be199c;
L_10be1995:;
  /* 10be1995 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1997 jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be199c:;
  /* 10be199c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be199f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10be19a2 cmp edx, dword ptr [0x10bfde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be19a8 jle 0x10be19c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10be19c2;
  /* 10be19aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be19ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10be19b0 cmp ecx, dword ptr [0x10bfde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be19b6 jge 0x10be19c2 */
  if ((C.sf==C.of)) goto L_10be19c2;
  /* 10be19b8 mov eax, 1 */
  EAX = (0x1u);
  /* 10be19bd jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be19c2:;
  /* 10be19c2 jmp 0x10be1a07 */
  goto L_10be1a07;
L_10be19c4:;
  /* 10be19c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be19c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10be19ca cmp eax, dword ptr [0x10bfde3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be19d0 jl 0x10be19e0 */
  if ((C.sf!=C.of)) goto L_10be19e0;
  /* 10be19d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be19d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10be19d8 cmp edx, dword ptr [0x10bfde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be19de jle 0x10be19e7 */
  if ((C.zf||C.sf!=C.of)) goto L_10be19e7;
L_10be19e0:;
  /* 10be19e0 mov eax, 1 */
  EAX = (0x1u);
  /* 10be19e5 jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be19e7:;
  /* 10be19e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be19ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10be19ed cmp ecx, dword ptr [0x10bfde3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfde3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be19f3 jle 0x10be1a07 */
  if ((C.zf||C.sf!=C.of)) goto L_10be1a07;
  /* 10be19f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be19f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10be19fb cmp eax, dword ptr [0x10bfde2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1a01 jge 0x10be1a07 */
  if ((C.sf==C.of)) goto L_10be1a07;
  /* 10be1a03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1a05 jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be1a07:;
  /* 10be1a07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1a0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10be1a0d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1a10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1a13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be1a15 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1a1a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10be1a1d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1a23 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1a25 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1a2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be1a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1a31 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10be1a34 cmp edx, dword ptr [0x10bfde2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfde2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1a3a jne 0x10be1a52 */
  if (!C.zf) goto L_10be1a52;
  /* 10be1a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be1a3f cmp eax, dword ptr [0x10bfde30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfde30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1a45 jl 0x10be1a4e */
  if ((C.sf!=C.of)) goto L_10be1a4e;
  /* 10be1a47 mov eax, 1 */
  EAX = (0x1u);
  /* 10be1a4c jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be1a4e:;
  /* 10be1a4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1a50 jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be1a52:;
  /* 10be1a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be1a55 cmp ecx, dword ptr [0x10bfde40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfde40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1a5b jge 0x10be1a64 */
  if ((C.sf==C.of)) goto L_10be1a64;
  /* 10be1a5d mov eax, 1 */
  EAX = (0x1u);
  /* 10be1a62 jmp 0x10be1a66 */
  goto L_10be1a66;
L_10be1a64:;
  /* 10be1a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be1a66:;
  /* 10be1a66 mov esp, ebp */
  ESP = (EBP);
  /* 10be1a68 pop ebp */
  EBP = (pop32());
  /* 10be1a69 ret  */
  ESPCHK(0x10be1770u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x10be1a70 (504 bytes, 145 insns) */
void f_10be1a70(void) {
  FTRACE(0x10be1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1a71 mov ebp, esp */
  EBP = (ESP);
  /* 10be1a73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1a76 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1a7a jne 0x10be1b4c */
  if (!C.zf) goto L_10be1b4c;
  /* 10be1a80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1a83 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10be1a86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1a88 jne 0x10be1a99 */
  if (!C.zf) goto L_10be1a99;
  /* 10be1a8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1a8d mov edx, dword ptr [ecx*4 + 0x10bfde4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfde4c)));
  /* 10be1a94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10be1a97 jmp 0x10be1aa6 */
  goto L_10be1aa6;
L_10be1a99:;
  /* 10be1a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1a9c mov ecx, dword ptr [eax*4 + 0x10bfde80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfde80)));
  /* 10be1aa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10be1aa6:;
  /* 10be1aa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be1aa9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1aac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10be1aaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1ab2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1ab5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1abb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1abe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1ac0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1ac3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1ac6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10be1ac9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10be1acd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10be1ace mov ecx, 7 */
  ECX = (0x7u);
  /* 10be1ad3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10be1ad5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be1ad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be1adb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1ade jge 0x10be1af9 */
  if ((C.sf==C.of)) goto L_10be1af9;
  /* 10be1ae0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be1ae3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1ae6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be1ae9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1aec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1aef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1af2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1af4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10be1af7 jmp 0x10be1b0d */
  goto L_10be1b0d;
L_10be1af9:;
  /* 10be1af9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be1afc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1aff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be1b02 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1b05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1b08 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1b0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10be1b0d:;
  /* 10be1b0d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1b11 jne 0x10be1b4a */
  if (!C.zf) goto L_10be1b4a;
  /* 10be1b13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1b16 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10be1b19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be1b1b jne 0x10be1b2c */
  if (!C.zf) goto L_10be1b2c;
  /* 10be1b1d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1b20 mov eax, dword ptr [edx*4 + 0x10bfde50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bfde50)));
  /* 10be1b27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10be1b2a jmp 0x10be1b39 */
  goto L_10be1b39;
L_10be1b2c:;
  /* 10be1b2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1b2f mov edx, dword ptr [ecx*4 + 0x10bfde84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfde84)));
  /* 10be1b36 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10be1b39:;
  /* 10be1b39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1b3c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1b3f jle 0x10be1b4a */
  if ((C.zf||C.sf!=C.of)) goto L_10be1b4a;
  /* 10be1b41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1b44 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1b47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10be1b4a:;
  /* 10be1b4a jmp 0x10be1b81 */
  goto L_10be1b81;
L_10be1b4c:;
  /* 10be1b4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1b4f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10be1b52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be1b54 jne 0x10be1b65 */
  if (!C.zf) goto L_10be1b65;
  /* 10be1b56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1b59 mov ecx, dword ptr [eax*4 + 0x10bfde4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfde4c)));
  /* 10be1b60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10be1b63 jmp 0x10be1b72 */
  goto L_10be1b72;
L_10be1b65:;
  /* 10be1b65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1b68 mov eax, dword ptr [edx*4 + 0x10bfde80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bfde80)));
  /* 10be1b6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10be1b72:;
  /* 10be1b72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10be1b75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10be1b78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1b7b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1b7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10be1b81:;
  /* 10be1b81 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1b85 jne 0x10be1bc1 */
  if (!C.zf) goto L_10be1bc1;
  /* 10be1b87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1b8a mov dword ptr [0x10bfde2c], eax */
  w32((uint32_t)(0x10bfde2c), (EAX));
  /* 10be1b8f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10be1b92 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1b95 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10be1b98 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1b9a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1b9d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10be1ba0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1ba2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1ba8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10be1bab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1bad mov dword ptr [0x10bfde30], ecx */
  w32((uint32_t)(0x10bfde30), (ECX));
  /* 10be1bb3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1bb6 mov dword ptr [0x10bfde28], edx */
  w32((uint32_t)(0x10bfde28), (EDX));
  /* 10be1bbc jmp 0x10be1c64 */
  goto L_10be1c64;
L_10be1bc1:;
  /* 10be1bc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be1bc4 mov dword ptr [0x10bfde3c], eax */
  w32((uint32_t)(0x10bfde3c), (EAX));
  /* 10be1bc9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10be1bcc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1bcf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10be1bd2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1bd4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1bd7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10be1bda add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1bdc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1be2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10be1be5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1be7 mov dword ptr [0x10bfde40], ecx */
  w32((uint32_t)(0x10bfde40), (ECX));
  /* 10be1bed mov edx, dword ptr [0x10bfdd98] */
  EDX = (r32((uint32_t)(0x10bfdd98)));
  /* 10be1bf3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10be1bf9 mov eax, dword ptr [0x10bfde40] */
  EAX = (r32((uint32_t)(0x10bfde40)));
  /* 10be1bfe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1c00 mov dword ptr [0x10bfde40], eax */
  w32((uint32_t)(0x10bfde40), (EAX));
  /* 10be1c05 cmp dword ptr [0x10bfde40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfde40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1c0c jge 0x10be1c31 */
  if ((C.sf==C.of)) goto L_10be1c31;
  /* 10be1c0e mov ecx, dword ptr [0x10bfde40] */
  ECX = (r32((uint32_t)(0x10bfde40)));
  /* 10be1c14 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1c1a mov dword ptr [0x10bfde40], ecx */
  w32((uint32_t)(0x10bfde40), (ECX));
  /* 10be1c20 mov edx, dword ptr [0x10bfde3c] */
  EDX = (r32((uint32_t)(0x10bfde3c)));
  /* 10be1c26 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1c29 mov dword ptr [0x10bfde3c], edx */
  w32((uint32_t)(0x10bfde3c), (EDX));
  /* 10be1c2f jmp 0x10be1c5b */
  goto L_10be1c5b;
L_10be1c31:;
  /* 10be1c31 cmp dword ptr [0x10bfde40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10bfde40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1c3b jl 0x10be1c5b */
  if ((C.sf!=C.of)) goto L_10be1c5b;
  /* 10be1c3d mov eax, dword ptr [0x10bfde40] */
  EAX = (r32((uint32_t)(0x10bfde40)));
  /* 10be1c42 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be1c47 mov dword ptr [0x10bfde40], eax */
  w32((uint32_t)(0x10bfde40), (EAX));
  /* 10be1c4c mov ecx, dword ptr [0x10bfde3c] */
  ECX = (r32((uint32_t)(0x10bfde3c)));
  /* 10be1c52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1c55 mov dword ptr [0x10bfde3c], ecx */
  w32((uint32_t)(0x10bfde3c), (ECX));
L_10be1c5b:;
  /* 10be1c5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1c5e mov dword ptr [0x10bfde38], edx */
  w32((uint32_t)(0x10bfde38), (EDX));
L_10be1c64:;
  /* 10be1c64 mov esp, ebp */
  ESP = (EBP);
  /* 10be1c66 pop ebp */
  EBP = (pop32());
  /* 10be1c67 ret  */
  ESPCHK(0x10be1a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c70 @ 0x10be1c70 (382 bytes, 135 insns) */
void f_10be1c70(void) {
  FTRACE(0x10be1c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1c71 mov ebp, esp */
  EBP = (ESP);
  /* 10be1c73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1c75 push 0x10bfa870 */
  push32((uint32_t)(0x10bfa870u));
  /* 10be1c7a push 0x10bdb938 */
  push32((uint32_t)(0x10bdb938u));
  /* 10be1c7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10be1c85 push eax */
  push32((uint32_t)(EAX));
  /* 10be1c86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10be1c8d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1c90 push ebx */
  push32((uint32_t)(EBX));
  /* 10be1c91 push esi */
  push32((uint32_t)(ESI));
  /* 10be1c92 push edi */
  push32((uint32_t)(EDI));
  /* 10be1c93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be1c96 cmp dword ptr [0x10bfe76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1c9d jne 0x10be1ce2 */
  if (!C.zf) goto L_10be1ce2;
  /* 10be1c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1ca7 call dword ptr [0x10c00224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00224))), 0x10be1cadu);
  /* 10be1cad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1caf je 0x10be1cbd */
  if (C.zf) goto L_10be1cbd;
  /* 10be1cb1 mov dword ptr [0x10bfe76c], 1 */
  w32((uint32_t)(0x10bfe76c), (0x1u));
  /* 10be1cbb jmp 0x10be1ce2 */
  goto L_10be1ce2;
L_10be1cbd:;
  /* 10be1cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1cc5 call dword ptr [0x10c0032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0032c))), 0x10be1ccbu);
  /* 10be1ccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1ccd je 0x10be1cdb */
  if (C.zf) goto L_10be1cdb;
  /* 10be1ccf mov dword ptr [0x10bfe76c], 2 */
  w32((uint32_t)(0x10bfe76c), (0x2u));
  /* 10be1cd9 jmp 0x10be1ce2 */
  goto L_10be1ce2;
L_10be1cdb:;
  /* 10be1cdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1cdd jmp 0x10be1df1 */
  goto L_10be1df1;
L_10be1ce2:;
  /* 10be1ce2 cmp dword ptr [0x10bfe76c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe76c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1ce9 jne 0x10be1d06 */
  if (!C.zf) goto L_10be1d06;
  /* 10be1ceb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1cee push eax */
  push32((uint32_t)(EAX));
  /* 10be1cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1cf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be1cf6 push edx */
  push32((uint32_t)(EDX));
  /* 10be1cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1cfa push eax */
  push32((uint32_t)(EAX));
  /* 10be1cfb call dword ptr [0x10c00224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00224))), 0x10be1d01u);
  /* 10be1d01 jmp 0x10be1df1 */
  goto L_10be1df1;
L_10be1d06:;
  /* 10be1d06 cmp dword ptr [0x10bfe76c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe76c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1d0d jne 0x10be1def */
  if (!C.zf) goto L_10be1def;
  /* 10be1d13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1d17 jne 0x10be1d22 */
  if (!C.zf) goto L_10be1d22;
  /* 10be1d19 mov ecx, dword ptr [0x10bfe620] */
  ECX = (r32((uint32_t)(0x10bfe620)));
  /* 10be1d1f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10be1d22:;
  /* 10be1d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1d26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be1d29 push edx */
  push32((uint32_t)(EDX));
  /* 10be1d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1d2d push eax */
  push32((uint32_t)(EAX));
  /* 10be1d2e call dword ptr [0x10c0032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0032c))), 0x10be1d34u);
  /* 10be1d34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10be1d37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1d3b jne 0x10be1d44 */
  if (!C.zf) goto L_10be1d44;
  /* 10be1d3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1d3f jmp 0x10be1df1 */
  goto L_10be1df1;
L_10be1d44:;
  /* 10be1d44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be1d4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be1d4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1d51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10be1d53 call 0x10bd59d0 */
  push32(0x10be1d58u); f_10bd59d0();
  /* 10be1d58 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10be1d5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be1d5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be1d61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10be1d64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10be1d6b jmp 0x10be1d84 */
  goto L_10be1d84;
  /* 10be1d6d mov eax, 1 */
  EAX = (0x1u);
  /* 10be1d72 ret  */
  ESPCHK(0x10be1c70u, _esp0);
  ESP += 4; return;
  /* 10be1d73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10be1d76 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10be1d7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10be1d84:;
  /* 10be1d84 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1d88 jne 0x10be1d8e */
  if (!C.zf) goto L_10be1d8e;
  /* 10be1d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1d8c jmp 0x10be1df1 */
  goto L_10be1df1;
L_10be1d8e:;
  /* 10be1d8e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be1d91 push edx */
  push32((uint32_t)(EDX));
  /* 10be1d92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be1d95 push eax */
  push32((uint32_t)(EAX));
  /* 10be1d96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be1d99 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1d9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1d9d push edx */
  push32((uint32_t)(EDX));
  /* 10be1d9e call dword ptr [0x10c0032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0032c))), 0x10be1da4u);
  /* 10be1da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1da6 jne 0x10be1dac */
  if (!C.zf) goto L_10be1dac;
  /* 10be1da8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1daa jmp 0x10be1df1 */
  goto L_10be1df1;
L_10be1dac:;
  /* 10be1dac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1db0 jne 0x10be1dcd */
  if (!C.zf) goto L_10be1dcd;
  /* 10be1db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1db6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1db8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be1dbb push eax */
  push32((uint32_t)(EAX));
  /* 10be1dbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1dbe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be1dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1dc2 call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10be1dc8u);
  /* 10be1dc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10be1dcb jmp 0x10be1dea */
  goto L_10be1dea;
L_10be1dcd:;
  /* 10be1dcd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1dd0 push edx */
  push32((uint32_t)(EDX));
  /* 10be1dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10be1dd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1dd7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be1dda push ecx */
  push32((uint32_t)(ECX));
  /* 10be1ddb push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1ddd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be1de0 push edx */
  push32((uint32_t)(EDX));
  /* 10be1de1 call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10be1de7u);
  /* 10be1de7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10be1dea:;
  /* 10be1dea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be1ded jmp 0x10be1df1 */
  goto L_10be1df1;
L_10be1def:;
  /* 10be1def xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be1df1:;
  /* 10be1df1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10be1df4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be1df7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10be1dfe pop edi */
  EDI = (pop32());
  /* 10be1dff pop esi */
  ESI = (pop32());
  /* 10be1e00 pop ebx */
  EBX = (pop32());
  /* 10be1e01 mov esp, ebp */
  ESP = (EBP);
  /* 10be1e03 pop ebp */
  EBP = (pop32());
  /* 10be1e04 ret  */
  ESPCHK(0x10be1c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x10be1e10 (398 bytes, 140 insns) */
void f_10be1e10(void) {
  FTRACE(0x10be1e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1e11 mov ebp, esp */
  EBP = (ESP);
  /* 10be1e13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1e15 push 0x10bfa880 */
  push32((uint32_t)(0x10bfa880u));
  /* 10be1e1a push 0x10bdb938 */
  push32((uint32_t)(0x10bdb938u));
  /* 10be1e1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10be1e25 push eax */
  push32((uint32_t)(EAX));
  /* 10be1e26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10be1e2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1e30 push ebx */
  push32((uint32_t)(EBX));
  /* 10be1e31 push esi */
  push32((uint32_t)(ESI));
  /* 10be1e32 push edi */
  push32((uint32_t)(EDI));
  /* 10be1e33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be1e36 cmp dword ptr [0x10bfe770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1e3d jne 0x10be1e82 */
  if (!C.zf) goto L_10be1e82;
  /* 10be1e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1e47 call dword ptr [0x10c00224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00224))), 0x10be1e4du);
  /* 10be1e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1e4f je 0x10be1e5d */
  if (C.zf) goto L_10be1e5d;
  /* 10be1e51 mov dword ptr [0x10bfe770], 1 */
  w32((uint32_t)(0x10bfe770), (0x1u));
  /* 10be1e5b jmp 0x10be1e82 */
  goto L_10be1e82;
L_10be1e5d:;
  /* 10be1e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1e61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be1e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1e65 call dword ptr [0x10c0032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0032c))), 0x10be1e6bu);
  /* 10be1e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1e6d je 0x10be1e7b */
  if (C.zf) goto L_10be1e7b;
  /* 10be1e6f mov dword ptr [0x10bfe770], 2 */
  w32((uint32_t)(0x10bfe770), (0x2u));
  /* 10be1e79 jmp 0x10be1e82 */
  goto L_10be1e82;
L_10be1e7b:;
  /* 10be1e7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1e7d jmp 0x10be1fa1 */
  goto L_10be1fa1;
L_10be1e82:;
  /* 10be1e82 cmp dword ptr [0x10bfe770], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe770))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1e89 jne 0x10be1ea6 */
  if (!C.zf) goto L_10be1ea6;
  /* 10be1e8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1e8e push eax */
  push32((uint32_t)(EAX));
  /* 10be1e8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1e92 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be1e96 push edx */
  push32((uint32_t)(EDX));
  /* 10be1e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1e9a push eax */
  push32((uint32_t)(EAX));
  /* 10be1e9b call dword ptr [0x10c0032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0032c))), 0x10be1ea1u);
  /* 10be1ea1 jmp 0x10be1fa1 */
  goto L_10be1fa1;
L_10be1ea6:;
  /* 10be1ea6 cmp dword ptr [0x10bfe770], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe770))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1ead jne 0x10be1f9f */
  if (!C.zf) goto L_10be1f9f;
  /* 10be1eb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1eb7 jne 0x10be1ec2 */
  if (!C.zf) goto L_10be1ec2;
  /* 10be1eb9 mov ecx, dword ptr [0x10bfe620] */
  ECX = (r32((uint32_t)(0x10bfe620)));
  /* 10be1ebf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10be1ec2:;
  /* 10be1ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1ec6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be1ec9 push edx */
  push32((uint32_t)(EDX));
  /* 10be1eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1ecd push eax */
  push32((uint32_t)(EAX));
  /* 10be1ece call dword ptr [0x10c00224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00224))), 0x10be1ed4u);
  /* 10be1ed4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10be1ed7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1edb jne 0x10be1ee4 */
  if (!C.zf) goto L_10be1ee4;
  /* 10be1edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1edf jmp 0x10be1fa1 */
  goto L_10be1fa1;
L_10be1ee4:;
  /* 10be1ee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be1eeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be1eee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10be1ef0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1ef3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10be1ef5 call 0x10bd59d0 */
  push32(0x10be1efau); f_10bd59d0();
  /* 10be1efa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10be1efd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be1f00 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be1f03 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10be1f06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10be1f0d jmp 0x10be1f26 */
  goto L_10be1f26;
  /* 10be1f0f mov eax, 1 */
  EAX = (0x1u);
  /* 10be1f14 ret  */
  ESPCHK(0x10be1e10u, _esp0);
  ESP += 4; return;
  /* 10be1f15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10be1f18 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10be1f1f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10be1f26:;
  /* 10be1f26 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1f2a jne 0x10be1f30 */
  if (!C.zf) goto L_10be1f30;
  /* 10be1f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1f2e jmp 0x10be1fa1 */
  goto L_10be1fa1;
L_10be1f30:;
  /* 10be1f30 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be1f33 push edx */
  push32((uint32_t)(EDX));
  /* 10be1f34 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be1f37 push eax */
  push32((uint32_t)(EAX));
  /* 10be1f38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be1f3b push ecx */
  push32((uint32_t)(ECX));
  /* 10be1f3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1f3f push edx */
  push32((uint32_t)(EDX));
  /* 10be1f40 call dword ptr [0x10c00224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00224))), 0x10be1f46u);
  /* 10be1f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be1f48 jne 0x10be1f4e */
  if (!C.zf) goto L_10be1f4e;
  /* 10be1f4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be1f4c jmp 0x10be1fa1 */
  goto L_10be1fa1;
L_10be1f4e:;
  /* 10be1f4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1f52 jne 0x10be1f76 */
  if (!C.zf) goto L_10be1f76;
  /* 10be1f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1f5c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1f5e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be1f61 push eax */
  push32((uint32_t)(EAX));
  /* 10be1f62 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10be1f67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be1f6a push ecx */
  push32((uint32_t)(ECX));
  /* 10be1f6b call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be1f71u);
  /* 10be1f71 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10be1f74 jmp 0x10be1f9a */
  goto L_10be1f9a;
L_10be1f76:;
  /* 10be1f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be1f7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be1f7d push edx */
  push32((uint32_t)(EDX));
  /* 10be1f7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be1f81 push eax */
  push32((uint32_t)(EAX));
  /* 10be1f82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be1f84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be1f87 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1f88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10be1f8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be1f90 push edx */
  push32((uint32_t)(EDX));
  /* 10be1f91 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be1f97u);
  /* 10be1f97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10be1f9a:;
  /* 10be1f9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be1f9d jmp 0x10be1fa1 */
  goto L_10be1fa1;
L_10be1f9f:;
  /* 10be1f9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be1fa1:;
  /* 10be1fa1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10be1fa4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be1fa7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10be1fae pop edi */
  EDI = (pop32());
  /* 10be1faf pop esi */
  ESI = (pop32());
  /* 10be1fb0 pop ebx */
  EBX = (pop32());
  /* 10be1fb1 mov esp, ebp */
  ESP = (EBP);
  /* 10be1fb3 pop ebp */
  EBP = (pop32());
  /* 10be1fb4 ret  */
  ESPCHK(0x10be1e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x10be1fc0 (11 bytes, 6 insns) */
void f_10be1fc0(void) {
  FTRACE(0x10be1fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10be1fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1fc6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1fc9 pop ebp */
  EBP = (pop32());
  /* 10be1fca ret  */
  ESPCHK(0x10be1fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fd0 @ 0x10be1fd0 (147 bytes, 43 insns) */
void f_10be1fd0(void) {
  FTRACE(0x10be1fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be1fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be1fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10be1fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be1fd4 cmp dword ptr [0x10bfe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1fdb jne 0x10be1ff7 */
  if (!C.zf) goto L_10be1ff7;
  /* 10be1fdd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1fe1 jl 0x10be1ff2 */
  if ((C.sf!=C.of)) goto L_10be1ff2;
  /* 10be1fe3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be1fe7 jg 0x10be1ff2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be1ff2;
  /* 10be1fe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1fec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be1fef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10be1ff2:;
  /* 10be1ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be1ff5 jmp 0x10be205f */
  goto L_10be205f;
L_10be1ff7:;
  /* 10be1ff7 push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10be1ffc call dword ptr [0x10c0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0025c))), 0x10be2002u);
  /* 10be2002 cmp dword ptr [0x10bfe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2009 je 0x10be2029 */
  if (C.zf) goto L_10be2029;
  /* 10be200b push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10be2010 call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10be2016u);
  /* 10be2016 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10be2018 call 0x10bd6230 */
  push32(0x10be201du); f_10bd6230();
  /* 10be201d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2020 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10be2027 jmp 0x10be2030 */
  goto L_10be2030;
L_10be2029:;
  /* 10be2029 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10be2030:;
  /* 10be2030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2033 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2034 call 0x10be2070 */
  push32(0x10be2039u); f_10be2070();
  /* 10be2039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be203c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10be203f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2043 je 0x10be2051 */
  if (C.zf) goto L_10be2051;
  /* 10be2045 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10be2047 call 0x10bd62d0 */
  push32(0x10be204cu); f_10bd62d0();
  /* 10be204c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be204f jmp 0x10be205c */
  goto L_10be205c;
L_10be2051:;
  /* 10be2051 push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10be2056 call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10be205cu);
L_10be205c:;
  /* 10be205c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10be205f:;
  /* 10be205f mov esp, ebp */
  ESP = (EBP);
  /* 10be2061 pop ebp */
  EBP = (pop32());
  /* 10be2062 ret  */
  ESPCHK(0x10be1fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012070 @ 0x10be2070 (299 bytes, 91 insns) */
void f_10be2070(void) {
  FTRACE(0x10be2070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2070 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2071 mov ebp, esp */
  EBP = (ESP);
  /* 10be2073 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2076 cmp dword ptr [0x10bfe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be207d jne 0x10be209c */
  if (!C.zf) goto L_10be209c;
  /* 10be207f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2083 jl 0x10be2094 */
  if ((C.sf!=C.of)) goto L_10be2094;
  /* 10be2085 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2089 jg 0x10be2094 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be2094;
  /* 10be208b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be208e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2091 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10be2094:;
  /* 10be2094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2097 jmp 0x10be2197 */
  goto L_10be2197;
L_10be209c:;
  /* 10be209c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be20a3 jge 0x10be20e3 */
  if ((C.sf==C.of)) goto L_10be20e3;
  /* 10be20a5 cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be20ac jle 0x10be20c1 */
  if ((C.zf||C.sf!=C.of)) goto L_10be20c1;
  /* 10be20ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10be20b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be20b4 call 0x10bd8840 */
  push32(0x10be20b9u); f_10bd8840();
  /* 10be20b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be20bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10be20bf jmp 0x10be20d5 */
  goto L_10be20d5;
L_10be20c1:;
  /* 10be20c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be20c4 mov eax, dword ptr [0x10bfcc98] */
  EAX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be20c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be20cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10be20cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10be20d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10be20d5:;
  /* 10be20d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be20d9 jne 0x10be20e3 */
  if (!C.zf) goto L_10be20e3;
  /* 10be20db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be20de jmp 0x10be2197 */
  goto L_10be2197;
L_10be20e3:;
  /* 10be20e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be20e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10be20e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10be20ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10be20f5 mov eax, dword ptr [0x10bfcc98] */
  EAX = (r32((uint32_t)(0x10bfcc98)));
  /* 10be20fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be20fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10be2100 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10be2106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be2108 je 0x10be212c */
  if (C.zf) goto L_10be212c;
  /* 10be210a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be210d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10be2110 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10be2116 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10be2119 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10be211c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10be211f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10be2123 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10be212a jmp 0x10be213d */
  goto L_10be213d;
L_10be212c:;
  /* 10be212c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10be212f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10be2132 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10be2136 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10be213d:;
  /* 10be213d push 1 */
  push32((uint32_t)(0x1u));
  /* 10be213f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2141 push 3 */
  push32((uint32_t)(0x3u));
  /* 10be2143 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10be2146 push edx */
  push32((uint32_t)(EDX));
  /* 10be2147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be214a push eax */
  push32((uint32_t)(EAX));
  /* 10be214b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10be214e push ecx */
  push32((uint32_t)(ECX));
  /* 10be214f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10be2154 mov edx, dword ptr [0x10bfe610] */
  EDX = (r32((uint32_t)(0x10bfe610)));
  /* 10be215a push edx */
  push32((uint32_t)(EDX));
  /* 10be215b call 0x10bdac20 */
  push32(0x10be2160u); f_10bdac20();
  /* 10be2160 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2163 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be2166 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be216a jne 0x10be2171 */
  if (!C.zf) goto L_10be2171;
  /* 10be216c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be216f jmp 0x10be2197 */
  goto L_10be2197;
L_10be2171:;
  /* 10be2171 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2175 jne 0x10be2181 */
  if (!C.zf) goto L_10be2181;
  /* 10be2177 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be217a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be217f jmp 0x10be2197 */
  goto L_10be2197;
L_10be2181:;
  /* 10be2181 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2184 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2189 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10be218c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10be2192 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10be2195 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10be2197:;
  /* 10be2197 mov esp, ebp */
  ESP = (EBP);
  /* 10be2199 pop ebp */
  EBP = (pop32());
  /* 10be219a ret  */
  ESPCHK(0x10be2070u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10be21a0 (52 bytes, 19 insns) */
void f_10be21a0(void) {
  FTRACE(0x10be21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be21a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10be21a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10be21a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10be21aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10be21ae jne 0x10be21b9 */
  if (!C.zf) goto L_10be21b9;
  /* 10be21b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10be21b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10be21b6 ret 0x10 */
  ESPCHK(0x10be21a0u, _esp0);
  ESP += 20; return;
L_10be21b9:;
  /* 10be21b9 push ebx */
  push32((uint32_t)(EBX));
  /* 10be21ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10be21bc mov ebx, eax */
  EBX = (EAX);
  /* 10be21be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10be21c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10be21c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be21c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10be21cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10be21ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be21d0 pop ebx */
  EBX = (pop32());
  /* 10be21d1 ret 0x10 */
  ESPCHK(0x10be21a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100121e0 @ 0x10be21e0 (46 bytes, 18 insns) */
void f_10be21e0(void) {
  FTRACE(0x10be21e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be21e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be21e1 mov ebp, esp */
  EBP = (ESP);
  /* 10be21e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be21e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be21e6 call 0x10bd6230 */
  push32(0x10be21ebu); f_10bd6230();
  /* 10be21eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be21ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be21f1 push eax */
  push32((uint32_t)(EAX));
  /* 10be21f2 call 0x10be2210 */
  push32(0x10be21f7u); f_10be2210();
  /* 10be21f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be21fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be21fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10be21ff call 0x10bd62d0 */
  push32(0x10be2204u); f_10bd62d0();
  /* 10be2204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be220a mov esp, ebp */
  ESP = (EBP);
  /* 10be220c pop ebp */
  EBP = (pop32());
  /* 10be220d ret  */
  ESPCHK(0x10be21e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10be2210 (198 bytes, 69 insns) */
void f_10be2210(void) {
  FTRACE(0x10be2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2210 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2211 mov ebp, esp */
  EBP = (ESP);
  /* 10be2213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2216 mov eax, dword ptr [0x10bfe430] */
  EAX = (r32((uint32_t)(0x10bfe430)));
  /* 10be221b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be221e cmp dword ptr [0x10bfff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2225 jne 0x10be222e */
  if (!C.zf) goto L_10be222e;
  /* 10be2227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2229 jmp 0x10be22d2 */
  goto L_10be22d2;
L_10be222e:;
  /* 10be222e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2232 jne 0x10be2256 */
  if (!C.zf) goto L_10be2256;
  /* 10be2234 cmp dword ptr [0x10bfe438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be223b je 0x10be2256 */
  if (C.zf) goto L_10be2256;
  /* 10be223d call 0x10be2330 */
  push32(0x10be2242u); f_10be2330();
  /* 10be2242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be2244 je 0x10be224d */
  if (C.zf) goto L_10be224d;
  /* 10be2246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2248 jmp 0x10be22d2 */
  goto L_10be22d2;
L_10be224d:;
  /* 10be224d mov ecx, dword ptr [0x10bfe430] */
  ECX = (r32((uint32_t)(0x10bfe430)));
  /* 10be2253 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10be2256:;
  /* 10be2256 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be225a je 0x10be22d0 */
  if (C.zf) goto L_10be22d0;
  /* 10be225c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2260 je 0x10be22d0 */
  if (C.zf) goto L_10be22d0;
  /* 10be2262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2265 push edx */
  push32((uint32_t)(EDX));
  /* 10be2266 call 0x10bd5660 */
  push32(0x10be226bu); f_10bd5660();
  /* 10be226b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be226e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10be2271:;
  /* 10be2271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2274 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2277 je 0x10be22d0 */
  if (C.zf) goto L_10be22d0;
  /* 10be2279 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be227c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be227e push edx */
  push32((uint32_t)(EDX));
  /* 10be227f call 0x10bd5660 */
  push32(0x10be2284u); f_10bd5660();
  /* 10be2284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2287 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be228a jbe 0x10be22c5 */
  if ((C.cf||C.zf)) goto L_10be22c5;
  /* 10be228c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be228f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be2291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2294 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10be2298 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be229b jne 0x10be22c5 */
  if (!C.zf) goto L_10be22c5;
  /* 10be229d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be22a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10be22a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be22a4 push edx */
  push32((uint32_t)(EDX));
  /* 10be22a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be22a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be22aa push ecx */
  push32((uint32_t)(ECX));
  /* 10be22ab call 0x10be22e0 */
  push32(0x10be22b0u); f_10be22e0();
  /* 10be22b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be22b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be22b5 jne 0x10be22c5 */
  if (!C.zf) goto L_10be22c5;
  /* 10be22b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be22ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be22bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be22bf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10be22c3 jmp 0x10be22d2 */
  goto L_10be22d2;
L_10be22c5:;
  /* 10be22c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be22c8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be22cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10be22ce jmp 0x10be2271 */
  goto L_10be2271;
L_10be22d0:;
  /* 10be22d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be22d2:;
  /* 10be22d2 mov esp, ebp */
  ESP = (EBP);
  /* 10be22d4 pop ebp */
  EBP = (pop32());
  /* 10be22d5 ret  */
  ESPCHK(0x10be2210u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10be22e0 (79 bytes, 32 insns) */
void f_10be22e0(void) {
  FTRACE(0x10be22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be22e1 mov ebp, esp */
  EBP = (ESP);
  /* 10be22e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10be22e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be22e8 jne 0x10be22ee */
  if (!C.zf) goto L_10be22ee;
  /* 10be22ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be22ec jmp 0x10be232b */
  goto L_10be232b;
L_10be22ee:;
  /* 10be22ee mov eax, dword ptr [0x10bffae4] */
  EAX = (r32((uint32_t)(0x10bffae4)));
  /* 10be22f3 push eax */
  push32((uint32_t)(EAX));
  /* 10be22f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be22f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10be22f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be22fb push edx */
  push32((uint32_t)(EDX));
  /* 10be22fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be22ff push eax */
  push32((uint32_t)(EAX));
  /* 10be2300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2303 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2304 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be2306 mov edx, dword ptr [0x10bffd84] */
  EDX = (r32((uint32_t)(0x10bffd84)));
  /* 10be230c push edx */
  push32((uint32_t)(EDX));
  /* 10be230d call 0x10be23e0 */
  push32(0x10be2312u); f_10be23e0();
  /* 10be2312 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2315 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be2318 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be231c jne 0x10be2325 */
  if (!C.zf) goto L_10be2325;
  /* 10be231e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10be2323 jmp 0x10be232b */
  goto L_10be232b;
L_10be2325:;
  /* 10be2325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2328 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10be232b:;
  /* 10be232b mov esp, ebp */
  ESP = (EBP);
  /* 10be232d pop ebp */
  EBP = (pop32());
  /* 10be232e ret  */
  ESPCHK(0x10be22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012330 @ 0x10be2330 (174 bytes, 66 insns) */
void f_10be2330(void) {
  FTRACE(0x10be2330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2330 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2331 mov ebp, esp */
  EBP = (ESP);
  /* 10be2333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2336 mov eax, dword ptr [0x10bfe438] */
  EAX = (r32((uint32_t)(0x10bfe438)));
  /* 10be233b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10be233e:;
  /* 10be233e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2341 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2344 je 0x10be23d8 */
  if (C.zf) goto L_10be23d8;
  /* 10be234a push 0 */
  push32((uint32_t)(0x0u));
  /* 10be234c push 0 */
  push32((uint32_t)(0x0u));
  /* 10be234e push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2350 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2352 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be2354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2357 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be2359 push eax */
  push32((uint32_t)(EAX));
  /* 10be235a push 0 */
  push32((uint32_t)(0x0u));
  /* 10be235c push 1 */
  push32((uint32_t)(0x1u));
  /* 10be235e call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be2364u);
  /* 10be2364 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be2367 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be236b jne 0x10be2372 */
  if (!C.zf) goto L_10be2372;
  /* 10be236d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2370 jmp 0x10be23da */
  goto L_10be23da;
L_10be2372:;
  /* 10be2372 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10be2374 push 0x10bfa88c */
  push32((uint32_t)(0x10bfa88cu));
  /* 10be2379 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be237b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be237e push ecx */
  push32((uint32_t)(ECX));
  /* 10be237f call 0x10bd2830 */
  push32(0x10be2384u); f_10bd2830();
  /* 10be2384 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2387 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be238a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be238e jne 0x10be2395 */
  if (!C.zf) goto L_10be2395;
  /* 10be2390 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2393 jmp 0x10be23da */
  goto L_10be23da;
L_10be2395:;
  /* 10be2395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be239c push edx */
  push32((uint32_t)(EDX));
  /* 10be239d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be23a0 push eax */
  push32((uint32_t)(EAX));
  /* 10be23a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be23a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be23a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be23a8 push edx */
  push32((uint32_t)(EDX));
  /* 10be23a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be23ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10be23ad call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10be23b3u);
  /* 10be23b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be23b5 jne 0x10be23bc */
  if (!C.zf) goto L_10be23bc;
  /* 10be23b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be23ba jmp 0x10be23da */
  goto L_10be23da;
L_10be23bc:;
  /* 10be23bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10be23be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be23c1 push eax */
  push32((uint32_t)(EAX));
  /* 10be23c2 call 0x10be2830 */
  push32(0x10be23c7u); f_10be2830();
  /* 10be23c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be23ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be23cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be23d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be23d3 jmp 0x10be233e */
  goto L_10be233e;
L_10be23d8:;
  /* 10be23d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be23da:;
  /* 10be23da mov esp, ebp */
  ESP = (EBP);
  /* 10be23dc pop ebp */
  EBP = (pop32());
  /* 10be23dd ret  */
  ESPCHK(0x10be2330u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x10be23e0 (970 bytes, 340 insns) */
void f_10be23e0(void) {
  FTRACE(0x10be23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be23e1 mov ebp, esp */
  EBP = (ESP);
  /* 10be23e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10be23e5 push 0x10bfa8e0 */
  push32((uint32_t)(0x10bfa8e0u));
  /* 10be23ea push 0x10bdb938 */
  push32((uint32_t)(0x10bdb938u));
  /* 10be23ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10be23f5 push eax */
  push32((uint32_t)(EAX));
  /* 10be23f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10be23fd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2400 push ebx */
  push32((uint32_t)(EBX));
  /* 10be2401 push esi */
  push32((uint32_t)(ESI));
  /* 10be2402 push edi */
  push32((uint32_t)(EDI));
  /* 10be2403 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be2406 cmp dword ptr [0x10bfe774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be240d jne 0x10be2466 */
  if (!C.zf) goto L_10be2466;
  /* 10be240f push 1 */
  push32((uint32_t)(0x1u));
  /* 10be2411 push 0x10bf9f38 */
  push32((uint32_t)(0x10bf9f38u));
  /* 10be2416 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be2418 push 0x10bf9f38 */
  push32((uint32_t)(0x10bf9f38u));
  /* 10be241d push 0 */
  push32((uint32_t)(0x0u));
  /* 10be241f push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2421 call dword ptr [0x10c00220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00220))), 0x10be2427u);
  /* 10be2427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be2429 je 0x10be2437 */
  if (C.zf) goto L_10be2437;
  /* 10be242b mov dword ptr [0x10bfe774], 1 */
  w32((uint32_t)(0x10bfe774), (0x1u));
  /* 10be2435 jmp 0x10be2466 */
  goto L_10be2466;
L_10be2437:;
  /* 10be2437 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be2439 push 0x10bf9f34 */
  push32((uint32_t)(0x10bf9f34u));
  /* 10be243e push 1 */
  push32((uint32_t)(0x1u));
  /* 10be2440 push 0x10bf9f34 */
  push32((uint32_t)(0x10bf9f34u));
  /* 10be2445 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2447 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2449 call dword ptr [0x10c0022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0022c))), 0x10be244fu);
  /* 10be244f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be2451 je 0x10be245f */
  if (C.zf) goto L_10be245f;
  /* 10be2453 mov dword ptr [0x10bfe774], 2 */
  w32((uint32_t)(0x10bfe774), (0x2u));
  /* 10be245d jmp 0x10be2466 */
  goto L_10be2466;
L_10be245f:;
  /* 10be245f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2461 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2466:;
  /* 10be2466 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be246a jle 0x10be247f */
  if ((C.zf||C.sf!=C.of)) goto L_10be247f;
  /* 10be246c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be246f push eax */
  push32((uint32_t)(EAX));
  /* 10be2470 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be2473 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2474 call 0x10be27e0 */
  push32(0x10be2479u); f_10be27e0();
  /* 10be2479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be247c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10be247f:;
  /* 10be247f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2483 jle 0x10be2498 */
  if ((C.zf||C.sf!=C.of)) goto L_10be2498;
  /* 10be2485 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be2488 push edx */
  push32((uint32_t)(EDX));
  /* 10be2489 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be248c push eax */
  push32((uint32_t)(EAX));
  /* 10be248d call 0x10be27e0 */
  push32(0x10be2492u); f_10be27e0();
  /* 10be2492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2495 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10be2498:;
  /* 10be2498 cmp dword ptr [0x10bfe774], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe774))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be249f jne 0x10be24c4 */
  if (!C.zf) goto L_10be24c4;
  /* 10be24a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be24a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10be24a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be24a8 push edx */
  push32((uint32_t)(EDX));
  /* 10be24a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be24ac push eax */
  push32((uint32_t)(EAX));
  /* 10be24ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be24b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10be24b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be24b4 push edx */
  push32((uint32_t)(EDX));
  /* 10be24b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be24b8 push eax */
  push32((uint32_t)(EAX));
  /* 10be24b9 call dword ptr [0x10c0022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0022c))), 0x10be24bfu);
  /* 10be24bf jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be24c4:;
  /* 10be24c4 cmp dword ptr [0x10bfe774], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe774))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be24cb jne 0x10be27c2 */
  if (!C.zf) goto L_10be27c2;
  /* 10be24d1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be24d5 jne 0x10be24e0 */
  if (!C.zf) goto L_10be24e0;
  /* 10be24d7 mov ecx, dword ptr [0x10bfe620] */
  ECX = (r32((uint32_t)(0x10bfe620)));
  /* 10be24dd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10be24e0:;
  /* 10be24e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be24e4 je 0x10be24f0 */
  if (C.zf) goto L_10be24f0;
  /* 10be24e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be24ea jne 0x10be266c */
  if (!C.zf) goto L_10be266c;
L_10be24f0:;
  /* 10be24f0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be24f3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be24f6 jne 0x10be2502 */
  if (!C.zf) goto L_10be2502;
  /* 10be24f8 mov eax, 2 */
  EAX = (0x2u);
  /* 10be24fd jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2502:;
  /* 10be2502 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2506 jle 0x10be2512 */
  if ((C.zf||C.sf!=C.of)) goto L_10be2512;
  /* 10be2508 mov eax, 1 */
  EAX = (0x1u);
  /* 10be250d jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2512:;
  /* 10be2512 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2516 jle 0x10be2522 */
  if ((C.zf||C.sf!=C.of)) goto L_10be2522;
  /* 10be2518 mov eax, 3 */
  EAX = (0x3u);
  /* 10be251d jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2522:;
  /* 10be2522 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10be2525 push eax */
  push32((uint32_t)(EAX));
  /* 10be2526 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10be2529 push ecx */
  push32((uint32_t)(ECX));
  /* 10be252a call dword ptr [0x10c002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b4))), 0x10be2530u);
  /* 10be2530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be2532 jne 0x10be253b */
  if (!C.zf) goto L_10be253b;
  /* 10be2534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2536 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be253b:;
  /* 10be253b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be253f jne 0x10be2547 */
  if (!C.zf) goto L_10be2547;
  /* 10be2541 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2545 je 0x10be2574 */
  if (C.zf) goto L_10be2574;
L_10be2547:;
  /* 10be2547 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be254b jne 0x10be2553 */
  if (!C.zf) goto L_10be2553;
  /* 10be254d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2551 je 0x10be2574 */
  if (C.zf) goto L_10be2574;
L_10be2553:;
  /* 10be2553 push 0x10bfa8a0 */
  push32((uint32_t)(0x10bfa8a0u));
  /* 10be2558 push 0 */
  push32((uint32_t)(0x0u));
  /* 10be255a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10be255f push 0x10bfa898 */
  push32((uint32_t)(0x10bfa898u));
  /* 10be2564 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2566 call 0x10bd18f0 */
  push32(0x10be256bu); f_10bd18f0();
  /* 10be256b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be256e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2571 jne 0x10be2574 */
  if (!C.zf) goto L_10be2574;
  /* 10be2573 int3  */
  x86_unimpl("int3 @ 0x10be2573");
L_10be2574:;
  /* 10be2574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be2576 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be2578 jne 0x10be253b */
  if (!C.zf) goto L_10be253b;
  /* 10be257a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be257e jle 0x10be25f3 */
  if ((C.zf||C.sf!=C.of)) goto L_10be25f3;
  /* 10be2580 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2584 jae 0x10be2590 */
  if (!C.cf) goto L_10be2590;
  /* 10be2586 mov eax, 3 */
  EAX = (0x3u);
  /* 10be258b jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2590:;
  /* 10be2590 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10be2593 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10be2596 jmp 0x10be25a1 */
  goto L_10be25a1;
L_10be2598:;
  /* 10be2598 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be259b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be259e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10be25a1:;
  /* 10be25a1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be25a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be25a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be25a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be25aa je 0x10be25e9 */
  if (C.zf) goto L_10be25e9;
  /* 10be25ac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be25af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be25b1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10be25b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be25b6 je 0x10be25e9 */
  if (C.zf) goto L_10be25e9;
  /* 10be25b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be25bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be25bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be25bf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be25c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be25c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be25c6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be25c8 jl 0x10be25e7 */
  if ((C.sf!=C.of)) goto L_10be25e7;
  /* 10be25ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be25cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be25cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be25d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be25d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be25d6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10be25d9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be25db jg 0x10be25e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be25e7;
  /* 10be25dd mov eax, 2 */
  EAX = (0x2u);
  /* 10be25e2 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be25e7:;
  /* 10be25e7 jmp 0x10be2598 */
  goto L_10be2598;
L_10be25e9:;
  /* 10be25e9 mov eax, 3 */
  EAX = (0x3u);
  /* 10be25ee jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be25f3:;
  /* 10be25f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be25f7 jle 0x10be266c */
  if ((C.zf||C.sf!=C.of)) goto L_10be266c;
  /* 10be25f9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be25fd jae 0x10be2609 */
  if (!C.cf) goto L_10be2609;
  /* 10be25ff mov eax, 1 */
  EAX = (0x1u);
  /* 10be2604 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2609:;
  /* 10be2609 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10be260c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10be260f jmp 0x10be261a */
  goto L_10be261a;
L_10be2611:;
  /* 10be2611 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be2614 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2617 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10be261a:;
  /* 10be261a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be261d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be261f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be2621 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be2623 je 0x10be2662 */
  if (C.zf) goto L_10be2662;
  /* 10be2625 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be2628 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be262a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10be262d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be262f je 0x10be2662 */
  if (C.zf) goto L_10be2662;
  /* 10be2631 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be2634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2636 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10be2638 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be263b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10be263d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10be263f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2641 jl 0x10be2660 */
  if ((C.sf!=C.of)) goto L_10be2660;
  /* 10be2643 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be2646 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be2648 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be264a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10be264d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be264f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10be2652 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2654 jg 0x10be2660 */
  if ((!C.zf&&C.sf==C.of)) goto L_10be2660;
  /* 10be2656 mov eax, 2 */
  EAX = (0x2u);
  /* 10be265b jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2660:;
  /* 10be2660 jmp 0x10be2611 */
  goto L_10be2611;
L_10be2662:;
  /* 10be2662 mov eax, 1 */
  EAX = (0x1u);
  /* 10be2667 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be266c:;
  /* 10be266c push 0 */
  push32((uint32_t)(0x0u));
  /* 10be266e push 0 */
  push32((uint32_t)(0x0u));
  /* 10be2670 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be2673 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2674 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be2677 push edx */
  push32((uint32_t)(EDX));
  /* 10be2678 push 9 */
  push32((uint32_t)(0x9u));
  /* 10be267a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10be267d push eax */
  push32((uint32_t)(EAX));
  /* 10be267e call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10be2684u);
  /* 10be2684 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10be2687 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be268b jne 0x10be2694 */
  if (!C.zf) goto L_10be2694;
  /* 10be268d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be268f jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2694:;
  /* 10be2694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10be269b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be269e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10be26a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be26a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10be26a5 call 0x10bd59d0 */
  push32(0x10be26aau); f_10bd59d0();
  /* 10be26aa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10be26ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be26b0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10be26b3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10be26b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10be26bd jmp 0x10be26d6 */
  goto L_10be26d6;
  /* 10be26bf mov eax, 1 */
  EAX = (0x1u);
  /* 10be26c4 ret  */
  ESPCHK(0x10be23e0u, _esp0);
  ESP += 4; return;
  /* 10be26c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10be26c8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10be26cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10be26d6:;
  /* 10be26d6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be26da jne 0x10be26e3 */
  if (!C.zf) goto L_10be26e3;
  /* 10be26dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be26de jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be26e3:;
  /* 10be26e3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be26e6 push edx */
  push32((uint32_t)(EDX));
  /* 10be26e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be26ea push eax */
  push32((uint32_t)(EAX));
  /* 10be26eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10be26ee push ecx */
  push32((uint32_t)(ECX));
  /* 10be26ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10be26f2 push edx */
  push32((uint32_t)(EDX));
  /* 10be26f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10be26f5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10be26f8 push eax */
  push32((uint32_t)(EAX));
  /* 10be26f9 call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10be26ffu);
  /* 10be26ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be2701 jne 0x10be270a */
  if (!C.zf) goto L_10be270a;
  /* 10be2703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2705 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be270a:;
  /* 10be270a push 0 */
  push32((uint32_t)(0x0u));
  /* 10be270c push 0 */
  push32((uint32_t)(0x0u));
  /* 10be270e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be2711 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2712 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be2715 push edx */
  push32((uint32_t)(EDX));
  /* 10be2716 push 9 */
  push32((uint32_t)(0x9u));
  /* 10be2718 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10be271b push eax */
  push32((uint32_t)(EAX));
  /* 10be271c call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10be2722u);
  /* 10be2722 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10be2725 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2729 jne 0x10be2732 */
  if (!C.zf) goto L_10be2732;
  /* 10be272b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be272d jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be2732:;
  /* 10be2732 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10be2739 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be273c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10be273e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2741 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10be2743 call 0x10bd59d0 */
  push32(0x10be2748u); f_10bd59d0();
  /* 10be2748 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10be274b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10be274e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10be2751 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10be2754 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10be275b jmp 0x10be2774 */
  goto L_10be2774;
  /* 10be275d mov eax, 1 */
  EAX = (0x1u);
  /* 10be2762 ret  */
  ESPCHK(0x10be23e0u, _esp0);
  ESP += 4; return;
  /* 10be2763 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10be2766 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10be276d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10be2774:;
  /* 10be2774 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2778 jne 0x10be277e */
  if (!C.zf) goto L_10be277e;
  /* 10be277a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be277c jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be277e:;
  /* 10be277e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be2781 push edx */
  push32((uint32_t)(EDX));
  /* 10be2782 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be2785 push eax */
  push32((uint32_t)(EAX));
  /* 10be2786 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10be2789 push ecx */
  push32((uint32_t)(ECX));
  /* 10be278a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10be278d push edx */
  push32((uint32_t)(EDX));
  /* 10be278e push 1 */
  push32((uint32_t)(0x1u));
  /* 10be2790 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10be2793 push eax */
  push32((uint32_t)(EAX));
  /* 10be2794 call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10be279au);
  /* 10be279a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be279c jne 0x10be27a2 */
  if (!C.zf) goto L_10be27a2;
  /* 10be279e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be27a0 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be27a2:;
  /* 10be27a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10be27a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10be27a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10be27a9 push edx */
  push32((uint32_t)(EDX));
  /* 10be27aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10be27ad push eax */
  push32((uint32_t)(EAX));
  /* 10be27ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10be27b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10be27b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be27b5 push edx */
  push32((uint32_t)(EDX));
  /* 10be27b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be27b9 push eax */
  push32((uint32_t)(EAX));
  /* 10be27ba call dword ptr [0x10c00220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00220))), 0x10be27c0u);
  /* 10be27c0 jmp 0x10be27c4 */
  goto L_10be27c4;
L_10be27c2:;
  /* 10be27c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be27c4:;
  /* 10be27c4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10be27c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be27ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10be27d1 pop edi */
  EDI = (pop32());
  /* 10be27d2 pop esi */
  ESI = (pop32());
  /* 10be27d3 pop ebx */
  EBX = (pop32());
  /* 10be27d4 mov esp, ebp */
  ESP = (EBP);
  /* 10be27d6 pop ebp */
  EBP = (pop32());
  /* 10be27d7 ret  */
  ESPCHK(0x10be23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127e0 @ 0x10be27e0 (80 bytes, 32 insns) */
void f_10be27e0(void) {
  FTRACE(0x10be27e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be27e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10be27e1 mov ebp, esp */
  EBP = (ESP);
  /* 10be27e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be27e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be27e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be27ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be27ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10be27f2:;
  /* 10be27f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be27f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be27f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be27fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be27fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be2800 je 0x10be2817 */
  if (C.zf) goto L_10be2817;
  /* 10be2802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2805 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be2808 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be280a je 0x10be2817 */
  if (C.zf) goto L_10be2817;
  /* 10be280c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be280f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be2815 jmp 0x10be27f2 */
  goto L_10be27f2;
L_10be2817:;
  /* 10be2817 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be281a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10be281d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be281f jne 0x10be2829 */
  if (!C.zf) goto L_10be2829;
  /* 10be2821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2824 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2827 jmp 0x10be282c */
  goto L_10be282c;
L_10be2829:;
  /* 10be2829 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10be282c:;
  /* 10be282c mov esp, ebp */
  ESP = (EBP);
  /* 10be282e pop ebp */
  EBP = (pop32());
  /* 10be282f ret  */
  ESPCHK(0x10be27e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x10be2830 (736 bytes, 224 insns) */
void f_10be2830(void) {
  FTRACE(0x10be2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2830 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2831 mov ebp, esp */
  EBP = (ESP);
  /* 10be2833 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2836 push esi */
  push32((uint32_t)(ESI));
  /* 10be2837 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be283b je 0x10be285c */
  if (C.zf) goto L_10be285c;
  /* 10be283d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10be283f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2842 push eax */
  push32((uint32_t)(EAX));
  /* 10be2843 call 0x10be2c80 */
  push32(0x10be2848u); f_10be2c80();
  /* 10be2848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be284b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10be284e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2852 je 0x10be285c */
  if (C.zf) goto L_10be285c;
  /* 10be2854 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2857 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be285a jne 0x10be2864 */
  if (!C.zf) goto L_10be2864;
L_10be285c:;
  /* 10be285c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be285f jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be2864:;
  /* 10be2864 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10be2867 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10be286b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be286d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be286f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10be2870 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10be2873 mov ecx, dword ptr [0x10bfe430] */
  ECX = (r32((uint32_t)(0x10bfe430)));
  /* 10be2879 cmp ecx, dword ptr [0x10bfe434] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfe434))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be287f jne 0x10be2895 */
  if (!C.zf) goto L_10be2895;
  /* 10be2881 mov edx, dword ptr [0x10bfe430] */
  EDX = (r32((uint32_t)(0x10bfe430)));
  /* 10be2887 push edx */
  push32((uint32_t)(EDX));
  /* 10be2888 call 0x10be2b90 */
  push32(0x10be288du); f_10be2b90();
  /* 10be288d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2890 mov dword ptr [0x10bfe430], eax */
  w32((uint32_t)(0x10bfe430), (EAX));
L_10be2895:;
  /* 10be2895 cmp dword ptr [0x10bfe430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be289c jne 0x10be2955 */
  if (!C.zf) goto L_10be2955;
  /* 10be28a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be28a6 je 0x10be28c7 */
  if (C.zf) goto L_10be28c7;
  /* 10be28a8 cmp dword ptr [0x10bfe438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be28af je 0x10be28c7 */
  if (C.zf) goto L_10be28c7;
  /* 10be28b1 call 0x10be2330 */
  push32(0x10be28b6u); f_10be2330();
  /* 10be28b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be28b8 je 0x10be28c2 */
  if (C.zf) goto L_10be28c2;
  /* 10be28ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be28bd jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be28c2:;
  /* 10be28c2 jmp 0x10be2955 */
  goto L_10be2955;
L_10be28c7:;
  /* 10be28c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be28cb je 0x10be28d4 */
  if (C.zf) goto L_10be28d4;
  /* 10be28cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be28cf jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be28d4:;
  /* 10be28d4 cmp dword ptr [0x10bfe430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be28db jne 0x10be2914 */
  if (!C.zf) goto L_10be2914;
  /* 10be28dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10be28e2 push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be28e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be28e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10be28eb call 0x10bd2830 */
  push32(0x10be28f0u); f_10bd2830();
  /* 10be28f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be28f3 mov dword ptr [0x10bfe430], eax */
  w32((uint32_t)(0x10bfe430), (EAX));
  /* 10be28f8 cmp dword ptr [0x10bfe430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be28ff jne 0x10be2909 */
  if (!C.zf) goto L_10be2909;
  /* 10be2901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2904 jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be2909:;
  /* 10be2909 mov eax, dword ptr [0x10bfe430] */
  EAX = (r32((uint32_t)(0x10bfe430)));
  /* 10be290e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10be2914:;
  /* 10be2914 cmp dword ptr [0x10bfe438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be291b jne 0x10be2955 */
  if (!C.zf) goto L_10be2955;
  /* 10be291d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10be2922 push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be2927 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2929 push 4 */
  push32((uint32_t)(0x4u));
  /* 10be292b call 0x10bd2830 */
  push32(0x10be2930u); f_10bd2830();
  /* 10be2930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2933 mov dword ptr [0x10bfe438], eax */
  w32((uint32_t)(0x10bfe438), (EAX));
  /* 10be2938 cmp dword ptr [0x10bfe438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be293f jne 0x10be2949 */
  if (!C.zf) goto L_10be2949;
  /* 10be2941 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2944 jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be2949:;
  /* 10be2949 mov ecx, dword ptr [0x10bfe438] */
  ECX = (r32((uint32_t)(0x10bfe438)));
  /* 10be294f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10be2955:;
  /* 10be2955 mov edx, dword ptr [0x10bfe430] */
  EDX = (r32((uint32_t)(0x10bfe430)));
  /* 10be295b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10be295e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10be2961 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2964 push eax */
  push32((uint32_t)(EAX));
  /* 10be2965 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2968 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2969 call 0x10be2b10 */
  push32(0x10be296eu); f_10be2b10();
  /* 10be296e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2971 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be2974 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2978 jl 0x10be2a11 */
  if ((C.sf!=C.of)) goto L_10be2a11;
  /* 10be297e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2981 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2984 je 0x10be2a11 */
  if (C.zf) goto L_10be2a11;
  /* 10be298a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be298e je 0x10be2a03 */
  if (C.zf) goto L_10be2a03;
  /* 10be2990 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2998 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10be299b push edx */
  push32((uint32_t)(EDX));
  /* 10be299c call 0x10bd32c0 */
  push32(0x10be29a1u); f_10bd32c0();
  /* 10be29a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be29a4 jmp 0x10be29af */
  goto L_10be29af;
L_10be29a6:;
  /* 10be29a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be29a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be29ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10be29af:;
  /* 10be29af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be29b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be29b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be29b9 je 0x10be29d0 */
  if (C.zf) goto L_10be29d0;
  /* 10be29bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be29be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be29c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be29c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10be29c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10be29cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10be29ce jmp 0x10be29a6 */
  goto L_10be29a6;
L_10be29d0:;
  /* 10be29d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10be29d5 push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be29da push 2 */
  push32((uint32_t)(0x2u));
  /* 10be29dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be29df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10be29e2 push eax */
  push32((uint32_t)(EAX));
  /* 10be29e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be29e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10be29e7 call 0x10bd2cc0 */
  push32(0x10be29ecu); f_10bd2cc0();
  /* 10be29ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be29ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be29f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be29f6 je 0x10be2a01 */
  if (C.zf) goto L_10be2a01;
  /* 10be29f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be29fb mov dword ptr [0x10bfe430], edx */
  w32((uint32_t)(0x10bfe430), (EDX));
L_10be2a01:;
  /* 10be2a01 jmp 0x10be2a0f */
  goto L_10be2a0f;
L_10be2a03:;
  /* 10be2a03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2a06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2a09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2a0c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10be2a0f:;
  /* 10be2a0f jmp 0x10be2a84 */
  goto L_10be2a84;
L_10be2a11:;
  /* 10be2a11 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2a15 jne 0x10be2a7d */
  if (!C.zf) goto L_10be2a7d;
  /* 10be2a17 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2a1b jge 0x10be2a25 */
  if ((C.sf==C.of)) goto L_10be2a25;
  /* 10be2a1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2a20 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be2a22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10be2a25:;
  /* 10be2a25 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10be2a2a push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be2a2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2a31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2a34 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10be2a3b push edx */
  push32((uint32_t)(EDX));
  /* 10be2a3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2a3f push eax */
  push32((uint32_t)(EAX));
  /* 10be2a40 call 0x10bd2cc0 */
  push32(0x10be2a45u); f_10bd2cc0();
  /* 10be2a45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2a48 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be2a4b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2a4f jne 0x10be2a59 */
  if (!C.zf) goto L_10be2a59;
  /* 10be2a51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2a54 jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be2a59:;
  /* 10be2a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2a5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2a5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2a62 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10be2a65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2a6b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10be2a73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2a76 mov dword ptr [0x10bfe430], eax */
  w32((uint32_t)(0x10bfe430), (EAX));
  /* 10be2a7b jmp 0x10be2a84 */
  goto L_10be2a84;
L_10be2a7d:;
  /* 10be2a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2a7f jmp 0x10be2b0b */
  goto L_10be2b0b;
L_10be2a84:;
  /* 10be2a84 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2a88 je 0x10be2b09 */
  if (C.zf) goto L_10be2b09;
  /* 10be2a8a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10be2a8f push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be2a94 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2a99 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2a9a call 0x10bd5660 */
  push32(0x10be2a9fu); f_10bd5660();
  /* 10be2a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2aa2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10be2aa6 call 0x10bd2830 */
  push32(0x10be2aabu); f_10bd2830();
  /* 10be2aab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2aae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10be2ab1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2ab5 je 0x10be2b09 */
  if (C.zf) goto L_10be2b09;
  /* 10be2ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2aba push edx */
  push32((uint32_t)(EDX));
  /* 10be2abb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be2abe push eax */
  push32((uint32_t)(EAX));
  /* 10be2abf call 0x10bd57e0 */
  push32(0x10be2ac4u); f_10bd57e0();
  /* 10be2ac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2ac7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10be2aca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2acd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be2ad0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2ad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10be2ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2ad8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10be2adb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2ade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2ae1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be2ae4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10be2ae7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10be2ae9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2aeb not edx */
  EDX = (~(EDX));
  /* 10be2aed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10be2af0 push edx */
  push32((uint32_t)(EDX));
  /* 10be2af1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be2af4 push eax */
  push32((uint32_t)(EAX));
  /* 10be2af5 call dword ptr [0x10c0021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0021c))), 0x10be2afbu);
  /* 10be2afb push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2afd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be2b00 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2b01 call 0x10bd32c0 */
  push32(0x10be2b06u); f_10bd32c0();
  /* 10be2b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be2b09:;
  /* 10be2b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be2b0b:;
  /* 10be2b0b pop esi */
  ESI = (pop32());
  /* 10be2b0c mov esp, ebp */
  ESP = (EBP);
  /* 10be2b0e pop ebp */
  EBP = (pop32());
  /* 10be2b0f ret  */
  ESPCHK(0x10be2830u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10be2b10 (124 bytes, 47 insns) */
void f_10be2b10(void) {
  FTRACE(0x10be2b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2b11 mov ebp, esp */
  EBP = (ESP);
  /* 10be2b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2b14 mov eax, dword ptr [0x10bfe430] */
  EAX = (r32((uint32_t)(0x10bfe430)));
  /* 10be2b19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10be2b1c jmp 0x10be2b27 */
  goto L_10be2b27;
L_10be2b1e:;
  /* 10be2b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b21 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2b24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10be2b27:;
  /* 10be2b27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b2a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2b2d je 0x10be2b7a */
  if (C.zf) goto L_10be2b7a;
  /* 10be2b2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be2b32 push eax */
  push32((uint32_t)(EAX));
  /* 10be2b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be2b38 push edx */
  push32((uint32_t)(EDX));
  /* 10be2b39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2b3c push eax */
  push32((uint32_t)(EAX));
  /* 10be2b3d call 0x10be22e0 */
  push32(0x10be2b42u); f_10be22e0();
  /* 10be2b42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10be2b47 jne 0x10be2b78 */
  if (!C.zf) goto L_10be2b78;
  /* 10be2b49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be2b4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be2b51 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10be2b55 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2b58 je 0x10be2b6a */
  if (C.zf) goto L_10be2b6a;
  /* 10be2b5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b5d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be2b5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be2b62 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10be2b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be2b68 jne 0x10be2b78 */
  if (!C.zf) goto L_10be2b78;
L_10be2b6a:;
  /* 10be2b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b6d sub eax, dword ptr [0x10bfe430] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfe430))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2b73 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10be2b76 jmp 0x10be2b88 */
  goto L_10be2b88;
L_10be2b78:;
  /* 10be2b78 jmp 0x10be2b1e */
  goto L_10be2b1e;
L_10be2b7a:;
  /* 10be2b7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2b7d sub eax, dword ptr [0x10bfe430] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfe430))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2b83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10be2b86 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10be2b88:;
  /* 10be2b88 mov esp, ebp */
  ESP = (EBP);
  /* 10be2b8a pop ebp */
  EBP = (pop32());
  /* 10be2b8b ret  */
  ESPCHK(0x10be2b10u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10be2b90 (238 bytes, 80 insns) */
void f_10be2b90(void) {
  FTRACE(0x10be2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2b91 mov ebp, esp */
  EBP = (ESP);
  /* 10be2b93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2b96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10be2b9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2ba0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be2ba3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2ba7 jne 0x10be2bb0 */
  if (!C.zf) goto L_10be2bb0;
  /* 10be2ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2bab jmp 0x10be2c7a */
  goto L_10be2c7a;
L_10be2bb0:;
  /* 10be2bb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2bb3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be2bb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2bb8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2bbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10be2bbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be2bc0 je 0x10be2bcd */
  if (C.zf) goto L_10be2bcd;
  /* 10be2bc2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be2bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2bc8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10be2bcb jmp 0x10be2bb0 */
  goto L_10be2bb0;
L_10be2bcd:;
  /* 10be2bcd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10be2bd2 push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be2bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2bd9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10be2bdc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10be2be3 push eax */
  push32((uint32_t)(EAX));
  /* 10be2be4 call 0x10bd2830 */
  push32(0x10be2be9u); f_10bd2830();
  /* 10be2be9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2bec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10be2bef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2bf2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10be2bf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2bf9 jne 0x10be2c05 */
  if (!C.zf) goto L_10be2c05;
  /* 10be2bfb push 9 */
  push32((uint32_t)(0x9u));
  /* 10be2bfd call 0x10bd17a0 */
  push32(0x10be2c02u); f_10bd17a0();
  /* 10be2c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be2c05:;
  /* 10be2c05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2c08 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10be2c0b:;
  /* 10be2c0b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2c0e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2c11 je 0x10be2c6e */
  if (C.zf) goto L_10be2c6e;
  /* 10be2c13 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10be2c18 push 0x10bfa8f8 */
  push32((uint32_t)(0x10bfa8f8u));
  /* 10be2c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10be2c1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2c22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10be2c24 push edx */
  push32((uint32_t)(EDX));
  /* 10be2c25 call 0x10bd5660 */
  push32(0x10be2c2au); f_10bd5660();
  /* 10be2c2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2c2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2c30 push eax */
  push32((uint32_t)(EAX));
  /* 10be2c31 call 0x10bd2830 */
  push32(0x10be2c36u); f_10bd2830();
  /* 10be2c36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2c39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2c3c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10be2c3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2c41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2c44 je 0x10be2c5a */
  if (C.zf) goto L_10be2c5a;
  /* 10be2c46 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2c49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10be2c4b push ecx */
  push32((uint32_t)(ECX));
  /* 10be2c4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2c4f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10be2c51 push eax */
  push32((uint32_t)(EAX));
  /* 10be2c52 call 0x10bd57e0 */
  push32(0x10be2c57u); f_10bd57e0();
  /* 10be2c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10be2c5a:;
  /* 10be2c5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10be2c5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2c60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10be2c63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2c66 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2c69 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10be2c6c jmp 0x10be2c0b */
  goto L_10be2c0b;
L_10be2c6e:;
  /* 10be2c6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10be2c71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10be2c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10be2c7a:;
  /* 10be2c7a mov esp, ebp */
  ESP = (EBP);
  /* 10be2c7c pop ebp */
  EBP = (pop32());
  /* 10be2c7d ret  */
  ESPCHK(0x10be2b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c80 @ 0x10be2c80 (237 bytes, 81 insns) */
void f_10be2c80(void) {
  FTRACE(0x10be2c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10be2c81 mov ebp, esp */
  EBP = (ESP);
  /* 10be2c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2c84 cmp dword ptr [0x10bffb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2c8b jne 0x10be2ca2 */
  if (!C.zf) goto L_10be2ca2;
  /* 10be2c8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10be2c90 push eax */
  push32((uint32_t)(EAX));
  /* 10be2c91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2c94 push ecx */
  push32((uint32_t)(ECX));
  /* 10be2c95 call 0x10be2d80 */
  push32(0x10be2c9au); f_10be2d80();
  /* 10be2c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2c9d jmp 0x10be2d69 */
  goto L_10be2d69;
L_10be2ca2:;
  /* 10be2ca2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10be2ca4 call 0x10bd6230 */
  push32(0x10be2ca9u); f_10bd6230();
  /* 10be2ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2cac jmp 0x10be2cb7 */
  goto L_10be2cb7;
L_10be2cae:;
  /* 10be2cae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2cb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2cb4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10be2cb7:;
  /* 10be2cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2cba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10be2cbe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10be2cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2cc5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10be2ccb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10be2ccd je 0x10be2d4b */
  if (C.zf) goto L_10be2d4b;
  /* 10be2ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2cd2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2cd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be2cd9 mov cl, byte ptr [eax + 0x10bffc81] */
  CL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10be2cdf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10be2ce2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be2ce4 je 0x10be2d36 */
  if (C.zf) goto L_10be2d36;
  /* 10be2ce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2ce9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2cec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10be2cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2cf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be2cf4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be2cf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10be2cf8 jne 0x10be2d08 */
  if (!C.zf) goto L_10be2d08;
  /* 10be2cfa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10be2cfc call 0x10bd62d0 */
  push32(0x10be2d01u); f_10bd62d0();
  /* 10be2d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2d06 jmp 0x10be2d69 */
  goto L_10be2d69;
L_10be2d08:;
  /* 10be2d08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2d0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10be2d11 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10be2d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2d17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10be2d19 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10be2d1b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10be2d1d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2d20 jne 0x10be2d34 */
  if (!C.zf) goto L_10be2d34;
  /* 10be2d22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10be2d24 call 0x10bd62d0 */
  push32(0x10be2d29u); f_10bd62d0();
  /* 10be2d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2d2f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10be2d32 jmp 0x10be2d69 */
  goto L_10be2d69;
L_10be2d34:;
  /* 10be2d34 jmp 0x10be2d46 */
  goto L_10be2d46;
L_10be2d36:;
  /* 10be2d36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2d39 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10be2d3f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2d42 jne 0x10be2d46 */
  if (!C.zf) goto L_10be2d46;
  /* 10be2d44 jmp 0x10be2d4b */
  goto L_10be2d4b;
L_10be2d46:;
  /* 10be2d46 jmp 0x10be2cae */
  goto L_10be2cae;
L_10be2d4b:;
  /* 10be2d4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10be2d4d call 0x10bd62d0 */
  push32(0x10be2d52u); f_10bd62d0();
  /* 10be2d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10be2d58 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2d5d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10be2d60 jne 0x10be2d67 */
  if (!C.zf) goto L_10be2d67;
  /* 10be2d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10be2d65 jmp 0x10be2d69 */
  goto L_10be2d69;
L_10be2d67:;
  /* 10be2d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10be2d69:;
  /* 10be2d69 mov esp, ebp */
  ESP = (EBP);
  /* 10be2d6b pop ebp */
  EBP = (pop32());
  /* 10be2d6c ret  */
  ESPCHK(0x10be2c80u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10be2d80 (193 bytes, 87 insns) */
void f_10be2d80(void) {
  FTRACE(0x10be2d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2d80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2d82 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10be2d86 push ebx */
  push32((uint32_t)(EBX));
  /* 10be2d87 mov ebx, eax */
  EBX = (EAX);
  /* 10be2d89 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10be2d8c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10be2d90 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10be2d96 je 0x10be2dab */
  if (C.zf) goto L_10be2dab;
L_10be2d98:;
  /* 10be2d98 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10be2d9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10be2d9b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be2d9d je 0x10be2d70 */
  if (C.zf) { jmp_ind(0x10be2d70u); return; }
  /* 10be2d9f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10be2da1 je 0x10be2df4 */
  if (C.zf) goto L_10be2df4;
  /* 10be2da3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10be2da9 jne 0x10be2d98 */
  if (!C.zf) goto L_10be2d98;
L_10be2dab:;
  /* 10be2dab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10be2dad push edi */
  push32((uint32_t)(EDI));
  /* 10be2dae mov eax, ebx */
  EAX = (EBX);
  /* 10be2db0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10be2db3 push esi */
  push32((uint32_t)(ESI));
  /* 10be2db4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10be2db6:;
  /* 10be2db6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10be2db8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10be2dbd mov eax, ecx */
  EAX = (ECX);
  /* 10be2dbf mov esi, edi */
  ESI = (EDI);
  /* 10be2dc1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10be2dc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2dc5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2dc7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10be2dca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10be2dcd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10be2dcf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10be2dd1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10be2dd4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10be2dda jne 0x10be2df8 */
  if (!C.zf) goto L_10be2df8;
  /* 10be2ddc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10be2de1 je 0x10be2db6 */
  if (C.zf) goto L_10be2db6;
  /* 10be2de3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10be2de8 jne 0x10be2df2 */
  if (!C.zf) goto L_10be2df2;
  /* 10be2dea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10be2df0 jne 0x10be2db6 */
  if (!C.zf) goto L_10be2db6;
L_10be2df2:;
  /* 10be2df2 pop esi */
  ESI = (pop32());
  /* 10be2df3 pop edi */
  EDI = (pop32());
L_10be2df4:;
  /* 10be2df4 pop ebx */
  EBX = (pop32());
  /* 10be2df5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10be2df7 ret  */
  ESPCHK(0x10be2d80u, _esp0);
  ESP += 4; return;
L_10be2df8:;
  /* 10be2df8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10be2dfb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be2dfd je 0x10be2e35 */
  if (C.zf) goto L_10be2e35;
  /* 10be2dff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10be2e01 je 0x10be2df2 */
  if (C.zf) goto L_10be2df2;
  /* 10be2e03 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be2e05 je 0x10be2e2e */
  if (C.zf) goto L_10be2e2e;
  /* 10be2e07 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10be2e09 je 0x10be2df2 */
  if (C.zf) goto L_10be2df2;
  /* 10be2e0b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10be2e0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be2e10 je 0x10be2e27 */
  if (C.zf) goto L_10be2e27;
  /* 10be2e12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10be2e14 je 0x10be2df2 */
  if (C.zf) goto L_10be2df2;
  /* 10be2e16 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10be2e18 je 0x10be2e20 */
  if (C.zf) goto L_10be2e20;
  /* 10be2e1a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10be2e1c je 0x10be2df2 */
  if (C.zf) goto L_10be2df2;
  /* 10be2e1e jmp 0x10be2db6 */
  goto L_10be2db6;
L_10be2e20:;
  /* 10be2e20 pop esi */
  ESI = (pop32());
  /* 10be2e21 pop edi */
  EDI = (pop32());
  /* 10be2e22 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10be2e25 pop ebx */
  EBX = (pop32());
  /* 10be2e26 ret  */
  ESPCHK(0x10be2d80u, _esp0);
  ESP += 4; return;
L_10be2e27:;
  /* 10be2e27 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10be2e2a pop esi */
  ESI = (pop32());
  /* 10be2e2b pop edi */
  EDI = (pop32());
  /* 10be2e2c pop ebx */
  EBX = (pop32());
  /* 10be2e2d ret  */
  ESPCHK(0x10be2d80u, _esp0);
  ESP += 4; return;
L_10be2e2e:;
  /* 10be2e2e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10be2e31 pop esi */
  ESI = (pop32());
  /* 10be2e32 pop edi */
  EDI = (pop32());
  /* 10be2e33 pop ebx */
  EBX = (pop32());
  /* 10be2e34 ret  */
  ESPCHK(0x10be2d80u, _esp0);
  ESP += 4; return;
L_10be2e35:;
  /* 10be2e35 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10be2e38 pop esi */
  ESI = (pop32());
  /* 10be2e39 pop edi */
  EDI = (pop32());
  /* 10be2e3a pop ebx */
  EBX = (pop32());
  /* 10be2e3b ret  */
  ESPCHK(0x10be2d80u, _esp0);
  ESP += 4; return;
  /* 10be2e3c jmp dword ptr [0x10c00238] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10c00238)))); return;
}

/* RtlUnwind @ 0x10be2f8c (6 bytes, 1 insns) */
void f_10be2f8c(void) {
  FTRACE(0x10be2f8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10be2f8c jmp dword ptr [0x10c00318] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10c00318)))); return;
}

