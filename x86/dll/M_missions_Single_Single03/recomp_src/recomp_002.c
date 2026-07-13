#include "recomp.h"

/* FUN_1000f9b0 @ 0x10c5f9b0 (393 bytes, 123 insns) */
void f_10c5f9b0(void) {
  FTRACE(0x10c5f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c5f9b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5f9b6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f9ba jne 0x10c5f9c6 */
  if (!C.zf) goto L_10c5f9c6;
  /* 10c5f9bc mov eax, dword ptr [0x10c7dc98] */
  EAX = (r32((uint32_t)(0x10c7dc98)));
  /* 10c5f9c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c5f9c4 jmp 0x10c5f9cc */
  goto L_10c5f9cc;
L_10c5f9c6:;
  /* 10c5f9c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5f9c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c5f9cc:;
  /* 10c5f9cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5f9cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5f9d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5f9d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5f9d8 push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c5f9dd call dword ptr [0x10c80244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80244))), 0x10c5f9e3u);
  /* 10c5f9e3 cmp dword ptr [0x10c7e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5f9ea je 0x10c5fa0a */
  if (C.zf) goto L_10c5fa0a;
  /* 10c5f9ec push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c5f9f1 call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c5f9f7u);
  /* 10c5f9f7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5f9f9 call 0x10c56070 */
  push32(0x10c5f9feu); f_10c56070();
  /* 10c5f9fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fa01 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c5fa08 jmp 0x10c5fa11 */
  goto L_10c5fa11;
L_10c5fa0a:;
  /* 10c5fa0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c5fa11:;
  /* 10c5fa11 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fa15 jbe 0x10c5fb02 */
  if ((C.cf||C.zf)) goto L_10c5fb02;
  /* 10c5fa1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5fa20 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10c5fa23 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5fa27 je 0x10c5fa31 */
  if (C.zf) goto L_10c5fa31;
  /* 10c5fa29 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c5fa2d je 0x10c5fa36 */
  if (C.zf) goto L_10c5fa36;
  /* 10c5fa2f jmp 0x10c5fa90 */
  goto L_10c5fa90;
L_10c5fa31:;
  /* 10c5fa31 jmp 0x10c5fb02 */
  goto L_10c5fb02;
L_10c5fa36:;
  /* 10c5fa36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fa3c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10c5fa3f mov dword ptr [0x10c7e768], 0 */
  w32((uint32_t)(0x10c7e768), (0x0u));
  /* 10c5fa49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c5fa4f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fa52 jne 0x10c5fa67 */
  if (!C.zf) goto L_10c5fa67;
  /* 10c5fa54 mov dword ptr [0x10c7e768], 1 */
  w32((uint32_t)(0x10c7e768), (0x1u));
  /* 10c5fa5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fa64 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c5fa67:;
  /* 10c5fa67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5fa6a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fa6b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10c5fa6e push edx */
  push32((uint32_t)(EDX));
  /* 10c5fa6f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10c5fa72 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fa73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fa76 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fa77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5fa7c push eax */
  push32((uint32_t)(EAX));
  /* 10c5fa7d call 0x10c5fb40 */
  push32(0x10c5fa82u); f_10c5fb40();
  /* 10c5fa82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fa85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fa8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c5fa8e jmp 0x10c5fafd */
  goto L_10c5fafd;
L_10c5fa90:;
  /* 10c5fa90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fa93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5fa95 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c5fa97 mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c5fa9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5fa9f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c5faa3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5faa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5faab je 0x10c5fad8 */
  if (C.zf) goto L_10c5fad8;
  /* 10c5faad cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fab1 jbe 0x10c5fad8 */
  if ((C.cf||C.zf)) goto L_10c5fad8;
  /* 10c5fab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5fab6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fab9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5fabb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c5fabd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5fac0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fac3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c5fac6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fac9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5facc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c5facf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5fad2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fad5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c5fad8:;
  /* 10c5fad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5fadb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fade mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5fae0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c5fae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5fae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fae8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c5faeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5faee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5faf1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c5faf4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5faf7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fafa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c5fafd:;
  /* 10c5fafd jmp 0x10c5fa11 */
  goto L_10c5fa11;
L_10c5fb02:;
  /* 10c5fb02 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fb06 je 0x10c5fb14 */
  if (C.zf) goto L_10c5fb14;
  /* 10c5fb08 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c5fb0a call 0x10c56110 */
  push32(0x10c5fb0fu); f_10c56110();
  /* 10c5fb0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fb12 jmp 0x10c5fb1f */
  goto L_10c5fb1f;
L_10c5fb14:;
  /* 10c5fb14 push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c5fb19 call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c5fb1fu);
L_10c5fb1f:;
  /* 10c5fb1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fb23 jbe 0x10c5fb33 */
  if ((C.cf||C.zf)) goto L_10c5fb33;
  /* 10c5fb25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5fb28 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c5fb2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fb2e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fb31 jmp 0x10c5fb35 */
  goto L_10c5fb35;
L_10c5fb33:;
  /* 10c5fb33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c5fb35:;
  /* 10c5fb35 mov esp, ebp */
  ESP = (EBP);
  /* 10c5fb37 pop ebp */
  EBP = (pop32());
  /* 10c5fb38 ret  */
  ESPCHK(0x10c5f9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb40 @ 0x10c5fb40 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10c5fb40(void) {
  FTRACE(0x10c5fb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5fb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c5fb41 mov ebp, esp */
  EBP = (ESP);
  /* 10c5fb43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fb46 push esi */
  push32((uint32_t)(ESI));
  /* 10c5fb47 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10c5fb4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c5fb4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5fb51 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fb54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5fb57 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fb5b ja 0x10c600a8 */
  if ((!C.cf&&!C.zf)) goto L_10c600a8;
  /* 10c5fb61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5fb64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5fb66 mov dl, byte ptr [eax + 0x10c60109] */
  DL = (r8((uint32_t)(EAX + 0x10c60109)));
  /* 10c5fb6c jmp dword ptr [edx*4 + 0x10c600ad] */
  switch (EDX) {
    case 0: goto L_10c60086;
    case 1: goto L_10c5fb95;
    case 2: goto L_10c5fbdb;
    case 3: goto L_10c5fd28;
    case 4: goto L_10c5fd50;
    case 5: goto L_10c5fdef;
    case 6: goto L_10c5fe5b;
    case 7: goto L_10c5fe84;
    case 8: goto L_10c5fec5;
    case 9: goto L_10c5ffa7;
    case 10: goto L_10c6000e;
    case 11: goto L_10c6005b;
    case 12: goto L_10c5fb73;
    case 13: goto L_10c5fbb8;
    case 14: goto L_10c5fbfe;
    case 15: goto L_10c5fcfe;
    case 16: goto L_10c5fd95;
    case 17: goto L_10c5fdc2;
    case 18: goto L_10c5fe17;
    case 19: goto L_10c5fe9b;
    case 20: goto L_10c5ff49;
    case 21: goto L_10c5ffd8;
    case 22: goto L_10c600a8;
    default: x86_unimpl("switch@0x10c5fb6c out of table"); return;
  }
L_10c5fb73:;
  /* 10c5fb73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fb76 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fb77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fb7a push edx */
  push32((uint32_t)(EDX));
  /* 10c5fb7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fb7e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c5fb81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fb84 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c5fb87 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fb88 call 0x10c60160 */
  push32(0x10c5fb8du); f_10c60160();
  /* 10c5fb8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fb90 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fb95:;
  /* 10c5fb95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fb98 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fb99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fb9c push edx */
  push32((uint32_t)(EDX));
  /* 10c5fb9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fba0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c5fba3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fba6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10c5fbaa push eax */
  push32((uint32_t)(EAX));
  /* 10c5fbab call 0x10c60160 */
  push32(0x10c5fbb0u); f_10c60160();
  /* 10c5fbb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fbb3 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fbb8:;
  /* 10c5fbb8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fbbb push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fbbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fbbf push edx */
  push32((uint32_t)(EDX));
  /* 10c5fbc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fbc3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5fbc6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fbc9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c5fbcd push eax */
  push32((uint32_t)(EAX));
  /* 10c5fbce call 0x10c60160 */
  push32(0x10c5fbd3u); f_10c60160();
  /* 10c5fbd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fbd6 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fbdb:;
  /* 10c5fbdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fbde push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fbdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fbe2 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fbe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fbe6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c5fbe9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fbec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c5fbf0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fbf1 call 0x10c60160 */
  push32(0x10c5fbf6u); f_10c60160();
  /* 10c5fbf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fbf9 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fbfe:;
  /* 10c5fbfe cmp dword ptr [0x10c7e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fc05 je 0x10c5fc86 */
  if (C.zf) goto L_10c5fc86;
  /* 10c5fc07 mov dword ptr [0x10c7e768], 0 */
  w32((uint32_t)(0x10c7e768), (0x0u));
  /* 10c5fc11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fc14 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fc15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fc18 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fc19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fc1c push eax */
  push32((uint32_t)(EAX));
  /* 10c5fc1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fc20 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fc21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fc24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10c5fc2a push eax */
  push32((uint32_t)(EAX));
  /* 10c5fc2b call 0x10c60310 */
  push32(0x10c5fc30u); f_10c60310();
  /* 10c5fc30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fc33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fc36 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fc39 jne 0x10c5fc40 */
  if (!C.zf) goto L_10c5fc40;
  /* 10c5fc3b jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fc40:;
  /* 10c5fc40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fc43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5fc45 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10c5fc48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fc4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5fc4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fc50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fc53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5fc55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fc58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5fc5a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fc5d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fc60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5fc62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fc65 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fc66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fc69 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fc6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fc6d push eax */
  push32((uint32_t)(EAX));
  /* 10c5fc6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fc71 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fc72 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fc75 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10c5fc7b push eax */
  push32((uint32_t)(EAX));
  /* 10c5fc7c call 0x10c60310 */
  push32(0x10c5fc81u); f_10c60310();
  /* 10c5fc81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fc84 jmp 0x10c5fcf9 */
  goto L_10c5fcf9;
L_10c5fc86:;
  /* 10c5fc86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fc89 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fc8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fc8d push edx */
  push32((uint32_t)(EDX));
  /* 10c5fc8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fc91 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fc92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fc95 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fc96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fc99 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10c5fc9f push eax */
  push32((uint32_t)(EAX));
  /* 10c5fca0 call 0x10c60310 */
  push32(0x10c5fca5u); f_10c60310();
  /* 10c5fca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fca8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fcab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fcae jne 0x10c5fcb5 */
  if (!C.zf) goto L_10c5fcb5;
  /* 10c5fcb0 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fcb5:;
  /* 10c5fcb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fcb8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5fcba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10c5fcbd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fcc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5fcc2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fcc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fcc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5fcca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fccd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5fccf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5fcd2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fcd5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c5fcd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fcda push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fcdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fcde push edx */
  push32((uint32_t)(EDX));
  /* 10c5fcdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fce2 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fce3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fce7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fcea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10c5fcf0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fcf1 call 0x10c60310 */
  push32(0x10c5fcf6u); f_10c60310();
  /* 10c5fcf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5fcf9:;
  /* 10c5fcf9 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fcfe:;
  /* 10c5fcfe mov ecx, dword ptr [0x10c7e768] */
  ECX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fd04 mov dword ptr [0x10c7e778], ecx */
  w32((uint32_t)(0x10c7e778), (ECX));
  /* 10c5fd0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fd0d push edx */
  push32((uint32_t)(EDX));
  /* 10c5fd0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fd11 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fd12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fd14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fd17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c5fd1a push edx */
  push32((uint32_t)(EDX));
  /* 10c5fd1b call 0x10c601b0 */
  push32(0x10c5fd20u); f_10c601b0();
  /* 10c5fd20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fd23 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fd28:;
  /* 10c5fd28 mov eax, dword ptr [0x10c7e768] */
  EAX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fd2d mov dword ptr [0x10c7e778], eax */
  w32((uint32_t)(0x10c7e778), (EAX));
  /* 10c5fd32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fd35 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fd36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fd39 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fd3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fd3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fd3f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5fd42 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fd43 call 0x10c601b0 */
  push32(0x10c5fd48u); f_10c601b0();
  /* 10c5fd48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fd4b jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fd50:;
  /* 10c5fd50 mov edx, dword ptr [0x10c7e768] */
  EDX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fd56 mov dword ptr [0x10c7e778], edx */
  w32((uint32_t)(0x10c7e778), (EDX));
  /* 10c5fd5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fd5f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5fd62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5fd63 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10c5fd68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5fd6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5fd6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fd71 jne 0x10c5fd7a */
  if (!C.zf) goto L_10c5fd7a;
  /* 10c5fd73 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10c5fd7a:;
  /* 10c5fd7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fd7d push edx */
  push32((uint32_t)(EDX));
  /* 10c5fd7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fd81 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fd82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fd84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5fd87 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fd88 call 0x10c601b0 */
  push32(0x10c5fd8du); f_10c601b0();
  /* 10c5fd8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fd90 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fd95:;
  /* 10c5fd95 mov edx, dword ptr [0x10c7e768] */
  EDX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fd9b mov dword ptr [0x10c7e778], edx */
  w32((uint32_t)(0x10c7e778), (EDX));
  /* 10c5fda1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fda4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fda5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fda8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fda9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c5fdab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fdae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c5fdb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fdb4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fdb5 call 0x10c601b0 */
  push32(0x10c5fdbau); f_10c601b0();
  /* 10c5fdba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fdbd jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fdc2:;
  /* 10c5fdc2 mov ecx, dword ptr [0x10c7e768] */
  ECX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fdc8 mov dword ptr [0x10c7e778], ecx */
  w32((uint32_t)(0x10c7e778), (ECX));
  /* 10c5fdce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fdd1 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fdd2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fdd5 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fdd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fdd8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fddb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c5fdde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fde1 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fde2 call 0x10c601b0 */
  push32(0x10c5fde7u); f_10c601b0();
  /* 10c5fde7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fdea jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fdef:;
  /* 10c5fdef mov eax, dword ptr [0x10c7e768] */
  EAX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fdf4 mov dword ptr [0x10c7e778], eax */
  w32((uint32_t)(0x10c7e778), (EAX));
  /* 10c5fdf9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fdfc push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fdfd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fe00 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fe01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fe03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fe06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c5fe09 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fe0a call 0x10c601b0 */
  push32(0x10c5fe0fu); f_10c601b0();
  /* 10c5fe0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fe12 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fe17:;
  /* 10c5fe17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fe1a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fe1e jg 0x10c5fe3c */
  if ((!C.zf&&C.sf==C.of)) goto L_10c5fe3c;
  /* 10c5fe20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fe23 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fe24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fe27 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fe28 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fe2b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10c5fe31 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fe32 call 0x10c60160 */
  push32(0x10c5fe37u); f_10c60160();
  /* 10c5fe37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fe3a jmp 0x10c5fe56 */
  goto L_10c5fe56;
L_10c5fe3c:;
  /* 10c5fe3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fe3f push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fe40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fe43 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fe44 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5fe47 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10c5fe4d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fe4e call 0x10c60160 */
  push32(0x10c5fe53u); f_10c60160();
  /* 10c5fe53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5fe56:;
  /* 10c5fe56 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fe5b:;
  /* 10c5fe5b mov edx, dword ptr [0x10c7e768] */
  EDX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fe61 mov dword ptr [0x10c7e778], edx */
  w32((uint32_t)(0x10c7e778), (EDX));
  /* 10c5fe67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fe6a push eax */
  push32((uint32_t)(EAX));
  /* 10c5fe6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fe6e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5fe6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fe71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fe74 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5fe76 push eax */
  push32((uint32_t)(EAX));
  /* 10c5fe77 call 0x10c601b0 */
  push32(0x10c5fe7cu); f_10c601b0();
  /* 10c5fe7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fe7f jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fe84:;
  /* 10c5fe84 mov ecx, dword ptr [0x10c7e768] */
  ECX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fe8a mov dword ptr [0x10c7e778], ecx */
  w32((uint32_t)(0x10c7e778), (ECX));
  /* 10c5fe90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fe93 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10c5fe96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5fe99 jmp 0x10c5feed */
  goto L_10c5feed;
L_10c5fe9b:;
  /* 10c5fe9b mov ecx, dword ptr [0x10c7e768] */
  ECX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5fea1 mov dword ptr [0x10c7e778], ecx */
  w32((uint32_t)(0x10c7e778), (ECX));
  /* 10c5fea7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5feaa push edx */
  push32((uint32_t)(EDX));
  /* 10c5feab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5feae push eax */
  push32((uint32_t)(EAX));
  /* 10c5feaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5feb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5feb4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c5feb7 push edx */
  push32((uint32_t)(EDX));
  /* 10c5feb8 call 0x10c601b0 */
  push32(0x10c5febdu); f_10c601b0();
  /* 10c5febd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5fec0 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5fec5:;
  /* 10c5fec5 mov eax, dword ptr [0x10c7e768] */
  EAX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5feca mov dword ptr [0x10c7e778], eax */
  w32((uint32_t)(0x10c7e778), (EAX));
  /* 10c5fecf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fed2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fed6 jne 0x10c5fee1 */
  if (!C.zf) goto L_10c5fee1;
  /* 10c5fed8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10c5fedf jmp 0x10c5feed */
  goto L_10c5feed;
L_10c5fee1:;
  /* 10c5fee1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fee4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10c5fee7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5feea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c5feed:;
  /* 10c5feed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5fef0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c5fef3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5fef6 jge 0x10c5ff01 */
  if ((C.sf==C.of)) goto L_10c5ff01;
  /* 10c5fef8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5feff jmp 0x10c5ff2e */
  goto L_10c5ff2e;
L_10c5ff01:;
  /* 10c5ff01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ff04 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c5ff07 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5ff08 mov ecx, 7 */
  ECX = (0x7u);
  /* 10c5ff0d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5ff0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5ff12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ff15 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c5ff18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5ff19 mov ecx, 7 */
  ECX = (0x7u);
  /* 10c5ff1e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5ff20 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ff23 jl 0x10c5ff2e */
  if ((C.sf!=C.of)) goto L_10c5ff2e;
  /* 10c5ff25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ff28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ff2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c5ff2e:;
  /* 10c5ff2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5ff31 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ff32 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ff35 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ff36 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5ff38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5ff3b push edx */
  push32((uint32_t)(EDX));
  /* 10c5ff3c call 0x10c601b0 */
  push32(0x10c5ff41u); f_10c601b0();
  /* 10c5ff41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ff44 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5ff49:;
  /* 10c5ff49 cmp dword ptr [0x10c7e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5ff50 je 0x10c5ff80 */
  if (C.zf) goto L_10c5ff80;
  /* 10c5ff52 mov dword ptr [0x10c7e768], 0 */
  w32((uint32_t)(0x10c7e768), (0x0u));
  /* 10c5ff5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ff5f push eax */
  push32((uint32_t)(EAX));
  /* 10c5ff60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5ff63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ff64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ff67 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ff68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ff6b push eax */
  push32((uint32_t)(EAX));
  /* 10c5ff6c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ff6f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10c5ff75 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ff76 call 0x10c60310 */
  push32(0x10c5ff7bu); f_10c60310();
  /* 10c5ff7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ff7e jmp 0x10c5ffa2 */
  goto L_10c5ffa2;
L_10c5ff80:;
  /* 10c5ff80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ff83 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ff84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5ff87 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ff88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ff8b push edx */
  push32((uint32_t)(EDX));
  /* 10c5ff8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ff8f push eax */
  push32((uint32_t)(EAX));
  /* 10c5ff90 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ff93 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10c5ff99 push edx */
  push32((uint32_t)(EDX));
  /* 10c5ff9a call 0x10c60310 */
  push32(0x10c5ff9fu); f_10c60310();
  /* 10c5ff9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5ffa2:;
  /* 10c5ffa2 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5ffa7:;
  /* 10c5ffa7 mov dword ptr [0x10c7e768], 0 */
  w32((uint32_t)(0x10c7e768), (0x0u));
  /* 10c5ffb1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ffb4 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ffb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5ffb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5ffb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5ffbc push edx */
  push32((uint32_t)(EDX));
  /* 10c5ffbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ffc0 push eax */
  push32((uint32_t)(EAX));
  /* 10c5ffc1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5ffc4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10c5ffca push edx */
  push32((uint32_t)(EDX));
  /* 10c5ffcb call 0x10c60310 */
  push32(0x10c5ffd0u); f_10c60310();
  /* 10c5ffd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5ffd3 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c5ffd8:;
  /* 10c5ffd8 mov eax, dword ptr [0x10c7e768] */
  EAX = (r32((uint32_t)(0x10c7e768)));
  /* 10c5ffdd mov dword ptr [0x10c7e778], eax */
  w32((uint32_t)(0x10c7e778), (EAX));
  /* 10c5ffe2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5ffe5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c5ffe8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c5ffe9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10c5ffee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c5fff0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5fff3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5fff6 push edx */
  push32((uint32_t)(EDX));
  /* 10c5fff7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5fffa push eax */
  push32((uint32_t)(EAX));
  /* 10c5fffb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5fffd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60000 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60001 call 0x10c601b0 */
  push32(0x10c60006u); f_10c601b0();
  /* 10c60006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60009 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c6000e:;
  /* 10c6000e mov edx, dword ptr [0x10c7e768] */
  EDX = (r32((uint32_t)(0x10c7e768)));
  /* 10c60014 mov dword ptr [0x10c7e778], edx */
  w32((uint32_t)(0x10c7e778), (EDX));
  /* 10c6001a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6001d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c60020 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c60021 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10c60026 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c60028 mov ecx, eax */
  ECX = (EAX);
  /* 10c6002a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6002d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c60030 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60033 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c60036 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c60037 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10c6003c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c6003e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c60043 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60046 push eax */
  push32((uint32_t)(EAX));
  /* 10c60047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6004a push ecx */
  push32((uint32_t)(ECX));
  /* 10c6004b push 4 */
  push32((uint32_t)(0x4u));
  /* 10c6004d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60050 push edx */
  push32((uint32_t)(EDX));
  /* 10c60051 call 0x10c601b0 */
  push32(0x10c60056u); f_10c601b0();
  /* 10c60056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60059 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c6005b:;
  /* 10c6005b call 0x10c61170 */
  push32(0x10c60060u); f_10c61170();
  /* 10c60060 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60063 push eax */
  push32((uint32_t)(EAX));
  /* 10c60064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60067 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6006b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6006d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60071 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10c60074 mov ecx, dword ptr [eax*4 + 0x10c7de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7de1c)));
  /* 10c6007b push ecx */
  push32((uint32_t)(ECX));
  /* 10c6007c call 0x10c60160 */
  push32(0x10c60081u); f_10c60160();
  /* 10c60081 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60084 jmp 0x10c600a8 */
  goto L_10c600a8;
L_10c60086:;
  /* 10c60086 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60089 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c6008b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10c6008e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60091 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c60093 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60096 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60099 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c6009b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6009e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c600a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c600a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c600a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c600a8:;
  /* 10c600a8 pop esi */
  ESI = (pop32());
  /* 10c600a9 mov esp, ebp */
  ESP = (EBP);
  /* 10c600ab pop ebp */
  EBP = (pop32());
  /* 10c600ac ret  */
  ESPCHK(0x10c5fb40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10c60160 (72 bytes, 30 insns) */
void f_10c60160(void) {
  FTRACE(0x10c60160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60160 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60161 mov ebp, esp */
  EBP = (ESP);
L_10c60163:;
  /* 10c60163 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60166 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60169 je 0x10c601a6 */
  if (C.zf) goto L_10c601a6;
  /* 10c6016b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6016e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c60171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c60173 je 0x10c601a6 */
  if (C.zf) goto L_10c601a6;
  /* 10c60175 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60178 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c6017a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6017d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c6017f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c60181 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60184 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c60186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60189 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6018c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c6018e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60191 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60194 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c60197 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6019a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c6019c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6019f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c601a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c601a4 jmp 0x10c60163 */
  goto L_10c60163;
L_10c601a6:;
  /* 10c601a6 pop ebp */
  EBP = (pop32());
  /* 10c601a7 ret  */
  ESPCHK(0x10c60160u, _esp0);
  ESP += 4; return;
}

/* FUN_100101b0 @ 0x10c601b0 (173 bytes, 64 insns) */
void f_10c601b0(void) {
  FTRACE(0x10c601b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c601b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c601b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c601b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c601b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c601bb cmp dword ptr [0x10c7e778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c601c2 je 0x10c601da */
  if (C.zf) goto L_10c601da;
  /* 10c601c4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c601c7 push eax */
  push32((uint32_t)(EAX));
  /* 10c601c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c601cb push ecx */
  push32((uint32_t)(ECX));
  /* 10c601cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c601cf push edx */
  push32((uint32_t)(EDX));
  /* 10c601d0 call 0x10c60260 */
  push32(0x10c601d5u); f_10c60260();
  /* 10c601d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c601d8 jmp 0x10c60259 */
  goto L_10c60259;
L_10c601da:;
  /* 10c601da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c601dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c601e0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c601e2 jae 0x10c60250 */
  if (!C.cf) goto L_10c60250;
  /* 10c601e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c601e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c601ea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c601ed jmp 0x10c601f8 */
  goto L_10c601f8;
L_10c601ef:;
  /* 10c601ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c601f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c601f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10c601f8:;
  /* 10c601f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c601fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c601fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c60200 je 0x10c60234 */
  if (C.zf) goto L_10c60234;
  /* 10c60202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60205 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c60206 mov ecx, 0xa */
  ECX = (0xau);
  /* 10c6020b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c6020d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60210 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c60215 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60218 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10c6021b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6021e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c6021f mov ecx, 0xa */
  ECX = (0xau);
  /* 10c60224 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c60226 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c60229 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6022c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6022f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c60232 jmp 0x10c601ef */
  goto L_10c601ef;
L_10c60234:;
  /* 10c60234 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60237 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c60239 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6023c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6023f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c60241 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60244 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c60246 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60249 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6024c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c6024e jmp 0x10c60259 */
  goto L_10c60259;
L_10c60250:;
  /* 10c60250 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60253 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c60259:;
  /* 10c60259 mov esp, ebp */
  ESP = (EBP);
  /* 10c6025b pop ebp */
  EBP = (pop32());
  /* 10c6025c ret  */
  ESPCHK(0x10c601b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10c60260 (172 bytes, 65 insns) */
void f_10c60260(void) {
  FTRACE(0x10c60260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60260 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60261 mov ebp, esp */
  EBP = (ESP);
  /* 10c60263 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60266 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c6026b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c6026e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60271 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60274 jbe 0x10c602bb */
  if ((C.cf||C.zf)) goto L_10c602bb;
L_10c60276:;
  /* 10c60276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60279 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c6027a mov ecx, 0xa */
  ECX = (0xau);
  /* 10c6027f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c60281 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60287 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c60289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6028c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6028f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c60292 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60295 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c60297 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6029a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6029d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c6029f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c602a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c602a3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10c602a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c602aa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c602ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c602b1 jle 0x10c602bb */
  if ((C.zf||C.sf!=C.of)) goto L_10c602bb;
  /* 10c602b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c602b6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c602b9 ja 0x10c60276 */
  if ((!C.cf&&!C.zf)) goto L_10c60276;
L_10c602bb:;
  /* 10c602bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c602be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c602c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c602c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c602c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c602c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c602cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c602ce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c602d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c602d4:;
  /* 10c602d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c602d7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c602d9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10c602dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c602df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c602e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c602e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c602e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c602e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c602ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c602ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c602f2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c602f5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c602f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c602fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c602fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c60300 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c60303 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60306 jb 0x10c602d4 */
  if (C.cf) goto L_10c602d4;
  /* 10c60308 mov esp, ebp */
  ESP = (EBP);
  /* 10c6030a pop ebp */
  EBP = (pop32());
  /* 10c6030b ret  */
  ESPCHK(0x10c60260u, _esp0);
  ESP += 4; return;
}

/* FUN_10010310 @ 0x10c60310 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10c60310(void) {
  FTRACE(0x10c60310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60310 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60311 mov ebp, esp */
  EBP = (ESP);
  /* 10c60313 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10c60316:;
  /* 10c60316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60319 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c6031c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c6031e je 0x10c6078c */
  if (C.zf) goto L_10c6078c;
  /* 10c60324 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60327 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6032a je 0x10c6078c */
  if (C.zf) goto L_10c6078c;
  /* 10c60330 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c60334 mov dword ptr [0x10c7e778], 0 */
  w32((uint32_t)(0x10c7e778), (0x0u));
  /* 10c6033e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c60345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60348 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c6034b jmp 0x10c60356 */
  goto L_10c60356;
L_10c6034d:;
  /* 10c6034d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60350 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60353 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c60356:;
  /* 10c60356 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60359 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c6035c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6035f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c60362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60365 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60368 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c6036b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6036d jne 0x10c60371 */
  if (!C.zf) goto L_10c60371;
  /* 10c6036f jmp 0x10c6034d */
  goto L_10c6034d;
L_10c60371:;
  /* 10c60371 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60374 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60377 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c6037a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6037d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c60380 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c60383 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c60386 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60389 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c6038c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60390 ja 0x10c606e0 */
  if ((!C.cf&&!C.zf)) goto L_10c606e0;
  /* 10c60396 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c60399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6039b mov al, byte ptr [ecx + 0x10c607bc] */
  AL = (r8((uint32_t)(ECX + 0x10c607bc)));
  /* 10c603a1 jmp dword ptr [eax*4 + 0x10c60790] */
  switch (EAX) {
    case 0: goto L_10c605ff;
    case 1: goto L_10c604e3;
    case 2: goto L_10c6046e;
    case 3: goto L_10c603a8;
    case 4: goto L_10c603e6;
    case 5: goto L_10c60447;
    case 6: goto L_10c60495;
    case 7: goto L_10c604bc;
    case 8: goto L_10c6052a;
    case 9: goto L_10c60424;
    case 10: goto L_10c606e0;
    default: x86_unimpl("switch@0x10c603a1 out of table"); return;
  }
L_10c603a8:;
  /* 10c603a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c603ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c603ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c603b1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c603b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c603b7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c603bb ja 0x10c603e1 */
  if ((!C.cf&&!C.zf)) goto L_10c603e1;
  /* 10c603bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c603c0 jmp dword ptr [ecx*4 + 0x10c6080f] */
  switch (ECX) {
    case 0: goto L_10c603c7;
    case 1: goto L_10c603d1;
    case 2: goto L_10c603d7;
    case 3: goto L_10c603dd;
    case 4: goto L_10c60405;
    case 5: goto L_10c6040f;
    case 6: goto L_10c60415;
    case 7: goto L_10c6041b;
    default: x86_unimpl("switch@0x10c603c0 out of table"); return;
  }
L_10c603c7:;
  /* 10c603c7 mov dword ptr [0x10c7e778], 1 */
  w32((uint32_t)(0x10c7e778), (0x1u));
L_10c603d1:;
  /* 10c603d1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10c603d5 jmp 0x10c603e1 */
  goto L_10c603e1;
L_10c603d7:;
  /* 10c603d7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10c603db jmp 0x10c603e1 */
  goto L_10c603e1;
L_10c603dd:;
  /* 10c603dd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10c603e1:;
  /* 10c603e1 jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c603e6:;
  /* 10c603e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c603e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c603ec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c603ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c603f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c603f5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c603f9 ja 0x10c6041f */
  if ((!C.cf&&!C.zf)) goto L_10c6041f;
  /* 10c603fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c603fe jmp dword ptr [ecx*4 + 0x10c6081f] */
  switch (ECX) {
    case 0: goto L_10c60405;
    case 1: goto L_10c6040f;
    case 2: goto L_10c60415;
    case 3: goto L_10c6041b;
    default: x86_unimpl("switch@0x10c603fe out of table"); return;
  }
L_10c60405:;
  /* 10c60405 mov dword ptr [0x10c7e778], 1 */
  w32((uint32_t)(0x10c7e778), (0x1u));
L_10c6040f:;
  /* 10c6040f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10c60413 jmp 0x10c6041f */
  goto L_10c6041f;
L_10c60415:;
  /* 10c60415 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10c60419 jmp 0x10c6041f */
  goto L_10c6041f;
L_10c6041b:;
  /* 10c6041b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10c6041f:;
  /* 10c6041f jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c60424:;
  /* 10c60424 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60427 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c6042a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6042e je 0x10c60438 */
  if (C.zf) goto L_10c60438;
  /* 10c60430 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60434 je 0x10c6043e */
  if (C.zf) goto L_10c6043e;
  /* 10c60436 jmp 0x10c60442 */
  goto L_10c60442;
L_10c60438:;
  /* 10c60438 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10c6043c jmp 0x10c60442 */
  goto L_10c60442;
L_10c6043e:;
  /* 10c6043e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10c60442:;
  /* 10c60442 jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c60447:;
  /* 10c60447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6044a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c6044d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60451 je 0x10c6045b */
  if (C.zf) goto L_10c6045b;
  /* 10c60453 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60457 je 0x10c60465 */
  if (C.zf) goto L_10c60465;
  /* 10c60459 jmp 0x10c60469 */
  goto L_10c60469;
L_10c6045b:;
  /* 10c6045b mov dword ptr [0x10c7e778], 1 */
  w32((uint32_t)(0x10c7e778), (0x1u));
L_10c60465:;
  /* 10c60465 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10c60469:;
  /* 10c60469 jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c6046e:;
  /* 10c6046e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60471 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c60474 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60478 je 0x10c60482 */
  if (C.zf) goto L_10c60482;
  /* 10c6047a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6047e je 0x10c6048c */
  if (C.zf) goto L_10c6048c;
  /* 10c60480 jmp 0x10c60490 */
  goto L_10c60490;
L_10c60482:;
  /* 10c60482 mov dword ptr [0x10c7e778], 1 */
  w32((uint32_t)(0x10c7e778), (0x1u));
L_10c6048c:;
  /* 10c6048c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10c60490:;
  /* 10c60490 jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c60495:;
  /* 10c60495 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60498 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10c6049b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6049f je 0x10c604a9 */
  if (C.zf) goto L_10c604a9;
  /* 10c604a1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c604a5 je 0x10c604b3 */
  if (C.zf) goto L_10c604b3;
  /* 10c604a7 jmp 0x10c604b7 */
  goto L_10c604b7;
L_10c604a9:;
  /* 10c604a9 mov dword ptr [0x10c7e778], 1 */
  w32((uint32_t)(0x10c7e778), (0x1u));
L_10c604b3:;
  /* 10c604b3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10c604b7:;
  /* 10c604b7 jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c604bc:;
  /* 10c604bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c604bf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c604c2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c604c6 je 0x10c604d0 */
  if (C.zf) goto L_10c604d0;
  /* 10c604c8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c604cc je 0x10c604da */
  if (C.zf) goto L_10c604da;
  /* 10c604ce jmp 0x10c604de */
  goto L_10c604de;
L_10c604d0:;
  /* 10c604d0 mov dword ptr [0x10c7e778], 1 */
  w32((uint32_t)(0x10c7e778), (0x1u));
L_10c604da:;
  /* 10c604da mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10c604de:;
  /* 10c604de jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c604e3:;
  /* 10c604e3 push 0x10c7a7ac */
  push32((uint32_t)(0x10c7a7acu));
  /* 10c604e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c604eb push ecx */
  push32((uint32_t)(ECX));
  /* 10c604ec call 0x10c60d40 */
  push32(0x10c604f1u); f_10c60d40();
  /* 10c604f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c604f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c604f6 jne 0x10c60503 */
  if (!C.zf) goto L_10c60503;
  /* 10c604f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c604fb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c604fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c60501 jmp 0x10c60521 */
  goto L_10c60521;
L_10c60503:;
  /* 10c60503 push 0x10c7a7a8 */
  push32((uint32_t)(0x10c7a7a8u));
  /* 10c60508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6050b push eax */
  push32((uint32_t)(EAX));
  /* 10c6050c call 0x10c60d40 */
  push32(0x10c60511u); f_10c60d40();
  /* 10c60511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c60516 jne 0x10c60521 */
  if (!C.zf) goto L_10c60521;
  /* 10c60518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6051b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6051e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c60521:;
  /* 10c60521 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10c60525 jmp 0x10c606e0 */
  goto L_10c606e0;
L_10c6052a:;
  /* 10c6052a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6052d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60531 jg 0x10c60541 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c60541;
  /* 10c60533 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c60536 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10c6053c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c6053f jmp 0x10c6054d */
  goto L_10c6054d;
L_10c60541:;
  /* 10c60541 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c60544 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10c6054a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c6054d:;
  /* 10c6054d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60551 jle 0x10c605f4 */
  if ((C.zf||C.sf!=C.of)) goto L_10c605f4;
  /* 10c60557 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6055a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6055d jbe 0x10c605f4 */
  if ((C.cf||C.zf)) goto L_10c605f4;
  /* 10c60563 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c60566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60568 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c6056a mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c60570 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60572 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c60576 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c6057c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c6057e je 0x10c605b7 */
  if (C.zf) goto L_10c605b7;
  /* 10c60580 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60583 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60586 jbe 0x10c605b7 */
  if ((C.cf||C.zf)) goto L_10c605b7;
  /* 10c60588 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6058b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c6058d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c60590 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c60592 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c60594 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60597 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c60599 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6059c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6059f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c605a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c605a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c605a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c605aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c605ad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c605af sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c605b2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c605b5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c605b7:;
  /* 10c605b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c605ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c605bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c605bf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c605c1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c605c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c605c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c605c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c605cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c605ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c605d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c605d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c605d6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c605d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c605dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c605de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c605e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c605e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c605e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c605e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c605ec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c605ef jmp 0x10c6054d */
  goto L_10c6054d;
L_10c605f4:;
  /* 10c605f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c605f7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c605fa jmp 0x10c60316 */
  goto L_10c60316;
L_10c605ff:;
  /* 10c605ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60602 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c60605 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c60607 je 0x10c606d2 */
  if (C.zf) goto L_10c606d2;
  /* 10c6060d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60610 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60613 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c60616:;
  /* 10c60616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60619 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c6061c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c6061e je 0x10c606d0 */
  if (C.zf) goto L_10c606d0;
  /* 10c60624 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60627 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6062a je 0x10c606d0 */
  if (C.zf) goto L_10c606d0;
  /* 10c60630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60633 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c60636 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60639 jne 0x10c60649 */
  if (!C.zf) goto L_10c60649;
  /* 10c6063b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6063e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60641 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c60644 jmp 0x10c606d0 */
  goto L_10c606d0;
L_10c60649:;
  /* 10c60649 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6064c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c6064e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c60650 mov edx, dword ptr [0x10c7cc98] */
  EDX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c60656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60658 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c6065c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c60661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c60663 je 0x10c6069c */
  if (C.zf) goto L_10c6069c;
  /* 10c60665 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60668 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6066b jbe 0x10c6069c */
  if ((C.cf||C.zf)) goto L_10c6069c;
  /* 10c6066d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60670 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c60672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60675 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c60677 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c60679 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6067c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c6067e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60681 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60684 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c60686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60689 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6068c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c6068f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60692 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c60694 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60697 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6069a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c6069c:;
  /* 10c6069c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6069f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c606a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c606a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c606a6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c606a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c606ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c606ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c606b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c606b3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c606b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c606b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c606bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c606be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c606c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c606c3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c606c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c606c9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c606cb jmp 0x10c60616 */
  goto L_10c60616;
L_10c606d0:;
  /* 10c606d0 jmp 0x10c606db */
  goto L_10c606db;
L_10c606d2:;
  /* 10c606d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c606d5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c606d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c606db:;
  /* 10c606db jmp 0x10c60316 */
  goto L_10c60316;
L_10c606e0:;
  /* 10c606e0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c606e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c606e6 je 0x10c6070c */
  if (C.zf) goto L_10c6070c;
  /* 10c606e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c606eb push edx */
  push32((uint32_t)(EDX));
  /* 10c606ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c606ef push eax */
  push32((uint32_t)(EAX));
  /* 10c606f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c606f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c606f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c606f7 push edx */
  push32((uint32_t)(EDX));
  /* 10c606f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c606fb push eax */
  push32((uint32_t)(EAX));
  /* 10c606fc call 0x10c5fb40 */
  push32(0x10c60701u); f_10c5fb40();
  /* 10c60701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60704 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60707 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c6070a jmp 0x10c60787 */
  goto L_10c60787;
L_10c6070c:;
  /* 10c6070c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6070f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60711 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c60713 mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c60719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6071b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c6071f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c60725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c60727 je 0x10c60758 */
  if (C.zf) goto L_10c60758;
  /* 10c60729 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6072c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c6072e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60731 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c60733 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c60735 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60738 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c6073a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6073d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60740 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c60742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60748 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c6074b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6074e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c60750 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60753 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60756 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c60758:;
  /* 10c60758 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6075b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c6075d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60760 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c60762 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c60764 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60767 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c60769 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6076c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6076f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c60771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60774 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60777 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c6077a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6077d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c6077f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60782 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60785 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c60787:;
  /* 10c60787 jmp 0x10c60316 */
  goto L_10c60316;
L_10c6078c:;
  /* 10c6078c mov esp, ebp */
  ESP = (EBP);
  /* 10c6078e pop ebp */
  EBP = (pop32());
  /* 10c6078f ret  */
  ESPCHK(0x10c60310u, _esp0);
  ESP += 4; return;
}

/* FUN_10010830 @ 0x10c60830 (650 bytes, 178 insns) */
void f_10c60830(void) {
  FTRACE(0x10c60830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60830 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60831 mov ebp, esp */
  EBP = (ESP);
  /* 10c60833 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60839 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6083d jne 0x10c60999 */
  if (!C.zf) goto L_10c60999;
  /* 10c60843 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60846 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10c6084c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10c60852 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c60855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c6085c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10c60866 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60868 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10c6086e push edx */
  push32((uint32_t)(EDX));
  /* 10c6086f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60872 push eax */
  push32((uint32_t)(EAX));
  /* 10c60873 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60876 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60877 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6087a push edx */
  push32((uint32_t)(EDX));
  /* 10c6087b call 0x10c61c50 */
  push32(0x10c60880u); f_10c61c50();
  /* 10c60880 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c60886 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6088a jne 0x10c6091f */
  if (!C.zf) goto L_10c6091f;
  /* 10c60890 call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c60896u);
  /* 10c60896 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60899 je 0x10c608a0 */
  if (C.zf) goto L_10c608a0;
  /* 10c6089b jmp 0x10c6097d */
  goto L_10c6097d;
L_10c608a0:;
  /* 10c608a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c608a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c608a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c608a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c608a9 push eax */
  push32((uint32_t)(EAX));
  /* 10c608aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c608ad push ecx */
  push32((uint32_t)(ECX));
  /* 10c608ae call 0x10c61c50 */
  push32(0x10c608b3u); f_10c61c50();
  /* 10c608b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c608b6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10c608bc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c608c3 jne 0x10c608ca */
  if (!C.zf) goto L_10c608ca;
  /* 10c608c5 jmp 0x10c6097d */
  goto L_10c6097d;
L_10c608ca:;
  /* 10c608ca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10c608cc push 0x10c7a7b4 */
  push32((uint32_t)(0x10c7a7b4u));
  /* 10c608d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c608d3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10c608d9 push edx */
  push32((uint32_t)(EDX));
  /* 10c608da call 0x10c52670 */
  push32(0x10c608dfu); f_10c52670();
  /* 10c608df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c608e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c608e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c608e9 jne 0x10c608f0 */
  if (!C.zf) goto L_10c608f0;
  /* 10c608eb jmp 0x10c6097d */
  goto L_10c6097d;
L_10c608f0:;
  /* 10c608f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c608f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c608f9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10c608ff push eax */
  push32((uint32_t)(EAX));
  /* 10c60900 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60903 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60904 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60907 push edx */
  push32((uint32_t)(EDX));
  /* 10c60908 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6090b push eax */
  push32((uint32_t)(EAX));
  /* 10c6090c call 0x10c61c50 */
  push32(0x10c60911u); f_10c61c50();
  /* 10c60911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60914 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c60917 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6091b jne 0x10c6091f */
  if (!C.zf) goto L_10c6091f;
  /* 10c6091d jmp 0x10c6097d */
  goto L_10c6097d;
L_10c6091f:;
  /* 10c6091f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10c60921 push 0x10c7a7b4 */
  push32((uint32_t)(0x10c7a7b4u));
  /* 10c60926 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c60928 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c6092b push ecx */
  push32((uint32_t)(ECX));
  /* 10c6092c call 0x10c52670 */
  push32(0x10c60931u); f_10c52670();
  /* 10c60931 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60934 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10c6093a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c6093c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10c60942 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60945 jne 0x10c60949 */
  if (!C.zf) goto L_10c60949;
  /* 10c60947 jmp 0x10c6097d */
  goto L_10c6097d;
L_10c60949:;
  /* 10c60949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c6094c push ecx */
  push32((uint32_t)(ECX));
  /* 10c6094d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60950 push edx */
  push32((uint32_t)(EDX));
  /* 10c60951 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10c60957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c60959 push ecx */
  push32((uint32_t)(ECX));
  /* 10c6095a call 0x10c55e90 */
  push32(0x10c6095fu); f_10c55e90();
  /* 10c6095f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60962 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60966 je 0x10c60976 */
  if (C.zf) goto L_10c60976;
  /* 10c60968 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c6096a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6096d push edx */
  push32((uint32_t)(EDX));
  /* 10c6096e call 0x10c53100 */
  push32(0x10c60973u); f_10c53100();
  /* 10c60973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c60976:;
  /* 10c60976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60978 jmp 0x10c60ab6 */
  goto L_10c60ab6;
L_10c6097d:;
  /* 10c6097d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60981 je 0x10c60991 */
  if (C.zf) goto L_10c60991;
  /* 10c60983 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c60985 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c60988 push eax */
  push32((uint32_t)(EAX));
  /* 10c60989 call 0x10c53100 */
  push32(0x10c6098eu); f_10c53100();
  /* 10c6098e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c60991:;
  /* 10c60991 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c60994 jmp 0x10c60ab6 */
  goto L_10c60ab6;
L_10c60999:;
  /* 10c60999 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6099d jne 0x10c60ab3 */
  if (!C.zf) goto L_10c60ab3;
  /* 10c609a3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10c609ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c609b0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10c609b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c609b8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c609be push edx */
  push32((uint32_t)(EDX));
  /* 10c609bf push 0x10c7e690 */
  push32((uint32_t)(0x10c7e690u));
  /* 10c609c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c609c7 push eax */
  push32((uint32_t)(EAX));
  /* 10c609c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c609cb push ecx */
  push32((uint32_t)(ECX));
  /* 10c609cc call 0x10c61ab0 */
  push32(0x10c609d1u); f_10c61ab0();
  /* 10c609d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c609d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c609d6 jne 0x10c609e0 */
  if (!C.zf) goto L_10c609e0;
  /* 10c609d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c609db jmp 0x10c60ab6 */
  goto L_10c60ab6;
L_10c609e0:;
  /* 10c609e0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c609e6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c609e9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10c609f3 jmp 0x10c60a04 */
  goto L_10c60a04;
L_10c609f5:;
  /* 10c609f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c609fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c609fe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10c60a04:;
  /* 10c60a04 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60a0b jge 0x10c60aaf */
  if ((C.sf==C.of)) goto L_10c60aaf;
  /* 10c60a11 cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60a18 jle 0x10c60a4b */
  if ((C.zf||C.sf!=C.of)) goto L_10c60a4b;
  /* 10c60a1a push 4 */
  push32((uint32_t)(0x4u));
  /* 10c60a1c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c60a22 mov dl, byte ptr [ecx*2 + 0x10c7e690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10c7e690)));
  /* 10c60a29 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10c60a2f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c60a35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c60a3a push eax */
  push32((uint32_t)(EAX));
  /* 10c60a3b call 0x10c58680 */
  push32(0x10c60a40u); f_10c58680();
  /* 10c60a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60a43 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10c60a49 jmp 0x10c60a7e */
  goto L_10c60a7e;
L_10c60a4b:;
  /* 10c60a4b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c60a51 mov dl, byte ptr [ecx*2 + 0x10c7e690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10c7e690)));
  /* 10c60a58 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10c60a5e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c60a64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c60a69 mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c60a6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60a71 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c60a75 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c60a78 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10c60a7e:;
  /* 10c60a7e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60a85 je 0x10c60aa8 */
  if (C.zf) goto L_10c60aa8;
  /* 10c60a87 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c60a8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c60a90 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c60a93 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10c60a9a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c60a9e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c60aa4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c60aa6 jmp 0x10c60aaa */
  goto L_10c60aaa;
L_10c60aa8:;
  /* 10c60aa8 jmp 0x10c60aaf */
  goto L_10c60aaf;
L_10c60aaa:;
  /* 10c60aaa jmp 0x10c609f5 */
  goto L_10c609f5;
L_10c60aaf:;
  /* 10c60aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60ab1 jmp 0x10c60ab6 */
  goto L_10c60ab6;
L_10c60ab3:;
  /* 10c60ab3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c60ab6:;
  /* 10c60ab6 mov esp, ebp */
  ESP = (EBP);
  /* 10c60ab8 pop ebp */
  EBP = (pop32());
  /* 10c60ab9 ret  */
  ESPCHK(0x10c60830u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x10c60ac0 (10 bytes, 5 insns) */
void f_10c60ac0(void) {
  FTRACE(0x10c60ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10c60ac3 mov eax, dword ptr [0x10c7dd88] */
  EAX = (r32((uint32_t)(0x10c7dd88)));
  /* 10c60ac8 pop ebp */
  EBP = (pop32());
  /* 10c60ac9 ret  */
  ESPCHK(0x10c60ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ad0 @ 0x10c60ad0 (575 bytes, 196 insns) */
void f_10c60ad0(void) {
  FTRACE(0x10c60ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10c60ad3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c60ad5 push 0x10c7a7c0 */
  push32((uint32_t)(0x10c7a7c0u));
  /* 10c60ada push 0x10c5b778 */
  push32((uint32_t)(0x10c5b778u));
  /* 10c60adf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c60ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10c60ae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c60aed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60af0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c60af1 push esi */
  push32((uint32_t)(ESI));
  /* 10c60af2 push edi */
  push32((uint32_t)(EDI));
  /* 10c60af3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c60af6 cmp dword ptr [0x10c7e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60afd jne 0x10c60b4e */
  if (!C.zf) goto L_10c60b4e;
  /* 10c60aff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10c60b02 push eax */
  push32((uint32_t)(EAX));
  /* 10c60b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c60b05 push 0x10c79ef4 */
  push32((uint32_t)(0x10c79ef4u));
  /* 10c60b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c60b0c call dword ptr [0x10c802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f0))), 0x10c60b12u);
  /* 10c60b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c60b14 je 0x10c60b22 */
  if (C.zf) goto L_10c60b22;
  /* 10c60b16 mov dword ptr [0x10c7e69c], 1 */
  w32((uint32_t)(0x10c7e69c), (0x1u));
  /* 10c60b20 jmp 0x10c60b4e */
  goto L_10c60b4e;
L_10c60b22:;
  /* 10c60b22 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10c60b25 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c60b28 push 0x10c79ef0 */
  push32((uint32_t)(0x10c79ef0u));
  /* 10c60b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c60b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60b31 call dword ptr [0x10c802ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802ec))), 0x10c60b37u);
  /* 10c60b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c60b39 je 0x10c60b47 */
  if (C.zf) goto L_10c60b47;
  /* 10c60b3b mov dword ptr [0x10c7e69c], 2 */
  w32((uint32_t)(0x10c7e69c), (0x2u));
  /* 10c60b45 jmp 0x10c60b4e */
  goto L_10c60b4e;
L_10c60b47:;
  /* 10c60b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60b49 jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60b4e:;
  /* 10c60b4e cmp dword ptr [0x10c7e69c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e69c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60b55 jne 0x10c60b72 */
  if (!C.zf) goto L_10c60b72;
  /* 10c60b57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60b5a push edx */
  push32((uint32_t)(EDX));
  /* 10c60b5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60b5e push eax */
  push32((uint32_t)(EAX));
  /* 10c60b5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60b62 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60b66 push edx */
  push32((uint32_t)(EDX));
  /* 10c60b67 call dword ptr [0x10c802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802f0))), 0x10c60b6du);
  /* 10c60b6d jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60b72:;
  /* 10c60b72 cmp dword ptr [0x10c7e69c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e69c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60b79 jne 0x10c60d27 */
  if (!C.zf) goto L_10c60d27;
  /* 10c60b7f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60b83 jne 0x10c60b8d */
  if (!C.zf) goto L_10c60b8d;
  /* 10c60b85 mov eax, dword ptr [0x10c7e610] */
  EAX = (r32((uint32_t)(0x10c7e610)));
  /* 10c60b8a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10c60b8d:;
  /* 10c60b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60b98 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60b99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60b9c push edx */
  push32((uint32_t)(EDX));
  /* 10c60b9d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c60ba2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c60ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10c60ba6 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c60bacu);
  /* 10c60bac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c60baf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60bb3 jne 0x10c60bbc */
  if (!C.zf) goto L_10c60bbc;
  /* 10c60bb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60bb7 jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60bbc:;
  /* 10c60bbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c60bc3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c60bc6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60bc9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c60bcb call 0x10c55810 */
  push32(0x10c60bd0u); f_10c55810();
  /* 10c60bd0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10c60bd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c60bd6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c60bd9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c60bdc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c60bdf push edx */
  push32((uint32_t)(EDX));
  /* 10c60be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60be2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c60be5 push eax */
  push32((uint32_t)(EAX));
  /* 10c60be6 call 0x10c563e0 */
  push32(0x10c60bebu); f_10c563e0();
  /* 10c60beb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60bee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c60bf5 jmp 0x10c60c0e */
  goto L_10c60c0e;
  /* 10c60bf7 mov eax, 1 */
  EAX = (0x1u);
  /* 10c60bfc ret  */
  ESPCHK(0x10c60ad0u, _esp0);
  ESP += 4; return;
  /* 10c60bfd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c60c00 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10c60c07 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c60c0e:;
  /* 10c60c0e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60c12 jne 0x10c60c1b */
  if (!C.zf) goto L_10c60c1b;
  /* 10c60c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60c16 jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60c1b:;
  /* 10c60c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60c1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c60c22 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60c23 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c60c26 push edx */
  push32((uint32_t)(EDX));
  /* 10c60c27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60c2a push eax */
  push32((uint32_t)(EAX));
  /* 10c60c2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10c60c2f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c60c34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c60c37 push edx */
  push32((uint32_t)(EDX));
  /* 10c60c38 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c60c3eu);
  /* 10c60c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c60c40 jne 0x10c60c49 */
  if (!C.zf) goto L_10c60c49;
  /* 10c60c42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60c44 jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60c49:;
  /* 10c60c49 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c60c50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c60c53 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10c60c57 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60c5a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c60c5c call 0x10c55810 */
  push32(0x10c60c61u); f_10c55810();
  /* 10c60c61 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10c60c64 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c60c67 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c60c6a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c60c6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c60c74 jmp 0x10c60c8d */
  goto L_10c60c8d;
  /* 10c60c76 mov eax, 1 */
  EAX = (0x1u);
  /* 10c60c7b ret  */
  ESPCHK(0x10c60ad0u, _esp0);
  ESP += 4; return;
  /* 10c60c7c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c60c7f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c60c86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c60c8d:;
  /* 10c60c8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60c91 jne 0x10c60c9a */
  if (!C.zf) goto L_10c60c9a;
  /* 10c60c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60c95 jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60c9a:;
  /* 10c60c9a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60c9e jne 0x10c60ca9 */
  if (!C.zf) goto L_10c60ca9;
  /* 10c60ca0 mov edx, dword ptr [0x10c7e600] */
  EDX = (r32((uint32_t)(0x10c7e600)));
  /* 10c60ca6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10c60ca9:;
  /* 10c60ca9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60cac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c60caf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10c60cb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60cb8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c60cbb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10c60cc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c60cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60cc6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c60cc9 push edx */
  push32((uint32_t)(EDX));
  /* 10c60cca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c60ccd push eax */
  push32((uint32_t)(EAX));
  /* 10c60cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60cd2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c60cd5 push edx */
  push32((uint32_t)(EDX));
  /* 10c60cd6 call dword ptr [0x10c802ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802ec))), 0x10c60cdcu);
  /* 10c60cdc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c60cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60ce2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c60ce5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60ce7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10c60cec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60cf2 je 0x10c60d08 */
  if (C.zf) goto L_10c60d08;
  /* 10c60cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60cf7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c60cfa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60cfc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c60d00 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60d06 je 0x10c60d0c */
  if (C.zf) goto L_10c60d0c;
L_10c60d08:;
  /* 10c60d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60d0a jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60d0c:;
  /* 10c60d0c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60d0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c60d11 push eax */
  push32((uint32_t)(EAX));
  /* 10c60d12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c60d15 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60d16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c60d19 push edx */
  push32((uint32_t)(EDX));
  /* 10c60d1a call 0x10c5a560 */
  push32(0x10c60d1fu); f_10c5a560();
  /* 10c60d1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60d22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c60d25 jmp 0x10c60d29 */
  goto L_10c60d29;
L_10c60d27:;
  /* 10c60d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c60d29:;
  /* 10c60d29 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10c60d2c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c60d2f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c60d36 pop edi */
  EDI = (pop32());
  /* 10c60d37 pop esi */
  ESI = (pop32());
  /* 10c60d38 pop ebx */
  EBX = (pop32());
  /* 10c60d39 mov esp, ebp */
  ESP = (EBP);
  /* 10c60d3b pop ebp */
  EBP = (pop32());
  /* 10c60d3c ret  */
  ESPCHK(0x10c60ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d40 @ 0x10c60d40 (208 bytes, 85 insns) */
void f_10c60d40(void) {
  FTRACE(0x10c60d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60d41 mov ebp, esp */
  EBP = (ESP);
  /* 10c60d43 push edi */
  push32((uint32_t)(EDI));
  /* 10c60d44 push esi */
  push32((uint32_t)(ESI));
  /* 10c60d45 push ebx */
  push32((uint32_t)(EBX));
  /* 10c60d46 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60d49 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60d4c lea eax, [0x10c7e5f8] */
  EAX = ((uint32_t)(0x10c7e5f8));
  /* 10c60d52 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60d56 jne 0x10c60d93 */
  if (!C.zf) goto L_10c60d93;
  /* 10c60d58 mov al, 0xff */
  AL = (0xffu);
  /* 10c60d5a mov edi, edi */
  EDI = (EDI);
L_10c60d5c:;
  /* 10c60d5c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c60d5e je 0x10c60d8e */
  if (C.zf) goto L_10c60d8e;
  /* 10c60d60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c60d62 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c60d63 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10c60d65 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c60d66 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60d68 je 0x10c60d5c */
  if (C.zf) goto L_10c60d5c;
  /* 10c60d6a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c60d6c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60d6e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c60d70 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c60d73 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c60d75 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c60d77 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10c60d79 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c60d7b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60d7d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c60d7f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c60d82 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c60d84 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c60d86 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60d88 je 0x10c60d5c */
  if (C.zf) goto L_10c60d5c;
  /* 10c60d8a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c60d8c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10c60d8e:;
  /* 10c60d8e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10c60d91 jmp 0x10c60e0b */
  goto L_10c60e0b;
L_10c60d93:;
  /* 10c60d93 lock inc dword ptr [0x10c7e78c] */
  x86_unimpl("lock inc @ 0x10c60d93");
  /* 10c60d9a cmp dword ptr [0x10c7e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60da1 jg 0x10c60da7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c60da7;
  /* 10c60da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60da5 jmp 0x10c60dbc */
  goto L_10c60dbc;
L_10c60da7:;
  /* 10c60da7 lock dec dword ptr [0x10c7e78c] */
  x86_unimpl("lock dec @ 0x10c60da7");
  /* 10c60dae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c60db0 call 0x10c56070 */
  push32(0x10c60db5u); f_10c56070();
  /* 10c60db5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10c60dbc:;
  /* 10c60dbc mov eax, 0xff */
  EAX = (0xffu);
  /* 10c60dc1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10c60dc3 nop  */
  /* nop */
L_10c60dc4:;
  /* 10c60dc4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c60dc6 je 0x10c60def */
  if (C.zf) goto L_10c60def;
  /* 10c60dc8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c60dca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c60dcb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10c60dcd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c60dce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60dd0 je 0x10c60dc4 */
  if (C.zf) goto L_10c60dc4;
  /* 10c60dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10c60dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 10c60dd4 call 0x10c61eb0 */
  push32(0x10c60dd9u); f_10c61eb0();
  /* 10c60dd9 mov ebx, eax */
  EBX = (EAX);
  /* 10c60ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60dde call 0x10c61eb0 */
  push32(0x10c60de3u); f_10c61eb0();
  /* 10c60de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60de6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60de8 je 0x10c60dc4 */
  if (C.zf) goto L_10c60dc4;
  /* 10c60dea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c60dec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c60def:;
  /* 10c60def mov ebx, eax */
  EBX = (EAX);
  /* 10c60df1 pop eax */
  EAX = (pop32());
  /* 10c60df2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60df4 jne 0x10c60dff */
  if (!C.zf) goto L_10c60dff;
  /* 10c60df6 lock dec dword ptr [0x10c7e78c] */
  x86_unimpl("lock dec @ 0x10c60df6");
  /* 10c60dfd jmp 0x10c60e09 */
  goto L_10c60e09;
L_10c60dff:;
  /* 10c60dff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c60e01 call 0x10c56110 */
  push32(0x10c60e06u); f_10c56110();
  /* 10c60e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c60e09:;
  /* 10c60e09 mov eax, ebx */
  EAX = (EBX);
L_10c60e0b:;
  /* 10c60e0b pop ebx */
  EBX = (pop32());
  /* 10c60e0c pop esi */
  ESI = (pop32());
  /* 10c60e0d pop edi */
  EDI = (pop32());
  /* 10c60e0e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c60e0f ret  */
  ESPCHK(0x10c60d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e10 @ 0x10c60e10 (257 bytes, 103 insns) */
void f_10c60e10(void) {
  FTRACE(0x10c60e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60e11 mov ebp, esp */
  EBP = (ESP);
  /* 10c60e13 push edi */
  push32((uint32_t)(EDI));
  /* 10c60e14 push esi */
  push32((uint32_t)(ESI));
  /* 10c60e15 push ebx */
  push32((uint32_t)(EBX));
  /* 10c60e16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c60e19 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c60e1b je 0x10c60f0a */
  if (C.zf) goto L_10c60f0a;
  /* 10c60e21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60e24 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c60e27 lea eax, [0x10c7e5f8] */
  EAX = ((uint32_t)(0x10c7e5f8));
  /* 10c60e2d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60e31 jne 0x10c60e81 */
  if (!C.zf) goto L_10c60e81;
  /* 10c60e33 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10c60e35 mov bl, 0x5a */
  BL = (0x5au);
  /* 10c60e37 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10c60e39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c60e3c:;
  /* 10c60e3c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10c60e3e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c60e40 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10c60e42 je 0x10c60e65 */
  if (C.zf) goto L_10c60e65;
  /* 10c60e44 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c60e46 je 0x10c60e65 */
  if (C.zf) goto L_10c60e65;
  /* 10c60e48 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c60e49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c60e4a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60e4c jb 0x10c60e54 */
  if (C.cf) goto L_10c60e54;
  /* 10c60e4e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60e50 ja 0x10c60e54 */
  if ((!C.cf&&!C.zf)) goto L_10c60e54;
  /* 10c60e52 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10c60e54:;
  /* 10c60e54 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60e56 jb 0x10c60e5e */
  if (C.cf) goto L_10c60e5e;
  /* 10c60e58 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60e5a ja 0x10c60e5e */
  if ((!C.cf&&!C.zf)) goto L_10c60e5e;
  /* 10c60e5c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10c60e5e:;
  /* 10c60e5e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60e60 jne 0x10c60e6f */
  if (!C.zf) goto L_10c60e6f;
  /* 10c60e62 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c60e63 jne 0x10c60e3c */
  if (!C.zf) goto L_10c60e3c;
L_10c60e65:;
  /* 10c60e65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c60e67 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c60e69 je 0x10c60f0a */
  if (C.zf) goto L_10c60f0a;
L_10c60e6f:;
  /* 10c60e6f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10c60e74 jb 0x10c60f0a */
  if (C.cf) goto L_10c60f0a;
  /* 10c60e7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c60e7c jmp 0x10c60f0a */
  goto L_10c60f0a;
L_10c60e81:;
  /* 10c60e81 lock inc dword ptr [0x10c7e78c] */
  x86_unimpl("lock inc @ 0x10c60e81");
  /* 10c60e88 cmp dword ptr [0x10c7e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60e8f jg 0x10c60e95 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c60e95;
  /* 10c60e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c60e93 jmp 0x10c60eae */
  goto L_10c60eae;
L_10c60e95:;
  /* 10c60e95 lock dec dword ptr [0x10c7e78c] */
  x86_unimpl("lock dec @ 0x10c60e95");
  /* 10c60e9c mov ebx, ecx */
  EBX = (ECX);
  /* 10c60e9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c60ea0 call 0x10c56070 */
  push32(0x10c60ea5u); f_10c56070();
  /* 10c60ea5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10c60eac mov ecx, ebx */
  ECX = (EBX);
L_10c60eae:;
  /* 10c60eae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60eb0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10c60eb2 mov edi, edi */
  EDI = (EDI);
L_10c60eb4:;
  /* 10c60eb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c60eb6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60eb8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10c60eba je 0x10c60edf */
  if (C.zf) goto L_10c60edf;
  /* 10c60ebc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10c60ebe je 0x10c60edf */
  if (C.zf) goto L_10c60edf;
  /* 10c60ec0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c60ec1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c60ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60ec3 push eax */
  push32((uint32_t)(EAX));
  /* 10c60ec4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c60ec5 call 0x10c61eb0 */
  push32(0x10c60ecau); f_10c61eb0();
  /* 10c60eca mov ebx, eax */
  EBX = (EAX);
  /* 10c60ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60ecf call 0x10c61eb0 */
  push32(0x10c60ed4u); f_10c61eb0();
  /* 10c60ed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60ed7 pop ecx */
  ECX = (pop32());
  /* 10c60ed8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60eda jne 0x10c60ee5 */
  if (!C.zf) goto L_10c60ee5;
  /* 10c60edc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c60edd jne 0x10c60eb4 */
  if (!C.zf) goto L_10c60eb4;
L_10c60edf:;
  /* 10c60edf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c60ee1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60ee3 je 0x10c60eee */
  if (C.zf) goto L_10c60eee;
L_10c60ee5:;
  /* 10c60ee5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10c60eea jb 0x10c60eee */
  if (C.cf) goto L_10c60eee;
  /* 10c60eec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10c60eee:;
  /* 10c60eee pop eax */
  EAX = (pop32());
  /* 10c60eef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60ef1 jne 0x10c60efc */
  if (!C.zf) goto L_10c60efc;
  /* 10c60ef3 lock dec dword ptr [0x10c7e78c] */
  x86_unimpl("lock dec @ 0x10c60ef3");
  /* 10c60efa jmp 0x10c60f0a */
  goto L_10c60f0a;
L_10c60efc:;
  /* 10c60efc mov ebx, ecx */
  EBX = (ECX);
  /* 10c60efe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c60f00 call 0x10c56110 */
  push32(0x10c60f05u); f_10c56110();
  /* 10c60f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60f08 mov ecx, ebx */
  ECX = (EBX);
L_10c60f0a:;
  /* 10c60f0a mov eax, ecx */
  EAX = (ECX);
  /* 10c60f0c pop ebx */
  EBX = (pop32());
  /* 10c60f0d pop esi */
  ESI = (pop32());
  /* 10c60f0e pop edi */
  EDI = (pop32());
  /* 10c60f0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c60f10 ret  */
  ESPCHK(0x10c60e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f20 @ 0x10c60f20 (255 bytes, 88 insns) */
void f_10c60f20(void) {
  FTRACE(0x10c60f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c60f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c60f21 mov ebp, esp */
  EBP = (ESP);
  /* 10c60f23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10c60f26:;
  /* 10c60f26 cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60f2d jle 0x10c60f46 */
  if ((C.zf||C.sf!=C.of)) goto L_10c60f46;
  /* 10c60f2f push 8 */
  push32((uint32_t)(0x8u));
  /* 10c60f31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60f34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c60f36 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c60f38 push ecx */
  push32((uint32_t)(ECX));
  /* 10c60f39 call 0x10c58680 */
  push32(0x10c60f3eu); f_10c58680();
  /* 10c60f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60f41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c60f44 jmp 0x10c60f5f */
  goto L_10c60f5f;
L_10c60f46:;
  /* 10c60f46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60f4b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c60f4d mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c60f53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60f55 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c60f59 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c60f5c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c60f5f:;
  /* 10c60f5f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60f63 je 0x10c60f70 */
  if (C.zf) goto L_10c60f70;
  /* 10c60f65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60f68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60f6b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c60f6e jmp 0x10c60f26 */
  goto L_10c60f26;
L_10c60f70:;
  /* 10c60f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60f73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60f75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c60f77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c60f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60f7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60f80 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c60f83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60f86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c60f89 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60f8d je 0x10c60f95 */
  if (C.zf) goto L_10c60f95;
  /* 10c60f8f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60f93 jne 0x10c60fa8 */
  if (!C.zf) goto L_10c60fa8;
L_10c60f95:;
  /* 10c60f95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60f98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c60f9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c60f9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c60f9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60fa5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c60fa8:;
  /* 10c60fa8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c60faf:;
  /* 10c60faf cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60fb6 jle 0x10c60fcb */
  if ((C.zf||C.sf!=C.of)) goto L_10c60fcb;
  /* 10c60fb8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c60fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60fbd push edx */
  push32((uint32_t)(EDX));
  /* 10c60fbe call 0x10c58680 */
  push32(0x10c60fc3u); f_10c58680();
  /* 10c60fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c60fc6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c60fc9 jmp 0x10c60fe0 */
  goto L_10c60fe0;
L_10c60fcb:;
  /* 10c60fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60fce mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c60fd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c60fd6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c60fda and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c60fdd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c60fe0:;
  /* 10c60fe0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c60fe4 je 0x10c6100b */
  if (C.zf) goto L_10c6100b;
  /* 10c60fe6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c60fe9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c60fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c60fef lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10c60ff3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c60ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c60ff9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c60ffb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c60ffd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c61000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61003 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61006 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c61009 jmp 0x10c60faf */
  goto L_10c60faf;
L_10c6100b:;
  /* 10c6100b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6100f jne 0x10c61018 */
  if (!C.zf) goto L_10c61018;
  /* 10c61011 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c61014 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c61016 jmp 0x10c6101b */
  goto L_10c6101b;
L_10c61018:;
  /* 10c61018 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c6101b:;
  /* 10c6101b mov esp, ebp */
  ESP = (EBP);
  /* 10c6101d pop ebp */
  EBP = (pop32());
  /* 10c6101e ret  */
  ESPCHK(0x10c60f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011020 @ 0x10c61020 (17 bytes, 8 insns) */
void f_10c61020(void) {
  FTRACE(0x10c61020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61020 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61021 mov ebp, esp */
  EBP = (ESP);
  /* 10c61023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61026 push eax */
  push32((uint32_t)(EAX));
  /* 10c61027 call 0x10c60f20 */
  push32(0x10c6102cu); f_10c60f20();
  /* 10c6102c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6102f pop ebp */
  EBP = (pop32());
  /* 10c61030 ret  */
  ESPCHK(0x10c61020u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x10c61040 (297 bytes, 106 insns) */
void f_10c61040(void) {
  FTRACE(0x10c61040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61040 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61041 mov ebp, esp */
  EBP = (ESP);
  /* 10c61043 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61046 push esi */
  push32((uint32_t)(ESI));
L_10c61047:;
  /* 10c61047 cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6104e jle 0x10c61067 */
  if ((C.zf||C.sf!=C.of)) goto L_10c61067;
  /* 10c61050 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c61052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61055 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61057 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c61059 push ecx */
  push32((uint32_t)(ECX));
  /* 10c6105a call 0x10c58680 */
  push32(0x10c6105fu); f_10c58680();
  /* 10c6105f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61062 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c61065 jmp 0x10c61080 */
  goto L_10c61080;
L_10c61067:;
  /* 10c61067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6106a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6106c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c6106e mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c61074 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61076 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c6107a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c6107d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c61080:;
  /* 10c61080 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61084 je 0x10c61091 */
  if (C.zf) goto L_10c61091;
  /* 10c61086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6108c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c6108f jmp 0x10c61047 */
  goto L_10c61047;
L_10c61091:;
  /* 10c61091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61096 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c61098 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c6109b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6109e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c610a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c610a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c610a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c610aa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c610ae je 0x10c610b6 */
  if (C.zf) goto L_10c610b6;
  /* 10c610b0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c610b4 jne 0x10c610c9 */
  if (!C.zf) goto L_10c610c9;
L_10c610b6:;
  /* 10c610b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c610b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c610bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c610bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c610c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c610c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c610c6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c610c9:;
  /* 10c610c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c610d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c610d7:;
  /* 10c610d7 cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c610de jle 0x10c610f3 */
  if ((C.zf||C.sf!=C.of)) goto L_10c610f3;
  /* 10c610e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c610e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c610e5 push edx */
  push32((uint32_t)(EDX));
  /* 10c610e6 call 0x10c58680 */
  push32(0x10c610ebu); f_10c58680();
  /* 10c610eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c610ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c610f1 jmp 0x10c61108 */
  goto L_10c61108;
L_10c610f3:;
  /* 10c610f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c610f6 mov ecx, dword ptr [0x10c7cc98] */
  ECX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c610fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c610fe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c61102 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c61105 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10c61108:;
  /* 10c61108 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6110c je 0x10c61149 */
  if (C.zf) goto L_10c61149;
  /* 10c6110e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61110 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c61112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c61115 push eax */
  push32((uint32_t)(EAX));
  /* 10c61116 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61119 push ecx */
  push32((uint32_t)(ECX));
  /* 10c6111a call 0x10c61fe0 */
  push32(0x10c6111fu); f_10c61fe0();
  /* 10c6111f mov ecx, eax */
  ECX = (EAX);
  /* 10c61121 mov esi, edx */
  ESI = (EDX);
  /* 10c61123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c61126 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61129 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c6112a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6112c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6112e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c61131 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10c61134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61139 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c6113b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c6113e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61141 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61144 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c61147 jmp 0x10c610d7 */
  goto L_10c610d7;
L_10c61149:;
  /* 10c61149 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6114d jne 0x10c6115e */
  if (!C.zf) goto L_10c6115e;
  /* 10c6114f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61152 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c61154 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c61157 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6115a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c6115c jmp 0x10c61164 */
  goto L_10c61164;
L_10c6115e:;
  /* 10c6115e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61161 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10c61164:;
  /* 10c61164 pop esi */
  ESI = (pop32());
  /* 10c61165 mov esp, ebp */
  ESP = (EBP);
  /* 10c61167 pop ebp */
  EBP = (pop32());
  /* 10c61168 ret  */
  ESPCHK(0x10c61040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011170 @ 0x10c61170 (61 bytes, 18 insns) */
void f_10c61170(void) {
  FTRACE(0x10c61170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61170 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61171 mov ebp, esp */
  EBP = (ESP);
  /* 10c61173 cmp dword ptr [0x10c7e758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6117a jne 0x10c611ab */
  if (!C.zf) goto L_10c611ab;
  /* 10c6117c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c6117e call 0x10c56070 */
  push32(0x10c61183u); f_10c56070();
  /* 10c61183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61186 cmp dword ptr [0x10c7e758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6118d jne 0x10c611a1 */
  if (!C.zf) goto L_10c611a1;
  /* 10c6118f call 0x10c611d0 */
  push32(0x10c61194u); f_10c611d0();
  /* 10c61194 mov eax, dword ptr [0x10c7e758] */
  EAX = (r32((uint32_t)(0x10c7e758)));
  /* 10c61199 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6119c mov dword ptr [0x10c7e758], eax */
  w32((uint32_t)(0x10c7e758), (EAX));
L_10c611a1:;
  /* 10c611a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c611a3 call 0x10c56110 */
  push32(0x10c611a8u); f_10c56110();
  /* 10c611a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c611ab:;
  /* 10c611ab pop ebp */
  EBP = (pop32());
  /* 10c611ac ret  */
  ESPCHK(0x10c61170u, _esp0);
  ESP += 4; return;
}

/* FUN_100111b0 @ 0x10c611b0 (30 bytes, 11 insns) */
void f_10c611b0(void) {
  FTRACE(0x10c611b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c611b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c611b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c611b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c611b5 call 0x10c56070 */
  push32(0x10c611bau); f_10c56070();
  /* 10c611ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c611bd call 0x10c611d0 */
  push32(0x10c611c2u); f_10c611d0();
  /* 10c611c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c611c4 call 0x10c56110 */
  push32(0x10c611c9u); f_10c56110();
  /* 10c611c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c611cc pop ebp */
  EBP = (pop32());
  /* 10c611cd ret  */
  ESPCHK(0x10c611b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x10c611d0 (939 bytes, 266 insns) */
void f_10c611d0(void) {
  FTRACE(0x10c611d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c611d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c611d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c611d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c611d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c611dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c611df call 0x10c56070 */
  push32(0x10c611e4u); f_10c56070();
  /* 10c611e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c611e7 mov dword ptr [0x10c7e6a0], 0 */
  w32((uint32_t)(0x10c7e6a0), (0x0u));
  /* 10c611f1 mov dword ptr [0x10c7de38], 0xffffffff */
  w32((uint32_t)(0x10c7de38), (0xffffffffu));
  /* 10c611fb mov eax, dword ptr [0x10c7de38] */
  EAX = (r32((uint32_t)(0x10c7de38)));
  /* 10c61200 mov dword ptr [0x10c7de28], eax */
  w32((uint32_t)(0x10c7de28), (EAX));
  /* 10c61205 push 0x10c7a820 */
  push32((uint32_t)(0x10c7a820u));
  /* 10c6120a call 0x10c62050 */
  push32(0x10c6120fu); f_10c62050();
  /* 10c6120f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61212 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c61215 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61219 jne 0x10c61353 */
  if (!C.zf) goto L_10c61353;
  /* 10c6121f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c61221 call 0x10c56110 */
  push32(0x10c61226u); f_10c56110();
  /* 10c61226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61229 push 0x10c7e6a8 */
  push32((uint32_t)(0x10c7e6a8u));
  /* 10c6122e call dword ptr [0x10c802a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a0))), 0x10c61234u);
  /* 10c61234 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61237 je 0x10c6134e */
  if (C.zf) goto L_10c6134e;
  /* 10c6123d mov dword ptr [0x10c7e6a0], 1 */
  w32((uint32_t)(0x10c7e6a0), (0x1u));
  /* 10c61247 mov ecx, dword ptr [0x10c7e6a8] */
  ECX = (r32((uint32_t)(0x10c7e6a8)));
  /* 10c6124d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61250 mov dword ptr [0x10c7dd90], ecx */
  w32((uint32_t)(0x10c7dd90), (ECX));
  /* 10c61256 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61258 mov dx, word ptr [0x10c7e6ee] */
  DX = (r16((uint32_t)(0x10c7e6ee)));
  /* 10c6125f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c61261 je 0x10c61279 */
  if (C.zf) goto L_10c61279;
  /* 10c61263 mov eax, dword ptr [0x10c7e6fc] */
  EAX = (r32((uint32_t)(0x10c7e6fc)));
  /* 10c61268 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c6126b mov ecx, dword ptr [0x10c7dd90] */
  ECX = (r32((uint32_t)(0x10c7dd90)));
  /* 10c61271 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61273 mov dword ptr [0x10c7dd90], ecx */
  w32((uint32_t)(0x10c7dd90), (ECX));
L_10c61279:;
  /* 10c61279 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6127b mov dx, word ptr [0x10c7e742] */
  DX = (r16((uint32_t)(0x10c7e742)));
  /* 10c61282 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c61284 je 0x10c612ae */
  if (C.zf) goto L_10c612ae;
  /* 10c61286 cmp dword ptr [0x10c7e750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6128d je 0x10c612ae */
  if (C.zf) goto L_10c612ae;
  /* 10c6128f mov dword ptr [0x10c7dd94], 1 */
  w32((uint32_t)(0x10c7dd94), (0x1u));
  /* 10c61299 mov eax, dword ptr [0x10c7e750] */
  EAX = (r32((uint32_t)(0x10c7e750)));
  /* 10c6129e sub eax, dword ptr [0x10c7e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7e6fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c612a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c612a7 mov dword ptr [0x10c7dd98], eax */
  w32((uint32_t)(0x10c7dd98), (EAX));
  /* 10c612ac jmp 0x10c612c2 */
  goto L_10c612c2;
L_10c612ae:;
  /* 10c612ae mov dword ptr [0x10c7dd94], 0 */
  w32((uint32_t)(0x10c7dd94), (0x0u));
  /* 10c612b8 mov dword ptr [0x10c7dd98], 0 */
  w32((uint32_t)(0x10c7dd98), (0x0u));
L_10c612c2:;
  /* 10c612c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c612c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c612c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c612c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c612ca mov edx, dword ptr [0x10c7de1c] */
  EDX = (r32((uint32_t)(0x10c7de1c)));
  /* 10c612d0 push edx */
  push32((uint32_t)(EDX));
  /* 10c612d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c612d3 push 0x10c7e6ac */
  push32((uint32_t)(0x10c7e6acu));
  /* 10c612d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c612dd mov eax, dword ptr [0x10c7e610] */
  EAX = (r32((uint32_t)(0x10c7e610)));
  /* 10c612e2 push eax */
  push32((uint32_t)(EAX));
  /* 10c612e3 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c612e9u);
  /* 10c612e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c612eb je 0x10c612ff */
  if (C.zf) goto L_10c612ff;
  /* 10c612ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c612f1 jne 0x10c612ff */
  if (!C.zf) goto L_10c612ff;
  /* 10c612f3 mov ecx, dword ptr [0x10c7de1c] */
  ECX = (r32((uint32_t)(0x10c7de1c)));
  /* 10c612f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10c612fd jmp 0x10c61308 */
  goto L_10c61308;
L_10c612ff:;
  /* 10c612ff mov edx, dword ptr [0x10c7de1c] */
  EDX = (r32((uint32_t)(0x10c7de1c)));
  /* 10c61305 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10c61308:;
  /* 10c61308 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c6130b push eax */
  push32((uint32_t)(EAX));
  /* 10c6130c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6130e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c61310 mov ecx, dword ptr [0x10c7de20] */
  ECX = (r32((uint32_t)(0x10c7de20)));
  /* 10c61316 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61317 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61319 push 0x10c7e700 */
  push32((uint32_t)(0x10c7e700u));
  /* 10c6131e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c61323 mov edx, dword ptr [0x10c7e610] */
  EDX = (r32((uint32_t)(0x10c7e610)));
  /* 10c61329 push edx */
  push32((uint32_t)(EDX));
  /* 10c6132a call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c61330u);
  /* 10c61330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61332 je 0x10c61345 */
  if (C.zf) goto L_10c61345;
  /* 10c61334 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61338 jne 0x10c61345 */
  if (!C.zf) goto L_10c61345;
  /* 10c6133a mov eax, dword ptr [0x10c7de20] */
  EAX = (r32((uint32_t)(0x10c7de20)));
  /* 10c6133f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10c61343 jmp 0x10c6134e */
  goto L_10c6134e;
L_10c61345:;
  /* 10c61345 mov ecx, dword ptr [0x10c7de20] */
  ECX = (r32((uint32_t)(0x10c7de20)));
  /* 10c6134b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10c6134e:;
  /* 10c6134e jmp 0x10c61577 */
  goto L_10c61577;
L_10c61353:;
  /* 10c61353 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61356 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c61359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c6135b je 0x10c6137d */
  if (C.zf) goto L_10c6137d;
  /* 10c6135d cmp dword ptr [0x10c7e754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61364 je 0x10c6138c */
  if (C.zf) goto L_10c6138c;
  /* 10c61366 mov ecx, dword ptr [0x10c7e754] */
  ECX = (r32((uint32_t)(0x10c7e754)));
  /* 10c6136c push ecx */
  push32((uint32_t)(ECX));
  /* 10c6136d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61370 push edx */
  push32((uint32_t)(EDX));
  /* 10c61371 call 0x10c5e300 */
  push32(0x10c61376u); f_10c5e300();
  /* 10c61376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c6137b jne 0x10c6138c */
  if (!C.zf) goto L_10c6138c;
L_10c6137d:;
  /* 10c6137d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c6137f call 0x10c56110 */
  push32(0x10c61384u); f_10c56110();
  /* 10c61384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61387 jmp 0x10c61577 */
  goto L_10c61577;
L_10c6138c:;
  /* 10c6138c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c6138e mov eax, dword ptr [0x10c7e754] */
  EAX = (r32((uint32_t)(0x10c7e754)));
  /* 10c61393 push eax */
  push32((uint32_t)(EAX));
  /* 10c61394 call 0x10c53100 */
  push32(0x10c61399u); f_10c53100();
  /* 10c61399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6139c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10c613a1 push 0x10c7a818 */
  push32((uint32_t)(0x10c7a818u));
  /* 10c613a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c613a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c613ab push ecx */
  push32((uint32_t)(ECX));
  /* 10c613ac call 0x10c554a0 */
  push32(0x10c613b1u); f_10c554a0();
  /* 10c613b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c613b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c613b7 push eax */
  push32((uint32_t)(EAX));
  /* 10c613b8 call 0x10c52670 */
  push32(0x10c613bdu); f_10c52670();
  /* 10c613bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c613c0 mov dword ptr [0x10c7e754], eax */
  w32((uint32_t)(0x10c7e754), (EAX));
  /* 10c613c5 cmp dword ptr [0x10c7e754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c613cc jne 0x10c613dd */
  if (!C.zf) goto L_10c613dd;
  /* 10c613ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c613d0 call 0x10c56110 */
  push32(0x10c613d5u); f_10c56110();
  /* 10c613d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c613d8 jmp 0x10c61577 */
  goto L_10c61577;
L_10c613dd:;
  /* 10c613dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c613e0 push edx */
  push32((uint32_t)(EDX));
  /* 10c613e1 mov eax, dword ptr [0x10c7e754] */
  EAX = (r32((uint32_t)(0x10c7e754)));
  /* 10c613e6 push eax */
  push32((uint32_t)(EAX));
  /* 10c613e7 call 0x10c55620 */
  push32(0x10c613ecu); f_10c55620();
  /* 10c613ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c613ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c613f1 call 0x10c56110 */
  push32(0x10c613f6u); f_10c56110();
  /* 10c613f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c613f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c613fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c613fe push ecx */
  push32((uint32_t)(ECX));
  /* 10c613ff mov edx, dword ptr [0x10c7de1c] */
  EDX = (r32((uint32_t)(0x10c7de1c)));
  /* 10c61405 push edx */
  push32((uint32_t)(EDX));
  /* 10c61406 call 0x10c55e90 */
  push32(0x10c6140bu); f_10c55e90();
  /* 10c6140b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6140e mov eax, dword ptr [0x10c7de1c] */
  EAX = (r32((uint32_t)(0x10c7de1c)));
  /* 10c61413 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10c61417 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6141a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6141d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c61420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61423 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c61426 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61429 jne 0x10c6143d */
  if (!C.zf) goto L_10c6143d;
  /* 10c6142b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6142e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61431 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c61434 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61437 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6143a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c6143d:;
  /* 10c6143d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61440 push eax */
  push32((uint32_t)(EAX));
  /* 10c61441 call 0x10c60f20 */
  push32(0x10c61446u); f_10c60f20();
  /* 10c61446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61449 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c6144f mov dword ptr [0x10c7dd90], eax */
  w32((uint32_t)(0x10c7dd90), (EAX));
L_10c61454:;
  /* 10c61454 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61457 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c6145a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6145d je 0x10c61475 */
  if (C.zf) goto L_10c61475;
  /* 10c6145f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61462 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c61465 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61468 jl 0x10c61480 */
  if ((C.sf!=C.of)) goto L_10c61480;
  /* 10c6146a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6146d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c61470 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61473 jg 0x10c61480 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c61480;
L_10c61475:;
  /* 10c61475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61478 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6147b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c6147e jmp 0x10c61454 */
  goto L_10c61454;
L_10c61480:;
  /* 10c61480 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61483 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c61486 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61489 jne 0x10c61525 */
  if (!C.zf) goto L_10c61525;
  /* 10c6148f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61492 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61495 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c61498 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6149b push edx */
  push32((uint32_t)(EDX));
  /* 10c6149c call 0x10c60f20 */
  push32(0x10c614a1u); f_10c60f20();
  /* 10c614a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c614a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c614a7 mov ecx, dword ptr [0x10c7dd90] */
  ECX = (r32((uint32_t)(0x10c7dd90)));
  /* 10c614ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c614af mov dword ptr [0x10c7dd90], ecx */
  w32((uint32_t)(0x10c7dd90), (ECX));
L_10c614b5:;
  /* 10c614b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c614b8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c614bb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c614be jl 0x10c614d6 */
  if ((C.sf!=C.of)) goto L_10c614d6;
  /* 10c614c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c614c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c614c6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c614c9 jg 0x10c614d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c614d6;
  /* 10c614cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c614ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c614d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c614d4 jmp 0x10c614b5 */
  goto L_10c614b5;
L_10c614d6:;
  /* 10c614d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c614d9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c614dc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c614df jne 0x10c61525 */
  if (!C.zf) goto L_10c61525;
  /* 10c614e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c614e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c614e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c614ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c614ed push ecx */
  push32((uint32_t)(ECX));
  /* 10c614ee call 0x10c60f20 */
  push32(0x10c614f3u); f_10c60f20();
  /* 10c614f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c614f6 mov edx, dword ptr [0x10c7dd90] */
  EDX = (r32((uint32_t)(0x10c7dd90)));
  /* 10c614fc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c614fe mov dword ptr [0x10c7dd90], edx */
  w32((uint32_t)(0x10c7dd90), (EDX));
L_10c61504:;
  /* 10c61504 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61507 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c6150a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6150d jl 0x10c61525 */
  if ((C.sf!=C.of)) goto L_10c61525;
  /* 10c6150f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61512 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c61515 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61518 jg 0x10c61525 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c61525;
  /* 10c6151a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6151d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c61523 jmp 0x10c61504 */
  goto L_10c61504;
L_10c61525:;
  /* 10c61525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61529 je 0x10c61539 */
  if (C.zf) goto L_10c61539;
  /* 10c6152b mov edx, dword ptr [0x10c7dd90] */
  EDX = (r32((uint32_t)(0x10c7dd90)));
  /* 10c61531 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c61533 mov dword ptr [0x10c7dd90], edx */
  w32((uint32_t)(0x10c7dd90), (EDX));
L_10c61539:;
  /* 10c61539 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6153c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c6153f mov dword ptr [0x10c7dd94], ecx */
  w32((uint32_t)(0x10c7dd94), (ECX));
  /* 10c61545 cmp dword ptr [0x10c7dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6154c je 0x10c6156e */
  if (C.zf) goto L_10c6156e;
  /* 10c6154e push 3 */
  push32((uint32_t)(0x3u));
  /* 10c61550 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61553 push edx */
  push32((uint32_t)(EDX));
  /* 10c61554 mov eax, dword ptr [0x10c7de20] */
  EAX = (r32((uint32_t)(0x10c7de20)));
  /* 10c61559 push eax */
  push32((uint32_t)(EAX));
  /* 10c6155a call 0x10c55e90 */
  push32(0x10c6155fu); f_10c55e90();
  /* 10c6155f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61562 mov ecx, dword ptr [0x10c7de20] */
  ECX = (r32((uint32_t)(0x10c7de20)));
  /* 10c61568 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10c6156c jmp 0x10c61577 */
  goto L_10c61577;
L_10c6156e:;
  /* 10c6156e mov edx, dword ptr [0x10c7de20] */
  EDX = (r32((uint32_t)(0x10c7de20)));
  /* 10c61574 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10c61577:;
  /* 10c61577 mov esp, ebp */
  ESP = (EBP);
  /* 10c61579 pop ebp */
  EBP = (pop32());
  /* 10c6157a ret  */
  ESPCHK(0x10c611d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011580 @ 0x10c61580 (46 bytes, 18 insns) */
void f_10c61580(void) {
  FTRACE(0x10c61580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61580 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61581 mov ebp, esp */
  EBP = (ESP);
  /* 10c61583 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61584 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c61586 call 0x10c56070 */
  push32(0x10c6158bu); f_10c56070();
  /* 10c6158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6158e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61591 push eax */
  push32((uint32_t)(EAX));
  /* 10c61592 call 0x10c615b0 */
  push32(0x10c61597u); f_10c615b0();
  /* 10c61597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6159a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c6159d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c6159f call 0x10c56110 */
  push32(0x10c615a4u); f_10c56110();
  /* 10c615a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c615a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c615aa mov esp, ebp */
  ESP = (EBP);
  /* 10c615ac pop ebp */
  EBP = (pop32());
  /* 10c615ad ret  */
  ESPCHK(0x10c61580u, _esp0);
  ESP += 4; return;
}

/* FUN_100115b0 @ 0x10c615b0 (762 bytes, 246 insns) */
void f_10c615b0(void) {
  FTRACE(0x10c615b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c615b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c615b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c615b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c615b4 cmp dword ptr [0x10c7dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c615bb jne 0x10c615c4 */
  if (!C.zf) goto L_10c615c4;
  /* 10c615bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c615bf jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c615c4:;
  /* 10c615c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c615c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c615ca cmp ecx, dword ptr [0x10c7de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c615d0 jne 0x10c615e4 */
  if (!C.zf) goto L_10c615e4;
  /* 10c615d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c615d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c615d8 cmp eax, dword ptr [0x10c7de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c615de je 0x10c617ab */
  if (C.zf) goto L_10c617ab;
L_10c615e4:;
  /* 10c615e4 cmp dword ptr [0x10c7e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c615eb je 0x10c61765 */
  if (C.zf) goto L_10c61765;
  /* 10c615f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c615f3 mov cx, word ptr [0x10c7e740] */
  CX = (r16((uint32_t)(0x10c7e740)));
  /* 10c615fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c615fc jne 0x10c61659 */
  if (!C.zf) goto L_10c61659;
  /* 10c615fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61600 mov dx, word ptr [0x10c7e74e] */
  DX = (r16((uint32_t)(0x10c7e74e)));
  /* 10c61607 push edx */
  push32((uint32_t)(EDX));
  /* 10c61608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6160a mov ax, word ptr [0x10c7e74c] */
  AX = (r16((uint32_t)(0x10c7e74c)));
  /* 10c61610 push eax */
  push32((uint32_t)(EAX));
  /* 10c61611 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61613 mov cx, word ptr [0x10c7e74a] */
  CX = (r16((uint32_t)(0x10c7e74a)));
  /* 10c6161a push ecx */
  push32((uint32_t)(ECX));
  /* 10c6161b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6161d mov dx, word ptr [0x10c7e748] */
  DX = (r16((uint32_t)(0x10c7e748)));
  /* 10c61624 push edx */
  push32((uint32_t)(EDX));
  /* 10c61625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61629 mov ax, word ptr [0x10c7e744] */
  AX = (r16((uint32_t)(0x10c7e744)));
  /* 10c6162f push eax */
  push32((uint32_t)(EAX));
  /* 10c61630 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61632 mov cx, word ptr [0x10c7e746] */
  CX = (r16((uint32_t)(0x10c7e746)));
  /* 10c61639 push ecx */
  push32((uint32_t)(ECX));
  /* 10c6163a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6163c mov dx, word ptr [0x10c7e742] */
  DX = (r16((uint32_t)(0x10c7e742)));
  /* 10c61643 push edx */
  push32((uint32_t)(EDX));
  /* 10c61644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61647 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c6164a push ecx */
  push32((uint32_t)(ECX));
  /* 10c6164b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c6164d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c6164f call 0x10c618b0 */
  push32(0x10c61654u); f_10c618b0();
  /* 10c61654 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61657 jmp 0x10c616aa */
  goto L_10c616aa;
L_10c61659:;
  /* 10c61659 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6165b mov dx, word ptr [0x10c7e74e] */
  DX = (r16((uint32_t)(0x10c7e74e)));
  /* 10c61662 push edx */
  push32((uint32_t)(EDX));
  /* 10c61663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61665 mov ax, word ptr [0x10c7e74c] */
  AX = (r16((uint32_t)(0x10c7e74c)));
  /* 10c6166b push eax */
  push32((uint32_t)(EAX));
  /* 10c6166c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c6166e mov cx, word ptr [0x10c7e74a] */
  CX = (r16((uint32_t)(0x10c7e74a)));
  /* 10c61675 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61678 mov dx, word ptr [0x10c7e748] */
  DX = (r16((uint32_t)(0x10c7e748)));
  /* 10c6167f push edx */
  push32((uint32_t)(EDX));
  /* 10c61680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61682 mov ax, word ptr [0x10c7e746] */
  AX = (r16((uint32_t)(0x10c7e746)));
  /* 10c61688 push eax */
  push32((uint32_t)(EAX));
  /* 10c61689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6168b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6168d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c6168f mov cx, word ptr [0x10c7e742] */
  CX = (r16((uint32_t)(0x10c7e742)));
  /* 10c61696 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6169a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c6169d push eax */
  push32((uint32_t)(EAX));
  /* 10c6169e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c616a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c616a2 call 0x10c618b0 */
  push32(0x10c616a7u); f_10c618b0();
  /* 10c616a7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c616aa:;
  /* 10c616aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c616ac mov cx, word ptr [0x10c7e6ec] */
  CX = (r16((uint32_t)(0x10c7e6ec)));
  /* 10c616b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c616b5 jne 0x10c61712 */
  if (!C.zf) goto L_10c61712;
  /* 10c616b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c616b9 mov dx, word ptr [0x10c7e6fa] */
  DX = (r16((uint32_t)(0x10c7e6fa)));
  /* 10c616c0 push edx */
  push32((uint32_t)(EDX));
  /* 10c616c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c616c3 mov ax, word ptr [0x10c7e6f8] */
  AX = (r16((uint32_t)(0x10c7e6f8)));
  /* 10c616c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c616ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c616cc mov cx, word ptr [0x10c7e6f6] */
  CX = (r16((uint32_t)(0x10c7e6f6)));
  /* 10c616d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c616d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c616d6 mov dx, word ptr [0x10c7e6f4] */
  DX = (r16((uint32_t)(0x10c7e6f4)));
  /* 10c616dd push edx */
  push32((uint32_t)(EDX));
  /* 10c616de push 0 */
  push32((uint32_t)(0x0u));
  /* 10c616e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c616e2 mov ax, word ptr [0x10c7e6f0] */
  AX = (r16((uint32_t)(0x10c7e6f0)));
  /* 10c616e8 push eax */
  push32((uint32_t)(EAX));
  /* 10c616e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c616eb mov cx, word ptr [0x10c7e6f2] */
  CX = (r16((uint32_t)(0x10c7e6f2)));
  /* 10c616f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c616f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c616f5 mov dx, word ptr [0x10c7e6ee] */
  DX = (r16((uint32_t)(0x10c7e6ee)));
  /* 10c616fc push edx */
  push32((uint32_t)(EDX));
  /* 10c616fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61700 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c61703 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61704 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61706 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61708 call 0x10c618b0 */
  push32(0x10c6170du); f_10c618b0();
  /* 10c6170d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61710 jmp 0x10c61763 */
  goto L_10c61763;
L_10c61712:;
  /* 10c61712 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61714 mov dx, word ptr [0x10c7e6fa] */
  DX = (r16((uint32_t)(0x10c7e6fa)));
  /* 10c6171b push edx */
  push32((uint32_t)(EDX));
  /* 10c6171c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6171e mov ax, word ptr [0x10c7e6f8] */
  AX = (r16((uint32_t)(0x10c7e6f8)));
  /* 10c61724 push eax */
  push32((uint32_t)(EAX));
  /* 10c61725 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61727 mov cx, word ptr [0x10c7e6f6] */
  CX = (r16((uint32_t)(0x10c7e6f6)));
  /* 10c6172e push ecx */
  push32((uint32_t)(ECX));
  /* 10c6172f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c61731 mov dx, word ptr [0x10c7e6f4] */
  DX = (r16((uint32_t)(0x10c7e6f4)));
  /* 10c61738 push edx */
  push32((uint32_t)(EDX));
  /* 10c61739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6173b mov ax, word ptr [0x10c7e6f2] */
  AX = (r16((uint32_t)(0x10c7e6f2)));
  /* 10c61741 push eax */
  push32((uint32_t)(EAX));
  /* 10c61742 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61746 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61748 mov cx, word ptr [0x10c7e6ee] */
  CX = (r16((uint32_t)(0x10c7e6ee)));
  /* 10c6174f push ecx */
  push32((uint32_t)(ECX));
  /* 10c61750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61753 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c61756 push eax */
  push32((uint32_t)(EAX));
  /* 10c61757 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61759 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6175b call 0x10c618b0 */
  push32(0x10c61760u); f_10c618b0();
  /* 10c61760 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c61763:;
  /* 10c61763 jmp 0x10c617ab */
  goto L_10c617ab;
L_10c61765:;
  /* 10c61765 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61767 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61769 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6176b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c6176d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6176f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61771 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61773 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c61775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61778 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c6177b push edx */
  push32((uint32_t)(EDX));
  /* 10c6177c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c6177e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61780 call 0x10c618b0 */
  push32(0x10c61785u); f_10c618b0();
  /* 10c61785 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61788 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6178a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6178c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6178e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c61790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61794 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c61796 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c61798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6179b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c6179e push ecx */
  push32((uint32_t)(ECX));
  /* 10c6179f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c617a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c617a3 call 0x10c618b0 */
  push32(0x10c617a8u); f_10c618b0();
  /* 10c617a8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c617ab:;
  /* 10c617ab mov edx, dword ptr [0x10c7de2c] */
  EDX = (r32((uint32_t)(0x10c7de2c)));
  /* 10c617b1 cmp edx, dword ptr [0x10c7de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c617b7 jge 0x10c61804 */
  if ((C.sf==C.of)) goto L_10c61804;
  /* 10c617b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c617bc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c617bf cmp ecx, dword ptr [0x10c7de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c617c5 jl 0x10c617d5 */
  if ((C.sf!=C.of)) goto L_10c617d5;
  /* 10c617c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c617ca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c617cd cmp eax, dword ptr [0x10c7de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c617d3 jle 0x10c617dc */
  if ((C.zf||C.sf!=C.of)) goto L_10c617dc;
L_10c617d5:;
  /* 10c617d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c617d7 jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c617dc:;
  /* 10c617dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c617df mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c617e2 cmp edx, dword ptr [0x10c7de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c617e8 jle 0x10c61802 */
  if ((C.zf||C.sf!=C.of)) goto L_10c61802;
  /* 10c617ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c617ed mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c617f0 cmp ecx, dword ptr [0x10c7de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c617f6 jge 0x10c61802 */
  if ((C.sf==C.of)) goto L_10c61802;
  /* 10c617f8 mov eax, 1 */
  EAX = (0x1u);
  /* 10c617fd jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c61802:;
  /* 10c61802 jmp 0x10c61847 */
  goto L_10c61847;
L_10c61804:;
  /* 10c61804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61807 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c6180a cmp eax, dword ptr [0x10c7de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61810 jl 0x10c61820 */
  if ((C.sf!=C.of)) goto L_10c61820;
  /* 10c61812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61815 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c61818 cmp edx, dword ptr [0x10c7de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6181e jle 0x10c61827 */
  if ((C.zf||C.sf!=C.of)) goto L_10c61827;
L_10c61820:;
  /* 10c61820 mov eax, 1 */
  EAX = (0x1u);
  /* 10c61825 jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c61827:;
  /* 10c61827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6182a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c6182d cmp ecx, dword ptr [0x10c7de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61833 jle 0x10c61847 */
  if ((C.zf||C.sf!=C.of)) goto L_10c61847;
  /* 10c61835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61838 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c6183b cmp eax, dword ptr [0x10c7de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61841 jge 0x10c61847 */
  if ((C.sf==C.of)) goto L_10c61847;
  /* 10c61843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61845 jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c61847:;
  /* 10c61847 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6184a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c6184d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61853 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c61855 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6185a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c6185d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61863 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61865 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c6186b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c6186e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61871 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c61874 cmp edx, dword ptr [0x10c7de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6187a jne 0x10c61892 */
  if (!C.zf) goto L_10c61892;
  /* 10c6187c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6187f cmp eax, dword ptr [0x10c7de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61885 jl 0x10c6188e */
  if ((C.sf!=C.of)) goto L_10c6188e;
  /* 10c61887 mov eax, 1 */
  EAX = (0x1u);
  /* 10c6188c jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c6188e:;
  /* 10c6188e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61890 jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c61892:;
  /* 10c61892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c61895 cmp ecx, dword ptr [0x10c7de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6189b jge 0x10c618a4 */
  if ((C.sf==C.of)) goto L_10c618a4;
  /* 10c6189d mov eax, 1 */
  EAX = (0x1u);
  /* 10c618a2 jmp 0x10c618a6 */
  goto L_10c618a6;
L_10c618a4:;
  /* 10c618a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c618a6:;
  /* 10c618a6 mov esp, ebp */
  ESP = (EBP);
  /* 10c618a8 pop ebp */
  EBP = (pop32());
  /* 10c618a9 ret  */
  ESPCHK(0x10c615b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118b0 @ 0x10c618b0 (504 bytes, 145 insns) */
void f_10c618b0(void) {
  FTRACE(0x10c618b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c618b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c618b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c618b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c618b6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c618ba jne 0x10c6198c */
  if (!C.zf) goto L_10c6198c;
  /* 10c618c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c618c3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c618c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c618c8 jne 0x10c618d9 */
  if (!C.zf) goto L_10c618d9;
  /* 10c618ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c618cd mov edx, dword ptr [ecx*4 + 0x10c7de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7de4c)));
  /* 10c618d4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c618d7 jmp 0x10c618e6 */
  goto L_10c618e6;
L_10c618d9:;
  /* 10c618d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c618dc mov ecx, dword ptr [eax*4 + 0x10c7de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7de80)));
  /* 10c618e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c618e6:;
  /* 10c618e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c618e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c618ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c618ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c618f2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c618f5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c618fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c618fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61903 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61906 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10c61909 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10c6190d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c6190e mov ecx, 7 */
  ECX = (0x7u);
  /* 10c61913 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c61915 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c61918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6191b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6191e jge 0x10c61939 */
  if ((C.sf==C.of)) goto L_10c61939;
  /* 10c61920 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c61923 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61926 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c61929 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6192c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c6192f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61932 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61934 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c61937 jmp 0x10c6194d */
  goto L_10c6194d;
L_10c61939:;
  /* 10c61939 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c6193c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6193f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c61942 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61945 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61948 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6194a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c6194d:;
  /* 10c6194d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61951 jne 0x10c6198a */
  if (!C.zf) goto L_10c6198a;
  /* 10c61953 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61956 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10c61959 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c6195b jne 0x10c6196c */
  if (!C.zf) goto L_10c6196c;
  /* 10c6195d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c61960 mov eax, dword ptr [edx*4 + 0x10c7de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7de50)));
  /* 10c61967 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c6196a jmp 0x10c61979 */
  goto L_10c61979;
L_10c6196c:;
  /* 10c6196c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6196f mov edx, dword ptr [ecx*4 + 0x10c7de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7de84)));
  /* 10c61976 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c61979:;
  /* 10c61979 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c6197c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6197f jle 0x10c6198a */
  if ((C.zf||C.sf!=C.of)) goto L_10c6198a;
  /* 10c61981 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c61984 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61987 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c6198a:;
  /* 10c6198a jmp 0x10c619c1 */
  goto L_10c619c1;
L_10c6198c:;
  /* 10c6198c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6198f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c61992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c61994 jne 0x10c619a5 */
  if (!C.zf) goto L_10c619a5;
  /* 10c61996 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c61999 mov ecx, dword ptr [eax*4 + 0x10c7de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7de4c)));
  /* 10c619a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c619a3 jmp 0x10c619b2 */
  goto L_10c619b2;
L_10c619a5:;
  /* 10c619a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c619a8 mov eax, dword ptr [edx*4 + 0x10c7de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7de80)));
  /* 10c619af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10c619b2:;
  /* 10c619b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c619b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c619b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c619bb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c619be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c619c1:;
  /* 10c619c1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c619c5 jne 0x10c61a01 */
  if (!C.zf) goto L_10c61a01;
  /* 10c619c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c619ca mov dword ptr [0x10c7de2c], eax */
  w32((uint32_t)(0x10c7de2c), (EAX));
  /* 10c619cf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c619d2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c619d5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10c619d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c619da imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c619dd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10c619e0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c619e2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c619e8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10c619eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c619ed mov dword ptr [0x10c7de30], ecx */
  w32((uint32_t)(0x10c7de30), (ECX));
  /* 10c619f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c619f6 mov dword ptr [0x10c7de28], edx */
  w32((uint32_t)(0x10c7de28), (EDX));
  /* 10c619fc jmp 0x10c61aa4 */
  goto L_10c61aa4;
L_10c61a01:;
  /* 10c61a01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c61a04 mov dword ptr [0x10c7de3c], eax */
  w32((uint32_t)(0x10c7de3c), (EAX));
  /* 10c61a09 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c61a0c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61a0f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10c61a12 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61a14 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61a17 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10c61a1a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61a1c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61a22 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10c61a25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61a27 mov dword ptr [0x10c7de40], ecx */
  w32((uint32_t)(0x10c7de40), (ECX));
  /* 10c61a2d mov edx, dword ptr [0x10c7dd98] */
  EDX = (r32((uint32_t)(0x10c7dd98)));
  /* 10c61a33 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c61a39 mov eax, dword ptr [0x10c7de40] */
  EAX = (r32((uint32_t)(0x10c7de40)));
  /* 10c61a3e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61a40 mov dword ptr [0x10c7de40], eax */
  w32((uint32_t)(0x10c7de40), (EAX));
  /* 10c61a45 cmp dword ptr [0x10c7de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61a4c jge 0x10c61a71 */
  if ((C.sf==C.of)) goto L_10c61a71;
  /* 10c61a4e mov ecx, dword ptr [0x10c7de40] */
  ECX = (r32((uint32_t)(0x10c7de40)));
  /* 10c61a54 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61a5a mov dword ptr [0x10c7de40], ecx */
  w32((uint32_t)(0x10c7de40), (ECX));
  /* 10c61a60 mov edx, dword ptr [0x10c7de3c] */
  EDX = (r32((uint32_t)(0x10c7de3c)));
  /* 10c61a66 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61a69 mov dword ptr [0x10c7de3c], edx */
  w32((uint32_t)(0x10c7de3c), (EDX));
  /* 10c61a6f jmp 0x10c61a9b */
  goto L_10c61a9b;
L_10c61a71:;
  /* 10c61a71 cmp dword ptr [0x10c7de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10c7de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61a7b jl 0x10c61a9b */
  if ((C.sf!=C.of)) goto L_10c61a9b;
  /* 10c61a7d mov eax, dword ptr [0x10c7de40] */
  EAX = (r32((uint32_t)(0x10c7de40)));
  /* 10c61a82 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61a87 mov dword ptr [0x10c7de40], eax */
  w32((uint32_t)(0x10c7de40), (EAX));
  /* 10c61a8c mov ecx, dword ptr [0x10c7de3c] */
  ECX = (r32((uint32_t)(0x10c7de3c)));
  /* 10c61a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61a95 mov dword ptr [0x10c7de3c], ecx */
  w32((uint32_t)(0x10c7de3c), (ECX));
L_10c61a9b:;
  /* 10c61a9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61a9e mov dword ptr [0x10c7de38], edx */
  w32((uint32_t)(0x10c7de38), (EDX));
L_10c61aa4:;
  /* 10c61aa4 mov esp, ebp */
  ESP = (EBP);
  /* 10c61aa6 pop ebp */
  EBP = (pop32());
  /* 10c61aa7 ret  */
  ESPCHK(0x10c618b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ab0 @ 0x10c61ab0 (382 bytes, 135 insns) */
void f_10c61ab0(void) {
  FTRACE(0x10c61ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10c61ab3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61ab5 push 0x10c7a828 */
  push32((uint32_t)(0x10c7a828u));
  /* 10c61aba push 0x10c5b778 */
  push32((uint32_t)(0x10c5b778u));
  /* 10c61abf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c61ac5 push eax */
  push32((uint32_t)(EAX));
  /* 10c61ac6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c61acd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c61ad1 push esi */
  push32((uint32_t)(ESI));
  /* 10c61ad2 push edi */
  push32((uint32_t)(EDI));
  /* 10c61ad3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c61ad6 cmp dword ptr [0x10c7e75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61add jne 0x10c61b22 */
  if (!C.zf) goto L_10c61b22;
  /* 10c61adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61ae7 call dword ptr [0x10c8021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8021c))), 0x10c61aedu);
  /* 10c61aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61aef je 0x10c61afd */
  if (C.zf) goto L_10c61afd;
  /* 10c61af1 mov dword ptr [0x10c7e75c], 1 */
  w32((uint32_t)(0x10c7e75c), (0x1u));
  /* 10c61afb jmp 0x10c61b22 */
  goto L_10c61b22;
L_10c61afd:;
  /* 10c61afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61b05 call dword ptr [0x10c80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80308))), 0x10c61b0bu);
  /* 10c61b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61b0d je 0x10c61b1b */
  if (C.zf) goto L_10c61b1b;
  /* 10c61b0f mov dword ptr [0x10c7e75c], 2 */
  w32((uint32_t)(0x10c7e75c), (0x2u));
  /* 10c61b19 jmp 0x10c61b22 */
  goto L_10c61b22;
L_10c61b1b:;
  /* 10c61b1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61b1d jmp 0x10c61c31 */
  goto L_10c61c31;
L_10c61b22:;
  /* 10c61b22 cmp dword ptr [0x10c7e75c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e75c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61b29 jne 0x10c61b46 */
  if (!C.zf) goto L_10c61b46;
  /* 10c61b2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c61b2e push eax */
  push32((uint32_t)(EAX));
  /* 10c61b2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61b32 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61b33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c61b36 push edx */
  push32((uint32_t)(EDX));
  /* 10c61b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61b3a push eax */
  push32((uint32_t)(EAX));
  /* 10c61b3b call dword ptr [0x10c8021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8021c))), 0x10c61b41u);
  /* 10c61b41 jmp 0x10c61c31 */
  goto L_10c61c31;
L_10c61b46:;
  /* 10c61b46 cmp dword ptr [0x10c7e75c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e75c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61b4d jne 0x10c61c2f */
  if (!C.zf) goto L_10c61c2f;
  /* 10c61b53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61b57 jne 0x10c61b62 */
  if (!C.zf) goto L_10c61b62;
  /* 10c61b59 mov ecx, dword ptr [0x10c7e610] */
  ECX = (r32((uint32_t)(0x10c7e610)));
  /* 10c61b5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10c61b62:;
  /* 10c61b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61b66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c61b69 push edx */
  push32((uint32_t)(EDX));
  /* 10c61b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61b6d push eax */
  push32((uint32_t)(EAX));
  /* 10c61b6e call dword ptr [0x10c80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80308))), 0x10c61b74u);
  /* 10c61b74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c61b77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61b7b jne 0x10c61b84 */
  if (!C.zf) goto L_10c61b84;
  /* 10c61b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61b7f jmp 0x10c61c31 */
  goto L_10c61c31;
L_10c61b84:;
  /* 10c61b84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c61b8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c61b8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61b91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c61b93 call 0x10c55810 */
  push32(0x10c61b98u); f_10c55810();
  /* 10c61b98 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10c61b9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c61b9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c61ba1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c61ba4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c61bab jmp 0x10c61bc4 */
  goto L_10c61bc4;
  /* 10c61bad mov eax, 1 */
  EAX = (0x1u);
  /* 10c61bb2 ret  */
  ESPCHK(0x10c61ab0u, _esp0);
  ESP += 4; return;
  /* 10c61bb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c61bb6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c61bbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c61bc4:;
  /* 10c61bc4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61bc8 jne 0x10c61bce */
  if (!C.zf) goto L_10c61bce;
  /* 10c61bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61bcc jmp 0x10c61c31 */
  goto L_10c61c31;
L_10c61bce:;
  /* 10c61bce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c61bd1 push edx */
  push32((uint32_t)(EDX));
  /* 10c61bd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c61bd5 push eax */
  push32((uint32_t)(EAX));
  /* 10c61bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c61bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61bdd push edx */
  push32((uint32_t)(EDX));
  /* 10c61bde call dword ptr [0x10c80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80308))), 0x10c61be4u);
  /* 10c61be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61be6 jne 0x10c61bec */
  if (!C.zf) goto L_10c61bec;
  /* 10c61be8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61bea jmp 0x10c61c31 */
  goto L_10c61c31;
L_10c61bec:;
  /* 10c61bec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61bf0 jne 0x10c61c0d */
  if (!C.zf) goto L_10c61c0d;
  /* 10c61bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61bf6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61bf8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c61bfb push eax */
  push32((uint32_t)(EAX));
  /* 10c61bfc push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61bfe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c61c01 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61c02 call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c61c08u);
  /* 10c61c08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c61c0b jmp 0x10c61c2a */
  goto L_10c61c2a;
L_10c61c0d:;
  /* 10c61c0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c61c10 push edx */
  push32((uint32_t)(EDX));
  /* 10c61c11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61c14 push eax */
  push32((uint32_t)(EAX));
  /* 10c61c15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61c17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c61c1a push ecx */
  push32((uint32_t)(ECX));
  /* 10c61c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61c1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c61c20 push edx */
  push32((uint32_t)(EDX));
  /* 10c61c21 call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c61c27u);
  /* 10c61c27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c61c2a:;
  /* 10c61c2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c61c2d jmp 0x10c61c31 */
  goto L_10c61c31;
L_10c61c2f:;
  /* 10c61c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c61c31:;
  /* 10c61c31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10c61c34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c61c37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c61c3e pop edi */
  EDI = (pop32());
  /* 10c61c3f pop esi */
  ESI = (pop32());
  /* 10c61c40 pop ebx */
  EBX = (pop32());
  /* 10c61c41 mov esp, ebp */
  ESP = (EBP);
  /* 10c61c43 pop ebp */
  EBP = (pop32());
  /* 10c61c44 ret  */
  ESPCHK(0x10c61ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x10c61c50 (398 bytes, 140 insns) */
void f_10c61c50(void) {
  FTRACE(0x10c61c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61c51 mov ebp, esp */
  EBP = (ESP);
  /* 10c61c53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61c55 push 0x10c7a838 */
  push32((uint32_t)(0x10c7a838u));
  /* 10c61c5a push 0x10c5b778 */
  push32((uint32_t)(0x10c5b778u));
  /* 10c61c5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c61c65 push eax */
  push32((uint32_t)(EAX));
  /* 10c61c66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c61c6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61c70 push ebx */
  push32((uint32_t)(EBX));
  /* 10c61c71 push esi */
  push32((uint32_t)(ESI));
  /* 10c61c72 push edi */
  push32((uint32_t)(EDI));
  /* 10c61c73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c61c76 cmp dword ptr [0x10c7e760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61c7d jne 0x10c61cc2 */
  if (!C.zf) goto L_10c61cc2;
  /* 10c61c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61c87 call dword ptr [0x10c8021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8021c))), 0x10c61c8du);
  /* 10c61c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61c8f je 0x10c61c9d */
  if (C.zf) goto L_10c61c9d;
  /* 10c61c91 mov dword ptr [0x10c7e760], 1 */
  w32((uint32_t)(0x10c7e760), (0x1u));
  /* 10c61c9b jmp 0x10c61cc2 */
  goto L_10c61cc2;
L_10c61c9d:;
  /* 10c61c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61ca5 call dword ptr [0x10c80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80308))), 0x10c61cabu);
  /* 10c61cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61cad je 0x10c61cbb */
  if (C.zf) goto L_10c61cbb;
  /* 10c61caf mov dword ptr [0x10c7e760], 2 */
  w32((uint32_t)(0x10c7e760), (0x2u));
  /* 10c61cb9 jmp 0x10c61cc2 */
  goto L_10c61cc2;
L_10c61cbb:;
  /* 10c61cbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61cbd jmp 0x10c61de1 */
  goto L_10c61de1;
L_10c61cc2:;
  /* 10c61cc2 cmp dword ptr [0x10c7e760], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e760))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61cc9 jne 0x10c61ce6 */
  if (!C.zf) goto L_10c61ce6;
  /* 10c61ccb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c61cce push eax */
  push32((uint32_t)(EAX));
  /* 10c61ccf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61cd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c61cd6 push edx */
  push32((uint32_t)(EDX));
  /* 10c61cd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61cda push eax */
  push32((uint32_t)(EAX));
  /* 10c61cdb call dword ptr [0x10c80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80308))), 0x10c61ce1u);
  /* 10c61ce1 jmp 0x10c61de1 */
  goto L_10c61de1;
L_10c61ce6:;
  /* 10c61ce6 cmp dword ptr [0x10c7e760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61ced jne 0x10c61ddf */
  if (!C.zf) goto L_10c61ddf;
  /* 10c61cf3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61cf7 jne 0x10c61d02 */
  if (!C.zf) goto L_10c61d02;
  /* 10c61cf9 mov ecx, dword ptr [0x10c7e610] */
  ECX = (r32((uint32_t)(0x10c7e610)));
  /* 10c61cff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10c61d02:;
  /* 10c61d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61d06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c61d09 push edx */
  push32((uint32_t)(EDX));
  /* 10c61d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61d0d push eax */
  push32((uint32_t)(EAX));
  /* 10c61d0e call dword ptr [0x10c8021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8021c))), 0x10c61d14u);
  /* 10c61d14 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c61d17 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61d1b jne 0x10c61d24 */
  if (!C.zf) goto L_10c61d24;
  /* 10c61d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61d1f jmp 0x10c61de1 */
  goto L_10c61de1;
L_10c61d24:;
  /* 10c61d24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c61d2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c61d2e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c61d30 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61d33 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c61d35 call 0x10c55810 */
  push32(0x10c61d3au); f_10c55810();
  /* 10c61d3a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10c61d3d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c61d40 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c61d43 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c61d46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c61d4d jmp 0x10c61d66 */
  goto L_10c61d66;
  /* 10c61d4f mov eax, 1 */
  EAX = (0x1u);
  /* 10c61d54 ret  */
  ESPCHK(0x10c61c50u, _esp0);
  ESP += 4; return;
  /* 10c61d55 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c61d58 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c61d5f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c61d66:;
  /* 10c61d66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61d6a jne 0x10c61d70 */
  if (!C.zf) goto L_10c61d70;
  /* 10c61d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61d6e jmp 0x10c61de1 */
  goto L_10c61de1;
L_10c61d70:;
  /* 10c61d70 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c61d73 push edx */
  push32((uint32_t)(EDX));
  /* 10c61d74 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c61d77 push eax */
  push32((uint32_t)(EAX));
  /* 10c61d78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c61d7b push ecx */
  push32((uint32_t)(ECX));
  /* 10c61d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61d7f push edx */
  push32((uint32_t)(EDX));
  /* 10c61d80 call dword ptr [0x10c8021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8021c))), 0x10c61d86u);
  /* 10c61d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c61d88 jne 0x10c61d8e */
  if (!C.zf) goto L_10c61d8e;
  /* 10c61d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c61d8c jmp 0x10c61de1 */
  goto L_10c61de1;
L_10c61d8e:;
  /* 10c61d8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61d92 jne 0x10c61db6 */
  if (!C.zf) goto L_10c61db6;
  /* 10c61d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61d9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61d9e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c61da1 push eax */
  push32((uint32_t)(EAX));
  /* 10c61da2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c61da7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c61daa push ecx */
  push32((uint32_t)(ECX));
  /* 10c61dab call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c61db1u);
  /* 10c61db1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c61db4 jmp 0x10c61dda */
  goto L_10c61dda;
L_10c61db6:;
  /* 10c61db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61dba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c61dbd push edx */
  push32((uint32_t)(EDX));
  /* 10c61dbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c61dc1 push eax */
  push32((uint32_t)(EAX));
  /* 10c61dc2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c61dc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c61dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61dc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c61dcd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c61dd0 push edx */
  push32((uint32_t)(EDX));
  /* 10c61dd1 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c61dd7u);
  /* 10c61dd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c61dda:;
  /* 10c61dda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c61ddd jmp 0x10c61de1 */
  goto L_10c61de1;
L_10c61ddf:;
  /* 10c61ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c61de1:;
  /* 10c61de1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10c61de4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c61de7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c61dee pop edi */
  EDI = (pop32());
  /* 10c61def pop esi */
  ESI = (pop32());
  /* 10c61df0 pop ebx */
  EBX = (pop32());
  /* 10c61df1 mov esp, ebp */
  ESP = (EBP);
  /* 10c61df3 pop ebp */
  EBP = (pop32());
  /* 10c61df4 ret  */
  ESPCHK(0x10c61c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x10c61e00 (11 bytes, 6 insns) */
void f_10c61e00(void) {
  FTRACE(0x10c61e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61e01 mov ebp, esp */
  EBP = (ESP);
  /* 10c61e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61e06 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61e09 pop ebp */
  EBP = (pop32());
  /* 10c61e0a ret  */
  ESPCHK(0x10c61e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x10c61e10 (147 bytes, 43 insns) */
void f_10c61e10(void) {
  FTRACE(0x10c61e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61e11 mov ebp, esp */
  EBP = (ESP);
  /* 10c61e13 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61e14 cmp dword ptr [0x10c7e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61e1b jne 0x10c61e37 */
  if (!C.zf) goto L_10c61e37;
  /* 10c61e1d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61e21 jl 0x10c61e32 */
  if ((C.sf!=C.of)) goto L_10c61e32;
  /* 10c61e23 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61e27 jg 0x10c61e32 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c61e32;
  /* 10c61e29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61e2c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61e2f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c61e32:;
  /* 10c61e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61e35 jmp 0x10c61e9f */
  goto L_10c61e9f;
L_10c61e37:;
  /* 10c61e37 push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c61e3c call dword ptr [0x10c80244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80244))), 0x10c61e42u);
  /* 10c61e42 cmp dword ptr [0x10c7e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61e49 je 0x10c61e69 */
  if (C.zf) goto L_10c61e69;
  /* 10c61e4b push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c61e50 call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c61e56u);
  /* 10c61e56 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c61e58 call 0x10c56070 */
  push32(0x10c61e5du); f_10c56070();
  /* 10c61e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61e60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c61e67 jmp 0x10c61e70 */
  goto L_10c61e70;
L_10c61e69:;
  /* 10c61e69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c61e70:;
  /* 10c61e70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61e74 call 0x10c61eb0 */
  push32(0x10c61e79u); f_10c61eb0();
  /* 10c61e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61e7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c61e7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61e83 je 0x10c61e91 */
  if (C.zf) goto L_10c61e91;
  /* 10c61e85 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c61e87 call 0x10c56110 */
  push32(0x10c61e8cu); f_10c56110();
  /* 10c61e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61e8f jmp 0x10c61e9c */
  goto L_10c61e9c;
L_10c61e91:;
  /* 10c61e91 push 0x10c7e78c */
  push32((uint32_t)(0x10c7e78cu));
  /* 10c61e96 call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c61e9cu);
L_10c61e9c:;
  /* 10c61e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10c61e9f:;
  /* 10c61e9f mov esp, ebp */
  ESP = (EBP);
  /* 10c61ea1 pop ebp */
  EBP = (pop32());
  /* 10c61ea2 ret  */
  ESPCHK(0x10c61e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011eb0 @ 0x10c61eb0 (299 bytes, 91 insns) */
void f_10c61eb0(void) {
  FTRACE(0x10c61eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c61eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c61eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c61eb6 cmp dword ptr [0x10c7e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61ebd jne 0x10c61edc */
  if (!C.zf) goto L_10c61edc;
  /* 10c61ebf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61ec3 jl 0x10c61ed4 */
  if ((C.sf!=C.of)) goto L_10c61ed4;
  /* 10c61ec5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61ec9 jg 0x10c61ed4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c61ed4;
  /* 10c61ecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61ece add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61ed1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c61ed4:;
  /* 10c61ed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61ed7 jmp 0x10c61fd7 */
  goto L_10c61fd7;
L_10c61edc:;
  /* 10c61edc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61ee3 jge 0x10c61f23 */
  if ((C.sf==C.of)) goto L_10c61f23;
  /* 10c61ee5 cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61eec jle 0x10c61f01 */
  if ((C.zf||C.sf!=C.of)) goto L_10c61f01;
  /* 10c61eee push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c61ef4 call 0x10c58680 */
  push32(0x10c61ef9u); f_10c58680();
  /* 10c61ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61efc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c61eff jmp 0x10c61f15 */
  goto L_10c61f15;
L_10c61f01:;
  /* 10c61f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61f04 mov eax, dword ptr [0x10c7cc98] */
  EAX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c61f09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61f0b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c61f0f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c61f12 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c61f15:;
  /* 10c61f15 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61f19 jne 0x10c61f23 */
  if (!C.zf) goto L_10c61f23;
  /* 10c61f1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61f1e jmp 0x10c61fd7 */
  goto L_10c61fd7;
L_10c61f23:;
  /* 10c61f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61f26 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c61f29 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c61f2f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c61f35 mov eax, dword ptr [0x10c7cc98] */
  EAX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c61f3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61f3c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c61f40 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c61f46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c61f48 je 0x10c61f6c */
  if (C.zf) goto L_10c61f6c;
  /* 10c61f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61f4d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c61f50 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c61f56 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10c61f59 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c61f5c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10c61f5f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10c61f63 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c61f6a jmp 0x10c61f7d */
  goto L_10c61f7d;
L_10c61f6c:;
  /* 10c61f6c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c61f6f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10c61f72 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10c61f76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10c61f7d:;
  /* 10c61f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c61f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c61f81 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c61f83 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10c61f86 push edx */
  push32((uint32_t)(EDX));
  /* 10c61f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c61f8a push eax */
  push32((uint32_t)(EAX));
  /* 10c61f8b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c61f8e push ecx */
  push32((uint32_t)(ECX));
  /* 10c61f8f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c61f94 mov edx, dword ptr [0x10c7e600] */
  EDX = (r32((uint32_t)(0x10c7e600)));
  /* 10c61f9a push edx */
  push32((uint32_t)(EDX));
  /* 10c61f9b call 0x10c5aa60 */
  push32(0x10c61fa0u); f_10c5aa60();
  /* 10c61fa0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c61fa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c61fa6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61faa jne 0x10c61fb1 */
  if (!C.zf) goto L_10c61fb1;
  /* 10c61fac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c61faf jmp 0x10c61fd7 */
  goto L_10c61fd7;
L_10c61fb1:;
  /* 10c61fb1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c61fb5 jne 0x10c61fc1 */
  if (!C.zf) goto L_10c61fc1;
  /* 10c61fb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61fba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c61fbf jmp 0x10c61fd7 */
  goto L_10c61fd7;
L_10c61fc1:;
  /* 10c61fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c61fc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c61fc9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10c61fcc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c61fd2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c61fd5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10c61fd7:;
  /* 10c61fd7 mov esp, ebp */
  ESP = (EBP);
  /* 10c61fd9 pop ebp */
  EBP = (pop32());
  /* 10c61fda ret  */
  ESPCHK(0x10c61eb0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10c61fe0 (52 bytes, 19 insns) */
void f_10c61fe0(void) {
  FTRACE(0x10c61fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c61fe0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c61fe4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c61fe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c61fea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c61fee jne 0x10c61ff9 */
  if (!C.zf) goto L_10c61ff9;
  /* 10c61ff0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c61ff4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c61ff6 ret 0x10 */
  ESPCHK(0x10c61fe0u, _esp0);
  ESP += 20; return;
L_10c61ff9:;
  /* 10c61ff9 push ebx */
  push32((uint32_t)(EBX));
  /* 10c61ffa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c61ffc mov ebx, eax */
  EBX = (EAX);
  /* 10c61ffe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c62002 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c62006 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62008 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c6200c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c6200e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62010 pop ebx */
  EBX = (pop32());
  /* 10c62011 ret 0x10 */
  ESPCHK(0x10c61fe0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012020 @ 0x10c62020 (46 bytes, 18 insns) */
void f_10c62020(void) {
  FTRACE(0x10c62020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62020 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62021 mov ebp, esp */
  EBP = (ESP);
  /* 10c62023 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62024 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c62026 call 0x10c56070 */
  push32(0x10c6202bu); f_10c56070();
  /* 10c6202b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6202e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62031 push eax */
  push32((uint32_t)(EAX));
  /* 10c62032 call 0x10c62050 */
  push32(0x10c62037u); f_10c62050();
  /* 10c62037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6203a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c6203d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c6203f call 0x10c56110 */
  push32(0x10c62044u); f_10c56110();
  /* 10c62044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6204a mov esp, ebp */
  ESP = (EBP);
  /* 10c6204c pop ebp */
  EBP = (pop32());
  /* 10c6204d ret  */
  ESPCHK(0x10c62020u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10c62050 (198 bytes, 69 insns) */
void f_10c62050(void) {
  FTRACE(0x10c62050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62050 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62051 mov ebp, esp */
  EBP = (ESP);
  /* 10c62053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c62056 mov eax, dword ptr [0x10c7e41c] */
  EAX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c6205b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c6205e cmp dword ptr [0x10c7ff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62065 jne 0x10c6206e */
  if (!C.zf) goto L_10c6206e;
  /* 10c62067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62069 jmp 0x10c62112 */
  goto L_10c62112;
L_10c6206e:;
  /* 10c6206e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62072 jne 0x10c62096 */
  if (!C.zf) goto L_10c62096;
  /* 10c62074 cmp dword ptr [0x10c7e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6207b je 0x10c62096 */
  if (C.zf) goto L_10c62096;
  /* 10c6207d call 0x10c62170 */
  push32(0x10c62082u); f_10c62170();
  /* 10c62082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c62084 je 0x10c6208d */
  if (C.zf) goto L_10c6208d;
  /* 10c62086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62088 jmp 0x10c62112 */
  goto L_10c62112;
L_10c6208d:;
  /* 10c6208d mov ecx, dword ptr [0x10c7e41c] */
  ECX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c62093 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c62096:;
  /* 10c62096 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6209a je 0x10c62110 */
  if (C.zf) goto L_10c62110;
  /* 10c6209c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c620a0 je 0x10c62110 */
  if (C.zf) goto L_10c62110;
  /* 10c620a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c620a5 push edx */
  push32((uint32_t)(EDX));
  /* 10c620a6 call 0x10c554a0 */
  push32(0x10c620abu); f_10c554a0();
  /* 10c620ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c620ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c620b1:;
  /* 10c620b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c620b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c620b7 je 0x10c62110 */
  if (C.zf) goto L_10c62110;
  /* 10c620b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c620bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c620be push edx */
  push32((uint32_t)(EDX));
  /* 10c620bf call 0x10c554a0 */
  push32(0x10c620c4u); f_10c554a0();
  /* 10c620c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c620c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c620ca jbe 0x10c62105 */
  if ((C.cf||C.zf)) goto L_10c62105;
  /* 10c620cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c620cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c620d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c620d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10c620d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c620db jne 0x10c62105 */
  if (!C.zf) goto L_10c62105;
  /* 10c620dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c620e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c620e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c620e4 push edx */
  push32((uint32_t)(EDX));
  /* 10c620e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c620e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c620ea push ecx */
  push32((uint32_t)(ECX));
  /* 10c620eb call 0x10c62120 */
  push32(0x10c620f0u); f_10c62120();
  /* 10c620f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c620f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c620f5 jne 0x10c62105 */
  if (!C.zf) goto L_10c62105;
  /* 10c620f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c620fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c620fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c620ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10c62103 jmp 0x10c62112 */
  goto L_10c62112;
L_10c62105:;
  /* 10c62105 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62108 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6210b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c6210e jmp 0x10c620b1 */
  goto L_10c620b1;
L_10c62110:;
  /* 10c62110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c62112:;
  /* 10c62112 mov esp, ebp */
  ESP = (EBP);
  /* 10c62114 pop ebp */
  EBP = (pop32());
  /* 10c62115 ret  */
  ESPCHK(0x10c62050u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10c62120 (79 bytes, 32 insns) */
void f_10c62120(void) {
  FTRACE(0x10c62120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62120 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62121 mov ebp, esp */
  EBP = (ESP);
  /* 10c62123 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62124 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62128 jne 0x10c6212e */
  if (!C.zf) goto L_10c6212e;
  /* 10c6212a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6212c jmp 0x10c6216b */
  goto L_10c6216b;
L_10c6212e:;
  /* 10c6212e mov eax, dword ptr [0x10c7fae4] */
  EAX = (r32((uint32_t)(0x10c7fae4)));
  /* 10c62133 push eax */
  push32((uint32_t)(EAX));
  /* 10c62134 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c62137 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62138 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c6213b push edx */
  push32((uint32_t)(EDX));
  /* 10c6213c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6213f push eax */
  push32((uint32_t)(EAX));
  /* 10c62140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62143 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62144 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c62146 mov edx, dword ptr [0x10c7fd84] */
  EDX = (r32((uint32_t)(0x10c7fd84)));
  /* 10c6214c push edx */
  push32((uint32_t)(EDX));
  /* 10c6214d call 0x10c62220 */
  push32(0x10c62152u); f_10c62220();
  /* 10c62152 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c62158 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6215c jne 0x10c62165 */
  if (!C.zf) goto L_10c62165;
  /* 10c6215e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10c62163 jmp 0x10c6216b */
  goto L_10c6216b;
L_10c62165:;
  /* 10c62165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62168 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c6216b:;
  /* 10c6216b mov esp, ebp */
  ESP = (EBP);
  /* 10c6216d pop ebp */
  EBP = (pop32());
  /* 10c6216e ret  */
  ESPCHK(0x10c62120u, _esp0);
  ESP += 4; return;
}

/* FUN_10012170 @ 0x10c62170 (174 bytes, 66 insns) */
void f_10c62170(void) {
  FTRACE(0x10c62170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62170 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62171 mov ebp, esp */
  EBP = (ESP);
  /* 10c62173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c62176 mov eax, dword ptr [0x10c7e424] */
  EAX = (r32((uint32_t)(0x10c7e424)));
  /* 10c6217b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c6217e:;
  /* 10c6217e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62181 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62184 je 0x10c62218 */
  if (C.zf) goto L_10c62218;
  /* 10c6218a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6218c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6218e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c62190 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c62192 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c62194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62197 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c62199 push eax */
  push32((uint32_t)(EAX));
  /* 10c6219a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6219c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c6219e call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c621a4u);
  /* 10c621a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c621a7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c621ab jne 0x10c621b2 */
  if (!C.zf) goto L_10c621b2;
  /* 10c621ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c621b0 jmp 0x10c6221a */
  goto L_10c6221a;
L_10c621b2:;
  /* 10c621b2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c621b4 push 0x10c7a844 */
  push32((uint32_t)(0x10c7a844u));
  /* 10c621b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c621bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c621be push ecx */
  push32((uint32_t)(ECX));
  /* 10c621bf call 0x10c52670 */
  push32(0x10c621c4u); f_10c52670();
  /* 10c621c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c621c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c621ca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c621ce jne 0x10c621d5 */
  if (!C.zf) goto L_10c621d5;
  /* 10c621d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c621d3 jmp 0x10c6221a */
  goto L_10c6221a;
L_10c621d5:;
  /* 10c621d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c621d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c621d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c621dc push edx */
  push32((uint32_t)(EDX));
  /* 10c621dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c621e0 push eax */
  push32((uint32_t)(EAX));
  /* 10c621e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c621e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c621e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c621e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c621e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c621eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10c621ed call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c621f3u);
  /* 10c621f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c621f5 jne 0x10c621fc */
  if (!C.zf) goto L_10c621fc;
  /* 10c621f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c621fa jmp 0x10c6221a */
  goto L_10c6221a;
L_10c621fc:;
  /* 10c621fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c621fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62201 push eax */
  push32((uint32_t)(EAX));
  /* 10c62202 call 0x10c62670 */
  push32(0x10c62207u); f_10c62670();
  /* 10c62207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6220a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6220d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62210 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c62213 jmp 0x10c6217e */
  goto L_10c6217e;
L_10c62218:;
  /* 10c62218 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c6221a:;
  /* 10c6221a mov esp, ebp */
  ESP = (EBP);
  /* 10c6221c pop ebp */
  EBP = (pop32());
  /* 10c6221d ret  */
  ESPCHK(0x10c62170u, _esp0);
  ESP += 4; return;
}

/* FUN_10012220 @ 0x10c62220 (970 bytes, 340 insns) */
void f_10c62220(void) {
  FTRACE(0x10c62220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62220 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62221 mov ebp, esp */
  EBP = (ESP);
  /* 10c62223 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c62225 push 0x10c7a898 */
  push32((uint32_t)(0x10c7a898u));
  /* 10c6222a push 0x10c5b778 */
  push32((uint32_t)(0x10c5b778u));
  /* 10c6222f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c62235 push eax */
  push32((uint32_t)(EAX));
  /* 10c62236 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c6223d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62240 push ebx */
  push32((uint32_t)(EBX));
  /* 10c62241 push esi */
  push32((uint32_t)(ESI));
  /* 10c62242 push edi */
  push32((uint32_t)(EDI));
  /* 10c62243 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c62246 cmp dword ptr [0x10c7e764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6224d jne 0x10c622a6 */
  if (!C.zf) goto L_10c622a6;
  /* 10c6224f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c62251 push 0x10c79ef4 */
  push32((uint32_t)(0x10c79ef4u));
  /* 10c62256 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c62258 push 0x10c79ef4 */
  push32((uint32_t)(0x10c79ef4u));
  /* 10c6225d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6225f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c62261 call dword ptr [0x10c80214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80214))), 0x10c62267u);
  /* 10c62267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c62269 je 0x10c62277 */
  if (C.zf) goto L_10c62277;
  /* 10c6226b mov dword ptr [0x10c7e764], 1 */
  w32((uint32_t)(0x10c7e764), (0x1u));
  /* 10c62275 jmp 0x10c622a6 */
  goto L_10c622a6;
L_10c62277:;
  /* 10c62277 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c62279 push 0x10c79ef0 */
  push32((uint32_t)(0x10c79ef0u));
  /* 10c6227e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c62280 push 0x10c79ef0 */
  push32((uint32_t)(0x10c79ef0u));
  /* 10c62285 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c62287 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c62289 call dword ptr [0x10c80218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80218))), 0x10c6228fu);
  /* 10c6228f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c62291 je 0x10c6229f */
  if (C.zf) goto L_10c6229f;
  /* 10c62293 mov dword ptr [0x10c7e764], 2 */
  w32((uint32_t)(0x10c7e764), (0x2u));
  /* 10c6229d jmp 0x10c622a6 */
  goto L_10c622a6;
L_10c6229f:;
  /* 10c6229f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c622a1 jmp 0x10c62604 */
  goto L_10c62604;
L_10c622a6:;
  /* 10c622a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c622aa jle 0x10c622bf */
  if ((C.zf||C.sf!=C.of)) goto L_10c622bf;
  /* 10c622ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c622af push eax */
  push32((uint32_t)(EAX));
  /* 10c622b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c622b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c622b4 call 0x10c62620 */
  push32(0x10c622b9u); f_10c62620();
  /* 10c622b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c622bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10c622bf:;
  /* 10c622bf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c622c3 jle 0x10c622d8 */
  if ((C.zf||C.sf!=C.of)) goto L_10c622d8;
  /* 10c622c5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c622c8 push edx */
  push32((uint32_t)(EDX));
  /* 10c622c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c622cc push eax */
  push32((uint32_t)(EAX));
  /* 10c622cd call 0x10c62620 */
  push32(0x10c622d2u); f_10c62620();
  /* 10c622d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c622d5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10c622d8:;
  /* 10c622d8 cmp dword ptr [0x10c7e764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c622df jne 0x10c62304 */
  if (!C.zf) goto L_10c62304;
  /* 10c622e1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c622e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c622e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c622e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c622e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c622ec push eax */
  push32((uint32_t)(EAX));
  /* 10c622ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c622f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c622f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c622f4 push edx */
  push32((uint32_t)(EDX));
  /* 10c622f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c622f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c622f9 call dword ptr [0x10c80218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80218))), 0x10c622ffu);
  /* 10c622ff jmp 0x10c62604 */
  goto L_10c62604;
L_10c62304:;
  /* 10c62304 cmp dword ptr [0x10c7e764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6230b jne 0x10c62602 */
  if (!C.zf) goto L_10c62602;
  /* 10c62311 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62315 jne 0x10c62320 */
  if (!C.zf) goto L_10c62320;
  /* 10c62317 mov ecx, dword ptr [0x10c7e610] */
  ECX = (r32((uint32_t)(0x10c7e610)));
  /* 10c6231d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10c62320:;
  /* 10c62320 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62324 je 0x10c62330 */
  if (C.zf) goto L_10c62330;
  /* 10c62326 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6232a jne 0x10c624ac */
  if (!C.zf) goto L_10c624ac;
L_10c62330:;
  /* 10c62330 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c62333 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62336 jne 0x10c62342 */
  if (!C.zf) goto L_10c62342;
  /* 10c62338 mov eax, 2 */
  EAX = (0x2u);
  /* 10c6233d jmp 0x10c62604 */
  goto L_10c62604;
L_10c62342:;
  /* 10c62342 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62346 jle 0x10c62352 */
  if ((C.zf||C.sf!=C.of)) goto L_10c62352;
  /* 10c62348 mov eax, 1 */
  EAX = (0x1u);
  /* 10c6234d jmp 0x10c62604 */
  goto L_10c62604;
L_10c62352:;
  /* 10c62352 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62356 jle 0x10c62362 */
  if ((C.zf||C.sf!=C.of)) goto L_10c62362;
  /* 10c62358 mov eax, 3 */
  EAX = (0x3u);
  /* 10c6235d jmp 0x10c62604 */
  goto L_10c62604;
L_10c62362:;
  /* 10c62362 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10c62365 push eax */
  push32((uint32_t)(EAX));
  /* 10c62366 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c62369 push ecx */
  push32((uint32_t)(ECX));
  /* 10c6236a call dword ptr [0x10c802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802dc))), 0x10c62370u);
  /* 10c62370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c62372 jne 0x10c6237b */
  if (!C.zf) goto L_10c6237b;
  /* 10c62374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62376 jmp 0x10c62604 */
  goto L_10c62604;
L_10c6237b:;
  /* 10c6237b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6237f jne 0x10c62387 */
  if (!C.zf) goto L_10c62387;
  /* 10c62381 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62385 je 0x10c623b4 */
  if (C.zf) goto L_10c623b4;
L_10c62387:;
  /* 10c62387 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6238b jne 0x10c62393 */
  if (!C.zf) goto L_10c62393;
  /* 10c6238d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62391 je 0x10c623b4 */
  if (C.zf) goto L_10c623b4;
L_10c62393:;
  /* 10c62393 push 0x10c7a858 */
  push32((uint32_t)(0x10c7a858u));
  /* 10c62398 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6239a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10c6239f push 0x10c7a850 */
  push32((uint32_t)(0x10c7a850u));
  /* 10c623a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c623a6 call 0x10c51730 */
  push32(0x10c623abu); f_10c51730();
  /* 10c623ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c623ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c623b1 jne 0x10c623b4 */
  if (!C.zf) goto L_10c623b4;
  /* 10c623b3 int3  */
  x86_unimpl("int3 @ 0x10c623b3");
L_10c623b4:;
  /* 10c623b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c623b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c623b8 jne 0x10c6237b */
  if (!C.zf) goto L_10c6237b;
  /* 10c623ba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c623be jle 0x10c62433 */
  if ((C.zf||C.sf!=C.of)) goto L_10c62433;
  /* 10c623c0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c623c4 jae 0x10c623d0 */
  if (!C.cf) goto L_10c623d0;
  /* 10c623c6 mov eax, 3 */
  EAX = (0x3u);
  /* 10c623cb jmp 0x10c62604 */
  goto L_10c62604;
L_10c623d0:;
  /* 10c623d0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10c623d3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10c623d6 jmp 0x10c623e1 */
  goto L_10c623e1;
L_10c623d8:;
  /* 10c623d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c623db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c623de mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10c623e1:;
  /* 10c623e1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c623e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c623e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c623e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c623ea je 0x10c62429 */
  if (C.zf) goto L_10c62429;
  /* 10c623ec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c623ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c623f1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c623f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c623f6 je 0x10c62429 */
  if (C.zf) goto L_10c62429;
  /* 10c623f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c623fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c623fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c623ff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c62402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c62406 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62408 jl 0x10c62427 */
  if ((C.sf!=C.of)) goto L_10c62427;
  /* 10c6240a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c6240d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6240f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c62411 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c62414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c62416 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c62419 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6241b jg 0x10c62427 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c62427;
  /* 10c6241d mov eax, 2 */
  EAX = (0x2u);
  /* 10c62422 jmp 0x10c62604 */
  goto L_10c62604;
L_10c62427:;
  /* 10c62427 jmp 0x10c623d8 */
  goto L_10c623d8;
L_10c62429:;
  /* 10c62429 mov eax, 3 */
  EAX = (0x3u);
  /* 10c6242e jmp 0x10c62604 */
  goto L_10c62604;
L_10c62433:;
  /* 10c62433 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62437 jle 0x10c624ac */
  if ((C.zf||C.sf!=C.of)) goto L_10c624ac;
  /* 10c62439 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6243d jae 0x10c62449 */
  if (!C.cf) goto L_10c62449;
  /* 10c6243f mov eax, 1 */
  EAX = (0x1u);
  /* 10c62444 jmp 0x10c62604 */
  goto L_10c62604;
L_10c62449:;
  /* 10c62449 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10c6244c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10c6244f jmp 0x10c6245a */
  goto L_10c6245a;
L_10c62451:;
  /* 10c62451 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c62454 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62457 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10c6245a:;
  /* 10c6245a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c6245d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6245f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c62461 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c62463 je 0x10c624a2 */
  if (C.zf) goto L_10c624a2;
  /* 10c62465 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c62468 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c6246a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c6246d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c6246f je 0x10c624a2 */
  if (C.zf) goto L_10c624a2;
  /* 10c62471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c62474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62476 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c62478 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c6247b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c6247d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c6247f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62481 jl 0x10c624a0 */
  if ((C.sf!=C.of)) goto L_10c624a0;
  /* 10c62483 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c62486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c62488 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c6248a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c6248d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6248f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c62492 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62494 jg 0x10c624a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c624a0;
  /* 10c62496 mov eax, 2 */
  EAX = (0x2u);
  /* 10c6249b jmp 0x10c62604 */
  goto L_10c62604;
L_10c624a0:;
  /* 10c624a0 jmp 0x10c62451 */
  goto L_10c62451;
L_10c624a2:;
  /* 10c624a2 mov eax, 1 */
  EAX = (0x1u);
  /* 10c624a7 jmp 0x10c62604 */
  goto L_10c62604;
L_10c624ac:;
  /* 10c624ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10c624ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10c624b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c624b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c624b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c624b7 push edx */
  push32((uint32_t)(EDX));
  /* 10c624b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c624ba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c624bd push eax */
  push32((uint32_t)(EAX));
  /* 10c624be call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c624c4u);
  /* 10c624c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c624c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c624cb jne 0x10c624d4 */
  if (!C.zf) goto L_10c624d4;
  /* 10c624cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c624cf jmp 0x10c62604 */
  goto L_10c62604;
L_10c624d4:;
  /* 10c624d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c624db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c624de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c624e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c624e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c624e5 call 0x10c55810 */
  push32(0x10c624eau); f_10c55810();
  /* 10c624ea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10c624ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c624f0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10c624f3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c624f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c624fd jmp 0x10c62516 */
  goto L_10c62516;
  /* 10c624ff mov eax, 1 */
  EAX = (0x1u);
  /* 10c62504 ret  */
  ESPCHK(0x10c62220u, _esp0);
  ESP += 4; return;
  /* 10c62505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c62508 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c6250f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c62516:;
  /* 10c62516 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6251a jne 0x10c62523 */
  if (!C.zf) goto L_10c62523;
  /* 10c6251c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6251e jmp 0x10c62604 */
  goto L_10c62604;
L_10c62523:;
  /* 10c62523 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c62526 push edx */
  push32((uint32_t)(EDX));
  /* 10c62527 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c6252a push eax */
  push32((uint32_t)(EAX));
  /* 10c6252b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c6252e push ecx */
  push32((uint32_t)(ECX));
  /* 10c6252f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c62532 push edx */
  push32((uint32_t)(EDX));
  /* 10c62533 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c62535 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c62538 push eax */
  push32((uint32_t)(EAX));
  /* 10c62539 call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c6253fu);
  /* 10c6253f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c62541 jne 0x10c6254a */
  if (!C.zf) goto L_10c6254a;
  /* 10c62543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62545 jmp 0x10c62604 */
  goto L_10c62604;
L_10c6254a:;
  /* 10c6254a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6254c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c6254e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c62551 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62552 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c62555 push edx */
  push32((uint32_t)(EDX));
  /* 10c62556 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c62558 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c6255b push eax */
  push32((uint32_t)(EAX));
  /* 10c6255c call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c62562u);
  /* 10c62562 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c62565 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62569 jne 0x10c62572 */
  if (!C.zf) goto L_10c62572;
  /* 10c6256b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6256d jmp 0x10c62604 */
  goto L_10c62604;
L_10c62572:;
  /* 10c62572 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c62579 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c6257c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c6257e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62581 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c62583 call 0x10c55810 */
  push32(0x10c62588u); f_10c55810();
  /* 10c62588 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10c6258b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c6258e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10c62591 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c62594 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c6259b jmp 0x10c625b4 */
  goto L_10c625b4;
  /* 10c6259d mov eax, 1 */
  EAX = (0x1u);
  /* 10c625a2 ret  */
  ESPCHK(0x10c62220u, _esp0);
  ESP += 4; return;
  /* 10c625a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c625a6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10c625ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c625b4:;
  /* 10c625b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c625b8 jne 0x10c625be */
  if (!C.zf) goto L_10c625be;
  /* 10c625ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c625bc jmp 0x10c62604 */
  goto L_10c62604;
L_10c625be:;
  /* 10c625be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c625c1 push edx */
  push32((uint32_t)(EDX));
  /* 10c625c2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c625c5 push eax */
  push32((uint32_t)(EAX));
  /* 10c625c6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c625c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c625ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c625cd push edx */
  push32((uint32_t)(EDX));
  /* 10c625ce push 1 */
  push32((uint32_t)(0x1u));
  /* 10c625d0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c625d3 push eax */
  push32((uint32_t)(EAX));
  /* 10c625d4 call dword ptr [0x10c802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a4))), 0x10c625dau);
  /* 10c625da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c625dc jne 0x10c625e2 */
  if (!C.zf) goto L_10c625e2;
  /* 10c625de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c625e0 jmp 0x10c62604 */
  goto L_10c62604;
L_10c625e2:;
  /* 10c625e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c625e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c625e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c625e9 push edx */
  push32((uint32_t)(EDX));
  /* 10c625ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c625ed push eax */
  push32((uint32_t)(EAX));
  /* 10c625ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c625f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c625f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c625f5 push edx */
  push32((uint32_t)(EDX));
  /* 10c625f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c625f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c625fa call dword ptr [0x10c80214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80214))), 0x10c62600u);
  /* 10c62600 jmp 0x10c62604 */
  goto L_10c62604;
L_10c62602:;
  /* 10c62602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c62604:;
  /* 10c62604 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10c62607 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c6260a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c62611 pop edi */
  EDI = (pop32());
  /* 10c62612 pop esi */
  ESI = (pop32());
  /* 10c62613 pop ebx */
  EBX = (pop32());
  /* 10c62614 mov esp, ebp */
  ESP = (EBP);
  /* 10c62616 pop ebp */
  EBP = (pop32());
  /* 10c62617 ret  */
  ESPCHK(0x10c62220u, _esp0);
  ESP += 4; return;
}

/* FUN_10012620 @ 0x10c62620 (80 bytes, 32 insns) */
void f_10c62620(void) {
  FTRACE(0x10c62620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62620 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62621 mov ebp, esp */
  EBP = (ESP);
  /* 10c62623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c62626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c62629 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c6262c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6262f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c62632:;
  /* 10c62632 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62635 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62638 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6263b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c6263e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c62640 je 0x10c62657 */
  if (C.zf) goto L_10c62657;
  /* 10c62642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62645 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c62648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c6264a je 0x10c62657 */
  if (C.zf) goto L_10c62657;
  /* 10c6264c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6264f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c62655 jmp 0x10c62632 */
  goto L_10c62632;
L_10c62657:;
  /* 10c62657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6265a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c6265d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c6265f jne 0x10c62669 */
  if (!C.zf) goto L_10c62669;
  /* 10c62661 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62664 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c62667 jmp 0x10c6266c */
  goto L_10c6266c;
L_10c62669:;
  /* 10c62669 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10c6266c:;
  /* 10c6266c mov esp, ebp */
  ESP = (EBP);
  /* 10c6266e pop ebp */
  EBP = (pop32());
  /* 10c6266f ret  */
  ESPCHK(0x10c62620u, _esp0);
  ESP += 4; return;
}

/* FUN_10012670 @ 0x10c62670 (736 bytes, 224 insns) */
void f_10c62670(void) {
  FTRACE(0x10c62670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62670 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62671 mov ebp, esp */
  EBP = (ESP);
  /* 10c62673 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c62676 push esi */
  push32((uint32_t)(ESI));
  /* 10c62677 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6267b je 0x10c6269c */
  if (C.zf) goto L_10c6269c;
  /* 10c6267d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c6267f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62682 push eax */
  push32((uint32_t)(EAX));
  /* 10c62683 call 0x10c62ac0 */
  push32(0x10c62688u); f_10c62ac0();
  /* 10c62688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6268b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c6268e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62692 je 0x10c6269c */
  if (C.zf) goto L_10c6269c;
  /* 10c62694 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62697 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6269a jne 0x10c626a4 */
  if (!C.zf) goto L_10c626a4;
L_10c6269c:;
  /* 10c6269c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c6269f jmp 0x10c6294b */
  goto L_10c6294b;
L_10c626a4:;
  /* 10c626a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c626a7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c626ab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c626ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c626af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10c626b0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c626b3 mov ecx, dword ptr [0x10c7e41c] */
  ECX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c626b9 cmp ecx, dword ptr [0x10c7e420] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7e420))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c626bf jne 0x10c626d5 */
  if (!C.zf) goto L_10c626d5;
  /* 10c626c1 mov edx, dword ptr [0x10c7e41c] */
  EDX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c626c7 push edx */
  push32((uint32_t)(EDX));
  /* 10c626c8 call 0x10c629d0 */
  push32(0x10c626cdu); f_10c629d0();
  /* 10c626cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c626d0 mov dword ptr [0x10c7e41c], eax */
  w32((uint32_t)(0x10c7e41c), (EAX));
L_10c626d5:;
  /* 10c626d5 cmp dword ptr [0x10c7e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c626dc jne 0x10c62795 */
  if (!C.zf) goto L_10c62795;
  /* 10c626e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c626e6 je 0x10c62707 */
  if (C.zf) goto L_10c62707;
  /* 10c626e8 cmp dword ptr [0x10c7e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c626ef je 0x10c62707 */
  if (C.zf) goto L_10c62707;
  /* 10c626f1 call 0x10c62170 */
  push32(0x10c626f6u); f_10c62170();
  /* 10c626f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c626f8 je 0x10c62702 */
  if (C.zf) goto L_10c62702;
  /* 10c626fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c626fd jmp 0x10c6294b */
  goto L_10c6294b;
L_10c62702:;
  /* 10c62702 jmp 0x10c62795 */
  goto L_10c62795;
L_10c62707:;
  /* 10c62707 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6270b je 0x10c62714 */
  if (C.zf) goto L_10c62714;
  /* 10c6270d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c6270f jmp 0x10c6294b */
  goto L_10c6294b;
L_10c62714:;
  /* 10c62714 cmp dword ptr [0x10c7e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6271b jne 0x10c62754 */
  if (!C.zf) goto L_10c62754;
  /* 10c6271d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10c62722 push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c62727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c62729 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c6272b call 0x10c52670 */
  push32(0x10c62730u); f_10c52670();
  /* 10c62730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62733 mov dword ptr [0x10c7e41c], eax */
  w32((uint32_t)(0x10c7e41c), (EAX));
  /* 10c62738 cmp dword ptr [0x10c7e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6273f jne 0x10c62749 */
  if (!C.zf) goto L_10c62749;
  /* 10c62741 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c62744 jmp 0x10c6294b */
  goto L_10c6294b;
L_10c62749:;
  /* 10c62749 mov eax, dword ptr [0x10c7e41c] */
  EAX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c6274e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c62754:;
  /* 10c62754 cmp dword ptr [0x10c7e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6275b jne 0x10c62795 */
  if (!C.zf) goto L_10c62795;
  /* 10c6275d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10c62762 push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c62767 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c62769 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c6276b call 0x10c52670 */
  push32(0x10c62770u); f_10c52670();
  /* 10c62770 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62773 mov dword ptr [0x10c7e424], eax */
  w32((uint32_t)(0x10c7e424), (EAX));
  /* 10c62778 cmp dword ptr [0x10c7e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6277f jne 0x10c62789 */
  if (!C.zf) goto L_10c62789;
  /* 10c62781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c62784 jmp 0x10c6294b */
  goto L_10c6294b;
L_10c62789:;
  /* 10c62789 mov ecx, dword ptr [0x10c7e424] */
  ECX = (r32((uint32_t)(0x10c7e424)));
  /* 10c6278f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10c62795:;
  /* 10c62795 mov edx, dword ptr [0x10c7e41c] */
  EDX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c6279b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c6279e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c627a1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c627a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c627a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c627a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c627a9 call 0x10c62950 */
  push32(0x10c627aeu); f_10c62950();
  /* 10c627ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c627b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c627b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c627b8 jl 0x10c62851 */
  if ((C.sf!=C.of)) goto L_10c62851;
  /* 10c627be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c627c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c627c4 je 0x10c62851 */
  if (C.zf) goto L_10c62851;
  /* 10c627ca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c627ce je 0x10c62843 */
  if (C.zf) goto L_10c62843;
  /* 10c627d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c627d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c627d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c627d8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c627db push edx */
  push32((uint32_t)(EDX));
  /* 10c627dc call 0x10c53100 */
  push32(0x10c627e1u); f_10c53100();
  /* 10c627e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c627e4 jmp 0x10c627ef */
  goto L_10c627ef;
L_10c627e6:;
  /* 10c627e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c627e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c627ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c627ef:;
  /* 10c627ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c627f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c627f5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c627f9 je 0x10c62810 */
  if (C.zf) goto L_10c62810;
  /* 10c627fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c627fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62801 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62804 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62807 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10c6280b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10c6280e jmp 0x10c627e6 */
  goto L_10c627e6;
L_10c62810:;
  /* 10c62810 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10c62815 push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c6281a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c6281c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c6281f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10c62822 push eax */
  push32((uint32_t)(EAX));
  /* 10c62823 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62826 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62827 call 0x10c52b00 */
  push32(0x10c6282cu); f_10c52b00();
  /* 10c6282c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c6282f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c62832 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62836 je 0x10c62841 */
  if (C.zf) goto L_10c62841;
  /* 10c62838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6283b mov dword ptr [0x10c7e41c], edx */
  w32((uint32_t)(0x10c7e41c), (EDX));
L_10c62841:;
  /* 10c62841 jmp 0x10c6284f */
  goto L_10c6284f;
L_10c62843:;
  /* 10c62843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6284c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10c6284f:;
  /* 10c6284f jmp 0x10c628c4 */
  goto L_10c628c4;
L_10c62851:;
  /* 10c62851 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62855 jne 0x10c628bd */
  if (!C.zf) goto L_10c628bd;
  /* 10c62857 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6285b jge 0x10c62865 */
  if ((C.sf==C.of)) goto L_10c62865;
  /* 10c6285d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62860 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c62862 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c62865:;
  /* 10c62865 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10c6286a push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c6286f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c62871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62874 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10c6287b push edx */
  push32((uint32_t)(EDX));
  /* 10c6287c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6287f push eax */
  push32((uint32_t)(EAX));
  /* 10c62880 call 0x10c52b00 */
  push32(0x10c62885u); f_10c52b00();
  /* 10c62885 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62888 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c6288b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6288f jne 0x10c62899 */
  if (!C.zf) goto L_10c62899;
  /* 10c62891 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c62894 jmp 0x10c6294b */
  goto L_10c6294b;
L_10c62899:;
  /* 10c62899 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c6289c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c6289f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c628a2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10c628a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c628a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c628ab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10c628b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c628b6 mov dword ptr [0x10c7e41c], eax */
  w32((uint32_t)(0x10c7e41c), (EAX));
  /* 10c628bb jmp 0x10c628c4 */
  goto L_10c628c4;
L_10c628bd:;
  /* 10c628bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c628bf jmp 0x10c6294b */
  goto L_10c6294b;
L_10c628c4:;
  /* 10c628c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c628c8 je 0x10c62949 */
  if (C.zf) goto L_10c62949;
  /* 10c628ca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10c628cf push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c628d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c628d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c628d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c628da call 0x10c554a0 */
  push32(0x10c628dfu); f_10c554a0();
  /* 10c628df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c628e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c628e5 push eax */
  push32((uint32_t)(EAX));
  /* 10c628e6 call 0x10c52670 */
  push32(0x10c628ebu); f_10c52670();
  /* 10c628eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c628ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c628f1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c628f5 je 0x10c62949 */
  if (C.zf) goto L_10c62949;
  /* 10c628f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c628fa push edx */
  push32((uint32_t)(EDX));
  /* 10c628fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c628fe push eax */
  push32((uint32_t)(EAX));
  /* 10c628ff call 0x10c55620 */
  push32(0x10c62904u); f_10c55620();
  /* 10c62904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62907 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c6290a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6290d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c62910 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62912 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c62915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62918 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c6291b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6291e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62921 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c62924 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c62927 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c62929 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c6292b not edx */
  EDX = (~(EDX));
  /* 10c6292d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c62930 push edx */
  push32((uint32_t)(EDX));
  /* 10c62931 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c62934 push eax */
  push32((uint32_t)(EAX));
  /* 10c62935 call dword ptr [0x10c80210] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80210))), 0x10c6293bu);
  /* 10c6293b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c6293d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c62940 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62941 call 0x10c53100 */
  push32(0x10c62946u); f_10c53100();
  /* 10c62946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c62949:;
  /* 10c62949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c6294b:;
  /* 10c6294b pop esi */
  ESI = (pop32());
  /* 10c6294c mov esp, ebp */
  ESP = (EBP);
  /* 10c6294e pop ebp */
  EBP = (pop32());
  /* 10c6294f ret  */
  ESPCHK(0x10c62670u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10c62950 (124 bytes, 47 insns) */
void f_10c62950(void) {
  FTRACE(0x10c62950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62950 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62951 mov ebp, esp */
  EBP = (ESP);
  /* 10c62953 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62954 mov eax, dword ptr [0x10c7e41c] */
  EAX = (r32((uint32_t)(0x10c7e41c)));
  /* 10c62959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c6295c jmp 0x10c62967 */
  goto L_10c62967;
L_10c6295e:;
  /* 10c6295e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62961 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62964 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c62967:;
  /* 10c62967 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6296a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c6296d je 0x10c629ba */
  if (C.zf) goto L_10c629ba;
  /* 10c6296f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c62972 push eax */
  push32((uint32_t)(EAX));
  /* 10c62973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62976 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c62978 push edx */
  push32((uint32_t)(EDX));
  /* 10c62979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c6297c push eax */
  push32((uint32_t)(EAX));
  /* 10c6297d call 0x10c62120 */
  push32(0x10c62982u); f_10c62120();
  /* 10c62982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c62987 jne 0x10c629b8 */
  if (!C.zf) goto L_10c629b8;
  /* 10c62989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6298c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c6298e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c62991 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10c62995 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62998 je 0x10c629aa */
  if (C.zf) goto L_10c629aa;
  /* 10c6299a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c6299d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c6299f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c629a2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10c629a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c629a8 jne 0x10c629b8 */
  if (!C.zf) goto L_10c629b8;
L_10c629aa:;
  /* 10c629aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c629ad sub eax, dword ptr [0x10c7e41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7e41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c629b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10c629b6 jmp 0x10c629c8 */
  goto L_10c629c8;
L_10c629b8:;
  /* 10c629b8 jmp 0x10c6295e */
  goto L_10c6295e;
L_10c629ba:;
  /* 10c629ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c629bd sub eax, dword ptr [0x10c7e41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7e41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c629c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10c629c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10c629c8:;
  /* 10c629c8 mov esp, ebp */
  ESP = (EBP);
  /* 10c629ca pop ebp */
  EBP = (pop32());
  /* 10c629cb ret  */
  ESPCHK(0x10c62950u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10c629d0 (238 bytes, 80 insns) */
void f_10c629d0(void) {
  FTRACE(0x10c629d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c629d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c629d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c629d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c629d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c629dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c629e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c629e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c629e7 jne 0x10c629f0 */
  if (!C.zf) goto L_10c629f0;
  /* 10c629e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c629eb jmp 0x10c62aba */
  goto L_10c62aba;
L_10c629f0:;
  /* 10c629f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c629f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c629f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c629f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c629fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c629fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c62a00 je 0x10c62a0d */
  if (C.zf) goto L_10c62a0d;
  /* 10c62a02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c62a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62a08 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c62a0b jmp 0x10c629f0 */
  goto L_10c629f0;
L_10c62a0d:;
  /* 10c62a0d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10c62a12 push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c62a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c62a19 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c62a1c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10c62a23 push eax */
  push32((uint32_t)(EAX));
  /* 10c62a24 call 0x10c52670 */
  push32(0x10c62a29u); f_10c52670();
  /* 10c62a29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62a2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c62a2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62a32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c62a35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62a39 jne 0x10c62a45 */
  if (!C.zf) goto L_10c62a45;
  /* 10c62a3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c62a3d call 0x10c515e0 */
  push32(0x10c62a42u); f_10c515e0();
  /* 10c62a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c62a45:;
  /* 10c62a45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62a48 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c62a4b:;
  /* 10c62a4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62a4e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62a51 je 0x10c62aae */
  if (C.zf) goto L_10c62aae;
  /* 10c62a53 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10c62a58 push 0x10c7a8b0 */
  push32((uint32_t)(0x10c7a8b0u));
  /* 10c62a5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c62a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62a62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c62a64 push edx */
  push32((uint32_t)(EDX));
  /* 10c62a65 call 0x10c554a0 */
  push32(0x10c62a6au); f_10c554a0();
  /* 10c62a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62a6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62a70 push eax */
  push32((uint32_t)(EAX));
  /* 10c62a71 call 0x10c52670 */
  push32(0x10c62a76u); f_10c52670();
  /* 10c62a76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62a79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62a7c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c62a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62a81 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62a84 je 0x10c62a9a */
  if (C.zf) goto L_10c62a9a;
  /* 10c62a86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62a89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c62a8b push ecx */
  push32((uint32_t)(ECX));
  /* 10c62a8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62a8f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c62a91 push eax */
  push32((uint32_t)(EAX));
  /* 10c62a92 call 0x10c55620 */
  push32(0x10c62a97u); f_10c55620();
  /* 10c62a97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c62a9a:;
  /* 10c62a9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c62a9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62aa0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c62aa3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62aa6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62aa9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c62aac jmp 0x10c62a4b */
  goto L_10c62a4b;
L_10c62aae:;
  /* 10c62aae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c62ab1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c62ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c62aba:;
  /* 10c62aba mov esp, ebp */
  ESP = (EBP);
  /* 10c62abc pop ebp */
  EBP = (pop32());
  /* 10c62abd ret  */
  ESPCHK(0x10c629d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ac0 @ 0x10c62ac0 (237 bytes, 81 insns) */
void f_10c62ac0(void) {
  FTRACE(0x10c62ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c62ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10c62ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62ac4 cmp dword ptr [0x10c7fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62acb jne 0x10c62ae2 */
  if (!C.zf) goto L_10c62ae2;
  /* 10c62acd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c62ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10c62ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c62ad5 call 0x10c62bc0 */
  push32(0x10c62adau); f_10c62bc0();
  /* 10c62ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62add jmp 0x10c62ba9 */
  goto L_10c62ba9;
L_10c62ae2:;
  /* 10c62ae2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c62ae4 call 0x10c56070 */
  push32(0x10c62ae9u); f_10c56070();
  /* 10c62ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62aec jmp 0x10c62af7 */
  goto L_10c62af7;
L_10c62aee:;
  /* 10c62aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62af1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62af4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c62af7:;
  /* 10c62af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62afa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10c62afe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10c62b02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62b05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c62b0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c62b0d je 0x10c62b8b */
  if (C.zf) goto L_10c62b8b;
  /* 10c62b0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62b12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c62b17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c62b19 mov cl, byte ptr [eax + 0x10c7fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c62b1f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c62b22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c62b24 je 0x10c62b76 */
  if (C.zf) goto L_10c62b76;
  /* 10c62b26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62b29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62b2c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c62b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62b32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c62b34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c62b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c62b38 jne 0x10c62b48 */
  if (!C.zf) goto L_10c62b48;
  /* 10c62b3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c62b3c call 0x10c56110 */
  push32(0x10c62b41u); f_10c56110();
  /* 10c62b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62b46 jmp 0x10c62ba9 */
  goto L_10c62ba9;
L_10c62b48:;
  /* 10c62b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62b4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c62b51 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c62b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62b57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c62b59 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c62b5b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c62b5d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62b60 jne 0x10c62b74 */
  if (!C.zf) goto L_10c62b74;
  /* 10c62b62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c62b64 call 0x10c56110 */
  push32(0x10c62b69u); f_10c56110();
  /* 10c62b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62b6f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c62b72 jmp 0x10c62ba9 */
  goto L_10c62ba9;
L_10c62b74:;
  /* 10c62b74 jmp 0x10c62b86 */
  goto L_10c62b86;
L_10c62b76:;
  /* 10c62b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62b79 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c62b7f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62b82 jne 0x10c62b86 */
  if (!C.zf) goto L_10c62b86;
  /* 10c62b84 jmp 0x10c62b8b */
  goto L_10c62b8b;
L_10c62b86:;
  /* 10c62b86 jmp 0x10c62aee */
  goto L_10c62aee;
L_10c62b8b:;
  /* 10c62b8b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c62b8d call 0x10c56110 */
  push32(0x10c62b92u); f_10c56110();
  /* 10c62b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c62b98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c62b9d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c62ba0 jne 0x10c62ba7 */
  if (!C.zf) goto L_10c62ba7;
  /* 10c62ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c62ba5 jmp 0x10c62ba9 */
  goto L_10c62ba9;
L_10c62ba7:;
  /* 10c62ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c62ba9:;
  /* 10c62ba9 mov esp, ebp */
  ESP = (EBP);
  /* 10c62bab pop ebp */
  EBP = (pop32());
  /* 10c62bac ret  */
  ESPCHK(0x10c62ac0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10c62bc0 (193 bytes, 87 insns) */
void f_10c62bc0(void) {
  FTRACE(0x10c62bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62bc2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10c62bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c62bc7 mov ebx, eax */
  EBX = (EAX);
  /* 10c62bc9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c62bcc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c62bd0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c62bd6 je 0x10c62beb */
  if (C.zf) goto L_10c62beb;
L_10c62bd8:;
  /* 10c62bd8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10c62bda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c62bdb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c62bdd je 0x10c62bb0 */
  if (C.zf) { jmp_ind(0x10c62bb0u); return; }
  /* 10c62bdf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10c62be1 je 0x10c62c34 */
  if (C.zf) goto L_10c62c34;
  /* 10c62be3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c62be9 jne 0x10c62bd8 */
  if (!C.zf) goto L_10c62bd8;
L_10c62beb:;
  /* 10c62beb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10c62bed push edi */
  push32((uint32_t)(EDI));
  /* 10c62bee mov eax, ebx */
  EAX = (EBX);
  /* 10c62bf0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10c62bf3 push esi */
  push32((uint32_t)(ESI));
  /* 10c62bf4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10c62bf6:;
  /* 10c62bf6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10c62bf8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10c62bfd mov eax, ecx */
  EAX = (ECX);
  /* 10c62bff mov esi, edi */
  ESI = (EDI);
  /* 10c62c01 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10c62c03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62c05 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62c07 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c62c0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c62c0d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10c62c0f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10c62c11 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c62c14 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c62c1a jne 0x10c62c38 */
  if (!C.zf) goto L_10c62c38;
  /* 10c62c1c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10c62c21 je 0x10c62bf6 */
  if (C.zf) goto L_10c62bf6;
  /* 10c62c23 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10c62c28 jne 0x10c62c32 */
  if (!C.zf) goto L_10c62c32;
  /* 10c62c2a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10c62c30 jne 0x10c62bf6 */
  if (!C.zf) goto L_10c62bf6;
L_10c62c32:;
  /* 10c62c32 pop esi */
  ESI = (pop32());
  /* 10c62c33 pop edi */
  EDI = (pop32());
L_10c62c34:;
  /* 10c62c34 pop ebx */
  EBX = (pop32());
  /* 10c62c35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c62c37 ret  */
  ESPCHK(0x10c62bc0u, _esp0);
  ESP += 4; return;
L_10c62c38:;
  /* 10c62c38 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10c62c3b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c62c3d je 0x10c62c75 */
  if (C.zf) goto L_10c62c75;
  /* 10c62c3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c62c41 je 0x10c62c32 */
  if (C.zf) goto L_10c62c32;
  /* 10c62c43 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c62c45 je 0x10c62c6e */
  if (C.zf) goto L_10c62c6e;
  /* 10c62c47 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c62c49 je 0x10c62c32 */
  if (C.zf) goto L_10c62c32;
  /* 10c62c4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c62c4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c62c50 je 0x10c62c67 */
  if (C.zf) goto L_10c62c67;
  /* 10c62c52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c62c54 je 0x10c62c32 */
  if (C.zf) goto L_10c62c32;
  /* 10c62c56 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c62c58 je 0x10c62c60 */
  if (C.zf) goto L_10c62c60;
  /* 10c62c5a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c62c5c je 0x10c62c32 */
  if (C.zf) goto L_10c62c32;
  /* 10c62c5e jmp 0x10c62bf6 */
  goto L_10c62bf6;
L_10c62c60:;
  /* 10c62c60 pop esi */
  ESI = (pop32());
  /* 10c62c61 pop edi */
  EDI = (pop32());
  /* 10c62c62 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10c62c65 pop ebx */
  EBX = (pop32());
  /* 10c62c66 ret  */
  ESPCHK(0x10c62bc0u, _esp0);
  ESP += 4; return;
L_10c62c67:;
  /* 10c62c67 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10c62c6a pop esi */
  ESI = (pop32());
  /* 10c62c6b pop edi */
  EDI = (pop32());
  /* 10c62c6c pop ebx */
  EBX = (pop32());
  /* 10c62c6d ret  */
  ESPCHK(0x10c62bc0u, _esp0);
  ESP += 4; return;
L_10c62c6e:;
  /* 10c62c6e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10c62c71 pop esi */
  ESI = (pop32());
  /* 10c62c72 pop edi */
  EDI = (pop32());
  /* 10c62c73 pop ebx */
  EBX = (pop32());
  /* 10c62c74 ret  */
  ESPCHK(0x10c62bc0u, _esp0);
  ESP += 4; return;
L_10c62c75:;
  /* 10c62c75 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10c62c78 pop esi */
  ESI = (pop32());
  /* 10c62c79 pop edi */
  EDI = (pop32());
  /* 10c62c7a pop ebx */
  EBX = (pop32());
  /* 10c62c7b ret  */
  ESPCHK(0x10c62bc0u, _esp0);
  ESP += 4; return;
  /* 10c62c7c jmp dword ptr [0x10c80220] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10c80220)))); return;
}

/* RtlUnwind @ 0x10c62dcc (6 bytes, 1 insns) */
void f_10c62dcc(void) {
  FTRACE(0x10c62dccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c62dcc jmp dword ptr [0x10c80300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10c80300)))); return;
}

