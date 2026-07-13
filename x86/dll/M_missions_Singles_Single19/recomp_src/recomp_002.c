#include "recomp.h"

/* FUN_10010890 @ 0x11210890 (393 bytes, 123 insns) */
void f_11210890(void) {
  FTRACE(0x11210890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210890 push ebp */
  push32((uint32_t)(EBP));
  /* 11210891 mov ebp, esp */
  EBP = (ESP);
  /* 11210893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210896 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121089a jne 0x112108a6 */
  if (!C.zf) goto L_112108a6;
  /* 1121089c mov eax, dword ptr [0x1122ec98] */
  EAX = (r32((uint32_t)(0x1122ec98)));
  /* 112108a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112108a4 jmp 0x112108ac */
  goto L_112108ac;
L_112108a6:;
  /* 112108a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112108a9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112108ac:;
  /* 112108ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112108af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112108b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112108b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112108b8 push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 112108bd call dword ptr [0x11231318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231318))), 0x112108c3u);
  /* 112108c3 cmp dword ptr [0x1122f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112108ca je 0x112108ea */
  if (C.zf) goto L_112108ea;
  /* 112108cc push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 112108d1 call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x112108d7u);
  /* 112108d7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112108d9 call 0x11206f50 */
  push32(0x112108deu); f_11206f50();
  /* 112108de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112108e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112108e8 jmp 0x112108f1 */
  goto L_112108f1;
L_112108ea:;
  /* 112108ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112108f1:;
  /* 112108f1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112108f5 jbe 0x112109e2 */
  if ((C.cf||C.zf)) goto L_112109e2;
  /* 112108fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112108fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11210900 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11210903 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11210907 je 0x11210911 */
  if (C.zf) goto L_11210911;
  /* 11210909 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1121090d je 0x11210916 */
  if (C.zf) goto L_11210916;
  /* 1121090f jmp 0x11210970 */
  goto L_11210970;
L_11210911:;
  /* 11210911 jmp 0x112109e2 */
  goto L_112109e2;
L_11210916:;
  /* 11210916 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121091c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1121091f mov dword ptr [0x1122f7c0], 0 */
  w32((uint32_t)(0x1122f7c0), (0x0u));
  /* 11210929 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121092c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1121092f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210932 jne 0x11210947 */
  if (!C.zf) goto L_11210947;
  /* 11210934 mov dword ptr [0x1122f7c0], 1 */
  w32((uint32_t)(0x1122f7c0), (0x1u));
  /* 1121093e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210941 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210944 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11210947:;
  /* 11210947 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121094a push ecx */
  push32((uint32_t)(ECX));
  /* 1121094b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1121094e push edx */
  push32((uint32_t)(EDX));
  /* 1121094f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11210952 push eax */
  push32((uint32_t)(EAX));
  /* 11210953 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210956 push ecx */
  push32((uint32_t)(ECX));
  /* 11210957 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121095a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1121095c push eax */
  push32((uint32_t)(EAX));
  /* 1121095d call 0x11210a20 */
  push32(0x11210962u); f_11210a20();
  /* 11210962 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210965 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210968 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121096b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1121096e jmp 0x112109dd */
  goto L_112109dd;
L_11210970:;
  /* 11210970 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11210975 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11210977 mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 1121097d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1121097f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11210983 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11210989 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1121098b je 0x112109b8 */
  if (C.zf) goto L_112109b8;
  /* 1121098d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210991 jbe 0x112109b8 */
  if ((C.cf||C.zf)) goto L_112109b8;
  /* 11210993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210996 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210999 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1121099b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1121099d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112109a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112109a3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112109a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112109a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112109ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112109af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112109b2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112109b5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112109b8:;
  /* 112109b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112109bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112109be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112109c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112109c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112109c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112109c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112109cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112109ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112109d1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112109d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112109d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112109da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112109dd:;
  /* 112109dd jmp 0x112108f1 */
  goto L_112108f1;
L_112109e2:;
  /* 112109e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112109e6 je 0x112109f4 */
  if (C.zf) goto L_112109f4;
  /* 112109e8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112109ea call 0x11206ff0 */
  push32(0x112109efu); f_11206ff0();
  /* 112109ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112109f2 jmp 0x112109ff */
  goto L_112109ff;
L_112109f4:;
  /* 112109f4 push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 112109f9 call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x112109ffu);
L_112109ff:;
  /* 112109ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210a03 jbe 0x11210a13 */
  if ((C.cf||C.zf)) goto L_11210a13;
  /* 11210a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210a08 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11210a0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210a0e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210a11 jmp 0x11210a15 */
  goto L_11210a15;
L_11210a13:;
  /* 11210a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11210a15:;
  /* 11210a15 mov esp, ebp */
  ESP = (EBP);
  /* 11210a17 pop ebp */
  EBP = (pop32());
  /* 11210a18 ret  */
  ESPCHK(0x11210890u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a20 @ 0x11210a20 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11210a20(void) {
  FTRACE(0x11210a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11210a21 mov ebp, esp */
  EBP = (ESP);
  /* 11210a23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210a26 push esi */
  push32((uint32_t)(ESI));
  /* 11210a27 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11210a2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11210a2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210a31 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210a34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11210a37 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210a3b ja 0x11210f88 */
  if ((!C.cf&&!C.zf)) goto L_11210f88;
  /* 11210a41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11210a46 mov dl, byte ptr [eax + 0x11210fe9] */
  DL = (r8((uint32_t)(EAX + 0x11210fe9)));
  /* 11210a4c jmp dword ptr [edx*4 + 0x11210f8d] */
  switch (EDX) {
    case 0: goto L_11210f66;
    case 1: goto L_11210a75;
    case 2: goto L_11210abb;
    case 3: goto L_11210c08;
    case 4: goto L_11210c30;
    case 5: goto L_11210ccf;
    case 6: goto L_11210d3b;
    case 7: goto L_11210d64;
    case 8: goto L_11210da5;
    case 9: goto L_11210e87;
    case 10: goto L_11210eee;
    case 11: goto L_11210f3b;
    case 12: goto L_11210a53;
    case 13: goto L_11210a98;
    case 14: goto L_11210ade;
    case 15: goto L_11210bde;
    case 16: goto L_11210c75;
    case 17: goto L_11210ca2;
    case 18: goto L_11210cf7;
    case 19: goto L_11210d7b;
    case 20: goto L_11210e29;
    case 21: goto L_11210eb8;
    case 22: goto L_11210f88;
    default: x86_unimpl("switch@0x11210a4c out of table"); return;
  }
L_11210a53:;
  /* 11210a53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210a56 push ecx */
  push32((uint32_t)(ECX));
  /* 11210a57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210a5a push edx */
  push32((uint32_t)(EDX));
  /* 11210a5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210a5e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11210a61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210a64 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11210a67 push eax */
  push32((uint32_t)(EAX));
  /* 11210a68 call 0x11211040 */
  push32(0x11210a6du); f_11211040();
  /* 11210a6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210a70 jmp 0x11210f88 */
  goto L_11210f88;
L_11210a75:;
  /* 11210a75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210a78 push ecx */
  push32((uint32_t)(ECX));
  /* 11210a79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210a7c push edx */
  push32((uint32_t)(EDX));
  /* 11210a7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210a80 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11210a83 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210a86 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11210a8a push eax */
  push32((uint32_t)(EAX));
  /* 11210a8b call 0x11211040 */
  push32(0x11210a90u); f_11211040();
  /* 11210a90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210a93 jmp 0x11210f88 */
  goto L_11210f88;
L_11210a98:;
  /* 11210a98 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210a9b push ecx */
  push32((uint32_t)(ECX));
  /* 11210a9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210a9f push edx */
  push32((uint32_t)(EDX));
  /* 11210aa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210aa3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11210aa6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210aa9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11210aad push eax */
  push32((uint32_t)(EAX));
  /* 11210aae call 0x11211040 */
  push32(0x11210ab3u); f_11211040();
  /* 11210ab3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210ab6 jmp 0x11210f88 */
  goto L_11210f88;
L_11210abb:;
  /* 11210abb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210abe push ecx */
  push32((uint32_t)(ECX));
  /* 11210abf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210ac2 push edx */
  push32((uint32_t)(EDX));
  /* 11210ac3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210ac6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11210ac9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210acc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11210ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11210ad1 call 0x11211040 */
  push32(0x11210ad6u); f_11211040();
  /* 11210ad6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210ad9 jmp 0x11210f88 */
  goto L_11210f88;
L_11210ade:;
  /* 11210ade cmp dword ptr [0x1122f7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210ae5 je 0x11210b66 */
  if (C.zf) goto L_11210b66;
  /* 11210ae7 mov dword ptr [0x1122f7c0], 0 */
  w32((uint32_t)(0x1122f7c0), (0x0u));
  /* 11210af1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210af4 push ecx */
  push32((uint32_t)(ECX));
  /* 11210af5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210af8 push edx */
  push32((uint32_t)(EDX));
  /* 11210af9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210afc push eax */
  push32((uint32_t)(EAX));
  /* 11210afd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210b00 push ecx */
  push32((uint32_t)(ECX));
  /* 11210b01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210b04 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11210b0a push eax */
  push32((uint32_t)(EAX));
  /* 11210b0b call 0x112111f0 */
  push32(0x11210b10u); f_112111f0();
  /* 11210b10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210b13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210b16 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210b19 jne 0x11210b20 */
  if (!C.zf) goto L_11210b20;
  /* 11210b1b jmp 0x11210f88 */
  goto L_11210f88;
L_11210b20:;
  /* 11210b20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210b23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11210b25 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11210b28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210b2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11210b2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210b30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210b33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11210b35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210b38 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11210b3a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210b3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210b40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11210b42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210b45 push ecx */
  push32((uint32_t)(ECX));
  /* 11210b46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210b49 push edx */
  push32((uint32_t)(EDX));
  /* 11210b4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210b4d push eax */
  push32((uint32_t)(EAX));
  /* 11210b4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210b51 push ecx */
  push32((uint32_t)(ECX));
  /* 11210b52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210b55 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11210b5b push eax */
  push32((uint32_t)(EAX));
  /* 11210b5c call 0x112111f0 */
  push32(0x11210b61u); f_112111f0();
  /* 11210b61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210b64 jmp 0x11210bd9 */
  goto L_11210bd9;
L_11210b66:;
  /* 11210b66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11210b6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210b6d push edx */
  push32((uint32_t)(EDX));
  /* 11210b6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210b71 push eax */
  push32((uint32_t)(EAX));
  /* 11210b72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210b75 push ecx */
  push32((uint32_t)(ECX));
  /* 11210b76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210b79 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11210b7f push eax */
  push32((uint32_t)(EAX));
  /* 11210b80 call 0x112111f0 */
  push32(0x11210b85u); f_112111f0();
  /* 11210b85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210b88 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210b8b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210b8e jne 0x11210b95 */
  if (!C.zf) goto L_11210b95;
  /* 11210b90 jmp 0x11210f88 */
  goto L_11210f88;
L_11210b95:;
  /* 11210b95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210b98 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11210b9a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11210b9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210ba0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11210ba2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210ba5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210ba8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11210baa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210bad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11210baf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210bb2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210bb5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11210bb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210bba push ecx */
  push32((uint32_t)(ECX));
  /* 11210bbb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210bbe push edx */
  push32((uint32_t)(EDX));
  /* 11210bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11210bc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11210bc7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210bca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11210bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11210bd1 call 0x112111f0 */
  push32(0x11210bd6u); f_112111f0();
  /* 11210bd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11210bd9:;
  /* 11210bd9 jmp 0x11210f88 */
  goto L_11210f88;
L_11210bde:;
  /* 11210bde mov ecx, dword ptr [0x1122f7c0] */
  ECX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210be4 mov dword ptr [0x1122f7d0], ecx */
  w32((uint32_t)(0x1122f7d0), (ECX));
  /* 11210bea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210bed push edx */
  push32((uint32_t)(EDX));
  /* 11210bee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210bf1 push eax */
  push32((uint32_t)(EAX));
  /* 11210bf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11210bf4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210bf7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11210bfa push edx */
  push32((uint32_t)(EDX));
  /* 11210bfb call 0x11211090 */
  push32(0x11210c00u); f_11211090();
  /* 11210c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210c03 jmp 0x11210f88 */
  goto L_11210f88;
L_11210c08:;
  /* 11210c08 mov eax, dword ptr [0x1122f7c0] */
  EAX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210c0d mov dword ptr [0x1122f7d0], eax */
  w32((uint32_t)(0x1122f7d0), (EAX));
  /* 11210c12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210c15 push ecx */
  push32((uint32_t)(ECX));
  /* 11210c16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210c19 push edx */
  push32((uint32_t)(EDX));
  /* 11210c1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11210c1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210c1f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11210c22 push ecx */
  push32((uint32_t)(ECX));
  /* 11210c23 call 0x11211090 */
  push32(0x11210c28u); f_11211090();
  /* 11210c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210c2b jmp 0x11210f88 */
  goto L_11210f88;
L_11210c30:;
  /* 11210c30 mov edx, dword ptr [0x1122f7c0] */
  EDX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210c36 mov dword ptr [0x1122f7d0], edx */
  w32((uint32_t)(0x1122f7d0), (EDX));
  /* 11210c3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210c3f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11210c42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11210c43 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11210c48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11210c4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11210c4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210c51 jne 0x11210c5a */
  if (!C.zf) goto L_11210c5a;
  /* 11210c53 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11210c5a:;
  /* 11210c5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210c5d push edx */
  push32((uint32_t)(EDX));
  /* 11210c5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210c61 push eax */
  push32((uint32_t)(EAX));
  /* 11210c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11210c64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210c67 push ecx */
  push32((uint32_t)(ECX));
  /* 11210c68 call 0x11211090 */
  push32(0x11210c6du); f_11211090();
  /* 11210c6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210c70 jmp 0x11210f88 */
  goto L_11210f88;
L_11210c75:;
  /* 11210c75 mov edx, dword ptr [0x1122f7c0] */
  EDX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210c7b mov dword ptr [0x1122f7d0], edx */
  w32((uint32_t)(0x1122f7d0), (EDX));
  /* 11210c81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210c84 push eax */
  push32((uint32_t)(EAX));
  /* 11210c85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210c88 push ecx */
  push32((uint32_t)(ECX));
  /* 11210c89 push 3 */
  push32((uint32_t)(0x3u));
  /* 11210c8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210c8e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11210c91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210c94 push eax */
  push32((uint32_t)(EAX));
  /* 11210c95 call 0x11211090 */
  push32(0x11210c9au); f_11211090();
  /* 11210c9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210c9d jmp 0x11210f88 */
  goto L_11210f88;
L_11210ca2:;
  /* 11210ca2 mov ecx, dword ptr [0x1122f7c0] */
  ECX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210ca8 mov dword ptr [0x1122f7d0], ecx */
  w32((uint32_t)(0x1122f7d0), (ECX));
  /* 11210cae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210cb1 push edx */
  push32((uint32_t)(EDX));
  /* 11210cb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210cb5 push eax */
  push32((uint32_t)(EAX));
  /* 11210cb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11210cb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210cbb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11210cbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210cc1 push edx */
  push32((uint32_t)(EDX));
  /* 11210cc2 call 0x11211090 */
  push32(0x11210cc7u); f_11211090();
  /* 11210cc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210cca jmp 0x11210f88 */
  goto L_11210f88;
L_11210ccf:;
  /* 11210ccf mov eax, dword ptr [0x1122f7c0] */
  EAX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210cd4 mov dword ptr [0x1122f7d0], eax */
  w32((uint32_t)(0x1122f7d0), (EAX));
  /* 11210cd9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210cdc push ecx */
  push32((uint32_t)(ECX));
  /* 11210cdd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210ce0 push edx */
  push32((uint32_t)(EDX));
  /* 11210ce1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11210ce3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210ce6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11210ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11210cea call 0x11211090 */
  push32(0x11210cefu); f_11211090();
  /* 11210cef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210cf2 jmp 0x11210f88 */
  goto L_11210f88;
L_11210cf7:;
  /* 11210cf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210cfa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210cfe jg 0x11210d1c */
  if ((!C.zf&&C.sf==C.of)) goto L_11210d1c;
  /* 11210d00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210d03 push eax */
  push32((uint32_t)(EAX));
  /* 11210d04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210d07 push ecx */
  push32((uint32_t)(ECX));
  /* 11210d08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210d0b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11210d11 push eax */
  push32((uint32_t)(EAX));
  /* 11210d12 call 0x11211040 */
  push32(0x11210d17u); f_11211040();
  /* 11210d17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210d1a jmp 0x11210d36 */
  goto L_11210d36;
L_11210d1c:;
  /* 11210d1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210d1f push ecx */
  push32((uint32_t)(ECX));
  /* 11210d20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210d23 push edx */
  push32((uint32_t)(EDX));
  /* 11210d24 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210d27 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11210d2d push ecx */
  push32((uint32_t)(ECX));
  /* 11210d2e call 0x11211040 */
  push32(0x11210d33u); f_11211040();
  /* 11210d33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11210d36:;
  /* 11210d36 jmp 0x11210f88 */
  goto L_11210f88;
L_11210d3b:;
  /* 11210d3b mov edx, dword ptr [0x1122f7c0] */
  EDX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210d41 mov dword ptr [0x1122f7d0], edx */
  w32((uint32_t)(0x1122f7d0), (EDX));
  /* 11210d47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210d4a push eax */
  push32((uint32_t)(EAX));
  /* 11210d4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210d4e push ecx */
  push32((uint32_t)(ECX));
  /* 11210d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11210d51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210d54 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11210d56 push eax */
  push32((uint32_t)(EAX));
  /* 11210d57 call 0x11211090 */
  push32(0x11210d5cu); f_11211090();
  /* 11210d5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210d5f jmp 0x11210f88 */
  goto L_11210f88;
L_11210d64:;
  /* 11210d64 mov ecx, dword ptr [0x1122f7c0] */
  ECX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210d6a mov dword ptr [0x1122f7d0], ecx */
  w32((uint32_t)(0x1122f7d0), (ECX));
  /* 11210d70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210d73 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11210d76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11210d79 jmp 0x11210dcd */
  goto L_11210dcd;
L_11210d7b:;
  /* 11210d7b mov ecx, dword ptr [0x1122f7c0] */
  ECX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210d81 mov dword ptr [0x1122f7d0], ecx */
  w32((uint32_t)(0x1122f7d0), (ECX));
  /* 11210d87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210d8a push edx */
  push32((uint32_t)(EDX));
  /* 11210d8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210d8e push eax */
  push32((uint32_t)(EAX));
  /* 11210d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11210d91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210d94 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11210d97 push edx */
  push32((uint32_t)(EDX));
  /* 11210d98 call 0x11211090 */
  push32(0x11210d9du); f_11211090();
  /* 11210d9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210da0 jmp 0x11210f88 */
  goto L_11210f88;
L_11210da5:;
  /* 11210da5 mov eax, dword ptr [0x1122f7c0] */
  EAX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210daa mov dword ptr [0x1122f7d0], eax */
  w32((uint32_t)(0x1122f7d0), (EAX));
  /* 11210daf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210db2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210db6 jne 0x11210dc1 */
  if (!C.zf) goto L_11210dc1;
  /* 11210db8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11210dbf jmp 0x11210dcd */
  goto L_11210dcd;
L_11210dc1:;
  /* 11210dc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210dc4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11210dc7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210dca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11210dcd:;
  /* 11210dcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210dd0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11210dd3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210dd6 jge 0x11210de1 */
  if ((C.sf==C.of)) goto L_11210de1;
  /* 11210dd8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11210ddf jmp 0x11210e0e */
  goto L_11210e0e;
L_11210de1:;
  /* 11210de1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210de4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11210de7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11210de8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11210ded idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11210def mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11210df2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210df5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11210df8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11210df9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11210dfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11210e00 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210e03 jl 0x11210e0e */
  if ((C.sf!=C.of)) goto L_11210e0e;
  /* 11210e05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210e08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210e0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11210e0e:;
  /* 11210e0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210e11 push eax */
  push32((uint32_t)(EAX));
  /* 11210e12 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210e15 push ecx */
  push32((uint32_t)(ECX));
  /* 11210e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11210e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210e1b push edx */
  push32((uint32_t)(EDX));
  /* 11210e1c call 0x11211090 */
  push32(0x11210e21u); f_11211090();
  /* 11210e21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210e24 jmp 0x11210f88 */
  goto L_11210f88;
L_11210e29:;
  /* 11210e29 cmp dword ptr [0x1122f7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210e30 je 0x11210e60 */
  if (C.zf) goto L_11210e60;
  /* 11210e32 mov dword ptr [0x1122f7c0], 0 */
  w32((uint32_t)(0x1122f7c0), (0x0u));
  /* 11210e3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210e3f push eax */
  push32((uint32_t)(EAX));
  /* 11210e40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11210e44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210e47 push edx */
  push32((uint32_t)(EDX));
  /* 11210e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210e4b push eax */
  push32((uint32_t)(EAX));
  /* 11210e4c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210e4f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11210e55 push edx */
  push32((uint32_t)(EDX));
  /* 11210e56 call 0x112111f0 */
  push32(0x11210e5bu); f_112111f0();
  /* 11210e5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210e5e jmp 0x11210e82 */
  goto L_11210e82;
L_11210e60:;
  /* 11210e60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210e63 push eax */
  push32((uint32_t)(EAX));
  /* 11210e64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210e67 push ecx */
  push32((uint32_t)(ECX));
  /* 11210e68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210e6b push edx */
  push32((uint32_t)(EDX));
  /* 11210e6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210e6f push eax */
  push32((uint32_t)(EAX));
  /* 11210e70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210e73 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11210e79 push edx */
  push32((uint32_t)(EDX));
  /* 11210e7a call 0x112111f0 */
  push32(0x11210e7fu); f_112111f0();
  /* 11210e7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11210e82:;
  /* 11210e82 jmp 0x11210f88 */
  goto L_11210f88;
L_11210e87:;
  /* 11210e87 mov dword ptr [0x1122f7c0], 0 */
  w32((uint32_t)(0x1122f7c0), (0x0u));
  /* 11210e91 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210e94 push eax */
  push32((uint32_t)(EAX));
  /* 11210e95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210e98 push ecx */
  push32((uint32_t)(ECX));
  /* 11210e99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210e9c push edx */
  push32((uint32_t)(EDX));
  /* 11210e9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210ea0 push eax */
  push32((uint32_t)(EAX));
  /* 11210ea1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11210ea4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11210eaa push edx */
  push32((uint32_t)(EDX));
  /* 11210eab call 0x112111f0 */
  push32(0x11210eb0u); f_112111f0();
  /* 11210eb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210eb3 jmp 0x11210f88 */
  goto L_11210f88;
L_11210eb8:;
  /* 11210eb8 mov eax, dword ptr [0x1122f7c0] */
  EAX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210ebd mov dword ptr [0x1122f7d0], eax */
  w32((uint32_t)(0x1122f7d0), (EAX));
  /* 11210ec2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210ec5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11210ec8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11210ec9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11210ece idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11210ed0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11210ed3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210ed6 push edx */
  push32((uint32_t)(EDX));
  /* 11210ed7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210eda push eax */
  push32((uint32_t)(EAX));
  /* 11210edb push 2 */
  push32((uint32_t)(0x2u));
  /* 11210edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 11210ee1 call 0x11211090 */
  push32(0x11210ee6u); f_11211090();
  /* 11210ee6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210ee9 jmp 0x11210f88 */
  goto L_11210f88;
L_11210eee:;
  /* 11210eee mov edx, dword ptr [0x1122f7c0] */
  EDX = (r32((uint32_t)(0x1122f7c0)));
  /* 11210ef4 mov dword ptr [0x1122f7d0], edx */
  w32((uint32_t)(0x1122f7d0), (EDX));
  /* 11210efa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210efd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11210f00 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11210f01 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11210f06 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11210f08 mov ecx, eax */
  ECX = (EAX);
  /* 11210f0a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210f0d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11210f10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210f13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11210f16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11210f17 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11210f1c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11210f1e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210f20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11210f23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210f26 push eax */
  push32((uint32_t)(EAX));
  /* 11210f27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210f2a push ecx */
  push32((uint32_t)(ECX));
  /* 11210f2b push 4 */
  push32((uint32_t)(0x4u));
  /* 11210f2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210f30 push edx */
  push32((uint32_t)(EDX));
  /* 11210f31 call 0x11211090 */
  push32(0x11210f36u); f_11211090();
  /* 11210f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210f39 jmp 0x11210f88 */
  goto L_11210f88;
L_11210f3b:;
  /* 11210f3b call 0x11212050 */
  push32(0x11210f40u); f_11212050();
  /* 11210f40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210f43 push eax */
  push32((uint32_t)(EAX));
  /* 11210f44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210f47 push ecx */
  push32((uint32_t)(ECX));
  /* 11210f48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210f4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11210f4d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210f51 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11210f54 mov ecx, dword ptr [eax*4 + 0x1122ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122ee1c)));
  /* 11210f5b push ecx */
  push32((uint32_t)(ECX));
  /* 11210f5c call 0x11211040 */
  push32(0x11210f61u); f_11211040();
  /* 11210f61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210f64 jmp 0x11210f88 */
  goto L_11210f88;
L_11210f66:;
  /* 11210f66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210f69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11210f6b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11210f6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210f71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11210f73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210f76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11210f79 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11210f7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210f7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11210f80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210f83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210f86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11210f88:;
  /* 11210f88 pop esi */
  ESI = (pop32());
  /* 11210f89 mov esp, ebp */
  ESP = (EBP);
  /* 11210f8b pop ebp */
  EBP = (pop32());
  /* 11210f8c ret  */
  ESPCHK(0x11210a20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11211040 (72 bytes, 30 insns) */
void f_11211040(void) {
  FTRACE(0x11211040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211040 push ebp */
  push32((uint32_t)(EBP));
  /* 11211041 mov ebp, esp */
  EBP = (ESP);
L_11211043:;
  /* 11211043 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211046 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211049 je 0x11211086 */
  if (C.zf) goto L_11211086;
  /* 1121104b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121104e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11211051 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11211053 je 0x11211086 */
  if (C.zf) goto L_11211086;
  /* 11211055 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11211058 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121105a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121105d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1121105f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11211061 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11211064 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11211066 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1121106c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1121106e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211071 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211074 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11211077 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121107a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1121107c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121107f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211082 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11211084 jmp 0x11211043 */
  goto L_11211043;
L_11211086:;
  /* 11211086 pop ebp */
  EBP = (pop32());
  /* 11211087 ret  */
  ESPCHK(0x11211040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x11211090 (173 bytes, 64 insns) */
void f_11211090(void) {
  FTRACE(0x11211090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211090 push ebp */
  push32((uint32_t)(EBP));
  /* 11211091 mov ebp, esp */
  EBP = (ESP);
  /* 11211093 push ecx */
  push32((uint32_t)(ECX));
  /* 11211094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1121109b cmp dword ptr [0x1122f7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112110a2 je 0x112110ba */
  if (C.zf) goto L_112110ba;
  /* 112110a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112110a7 push eax */
  push32((uint32_t)(EAX));
  /* 112110a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112110ab push ecx */
  push32((uint32_t)(ECX));
  /* 112110ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112110af push edx */
  push32((uint32_t)(EDX));
  /* 112110b0 call 0x11211140 */
  push32(0x112110b5u); f_11211140();
  /* 112110b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112110b8 jmp 0x11211139 */
  goto L_11211139;
L_112110ba:;
  /* 112110ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112110bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112110c0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112110c2 jae 0x11211130 */
  if (!C.cf) goto L_11211130;
  /* 112110c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112110c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112110ca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 112110cd jmp 0x112110d8 */
  goto L_112110d8;
L_112110cf:;
  /* 112110cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112110d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112110d5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_112110d8:;
  /* 112110d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112110db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112110de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112110e0 je 0x11211114 */
  if (C.zf) goto L_11211114;
  /* 112110e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112110e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112110e6 mov ecx, 0xa */
  ECX = (0xau);
  /* 112110eb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112110ed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112110f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112110f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112110f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112110f8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 112110fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112110fe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112110ff mov ecx, 0xa */
  ECX = (0xau);
  /* 11211104 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11211106 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11211109 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121110c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121110f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11211112 jmp 0x112110cf */
  goto L_112110cf;
L_11211114:;
  /* 11211114 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211117 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11211119 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121111c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121111f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11211121 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211124 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11211126 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211129 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121112c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1121112e jmp 0x11211139 */
  goto L_11211139;
L_11211130:;
  /* 11211130 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211133 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11211139:;
  /* 11211139 mov esp, ebp */
  ESP = (EBP);
  /* 1121113b pop ebp */
  EBP = (pop32());
  /* 1121113c ret  */
  ESPCHK(0x11211090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11211140 (172 bytes, 65 insns) */
void f_11211140(void) {
  FTRACE(0x11211140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211140 push ebp */
  push32((uint32_t)(EBP));
  /* 11211141 mov ebp, esp */
  EBP = (ESP);
  /* 11211143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211146 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11211149 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121114b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1121114e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211151 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211154 jbe 0x1121119b */
  if ((C.cf||C.zf)) goto L_1121119b;
L_11211156:;
  /* 11211156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211159 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1121115a mov ecx, 0xa */
  ECX = (0xau);
  /* 1121115f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11211161 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211167 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11211169 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121116c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121116f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11211172 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211175 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11211177 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121117a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121117d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1121117f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211182 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11211183 mov ecx, 0xa */
  ECX = (0xau);
  /* 11211188 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1121118a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1121118d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211191 jle 0x1121119b */
  if ((C.zf||C.sf!=C.of)) goto L_1121119b;
  /* 11211193 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211196 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211199 ja 0x11211156 */
  if ((!C.cf&&!C.zf)) goto L_11211156;
L_1121119b:;
  /* 1121119b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1121119e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112111a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112111a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112111a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112111a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112111ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112111ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112111b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112111b4:;
  /* 112111b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112111b7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112111b9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 112111bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112111bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112111c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112111c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112111c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112111c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112111cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112111cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112111d2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 112111d5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 112111d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112111da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112111dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112111e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112111e3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112111e6 jb 0x112111b4 */
  if (C.cf) goto L_112111b4;
  /* 112111e8 mov esp, ebp */
  ESP = (EBP);
  /* 112111ea pop ebp */
  EBP = (pop32());
  /* 112111eb ret  */
  ESPCHK(0x11211140u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f0 @ 0x112111f0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_112111f0(void) {
  FTRACE(0x112111f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112111f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112111f1 mov ebp, esp */
  EBP = (ESP);
  /* 112111f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_112111f6:;
  /* 112111f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112111f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112111fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112111fe je 0x1121166c */
  if (C.zf) goto L_1121166c;
  /* 11211204 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211207 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121120a je 0x1121166c */
  if (C.zf) goto L_1121166c;
  /* 11211210 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11211214 mov dword ptr [0x1122f7d0], 0 */
  w32((uint32_t)(0x1122f7d0), (0x0u));
  /* 1121121e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11211225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211228 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1121122b jmp 0x11211236 */
  goto L_11211236;
L_1121122d:;
  /* 1121122d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211230 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211233 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11211236:;
  /* 11211236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211239 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1121123c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121123f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11211242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211245 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211248 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1121124b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121124d jne 0x11211251 */
  if (!C.zf) goto L_11211251;
  /* 1121124f jmp 0x1121122d */
  goto L_1121122d;
L_11211251:;
  /* 11211251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211254 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211257 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1121125a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121125d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11211260 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11211263 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11211266 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211269 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1121126c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211270 ja 0x112115c0 */
  if ((!C.cf&&!C.zf)) goto L_112115c0;
  /* 11211276 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11211279 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121127b mov al, byte ptr [ecx + 0x1121169c] */
  AL = (r8((uint32_t)(ECX + 0x1121169c)));
  /* 11211281 jmp dword ptr [eax*4 + 0x11211670] */
  switch (EAX) {
    case 0: goto L_112114df;
    case 1: goto L_112113c3;
    case 2: goto L_1121134e;
    case 3: goto L_11211288;
    case 4: goto L_112112c6;
    case 5: goto L_11211327;
    case 6: goto L_11211375;
    case 7: goto L_1121139c;
    case 8: goto L_1121140a;
    case 9: goto L_11211304;
    case 10: goto L_112115c0;
    default: x86_unimpl("switch@0x11211281 out of table"); return;
  }
L_11211288:;
  /* 11211288 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121128b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1121128e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11211291 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211294 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11211297 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121129b ja 0x112112c1 */
  if ((!C.cf&&!C.zf)) goto L_112112c1;
  /* 1121129d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112112a0 jmp dword ptr [ecx*4 + 0x112116ef] */
  switch (ECX) {
    case 0: goto L_112112a7;
    case 1: goto L_112112b1;
    case 2: goto L_112112b7;
    case 3: goto L_112112bd;
    case 4: goto L_112112e5;
    case 5: goto L_112112ef;
    case 6: goto L_112112f5;
    case 7: goto L_112112fb;
    default: x86_unimpl("switch@0x112112a0 out of table"); return;
  }
L_112112a7:;
  /* 112112a7 mov dword ptr [0x1122f7d0], 1 */
  w32((uint32_t)(0x1122f7d0), (0x1u));
L_112112b1:;
  /* 112112b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 112112b5 jmp 0x112112c1 */
  goto L_112112c1;
L_112112b7:;
  /* 112112b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 112112bb jmp 0x112112c1 */
  goto L_112112c1;
L_112112bd:;
  /* 112112bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_112112c1:;
  /* 112112c1 jmp 0x112115c0 */
  goto L_112115c0;
L_112112c6:;
  /* 112112c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112112c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112112cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112112cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112112d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112112d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112112d9 ja 0x112112ff */
  if ((!C.cf&&!C.zf)) goto L_112112ff;
  /* 112112db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112112de jmp dword ptr [ecx*4 + 0x112116ff] */
  switch (ECX) {
    case 0: goto L_112112e5;
    case 1: goto L_112112ef;
    case 2: goto L_112112f5;
    case 3: goto L_112112fb;
    default: x86_unimpl("switch@0x112112de out of table"); return;
  }
L_112112e5:;
  /* 112112e5 mov dword ptr [0x1122f7d0], 1 */
  w32((uint32_t)(0x1122f7d0), (0x1u));
L_112112ef:;
  /* 112112ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 112112f3 jmp 0x112112ff */
  goto L_112112ff;
L_112112f5:;
  /* 112112f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 112112f9 jmp 0x112112ff */
  goto L_112112ff;
L_112112fb:;
  /* 112112fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_112112ff:;
  /* 112112ff jmp 0x112115c0 */
  goto L_112115c0;
L_11211304:;
  /* 11211304 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211307 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1121130a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121130e je 0x11211318 */
  if (C.zf) goto L_11211318;
  /* 11211310 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211314 je 0x1121131e */
  if (C.zf) goto L_1121131e;
  /* 11211316 jmp 0x11211322 */
  goto L_11211322;
L_11211318:;
  /* 11211318 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1121131c jmp 0x11211322 */
  goto L_11211322;
L_1121131e:;
  /* 1121131e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11211322:;
  /* 11211322 jmp 0x112115c0 */
  goto L_112115c0;
L_11211327:;
  /* 11211327 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121132a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1121132d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211331 je 0x1121133b */
  if (C.zf) goto L_1121133b;
  /* 11211333 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211337 je 0x11211345 */
  if (C.zf) goto L_11211345;
  /* 11211339 jmp 0x11211349 */
  goto L_11211349;
L_1121133b:;
  /* 1121133b mov dword ptr [0x1122f7d0], 1 */
  w32((uint32_t)(0x1122f7d0), (0x1u));
L_11211345:;
  /* 11211345 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11211349:;
  /* 11211349 jmp 0x112115c0 */
  goto L_112115c0;
L_1121134e:;
  /* 1121134e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211351 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11211354 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211358 je 0x11211362 */
  if (C.zf) goto L_11211362;
  /* 1121135a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121135e je 0x1121136c */
  if (C.zf) goto L_1121136c;
  /* 11211360 jmp 0x11211370 */
  goto L_11211370;
L_11211362:;
  /* 11211362 mov dword ptr [0x1122f7d0], 1 */
  w32((uint32_t)(0x1122f7d0), (0x1u));
L_1121136c:;
  /* 1121136c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11211370:;
  /* 11211370 jmp 0x112115c0 */
  goto L_112115c0;
L_11211375:;
  /* 11211375 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211378 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1121137b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121137f je 0x11211389 */
  if (C.zf) goto L_11211389;
  /* 11211381 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211385 je 0x11211393 */
  if (C.zf) goto L_11211393;
  /* 11211387 jmp 0x11211397 */
  goto L_11211397;
L_11211389:;
  /* 11211389 mov dword ptr [0x1122f7d0], 1 */
  w32((uint32_t)(0x1122f7d0), (0x1u));
L_11211393:;
  /* 11211393 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11211397:;
  /* 11211397 jmp 0x112115c0 */
  goto L_112115c0;
L_1121139c:;
  /* 1121139c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121139f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 112113a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112113a6 je 0x112113b0 */
  if (C.zf) goto L_112113b0;
  /* 112113a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112113ac je 0x112113ba */
  if (C.zf) goto L_112113ba;
  /* 112113ae jmp 0x112113be */
  goto L_112113be;
L_112113b0:;
  /* 112113b0 mov dword ptr [0x1122f7d0], 1 */
  w32((uint32_t)(0x1122f7d0), (0x1u));
L_112113ba:;
  /* 112113ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_112113be:;
  /* 112113be jmp 0x112115c0 */
  goto L_112115c0;
L_112113c3:;
  /* 112113c3 push 0x1122b86c */
  push32((uint32_t)(0x1122b86cu));
  /* 112113c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112113cb push ecx */
  push32((uint32_t)(ECX));
  /* 112113cc call 0x11211c20 */
  push32(0x112113d1u); f_11211c20();
  /* 112113d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112113d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112113d6 jne 0x112113e3 */
  if (!C.zf) goto L_112113e3;
  /* 112113d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112113db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112113de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112113e1 jmp 0x11211401 */
  goto L_11211401;
L_112113e3:;
  /* 112113e3 push 0x1122b868 */
  push32((uint32_t)(0x1122b868u));
  /* 112113e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112113eb push eax */
  push32((uint32_t)(EAX));
  /* 112113ec call 0x11211c20 */
  push32(0x112113f1u); f_11211c20();
  /* 112113f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112113f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112113f6 jne 0x11211401 */
  if (!C.zf) goto L_11211401;
  /* 112113f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112113fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112113fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11211401:;
  /* 11211401 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11211405 jmp 0x112115c0 */
  goto L_112115c0;
L_1121140a:;
  /* 1121140a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1121140d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211411 jg 0x11211421 */
  if ((!C.zf&&C.sf==C.of)) goto L_11211421;
  /* 11211413 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11211416 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1121141c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1121141f jmp 0x1121142d */
  goto L_1121142d;
L_11211421:;
  /* 11211421 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11211424 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1121142a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1121142d:;
  /* 1121142d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211431 jle 0x112114d4 */
  if ((C.zf||C.sf!=C.of)) goto L_112114d4;
  /* 11211437 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121143a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121143d jbe 0x112114d4 */
  if ((C.cf||C.zf)) goto L_112114d4;
  /* 11211443 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11211446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211448 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1121144a mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 11211450 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211452 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211456 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1121145c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1121145e je 0x11211497 */
  if (C.zf) goto L_11211497;
  /* 11211460 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211463 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211466 jbe 0x11211497 */
  if ((C.cf||C.zf)) goto L_11211497;
  /* 11211468 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121146b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1121146d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11211470 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11211472 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11211474 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211477 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11211479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121147c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121147f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11211481 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11211484 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211487 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1121148a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121148d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121148f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211492 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211495 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11211497:;
  /* 11211497 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121149a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121149c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121149f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112114a1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112114a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112114a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112114a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112114ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112114ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112114b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112114b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112114b6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112114b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112114bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112114be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112114c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112114c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112114c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112114c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112114cc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112114cf jmp 0x1121142d */
  goto L_1121142d;
L_112114d4:;
  /* 112114d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112114d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112114da jmp 0x112111f6 */
  goto L_112111f6;
L_112114df:;
  /* 112114df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112114e2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112114e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112114e7 je 0x112115b2 */
  if (C.zf) goto L_112115b2;
  /* 112114ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112114f0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112114f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_112114f6:;
  /* 112114f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112114f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112114fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112114fe je 0x112115b0 */
  if (C.zf) goto L_112115b0;
  /* 11211504 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211507 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121150a je 0x112115b0 */
  if (C.zf) goto L_112115b0;
  /* 11211510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211513 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11211516 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211519 jne 0x11211529 */
  if (!C.zf) goto L_11211529;
  /* 1121151b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121151e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211521 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11211524 jmp 0x112115b0 */
  goto L_112115b0;
L_11211529:;
  /* 11211529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121152c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1121152e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11211530 mov edx, dword ptr [0x1122dc98] */
  EDX = (r32((uint32_t)(0x1122dc98)));
  /* 11211536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211538 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1121153c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11211541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11211543 je 0x1121157c */
  if (C.zf) goto L_1121157c;
  /* 11211545 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211548 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121154b jbe 0x1121157c */
  if ((C.cf||C.zf)) goto L_1121157c;
  /* 1121154d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211550 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11211552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211555 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11211557 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11211559 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121155c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121155e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211561 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211564 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11211566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121156c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1121156f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211572 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11211574 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211577 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121157a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1121157c:;
  /* 1121157c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121157f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11211581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211584 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11211586 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11211588 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121158b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1121158d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211590 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211593 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11211595 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211598 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121159b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1121159e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112115a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112115a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112115a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112115a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112115ab jmp 0x112114f6 */
  goto L_112114f6;
L_112115b0:;
  /* 112115b0 jmp 0x112115bb */
  goto L_112115bb;
L_112115b2:;
  /* 112115b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112115b5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112115b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112115bb:;
  /* 112115bb jmp 0x112111f6 */
  goto L_112111f6;
L_112115c0:;
  /* 112115c0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112115c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112115c6 je 0x112115ec */
  if (C.zf) goto L_112115ec;
  /* 112115c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112115cb push edx */
  push32((uint32_t)(EDX));
  /* 112115cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112115cf push eax */
  push32((uint32_t)(EAX));
  /* 112115d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112115d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112115d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112115d7 push edx */
  push32((uint32_t)(EDX));
  /* 112115d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112115db push eax */
  push32((uint32_t)(EAX));
  /* 112115dc call 0x11210a20 */
  push32(0x112115e1u); f_11210a20();
  /* 112115e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112115e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112115e7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112115ea jmp 0x11211667 */
  goto L_11211667;
L_112115ec:;
  /* 112115ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112115ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112115f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112115f3 mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 112115f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112115fb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112115ff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11211605 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11211607 je 0x11211638 */
  if (C.zf) goto L_11211638;
  /* 11211609 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121160c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121160e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211611 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11211613 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11211615 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211618 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1121161a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121161d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211620 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11211622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211625 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211628 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1121162b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121162e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11211630 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211633 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211636 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11211638:;
  /* 11211638 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121163b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1121163d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211640 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11211642 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11211644 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211647 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11211649 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121164c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121164f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11211651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211657 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1121165a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121165d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1121165f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211662 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211665 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11211667:;
  /* 11211667 jmp 0x112111f6 */
  goto L_112111f6;
L_1121166c:;
  /* 1121166c mov esp, ebp */
  ESP = (EBP);
  /* 1121166e pop ebp */
  EBP = (pop32());
  /* 1121166f ret  */
  ESPCHK(0x112111f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011710 @ 0x11211710 (650 bytes, 178 insns) */
void f_11211710(void) {
  FTRACE(0x11211710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211710 push ebp */
  push32((uint32_t)(EBP));
  /* 11211711 mov ebp, esp */
  EBP = (ESP);
  /* 11211713 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211719 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121171d jne 0x11211879 */
  if (!C.zf) goto L_11211879;
  /* 11211723 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211726 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1121172c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11211732 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11211735 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1121173c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11211746 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211748 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1121174e push edx */
  push32((uint32_t)(EDX));
  /* 1121174f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211752 push eax */
  push32((uint32_t)(EAX));
  /* 11211753 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211756 push ecx */
  push32((uint32_t)(ECX));
  /* 11211757 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1121175a push edx */
  push32((uint32_t)(EDX));
  /* 1121175b call 0x11212b30 */
  push32(0x11211760u); f_11212b30();
  /* 11211760 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211763 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11211766 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121176a jne 0x112117ff */
  if (!C.zf) goto L_112117ff;
  /* 11211770 call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x11211776u);
  /* 11211776 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211779 je 0x11211780 */
  if (C.zf) goto L_11211780;
  /* 1121177b jmp 0x1121185d */
  goto L_1121185d;
L_11211780:;
  /* 11211780 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211786 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211789 push eax */
  push32((uint32_t)(EAX));
  /* 1121178a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1121178d push ecx */
  push32((uint32_t)(ECX));
  /* 1121178e call 0x11212b30 */
  push32(0x11211793u); f_11212b30();
  /* 11211793 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211796 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1121179c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112117a3 jne 0x112117aa */
  if (!C.zf) goto L_112117aa;
  /* 112117a5 jmp 0x1121185d */
  goto L_1121185d;
L_112117aa:;
  /* 112117aa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 112117ac push 0x1122b874 */
  push32((uint32_t)(0x1122b874u));
  /* 112117b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112117b3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 112117b9 push edx */
  push32((uint32_t)(EDX));
  /* 112117ba call 0x11203550 */
  push32(0x112117bfu); f_11203550();
  /* 112117bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112117c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112117c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112117c9 jne 0x112117d0 */
  if (!C.zf) goto L_112117d0;
  /* 112117cb jmp 0x1121185d */
  goto L_1121185d;
L_112117d0:;
  /* 112117d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112117d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112117d9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 112117df push eax */
  push32((uint32_t)(EAX));
  /* 112117e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112117e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112117e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112117e7 push edx */
  push32((uint32_t)(EDX));
  /* 112117e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112117eb push eax */
  push32((uint32_t)(EAX));
  /* 112117ec call 0x11212b30 */
  push32(0x112117f1u); f_11212b30();
  /* 112117f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112117f4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112117f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112117fb jne 0x112117ff */
  if (!C.zf) goto L_112117ff;
  /* 112117fd jmp 0x1121185d */
  goto L_1121185d;
L_112117ff:;
  /* 112117ff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11211801 push 0x1122b874 */
  push32((uint32_t)(0x1122b874u));
  /* 11211806 push 2 */
  push32((uint32_t)(0x2u));
  /* 11211808 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121180b push ecx */
  push32((uint32_t)(ECX));
  /* 1121180c call 0x11203550 */
  push32(0x11211811u); f_11203550();
  /* 11211811 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211814 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1121181a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1121181c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11211822 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211825 jne 0x11211829 */
  if (!C.zf) goto L_11211829;
  /* 11211827 jmp 0x1121185d */
  goto L_1121185d;
L_11211829:;
  /* 11211829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121182c push ecx */
  push32((uint32_t)(ECX));
  /* 1121182d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211830 push edx */
  push32((uint32_t)(EDX));
  /* 11211831 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11211837 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11211839 push ecx */
  push32((uint32_t)(ECX));
  /* 1121183a call 0x11206d70 */
  push32(0x1121183fu); f_11206d70();
  /* 1121183f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211842 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211846 je 0x11211856 */
  if (C.zf) goto L_11211856;
  /* 11211848 push 2 */
  push32((uint32_t)(0x2u));
  /* 1121184a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121184d push edx */
  push32((uint32_t)(EDX));
  /* 1121184e call 0x11203fe0 */
  push32(0x11211853u); f_11203fe0();
  /* 11211853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11211856:;
  /* 11211856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211858 jmp 0x11211996 */
  goto L_11211996;
L_1121185d:;
  /* 1121185d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211861 je 0x11211871 */
  if (C.zf) goto L_11211871;
  /* 11211863 push 2 */
  push32((uint32_t)(0x2u));
  /* 11211865 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211868 push eax */
  push32((uint32_t)(EAX));
  /* 11211869 call 0x11203fe0 */
  push32(0x1121186eu); f_11203fe0();
  /* 1121186e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11211871:;
  /* 11211871 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11211874 jmp 0x11211996 */
  goto L_11211996;
L_11211879:;
  /* 11211879 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121187d jne 0x11211993 */
  if (!C.zf) goto L_11211993;
  /* 11211883 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1121188d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211890 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11211896 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211898 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1121189e push edx */
  push32((uint32_t)(EDX));
  /* 1121189f push 0x1122f6e8 */
  push32((uint32_t)(0x1122f6e8u));
  /* 112118a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112118a7 push eax */
  push32((uint32_t)(EAX));
  /* 112118a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112118ab push ecx */
  push32((uint32_t)(ECX));
  /* 112118ac call 0x11212990 */
  push32(0x112118b1u); f_11212990();
  /* 112118b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112118b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112118b6 jne 0x112118c0 */
  if (!C.zf) goto L_112118c0;
  /* 112118b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112118bb jmp 0x11211996 */
  goto L_11211996;
L_112118c0:;
  /* 112118c0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112118c6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112118c9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 112118d3 jmp 0x112118e4 */
  goto L_112118e4;
L_112118d5:;
  /* 112118d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112118db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112118de mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_112118e4:;
  /* 112118e4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112118eb jge 0x1121198f */
  if ((C.sf==C.of)) goto L_1121198f;
  /* 112118f1 cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112118f8 jle 0x1121192b */
  if ((C.zf||C.sf!=C.of)) goto L_1121192b;
  /* 112118fa push 4 */
  push32((uint32_t)(0x4u));
  /* 112118fc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11211902 mov dl, byte ptr [ecx*2 + 0x1122f6e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x1122f6e8)));
  /* 11211909 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1121190f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11211915 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1121191a push eax */
  push32((uint32_t)(EAX));
  /* 1121191b call 0x11209560 */
  push32(0x11211920u); f_11209560();
  /* 11211920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211923 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11211929 jmp 0x1121195e */
  goto L_1121195e;
L_1121192b:;
  /* 1121192b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11211931 mov dl, byte ptr [ecx*2 + 0x1122f6e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x1122f6e8)));
  /* 11211938 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1121193e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11211944 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11211949 mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 1121194f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211951 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211955 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11211958 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1121195e:;
  /* 1121195e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211965 je 0x11211988 */
  if (C.zf) goto L_11211988;
  /* 11211967 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1121196d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11211970 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11211973 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1121197a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1121197e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11211984 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11211986 jmp 0x1121198a */
  goto L_1121198a;
L_11211988:;
  /* 11211988 jmp 0x1121198f */
  goto L_1121198f;
L_1121198a:;
  /* 1121198a jmp 0x112118d5 */
  goto L_112118d5;
L_1121198f:;
  /* 1121198f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211991 jmp 0x11211996 */
  goto L_11211996;
L_11211993:;
  /* 11211993 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11211996:;
  /* 11211996 mov esp, ebp */
  ESP = (EBP);
  /* 11211998 pop ebp */
  EBP = (pop32());
  /* 11211999 ret  */
  ESPCHK(0x11211710u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x112119a0 (10 bytes, 5 insns) */
void f_112119a0(void) {
  FTRACE(0x112119a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112119a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112119a1 mov ebp, esp */
  EBP = (ESP);
  /* 112119a3 mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 112119a8 pop ebp */
  EBP = (pop32());
  /* 112119a9 ret  */
  ESPCHK(0x112119a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x112119b0 (575 bytes, 196 insns) */
void f_112119b0(void) {
  FTRACE(0x112119b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112119b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112119b1 mov ebp, esp */
  EBP = (ESP);
  /* 112119b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112119b5 push 0x1122b880 */
  push32((uint32_t)(0x1122b880u));
  /* 112119ba push 0x1120c658 */
  push32((uint32_t)(0x1120c658u));
  /* 112119bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112119c5 push eax */
  push32((uint32_t)(EAX));
  /* 112119c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112119cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112119d0 push ebx */
  push32((uint32_t)(EBX));
  /* 112119d1 push esi */
  push32((uint32_t)(ESI));
  /* 112119d2 push edi */
  push32((uint32_t)(EDI));
  /* 112119d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112119d6 cmp dword ptr [0x1122f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112119dd jne 0x11211a2e */
  if (!C.zf) goto L_11211a2e;
  /* 112119df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 112119e2 push eax */
  push32((uint32_t)(EAX));
  /* 112119e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112119e5 push 0x1122afb4 */
  push32((uint32_t)(0x1122afb4u));
  /* 112119ea push 1 */
  push32((uint32_t)(0x1u));
  /* 112119ec call dword ptr [0x112312d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d0))), 0x112119f2u);
  /* 112119f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112119f4 je 0x11211a02 */
  if (C.zf) goto L_11211a02;
  /* 112119f6 mov dword ptr [0x1122f6f4], 1 */
  w32((uint32_t)(0x1122f6f4), (0x1u));
  /* 11211a00 jmp 0x11211a2e */
  goto L_11211a2e;
L_11211a02:;
  /* 11211a02 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11211a05 push ecx */
  push32((uint32_t)(ECX));
  /* 11211a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11211a08 push 0x1122afb0 */
  push32((uint32_t)(0x1122afb0u));
  /* 11211a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11211a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11211a11 call dword ptr [0x112312d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d4))), 0x11211a17u);
  /* 11211a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11211a19 je 0x11211a27 */
  if (C.zf) goto L_11211a27;
  /* 11211a1b mov dword ptr [0x1122f6f4], 2 */
  w32((uint32_t)(0x1122f6f4), (0x2u));
  /* 11211a25 jmp 0x11211a2e */
  goto L_11211a2e;
L_11211a27:;
  /* 11211a27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211a29 jmp 0x11211c09 */
  goto L_11211c09;
L_11211a2e:;
  /* 11211a2e cmp dword ptr [0x1122f6f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211a35 jne 0x11211a52 */
  if (!C.zf) goto L_11211a52;
  /* 11211a37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211a3a push edx */
  push32((uint32_t)(EDX));
  /* 11211a3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211a3e push eax */
  push32((uint32_t)(EAX));
  /* 11211a3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11211a42 push ecx */
  push32((uint32_t)(ECX));
  /* 11211a43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211a46 push edx */
  push32((uint32_t)(EDX));
  /* 11211a47 call dword ptr [0x112312d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d0))), 0x11211a4du);
  /* 11211a4d jmp 0x11211c09 */
  goto L_11211c09;
L_11211a52:;
  /* 11211a52 cmp dword ptr [0x1122f6f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211a59 jne 0x11211c07 */
  if (!C.zf) goto L_11211c07;
  /* 11211a5f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211a63 jne 0x11211a6d */
  if (!C.zf) goto L_11211a6d;
  /* 11211a65 mov eax, dword ptr [0x1122f668] */
  EAX = (r32((uint32_t)(0x1122f668)));
  /* 11211a6a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11211a6d:;
  /* 11211a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11211a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11211a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211a75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211a78 push ecx */
  push32((uint32_t)(ECX));
  /* 11211a79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11211a7c push edx */
  push32((uint32_t)(EDX));
  /* 11211a7d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11211a82 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11211a85 push eax */
  push32((uint32_t)(EAX));
  /* 11211a86 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11211a8cu);
  /* 11211a8c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11211a8f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211a93 jne 0x11211a9c */
  if (!C.zf) goto L_11211a9c;
  /* 11211a95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211a97 jmp 0x11211c09 */
  goto L_11211c09;
L_11211a9c:;
  /* 11211a9c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11211aa3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11211aa6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211aa9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11211aab call 0x112066f0 */
  push32(0x11211ab0u); f_112066f0();
  /* 11211ab0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11211ab3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11211ab6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11211ab9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11211abc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11211abf push edx */
  push32((uint32_t)(EDX));
  /* 11211ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211ac2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11211ac5 push eax */
  push32((uint32_t)(EAX));
  /* 11211ac6 call 0x112072c0 */
  push32(0x11211acbu); f_112072c0();
  /* 11211acb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211ace mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11211ad5 jmp 0x11211aee */
  goto L_11211aee;
  /* 11211ad7 mov eax, 1 */
  EAX = (0x1u);
  /* 11211adc ret  */
  ESPCHK(0x112119b0u, _esp0);
  ESP += 4; return;
  /* 11211add mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11211ae0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11211ae7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11211aee:;
  /* 11211aee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211af2 jne 0x11211afb */
  if (!C.zf) goto L_11211afb;
  /* 11211af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211af6 jmp 0x11211c09 */
  goto L_11211c09;
L_11211afb:;
  /* 11211afb push 0 */
  push32((uint32_t)(0x0u));
  /* 11211afd push 0 */
  push32((uint32_t)(0x0u));
  /* 11211aff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11211b02 push ecx */
  push32((uint32_t)(ECX));
  /* 11211b03 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11211b06 push edx */
  push32((uint32_t)(EDX));
  /* 11211b07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211b0a push eax */
  push32((uint32_t)(EAX));
  /* 11211b0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11211b0e push ecx */
  push32((uint32_t)(ECX));
  /* 11211b0f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11211b14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11211b17 push edx */
  push32((uint32_t)(EDX));
  /* 11211b18 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11211b1eu);
  /* 11211b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11211b20 jne 0x11211b29 */
  if (!C.zf) goto L_11211b29;
  /* 11211b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211b24 jmp 0x11211c09 */
  goto L_11211c09;
L_11211b29:;
  /* 11211b29 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11211b30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11211b33 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11211b37 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211b3a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11211b3c call 0x112066f0 */
  push32(0x11211b41u); f_112066f0();
  /* 11211b41 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11211b44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11211b47 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11211b4a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11211b4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11211b54 jmp 0x11211b6d */
  goto L_11211b6d;
  /* 11211b56 mov eax, 1 */
  EAX = (0x1u);
  /* 11211b5b ret  */
  ESPCHK(0x112119b0u, _esp0);
  ESP += 4; return;
  /* 11211b5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11211b5f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11211b66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11211b6d:;
  /* 11211b6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211b71 jne 0x11211b7a */
  if (!C.zf) goto L_11211b7a;
  /* 11211b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211b75 jmp 0x11211c09 */
  goto L_11211c09;
L_11211b7a:;
  /* 11211b7a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211b7e jne 0x11211b89 */
  if (!C.zf) goto L_11211b89;
  /* 11211b80 mov edx, dword ptr [0x1122f658] */
  EDX = (r32((uint32_t)(0x1122f658)));
  /* 11211b86 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11211b89:;
  /* 11211b89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211b8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11211b8f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11211b95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211b98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11211b9b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11211ba2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11211ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 11211ba6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11211ba9 push edx */
  push32((uint32_t)(EDX));
  /* 11211baa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11211bad push eax */
  push32((uint32_t)(EAX));
  /* 11211bae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11211bb2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11211bb5 push edx */
  push32((uint32_t)(EDX));
  /* 11211bb6 call dword ptr [0x112312d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d4))), 0x11211bbcu);
  /* 11211bbc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11211bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211bc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11211bc5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211bc7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11211bcc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211bd2 je 0x11211be8 */
  if (C.zf) goto L_11211be8;
  /* 11211bd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211bd7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11211bda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211bdc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211be0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211be6 je 0x11211bec */
  if (C.zf) goto L_11211bec;
L_11211be8:;
  /* 11211be8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211bea jmp 0x11211c09 */
  goto L_11211c09;
L_11211bec:;
  /* 11211bec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211bef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11211bf1 push eax */
  push32((uint32_t)(EAX));
  /* 11211bf2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11211bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11211bf6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11211bf9 push edx */
  push32((uint32_t)(EDX));
  /* 11211bfa call 0x1120b440 */
  push32(0x11211bffu); f_1120b440();
  /* 11211bff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211c02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11211c05 jmp 0x11211c09 */
  goto L_11211c09;
L_11211c07:;
  /* 11211c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11211c09:;
  /* 11211c09 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11211c0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11211c0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11211c16 pop edi */
  EDI = (pop32());
  /* 11211c17 pop esi */
  ESI = (pop32());
  /* 11211c18 pop ebx */
  EBX = (pop32());
  /* 11211c19 mov esp, ebp */
  ESP = (EBP);
  /* 11211c1b pop ebp */
  EBP = (pop32());
  /* 11211c1c ret  */
  ESPCHK(0x112119b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c20 @ 0x11211c20 (208 bytes, 85 insns) */
void f_11211c20(void) {
  FTRACE(0x11211c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11211c21 mov ebp, esp */
  EBP = (ESP);
  /* 11211c23 push edi */
  push32((uint32_t)(EDI));
  /* 11211c24 push esi */
  push32((uint32_t)(ESI));
  /* 11211c25 push ebx */
  push32((uint32_t)(EBX));
  /* 11211c26 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11211c29 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11211c2c lea eax, [0x1122f650] */
  EAX = ((uint32_t)(0x1122f650));
  /* 11211c32 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211c36 jne 0x11211c73 */
  if (!C.zf) goto L_11211c73;
  /* 11211c38 mov al, 0xff */
  AL = (0xffu);
  /* 11211c3a mov edi, edi */
  EDI = (EDI);
L_11211c3c:;
  /* 11211c3c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11211c3e je 0x11211c6e */
  if (C.zf) goto L_11211c6e;
  /* 11211c40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11211c42 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11211c43 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11211c45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11211c46 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211c48 je 0x11211c3c */
  if (C.zf) goto L_11211c3c;
  /* 11211c4a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11211c4c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211c4e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11211c50 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11211c53 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11211c55 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11211c57 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11211c59 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11211c5b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211c5d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11211c5f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11211c62 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11211c64 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11211c66 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211c68 je 0x11211c3c */
  if (C.zf) goto L_11211c3c;
  /* 11211c6a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11211c6c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11211c6e:;
  /* 11211c6e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11211c71 jmp 0x11211ceb */
  goto L_11211ceb;
L_11211c73:;
  /* 11211c73 lock inc dword ptr [0x1122f7e4] */
  x86_unimpl("lock inc @ 0x11211c73");
  /* 11211c7a cmp dword ptr [0x1122f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211c81 jg 0x11211c87 */
  if ((!C.zf&&C.sf==C.of)) goto L_11211c87;
  /* 11211c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211c85 jmp 0x11211c9c */
  goto L_11211c9c;
L_11211c87:;
  /* 11211c87 lock dec dword ptr [0x1122f7e4] */
  x86_unimpl("lock dec @ 0x11211c87");
  /* 11211c8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11211c90 call 0x11206f50 */
  push32(0x11211c95u); f_11206f50();
  /* 11211c95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11211c9c:;
  /* 11211c9c mov eax, 0xff */
  EAX = (0xffu);
  /* 11211ca1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11211ca3 nop  */
  /* nop */
L_11211ca4:;
  /* 11211ca4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11211ca6 je 0x11211ccf */
  if (C.zf) goto L_11211ccf;
  /* 11211ca8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11211caa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11211cab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11211cad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11211cae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211cb0 je 0x11211ca4 */
  if (C.zf) goto L_11211ca4;
  /* 11211cb2 push eax */
  push32((uint32_t)(EAX));
  /* 11211cb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11211cb4 call 0x11212d90 */
  push32(0x11211cb9u); f_11212d90();
  /* 11211cb9 mov ebx, eax */
  EBX = (EAX);
  /* 11211cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211cbe call 0x11212d90 */
  push32(0x11211cc3u); f_11212d90();
  /* 11211cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211cc6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211cc8 je 0x11211ca4 */
  if (C.zf) goto L_11211ca4;
  /* 11211cca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211ccc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11211ccf:;
  /* 11211ccf mov ebx, eax */
  EBX = (EAX);
  /* 11211cd1 pop eax */
  EAX = (pop32());
  /* 11211cd2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211cd4 jne 0x11211cdf */
  if (!C.zf) goto L_11211cdf;
  /* 11211cd6 lock dec dword ptr [0x1122f7e4] */
  x86_unimpl("lock dec @ 0x11211cd6");
  /* 11211cdd jmp 0x11211ce9 */
  goto L_11211ce9;
L_11211cdf:;
  /* 11211cdf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11211ce1 call 0x11206ff0 */
  push32(0x11211ce6u); f_11206ff0();
  /* 11211ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11211ce9:;
  /* 11211ce9 mov eax, ebx */
  EAX = (EBX);
L_11211ceb:;
  /* 11211ceb pop ebx */
  EBX = (pop32());
  /* 11211cec pop esi */
  ESI = (pop32());
  /* 11211ced pop edi */
  EDI = (pop32());
  /* 11211cee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11211cef ret  */
  ESPCHK(0x11211c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x11211cf0 (257 bytes, 103 insns) */
void f_11211cf0(void) {
  FTRACE(0x11211cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11211cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11211cf3 push edi */
  push32((uint32_t)(EDI));
  /* 11211cf4 push esi */
  push32((uint32_t)(ESI));
  /* 11211cf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11211cf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11211cf9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11211cfb je 0x11211dea */
  if (C.zf) goto L_11211dea;
  /* 11211d01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11211d04 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11211d07 lea eax, [0x1122f650] */
  EAX = ((uint32_t)(0x1122f650));
  /* 11211d0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211d11 jne 0x11211d61 */
  if (!C.zf) goto L_11211d61;
  /* 11211d13 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11211d15 mov bl, 0x5a */
  BL = (0x5au);
  /* 11211d17 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11211d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11211d1c:;
  /* 11211d1c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11211d1e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11211d20 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11211d22 je 0x11211d45 */
  if (C.zf) goto L_11211d45;
  /* 11211d24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11211d26 je 0x11211d45 */
  if (C.zf) goto L_11211d45;
  /* 11211d28 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11211d29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11211d2a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211d2c jb 0x11211d34 */
  if (C.cf) goto L_11211d34;
  /* 11211d2e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211d30 ja 0x11211d34 */
  if ((!C.cf&&!C.zf)) goto L_11211d34;
  /* 11211d32 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11211d34:;
  /* 11211d34 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211d36 jb 0x11211d3e */
  if (C.cf) goto L_11211d3e;
  /* 11211d38 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211d3a ja 0x11211d3e */
  if ((!C.cf&&!C.zf)) goto L_11211d3e;
  /* 11211d3c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11211d3e:;
  /* 11211d3e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211d40 jne 0x11211d4f */
  if (!C.zf) goto L_11211d4f;
  /* 11211d42 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11211d43 jne 0x11211d1c */
  if (!C.zf) goto L_11211d1c;
L_11211d45:;
  /* 11211d45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11211d47 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11211d49 je 0x11211dea */
  if (C.zf) goto L_11211dea;
L_11211d4f:;
  /* 11211d4f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11211d54 jb 0x11211dea */
  if (C.cf) goto L_11211dea;
  /* 11211d5a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11211d5c jmp 0x11211dea */
  goto L_11211dea;
L_11211d61:;
  /* 11211d61 lock inc dword ptr [0x1122f7e4] */
  x86_unimpl("lock inc @ 0x11211d61");
  /* 11211d68 cmp dword ptr [0x1122f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211d6f jg 0x11211d75 */
  if ((!C.zf&&C.sf==C.of)) goto L_11211d75;
  /* 11211d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11211d73 jmp 0x11211d8e */
  goto L_11211d8e;
L_11211d75:;
  /* 11211d75 lock dec dword ptr [0x1122f7e4] */
  x86_unimpl("lock dec @ 0x11211d75");
  /* 11211d7c mov ebx, ecx */
  EBX = (ECX);
  /* 11211d7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11211d80 call 0x11206f50 */
  push32(0x11211d85u); f_11206f50();
  /* 11211d85 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11211d8c mov ecx, ebx */
  ECX = (EBX);
L_11211d8e:;
  /* 11211d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211d90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11211d92 mov edi, edi */
  EDI = (EDI);
L_11211d94:;
  /* 11211d94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11211d96 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211d98 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11211d9a je 0x11211dbf */
  if (C.zf) goto L_11211dbf;
  /* 11211d9c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11211d9e je 0x11211dbf */
  if (C.zf) goto L_11211dbf;
  /* 11211da0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11211da1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11211da2 push ecx */
  push32((uint32_t)(ECX));
  /* 11211da3 push eax */
  push32((uint32_t)(EAX));
  /* 11211da4 push ebx */
  push32((uint32_t)(EBX));
  /* 11211da5 call 0x11212d90 */
  push32(0x11211daau); f_11212d90();
  /* 11211daa mov ebx, eax */
  EBX = (EAX);
  /* 11211dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211daf call 0x11212d90 */
  push32(0x11211db4u); f_11212d90();
  /* 11211db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211db7 pop ecx */
  ECX = (pop32());
  /* 11211db8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211dba jne 0x11211dc5 */
  if (!C.zf) goto L_11211dc5;
  /* 11211dbc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11211dbd jne 0x11211d94 */
  if (!C.zf) goto L_11211d94;
L_11211dbf:;
  /* 11211dbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11211dc1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211dc3 je 0x11211dce */
  if (C.zf) goto L_11211dce;
L_11211dc5:;
  /* 11211dc5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11211dca jb 0x11211dce */
  if (C.cf) goto L_11211dce;
  /* 11211dcc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11211dce:;
  /* 11211dce pop eax */
  EAX = (pop32());
  /* 11211dcf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211dd1 jne 0x11211ddc */
  if (!C.zf) goto L_11211ddc;
  /* 11211dd3 lock dec dword ptr [0x1122f7e4] */
  x86_unimpl("lock dec @ 0x11211dd3");
  /* 11211dda jmp 0x11211dea */
  goto L_11211dea;
L_11211ddc:;
  /* 11211ddc mov ebx, ecx */
  EBX = (ECX);
  /* 11211dde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11211de0 call 0x11206ff0 */
  push32(0x11211de5u); f_11206ff0();
  /* 11211de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211de8 mov ecx, ebx */
  ECX = (EBX);
L_11211dea:;
  /* 11211dea mov eax, ecx */
  EAX = (ECX);
  /* 11211dec pop ebx */
  EBX = (pop32());
  /* 11211ded pop esi */
  ESI = (pop32());
  /* 11211dee pop edi */
  EDI = (pop32());
  /* 11211def leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11211df0 ret  */
  ESPCHK(0x11211cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x11211e00 (255 bytes, 88 insns) */
void f_11211e00(void) {
  FTRACE(0x11211e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11211e01 mov ebp, esp */
  EBP = (ESP);
  /* 11211e03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11211e06:;
  /* 11211e06 cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211e0d jle 0x11211e26 */
  if ((C.zf||C.sf!=C.of)) goto L_11211e26;
  /* 11211e0f push 8 */
  push32((uint32_t)(0x8u));
  /* 11211e11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11211e16 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11211e18 push ecx */
  push32((uint32_t)(ECX));
  /* 11211e19 call 0x11209560 */
  push32(0x11211e1eu); f_11209560();
  /* 11211e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211e21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11211e24 jmp 0x11211e3f */
  goto L_11211e3f;
L_11211e26:;
  /* 11211e26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211e2b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11211e2d mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 11211e33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211e35 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211e39 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11211e3c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11211e3f:;
  /* 11211e3f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211e43 je 0x11211e50 */
  if (C.zf) goto L_11211e50;
  /* 11211e45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211e4b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11211e4e jmp 0x11211e06 */
  goto L_11211e06;
L_11211e50:;
  /* 11211e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211e55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11211e57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11211e5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211e60 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11211e63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211e66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11211e69 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211e6d je 0x11211e75 */
  if (C.zf) goto L_11211e75;
  /* 11211e6f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211e73 jne 0x11211e88 */
  if (!C.zf) goto L_11211e88;
L_11211e75:;
  /* 11211e75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211e7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11211e7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11211e7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211e85 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11211e88:;
  /* 11211e88 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11211e8f:;
  /* 11211e8f cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211e96 jle 0x11211eab */
  if ((C.zf||C.sf!=C.of)) goto L_11211eab;
  /* 11211e98 push 4 */
  push32((uint32_t)(0x4u));
  /* 11211e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211e9d push edx */
  push32((uint32_t)(EDX));
  /* 11211e9e call 0x11209560 */
  push32(0x11211ea3u); f_11209560();
  /* 11211ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211ea6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11211ea9 jmp 0x11211ec0 */
  goto L_11211ec0;
L_11211eab:;
  /* 11211eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211eae mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 11211eb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211eb6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211eba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11211ebd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11211ec0:;
  /* 11211ec0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211ec4 je 0x11211eeb */
  if (C.zf) goto L_11211eeb;
  /* 11211ec6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11211ec9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11211ecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211ecf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11211ed3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11211ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211ed9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11211edb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11211edd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11211ee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211ee3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211ee6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11211ee9 jmp 0x11211e8f */
  goto L_11211e8f;
L_11211eeb:;
  /* 11211eeb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211eef jne 0x11211ef8 */
  if (!C.zf) goto L_11211ef8;
  /* 11211ef1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11211ef4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11211ef6 jmp 0x11211efb */
  goto L_11211efb;
L_11211ef8:;
  /* 11211ef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11211efb:;
  /* 11211efb mov esp, ebp */
  ESP = (EBP);
  /* 11211efd pop ebp */
  EBP = (pop32());
  /* 11211efe ret  */
  ESPCHK(0x11211e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f00 @ 0x11211f00 (17 bytes, 8 insns) */
void f_11211f00(void) {
  FTRACE(0x11211f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11211f01 mov ebp, esp */
  EBP = (ESP);
  /* 11211f03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f06 push eax */
  push32((uint32_t)(EAX));
  /* 11211f07 call 0x11211e00 */
  push32(0x11211f0cu); f_11211e00();
  /* 11211f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211f0f pop ebp */
  EBP = (pop32());
  /* 11211f10 ret  */
  ESPCHK(0x11211f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f20 @ 0x11211f20 (297 bytes, 106 insns) */
void f_11211f20(void) {
  FTRACE(0x11211f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11211f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11211f21 mov ebp, esp */
  EBP = (ESP);
  /* 11211f23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11211f26 push esi */
  push32((uint32_t)(ESI));
L_11211f27:;
  /* 11211f27 cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211f2e jle 0x11211f47 */
  if ((C.zf||C.sf!=C.of)) goto L_11211f47;
  /* 11211f30 push 8 */
  push32((uint32_t)(0x8u));
  /* 11211f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11211f37 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11211f39 push ecx */
  push32((uint32_t)(ECX));
  /* 11211f3a call 0x11209560 */
  push32(0x11211f3fu); f_11209560();
  /* 11211f3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211f42 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11211f45 jmp 0x11211f60 */
  goto L_11211f60;
L_11211f47:;
  /* 11211f47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211f4c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11211f4e mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 11211f54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211f56 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211f5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11211f5d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11211f60:;
  /* 11211f60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211f64 je 0x11211f71 */
  if (C.zf) goto L_11211f71;
  /* 11211f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211f6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11211f6f jmp 0x11211f27 */
  goto L_11211f27;
L_11211f71:;
  /* 11211f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211f76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11211f78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11211f7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211f81 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11211f84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211f87 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11211f8a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211f8e je 0x11211f96 */
  if (C.zf) goto L_11211f96;
  /* 11211f90 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211f94 jne 0x11211fa9 */
  if (!C.zf) goto L_11211fa9;
L_11211f96:;
  /* 11211f96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211f99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11211f9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11211f9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11211fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11211fa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11211fa6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11211fa9:;
  /* 11211fa9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11211fb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11211fb7:;
  /* 11211fb7 cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211fbe jle 0x11211fd3 */
  if ((C.zf||C.sf!=C.of)) goto L_11211fd3;
  /* 11211fc0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11211fc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211fc5 push edx */
  push32((uint32_t)(EDX));
  /* 11211fc6 call 0x11209560 */
  push32(0x11211fcbu); f_11209560();
  /* 11211fcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11211fce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11211fd1 jmp 0x11211fe8 */
  goto L_11211fe8;
L_11211fd3:;
  /* 11211fd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11211fd6 mov ecx, dword ptr [0x1122dc98] */
  ECX = (r32((uint32_t)(0x1122dc98)));
  /* 11211fdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11211fde mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11211fe2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11211fe5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11211fe8:;
  /* 11211fe8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11211fec je 0x11212029 */
  if (C.zf) goto L_11212029;
  /* 11211fee push 0 */
  push32((uint32_t)(0x0u));
  /* 11211ff0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11211ff2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11211ff5 push eax */
  push32((uint32_t)(EAX));
  /* 11211ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11211ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11211ffa call 0x11212ec0 */
  push32(0x11211fffu); f_11212ec0();
  /* 11211fff mov ecx, eax */
  ECX = (EAX);
  /* 11212001 mov esi, edx */
  ESI = (EDX);
  /* 11212003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212006 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212009 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1121200a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121200c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1121200e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11212011 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11212014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212019 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1121201b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1121201e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212024 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11212027 jmp 0x11211fb7 */
  goto L_11211fb7;
L_11212029:;
  /* 11212029 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121202d jne 0x1121203e */
  if (!C.zf) goto L_1121203e;
  /* 1121202f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212032 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11212034 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212037 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121203a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1121203c jmp 0x11212044 */
  goto L_11212044;
L_1121203e:;
  /* 1121203e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212041 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11212044:;
  /* 11212044 pop esi */
  ESI = (pop32());
  /* 11212045 mov esp, ebp */
  ESP = (EBP);
  /* 11212047 pop ebp */
  EBP = (pop32());
  /* 11212048 ret  */
  ESPCHK(0x11211f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x11212050 (61 bytes, 18 insns) */
void f_11212050(void) {
  FTRACE(0x11212050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212050 push ebp */
  push32((uint32_t)(EBP));
  /* 11212051 mov ebp, esp */
  EBP = (ESP);
  /* 11212053 cmp dword ptr [0x1122f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121205a jne 0x1121208b */
  if (!C.zf) goto L_1121208b;
  /* 1121205c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1121205e call 0x11206f50 */
  push32(0x11212063u); f_11206f50();
  /* 11212063 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212066 cmp dword ptr [0x1122f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121206d jne 0x11212081 */
  if (!C.zf) goto L_11212081;
  /* 1121206f call 0x112120b0 */
  push32(0x11212074u); f_112120b0();
  /* 11212074 mov eax, dword ptr [0x1122f7b0] */
  EAX = (r32((uint32_t)(0x1122f7b0)));
  /* 11212079 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121207c mov dword ptr [0x1122f7b0], eax */
  w32((uint32_t)(0x1122f7b0), (EAX));
L_11212081:;
  /* 11212081 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11212083 call 0x11206ff0 */
  push32(0x11212088u); f_11206ff0();
  /* 11212088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1121208b:;
  /* 1121208b pop ebp */
  EBP = (pop32());
  /* 1121208c ret  */
  ESPCHK(0x11212050u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x11212090 (30 bytes, 11 insns) */
void f_11212090(void) {
  FTRACE(0x11212090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212090 push ebp */
  push32((uint32_t)(EBP));
  /* 11212091 mov ebp, esp */
  EBP = (ESP);
  /* 11212093 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11212095 call 0x11206f50 */
  push32(0x1121209au); f_11206f50();
  /* 1121209a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121209d call 0x112120b0 */
  push32(0x112120a2u); f_112120b0();
  /* 112120a2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112120a4 call 0x11206ff0 */
  push32(0x112120a9u); f_11206ff0();
  /* 112120a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112120ac pop ebp */
  EBP = (pop32());
  /* 112120ad ret  */
  ESPCHK(0x11212090u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x112120b0 (939 bytes, 266 insns) */
void f_112120b0(void) {
  FTRACE(0x112120b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112120b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112120b1 mov ebp, esp */
  EBP = (ESP);
  /* 112120b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112120b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112120bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 112120bf call 0x11206f50 */
  push32(0x112120c4u); f_11206f50();
  /* 112120c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112120c7 mov dword ptr [0x1122f6f8], 0 */
  w32((uint32_t)(0x1122f6f8), (0x0u));
  /* 112120d1 mov dword ptr [0x1122ee38], 0xffffffff */
  w32((uint32_t)(0x1122ee38), (0xffffffffu));
  /* 112120db mov eax, dword ptr [0x1122ee38] */
  EAX = (r32((uint32_t)(0x1122ee38)));
  /* 112120e0 mov dword ptr [0x1122ee28], eax */
  w32((uint32_t)(0x1122ee28), (EAX));
  /* 112120e5 push 0x1122b8e0 */
  push32((uint32_t)(0x1122b8e0u));
  /* 112120ea call 0x11212f30 */
  push32(0x112120efu); f_11212f30();
  /* 112120ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112120f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112120f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112120f9 jne 0x11212233 */
  if (!C.zf) goto L_11212233;
  /* 112120ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 11212101 call 0x11206ff0 */
  push32(0x11212106u); f_11206ff0();
  /* 11212106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212109 push 0x1122f700 */
  push32((uint32_t)(0x1122f700u));
  /* 1121210e call dword ptr [0x11231294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231294))), 0x11212114u);
  /* 11212114 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212117 je 0x1121222e */
  if (C.zf) goto L_1121222e;
  /* 1121211d mov dword ptr [0x1122f6f8], 1 */
  w32((uint32_t)(0x1122f6f8), (0x1u));
  /* 11212127 mov ecx, dword ptr [0x1122f700] */
  ECX = (r32((uint32_t)(0x1122f700)));
  /* 1121212d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212130 mov dword ptr [0x1122ed90], ecx */
  w32((uint32_t)(0x1122ed90), (ECX));
  /* 11212136 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11212138 mov dx, word ptr [0x1122f746] */
  DX = (r16((uint32_t)(0x1122f746)));
  /* 1121213f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11212141 je 0x11212159 */
  if (C.zf) goto L_11212159;
  /* 11212143 mov eax, dword ptr [0x1122f754] */
  EAX = (r32((uint32_t)(0x1122f754)));
  /* 11212148 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1121214b mov ecx, dword ptr [0x1122ed90] */
  ECX = (r32((uint32_t)(0x1122ed90)));
  /* 11212151 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212153 mov dword ptr [0x1122ed90], ecx */
  w32((uint32_t)(0x1122ed90), (ECX));
L_11212159:;
  /* 11212159 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1121215b mov dx, word ptr [0x1122f79a] */
  DX = (r16((uint32_t)(0x1122f79a)));
  /* 11212162 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11212164 je 0x1121218e */
  if (C.zf) goto L_1121218e;
  /* 11212166 cmp dword ptr [0x1122f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121216d je 0x1121218e */
  if (C.zf) goto L_1121218e;
  /* 1121216f mov dword ptr [0x1122ed94], 1 */
  w32((uint32_t)(0x1122ed94), (0x1u));
  /* 11212179 mov eax, dword ptr [0x1122f7a8] */
  EAX = (r32((uint32_t)(0x1122f7a8)));
  /* 1121217e sub eax, dword ptr [0x1122f754] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122f754))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212184 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212187 mov dword ptr [0x1122ed98], eax */
  w32((uint32_t)(0x1122ed98), (EAX));
  /* 1121218c jmp 0x112121a2 */
  goto L_112121a2;
L_1121218e:;
  /* 1121218e mov dword ptr [0x1122ed94], 0 */
  w32((uint32_t)(0x1122ed94), (0x0u));
  /* 11212198 mov dword ptr [0x1122ed98], 0 */
  w32((uint32_t)(0x1122ed98), (0x0u));
L_112121a2:;
  /* 112121a2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 112121a5 push ecx */
  push32((uint32_t)(ECX));
  /* 112121a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112121a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112121aa mov edx, dword ptr [0x1122ee1c] */
  EDX = (r32((uint32_t)(0x1122ee1c)));
  /* 112121b0 push edx */
  push32((uint32_t)(EDX));
  /* 112121b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112121b3 push 0x1122f704 */
  push32((uint32_t)(0x1122f704u));
  /* 112121b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112121bd mov eax, dword ptr [0x1122f668] */
  EAX = (r32((uint32_t)(0x1122f668)));
  /* 112121c2 push eax */
  push32((uint32_t)(EAX));
  /* 112121c3 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x112121c9u);
  /* 112121c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112121cb je 0x112121df */
  if (C.zf) goto L_112121df;
  /* 112121cd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112121d1 jne 0x112121df */
  if (!C.zf) goto L_112121df;
  /* 112121d3 mov ecx, dword ptr [0x1122ee1c] */
  ECX = (r32((uint32_t)(0x1122ee1c)));
  /* 112121d9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 112121dd jmp 0x112121e8 */
  goto L_112121e8;
L_112121df:;
  /* 112121df mov edx, dword ptr [0x1122ee1c] */
  EDX = (r32((uint32_t)(0x1122ee1c)));
  /* 112121e5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_112121e8:;
  /* 112121e8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112121eb push eax */
  push32((uint32_t)(EAX));
  /* 112121ec push 0 */
  push32((uint32_t)(0x0u));
  /* 112121ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112121f0 mov ecx, dword ptr [0x1122ee20] */
  ECX = (r32((uint32_t)(0x1122ee20)));
  /* 112121f6 push ecx */
  push32((uint32_t)(ECX));
  /* 112121f7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112121f9 push 0x1122f758 */
  push32((uint32_t)(0x1122f758u));
  /* 112121fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11212203 mov edx, dword ptr [0x1122f668] */
  EDX = (r32((uint32_t)(0x1122f668)));
  /* 11212209 push edx */
  push32((uint32_t)(EDX));
  /* 1121220a call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11212210u);
  /* 11212210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212212 je 0x11212225 */
  if (C.zf) goto L_11212225;
  /* 11212214 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212218 jne 0x11212225 */
  if (!C.zf) goto L_11212225;
  /* 1121221a mov eax, dword ptr [0x1122ee20] */
  EAX = (r32((uint32_t)(0x1122ee20)));
  /* 1121221f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11212223 jmp 0x1121222e */
  goto L_1121222e;
L_11212225:;
  /* 11212225 mov ecx, dword ptr [0x1122ee20] */
  ECX = (r32((uint32_t)(0x1122ee20)));
  /* 1121222b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1121222e:;
  /* 1121222e jmp 0x11212457 */
  goto L_11212457;
L_11212233:;
  /* 11212233 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212236 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11212239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1121223b je 0x1121225d */
  if (C.zf) goto L_1121225d;
  /* 1121223d cmp dword ptr [0x1122f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212244 je 0x1121226c */
  if (C.zf) goto L_1121226c;
  /* 11212246 mov ecx, dword ptr [0x1122f7ac] */
  ECX = (r32((uint32_t)(0x1122f7ac)));
  /* 1121224c push ecx */
  push32((uint32_t)(ECX));
  /* 1121224d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212250 push edx */
  push32((uint32_t)(EDX));
  /* 11212251 call 0x1120f1e0 */
  push32(0x11212256u); f_1120f1e0();
  /* 11212256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1121225b jne 0x1121226c */
  if (!C.zf) goto L_1121226c;
L_1121225d:;
  /* 1121225d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1121225f call 0x11206ff0 */
  push32(0x11212264u); f_11206ff0();
  /* 11212264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212267 jmp 0x11212457 */
  goto L_11212457;
L_1121226c:;
  /* 1121226c push 2 */
  push32((uint32_t)(0x2u));
  /* 1121226e mov eax, dword ptr [0x1122f7ac] */
  EAX = (r32((uint32_t)(0x1122f7ac)));
  /* 11212273 push eax */
  push32((uint32_t)(EAX));
  /* 11212274 call 0x11203fe0 */
  push32(0x11212279u); f_11203fe0();
  /* 11212279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121227c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11212281 push 0x1122b8d8 */
  push32((uint32_t)(0x1122b8d8u));
  /* 11212286 push 2 */
  push32((uint32_t)(0x2u));
  /* 11212288 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121228b push ecx */
  push32((uint32_t)(ECX));
  /* 1121228c call 0x11206380 */
  push32(0x11212291u); f_11206380();
  /* 11212291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212294 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212297 push eax */
  push32((uint32_t)(EAX));
  /* 11212298 call 0x11203550 */
  push32(0x1121229du); f_11203550();
  /* 1121229d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112122a0 mov dword ptr [0x1122f7ac], eax */
  w32((uint32_t)(0x1122f7ac), (EAX));
  /* 112122a5 cmp dword ptr [0x1122f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112122ac jne 0x112122bd */
  if (!C.zf) goto L_112122bd;
  /* 112122ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 112122b0 call 0x11206ff0 */
  push32(0x112122b5u); f_11206ff0();
  /* 112122b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112122b8 jmp 0x11212457 */
  goto L_11212457;
L_112122bd:;
  /* 112122bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112122c0 push edx */
  push32((uint32_t)(EDX));
  /* 112122c1 mov eax, dword ptr [0x1122f7ac] */
  EAX = (r32((uint32_t)(0x1122f7ac)));
  /* 112122c6 push eax */
  push32((uint32_t)(EAX));
  /* 112122c7 call 0x11206500 */
  push32(0x112122ccu); f_11206500();
  /* 112122cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112122cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 112122d1 call 0x11206ff0 */
  push32(0x112122d6u); f_11206ff0();
  /* 112122d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112122d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112122db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112122de push ecx */
  push32((uint32_t)(ECX));
  /* 112122df mov edx, dword ptr [0x1122ee1c] */
  EDX = (r32((uint32_t)(0x1122ee1c)));
  /* 112122e5 push edx */
  push32((uint32_t)(EDX));
  /* 112122e6 call 0x11206d70 */
  push32(0x112122ebu); f_11206d70();
  /* 112122eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112122ee mov eax, dword ptr [0x1122ee1c] */
  EAX = (r32((uint32_t)(0x1122ee1c)));
  /* 112122f3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 112122f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112122fa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112122fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11212300 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212303 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11212306 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212309 jne 0x1121231d */
  if (!C.zf) goto L_1121231d;
  /* 1121230b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121230e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212311 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11212314 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212317 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121231a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1121231d:;
  /* 1121231d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212320 push eax */
  push32((uint32_t)(EAX));
  /* 11212321 call 0x11211e00 */
  push32(0x11212326u); f_11211e00();
  /* 11212326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212329 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1121232f mov dword ptr [0x1122ed90], eax */
  w32((uint32_t)(0x1122ed90), (EAX));
L_11212334:;
  /* 11212334 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212337 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1121233a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121233d je 0x11212355 */
  if (C.zf) goto L_11212355;
  /* 1121233f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212342 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11212345 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212348 jl 0x11212360 */
  if ((C.sf!=C.of)) goto L_11212360;
  /* 1121234a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121234d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11212350 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212353 jg 0x11212360 */
  if ((!C.zf&&C.sf==C.of)) goto L_11212360;
L_11212355:;
  /* 11212355 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212358 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121235b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1121235e jmp 0x11212334 */
  goto L_11212334;
L_11212360:;
  /* 11212360 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212363 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11212366 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212369 jne 0x11212405 */
  if (!C.zf) goto L_11212405;
  /* 1121236f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212372 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212375 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11212378 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121237b push edx */
  push32((uint32_t)(EDX));
  /* 1121237c call 0x11211e00 */
  push32(0x11212381u); f_11211e00();
  /* 11212381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212384 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212387 mov ecx, dword ptr [0x1122ed90] */
  ECX = (r32((uint32_t)(0x1122ed90)));
  /* 1121238d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121238f mov dword ptr [0x1122ed90], ecx */
  w32((uint32_t)(0x1122ed90), (ECX));
L_11212395:;
  /* 11212395 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212398 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1121239b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121239e jl 0x112123b6 */
  if ((C.sf!=C.of)) goto L_112123b6;
  /* 112123a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112123a6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112123a9 jg 0x112123b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_112123b6;
  /* 112123ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112123b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112123b4 jmp 0x11212395 */
  goto L_11212395;
L_112123b6:;
  /* 112123b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112123bc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112123bf jne 0x11212405 */
  if (!C.zf) goto L_11212405;
  /* 112123c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112123c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112123ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123cd push ecx */
  push32((uint32_t)(ECX));
  /* 112123ce call 0x11211e00 */
  push32(0x112123d3u); f_11211e00();
  /* 112123d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112123d6 mov edx, dword ptr [0x1122ed90] */
  EDX = (r32((uint32_t)(0x1122ed90)));
  /* 112123dc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112123de mov dword ptr [0x1122ed90], edx */
  w32((uint32_t)(0x1122ed90), (EDX));
L_112123e4:;
  /* 112123e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112123ea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112123ed jl 0x11212405 */
  if ((C.sf!=C.of)) goto L_11212405;
  /* 112123ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112123f5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112123f8 jg 0x11212405 */
  if ((!C.zf&&C.sf==C.of)) goto L_11212405;
  /* 112123fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112123fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212400 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11212403 jmp 0x112123e4 */
  goto L_112123e4;
L_11212405:;
  /* 11212405 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212409 je 0x11212419 */
  if (C.zf) goto L_11212419;
  /* 1121240b mov edx, dword ptr [0x1122ed90] */
  EDX = (r32((uint32_t)(0x1122ed90)));
  /* 11212411 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11212413 mov dword ptr [0x1122ed90], edx */
  w32((uint32_t)(0x1122ed90), (EDX));
L_11212419:;
  /* 11212419 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121241c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1121241f mov dword ptr [0x1122ed94], ecx */
  w32((uint32_t)(0x1122ed94), (ECX));
  /* 11212425 cmp dword ptr [0x1122ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121242c je 0x1121244e */
  if (C.zf) goto L_1121244e;
  /* 1121242e push 3 */
  push32((uint32_t)(0x3u));
  /* 11212430 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212433 push edx */
  push32((uint32_t)(EDX));
  /* 11212434 mov eax, dword ptr [0x1122ee20] */
  EAX = (r32((uint32_t)(0x1122ee20)));
  /* 11212439 push eax */
  push32((uint32_t)(EAX));
  /* 1121243a call 0x11206d70 */
  push32(0x1121243fu); f_11206d70();
  /* 1121243f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212442 mov ecx, dword ptr [0x1122ee20] */
  ECX = (r32((uint32_t)(0x1122ee20)));
  /* 11212448 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1121244c jmp 0x11212457 */
  goto L_11212457;
L_1121244e:;
  /* 1121244e mov edx, dword ptr [0x1122ee20] */
  EDX = (r32((uint32_t)(0x1122ee20)));
  /* 11212454 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11212457:;
  /* 11212457 mov esp, ebp */
  ESP = (EBP);
  /* 11212459 pop ebp */
  EBP = (pop32());
  /* 1121245a ret  */
  ESPCHK(0x112120b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x11212460 (46 bytes, 18 insns) */
void f_11212460(void) {
  FTRACE(0x11212460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212460 push ebp */
  push32((uint32_t)(EBP));
  /* 11212461 mov ebp, esp */
  EBP = (ESP);
  /* 11212463 push ecx */
  push32((uint32_t)(ECX));
  /* 11212464 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11212466 call 0x11206f50 */
  push32(0x1121246bu); f_11206f50();
  /* 1121246b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121246e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212471 push eax */
  push32((uint32_t)(EAX));
  /* 11212472 call 0x11212490 */
  push32(0x11212477u); f_11212490();
  /* 11212477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121247a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1121247d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1121247f call 0x11206ff0 */
  push32(0x11212484u); f_11206ff0();
  /* 11212484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121248a mov esp, ebp */
  ESP = (EBP);
  /* 1121248c pop ebp */
  EBP = (pop32());
  /* 1121248d ret  */
  ESPCHK(0x11212460u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x11212490 (762 bytes, 246 insns) */
void f_11212490(void) {
  FTRACE(0x11212490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212490 push ebp */
  push32((uint32_t)(EBP));
  /* 11212491 mov ebp, esp */
  EBP = (ESP);
  /* 11212493 push ecx */
  push32((uint32_t)(ECX));
  /* 11212494 cmp dword ptr [0x1122ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121249b jne 0x112124a4 */
  if (!C.zf) goto L_112124a4;
  /* 1121249d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121249f jmp 0x11212786 */
  goto L_11212786;
L_112124a4:;
  /* 112124a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112124a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112124aa cmp ecx, dword ptr [0x1122ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112124b0 jne 0x112124c4 */
  if (!C.zf) goto L_112124c4;
  /* 112124b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112124b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112124b8 cmp eax, dword ptr [0x1122ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112124be je 0x1121268b */
  if (C.zf) goto L_1121268b;
L_112124c4:;
  /* 112124c4 cmp dword ptr [0x1122f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112124cb je 0x11212645 */
  if (C.zf) goto L_11212645;
  /* 112124d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112124d3 mov cx, word ptr [0x1122f798] */
  CX = (r16((uint32_t)(0x1122f798)));
  /* 112124da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112124dc jne 0x11212539 */
  if (!C.zf) goto L_11212539;
  /* 112124de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112124e0 mov dx, word ptr [0x1122f7a6] */
  DX = (r16((uint32_t)(0x1122f7a6)));
  /* 112124e7 push edx */
  push32((uint32_t)(EDX));
  /* 112124e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112124ea mov ax, word ptr [0x1122f7a4] */
  AX = (r16((uint32_t)(0x1122f7a4)));
  /* 112124f0 push eax */
  push32((uint32_t)(EAX));
  /* 112124f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112124f3 mov cx, word ptr [0x1122f7a2] */
  CX = (r16((uint32_t)(0x1122f7a2)));
  /* 112124fa push ecx */
  push32((uint32_t)(ECX));
  /* 112124fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112124fd mov dx, word ptr [0x1122f7a0] */
  DX = (r16((uint32_t)(0x1122f7a0)));
  /* 11212504 push edx */
  push32((uint32_t)(EDX));
  /* 11212505 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212509 mov ax, word ptr [0x1122f79c] */
  AX = (r16((uint32_t)(0x1122f79c)));
  /* 1121250f push eax */
  push32((uint32_t)(EAX));
  /* 11212510 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11212512 mov cx, word ptr [0x1122f79e] */
  CX = (r16((uint32_t)(0x1122f79e)));
  /* 11212519 push ecx */
  push32((uint32_t)(ECX));
  /* 1121251a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1121251c mov dx, word ptr [0x1122f79a] */
  DX = (r16((uint32_t)(0x1122f79a)));
  /* 11212523 push edx */
  push32((uint32_t)(EDX));
  /* 11212524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212527 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1121252a push ecx */
  push32((uint32_t)(ECX));
  /* 1121252b push 1 */
  push32((uint32_t)(0x1u));
  /* 1121252d push 1 */
  push32((uint32_t)(0x1u));
  /* 1121252f call 0x11212790 */
  push32(0x11212534u); f_11212790();
  /* 11212534 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212537 jmp 0x1121258a */
  goto L_1121258a;
L_11212539:;
  /* 11212539 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1121253b mov dx, word ptr [0x1122f7a6] */
  DX = (r16((uint32_t)(0x1122f7a6)));
  /* 11212542 push edx */
  push32((uint32_t)(EDX));
  /* 11212543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212545 mov ax, word ptr [0x1122f7a4] */
  AX = (r16((uint32_t)(0x1122f7a4)));
  /* 1121254b push eax */
  push32((uint32_t)(EAX));
  /* 1121254c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1121254e mov cx, word ptr [0x1122f7a2] */
  CX = (r16((uint32_t)(0x1122f7a2)));
  /* 11212555 push ecx */
  push32((uint32_t)(ECX));
  /* 11212556 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11212558 mov dx, word ptr [0x1122f7a0] */
  DX = (r16((uint32_t)(0x1122f7a0)));
  /* 1121255f push edx */
  push32((uint32_t)(EDX));
  /* 11212560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212562 mov ax, word ptr [0x1122f79e] */
  AX = (r16((uint32_t)(0x1122f79e)));
  /* 11212568 push eax */
  push32((uint32_t)(EAX));
  /* 11212569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1121256b push 0 */
  push32((uint32_t)(0x0u));
  /* 1121256d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1121256f mov cx, word ptr [0x1122f79a] */
  CX = (r16((uint32_t)(0x1122f79a)));
  /* 11212576 push ecx */
  push32((uint32_t)(ECX));
  /* 11212577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121257a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1121257d push eax */
  push32((uint32_t)(EAX));
  /* 1121257e push 0 */
  push32((uint32_t)(0x0u));
  /* 11212580 push 1 */
  push32((uint32_t)(0x1u));
  /* 11212582 call 0x11212790 */
  push32(0x11212587u); f_11212790();
  /* 11212587 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1121258a:;
  /* 1121258a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1121258c mov cx, word ptr [0x1122f744] */
  CX = (r16((uint32_t)(0x1122f744)));
  /* 11212593 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11212595 jne 0x112125f2 */
  if (!C.zf) goto L_112125f2;
  /* 11212597 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11212599 mov dx, word ptr [0x1122f752] */
  DX = (r16((uint32_t)(0x1122f752)));
  /* 112125a0 push edx */
  push32((uint32_t)(EDX));
  /* 112125a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112125a3 mov ax, word ptr [0x1122f750] */
  AX = (r16((uint32_t)(0x1122f750)));
  /* 112125a9 push eax */
  push32((uint32_t)(EAX));
  /* 112125aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112125ac mov cx, word ptr [0x1122f74e] */
  CX = (r16((uint32_t)(0x1122f74e)));
  /* 112125b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112125b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112125b6 mov dx, word ptr [0x1122f74c] */
  DX = (r16((uint32_t)(0x1122f74c)));
  /* 112125bd push edx */
  push32((uint32_t)(EDX));
  /* 112125be push 0 */
  push32((uint32_t)(0x0u));
  /* 112125c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112125c2 mov ax, word ptr [0x1122f748] */
  AX = (r16((uint32_t)(0x1122f748)));
  /* 112125c8 push eax */
  push32((uint32_t)(EAX));
  /* 112125c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112125cb mov cx, word ptr [0x1122f74a] */
  CX = (r16((uint32_t)(0x1122f74a)));
  /* 112125d2 push ecx */
  push32((uint32_t)(ECX));
  /* 112125d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112125d5 mov dx, word ptr [0x1122f746] */
  DX = (r16((uint32_t)(0x1122f746)));
  /* 112125dc push edx */
  push32((uint32_t)(EDX));
  /* 112125dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112125e0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112125e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112125e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112125e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112125e8 call 0x11212790 */
  push32(0x112125edu); f_11212790();
  /* 112125ed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112125f0 jmp 0x11212643 */
  goto L_11212643;
L_112125f2:;
  /* 112125f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112125f4 mov dx, word ptr [0x1122f752] */
  DX = (r16((uint32_t)(0x1122f752)));
  /* 112125fb push edx */
  push32((uint32_t)(EDX));
  /* 112125fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112125fe mov ax, word ptr [0x1122f750] */
  AX = (r16((uint32_t)(0x1122f750)));
  /* 11212604 push eax */
  push32((uint32_t)(EAX));
  /* 11212605 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11212607 mov cx, word ptr [0x1122f74e] */
  CX = (r16((uint32_t)(0x1122f74e)));
  /* 1121260e push ecx */
  push32((uint32_t)(ECX));
  /* 1121260f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11212611 mov dx, word ptr [0x1122f74c] */
  DX = (r16((uint32_t)(0x1122f74c)));
  /* 11212618 push edx */
  push32((uint32_t)(EDX));
  /* 11212619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121261b mov ax, word ptr [0x1122f74a] */
  AX = (r16((uint32_t)(0x1122f74a)));
  /* 11212621 push eax */
  push32((uint32_t)(EAX));
  /* 11212622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212624 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212626 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11212628 mov cx, word ptr [0x1122f746] */
  CX = (r16((uint32_t)(0x1122f746)));
  /* 1121262f push ecx */
  push32((uint32_t)(ECX));
  /* 11212630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212633 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11212636 push eax */
  push32((uint32_t)(EAX));
  /* 11212637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1121263b call 0x11212790 */
  push32(0x11212640u); f_11212790();
  /* 11212640 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11212643:;
  /* 11212643 jmp 0x1121268b */
  goto L_1121268b;
L_11212645:;
  /* 11212645 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1121264b push 2 */
  push32((uint32_t)(0x2u));
  /* 1121264d push 0 */
  push32((uint32_t)(0x0u));
  /* 1121264f push 0 */
  push32((uint32_t)(0x0u));
  /* 11212651 push 1 */
  push32((uint32_t)(0x1u));
  /* 11212653 push 4 */
  push32((uint32_t)(0x4u));
  /* 11212655 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212658 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1121265b push edx */
  push32((uint32_t)(EDX));
  /* 1121265c push 1 */
  push32((uint32_t)(0x1u));
  /* 1121265e push 1 */
  push32((uint32_t)(0x1u));
  /* 11212660 call 0x11212790 */
  push32(0x11212665u); f_11212790();
  /* 11212665 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1121266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1121266c push 0 */
  push32((uint32_t)(0x0u));
  /* 1121266e push 2 */
  push32((uint32_t)(0x2u));
  /* 11212670 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212674 push 5 */
  push32((uint32_t)(0x5u));
  /* 11212676 push 0xa */
  push32((uint32_t)(0xau));
  /* 11212678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121267b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1121267e push ecx */
  push32((uint32_t)(ECX));
  /* 1121267f push 1 */
  push32((uint32_t)(0x1u));
  /* 11212681 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212683 call 0x11212790 */
  push32(0x11212688u); f_11212790();
  /* 11212688 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1121268b:;
  /* 1121268b mov edx, dword ptr [0x1122ee2c] */
  EDX = (r32((uint32_t)(0x1122ee2c)));
  /* 11212691 cmp edx, dword ptr [0x1122ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212697 jge 0x112126e4 */
  if ((C.sf==C.of)) goto L_112126e4;
  /* 11212699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121269c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1121269f cmp ecx, dword ptr [0x1122ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112126a5 jl 0x112126b5 */
  if ((C.sf!=C.of)) goto L_112126b5;
  /* 112126a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112126aa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112126ad cmp eax, dword ptr [0x1122ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112126b3 jle 0x112126bc */
  if ((C.zf||C.sf!=C.of)) goto L_112126bc;
L_112126b5:;
  /* 112126b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112126b7 jmp 0x11212786 */
  goto L_11212786;
L_112126bc:;
  /* 112126bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112126bf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112126c2 cmp edx, dword ptr [0x1122ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112126c8 jle 0x112126e2 */
  if ((C.zf||C.sf!=C.of)) goto L_112126e2;
  /* 112126ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112126cd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112126d0 cmp ecx, dword ptr [0x1122ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112126d6 jge 0x112126e2 */
  if ((C.sf==C.of)) goto L_112126e2;
  /* 112126d8 mov eax, 1 */
  EAX = (0x1u);
  /* 112126dd jmp 0x11212786 */
  goto L_11212786;
L_112126e2:;
  /* 112126e2 jmp 0x11212727 */
  goto L_11212727;
L_112126e4:;
  /* 112126e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112126e7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112126ea cmp eax, dword ptr [0x1122ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112126f0 jl 0x11212700 */
  if ((C.sf!=C.of)) goto L_11212700;
  /* 112126f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112126f5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112126f8 cmp edx, dword ptr [0x1122ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112126fe jle 0x11212707 */
  if ((C.zf||C.sf!=C.of)) goto L_11212707;
L_11212700:;
  /* 11212700 mov eax, 1 */
  EAX = (0x1u);
  /* 11212705 jmp 0x11212786 */
  goto L_11212786;
L_11212707:;
  /* 11212707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121270a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1121270d cmp ecx, dword ptr [0x1122ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212713 jle 0x11212727 */
  if ((C.zf||C.sf!=C.of)) goto L_11212727;
  /* 11212715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212718 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1121271b cmp eax, dword ptr [0x1122ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212721 jge 0x11212727 */
  if ((C.sf==C.of)) goto L_11212727;
  /* 11212723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212725 jmp 0x11212786 */
  goto L_11212786;
L_11212727:;
  /* 11212727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121272a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1121272d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212733 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11212735 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121273a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1121273d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212743 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212745 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1121274b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1121274e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212751 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11212754 cmp edx, dword ptr [0x1122ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1122ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121275a jne 0x11212772 */
  if (!C.zf) goto L_11212772;
  /* 1121275c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121275f cmp eax, dword ptr [0x1122ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212765 jl 0x1121276e */
  if ((C.sf!=C.of)) goto L_1121276e;
  /* 11212767 mov eax, 1 */
  EAX = (0x1u);
  /* 1121276c jmp 0x11212786 */
  goto L_11212786;
L_1121276e:;
  /* 1121276e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212770 jmp 0x11212786 */
  goto L_11212786;
L_11212772:;
  /* 11212772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212775 cmp ecx, dword ptr [0x1122ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121277b jge 0x11212784 */
  if ((C.sf==C.of)) goto L_11212784;
  /* 1121277d mov eax, 1 */
  EAX = (0x1u);
  /* 11212782 jmp 0x11212786 */
  goto L_11212786;
L_11212784:;
  /* 11212784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11212786:;
  /* 11212786 mov esp, ebp */
  ESP = (EBP);
  /* 11212788 pop ebp */
  EBP = (pop32());
  /* 11212789 ret  */
  ESPCHK(0x11212490u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x11212790 (504 bytes, 145 insns) */
void f_11212790(void) {
  FTRACE(0x11212790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212790 push ebp */
  push32((uint32_t)(EBP));
  /* 11212791 mov ebp, esp */
  EBP = (ESP);
  /* 11212793 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212796 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121279a jne 0x1121286c */
  if (!C.zf) goto L_1121286c;
  /* 112127a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112127a3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112127a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112127a8 jne 0x112127b9 */
  if (!C.zf) goto L_112127b9;
  /* 112127aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112127ad mov edx, dword ptr [ecx*4 + 0x1122ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122ee4c)));
  /* 112127b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112127b7 jmp 0x112127c6 */
  goto L_112127c6;
L_112127b9:;
  /* 112127b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112127bc mov ecx, dword ptr [eax*4 + 0x1122ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122ee80)));
  /* 112127c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112127c6:;
  /* 112127c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112127c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112127cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112127cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112127d2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112127d5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112127db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112127de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112127e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112127e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112127e6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 112127e9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 112127ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112127ee mov ecx, 7 */
  ECX = (0x7u);
  /* 112127f3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112127f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112127f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112127fb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112127fe jge 0x11212819 */
  if ((C.sf==C.of)) goto L_11212819;
  /* 11212800 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11212803 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212806 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11212809 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121280c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1121280f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212812 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212814 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11212817 jmp 0x1121282d */
  goto L_1121282d;
L_11212819:;
  /* 11212819 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1121281c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121281f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11212822 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212825 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212828 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121282a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1121282d:;
  /* 1121282d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212831 jne 0x1121286a */
  if (!C.zf) goto L_1121286a;
  /* 11212833 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11212836 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11212839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1121283b jne 0x1121284c */
  if (!C.zf) goto L_1121284c;
  /* 1121283d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212840 mov eax, dword ptr [edx*4 + 0x1122ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1122ee50)));
  /* 11212847 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1121284a jmp 0x11212859 */
  goto L_11212859;
L_1121284c:;
  /* 1121284c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121284f mov edx, dword ptr [ecx*4 + 0x1122ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1122ee84)));
  /* 11212856 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11212859:;
  /* 11212859 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121285c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121285f jle 0x1121286a */
  if ((C.zf||C.sf!=C.of)) goto L_1121286a;
  /* 11212861 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212864 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212867 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1121286a:;
  /* 1121286a jmp 0x112128a1 */
  goto L_112128a1;
L_1121286c:;
  /* 1121286c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121286f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11212872 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11212874 jne 0x11212885 */
  if (!C.zf) goto L_11212885;
  /* 11212876 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212879 mov ecx, dword ptr [eax*4 + 0x1122ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1122ee4c)));
  /* 11212880 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11212883 jmp 0x11212892 */
  goto L_11212892;
L_11212885:;
  /* 11212885 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212888 mov eax, dword ptr [edx*4 + 0x1122ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1122ee80)));
  /* 1121288f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11212892:;
  /* 11212892 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11212895 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11212898 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121289b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121289e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112128a1:;
  /* 112128a1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112128a5 jne 0x112128e1 */
  if (!C.zf) goto L_112128e1;
  /* 112128a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112128aa mov dword ptr [0x1122ee2c], eax */
  w32((uint32_t)(0x1122ee2c), (EAX));
  /* 112128af mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 112128b2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112128b5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112128b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112128ba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112128bd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 112128c0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112128c2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112128c8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 112128cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112128cd mov dword ptr [0x1122ee30], ecx */
  w32((uint32_t)(0x1122ee30), (ECX));
  /* 112128d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112128d6 mov dword ptr [0x1122ee28], edx */
  w32((uint32_t)(0x1122ee28), (EDX));
  /* 112128dc jmp 0x11212984 */
  goto L_11212984;
L_112128e1:;
  /* 112128e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112128e4 mov dword ptr [0x1122ee3c], eax */
  w32((uint32_t)(0x1122ee3c), (EAX));
  /* 112128e9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 112128ec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112128ef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112128f2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112128f4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112128f7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 112128fa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112128fc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212902 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11212905 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212907 mov dword ptr [0x1122ee40], ecx */
  w32((uint32_t)(0x1122ee40), (ECX));
  /* 1121290d mov edx, dword ptr [0x1122ed98] */
  EDX = (r32((uint32_t)(0x1122ed98)));
  /* 11212913 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11212919 mov eax, dword ptr [0x1122ee40] */
  EAX = (r32((uint32_t)(0x1122ee40)));
  /* 1121291e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212920 mov dword ptr [0x1122ee40], eax */
  w32((uint32_t)(0x1122ee40), (EAX));
  /* 11212925 cmp dword ptr [0x1122ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121292c jge 0x11212951 */
  if ((C.sf==C.of)) goto L_11212951;
  /* 1121292e mov ecx, dword ptr [0x1122ee40] */
  ECX = (r32((uint32_t)(0x1122ee40)));
  /* 11212934 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121293a mov dword ptr [0x1122ee40], ecx */
  w32((uint32_t)(0x1122ee40), (ECX));
  /* 11212940 mov edx, dword ptr [0x1122ee3c] */
  EDX = (r32((uint32_t)(0x1122ee3c)));
  /* 11212946 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212949 mov dword ptr [0x1122ee3c], edx */
  w32((uint32_t)(0x1122ee3c), (EDX));
  /* 1121294f jmp 0x1121297b */
  goto L_1121297b;
L_11212951:;
  /* 11212951 cmp dword ptr [0x1122ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1122ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121295b jl 0x1121297b */
  if ((C.sf!=C.of)) goto L_1121297b;
  /* 1121295d mov eax, dword ptr [0x1122ee40] */
  EAX = (r32((uint32_t)(0x1122ee40)));
  /* 11212962 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212967 mov dword ptr [0x1122ee40], eax */
  w32((uint32_t)(0x1122ee40), (EAX));
  /* 1121296c mov ecx, dword ptr [0x1122ee3c] */
  ECX = (r32((uint32_t)(0x1122ee3c)));
  /* 11212972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212975 mov dword ptr [0x1122ee3c], ecx */
  w32((uint32_t)(0x1122ee3c), (ECX));
L_1121297b:;
  /* 1121297b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121297e mov dword ptr [0x1122ee38], edx */
  w32((uint32_t)(0x1122ee38), (EDX));
L_11212984:;
  /* 11212984 mov esp, ebp */
  ESP = (EBP);
  /* 11212986 pop ebp */
  EBP = (pop32());
  /* 11212987 ret  */
  ESPCHK(0x11212790u, _esp0);
  ESP += 4; return;
}

/* FUN_10012990 @ 0x11212990 (382 bytes, 135 insns) */
void f_11212990(void) {
  FTRACE(0x11212990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212990 push ebp */
  push32((uint32_t)(EBP));
  /* 11212991 mov ebp, esp */
  EBP = (ESP);
  /* 11212993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11212995 push 0x1122b8e8 */
  push32((uint32_t)(0x1122b8e8u));
  /* 1121299a push 0x1120c658 */
  push32((uint32_t)(0x1120c658u));
  /* 1121299f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112129a5 push eax */
  push32((uint32_t)(EAX));
  /* 112129a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112129ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112129b0 push ebx */
  push32((uint32_t)(EBX));
  /* 112129b1 push esi */
  push32((uint32_t)(ESI));
  /* 112129b2 push edi */
  push32((uint32_t)(EDI));
  /* 112129b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112129b6 cmp dword ptr [0x1122f7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112129bd jne 0x11212a02 */
  if (!C.zf) goto L_11212a02;
  /* 112129bf push 0 */
  push32((uint32_t)(0x0u));
  /* 112129c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112129c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112129c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112129c7 call dword ptr [0x11231290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231290))), 0x112129cdu);
  /* 112129cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112129cf je 0x112129dd */
  if (C.zf) goto L_112129dd;
  /* 112129d1 mov dword ptr [0x1122f7b4], 1 */
  w32((uint32_t)(0x1122f7b4), (0x1u));
  /* 112129db jmp 0x11212a02 */
  goto L_11212a02;
L_112129dd:;
  /* 112129dd push 0 */
  push32((uint32_t)(0x0u));
  /* 112129df push 0 */
  push32((uint32_t)(0x0u));
  /* 112129e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112129e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112129e5 call dword ptr [0x112312a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a8))), 0x112129ebu);
  /* 112129eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112129ed je 0x112129fb */
  if (C.zf) goto L_112129fb;
  /* 112129ef mov dword ptr [0x1122f7b4], 2 */
  w32((uint32_t)(0x1122f7b4), (0x2u));
  /* 112129f9 jmp 0x11212a02 */
  goto L_11212a02;
L_112129fb:;
  /* 112129fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112129fd jmp 0x11212b11 */
  goto L_11212b11;
L_11212a02:;
  /* 11212a02 cmp dword ptr [0x1122f7b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212a09 jne 0x11212a26 */
  if (!C.zf) goto L_11212a26;
  /* 11212a0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212a0e push eax */
  push32((uint32_t)(EAX));
  /* 11212a0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11212a12 push ecx */
  push32((uint32_t)(ECX));
  /* 11212a13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11212a16 push edx */
  push32((uint32_t)(EDX));
  /* 11212a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212a1a push eax */
  push32((uint32_t)(EAX));
  /* 11212a1b call dword ptr [0x11231290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231290))), 0x11212a21u);
  /* 11212a21 jmp 0x11212b11 */
  goto L_11212b11;
L_11212a26:;
  /* 11212a26 cmp dword ptr [0x1122f7b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212a2d jne 0x11212b0f */
  if (!C.zf) goto L_11212b0f;
  /* 11212a33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212a37 jne 0x11212a42 */
  if (!C.zf) goto L_11212a42;
  /* 11212a39 mov ecx, dword ptr [0x1122f668] */
  ECX = (r32((uint32_t)(0x1122f668)));
  /* 11212a3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11212a42:;
  /* 11212a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11212a49 push edx */
  push32((uint32_t)(EDX));
  /* 11212a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212a4d push eax */
  push32((uint32_t)(EAX));
  /* 11212a4e call dword ptr [0x112312a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a8))), 0x11212a54u);
  /* 11212a54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11212a57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212a5b jne 0x11212a64 */
  if (!C.zf) goto L_11212a64;
  /* 11212a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212a5f jmp 0x11212b11 */
  goto L_11212b11;
L_11212a64:;
  /* 11212a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11212a6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11212a6e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212a71 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11212a73 call 0x112066f0 */
  push32(0x11212a78u); f_112066f0();
  /* 11212a78 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11212a7b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11212a7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11212a81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11212a84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11212a8b jmp 0x11212aa4 */
  goto L_11212aa4;
  /* 11212a8d mov eax, 1 */
  EAX = (0x1u);
  /* 11212a92 ret  */
  ESPCHK(0x11212990u, _esp0);
  ESP += 4; return;
  /* 11212a93 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11212a96 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11212a9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11212aa4:;
  /* 11212aa4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212aa8 jne 0x11212aae */
  if (!C.zf) goto L_11212aae;
  /* 11212aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212aac jmp 0x11212b11 */
  goto L_11212b11;
L_11212aae:;
  /* 11212aae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11212ab1 push edx */
  push32((uint32_t)(EDX));
  /* 11212ab2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11212ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11212ab6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11212ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11212aba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212abd push edx */
  push32((uint32_t)(EDX));
  /* 11212abe call dword ptr [0x112312a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a8))), 0x11212ac4u);
  /* 11212ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212ac6 jne 0x11212acc */
  if (!C.zf) goto L_11212acc;
  /* 11212ac8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212aca jmp 0x11212b11 */
  goto L_11212b11;
L_11212acc:;
  /* 11212acc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212ad0 jne 0x11212aed */
  if (!C.zf) goto L_11212aed;
  /* 11212ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212ad6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11212ad8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11212adb push eax */
  push32((uint32_t)(EAX));
  /* 11212adc push 1 */
  push32((uint32_t)(0x1u));
  /* 11212ade mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11212ae1 push ecx */
  push32((uint32_t)(ECX));
  /* 11212ae2 call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x11212ae8u);
  /* 11212ae8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11212aeb jmp 0x11212b0a */
  goto L_11212b0a;
L_11212aed:;
  /* 11212aed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212af0 push edx */
  push32((uint32_t)(EDX));
  /* 11212af1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11212af4 push eax */
  push32((uint32_t)(EAX));
  /* 11212af5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11212af7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11212afa push ecx */
  push32((uint32_t)(ECX));
  /* 11212afb push 1 */
  push32((uint32_t)(0x1u));
  /* 11212afd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11212b00 push edx */
  push32((uint32_t)(EDX));
  /* 11212b01 call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x11212b07u);
  /* 11212b07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11212b0a:;
  /* 11212b0a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11212b0d jmp 0x11212b11 */
  goto L_11212b11;
L_11212b0f:;
  /* 11212b0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11212b11:;
  /* 11212b11 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11212b14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11212b17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11212b1e pop edi */
  EDI = (pop32());
  /* 11212b1f pop esi */
  ESI = (pop32());
  /* 11212b20 pop ebx */
  EBX = (pop32());
  /* 11212b21 mov esp, ebp */
  ESP = (EBP);
  /* 11212b23 pop ebp */
  EBP = (pop32());
  /* 11212b24 ret  */
  ESPCHK(0x11212990u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x11212b30 (398 bytes, 140 insns) */
void f_11212b30(void) {
  FTRACE(0x11212b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11212b31 mov ebp, esp */
  EBP = (ESP);
  /* 11212b33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11212b35 push 0x1122b8f8 */
  push32((uint32_t)(0x1122b8f8u));
  /* 11212b3a push 0x1120c658 */
  push32((uint32_t)(0x1120c658u));
  /* 11212b3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11212b45 push eax */
  push32((uint32_t)(EAX));
  /* 11212b46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11212b4d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212b50 push ebx */
  push32((uint32_t)(EBX));
  /* 11212b51 push esi */
  push32((uint32_t)(ESI));
  /* 11212b52 push edi */
  push32((uint32_t)(EDI));
  /* 11212b53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11212b56 cmp dword ptr [0x1122f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212b5d jne 0x11212ba2 */
  if (!C.zf) goto L_11212ba2;
  /* 11212b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11212b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11212b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212b67 call dword ptr [0x11231290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231290))), 0x11212b6du);
  /* 11212b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212b6f je 0x11212b7d */
  if (C.zf) goto L_11212b7d;
  /* 11212b71 mov dword ptr [0x1122f7b8], 1 */
  w32((uint32_t)(0x1122f7b8), (0x1u));
  /* 11212b7b jmp 0x11212ba2 */
  goto L_11212ba2;
L_11212b7d:;
  /* 11212b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11212b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11212b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11212b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212b85 call dword ptr [0x112312a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a8))), 0x11212b8bu);
  /* 11212b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212b8d je 0x11212b9b */
  if (C.zf) goto L_11212b9b;
  /* 11212b8f mov dword ptr [0x1122f7b8], 2 */
  w32((uint32_t)(0x1122f7b8), (0x2u));
  /* 11212b99 jmp 0x11212ba2 */
  goto L_11212ba2;
L_11212b9b:;
  /* 11212b9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212b9d jmp 0x11212cc1 */
  goto L_11212cc1;
L_11212ba2:;
  /* 11212ba2 cmp dword ptr [0x1122f7b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212ba9 jne 0x11212bc6 */
  if (!C.zf) goto L_11212bc6;
  /* 11212bab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212bae push eax */
  push32((uint32_t)(EAX));
  /* 11212baf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11212bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11212bb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11212bb6 push edx */
  push32((uint32_t)(EDX));
  /* 11212bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212bba push eax */
  push32((uint32_t)(EAX));
  /* 11212bbb call dword ptr [0x112312a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a8))), 0x11212bc1u);
  /* 11212bc1 jmp 0x11212cc1 */
  goto L_11212cc1;
L_11212bc6:;
  /* 11212bc6 cmp dword ptr [0x1122f7b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212bcd jne 0x11212cbf */
  if (!C.zf) goto L_11212cbf;
  /* 11212bd3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212bd7 jne 0x11212be2 */
  if (!C.zf) goto L_11212be2;
  /* 11212bd9 mov ecx, dword ptr [0x1122f668] */
  ECX = (r32((uint32_t)(0x1122f668)));
  /* 11212bdf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11212be2:;
  /* 11212be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212be6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11212be9 push edx */
  push32((uint32_t)(EDX));
  /* 11212bea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212bed push eax */
  push32((uint32_t)(EAX));
  /* 11212bee call dword ptr [0x11231290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231290))), 0x11212bf4u);
  /* 11212bf4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11212bf7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212bfb jne 0x11212c04 */
  if (!C.zf) goto L_11212c04;
  /* 11212bfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212bff jmp 0x11212cc1 */
  goto L_11212cc1;
L_11212c04:;
  /* 11212c04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11212c0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11212c0e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11212c10 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212c13 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11212c15 call 0x112066f0 */
  push32(0x11212c1au); f_112066f0();
  /* 11212c1a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11212c1d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11212c20 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11212c23 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11212c26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11212c2d jmp 0x11212c46 */
  goto L_11212c46;
  /* 11212c2f mov eax, 1 */
  EAX = (0x1u);
  /* 11212c34 ret  */
  ESPCHK(0x11212b30u, _esp0);
  ESP += 4; return;
  /* 11212c35 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11212c38 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11212c3f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11212c46:;
  /* 11212c46 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212c4a jne 0x11212c50 */
  if (!C.zf) goto L_11212c50;
  /* 11212c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212c4e jmp 0x11212cc1 */
  goto L_11212cc1;
L_11212c50:;
  /* 11212c50 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11212c53 push edx */
  push32((uint32_t)(EDX));
  /* 11212c54 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11212c57 push eax */
  push32((uint32_t)(EAX));
  /* 11212c58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11212c5b push ecx */
  push32((uint32_t)(ECX));
  /* 11212c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212c5f push edx */
  push32((uint32_t)(EDX));
  /* 11212c60 call dword ptr [0x11231290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231290))), 0x11212c66u);
  /* 11212c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212c68 jne 0x11212c6e */
  if (!C.zf) goto L_11212c6e;
  /* 11212c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212c6c jmp 0x11212cc1 */
  goto L_11212cc1;
L_11212c6e:;
  /* 11212c6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212c72 jne 0x11212c96 */
  if (!C.zf) goto L_11212c96;
  /* 11212c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11212c7c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11212c7e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11212c81 push eax */
  push32((uint32_t)(EAX));
  /* 11212c82 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11212c87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11212c8a push ecx */
  push32((uint32_t)(ECX));
  /* 11212c8b call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11212c91u);
  /* 11212c91 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11212c94 jmp 0x11212cba */
  goto L_11212cba;
L_11212c96:;
  /* 11212c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11212c9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11212c9d push edx */
  push32((uint32_t)(EDX));
  /* 11212c9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11212ca1 push eax */
  push32((uint32_t)(EAX));
  /* 11212ca2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11212ca4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11212ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 11212ca8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11212cad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11212cb0 push edx */
  push32((uint32_t)(EDX));
  /* 11212cb1 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11212cb7u);
  /* 11212cb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11212cba:;
  /* 11212cba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11212cbd jmp 0x11212cc1 */
  goto L_11212cc1;
L_11212cbf:;
  /* 11212cbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11212cc1:;
  /* 11212cc1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11212cc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11212cc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11212cce pop edi */
  EDI = (pop32());
  /* 11212ccf pop esi */
  ESI = (pop32());
  /* 11212cd0 pop ebx */
  EBX = (pop32());
  /* 11212cd1 mov esp, ebp */
  ESP = (EBP);
  /* 11212cd3 pop ebp */
  EBP = (pop32());
  /* 11212cd4 ret  */
  ESPCHK(0x11212b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x11212ce0 (11 bytes, 6 insns) */
void f_11212ce0(void) {
  FTRACE(0x11212ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11212ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11212ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212ce6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212ce9 pop ebp */
  EBP = (pop32());
  /* 11212cea ret  */
  ESPCHK(0x11212ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x11212cf0 (147 bytes, 43 insns) */
void f_11212cf0(void) {
  FTRACE(0x11212cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11212cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11212cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11212cf4 cmp dword ptr [0x1122f658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212cfb jne 0x11212d17 */
  if (!C.zf) goto L_11212d17;
  /* 11212cfd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212d01 jl 0x11212d12 */
  if ((C.sf!=C.of)) goto L_11212d12;
  /* 11212d03 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212d07 jg 0x11212d12 */
  if ((!C.zf&&C.sf==C.of)) goto L_11212d12;
  /* 11212d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212d0c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212d0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11212d12:;
  /* 11212d12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212d15 jmp 0x11212d7f */
  goto L_11212d7f;
L_11212d17:;
  /* 11212d17 push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 11212d1c call dword ptr [0x11231318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231318))), 0x11212d22u);
  /* 11212d22 cmp dword ptr [0x1122f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212d29 je 0x11212d49 */
  if (C.zf) goto L_11212d49;
  /* 11212d2b push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 11212d30 call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x11212d36u);
  /* 11212d36 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11212d38 call 0x11206f50 */
  push32(0x11212d3du); f_11206f50();
  /* 11212d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212d40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11212d47 jmp 0x11212d50 */
  goto L_11212d50;
L_11212d49:;
  /* 11212d49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11212d50:;
  /* 11212d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11212d54 call 0x11212d90 */
  push32(0x11212d59u); f_11212d90();
  /* 11212d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212d5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11212d5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212d63 je 0x11212d71 */
  if (C.zf) goto L_11212d71;
  /* 11212d65 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11212d67 call 0x11206ff0 */
  push32(0x11212d6cu); f_11206ff0();
  /* 11212d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212d6f jmp 0x11212d7c */
  goto L_11212d7c;
L_11212d71:;
  /* 11212d71 push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 11212d76 call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x11212d7cu);
L_11212d7c:;
  /* 11212d7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11212d7f:;
  /* 11212d7f mov esp, ebp */
  ESP = (EBP);
  /* 11212d81 pop ebp */
  EBP = (pop32());
  /* 11212d82 ret  */
  ESPCHK(0x11212cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d90 @ 0x11212d90 (299 bytes, 91 insns) */
void f_11212d90(void) {
  FTRACE(0x11212d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11212d91 mov ebp, esp */
  EBP = (ESP);
  /* 11212d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212d96 cmp dword ptr [0x1122f658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212d9d jne 0x11212dbc */
  if (!C.zf) goto L_11212dbc;
  /* 11212d9f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212da3 jl 0x11212db4 */
  if ((C.sf!=C.of)) goto L_11212db4;
  /* 11212da5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212da9 jg 0x11212db4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11212db4;
  /* 11212dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212dae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212db1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11212db4:;
  /* 11212db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212db7 jmp 0x11212eb7 */
  goto L_11212eb7;
L_11212dbc:;
  /* 11212dbc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212dc3 jge 0x11212e03 */
  if ((C.sf==C.of)) goto L_11212e03;
  /* 11212dc5 cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212dcc jle 0x11212de1 */
  if ((C.zf||C.sf!=C.of)) goto L_11212de1;
  /* 11212dce push 1 */
  push32((uint32_t)(0x1u));
  /* 11212dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11212dd4 call 0x11209560 */
  push32(0x11212dd9u); f_11209560();
  /* 11212dd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212ddc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11212ddf jmp 0x11212df5 */
  goto L_11212df5;
L_11212de1:;
  /* 11212de1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212de4 mov eax, dword ptr [0x1122dc98] */
  EAX = (r32((uint32_t)(0x1122dc98)));
  /* 11212de9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11212deb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11212def and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11212df2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11212df5:;
  /* 11212df5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212df9 jne 0x11212e03 */
  if (!C.zf) goto L_11212e03;
  /* 11212dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212dfe jmp 0x11212eb7 */
  goto L_11212eb7;
L_11212e03:;
  /* 11212e03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212e06 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11212e09 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11212e0f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11212e15 mov eax, dword ptr [0x1122dc98] */
  EAX = (r32((uint32_t)(0x1122dc98)));
  /* 11212e1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11212e1c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11212e20 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11212e26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11212e28 je 0x11212e4c */
  if (C.zf) goto L_11212e4c;
  /* 11212e2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212e2d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11212e30 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11212e36 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11212e39 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11212e3c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11212e3f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11212e43 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11212e4a jmp 0x11212e5d */
  goto L_11212e5d;
L_11212e4c:;
  /* 11212e4c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11212e4f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11212e52 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11212e56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11212e5d:;
  /* 11212e5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11212e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11212e61 push 3 */
  push32((uint32_t)(0x3u));
  /* 11212e63 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11212e66 push edx */
  push32((uint32_t)(EDX));
  /* 11212e67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212e6a push eax */
  push32((uint32_t)(EAX));
  /* 11212e6b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11212e6e push ecx */
  push32((uint32_t)(ECX));
  /* 11212e6f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11212e74 mov edx, dword ptr [0x1122f658] */
  EDX = (r32((uint32_t)(0x1122f658)));
  /* 11212e7a push edx */
  push32((uint32_t)(EDX));
  /* 11212e7b call 0x1120b940 */
  push32(0x11212e80u); f_1120b940();
  /* 11212e80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212e83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11212e86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212e8a jne 0x11212e91 */
  if (!C.zf) goto L_11212e91;
  /* 11212e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212e8f jmp 0x11212eb7 */
  goto L_11212eb7;
L_11212e91:;
  /* 11212e91 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212e95 jne 0x11212ea1 */
  if (!C.zf) goto L_11212ea1;
  /* 11212e97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212e9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11212e9f jmp 0x11212eb7 */
  goto L_11212eb7;
L_11212ea1:;
  /* 11212ea1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11212ea4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11212ea9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11212eac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11212eb2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11212eb5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11212eb7:;
  /* 11212eb7 mov esp, ebp */
  ESP = (EBP);
  /* 11212eb9 pop ebp */
  EBP = (pop32());
  /* 11212eba ret  */
  ESPCHK(0x11212d90u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11212ec0 (52 bytes, 19 insns) */
void f_11212ec0(void) {
  FTRACE(0x11212ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212ec0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11212ec4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11212ec8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11212eca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11212ece jne 0x11212ed9 */
  if (!C.zf) goto L_11212ed9;
  /* 11212ed0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11212ed4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11212ed6 ret 0x10 */
  ESPCHK(0x11212ec0u, _esp0);
  ESP += 20; return;
L_11212ed9:;
  /* 11212ed9 push ebx */
  push32((uint32_t)(EBX));
  /* 11212eda mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11212edc mov ebx, eax */
  EBX = (EAX);
  /* 11212ede mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11212ee2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11212ee6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212ee8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11212eec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11212eee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212ef0 pop ebx */
  EBX = (pop32());
  /* 11212ef1 ret 0x10 */
  ESPCHK(0x11212ec0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012f00 @ 0x11212f00 (46 bytes, 18 insns) */
void f_11212f00(void) {
  FTRACE(0x11212f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11212f01 mov ebp, esp */
  EBP = (ESP);
  /* 11212f03 push ecx */
  push32((uint32_t)(ECX));
  /* 11212f04 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11212f06 call 0x11206f50 */
  push32(0x11212f0bu); f_11206f50();
  /* 11212f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212f0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212f11 push eax */
  push32((uint32_t)(EAX));
  /* 11212f12 call 0x11212f30 */
  push32(0x11212f17u); f_11212f30();
  /* 11212f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212f1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11212f1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11212f1f call 0x11206ff0 */
  push32(0x11212f24u); f_11206ff0();
  /* 11212f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212f2a mov esp, ebp */
  ESP = (EBP);
  /* 11212f2c pop ebp */
  EBP = (pop32());
  /* 11212f2d ret  */
  ESPCHK(0x11212f00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11212f30 (198 bytes, 69 insns) */
void f_11212f30(void) {
  FTRACE(0x11212f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11212f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11212f31 mov ebp, esp */
  EBP = (ESP);
  /* 11212f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11212f36 mov eax, dword ptr [0x1122f474] */
  EAX = (r32((uint32_t)(0x1122f474)));
  /* 11212f3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11212f3e cmp dword ptr [0x11230f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212f45 jne 0x11212f4e */
  if (!C.zf) goto L_11212f4e;
  /* 11212f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212f49 jmp 0x11212ff2 */
  goto L_11212ff2;
L_11212f4e:;
  /* 11212f4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212f52 jne 0x11212f76 */
  if (!C.zf) goto L_11212f76;
  /* 11212f54 cmp dword ptr [0x1122f47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212f5b je 0x11212f76 */
  if (C.zf) goto L_11212f76;
  /* 11212f5d call 0x11213050 */
  push32(0x11212f62u); f_11213050();
  /* 11212f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212f64 je 0x11212f6d */
  if (C.zf) goto L_11212f6d;
  /* 11212f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11212f68 jmp 0x11212ff2 */
  goto L_11212ff2;
L_11212f6d:;
  /* 11212f6d mov ecx, dword ptr [0x1122f474] */
  ECX = (r32((uint32_t)(0x1122f474)));
  /* 11212f73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11212f76:;
  /* 11212f76 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212f7a je 0x11212ff0 */
  if (C.zf) goto L_11212ff0;
  /* 11212f7c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212f80 je 0x11212ff0 */
  if (C.zf) goto L_11212ff0;
  /* 11212f82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212f85 push edx */
  push32((uint32_t)(EDX));
  /* 11212f86 call 0x11206380 */
  push32(0x11212f8bu); f_11206380();
  /* 11212f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212f8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11212f91:;
  /* 11212f91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212f94 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212f97 je 0x11212ff0 */
  if (C.zf) goto L_11212ff0;
  /* 11212f99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212f9c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11212f9e push edx */
  push32((uint32_t)(EDX));
  /* 11212f9f call 0x11206380 */
  push32(0x11212fa4u); f_11206380();
  /* 11212fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212fa7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212faa jbe 0x11212fe5 */
  if ((C.cf||C.zf)) goto L_11212fe5;
  /* 11212fac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212faf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11212fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212fb4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11212fb8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11212fbb jne 0x11212fe5 */
  if (!C.zf) goto L_11212fe5;
  /* 11212fbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11212fc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11212fc4 push edx */
  push32((uint32_t)(EDX));
  /* 11212fc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212fc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11212fca push ecx */
  push32((uint32_t)(ECX));
  /* 11212fcb call 0x11213000 */
  push32(0x11212fd0u); f_11213000();
  /* 11212fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11212fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11212fd5 jne 0x11212fe5 */
  if (!C.zf) goto L_11212fe5;
  /* 11212fd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212fda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11212fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11212fdf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11212fe3 jmp 0x11212ff2 */
  goto L_11212ff2;
L_11212fe5:;
  /* 11212fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11212fe8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11212feb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11212fee jmp 0x11212f91 */
  goto L_11212f91;
L_11212ff0:;
  /* 11212ff0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11212ff2:;
  /* 11212ff2 mov esp, ebp */
  ESP = (EBP);
  /* 11212ff4 pop ebp */
  EBP = (pop32());
  /* 11212ff5 ret  */
  ESPCHK(0x11212f30u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11213000 (79 bytes, 32 insns) */
void f_11213000(void) {
  FTRACE(0x11213000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213000 push ebp */
  push32((uint32_t)(EBP));
  /* 11213001 mov ebp, esp */
  EBP = (ESP);
  /* 11213003 push ecx */
  push32((uint32_t)(ECX));
  /* 11213004 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213008 jne 0x1121300e */
  if (!C.zf) goto L_1121300e;
  /* 1121300a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121300c jmp 0x1121304b */
  goto L_1121304b;
L_1121300e:;
  /* 1121300e mov eax, dword ptr [0x11230b44] */
  EAX = (r32((uint32_t)(0x11230b44)));
  /* 11213013 push eax */
  push32((uint32_t)(EAX));
  /* 11213014 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11213017 push ecx */
  push32((uint32_t)(ECX));
  /* 11213018 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1121301b push edx */
  push32((uint32_t)(EDX));
  /* 1121301c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121301f push eax */
  push32((uint32_t)(EAX));
  /* 11213020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213023 push ecx */
  push32((uint32_t)(ECX));
  /* 11213024 push 1 */
  push32((uint32_t)(0x1u));
  /* 11213026 mov edx, dword ptr [0x11230de4] */
  EDX = (r32((uint32_t)(0x11230de4)));
  /* 1121302c push edx */
  push32((uint32_t)(EDX));
  /* 1121302d call 0x11213100 */
  push32(0x11213032u); f_11213100();
  /* 11213032 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213035 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11213038 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121303c jne 0x11213045 */
  if (!C.zf) goto L_11213045;
  /* 1121303e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11213043 jmp 0x1121304b */
  goto L_1121304b;
L_11213045:;
  /* 11213045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213048 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1121304b:;
  /* 1121304b mov esp, ebp */
  ESP = (EBP);
  /* 1121304d pop ebp */
  EBP = (pop32());
  /* 1121304e ret  */
  ESPCHK(0x11213000u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x11213050 (174 bytes, 66 insns) */
void f_11213050(void) {
  FTRACE(0x11213050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213050 push ebp */
  push32((uint32_t)(EBP));
  /* 11213051 mov ebp, esp */
  EBP = (ESP);
  /* 11213053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213056 mov eax, dword ptr [0x1122f47c] */
  EAX = (r32((uint32_t)(0x1122f47c)));
  /* 1121305b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1121305e:;
  /* 1121305e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213061 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213064 je 0x112130f8 */
  if (C.zf) goto L_112130f8;
  /* 1121306a push 0 */
  push32((uint32_t)(0x0u));
  /* 1121306c push 0 */
  push32((uint32_t)(0x0u));
  /* 1121306e push 0 */
  push32((uint32_t)(0x0u));
  /* 11213070 push 0 */
  push32((uint32_t)(0x0u));
  /* 11213072 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11213074 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213077 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11213079 push eax */
  push32((uint32_t)(EAX));
  /* 1121307a push 0 */
  push32((uint32_t)(0x0u));
  /* 1121307c push 1 */
  push32((uint32_t)(0x1u));
  /* 1121307e call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x11213084u);
  /* 11213084 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11213087 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121308b jne 0x11213092 */
  if (!C.zf) goto L_11213092;
  /* 1121308d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11213090 jmp 0x112130fa */
  goto L_112130fa;
L_11213092:;
  /* 11213092 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11213094 push 0x1122b904 */
  push32((uint32_t)(0x1122b904u));
  /* 11213099 push 2 */
  push32((uint32_t)(0x2u));
  /* 1121309b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121309e push ecx */
  push32((uint32_t)(ECX));
  /* 1121309f call 0x11203550 */
  push32(0x112130a4u); f_11203550();
  /* 112130a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112130a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112130aa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112130ae jne 0x112130b5 */
  if (!C.zf) goto L_112130b5;
  /* 112130b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112130b3 jmp 0x112130fa */
  goto L_112130fa;
L_112130b5:;
  /* 112130b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112130b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112130b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112130bc push edx */
  push32((uint32_t)(EDX));
  /* 112130bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112130c0 push eax */
  push32((uint32_t)(EAX));
  /* 112130c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112130c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112130c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112130c8 push edx */
  push32((uint32_t)(EDX));
  /* 112130c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112130cb push 1 */
  push32((uint32_t)(0x1u));
  /* 112130cd call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x112130d3u);
  /* 112130d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112130d5 jne 0x112130dc */
  if (!C.zf) goto L_112130dc;
  /* 112130d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112130da jmp 0x112130fa */
  goto L_112130fa;
L_112130dc:;
  /* 112130dc push 0 */
  push32((uint32_t)(0x0u));
  /* 112130de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112130e1 push eax */
  push32((uint32_t)(EAX));
  /* 112130e2 call 0x11213550 */
  push32(0x112130e7u); f_11213550();
  /* 112130e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112130ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112130ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112130f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112130f3 jmp 0x1121305e */
  goto L_1121305e;
L_112130f8:;
  /* 112130f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112130fa:;
  /* 112130fa mov esp, ebp */
  ESP = (EBP);
  /* 112130fc pop ebp */
  EBP = (pop32());
  /* 112130fd ret  */
  ESPCHK(0x11213050u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x11213100 (970 bytes, 340 insns) */
void f_11213100(void) {
  FTRACE(0x11213100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213100 push ebp */
  push32((uint32_t)(EBP));
  /* 11213101 mov ebp, esp */
  EBP = (ESP);
  /* 11213103 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11213105 push 0x1122b958 */
  push32((uint32_t)(0x1122b958u));
  /* 1121310a push 0x1120c658 */
  push32((uint32_t)(0x1120c658u));
  /* 1121310f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11213115 push eax */
  push32((uint32_t)(EAX));
  /* 11213116 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1121311d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213120 push ebx */
  push32((uint32_t)(EBX));
  /* 11213121 push esi */
  push32((uint32_t)(ESI));
  /* 11213122 push edi */
  push32((uint32_t)(EDI));
  /* 11213123 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11213126 cmp dword ptr [0x1122f7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121312d jne 0x11213186 */
  if (!C.zf) goto L_11213186;
  /* 1121312f push 1 */
  push32((uint32_t)(0x1u));
  /* 11213131 push 0x1122afb4 */
  push32((uint32_t)(0x1122afb4u));
  /* 11213136 push 1 */
  push32((uint32_t)(0x1u));
  /* 11213138 push 0x1122afb4 */
  push32((uint32_t)(0x1122afb4u));
  /* 1121313d push 0 */
  push32((uint32_t)(0x0u));
  /* 1121313f push 0 */
  push32((uint32_t)(0x0u));
  /* 11213141 call dword ptr [0x11231288] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231288))), 0x11213147u);
  /* 11213147 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11213149 je 0x11213157 */
  if (C.zf) goto L_11213157;
  /* 1121314b mov dword ptr [0x1122f7bc], 1 */
  w32((uint32_t)(0x1122f7bc), (0x1u));
  /* 11213155 jmp 0x11213186 */
  goto L_11213186;
L_11213157:;
  /* 11213157 push 1 */
  push32((uint32_t)(0x1u));
  /* 11213159 push 0x1122afb0 */
  push32((uint32_t)(0x1122afb0u));
  /* 1121315e push 1 */
  push32((uint32_t)(0x1u));
  /* 11213160 push 0x1122afb0 */
  push32((uint32_t)(0x1122afb0u));
  /* 11213165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11213167 push 0 */
  push32((uint32_t)(0x0u));
  /* 11213169 call dword ptr [0x1123128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123128c))), 0x1121316fu);
  /* 1121316f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11213171 je 0x1121317f */
  if (C.zf) goto L_1121317f;
  /* 11213173 mov dword ptr [0x1122f7bc], 2 */
  w32((uint32_t)(0x1122f7bc), (0x2u));
  /* 1121317d jmp 0x11213186 */
  goto L_11213186;
L_1121317f:;
  /* 1121317f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213181 jmp 0x112134e4 */
  goto L_112134e4;
L_11213186:;
  /* 11213186 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121318a jle 0x1121319f */
  if ((C.zf||C.sf!=C.of)) goto L_1121319f;
  /* 1121318c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121318f push eax */
  push32((uint32_t)(EAX));
  /* 11213190 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11213193 push ecx */
  push32((uint32_t)(ECX));
  /* 11213194 call 0x11213500 */
  push32(0x11213199u); f_11213500();
  /* 11213199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121319c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1121319f:;
  /* 1121319f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112131a3 jle 0x112131b8 */
  if ((C.zf||C.sf!=C.of)) goto L_112131b8;
  /* 112131a5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112131a8 push edx */
  push32((uint32_t)(EDX));
  /* 112131a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112131ac push eax */
  push32((uint32_t)(EAX));
  /* 112131ad call 0x11213500 */
  push32(0x112131b2u); f_11213500();
  /* 112131b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112131b5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_112131b8:;
  /* 112131b8 cmp dword ptr [0x1122f7bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112131bf jne 0x112131e4 */
  if (!C.zf) goto L_112131e4;
  /* 112131c1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112131c4 push ecx */
  push32((uint32_t)(ECX));
  /* 112131c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112131c8 push edx */
  push32((uint32_t)(EDX));
  /* 112131c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112131cc push eax */
  push32((uint32_t)(EAX));
  /* 112131cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112131d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112131d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112131d4 push edx */
  push32((uint32_t)(EDX));
  /* 112131d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112131d8 push eax */
  push32((uint32_t)(EAX));
  /* 112131d9 call dword ptr [0x1123128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123128c))), 0x112131dfu);
  /* 112131df jmp 0x112134e4 */
  goto L_112134e4;
L_112131e4:;
  /* 112131e4 cmp dword ptr [0x1122f7bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112131eb jne 0x112134e2 */
  if (!C.zf) goto L_112134e2;
  /* 112131f1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112131f5 jne 0x11213200 */
  if (!C.zf) goto L_11213200;
  /* 112131f7 mov ecx, dword ptr [0x1122f668] */
  ECX = (r32((uint32_t)(0x1122f668)));
  /* 112131fd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11213200:;
  /* 11213200 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213204 je 0x11213210 */
  if (C.zf) goto L_11213210;
  /* 11213206 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121320a jne 0x1121338c */
  if (!C.zf) goto L_1121338c;
L_11213210:;
  /* 11213210 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11213213 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213216 jne 0x11213222 */
  if (!C.zf) goto L_11213222;
  /* 11213218 mov eax, 2 */
  EAX = (0x2u);
  /* 1121321d jmp 0x112134e4 */
  goto L_112134e4;
L_11213222:;
  /* 11213222 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213226 jle 0x11213232 */
  if ((C.zf||C.sf!=C.of)) goto L_11213232;
  /* 11213228 mov eax, 1 */
  EAX = (0x1u);
  /* 1121322d jmp 0x112134e4 */
  goto L_112134e4;
L_11213232:;
  /* 11213232 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213236 jle 0x11213242 */
  if ((C.zf||C.sf!=C.of)) goto L_11213242;
  /* 11213238 mov eax, 3 */
  EAX = (0x3u);
  /* 1121323d jmp 0x112134e4 */
  goto L_112134e4;
L_11213242:;
  /* 11213242 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11213245 push eax */
  push32((uint32_t)(EAX));
  /* 11213246 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11213249 push ecx */
  push32((uint32_t)(ECX));
  /* 1121324a call dword ptr [0x112312e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e4))), 0x11213250u);
  /* 11213250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11213252 jne 0x1121325b */
  if (!C.zf) goto L_1121325b;
  /* 11213254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213256 jmp 0x112134e4 */
  goto L_112134e4;
L_1121325b:;
  /* 1121325b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121325f jne 0x11213267 */
  if (!C.zf) goto L_11213267;
  /* 11213261 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213265 je 0x11213294 */
  if (C.zf) goto L_11213294;
L_11213267:;
  /* 11213267 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121326b jne 0x11213273 */
  if (!C.zf) goto L_11213273;
  /* 1121326d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213271 je 0x11213294 */
  if (C.zf) goto L_11213294;
L_11213273:;
  /* 11213273 push 0x1122b918 */
  push32((uint32_t)(0x1122b918u));
  /* 11213278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1121327a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1121327f push 0x1122b910 */
  push32((uint32_t)(0x1122b910u));
  /* 11213284 push 2 */
  push32((uint32_t)(0x2u));
  /* 11213286 call 0x11202610 */
  push32(0x1121328bu); f_11202610();
  /* 1121328b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121328e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213291 jne 0x11213294 */
  if (!C.zf) goto L_11213294;
  /* 11213293 int3  */
  x86_unimpl("int3 @ 0x11213293");
L_11213294:;
  /* 11213294 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11213296 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11213298 jne 0x1121325b */
  if (!C.zf) goto L_1121325b;
  /* 1121329a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121329e jle 0x11213313 */
  if ((C.zf||C.sf!=C.of)) goto L_11213313;
  /* 112132a0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112132a4 jae 0x112132b0 */
  if (!C.cf) goto L_112132b0;
  /* 112132a6 mov eax, 3 */
  EAX = (0x3u);
  /* 112132ab jmp 0x112134e4 */
  goto L_112134e4;
L_112132b0:;
  /* 112132b0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 112132b3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 112132b6 jmp 0x112132c1 */
  goto L_112132c1;
L_112132b8:;
  /* 112132b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 112132bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112132be mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_112132c1:;
  /* 112132c1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 112132c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112132c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112132c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112132ca je 0x11213309 */
  if (C.zf) goto L_11213309;
  /* 112132cc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 112132cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112132d1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112132d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112132d6 je 0x11213309 */
  if (C.zf) goto L_11213309;
  /* 112132d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112132db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112132dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112132df mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 112132e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112132e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112132e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112132e8 jl 0x11213307 */
  if ((C.sf!=C.of)) goto L_11213307;
  /* 112132ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112132ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112132ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112132f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 112132f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112132f6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 112132f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112132fb jg 0x11213307 */
  if ((!C.zf&&C.sf==C.of)) goto L_11213307;
  /* 112132fd mov eax, 2 */
  EAX = (0x2u);
  /* 11213302 jmp 0x112134e4 */
  goto L_112134e4;
L_11213307:;
  /* 11213307 jmp 0x112132b8 */
  goto L_112132b8;
L_11213309:;
  /* 11213309 mov eax, 3 */
  EAX = (0x3u);
  /* 1121330e jmp 0x112134e4 */
  goto L_112134e4;
L_11213313:;
  /* 11213313 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213317 jle 0x1121338c */
  if ((C.zf||C.sf!=C.of)) goto L_1121338c;
  /* 11213319 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121331d jae 0x11213329 */
  if (!C.cf) goto L_11213329;
  /* 1121331f mov eax, 1 */
  EAX = (0x1u);
  /* 11213324 jmp 0x112134e4 */
  goto L_112134e4;
L_11213329:;
  /* 11213329 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1121332c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1121332f jmp 0x1121333a */
  goto L_1121333a;
L_11213331:;
  /* 11213331 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11213334 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213337 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1121333a:;
  /* 1121333a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1121333d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1121333f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11213341 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11213343 je 0x11213382 */
  if (C.zf) goto L_11213382;
  /* 11213345 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11213348 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1121334a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1121334d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1121334f je 0x11213382 */
  if (C.zf) goto L_11213382;
  /* 11213351 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11213354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213356 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11213358 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1121335b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1121335d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1121335f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213361 jl 0x11213380 */
  if ((C.sf!=C.of)) goto L_11213380;
  /* 11213363 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11213366 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11213368 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1121336a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1121336d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121336f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11213372 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213374 jg 0x11213380 */
  if ((!C.zf&&C.sf==C.of)) goto L_11213380;
  /* 11213376 mov eax, 2 */
  EAX = (0x2u);
  /* 1121337b jmp 0x112134e4 */
  goto L_112134e4;
L_11213380:;
  /* 11213380 jmp 0x11213331 */
  goto L_11213331;
L_11213382:;
  /* 11213382 mov eax, 1 */
  EAX = (0x1u);
  /* 11213387 jmp 0x112134e4 */
  goto L_112134e4;
L_1121338c:;
  /* 1121338c push 0 */
  push32((uint32_t)(0x0u));
  /* 1121338e push 0 */
  push32((uint32_t)(0x0u));
  /* 11213390 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11213393 push ecx */
  push32((uint32_t)(ECX));
  /* 11213394 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11213397 push edx */
  push32((uint32_t)(EDX));
  /* 11213398 push 9 */
  push32((uint32_t)(0x9u));
  /* 1121339a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1121339d push eax */
  push32((uint32_t)(EAX));
  /* 1121339e call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x112133a4u);
  /* 112133a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112133a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112133ab jne 0x112133b4 */
  if (!C.zf) goto L_112133b4;
  /* 112133ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112133af jmp 0x112134e4 */
  goto L_112134e4;
L_112133b4:;
  /* 112133b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112133bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112133be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112133c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112133c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112133c5 call 0x112066f0 */
  push32(0x112133cau); f_112066f0();
  /* 112133ca mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 112133cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112133d0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 112133d3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112133d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112133dd jmp 0x112133f6 */
  goto L_112133f6;
  /* 112133df mov eax, 1 */
  EAX = (0x1u);
  /* 112133e4 ret  */
  ESPCHK(0x11213100u, _esp0);
  ESP += 4; return;
  /* 112133e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112133e8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112133ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112133f6:;
  /* 112133f6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112133fa jne 0x11213403 */
  if (!C.zf) goto L_11213403;
  /* 112133fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112133fe jmp 0x112134e4 */
  goto L_112134e4;
L_11213403:;
  /* 11213403 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11213406 push edx */
  push32((uint32_t)(EDX));
  /* 11213407 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1121340a push eax */
  push32((uint32_t)(EAX));
  /* 1121340b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1121340e push ecx */
  push32((uint32_t)(ECX));
  /* 1121340f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11213412 push edx */
  push32((uint32_t)(EDX));
  /* 11213413 push 1 */
  push32((uint32_t)(0x1u));
  /* 11213415 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11213418 push eax */
  push32((uint32_t)(EAX));
  /* 11213419 call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x1121341fu);
  /* 1121341f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11213421 jne 0x1121342a */
  if (!C.zf) goto L_1121342a;
  /* 11213423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213425 jmp 0x112134e4 */
  goto L_112134e4;
L_1121342a:;
  /* 1121342a push 0 */
  push32((uint32_t)(0x0u));
  /* 1121342c push 0 */
  push32((uint32_t)(0x0u));
  /* 1121342e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11213431 push ecx */
  push32((uint32_t)(ECX));
  /* 11213432 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11213435 push edx */
  push32((uint32_t)(EDX));
  /* 11213436 push 9 */
  push32((uint32_t)(0x9u));
  /* 11213438 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1121343b push eax */
  push32((uint32_t)(EAX));
  /* 1121343c call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x11213442u);
  /* 11213442 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11213445 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213449 jne 0x11213452 */
  if (!C.zf) goto L_11213452;
  /* 1121344b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121344d jmp 0x112134e4 */
  goto L_112134e4;
L_11213452:;
  /* 11213452 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11213459 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1121345c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1121345e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213461 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11213463 call 0x112066f0 */
  push32(0x11213468u); f_112066f0();
  /* 11213468 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1121346b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1121346e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11213471 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11213474 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1121347b jmp 0x11213494 */
  goto L_11213494;
  /* 1121347d mov eax, 1 */
  EAX = (0x1u);
  /* 11213482 ret  */
  ESPCHK(0x11213100u, _esp0);
  ESP += 4; return;
  /* 11213483 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11213486 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1121348d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11213494:;
  /* 11213494 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213498 jne 0x1121349e */
  if (!C.zf) goto L_1121349e;
  /* 1121349a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121349c jmp 0x112134e4 */
  goto L_112134e4;
L_1121349e:;
  /* 1121349e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112134a1 push edx */
  push32((uint32_t)(EDX));
  /* 112134a2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112134a5 push eax */
  push32((uint32_t)(EAX));
  /* 112134a6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112134a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112134aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112134ad push edx */
  push32((uint32_t)(EDX));
  /* 112134ae push 1 */
  push32((uint32_t)(0x1u));
  /* 112134b0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112134b3 push eax */
  push32((uint32_t)(EAX));
  /* 112134b4 call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x112134bau);
  /* 112134ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112134bc jne 0x112134c2 */
  if (!C.zf) goto L_112134c2;
  /* 112134be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112134c0 jmp 0x112134e4 */
  goto L_112134e4;
L_112134c2:;
  /* 112134c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112134c5 push ecx */
  push32((uint32_t)(ECX));
  /* 112134c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112134c9 push edx */
  push32((uint32_t)(EDX));
  /* 112134ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112134cd push eax */
  push32((uint32_t)(EAX));
  /* 112134ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112134d1 push ecx */
  push32((uint32_t)(ECX));
  /* 112134d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112134d5 push edx */
  push32((uint32_t)(EDX));
  /* 112134d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112134d9 push eax */
  push32((uint32_t)(EAX));
  /* 112134da call dword ptr [0x11231288] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231288))), 0x112134e0u);
  /* 112134e0 jmp 0x112134e4 */
  goto L_112134e4;
L_112134e2:;
  /* 112134e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112134e4:;
  /* 112134e4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 112134e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112134ea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112134f1 pop edi */
  EDI = (pop32());
  /* 112134f2 pop esi */
  ESI = (pop32());
  /* 112134f3 pop ebx */
  EBX = (pop32());
  /* 112134f4 mov esp, ebp */
  ESP = (EBP);
  /* 112134f6 pop ebp */
  EBP = (pop32());
  /* 112134f7 ret  */
  ESPCHK(0x11213100u, _esp0);
  ESP += 4; return;
}

/* FUN_10013500 @ 0x11213500 (80 bytes, 32 insns) */
void f_11213500(void) {
  FTRACE(0x11213500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213500 push ebp */
  push32((uint32_t)(EBP));
  /* 11213501 mov ebp, esp */
  EBP = (ESP);
  /* 11213503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213506 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11213509 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1121350c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121350f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11213512:;
  /* 11213512 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213515 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213518 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121351b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1121351e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11213520 je 0x11213537 */
  if (C.zf) goto L_11213537;
  /* 11213522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213525 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11213528 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1121352a je 0x11213537 */
  if (C.zf) goto L_11213537;
  /* 1121352c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121352f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11213535 jmp 0x11213512 */
  goto L_11213512;
L_11213537:;
  /* 11213537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121353a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1121353d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1121353f jne 0x11213549 */
  if (!C.zf) goto L_11213549;
  /* 11213541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213544 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213547 jmp 0x1121354c */
  goto L_1121354c;
L_11213549:;
  /* 11213549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1121354c:;
  /* 1121354c mov esp, ebp */
  ESP = (EBP);
  /* 1121354e pop ebp */
  EBP = (pop32());
  /* 1121354f ret  */
  ESPCHK(0x11213500u, _esp0);
  ESP += 4; return;
}

/* FUN_10013550 @ 0x11213550 (736 bytes, 224 insns) */
void f_11213550(void) {
  FTRACE(0x11213550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213550 push ebp */
  push32((uint32_t)(EBP));
  /* 11213551 mov ebp, esp */
  EBP = (ESP);
  /* 11213553 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213556 push esi */
  push32((uint32_t)(ESI));
  /* 11213557 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121355b je 0x1121357c */
  if (C.zf) goto L_1121357c;
  /* 1121355d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1121355f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213562 push eax */
  push32((uint32_t)(EAX));
  /* 11213563 call 0x112139a0 */
  push32(0x11213568u); f_112139a0();
  /* 11213568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121356b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1121356e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213572 je 0x1121357c */
  if (C.zf) goto L_1121357c;
  /* 11213574 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213577 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121357a jne 0x11213584 */
  if (!C.zf) goto L_11213584;
L_1121357c:;
  /* 1121357c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1121357f jmp 0x1121382b */
  goto L_1121382b;
L_11213584:;
  /* 11213584 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11213587 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1121358b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1121358d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121358f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11213590 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11213593 mov ecx, dword ptr [0x1122f474] */
  ECX = (r32((uint32_t)(0x1122f474)));
  /* 11213599 cmp ecx, dword ptr [0x1122f478] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1122f478))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121359f jne 0x112135b5 */
  if (!C.zf) goto L_112135b5;
  /* 112135a1 mov edx, dword ptr [0x1122f474] */
  EDX = (r32((uint32_t)(0x1122f474)));
  /* 112135a7 push edx */
  push32((uint32_t)(EDX));
  /* 112135a8 call 0x112138b0 */
  push32(0x112135adu); f_112138b0();
  /* 112135ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112135b0 mov dword ptr [0x1122f474], eax */
  w32((uint32_t)(0x1122f474), (EAX));
L_112135b5:;
  /* 112135b5 cmp dword ptr [0x1122f474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112135bc jne 0x11213675 */
  if (!C.zf) goto L_11213675;
  /* 112135c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112135c6 je 0x112135e7 */
  if (C.zf) goto L_112135e7;
  /* 112135c8 cmp dword ptr [0x1122f47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112135cf je 0x112135e7 */
  if (C.zf) goto L_112135e7;
  /* 112135d1 call 0x11213050 */
  push32(0x112135d6u); f_11213050();
  /* 112135d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112135d8 je 0x112135e2 */
  if (C.zf) goto L_112135e2;
  /* 112135da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112135dd jmp 0x1121382b */
  goto L_1121382b;
L_112135e2:;
  /* 112135e2 jmp 0x11213675 */
  goto L_11213675;
L_112135e7:;
  /* 112135e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112135eb je 0x112135f4 */
  if (C.zf) goto L_112135f4;
  /* 112135ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112135ef jmp 0x1121382b */
  goto L_1121382b;
L_112135f4:;
  /* 112135f4 cmp dword ptr [0x1122f474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112135fb jne 0x11213634 */
  if (!C.zf) goto L_11213634;
  /* 112135fd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11213602 push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 11213607 push 2 */
  push32((uint32_t)(0x2u));
  /* 11213609 push 4 */
  push32((uint32_t)(0x4u));
  /* 1121360b call 0x11203550 */
  push32(0x11213610u); f_11203550();
  /* 11213610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213613 mov dword ptr [0x1122f474], eax */
  w32((uint32_t)(0x1122f474), (EAX));
  /* 11213618 cmp dword ptr [0x1122f474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121361f jne 0x11213629 */
  if (!C.zf) goto L_11213629;
  /* 11213621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11213624 jmp 0x1121382b */
  goto L_1121382b;
L_11213629:;
  /* 11213629 mov eax, dword ptr [0x1122f474] */
  EAX = (r32((uint32_t)(0x1122f474)));
  /* 1121362e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11213634:;
  /* 11213634 cmp dword ptr [0x1122f47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121363b jne 0x11213675 */
  if (!C.zf) goto L_11213675;
  /* 1121363d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11213642 push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 11213647 push 2 */
  push32((uint32_t)(0x2u));
  /* 11213649 push 4 */
  push32((uint32_t)(0x4u));
  /* 1121364b call 0x11203550 */
  push32(0x11213650u); f_11203550();
  /* 11213650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213653 mov dword ptr [0x1122f47c], eax */
  w32((uint32_t)(0x1122f47c), (EAX));
  /* 11213658 cmp dword ptr [0x1122f47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121365f jne 0x11213669 */
  if (!C.zf) goto L_11213669;
  /* 11213661 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11213664 jmp 0x1121382b */
  goto L_1121382b;
L_11213669:;
  /* 11213669 mov ecx, dword ptr [0x1122f47c] */
  ECX = (r32((uint32_t)(0x1122f47c)));
  /* 1121366f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11213675:;
  /* 11213675 mov edx, dword ptr [0x1122f474] */
  EDX = (r32((uint32_t)(0x1122f474)));
  /* 1121367b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1121367e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11213681 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213684 push eax */
  push32((uint32_t)(EAX));
  /* 11213685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213688 push ecx */
  push32((uint32_t)(ECX));
  /* 11213689 call 0x11213830 */
  push32(0x1121368eu); f_11213830();
  /* 1121368e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213691 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11213694 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213698 jl 0x11213731 */
  if ((C.sf!=C.of)) goto L_11213731;
  /* 1121369e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112136a1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112136a4 je 0x11213731 */
  if (C.zf) goto L_11213731;
  /* 112136aa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112136ae je 0x11213723 */
  if (C.zf) goto L_11213723;
  /* 112136b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112136b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112136b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112136b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112136bb push edx */
  push32((uint32_t)(EDX));
  /* 112136bc call 0x11203fe0 */
  push32(0x112136c1u); f_11203fe0();
  /* 112136c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112136c4 jmp 0x112136cf */
  goto L_112136cf;
L_112136c6:;
  /* 112136c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112136c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112136cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112136cf:;
  /* 112136cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112136d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112136d5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112136d9 je 0x112136f0 */
  if (C.zf) goto L_112136f0;
  /* 112136db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112136de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112136e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112136e4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 112136e7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 112136eb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 112136ee jmp 0x112136c6 */
  goto L_112136c6;
L_112136f0:;
  /* 112136f0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 112136f5 push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 112136fa push 2 */
  push32((uint32_t)(0x2u));
  /* 112136fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112136ff shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11213702 push eax */
  push32((uint32_t)(EAX));
  /* 11213703 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11213706 push ecx */
  push32((uint32_t)(ECX));
  /* 11213707 call 0x112039e0 */
  push32(0x1121370cu); f_112039e0();
  /* 1121370c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121370f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11213712 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213716 je 0x11213721 */
  if (C.zf) goto L_11213721;
  /* 11213718 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121371b mov dword ptr [0x1122f474], edx */
  w32((uint32_t)(0x1122f474), (EDX));
L_11213721:;
  /* 11213721 jmp 0x1121372f */
  goto L_1121372f;
L_11213723:;
  /* 11213723 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213726 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11213729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121372c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1121372f:;
  /* 1121372f jmp 0x112137a4 */
  goto L_112137a4;
L_11213731:;
  /* 11213731 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213735 jne 0x1121379d */
  if (!C.zf) goto L_1121379d;
  /* 11213737 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121373b jge 0x11213745 */
  if ((C.sf==C.of)) goto L_11213745;
  /* 1121373d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213740 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11213742 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11213745:;
  /* 11213745 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1121374a push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 1121374f push 2 */
  push32((uint32_t)(0x2u));
  /* 11213751 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213754 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1121375b push edx */
  push32((uint32_t)(EDX));
  /* 1121375c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121375f push eax */
  push32((uint32_t)(EAX));
  /* 11213760 call 0x112039e0 */
  push32(0x11213765u); f_112039e0();
  /* 11213765 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213768 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1121376b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121376f jne 0x11213779 */
  if (!C.zf) goto L_11213779;
  /* 11213771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11213774 jmp 0x1121382b */
  goto L_1121382b;
L_11213779:;
  /* 11213779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121377c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121377f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213782 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11213785 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213788 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121378b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11213793 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11213796 mov dword ptr [0x1122f474], eax */
  w32((uint32_t)(0x1122f474), (EAX));
  /* 1121379b jmp 0x112137a4 */
  goto L_112137a4;
L_1121379d:;
  /* 1121379d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121379f jmp 0x1121382b */
  goto L_1121382b;
L_112137a4:;
  /* 112137a4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112137a8 je 0x11213829 */
  if (C.zf) goto L_11213829;
  /* 112137aa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 112137af push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 112137b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112137b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112137b9 push ecx */
  push32((uint32_t)(ECX));
  /* 112137ba call 0x11206380 */
  push32(0x112137bfu); f_11206380();
  /* 112137bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112137c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112137c5 push eax */
  push32((uint32_t)(EAX));
  /* 112137c6 call 0x11203550 */
  push32(0x112137cbu); f_11203550();
  /* 112137cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112137ce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112137d1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112137d5 je 0x11213829 */
  if (C.zf) goto L_11213829;
  /* 112137d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112137da push edx */
  push32((uint32_t)(EDX));
  /* 112137db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112137de push eax */
  push32((uint32_t)(EAX));
  /* 112137df call 0x11206500 */
  push32(0x112137e4u); f_11206500();
  /* 112137e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112137e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112137ea sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112137ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112137f0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112137f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112137f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112137f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112137fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112137fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213801 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11213804 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11213807 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11213809 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1121380b not edx */
  EDX = (~(EDX));
  /* 1121380d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11213810 push edx */
  push32((uint32_t)(EDX));
  /* 11213811 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11213814 push eax */
  push32((uint32_t)(EAX));
  /* 11213815 call dword ptr [0x11231284] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231284))), 0x1121381bu);
  /* 1121381b push 2 */
  push32((uint32_t)(0x2u));
  /* 1121381d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11213820 push ecx */
  push32((uint32_t)(ECX));
  /* 11213821 call 0x11203fe0 */
  push32(0x11213826u); f_11203fe0();
  /* 11213826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11213829:;
  /* 11213829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1121382b:;
  /* 1121382b pop esi */
  ESI = (pop32());
  /* 1121382c mov esp, ebp */
  ESP = (EBP);
  /* 1121382e pop ebp */
  EBP = (pop32());
  /* 1121382f ret  */
  ESPCHK(0x11213550u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11213830 (124 bytes, 47 insns) */
void f_11213830(void) {
  FTRACE(0x11213830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213830 push ebp */
  push32((uint32_t)(EBP));
  /* 11213831 mov ebp, esp */
  EBP = (ESP);
  /* 11213833 push ecx */
  push32((uint32_t)(ECX));
  /* 11213834 mov eax, dword ptr [0x1122f474] */
  EAX = (r32((uint32_t)(0x1122f474)));
  /* 11213839 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1121383c jmp 0x11213847 */
  goto L_11213847;
L_1121383e:;
  /* 1121383e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213841 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213844 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11213847:;
  /* 11213847 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121384a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121384d je 0x1121389a */
  if (C.zf) goto L_1121389a;
  /* 1121384f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11213852 push eax */
  push32((uint32_t)(EAX));
  /* 11213853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213856 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11213858 push edx */
  push32((uint32_t)(EDX));
  /* 11213859 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121385c push eax */
  push32((uint32_t)(EAX));
  /* 1121385d call 0x11213000 */
  push32(0x11213862u); f_11213000();
  /* 11213862 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11213867 jne 0x11213898 */
  if (!C.zf) goto L_11213898;
  /* 11213869 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121386c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1121386e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11213871 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11213875 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213878 je 0x1121388a */
  if (C.zf) goto L_1121388a;
  /* 1121387a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121387d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1121387f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11213882 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11213886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11213888 jne 0x11213898 */
  if (!C.zf) goto L_11213898;
L_1121388a:;
  /* 1121388a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121388d sub eax, dword ptr [0x1122f474] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122f474))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213893 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11213896 jmp 0x112138a8 */
  goto L_112138a8;
L_11213898:;
  /* 11213898 jmp 0x1121383e */
  goto L_1121383e;
L_1121389a:;
  /* 1121389a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121389d sub eax, dword ptr [0x1122f474] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122f474))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112138a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112138a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_112138a8:;
  /* 112138a8 mov esp, ebp */
  ESP = (EBP);
  /* 112138aa pop ebp */
  EBP = (pop32());
  /* 112138ab ret  */
  ESPCHK(0x11213830u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x112138b0 (238 bytes, 80 insns) */
void f_112138b0(void) {
  FTRACE(0x112138b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112138b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112138b1 mov ebp, esp */
  EBP = (ESP);
  /* 112138b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112138b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112138bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112138c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112138c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112138c7 jne 0x112138d0 */
  if (!C.zf) goto L_112138d0;
  /* 112138c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112138cb jmp 0x1121399a */
  goto L_1121399a;
L_112138d0:;
  /* 112138d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112138d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112138d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112138d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112138db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112138de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112138e0 je 0x112138ed */
  if (C.zf) goto L_112138ed;
  /* 112138e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112138e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112138e8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112138eb jmp 0x112138d0 */
  goto L_112138d0;
L_112138ed:;
  /* 112138ed push 0x146 */
  push32((uint32_t)(0x146u));
  /* 112138f2 push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 112138f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112138f9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112138fc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11213903 push eax */
  push32((uint32_t)(EAX));
  /* 11213904 call 0x11203550 */
  push32(0x11213909u); f_11203550();
  /* 11213909 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121390c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1121390f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213912 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11213915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213919 jne 0x11213925 */
  if (!C.zf) goto L_11213925;
  /* 1121391b push 9 */
  push32((uint32_t)(0x9u));
  /* 1121391d call 0x112024c0 */
  push32(0x11213922u); f_112024c0();
  /* 11213922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11213925:;
  /* 11213925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213928 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1121392b:;
  /* 1121392b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121392e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213931 je 0x1121398e */
  if (C.zf) goto L_1121398e;
  /* 11213933 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11213938 push 0x1122b970 */
  push32((uint32_t)(0x1122b970u));
  /* 1121393d push 2 */
  push32((uint32_t)(0x2u));
  /* 1121393f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11213942 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11213944 push edx */
  push32((uint32_t)(EDX));
  /* 11213945 call 0x11206380 */
  push32(0x1121394au); f_11206380();
  /* 1121394a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121394d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213950 push eax */
  push32((uint32_t)(EAX));
  /* 11213951 call 0x11203550 */
  push32(0x11213956u); f_11203550();
  /* 11213956 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121395c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1121395e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213961 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213964 je 0x1121397a */
  if (C.zf) goto L_1121397a;
  /* 11213966 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11213969 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1121396b push ecx */
  push32((uint32_t)(ECX));
  /* 1121396c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121396f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11213971 push eax */
  push32((uint32_t)(EAX));
  /* 11213972 call 0x11206500 */
  push32(0x11213977u); f_11206500();
  /* 11213977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1121397a:;
  /* 1121397a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121397d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213980 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11213983 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213986 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213989 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1121398c jmp 0x1121392b */
  goto L_1121392b;
L_1121398e:;
  /* 1121398e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11213991 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11213997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1121399a:;
  /* 1121399a mov esp, ebp */
  ESP = (EBP);
  /* 1121399c pop ebp */
  EBP = (pop32());
  /* 1121399d ret  */
  ESPCHK(0x112138b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x112139a0 (237 bytes, 81 insns) */
void f_112139a0(void) {
  FTRACE(0x112139a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112139a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112139a1 mov ebp, esp */
  EBP = (ESP);
  /* 112139a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112139a4 cmp dword ptr [0x11230bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112139ab jne 0x112139c2 */
  if (!C.zf) goto L_112139c2;
  /* 112139ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112139b0 push eax */
  push32((uint32_t)(EAX));
  /* 112139b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112139b4 push ecx */
  push32((uint32_t)(ECX));
  /* 112139b5 call 0x11213aa0 */
  push32(0x112139bau); f_11213aa0();
  /* 112139ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112139bd jmp 0x11213a89 */
  goto L_11213a89;
L_112139c2:;
  /* 112139c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112139c4 call 0x11206f50 */
  push32(0x112139c9u); f_11206f50();
  /* 112139c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112139cc jmp 0x112139d7 */
  goto L_112139d7;
L_112139ce:;
  /* 112139ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112139d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112139d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_112139d7:;
  /* 112139d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112139da movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 112139de mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 112139e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112139e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112139eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112139ed je 0x11213a6b */
  if (C.zf) goto L_11213a6b;
  /* 112139ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112139f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112139f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112139f9 mov cl, byte ptr [eax + 0x11230ce1] */
  CL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 112139ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11213a02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11213a04 je 0x11213a56 */
  if (C.zf) goto L_11213a56;
  /* 11213a06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213a09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213a0c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11213a0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213a12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11213a14 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11213a16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11213a18 jne 0x11213a28 */
  if (!C.zf) goto L_11213a28;
  /* 11213a1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11213a1c call 0x11206ff0 */
  push32(0x11213a21u); f_11206ff0();
  /* 11213a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213a26 jmp 0x11213a89 */
  goto L_11213a89;
L_11213a28:;
  /* 11213a28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213a2b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11213a31 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11213a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213a37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11213a39 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11213a3b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11213a3d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213a40 jne 0x11213a54 */
  if (!C.zf) goto L_11213a54;
  /* 11213a42 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11213a44 call 0x11206ff0 */
  push32(0x11213a49u); f_11206ff0();
  /* 11213a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213a4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213a4f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11213a52 jmp 0x11213a89 */
  goto L_11213a89;
L_11213a54:;
  /* 11213a54 jmp 0x11213a66 */
  goto L_11213a66;
L_11213a56:;
  /* 11213a56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213a59 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11213a5f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213a62 jne 0x11213a66 */
  if (!C.zf) goto L_11213a66;
  /* 11213a64 jmp 0x11213a6b */
  goto L_11213a6b;
L_11213a66:;
  /* 11213a66 jmp 0x112139ce */
  goto L_112139ce;
L_11213a6b:;
  /* 11213a6b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11213a6d call 0x11206ff0 */
  push32(0x11213a72u); f_11206ff0();
  /* 11213a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11213a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11213a78 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11213a7d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11213a80 jne 0x11213a87 */
  if (!C.zf) goto L_11213a87;
  /* 11213a82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11213a85 jmp 0x11213a89 */
  goto L_11213a89;
L_11213a87:;
  /* 11213a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11213a89:;
  /* 11213a89 mov esp, ebp */
  ESP = (EBP);
  /* 11213a8b pop ebp */
  EBP = (pop32());
  /* 11213a8c ret  */
  ESPCHK(0x112139a0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11213aa0 (193 bytes, 87 insns) */
void f_11213aa0(void) {
  FTRACE(0x11213aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213aa2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11213aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11213aa7 mov ebx, eax */
  EBX = (EAX);
  /* 11213aa9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11213aac mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11213ab0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11213ab6 je 0x11213acb */
  if (C.zf) goto L_11213acb;
L_11213ab8:;
  /* 11213ab8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11213aba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11213abb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11213abd je 0x11213a90 */
  if (C.zf) { jmp_ind(0x11213a90u); return; }
  /* 11213abf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11213ac1 je 0x11213b14 */
  if (C.zf) goto L_11213b14;
  /* 11213ac3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11213ac9 jne 0x11213ab8 */
  if (!C.zf) goto L_11213ab8;
L_11213acb:;
  /* 11213acb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11213acd push edi */
  push32((uint32_t)(EDI));
  /* 11213ace mov eax, ebx */
  EAX = (EBX);
  /* 11213ad0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11213ad3 push esi */
  push32((uint32_t)(ESI));
  /* 11213ad4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11213ad6:;
  /* 11213ad6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11213ad8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11213add mov eax, ecx */
  EAX = (ECX);
  /* 11213adf mov esi, edi */
  ESI = (EDI);
  /* 11213ae1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11213ae3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11213ae5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11213ae7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11213aea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11213aed xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11213aef xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11213af1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11213af4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11213afa jne 0x11213b18 */
  if (!C.zf) goto L_11213b18;
  /* 11213afc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11213b01 je 0x11213ad6 */
  if (C.zf) goto L_11213ad6;
  /* 11213b03 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11213b08 jne 0x11213b12 */
  if (!C.zf) goto L_11213b12;
  /* 11213b0a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11213b10 jne 0x11213ad6 */
  if (!C.zf) goto L_11213ad6;
L_11213b12:;
  /* 11213b12 pop esi */
  ESI = (pop32());
  /* 11213b13 pop edi */
  EDI = (pop32());
L_11213b14:;
  /* 11213b14 pop ebx */
  EBX = (pop32());
  /* 11213b15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11213b17 ret  */
  ESPCHK(0x11213aa0u, _esp0);
  ESP += 4; return;
L_11213b18:;
  /* 11213b18 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11213b1b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11213b1d je 0x11213b55 */
  if (C.zf) goto L_11213b55;
  /* 11213b1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11213b21 je 0x11213b12 */
  if (C.zf) goto L_11213b12;
  /* 11213b23 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11213b25 je 0x11213b4e */
  if (C.zf) goto L_11213b4e;
  /* 11213b27 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11213b29 je 0x11213b12 */
  if (C.zf) goto L_11213b12;
  /* 11213b2b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11213b2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11213b30 je 0x11213b47 */
  if (C.zf) goto L_11213b47;
  /* 11213b32 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11213b34 je 0x11213b12 */
  if (C.zf) goto L_11213b12;
  /* 11213b36 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11213b38 je 0x11213b40 */
  if (C.zf) goto L_11213b40;
  /* 11213b3a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11213b3c je 0x11213b12 */
  if (C.zf) goto L_11213b12;
  /* 11213b3e jmp 0x11213ad6 */
  goto L_11213ad6;
L_11213b40:;
  /* 11213b40 pop esi */
  ESI = (pop32());
  /* 11213b41 pop edi */
  EDI = (pop32());
  /* 11213b42 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11213b45 pop ebx */
  EBX = (pop32());
  /* 11213b46 ret  */
  ESPCHK(0x11213aa0u, _esp0);
  ESP += 4; return;
L_11213b47:;
  /* 11213b47 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11213b4a pop esi */
  ESI = (pop32());
  /* 11213b4b pop edi */
  EDI = (pop32());
  /* 11213b4c pop ebx */
  EBX = (pop32());
  /* 11213b4d ret  */
  ESPCHK(0x11213aa0u, _esp0);
  ESP += 4; return;
L_11213b4e:;
  /* 11213b4e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11213b51 pop esi */
  ESI = (pop32());
  /* 11213b52 pop edi */
  EDI = (pop32());
  /* 11213b53 pop ebx */
  EBX = (pop32());
  /* 11213b54 ret  */
  ESPCHK(0x11213aa0u, _esp0);
  ESP += 4; return;
L_11213b55:;
  /* 11213b55 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11213b58 pop esi */
  ESI = (pop32());
  /* 11213b59 pop edi */
  EDI = (pop32());
  /* 11213b5a pop ebx */
  EBX = (pop32());
  /* 11213b5b ret  */
  ESPCHK(0x11213aa0u, _esp0);
  ESP += 4; return;
  /* 11213b5c jmp dword ptr [0x112312f4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112312f4)))); return;
}

/* RtlUnwind @ 0x11213cac (6 bytes, 1 insns) */
void f_11213cac(void) {
  FTRACE(0x11213cacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11213cac jmp dword ptr [0x112312c0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112312c0)))); return;
}

