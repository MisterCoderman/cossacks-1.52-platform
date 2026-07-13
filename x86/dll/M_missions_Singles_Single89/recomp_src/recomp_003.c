#include "recomp.h"

/* FUN_1000db20 @ 0x11efdb20 (672 bytes, 222 insns) */
void f_11efdb20(void) {
  FTRACE(0x11efdb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efdb20 push ebp */
  push32((uint32_t)(EBP));
  /* 11efdb21 mov ebp, esp */
  EBP = (ESP);
  /* 11efdb23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efdb26 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11efdb2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdb2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11efdb30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efdb33 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb37 jl 0x11efdb4d */
  if ((C.sf!=C.of)) goto L_11efdb4d;
  /* 11efdb39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdb3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efdb3f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb42 jge 0x11efdb4d */
  if ((C.sf==C.of)) goto L_11efdb4d;
  /* 11efdb44 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11efdb4b jmp 0x11efdb55 */
  goto L_11efdb55;
L_11efdb4d:;
  /* 11efdb4d call 0x11efea40 */
  push32(0x11efdb52u); f_11efea40();
  /* 11efdb52 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_11efdb55:;
  /* 11efdb55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdb58 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb5e jne 0x11efdc15 */
  if (!C.zf) goto L_11efdc15;
  /* 11efdb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdb67 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb6b jne 0x11efdc15 */
  if (!C.zf) goto L_11efdc15;
  /* 11efdb71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdb74 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb7b jne 0x11efdc15 */
  if (!C.zf) goto L_11efdc15;
  /* 11efdb81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdb84 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb88 jne 0x11efdc15 */
  if (!C.zf) goto L_11efdc15;
  /* 11efdb8e call 0x11efe7c0 */
  push32(0x11efdb93u); f_11efe7c0();
  /* 11efdb93 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdb97 jne 0x11efdb9e */
  if (!C.zf) goto L_11efdb9e;
  /* 11efdb99 jmp 0x11efddbc */
  goto L_11efddbc;
L_11efdb9e:;
  /* 11efdb9e call 0x11efe7c0 */
  push32(0x11efdba3u); f_11efe7c0();
  /* 11efdba3 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11efdba6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11efdba9 call 0x11efe7c0 */
  push32(0x11efdbaeu); f_11efe7c0();
  /* 11efdbae mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11efdbb1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11efdbb4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 11efdbb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efdbba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdbbd push ecx */
  push32((uint32_t)(ECX));
  /* 11efdbbe call 0x11f045d0 */
  push32(0x11efdbc3u); f_11f045d0();
  /* 11efdbc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdbc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efdbc8 je 0x11efdbd3 */
  if (C.zf) goto L_11efdbd3;
  /* 11efdbca mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11efdbd1 jmp 0x11efdbdb */
  goto L_11efdbdb;
L_11efdbd3:;
  /* 11efdbd3 call 0x11efea40 */
  push32(0x11efdbd8u); f_11efea40();
  /* 11efdbd8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11efdbdb:;
  /* 11efdbdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdbde cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdbe4 jne 0x11efdc0e */
  if (!C.zf) goto L_11efdc0e;
  /* 11efdbe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdbe9 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdbed jne 0x11efdc0e */
  if (!C.zf) goto L_11efdc0e;
  /* 11efdbef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdbf2 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdbf9 jne 0x11efdc0e */
  if (!C.zf) goto L_11efdc0e;
  /* 11efdbfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdbfe cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc02 jne 0x11efdc0e */
  if (!C.zf) goto L_11efdc0e;
  /* 11efdc04 call 0x11efea40 */
  push32(0x11efdc09u); f_11efea40();
  /* 11efdc09 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11efdc0c jmp 0x11efdc15 */
  goto L_11efdc15;
L_11efdc0e:;
  /* 11efdc0e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11efdc15:;
  /* 11efdc15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdc18 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc1e jne 0x11efdd7c */
  if (!C.zf) goto L_11efdd7c;
  /* 11efdc24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdc27 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc2b jne 0x11efdd7c */
  if (!C.zf) goto L_11efdd7c;
  /* 11efdc31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdc34 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc3b jne 0x11efdd7c */
  if (!C.zf) goto L_11efdd7c;
  /* 11efdc41 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11efdc44 push eax */
  push32((uint32_t)(EAX));
  /* 11efdc45 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11efdc48 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdc49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efdc4c push edx */
  push32((uint32_t)(EDX));
  /* 11efdc4d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efdc50 push eax */
  push32((uint32_t)(EAX));
  /* 11efdc51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdc54 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdc55 call 0x11ef9e60 */
  push32(0x11efdc5au); f_11ef9e60();
  /* 11efdc5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdc5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11efdc60 jmp 0x11efdc74 */
  goto L_11efdc74;
L_11efdc62:;
  /* 11efdc62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efdc65 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdc68 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11efdc6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efdc6e add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdc71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11efdc74:;
  /* 11efdc74 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efdc77 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc7a jae 0x11efdd5f */
  if (!C.cf) goto L_11efdd5f;
  /* 11efdc80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efdc83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efdc85 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc88 jg 0x11efdc95 */
  if ((!C.zf&&C.sf==C.of)) goto L_11efdc95;
  /* 11efdc8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efdc8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efdc90 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdc93 jle 0x11efdc97 */
  if ((C.zf||C.sf!=C.of)) goto L_11efdc97;
L_11efdc95:;
  /* 11efdc95 jmp 0x11efdc62 */
  goto L_11efdc62;
L_11efdc97:;
  /* 11efdc97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efdc9a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11efdc9d mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11efdca0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efdca3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11efdca6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11efdca9 jmp 0x11efdcbd */
  goto L_11efdcbd;
L_11efdcab:;
  /* 11efdcab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11efdcae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efdcb1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11efdcb4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efdcb7 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdcba mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11efdcbd:;
  /* 11efdcbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdcc1 jle 0x11efdd5a */
  if ((C.zf||C.sf!=C.of)) goto L_11efdd5a;
  /* 11efdcc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdcca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11efdccd mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11efdcd0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdcd3 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11efdcd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdcd9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11efdcdc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11efdcdf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efdce1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11efdce4 jmp 0x11efdcf8 */
  goto L_11efdcf8;
L_11efdce6:;
  /* 11efdce6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11efdce9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efdcec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11efdcef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11efdcf2 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdcf5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11efdcf8:;
  /* 11efdcf8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdcfc jle 0x11efdd55 */
  if ((C.zf||C.sf!=C.of)) goto L_11efdd55;
  /* 11efdcfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdd01 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11efdd04 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11efdd08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efdd0a push eax */
  push32((uint32_t)(EAX));
  /* 11efdd0b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efdd0e push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd0f call 0x11efdee0 */
  push32(0x11efdd14u); f_11efdee0();
  /* 11efdd14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdd17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efdd19 jne 0x11efdd1d */
  if (!C.zf) goto L_11efdd1d;
  /* 11efdd1b jmp 0x11efdce6 */
  goto L_11efdce6;
L_11efdd1d:;
  /* 11efdd1d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11efdd20 push edx */
  push32((uint32_t)(EDX));
  /* 11efdd21 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efdd24 push eax */
  push32((uint32_t)(EAX));
  /* 11efdd25 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efdd28 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd29 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efdd2c push edx */
  push32((uint32_t)(EDX));
  /* 11efdd2d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11efdd30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efdd32 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd33 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efdd36 push edx */
  push32((uint32_t)(EDX));
  /* 11efdd37 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdd3a push eax */
  push32((uint32_t)(EAX));
  /* 11efdd3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efdd3e push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdd42 push edx */
  push32((uint32_t)(EDX));
  /* 11efdd43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdd46 push eax */
  push32((uint32_t)(EAX));
  /* 11efdd47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdd4a push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd4b call 0x11efe0d0 */
  push32(0x11efdd50u); f_11efe0d0();
  /* 11efdd50 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdd53 jmp 0x11efddba */
  goto L_11efddba;
L_11efdd55:;
  /* 11efdd55 jmp 0x11efdcab */
  goto L_11efdcab;
L_11efdd5a:;
  /* 11efdd5a jmp 0x11efdc62 */
  goto L_11efdc62;
L_11efdd5f:;
  /* 11efdd5f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efdd62 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efdd68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efdd6a je 0x11efdd7a */
  if (C.zf) goto L_11efdd7a;
  /* 11efdd6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11efdd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdd71 push eax */
  push32((uint32_t)(EAX));
  /* 11efdd72 call 0x11efe5b0 */
  push32(0x11efdd77u); f_11efe5b0();
  /* 11efdd77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efdd7a:;
  /* 11efdd7a jmp 0x11efddb8 */
  goto L_11efddb8;
L_11efdd7c:;
  /* 11efdd7c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efdd7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efdd85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efdd87 jne 0x11efddb3 */
  if (!C.zf) goto L_11efddb3;
  /* 11efdd89 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efdd8c push edx */
  push32((uint32_t)(EDX));
  /* 11efdd8d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efdd90 push eax */
  push32((uint32_t)(EAX));
  /* 11efdd91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efdd94 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdd95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdd98 push edx */
  push32((uint32_t)(EDX));
  /* 11efdd99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efdd9c push eax */
  push32((uint32_t)(EAX));
  /* 11efdd9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdda0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdda1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdda4 push edx */
  push32((uint32_t)(EDX));
  /* 11efdda5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdda8 push eax */
  push32((uint32_t)(EAX));
  /* 11efdda9 call 0x11efddc0 */
  push32(0x11efddaeu); f_11efddc0();
  /* 11efddae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efddb1 jmp 0x11efddb8 */
  goto L_11efddb8;
L_11efddb3:;
  /* 11efddb3 call 0x11efe990 */
  push32(0x11efddb8u); f_11efe990();
L_11efddb8:;
  /* 11efddb8 jmp 0x11efddbc */
  goto L_11efddbc;
L_11efddba:;
  /* 11efddba jmp 0x11efdd5a */
  goto L_11efdd5a;
L_11efddbc:;
  /* 11efddbc mov esp, ebp */
  ESP = (EBP);
  /* 11efddbe pop ebp */
  EBP = (pop32());
  /* 11efddbf ret  */
  ESPCHK(0x11efdb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddc0 @ 0x11efddc0 (277 bytes, 107 insns) */
void f_11efddc0(void) {
  FTRACE(0x11efddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efddc1 mov ebp, esp */
  EBP = (ESP);
  /* 11efddc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efddc6 call 0x11efe7c0 */
  push32(0x11efddcbu); f_11efe7c0();
  /* 11efddcb cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efddcf je 0x11efddfe */
  if (C.zf) goto L_11efddfe;
  /* 11efddd1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efddd4 push eax */
  push32((uint32_t)(EAX));
  /* 11efddd5 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efddd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efddd9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdddc push edx */
  push32((uint32_t)(EDX));
  /* 11efdddd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efdde0 push eax */
  push32((uint32_t)(EAX));
  /* 11efdde1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdde4 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdde5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdde8 push edx */
  push32((uint32_t)(EDX));
  /* 11efdde9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efddec push eax */
  push32((uint32_t)(EAX));
  /* 11efdded call 0x11ef9d00 */
  push32(0x11efddf2u); f_11ef9d00();
  /* 11efddf2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efddf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efddf7 je 0x11efddfe */
  if (C.zf) goto L_11efddfe;
  /* 11efddf9 jmp 0x11efded1 */
  goto L_11efded1;
L_11efddfe:;
  /* 11efddfe lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11efde01 push ecx */
  push32((uint32_t)(ECX));
  /* 11efde02 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11efde05 push edx */
  push32((uint32_t)(EDX));
  /* 11efde06 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efde09 push eax */
  push32((uint32_t)(EAX));
  /* 11efde0a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efde0d push ecx */
  push32((uint32_t)(ECX));
  /* 11efde0e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efde11 push edx */
  push32((uint32_t)(EDX));
  /* 11efde12 call 0x11ef9e60 */
  push32(0x11efde17u); f_11ef9e60();
  /* 11efde17 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efde1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efde1d jmp 0x11efde31 */
  goto L_11efde31;
L_11efde1f:;
  /* 11efde1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efde22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efde25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efde28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde2b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efde2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11efde31:;
  /* 11efde31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efde34 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efde37 jae 0x11efded1 */
  if (!C.cf) goto L_11efded1;
  /* 11efde3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde40 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efde43 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efde45 jl 0x11efde89 */
  if ((C.sf!=C.of)) goto L_11efde89;
  /* 11efde47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde4a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efde4d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efde50 jg 0x11efde89 */
  if ((!C.zf&&C.sf==C.of)) goto L_11efde89;
  /* 11efde52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11efde58 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efde5b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11efde5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde61 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11efde64 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efde69 je 0x11efde8b */
  if (C.zf) goto L_11efde8b;
  /* 11efde6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde6e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11efde71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efde74 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11efde77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde7a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11efde7d mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11efde81 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 11efde85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efde87 je 0x11efde8b */
  if (C.zf) goto L_11efde8b;
L_11efde89:;
  /* 11efde89 jmp 0x11efde1f */
  goto L_11efde1f;
L_11efde8b:;
  /* 11efde8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11efde8d mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efde90 push edx */
  push32((uint32_t)(EDX));
  /* 11efde91 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efde94 push eax */
  push32((uint32_t)(EAX));
  /* 11efde95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde98 push ecx */
  push32((uint32_t)(ECX));
  /* 11efde99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efde9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efde9e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11efdea1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efdea4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11efdea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efdeaa mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11efdead add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdeaf push edx */
  push32((uint32_t)(EDX));
  /* 11efdeb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdeb3 push eax */
  push32((uint32_t)(EAX));
  /* 11efdeb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efdeb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdeb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdebb push edx */
  push32((uint32_t)(EDX));
  /* 11efdebc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdebf push eax */
  push32((uint32_t)(EAX));
  /* 11efdec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdec4 call 0x11efe0d0 */
  push32(0x11efdec9u); f_11efe0d0();
  /* 11efdec9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdecc jmp 0x11efde1f */
  goto L_11efde1f;
L_11efded1:;
  /* 11efded1 mov esp, ebp */
  ESP = (EBP);
  /* 11efded3 pop ebp */
  EBP = (pop32());
  /* 11efded4 ret  */
  ESPCHK(0x11efddc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dee0 @ 0x11efdee0 (182 bytes, 69 insns) */
void f_11efdee0(void) {
  FTRACE(0x11efdee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efdee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efdee1 mov ebp, esp */
  EBP = (ESP);
  /* 11efdee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdee7 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdeeb je 0x11efdefb */
  if (C.zf) goto L_11efdefb;
  /* 11efdeed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdef0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11efdef3 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11efdef7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efdef9 jne 0x11efdf05 */
  if (!C.zf) goto L_11efdf05;
L_11efdefb:;
  /* 11efdefb mov eax, 1 */
  EAX = (0x1u);
  /* 11efdf00 jmp 0x11efdf92 */
  goto L_11efdf92;
L_11efdf05:;
  /* 11efdf05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdf08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdf0b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11efdf0e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdf11 je 0x11efdf37 */
  if (C.zf) goto L_11efdf37;
  /* 11efdf13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdf16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11efdf19 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdf1c push edx */
  push32((uint32_t)(EDX));
  /* 11efdf1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdf20 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efdf23 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdf26 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdf27 call 0x11f04660 */
  push32(0x11efdf2cu); f_11f04660();
  /* 11efdf2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdf2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efdf31 je 0x11efdf37 */
  if (C.zf) goto L_11efdf37;
  /* 11efdf33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efdf35 jmp 0x11efdf92 */
  goto L_11efdf92;
L_11efdf37:;
  /* 11efdf37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdf3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efdf3c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11efdf3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efdf41 je 0x11efdf4f */
  if (C.zf) goto L_11efdf4f;
  /* 11efdf43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdf46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efdf48 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11efdf4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efdf4d je 0x11efdf88 */
  if (C.zf) goto L_11efdf88;
L_11efdf4f:;
  /* 11efdf4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdf52 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efdf54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11efdf57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efdf59 je 0x11efdf67 */
  if (C.zf) goto L_11efdf67;
  /* 11efdf5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdf5e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efdf60 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11efdf63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efdf65 je 0x11efdf88 */
  if (C.zf) goto L_11efdf88;
L_11efdf67:;
  /* 11efdf67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdf6a mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efdf6c and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11efdf6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efdf71 je 0x11efdf7f */
  if (C.zf) goto L_11efdf7f;
  /* 11efdf73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdf76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efdf78 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11efdf7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efdf7d je 0x11efdf88 */
  if (C.zf) goto L_11efdf88;
L_11efdf7f:;
  /* 11efdf7f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efdf86 jmp 0x11efdf8f */
  goto L_11efdf8f;
L_11efdf88:;
  /* 11efdf88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efdf8f:;
  /* 11efdf8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efdf92:;
  /* 11efdf92 mov esp, ebp */
  ESP = (EBP);
  /* 11efdf94 pop ebp */
  EBP = (pop32());
  /* 11efdf95 ret  */
  ESPCHK(0x11efdee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfa0 @ 0x11efdfa0 (224 bytes, 77 insns) */
void f_11efdfa0(void) {
  FTRACE(0x11efdfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efdfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efdfa1 mov ebp, esp */
  EBP = (ESP);
  /* 11efdfa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efdfa5 push 0x11f2ae58 */
  push32((uint32_t)(0x11f2ae58u));
  /* 11efdfaa push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11efdfaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11efdfb5 push eax */
  push32((uint32_t)(EAX));
  /* 11efdfb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11efdfbd add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdfc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11efdfc1 push esi */
  push32((uint32_t)(ESI));
  /* 11efdfc2 push edi */
  push32((uint32_t)(EDI));
  /* 11efdfc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11efdfc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdfc9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11efdfcc mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11efdfcf:;
  /* 11efdfcf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efdfd2 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdfd5 je 0x11efe064 */
  if (C.zf) goto L_11efe064;
  /* 11efdfdb cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdfdf jle 0x11efdff5 */
  if ((C.zf||C.sf!=C.of)) goto L_11efdff5;
  /* 11efdfe1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdfe4 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efdfe7 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdfea jge 0x11efdff5 */
  if ((C.sf==C.of)) goto L_11efdff5;
  /* 11efdfec mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11efdff3 jmp 0x11efdffd */
  goto L_11efdffd;
L_11efdff5:;
  /* 11efdff5 call 0x11efea40 */
  push32(0x11efdffau); f_11efea40();
  /* 11efdffa mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11efdffd:;
  /* 11efdffd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe004 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe007 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11efe00a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe00d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe012 je 0x11efe030 */
  if (C.zf) goto L_11efe030;
  /* 11efe014 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11efe019 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe01c push edx */
  push32((uint32_t)(EDX));
  /* 11efe01d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe020 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11efe023 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe026 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11efe02a push eax */
  push32((uint32_t)(EAX));
  /* 11efe02b call 0x11efe690 */
  push32(0x11efe030u); f_11efe690();
L_11efe030:;
  /* 11efe030 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11efe037 jmp 0x11efe050 */
  goto L_11efe050;
  /* 11efe039 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efe03c push ecx */
  push32((uint32_t)(ECX));
  /* 11efe03d call 0x11efe0a0 */
  push32(0x11efe042u); f_11efe0a0();
  /* 11efe042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe045 ret  */
  ESPCHK(0x11efdfa0u, _esp0);
  ESP += 4; return;
  /* 11efe046 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11efe049 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11efe050:;
  /* 11efe050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe053 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11efe056 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe059 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 11efe05c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11efe05f jmp 0x11efdfcf */
  goto L_11efdfcf;
L_11efe064:;
  /* 11efe064 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe067 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe06a jne 0x11efe075 */
  if (!C.zf) goto L_11efe075;
  /* 11efe06c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11efe073 jmp 0x11efe07d */
  goto L_11efe07d;
L_11efe075:;
  /* 11efe075 call 0x11efea40 */
  push32(0x11efe07au); f_11efea40();
  /* 11efe07a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11efe07d:;
  /* 11efe07d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe080 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe083 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11efe086 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efe089 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11efe090 pop edi */
  EDI = (pop32());
  /* 11efe091 pop esi */
  ESI = (pop32());
  /* 11efe092 pop ebx */
  EBX = (pop32());
  /* 11efe093 mov esp, ebp */
  ESP = (EBP);
  /* 11efe095 pop ebp */
  EBP = (pop32());
  /* 11efe096 ret  */
  ESPCHK(0x11efdfa0u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x11efe0a0 (44 bytes, 17 insns) */
void f_11efe0a0(void) {
  FTRACE(0x11efe0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe0a1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe0a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efe0ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efe0ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe0b1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efe0b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efe0b6 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe0bd je 0x11efe0c1 */
  if (C.zf) goto L_11efe0c1;
  /* 11efe0bf jmp 0x11efe0c6 */
  goto L_11efe0c6;
L_11efe0c1:;
  /* 11efe0c1 call 0x11efe990 */
  push32(0x11efe0c6u); f_11efe990();
L_11efe0c6:;
  /* 11efe0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efe0c8 mov esp, ebp */
  ESP = (EBP);
  /* 11efe0ca pop ebp */
  EBP = (pop32());
  /* 11efe0cb ret  */
  ESPCHK(0x11efe0a0u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x11efe0d0 (183 bytes, 73 insns) */
void f_11efe0d0(void) {
  FTRACE(0x11efe0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe0d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe0d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efe0dc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe0e0 je 0x11efe0fa */
  if (C.zf) goto L_11efe0fa;
  /* 11efe0e2 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efe0e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe0e6 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efe0e9 push edx */
  push32((uint32_t)(EDX));
  /* 11efe0ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe0ed push eax */
  push32((uint32_t)(EAX));
  /* 11efe0ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe0f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe0f2 call 0x11efe330 */
  push32(0x11efe0f7u); f_11efe330();
  /* 11efe0f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe0fa:;
  /* 11efe0fa cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe0fe jne 0x11efe10f */
  if (!C.zf) goto L_11efe10f;
  /* 11efe100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe103 push edx */
  push32((uint32_t)(EDX));
  /* 11efe104 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe107 push eax */
  push32((uint32_t)(EAX));
  /* 11efe108 call 0x11ef9b80 */
  push32(0x11efe10du); f_11ef9b80();
  /* 11efe10d jmp 0x11efe11c */
  goto L_11efe11c;
L_11efe10f:;
  /* 11efe10f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe112 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe113 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11efe116 push edx */
  push32((uint32_t)(EDX));
  /* 11efe117 call 0x11ef9b80 */
  push32(0x11efe11cu); f_11ef9b80();
L_11efe11c:;
  /* 11efe11c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efe11f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efe121 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe122 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efe125 push edx */
  push32((uint32_t)(EDX));
  /* 11efe126 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe129 push eax */
  push32((uint32_t)(EAX));
  /* 11efe12a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe12d push ecx */
  push32((uint32_t)(ECX));
  /* 11efe12e call 0x11efdfa0 */
  push32(0x11efe133u); f_11efdfa0();
  /* 11efe133 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe136 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efe139 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efe13c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe13f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe142 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11efe145 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11efe14a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11efe14d push edx */
  push32((uint32_t)(EDX));
  /* 11efe14e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efe151 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11efe154 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe155 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efe158 push edx */
  push32((uint32_t)(EDX));
  /* 11efe159 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe15c push eax */
  push32((uint32_t)(EAX));
  /* 11efe15d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe160 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe164 push edx */
  push32((uint32_t)(EDX));
  /* 11efe165 call 0x11efe190 */
  push32(0x11efe16au); f_11efe190();
  /* 11efe16a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe16d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efe170 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe174 je 0x11efe183 */
  if (C.zf) goto L_11efe183;
  /* 11efe176 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe179 push eax */
  push32((uint32_t)(EAX));
  /* 11efe17a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efe17d push ecx */
  push32((uint32_t)(ECX));
  /* 11efe17e call 0x11ef9b10 */
  push32(0x11efe183u); f_11ef9b10();
L_11efe183:;
  /* 11efe183 mov esp, ebp */
  ESP = (EBP);
  /* 11efe185 pop ebp */
  EBP = (pop32());
  /* 11efe186 ret  */
  ESPCHK(0x11efe0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x11efe190 (172 bytes, 66 insns) */
void f_11efe190(void) {
  FTRACE(0x11efe190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe190 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe191 mov ebp, esp */
  EBP = (ESP);
  /* 11efe193 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efe195 push 0x11f2ae68 */
  push32((uint32_t)(0x11f2ae68u));
  /* 11efe19a push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11efe19f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11efe1a5 push eax */
  push32((uint32_t)(EAX));
  /* 11efe1a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11efe1ad add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe1b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11efe1b1 push esi */
  push32((uint32_t)(ESI));
  /* 11efe1b2 push edi */
  push32((uint32_t)(EDI));
  /* 11efe1b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11efe1b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efe1b9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11efe1bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11efe1c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe1c6 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11efe1c9 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11efe1cc call 0x11efe7c0 */
  push32(0x11efe1d1u); f_11efe7c0();
  /* 11efe1d1 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11efe1d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11efe1d7 call 0x11efe7c0 */
  push32(0x11efe1dcu); f_11efe7c0();
  /* 11efe1dc mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 11efe1df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11efe1e2 call 0x11efe7c0 */
  push32(0x11efe1e7u); f_11efe7c0();
  /* 11efe1e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe1ea mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11efe1ed call 0x11efe7c0 */
  push32(0x11efe1f2u); f_11efe7c0();
  /* 11efe1f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe1f5 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11efe1f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe1ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efe206 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efe209 push edx */
  push32((uint32_t)(EDX));
  /* 11efe20a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efe20d push eax */
  push32((uint32_t)(EAX));
  /* 11efe20e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efe211 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe212 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe215 push edx */
  push32((uint32_t)(EDX));
  /* 11efe216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe219 push eax */
  push32((uint32_t)(EAX));
  /* 11efe21a call 0x11ef9c50 */
  push32(0x11efe21fu); f_11ef9c50();
  /* 11efe21f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe222 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11efe225 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe22c jmp 0x11efe25f */
  goto L_11efe25f;
  /* 11efe22e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efe231 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe232 call 0x11efe2e0 */
  push32(0x11efe237u); f_11efe2e0();
  /* 11efe237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe23a ret  */
  ESPCHK(0x11efe190u, _esp0);
  ESP += 4; return;
  /* 11efe23b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11efe23e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11efe245 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efe247 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 11efe24e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11efe251 push edx */
  push32((uint32_t)(EDX));
  /* 11efe252 call 0x11ef9f32 */
  push32(0x11efe257u); f_11ef9f32();
  /* 11efe257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe25a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11efe25d jmp 0x11efe2ce */
  jmp_ind(0x11efe2ceu); return;
L_11efe25f:;
  /* 11efe25f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11efe266 call 0x11efe26d */
  push32(0x11efe26bu); f_11efe26d();
  /* 11efe26b jmp 0x11efe2cb */
  f_11efe2cb(); return;
}

/* FUN_1000e26d @ 0x11efe26d (94 bytes, 29 insns) */
void f_11efe26d(void) {
  FTRACE(0x11efe26du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe26d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe270 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11efe273 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11efe276 call 0x11efe7c0 */
  push32(0x11efe27bu); f_11efe7c0();
  /* 11efe27b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe27e mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11efe281 call 0x11efe7c0 */
  push32(0x11efe286u); f_11efe7c0();
  /* 11efe286 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11efe289 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11efe28c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe28f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe295 jne 0x11efe2ca */
  if (!C.zf) goto L_11efe2ca;
  /* 11efe297 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe29a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe29e jne 0x11efe2ca */
  if (!C.zf) goto L_11efe2ca;
  /* 11efe2a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe2a3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe2aa jne 0x11efe2ca */
  if (!C.zf) goto L_11efe2ca;
  /* 11efe2ac cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe2b0 jne 0x11efe2ca */
  if (!C.zf) goto L_11efe2ca;
  /* 11efe2b2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe2b6 je 0x11efe2ca */
  if (C.zf) goto L_11efe2ca;
  /* 11efe2b8 call 0x11ef9f9a */
  push32(0x11efe2bdu); f_11ef9f9a();
  /* 11efe2bd push eax */
  push32((uint32_t)(EAX));
  /* 11efe2be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe2c1 push edx */
  push32((uint32_t)(EDX));
  /* 11efe2c2 call 0x11efe5b0 */
  push32(0x11efe2c7u); f_11efe5b0();
  /* 11efe2c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe2ca:;
  /* 11efe2ca ret  */
  ESPCHK(0x11efe26du, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2cb @ 0x11efe2cb (20 bytes, 9 insns) */
void f_11efe2cb(void) {
  FTRACE(0x11efe2cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe2cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11efe2ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efe2d1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11efe2d8 pop edi */
  EDI = (pop32());
  /* 11efe2d9 pop esi */
  ESI = (pop32());
  /* 11efe2da pop ebx */
  EBX = (pop32());
  /* 11efe2db mov esp, ebp */
  ESP = (EBP);
  /* 11efe2dd pop ebp */
  EBP = (pop32());
  /* 11efe2de ret  */
  ESPCHK(0x11efe2cbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x11efe2e0 (66 bytes, 24 insns) */
void f_11efe2e0(void) {
  FTRACE(0x11efe2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe2e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efe2e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efe2ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe2ef cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe2f5 jne 0x11efe31c */
  if (!C.zf) goto L_11efe31c;
  /* 11efe2f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe2fa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe2fe jne 0x11efe31c */
  if (!C.zf) goto L_11efe31c;
  /* 11efe300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe303 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe30a jne 0x11efe31c */
  if (!C.zf) goto L_11efe31c;
  /* 11efe30c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe30f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe313 jne 0x11efe31c */
  if (!C.zf) goto L_11efe31c;
  /* 11efe315 mov eax, 1 */
  EAX = (0x1u);
  /* 11efe31a jmp 0x11efe31e */
  goto L_11efe31e;
L_11efe31c:;
  /* 11efe31c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11efe31e:;
  /* 11efe31e mov esp, ebp */
  ESP = (EBP);
  /* 11efe320 pop ebp */
  EBP = (pop32());
  /* 11efe321 ret  */
  ESPCHK(0x11efe2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x11efe330 (621 bytes, 229 insns) */
void f_11efe330(void) {
  FTRACE(0x11efe330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe330 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe331 mov ebp, esp */
  EBP = (ESP);
  /* 11efe333 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efe335 push 0x11f2ae80 */
  push32((uint32_t)(0x11f2ae80u));
  /* 11efe33a push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11efe33f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11efe345 push eax */
  push32((uint32_t)(EAX));
  /* 11efe346 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11efe34d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe350 push ebx */
  push32((uint32_t)(EBX));
  /* 11efe351 push esi */
  push32((uint32_t)(ESI));
  /* 11efe352 push edi */
  push32((uint32_t)(EDI));
  /* 11efe353 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11efe356 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe359 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe35d je 0x11efe376 */
  if (C.zf) goto L_11efe376;
  /* 11efe35f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe362 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11efe365 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11efe369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe36b je 0x11efe376 */
  if (C.zf) goto L_11efe376;
  /* 11efe36d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe370 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe374 jne 0x11efe37b */
  if (!C.zf) goto L_11efe37b;
L_11efe376:;
  /* 11efe376 jmp 0x11efe59a */
  goto L_11efe59a;
L_11efe37b:;
  /* 11efe37b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe37e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11efe381 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe384 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 11efe388 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11efe38b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe392 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe395 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efe397 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11efe39a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efe39c je 0x11efe3f6 */
  if (C.zf) goto L_11efe3f6;
  /* 11efe39e push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe3a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe3a3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11efe3a6 push eax */
  push32((uint32_t)(EAX));
  /* 11efe3a7 call 0x11f045d0 */
  push32(0x11efe3acu); f_11f045d0();
  /* 11efe3ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe3af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe3b1 je 0x11efe3ec */
  if (C.zf) goto L_11efe3ec;
  /* 11efe3b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe3b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe3b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe3b9 call 0x11f04600 */
  push32(0x11efe3beu); f_11f04600();
  /* 11efe3be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe3c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe3c3 je 0x11efe3ec */
  if (C.zf) goto L_11efe3ec;
  /* 11efe3c5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe3cb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efe3ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11efe3d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe3d3 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe3d6 push edx */
  push32((uint32_t)(EDX));
  /* 11efe3d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe3da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efe3dc push ecx */
  push32((uint32_t)(ECX));
  /* 11efe3dd call 0x11efe640 */
  push32(0x11efe3e2u); f_11efe640();
  /* 11efe3e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe3e5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe3e8 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11efe3ea jmp 0x11efe3f1 */
  goto L_11efe3f1;
L_11efe3ec:;
  /* 11efe3ec call 0x11efea40 */
  push32(0x11efe3f1u); f_11efea40();
L_11efe3f1:;
  /* 11efe3f1 jmp 0x11efe583 */
  goto L_11efe583;
L_11efe3f6:;
  /* 11efe3f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe3f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efe3fb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11efe3fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efe400 je 0x11efe47a */
  if (C.zf) goto L_11efe47a;
  /* 11efe402 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe407 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11efe40a push eax */
  push32((uint32_t)(EAX));
  /* 11efe40b call 0x11f045d0 */
  push32(0x11efe410u); f_11f045d0();
  /* 11efe410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe415 je 0x11efe470 */
  if (C.zf) goto L_11efe470;
  /* 11efe417 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe419 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe41c push ecx */
  push32((uint32_t)(ECX));
  /* 11efe41d call 0x11f04600 */
  push32(0x11efe422u); f_11f04600();
  /* 11efe422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe427 je 0x11efe470 */
  if (C.zf) goto L_11efe470;
  /* 11efe429 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe42c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efe42f push eax */
  push32((uint32_t)(EAX));
  /* 11efe430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe433 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efe436 push edx */
  push32((uint32_t)(EDX));
  /* 11efe437 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe43a push eax */
  push32((uint32_t)(EAX));
  /* 11efe43b call 0x11f01f30 */
  push32(0x11efe440u); f_11f01f30();
  /* 11efe440 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe443 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe446 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe44a jne 0x11efe46e */
  if (!C.zf) goto L_11efe46e;
  /* 11efe44c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe44f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe452 je 0x11efe46e */
  if (C.zf) goto L_11efe46e;
  /* 11efe454 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe457 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe45a push eax */
  push32((uint32_t)(EAX));
  /* 11efe45b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe45e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efe460 push edx */
  push32((uint32_t)(EDX));
  /* 11efe461 call 0x11efe640 */
  push32(0x11efe466u); f_11efe640();
  /* 11efe466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe469 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe46c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11efe46e:;
  /* 11efe46e jmp 0x11efe475 */
  goto L_11efe475;
L_11efe470:;
  /* 11efe470 call 0x11efea40 */
  push32(0x11efe475u); f_11efea40();
L_11efe475:;
  /* 11efe475 jmp 0x11efe583 */
  goto L_11efe583;
L_11efe47a:;
  /* 11efe47a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe47d cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe481 jne 0x11efe4e0 */
  if (!C.zf) goto L_11efe4e0;
  /* 11efe483 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe488 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efe48b push ecx */
  push32((uint32_t)(ECX));
  /* 11efe48c call 0x11f045d0 */
  push32(0x11efe491u); f_11f045d0();
  /* 11efe491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe496 je 0x11efe4d6 */
  if (C.zf) goto L_11efe4d6;
  /* 11efe498 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe49a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe49d push edx */
  push32((uint32_t)(EDX));
  /* 11efe49e call 0x11f04600 */
  push32(0x11efe4a3u); f_11f04600();
  /* 11efe4a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe4a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe4a8 je 0x11efe4d6 */
  if (C.zf) goto L_11efe4d6;
  /* 11efe4aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe4ad mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efe4b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe4b1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe4b4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe4b7 push edx */
  push32((uint32_t)(EDX));
  /* 11efe4b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe4bb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efe4be push ecx */
  push32((uint32_t)(ECX));
  /* 11efe4bf call 0x11efe640 */
  push32(0x11efe4c4u); f_11efe640();
  /* 11efe4c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe4c7 push eax */
  push32((uint32_t)(EAX));
  /* 11efe4c8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe4cb push edx */
  push32((uint32_t)(EDX));
  /* 11efe4cc call 0x11f01f30 */
  push32(0x11efe4d1u); f_11f01f30();
  /* 11efe4d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe4d4 jmp 0x11efe4db */
  goto L_11efe4db;
L_11efe4d6:;
  /* 11efe4d6 call 0x11efea40 */
  push32(0x11efe4dbu); f_11efea40();
L_11efe4db:;
  /* 11efe4db jmp 0x11efe583 */
  goto L_11efe583;
L_11efe4e0:;
  /* 11efe4e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe4e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe4e5 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efe4e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe4e9 call 0x11f045d0 */
  push32(0x11efe4eeu); f_11f045d0();
  /* 11efe4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe4f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe4f3 je 0x11efe57e */
  if (C.zf) goto L_11efe57e;
  /* 11efe4f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe4fb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe4fe push edx */
  push32((uint32_t)(EDX));
  /* 11efe4ff call 0x11f04600 */
  push32(0x11efe504u); f_11f04600();
  /* 11efe504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe509 je 0x11efe57e */
  if (C.zf) goto L_11efe57e;
  /* 11efe50b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe50e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efe511 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe512 call 0x11f04630 */
  push32(0x11efe517u); f_11f04630();
  /* 11efe517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe51a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe51c je 0x11efe57e */
  if (C.zf) goto L_11efe57e;
  /* 11efe51e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe521 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efe523 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11efe526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe528 je 0x11efe555 */
  if (C.zf) goto L_11efe555;
  /* 11efe52a push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe52c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe52f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe532 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe536 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11efe539 push eax */
  push32((uint32_t)(EAX));
  /* 11efe53a call 0x11efe640 */
  push32(0x11efe53fu); f_11efe640();
  /* 11efe53f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe542 push eax */
  push32((uint32_t)(EAX));
  /* 11efe543 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe546 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efe549 push edx */
  push32((uint32_t)(EDX));
  /* 11efe54a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe54d push eax */
  push32((uint32_t)(EAX));
  /* 11efe54e call 0x11ef9b70 */
  push32(0x11efe553u); f_11ef9b70();
  /* 11efe553 jmp 0x11efe57c */
  goto L_11efe57c;
L_11efe555:;
  /* 11efe555 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe558 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe55b push ecx */
  push32((uint32_t)(ECX));
  /* 11efe55c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe55f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11efe562 push eax */
  push32((uint32_t)(EAX));
  /* 11efe563 call 0x11efe640 */
  push32(0x11efe568u); f_11efe640();
  /* 11efe568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe56b push eax */
  push32((uint32_t)(EAX));
  /* 11efe56c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efe56f mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efe572 push edx */
  push32((uint32_t)(EDX));
  /* 11efe573 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efe576 push eax */
  push32((uint32_t)(EAX));
  /* 11efe577 call 0x11ef9b60 */
  push32(0x11efe57cu); f_11ef9b60();
L_11efe57c:;
  /* 11efe57c jmp 0x11efe583 */
  goto L_11efe583;
L_11efe57e:;
  /* 11efe57e call 0x11efea40 */
  push32(0x11efe583u); f_11efea40();
L_11efe583:;
  /* 11efe583 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11efe58a jmp 0x11efe59a */
  goto L_11efe59a;
  /* 11efe58c mov eax, 1 */
  EAX = (0x1u);
  /* 11efe591 ret  */
  ESPCHK(0x11efe330u, _esp0);
  ESP += 4; return;
  /* 11efe592 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11efe595 call 0x11efe990 */
  push32(0x11efe59au); f_11efe990();
L_11efe59a:;
  /* 11efe59a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efe59d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11efe5a4 pop edi */
  EDI = (pop32());
  /* 11efe5a5 pop esi */
  ESI = (pop32());
  /* 11efe5a6 pop ebx */
  EBX = (pop32());
  /* 11efe5a7 mov esp, ebp */
  ESP = (EBP);
  /* 11efe5a9 pop ebp */
  EBP = (pop32());
  /* 11efe5aa ret  */
  ESPCHK(0x11efe330u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x11efe5b0 (111 bytes, 46 insns) */
void f_11efe5b0(void) {
  FTRACE(0x11efe5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe5b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efe5b5 push 0x11f2ae90 */
  push32((uint32_t)(0x11f2ae90u));
  /* 11efe5ba push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11efe5bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11efe5c5 push eax */
  push32((uint32_t)(EAX));
  /* 11efe5c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11efe5cd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe5d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11efe5d1 push esi */
  push32((uint32_t)(ESI));
  /* 11efe5d2 push edi */
  push32((uint32_t)(EDI));
  /* 11efe5d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11efe5d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe5da je 0x11efe625 */
  if (C.zf) goto L_11efe625;
  /* 11efe5dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe5df mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11efe5e2 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe5e6 je 0x11efe625 */
  if (C.zf) goto L_11efe625;
  /* 11efe5e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe5ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe5f2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11efe5f5 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efe5f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe5fc mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11efe5ff push eax */
  push32((uint32_t)(EAX));
  /* 11efe600 call 0x11ef9b50 */
  push32(0x11efe605u); f_11ef9b50();
  /* 11efe605 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11efe60c jmp 0x11efe625 */
  goto L_11efe625;
  /* 11efe60e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe611 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efe616 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efe618 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe61a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efe61c ret  */
  ESPCHK(0x11efe5b0u, _esp0);
  ESP += 4; return;
  /* 11efe61d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11efe620 call 0x11efe990 */
  push32(0x11efe625u); f_11efe990();
L_11efe625:;
  /* 11efe625 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efe628 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11efe62f pop edi */
  EDI = (pop32());
  /* 11efe630 pop esi */
  ESI = (pop32());
  /* 11efe631 pop ebx */
  EBX = (pop32());
  /* 11efe632 mov esp, ebp */
  ESP = (EBP);
  /* 11efe634 pop ebp */
  EBP = (pop32());
  /* 11efe635 ret  */
  ESPCHK(0x11efe5b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x11efe640 (70 bytes, 27 insns) */
void f_11efe640(void) {
  FTRACE(0x11efe640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe640 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe641 mov ebp, esp */
  EBP = (ESP);
  /* 11efe643 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe644 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe64a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe64c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efe64f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe652 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe656 jl 0x11efe67f */
  if ((C.sf!=C.of)) goto L_11efe67f;
  /* 11efe658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe65b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efe65e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe661 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11efe664 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe667 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11efe66a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe66d add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe670 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efe673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe679 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe67c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efe67f:;
  /* 11efe67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe682 mov esp, ebp */
  ESP = (EBP);
  /* 11efe684 pop ebp */
  EBP = (pop32());
  /* 11efe685 ret  */
  ESPCHK(0x11efe640u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11efe690 (76 bytes, 34 insns) */
void f_11efe690(void) {
  FTRACE(0x11efe690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe690 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe691 mov ebp, esp */
  EBP = (ESP);
  /* 11efe693 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe696 push ebx */
  push32((uint32_t)(EBX));
  /* 11efe697 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efe69b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe69e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efe6a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe6a4 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe6a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11efe6a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe6ab mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe6ae call 0x11ef9fbd */
  push32(0x11efe6b3u); f_11ef9fbd();
  /* 11efe6b3 push esi */
  push32((uint32_t)(ESI));
  /* 11efe6b4 push edi */
  push32((uint32_t)(EDI));
  /* 11efe6b5 call eax */
  call_ind((uint32_t)(EAX), 0x11efe6b7u);
  /* 11efe6b7 pop edi */
  EDI = (pop32());
  /* 11efe6b8 pop esi */
  ESI = (pop32());
  /* 11efe6b9 mov ebx, ebp */
  EBX = (EBP);
  /* 11efe6bb pop ebp */
  EBP = (pop32());
  /* 11efe6bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efe6bf push ebp */
  push32((uint32_t)(EBP));
  /* 11efe6c0 mov ebp, ebx */
  EBP = (EBX);
  /* 11efe6c2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe6c8 jne 0x11efe6cf */
  if (!C.zf) goto L_11efe6cf;
  /* 11efe6ca mov ecx, 2 */
  ECX = (0x2u);
L_11efe6cf:;
  /* 11efe6cf push ecx */
  push32((uint32_t)(ECX));
  /* 11efe6d0 call 0x11ef9fbd */
  push32(0x11efe6d5u); f_11ef9fbd();
  /* 11efe6d5 pop ebp */
  EBP = (pop32());
  /* 11efe6d6 pop ecx */
  ECX = (pop32());
  /* 11efe6d7 pop ebx */
  EBX = (pop32());
  /* 11efe6d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11efe6d9 ret 0xc */
  ESPCHK(0x11efe690u, _esp0);
  ESP += 16; return;
}

/* FUN_1000e6e0 @ 0x11efe6e0 (130 bytes, 42 insns) */
void f_11efe6e0(void) {
  FTRACE(0x11efe6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe6e1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe6e4 call 0x11efb8e0 */
  push32(0x11efe6e9u); f_11efb8e0();
  /* 11efe6e9 call dword ptr [0x11f333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333e4))), 0x11efe6efu);
  /* 11efe6ef mov dword ptr [0x11f2df90], eax */
  w32((uint32_t)(0x11f2df90), (EAX));
  /* 11efe6f4 cmp dword ptr [0x11f2df90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2df90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe6fb jne 0x11efe701 */
  if (!C.zf) goto L_11efe701;
  /* 11efe6fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efe6ff jmp 0x11efe75e */
  goto L_11efe75e;
L_11efe701:;
  /* 11efe701 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11efe703 push 0x11f2ae9c */
  push32((uint32_t)(0x11f2ae9cu));
  /* 11efe708 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe70a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11efe70c push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe70e call 0x11efbed0 */
  push32(0x11efe713u); f_11efbed0();
  /* 11efe713 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe716 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efe719 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe71d je 0x11efe734 */
  if (C.zf) goto L_11efe734;
  /* 11efe71f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe722 push eax */
  push32((uint32_t)(EAX));
  /* 11efe723 mov ecx, dword ptr [0x11f2df90] */
  ECX = (r32((uint32_t)(0x11f2df90)));
  /* 11efe729 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe72a call dword ptr [0x11f333e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333e8))), 0x11efe730u);
  /* 11efe730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe732 jne 0x11efe738 */
  if (!C.zf) goto L_11efe738;
L_11efe734:;
  /* 11efe734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efe736 jmp 0x11efe75e */
  goto L_11efe75e;
L_11efe738:;
  /* 11efe738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe73b push edx */
  push32((uint32_t)(EDX));
  /* 11efe73c call 0x11efe7a0 */
  push32(0x11efe741u); f_11efe7a0();
  /* 11efe741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe744 call dword ptr [0x11f333ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333ec))), 0x11efe74au);
  /* 11efe74a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe74d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11efe74f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe752 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11efe759 mov eax, 1 */
  EAX = (0x1u);
L_11efe75e:;
  /* 11efe75e mov esp, ebp */
  ESP = (EBP);
  /* 11efe760 pop ebp */
  EBP = (pop32());
  /* 11efe761 ret  */
  ESPCHK(0x11efe6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e770 @ 0x11efe770 (41 bytes, 11 insns) */
void f_11efe770(void) {
  FTRACE(0x11efe770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe770 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe771 mov ebp, esp */
  EBP = (ESP);
  /* 11efe773 call 0x11efb920 */
  push32(0x11efe778u); f_11efb920();
  /* 11efe778 cmp dword ptr [0x11f2df90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2df90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe77f je 0x11efe797 */
  if (C.zf) goto L_11efe797;
  /* 11efe781 mov eax, dword ptr [0x11f2df90] */
  EAX = (r32((uint32_t)(0x11f2df90)));
  /* 11efe786 push eax */
  push32((uint32_t)(EAX));
  /* 11efe787 call dword ptr [0x11f333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333e0))), 0x11efe78du);
  /* 11efe78d mov dword ptr [0x11f2df90], 0xffffffff */
  w32((uint32_t)(0x11f2df90), (0xffffffffu));
L_11efe797:;
  /* 11efe797 pop ebp */
  EBP = (pop32());
  /* 11efe798 ret  */
  ESPCHK(0x11efe770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7a0 @ 0x11efe7a0 (25 bytes, 8 insns) */
void f_11efe7a0(void) {
  FTRACE(0x11efe7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe7a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe7a6 mov dword ptr [eax + 0x50], 0x11f2e2b0 */
  w32((uint32_t)(EAX + 0x50), (0x11f2e2b0u));
  /* 11efe7ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe7b0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11efe7b7 pop ebp */
  EBP = (pop32());
  /* 11efe7b8 ret  */
  ESPCHK(0x11efe7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x11efe7c0 (152 bytes, 48 insns) */
void f_11efe7c0(void) {
  FTRACE(0x11efe7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11efe7c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe7c6 call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11efe7ccu);
  /* 11efe7cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efe7cf mov eax, dword ptr [0x11f2df90] */
  EAX = (r32((uint32_t)(0x11f2df90)));
  /* 11efe7d4 push eax */
  push32((uint32_t)(EAX));
  /* 11efe7d5 call dword ptr [0x11f333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d8))), 0x11efe7dbu);
  /* 11efe7db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efe7de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe7e2 jne 0x11efe847 */
  if (!C.zf) goto L_11efe847;
  /* 11efe7e4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11efe7e9 push 0x11f2ae9c */
  push32((uint32_t)(0x11f2ae9cu));
  /* 11efe7ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe7f0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11efe7f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efe7f4 call 0x11efbed0 */
  push32(0x11efe7f9u); f_11efbed0();
  /* 11efe7f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe7fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efe7ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe803 je 0x11efe83d */
  if (C.zf) goto L_11efe83d;
  /* 11efe805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe808 push ecx */
  push32((uint32_t)(ECX));
  /* 11efe809 mov edx, dword ptr [0x11f2df90] */
  EDX = (r32((uint32_t)(0x11f2df90)));
  /* 11efe80f push edx */
  push32((uint32_t)(EDX));
  /* 11efe810 call dword ptr [0x11f333e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333e8))), 0x11efe816u);
  /* 11efe816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efe818 je 0x11efe83d */
  if (C.zf) goto L_11efe83d;
  /* 11efe81a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe81d push eax */
  push32((uint32_t)(EAX));
  /* 11efe81e call 0x11efe7a0 */
  push32(0x11efe823u); f_11efe7a0();
  /* 11efe823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efe826 call dword ptr [0x11f333ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333ec))), 0x11efe82cu);
  /* 11efe82c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe82f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11efe831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe834 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11efe83b jmp 0x11efe847 */
  goto L_11efe847;
L_11efe83d:;
  /* 11efe83d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11efe83f call 0x11efa530 */
  push32(0x11efe844u); f_11efa530();
  /* 11efe844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe847:;
  /* 11efe847 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efe84a push eax */
  push32((uint32_t)(EAX));
  /* 11efe84b call dword ptr [0x11f333dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333dc))), 0x11efe851u);
  /* 11efe851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efe854 mov esp, ebp */
  ESP = (EBP);
  /* 11efe856 pop ebp */
  EBP = (pop32());
  /* 11efe857 ret  */
  ESPCHK(0x11efe7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x11efe860 (263 bytes, 86 insns) */
void f_11efe860(void) {
  FTRACE(0x11efe860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe860 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe861 mov ebp, esp */
  EBP = (ESP);
  /* 11efe863 cmp dword ptr [0x11f2df90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2df90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe86a je 0x11efe965 */
  if (C.zf) goto L_11efe965;
  /* 11efe870 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe874 jne 0x11efe885 */
  if (!C.zf) goto L_11efe885;
  /* 11efe876 mov eax, dword ptr [0x11f2df90] */
  EAX = (r32((uint32_t)(0x11f2df90)));
  /* 11efe87b push eax */
  push32((uint32_t)(EAX));
  /* 11efe87c call dword ptr [0x11f333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d8))), 0x11efe882u);
  /* 11efe882 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11efe885:;
  /* 11efe885 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe889 je 0x11efe956 */
  if (C.zf) goto L_11efe956;
  /* 11efe88f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe892 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe896 je 0x11efe8a9 */
  if (C.zf) goto L_11efe8a9;
  /* 11efe898 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe89a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe89d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11efe8a0 push eax */
  push32((uint32_t)(EAX));
  /* 11efe8a1 call 0x11efc550 */
  push32(0x11efe8a6u); f_11efc550();
  /* 11efe8a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe8a9:;
  /* 11efe8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8ac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe8b0 je 0x11efe8c3 */
  if (C.zf) goto L_11efe8c3;
  /* 11efe8b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe8b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8b7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11efe8ba push eax */
  push32((uint32_t)(EAX));
  /* 11efe8bb call 0x11efc550 */
  push32(0x11efe8c0u); f_11efc550();
  /* 11efe8c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe8c3:;
  /* 11efe8c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8c6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe8ca je 0x11efe8dd */
  if (C.zf) goto L_11efe8dd;
  /* 11efe8cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe8ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8d1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11efe8d4 push eax */
  push32((uint32_t)(EAX));
  /* 11efe8d5 call 0x11efc550 */
  push32(0x11efe8dau); f_11efc550();
  /* 11efe8da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe8dd:;
  /* 11efe8dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8e0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe8e4 je 0x11efe8f7 */
  if (C.zf) goto L_11efe8f7;
  /* 11efe8e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe8e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8eb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11efe8ee push eax */
  push32((uint32_t)(EAX));
  /* 11efe8ef call 0x11efc550 */
  push32(0x11efe8f4u); f_11efc550();
  /* 11efe8f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe8f7:;
  /* 11efe8f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe8fa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe8fe je 0x11efe911 */
  if (C.zf) goto L_11efe911;
  /* 11efe900 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe902 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe905 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11efe908 push eax */
  push32((uint32_t)(EAX));
  /* 11efe909 call 0x11efc550 */
  push32(0x11efe90eu); f_11efc550();
  /* 11efe90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe911:;
  /* 11efe911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe914 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe918 je 0x11efe92b */
  if (C.zf) goto L_11efe92b;
  /* 11efe91a push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe91c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe91f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11efe922 push eax */
  push32((uint32_t)(EAX));
  /* 11efe923 call 0x11efc550 */
  push32(0x11efe928u); f_11efc550();
  /* 11efe928 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe92b:;
  /* 11efe92b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe92e cmp dword ptr [ecx + 0x50], 0x11f2e2b0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11f2e2b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe935 je 0x11efe948 */
  if (C.zf) goto L_11efe948;
  /* 11efe937 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe93c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11efe93f push eax */
  push32((uint32_t)(EAX));
  /* 11efe940 call 0x11efc550 */
  push32(0x11efe945u); f_11efc550();
  /* 11efe945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe948:;
  /* 11efe948 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efe94a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efe94d push ecx */
  push32((uint32_t)(ECX));
  /* 11efe94e call 0x11efc550 */
  push32(0x11efe953u); f_11efc550();
  /* 11efe953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efe956:;
  /* 11efe956 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efe958 mov edx, dword ptr [0x11f2df90] */
  EDX = (r32((uint32_t)(0x11f2df90)));
  /* 11efe95e push edx */
  push32((uint32_t)(EDX));
  /* 11efe95f call dword ptr [0x11f333e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333e8))), 0x11efe965u);
L_11efe965:;
  /* 11efe965 pop ebp */
  EBP = (pop32());
  /* 11efe966 ret  */
  ESPCHK(0x11efe860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e970 @ 0x11efe970 (11 bytes, 5 insns) */
void f_11efe970(void) {
  FTRACE(0x11efe970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe970 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe971 mov ebp, esp */
  EBP = (ESP);
  /* 11efe973 call dword ptr [0x11f333ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333ec))), 0x11efe979u);
  /* 11efe979 pop ebp */
  EBP = (pop32());
  /* 11efe97a ret  */
  ESPCHK(0x11efe970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e980 @ 0x11efe980 (11 bytes, 5 insns) */
void f_11efe980(void) {
  FTRACE(0x11efe980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe980 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe981 mov ebp, esp */
  EBP = (ESP);
  /* 11efe983 call dword ptr [0x11f333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d0))), 0x11efe989u);
  /* 11efe989 pop ebp */
  EBP = (pop32());
  /* 11efe98a ret  */
  ESPCHK(0x11efe980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e990 @ 0x11efe990 (92 bytes, 29 insns) */
void f_11efe990(void) {
  FTRACE(0x11efe990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe990 push ebp */
  push32((uint32_t)(EBP));
  /* 11efe991 mov ebp, esp */
  EBP = (ESP);
  /* 11efe993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efe995 push 0x11f2aea8 */
  push32((uint32_t)(0x11f2aea8u));
  /* 11efe99a push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11efe99f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11efe9a5 push eax */
  push32((uint32_t)(EAX));
  /* 11efe9a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11efe9ad sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efe9b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11efe9b1 push esi */
  push32((uint32_t)(ESI));
  /* 11efe9b2 push edi */
  push32((uint32_t)(EDI));
  /* 11efe9b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11efe9b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe9bd call 0x11efe7c0 */
  push32(0x11efe9c2u); f_11efe7c0();
  /* 11efe9c2 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efe9c6 je 0x11efe9f0 */
  if (C.zf) goto L_11efe9f0;
  /* 11efe9c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efe9cf call 0x11efe7c0 */
  push32(0x11efe9d4u); f_11efe7c0();
  /* 11efe9d4 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11efe9d7u);
  /* 11efe9d7 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efe9de jmp 0x11efe9f0 */
  goto L_11efe9f0;
  /* 11efe9e0 mov eax, 1 */
  EAX = (0x1u);
  /* 11efe9e5 ret  */
  ESPCHK(0x11efe990u, _esp0);
  ESP += 4; return;
  /* 11efe9e6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11efe9e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efe9f0:;
  /* 11efe9f0 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11efe9f7 call 0x11efe9fe */
  push32(0x11efe9fcu); f_11efe9fe();
  /* 11efe9fc jmp 0x11efea04 */
  jmp_ind(0x11efea04u); return;
}

/* _abort @ 0x11efe9fe (5 bytes, 2 insns) */
void f_11efe9fe(void) {
  FTRACE(0x11efe9feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efe9fe call 0x11f049f0 */
  push32(0x11efea03u); f_11f049f0();
  /* 11efea03 ret  */
  ESPCHK(0x11efe9feu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea20 @ 0x11efea20 (29 bytes, 10 insns) */
void f_11efea20(void) {
  FTRACE(0x11efea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efea20 push ebp */
  push32((uint32_t)(EBP));
  /* 11efea21 mov ebp, esp */
  EBP = (ESP);
  /* 11efea23 call 0x11efe7c0 */
  push32(0x11efea28u); f_11efe7c0();
  /* 11efea28 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efea2c je 0x11efea36 */
  if (C.zf) goto L_11efea36;
  /* 11efea2e call 0x11efe7c0 */
  push32(0x11efea33u); f_11efe7c0();
  /* 11efea33 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x11efea36u);
L_11efea36:;
  /* 11efea36 call 0x11efe990 */
  push32(0x11efea3bu); f_11efe990();
  /* 11efea3b pop ebp */
  EBP = (pop32());
  /* 11efea3c ret  */
  ESPCHK(0x11efea20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x11efea40 (90 bytes, 27 insns) */
void f_11efea40(void) {
  FTRACE(0x11efea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efea40 push ebp */
  push32((uint32_t)(EBP));
  /* 11efea41 mov ebp, esp */
  EBP = (ESP);
  /* 11efea43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efea45 push 0x11f2aec0 */
  push32((uint32_t)(0x11f2aec0u));
  /* 11efea4a push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11efea4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11efea55 push eax */
  push32((uint32_t)(EAX));
  /* 11efea56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11efea5d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efea60 push ebx */
  push32((uint32_t)(EBX));
  /* 11efea61 push esi */
  push32((uint32_t)(ESI));
  /* 11efea62 push edi */
  push32((uint32_t)(EDI));
  /* 11efea63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11efea66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efea6d cmp dword ptr [0x11f2df94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2df94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efea74 je 0x11efea9c */
  if (C.zf) goto L_11efea9c;
  /* 11efea76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efea7d call dword ptr [0x11f2df94] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2df94))), 0x11efea83u);
  /* 11efea83 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efea8a jmp 0x11efea9c */
  goto L_11efea9c;
  /* 11efea8c mov eax, 1 */
  EAX = (0x1u);
  /* 11efea91 ret  */
  ESPCHK(0x11efea40u, _esp0);
  ESP += 4; return;
  /* 11efea92 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11efea95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efea9c:;
  /* 11efea9c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11efeaa3 call 0x11efeaaa */
  push32(0x11efeaa8u); f_11efeaaa();
  /* 11efeaa8 jmp 0x11efeab0 */
  f_11efeab0(); return;
}

/* FUN_1000eaaa @ 0x11efeaaa (6 bytes, 2 insns) */
void f_11efeaaa(void) {
  FTRACE(0x11efeaaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeaaa call 0x11efe990 */
  push32(0x11efeaafu); f_11efe990();
  /* 11efeaaf ret  */
  ESPCHK(0x11efeaaau, _esp0);
  ESP += 4; return;
}

/* FUN_1000eab0 @ 0x11efeab0 (17 bytes, 8 insns) */
void f_11efeab0(void) {
  FTRACE(0x11efeab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeab0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efeab3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11efeaba pop edi */
  EDI = (pop32());
  /* 11efeabb pop esi */
  ESI = (pop32());
  /* 11efeabc pop ebx */
  EBX = (pop32());
  /* 11efeabd mov esp, ebp */
  ESP = (EBP);
  /* 11efeabf pop ebp */
  EBP = (pop32());
  /* 11efeac0 ret  */
  ESPCHK(0x11efeab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ead0 @ 0x11efead0 (56 bytes, 15 insns) */
void f_11efead0(void) {
  FTRACE(0x11efead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efead0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efead1 mov ebp, esp */
  EBP = (ESP);
  /* 11efead3 cmp dword ptr [0x11f2de10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2de10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efeada je 0x11efeae2 */
  if (C.zf) goto L_11efeae2;
  /* 11efeadc call dword ptr [0x11f2de10] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2de10))), 0x11efeae2u);
L_11efeae2:;
  /* 11efeae2 push 0x11f2d638 */
  push32((uint32_t)(0x11f2d638u));
  /* 11efeae7 push 0x11f2d320 */
  push32((uint32_t)(0x11f2d320u));
  /* 11efeaec call 0x11efeca0 */
  push32(0x11efeaf1u); f_11efeca0();
  /* 11efeaf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeaf4 push 0x11f2d21c */
  push32((uint32_t)(0x11f2d21cu));
  /* 11efeaf9 push 0x11f2d000 */
  push32((uint32_t)(0x11f2d000u));
  /* 11efeafe call 0x11efeca0 */
  push32(0x11efeb03u); f_11efeca0();
  /* 11efeb03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeb06 pop ebp */
  EBP = (pop32());
  /* 11efeb07 ret  */
  ESPCHK(0x11efead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb10 @ 0x11efeb10 (21 bytes, 10 insns) */
void f_11efeb10(void) {
  FTRACE(0x11efeb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11efeb11 mov ebp, esp */
  EBP = (ESP);
  /* 11efeb13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efeb15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efeb17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efeb1a push eax */
  push32((uint32_t)(EAX));
  /* 11efeb1b call 0x11efeb90 */
  push32(0x11efeb20u); f_11efeb90();
  /* 11efeb20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeb23 pop ebp */
  EBP = (pop32());
  /* 11efeb24 ret  */
  ESPCHK(0x11efeb10u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11efeb30 (21 bytes, 10 insns) */
void f_11efeb30(void) {
  FTRACE(0x11efeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 11efeb31 mov ebp, esp */
  EBP = (ESP);
  /* 11efeb33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efeb35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efeb37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efeb3a push eax */
  push32((uint32_t)(EAX));
  /* 11efeb3b call 0x11efeb90 */
  push32(0x11efeb40u); f_11efeb90();
  /* 11efeb40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeb43 pop ebp */
  EBP = (pop32());
  /* 11efeb44 ret  */
  ESPCHK(0x11efeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x11efeb50 (19 bytes, 9 insns) */
void f_11efeb50(void) {
  FTRACE(0x11efeb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11efeb51 mov ebp, esp */
  EBP = (ESP);
  /* 11efeb53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efeb55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efeb57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efeb59 call 0x11efeb90 */
  push32(0x11efeb5eu); f_11efeb90();
  /* 11efeb5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeb61 pop ebp */
  EBP = (pop32());
  /* 11efeb62 ret  */
  ESPCHK(0x11efeb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x11efeb70 (19 bytes, 9 insns) */
void f_11efeb70(void) {
  FTRACE(0x11efeb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeb70 push ebp */
  push32((uint32_t)(EBP));
  /* 11efeb71 mov ebp, esp */
  EBP = (ESP);
  /* 11efeb73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efeb75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efeb77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efeb79 call 0x11efeb90 */
  push32(0x11efeb7eu); f_11efeb90();
  /* 11efeb7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeb81 pop ebp */
  EBP = (pop32());
  /* 11efeb82 ret  */
  ESPCHK(0x11efeb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x11efeb90 (227 bytes, 61 insns) */
void f_11efeb90(void) {
  FTRACE(0x11efeb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11efeb91 mov ebp, esp */
  EBP = (ESP);
  /* 11efeb93 push ecx */
  push32((uint32_t)(ECX));
  /* 11efeb94 call 0x11efec80 */
  push32(0x11efeb99u); f_11efec80();
  /* 11efeb99 cmp dword ptr [0x11f307ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f307ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efeba0 jne 0x11efebb3 */
  if (!C.zf) goto L_11efebb3;
  /* 11efeba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efeba5 push eax */
  push32((uint32_t)(EAX));
  /* 11efeba6 call dword ptr [0x11f333c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333c8))), 0x11efebacu);
  /* 11efebac push eax */
  push32((uint32_t)(EAX));
  /* 11efebad call dword ptr [0x11f333cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333cc))), 0x11efebb3u);
L_11efebb3:;
  /* 11efebb3 mov dword ptr [0x11f307a8], 1 */
  w32((uint32_t)(0x11f307a8), (0x1u));
  /* 11efebbd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11efebc0 mov byte ptr [0x11f307a4], cl */
  w8((uint32_t)(0x11f307a4), (CL));
  /* 11efebc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efebca jne 0x11efec13 */
  if (!C.zf) goto L_11efec13;
  /* 11efebcc cmp dword ptr [0x11f321f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efebd3 je 0x11efec01 */
  if (C.zf) goto L_11efec01;
  /* 11efebd5 mov edx, dword ptr [0x11f321f4] */
  EDX = (r32((uint32_t)(0x11f321f4)));
  /* 11efebdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11efebde:;
  /* 11efebde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efebe1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efebe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efebe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efebea cmp ecx, dword ptr [0x11f321f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f321f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efebf0 jb 0x11efec01 */
  if (C.cf) goto L_11efec01;
  /* 11efebf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efebf5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efebf8 je 0x11efebff */
  if (C.zf) goto L_11efebff;
  /* 11efebfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efebfd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11efebffu);
L_11efebff:;
  /* 11efebff jmp 0x11efebde */
  goto L_11efebde;
L_11efec01:;
  /* 11efec01 push 0x11f2d944 */
  push32((uint32_t)(0x11f2d944u));
  /* 11efec06 push 0x11f2d73c */
  push32((uint32_t)(0x11f2d73cu));
  /* 11efec0b call 0x11efeca0 */
  push32(0x11efec10u); f_11efeca0();
  /* 11efec10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efec13:;
  /* 11efec13 push 0x11f2dc50 */
  push32((uint32_t)(0x11f2dc50u));
  /* 11efec18 push 0x11f2da48 */
  push32((uint32_t)(0x11f2da48u));
  /* 11efec1d call 0x11efeca0 */
  push32(0x11efec22u); f_11efeca0();
  /* 11efec22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efec25 cmp dword ptr [0x11f307b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f307b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efec2c jne 0x11efec4e */
  if (!C.zf) goto L_11efec4e;
  /* 11efec2e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efec30 call 0x11efcfd0 */
  push32(0x11efec35u); f_11efcfd0();
  /* 11efec35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efec38 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11efec3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efec3d je 0x11efec4e */
  if (C.zf) goto L_11efec4e;
  /* 11efec3f mov dword ptr [0x11f307b0], 1 */
  w32((uint32_t)(0x11f307b0), (0x1u));
  /* 11efec49 call 0x11efd8e0 */
  push32(0x11efec4eu); f_11efd8e0();
L_11efec4e:;
  /* 11efec4e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efec52 je 0x11efec5b */
  if (C.zf) goto L_11efec5b;
  /* 11efec54 call 0x11efec90 */
  push32(0x11efec59u); f_11efec90();
  /* 11efec59 jmp 0x11efec6f */
  goto L_11efec6f;
L_11efec5b:;
  /* 11efec5b mov dword ptr [0x11f307ac], 1 */
  w32((uint32_t)(0x11f307ac), (0x1u));
  /* 11efec65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efec68 push ecx */
  push32((uint32_t)(ECX));
  /* 11efec69 call dword ptr [0x11f33440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33440))), 0x11efec6fu);
L_11efec6f:;
  /* 11efec6f mov esp, ebp */
  ESP = (EBP);
  /* 11efec71 pop ebp */
  EBP = (pop32());
  /* 11efec72 ret  */
  ESPCHK(0x11efeb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec80 @ 0x11efec80 (15 bytes, 7 insns) */
void f_11efec80(void) {
  FTRACE(0x11efec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efec80 push ebp */
  push32((uint32_t)(EBP));
  /* 11efec81 mov ebp, esp */
  EBP = (ESP);
  /* 11efec83 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11efec85 call 0x11efb9c0 */
  push32(0x11efec8au); f_11efb9c0();
  /* 11efec8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efec8d pop ebp */
  EBP = (pop32());
  /* 11efec8e ret  */
  ESPCHK(0x11efec80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x11efec90 (15 bytes, 7 insns) */
void f_11efec90(void) {
  FTRACE(0x11efec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efec90 push ebp */
  push32((uint32_t)(EBP));
  /* 11efec91 mov ebp, esp */
  EBP = (ESP);
  /* 11efec93 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11efec95 call 0x11efba60 */
  push32(0x11efec9au); f_11efba60();
  /* 11efec9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efec9d pop ebp */
  EBP = (pop32());
  /* 11efec9e ret  */
  ESPCHK(0x11efec90u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11efeca0 (37 bytes, 16 insns) */
void f_11efeca0(void) {
  FTRACE(0x11efeca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efeca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efeca1 mov ebp, esp */
  EBP = (ESP);
L_11efeca3:;
  /* 11efeca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efeca6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efeca9 jae 0x11efecc3 */
  if (!C.cf) goto L_11efecc3;
  /* 11efecab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efecae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efecb1 je 0x11efecb8 */
  if (C.zf) goto L_11efecb8;
  /* 11efecb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efecb6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11efecb8u);
L_11efecb8:;
  /* 11efecb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efecbb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efecbe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11efecc1 jmp 0x11efeca3 */
  goto L_11efeca3;
L_11efecc3:;
  /* 11efecc3 pop ebp */
  EBP = (pop32());
  /* 11efecc4 ret  */
  ESPCHK(0x11efeca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecd0 @ 0x11efecd0 (238 bytes, 75 insns) */
void f_11efecd0(void) {
  FTRACE(0x11efecd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efecd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efecd1 mov ebp, esp */
  EBP = (ESP);
  /* 11efecd3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efecd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efecd9 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efecde mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11efece1 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efece5 jl 0x11efecf0 */
  if ((C.sf!=C.of)) goto L_11efecf0;
  /* 11efece7 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efecee jle 0x11efecf8 */
  if ((C.zf||C.sf!=C.of)) goto L_11efecf8;
L_11efecf0:;
  /* 11efecf0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efecf3 jmp 0x11efedba */
  goto L_11efedba;
L_11efecf8:;
  /* 11efecf8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efecfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efecfe add edx, dword ptr [ecx*4 + 0x11f2e41c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x11f2e41c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed05 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11efed08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efed0b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11efed0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efed10 jne 0x11efed21 */
  if (!C.zf) goto L_11efed21;
  /* 11efed12 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efed16 jle 0x11efed21 */
  if ((C.zf||C.sf!=C.of)) goto L_11efed21;
  /* 11efed18 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11efed1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed1e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11efed21:;
  /* 11efed21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efed24 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efed27 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efed2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efed30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efed33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11efed36 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11efed39 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed3b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 11efed3f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efed42 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efed48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efed4b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efed4e add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed51 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efed54 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efed5a call 0x11f04a10 */
  push32(0x11efed5fu); f_11f04a10();
  /* 11efed5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efed62 add ecx, dword ptr [0x11f2e338] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e338))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efed68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efed6b mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11efed6e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11efed71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efed74 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11efed77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efed7a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efed7d mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11efed80 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efed83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11efed86 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efed8a je 0x11efedab */
  if (C.zf) goto L_11efedab;
  /* 11efed8c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efed90 jne 0x11efedb7 */
  if (!C.zf) goto L_11efedb7;
  /* 11efed92 cmp dword ptr [0x11f2e33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efed99 je 0x11efedb7 */
  if (C.zf) goto L_11efedb7;
  /* 11efed9b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11efed9e push eax */
  push32((uint32_t)(EAX));
  /* 11efed9f call 0x11f04e20 */
  push32(0x11efeda4u); f_11f04e20();
  /* 11efeda4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeda7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efeda9 je 0x11efedb7 */
  if (C.zf) goto L_11efedb7;
L_11efedab:;
  /* 11efedab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efedae add ecx, dword ptr [0x11f2e340] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e340))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efedb4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11efedb7:;
  /* 11efedb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efedba:;
  /* 11efedba mov esp, ebp */
  ESP = (EBP);
  /* 11efedbc pop ebp */
  EBP = (pop32());
  /* 11efedbd ret  */
  ESPCHK(0x11efecd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edc0 @ 0x11efedc0 (804 bytes, 236 insns) */
void f_11efedc0(void) {
  FTRACE(0x11efedc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efedc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efedc1 mov ebp, esp */
  EBP = (ESP);
  /* 11efedc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efedc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11efedcb push 0x11f2aed8 */
  push32((uint32_t)(0x11f2aed8u));
  /* 11efedd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efedd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11efedd7 call 0x11efbac0 */
  push32(0x11efeddcu); f_11efbac0();
  /* 11efeddc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeddf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11efede2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efede6 jne 0x11efedf2 */
  if (!C.zf) goto L_11efedf2;
  /* 11efede8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11efedea call 0x11efa530 */
  push32(0x11efedefu); f_11efa530();
  /* 11efedef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efedf2:;
  /* 11efedf2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efedf5 mov dword ptr [0x11f320a0], eax */
  w32((uint32_t)(0x11f320a0), (EAX));
  /* 11efedfa mov dword ptr [0x11f321dc], 0x20 */
  w32((uint32_t)(0x11f321dc), (0x20u));
  /* 11efee04 jmp 0x11efee0f */
  goto L_11efee0f;
L_11efee06:;
  /* 11efee06 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efee09 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efee0c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11efee0f:;
  /* 11efee0f mov edx, dword ptr [0x11f320a0] */
  EDX = (r32((uint32_t)(0x11f320a0)));
  /* 11efee15 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efee1b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efee1e jae 0x11efee43 */
  if (!C.cf) goto L_11efee43;
  /* 11efee20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efee23 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11efee27 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efee2a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11efee30 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efee33 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11efee37 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efee3a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11efee41 jmp 0x11efee06 */
  goto L_11efee06;
L_11efee43:;
  /* 11efee43 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11efee46 push ecx */
  push32((uint32_t)(ECX));
  /* 11efee47 call dword ptr [0x11f333bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333bc))), 0x11efee4du);
  /* 11efee4d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11efee50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efee56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efee58 je 0x11efefe5 */
  if (C.zf) goto L_11efefe5;
  /* 11efee5e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efee62 je 0x11efefe5 */
  if (C.zf) goto L_11efefe5;
  /* 11efee68 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efee6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efee6d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11efee70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efee73 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efee76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efee79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efee7c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efee7f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11efee82 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efee89 jge 0x11efee93 */
  if ((C.sf==C.of)) goto L_11efee93;
  /* 11efee8b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11efee8e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11efee91 jmp 0x11efee9a */
  goto L_11efee9a;
L_11efee93:;
  /* 11efee93 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11efee9a:;
  /* 11efee9a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11efee9d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11efeea0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11efeea7 jmp 0x11efeeb2 */
  goto L_11efeeb2;
L_11efeea9:;
  /* 11efeea9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11efeeac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeeaf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11efeeb2:;
  /* 11efeeb2 mov ecx, dword ptr [0x11f321dc] */
  ECX = (r32((uint32_t)(0x11f321dc)));
  /* 11efeeb8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efeebb jge 0x11efef52 */
  if ((C.sf==C.of)) goto L_11efef52;
  /* 11efeec1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11efeec6 push 0x11f2aed8 */
  push32((uint32_t)(0x11f2aed8u));
  /* 11efeecb push 2 */
  push32((uint32_t)(0x2u));
  /* 11efeecd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11efeed2 call 0x11efbac0 */
  push32(0x11efeed7u); f_11efbac0();
  /* 11efeed7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeeda mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11efeedd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efeee1 jne 0x11efeeee */
  if (!C.zf) goto L_11efeeee;
  /* 11efeee3 mov edx, dword ptr [0x11f321dc] */
  EDX = (r32((uint32_t)(0x11f321dc)));
  /* 11efeee9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11efeeec jmp 0x11efef52 */
  goto L_11efef52;
L_11efeeee:;
  /* 11efeeee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11efeef1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efeef4 mov dword ptr [eax*4 + 0x11f320a0], ecx */
  w32((uint32_t)(EAX*4 + 0x11f320a0), (ECX));
  /* 11efeefb mov edx, dword ptr [0x11f321dc] */
  EDX = (r32((uint32_t)(0x11f321dc)));
  /* 11efef01 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efef04 mov dword ptr [0x11f321dc], edx */
  w32((uint32_t)(0x11f321dc), (EDX));
  /* 11efef0a jmp 0x11efef15 */
  goto L_11efef15;
L_11efef0c:;
  /* 11efef0c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efef0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efef12 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11efef15:;
  /* 11efef15 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11efef18 mov edx, dword ptr [ecx*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11efef1f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efef25 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efef28 jae 0x11efef4d */
  if (!C.cf) goto L_11efef4d;
  /* 11efef2a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efef2d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11efef31 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efef34 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11efef3a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efef3d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11efef41 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efef44 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11efef4b jmp 0x11efef0c */
  goto L_11efef0c;
L_11efef4d:;
  /* 11efef4d jmp 0x11efeea9 */
  goto L_11efeea9;
L_11efef52:;
  /* 11efef52 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11efef59 jmp 0x11efef76 */
  goto L_11efef76;
L_11efef5b:;
  /* 11efef5b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11efef5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efef61 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11efef64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efef67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efef6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efef6d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11efef70 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efef73 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11efef76:;
  /* 11efef76 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11efef79 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efef7c jge 0x11efefe5 */
  if ((C.sf==C.of)) goto L_11efefe5;
  /* 11efef7e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11efef81 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efef84 je 0x11efefe0 */
  if (C.zf) goto L_11efefe0;
  /* 11efef86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efef89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efef8c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11efef8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efef91 je 0x11efefe0 */
  if (C.zf) goto L_11efefe0;
  /* 11efef93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efef96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11efef99 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11efef9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efef9e jne 0x11efefb0 */
  if (!C.zf) goto L_11efefb0;
  /* 11efefa0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11efefa3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efefa5 push edx */
  push32((uint32_t)(EDX));
  /* 11efefa6 call dword ptr [0x11f333c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333c0))), 0x11efefacu);
  /* 11efefac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efefae je 0x11efefe0 */
  if (C.zf) goto L_11efefe0;
L_11efefb0:;
  /* 11efefb0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11efefb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11efefb6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11efefb9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11efefbc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efefbf mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11efefc6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efefc8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11efefcb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efefce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11efefd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efefd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11efefd5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efefd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efefdb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11efefdd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11efefe0:;
  /* 11efefe0 jmp 0x11efef5b */
  goto L_11efef5b;
L_11efefe5:;
  /* 11efefe5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11efefec jmp 0x11efeff7 */
  goto L_11efeff7;
L_11efefee:;
  /* 11efefee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11efeff1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efeff4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11efeff7:;
  /* 11efeff7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efeffb jge 0x11eff0d4 */
  if ((C.sf==C.of)) goto L_11eff0d4;
  /* 11eff001 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eff004 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eff007 mov edx, dword ptr [0x11f320a0] */
  EDX = (r32((uint32_t)(0x11f320a0)));
  /* 11eff00d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff00f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11eff012 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff015 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff018 jne 0x11eff0c0 */
  if (!C.zf) goto L_11eff0c0;
  /* 11eff01e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff021 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11eff025 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff029 jne 0x11eff034 */
  if (!C.zf) goto L_11eff034;
  /* 11eff02b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11eff032 jmp 0x11eff044 */
  goto L_11eff044;
L_11eff034:;
  /* 11eff034 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eff037 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff03a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11eff03c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff03e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff041 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11eff044:;
  /* 11eff044 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11eff047 push eax */
  push32((uint32_t)(EAX));
  /* 11eff048 call dword ptr [0x11f33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33410))), 0x11eff04eu);
  /* 11eff04e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11eff051 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff055 je 0x11eff0af */
  if (C.zf) goto L_11eff0af;
  /* 11eff057 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eff05a push ecx */
  push32((uint32_t)(ECX));
  /* 11eff05b call dword ptr [0x11f333c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333c0))), 0x11eff061u);
  /* 11eff061 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11eff064 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff068 je 0x11eff0af */
  if (C.zf) goto L_11eff0af;
  /* 11eff06a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff06d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eff070 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11eff072 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11eff075 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eff07b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff07e jne 0x11eff090 */
  if (!C.zf) goto L_11eff090;
  /* 11eff080 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff083 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11eff086 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11eff088 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff08b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11eff08e jmp 0x11eff0ad */
  goto L_11eff0ad;
L_11eff090:;
  /* 11eff090 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11eff093 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eff099 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff09c jne 0x11eff0ad */
  if (!C.zf) goto L_11eff0ad;
  /* 11eff09e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff0a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eff0a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11eff0a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff0aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11eff0ad:;
  /* 11eff0ad jmp 0x11eff0be */
  goto L_11eff0be;
L_11eff0af:;
  /* 11eff0af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff0b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eff0b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11eff0b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff0bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11eff0be:;
  /* 11eff0be jmp 0x11eff0cf */
  goto L_11eff0cf;
L_11eff0c0:;
  /* 11eff0c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff0c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eff0c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11eff0c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eff0cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11eff0cf:;
  /* 11eff0cf jmp 0x11efefee */
  goto L_11efefee;
L_11eff0d4:;
  /* 11eff0d4 mov eax, dword ptr [0x11f321dc] */
  EAX = (r32((uint32_t)(0x11f321dc)));
  /* 11eff0d9 push eax */
  push32((uint32_t)(EAX));
  /* 11eff0da call dword ptr [0x11f333c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333c4))), 0x11eff0e0u);
  /* 11eff0e0 mov esp, ebp */
  ESP = (EBP);
  /* 11eff0e2 pop ebp */
  EBP = (pop32());
  /* 11eff0e3 ret  */
  ESPCHK(0x11efedc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11eff0f0 (155 bytes, 45 insns) */
void f_11eff0f0(void) {
  FTRACE(0x11eff0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eff0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eff0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eff0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff0f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eff0fd jmp 0x11eff108 */
  goto L_11eff108;
L_11eff0ff:;
  /* 11eff0ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff102 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff105 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eff108:;
  /* 11eff108 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff10c jge 0x11eff187 */
  if ((C.sf==C.of)) goto L_11eff187;
  /* 11eff10e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff111 cmp dword ptr [ecx*4 + 0x11f320a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11f320a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff119 je 0x11eff182 */
  if (C.zf) goto L_11eff182;
  /* 11eff11b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff11e mov eax, dword ptr [edx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11eff125 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eff128 jmp 0x11eff133 */
  goto L_11eff133;
L_11eff12a:;
  /* 11eff12a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff12d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff130 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eff133:;
  /* 11eff133 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff136 mov eax, dword ptr [edx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11eff13d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff142 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff145 jae 0x11eff15f */
  if (!C.cf) goto L_11eff15f;
  /* 11eff147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff14a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff14e je 0x11eff15d */
  if (C.zf) goto L_11eff15d;
  /* 11eff150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff153 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff156 push edx */
  push32((uint32_t)(EDX));
  /* 11eff157 call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11eff15du);
L_11eff15d:;
  /* 11eff15d jmp 0x11eff12a */
  goto L_11eff12a;
L_11eff15f:;
  /* 11eff15f push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff164 mov ecx, dword ptr [eax*4 + 0x11f320a0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11eff16b push ecx */
  push32((uint32_t)(ECX));
  /* 11eff16c call 0x11efc550 */
  push32(0x11eff171u); f_11efc550();
  /* 11eff171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff174 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff177 mov dword ptr [edx*4 + 0x11f320a0], 0 */
  w32((uint32_t)(EDX*4 + 0x11f320a0), (0x0u));
L_11eff182:;
  /* 11eff182 jmp 0x11eff0ff */
  goto L_11eff0ff;
L_11eff187:;
  /* 11eff187 mov esp, ebp */
  ESP = (EBP);
  /* 11eff189 pop ebp */
  EBP = (pop32());
  /* 11eff18a ret  */
  ESPCHK(0x11eff0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x11eff190 (329 bytes, 102 insns) */
void f_11eff190(void) {
  FTRACE(0x11eff190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eff190 push ebp */
  push32((uint32_t)(EBP));
  /* 11eff191 mov ebp, esp */
  EBP = (ESP);
  /* 11eff193 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff196 cmp dword ptr [0x11f321f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff19d jne 0x11eff1a4 */
  if (!C.zf) goto L_11eff1a4;
  /* 11eff19f call 0x11f05b30 */
  push32(0x11eff1a4u); f_11f05b30();
L_11eff1a4:;
  /* 11eff1a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eff1ab mov eax, dword ptr [0x11f306e4] */
  EAX = (r32((uint32_t)(0x11f306e4)));
  /* 11eff1b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eff1b3:;
  /* 11eff1b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff1b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eff1b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff1bb je 0x11eff1e9 */
  if (C.zf) goto L_11eff1e9;
  /* 11eff1bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff1c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff1c3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff1c6 je 0x11eff1d1 */
  if (C.zf) goto L_11eff1d1;
  /* 11eff1c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff1cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff1ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11eff1d1:;
  /* 11eff1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff1d4 push eax */
  push32((uint32_t)(EAX));
  /* 11eff1d5 call 0x11f00050 */
  push32(0x11eff1dau); f_11f00050();
  /* 11eff1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff1dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff1e0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11eff1e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eff1e7 jmp 0x11eff1b3 */
  goto L_11eff1b3;
L_11eff1e9:;
  /* 11eff1e9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11eff1eb push 0x11f2aee4 */
  push32((uint32_t)(0x11f2aee4u));
  /* 11eff1f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff1f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff1f5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11eff1fc push ecx */
  push32((uint32_t)(ECX));
  /* 11eff1fd call 0x11efbac0 */
  push32(0x11eff202u); f_11efbac0();
  /* 11eff202 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff205 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eff208 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff20b mov dword ptr [0x11f3078c], edx */
  w32((uint32_t)(0x11f3078c), (EDX));
  /* 11eff211 cmp dword ptr [0x11f3078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f3078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff218 jne 0x11eff224 */
  if (!C.zf) goto L_11eff224;
  /* 11eff21a push 9 */
  push32((uint32_t)(0x9u));
  /* 11eff21c call 0x11efa530 */
  push32(0x11eff221u); f_11efa530();
  /* 11eff221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eff224:;
  /* 11eff224 mov eax, dword ptr [0x11f306e4] */
  EAX = (r32((uint32_t)(0x11f306e4)));
  /* 11eff229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eff22c jmp 0x11eff237 */
  goto L_11eff237;
L_11eff22e:;
  /* 11eff22e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff231 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff234 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eff237:;
  /* 11eff237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff23a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eff23d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff23f je 0x11eff2a7 */
  if (C.zf) goto L_11eff2a7;
  /* 11eff241 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff244 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff245 call 0x11f00050 */
  push32(0x11eff24au); f_11f00050();
  /* 11eff24a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff24d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff250 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eff253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff256 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eff259 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff25c je 0x11eff2a5 */
  if (C.zf) goto L_11eff2a5;
  /* 11eff25e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11eff260 push 0x11f2aee4 */
  push32((uint32_t)(0x11f2aee4u));
  /* 11eff265 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff267 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff26a push ecx */
  push32((uint32_t)(ECX));
  /* 11eff26b call 0x11efbac0 */
  push32(0x11eff270u); f_11efbac0();
  /* 11eff270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff273 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff276 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11eff278 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff27b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff27e jne 0x11eff28a */
  if (!C.zf) goto L_11eff28a;
  /* 11eff280 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eff282 call 0x11efa530 */
  push32(0x11eff287u); f_11efa530();
  /* 11eff287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eff28a:;
  /* 11eff28a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff28d push ecx */
  push32((uint32_t)(ECX));
  /* 11eff28e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff291 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eff293 push eax */
  push32((uint32_t)(EAX));
  /* 11eff294 call 0x11f001d0 */
  push32(0x11eff299u); f_11f001d0();
  /* 11eff299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff29c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff29f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff2a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11eff2a5:;
  /* 11eff2a5 jmp 0x11eff22e */
  goto L_11eff22e;
L_11eff2a7:;
  /* 11eff2a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff2a9 mov edx, dword ptr [0x11f306e4] */
  EDX = (r32((uint32_t)(0x11f306e4)));
  /* 11eff2af push edx */
  push32((uint32_t)(EDX));
  /* 11eff2b0 call 0x11efc550 */
  push32(0x11eff2b5u); f_11efc550();
  /* 11eff2b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff2b8 mov dword ptr [0x11f306e4], 0 */
  w32((uint32_t)(0x11f306e4), (0x0u));
  /* 11eff2c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff2c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eff2cb mov dword ptr [0x11f321e0], 1 */
  w32((uint32_t)(0x11f321e0), (0x1u));
  /* 11eff2d5 mov esp, ebp */
  ESP = (EBP);
  /* 11eff2d7 pop ebp */
  EBP = (pop32());
  /* 11eff2d8 ret  */
  ESPCHK(0x11eff190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x11eff2e0 (216 bytes, 69 insns) */
void f_11eff2e0(void) {
  FTRACE(0x11eff2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eff2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eff2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11eff2e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff2e6 cmp dword ptr [0x11f321f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff2ed jne 0x11eff2f4 */
  if (!C.zf) goto L_11eff2f4;
  /* 11eff2ef call 0x11f05b30 */
  push32(0x11eff2f4u); f_11f05b30();
L_11eff2f4:;
  /* 11eff2f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11eff2f9 push 0x11f307b4 */
  push32((uint32_t)(0x11f307b4u));
  /* 11eff2fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff300 call dword ptr [0x11f3342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3342c))), 0x11eff306u);
  /* 11eff306 mov dword ptr [0x11f3079c], 0x11f307b4 */
  w32((uint32_t)(0x11f3079c), (0x11f307b4u));
  /* 11eff310 mov eax, dword ptr [0x11f32214] */
  EAX = (r32((uint32_t)(0x11f32214)));
  /* 11eff315 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eff31a jne 0x11eff327 */
  if (!C.zf) goto L_11eff327;
  /* 11eff31c mov edx, dword ptr [0x11f3079c] */
  EDX = (r32((uint32_t)(0x11f3079c)));
  /* 11eff322 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11eff325 jmp 0x11eff32f */
  goto L_11eff32f;
L_11eff327:;
  /* 11eff327 mov eax, dword ptr [0x11f32214] */
  EAX = (r32((uint32_t)(0x11f32214)));
  /* 11eff32c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11eff32f:;
  /* 11eff32f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eff332 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11eff335 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11eff338 push edx */
  push32((uint32_t)(EDX));
  /* 11eff339 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11eff33c push eax */
  push32((uint32_t)(EAX));
  /* 11eff33d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff33f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff341 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff344 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff345 call 0x11eff3c0 */
  push32(0x11eff34au); f_11eff3c0();
  /* 11eff34a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff34d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11eff352 push 0x11f2aef0 */
  push32((uint32_t)(0x11f2aef0u));
  /* 11eff357 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff359 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff35c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff35f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11eff362 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff363 call 0x11efbac0 */
  push32(0x11eff368u); f_11efbac0();
  /* 11eff368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff36b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eff36e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff372 jne 0x11eff37e */
  if (!C.zf) goto L_11eff37e;
  /* 11eff374 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eff376 call 0x11efa530 */
  push32(0x11eff37bu); f_11efa530();
  /* 11eff37b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eff37e:;
  /* 11eff37e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11eff381 push edx */
  push32((uint32_t)(EDX));
  /* 11eff382 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11eff385 push eax */
  push32((uint32_t)(EAX));
  /* 11eff386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff38c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11eff38f push eax */
  push32((uint32_t)(EAX));
  /* 11eff390 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff393 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff394 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff397 push edx */
  push32((uint32_t)(EDX));
  /* 11eff398 call 0x11eff3c0 */
  push32(0x11eff39du); f_11eff3c0();
  /* 11eff39d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff3a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff3a3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff3a6 mov dword ptr [0x11f30780], eax */
  w32((uint32_t)(0x11f30780), (EAX));
  /* 11eff3ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff3ae mov dword ptr [0x11f30784], ecx */
  w32((uint32_t)(0x11f30784), (ECX));
  /* 11eff3b4 mov esp, ebp */
  ESP = (EBP);
  /* 11eff3b6 pop ebp */
  EBP = (pop32());
  /* 11eff3b7 ret  */
  ESPCHK(0x11eff2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x11eff3c0 (1060 bytes, 360 insns) */
void f_11eff3c0(void) {
  FTRACE(0x11eff3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eff3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eff3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11eff3c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff3c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff3c9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eff3cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eff3d2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11eff3d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eff3db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eff3de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff3e2 je 0x11eff3f5 */
  if (C.zf) goto L_11eff3f5;
  /* 11eff3e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eff3e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff3ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11eff3ec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eff3ef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff3f2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11eff3f5:;
  /* 11eff3f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff3f8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff3fb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff3fe jne 0x11eff4cd */
  if (!C.zf) goto L_11eff4cd;
L_11eff404:;
  /* 11eff404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff407 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff40a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eff40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff410 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff413 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff416 je 0x11eff492 */
  if (C.zf) goto L_11eff492;
  /* 11eff418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff41b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eff41e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff420 je 0x11eff492 */
  if (C.zf) goto L_11eff492;
  /* 11eff422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff425 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eff427 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eff429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff42b mov al, byte ptr [edx + 0x11f31f61] */
  AL = (r8((uint32_t)(EDX + 0x11f31f61)));
  /* 11eff431 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eff434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff436 je 0x11eff467 */
  if (C.zf) goto L_11eff467;
  /* 11eff438 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff43b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eff43d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff440 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff443 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11eff445 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff449 je 0x11eff467 */
  if (C.zf) goto L_11eff467;
  /* 11eff44b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff44e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff451 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eff453 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11eff455 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff458 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff45b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11eff45e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff461 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff464 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eff467:;
  /* 11eff467 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff46a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eff46c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff46f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff472 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eff474 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff478 je 0x11eff48d */
  if (C.zf) goto L_11eff48d;
  /* 11eff47a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff47d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff480 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eff482 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eff484 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff487 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff48a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11eff48d:;
  /* 11eff48d jmp 0x11eff404 */
  goto L_11eff404;
L_11eff492:;
  /* 11eff492 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff495 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eff497 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff49a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff49d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11eff49f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff4a3 je 0x11eff4b4 */
  if (C.zf) goto L_11eff4b4;
  /* 11eff4a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff4a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11eff4ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff4ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff4b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11eff4b4:;
  /* 11eff4b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff4b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff4ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff4bd jne 0x11eff4c8 */
  if (!C.zf) goto L_11eff4c8;
  /* 11eff4bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff4c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff4c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eff4c8:;
  /* 11eff4c8 jmp 0x11eff59c */
  goto L_11eff59c;
L_11eff4cd:;
  /* 11eff4cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff4d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eff4d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff4d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff4d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eff4da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff4de je 0x11eff4f3 */
  if (C.zf) goto L_11eff4f3;
  /* 11eff4e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff4e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff4e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eff4e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eff4ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff4ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff4f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11eff4f3:;
  /* 11eff4f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff4f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eff4f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11eff4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff4fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff501 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eff504 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff507 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eff50d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eff50f mov dl, byte ptr [ecx + 0x11f31f61] */
  DL = (r8((uint32_t)(ECX + 0x11f31f61)));
  /* 11eff515 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11eff518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff51a je 0x11eff54b */
  if (C.zf) goto L_11eff54b;
  /* 11eff51c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff51f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eff521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff524 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff527 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eff529 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff52d je 0x11eff542 */
  if (C.zf) goto L_11eff542;
  /* 11eff52f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff535 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eff537 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eff539 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff53c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff53f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11eff542:;
  /* 11eff542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff548 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eff54b:;
  /* 11eff54b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff54e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eff554 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff557 je 0x11eff577 */
  if (C.zf) goto L_11eff577;
  /* 11eff559 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff55c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eff561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff563 je 0x11eff577 */
  if (C.zf) goto L_11eff577;
  /* 11eff565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff568 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eff56e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff571 jne 0x11eff4cd */
  if (!C.zf) goto L_11eff4cd;
L_11eff577:;
  /* 11eff577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff57a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eff580 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff582 jne 0x11eff58f */
  if (!C.zf) goto L_11eff58f;
  /* 11eff584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff587 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff58a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eff58d jmp 0x11eff59c */
  goto L_11eff59c;
L_11eff58f:;
  /* 11eff58f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff593 je 0x11eff59c */
  if (C.zf) goto L_11eff59c;
  /* 11eff595 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff598 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11eff59c:;
  /* 11eff59c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11eff5a3:;
  /* 11eff5a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff5a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eff5a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff5ab je 0x11eff5ce */
  if (C.zf) goto L_11eff5ce;
L_11eff5ad:;
  /* 11eff5ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff5b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eff5b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff5b6 je 0x11eff5c3 */
  if (C.zf) goto L_11eff5c3;
  /* 11eff5b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff5bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff5be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff5c1 jne 0x11eff5ce */
  if (!C.zf) goto L_11eff5ce;
L_11eff5c3:;
  /* 11eff5c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff5c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff5c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eff5cc jmp 0x11eff5ad */
  goto L_11eff5ad;
L_11eff5ce:;
  /* 11eff5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff5d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff5d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eff5d6 jne 0x11eff5dd */
  if (!C.zf) goto L_11eff5dd;
  /* 11eff5d8 jmp 0x11eff7bb */
  goto L_11eff7bb;
L_11eff5dd:;
  /* 11eff5dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff5e1 je 0x11eff5f4 */
  if (C.zf) goto L_11eff5f4;
  /* 11eff5e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eff5e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff5e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11eff5eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eff5ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff5f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11eff5f4:;
  /* 11eff5f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eff5f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eff5f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff5fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eff5ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11eff601:;
  /* 11eff601 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11eff608 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11eff60f:;
  /* 11eff60f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff612 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eff615 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff618 jne 0x11eff62e */
  if (!C.zf) goto L_11eff62e;
  /* 11eff61a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff61d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff620 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eff623 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff626 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff629 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11eff62c jmp 0x11eff60f */
  goto L_11eff60f;
L_11eff62e:;
  /* 11eff62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff631 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff634 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff637 jne 0x11eff68a */
  if (!C.zf) goto L_11eff68a;
  /* 11eff639 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff63c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eff63e mov ecx, 2 */
  ECX = (0x2u);
  /* 11eff643 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11eff645 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff647 jne 0x11eff682 */
  if (!C.zf) goto L_11eff682;
  /* 11eff649 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff64d je 0x11eff66f */
  if (C.zf) goto L_11eff66f;
  /* 11eff64f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff652 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11eff656 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff659 jne 0x11eff666 */
  if (!C.zf) goto L_11eff666;
  /* 11eff65b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff65e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eff664 jmp 0x11eff66d */
  goto L_11eff66d;
L_11eff666:;
  /* 11eff666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11eff66d:;
  /* 11eff66d jmp 0x11eff676 */
  goto L_11eff676;
L_11eff66f:;
  /* 11eff66f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11eff676:;
  /* 11eff676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eff678 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff67c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11eff67f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11eff682:;
  /* 11eff682 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff685 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11eff687 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11eff68a:;
  /* 11eff68a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff68d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff690 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff693 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11eff696 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eff698 je 0x11eff6be */
  if (C.zf) goto L_11eff6be;
  /* 11eff69a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff69e je 0x11eff6af */
  if (C.zf) goto L_11eff6af;
  /* 11eff6a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff6a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11eff6a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff6a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff6ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11eff6af:;
  /* 11eff6af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff6b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eff6b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff6b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff6ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eff6bc jmp 0x11eff68a */
  goto L_11eff68a;
L_11eff6be:;
  /* 11eff6be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff6c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eff6c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff6c6 je 0x11eff6e4 */
  if (C.zf) goto L_11eff6e4;
  /* 11eff6c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff6cc jne 0x11eff6e9 */
  if (!C.zf) goto L_11eff6e9;
  /* 11eff6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff6d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eff6d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff6d7 je 0x11eff6e4 */
  if (C.zf) goto L_11eff6e4;
  /* 11eff6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff6dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eff6df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff6e2 jne 0x11eff6e9 */
  if (!C.zf) goto L_11eff6e9;
L_11eff6e4:;
  /* 11eff6e4 jmp 0x11eff794 */
  goto L_11eff794;
L_11eff6e9:;
  /* 11eff6e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff6ed je 0x11eff786 */
  if (C.zf) goto L_11eff786;
  /* 11eff6f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff6f7 je 0x11eff74d */
  if (C.zf) goto L_11eff74d;
  /* 11eff6f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff6fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eff700 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eff702 mov cl, byte ptr [eax + 0x11f31f61] */
  CL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11eff708 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11eff70b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eff70d je 0x11eff738 */
  if (C.zf) goto L_11eff738;
  /* 11eff70f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff715 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11eff717 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11eff719 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff71c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff71f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11eff722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff725 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff728 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eff72b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff72e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eff730 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff733 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff736 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11eff738:;
  /* 11eff738 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff73b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff73e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eff740 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11eff742 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff748 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11eff74b jmp 0x11eff779 */
  goto L_11eff779;
L_11eff74d:;
  /* 11eff74d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff752 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eff754 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eff756 mov cl, byte ptr [eax + 0x11f31f61] */
  CL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11eff75c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11eff75f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eff761 je 0x11eff779 */
  if (C.zf) goto L_11eff779;
  /* 11eff763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff766 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff769 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eff76c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff76f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eff771 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff774 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff777 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eff779:;
  /* 11eff779 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff77c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eff77e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff781 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff784 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eff786:;
  /* 11eff786 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff78c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eff78f jmp 0x11eff601 */
  goto L_11eff601;
L_11eff794:;
  /* 11eff794 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff798 je 0x11eff7a9 */
  if (C.zf) goto L_11eff7a9;
  /* 11eff79a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff79d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11eff7a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eff7a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff7a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11eff7a9:;
  /* 11eff7a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff7ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eff7ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff7b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eff7b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eff7b6 jmp 0x11eff5a3 */
  goto L_11eff5a3;
L_11eff7bb:;
  /* 11eff7bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff7bf je 0x11eff7d3 */
  if (C.zf) goto L_11eff7d3;
  /* 11eff7c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eff7c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eff7ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eff7cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff7d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11eff7d3:;
  /* 11eff7d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eff7d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eff7d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff7db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eff7de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eff7e0 mov esp, ebp */
  ESP = (EBP);
  /* 11eff7e2 pop ebp */
  EBP = (pop32());
  /* 11eff7e3 ret  */
  ESPCHK(0x11eff3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x11eff7f0 (537 bytes, 173 insns) */
void f_11eff7f0(void) {
  FTRACE(0x11eff7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eff7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eff7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eff7f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff7f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11eff7fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11eff804 cmp dword ptr [0x11f308b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff80b jne 0x11eff84a */
  if (!C.zf) goto L_11eff84a;
  /* 11eff80d call dword ptr [0x11f333a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333a8))), 0x11eff813u);
  /* 11eff813 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11eff816 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff81a je 0x11eff828 */
  if (C.zf) goto L_11eff828;
  /* 11eff81c mov dword ptr [0x11f308b8], 1 */
  w32((uint32_t)(0x11f308b8), (0x1u));
  /* 11eff826 jmp 0x11eff84a */
  goto L_11eff84a;
L_11eff828:;
  /* 11eff828 call dword ptr [0x11f333ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333ac))), 0x11eff82eu);
  /* 11eff82e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eff831 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff835 je 0x11eff843 */
  if (C.zf) goto L_11eff843;
  /* 11eff837 mov dword ptr [0x11f308b8], 2 */
  w32((uint32_t)(0x11f308b8), (0x2u));
  /* 11eff841 jmp 0x11eff84a */
  goto L_11eff84a;
L_11eff843:;
  /* 11eff843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff845 jmp 0x11effa05 */
  goto L_11effa05;
L_11eff84a:;
  /* 11eff84a cmp dword ptr [0x11f308b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f308b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff851 jne 0x11eff94e */
  if (!C.zf) goto L_11eff94e;
  /* 11eff857 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff85b jne 0x11eff873 */
  if (!C.zf) goto L_11eff873;
  /* 11eff85d call dword ptr [0x11f333a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333a8))), 0x11eff863u);
  /* 11eff863 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11eff866 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff86a jne 0x11eff873 */
  if (!C.zf) goto L_11eff873;
  /* 11eff86c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff86e jmp 0x11effa05 */
  goto L_11effa05;
L_11eff873:;
  /* 11eff873 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eff876 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eff879:;
  /* 11eff879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff87c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eff87e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11eff881 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff883 je 0x11eff8a5 */
  if (C.zf) goto L_11eff8a5;
  /* 11eff885 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff888 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff88b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eff88e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff891 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eff893 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11eff896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff898 jne 0x11eff8a3 */
  if (!C.zf) goto L_11eff8a3;
  /* 11eff89a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff89d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff8a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eff8a3:;
  /* 11eff8a3 jmp 0x11eff879 */
  goto L_11eff879;
L_11eff8a5:;
  /* 11eff8a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eff8a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff8ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11eff8ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff8b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eff8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff8b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff8b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff8bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff8be push edx */
  push32((uint32_t)(EDX));
  /* 11eff8bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eff8c2 push eax */
  push32((uint32_t)(EAX));
  /* 11eff8c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff8c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff8c7 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11eff8cdu);
  /* 11eff8cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eff8d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff8d4 je 0x11eff8f4 */
  if (C.zf) goto L_11eff8f4;
  /* 11eff8d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11eff8d8 push 0x11f2aefc */
  push32((uint32_t)(0x11f2aefcu));
  /* 11eff8dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff8df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff8e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff8e3 call 0x11efbac0 */
  push32(0x11eff8e8u); f_11efbac0();
  /* 11eff8e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff8eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eff8ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff8f2 jne 0x11eff905 */
  if (!C.zf) goto L_11eff905;
L_11eff8f4:;
  /* 11eff8f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eff8f7 push edx */
  push32((uint32_t)(EDX));
  /* 11eff8f8 call dword ptr [0x11f333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b4))), 0x11eff8feu);
  /* 11eff8fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff900 jmp 0x11effa05 */
  goto L_11effa05;
L_11eff905:;
  /* 11eff905 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff909 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff90c push eax */
  push32((uint32_t)(EAX));
  /* 11eff90d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff910 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eff914 push edx */
  push32((uint32_t)(EDX));
  /* 11eff915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eff918 push eax */
  push32((uint32_t)(EAX));
  /* 11eff919 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff91b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eff91d call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11eff923u);
  /* 11eff923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eff925 jne 0x11eff93c */
  if (!C.zf) goto L_11eff93c;
  /* 11eff927 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff929 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff92c push ecx */
  push32((uint32_t)(ECX));
  /* 11eff92d call 0x11efc550 */
  push32(0x11eff932u); f_11efc550();
  /* 11eff932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff935 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11eff93c:;
  /* 11eff93c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eff93f push edx */
  push32((uint32_t)(EDX));
  /* 11eff940 call dword ptr [0x11f333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b4))), 0x11eff946u);
  /* 11eff946 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff949 jmp 0x11effa05 */
  goto L_11effa05;
L_11eff94e:;
  /* 11eff94e cmp dword ptr [0x11f308b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f308b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff955 jne 0x11effa03 */
  if (!C.zf) goto L_11effa03;
  /* 11eff95b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff95f jne 0x11eff977 */
  if (!C.zf) goto L_11eff977;
  /* 11eff961 call dword ptr [0x11f333ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333ac))), 0x11eff967u);
  /* 11eff967 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eff96a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff96e jne 0x11eff977 */
  if (!C.zf) goto L_11eff977;
  /* 11eff970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff972 jmp 0x11effa05 */
  goto L_11effa05;
L_11eff977:;
  /* 11eff977 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff97a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11eff97d:;
  /* 11eff97d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff980 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eff983 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff985 je 0x11eff9a5 */
  if (C.zf) goto L_11eff9a5;
  /* 11eff987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff98a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff98d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eff990 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff993 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eff996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eff998 jne 0x11eff9a3 */
  if (!C.zf) goto L_11eff9a3;
  /* 11eff99a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff99d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff9a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11eff9a3:;
  /* 11eff9a3 jmp 0x11eff97d */
  goto L_11eff97d;
L_11eff9a5:;
  /* 11eff9a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff9a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eff9ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff9ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11eff9b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11eff9b6 push 0x11f2aefc */
  push32((uint32_t)(0x11f2aefcu));
  /* 11eff9bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11eff9bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff9c0 push edx */
  push32((uint32_t)(EDX));
  /* 11eff9c1 call 0x11efbac0 */
  push32(0x11eff9c6u); f_11efbac0();
  /* 11eff9c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff9c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eff9cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eff9d0 jne 0x11eff9e0 */
  if (!C.zf) goto L_11eff9e0;
  /* 11eff9d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff9d5 push eax */
  push32((uint32_t)(EAX));
  /* 11eff9d6 call dword ptr [0x11f333b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b8))), 0x11eff9dcu);
  /* 11eff9dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eff9de jmp 0x11effa05 */
  goto L_11effa05;
L_11eff9e0:;
  /* 11eff9e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eff9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff9e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff9e7 push edx */
  push32((uint32_t)(EDX));
  /* 11eff9e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eff9eb push eax */
  push32((uint32_t)(EAX));
  /* 11eff9ec call 0x11f05b60 */
  push32(0x11eff9f1u); f_11f05b60();
  /* 11eff9f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eff9f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eff9f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eff9f8 call dword ptr [0x11f333b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b8))), 0x11eff9feu);
  /* 11eff9fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effa01 jmp 0x11effa05 */
  goto L_11effa05;
L_11effa03:;
  /* 11effa03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11effa05:;
  /* 11effa05 mov esp, ebp */
  ESP = (EBP);
  /* 11effa07 pop ebp */
  EBP = (pop32());
  /* 11effa08 ret  */
  ESPCHK(0x11eff7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa10 @ 0x11effa10 (77 bytes, 25 insns) */
void f_11effa10(void) {
  FTRACE(0x11effa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effa10 push ebp */
  push32((uint32_t)(EBP));
  /* 11effa11 mov ebp, esp */
  EBP = (ESP);
  /* 11effa13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effa15 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11effa1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11effa1c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effa20 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11effa23 push eax */
  push32((uint32_t)(EAX));
  /* 11effa24 call dword ptr [0x11f333a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333a0))), 0x11effa2au);
  /* 11effa2a mov dword ptr [0x11f3208c], eax */
  w32((uint32_t)(0x11f3208c), (EAX));
  /* 11effa2f cmp dword ptr [0x11f3208c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f3208c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effa36 jne 0x11effa3c */
  if (!C.zf) goto L_11effa3c;
  /* 11effa38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11effa3a jmp 0x11effa5b */
  goto L_11effa5b;
L_11effa3c:;
  /* 11effa3c call 0x11f027c0 */
  push32(0x11effa41u); f_11f027c0();
  /* 11effa41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11effa43 jne 0x11effa56 */
  if (!C.zf) goto L_11effa56;
  /* 11effa45 mov ecx, dword ptr [0x11f3208c] */
  ECX = (r32((uint32_t)(0x11f3208c)));
  /* 11effa4b push ecx */
  push32((uint32_t)(ECX));
  /* 11effa4c call dword ptr [0x11f333a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333a4))), 0x11effa52u);
  /* 11effa52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11effa54 jmp 0x11effa5b */
  goto L_11effa5b;
L_11effa56:;
  /* 11effa56 mov eax, 1 */
  EAX = (0x1u);
L_11effa5b:;
  /* 11effa5b pop ebp */
  EBP = (pop32());
  /* 11effa5c ret  */
  ESPCHK(0x11effa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa60 @ 0x11effa60 (156 bytes, 48 insns) */
void f_11effa60(void) {
  FTRACE(0x11effa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effa60 push ebp */
  push32((uint32_t)(EBP));
  /* 11effa61 mov ebp, esp */
  EBP = (ESP);
  /* 11effa63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11effa66 mov eax, dword ptr [0x11f32088] */
  EAX = (r32((uint32_t)(0x11f32088)));
  /* 11effa6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11effa6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11effa75 jmp 0x11effa80 */
  goto L_11effa80;
L_11effa77:;
  /* 11effa77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effa7a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effa7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11effa80:;
  /* 11effa80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effa83 cmp edx, dword ptr [0x11f32084] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f32084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effa89 jge 0x11effad6 */
  if ((C.sf==C.of)) goto L_11effad6;
  /* 11effa8b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11effa90 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11effa95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effa98 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11effa9b push ecx */
  push32((uint32_t)(ECX));
  /* 11effa9c call dword ptr [0x11f33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33398))), 0x11effaa2u);
  /* 11effaa2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11effaa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effaa9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effaac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11effaaf push eax */
  push32((uint32_t)(EAX));
  /* 11effab0 call dword ptr [0x11f33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33398))), 0x11effab6u);
  /* 11effab6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effab9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11effabc push edx */
  push32((uint32_t)(EDX));
  /* 11effabd push 0 */
  push32((uint32_t)(0x0u));
  /* 11effabf mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11effac4 push eax */
  push32((uint32_t)(EAX));
  /* 11effac5 call dword ptr [0x11f3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3339c))), 0x11effacbu);
  /* 11effacb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efface add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effad1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11effad4 jmp 0x11effa77 */
  goto L_11effa77;
L_11effad6:;
  /* 11effad6 mov edx, dword ptr [0x11f32088] */
  EDX = (r32((uint32_t)(0x11f32088)));
  /* 11effadc push edx */
  push32((uint32_t)(EDX));
  /* 11effadd push 0 */
  push32((uint32_t)(0x0u));
  /* 11effadf mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11effae4 push eax */
  push32((uint32_t)(EAX));
  /* 11effae5 call dword ptr [0x11f3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3339c))), 0x11effaebu);
  /* 11effaeb mov ecx, dword ptr [0x11f3208c] */
  ECX = (r32((uint32_t)(0x11f3208c)));
  /* 11effaf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11effaf2 call dword ptr [0x11f333a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333a4))), 0x11effaf8u);
  /* 11effaf8 mov esp, ebp */
  ESP = (EBP);
  /* 11effafa pop ebp */
  EBP = (pop32());
  /* 11effafb ret  */
  ESPCHK(0x11effa60u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11effb00 (73 bytes, 19 insns) */
void f_11effb00(void) {
  FTRACE(0x11effb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11effb01 mov ebp, esp */
  EBP = (ESP);
  /* 11effb03 cmp dword ptr [0x11f306ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb0a je 0x11effb1e */
  if (C.zf) goto L_11effb1e;
  /* 11effb0c cmp dword ptr [0x11f306ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb13 jne 0x11effb47 */
  if (!C.zf) goto L_11effb47;
  /* 11effb15 cmp dword ptr [0x11f306f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb1c jne 0x11effb47 */
  if (!C.zf) goto L_11effb47;
L_11effb1e:;
  /* 11effb1e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11effb23 call 0x11effb50 */
  push32(0x11effb28u); f_11effb50();
  /* 11effb28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effb2b cmp dword ptr [0x11f308bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb32 je 0x11effb3a */
  if (C.zf) goto L_11effb3a;
  /* 11effb34 call dword ptr [0x11f308bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f308bc))), 0x11effb3au);
L_11effb3a:;
  /* 11effb3a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11effb3f call 0x11effb50 */
  push32(0x11effb44u); f_11effb50();
  /* 11effb44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11effb47:;
  /* 11effb47 pop ebp */
  EBP = (pop32());
  /* 11effb48 ret  */
  ESPCHK(0x11effb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x11effb50 (447 bytes, 131 insns) */
void f_11effb50(void) {
  FTRACE(0x11effb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11effb51 mov ebp, esp */
  EBP = (ESP);
  /* 11effb53 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11effb59 push ebx */
  push32((uint32_t)(EBX));
  /* 11effb5a push esi */
  push32((uint32_t)(ESI));
  /* 11effb5b push edi */
  push32((uint32_t)(EDI));
  /* 11effb5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11effb63 jmp 0x11effb6e */
  goto L_11effb6e;
L_11effb65:;
  /* 11effb65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effb68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effb6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11effb6e:;
  /* 11effb6e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb72 jae 0x11effb87 */
  if (!C.cf) goto L_11effb87;
  /* 11effb74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effb77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effb7a cmp edx, dword ptr [ecx*8 + 0x11f2dfc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11f2dfc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb81 jne 0x11effb85 */
  if (!C.zf) goto L_11effb85;
  /* 11effb83 jmp 0x11effb87 */
  goto L_11effb87;
L_11effb85:;
  /* 11effb85 jmp 0x11effb65 */
  goto L_11effb65;
L_11effb87:;
  /* 11effb87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effb8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effb8d cmp ecx, dword ptr [eax*8 + 0x11f2dfc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11f2dfc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effb94 jne 0x11effd08 */
  if (!C.zf) goto L_11effd08;
  /* 11effb9a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effba1 je 0x11effbc4 */
  if (C.zf) goto L_11effbc4;
  /* 11effba3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effba6 mov eax, dword ptr [edx*8 + 0x11f2dfc4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11f2dfc4)));
  /* 11effbad push eax */
  push32((uint32_t)(EAX));
  /* 11effbae push 0 */
  push32((uint32_t)(0x0u));
  /* 11effbb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effbb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effbb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11effbb6 call 0x11efa680 */
  push32(0x11effbbbu); f_11efa680();
  /* 11effbbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effbbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effbc1 jne 0x11effbc4 */
  if (!C.zf) goto L_11effbc4;
  /* 11effbc3 int3  */
  x86_unimpl("int3 @ 0x11effbc3");
L_11effbc4:;
  /* 11effbc4 cmp dword ptr [0x11f306ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effbcb je 0x11effbdf */
  if (C.zf) goto L_11effbdf;
  /* 11effbcd cmp dword ptr [0x11f306ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effbd4 jne 0x11effc18 */
  if (!C.zf) goto L_11effc18;
  /* 11effbd6 cmp dword ptr [0x11f306f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effbdd jne 0x11effc18 */
  if (!C.zf) goto L_11effc18;
L_11effbdf:;
  /* 11effbdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11effbe1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11effbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11effbe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effbe8 mov eax, dword ptr [edx*8 + 0x11f2dfc4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11f2dfc4)));
  /* 11effbef push eax */
  push32((uint32_t)(EAX));
  /* 11effbf0 call 0x11f00050 */
  push32(0x11effbf5u); f_11f00050();
  /* 11effbf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effbf8 push eax */
  push32((uint32_t)(EAX));
  /* 11effbf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effbfc mov edx, dword ptr [ecx*8 + 0x11f2dfc4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11f2dfc4)));
  /* 11effc03 push edx */
  push32((uint32_t)(EDX));
  /* 11effc04 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11effc06 call dword ptr [0x11f33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33410))), 0x11effc0cu);
  /* 11effc0c push eax */
  push32((uint32_t)(EAX));
  /* 11effc0d call dword ptr [0x11f33414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33414))), 0x11effc13u);
  /* 11effc13 jmp 0x11effd08 */
  goto L_11effd08;
L_11effc18:;
  /* 11effc18 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effc1f je 0x11effd08 */
  if (C.zf) goto L_11effd08;
  /* 11effc25 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11effc2a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11effc30 push eax */
  push32((uint32_t)(EAX));
  /* 11effc31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effc33 call dword ptr [0x11f3342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3342c))), 0x11effc39u);
  /* 11effc39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11effc3b jne 0x11effc51 */
  if (!C.zf) goto L_11effc51;
  /* 11effc3d push 0x11f2a678 */
  push32((uint32_t)(0x11f2a678u));
  /* 11effc42 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11effc48 push ecx */
  push32((uint32_t)(ECX));
  /* 11effc49 call 0x11f001d0 */
  push32(0x11effc4eu); f_11f001d0();
  /* 11effc4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11effc51:;
  /* 11effc51 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11effc57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11effc5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effc5d push eax */
  push32((uint32_t)(EAX));
  /* 11effc5e call 0x11f00050 */
  push32(0x11effc63u); f_11f00050();
  /* 11effc63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effc66 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effc69 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effc6c jbe 0x11effc9a */
  if ((C.cf||C.zf)) goto L_11effc9a;
  /* 11effc6e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11effc74 push ecx */
  push32((uint32_t)(ECX));
  /* 11effc75 call 0x11f00050 */
  push32(0x11effc7au); f_11f00050();
  /* 11effc7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effc7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effc80 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11effc84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11effc87 push 3 */
  push32((uint32_t)(0x3u));
  /* 11effc89 push 0x11f2a674 */
  push32((uint32_t)(0x11f2a674u));
  /* 11effc8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effc91 push ecx */
  push32((uint32_t)(ECX));
  /* 11effc92 call 0x11f00a40 */
  push32(0x11effc97u); f_11f00a40();
  /* 11effc97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11effc9a:;
  /* 11effc9a push 0x11f2b1b8 */
  push32((uint32_t)(0x11f2b1b8u));
  /* 11effc9f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11effca5 push edx */
  push32((uint32_t)(EDX));
  /* 11effca6 call 0x11f001d0 */
  push32(0x11effcabu); f_11f001d0();
  /* 11effcab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effcae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effcb1 push eax */
  push32((uint32_t)(EAX));
  /* 11effcb2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11effcb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11effcb9 call 0x11f001e0 */
  push32(0x11effcbeu); f_11f001e0();
  /* 11effcbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effcc1 push 0x11f2a5ec */
  push32((uint32_t)(0x11f2a5ecu));
  /* 11effcc6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11effccc push edx */
  push32((uint32_t)(EDX));
  /* 11effccd call 0x11f001e0 */
  push32(0x11effcd2u); f_11f001e0();
  /* 11effcd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effcd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effcd8 mov ecx, dword ptr [eax*8 + 0x11f2dfc4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11f2dfc4)));
  /* 11effcdf push ecx */
  push32((uint32_t)(ECX));
  /* 11effce0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11effce6 push edx */
  push32((uint32_t)(EDX));
  /* 11effce7 call 0x11f001e0 */
  push32(0x11effcecu); f_11f001e0();
  /* 11effcec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effcef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11effcf4 push 0x11f2b190 */
  push32((uint32_t)(0x11f2b190u));
  /* 11effcf9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11effcff push eax */
  push32((uint32_t)(EAX));
  /* 11effd00 call 0x11f00980 */
  push32(0x11effd05u); f_11f00980();
  /* 11effd05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11effd08:;
  /* 11effd08 pop edi */
  EDI = (pop32());
  /* 11effd09 pop esi */
  ESI = (pop32());
  /* 11effd0a pop ebx */
  EBX = (pop32());
  /* 11effd0b mov esp, ebp */
  ESP = (EBP);
  /* 11effd0d pop ebp */
  EBP = (pop32());
  /* 11effd0e ret  */
  ESPCHK(0x11effb50u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11effd10 (80 bytes, 27 insns) */
void f_11effd10(void) {
  FTRACE(0x11effd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11effd11 mov ebp, esp */
  EBP = (ESP);
  /* 11effd13 push ecx */
  push32((uint32_t)(ECX));
  /* 11effd14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11effd1b jmp 0x11effd26 */
  goto L_11effd26;
L_11effd1d:;
  /* 11effd1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effd20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effd23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11effd26:;
  /* 11effd26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effd2a jae 0x11effd3f */
  if (!C.cf) goto L_11effd3f;
  /* 11effd2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effd2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effd32 cmp edx, dword ptr [ecx*8 + 0x11f2dfc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11f2dfc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effd39 jne 0x11effd3d */
  if (!C.zf) goto L_11effd3d;
  /* 11effd3b jmp 0x11effd3f */
  goto L_11effd3f;
L_11effd3d:;
  /* 11effd3d jmp 0x11effd1d */
  goto L_11effd1d;
L_11effd3f:;
  /* 11effd3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effd42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effd45 cmp ecx, dword ptr [eax*8 + 0x11f2dfc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11f2dfc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effd4c jne 0x11effd5a */
  if (!C.zf) goto L_11effd5a;
  /* 11effd4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effd51 mov eax, dword ptr [edx*8 + 0x11f2dfc4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11f2dfc4)));
  /* 11effd58 jmp 0x11effd5c */
  goto L_11effd5c;
L_11effd5a:;
  /* 11effd5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11effd5c:;
  /* 11effd5c mov esp, ebp */
  ESP = (EBP);
  /* 11effd5e pop ebp */
  EBP = (pop32());
  /* 11effd5f ret  */
  ESPCHK(0x11effd10u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11effd60 (66 bytes, 28 insns) */
void f_11effd60(void) {
  FTRACE(0x11effd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effd60 push ebp */
  push32((uint32_t)(EBP));
  /* 11effd61 mov ebp, esp */
  EBP = (ESP);
  /* 11effd63 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effd67 jne 0x11effd87 */
  if (!C.zf) goto L_11effd87;
  /* 11effd69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effd6d jge 0x11effd87 */
  if ((C.sf==C.of)) goto L_11effd87;
  /* 11effd6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11effd71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11effd74 push eax */
  push32((uint32_t)(EAX));
  /* 11effd75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effd78 push ecx */
  push32((uint32_t)(ECX));
  /* 11effd79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effd7c push edx */
  push32((uint32_t)(EDX));
  /* 11effd7d call 0x11effdb0 */
  push32(0x11effd82u); f_11effdb0();
  /* 11effd82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effd85 jmp 0x11effd9d */
  goto L_11effd9d;
L_11effd87:;
  /* 11effd87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effd89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11effd8c push eax */
  push32((uint32_t)(EAX));
  /* 11effd8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effd90 push ecx */
  push32((uint32_t)(ECX));
  /* 11effd91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effd94 push edx */
  push32((uint32_t)(EDX));
  /* 11effd95 call 0x11effdb0 */
  push32(0x11effd9au); f_11effdb0();
  /* 11effd9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11effd9d:;
  /* 11effd9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effda0 pop ebp */
  EBP = (pop32());
  /* 11effda1 ret  */
  ESPCHK(0x11effd60u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11effdb0 (194 bytes, 71 insns) */
void f_11effdb0(void) {
  FTRACE(0x11effdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11effdb1 mov ebp, esp */
  EBP = (ESP);
  /* 11effdb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11effdb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effdb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11effdbc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effdc0 je 0x11effdd9 */
  if (C.zf) goto L_11effdd9;
  /* 11effdc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effdc5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11effdc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effdcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effdce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11effdd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effdd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11effdd6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11effdd9:;
  /* 11effdd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effddc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11effddf:;
  /* 11effddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effde2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11effde4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11effde7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11effdea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effded xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11effdef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11effdf2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11effdf5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effdf9 jbe 0x11effe11 */
  if ((C.cf||C.zf)) goto L_11effe11;
  /* 11effdfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effdfe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effe01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11effe06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effe0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11effe0f jmp 0x11effe25 */
  goto L_11effe25;
L_11effe11:;
  /* 11effe11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11effe14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effe17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11effe1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effe22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11effe25:;
  /* 11effe25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effe29 ja 0x11effddf */
  if ((!C.cf&&!C.zf)) goto L_11effddf;
  /* 11effe2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11effe31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11effe37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11effe3a:;
  /* 11effe3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11effe3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11effe42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effe48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11effe4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11effe4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effe4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11effe52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11effe54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effe57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11effe5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11effe5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effe60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11effe63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11effe66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effe69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effe6c jb 0x11effe3a */
  if (C.cf) goto L_11effe3a;
  /* 11effe6e mov esp, ebp */
  ESP = (EBP);
  /* 11effe70 pop ebp */
  EBP = (pop32());
  /* 11effe71 ret  */
  ESPCHK(0x11effdb0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11effe80 (63 bytes, 24 insns) */
void f_11effe80(void) {
  FTRACE(0x11effe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effe80 push ebp */
  push32((uint32_t)(EBP));
  /* 11effe81 mov ebp, esp */
  EBP = (ESP);
  /* 11effe83 push ecx */
  push32((uint32_t)(ECX));
  /* 11effe84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effe88 jne 0x11effe99 */
  if (!C.zf) goto L_11effe99;
  /* 11effe8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effe8e jge 0x11effe99 */
  if ((C.sf==C.of)) goto L_11effe99;
  /* 11effe90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11effe97 jmp 0x11effea0 */
  goto L_11effea0;
L_11effe99:;
  /* 11effe99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11effea0:;
  /* 11effea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effea3 push eax */
  push32((uint32_t)(EAX));
  /* 11effea4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11effea7 push ecx */
  push32((uint32_t)(ECX));
  /* 11effea8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effeab push edx */
  push32((uint32_t)(EDX));
  /* 11effeac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effeaf push eax */
  push32((uint32_t)(EAX));
  /* 11effeb0 call 0x11effdb0 */
  push32(0x11effeb5u); f_11effdb0();
  /* 11effeb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effeb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effebb mov esp, ebp */
  ESP = (EBP);
  /* 11effebd pop ebp */
  EBP = (pop32());
  /* 11effebe ret  */
  ESPCHK(0x11effe80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11effec0 (30 bytes, 14 insns) */
void f_11effec0(void) {
  FTRACE(0x11effec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11effec1 mov ebp, esp */
  EBP = (ESP);
  /* 11effec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11effec5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11effec8 push eax */
  push32((uint32_t)(EAX));
  /* 11effec9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effecc push ecx */
  push32((uint32_t)(ECX));
  /* 11effecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11effed0 push edx */
  push32((uint32_t)(EDX));
  /* 11effed1 call 0x11effdb0 */
  push32(0x11effed6u); f_11effdb0();
  /* 11effed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11effed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11effedc pop ebp */
  EBP = (pop32());
  /* 11effedd ret  */
  ESPCHK(0x11effec0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11effee0 (72 bytes, 28 insns) */
void f_11effee0(void) {
  FTRACE(0x11effee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11effee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11effee1 mov ebp, esp */
  EBP = (ESP);
  /* 11effee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11effee4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effee8 jne 0x11efff01 */
  if (!C.zf) goto L_11efff01;
  /* 11effeea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effeee jg 0x11efff01 */
  if ((!C.zf&&C.sf==C.of)) goto L_11efff01;
  /* 11effef0 jl 0x11effef8 */
  if ((C.sf!=C.of)) goto L_11effef8;
  /* 11effef2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11effef6 jae 0x11efff01 */
  if (!C.cf) goto L_11efff01;
L_11effef8:;
  /* 11effef8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11effeff jmp 0x11efff08 */
  goto L_11efff08;
L_11efff01:;
  /* 11efff01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efff08:;
  /* 11efff08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efff0b push eax */
  push32((uint32_t)(EAX));
  /* 11efff0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efff0f push ecx */
  push32((uint32_t)(ECX));
  /* 11efff10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efff13 push edx */
  push32((uint32_t)(EDX));
  /* 11efff14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efff17 push eax */
  push32((uint32_t)(EAX));
  /* 11efff18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efff1b push ecx */
  push32((uint32_t)(ECX));
  /* 11efff1c call 0x11efff30 */
  push32(0x11efff21u); f_11efff30();
  /* 11efff21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efff24 mov esp, ebp */
  ESP = (EBP);
  /* 11efff26 pop ebp */
  EBP = (pop32());
  /* 11efff27 ret  */
  ESPCHK(0x11effee0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11efff30 (242 bytes, 91 insns) */
void f_11efff30(void) {
  FTRACE(0x11efff30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efff30 push ebp */
  push32((uint32_t)(EBP));
  /* 11efff31 mov ebp, esp */
  EBP = (ESP);
  /* 11efff33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efff36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efff39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efff3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efff40 je 0x11efff64 */
  if (C.zf) goto L_11efff64;
  /* 11efff42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efff45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11efff48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efff4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efff4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efff51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efff54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efff56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efff59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efff5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efff5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11efff61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11efff64:;
  /* 11efff64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efff67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11efff6a:;
  /* 11efff6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efff6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efff6f push ecx */
  push32((uint32_t)(ECX));
  /* 11efff70 push eax */
  push32((uint32_t)(EAX));
  /* 11efff71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efff74 push edx */
  push32((uint32_t)(EDX));
  /* 11efff75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efff78 push eax */
  push32((uint32_t)(EAX));
  /* 11efff79 call 0x11f05f10 */
  push32(0x11efff7eu); f_11f05f10();
  /* 11efff7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efff81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efff84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efff86 push edx */
  push32((uint32_t)(EDX));
  /* 11efff87 push ecx */
  push32((uint32_t)(ECX));
  /* 11efff88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efff8b push eax */
  push32((uint32_t)(EAX));
  /* 11efff8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efff8f push ecx */
  push32((uint32_t)(ECX));
  /* 11efff90 call 0x11f05ea0 */
  push32(0x11efff95u); f_11f05ea0();
  /* 11efff95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11efff98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11efff9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efff9f jbe 0x11efffb7 */
  if ((C.cf||C.zf)) goto L_11efffb7;
  /* 11efffa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efffa4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efffa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffaa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11efffac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efffb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efffb5 jmp 0x11efffcb */
  goto L_11efffcb;
L_11efffb7:;
  /* 11efffb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efffba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efffbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11efffc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efffc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11efffcb:;
  /* 11efffcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efffcf ja 0x11efff6a */
  if ((!C.cf&&!C.zf)) goto L_11efff6a;
  /* 11efffd1 jb 0x11efffd9 */
  if (C.cf) goto L_11efffd9;
  /* 11efffd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efffd7 ja 0x11efff6a */
  if ((!C.cf&&!C.zf)) goto L_11efff6a;
L_11efffd9:;
  /* 11efffd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11efffdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffe2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efffe5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efffe8:;
  /* 11efffe8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efffeb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11efffed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11effff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11effff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11effff8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11effffa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11effffd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11f00000 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11f00002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00005 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00008 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0000b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0000e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00011 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f00014 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00017 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0001a jb 0x11efffe8 */
  if (C.cf) goto L_11efffe8;
  /* 11f0001c mov esp, ebp */
  ESP = (EBP);
  /* 11f0001e pop ebp */
  EBP = (pop32());
  /* 11f0001f ret 0x14 */
  ESPCHK(0x11efff30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11f00030 (31 bytes, 15 insns) */
void f_11f00030(void) {
  FTRACE(0x11f00030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00030 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00031 mov ebp, esp */
  EBP = (ESP);
  /* 11f00033 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f00035 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f00038 push eax */
  push32((uint32_t)(EAX));
  /* 11f00039 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0003c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0003d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00040 push edx */
  push32((uint32_t)(EDX));
  /* 11f00041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00044 push eax */
  push32((uint32_t)(EAX));
  /* 11f00045 call 0x11efff30 */
  push32(0x11f0004au); f_11efff30();
  /* 11f0004a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0004d pop ebp */
  EBP = (pop32());
  /* 11f0004e ret  */
  ESPCHK(0x11f00030u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11f00050 (123 bytes, 44 insns) */
void f_11f00050(void) {
  FTRACE(0x11f00050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00050 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f00054 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f0005a je 0x11f00070 */
  if (C.zf) goto L_11f00070;
L_11f0005c:;
  /* 11f0005c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f0005e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f0005f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f00061 je 0x11f000a3 */
  if (C.zf) goto L_11f000a3;
  /* 11f00063 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f00069 jne 0x11f0005c */
  if (!C.zf) goto L_11f0005c;
  /* 11f0006b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f00070:;
  /* 11f00070 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f00072 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f00077 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00079 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0007c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0007e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00081 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f00086 je 0x11f00070 */
  if (C.zf) goto L_11f00070;
  /* 11f00088 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f0008b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f0008d je 0x11f000c1 */
  if (C.zf) goto L_11f000c1;
  /* 11f0008f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f00091 je 0x11f000b7 */
  if (C.zf) goto L_11f000b7;
  /* 11f00093 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f00098 je 0x11f000ad */
  if (C.zf) goto L_11f000ad;
  /* 11f0009a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f0009f je 0x11f000a3 */
  if (C.zf) goto L_11f000a3;
  /* 11f000a1 jmp 0x11f00070 */
  goto L_11f00070;
L_11f000a3:;
  /* 11f000a3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11f000a6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f000aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f000ac ret  */
  ESPCHK(0x11f00050u, _esp0);
  ESP += 4; return;
L_11f000ad:;
  /* 11f000ad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11f000b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f000b4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f000b6 ret  */
  ESPCHK(0x11f00050u, _esp0);
  ESP += 4; return;
L_11f000b7:;
  /* 11f000b7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11f000ba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f000be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f000c0 ret  */
  ESPCHK(0x11f00050u, _esp0);
  ESP += 4; return;
L_11f000c1:;
  /* 11f000c1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11f000c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f000c8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f000ca ret  */
  ESPCHK(0x11f00050u, _esp0);
  ESP += 4; return;
}

/* FUN_100100d0 @ 0x11f000d0 (249 bytes, 93 insns) */
void f_11f000d0(void) {
  FTRACE(0x11f000d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f000d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f000d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f000d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f000d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f000d7 push esi */
  push32((uint32_t)(ESI));
  /* 11f000d8 push edi */
  push32((uint32_t)(EDI));
  /* 11f000d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f000dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f000df lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11f000e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11f000e5:;
  /* 11f000e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f000e9 jne 0x11f00109 */
  if (!C.zf) goto L_11f00109;
  /* 11f000eb push 0x11f2b1f0 */
  push32((uint32_t)(0x11f2b1f0u));
  /* 11f000f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f000f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11f000f4 push 0x11f2b1e4 */
  push32((uint32_t)(0x11f2b1e4u));
  /* 11f000f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f000fb call 0x11efa680 */
  push32(0x11f00100u); f_11efa680();
  /* 11f00100 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00103 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00106 jne 0x11f00109 */
  if (!C.zf) goto L_11f00109;
  /* 11f00108 int3  */
  x86_unimpl("int3 @ 0x11f00108");
L_11f00109:;
  /* 11f00109 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0010b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0010d jne 0x11f000e5 */
  if (!C.zf) goto L_11f000e5;
L_11f0010f:;
  /* 11f0010f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00113 jne 0x11f00133 */
  if (!C.zf) goto L_11f00133;
  /* 11f00115 push 0x11f2b1d4 */
  push32((uint32_t)(0x11f2b1d4u));
  /* 11f0011a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0011c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f0011e push 0x11f2b1e4 */
  push32((uint32_t)(0x11f2b1e4u));
  /* 11f00123 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f00125 call 0x11efa680 */
  push32(0x11f0012au); f_11efa680();
  /* 11f0012a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0012d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00130 jne 0x11f00133 */
  if (!C.zf) goto L_11f00133;
  /* 11f00132 int3  */
  x86_unimpl("int3 @ 0x11f00132");
L_11f00133:;
  /* 11f00133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f00135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00137 jne 0x11f0010f */
  if (!C.zf) goto L_11f0010f;
  /* 11f00139 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0013c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11f00143 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00149 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f0014c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0014f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00152 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f00154 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00157 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0015a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f0015d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f00160 push edx */
  push32((uint32_t)(EDX));
  /* 11f00161 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f00164 push eax */
  push32((uint32_t)(EAX));
  /* 11f00165 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00168 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00169 call 0x11f06210 */
  push32(0x11f0016eu); f_11f06210();
  /* 11f0016e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00171 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f00174 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00177 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0017a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0017d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00180 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f00183 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00186 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0018a jl 0x11f001ae */
  if ((C.sf!=C.of)) goto L_11f001ae;
  /* 11f0018c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0018f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f00191 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11f00194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f00196 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0019c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f0019f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f001a2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f001a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f001a7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f001aa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f001ac jmp 0x11f001bf */
  goto L_11f001bf;
L_11f001ae:;
  /* 11f001ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f001b1 push eax */
  push32((uint32_t)(EAX));
  /* 11f001b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f001b4 call 0x11f05f90 */
  push32(0x11f001b9u); f_11f05f90();
  /* 11f001b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f001bc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11f001bf:;
  /* 11f001bf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f001c2 pop edi */
  EDI = (pop32());
  /* 11f001c3 pop esi */
  ESI = (pop32());
  /* 11f001c4 pop ebx */
  EBX = (pop32());
  /* 11f001c5 mov esp, ebp */
  ESP = (EBP);
  /* 11f001c7 pop ebp */
  EBP = (pop32());
  /* 11f001c8 ret  */
  ESPCHK(0x11f000d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101d0 @ 0x11f001d0 (7 bytes, 3 insns) */
void f_11f001d0(void) {
  FTRACE(0x11f001d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f001d0 push edi */
  push32((uint32_t)(EDI));
  /* 11f001d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f001d5 jmp 0x11f00241 */
  jmp_ind(0x11f00241u); return;
}

/* FUN_100101e0 @ 0x11f001e0 (224 bytes, 84 insns) */
void f_11f001e0(void) {
  FTRACE(0x11f001e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f001e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f001e4 push edi */
  push32((uint32_t)(EDI));
  /* 11f001e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f001eb je 0x11f001fc */
  if (C.zf) goto L_11f001fc;
L_11f001ed:;
  /* 11f001ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f001ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f001f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f001f2 je 0x11f0022f */
  if (C.zf) goto L_11f0022f;
  /* 11f001f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f001fa jne 0x11f001ed */
  if (!C.zf) goto L_11f001ed;
L_11f001fc:;
  /* 11f001fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f001fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f00203 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00205 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00208 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0020a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0020d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f00212 je 0x11f001fc */
  if (C.zf) goto L_11f001fc;
  /* 11f00214 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f00217 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f00219 je 0x11f0023e */
  if (C.zf) goto L_11f0023e;
  /* 11f0021b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f0021d je 0x11f00239 */
  if (C.zf) goto L_11f00239;
  /* 11f0021f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f00224 je 0x11f00234 */
  if (C.zf) goto L_11f00234;
  /* 11f00226 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f0022b je 0x11f0022f */
  if (C.zf) goto L_11f0022f;
  /* 11f0022d jmp 0x11f001fc */
  goto L_11f001fc;
L_11f0022f:;
  /* 11f0022f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11f00232 jmp 0x11f00241 */
  goto L_11f00241;
L_11f00234:;
  /* 11f00234 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11f00237 jmp 0x11f00241 */
  goto L_11f00241;
L_11f00239:;
  /* 11f00239 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11f0023c jmp 0x11f00241 */
  goto L_11f00241;
L_11f0023e:;
  /* 11f0023e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11f00241:;
  /* 11f00241 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f00245 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f0024b je 0x11f00266 */
  if (C.zf) goto L_11f00266;
L_11f0024d:;
  /* 11f0024d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0024f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f00250 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f00252 je 0x11f002b8 */
  if (C.zf) goto L_11f002b8;
  /* 11f00254 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f00256 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f00257 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f0025d jne 0x11f0024d */
  if (!C.zf) goto L_11f0024d;
  /* 11f0025f jmp 0x11f00266 */
  goto L_11f00266;
L_11f00261:;
  /* 11f00261 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f00263 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f00266:;
  /* 11f00266 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f0026b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f0026d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0026f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00272 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f00274 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f00276 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00279 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f0027e je 0x11f00261 */
  if (C.zf) goto L_11f00261;
  /* 11f00280 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f00282 je 0x11f002b8 */
  if (C.zf) goto L_11f002b8;
  /* 11f00284 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f00286 je 0x11f002af */
  if (C.zf) goto L_11f002af;
  /* 11f00288 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f0028e je 0x11f002a2 */
  if (C.zf) goto L_11f002a2;
  /* 11f00290 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f00296 je 0x11f0029a */
  if (C.zf) goto L_11f0029a;
  /* 11f00298 jmp 0x11f00261 */
  goto L_11f00261;
L_11f0029a:;
  /* 11f0029a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f0029c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f002a0 pop edi */
  EDI = (pop32());
  /* 11f002a1 ret  */
  ESPCHK(0x11f001e0u, _esp0);
  ESP += 4; return;
L_11f002a2:;
  /* 11f002a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f002a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f002a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11f002ad pop edi */
  EDI = (pop32());
  /* 11f002ae ret  */
  ESPCHK(0x11f001e0u, _esp0);
  ESP += 4; return;
L_11f002af:;
  /* 11f002af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f002b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f002b6 pop edi */
  EDI = (pop32());
  /* 11f002b7 ret  */
  ESPCHK(0x11f001e0u, _esp0);
  ESP += 4; return;
L_11f002b8:;
  /* 11f002b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f002ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f002be pop edi */
  EDI = (pop32());
  /* 11f002bf ret  */
  ESPCHK(0x11f001e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102c0 @ 0x11f002c0 (243 bytes, 91 insns) */
void f_11f002c0(void) {
  FTRACE(0x11f002c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f002c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f002c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f002c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f002c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f002c7 push esi */
  push32((uint32_t)(ESI));
  /* 11f002c8 push edi */
  push32((uint32_t)(EDI));
  /* 11f002c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f002cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f002cf:;
  /* 11f002cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f002d3 jne 0x11f002f3 */
  if (!C.zf) goto L_11f002f3;
  /* 11f002d5 push 0x11f2b1f0 */
  push32((uint32_t)(0x11f2b1f0u));
  /* 11f002da push 0 */
  push32((uint32_t)(0x0u));
  /* 11f002dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11f002de push 0x11f2b200 */
  push32((uint32_t)(0x11f2b200u));
  /* 11f002e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f002e5 call 0x11efa680 */
  push32(0x11f002eau); f_11efa680();
  /* 11f002ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f002ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f002f0 jne 0x11f002f3 */
  if (!C.zf) goto L_11f002f3;
  /* 11f002f2 int3  */
  x86_unimpl("int3 @ 0x11f002f2");
L_11f002f3:;
  /* 11f002f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f002f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f002f7 jne 0x11f002cf */
  if (!C.zf) goto L_11f002cf;
L_11f002f9:;
  /* 11f002f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f002fd jne 0x11f0031d */
  if (!C.zf) goto L_11f0031d;
  /* 11f002ff push 0x11f2b1d4 */
  push32((uint32_t)(0x11f2b1d4u));
  /* 11f00304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f00306 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11f00308 push 0x11f2b200 */
  push32((uint32_t)(0x11f2b200u));
  /* 11f0030d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0030f call 0x11efa680 */
  push32(0x11f00314u); f_11efa680();
  /* 11f00314 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0031a jne 0x11f0031d */
  if (!C.zf) goto L_11f0031d;
  /* 11f0031c int3  */
  x86_unimpl("int3 @ 0x11f0031c");
L_11f0031d:;
  /* 11f0031d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0031f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f00321 jne 0x11f002f9 */
  if (!C.zf) goto L_11f002f9;
  /* 11f00323 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00326 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11f0032d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00330 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00333 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f00336 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0033c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f0033e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00341 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00344 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f00347 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0034a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0034b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0034e push edx */
  push32((uint32_t)(EDX));
  /* 11f0034f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00352 push eax */
  push32((uint32_t)(EAX));
  /* 11f00353 call 0x11f06210 */
  push32(0x11f00358u); f_11f06210();
  /* 11f00358 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0035b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f0035e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00361 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f00364 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00367 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0036a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f0036d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00370 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00374 jl 0x11f00398 */
  if ((C.sf!=C.of)) goto L_11f00398;
  /* 11f00376 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00379 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0037b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f0037e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f00380 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f00386 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f00389 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0038c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0038e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00391 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f00394 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f00396 jmp 0x11f003a9 */
  goto L_11f003a9;
L_11f00398:;
  /* 11f00398 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0039b push edx */
  push32((uint32_t)(EDX));
  /* 11f0039c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0039e call 0x11f05f90 */
  push32(0x11f003a3u); f_11f05f90();
  /* 11f003a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f003a6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11f003a9:;
  /* 11f003a9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f003ac pop edi */
  EDI = (pop32());
  /* 11f003ad pop esi */
  ESI = (pop32());
  /* 11f003ae pop ebx */
  EBX = (pop32());
  /* 11f003af mov esp, ebp */
  ESP = (EBP);
  /* 11f003b1 pop ebp */
  EBP = (pop32());
  /* 11f003b2 ret  */
  ESPCHK(0x11f002c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103c0 @ 0x11f003c0 (47 bytes, 17 insns) */
void f_11f003c0(void) {
  FTRACE(0x11f003c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f003c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f003c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f003c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11f003ca jb 0x11f003e0 */
  if (C.cf) goto L_11f003e0;
L_11f003cc:;
  /* 11f003cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f003d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f003d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f003d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f003de jae 0x11f003cc */
  if (!C.cf) goto L_11f003cc;
L_11f003e0:;
  /* 11f003e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f003e2 mov eax, esp */
  EAX = (ESP);
  /* 11f003e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f003e6 mov esp, ecx */
  ESP = (ECX);
  /* 11f003e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f003ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f003ed push eax */
  push32((uint32_t)(EAX));
  /* 11f003ee ret  */
  ESPCHK(0x11f003c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x11f003f0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11f003f0(void) {
  FTRACE(0x11f003f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f003f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f003f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f003f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f003f6 push esi */
  push32((uint32_t)(ESI));
  /* 11f003f7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f003fb je 0x11f00403 */
  if (C.zf) goto L_11f00403;
  /* 11f003fd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00401 jne 0x11f00408 */
  if (!C.zf) goto L_11f00408;
L_11f00403:;
  /* 11f00403 jmp 0x11f005d8 */
  goto L_11f005d8;
L_11f00408:;
  /* 11f00408 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0040c je 0x11f00424 */
  if (C.zf) goto L_11f00424;
  /* 11f0040e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00412 je 0x11f00424 */
  if (C.zf) goto L_11f00424;
  /* 11f00414 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00418 je 0x11f00424 */
  if (C.zf) goto L_11f00424;
  /* 11f0041a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0041e jne 0x11f00501 */
  if (!C.zf) goto L_11f00501;
L_11f00424:;
  /* 11f00424 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f00426 call 0x11efb9c0 */
  push32(0x11f0042bu); f_11efb9c0();
  /* 11f0042b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0042e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00432 je 0x11f0043a */
  if (C.zf) goto L_11f0043a;
  /* 11f00434 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00438 jne 0x11f0047f */
  if (!C.zf) goto L_11f0047f;
L_11f0043a:;
  /* 11f0043a cmp dword ptr [0x11f308d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00441 jne 0x11f0047f */
  if (!C.zf) goto L_11f0047f;
  /* 11f00443 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f00445 push 0x11f00620 */
  push32((uint32_t)(0x11f00620u));
  /* 11f0044a call dword ptr [0x11f33394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33394))), 0x11f00450u);
  /* 11f00450 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00453 jne 0x11f00461 */
  if (!C.zf) goto L_11f00461;
  /* 11f00455 mov dword ptr [0x11f308d0], 1 */
  w32((uint32_t)(0x11f308d0), (0x1u));
  /* 11f0045f jmp 0x11f0047f */
  goto L_11f0047f;
L_11f00461:;
  /* 11f00461 call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f00467u);
  /* 11f00467 mov esi, eax */
  ESI = (EAX);
  /* 11f00469 call 0x11f07160 */
  push32(0x11f0046eu); f_11f07160();
  /* 11f0046e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11f00470 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f00472 call 0x11efba60 */
  push32(0x11f00477u); f_11efba60();
  /* 11f00477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0047a jmp 0x11f005d8 */
  goto L_11f005d8;
L_11f0047f:;
  /* 11f0047f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00482 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f00485 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f00488 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0048b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0048e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00492 ja 0x11f004f2 */
  if ((!C.cf&&!C.zf)) goto L_11f004f2;
  /* 11f00494 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f00497 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f00499 mov dl, byte ptr [eax + 0x11f005ff] */
  DL = (r8((uint32_t)(EAX + 0x11f005ff)));
  /* 11f0049f jmp dword ptr [edx*4 + 0x11f005eb] */
  switch (EDX) {
    case 0: goto L_11f004a6;
    case 1: goto L_11f004e0;
    case 2: goto L_11f004ba;
    case 3: goto L_11f004cd;
    case 4: goto L_11f004f2;
    default: x86_unimpl("switch@0x11f0049f out of table"); return;
  }
L_11f004a6:;
  /* 11f004a6 mov ecx, dword ptr [0x11f308c0] */
  ECX = (r32((uint32_t)(0x11f308c0)));
  /* 11f004ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f004af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f004b2 mov dword ptr [0x11f308c0], edx */
  w32((uint32_t)(0x11f308c0), (EDX));
  /* 11f004b8 jmp 0x11f004f2 */
  goto L_11f004f2;
L_11f004ba:;
  /* 11f004ba mov eax, dword ptr [0x11f308c4] */
  EAX = (r32((uint32_t)(0x11f308c4)));
  /* 11f004bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f004c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f004c5 mov dword ptr [0x11f308c4], ecx */
  w32((uint32_t)(0x11f308c4), (ECX));
  /* 11f004cb jmp 0x11f004f2 */
  goto L_11f004f2;
L_11f004cd:;
  /* 11f004cd mov edx, dword ptr [0x11f308c8] */
  EDX = (r32((uint32_t)(0x11f308c8)));
  /* 11f004d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f004d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f004d9 mov dword ptr [0x11f308c8], eax */
  w32((uint32_t)(0x11f308c8), (EAX));
  /* 11f004de jmp 0x11f004f2 */
  goto L_11f004f2;
L_11f004e0:;
  /* 11f004e0 mov ecx, dword ptr [0x11f308cc] */
  ECX = (r32((uint32_t)(0x11f308cc)));
  /* 11f004e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f004e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f004ec mov dword ptr [0x11f308cc], edx */
  w32((uint32_t)(0x11f308cc), (EDX));
L_11f004f2:;
  /* 11f004f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f004f4 call 0x11efba60 */
  push32(0x11f004f9u); f_11efba60();
  /* 11f004f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f004fc jmp 0x11f005d3 */
  goto L_11f005d3;
L_11f00501:;
  /* 11f00501 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00505 je 0x11f00518 */
  if (C.zf) goto L_11f00518;
  /* 11f00507 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0050b je 0x11f00518 */
  if (C.zf) goto L_11f00518;
  /* 11f0050d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00511 je 0x11f00518 */
  if (C.zf) goto L_11f00518;
  /* 11f00513 jmp 0x11f005d8 */
  goto L_11f005d8;
L_11f00518:;
  /* 11f00518 call 0x11efe7c0 */
  push32(0x11f0051du); f_11efe7c0();
  /* 11f0051d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f00520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00523 cmp dword ptr [eax + 0x50], 0x11f2e2b0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11f2e2b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0052a jne 0x11f00575 */
  if (!C.zf) goto L_11f00575;
  /* 11f0052c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11f00531 push 0x11f2b20c */
  push32((uint32_t)(0x11f2b20cu));
  /* 11f00536 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f00538 mov ecx, dword ptr [0x11f2e330] */
  ECX = (r32((uint32_t)(0x11f2e330)));
  /* 11f0053e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0053f call 0x11efbac0 */
  push32(0x11f00544u); f_11efbac0();
  /* 11f00544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00547 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0054a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11f0054d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00550 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00554 je 0x11f00573 */
  if (C.zf) goto L_11f00573;
  /* 11f00556 mov ecx, dword ptr [0x11f2e330] */
  ECX = (r32((uint32_t)(0x11f2e330)));
  /* 11f0055c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0055d push 0x11f2e2b0 */
  push32((uint32_t)(0x11f2e2b0u));
  /* 11f00562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00565 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11f00568 push eax */
  push32((uint32_t)(EAX));
  /* 11f00569 call 0x11f05b60 */
  push32(0x11f0056eu); f_11f05b60();
  /* 11f0056e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00571 jmp 0x11f00575 */
  goto L_11f00575;
L_11f00573:;
  /* 11f00573 jmp 0x11f005d8 */
  goto L_11f005d8;
L_11f00575:;
  /* 11f00575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00578 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f0057b push edx */
  push32((uint32_t)(EDX));
  /* 11f0057c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0057f push eax */
  push32((uint32_t)(EAX));
  /* 11f00580 call 0x11f00900 */
  push32(0x11f00585u); f_11f00900();
  /* 11f00585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00588 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0058b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0058f jne 0x11f00593 */
  if (!C.zf) goto L_11f00593;
  /* 11f00591 jmp 0x11f005d8 */
  goto L_11f005d8;
L_11f00593:;
  /* 11f00593 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00596 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f00599 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f0059c:;
  /* 11f0059c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0059f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f005a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f005a5 jne 0x11f005d3 */
  if (!C.zf) goto L_11f005d3;
  /* 11f005a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f005aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f005ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f005b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f005b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f005b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f005b9 mov edx, dword ptr [0x11f2e334] */
  EDX = (r32((uint32_t)(0x11f2e334)));
  /* 11f005bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f005c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f005c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11f005c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f005ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f005cd jb 0x11f005d1 */
  if (C.cf) goto L_11f005d1;
  /* 11f005cf jmp 0x11f005d3 */
  goto L_11f005d3;
L_11f005d1:;
  /* 11f005d1 jmp 0x11f0059c */
  goto L_11f0059c;
L_11f005d3:;
  /* 11f005d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f005d6 jmp 0x11f005e6 */
  goto L_11f005e6;
L_11f005d8:;
  /* 11f005d8 call 0x11f07150 */
  push32(0x11f005ddu); f_11f07150();
  /* 11f005dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11f005e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f005e6:;
  /* 11f005e6 pop esi */
  ESI = (pop32());
  /* 11f005e7 mov esp, ebp */
  ESP = (EBP);
  /* 11f005e9 pop ebp */
  EBP = (pop32());
  /* 11f005ea ret  */
  ESPCHK(0x11f003f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010620 @ 0x11f00620 (146 bytes, 45 insns) */
void f_11f00620(void) {
  FTRACE(0x11f00620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00620 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00621 mov ebp, esp */
  EBP = (ESP);
  /* 11f00623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f00628 call 0x11efb9c0 */
  push32(0x11f0062du); f_11efb9c0();
  /* 11f0062d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00630 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00634 jne 0x11f0064e */
  if (!C.zf) goto L_11f0064e;
  /* 11f00636 mov dword ptr [ebp - 8], 0x11f308c0 */
  w32((uint32_t)(EBP + -0x8), (0x11f308c0u));
  /* 11f0063d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00640 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f00642 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f00645 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11f0064c jmp 0x11f00664 */
  goto L_11f00664;
L_11f0064e:;
  /* 11f0064e mov dword ptr [ebp - 8], 0x11f308c4 */
  w32((uint32_t)(EBP + -0x8), (0x11f308c4u));
  /* 11f00655 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00658 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0065a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0065d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11f00664:;
  /* 11f00664 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00668 jne 0x11f00678 */
  if (!C.zf) goto L_11f00678;
  /* 11f0066a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0066c call 0x11efba60 */
  push32(0x11f00671u); f_11efba60();
  /* 11f00671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f00676 jmp 0x11f006ac */
  goto L_11f006ac;
L_11f00678:;
  /* 11f00678 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0067c je 0x11f0069d */
  if (C.zf) goto L_11f0069d;
  /* 11f0067e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00681 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11f00687 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f00689 call 0x11efba60 */
  push32(0x11f0068eu); f_11efba60();
  /* 11f0068e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00694 push edx */
  push32((uint32_t)(EDX));
  /* 11f00695 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11f00698u);
  /* 11f00698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0069b jmp 0x11f006a7 */
  goto L_11f006a7;
L_11f0069d:;
  /* 11f0069d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0069f call 0x11efba60 */
  push32(0x11f006a4u); f_11efba60();
  /* 11f006a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f006a7:;
  /* 11f006a7 mov eax, 1 */
  EAX = (0x1u);
L_11f006ac:;
  /* 11f006ac mov esp, ebp */
  ESP = (EBP);
  /* 11f006ae pop ebp */
  EBP = (pop32());
  /* 11f006af ret 4 */
  ESPCHK(0x11f00620u, _esp0);
  ESP += 8; return;
}

/* FUN_100106c0 @ 0x11f006c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11f006c0(void) {
  FTRACE(0x11f006c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f006c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f006c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f006c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f006c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f006cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f006d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f006d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f006d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f006d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f006dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f006e0 ja 0x11f0078e */
  if ((!C.cf&&!C.zf)) goto L_11f0078e;
  /* 11f006e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f006e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f006eb mov dl, byte ptr [eax + 0x11f008e2] */
  DL = (r8((uint32_t)(EAX + 0x11f008e2)));
  /* 11f006f1 jmp dword ptr [edx*4 + 0x11f008ca] */
  switch (EDX) {
    case 0: goto L_11f006f8;
    case 1: goto L_11f00763;
    case 2: goto L_11f00749;
    case 3: goto L_11f00715;
    case 4: goto L_11f0072f;
    case 5: goto L_11f0078e;
    default: x86_unimpl("switch@0x11f006f1 out of table"); return;
  }
L_11f006f8:;
  /* 11f006f8 mov dword ptr [ebp - 0x18], 0x11f308c0 */
  w32((uint32_t)(EBP + -0x18), (0x11f308c0u));
  /* 11f006ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f00702 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f00704 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f00707 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0070a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0070d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f00710 jmp 0x11f00796 */
  goto L_11f00796;
L_11f00715:;
  /* 11f00715 mov dword ptr [ebp - 0x18], 0x11f308c4 */
  w32((uint32_t)(EBP + -0x18), (0x11f308c4u));
  /* 11f0071c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0071f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f00721 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f00724 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00727 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0072a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0072d jmp 0x11f00796 */
  goto L_11f00796;
L_11f0072f:;
  /* 11f0072f mov dword ptr [ebp - 0x18], 0x11f308c8 */
  w32((uint32_t)(EBP + -0x18), (0x11f308c8u));
  /* 11f00736 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f00739 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0073b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f0073e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00741 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00744 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f00747 jmp 0x11f00796 */
  goto L_11f00796;
L_11f00749:;
  /* 11f00749 mov dword ptr [ebp - 0x18], 0x11f308cc */
  w32((uint32_t)(EBP + -0x18), (0x11f308ccu));
  /* 11f00750 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f00753 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f00755 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f00758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0075b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0075e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f00761 jmp 0x11f00796 */
  goto L_11f00796;
L_11f00763:;
  /* 11f00763 call 0x11efe7c0 */
  push32(0x11f00768u); f_11efe7c0();
  /* 11f00768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0076b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0076e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f00771 push edx */
  push32((uint32_t)(EDX));
  /* 11f00772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00775 push eax */
  push32((uint32_t)(EAX));
  /* 11f00776 call 0x11f00900 */
  push32(0x11f0077bu); f_11f00900();
  /* 11f0077b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0077e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00781 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f00784 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f00787 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f00789 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f0078c jmp 0x11f00796 */
  goto L_11f00796;
L_11f0078e:;
  /* 11f0078e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00791 jmp 0x11f008c6 */
  goto L_11f008c6;
L_11f00796:;
  /* 11f00796 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0079a je 0x11f007a6 */
  if (C.zf) goto L_11f007a6;
  /* 11f0079c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0079e call 0x11efb9c0 */
  push32(0x11f007a3u); f_11efb9c0();
  /* 11f007a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f007a6:;
  /* 11f007a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007aa jne 0x11f007c3 */
  if (!C.zf) goto L_11f007c3;
  /* 11f007ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007b0 je 0x11f007bc */
  if (C.zf) goto L_11f007bc;
  /* 11f007b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f007b4 call 0x11efba60 */
  push32(0x11f007b9u); f_11efba60();
  /* 11f007b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f007bc:;
  /* 11f007bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f007be jmp 0x11f008c6 */
  goto L_11f008c6;
L_11f007c3:;
  /* 11f007c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007c7 jne 0x11f007e0 */
  if (!C.zf) goto L_11f007e0;
  /* 11f007c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007cd je 0x11f007d9 */
  if (C.zf) goto L_11f007d9;
  /* 11f007cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11f007d1 call 0x11efba60 */
  push32(0x11f007d6u); f_11efba60();
  /* 11f007d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f007d9:;
  /* 11f007d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f007db call 0x11efeb30 */
  push32(0x11f007e0u); f_11efeb30();
L_11f007e0:;
  /* 11f007e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007e4 je 0x11f007f2 */
  if (C.zf) goto L_11f007f2;
  /* 11f007e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007ea je 0x11f007f2 */
  if (C.zf) goto L_11f007f2;
  /* 11f007ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f007f0 jne 0x11f0081e */
  if (!C.zf) goto L_11f0081e;
L_11f007f2:;
  /* 11f007f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f007f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11f007f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f007fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f007fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11f00805 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00809 jne 0x11f0081e */
  if (!C.zf) goto L_11f0081e;
  /* 11f0080b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0080e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11f00811 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f00814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00817 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11f0081e:;
  /* 11f0081e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00822 jne 0x11f00860 */
  if (!C.zf) goto L_11f00860;
  /* 11f00824 mov eax, dword ptr [0x11f2e328] */
  EAX = (r32((uint32_t)(0x11f2e328)));
  /* 11f00829 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0082c jmp 0x11f00837 */
  goto L_11f00837;
L_11f0082e:;
  /* 11f0082e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f00831 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00834 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f00837:;
  /* 11f00837 mov edx, dword ptr [0x11f2e328] */
  EDX = (r32((uint32_t)(0x11f2e328)));
  /* 11f0083d add edx, dword ptr [0x11f2e32c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2e32c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00843 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00846 jge 0x11f0085e */
  if ((C.sf==C.of)) goto L_11f0085e;
  /* 11f00848 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0084b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0084e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00851 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f00854 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11f0085c jmp 0x11f0082e */
  goto L_11f0082e;
L_11f0085e:;
  /* 11f0085e jmp 0x11f00869 */
  goto L_11f00869;
L_11f00860:;
  /* 11f00860 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f00863 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11f00869:;
  /* 11f00869 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0086d je 0x11f00879 */
  if (C.zf) goto L_11f00879;
  /* 11f0086f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f00871 call 0x11efba60 */
  push32(0x11f00876u); f_11efba60();
  /* 11f00876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f00879:;
  /* 11f00879 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0087d jne 0x11f00890 */
  if (!C.zf) goto L_11f00890;
  /* 11f0087f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00882 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11f00885 push edx */
  push32((uint32_t)(EDX));
  /* 11f00886 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f00888 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11f0088bu);
  /* 11f0088b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0088e jmp 0x11f0089a */
  goto L_11f0089a;
L_11f00890:;
  /* 11f00890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00893 push eax */
  push32((uint32_t)(EAX));
  /* 11f00894 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11f00897u);
  /* 11f00897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0089a:;
  /* 11f0089a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0089e je 0x11f008ac */
  if (C.zf) goto L_11f008ac;
  /* 11f008a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f008a4 je 0x11f008ac */
  if (C.zf) goto L_11f008ac;
  /* 11f008a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f008aa jne 0x11f008c4 */
  if (!C.zf) goto L_11f008c4;
L_11f008ac:;
  /* 11f008ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f008af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f008b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11f008b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f008b9 jne 0x11f008c4 */
  if (!C.zf) goto L_11f008c4;
  /* 11f008bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f008be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f008c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11f008c4:;
  /* 11f008c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f008c6:;
  /* 11f008c6 mov esp, ebp */
  ESP = (EBP);
  /* 11f008c8 pop ebp */
  EBP = (pop32());
  /* 11f008c9 ret  */
  ESPCHK(0x11f006c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010900 @ 0x11f00900 (91 bytes, 35 insns) */
void f_11f00900(void) {
  FTRACE(0x11f00900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00900 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00901 mov ebp, esp */
  EBP = (ESP);
  /* 11f00903 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00904 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00907 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0090a:;
  /* 11f0090a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0090d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f00910 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00913 je 0x11f00933 */
  if (C.zf) goto L_11f00933;
  /* 11f00915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00918 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0091b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0091e mov ecx, dword ptr [0x11f2e334] */
  ECX = (r32((uint32_t)(0x11f2e334)));
  /* 11f00924 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f00927 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0092a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0092c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0092f jae 0x11f00933 */
  if (!C.cf) goto L_11f00933;
  /* 11f00931 jmp 0x11f0090a */
  goto L_11f0090a;
L_11f00933:;
  /* 11f00933 mov eax, dword ptr [0x11f2e334] */
  EAX = (r32((uint32_t)(0x11f2e334)));
  /* 11f00938 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0093b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0093e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00940 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00943 jae 0x11f00955 */
  if (!C.cf) goto L_11f00955;
  /* 11f00945 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00948 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0094b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0094e jne 0x11f00955 */
  if (!C.zf) goto L_11f00955;
  /* 11f00950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00953 jmp 0x11f00957 */
  goto L_11f00957;
L_11f00955:;
  /* 11f00955 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f00957:;
  /* 11f00957 mov esp, ebp */
  ESP = (EBP);
  /* 11f00959 pop ebp */
  EBP = (pop32());
  /* 11f0095a ret  */
  ESPCHK(0x11f00900u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x11f00960 (13 bytes, 6 insns) */
void f_11f00960(void) {
  FTRACE(0x11f00960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00960 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00961 mov ebp, esp */
  EBP = (ESP);
  /* 11f00963 call 0x11efe7c0 */
  push32(0x11f00968u); f_11efe7c0();
  /* 11f00968 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0096b pop ebp */
  EBP = (pop32());
  /* 11f0096c ret  */
  ESPCHK(0x11f00960u, _esp0);
  ESP += 4; return;
}

/* FUN_10010970 @ 0x11f00970 (13 bytes, 6 insns) */
void f_11f00970(void) {
  FTRACE(0x11f00970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00970 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00971 mov ebp, esp */
  EBP = (ESP);
  /* 11f00973 call 0x11efe7c0 */
  push32(0x11f00978u); f_11efe7c0();
  /* 11f00978 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0097b pop ebp */
  EBP = (pop32());
  /* 11f0097c ret  */
  ESPCHK(0x11f00970u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x11f00980 (187 bytes, 54 insns) */
void f_11f00980(void) {
  FTRACE(0x11f00980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00980 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00981 mov ebp, esp */
  EBP = (ESP);
  /* 11f00983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0098d cmp dword ptr [0x11f308d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00994 jne 0x11f009f3 */
  if (!C.zf) goto L_11f009f3;
  /* 11f00996 push 0x11f2a54c */
  push32((uint32_t)(0x11f2a54cu));
  /* 11f0099b call dword ptr [0x11f33424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33424))), 0x11f009a1u);
  /* 11f009a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f009a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f009a8 je 0x11f009c7 */
  if (C.zf) goto L_11f009c7;
  /* 11f009aa push 0x11f2b23c */
  push32((uint32_t)(0x11f2b23cu));
  /* 11f009af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f009b2 push eax */
  push32((uint32_t)(EAX));
  /* 11f009b3 call dword ptr [0x11f33314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33314))), 0x11f009b9u);
  /* 11f009b9 mov dword ptr [0x11f308d4], eax */
  w32((uint32_t)(0x11f308d4), (EAX));
  /* 11f009be cmp dword ptr [0x11f308d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f009c5 jne 0x11f009cb */
  if (!C.zf) goto L_11f009cb;
L_11f009c7:;
  /* 11f009c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f009c9 jmp 0x11f00a37 */
  goto L_11f00a37;
L_11f009cb:;
  /* 11f009cb push 0x11f2b22c */
  push32((uint32_t)(0x11f2b22cu));
  /* 11f009d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f009d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f009d4 call dword ptr [0x11f33314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33314))), 0x11f009dau);
  /* 11f009da mov dword ptr [0x11f308d8], eax */
  w32((uint32_t)(0x11f308d8), (EAX));
  /* 11f009df push 0x11f2b218 */
  push32((uint32_t)(0x11f2b218u));
  /* 11f009e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f009e7 push edx */
  push32((uint32_t)(EDX));
  /* 11f009e8 call dword ptr [0x11f33314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33314))), 0x11f009eeu);
  /* 11f009ee mov dword ptr [0x11f308dc], eax */
  w32((uint32_t)(0x11f308dc), (EAX));
L_11f009f3:;
  /* 11f009f3 cmp dword ptr [0x11f308d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f009fa je 0x11f00a05 */
  if (C.zf) goto L_11f00a05;
  /* 11f009fc call dword ptr [0x11f308d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f308d8))), 0x11f00a02u);
  /* 11f00a02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f00a05:;
  /* 11f00a05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00a09 je 0x11f00a21 */
  if (C.zf) goto L_11f00a21;
  /* 11f00a0b cmp dword ptr [0x11f308dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00a12 je 0x11f00a21 */
  if (C.zf) goto L_11f00a21;
  /* 11f00a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00a17 push eax */
  push32((uint32_t)(EAX));
  /* 11f00a18 call dword ptr [0x11f308dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f308dc))), 0x11f00a1eu);
  /* 11f00a1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f00a21:;
  /* 11f00a21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f00a24 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00a25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00a28 push edx */
  push32((uint32_t)(EDX));
  /* 11f00a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00a2c push eax */
  push32((uint32_t)(EAX));
  /* 11f00a2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00a31 call dword ptr [0x11f308d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f308d4))), 0x11f00a37u);
L_11f00a37:;
  /* 11f00a37 mov esp, ebp */
  ESP = (EBP);
  /* 11f00a39 pop ebp */
  EBP = (pop32());
  /* 11f00a3a ret  */
  ESPCHK(0x11f00980u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11f00a40 (254 bytes, 109 insns) */
void f_11f00a40(void) {
  FTRACE(0x11f00a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00a40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f00a44 push edi */
  push32((uint32_t)(EDI));
  /* 11f00a45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f00a47 je 0x11f00ac3 */
  if (C.zf) goto L_11f00ac3;
  /* 11f00a49 push esi */
  push32((uint32_t)(ESI));
  /* 11f00a4a push ebx */
  push32((uint32_t)(EBX));
  /* 11f00a4b mov ebx, ecx */
  EBX = (ECX);
  /* 11f00a4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f00a51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f00a57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f00a5b jne 0x11f00a64 */
  if (!C.zf) goto L_11f00a64;
  /* 11f00a5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f00a60 jne 0x11f00ad1 */
  if (!C.zf) goto L_11f00ad1;
  /* 11f00a62 jmp 0x11f00a85 */
  goto L_11f00a85;
L_11f00a64:;
  /* 11f00a64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f00a66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f00a67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f00a69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f00a6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f00a6b je 0x11f00a92 */
  if (C.zf) goto L_11f00a92;
  /* 11f00a6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f00a6f je 0x11f00a9a */
  if (C.zf) goto L_11f00a9a;
  /* 11f00a71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f00a77 jne 0x11f00a64 */
  if (!C.zf) goto L_11f00a64;
  /* 11f00a79 mov ebx, ecx */
  EBX = (ECX);
  /* 11f00a7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f00a7e jne 0x11f00ad1 */
  if (!C.zf) goto L_11f00ad1;
L_11f00a80:;
  /* 11f00a80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f00a83 je 0x11f00a92 */
  if (C.zf) goto L_11f00a92;
L_11f00a85:;
  /* 11f00a85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f00a87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f00a88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f00a8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f00a8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f00a8d je 0x11f00abe */
  if (C.zf) goto L_11f00abe;
  /* 11f00a8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f00a90 jne 0x11f00a85 */
  if (!C.zf) goto L_11f00a85;
L_11f00a92:;
  /* 11f00a92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f00a96 pop ebx */
  EBX = (pop32());
  /* 11f00a97 pop esi */
  ESI = (pop32());
  /* 11f00a98 pop edi */
  EDI = (pop32());
  /* 11f00a99 ret  */
  ESPCHK(0x11f00a40u, _esp0);
  ESP += 4; return;
L_11f00a9a:;
  /* 11f00a9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f00aa0 je 0x11f00ab4 */
  if (C.zf) goto L_11f00ab4;
L_11f00aa2:;
  /* 11f00aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f00aa4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f00aa5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f00aa6 je 0x11f00b36 */
  if (C.zf) goto L_11f00b36;
  /* 11f00aac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f00ab2 jne 0x11f00aa2 */
  if (!C.zf) goto L_11f00aa2;
L_11f00ab4:;
  /* 11f00ab4 mov ebx, ecx */
  EBX = (ECX);
  /* 11f00ab6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f00ab9 jne 0x11f00b27 */
  if (!C.zf) goto L_11f00b27;
L_11f00abb:;
  /* 11f00abb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f00abd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f00abe:;
  /* 11f00abe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f00abf jne 0x11f00abb */
  if (!C.zf) goto L_11f00abb;
  /* 11f00ac1 pop ebx */
  EBX = (pop32());
  /* 11f00ac2 pop esi */
  ESI = (pop32());
L_11f00ac3:;
  /* 11f00ac3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f00ac7 pop edi */
  EDI = (pop32());
  /* 11f00ac8 ret  */
  ESPCHK(0x11f00a40u, _esp0);
  ESP += 4; return;
L_11f00ac9:;
  /* 11f00ac9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f00acb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00ace dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f00acf je 0x11f00a80 */
  if (C.zf) goto L_11f00a80;
L_11f00ad1:;
  /* 11f00ad1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f00ad6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f00ad8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00ada xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00add xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f00adf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f00ae1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00ae4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f00ae9 je 0x11f00ac9 */
  if (C.zf) goto L_11f00ac9;
  /* 11f00aeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f00aed je 0x11f00b1b */
  if (C.zf) goto L_11f00b1b;
  /* 11f00aef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f00af1 je 0x11f00b11 */
  if (C.zf) goto L_11f00b11;
  /* 11f00af3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f00af9 je 0x11f00b07 */
  if (C.zf) goto L_11f00b07;
  /* 11f00afb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f00b01 jne 0x11f00ac9 */
  if (!C.zf) goto L_11f00ac9;
  /* 11f00b03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f00b05 jmp 0x11f00b1f */
  goto L_11f00b1f;
L_11f00b07:;
  /* 11f00b07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f00b0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f00b0f jmp 0x11f00b1f */
  goto L_11f00b1f;
L_11f00b11:;
  /* 11f00b11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f00b17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f00b19 jmp 0x11f00b1f */
  goto L_11f00b1f;
L_11f00b1b:;
  /* 11f00b1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f00b1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11f00b1f:;
  /* 11f00b1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f00b24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f00b25 je 0x11f00b31 */
  if (C.zf) goto L_11f00b31;
L_11f00b27:;
  /* 11f00b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f00b29:;
  /* 11f00b29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f00b2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00b2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f00b2f jne 0x11f00b29 */
  if (!C.zf) goto L_11f00b29;
L_11f00b31:;
  /* 11f00b31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f00b34 jne 0x11f00abb */
  if (!C.zf) goto L_11f00abb;
L_11f00b36:;
  /* 11f00b36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f00b3a pop ebx */
  EBX = (pop32());
  /* 11f00b3b pop esi */
  ESI = (pop32());
  /* 11f00b3c pop edi */
  EDI = (pop32());
  /* 11f00b3d ret  */
  ESPCHK(0x11f00a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b40 @ 0x11f00b40 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11f00b40(void) {
  FTRACE(0x11f00b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00b41 mov ebp, esp */
  EBP = (ESP);
  /* 11f00b43 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00b46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f00b49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f00b4b mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11f00b4e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f00b51 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11f00b54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f00b57 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00b5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f00b5c mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11f00b5f mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f00b62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00b65 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11f00b68 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00b6c ja 0x11f00bae */
  if ((!C.cf&&!C.zf)) goto L_11f00bae;
  /* 11f00b6e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f00b71 jmp dword ptr [eax*4 + 0x11f00c9c] */
  switch (EAX) {
    case 0: goto L_11f00b78;
    case 1: goto L_11f00b93;
    case 2: goto L_11f00b81;
    case 3: goto L_11f00b8a;
    case 4: goto L_11f00b78;
    case 5: goto L_11f00bae;
    case 6: goto L_11f00ba5;
    case 7: goto L_11f00b9c;
    default: x86_unimpl("switch@0x11f00b71 out of table"); return;
  }
L_11f00b78:;
  /* 11f00b78 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11f00b7f jmp 0x11f00bb5 */
  goto L_11f00bb5;
L_11f00b81:;
  /* 11f00b81 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11f00b88 jmp 0x11f00bb5 */
  goto L_11f00bb5;
L_11f00b8a:;
  /* 11f00b8a mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11f00b91 jmp 0x11f00bb5 */
  goto L_11f00bb5;
L_11f00b93:;
  /* 11f00b93 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11f00b9a jmp 0x11f00bb5 */
  goto L_11f00bb5;
L_11f00b9c:;
  /* 11f00b9c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11f00ba3 jmp 0x11f00bb5 */
  goto L_11f00bb5;
L_11f00ba5:;
  /* 11f00ba5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00ba8 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11f00bae:;
  /* 11f00bae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f00bb5:;
  /* 11f00bb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00bb9 je 0x11f00c4a */
  if (C.zf) goto L_11f00c4a;
  /* 11f00bbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00bc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f00bc4 push eax */
  push32((uint32_t)(EAX));
  /* 11f00bc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00bc8 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00bcb push ecx */
  push32((uint32_t)(ECX));
  /* 11f00bcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00bcf push edx */
  push32((uint32_t)(EDX));
  /* 11f00bd0 call 0x11f078a0 */
  push32(0x11f00bd5u); f_11f078a0();
  /* 11f00bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00bda jne 0x11f00c4a */
  if (!C.zf) goto L_11f00c4a;
  /* 11f00bdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00bdf mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11f00be2 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00be6 je 0x11f00bf6 */
  if (C.zf) goto L_11f00bf6;
  /* 11f00be8 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00bec je 0x11f00bf6 */
  if (C.zf) goto L_11f00bf6;
  /* 11f00bee cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00bf2 je 0x11f00bf6 */
  if (C.zf) goto L_11f00bf6;
  /* 11f00bf4 jmp 0x11f00c1c */
  goto L_11f00c1c;
L_11f00bf6:;
  /* 11f00bf6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f00bf9 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00bfc mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f00bff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f00c02 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00c05 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00c08 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f00c0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00c0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f00c11 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11f00c14 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f00c17 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11f00c1a jmp 0x11f00c24 */
  goto L_11f00c24;
L_11f00c1c:;
  /* 11f00c1c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f00c1f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11f00c21 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11f00c24:;
  /* 11f00c24 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00c27 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00c2a push ecx */
  push32((uint32_t)(ECX));
  /* 11f00c2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00c2e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00c31 push edx */
  push32((uint32_t)(EDX));
  /* 11f00c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00c35 push eax */
  push32((uint32_t)(EAX));
  /* 11f00c36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00c39 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00c3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00c3d push edx */
  push32((uint32_t)(EDX));
  /* 11f00c3e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11f00c41 push eax */
  push32((uint32_t)(EAX));
  /* 11f00c42 call 0x11f073d0 */
  push32(0x11f00c47u); f_11f073d0();
  /* 11f00c47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f00c4a:;
  /* 11f00c4a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f00c4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00c52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f00c54 push edx */
  push32((uint32_t)(EDX));
  /* 11f00c55 call 0x11f07e10 */
  push32(0x11f00c5au); f_11f07e10();
  /* 11f00c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00c5d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f00c64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00c67 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00c6a je 0x11f00c84 */
  if (C.zf) goto L_11f00c84;
  /* 11f00c6c cmp dword ptr [0x11f2e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00c73 jne 0x11f00c84 */
  if (!C.zf) goto L_11f00c84;
  /* 11f00c75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00c78 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00c79 call 0x11f07dc0 */
  push32(0x11f00c7eu); f_11f07dc0();
  /* 11f00c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00c81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f00c84:;
  /* 11f00c84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00c88 jne 0x11f00c98 */
  if (!C.zf) goto L_11f00c98;
  /* 11f00c8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00c8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f00c8f push eax */
  push32((uint32_t)(EAX));
  /* 11f00c90 call 0x11f07cc0 */
  push32(0x11f00c95u); f_11f07cc0();
  /* 11f00c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f00c98:;
  /* 11f00c98 mov esp, ebp */
  ESP = (EBP);
  /* 11f00c9a pop ebp */
  EBP = (pop32());
  /* 11f00c9b ret  */
  ESPCHK(0x11f00b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cc0 @ 0x11f00cc0 (31 bytes, 18 insns) */
void f_11f00cc0(void) {
  FTRACE(0x11f00cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f00cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f00cc5 push esi */
  push32((uint32_t)(ESI));
  /* 11f00cc6 push edi */
  push32((uint32_t)(EDI));
  /* 11f00cc7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f00cc8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11f00ccb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00ccf push eax */
  push32((uint32_t)(EAX));
  /* 11f00cd0 call 0x11f010b0 */
  push32(0x11f00cd5u); f_11f010b0();
  /* 11f00cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00cd8 pop edi */
  EDI = (pop32());
  /* 11f00cd9 pop esi */
  ESI = (pop32());
  /* 11f00cda pop ebx */
  EBX = (pop32());
  /* 11f00cdb mov esp, ebp */
  ESP = (EBP);
  /* 11f00cdd pop ebp */
  EBP = (pop32());
  /* 11f00cde ret  */
  ESPCHK(0x11f00cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x11f00ce0 (32 bytes, 18 insns) */
void f_11f00ce0(void) {
  FTRACE(0x11f00ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11f00ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00ce4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f00ce5 push esi */
  push32((uint32_t)(ESI));
  /* 11f00ce6 push edi */
  push32((uint32_t)(EDI));
  /* 11f00ce7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11f00cea fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11f00cec mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11f00cf1 call 0x11f010b0 */
  push32(0x11f00cf6u); f_11f010b0();
  /* 11f00cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00cf9 pop edi */
  EDI = (pop32());
  /* 11f00cfa pop esi */
  ESI = (pop32());
  /* 11f00cfb pop ebx */
  EBX = (pop32());
  /* 11f00cfc mov esp, ebp */
  ESP = (EBP);
  /* 11f00cfe pop ebp */
  EBP = (pop32());
  /* 11f00cff ret  */
  ESPCHK(0x11f00ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d00 @ 0x11f00d00 (79 bytes, 34 insns) */
void f_11f00d00(void) {
  FTRACE(0x11f00d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00d01 mov ebp, esp */
  EBP = (ESP);
  /* 11f00d03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11f00d07 push esi */
  push32((uint32_t)(ESI));
  /* 11f00d08 push edi */
  push32((uint32_t)(EDI));
  /* 11f00d09 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f00d0a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11f00d0d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11f00d11 push eax */
  push32((uint32_t)(EAX));
  /* 11f00d12 call 0x11f00dd0 */
  push32(0x11f00d17u); f_11f00dd0();
  /* 11f00d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00d1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f00d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00d20 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11f00d23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00d26 not edx */
  EDX = (~(EDX));
  /* 11f00d28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00d2b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f00d2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f00d2f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f00d32 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00d35 push ecx */
  push32((uint32_t)(ECX));
  /* 11f00d36 call 0x11f00f50 */
  push32(0x11f00d3bu); f_11f00f50();
  /* 11f00d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00d3e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f00d42 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11f00d45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f00d48 pop edi */
  EDI = (pop32());
  /* 11f00d49 pop esi */
  ESI = (pop32());
  /* 11f00d4a pop ebx */
  EBX = (pop32());
  /* 11f00d4b mov esp, ebp */
  ESP = (EBP);
  /* 11f00d4d pop ebp */
  EBP = (pop32());
  /* 11f00d4e ret  */
  ESPCHK(0x11f00d00u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11f00d50 (26 bytes, 11 insns) */
void f_11f00d50(void) {
  FTRACE(0x11f00d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00d51 mov ebp, esp */
  EBP = (ESP);
  /* 11f00d53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f00d56 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00d5b push eax */
  push32((uint32_t)(EAX));
  /* 11f00d5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00d5f push ecx */
  push32((uint32_t)(ECX));
  /* 11f00d60 call 0x11f00d00 */
  push32(0x11f00d65u); f_11f00d00();
  /* 11f00d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00d68 pop ebp */
  EBP = (pop32());
  /* 11f00d69 ret  */
  ESPCHK(0x11f00d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d70 @ 0x11f00d70 (88 bytes, 33 insns) */
void f_11f00d70(void) {
  FTRACE(0x11f00d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00d71 mov ebp, esp */
  EBP = (ESP);
  /* 11f00d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00d76 push ebx */
  push32((uint32_t)(EBX));
  /* 11f00d77 push esi */
  push32((uint32_t)(ESI));
  /* 11f00d78 push edi */
  push32((uint32_t)(EDI));
  /* 11f00d79 call 0x11f00970 */
  push32(0x11f00d7eu); f_11f00970();
  /* 11f00d7e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11f00d80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f00d83 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11f00d85 call 0x11efb0e0 */
  push32(0x11f00d8au); f_11efb0e0();
  /* 11f00d8a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00d8e je 0x11f00dc1 */
  if (C.zf) goto L_11f00dc1;
  /* 11f00d90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00d93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f00d96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f00d98 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00d9f je 0x11f00dc1 */
  if (C.zf) goto L_11f00dc1;
  /* 11f00da1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00da4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f00da7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f00daa mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f00dad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00db0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f00db7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f00dba mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11f00dc1:;
  /* 11f00dc1 pop edi */
  EDI = (pop32());
  /* 11f00dc2 pop esi */
  ESI = (pop32());
  /* 11f00dc3 pop ebx */
  EBX = (pop32());
  /* 11f00dc4 mov esp, ebp */
  ESP = (EBP);
  /* 11f00dc6 pop ebp */
  EBP = (pop32());
  /* 11f00dc7 ret  */
  ESPCHK(0x11f00d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x11f00dd0 (377 bytes, 115 insns) */
void f_11f00dd0(void) {
  FTRACE(0x11f00dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11f00dd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00dd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f00ddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00de0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00de5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00dea je 0x11f00df5 */
  if (C.zf) goto L_11f00df5;
  /* 11f00dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00def or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00df2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f00df5:;
  /* 11f00df5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00df8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f00dfe and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f00e03 je 0x11f00e0d */
  if (C.zf) goto L_11f00e0d;
  /* 11f00e05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00e08 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11f00e0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f00e0d:;
  /* 11f00e0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00e10 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f00e16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00e19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f00e1b je 0x11f00e26 */
  if (C.zf) goto L_11f00e26;
  /* 11f00e1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00e20 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00e23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f00e26:;
  /* 11f00e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00e29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00e2e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00e33 je 0x11f00e3e */
  if (C.zf) goto L_11f00e3e;
  /* 11f00e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00e38 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f00e3e:;
  /* 11f00e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00e41 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f00e47 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00e4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f00e4c je 0x11f00e56 */
  if (C.zf) goto L_11f00e56;
  /* 11f00e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00e51 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f00e53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f00e56:;
  /* 11f00e56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00e59 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f00e5f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00e62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f00e64 je 0x11f00e72 */
  if (C.zf) goto L_11f00e72;
  /* 11f00e66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00e69 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00e6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f00e72:;
  /* 11f00e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00e75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00e7a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00e7f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f00e82 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00e89 jg 0x11f00ea5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f00ea5;
  /* 11f00e8b cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00e92 je 0x11f00eb8 */
  if (C.zf) goto L_11f00eb8;
  /* 11f00e94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00e98 je 0x11f00eb0 */
  if (C.zf) goto L_11f00eb0;
  /* 11f00e9a cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00ea1 je 0x11f00ec3 */
  if (C.zf) goto L_11f00ec3;
  /* 11f00ea3 jmp 0x11f00ed7 */
  goto L_11f00ed7;
L_11f00ea5:;
  /* 11f00ea5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00eac je 0x11f00ece */
  if (C.zf) goto L_11f00ece;
  /* 11f00eae jmp 0x11f00ed7 */
  goto L_11f00ed7;
L_11f00eb0:;
  /* 11f00eb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00eb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f00eb6 jmp 0x11f00ed7 */
  goto L_11f00ed7;
L_11f00eb8:;
  /* 11f00eb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00ebb or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f00ebe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f00ec1 jmp 0x11f00ed7 */
  goto L_11f00ed7;
L_11f00ec3:;
  /* 11f00ec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00ec6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11f00ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f00ecc jmp 0x11f00ed7 */
  goto L_11f00ed7;
L_11f00ece:;
  /* 11f00ece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00ed1 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f00ed4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f00ed7:;
  /* 11f00ed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00eda and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f00ee0 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00ee6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f00ee9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00eed je 0x11f00f19 */
  if (C.zf) goto L_11f00f19;
  /* 11f00eef cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00ef6 je 0x11f00f0b */
  if (C.zf) goto L_11f00f0b;
  /* 11f00ef8 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00eff je 0x11f00f03 */
  if (C.zf) goto L_11f00f03;
  /* 11f00f01 jmp 0x11f00f25 */
  goto L_11f00f25;
L_11f00f03:;
  /* 11f00f03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00f06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f00f09 jmp 0x11f00f25 */
  goto L_11f00f25;
L_11f00f0b:;
  /* 11f00f0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00f0e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00f14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f00f17 jmp 0x11f00f25 */
  goto L_11f00f25;
L_11f00f19:;
  /* 11f00f19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00f1c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00f22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f00f25:;
  /* 11f00f25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00f28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f00f2d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00f34 je 0x11f00f42 */
  if (C.zf) goto L_11f00f42;
  /* 11f00f36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00f39 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00f3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f00f42:;
  /* 11f00f42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f00f45 mov esp, ebp */
  ESP = (EBP);
  /* 11f00f47 pop ebp */
  EBP = (pop32());
  /* 11f00f48 ret  */
  ESPCHK(0x11f00dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f50 @ 0x11f00f50 (346 bytes, 106 insns) */
void f_11f00f50(void) {
  FTRACE(0x11f00f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f00f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f00f51 mov ebp, esp */
  EBP = (ESP);
  /* 11f00f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f00f56 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f00f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00f5f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00f64 je 0x11f00f71 */
  if (C.zf) goto L_11f00f71;
  /* 11f00f66 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00f6a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11f00f6d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11f00f71:;
  /* 11f00f71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00f74 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00f77 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f00f79 je 0x11f00f85 */
  if (C.zf) goto L_11f00f85;
  /* 11f00f7b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00f7f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11f00f81 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11f00f85:;
  /* 11f00f85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00f88 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00f8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f00f8d je 0x11f00f9a */
  if (C.zf) goto L_11f00f9a;
  /* 11f00f8f mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00f93 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11f00f96 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11f00f9a:;
  /* 11f00f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00f9d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f00fa2 je 0x11f00faf */
  if (C.zf) goto L_11f00faf;
  /* 11f00fa4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00fa8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11f00fab mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11f00faf:;
  /* 11f00faf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00fb2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f00fb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f00fb7 je 0x11f00fc3 */
  if (C.zf) goto L_11f00fc3;
  /* 11f00fb9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00fbd or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f00fbf mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11f00fc3:;
  /* 11f00fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00fc6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f00fcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f00fce je 0x11f00fdb */
  if (C.zf) goto L_11f00fdb;
  /* 11f00fd0 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f00fd4 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11f00fd7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11f00fdb:;
  /* 11f00fdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f00fde and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11f00fe3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f00fe6 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00fed ja 0x11f01009 */
  if ((!C.cf&&!C.zf)) goto L_11f01009;
  /* 11f00fef cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00ff6 je 0x11f0101e */
  if (C.zf) goto L_11f0101e;
  /* 11f00ff8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f00ffc je 0x11f01014 */
  if (C.zf) goto L_11f01014;
  /* 11f00ffe cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01005 je 0x11f0102b */
  if (C.zf) goto L_11f0102b;
  /* 11f01007 jmp 0x11f01043 */
  goto L_11f01043;
L_11f01009:;
  /* 11f01009 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01010 je 0x11f01038 */
  if (C.zf) goto L_11f01038;
  /* 11f01012 jmp 0x11f01043 */
  goto L_11f01043;
L_11f01014:;
  /* 11f01014 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f01018 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11f0101c jmp 0x11f01043 */
  goto L_11f01043;
L_11f0101e:;
  /* 11f0101e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f01022 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f01025 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11f01029 jmp 0x11f01043 */
  goto L_11f01043;
L_11f0102b:;
  /* 11f0102b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0102f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11f01032 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f01036 jmp 0x11f01043 */
  goto L_11f01043;
L_11f01038:;
  /* 11f01038 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0103c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f0103f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11f01043:;
  /* 11f01043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01046 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0104c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f0104f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01053 je 0x11f01069 */
  if (C.zf) goto L_11f01069;
  /* 11f01055 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0105c je 0x11f01076 */
  if (C.zf) goto L_11f01076;
  /* 11f0105e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01065 je 0x11f01083 */
  if (C.zf) goto L_11f01083;
  /* 11f01067 jmp 0x11f0108b */
  goto L_11f0108b;
L_11f01069:;
  /* 11f01069 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0106d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11f01070 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f01074 jmp 0x11f0108b */
  goto L_11f0108b;
L_11f01076:;
  /* 11f01076 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0107a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f0107d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11f01081 jmp 0x11f0108b */
  goto L_11f0108b;
L_11f01083:;
  /* 11f01083 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f01087 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11f0108b:;
  /* 11f0108b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0108e and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f01093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f01095 je 0x11f010a2 */
  if (C.zf) goto L_11f010a2;
  /* 11f01097 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0109b or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f0109e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11f010a2:;
  /* 11f010a2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f010a6 mov esp, ebp */
  ESP = (EBP);
  /* 11f010a8 pop ebp */
  EBP = (pop32());
  /* 11f010a9 ret  */
  ESPCHK(0x11f00f50u, _esp0);
  ESP += 4; return;
}

/* FUN_100110b0 @ 0x11f010b0 (167 bytes, 56 insns) */
void f_11f010b0(void) {
  FTRACE(0x11f010b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f010b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f010b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f010b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f010b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f010bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f010be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f010c3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f010c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f010c8 je 0x11f010d3 */
  if (C.zf) goto L_11f010d3;
  /* 11f010ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f010cd or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11f010d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f010d3:;
  /* 11f010d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f010d6 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f010dc and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f010df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f010e1 je 0x11f010eb */
  if (C.zf) goto L_11f010eb;
  /* 11f010e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f010e6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11f010e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f010eb:;
  /* 11f010eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f010ee and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f010f4 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f010f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f010f9 je 0x11f01104 */
  if (C.zf) goto L_11f01104;
  /* 11f010fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f010fe or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f01101 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f01104:;
  /* 11f01104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01107 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0110c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0110f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f01111 je 0x11f0111c */
  if (C.zf) goto L_11f0111c;
  /* 11f01113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01116 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01119 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0111c:;
  /* 11f0111c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0111f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01125 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f01128 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0112a je 0x11f01134 */
  if (C.zf) goto L_11f01134;
  /* 11f0112c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0112f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f01131 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f01134:;
  /* 11f01134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01137 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0113d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01140 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f01142 je 0x11f01150 */
  if (C.zf) goto L_11f01150;
  /* 11f01144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01147 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0114d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f01150:;
  /* 11f01150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01153 mov esp, ebp */
  ESP = (EBP);
  /* 11f01155 pop ebp */
  EBP = (pop32());
  /* 11f01156 ret  */
  ESPCHK(0x11f010b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x11f01160 (183 bytes, 58 insns) */
void f_11f01160(void) {
  FTRACE(0x11f01160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01160 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01161 mov ebp, esp */
  EBP = (ESP);
  /* 11f01163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01169 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0116c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01171 ja 0x11f0118a */
  if ((!C.cf&&!C.zf)) goto L_11f0118a;
  /* 11f01173 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01176 mov edx, dword ptr [0x11f2e05c] */
  EDX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0117c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0117e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11f01182 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11f01185 jmp 0x11f01213 */
  goto L_11f01213;
L_11f0118a:;
  /* 11f0118a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0118d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f01190 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f01196 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0119c mov edx, dword ptr [0x11f2e05c] */
  EDX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f011a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f011a4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11f011a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f011ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f011af je 0x11f011d3 */
  if (C.zf) goto L_11f011d3;
  /* 11f011b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f011b4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f011b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f011bd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11f011c0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f011c3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11f011c6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11f011ca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11f011d1 jmp 0x11f011e4 */
  goto L_11f011e4;
L_11f011d3:;
  /* 11f011d3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f011d6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11f011d9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11f011dd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11f011e4:;
  /* 11f011e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f011e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f011e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f011ea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11f011ed push ecx */
  push32((uint32_t)(ECX));
  /* 11f011ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f011f1 push edx */
  push32((uint32_t)(EDX));
  /* 11f011f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f011f5 push eax */
  push32((uint32_t)(EAX));
  /* 11f011f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f011f8 call 0x11f07ed0 */
  push32(0x11f011fdu); f_11f07ed0();
  /* 11f011fd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f01202 jne 0x11f01208 */
  if (!C.zf) goto L_11f01208;
  /* 11f01204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01206 jmp 0x11f01213 */
  goto L_11f01213;
L_11f01208:;
  /* 11f01208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0120b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f01210 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11f01213:;
  /* 11f01213 mov esp, ebp */
  ESP = (EBP);
  /* 11f01215 pop ebp */
  EBP = (pop32());
  /* 11f01216 ret  */
  ESPCHK(0x11f01160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x11f01220 (11 bytes, 6 insns) */
void f_11f01220(void) {
  FTRACE(0x11f01220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01220 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01221 mov ebp, esp */
  EBP = (ESP);
  /* 11f01223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01226 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01229 pop ebp */
  EBP = (pop32());
  /* 11f0122a ret  */
  ESPCHK(0x11f01220u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x11f01230 (147 bytes, 43 insns) */
void f_11f01230(void) {
  FTRACE(0x11f01230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01230 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01231 mov ebp, esp */
  EBP = (ESP);
  /* 11f01233 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01234 cmp dword ptr [0x11f309c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0123b jne 0x11f01257 */
  if (!C.zf) goto L_11f01257;
  /* 11f0123d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01241 jl 0x11f01252 */
  if ((C.sf!=C.of)) goto L_11f01252;
  /* 11f01243 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01247 jg 0x11f01252 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f01252;
  /* 11f01249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0124c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0124f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11f01252:;
  /* 11f01252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01255 jmp 0x11f012bf */
  goto L_11f012bf;
L_11f01257:;
  /* 11f01257 push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0125c call dword ptr [0x11f33428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33428))), 0x11f01262u);
  /* 11f01262 cmp dword ptr [0x11f31dc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01269 je 0x11f01289 */
  if (C.zf) goto L_11f01289;
  /* 11f0126b push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f01270 call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11f01276u);
  /* 11f01276 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f01278 call 0x11efb9c0 */
  push32(0x11f0127du); f_11efb9c0();
  /* 11f0127d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01280 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f01287 jmp 0x11f01290 */
  goto L_11f01290;
L_11f01289:;
  /* 11f01289 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f01290:;
  /* 11f01290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01293 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01294 call 0x11f012d0 */
  push32(0x11f01299u); f_11f012d0();
  /* 11f01299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0129c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0129f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f012a3 je 0x11f012b1 */
  if (C.zf) goto L_11f012b1;
  /* 11f012a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f012a7 call 0x11efba60 */
  push32(0x11f012acu); f_11efba60();
  /* 11f012ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f012af jmp 0x11f012bc */
  goto L_11f012bc;
L_11f012b1:;
  /* 11f012b1 push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f012b6 call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11f012bcu);
L_11f012bc:;
  /* 11f012bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11f012bf:;
  /* 11f012bf mov esp, ebp */
  ESP = (EBP);
  /* 11f012c1 pop ebp */
  EBP = (pop32());
  /* 11f012c2 ret  */
  ESPCHK(0x11f01230u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x11f012d0 (299 bytes, 91 insns) */
void f_11f012d0(void) {
  FTRACE(0x11f012d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f012d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f012d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f012d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f012d6 cmp dword ptr [0x11f309c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f012dd jne 0x11f012fc */
  if (!C.zf) goto L_11f012fc;
  /* 11f012df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f012e3 jl 0x11f012f4 */
  if ((C.sf!=C.of)) goto L_11f012f4;
  /* 11f012e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f012e9 jg 0x11f012f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f012f4;
  /* 11f012eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f012ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f012f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11f012f4:;
  /* 11f012f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f012f7 jmp 0x11f013f7 */
  goto L_11f013f7;
L_11f012fc:;
  /* 11f012fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01303 jge 0x11f01343 */
  if ((C.sf==C.of)) goto L_11f01343;
  /* 11f01305 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0130c jle 0x11f01321 */
  if ((C.zf||C.sf!=C.of)) goto L_11f01321;
  /* 11f0130e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f01310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01313 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01314 call 0x11f01160 */
  push32(0x11f01319u); f_11f01160();
  /* 11f01319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0131c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0131f jmp 0x11f01335 */
  goto L_11f01335;
L_11f01321:;
  /* 11f01321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01324 mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f01329 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0132b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f0132f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01332 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f01335:;
  /* 11f01335 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01339 jne 0x11f01343 */
  if (!C.zf) goto L_11f01343;
  /* 11f0133b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0133e jmp 0x11f013f7 */
  goto L_11f013f7;
L_11f01343:;
  /* 11f01343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01346 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11f01349 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0134f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01355 mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0135a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0135c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f01360 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f01368 je 0x11f0138c */
  if (C.zf) goto L_11f0138c;
  /* 11f0136a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0136d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11f01370 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01376 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11f01379 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f0137c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11f0137f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11f01383 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11f0138a jmp 0x11f0139d */
  goto L_11f0139d;
L_11f0138c:;
  /* 11f0138c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f0138f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11f01392 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11f01396 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11f0139d:;
  /* 11f0139d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0139f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f013a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f013a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f013a6 push edx */
  push32((uint32_t)(EDX));
  /* 11f013a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f013aa push eax */
  push32((uint32_t)(EAX));
  /* 11f013ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11f013ae push ecx */
  push32((uint32_t)(ECX));
  /* 11f013af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f013b4 mov edx, dword ptr [0x11f309c8] */
  EDX = (r32((uint32_t)(0x11f309c8)));
  /* 11f013ba push edx */
  push32((uint32_t)(EDX));
  /* 11f013bb call 0x11f08ae0 */
  push32(0x11f013c0u); f_11f08ae0();
  /* 11f013c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f013c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f013c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f013ca jne 0x11f013d1 */
  if (!C.zf) goto L_11f013d1;
  /* 11f013cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f013cf jmp 0x11f013f7 */
  goto L_11f013f7;
L_11f013d1:;
  /* 11f013d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f013d5 jne 0x11f013e1 */
  if (!C.zf) goto L_11f013e1;
  /* 11f013d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f013da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f013df jmp 0x11f013f7 */
  goto L_11f013f7;
L_11f013e1:;
  /* 11f013e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f013e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f013e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11f013ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f013f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f013f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11f013f7:;
  /* 11f013f7 mov esp, ebp */
  ESP = (EBP);
  /* 11f013f9 pop ebp */
  EBP = (pop32());
  /* 11f013fa ret  */
  ESPCHK(0x11f012d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011400 @ 0x11f01400 (132 bytes, 51 insns) */
void f_11f01400(void) {
  FTRACE(0x11f01400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01400 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01401 mov ebp, esp */
  EBP = (ESP);
  /* 11f01403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01406 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01409 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0140a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0140d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0140f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f01412 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f01415 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01418 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0141d jns 0x11f01424 */
  if (!C.sf) goto L_11f01424;
  /* 11f0141f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f01420 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f01423 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f01424:;
  /* 11f01424 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11f01429 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0142b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0142e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01431 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01434 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f01436 not edx */
  EDX = (~(EDX));
  /* 11f01438 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0143b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0143e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01441 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f01444 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f01447 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f01449 je 0x11f0144f */
  if (C.zf) goto L_11f0144f;
  /* 11f0144b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0144d jmp 0x11f01480 */
  goto L_11f01480;
L_11f0144f:;
  /* 11f0144f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01452 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01455 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f01458 jmp 0x11f01463 */
  goto L_11f01463;
L_11f0145a:;
  /* 11f0145a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0145d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f01463:;
  /* 11f01463 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01467 jge 0x11f0147b */
  if ((C.sf==C.of)) goto L_11f0147b;
  /* 11f01469 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0146c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0146f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01473 je 0x11f01479 */
  if (C.zf) goto L_11f01479;
  /* 11f01475 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01477 jmp 0x11f01480 */
  goto L_11f01480;
L_11f01479:;
  /* 11f01479 jmp 0x11f0145a */
  goto L_11f0145a;
L_11f0147b:;
  /* 11f0147b mov eax, 1 */
  EAX = (0x1u);
L_11f01480:;
  /* 11f01480 mov esp, ebp */
  ESP = (EBP);
  /* 11f01482 pop ebp */
  EBP = (pop32());
  /* 11f01483 ret  */
  ESPCHK(0x11f01400u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11f01490 (168 bytes, 63 insns) */
void f_11f01490(void) {
  FTRACE(0x11f01490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01490 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01491 mov ebp, esp */
  EBP = (ESP);
  /* 11f01493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01496 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01499 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0149a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0149d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0149f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f014a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f014a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f014a8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f014ad jns 0x11f014b4 */
  if (!C.sf) goto L_11f014b4;
  /* 11f014af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f014b0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f014b3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f014b4:;
  /* 11f014b4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11f014b9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f014bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f014be mov edx, 1 */
  EDX = (0x1u);
  /* 11f014c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f014c6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f014c8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f014cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f014ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f014d1 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f014d4 push edx */
  push32((uint32_t)(EDX));
  /* 11f014d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f014d8 push eax */
  push32((uint32_t)(EAX));
  /* 11f014d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f014dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f014df mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f014e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f014e3 call 0x11f08e40 */
  push32(0x11f014e8u); f_11f08e40();
  /* 11f014e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f014eb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f014ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f014f1 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f014f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f014f7 jmp 0x11f01502 */
  goto L_11f01502;
L_11f014f9:;
  /* 11f014f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f014fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f014ff mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f01502:;
  /* 11f01502 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01506 jl 0x11f01531 */
  if ((C.sf!=C.of)) goto L_11f01531;
  /* 11f01508 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0150c je 0x11f01531 */
  if (C.zf) goto L_11f01531;
  /* 11f0150e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01511 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01514 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11f01517 push edx */
  push32((uint32_t)(EDX));
  /* 11f01518 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0151a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0151d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01520 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f01523 push edx */
  push32((uint32_t)(EDX));
  /* 11f01524 call 0x11f08e40 */
  push32(0x11f01529u); f_11f08e40();
  /* 11f01529 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0152c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0152f jmp 0x11f014f9 */
  goto L_11f014f9;
L_11f01531:;
  /* 11f01531 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f01534 mov esp, ebp */
  ESP = (EBP);
  /* 11f01536 pop ebp */
  EBP = (pop32());
  /* 11f01537 ret  */
  ESPCHK(0x11f01490u, _esp0);
  ESP += 4; return;
}

/* FUN_10011540 @ 0x11f01540 (219 bytes, 78 insns) */
void f_11f01540(void) {
  FTRACE(0x11f01540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01540 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01541 mov ebp, esp */
  EBP = (ESP);
  /* 11f01543 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01546 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11f0154d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01550 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f01556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01559 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0155c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0155f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01562 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f01563 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01566 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01568 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0156b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0156e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01571 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01577 jns 0x11f0157e */
  if (!C.sf) goto L_11f0157e;
  /* 11f01579 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f0157a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0157d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11f0157e:;
  /* 11f0157e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11f01583 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01585 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f01588 mov edx, 1 */
  EDX = (0x1u);
  /* 11f0158d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01590 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f01592 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f01595 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f01598 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0159b mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f0159e and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11f015a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f015a3 je 0x11f015cf */
  if (C.zf) goto L_11f015cf;
  /* 11f015a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f015a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f015ab push eax */
  push32((uint32_t)(EAX));
  /* 11f015ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f015af push ecx */
  push32((uint32_t)(ECX));
  /* 11f015b0 call 0x11f01400 */
  push32(0x11f015b5u); f_11f01400();
  /* 11f015b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f015b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f015ba jne 0x11f015cf */
  if (!C.zf) goto L_11f015cf;
  /* 11f015bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f015bf push edx */
  push32((uint32_t)(EDX));
  /* 11f015c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f015c3 push eax */
  push32((uint32_t)(EAX));
  /* 11f015c4 call 0x11f01490 */
  push32(0x11f015c9u); f_11f01490();
  /* 11f015c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f015cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f015cf:;
  /* 11f015cf or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f015d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f015d5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f015d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f015da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f015dd mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f015e0 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f015e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f015e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f015e8 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11f015eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f015ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f015f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f015f4 jmp 0x11f015ff */
  goto L_11f015ff;
L_11f015f6:;
  /* 11f015f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f015f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f015fc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f015ff:;
  /* 11f015ff cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01603 jge 0x11f01614 */
  if ((C.sf==C.of)) goto L_11f01614;
  /* 11f01605 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f01608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0160b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11f01612 jmp 0x11f015f6 */
  goto L_11f015f6;
L_11f01614:;
  /* 11f01614 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f01617 mov esp, ebp */
  ESP = (EBP);
  /* 11f01619 pop ebp */
  EBP = (pop32());
  /* 11f0161a ret  */
  ESPCHK(0x11f01540u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11f01620 (76 bytes, 28 insns) */
void f_11f01620(void) {
  FTRACE(0x11f01620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01620 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01621 mov ebp, esp */
  EBP = (ESP);
  /* 11f01623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0162c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0162f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f01632 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f01639 jmp 0x11f01644 */
  goto L_11f01644;
L_11f0163b:;
  /* 11f0163b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0163e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01641 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f01644:;
  /* 11f01644 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01648 jge 0x11f01668 */
  if ((C.sf==C.of)) goto L_11f01668;
  /* 11f0164a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0164d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01650 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f01652 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f01654 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01657 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0165a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0165d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01660 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01663 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f01666 jmp 0x11f0163b */
  goto L_11f0163b;
L_11f01668:;
  /* 11f01668 mov esp, ebp */
  ESP = (EBP);
  /* 11f0166a pop ebp */
  EBP = (pop32());
  /* 11f0166b ret  */
  ESPCHK(0x11f01620u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11f01670 (47 bytes, 17 insns) */
void f_11f01670(void) {
  FTRACE(0x11f01670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01670 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01671 mov ebp, esp */
  EBP = (ESP);
  /* 11f01673 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01674 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0167b jmp 0x11f01686 */
  goto L_11f01686;
L_11f0167d:;
  /* 11f0167d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01680 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01683 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f01686:;
  /* 11f01686 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0168a jge 0x11f0169b */
  if ((C.sf==C.of)) goto L_11f0169b;
  /* 11f0168c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0168f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01692 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11f01699 jmp 0x11f0167d */
  goto L_11f0167d;
L_11f0169b:;
  /* 11f0169b mov esp, ebp */
  ESP = (EBP);
  /* 11f0169d pop ebp */
  EBP = (pop32());
  /* 11f0169e ret  */
  ESPCHK(0x11f01670u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11f016a0 (55 bytes, 21 insns) */
void f_11f016a0(void) {
  FTRACE(0x11f016a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f016a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f016a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f016a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f016a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f016ab jmp 0x11f016b6 */
  goto L_11f016b6;
L_11f016ad:;
  /* 11f016ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f016b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f016b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f016b6:;
  /* 11f016b6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f016ba jge 0x11f016ce */
  if ((C.sf==C.of)) goto L_11f016ce;
  /* 11f016bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f016bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f016c2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f016c6 je 0x11f016cc */
  if (C.zf) goto L_11f016cc;
  /* 11f016c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f016ca jmp 0x11f016d3 */
  goto L_11f016d3;
L_11f016cc:;
  /* 11f016cc jmp 0x11f016ad */
  goto L_11f016ad;
L_11f016ce:;
  /* 11f016ce mov eax, 1 */
  EAX = (0x1u);
L_11f016d3:;
  /* 11f016d3 mov esp, ebp */
  ESP = (EBP);
  /* 11f016d5 pop ebp */
  EBP = (pop32());
  /* 11f016d6 ret  */
  ESPCHK(0x11f016a0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11f016e0 (236 bytes, 82 insns) */
void f_11f016e0(void) {
  FTRACE(0x11f016e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f016e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f016e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f016e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f016e6 push esi */
  push32((uint32_t)(ESI));
  /* 11f016e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f016ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f016eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f016ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f016f0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f016f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f016f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f016f9 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f016fe jns 0x11f01705 */
  if (!C.sf) goto L_11f01705;
  /* 11f01700 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f01701 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f01704 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f01705:;
  /* 11f01705 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f01708 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0170b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0170e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f01710 not edx */
  EDX = (~(EDX));
  /* 11f01712 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f01715 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0171c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f01723 jmp 0x11f0172e */
  goto L_11f0172e;
L_11f01725:;
  /* 11f01725 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01728 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0172b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f0172e:;
  /* 11f0172e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01732 jge 0x11f01781 */
  if ((C.sf==C.of)) goto L_11f01781;
  /* 11f01734 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0173a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f0173d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11f01740 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f01743 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01746 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01749 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f0174c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0174f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f01751 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01754 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01757 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11f0175a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0175d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01760 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f01763 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f01766 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0176c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11f0176f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11f01774 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01777 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0177a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f0177c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0177f jmp 0x11f01725 */
  goto L_11f01725;
L_11f01781:;
  /* 11f01781 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11f01788 jmp 0x11f01793 */
  goto L_11f01793;
L_11f0178a:;
  /* 11f0178a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0178d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01790 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f01793:;
  /* 11f01793 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01797 jl 0x11f017c7 */
  if ((C.sf!=C.of)) goto L_11f017c7;
  /* 11f01799 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0179c cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0179f jl 0x11f017b8 */
  if ((C.sf!=C.of)) goto L_11f017b8;
  /* 11f017a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f017a4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f017a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f017aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f017ad mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f017b0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11f017b3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11f017b6 jmp 0x11f017c5 */
  goto L_11f017c5;
L_11f017b8:;
  /* 11f017b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f017bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f017be mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11f017c5:;
  /* 11f017c5 jmp 0x11f0178a */
  goto L_11f0178a;
L_11f017c7:;
  /* 11f017c7 pop esi */
  ESI = (pop32());
  /* 11f017c8 mov esp, ebp */
  ESP = (EBP);
  /* 11f017ca pop ebp */
  EBP = (pop32());
  /* 11f017cb ret  */
  ESPCHK(0x11f016e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x11f017d0 (578 bytes, 188 insns) */
void f_11f017d0(void) {
  FTRACE(0x11f017d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f017d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f017d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f017d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f017d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f017d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f017db mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11f017df and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f017e5 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f017eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f017ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f017f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f017f3 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11f017f7 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f017fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f017ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01802 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11f01805 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f01808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0180b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11f0180e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f01811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01816 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f01819 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f0181c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0181f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01826 jne 0x11f01860 */
  if (!C.zf) goto L_11f01860;
  /* 11f01828 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0182f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11f01832 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01833 call 0x11f016a0 */
  push32(0x11f01838u); f_11f016a0();
  /* 11f01838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0183b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0183d je 0x11f01848 */
  if (C.zf) goto L_11f01848;
  /* 11f0183f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f01846 jmp 0x11f0185b */
  goto L_11f0185b;
L_11f01848:;
  /* 11f01848 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11f0184b push edx */
  push32((uint32_t)(EDX));
  /* 11f0184c call 0x11f01670 */
  push32(0x11f01851u); f_11f01670();
  /* 11f01851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01854 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11f0185b:;
  /* 11f0185b jmp 0x11f019ac */
  goto L_11f019ac;
L_11f01860:;
  /* 11f01860 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f01863 push eax */
  push32((uint32_t)(EAX));
  /* 11f01864 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11f01867 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01868 call 0x11f01620 */
  push32(0x11f0186du); f_11f01620();
  /* 11f0186d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01870 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01873 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f01876 push eax */
  push32((uint32_t)(EAX));
  /* 11f01877 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11f0187a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0187b call 0x11f01540 */
  push32(0x11f01880u); f_11f01540();
  /* 11f01880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f01885 je 0x11f01890 */
  if (C.zf) goto L_11f01890;
  /* 11f01887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0188a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0188d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f01890:;
  /* 11f01890 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01893 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01896 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f01899 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0189c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0189f jge 0x11f018c0 */
  if ((C.sf==C.of)) goto L_11f018c0;
  /* 11f018a1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f018a4 push eax */
  push32((uint32_t)(EAX));
  /* 11f018a5 call 0x11f01670 */
  push32(0x11f018aau); f_11f01670();
  /* 11f018aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f018ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f018b4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11f018bb jmp 0x11f019ac */
  goto L_11f019ac;
L_11f018c0:;
  /* 11f018c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f018c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f018c6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f018c9 jg 0x11f01930 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f01930;
  /* 11f018cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f018ce mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f018d1 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f018d4 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11f018d7 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11f018da push edx */
  push32((uint32_t)(EDX));
  /* 11f018db lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f018de push eax */
  push32((uint32_t)(EAX));
  /* 11f018df call 0x11f01620 */
  push32(0x11f018e4u); f_11f01620();
  /* 11f018e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f018e7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f018ea push ecx */
  push32((uint32_t)(ECX));
  /* 11f018eb lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11f018ee push edx */
  push32((uint32_t)(EDX));
  /* 11f018ef call 0x11f016e0 */
  push32(0x11f018f4u); f_11f016e0();
  /* 11f018f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f018f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f018fa mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f018fd push ecx */
  push32((uint32_t)(ECX));
  /* 11f018fe lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11f01901 push edx */
  push32((uint32_t)(EDX));
  /* 11f01902 call 0x11f01540 */
  push32(0x11f01907u); f_11f01540();
  /* 11f01907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0190a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0190d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f01910 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01913 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01914 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11f01917 push edx */
  push32((uint32_t)(EDX));
  /* 11f01918 call 0x11f016e0 */
  push32(0x11f0191du); f_11f016e0();
  /* 11f0191d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01920 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f01927 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11f0192e jmp 0x11f019ac */
  goto L_11f019ac;
L_11f01930:;
  /* 11f01930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01936 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01938 jl 0x11f0197b */
  if ((C.sf!=C.of)) goto L_11f0197b;
  /* 11f0193a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11f0193d push edx */
  push32((uint32_t)(EDX));
  /* 11f0193e call 0x11f01670 */
  push32(0x11f01943u); f_11f01670();
  /* 11f01943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01946 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f01949 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0194e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f01951 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01954 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f01957 push edx */
  push32((uint32_t)(EDX));
  /* 11f01958 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f0195b push eax */
  push32((uint32_t)(EAX));
  /* 11f0195c call 0x11f016e0 */
  push32(0x11f01961u); f_11f016e0();
  /* 11f01961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01964 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01967 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f01969 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0196c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0196f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f01972 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11f01979 jmp 0x11f019ac */
  goto L_11f019ac;
L_11f0197b:;
  /* 11f0197b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0197e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01981 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01984 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f01987 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0198a and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0198f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f01992 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01995 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f01998 push edx */
  push32((uint32_t)(EDX));
  /* 11f01999 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f0199c push eax */
  push32((uint32_t)(EAX));
  /* 11f0199d call 0x11f016e0 */
  push32(0x11f019a2u); f_11f016e0();
  /* 11f019a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f019a5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11f019ac:;
  /* 11f019ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f019af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f019b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f019b5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11f019ba sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f019bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f019bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f019c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f019c5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f019c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f019ca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f019cc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f019cf neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f019d1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f019d3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f019d9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f019db mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f019de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f019e1 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f019e5 jne 0x11f019fa */
  if (!C.zf) goto L_11f019fa;
  /* 11f019e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f019ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f019ed mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f019f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f019f3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f019f6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f019f8 jmp 0x11f01a0b */
  goto L_11f01a0b;
L_11f019fa:;
  /* 11f019fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f019fd cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01a01 jne 0x11f01a0b */
  if (!C.zf) goto L_11f01a0b;
  /* 11f01a03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01a06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f01a09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11f01a0b:;
  /* 11f01a0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f01a0e mov esp, ebp */
  ESP = (EBP);
  /* 11f01a10 pop ebp */
  EBP = (pop32());
  /* 11f01a11 ret  */
  ESPCHK(0x11f017d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a20 @ 0x11f01a20 (26 bytes, 11 insns) */
void f_11f01a20(void) {
  FTRACE(0x11f01a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01a21 mov ebp, esp */
  EBP = (ESP);
  /* 11f01a23 push 0x11f2e268 */
  push32((uint32_t)(0x11f2e268u));
  /* 11f01a28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01a2b push eax */
  push32((uint32_t)(EAX));
  /* 11f01a2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01a2f push ecx */
  push32((uint32_t)(ECX));
  /* 11f01a30 call 0x11f017d0 */
  push32(0x11f01a35u); f_11f017d0();
  /* 11f01a35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01a38 pop ebp */
  EBP = (pop32());
  /* 11f01a39 ret  */
  ESPCHK(0x11f01a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x11f01a40 (26 bytes, 11 insns) */
void f_11f01a40(void) {
  FTRACE(0x11f01a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01a41 mov ebp, esp */
  EBP = (ESP);
  /* 11f01a43 push 0x11f2e280 */
  push32((uint32_t)(0x11f2e280u));
  /* 11f01a48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01a4b push eax */
  push32((uint32_t)(EAX));
  /* 11f01a4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11f01a50 call 0x11f017d0 */
  push32(0x11f01a55u); f_11f017d0();
  /* 11f01a55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01a58 pop ebp */
  EBP = (pop32());
  /* 11f01a59 ret  */
  ESPCHK(0x11f01a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x11f01a60 (191 bytes, 58 insns) */
void f_11f01a60(void) {
  FTRACE(0x11f01a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01a61 mov ebp, esp */
  EBP = (ESP);
  /* 11f01a63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01a66 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11f01a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01a70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f01a72 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11f01a76 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f01a7c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11f01a80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01a85 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11f01a89 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f01a8e mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11f01a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01a95 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11f01a98 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f01a9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01a9e mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11f01aa1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f01aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01aa9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f01aac shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f01aaf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f01ab2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f01ab4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11f01ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01ab8 call 0x11f01540 */
  push32(0x11f01abdu); f_11f01540();
  /* 11f01abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f01ac2 je 0x11f01ad7 */
  if (C.zf) goto L_11f01ad7;
  /* 11f01ac4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11f01acb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f01acf add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f01ad3 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11f01ad7:;
  /* 11f01ad7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01ada and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f01adf cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01ae4 jne 0x11f01aed */
  if (!C.zf) goto L_11f01aed;
  /* 11f01ae6 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11f01aed:;
  /* 11f01aed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01af0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f01af3 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f01af6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01af9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01afc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f01afe mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f01b01 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01b0a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f01b0f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f01b11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01b14 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11f01b18 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f01b1b mov esp, ebp */
  ESP = (EBP);
  /* 11f01b1d pop ebp */
  EBP = (pop32());
  /* 11f01b1e ret  */
  ESPCHK(0x11f01a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x11f01b20 (54 bytes, 24 insns) */
void f_11f01b20(void) {
  FTRACE(0x11f01b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01b21 mov ebp, esp */
  EBP = (ESP);
  /* 11f01b23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01b31 push eax */
  push32((uint32_t)(EAX));
  /* 11f01b32 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11f01b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01b36 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f01b39 push edx */
  push32((uint32_t)(EDX));
  /* 11f01b3a call 0x11f09140 */
  push32(0x11f01b3fu); f_11f09140();
  /* 11f01b3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01b45 push eax */
  push32((uint32_t)(EAX));
  /* 11f01b46 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11f01b49 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01b4a call 0x11f01a20 */
  push32(0x11f01b4fu); f_11f01a20();
  /* 11f01b4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01b52 mov esp, ebp */
  ESP = (EBP);
  /* 11f01b54 pop ebp */
  EBP = (pop32());
  /* 11f01b55 ret  */
  ESPCHK(0x11f01b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x11f01b60 (54 bytes, 24 insns) */
void f_11f01b60(void) {
  FTRACE(0x11f01b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01b61 mov ebp, esp */
  EBP = (ESP);
  /* 11f01b63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f01b6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01b71 push eax */
  push32((uint32_t)(EAX));
  /* 11f01b72 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11f01b75 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01b76 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f01b79 push edx */
  push32((uint32_t)(EDX));
  /* 11f01b7a call 0x11f09140 */
  push32(0x11f01b7fu); f_11f09140();
  /* 11f01b7f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01b82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01b85 push eax */
  push32((uint32_t)(EAX));
  /* 11f01b86 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11f01b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01b8a call 0x11f01a60 */
  push32(0x11f01b8fu); f_11f01a60();
  /* 11f01b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01b92 mov esp, ebp */
  ESP = (EBP);
  /* 11f01b94 pop ebp */
  EBP = (pop32());
  /* 11f01b95 ret  */
  ESPCHK(0x11f01b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ba0 @ 0x11f01ba0 (54 bytes, 24 insns) */
void f_11f01ba0(void) {
  FTRACE(0x11f01ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11f01ba3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01baa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01bac push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01bae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01bb1 push eax */
  push32((uint32_t)(EAX));
  /* 11f01bb2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11f01bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01bb6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f01bb9 push edx */
  push32((uint32_t)(EDX));
  /* 11f01bba call 0x11f09140 */
  push32(0x11f01bbfu); f_11f09140();
  /* 11f01bbf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01bc5 push eax */
  push32((uint32_t)(EAX));
  /* 11f01bc6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11f01bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01bca call 0x11f01a40 */
  push32(0x11f01bcfu); f_11f01a40();
  /* 11f01bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01bd2 mov esp, ebp */
  ESP = (EBP);
  /* 11f01bd4 pop ebp */
  EBP = (pop32());
  /* 11f01bd5 ret  */
  ESPCHK(0x11f01ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011be0 @ 0x11f01be0 (250 bytes, 90 insns) */
void f_11f01be0(void) {
  FTRACE(0x11f01be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01be1 mov ebp, esp */
  EBP = (ESP);
  /* 11f01be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01be9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f01bec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01bef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f01bf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f01bf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01bf8 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11f01bfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01bfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01c01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f01c04:;
  /* 11f01c04 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01c08 jle 0x11f01c4b */
  if ((C.zf||C.sf!=C.of)) goto L_11f01c4b;
  /* 11f01c0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01c0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f01c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f01c12 je 0x11f01c28 */
  if (C.zf) goto L_11f01c28;
  /* 11f01c14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01c17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f01c1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f01c1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01c20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01c23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f01c26 jmp 0x11f01c2f */
  goto L_11f01c2f;
L_11f01c28:;
  /* 11f01c28 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11f01c2f:;
  /* 11f01c2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c32 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f01c35 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11f01c37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01c3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f01c40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01c43 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01c46 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f01c49 jmp 0x11f01c04 */
  goto L_11f01c04;
L_11f01c4b:;
  /* 11f01c4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c4e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11f01c51 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01c55 jl 0x11f01c94 */
  if ((C.sf!=C.of)) goto L_11f01c94;
  /* 11f01c57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01c5a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f01c5d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01c60 jl 0x11f01c94 */
  if ((C.sf!=C.of)) goto L_11f01c94;
  /* 11f01c62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c65 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01c68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f01c6b:;
  /* 11f01c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c6e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f01c71 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01c74 jne 0x11f01c87 */
  if (!C.zf) goto L_11f01c87;
  /* 11f01c76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c79 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11f01c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c7f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01c82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f01c85 jmp 0x11f01c6b */
  goto L_11f01c6b;
L_11f01c87:;
  /* 11f01c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c8a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f01c8c add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f01c8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01c92 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11f01c94:;
  /* 11f01c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01c97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f01c9a cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01c9d jne 0x11f01cb0 */
  if (!C.zf) goto L_11f01cb0;
  /* 11f01c9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01ca2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f01ca5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01ca8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01cab mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f01cae jmp 0x11f01cd6 */
  goto L_11f01cd6;
L_11f01cb0:;
  /* 11f01cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01cb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11f01cb7 call 0x11f00050 */
  push32(0x11f01cbcu); f_11f00050();
  /* 11f01cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01cbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01cc2 push eax */
  push32((uint32_t)(EAX));
  /* 11f01cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01cc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f01cca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01ccd push edx */
  push32((uint32_t)(EDX));
  /* 11f01cce call 0x11f01f30 */
  push32(0x11f01cd3u); f_11f01f30();
  /* 11f01cd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f01cd6:;
  /* 11f01cd6 mov esp, ebp */
  ESP = (EBP);
  /* 11f01cd8 pop ebp */
  EBP = (pop32());
  /* 11f01cd9 ret  */
  ESPCHK(0x11f01be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ce0 @ 0x11f01ce0 (119 bytes, 44 insns) */
void f_11f01ce0(void) {
  FTRACE(0x11f01ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11f01ce3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01ce6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f01ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11f01cea lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11f01ced push ecx */
  push32((uint32_t)(ECX));
  /* 11f01cee call 0x11f01d60 */
  push32(0x11f01cf3u); f_11f01d60();
  /* 11f01cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01cf6 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11f01cf9 push edx */
  push32((uint32_t)(EDX));
  /* 11f01cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f01cfc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f01cfe sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01d01 mov eax, esp */
  EAX = (ESP);
  /* 11f01d03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01d06 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f01d08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01d0b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f01d0e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f01d12 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11f01d16 call 0x11f09cc0 */
  push32(0x11f01d1bu); f_11f09cc0();
  /* 11f01d1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01d1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01d21 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f01d24 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11f01d28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01d2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f01d2d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11f01d31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01d34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f01d37 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11f01d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11f01d3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f01d3e push edx */
  push32((uint32_t)(EDX));
  /* 11f01d3f call 0x11f001d0 */
  push32(0x11f01d44u); f_11f001d0();
  /* 11f01d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01d47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01d4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f01d4d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11f01d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01d53 mov esp, ebp */
  ESP = (EBP);
  /* 11f01d55 pop ebp */
  EBP = (pop32());
  /* 11f01d56 ret  */
  ESPCHK(0x11f01ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x11f01d60 (354 bytes, 104 insns) */
void f_11f01d60(void) {
  FTRACE(0x11f01d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01d61 mov ebp, esp */
  EBP = (ESP);
  /* 11f01d63 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01d66 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11f01d6d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f01d73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01d76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f01d78 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11f01d7c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01d82 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f01d85 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11f01d89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01d8e mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11f01d92 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f01d97 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11f01d9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01d9e mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f01da1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01da7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f01daa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01dad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f01daf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f01db2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f01db5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f01dbb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f01dbe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01dc2 je 0x11f01dd7 */
  if (C.zf) goto L_11f01dd7;
  /* 11f01dc4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01dcb je 0x11f01dcf */
  if (C.zf) goto L_11f01dcf;
  /* 11f01dcd jmp 0x11f01e1a */
  goto L_11f01e1a;
L_11f01dcf:;
  /* 11f01dcf mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11f01dd5 jmp 0x11f01e35 */
  goto L_11f01e35;
L_11f01dd7:;
  /* 11f01dd7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01ddb jne 0x11f01e04 */
  if (!C.zf) goto L_11f01e04;
  /* 11f01ddd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01de1 jne 0x11f01e04 */
  if (!C.zf) goto L_11f01e04;
  /* 11f01de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01de6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f01ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01df0 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11f01df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01df9 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11f01dff jmp 0x11f01ebe */
  goto L_11f01ebe;
L_11f01e04:;
  /* 11f01e04 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11f01e08 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01e0d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f01e11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f01e18 jmp 0x11f01e35 */
  goto L_11f01e35;
L_11f01e1a:;
  /* 11f01e1a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11f01e1e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f01e23 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11f01e27 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11f01e2b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01e31 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11f01e35:;
  /* 11f01e35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f01e38 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11f01e3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f01e3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f01e40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f01e43 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11f01e46 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f01e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e4b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f01e4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f01e51 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11f01e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e57 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f01e59:;
  /* 11f01e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e5c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f01e5f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01e65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f01e67 jne 0x11f01ea4 */
  if (!C.zf) goto L_11f01ea4;
  /* 11f01e69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e6c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f01e6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f01e71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f01e76 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f01e7c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f01e7e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01e80 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f01e82 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e87 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f01e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f01e8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f01e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01e94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f01e96 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f01e9a sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f01e9e mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11f01ea2 jmp 0x11f01e59 */
  goto L_11f01e59;
L_11f01ea4:;
  /* 11f01ea4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f01ea7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f01eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f01eaf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f01eb5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01eb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01eba mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11f01ebe:;
  /* 11f01ebe mov esp, ebp */
  ESP = (EBP);
  /* 11f01ec0 pop ebp */
  EBP = (pop32());
  /* 11f01ec1 ret  */
  ESPCHK(0x11f01d60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11f01ed0 (88 bytes, 40 insns) */
void f_11f01ed0(void) {
  FTRACE(0x11f01ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01ed0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f01ed4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f01ed8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f01eda je 0x11f01f23 */
  if (C.zf) goto L_11f01f23;
  /* 11f01edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f01ede mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f01ee2 push edi */
  push32((uint32_t)(EDI));
  /* 11f01ee3 mov edi, ecx */
  EDI = (ECX);
  /* 11f01ee5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01ee8 jb 0x11f01f17 */
  if (C.cf) goto L_11f01f17;
  /* 11f01eea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f01eec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f01eef je 0x11f01ef9 */
  if (C.zf) goto L_11f01ef9;
  /* 11f01ef1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f01ef3:;
  /* 11f01ef3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f01ef5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f01ef6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f01ef7 jne 0x11f01ef3 */
  if (!C.zf) goto L_11f01ef3;
L_11f01ef9:;
  /* 11f01ef9 mov ecx, eax */
  ECX = (EAX);
  /* 11f01efb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f01efe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01f00 mov ecx, eax */
  ECX = (EAX);
  /* 11f01f02 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f01f05 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01f07 mov ecx, edx */
  ECX = (EDX);
  /* 11f01f09 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f01f0c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f01f0f je 0x11f01f17 */
  if (C.zf) goto L_11f01f17;
  /* 11f01f11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f01f13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f01f15 je 0x11f01f1d */
  if (C.zf) goto L_11f01f1d;
L_11f01f17:;
  /* 11f01f17 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f01f19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f01f1a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f01f1b jne 0x11f01f17 */
  if (!C.zf) goto L_11f01f17;
L_11f01f1d:;
  /* 11f01f1d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f01f21 pop edi */
  EDI = (pop32());
  /* 11f01f22 ret  */
  ESPCHK(0x11f01ed0u, _esp0);
  ESP += 4; return;
L_11f01f23:;
  /* 11f01f23 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f01f27 ret  */
  ESPCHK(0x11f01ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f30 @ 0x11f01f30 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11f01f30(void) {
  FTRACE(0x11f01f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f01f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f01f31 mov ebp, esp */
  EBP = (ESP);
  /* 11f01f33 push edi */
  push32((uint32_t)(EDI));
  /* 11f01f34 push esi */
  push32((uint32_t)(ESI));
  /* 11f01f35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f01f38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f01f3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f01f3e mov eax, ecx */
  EAX = (ECX);
  /* 11f01f40 mov edx, ecx */
  EDX = (ECX);
  /* 11f01f42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01f44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01f46 jbe 0x11f01f50 */
  if ((C.cf||C.zf)) goto L_11f01f50;
  /* 11f01f48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01f4a jb 0x11f020c8 */
  if (C.cf) goto L_11f020c8;
L_11f01f50:;
  /* 11f01f50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f01f56 jne 0x11f01f6c */
  if (!C.zf) goto L_11f01f6c;
  /* 11f01f58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f01f5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f01f5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01f61 jb 0x11f01f8c */
  if (C.cf) goto L_11f01f8c;
  /* 11f01f63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f01f65 jmp dword ptr [edx*4 + 0x11f02078] */
  switch (EDX) {
    case 0: goto L_11f02088;
    case 1: goto L_11f02090;
    case 2: goto L_11f0209c;
    case 3: goto L_11f020b0;
    default: x86_unimpl("switch@0x11f01f65 out of table"); return;
  }
L_11f01f6c:;
  /* 11f01f6c mov eax, edi */
  EAX = (EDI);
  /* 11f01f6e mov edx, 3 */
  EDX = (0x3u);
  /* 11f01f73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f01f76 jb 0x11f01f84 */
  if (C.cf) goto L_11f01f84;
  /* 11f01f78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f01f7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01f7d jmp dword ptr [eax*4 + 0x11f01f90] */
  switch (EAX) {
    case 1: goto L_11f01fa0;
    case 2: goto L_11f01fcc;
    case 3: goto L_11f01ff0;
    default: x86_unimpl("switch@0x11f01f7d out of table"); return;
  }
L_11f01f84:;
  /* 11f01f84 jmp dword ptr [ecx*4 + 0x11f02088] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f02088)))); return;
  /* 11f01f8b nop  */
  /* nop */
L_11f01f8c:;
  /* 11f01f8c jmp dword ptr [ecx*4 + 0x11f0200c] */
  switch (ECX) {
    case 0: goto L_11f0206f;
    case 1: goto L_11f0205c;
    case 2: goto L_11f02054;
    case 3: goto L_11f0204c;
    case 4: goto L_11f02044;
    case 5: goto L_11f0203c;
    case 6: goto L_11f02034;
    case 7: goto L_11f0202c;
    default: x86_unimpl("switch@0x11f01f8c out of table"); return;
  }
  /* 11f01f93 nop  */
  /* nop */
L_11f01fa0:;
  /* 11f01fa0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f01fa2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f01fa4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f01fa6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f01fa9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f01fac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f01faf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f01fb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f01fb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01fb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01fbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01fbe jb 0x11f01f8c */
  if (C.cf) goto L_11f01f8c;
  /* 11f01fc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f01fc2 jmp dword ptr [edx*4 + 0x11f02078] */
  switch (EDX) {
    case 0: goto L_11f02088;
    case 1: goto L_11f02090;
    case 2: goto L_11f0209c;
    case 3: goto L_11f020b0;
    default: x86_unimpl("switch@0x11f01fc2 out of table"); return;
  }
  /* 11f01fc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f01fcc:;
  /* 11f01fcc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f01fce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f01fd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f01fd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f01fd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f01fd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f01fdb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01fde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f01fe1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01fe4 jb 0x11f01f8c */
  if (C.cf) goto L_11f01f8c;
  /* 11f01fe6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f01fe8 jmp dword ptr [edx*4 + 0x11f02078] */
  switch (EDX) {
    case 0: goto L_11f02088;
    case 1: goto L_11f02090;
    case 2: goto L_11f0209c;
    case 3: goto L_11f020b0;
    default: x86_unimpl("switch@0x11f01fe8 out of table"); return;
  }
  /* 11f01fef nop  */
  /* nop */
L_11f01ff0:;
  /* 11f01ff0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f01ff2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f01ff4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f01ff6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f01ff7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f01ffa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f01ffb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f01ffe jb 0x11f01f8c */
  if (C.cf) goto L_11f01f8c;
  /* 11f02000 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f02002 jmp dword ptr [edx*4 + 0x11f02078] */
  switch (EDX) {
    case 0: goto L_11f02088;
    case 1: goto L_11f02090;
    case 2: goto L_11f0209c;
    case 3: goto L_11f020b0;
    default: x86_unimpl("switch@0x11f02002 out of table"); return;
  }
  /* 11f02009 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f0202c:;
  /* 11f0202c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f02030 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f02034:;
  /* 11f02034 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f02038 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f0203c:;
  /* 11f0203c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f02040 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f02044:;
  /* 11f02044 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f02048 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f0204c:;
  /* 11f0204c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f02050 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f02054:;
  /* 11f02054 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f02058 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f0205c:;
  /* 11f0205c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f02060 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f02064 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f0206b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0206d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f0206f:;
  /* 11f0206f jmp dword ptr [edx*4 + 0x11f02078] */
  switch (EDX) {
    case 0: goto L_11f02088;
    case 1: goto L_11f02090;
    case 2: goto L_11f0209c;
    case 3: goto L_11f020b0;
    default: x86_unimpl("switch@0x11f0206f out of table"); return;
  }
  /* 11f02076 mov edi, edi */
  EDI = (EDI);
L_11f02088:;
  /* 11f02088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0208b pop esi */
  ESI = (pop32());
  /* 11f0208c pop edi */
  EDI = (pop32());
  /* 11f0208d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0208e ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f0208f nop  */
  /* nop */
L_11f02090:;
  /* 11f02090 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f02092 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f02094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02097 pop esi */
  ESI = (pop32());
  /* 11f02098 pop edi */
  EDI = (pop32());
  /* 11f02099 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0209a ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f0209b nop  */
  /* nop */
L_11f0209c:;
  /* 11f0209c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f0209e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f020a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f020a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f020a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f020a9 pop esi */
  ESI = (pop32());
  /* 11f020aa pop edi */
  EDI = (pop32());
  /* 11f020ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f020ac ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f020ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f020b0:;
  /* 11f020b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f020b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f020b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f020b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f020ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f020bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f020c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f020c3 pop esi */
  ESI = (pop32());
  /* 11f020c4 pop edi */
  EDI = (pop32());
  /* 11f020c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f020c6 ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f020c7 nop  */
  /* nop */
L_11f020c8:;
  /* 11f020c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f020cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f020d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f020d6 jne 0x11f020fc */
  if (!C.zf) goto L_11f020fc;
  /* 11f020d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f020db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f020de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f020e1 jb 0x11f020f0 */
  if (C.cf) goto L_11f020f0;
  /* 11f020e3 std  */
  C.df=1;
  /* 11f020e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f020e6 cld  */
  C.df=0;
  /* 11f020e7 jmp dword ptr [edx*4 + 0x11f02210] */
  switch (EDX) {
    case 0: goto L_11f02220;
    case 1: goto L_11f02228;
    case 2: goto L_11f02238;
    case 3: goto L_11f0224c;
    default: x86_unimpl("switch@0x11f020e7 out of table"); return;
  }
  /* 11f020ee mov edi, edi */
  EDI = (EDI);
L_11f020f0:;
  /* 11f020f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f020f2 jmp dword ptr [ecx*4 + 0x11f021c0] */
  switch (ECX) {
    case 0: goto L_11f02207;
    default: x86_unimpl("switch@0x11f020f2 out of table"); return;
  }
  /* 11f020f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f020fc:;
  /* 11f020fc mov eax, edi */
  EAX = (EDI);
  /* 11f020fe mov edx, 3 */
  EDX = (0x3u);
  /* 11f02103 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02106 jb 0x11f02114 */
  if (C.cf) goto L_11f02114;
  /* 11f02108 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0210b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0210d jmp dword ptr [eax*4 + 0x11f02118] */
  switch (EAX) {
    case 1: goto L_11f02128;
    case 2: goto L_11f02148;
    case 3: goto L_11f02170;
    default: x86_unimpl("switch@0x11f0210d out of table"); return;
  }
L_11f02114:;
  /* 11f02114 jmp dword ptr [ecx*4 + 0x11f02210] */
  switch (ECX) {
    case 0: goto L_11f02220;
    case 1: goto L_11f02228;
    case 2: goto L_11f02238;
    case 3: goto L_11f0224c;
    default: x86_unimpl("switch@0x11f02114 out of table"); return;
  }
  /* 11f0211b nop  */
  /* nop */
L_11f02128:;
  /* 11f02128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f0212b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0212d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f02130 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f02131 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f02134 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f02135 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02138 jb 0x11f020f0 */
  if (C.cf) goto L_11f020f0;
  /* 11f0213a std  */
  C.df=1;
  /* 11f0213b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f0213d cld  */
  C.df=0;
  /* 11f0213e jmp dword ptr [edx*4 + 0x11f02210] */
  switch (EDX) {
    case 0: goto L_11f02220;
    case 1: goto L_11f02228;
    case 2: goto L_11f02238;
    case 3: goto L_11f0224c;
    default: x86_unimpl("switch@0x11f0213e out of table"); return;
  }
  /* 11f02145 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f02148:;
  /* 11f02148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f0214b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0214d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f02150 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f02153 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f02156 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f02159 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0215c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0215f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02162 jb 0x11f020f0 */
  if (C.cf) goto L_11f020f0;
  /* 11f02164 std  */
  C.df=1;
  /* 11f02165 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f02167 cld  */
  C.df=0;
  /* 11f02168 jmp dword ptr [edx*4 + 0x11f02210] */
  switch (EDX) {
    case 0: goto L_11f02220;
    case 1: goto L_11f02228;
    case 2: goto L_11f02238;
    case 3: goto L_11f0224c;
    default: x86_unimpl("switch@0x11f02168 out of table"); return;
  }
  /* 11f0216f nop  */
  /* nop */
L_11f02170:;
  /* 11f02170 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f02173 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f02175 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f02178 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f0217b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f0217e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f02181 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f02184 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f02187 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0218a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0218d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02190 jb 0x11f020f0 */
  if (C.cf) goto L_11f020f0;
  /* 11f02196 std  */
  C.df=1;
  /* 11f02197 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f02199 cld  */
  C.df=0;
  /* 11f0219a jmp dword ptr [edx*4 + 0x11f02210] */
  switch (EDX) {
    case 0: goto L_11f02220;
    case 1: goto L_11f02228;
    case 2: goto L_11f02238;
    case 3: goto L_11f0224c;
    default: x86_unimpl("switch@0x11f0219a out of table"); return;
  }
  /* 11f021a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f021a4 les esp, ptr [ecx] */
  x86_unimpl("les @ 0x11f021a4");
  /* 11f021a7 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f021a9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f021ab adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f021ad and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f021af adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f021b1 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f021b3 adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f021b5 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f021b7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f021b9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f021bb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f021bd and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f021c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f021c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f021cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f021d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f021d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f021d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f021dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f021e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f021e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f021e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f021ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f021f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f021f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f021f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f021fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f02203 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02205 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f02207:;
  /* 11f02207 jmp dword ptr [edx*4 + 0x11f02210] */
  switch (EDX) {
    case 0: goto L_11f02220;
    case 1: goto L_11f02228;
    case 2: goto L_11f02238;
    case 3: goto L_11f0224c;
    default: x86_unimpl("switch@0x11f02207 out of table"); return;
  }
  /* 11f0220e mov edi, edi */
  EDI = (EDI);
L_11f02220:;
  /* 11f02220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02223 pop esi */
  ESI = (pop32());
  /* 11f02224 pop edi */
  EDI = (pop32());
  /* 11f02225 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f02226 ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f02227 nop  */
  /* nop */
L_11f02228:;
  /* 11f02228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f0222b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f0222e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02231 pop esi */
  ESI = (pop32());
  /* 11f02232 pop edi */
  EDI = (pop32());
  /* 11f02233 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f02234 ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f02235 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f02238:;
  /* 11f02238 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f0223b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f0223e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f02241 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f02244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02247 pop esi */
  ESI = (pop32());
  /* 11f02248 pop edi */
  EDI = (pop32());
  /* 11f02249 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0224a ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
  /* 11f0224b nop  */
  /* nop */
L_11f0224c:;
  /* 11f0224c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f0224f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f02252 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f02255 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f02258 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f0225b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f0225e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02261 pop esi */
  ESI = (pop32());
  /* 11f02262 pop edi */
  EDI = (pop32());
  /* 11f02263 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f02264 ret  */
  ESPCHK(0x11f01f30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11f02270 (15 bytes, 7 insns) */
void f_11f02270(void) {
  FTRACE(0x11f02270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02270 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02271 mov ebp, esp */
  EBP = (ESP);
  /* 11f02273 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f02275 call 0x11efa530 */
  push32(0x11f0227au); f_11efa530();
  /* 11f0227a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0227d pop ebp */
  EBP = (pop32());
  /* 11f0227e ret  */
  ESPCHK(0x11f02270u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11f02280 (48 bytes, 17 insns) */
void f_11f02280(void) {
  FTRACE(0x11f02280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02280 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02281 mov ebp, esp */
  EBP = (ESP);
  /* 11f02283 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02284 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02286 call 0x11efb9c0 */
  push32(0x11f0228bu); f_11efb9c0();
  /* 11f0228b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0228e mov eax, dword ptr [0x11f308e4] */
  EAX = (r32((uint32_t)(0x11f308e4)));
  /* 11f02293 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f02296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02299 mov dword ptr [0x11f308e4], ecx */
  w32((uint32_t)(0x11f308e4), (ECX));
  /* 11f0229f push 9 */
  push32((uint32_t)(0x9u));
  /* 11f022a1 call 0x11efba60 */
  push32(0x11f022a6u); f_11efba60();
  /* 11f022a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f022a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f022ac mov esp, ebp */
  ESP = (EBP);
  /* 11f022ae pop ebp */
  EBP = (pop32());
  /* 11f022af ret  */
  ESPCHK(0x11f02280u, _esp0);
  ESP += 4; return;
}

/* FUN_100122b0 @ 0x11f022b0 (10 bytes, 5 insns) */
void f_11f022b0(void) {
  FTRACE(0x11f022b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f022b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f022b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f022b3 mov eax, dword ptr [0x11f308e4] */
  EAX = (r32((uint32_t)(0x11f308e4)));
  /* 11f022b8 pop ebp */
  EBP = (pop32());
  /* 11f022b9 ret  */
  ESPCHK(0x11f022b0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11f022c0 (45 bytes, 19 insns) */
void f_11f022c0(void) {
  FTRACE(0x11f022c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f022c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f022c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f022c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f022c4 mov eax, dword ptr [0x11f308e4] */
  EAX = (r32((uint32_t)(0x11f308e4)));
  /* 11f022c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f022cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f022d0 je 0x11f022e0 */
  if (C.zf) goto L_11f022e0;
  /* 11f022d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f022d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f022d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11f022d9u);
  /* 11f022d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f022dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f022de jne 0x11f022e4 */
  if (!C.zf) goto L_11f022e4;
L_11f022e0:;
  /* 11f022e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f022e2 jmp 0x11f022e9 */
  goto L_11f022e9;
L_11f022e4:;
  /* 11f022e4 mov eax, 1 */
  EAX = (0x1u);
L_11f022e9:;
  /* 11f022e9 mov esp, ebp */
  ESP = (EBP);
  /* 11f022eb pop ebp */
  EBP = (pop32());
  /* 11f022ec ret  */
  ESPCHK(0x11f022c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122f0 @ 0x11f022f0 (23 bytes, 10 insns) */
void f_11f022f0(void) {
  FTRACE(0x11f022f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f022f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f022f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f022f3 mov eax, dword ptr [0x11f308e0] */
  EAX = (r32((uint32_t)(0x11f308e0)));
  /* 11f022f8 push eax */
  push32((uint32_t)(EAX));
  /* 11f022f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f022fc push ecx */
  push32((uint32_t)(ECX));
  /* 11f022fd call 0x11f02310 */
  push32(0x11f02302u); f_11f02310();
  /* 11f02302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02305 pop ebp */
  EBP = (pop32());
  /* 11f02306 ret  */
  ESPCHK(0x11f022f0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11f02310 (87 bytes, 34 insns) */
void f_11f02310(void) {
  FTRACE(0x11f02310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02310 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02311 mov ebp, esp */
  EBP = (ESP);
  /* 11f02313 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02314 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02318 jbe 0x11f0231e */
  if ((C.cf||C.zf)) goto L_11f0231e;
  /* 11f0231a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0231c jmp 0x11f02363 */
  goto L_11f02363;
L_11f0231e:;
  /* 11f0231e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02322 ja 0x11f02335 */
  if ((!C.cf&&!C.zf)) goto L_11f02335;
  /* 11f02324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02327 push eax */
  push32((uint32_t)(EAX));
  /* 11f02328 call 0x11f02370 */
  push32(0x11f0232du); f_11f02370();
  /* 11f0232d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02330 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f02333 jmp 0x11f0233c */
  goto L_11f0233c;
L_11f02335:;
  /* 11f02335 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f0233c:;
  /* 11f0233c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02340 jne 0x11f02348 */
  if (!C.zf) goto L_11f02348;
  /* 11f02342 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02346 jne 0x11f0234d */
  if (!C.zf) goto L_11f0234d;
L_11f02348:;
  /* 11f02348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0234b jmp 0x11f02363 */
  goto L_11f02363;
L_11f0234d:;
  /* 11f0234d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02350 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02351 call 0x11f022c0 */
  push32(0x11f02356u); f_11f022c0();
  /* 11f02356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0235b jne 0x11f02361 */
  if (!C.zf) goto L_11f02361;
  /* 11f0235d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0235f jmp 0x11f02363 */
  goto L_11f02363;
L_11f02361:;
  /* 11f02361 jmp 0x11f0231e */
  goto L_11f0231e;
L_11f02363:;
  /* 11f02363 mov esp, ebp */
  ESP = (EBP);
  /* 11f02365 pop ebp */
  EBP = (pop32());
  /* 11f02366 ret  */
  ESPCHK(0x11f02310u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x11f02370 (109 bytes, 37 insns) */
void f_11f02370(void) {
  FTRACE(0x11f02370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02370 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02371 mov ebp, esp */
  EBP = (ESP);
  /* 11f02373 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02377 cmp eax, dword ptr [0x11f2e2a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e2a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0237d ja 0x11f023ad */
  if ((!C.cf&&!C.zf)) goto L_11f023ad;
  /* 11f0237f push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02381 call 0x11efb9c0 */
  push32(0x11f02386u); f_11efb9c0();
  /* 11f02386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0238c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0238d call 0x11f02eb0 */
  push32(0x11f02392u); f_11f02eb0();
  /* 11f02392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02395 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f02398 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f0239a call 0x11efba60 */
  push32(0x11f0239fu); f_11efba60();
  /* 11f0239f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f023a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f023a6 je 0x11f023ad */
  if (C.zf) goto L_11f023ad;
  /* 11f023a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f023ab jmp 0x11f023d9 */
  goto L_11f023d9;
L_11f023ad:;
  /* 11f023ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f023b1 jne 0x11f023ba */
  if (!C.zf) goto L_11f023ba;
  /* 11f023b3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11f023ba:;
  /* 11f023ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f023bd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f023c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f023c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f023c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f023c9 push eax */
  push32((uint32_t)(EAX));
  /* 11f023ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f023cc mov ecx, dword ptr [0x11f3208c] */
  ECX = (r32((uint32_t)(0x11f3208c)));
  /* 11f023d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f023d3 call dword ptr [0x11f33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33390))), 0x11f023d9u);
L_11f023d9:;
  /* 11f023d9 mov esp, ebp */
  ESP = (EBP);
  /* 11f023db pop ebp */
  EBP = (pop32());
  /* 11f023dc ret  */
  ESPCHK(0x11f02370u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x11f023e0 (10 bytes, 5 insns) */
void f_11f023e0(void) {
  FTRACE(0x11f023e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f023e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f023e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f023e3 mov eax, 1 */
  EAX = (0x1u);
  /* 11f023e8 pop ebp */
  EBP = (pop32());
  /* 11f023e9 ret  */
  ESPCHK(0x11f023e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123f0 @ 0x11f023f0 (173 bytes, 59 insns) */
void f_11f023f0(void) {
  FTRACE(0x11f023f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f023f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f023f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f023f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f023f6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f023fa jbe 0x11f02403 */
  if ((C.cf||C.zf)) goto L_11f02403;
  /* 11f023fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f023fe jmp 0x11f02499 */
  goto L_11f02499;
L_11f02403:;
  /* 11f02403 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02405 call 0x11efb9c0 */
  push32(0x11f0240au); f_11efb9c0();
  /* 11f0240a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0240d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02410 push eax */
  push32((uint32_t)(EAX));
  /* 11f02411 call 0x11f02820 */
  push32(0x11f02416u); f_11f02820();
  /* 11f02416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02419 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0241c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02420 je 0x11f02461 */
  if (C.zf) goto L_11f02461;
  /* 11f02422 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f02429 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0242c cmp ecx, dword ptr [0x11f2e2a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e2a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02432 ja 0x11f02452 */
  if ((!C.cf&&!C.zf)) goto L_11f02452;
  /* 11f02434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02437 push edx */
  push32((uint32_t)(EDX));
  /* 11f02438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0243b push eax */
  push32((uint32_t)(EAX));
  /* 11f0243c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0243f push ecx */
  push32((uint32_t)(ECX));
  /* 11f02440 call 0x11f036f0 */
  push32(0x11f02445u); f_11f036f0();
  /* 11f02445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0244a je 0x11f02452 */
  if (C.zf) goto L_11f02452;
  /* 11f0244c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0244f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f02452:;
  /* 11f02452 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02454 call 0x11efba60 */
  push32(0x11f02459u); f_11efba60();
  /* 11f02459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0245c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0245f jmp 0x11f02499 */
  goto L_11f02499;
L_11f02461:;
  /* 11f02461 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02463 call 0x11efba60 */
  push32(0x11f02468u); f_11efba60();
  /* 11f02468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0246b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0246f jne 0x11f02478 */
  if (!C.zf) goto L_11f02478;
  /* 11f02471 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11f02478:;
  /* 11f02478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0247b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0247e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11f02480 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f02483 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02486 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0248a push edx */
  push32((uint32_t)(EDX));
  /* 11f0248b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f0248d mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11f02492 push eax */
  push32((uint32_t)(EAX));
  /* 11f02493 call dword ptr [0x11f3338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3338c))), 0x11f02499u);
L_11f02499:;
  /* 11f02499 mov esp, ebp */
  ESP = (EBP);
  /* 11f0249b pop ebp */
  EBP = (pop32());
  /* 11f0249c ret  */
  ESPCHK(0x11f023f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124a0 @ 0x11f024a0 (490 bytes, 165 insns) */
void f_11f024a0(void) {
  FTRACE(0x11f024a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f024a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f024a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f024a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f024a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f024aa jne 0x11f024bd */
  if (!C.zf) goto L_11f024bd;
  /* 11f024ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f024af push eax */
  push32((uint32_t)(EAX));
  /* 11f024b0 call 0x11f022f0 */
  push32(0x11f024b5u); f_11f022f0();
  /* 11f024b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f024b8 jmp 0x11f02686 */
  goto L_11f02686;
L_11f024bd:;
  /* 11f024bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f024c1 jne 0x11f024d6 */
  if (!C.zf) goto L_11f024d6;
  /* 11f024c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f024c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f024c7 call 0x11f02690 */
  push32(0x11f024ccu); f_11f02690();
  /* 11f024cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f024cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f024d1 jmp 0x11f02686 */
  goto L_11f02686;
L_11f024d6:;
  /* 11f024d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f024dd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f024e1 ja 0x11f02659 */
  if ((!C.cf&&!C.zf)) goto L_11f02659;
  /* 11f024e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f024e9 call 0x11efb9c0 */
  push32(0x11f024eeu); f_11efb9c0();
  /* 11f024ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f024f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f024f4 push edx */
  push32((uint32_t)(EDX));
  /* 11f024f5 call 0x11f02820 */
  push32(0x11f024fau); f_11f02820();
  /* 11f024fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f024fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f02500 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02504 je 0x11f0261c */
  if (C.zf) goto L_11f0261c;
  /* 11f0250a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0250d cmp eax, dword ptr [0x11f2e2a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e2a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02513 ja 0x11f02590 */
  if ((!C.cf&&!C.zf)) goto L_11f02590;
  /* 11f02515 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02518 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02519 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0251c push edx */
  push32((uint32_t)(EDX));
  /* 11f0251d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f02520 push eax */
  push32((uint32_t)(EAX));
  /* 11f02521 call 0x11f036f0 */
  push32(0x11f02526u); f_11f036f0();
  /* 11f02526 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0252b je 0x11f02535 */
  if (C.zf) goto L_11f02535;
  /* 11f0252d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02530 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f02533 jmp 0x11f02590 */
  goto L_11f02590;
L_11f02535:;
  /* 11f02535 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02538 push edx */
  push32((uint32_t)(EDX));
  /* 11f02539 call 0x11f02eb0 */
  push32(0x11f0253eu); f_11f02eb0();
  /* 11f0253e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02541 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f02544 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02548 je 0x11f02590 */
  if (C.zf) goto L_11f02590;
  /* 11f0254a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0254d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11f02550 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02553 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f02556 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02559 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0255c jae 0x11f02566 */
  if (!C.cf) goto L_11f02566;
  /* 11f0255e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02561 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f02564 jmp 0x11f0256c */
  goto L_11f0256c;
L_11f02566:;
  /* 11f02566 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02569 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f0256c:;
  /* 11f0256c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0256f push edx */
  push32((uint32_t)(EDX));
  /* 11f02570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02573 push eax */
  push32((uint32_t)(EAX));
  /* 11f02574 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02577 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02578 call 0x11f05b60 */
  push32(0x11f0257du); f_11f05b60();
  /* 11f0257d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02580 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02583 push edx */
  push32((uint32_t)(EDX));
  /* 11f02584 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f02587 push eax */
  push32((uint32_t)(EAX));
  /* 11f02588 call 0x11f028e0 */
  push32(0x11f0258du); f_11f028e0();
  /* 11f0258d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f02590:;
  /* 11f02590 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02594 jne 0x11f02610 */
  if (!C.zf) goto L_11f02610;
  /* 11f02596 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0259a jne 0x11f025a3 */
  if (!C.zf) goto L_11f025a3;
  /* 11f0259c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11f025a3:;
  /* 11f025a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f025a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f025a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f025ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f025af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f025b2 push edx */
  push32((uint32_t)(EDX));
  /* 11f025b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f025b5 mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11f025ba push eax */
  push32((uint32_t)(EAX));
  /* 11f025bb call dword ptr [0x11f33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33390))), 0x11f025c1u);
  /* 11f025c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f025c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f025c8 je 0x11f02610 */
  if (C.zf) goto L_11f02610;
  /* 11f025ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f025cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f025d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f025d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f025d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f025d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f025dc jae 0x11f025e6 */
  if (!C.cf) goto L_11f025e6;
  /* 11f025de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f025e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f025e4 jmp 0x11f025ec */
  goto L_11f025ec;
L_11f025e6:;
  /* 11f025e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f025e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11f025ec:;
  /* 11f025ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f025ef push eax */
  push32((uint32_t)(EAX));
  /* 11f025f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f025f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f025f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f025f7 push edx */
  push32((uint32_t)(EDX));
  /* 11f025f8 call 0x11f05b60 */
  push32(0x11f025fdu); f_11f05b60();
  /* 11f025fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02603 push eax */
  push32((uint32_t)(EAX));
  /* 11f02604 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f02607 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02608 call 0x11f028e0 */
  push32(0x11f0260du); f_11f028e0();
  /* 11f0260d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f02610:;
  /* 11f02610 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02612 call 0x11efba60 */
  push32(0x11f02617u); f_11efba60();
  /* 11f02617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0261a jmp 0x11f02659 */
  goto L_11f02659;
L_11f0261c:;
  /* 11f0261c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f0261e call 0x11efba60 */
  push32(0x11f02623u); f_11efba60();
  /* 11f02623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02626 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0262a jne 0x11f02633 */
  if (!C.zf) goto L_11f02633;
  /* 11f0262c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11f02633:;
  /* 11f02633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02636 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02639 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0263c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f0263f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02642 push eax */
  push32((uint32_t)(EAX));
  /* 11f02643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02646 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f02649 mov edx, dword ptr [0x11f3208c] */
  EDX = (r32((uint32_t)(0x11f3208c)));
  /* 11f0264f push edx */
  push32((uint32_t)(EDX));
  /* 11f02650 call dword ptr [0x11f3338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3338c))), 0x11f02656u);
  /* 11f02656 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f02659:;
  /* 11f02659 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0265d jne 0x11f02668 */
  if (!C.zf) goto L_11f02668;
  /* 11f0265f cmp dword ptr [0x11f308e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02666 jne 0x11f0266d */
  if (!C.zf) goto L_11f0266d;
L_11f02668:;
  /* 11f02668 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0266b jmp 0x11f02686 */
  goto L_11f02686;
L_11f0266d:;
  /* 11f0266d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f02670 push eax */
  push32((uint32_t)(EAX));
  /* 11f02671 call 0x11f022c0 */
  push32(0x11f02676u); f_11f022c0();
  /* 11f02676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0267b jne 0x11f02681 */
  if (!C.zf) goto L_11f02681;
  /* 11f0267d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0267f jmp 0x11f02686 */
  goto L_11f02686;
L_11f02681:;
  /* 11f02681 jmp 0x11f024d6 */
  goto L_11f024d6;
L_11f02686:;
  /* 11f02686 mov esp, ebp */
  ESP = (EBP);
  /* 11f02688 pop ebp */
  EBP = (pop32());
  /* 11f02689 ret  */
  ESPCHK(0x11f024a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x11f02690 (104 bytes, 38 insns) */
void f_11f02690(void) {
  FTRACE(0x11f02690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02690 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02691 mov ebp, esp */
  EBP = (ESP);
  /* 11f02693 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02694 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02698 jne 0x11f0269c */
  if (!C.zf) goto L_11f0269c;
  /* 11f0269a jmp 0x11f026f4 */
  goto L_11f026f4;
L_11f0269c:;
  /* 11f0269c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f0269e call 0x11efb9c0 */
  push32(0x11f026a3u); f_11efb9c0();
  /* 11f026a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f026a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f026a9 push eax */
  push32((uint32_t)(EAX));
  /* 11f026aa call 0x11f02820 */
  push32(0x11f026afu); f_11f02820();
  /* 11f026af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f026b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f026b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f026b9 je 0x11f026d7 */
  if (C.zf) goto L_11f026d7;
  /* 11f026bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f026be push ecx */
  push32((uint32_t)(ECX));
  /* 11f026bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f026c2 push edx */
  push32((uint32_t)(EDX));
  /* 11f026c3 call 0x11f028e0 */
  push32(0x11f026c8u); f_11f028e0();
  /* 11f026c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f026cb push 9 */
  push32((uint32_t)(0x9u));
  /* 11f026cd call 0x11efba60 */
  push32(0x11f026d2u); f_11efba60();
  /* 11f026d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f026d5 jmp 0x11f026f4 */
  goto L_11f026f4;
L_11f026d7:;
  /* 11f026d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f026d9 call 0x11efba60 */
  push32(0x11f026deu); f_11efba60();
  /* 11f026de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f026e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f026e4 push eax */
  push32((uint32_t)(EAX));
  /* 11f026e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f026e7 mov ecx, dword ptr [0x11f3208c] */
  ECX = (r32((uint32_t)(0x11f3208c)));
  /* 11f026ed push ecx */
  push32((uint32_t)(ECX));
  /* 11f026ee call dword ptr [0x11f3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3339c))), 0x11f026f4u);
L_11f026f4:;
  /* 11f026f4 mov esp, ebp */
  ESP = (EBP);
  /* 11f026f6 pop ebp */
  EBP = (pop32());
  /* 11f026f7 ret  */
  ESPCHK(0x11f02690u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x11f02700 (116 bytes, 34 insns) */
void f_11f02700(void) {
  FTRACE(0x11f02700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02700 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02701 mov ebp, esp */
  EBP = (ESP);
  /* 11f02703 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02704 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11f0270b push 9 */
  push32((uint32_t)(0x9u));
  /* 11f0270d call 0x11efb9c0 */
  push32(0x11f02712u); f_11efb9c0();
  /* 11f02712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02715 call 0x11f03e10 */
  push32(0x11f0271au); f_11f03e10();
  /* 11f0271a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0271c jge 0x11f02725 */
  if ((C.sf==C.of)) goto L_11f02725;
  /* 11f0271e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11f02725:;
  /* 11f02725 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f02727 call 0x11efba60 */
  push32(0x11f0272cu); f_11efba60();
  /* 11f0272c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0272f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f02731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f02733 mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11f02738 push eax */
  push32((uint32_t)(EAX));
  /* 11f02739 call dword ptr [0x11f333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333f0))), 0x11f0273fu);
  /* 11f0273f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f02741 jne 0x11f0276d */
  if (!C.zf) goto L_11f0276d;
  /* 11f02743 call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f02749u);
  /* 11f02749 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0274c jne 0x11f02766 */
  if (!C.zf) goto L_11f02766;
  /* 11f0274e call 0x11f07160 */
  push32(0x11f02753u); f_11f07160();
  /* 11f02753 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11f02759 call 0x11f07150 */
  push32(0x11f0275eu); f_11f07150();
  /* 11f0275e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11f02764 jmp 0x11f0276d */
  goto L_11f0276d;
L_11f02766:;
  /* 11f02766 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11f0276d:;
  /* 11f0276d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02770 mov esp, ebp */
  ESP = (EBP);
  /* 11f02772 pop ebp */
  EBP = (pop32());
  /* 11f02773 ret  */
  ESPCHK(0x11f02700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x11f02780 (10 bytes, 5 insns) */
void f_11f02780(void) {
  FTRACE(0x11f02780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02780 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02781 mov ebp, esp */
  EBP = (ESP);
  /* 11f02783 call 0x11f02700 */
  push32(0x11f02788u); f_11f02700();
  /* 11f02788 pop ebp */
  EBP = (pop32());
  /* 11f02789 ret  */
  ESPCHK(0x11f02780u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x11f02790 (10 bytes, 5 insns) */
void f_11f02790(void) {
  FTRACE(0x11f02790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02790 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02791 mov ebp, esp */
  EBP = (ESP);
  /* 11f02793 mov eax, dword ptr [0x11f2e2a4] */
  EAX = (r32((uint32_t)(0x11f2e2a4)));
  /* 11f02798 pop ebp */
  EBP = (pop32());
  /* 11f02799 ret  */
  ESPCHK(0x11f02790u, _esp0);
  ESP += 4; return;
}

/* FUN_100127a0 @ 0x11f027a0 (31 bytes, 11 insns) */
void f_11f027a0(void) {
  FTRACE(0x11f027a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f027a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f027a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f027a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f027aa jbe 0x11f027b0 */
  if ((C.cf||C.zf)) goto L_11f027b0;
  /* 11f027ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f027ae jmp 0x11f027bd */
  goto L_11f027bd;
L_11f027b0:;
  /* 11f027b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f027b3 mov dword ptr [0x11f2e2a4], eax */
  w32((uint32_t)(0x11f2e2a4), (EAX));
  /* 11f027b8 mov eax, 1 */
  EAX = (0x1u);
L_11f027bd:;
  /* 11f027bd pop ebp */
  EBP = (pop32());
  /* 11f027be ret  */
  ESPCHK(0x11f027a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127c0 @ 0x11f027c0 (89 bytes, 20 insns) */
void f_11f027c0(void) {
  FTRACE(0x11f027c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f027c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f027c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f027c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11f027c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f027ca mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11f027cf push eax */
  push32((uint32_t)(EAX));
  /* 11f027d0 call dword ptr [0x11f33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33390))), 0x11f027d6u);
  /* 11f027d6 mov dword ptr [0x11f32088], eax */
  w32((uint32_t)(0x11f32088), (EAX));
  /* 11f027db cmp dword ptr [0x11f32088], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f32088))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f027e2 jne 0x11f027e8 */
  if (!C.zf) goto L_11f027e8;
  /* 11f027e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f027e6 jmp 0x11f02817 */
  goto L_11f02817;
L_11f027e8:;
  /* 11f027e8 mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f027ee mov dword ptr [0x11f3207c], ecx */
  w32((uint32_t)(0x11f3207c), (ECX));
  /* 11f027f4 mov dword ptr [0x11f32080], 0 */
  w32((uint32_t)(0x11f32080), (0x0u));
  /* 11f027fe mov dword ptr [0x11f32084], 0 */
  w32((uint32_t)(0x11f32084), (0x0u));
  /* 11f02808 mov dword ptr [0x11f32068], 0x10 */
  w32((uint32_t)(0x11f32068), (0x10u));
  /* 11f02812 mov eax, 1 */
  EAX = (0x1u);
L_11f02817:;
  /* 11f02817 pop ebp */
  EBP = (pop32());
  /* 11f02818 ret  */
  ESPCHK(0x11f027c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012820 @ 0x11f02820 (85 bytes, 29 insns) */
void f_11f02820(void) {
  FTRACE(0x11f02820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02820 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02821 mov ebp, esp */
  EBP = (ESP);
  /* 11f02823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02826 mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f0282b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0282e mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f02834 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02836 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f02839 mov edx, dword ptr [0x11f32088] */
  EDX = (r32((uint32_t)(0x11f32088)));
  /* 11f0283f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f02842:;
  /* 11f02842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02845 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02848 jae 0x11f0286f */
  if (!C.cf) goto L_11f0286f;
  /* 11f0284a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0284d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02850 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02853 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f02856 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0285d jae 0x11f02864 */
  if (!C.cf) goto L_11f02864;
  /* 11f0285f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02862 jmp 0x11f02871 */
  goto L_11f02871;
L_11f02864:;
  /* 11f02864 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02867 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0286a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0286d jmp 0x11f02842 */
  goto L_11f02842;
L_11f0286f:;
  /* 11f0286f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f02871:;
  /* 11f02871 mov esp, ebp */
  ESP = (EBP);
  /* 11f02873 pop ebp */
  EBP = (pop32());
  /* 11f02874 ret  */
  ESPCHK(0x11f02820u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x11f02880 (95 bytes, 33 insns) */
void f_11f02880(void) {
  FTRACE(0x11f02880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02880 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02881 mov ebp, esp */
  EBP = (ESP);
  /* 11f02883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02889 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0288c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0288f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f02892 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02895 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f02898 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0289b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f028a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f028a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f028a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f028a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f028ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f028ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f028af jne 0x11f028d1 */
  if (!C.zf) goto L_11f028d1;
  /* 11f028b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f028b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11f028b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f028b9 jne 0x11f028d1 */
  if (!C.zf) goto L_11f028d1;
  /* 11f028bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f028be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f028c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f028c6 je 0x11f028d1 */
  if (C.zf) goto L_11f028d1;
  /* 11f028c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11f028cf jmp 0x11f028d8 */
  goto L_11f028d8;
L_11f028d1:;
  /* 11f028d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11f028d8:;
  /* 11f028d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f028db mov esp, ebp */
  ESP = (EBP);
  /* 11f028dd pop ebp */
  EBP = (pop32());
  /* 11f028de ret  */
  ESPCHK(0x11f02880u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x11f028e0 (1485 bytes, 453 insns) */
void f_11f028e0(void) {
  FTRACE(0x11f028e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f028e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f028e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f028e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f028e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f028e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f028ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11f028ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f028f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f028f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f028f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f028fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f028fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11f02901 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f02904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02907 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0290d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02910 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11f02917 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0291a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0291d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02920 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f02923 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f02928 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0292b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f0292e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02931 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02934 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11f02937 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0293a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0293c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0293f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02942 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f02945 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f02948 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0294b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0294e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02950 jne 0x11f02a78 */
  if (!C.zf) goto L_11f02a78;
  /* 11f02956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f02959 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f0295c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0295f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f02962 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02966 jbe 0x11f0296f */
  if ((C.cf||C.zf)) goto L_11f0296f;
  /* 11f02968 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11f0296f:;
  /* 11f0296f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f02972 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f02975 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f02978 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0297b jne 0x11f02a51 */
  if (!C.zf) goto L_11f02a51;
  /* 11f02981 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02985 jae 0x11f029e6 */
  if (!C.cf) goto L_11f029e6;
  /* 11f02987 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f0298c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0298f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f02991 not eax */
  EAX = (~(EAX));
  /* 11f02993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02996 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02999 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f0299d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0299f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f029a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f029a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f029a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f029ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f029af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f029b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f029b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f029b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f029bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f029be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f029c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f029c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f029c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f029ca jne 0x11f029e4 */
  if (!C.zf) goto L_11f029e4;
  /* 11f029cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f029d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f029d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f029d6 not eax */
  EAX = (~(EAX));
  /* 11f029d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f029db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f029dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f029df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f029e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f029e4:;
  /* 11f029e4 jmp 0x11f02a51 */
  goto L_11f02a51;
L_11f029e6:;
  /* 11f029e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f029e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f029ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f029f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f029f3 not edx */
  EDX = (~(EDX));
  /* 11f029f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f029f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f029fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f02a02 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f02a04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02a07 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02a0a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11f02a11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02a14 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02a17 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f02a1a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f02a1d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02a20 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02a23 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f02a26 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02a29 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02a2c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f02a30 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02a32 jne 0x11f02a51 */
  if (!C.zf) goto L_11f02a51;
  /* 11f02a34 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f02a37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02a3a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f02a3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02a41 not edx */
  EDX = (~(EDX));
  /* 11f02a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02a46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f02a49 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02a4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02a4e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f02a51:;
  /* 11f02a51 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f02a54 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f02a57 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f02a5a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f02a5d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f02a60 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f02a63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f02a66 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f02a69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f02a6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f02a6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f02a72 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02a75 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11f02a78:;
  /* 11f02a78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f02a7b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f02a7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02a81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f02a84 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02a88 jbe 0x11f02a91 */
  if ((C.cf||C.zf)) goto L_11f02a91;
  /* 11f02a8a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11f02a91:;
  /* 11f02a91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f02a94 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f02a97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02a99 jne 0x11f02bf5 */
  if (!C.zf) goto L_11f02bf5;
  /* 11f02a9f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02aa2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02aa5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11f02aa8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f02aab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f02aae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02ab1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f02ab4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02ab8 jbe 0x11f02ac1 */
  if ((C.cf||C.zf)) goto L_11f02ac1;
  /* 11f02aba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11f02ac1:;
  /* 11f02ac1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f02ac4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02ac7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f02aca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f02acd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f02ad0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02ad3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f02ad6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02ada jbe 0x11f02ae3 */
  if ((C.cf||C.zf)) goto L_11f02ae3;
  /* 11f02adc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11f02ae3:;
  /* 11f02ae3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f02ae6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02ae9 je 0x11f02bef */
  if (C.zf) goto L_11f02bef;
  /* 11f02aef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02af2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02af5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f02af8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02afb jne 0x11f02bd1 */
  if (!C.zf) goto L_11f02bd1;
  /* 11f02b01 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02b05 jae 0x11f02b66 */
  if (!C.cf) goto L_11f02b66;
  /* 11f02b07 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f02b0c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f02b0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02b11 not edx */
  EDX = (~(EDX));
  /* 11f02b13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02b16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b19 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f02b1d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f02b1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02b22 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b25 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f02b29 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b2c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02b2f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f02b32 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f02b35 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b38 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02b3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f02b3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b41 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02b44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f02b48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02b4a jne 0x11f02b64 */
  if (!C.zf) goto L_11f02b64;
  /* 11f02b4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f02b51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f02b54 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02b56 not edx */
  EDX = (~(EDX));
  /* 11f02b58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02b5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f02b5d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02b62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f02b64:;
  /* 11f02b64 jmp 0x11f02bd1 */
  goto L_11f02bd1;
L_11f02b66:;
  /* 11f02b66 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f02b69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02b6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f02b71 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f02b73 not eax */
  EAX = (~(EAX));
  /* 11f02b75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02b78 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b7b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f02b82 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02b87 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b8a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11f02b91 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02b94 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02b97 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f02b9a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f02b9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02ba0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02ba3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f02ba6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02ba9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02bac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f02bb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f02bb2 jne 0x11f02bd1 */
  if (!C.zf) goto L_11f02bd1;
  /* 11f02bb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f02bb7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02bba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f02bbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f02bc1 not eax */
  EAX = (~(EAX));
  /* 11f02bc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02bc6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f02bc9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f02bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02bce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f02bd1:;
  /* 11f02bd1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02bd4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f02bd7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02bda mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f02bdd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f02be0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02be3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f02be6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02be9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f02bec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11f02bef:;
  /* 11f02bef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02bf2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11f02bf5:;
  /* 11f02bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f02bf8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f02bfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02bfd jne 0x11f02c0b */
  if (!C.zf) goto L_11f02c0b;
  /* 11f02bff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f02c02 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02c05 je 0x11f02d1b */
  if (C.zf) goto L_11f02d1b;
L_11f02c0b:;
  /* 11f02c0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f02c0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02c11 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11f02c14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f02c17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f02c1d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f02c20 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f02c23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f02c29 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f02c2c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f02c2f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c32 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f02c35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c38 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f02c3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f02c41 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02c47 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f02c4a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02c4d jne 0x11f02d1b */
  if (!C.zf) goto L_11f02d1b;
  /* 11f02c53 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02c57 jae 0x11f02cb4 */
  if (!C.cf) goto L_11f02cb4;
  /* 11f02c59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02c5c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02c5f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f02c63 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02c66 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02c69 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f02c6c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f02c6f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02c72 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02c75 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f02c78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f02c7a jne 0x11f02c92 */
  if (!C.zf) goto L_11f02c92;
  /* 11f02c7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f02c81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f02c84 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02c89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f02c8b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02c90 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f02c92:;
  /* 11f02c92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f02c97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f02c9a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f02c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02c9f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02ca2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f02ca6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02cab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02cae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f02cb2 jmp 0x11f02d1b */
  goto L_11f02d1b;
L_11f02cb4:;
  /* 11f02cb4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02cb7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02cba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f02cbe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02cc1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02cc4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f02cc7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f02cca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02ccd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02cd0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f02cd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f02cd5 jne 0x11f02cf2 */
  if (!C.zf) goto L_11f02cf2;
  /* 11f02cd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f02cda sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02cdd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f02ce2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02ce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02ce7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f02cea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02cec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02cef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f02cf2:;
  /* 11f02cf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f02cf5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02cf8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f02cfd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f02cff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02d02 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02d05 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f02d0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02d0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02d11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f02d14 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11f02d1b:;
  /* 11f02d1b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02d1e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f02d21 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f02d23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f02d26 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02d29 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f02d2c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11f02d2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02d32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f02d34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02d37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02d3a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f02d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f02d3f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02d42 jne 0x11f02ea9 */
  if (!C.zf) goto L_11f02ea9;
  /* 11f02d48 cmp dword ptr [0x11f32080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f32080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02d4f je 0x11f02e98 */
  if (C.zf) goto L_11f02e98;
  /* 11f02d55 mov eax, dword ptr [0x11f32078] */
  EAX = (r32((uint32_t)(0x11f32078)));
  /* 11f02d5a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11f02d5d mov ecx, dword ptr [0x11f32080] */
  ECX = (r32((uint32_t)(0x11f32080)));
  /* 11f02d63 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f02d66 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02d68 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f02d6b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f02d70 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f02d75 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02d78 push eax */
  push32((uint32_t)(EAX));
  /* 11f02d79 call dword ptr [0x11f33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33398))), 0x11f02d7fu);
  /* 11f02d7f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f02d84 mov ecx, dword ptr [0x11f32078] */
  ECX = (r32((uint32_t)(0x11f32078)));
  /* 11f02d8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02d8c mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f02d91 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f02d94 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02d96 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f02d9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f02d9f mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f02da4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f02da7 mov edx, dword ptr [0x11f32078] */
  EDX = (r32((uint32_t)(0x11f32078)));
  /* 11f02dad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11f02db8 mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f02dbd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f02dc0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11f02dc3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f02dc6 mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f02dcb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f02dce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11f02dd1 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f02dd7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f02dda movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11f02dde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02de0 jne 0x11f02df6 */
  if (!C.zf) goto L_11f02df6;
  /* 11f02de2 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f02de8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f02deb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11f02ded mov ecx, dword ptr [0x11f32080] */
  ECX = (r32((uint32_t)(0x11f32080)));
  /* 11f02df3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f02df6:;
  /* 11f02df6 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f02dfc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02e00 jne 0x11f02e98 */
  if (!C.zf) goto L_11f02e98;
  /* 11f02e06 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f02e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f02e0d mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f02e12 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f02e15 push ecx */
  push32((uint32_t)(ECX));
  /* 11f02e16 call dword ptr [0x11f33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33398))), 0x11f02e1cu);
  /* 11f02e1c mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f02e22 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f02e25 push eax */
  push32((uint32_t)(EAX));
  /* 11f02e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f02e28 mov ecx, dword ptr [0x11f3208c] */
  ECX = (r32((uint32_t)(0x11f3208c)));
  /* 11f02e2e push ecx */
  push32((uint32_t)(ECX));
  /* 11f02e2f call dword ptr [0x11f3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3339c))), 0x11f02e35u);
  /* 11f02e35 mov edx, dword ptr [0x11f32084] */
  EDX = (r32((uint32_t)(0x11f32084)));
  /* 11f02e3b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f02e3e mov eax, dword ptr [0x11f32088] */
  EAX = (r32((uint32_t)(0x11f32088)));
  /* 11f02e43 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02e45 mov ecx, dword ptr [0x11f32080] */
  ECX = (r32((uint32_t)(0x11f32080)));
  /* 11f02e4b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02e4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02e50 push eax */
  push32((uint32_t)(EAX));
  /* 11f02e51 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f02e57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02e5a push edx */
  push32((uint32_t)(EDX));
  /* 11f02e5b mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f02e60 push eax */
  push32((uint32_t)(EAX));
  /* 11f02e61 call 0x11f01f30 */
  push32(0x11f02e66u); f_11f01f30();
  /* 11f02e66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02e69 mov ecx, dword ptr [0x11f32084] */
  ECX = (r32((uint32_t)(0x11f32084)));
  /* 11f02e6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02e72 mov dword ptr [0x11f32084], ecx */
  w32((uint32_t)(0x11f32084), (ECX));
  /* 11f02e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02e7b cmp edx, dword ptr [0x11f32080] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f32080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02e81 jbe 0x11f02e8c */
  if ((C.cf||C.zf)) goto L_11f02e8c;
  /* 11f02e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02e86 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02e89 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11f02e8c:;
  /* 11f02e8c mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f02e92 mov dword ptr [0x11f3207c], ecx */
  w32((uint32_t)(0x11f3207c), (ECX));
L_11f02e98:;
  /* 11f02e98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02e9b mov dword ptr [0x11f32080], edx */
  w32((uint32_t)(0x11f32080), (EDX));
  /* 11f02ea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f02ea4 mov dword ptr [0x11f32078], eax */
  w32((uint32_t)(0x11f32078), (EAX));
L_11f02ea9:;
  /* 11f02ea9 mov esp, ebp */
  ESP = (EBP);
  /* 11f02eab pop ebp */
  EBP = (pop32());
  /* 11f02eac ret  */
  ESPCHK(0x11f028e0u, _esp0);
  ESP += 4; return;
}

