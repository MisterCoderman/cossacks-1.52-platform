#include "recomp.h"

/* FUN_10010920 @ 0x12630920 (394 bytes, 123 insns) */
void f_12630920(void) {
  FTRACE(0x12630920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630920 push ebp */
  push32((uint32_t)(EBP));
  /* 12630921 mov ebp, esp */
  EBP = (ESP);
  /* 12630923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1263092c push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 12630931 call dword ptr [0x126522c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c0))), 0x12630937u);
  /* 12630937 cmp dword ptr [0x1264f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263093e je 0x1263095e */
  if (C.zf) goto L_1263095e;
  /* 12630940 push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 12630945 call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x1263094bu);
  /* 1263094b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1263094d call 0x12626fe0 */
  push32(0x12630952u); f_12626fe0();
  /* 12630952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630955 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1263095c jmp 0x12630965 */
  goto L_12630965;
L_1263095e:;
  /* 1263095e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12630965:;
  /* 12630965 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630969 jne 0x12630976 */
  if (!C.zf) goto L_12630976;
  /* 1263096b mov ecx, dword ptr [0x1264ec98] */
  ECX = (r32((uint32_t)(0x1264ec98)));
  /* 12630971 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12630974 jmp 0x1263097c */
  goto L_1263097c;
L_12630976:;
  /* 12630976 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630979 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1263097c:;
  /* 1263097c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263097f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12630982:;
  /* 12630982 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630986 jbe 0x12630a73 */
  if ((C.cf||C.zf)) goto L_12630a73;
  /* 1263098c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263098f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12630991 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12630994 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12630998 je 0x126309a2 */
  if (C.zf) goto L_126309a2;
  /* 1263099a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1263099e je 0x126309a7 */
  if (C.zf) goto L_126309a7;
  /* 126309a0 jmp 0x12630a01 */
  goto L_12630a01;
L_126309a2:;
  /* 126309a2 jmp 0x12630a73 */
  goto L_12630a73;
L_126309a7:;
  /* 126309a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126309aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126309ad mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 126309b0 mov dword ptr [0x1264f878], 0 */
  w32((uint32_t)(0x1264f878), (0x0u));
  /* 126309ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126309bd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126309c0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126309c3 jne 0x126309d8 */
  if (!C.zf) goto L_126309d8;
  /* 126309c5 mov dword ptr [0x1264f878], 1 */
  w32((uint32_t)(0x1264f878), (0x1u));
  /* 126309cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126309d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126309d5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_126309d8:;
  /* 126309d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126309db push ecx */
  push32((uint32_t)(ECX));
  /* 126309dc lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 126309df push edx */
  push32((uint32_t)(EDX));
  /* 126309e0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 126309e3 push eax */
  push32((uint32_t)(EAX));
  /* 126309e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126309e7 push ecx */
  push32((uint32_t)(ECX));
  /* 126309e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126309eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126309ed push eax */
  push32((uint32_t)(EAX));
  /* 126309ee call 0x12630ab0 */
  push32(0x126309f3u); f_12630ab0();
  /* 126309f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126309f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126309f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126309fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 126309ff jmp 0x12630a6e */
  goto L_12630a6e;
L_12630a01:;
  /* 12630a01 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12630a06 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12630a08 mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 12630a0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12630a10 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12630a14 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12630a1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12630a1c je 0x12630a49 */
  if (C.zf) goto L_12630a49;
  /* 12630a1e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630a22 jbe 0x12630a49 */
  if ((C.cf||C.zf)) goto L_12630a49;
  /* 12630a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630a27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630a2a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12630a2c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12630a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630a31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630a34 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12630a37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630a3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630a3d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12630a40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630a43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630a46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12630a49:;
  /* 12630a49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630a4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630a4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12630a51 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12630a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630a56 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630a59 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12630a5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630a5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630a62 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12630a65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630a68 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630a6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12630a6e:;
  /* 12630a6e jmp 0x12630982 */
  goto L_12630982;
L_12630a73:;
  /* 12630a73 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630a77 je 0x12630a85 */
  if (C.zf) goto L_12630a85;
  /* 12630a79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12630a7b call 0x12627080 */
  push32(0x12630a80u); f_12627080();
  /* 12630a80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630a83 jmp 0x12630a90 */
  goto L_12630a90;
L_12630a85:;
  /* 12630a85 push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 12630a8a call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x12630a90u);
L_12630a90:;
  /* 12630a90 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630a94 jbe 0x12630aa4 */
  if ((C.cf||C.zf)) goto L_12630aa4;
  /* 12630a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630a99 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12630a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630a9f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630aa2 jmp 0x12630aa6 */
  goto L_12630aa6;
L_12630aa4:;
  /* 12630aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12630aa6:;
  /* 12630aa6 mov esp, ebp */
  ESP = (EBP);
  /* 12630aa8 pop ebp */
  EBP = (pop32());
  /* 12630aa9 ret  */
  ESPCHK(0x12630920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x12630ab0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12630ab0(void) {
  FTRACE(0x12630ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12630ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12630ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630ab6 push esi */
  push32((uint32_t)(ESI));
  /* 12630ab7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12630abb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12630abe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630ac1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630ac4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12630ac7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630acb ja 0x12631018 */
  if ((!C.cf&&!C.zf)) goto L_12631018;
  /* 12630ad1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630ad4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12630ad6 mov dl, byte ptr [eax + 0x12631079] */
  DL = (r8((uint32_t)(EAX + 0x12631079)));
  /* 12630adc jmp dword ptr [edx*4 + 0x1263101d] */
  switch (EDX) {
    case 0: goto L_12630ff6;
    case 1: goto L_12630b05;
    case 2: goto L_12630b4b;
    case 3: goto L_12630c98;
    case 4: goto L_12630cc0;
    case 5: goto L_12630d5f;
    case 6: goto L_12630dcb;
    case 7: goto L_12630df4;
    case 8: goto L_12630e35;
    case 9: goto L_12630f17;
    case 10: goto L_12630f7e;
    case 11: goto L_12630fcb;
    case 12: goto L_12630ae3;
    case 13: goto L_12630b28;
    case 14: goto L_12630b6e;
    case 15: goto L_12630c6e;
    case 16: goto L_12630d05;
    case 17: goto L_12630d32;
    case 18: goto L_12630d87;
    case 19: goto L_12630e0b;
    case 20: goto L_12630eb9;
    case 21: goto L_12630f48;
    case 22: goto L_12631018;
    default: x86_unimpl("switch@0x12630adc out of table"); return;
  }
L_12630ae3:;
  /* 12630ae3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 12630ae7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630aea push edx */
  push32((uint32_t)(EDX));
  /* 12630aeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630aee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12630af1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630af4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12630af7 push eax */
  push32((uint32_t)(EAX));
  /* 12630af8 call 0x126310d0 */
  push32(0x12630afdu); f_126310d0();
  /* 12630afd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630b00 jmp 0x12631018 */
  goto L_12631018;
L_12630b05:;
  /* 12630b05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630b08 push ecx */
  push32((uint32_t)(ECX));
  /* 12630b09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630b0c push edx */
  push32((uint32_t)(EDX));
  /* 12630b0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630b10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12630b13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630b16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12630b1a push eax */
  push32((uint32_t)(EAX));
  /* 12630b1b call 0x126310d0 */
  push32(0x12630b20u); f_126310d0();
  /* 12630b20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630b23 jmp 0x12631018 */
  goto L_12631018;
L_12630b28:;
  /* 12630b28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630b2b push ecx */
  push32((uint32_t)(ECX));
  /* 12630b2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630b2f push edx */
  push32((uint32_t)(EDX));
  /* 12630b30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630b33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12630b36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630b39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12630b3d push eax */
  push32((uint32_t)(EAX));
  /* 12630b3e call 0x126310d0 */
  push32(0x12630b43u); f_126310d0();
  /* 12630b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630b46 jmp 0x12631018 */
  goto L_12631018;
L_12630b4b:;
  /* 12630b4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630b4e push ecx */
  push32((uint32_t)(ECX));
  /* 12630b4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630b52 push edx */
  push32((uint32_t)(EDX));
  /* 12630b53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630b56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12630b59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630b5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12630b60 push eax */
  push32((uint32_t)(EAX));
  /* 12630b61 call 0x126310d0 */
  push32(0x12630b66u); f_126310d0();
  /* 12630b66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630b69 jmp 0x12631018 */
  goto L_12631018;
L_12630b6e:;
  /* 12630b6e cmp dword ptr [0x1264f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630b75 je 0x12630bf6 */
  if (C.zf) goto L_12630bf6;
  /* 12630b77 mov dword ptr [0x1264f878], 0 */
  w32((uint32_t)(0x1264f878), (0x0u));
  /* 12630b81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630b84 push ecx */
  push32((uint32_t)(ECX));
  /* 12630b85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630b88 push edx */
  push32((uint32_t)(EDX));
  /* 12630b89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630b8c push eax */
  push32((uint32_t)(EAX));
  /* 12630b8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630b90 push ecx */
  push32((uint32_t)(ECX));
  /* 12630b91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630b94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12630b9a push eax */
  push32((uint32_t)(EAX));
  /* 12630b9b call 0x12631280 */
  push32(0x12630ba0u); f_12631280();
  /* 12630ba0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630ba3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ba6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630ba9 jne 0x12630bb0 */
  if (!C.zf) goto L_12630bb0;
  /* 12630bab jmp 0x12631018 */
  goto L_12631018;
L_12630bb0:;
  /* 12630bb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630bb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12630bb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12630bb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630bbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12630bbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630bc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630bc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12630bc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630bc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12630bca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630bcd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630bd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12630bd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630bd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12630bd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630bd9 push edx */
  push32((uint32_t)(EDX));
  /* 12630bda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630bdd push eax */
  push32((uint32_t)(EAX));
  /* 12630bde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630be1 push ecx */
  push32((uint32_t)(ECX));
  /* 12630be2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630be5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12630beb push eax */
  push32((uint32_t)(EAX));
  /* 12630bec call 0x12631280 */
  push32(0x12630bf1u); f_12631280();
  /* 12630bf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630bf4 jmp 0x12630c69 */
  goto L_12630c69;
L_12630bf6:;
  /* 12630bf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 12630bfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630bfd push edx */
  push32((uint32_t)(EDX));
  /* 12630bfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630c01 push eax */
  push32((uint32_t)(EAX));
  /* 12630c02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630c05 push ecx */
  push32((uint32_t)(ECX));
  /* 12630c06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630c09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12630c0f push eax */
  push32((uint32_t)(EAX));
  /* 12630c10 call 0x12631280 */
  push32(0x12630c15u); f_12631280();
  /* 12630c15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630c18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630c1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630c1e jne 0x12630c25 */
  if (!C.zf) goto L_12630c25;
  /* 12630c20 jmp 0x12631018 */
  goto L_12631018;
L_12630c25:;
  /* 12630c25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630c28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12630c2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12630c2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630c30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12630c32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630c35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630c38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12630c3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630c3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12630c3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630c42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630c45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12630c47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630c4a push ecx */
  push32((uint32_t)(ECX));
  /* 12630c4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630c4e push edx */
  push32((uint32_t)(EDX));
  /* 12630c4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630c52 push eax */
  push32((uint32_t)(EAX));
  /* 12630c53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630c56 push ecx */
  push32((uint32_t)(ECX));
  /* 12630c57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630c5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12630c60 push eax */
  push32((uint32_t)(EAX));
  /* 12630c61 call 0x12631280 */
  push32(0x12630c66u); f_12631280();
  /* 12630c66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12630c69:;
  /* 12630c69 jmp 0x12631018 */
  goto L_12631018;
L_12630c6e:;
  /* 12630c6e mov ecx, dword ptr [0x1264f878] */
  ECX = (r32((uint32_t)(0x1264f878)));
  /* 12630c74 mov dword ptr [0x1264f888], ecx */
  w32((uint32_t)(0x1264f888), (ECX));
  /* 12630c7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630c7d push edx */
  push32((uint32_t)(EDX));
  /* 12630c7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630c81 push eax */
  push32((uint32_t)(EAX));
  /* 12630c82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12630c84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630c87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12630c8a push edx */
  push32((uint32_t)(EDX));
  /* 12630c8b call 0x12631120 */
  push32(0x12630c90u); f_12631120();
  /* 12630c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630c93 jmp 0x12631018 */
  goto L_12631018;
L_12630c98:;
  /* 12630c98 mov eax, dword ptr [0x1264f878] */
  EAX = (r32((uint32_t)(0x1264f878)));
  /* 12630c9d mov dword ptr [0x1264f888], eax */
  w32((uint32_t)(0x1264f888), (EAX));
  /* 12630ca2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12630ca6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630ca9 push edx */
  push32((uint32_t)(EDX));
  /* 12630caa push 2 */
  push32((uint32_t)(0x2u));
  /* 12630cac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630caf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12630cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12630cb3 call 0x12631120 */
  push32(0x12630cb8u); f_12631120();
  /* 12630cb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630cbb jmp 0x12631018 */
  goto L_12631018;
L_12630cc0:;
  /* 12630cc0 mov edx, dword ptr [0x1264f878] */
  EDX = (r32((uint32_t)(0x1264f878)));
  /* 12630cc6 mov dword ptr [0x1264f888], edx */
  w32((uint32_t)(0x1264f888), (EDX));
  /* 12630ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630ccf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12630cd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12630cd3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12630cd8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12630cda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12630cdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630ce1 jne 0x12630cea */
  if (!C.zf) goto L_12630cea;
  /* 12630ce3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12630cea:;
  /* 12630cea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ced push edx */
  push32((uint32_t)(EDX));
  /* 12630cee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630cf1 push eax */
  push32((uint32_t)(EAX));
  /* 12630cf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12630cf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12630cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12630cf8 call 0x12631120 */
  push32(0x12630cfdu); f_12631120();
  /* 12630cfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630d00 jmp 0x12631018 */
  goto L_12631018;
L_12630d05:;
  /* 12630d05 mov edx, dword ptr [0x1264f878] */
  EDX = (r32((uint32_t)(0x1264f878)));
  /* 12630d0b mov dword ptr [0x1264f888], edx */
  w32((uint32_t)(0x1264f888), (EDX));
  /* 12630d11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630d14 push eax */
  push32((uint32_t)(EAX));
  /* 12630d15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630d18 push ecx */
  push32((uint32_t)(ECX));
  /* 12630d19 push 3 */
  push32((uint32_t)(0x3u));
  /* 12630d1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630d1e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12630d21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630d24 push eax */
  push32((uint32_t)(EAX));
  /* 12630d25 call 0x12631120 */
  push32(0x12630d2au); f_12631120();
  /* 12630d2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630d2d jmp 0x12631018 */
  goto L_12631018;
L_12630d32:;
  /* 12630d32 mov ecx, dword ptr [0x1264f878] */
  ECX = (r32((uint32_t)(0x1264f878)));
  /* 12630d38 mov dword ptr [0x1264f888], ecx */
  w32((uint32_t)(0x1264f888), (ECX));
  /* 12630d3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630d41 push edx */
  push32((uint32_t)(EDX));
  /* 12630d42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630d45 push eax */
  push32((uint32_t)(EAX));
  /* 12630d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12630d48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630d4b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12630d4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630d51 push edx */
  push32((uint32_t)(EDX));
  /* 12630d52 call 0x12631120 */
  push32(0x12630d57u); f_12631120();
  /* 12630d57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630d5a jmp 0x12631018 */
  goto L_12631018;
L_12630d5f:;
  /* 12630d5f mov eax, dword ptr [0x1264f878] */
  EAX = (r32((uint32_t)(0x1264f878)));
  /* 12630d64 mov dword ptr [0x1264f888], eax */
  w32((uint32_t)(0x1264f888), (EAX));
  /* 12630d69 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630d6c push ecx */
  push32((uint32_t)(ECX));
  /* 12630d6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630d70 push edx */
  push32((uint32_t)(EDX));
  /* 12630d71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12630d73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630d76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12630d79 push ecx */
  push32((uint32_t)(ECX));
  /* 12630d7a call 0x12631120 */
  push32(0x12630d7fu); f_12631120();
  /* 12630d7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630d82 jmp 0x12631018 */
  goto L_12631018;
L_12630d87:;
  /* 12630d87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630d8a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630d8e jg 0x12630dac */
  if ((!C.zf&&C.sf==C.of)) goto L_12630dac;
  /* 12630d90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630d93 push eax */
  push32((uint32_t)(EAX));
  /* 12630d94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630d97 push ecx */
  push32((uint32_t)(ECX));
  /* 12630d98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630d9b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12630da1 push eax */
  push32((uint32_t)(EAX));
  /* 12630da2 call 0x126310d0 */
  push32(0x12630da7u); f_126310d0();
  /* 12630da7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630daa jmp 0x12630dc6 */
  goto L_12630dc6;
L_12630dac:;
  /* 12630dac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630daf push ecx */
  push32((uint32_t)(ECX));
  /* 12630db0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630db3 push edx */
  push32((uint32_t)(EDX));
  /* 12630db4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630db7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12630dbd push ecx */
  push32((uint32_t)(ECX));
  /* 12630dbe call 0x126310d0 */
  push32(0x12630dc3u); f_126310d0();
  /* 12630dc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12630dc6:;
  /* 12630dc6 jmp 0x12631018 */
  goto L_12631018;
L_12630dcb:;
  /* 12630dcb mov edx, dword ptr [0x1264f878] */
  EDX = (r32((uint32_t)(0x1264f878)));
  /* 12630dd1 mov dword ptr [0x1264f888], edx */
  w32((uint32_t)(0x1264f888), (EDX));
  /* 12630dd7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630dda push eax */
  push32((uint32_t)(EAX));
  /* 12630ddb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630dde push ecx */
  push32((uint32_t)(ECX));
  /* 12630ddf push 2 */
  push32((uint32_t)(0x2u));
  /* 12630de1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630de4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12630de6 push eax */
  push32((uint32_t)(EAX));
  /* 12630de7 call 0x12631120 */
  push32(0x12630decu); f_12631120();
  /* 12630dec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630def jmp 0x12631018 */
  goto L_12631018;
L_12630df4:;
  /* 12630df4 mov ecx, dword ptr [0x1264f878] */
  ECX = (r32((uint32_t)(0x1264f878)));
  /* 12630dfa mov dword ptr [0x1264f888], ecx */
  w32((uint32_t)(0x1264f888), (ECX));
  /* 12630e00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e03 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12630e06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12630e09 jmp 0x12630e5d */
  goto L_12630e5d;
L_12630e0b:;
  /* 12630e0b mov ecx, dword ptr [0x1264f878] */
  ECX = (r32((uint32_t)(0x1264f878)));
  /* 12630e11 mov dword ptr [0x1264f888], ecx */
  w32((uint32_t)(0x1264f888), (ECX));
  /* 12630e17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630e1a push edx */
  push32((uint32_t)(EDX));
  /* 12630e1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630e1e push eax */
  push32((uint32_t)(EAX));
  /* 12630e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12630e21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e24 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12630e27 push edx */
  push32((uint32_t)(EDX));
  /* 12630e28 call 0x12631120 */
  push32(0x12630e2du); f_12631120();
  /* 12630e2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630e30 jmp 0x12631018 */
  goto L_12631018;
L_12630e35:;
  /* 12630e35 mov eax, dword ptr [0x1264f878] */
  EAX = (r32((uint32_t)(0x1264f878)));
  /* 12630e3a mov dword ptr [0x1264f888], eax */
  w32((uint32_t)(0x1264f888), (EAX));
  /* 12630e3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e42 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630e46 jne 0x12630e51 */
  if (!C.zf) goto L_12630e51;
  /* 12630e48 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12630e4f jmp 0x12630e5d */
  goto L_12630e5d;
L_12630e51:;
  /* 12630e51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e54 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12630e57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630e5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12630e5d:;
  /* 12630e5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e60 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12630e63 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630e66 jge 0x12630e71 */
  if ((C.sf==C.of)) goto L_12630e71;
  /* 12630e68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12630e6f jmp 0x12630e9e */
  goto L_12630e9e;
L_12630e71:;
  /* 12630e71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e74 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12630e77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12630e78 mov ecx, 7 */
  ECX = (0x7u);
  /* 12630e7d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12630e7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12630e82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630e85 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12630e88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12630e89 mov ecx, 7 */
  ECX = (0x7u);
  /* 12630e8e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12630e90 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630e93 jl 0x12630e9e */
  if ((C.sf!=C.of)) goto L_12630e9e;
  /* 12630e95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12630e98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630e9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12630e9e:;
  /* 12630e9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ea1 push eax */
  push32((uint32_t)(EAX));
  /* 12630ea2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 12630ea6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12630ea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12630eab push edx */
  push32((uint32_t)(EDX));
  /* 12630eac call 0x12631120 */
  push32(0x12630eb1u); f_12631120();
  /* 12630eb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630eb4 jmp 0x12631018 */
  goto L_12631018;
L_12630eb9:;
  /* 12630eb9 cmp dword ptr [0x1264f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630ec0 je 0x12630ef0 */
  if (C.zf) goto L_12630ef0;
  /* 12630ec2 mov dword ptr [0x1264f878], 0 */
  w32((uint32_t)(0x1264f878), (0x0u));
  /* 12630ecc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630ecf push eax */
  push32((uint32_t)(EAX));
  /* 12630ed0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12630ed4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630ed7 push edx */
  push32((uint32_t)(EDX));
  /* 12630ed8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630edb push eax */
  push32((uint32_t)(EAX));
  /* 12630edc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630edf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12630ee5 push edx */
  push32((uint32_t)(EDX));
  /* 12630ee6 call 0x12631280 */
  push32(0x12630eebu); f_12631280();
  /* 12630eeb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630eee jmp 0x12630f12 */
  goto L_12630f12;
L_12630ef0:;
  /* 12630ef0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630ef3 push eax */
  push32((uint32_t)(EAX));
  /* 12630ef4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 12630ef8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630efb push edx */
  push32((uint32_t)(EDX));
  /* 12630efc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630eff push eax */
  push32((uint32_t)(EAX));
  /* 12630f00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630f03 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12630f09 push edx */
  push32((uint32_t)(EDX));
  /* 12630f0a call 0x12631280 */
  push32(0x12630f0fu); f_12631280();
  /* 12630f0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12630f12:;
  /* 12630f12 jmp 0x12631018 */
  goto L_12631018;
L_12630f17:;
  /* 12630f17 mov dword ptr [0x1264f878], 0 */
  w32((uint32_t)(0x1264f878), (0x0u));
  /* 12630f21 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630f24 push eax */
  push32((uint32_t)(EAX));
  /* 12630f25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630f28 push ecx */
  push32((uint32_t)(ECX));
  /* 12630f29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630f2c push edx */
  push32((uint32_t)(EDX));
  /* 12630f2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630f30 push eax */
  push32((uint32_t)(EAX));
  /* 12630f31 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12630f34 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12630f3a push edx */
  push32((uint32_t)(EDX));
  /* 12630f3b call 0x12631280 */
  push32(0x12630f40u); f_12631280();
  /* 12630f40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630f43 jmp 0x12631018 */
  goto L_12631018;
L_12630f48:;
  /* 12630f48 mov eax, dword ptr [0x1264f878] */
  EAX = (r32((uint32_t)(0x1264f878)));
  /* 12630f4d mov dword ptr [0x1264f888], eax */
  w32((uint32_t)(0x1264f888), (EAX));
  /* 12630f52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630f55 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12630f58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12630f59 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12630f5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12630f60 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12630f63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630f66 push edx */
  push32((uint32_t)(EDX));
  /* 12630f67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630f6a push eax */
  push32((uint32_t)(EAX));
  /* 12630f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12630f6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12630f70 push ecx */
  push32((uint32_t)(ECX));
  /* 12630f71 call 0x12631120 */
  push32(0x12630f76u); f_12631120();
  /* 12630f76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630f79 jmp 0x12631018 */
  goto L_12631018;
L_12630f7e:;
  /* 12630f7e mov edx, dword ptr [0x1264f878] */
  EDX = (r32((uint32_t)(0x1264f878)));
  /* 12630f84 mov dword ptr [0x1264f888], edx */
  w32((uint32_t)(0x1264f888), (EDX));
  /* 12630f8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630f8d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12630f90 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12630f91 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12630f96 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12630f98 mov ecx, eax */
  ECX = (EAX);
  /* 12630f9a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630f9d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12630fa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630fa3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12630fa6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12630fa7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12630fac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12630fae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630fb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12630fb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630fb6 push eax */
  push32((uint32_t)(EAX));
  /* 12630fb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630fba push ecx */
  push32((uint32_t)(ECX));
  /* 12630fbb push 4 */
  push32((uint32_t)(0x4u));
  /* 12630fbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12630fc0 push edx */
  push32((uint32_t)(EDX));
  /* 12630fc1 call 0x12631120 */
  push32(0x12630fc6u); f_12631120();
  /* 12630fc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630fc9 jmp 0x12631018 */
  goto L_12631018;
L_12630fcb:;
  /* 12630fcb call 0x126320e0 */
  push32(0x12630fd0u); f_126320e0();
  /* 12630fd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630fd3 push eax */
  push32((uint32_t)(EAX));
  /* 12630fd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12630fd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12630fdd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630fe1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12630fe4 mov ecx, dword ptr [eax*4 + 0x1264ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264ee1c)));
  /* 12630feb push ecx */
  push32((uint32_t)(ECX));
  /* 12630fec call 0x126310d0 */
  push32(0x12630ff1u); f_126310d0();
  /* 12630ff1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630ff4 jmp 0x12631018 */
  goto L_12631018;
L_12630ff6:;
  /* 12630ff6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630ff9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12630ffb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12630ffe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631001 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12631003 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631006 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631009 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1263100b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263100e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12631010 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631013 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631016 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12631018:;
  /* 12631018 pop esi */
  ESI = (pop32());
  /* 12631019 mov esp, ebp */
  ESP = (EBP);
  /* 1263101b pop ebp */
  EBP = (pop32());
  /* 1263101c ret  */
  ESPCHK(0x12630ab0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x126310d0 (72 bytes, 30 insns) */
void f_126310d0(void) {
  FTRACE(0x126310d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126310d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126310d1 mov ebp, esp */
  EBP = (ESP);
L_126310d3:;
  /* 126310d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126310d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126310d9 je 0x12631116 */
  if (C.zf) goto L_12631116;
  /* 126310db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126310de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126310e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126310e3 je 0x12631116 */
  if (C.zf) goto L_12631116;
  /* 126310e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126310e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126310ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126310ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126310ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 126310f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126310f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126310f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126310f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126310fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 126310fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631101 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631104 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12631107 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263110a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1263110c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263110f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631112 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12631114 jmp 0x126310d3 */
  goto L_126310d3;
L_12631116:;
  /* 12631116 pop ebp */
  EBP = (pop32());
  /* 12631117 ret  */
  ESPCHK(0x126310d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x12631120 (173 bytes, 64 insns) */
void f_12631120(void) {
  FTRACE(0x12631120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631120 push ebp */
  push32((uint32_t)(EBP));
  /* 12631121 mov ebp, esp */
  EBP = (ESP);
  /* 12631123 push ecx */
  push32((uint32_t)(ECX));
  /* 12631124 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1263112b cmp dword ptr [0x1264f888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631132 je 0x1263114a */
  if (C.zf) goto L_1263114a;
  /* 12631134 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631137 push eax */
  push32((uint32_t)(EAX));
  /* 12631138 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263113b push ecx */
  push32((uint32_t)(ECX));
  /* 1263113c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263113f push edx */
  push32((uint32_t)(EDX));
  /* 12631140 call 0x126311d0 */
  push32(0x12631145u); f_126311d0();
  /* 12631145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631148 jmp 0x126311c9 */
  goto L_126311c9;
L_1263114a:;
  /* 1263114a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263114d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631150 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631152 jae 0x126311c0 */
  if (!C.cf) goto L_126311c0;
  /* 12631154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631157 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263115a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1263115d jmp 0x12631168 */
  goto L_12631168;
L_1263115f:;
  /* 1263115f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631162 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631165 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12631168:;
  /* 12631168 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1263116b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263116e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12631170 je 0x126311a4 */
  if (C.zf) goto L_126311a4;
  /* 12631172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631175 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12631176 mov ecx, 0xa */
  ECX = (0xau);
  /* 1263117b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1263117d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631180 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631183 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12631185 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631188 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1263118b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263118e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1263118f mov ecx, 0xa */
  ECX = (0xau);
  /* 12631194 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12631196 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12631199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263119c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263119f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126311a2 jmp 0x1263115f */
  goto L_1263115f;
L_126311a4:;
  /* 126311a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126311a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126311a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126311ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126311af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126311b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126311b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126311b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126311b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126311bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126311be jmp 0x126311c9 */
  goto L_126311c9;
L_126311c0:;
  /* 126311c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126311c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_126311c9:;
  /* 126311c9 mov esp, ebp */
  ESP = (EBP);
  /* 126311cb pop ebp */
  EBP = (pop32());
  /* 126311cc ret  */
  ESPCHK(0x12631120u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x126311d0 (172 bytes, 65 insns) */
void f_126311d0(void) {
  FTRACE(0x126311d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126311d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126311d1 mov ebp, esp */
  EBP = (ESP);
  /* 126311d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126311d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126311d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126311db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126311de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126311e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126311e4 jbe 0x1263122b */
  if ((C.cf||C.zf)) goto L_1263122b;
L_126311e6:;
  /* 126311e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126311e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 126311ea mov ecx, 0xa */
  ECX = (0xau);
  /* 126311ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 126311f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126311f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126311f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126311f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126311fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126311ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12631202 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631205 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12631207 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263120a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263120d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1263120f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631212 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12631213 mov ecx, 0xa */
  ECX = (0xau);
  /* 12631218 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1263121a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1263121d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631221 jle 0x1263122b */
  if ((C.zf||C.sf!=C.of)) goto L_1263122b;
  /* 12631223 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631226 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631229 ja 0x126311e6 */
  if ((!C.cf&&!C.zf)) goto L_126311e6;
L_1263122b:;
  /* 1263122b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1263122e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12631230 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12631233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631239 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1263123b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263123e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631241 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12631244:;
  /* 12631244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631247 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631249 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1263124c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263124f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12631252 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12631256 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631259 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263125c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1263125f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12631262 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12631265 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12631267 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263126a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263126d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12631270 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12631273 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631276 jb 0x12631244 */
  if (C.cf) goto L_12631244;
  /* 12631278 mov esp, ebp */
  ESP = (EBP);
  /* 1263127a pop ebp */
  EBP = (pop32());
  /* 1263127b ret  */
  ESPCHK(0x126311d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x12631280 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12631280(void) {
  FTRACE(0x12631280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631280 push ebp */
  push32((uint32_t)(EBP));
  /* 12631281 mov ebp, esp */
  EBP = (ESP);
  /* 12631283 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12631286:;
  /* 12631286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631289 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1263128c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1263128e je 0x126316fc */
  if (C.zf) goto L_126316fc;
  /* 12631294 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631297 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263129a je 0x126316fc */
  if (C.zf) goto L_126316fc;
  /* 126312a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 126312a4 mov dword ptr [0x1264f888], 0 */
  w32((uint32_t)(0x1264f888), (0x0u));
  /* 126312ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 126312b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126312b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126312bb jmp 0x126312c6 */
  goto L_126312c6;
L_126312bd:;
  /* 126312bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126312c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126312c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_126312c6:;
  /* 126312c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126312c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126312cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126312cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126312d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126312d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126312d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126312db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126312dd jne 0x126312e1 */
  if (!C.zf) goto L_126312e1;
  /* 126312df jmp 0x126312bd */
  goto L_126312bd;
L_126312e1:;
  /* 126312e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126312e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126312e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126312ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126312ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126312f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126312f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126312f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126312f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126312fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631300 ja 0x12631650 */
  if ((!C.cf&&!C.zf)) goto L_12631650;
  /* 12631306 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12631309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263130b mov al, byte ptr [ecx + 0x1263172c] */
  AL = (r8((uint32_t)(ECX + 0x1263172c)));
  /* 12631311 jmp dword ptr [eax*4 + 0x12631700] */
  switch (EAX) {
    case 0: goto L_1263156f;
    case 1: goto L_12631453;
    case 2: goto L_126313de;
    case 3: goto L_12631318;
    case 4: goto L_12631356;
    case 5: goto L_126313b7;
    case 6: goto L_12631405;
    case 7: goto L_1263142c;
    case 8: goto L_1263149a;
    case 9: goto L_12631394;
    case 10: goto L_12631650;
    default: x86_unimpl("switch@0x12631311 out of table"); return;
  }
L_12631318:;
  /* 12631318 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263131b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1263131e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12631321 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631324 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12631327 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263132b ja 0x12631351 */
  if ((!C.cf&&!C.zf)) goto L_12631351;
  /* 1263132d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12631330 jmp dword ptr [ecx*4 + 0x1263177f] */
  switch (ECX) {
    case 0: goto L_12631337;
    case 1: goto L_12631341;
    case 2: goto L_12631347;
    case 3: goto L_1263134d;
    case 4: goto L_12631375;
    case 5: goto L_1263137f;
    case 6: goto L_12631385;
    case 7: goto L_1263138b;
    default: x86_unimpl("switch@0x12631330 out of table"); return;
  }
L_12631337:;
  /* 12631337 mov dword ptr [0x1264f888], 1 */
  w32((uint32_t)(0x1264f888), (0x1u));
L_12631341:;
  /* 12631341 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12631345 jmp 0x12631351 */
  goto L_12631351;
L_12631347:;
  /* 12631347 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1263134b jmp 0x12631351 */
  goto L_12631351;
L_1263134d:;
  /* 1263134d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12631351:;
  /* 12631351 jmp 0x12631650 */
  goto L_12631650;
L_12631356:;
  /* 12631356 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12631359 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1263135c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1263135f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631362 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12631365 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631369 ja 0x1263138f */
  if ((!C.cf&&!C.zf)) goto L_1263138f;
  /* 1263136b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1263136e jmp dword ptr [ecx*4 + 0x1263178f] */
  switch (ECX) {
    case 0: goto L_12631375;
    case 1: goto L_1263137f;
    case 2: goto L_12631385;
    case 3: goto L_1263138b;
    default: x86_unimpl("switch@0x1263136e out of table"); return;
  }
L_12631375:;
  /* 12631375 mov dword ptr [0x1264f888], 1 */
  w32((uint32_t)(0x1264f888), (0x1u));
L_1263137f:;
  /* 1263137f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12631383 jmp 0x1263138f */
  goto L_1263138f;
L_12631385:;
  /* 12631385 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12631389 jmp 0x1263138f */
  goto L_1263138f;
L_1263138b:;
  /* 1263138b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1263138f:;
  /* 1263138f jmp 0x12631650 */
  goto L_12631650;
L_12631394:;
  /* 12631394 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12631397 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1263139a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263139e je 0x126313a8 */
  if (C.zf) goto L_126313a8;
  /* 126313a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126313a4 je 0x126313ae */
  if (C.zf) goto L_126313ae;
  /* 126313a6 jmp 0x126313b2 */
  goto L_126313b2;
L_126313a8:;
  /* 126313a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 126313ac jmp 0x126313b2 */
  goto L_126313b2;
L_126313ae:;
  /* 126313ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_126313b2:;
  /* 126313b2 jmp 0x12631650 */
  goto L_12631650;
L_126313b7:;
  /* 126313b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126313ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 126313bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126313c1 je 0x126313cb */
  if (C.zf) goto L_126313cb;
  /* 126313c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126313c7 je 0x126313d5 */
  if (C.zf) goto L_126313d5;
  /* 126313c9 jmp 0x126313d9 */
  goto L_126313d9;
L_126313cb:;
  /* 126313cb mov dword ptr [0x1264f888], 1 */
  w32((uint32_t)(0x1264f888), (0x1u));
L_126313d5:;
  /* 126313d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_126313d9:;
  /* 126313d9 jmp 0x12631650 */
  goto L_12631650;
L_126313de:;
  /* 126313de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126313e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 126313e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126313e8 je 0x126313f2 */
  if (C.zf) goto L_126313f2;
  /* 126313ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126313ee je 0x126313fc */
  if (C.zf) goto L_126313fc;
  /* 126313f0 jmp 0x12631400 */
  goto L_12631400;
L_126313f2:;
  /* 126313f2 mov dword ptr [0x1264f888], 1 */
  w32((uint32_t)(0x1264f888), (0x1u));
L_126313fc:;
  /* 126313fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12631400:;
  /* 12631400 jmp 0x12631650 */
  goto L_12631650;
L_12631405:;
  /* 12631405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12631408 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1263140b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263140f je 0x12631419 */
  if (C.zf) goto L_12631419;
  /* 12631411 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631415 je 0x12631423 */
  if (C.zf) goto L_12631423;
  /* 12631417 jmp 0x12631427 */
  goto L_12631427;
L_12631419:;
  /* 12631419 mov dword ptr [0x1264f888], 1 */
  w32((uint32_t)(0x1264f888), (0x1u));
L_12631423:;
  /* 12631423 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12631427:;
  /* 12631427 jmp 0x12631650 */
  goto L_12631650;
L_1263142c:;
  /* 1263142c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263142f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12631432 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631436 je 0x12631440 */
  if (C.zf) goto L_12631440;
  /* 12631438 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263143c je 0x1263144a */
  if (C.zf) goto L_1263144a;
  /* 1263143e jmp 0x1263144e */
  goto L_1263144e;
L_12631440:;
  /* 12631440 mov dword ptr [0x1264f888], 1 */
  w32((uint32_t)(0x1264f888), (0x1u));
L_1263144a:;
  /* 1263144a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1263144e:;
  /* 1263144e jmp 0x12631650 */
  goto L_12631650;
L_12631453:;
  /* 12631453 push 0x1264b8f4 */
  push32((uint32_t)(0x1264b8f4u));
  /* 12631458 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263145b push ecx */
  push32((uint32_t)(ECX));
  /* 1263145c call 0x12631cb0 */
  push32(0x12631461u); f_12631cb0();
  /* 12631461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12631466 jne 0x12631473 */
  if (!C.zf) goto L_12631473;
  /* 12631468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263146b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263146e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12631471 jmp 0x12631491 */
  goto L_12631491;
L_12631473:;
  /* 12631473 push 0x1264b8f0 */
  push32((uint32_t)(0x1264b8f0u));
  /* 12631478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263147b push eax */
  push32((uint32_t)(EAX));
  /* 1263147c call 0x12631cb0 */
  push32(0x12631481u); f_12631cb0();
  /* 12631481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12631486 jne 0x12631491 */
  if (!C.zf) goto L_12631491;
  /* 12631488 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263148b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263148e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12631491:;
  /* 12631491 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12631495 jmp 0x12631650 */
  goto L_12631650;
L_1263149a:;
  /* 1263149a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1263149d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126314a1 jg 0x126314b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_126314b1;
  /* 126314a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126314a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 126314ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126314af jmp 0x126314bd */
  goto L_126314bd;
L_126314b1:;
  /* 126314b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126314b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 126314ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_126314bd:;
  /* 126314bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126314c1 jle 0x12631564 */
  if ((C.zf||C.sf!=C.of)) goto L_12631564;
  /* 126314c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126314ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126314cd jbe 0x12631564 */
  if ((C.cf||C.zf)) goto L_12631564;
  /* 126314d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126314d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126314d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126314da mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 126314e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126314e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 126314e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 126314ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126314ee je 0x12631527 */
  if (C.zf) goto L_12631527;
  /* 126314f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126314f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126314f6 jbe 0x12631527 */
  if ((C.cf||C.zf)) goto L_12631527;
  /* 126314f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126314fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126314fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12631500 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12631502 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12631504 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631507 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12631509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263150c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263150f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12631511 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12631514 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631517 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1263151a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263151d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1263151f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631522 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631525 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12631527:;
  /* 12631527 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263152a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1263152c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263152f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631531 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12631533 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631536 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12631538 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263153b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263153e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12631540 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12631543 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631546 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12631549 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263154c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1263154e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631551 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631554 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12631556 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12631559 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263155c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1263155f jmp 0x126314bd */
  goto L_126314bd;
L_12631564:;
  /* 12631564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631567 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1263156a jmp 0x12631286 */
  goto L_12631286;
L_1263156f:;
  /* 1263156f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12631572 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12631575 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12631577 je 0x12631642 */
  if (C.zf) goto L_12631642;
  /* 1263157d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631580 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631583 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12631586:;
  /* 12631586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631589 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1263158c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1263158e je 0x12631640 */
  if (C.zf) goto L_12631640;
  /* 12631594 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631597 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263159a je 0x12631640 */
  if (C.zf) goto L_12631640;
  /* 126315a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126315a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126315a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126315a9 jne 0x126315b9 */
  if (!C.zf) goto L_126315b9;
  /* 126315ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126315ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126315b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 126315b4 jmp 0x12631640 */
  goto L_12631640;
L_126315b9:;
  /* 126315b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126315bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126315be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126315c0 mov edx, dword ptr [0x1264dc98] */
  EDX = (r32((uint32_t)(0x1264dc98)));
  /* 126315c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126315c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 126315cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 126315d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126315d3 je 0x1263160c */
  if (C.zf) goto L_1263160c;
  /* 126315d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126315d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126315db jbe 0x1263160c */
  if ((C.cf||C.zf)) goto L_1263160c;
  /* 126315dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126315e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126315e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126315e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126315e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126315e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126315ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126315ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126315f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126315f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126315f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126315f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126315fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126315ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631602 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12631604 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631607 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263160a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1263160c:;
  /* 1263160c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263160f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12631611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631614 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12631616 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12631618 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263161b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1263161d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631620 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631623 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12631625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263162b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1263162e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631631 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12631633 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631636 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631639 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1263163b jmp 0x12631586 */
  goto L_12631586;
L_12631640:;
  /* 12631640 jmp 0x1263164b */
  goto L_1263164b;
L_12631642:;
  /* 12631642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631645 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631648 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1263164b:;
  /* 1263164b jmp 0x12631286 */
  goto L_12631286;
L_12631650:;
  /* 12631650 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12631654 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12631656 je 0x1263167c */
  if (C.zf) goto L_1263167c;
  /* 12631658 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1263165b push edx */
  push32((uint32_t)(EDX));
  /* 1263165c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263165f push eax */
  push32((uint32_t)(EAX));
  /* 12631660 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631663 push ecx */
  push32((uint32_t)(ECX));
  /* 12631664 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631667 push edx */
  push32((uint32_t)(EDX));
  /* 12631668 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1263166b push eax */
  push32((uint32_t)(EAX));
  /* 1263166c call 0x12630ab0 */
  push32(0x12631671u); f_12630ab0();
  /* 12631671 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631674 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631677 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1263167a jmp 0x126316f7 */
  goto L_126316f7;
L_1263167c:;
  /* 1263167c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263167f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631681 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631683 mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 12631689 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1263168b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1263168f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12631695 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12631697 je 0x126316c8 */
  if (C.zf) goto L_126316c8;
  /* 12631699 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263169c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1263169e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126316a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126316a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 126316a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126316a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126316aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126316ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126316b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 126316b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126316b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126316b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 126316bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126316be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126316c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126316c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126316c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_126316c8:;
  /* 126316c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126316cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126316cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126316d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126316d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126316d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126316d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126316d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126316dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126316df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126316e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126316e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126316e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126316ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126316ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126316ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126316f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126316f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_126316f7:;
  /* 126316f7 jmp 0x12631286 */
  goto L_12631286;
L_126316fc:;
  /* 126316fc mov esp, ebp */
  ESP = (EBP);
  /* 126316fe pop ebp */
  EBP = (pop32());
  /* 126316ff ret  */
  ESPCHK(0x12631280u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x126317a0 (650 bytes, 178 insns) */
void f_126317a0(void) {
  FTRACE(0x126317a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126317a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126317a1 mov ebp, esp */
  EBP = (ESP);
  /* 126317a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126317a9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126317ad jne 0x12631909 */
  if (!C.zf) goto L_12631909;
  /* 126317b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126317b6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 126317bc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 126317c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126317c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126317cc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 126317d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126317d8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 126317de push edx */
  push32((uint32_t)(EDX));
  /* 126317df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126317e2 push eax */
  push32((uint32_t)(EAX));
  /* 126317e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126317e6 push ecx */
  push32((uint32_t)(ECX));
  /* 126317e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126317ea push edx */
  push32((uint32_t)(EDX));
  /* 126317eb call 0x12632bc0 */
  push32(0x126317f0u); f_12632bc0();
  /* 126317f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126317f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126317f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126317fa jne 0x1263188f */
  if (!C.zf) goto L_1263188f;
  /* 12631800 call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x12631806u);
  /* 12631806 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631809 je 0x12631810 */
  if (C.zf) goto L_12631810;
  /* 1263180b jmp 0x126318ed */
  goto L_126318ed;
L_12631810:;
  /* 12631810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631812 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631816 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631819 push eax */
  push32((uint32_t)(EAX));
  /* 1263181a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1263181d push ecx */
  push32((uint32_t)(ECX));
  /* 1263181e call 0x12632bc0 */
  push32(0x12631823u); f_12632bc0();
  /* 12631823 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631826 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1263182c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631833 jne 0x1263183a */
  if (!C.zf) goto L_1263183a;
  /* 12631835 jmp 0x126318ed */
  goto L_126318ed;
L_1263183a:;
  /* 1263183a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1263183c push 0x1264b8fc */
  push32((uint32_t)(0x1264b8fcu));
  /* 12631841 push 2 */
  push32((uint32_t)(0x2u));
  /* 12631843 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12631849 push edx */
  push32((uint32_t)(EDX));
  /* 1263184a call 0x126235e0 */
  push32(0x1263184fu); f_126235e0();
  /* 1263184f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631852 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12631855 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631859 jne 0x12631860 */
  if (!C.zf) goto L_12631860;
  /* 1263185b jmp 0x126318ed */
  goto L_126318ed;
L_12631860:;
  /* 12631860 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12631867 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631869 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1263186f push eax */
  push32((uint32_t)(EAX));
  /* 12631870 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12631873 push ecx */
  push32((uint32_t)(ECX));
  /* 12631874 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631877 push edx */
  push32((uint32_t)(EDX));
  /* 12631878 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1263187b push eax */
  push32((uint32_t)(EAX));
  /* 1263187c call 0x12632bc0 */
  push32(0x12631881u); f_12632bc0();
  /* 12631881 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631884 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12631887 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263188b jne 0x1263188f */
  if (!C.zf) goto L_1263188f;
  /* 1263188d jmp 0x126318ed */
  goto L_126318ed;
L_1263188f:;
  /* 1263188f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12631891 push 0x1264b8fc */
  push32((uint32_t)(0x1264b8fcu));
  /* 12631896 push 2 */
  push32((uint32_t)(0x2u));
  /* 12631898 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263189b push ecx */
  push32((uint32_t)(ECX));
  /* 1263189c call 0x126235e0 */
  push32(0x126318a1u); f_126235e0();
  /* 126318a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126318a4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 126318aa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126318ac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 126318b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126318b5 jne 0x126318b9 */
  if (!C.zf) goto L_126318b9;
  /* 126318b7 jmp 0x126318ed */
  goto L_126318ed;
L_126318b9:;
  /* 126318b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126318bc push ecx */
  push32((uint32_t)(ECX));
  /* 126318bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126318c0 push edx */
  push32((uint32_t)(EDX));
  /* 126318c1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 126318c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126318c9 push ecx */
  push32((uint32_t)(ECX));
  /* 126318ca call 0x12626e00 */
  push32(0x126318cfu); f_12626e00();
  /* 126318cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126318d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126318d6 je 0x126318e6 */
  if (C.zf) goto L_126318e6;
  /* 126318d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 126318da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126318dd push edx */
  push32((uint32_t)(EDX));
  /* 126318de call 0x12624070 */
  push32(0x126318e3u); f_12624070();
  /* 126318e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126318e6:;
  /* 126318e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126318e8 jmp 0x12631a26 */
  goto L_12631a26;
L_126318ed:;
  /* 126318ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126318f1 je 0x12631901 */
  if (C.zf) goto L_12631901;
  /* 126318f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 126318f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126318f8 push eax */
  push32((uint32_t)(EAX));
  /* 126318f9 call 0x12624070 */
  push32(0x126318feu); f_12624070();
  /* 126318fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12631901:;
  /* 12631901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12631904 jmp 0x12631a26 */
  goto L_12631a26;
L_12631909:;
  /* 12631909 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263190d jne 0x12631a23 */
  if (!C.zf) goto L_12631a23;
  /* 12631913 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1263191d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631920 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12631926 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631928 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1263192e push edx */
  push32((uint32_t)(EDX));
  /* 1263192f push 0x1264f7a0 */
  push32((uint32_t)(0x1264f7a0u));
  /* 12631934 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631937 push eax */
  push32((uint32_t)(EAX));
  /* 12631938 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1263193b push ecx */
  push32((uint32_t)(ECX));
  /* 1263193c call 0x12632a20 */
  push32(0x12631941u); f_12632a20();
  /* 12631941 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12631946 jne 0x12631950 */
  if (!C.zf) goto L_12631950;
  /* 12631948 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1263194b jmp 0x12631a26 */
  goto L_12631a26;
L_12631950:;
  /* 12631950 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12631956 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12631959 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12631963 jmp 0x12631974 */
  goto L_12631974;
L_12631965:;
  /* 12631965 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1263196b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263196e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12631974:;
  /* 12631974 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263197b jge 0x12631a1f */
  if ((C.sf==C.of)) goto L_12631a1f;
  /* 12631981 cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631988 jle 0x126319bb */
  if ((C.zf||C.sf!=C.of)) goto L_126319bb;
  /* 1263198a push 4 */
  push32((uint32_t)(0x4u));
  /* 1263198c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12631992 mov dl, byte ptr [ecx*2 + 0x1264f7a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1264f7a0)));
  /* 12631999 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1263199f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 126319a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126319aa push eax */
  push32((uint32_t)(EAX));
  /* 126319ab call 0x126295f0 */
  push32(0x126319b0u); f_126295f0();
  /* 126319b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126319b3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 126319b9 jmp 0x126319ee */
  goto L_126319ee;
L_126319bb:;
  /* 126319bb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 126319c1 mov dl, byte ptr [ecx*2 + 0x1264f7a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1264f7a0)));
  /* 126319c8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 126319ce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 126319d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126319d9 mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 126319df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126319e1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 126319e5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 126319e8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_126319ee:;
  /* 126319ee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126319f5 je 0x12631a18 */
  if (C.zf) goto L_12631a18;
  /* 126319f7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 126319fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12631a00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12631a03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12631a0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12631a0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12631a14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12631a16 jmp 0x12631a1a */
  goto L_12631a1a;
L_12631a18:;
  /* 12631a18 jmp 0x12631a1f */
  goto L_12631a1f;
L_12631a1a:;
  /* 12631a1a jmp 0x12631965 */
  goto L_12631965;
L_12631a1f:;
  /* 12631a1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631a21 jmp 0x12631a26 */
  goto L_12631a26;
L_12631a23:;
  /* 12631a23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12631a26:;
  /* 12631a26 mov esp, ebp */
  ESP = (EBP);
  /* 12631a28 pop ebp */
  EBP = (pop32());
  /* 12631a29 ret  */
  ESPCHK(0x126317a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a30 @ 0x12631a30 (10 bytes, 5 insns) */
void f_12631a30(void) {
  FTRACE(0x12631a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12631a31 mov ebp, esp */
  EBP = (ESP);
  /* 12631a33 mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 12631a38 pop ebp */
  EBP = (pop32());
  /* 12631a39 ret  */
  ESPCHK(0x12631a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x12631a40 (575 bytes, 196 insns) */
void f_12631a40(void) {
  FTRACE(0x12631a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12631a41 mov ebp, esp */
  EBP = (ESP);
  /* 12631a43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12631a45 push 0x1264b908 */
  push32((uint32_t)(0x1264b908u));
  /* 12631a4a push 0x1262c6e8 */
  push32((uint32_t)(0x1262c6e8u));
  /* 12631a4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12631a55 push eax */
  push32((uint32_t)(EAX));
  /* 12631a56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12631a5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631a60 push ebx */
  push32((uint32_t)(EBX));
  /* 12631a61 push esi */
  push32((uint32_t)(ESI));
  /* 12631a62 push edi */
  push32((uint32_t)(EDI));
  /* 12631a63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12631a66 cmp dword ptr [0x1264f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631a6d jne 0x12631abe */
  if (!C.zf) goto L_12631abe;
  /* 12631a6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12631a72 push eax */
  push32((uint32_t)(EAX));
  /* 12631a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12631a75 push 0x1264b03c */
  push32((uint32_t)(0x1264b03cu));
  /* 12631a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12631a7c call dword ptr [0x12652368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652368))), 0x12631a82u);
  /* 12631a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12631a84 je 0x12631a92 */
  if (C.zf) goto L_12631a92;
  /* 12631a86 mov dword ptr [0x1264f7ac], 1 */
  w32((uint32_t)(0x1264f7ac), (0x1u));
  /* 12631a90 jmp 0x12631abe */
  goto L_12631abe;
L_12631a92:;
  /* 12631a92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12631a95 push ecx */
  push32((uint32_t)(ECX));
  /* 12631a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12631a98 push 0x1264b038 */
  push32((uint32_t)(0x1264b038u));
  /* 12631a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12631a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12631aa1 call dword ptr [0x12652364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652364))), 0x12631aa7u);
  /* 12631aa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12631aa9 je 0x12631ab7 */
  if (C.zf) goto L_12631ab7;
  /* 12631aab mov dword ptr [0x1264f7ac], 2 */
  w32((uint32_t)(0x1264f7ac), (0x2u));
  /* 12631ab5 jmp 0x12631abe */
  goto L_12631abe;
L_12631ab7:;
  /* 12631ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631ab9 jmp 0x12631c99 */
  goto L_12631c99;
L_12631abe:;
  /* 12631abe cmp dword ptr [0x1264f7ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f7ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631ac5 jne 0x12631ae2 */
  if (!C.zf) goto L_12631ae2;
  /* 12631ac7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631aca push edx */
  push32((uint32_t)(EDX));
  /* 12631acb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631ace push eax */
  push32((uint32_t)(EAX));
  /* 12631acf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 12631ad3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631ad6 push edx */
  push32((uint32_t)(EDX));
  /* 12631ad7 call dword ptr [0x12652368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652368))), 0x12631addu);
  /* 12631add jmp 0x12631c99 */
  goto L_12631c99;
L_12631ae2:;
  /* 12631ae2 cmp dword ptr [0x1264f7ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f7ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631ae9 jne 0x12631c97 */
  if (!C.zf) goto L_12631c97;
  /* 12631aef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631af3 jne 0x12631afd */
  if (!C.zf) goto L_12631afd;
  /* 12631af5 mov eax, dword ptr [0x1264f720] */
  EAX = (r32((uint32_t)(0x1264f720)));
  /* 12631afa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12631afd:;
  /* 12631afd push 0 */
  push32((uint32_t)(0x0u));
  /* 12631aff push 0 */
  push32((uint32_t)(0x0u));
  /* 12631b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631b05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631b08 push ecx */
  push32((uint32_t)(ECX));
  /* 12631b09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631b0c push edx */
  push32((uint32_t)(EDX));
  /* 12631b0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12631b12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12631b15 push eax */
  push32((uint32_t)(EAX));
  /* 12631b16 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12631b1cu);
  /* 12631b1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12631b1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631b23 jne 0x12631b2c */
  if (!C.zf) goto L_12631b2c;
  /* 12631b25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631b27 jmp 0x12631c99 */
  goto L_12631c99;
L_12631b2c:;
  /* 12631b2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12631b33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12631b36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631b39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12631b3b call 0x12626780 */
  push32(0x12631b40u); f_12626780();
  /* 12631b40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12631b43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12631b46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12631b49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12631b4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12631b4f push edx */
  push32((uint32_t)(EDX));
  /* 12631b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631b52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12631b55 push eax */
  push32((uint32_t)(EAX));
  /* 12631b56 call 0x12627350 */
  push32(0x12631b5bu); f_12627350();
  /* 12631b5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631b5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12631b65 jmp 0x12631b7e */
  goto L_12631b7e;
  /* 12631b67 mov eax, 1 */
  EAX = (0x1u);
  /* 12631b6c ret  */
  ESPCHK(0x12631a40u, _esp0);
  ESP += 4; return;
  /* 12631b6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12631b70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12631b77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12631b7e:;
  /* 12631b7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631b82 jne 0x12631b8b */
  if (!C.zf) goto L_12631b8b;
  /* 12631b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631b86 jmp 0x12631c99 */
  goto L_12631c99;
L_12631b8b:;
  /* 12631b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12631b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12631b8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12631b92 push ecx */
  push32((uint32_t)(ECX));
  /* 12631b93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12631b96 push edx */
  push32((uint32_t)(EDX));
  /* 12631b97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631b9a push eax */
  push32((uint32_t)(EAX));
  /* 12631b9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12631b9e push ecx */
  push32((uint32_t)(ECX));
  /* 12631b9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12631ba4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12631ba7 push edx */
  push32((uint32_t)(EDX));
  /* 12631ba8 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12631baeu);
  /* 12631bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12631bb0 jne 0x12631bb9 */
  if (!C.zf) goto L_12631bb9;
  /* 12631bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631bb4 jmp 0x12631c99 */
  goto L_12631c99;
L_12631bb9:;
  /* 12631bb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12631bc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12631bc3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12631bc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631bca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12631bcc call 0x12626780 */
  push32(0x12631bd1u); f_12626780();
  /* 12631bd1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12631bd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12631bd7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12631bda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12631bdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12631be4 jmp 0x12631bfd */
  goto L_12631bfd;
  /* 12631be6 mov eax, 1 */
  EAX = (0x1u);
  /* 12631beb ret  */
  ESPCHK(0x12631a40u, _esp0);
  ESP += 4; return;
  /* 12631bec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12631bef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12631bf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12631bfd:;
  /* 12631bfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631c01 jne 0x12631c0a */
  if (!C.zf) goto L_12631c0a;
  /* 12631c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631c05 jmp 0x12631c99 */
  goto L_12631c99;
L_12631c0a:;
  /* 12631c0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631c0e jne 0x12631c19 */
  if (!C.zf) goto L_12631c19;
  /* 12631c10 mov edx, dword ptr [0x1264f710] */
  EDX = (r32((uint32_t)(0x1264f710)));
  /* 12631c16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12631c19:;
  /* 12631c19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631c1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12631c1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12631c25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631c28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12631c2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12631c32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12631c35 push ecx */
  push32((uint32_t)(ECX));
  /* 12631c36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12631c39 push edx */
  push32((uint32_t)(EDX));
  /* 12631c3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12631c3d push eax */
  push32((uint32_t)(EAX));
  /* 12631c3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631c41 push ecx */
  push32((uint32_t)(ECX));
  /* 12631c42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12631c45 push edx */
  push32((uint32_t)(EDX));
  /* 12631c46 call dword ptr [0x12652364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652364))), 0x12631c4cu);
  /* 12631c4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12631c4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631c52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12631c55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12631c57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12631c5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631c62 je 0x12631c78 */
  if (C.zf) goto L_12631c78;
  /* 12631c64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631c67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12631c6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12631c6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12631c70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631c76 je 0x12631c7c */
  if (C.zf) goto L_12631c7c;
L_12631c78:;
  /* 12631c78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631c7a jmp 0x12631c99 */
  goto L_12631c99;
L_12631c7c:;
  /* 12631c7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631c7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12631c81 push eax */
  push32((uint32_t)(EAX));
  /* 12631c82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12631c85 push ecx */
  push32((uint32_t)(ECX));
  /* 12631c86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12631c89 push edx */
  push32((uint32_t)(EDX));
  /* 12631c8a call 0x1262b4d0 */
  push32(0x12631c8fu); f_1262b4d0();
  /* 12631c8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631c92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12631c95 jmp 0x12631c99 */
  goto L_12631c99;
L_12631c97:;
  /* 12631c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12631c99:;
  /* 12631c99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12631c9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12631c9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12631ca6 pop edi */
  EDI = (pop32());
  /* 12631ca7 pop esi */
  ESI = (pop32());
  /* 12631ca8 pop ebx */
  EBX = (pop32());
  /* 12631ca9 mov esp, ebp */
  ESP = (EBP);
  /* 12631cab pop ebp */
  EBP = (pop32());
  /* 12631cac ret  */
  ESPCHK(0x12631a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x12631cb0 (208 bytes, 85 insns) */
void f_12631cb0(void) {
  FTRACE(0x12631cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12631cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12631cb3 push edi */
  push32((uint32_t)(EDI));
  /* 12631cb4 push esi */
  push32((uint32_t)(ESI));
  /* 12631cb5 push ebx */
  push32((uint32_t)(EBX));
  /* 12631cb6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12631cb9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12631cbc lea eax, [0x1264f708] */
  EAX = ((uint32_t)(0x1264f708));
  /* 12631cc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631cc6 jne 0x12631d03 */
  if (!C.zf) goto L_12631d03;
  /* 12631cc8 mov al, 0xff */
  AL = (0xffu);
  /* 12631cca mov edi, edi */
  EDI = (EDI);
L_12631ccc:;
  /* 12631ccc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12631cce je 0x12631cfe */
  if (C.zf) goto L_12631cfe;
  /* 12631cd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12631cd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12631cd3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12631cd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12631cd6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631cd8 je 0x12631ccc */
  if (C.zf) goto L_12631ccc;
  /* 12631cda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12631cdc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631cde sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12631ce0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12631ce3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12631ce5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12631ce7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12631ce9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12631ceb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631ced sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12631cef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12631cf2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12631cf4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12631cf6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631cf8 je 0x12631ccc */
  if (C.zf) goto L_12631ccc;
  /* 12631cfa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12631cfc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12631cfe:;
  /* 12631cfe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12631d01 jmp 0x12631d7b */
  goto L_12631d7b;
L_12631d03:;
  /* 12631d03 lock inc dword ptr [0x1264f89c] */
  x86_unimpl("lock inc @ 0x12631d03");
  /* 12631d0a cmp dword ptr [0x1264f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631d11 jg 0x12631d17 */
  if ((!C.zf&&C.sf==C.of)) goto L_12631d17;
  /* 12631d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631d15 jmp 0x12631d2c */
  goto L_12631d2c;
L_12631d17:;
  /* 12631d17 lock dec dword ptr [0x1264f89c] */
  x86_unimpl("lock dec @ 0x12631d17");
  /* 12631d1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12631d20 call 0x12626fe0 */
  push32(0x12631d25u); f_12626fe0();
  /* 12631d25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12631d2c:;
  /* 12631d2c mov eax, 0xff */
  EAX = (0xffu);
  /* 12631d31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12631d33 nop  */
  /* nop */
L_12631d34:;
  /* 12631d34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12631d36 je 0x12631d5f */
  if (C.zf) goto L_12631d5f;
  /* 12631d38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12631d3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12631d3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12631d3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12631d3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631d40 je 0x12631d34 */
  if (C.zf) goto L_12631d34;
  /* 12631d42 push eax */
  push32((uint32_t)(EAX));
  /* 12631d43 push ebx */
  push32((uint32_t)(EBX));
  /* 12631d44 call 0x12632e20 */
  push32(0x12631d49u); f_12632e20();
  /* 12631d49 mov ebx, eax */
  EBX = (EAX);
  /* 12631d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631d4e call 0x12632e20 */
  push32(0x12631d53u); f_12632e20();
  /* 12631d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631d56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631d58 je 0x12631d34 */
  if (C.zf) goto L_12631d34;
  /* 12631d5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631d5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12631d5f:;
  /* 12631d5f mov ebx, eax */
  EBX = (EAX);
  /* 12631d61 pop eax */
  EAX = (pop32());
  /* 12631d62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631d64 jne 0x12631d6f */
  if (!C.zf) goto L_12631d6f;
  /* 12631d66 lock dec dword ptr [0x1264f89c] */
  x86_unimpl("lock dec @ 0x12631d66");
  /* 12631d6d jmp 0x12631d79 */
  goto L_12631d79;
L_12631d6f:;
  /* 12631d6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12631d71 call 0x12627080 */
  push32(0x12631d76u); f_12627080();
  /* 12631d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12631d79:;
  /* 12631d79 mov eax, ebx */
  EAX = (EBX);
L_12631d7b:;
  /* 12631d7b pop ebx */
  EBX = (pop32());
  /* 12631d7c pop esi */
  ESI = (pop32());
  /* 12631d7d pop edi */
  EDI = (pop32());
  /* 12631d7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12631d7f ret  */
  ESPCHK(0x12631cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x12631d80 (257 bytes, 103 insns) */
void f_12631d80(void) {
  FTRACE(0x12631d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12631d81 mov ebp, esp */
  EBP = (ESP);
  /* 12631d83 push edi */
  push32((uint32_t)(EDI));
  /* 12631d84 push esi */
  push32((uint32_t)(ESI));
  /* 12631d85 push ebx */
  push32((uint32_t)(EBX));
  /* 12631d86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12631d89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12631d8b je 0x12631e7a */
  if (C.zf) goto L_12631e7a;
  /* 12631d91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12631d94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12631d97 lea eax, [0x1264f708] */
  EAX = ((uint32_t)(0x1264f708));
  /* 12631d9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631da1 jne 0x12631df1 */
  if (!C.zf) goto L_12631df1;
  /* 12631da3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12631da5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12631da7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12631da9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12631dac:;
  /* 12631dac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12631dae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12631db0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12631db2 je 0x12631dd5 */
  if (C.zf) goto L_12631dd5;
  /* 12631db4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12631db6 je 0x12631dd5 */
  if (C.zf) goto L_12631dd5;
  /* 12631db8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12631db9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12631dba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631dbc jb 0x12631dc4 */
  if (C.cf) goto L_12631dc4;
  /* 12631dbe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631dc0 ja 0x12631dc4 */
  if ((!C.cf&&!C.zf)) goto L_12631dc4;
  /* 12631dc2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12631dc4:;
  /* 12631dc4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631dc6 jb 0x12631dce */
  if (C.cf) goto L_12631dce;
  /* 12631dc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631dca ja 0x12631dce */
  if ((!C.cf&&!C.zf)) goto L_12631dce;
  /* 12631dcc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12631dce:;
  /* 12631dce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631dd0 jne 0x12631ddf */
  if (!C.zf) goto L_12631ddf;
  /* 12631dd2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12631dd3 jne 0x12631dac */
  if (!C.zf) goto L_12631dac;
L_12631dd5:;
  /* 12631dd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12631dd7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12631dd9 je 0x12631e7a */
  if (C.zf) goto L_12631e7a;
L_12631ddf:;
  /* 12631ddf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12631de4 jb 0x12631e7a */
  if (C.cf) goto L_12631e7a;
  /* 12631dea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12631dec jmp 0x12631e7a */
  goto L_12631e7a;
L_12631df1:;
  /* 12631df1 lock inc dword ptr [0x1264f89c] */
  x86_unimpl("lock inc @ 0x12631df1");
  /* 12631df8 cmp dword ptr [0x1264f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631dff jg 0x12631e05 */
  if ((!C.zf&&C.sf==C.of)) goto L_12631e05;
  /* 12631e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12631e03 jmp 0x12631e1e */
  goto L_12631e1e;
L_12631e05:;
  /* 12631e05 lock dec dword ptr [0x1264f89c] */
  x86_unimpl("lock dec @ 0x12631e05");
  /* 12631e0c mov ebx, ecx */
  EBX = (ECX);
  /* 12631e0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12631e10 call 0x12626fe0 */
  push32(0x12631e15u); f_12626fe0();
  /* 12631e15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12631e1c mov ecx, ebx */
  ECX = (EBX);
L_12631e1e:;
  /* 12631e1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631e20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12631e22 mov edi, edi */
  EDI = (EDI);
L_12631e24:;
  /* 12631e24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12631e26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631e28 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12631e2a je 0x12631e4f */
  if (C.zf) goto L_12631e4f;
  /* 12631e2c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12631e2e je 0x12631e4f */
  if (C.zf) goto L_12631e4f;
  /* 12631e30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12631e31 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12631e32 push ecx */
  push32((uint32_t)(ECX));
  /* 12631e33 push eax */
  push32((uint32_t)(EAX));
  /* 12631e34 push ebx */
  push32((uint32_t)(EBX));
  /* 12631e35 call 0x12632e20 */
  push32(0x12631e3au); f_12632e20();
  /* 12631e3a mov ebx, eax */
  EBX = (EAX);
  /* 12631e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631e3f call 0x12632e20 */
  push32(0x12631e44u); f_12632e20();
  /* 12631e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631e47 pop ecx */
  ECX = (pop32());
  /* 12631e48 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631e4a jne 0x12631e55 */
  if (!C.zf) goto L_12631e55;
  /* 12631e4c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12631e4d jne 0x12631e24 */
  if (!C.zf) goto L_12631e24;
L_12631e4f:;
  /* 12631e4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12631e51 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631e53 je 0x12631e5e */
  if (C.zf) goto L_12631e5e;
L_12631e55:;
  /* 12631e55 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12631e5a jb 0x12631e5e */
  if (C.cf) goto L_12631e5e;
  /* 12631e5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12631e5e:;
  /* 12631e5e pop eax */
  EAX = (pop32());
  /* 12631e5f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631e61 jne 0x12631e6c */
  if (!C.zf) goto L_12631e6c;
  /* 12631e63 lock dec dword ptr [0x1264f89c] */
  x86_unimpl("lock dec @ 0x12631e63");
  /* 12631e6a jmp 0x12631e7a */
  goto L_12631e7a;
L_12631e6c:;
  /* 12631e6c mov ebx, ecx */
  EBX = (ECX);
  /* 12631e6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12631e70 call 0x12627080 */
  push32(0x12631e75u); f_12627080();
  /* 12631e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631e78 mov ecx, ebx */
  ECX = (EBX);
L_12631e7a:;
  /* 12631e7a mov eax, ecx */
  EAX = (ECX);
  /* 12631e7c pop ebx */
  EBX = (pop32());
  /* 12631e7d pop esi */
  ESI = (pop32());
  /* 12631e7e pop edi */
  EDI = (pop32());
  /* 12631e7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12631e80 ret  */
  ESPCHK(0x12631d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x12631e90 (255 bytes, 88 insns) */
void f_12631e90(void) {
  FTRACE(0x12631e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12631e91 mov ebp, esp */
  EBP = (ESP);
  /* 12631e93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12631e96:;
  /* 12631e96 cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631e9d jle 0x12631eb6 */
  if ((C.zf||C.sf!=C.of)) goto L_12631eb6;
  /* 12631e9f push 8 */
  push32((uint32_t)(0x8u));
  /* 12631ea1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631ea4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12631ea6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12631ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 12631ea9 call 0x126295f0 */
  push32(0x12631eaeu); f_126295f0();
  /* 12631eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631eb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12631eb4 jmp 0x12631ecf */
  goto L_12631ecf;
L_12631eb6:;
  /* 12631eb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631eb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631ebb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631ebd mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 12631ec3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12631ec5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12631ec9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12631ecc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12631ecf:;
  /* 12631ecf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631ed3 je 0x12631ee0 */
  if (C.zf) goto L_12631ee0;
  /* 12631ed5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631ed8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631edb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12631ede jmp 0x12631e96 */
  goto L_12631e96;
L_12631ee0:;
  /* 12631ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631ee3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12631ee5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12631ee7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12631eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631eed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631ef0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12631ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631ef6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12631ef9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631efd je 0x12631f05 */
  if (C.zf) goto L_12631f05;
  /* 12631eff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631f03 jne 0x12631f18 */
  if (!C.zf) goto L_12631f18;
L_12631f05:;
  /* 12631f05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631f08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631f0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631f0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12631f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631f12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631f15 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12631f18:;
  /* 12631f18 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12631f1f:;
  /* 12631f1f cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631f26 jle 0x12631f3b */
  if ((C.zf||C.sf!=C.of)) goto L_12631f3b;
  /* 12631f28 push 4 */
  push32((uint32_t)(0x4u));
  /* 12631f2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631f2d push edx */
  push32((uint32_t)(EDX));
  /* 12631f2e call 0x126295f0 */
  push32(0x12631f33u); f_126295f0();
  /* 12631f33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631f36 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12631f39 jmp 0x12631f50 */
  goto L_12631f50;
L_12631f3b:;
  /* 12631f3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631f3e mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 12631f44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12631f46 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12631f4a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12631f4d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12631f50:;
  /* 12631f50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631f54 je 0x12631f7b */
  if (C.zf) goto L_12631f7b;
  /* 12631f56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12631f59 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12631f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12631f5f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12631f63 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12631f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631f69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12631f6b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12631f6d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12631f70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631f73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631f76 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12631f79 jmp 0x12631f1f */
  goto L_12631f1f;
L_12631f7b:;
  /* 12631f7b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631f7f jne 0x12631f88 */
  if (!C.zf) goto L_12631f88;
  /* 12631f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12631f84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12631f86 jmp 0x12631f8b */
  goto L_12631f8b;
L_12631f88:;
  /* 12631f88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12631f8b:;
  /* 12631f8b mov esp, ebp */
  ESP = (EBP);
  /* 12631f8d pop ebp */
  EBP = (pop32());
  /* 12631f8e ret  */
  ESPCHK(0x12631e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x12631f90 (17 bytes, 8 insns) */
void f_12631f90(void) {
  FTRACE(0x12631f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12631f91 mov ebp, esp */
  EBP = (ESP);
  /* 12631f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631f96 push eax */
  push32((uint32_t)(EAX));
  /* 12631f97 call 0x12631e90 */
  push32(0x12631f9cu); f_12631e90();
  /* 12631f9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631f9f pop ebp */
  EBP = (pop32());
  /* 12631fa0 ret  */
  ESPCHK(0x12631f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x12631fb0 (297 bytes, 106 insns) */
void f_12631fb0(void) {
  FTRACE(0x12631fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12631fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12631fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12631fb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12631fb6 push esi */
  push32((uint32_t)(ESI));
L_12631fb7:;
  /* 12631fb7 cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631fbe jle 0x12631fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_12631fd7;
  /* 12631fc0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12631fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12631fc7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12631fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12631fca call 0x126295f0 */
  push32(0x12631fcfu); f_126295f0();
  /* 12631fcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12631fd2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12631fd5 jmp 0x12631ff0 */
  goto L_12631ff0;
L_12631fd7:;
  /* 12631fd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12631fdc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12631fde mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 12631fe4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12631fe6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12631fea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12631fed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12631ff0:;
  /* 12631ff0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12631ff4 je 0x12632001 */
  if (C.zf) goto L_12632001;
  /* 12631ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12631ff9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12631ffc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12631fff jmp 0x12631fb7 */
  goto L_12631fb7;
L_12632001:;
  /* 12632001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12632006 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12632008 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1263200b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263200e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632011 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12632014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632017 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1263201a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263201e je 0x12632026 */
  if (C.zf) goto L_12632026;
  /* 12632020 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632024 jne 0x12632039 */
  if (!C.zf) goto L_12632039;
L_12632026:;
  /* 12632026 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263202b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1263202d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12632030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632033 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632036 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12632039:;
  /* 12632039 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12632040 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12632047:;
  /* 12632047 cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263204e jle 0x12632063 */
  if ((C.zf||C.sf!=C.of)) goto L_12632063;
  /* 12632050 push 4 */
  push32((uint32_t)(0x4u));
  /* 12632052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632055 push edx */
  push32((uint32_t)(EDX));
  /* 12632056 call 0x126295f0 */
  push32(0x1263205bu); f_126295f0();
  /* 1263205b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263205e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12632061 jmp 0x12632078 */
  goto L_12632078;
L_12632063:;
  /* 12632063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632066 mov ecx, dword ptr [0x1264dc98] */
  ECX = (r32((uint32_t)(0x1264dc98)));
  /* 1263206c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1263206e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12632072 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12632075 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12632078:;
  /* 12632078 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263207c je 0x126320b9 */
  if (C.zf) goto L_126320b9;
  /* 1263207e push 0 */
  push32((uint32_t)(0x0u));
  /* 12632080 push 0xa */
  push32((uint32_t)(0xau));
  /* 12632082 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12632085 push eax */
  push32((uint32_t)(EAX));
  /* 12632086 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632089 push ecx */
  push32((uint32_t)(ECX));
  /* 1263208a call 0x12632f50 */
  push32(0x1263208fu); f_12632f50();
  /* 1263208f mov ecx, eax */
  ECX = (EAX);
  /* 12632091 mov esi, edx */
  ESI = (EDX);
  /* 12632093 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632096 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632099 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1263209a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263209c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1263209e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126320a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 126320a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126320a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126320a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126320ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126320ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126320b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126320b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 126320b7 jmp 0x12632047 */
  goto L_12632047;
L_126320b9:;
  /* 126320b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126320bd jne 0x126320ce */
  if (!C.zf) goto L_126320ce;
  /* 126320bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126320c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 126320c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126320c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126320ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 126320cc jmp 0x126320d4 */
  goto L_126320d4;
L_126320ce:;
  /* 126320ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126320d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_126320d4:;
  /* 126320d4 pop esi */
  ESI = (pop32());
  /* 126320d5 mov esp, ebp */
  ESP = (EBP);
  /* 126320d7 pop ebp */
  EBP = (pop32());
  /* 126320d8 ret  */
  ESPCHK(0x12631fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x126320e0 (61 bytes, 18 insns) */
void f_126320e0(void) {
  FTRACE(0x126320e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126320e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126320e1 mov ebp, esp */
  EBP = (ESP);
  /* 126320e3 cmp dword ptr [0x1264f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126320ea jne 0x1263211b */
  if (!C.zf) goto L_1263211b;
  /* 126320ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 126320ee call 0x12626fe0 */
  push32(0x126320f3u); f_12626fe0();
  /* 126320f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126320f6 cmp dword ptr [0x1264f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126320fd jne 0x12632111 */
  if (!C.zf) goto L_12632111;
  /* 126320ff call 0x12632140 */
  push32(0x12632104u); f_12632140();
  /* 12632104 mov eax, dword ptr [0x1264f868] */
  EAX = (r32((uint32_t)(0x1264f868)));
  /* 12632109 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263210c mov dword ptr [0x1264f868], eax */
  w32((uint32_t)(0x1264f868), (EAX));
L_12632111:;
  /* 12632111 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12632113 call 0x12627080 */
  push32(0x12632118u); f_12627080();
  /* 12632118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1263211b:;
  /* 1263211b pop ebp */
  EBP = (pop32());
  /* 1263211c ret  */
  ESPCHK(0x126320e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x12632120 (30 bytes, 11 insns) */
void f_12632120(void) {
  FTRACE(0x12632120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632120 push ebp */
  push32((uint32_t)(EBP));
  /* 12632121 mov ebp, esp */
  EBP = (ESP);
  /* 12632123 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12632125 call 0x12626fe0 */
  push32(0x1263212au); f_12626fe0();
  /* 1263212a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263212d call 0x12632140 */
  push32(0x12632132u); f_12632140();
  /* 12632132 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12632134 call 0x12627080 */
  push32(0x12632139u); f_12627080();
  /* 12632139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263213c pop ebp */
  EBP = (pop32());
  /* 1263213d ret  */
  ESPCHK(0x12632120u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x12632140 (939 bytes, 266 insns) */
void f_12632140(void) {
  FTRACE(0x12632140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632140 push ebp */
  push32((uint32_t)(EBP));
  /* 12632141 mov ebp, esp */
  EBP = (ESP);
  /* 12632143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632146 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1263214d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1263214f call 0x12626fe0 */
  push32(0x12632154u); f_12626fe0();
  /* 12632154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632157 mov dword ptr [0x1264f7b0], 0 */
  w32((uint32_t)(0x1264f7b0), (0x0u));
  /* 12632161 mov dword ptr [0x1264ee38], 0xffffffff */
  w32((uint32_t)(0x1264ee38), (0xffffffffu));
  /* 1263216b mov eax, dword ptr [0x1264ee38] */
  EAX = (r32((uint32_t)(0x1264ee38)));
  /* 12632170 mov dword ptr [0x1264ee28], eax */
  w32((uint32_t)(0x1264ee28), (EAX));
  /* 12632175 push 0x1264b968 */
  push32((uint32_t)(0x1264b968u));
  /* 1263217a call 0x12632fc0 */
  push32(0x1263217fu); f_12632fc0();
  /* 1263217f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632182 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12632185 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632189 jne 0x126322c3 */
  if (!C.zf) goto L_126322c3;
  /* 1263218f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12632191 call 0x12627080 */
  push32(0x12632196u); f_12627080();
  /* 12632196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632199 push 0x1264f7b8 */
  push32((uint32_t)(0x1264f7b8u));
  /* 1263219e call dword ptr [0x12652264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652264))), 0x126321a4u);
  /* 126321a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126321a7 je 0x126322be */
  if (C.zf) goto L_126322be;
  /* 126321ad mov dword ptr [0x1264f7b0], 1 */
  w32((uint32_t)(0x1264f7b0), (0x1u));
  /* 126321b7 mov ecx, dword ptr [0x1264f7b8] */
  ECX = (r32((uint32_t)(0x1264f7b8)));
  /* 126321bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126321c0 mov dword ptr [0x1264ed90], ecx */
  w32((uint32_t)(0x1264ed90), (ECX));
  /* 126321c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126321c8 mov dx, word ptr [0x1264f7fe] */
  DX = (r16((uint32_t)(0x1264f7fe)));
  /* 126321cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126321d1 je 0x126321e9 */
  if (C.zf) goto L_126321e9;
  /* 126321d3 mov eax, dword ptr [0x1264f80c] */
  EAX = (r32((uint32_t)(0x1264f80c)));
  /* 126321d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126321db mov ecx, dword ptr [0x1264ed90] */
  ECX = (r32((uint32_t)(0x1264ed90)));
  /* 126321e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126321e3 mov dword ptr [0x1264ed90], ecx */
  w32((uint32_t)(0x1264ed90), (ECX));
L_126321e9:;
  /* 126321e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126321eb mov dx, word ptr [0x1264f852] */
  DX = (r16((uint32_t)(0x1264f852)));
  /* 126321f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126321f4 je 0x1263221e */
  if (C.zf) goto L_1263221e;
  /* 126321f6 cmp dword ptr [0x1264f860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126321fd je 0x1263221e */
  if (C.zf) goto L_1263221e;
  /* 126321ff mov dword ptr [0x1264ed94], 1 */
  w32((uint32_t)(0x1264ed94), (0x1u));
  /* 12632209 mov eax, dword ptr [0x1264f860] */
  EAX = (r32((uint32_t)(0x1264f860)));
  /* 1263220e sub eax, dword ptr [0x1264f80c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264f80c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632214 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12632217 mov dword ptr [0x1264ed98], eax */
  w32((uint32_t)(0x1264ed98), (EAX));
  /* 1263221c jmp 0x12632232 */
  goto L_12632232;
L_1263221e:;
  /* 1263221e mov dword ptr [0x1264ed94], 0 */
  w32((uint32_t)(0x1264ed94), (0x0u));
  /* 12632228 mov dword ptr [0x1264ed98], 0 */
  w32((uint32_t)(0x1264ed98), (0x0u));
L_12632232:;
  /* 12632232 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12632235 push ecx */
  push32((uint32_t)(ECX));
  /* 12632236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632238 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1263223a mov edx, dword ptr [0x1264ee1c] */
  EDX = (r32((uint32_t)(0x1264ee1c)));
  /* 12632240 push edx */
  push32((uint32_t)(EDX));
  /* 12632241 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632243 push 0x1264f7bc */
  push32((uint32_t)(0x1264f7bcu));
  /* 12632248 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1263224d mov eax, dword ptr [0x1264f720] */
  EAX = (r32((uint32_t)(0x1264f720)));
  /* 12632252 push eax */
  push32((uint32_t)(EAX));
  /* 12632253 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12632259u);
  /* 12632259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1263225b je 0x1263226f */
  if (C.zf) goto L_1263226f;
  /* 1263225d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632261 jne 0x1263226f */
  if (!C.zf) goto L_1263226f;
  /* 12632263 mov ecx, dword ptr [0x1264ee1c] */
  ECX = (r32((uint32_t)(0x1264ee1c)));
  /* 12632269 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1263226d jmp 0x12632278 */
  goto L_12632278;
L_1263226f:;
  /* 1263226f mov edx, dword ptr [0x1264ee1c] */
  EDX = (r32((uint32_t)(0x1264ee1c)));
  /* 12632275 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12632278:;
  /* 12632278 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1263227b push eax */
  push32((uint32_t)(EAX));
  /* 1263227c push 0 */
  push32((uint32_t)(0x0u));
  /* 1263227e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12632280 mov ecx, dword ptr [0x1264ee20] */
  ECX = (r32((uint32_t)(0x1264ee20)));
  /* 12632286 push ecx */
  push32((uint32_t)(ECX));
  /* 12632287 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632289 push 0x1264f810 */
  push32((uint32_t)(0x1264f810u));
  /* 1263228e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12632293 mov edx, dword ptr [0x1264f720] */
  EDX = (r32((uint32_t)(0x1264f720)));
  /* 12632299 push edx */
  push32((uint32_t)(EDX));
  /* 1263229a call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x126322a0u);
  /* 126322a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126322a2 je 0x126322b5 */
  if (C.zf) goto L_126322b5;
  /* 126322a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126322a8 jne 0x126322b5 */
  if (!C.zf) goto L_126322b5;
  /* 126322aa mov eax, dword ptr [0x1264ee20] */
  EAX = (r32((uint32_t)(0x1264ee20)));
  /* 126322af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 126322b3 jmp 0x126322be */
  goto L_126322be;
L_126322b5:;
  /* 126322b5 mov ecx, dword ptr [0x1264ee20] */
  ECX = (r32((uint32_t)(0x1264ee20)));
  /* 126322bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_126322be:;
  /* 126322be jmp 0x126324e7 */
  goto L_126324e7;
L_126322c3:;
  /* 126322c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126322c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126322c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126322cb je 0x126322ed */
  if (C.zf) goto L_126322ed;
  /* 126322cd cmp dword ptr [0x1264f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126322d4 je 0x126322fc */
  if (C.zf) goto L_126322fc;
  /* 126322d6 mov ecx, dword ptr [0x1264f864] */
  ECX = (r32((uint32_t)(0x1264f864)));
  /* 126322dc push ecx */
  push32((uint32_t)(ECX));
  /* 126322dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126322e0 push edx */
  push32((uint32_t)(EDX));
  /* 126322e1 call 0x1262f270 */
  push32(0x126322e6u); f_1262f270();
  /* 126322e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126322e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126322eb jne 0x126322fc */
  if (!C.zf) goto L_126322fc;
L_126322ed:;
  /* 126322ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 126322ef call 0x12627080 */
  push32(0x126322f4u); f_12627080();
  /* 126322f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126322f7 jmp 0x126324e7 */
  goto L_126324e7;
L_126322fc:;
  /* 126322fc push 2 */
  push32((uint32_t)(0x2u));
  /* 126322fe mov eax, dword ptr [0x1264f864] */
  EAX = (r32((uint32_t)(0x1264f864)));
  /* 12632303 push eax */
  push32((uint32_t)(EAX));
  /* 12632304 call 0x12624070 */
  push32(0x12632309u); f_12624070();
  /* 12632309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263230c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12632311 push 0x1264b960 */
  push32((uint32_t)(0x1264b960u));
  /* 12632316 push 2 */
  push32((uint32_t)(0x2u));
  /* 12632318 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263231b push ecx */
  push32((uint32_t)(ECX));
  /* 1263231c call 0x12626410 */
  push32(0x12632321u); f_12626410();
  /* 12632321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632324 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632327 push eax */
  push32((uint32_t)(EAX));
  /* 12632328 call 0x126235e0 */
  push32(0x1263232du); f_126235e0();
  /* 1263232d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632330 mov dword ptr [0x1264f864], eax */
  w32((uint32_t)(0x1264f864), (EAX));
  /* 12632335 cmp dword ptr [0x1264f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263233c jne 0x1263234d */
  if (!C.zf) goto L_1263234d;
  /* 1263233e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12632340 call 0x12627080 */
  push32(0x12632345u); f_12627080();
  /* 12632345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632348 jmp 0x126324e7 */
  goto L_126324e7;
L_1263234d:;
  /* 1263234d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632350 push edx */
  push32((uint32_t)(EDX));
  /* 12632351 mov eax, dword ptr [0x1264f864] */
  EAX = (r32((uint32_t)(0x1264f864)));
  /* 12632356 push eax */
  push32((uint32_t)(EAX));
  /* 12632357 call 0x12626590 */
  push32(0x1263235cu); f_12626590();
  /* 1263235c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263235f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12632361 call 0x12627080 */
  push32(0x12632366u); f_12627080();
  /* 12632366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632369 push 3 */
  push32((uint32_t)(0x3u));
  /* 1263236b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263236e push ecx */
  push32((uint32_t)(ECX));
  /* 1263236f mov edx, dword ptr [0x1264ee1c] */
  EDX = (r32((uint32_t)(0x1264ee1c)));
  /* 12632375 push edx */
  push32((uint32_t)(EDX));
  /* 12632376 call 0x12626e00 */
  push32(0x1263237bu); f_12626e00();
  /* 1263237b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263237e mov eax, dword ptr [0x1264ee1c] */
  EAX = (r32((uint32_t)(0x1264ee1c)));
  /* 12632383 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12632387 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263238a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263238d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12632390 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632393 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12632396 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632399 jne 0x126323ad */
  if (!C.zf) goto L_126323ad;
  /* 1263239b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263239e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126323a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126323a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126323aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_126323ad:;
  /* 126323ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323b0 push eax */
  push32((uint32_t)(EAX));
  /* 126323b1 call 0x12631e90 */
  push32(0x126323b6u); f_12631e90();
  /* 126323b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126323b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126323bf mov dword ptr [0x1264ed90], eax */
  w32((uint32_t)(0x1264ed90), (EAX));
L_126323c4:;
  /* 126323c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126323ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126323cd je 0x126323e5 */
  if (C.zf) goto L_126323e5;
  /* 126323cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126323d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126323d8 jl 0x126323f0 */
  if ((C.sf!=C.of)) goto L_126323f0;
  /* 126323da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126323e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126323e3 jg 0x126323f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_126323f0;
L_126323e5:;
  /* 126323e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126323eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126323ee jmp 0x126323c4 */
  goto L_126323c4;
L_126323f0:;
  /* 126323f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126323f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126323f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126323f9 jne 0x12632495 */
  if (!C.zf) goto L_12632495;
  /* 126323ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632402 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632405 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12632408 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263240b push edx */
  push32((uint32_t)(EDX));
  /* 1263240c call 0x12631e90 */
  push32(0x12632411u); f_12631e90();
  /* 12632411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632414 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12632417 mov ecx, dword ptr [0x1264ed90] */
  ECX = (r32((uint32_t)(0x1264ed90)));
  /* 1263241d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263241f mov dword ptr [0x1264ed90], ecx */
  w32((uint32_t)(0x1264ed90), (ECX));
L_12632425:;
  /* 12632425 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632428 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1263242b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263242e jl 0x12632446 */
  if ((C.sf!=C.of)) goto L_12632446;
  /* 12632430 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632433 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12632436 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632439 jg 0x12632446 */
  if ((!C.zf&&C.sf==C.of)) goto L_12632446;
  /* 1263243b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263243e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632441 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12632444 jmp 0x12632425 */
  goto L_12632425;
L_12632446:;
  /* 12632446 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632449 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1263244c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263244f jne 0x12632495 */
  if (!C.zf) goto L_12632495;
  /* 12632451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632454 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632457 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1263245a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263245d push ecx */
  push32((uint32_t)(ECX));
  /* 1263245e call 0x12631e90 */
  push32(0x12632463u); f_12631e90();
  /* 12632463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632466 mov edx, dword ptr [0x1264ed90] */
  EDX = (r32((uint32_t)(0x1264ed90)));
  /* 1263246c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263246e mov dword ptr [0x1264ed90], edx */
  w32((uint32_t)(0x1264ed90), (EDX));
L_12632474:;
  /* 12632474 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632477 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1263247a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263247d jl 0x12632495 */
  if ((C.sf!=C.of)) goto L_12632495;
  /* 1263247f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632482 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12632485 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632488 jg 0x12632495 */
  if ((!C.zf&&C.sf==C.of)) goto L_12632495;
  /* 1263248a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263248d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632490 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12632493 jmp 0x12632474 */
  goto L_12632474;
L_12632495:;
  /* 12632495 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632499 je 0x126324a9 */
  if (C.zf) goto L_126324a9;
  /* 1263249b mov edx, dword ptr [0x1264ed90] */
  EDX = (r32((uint32_t)(0x1264ed90)));
  /* 126324a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 126324a3 mov dword ptr [0x1264ed90], edx */
  w32((uint32_t)(0x1264ed90), (EDX));
L_126324a9:;
  /* 126324a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126324ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126324af mov dword ptr [0x1264ed94], ecx */
  w32((uint32_t)(0x1264ed94), (ECX));
  /* 126324b5 cmp dword ptr [0x1264ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126324bc je 0x126324de */
  if (C.zf) goto L_126324de;
  /* 126324be push 3 */
  push32((uint32_t)(0x3u));
  /* 126324c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126324c3 push edx */
  push32((uint32_t)(EDX));
  /* 126324c4 mov eax, dword ptr [0x1264ee20] */
  EAX = (r32((uint32_t)(0x1264ee20)));
  /* 126324c9 push eax */
  push32((uint32_t)(EAX));
  /* 126324ca call 0x12626e00 */
  push32(0x126324cfu); f_12626e00();
  /* 126324cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126324d2 mov ecx, dword ptr [0x1264ee20] */
  ECX = (r32((uint32_t)(0x1264ee20)));
  /* 126324d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 126324dc jmp 0x126324e7 */
  goto L_126324e7;
L_126324de:;
  /* 126324de mov edx, dword ptr [0x1264ee20] */
  EDX = (r32((uint32_t)(0x1264ee20)));
  /* 126324e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_126324e7:;
  /* 126324e7 mov esp, ebp */
  ESP = (EBP);
  /* 126324e9 pop ebp */
  EBP = (pop32());
  /* 126324ea ret  */
  ESPCHK(0x12632140u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x126324f0 (46 bytes, 18 insns) */
void f_126324f0(void) {
  FTRACE(0x126324f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126324f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126324f1 mov ebp, esp */
  EBP = (ESP);
  /* 126324f3 push ecx */
  push32((uint32_t)(ECX));
  /* 126324f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 126324f6 call 0x12626fe0 */
  push32(0x126324fbu); f_12626fe0();
  /* 126324fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126324fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632501 push eax */
  push32((uint32_t)(EAX));
  /* 12632502 call 0x12632520 */
  push32(0x12632507u); f_12632520();
  /* 12632507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263250a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1263250d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1263250f call 0x12627080 */
  push32(0x12632514u); f_12627080();
  /* 12632514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263251a mov esp, ebp */
  ESP = (EBP);
  /* 1263251c pop ebp */
  EBP = (pop32());
  /* 1263251d ret  */
  ESPCHK(0x126324f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012520 @ 0x12632520 (762 bytes, 246 insns) */
void f_12632520(void) {
  FTRACE(0x12632520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632520 push ebp */
  push32((uint32_t)(EBP));
  /* 12632521 mov ebp, esp */
  EBP = (ESP);
  /* 12632523 push ecx */
  push32((uint32_t)(ECX));
  /* 12632524 cmp dword ptr [0x1264ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263252b jne 0x12632534 */
  if (!C.zf) goto L_12632534;
  /* 1263252d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263252f jmp 0x12632816 */
  goto L_12632816;
L_12632534:;
  /* 12632534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632537 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1263253a cmp ecx, dword ptr [0x1264ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632540 jne 0x12632554 */
  if (!C.zf) goto L_12632554;
  /* 12632542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632545 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12632548 cmp eax, dword ptr [0x1264ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263254e je 0x1263271b */
  if (C.zf) goto L_1263271b;
L_12632554:;
  /* 12632554 cmp dword ptr [0x1264f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263255b je 0x126326d5 */
  if (C.zf) goto L_126326d5;
  /* 12632561 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12632563 mov cx, word ptr [0x1264f850] */
  CX = (r16((uint32_t)(0x1264f850)));
  /* 1263256a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1263256c jne 0x126325c9 */
  if (!C.zf) goto L_126325c9;
  /* 1263256e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12632570 mov dx, word ptr [0x1264f85e] */
  DX = (r16((uint32_t)(0x1264f85e)));
  /* 12632577 push edx */
  push32((uint32_t)(EDX));
  /* 12632578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263257a mov ax, word ptr [0x1264f85c] */
  AX = (r16((uint32_t)(0x1264f85c)));
  /* 12632580 push eax */
  push32((uint32_t)(EAX));
  /* 12632581 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12632583 mov cx, word ptr [0x1264f85a] */
  CX = (r16((uint32_t)(0x1264f85a)));
  /* 1263258a push ecx */
  push32((uint32_t)(ECX));
  /* 1263258b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1263258d mov dx, word ptr [0x1264f858] */
  DX = (r16((uint32_t)(0x1264f858)));
  /* 12632594 push edx */
  push32((uint32_t)(EDX));
  /* 12632595 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632599 mov ax, word ptr [0x1264f854] */
  AX = (r16((uint32_t)(0x1264f854)));
  /* 1263259f push eax */
  push32((uint32_t)(EAX));
  /* 126325a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126325a2 mov cx, word ptr [0x1264f856] */
  CX = (r16((uint32_t)(0x1264f856)));
  /* 126325a9 push ecx */
  push32((uint32_t)(ECX));
  /* 126325aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126325ac mov dx, word ptr [0x1264f852] */
  DX = (r16((uint32_t)(0x1264f852)));
  /* 126325b3 push edx */
  push32((uint32_t)(EDX));
  /* 126325b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126325b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 126325ba push ecx */
  push32((uint32_t)(ECX));
  /* 126325bb push 1 */
  push32((uint32_t)(0x1u));
  /* 126325bd push 1 */
  push32((uint32_t)(0x1u));
  /* 126325bf call 0x12632820 */
  push32(0x126325c4u); f_12632820();
  /* 126325c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126325c7 jmp 0x1263261a */
  goto L_1263261a;
L_126325c9:;
  /* 126325c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126325cb mov dx, word ptr [0x1264f85e] */
  DX = (r16((uint32_t)(0x1264f85e)));
  /* 126325d2 push edx */
  push32((uint32_t)(EDX));
  /* 126325d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126325d5 mov ax, word ptr [0x1264f85c] */
  AX = (r16((uint32_t)(0x1264f85c)));
  /* 126325db push eax */
  push32((uint32_t)(EAX));
  /* 126325dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126325de mov cx, word ptr [0x1264f85a] */
  CX = (r16((uint32_t)(0x1264f85a)));
  /* 126325e5 push ecx */
  push32((uint32_t)(ECX));
  /* 126325e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126325e8 mov dx, word ptr [0x1264f858] */
  DX = (r16((uint32_t)(0x1264f858)));
  /* 126325ef push edx */
  push32((uint32_t)(EDX));
  /* 126325f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126325f2 mov ax, word ptr [0x1264f856] */
  AX = (r16((uint32_t)(0x1264f856)));
  /* 126325f8 push eax */
  push32((uint32_t)(EAX));
  /* 126325f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126325fb push 0 */
  push32((uint32_t)(0x0u));
  /* 126325fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126325ff mov cx, word ptr [0x1264f852] */
  CX = (r16((uint32_t)(0x1264f852)));
  /* 12632606 push ecx */
  push32((uint32_t)(ECX));
  /* 12632607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263260a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1263260d push eax */
  push32((uint32_t)(EAX));
  /* 1263260e push 0 */
  push32((uint32_t)(0x0u));
  /* 12632610 push 1 */
  push32((uint32_t)(0x1u));
  /* 12632612 call 0x12632820 */
  push32(0x12632617u); f_12632820();
  /* 12632617 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1263261a:;
  /* 1263261a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1263261c mov cx, word ptr [0x1264f7fc] */
  CX = (r16((uint32_t)(0x1264f7fc)));
  /* 12632623 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12632625 jne 0x12632682 */
  if (!C.zf) goto L_12632682;
  /* 12632627 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12632629 mov dx, word ptr [0x1264f80a] */
  DX = (r16((uint32_t)(0x1264f80a)));
  /* 12632630 push edx */
  push32((uint32_t)(EDX));
  /* 12632631 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632633 mov ax, word ptr [0x1264f808] */
  AX = (r16((uint32_t)(0x1264f808)));
  /* 12632639 push eax */
  push32((uint32_t)(EAX));
  /* 1263263a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1263263c mov cx, word ptr [0x1264f806] */
  CX = (r16((uint32_t)(0x1264f806)));
  /* 12632643 push ecx */
  push32((uint32_t)(ECX));
  /* 12632644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12632646 mov dx, word ptr [0x1264f804] */
  DX = (r16((uint32_t)(0x1264f804)));
  /* 1263264d push edx */
  push32((uint32_t)(EDX));
  /* 1263264e push 0 */
  push32((uint32_t)(0x0u));
  /* 12632650 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632652 mov ax, word ptr [0x1264f800] */
  AX = (r16((uint32_t)(0x1264f800)));
  /* 12632658 push eax */
  push32((uint32_t)(EAX));
  /* 12632659 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1263265b mov cx, word ptr [0x1264f802] */
  CX = (r16((uint32_t)(0x1264f802)));
  /* 12632662 push ecx */
  push32((uint32_t)(ECX));
  /* 12632663 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12632665 mov dx, word ptr [0x1264f7fe] */
  DX = (r16((uint32_t)(0x1264f7fe)));
  /* 1263266c push edx */
  push32((uint32_t)(EDX));
  /* 1263266d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632670 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12632673 push ecx */
  push32((uint32_t)(ECX));
  /* 12632674 push 1 */
  push32((uint32_t)(0x1u));
  /* 12632676 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632678 call 0x12632820 */
  push32(0x1263267du); f_12632820();
  /* 1263267d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632680 jmp 0x126326d3 */
  goto L_126326d3;
L_12632682:;
  /* 12632682 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12632684 mov dx, word ptr [0x1264f80a] */
  DX = (r16((uint32_t)(0x1264f80a)));
  /* 1263268b push edx */
  push32((uint32_t)(EDX));
  /* 1263268c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263268e mov ax, word ptr [0x1264f808] */
  AX = (r16((uint32_t)(0x1264f808)));
  /* 12632694 push eax */
  push32((uint32_t)(EAX));
  /* 12632695 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12632697 mov cx, word ptr [0x1264f806] */
  CX = (r16((uint32_t)(0x1264f806)));
  /* 1263269e push ecx */
  push32((uint32_t)(ECX));
  /* 1263269f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126326a1 mov dx, word ptr [0x1264f804] */
  DX = (r16((uint32_t)(0x1264f804)));
  /* 126326a8 push edx */
  push32((uint32_t)(EDX));
  /* 126326a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126326ab mov ax, word ptr [0x1264f802] */
  AX = (r16((uint32_t)(0x1264f802)));
  /* 126326b1 push eax */
  push32((uint32_t)(EAX));
  /* 126326b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126326b8 mov cx, word ptr [0x1264f7fe] */
  CX = (r16((uint32_t)(0x1264f7fe)));
  /* 126326bf push ecx */
  push32((uint32_t)(ECX));
  /* 126326c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126326c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126326c6 push eax */
  push32((uint32_t)(EAX));
  /* 126326c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326cb call 0x12632820 */
  push32(0x126326d0u); f_12632820();
  /* 126326d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126326d3:;
  /* 126326d3 jmp 0x1263271b */
  goto L_1263271b;
L_126326d5:;
  /* 126326d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326db push 2 */
  push32((uint32_t)(0x2u));
  /* 126326dd push 0 */
  push32((uint32_t)(0x0u));
  /* 126326df push 0 */
  push32((uint32_t)(0x0u));
  /* 126326e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 126326e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 126326e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126326e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 126326eb push edx */
  push32((uint32_t)(EDX));
  /* 126326ec push 1 */
  push32((uint32_t)(0x1u));
  /* 126326ee push 1 */
  push32((uint32_t)(0x1u));
  /* 126326f0 call 0x12632820 */
  push32(0x126326f5u); f_12632820();
  /* 126326f5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126326f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126326fa push 0 */
  push32((uint32_t)(0x0u));
  /* 126326fc push 0 */
  push32((uint32_t)(0x0u));
  /* 126326fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12632700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632702 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632704 push 5 */
  push32((uint32_t)(0x5u));
  /* 12632706 push 0xa */
  push32((uint32_t)(0xau));
  /* 12632708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263270b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1263270e push ecx */
  push32((uint32_t)(ECX));
  /* 1263270f push 1 */
  push32((uint32_t)(0x1u));
  /* 12632711 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632713 call 0x12632820 */
  push32(0x12632718u); f_12632820();
  /* 12632718 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1263271b:;
  /* 1263271b mov edx, dword ptr [0x1264ee2c] */
  EDX = (r32((uint32_t)(0x1264ee2c)));
  /* 12632721 cmp edx, dword ptr [0x1264ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632727 jge 0x12632774 */
  if ((C.sf==C.of)) goto L_12632774;
  /* 12632729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263272c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1263272f cmp ecx, dword ptr [0x1264ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632735 jl 0x12632745 */
  if ((C.sf!=C.of)) goto L_12632745;
  /* 12632737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263273a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1263273d cmp eax, dword ptr [0x1264ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632743 jle 0x1263274c */
  if ((C.zf||C.sf!=C.of)) goto L_1263274c;
L_12632745:;
  /* 12632745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632747 jmp 0x12632816 */
  goto L_12632816;
L_1263274c:;
  /* 1263274c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263274f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12632752 cmp edx, dword ptr [0x1264ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632758 jle 0x12632772 */
  if ((C.zf||C.sf!=C.of)) goto L_12632772;
  /* 1263275a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263275d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12632760 cmp ecx, dword ptr [0x1264ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632766 jge 0x12632772 */
  if ((C.sf==C.of)) goto L_12632772;
  /* 12632768 mov eax, 1 */
  EAX = (0x1u);
  /* 1263276d jmp 0x12632816 */
  goto L_12632816;
L_12632772:;
  /* 12632772 jmp 0x126327b7 */
  goto L_126327b7;
L_12632774:;
  /* 12632774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632777 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1263277a cmp eax, dword ptr [0x1264ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632780 jl 0x12632790 */
  if ((C.sf!=C.of)) goto L_12632790;
  /* 12632782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632785 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12632788 cmp edx, dword ptr [0x1264ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263278e jle 0x12632797 */
  if ((C.zf||C.sf!=C.of)) goto L_12632797;
L_12632790:;
  /* 12632790 mov eax, 1 */
  EAX = (0x1u);
  /* 12632795 jmp 0x12632816 */
  goto L_12632816;
L_12632797:;
  /* 12632797 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263279a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1263279d cmp ecx, dword ptr [0x1264ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126327a3 jle 0x126327b7 */
  if ((C.zf||C.sf!=C.of)) goto L_126327b7;
  /* 126327a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126327a8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 126327ab cmp eax, dword ptr [0x1264ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126327b1 jge 0x126327b7 */
  if ((C.sf==C.of)) goto L_126327b7;
  /* 126327b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126327b5 jmp 0x12632816 */
  goto L_12632816;
L_126327b7:;
  /* 126327b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126327ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126327bd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126327c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126327c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126327c5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126327c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126327ca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 126327cd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126327d3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126327d5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126327db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126327de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126327e1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 126327e4 cmp edx, dword ptr [0x1264ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126327ea jne 0x12632802 */
  if (!C.zf) goto L_12632802;
  /* 126327ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126327ef cmp eax, dword ptr [0x1264ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126327f5 jl 0x126327fe */
  if ((C.sf!=C.of)) goto L_126327fe;
  /* 126327f7 mov eax, 1 */
  EAX = (0x1u);
  /* 126327fc jmp 0x12632816 */
  goto L_12632816;
L_126327fe:;
  /* 126327fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632800 jmp 0x12632816 */
  goto L_12632816;
L_12632802:;
  /* 12632802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632805 cmp ecx, dword ptr [0x1264ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263280b jge 0x12632814 */
  if ((C.sf==C.of)) goto L_12632814;
  /* 1263280d mov eax, 1 */
  EAX = (0x1u);
  /* 12632812 jmp 0x12632816 */
  goto L_12632816;
L_12632814:;
  /* 12632814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12632816:;
  /* 12632816 mov esp, ebp */
  ESP = (EBP);
  /* 12632818 pop ebp */
  EBP = (pop32());
  /* 12632819 ret  */
  ESPCHK(0x12632520u, _esp0);
  ESP += 4; return;
}

/* FUN_10012820 @ 0x12632820 (504 bytes, 145 insns) */
void f_12632820(void) {
  FTRACE(0x12632820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632820 push ebp */
  push32((uint32_t)(EBP));
  /* 12632821 mov ebp, esp */
  EBP = (ESP);
  /* 12632823 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632826 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263282a jne 0x126328fc */
  if (!C.zf) goto L_126328fc;
  /* 12632830 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632833 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12632836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632838 jne 0x12632849 */
  if (!C.zf) goto L_12632849;
  /* 1263283a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263283d mov edx, dword ptr [ecx*4 + 0x1264ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264ee4c)));
  /* 12632844 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12632847 jmp 0x12632856 */
  goto L_12632856;
L_12632849:;
  /* 12632849 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263284c mov ecx, dword ptr [eax*4 + 0x1264ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264ee80)));
  /* 12632853 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12632856:;
  /* 12632856 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632859 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263285c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1263285f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632862 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632865 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1263286b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263286e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632870 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632873 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632876 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12632879 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1263287d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1263287e mov ecx, 7 */
  ECX = (0x7u);
  /* 12632883 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12632885 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12632888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263288b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263288e jg 0x126328a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_126328a9;
  /* 12632890 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12632893 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632896 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12632899 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263289c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1263289f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126328a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126328a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126328a7 jmp 0x126328bd */
  goto L_126328bd;
L_126328a9:;
  /* 126328a9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 126328ac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126328af mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126328b2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126328b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126328b8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126328ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_126328bd:;
  /* 126328bd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126328c1 jne 0x126328fa */
  if (!C.zf) goto L_126328fa;
  /* 126328c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126328c6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 126328c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126328cb jne 0x126328dc */
  if (!C.zf) goto L_126328dc;
  /* 126328cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126328d0 mov eax, dword ptr [edx*4 + 0x1264ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1264ee50)));
  /* 126328d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126328da jmp 0x126328e9 */
  goto L_126328e9;
L_126328dc:;
  /* 126328dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126328df mov edx, dword ptr [ecx*4 + 0x1264ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264ee84)));
  /* 126328e6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_126328e9:;
  /* 126328e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126328ec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126328ef jle 0x126328fa */
  if ((C.zf||C.sf!=C.of)) goto L_126328fa;
  /* 126328f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126328f4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126328f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_126328fa:;
  /* 126328fa jmp 0x12632931 */
  goto L_12632931;
L_126328fc:;
  /* 126328fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126328ff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12632902 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12632904 jne 0x12632915 */
  if (!C.zf) goto L_12632915;
  /* 12632906 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12632909 mov ecx, dword ptr [eax*4 + 0x1264ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264ee4c)));
  /* 12632910 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12632913 jmp 0x12632922 */
  goto L_12632922;
L_12632915:;
  /* 12632915 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12632918 mov eax, dword ptr [edx*4 + 0x1264ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1264ee80)));
  /* 1263291f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12632922:;
  /* 12632922 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12632925 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12632928 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263292b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263292e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12632931:;
  /* 12632931 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632935 jne 0x12632971 */
  if (!C.zf) goto L_12632971;
  /* 12632937 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263293a mov dword ptr [0x1264ee2c], eax */
  w32((uint32_t)(0x1264ee2c), (EAX));
  /* 1263293f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12632942 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12632945 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12632948 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263294a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1263294d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12632950 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632952 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12632958 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1263295b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263295d mov dword ptr [0x1264ee30], ecx */
  w32((uint32_t)(0x1264ee30), (ECX));
  /* 12632963 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632966 mov dword ptr [0x1264ee28], edx */
  w32((uint32_t)(0x1264ee28), (EDX));
  /* 1263296c jmp 0x12632a14 */
  goto L_12632a14;
L_12632971:;
  /* 12632971 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12632974 mov dword ptr [0x1264ee3c], eax */
  w32((uint32_t)(0x1264ee3c), (EAX));
  /* 12632979 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1263297c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1263297f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12632982 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632984 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12632987 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1263298a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263298c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12632992 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12632995 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632997 mov dword ptr [0x1264ee40], ecx */
  w32((uint32_t)(0x1264ee40), (ECX));
  /* 1263299d mov edx, dword ptr [0x1264ed98] */
  EDX = (r32((uint32_t)(0x1264ed98)));
  /* 126329a3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126329a9 mov eax, dword ptr [0x1264ee40] */
  EAX = (r32((uint32_t)(0x1264ee40)));
  /* 126329ae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126329b0 mov dword ptr [0x1264ee40], eax */
  w32((uint32_t)(0x1264ee40), (EAX));
  /* 126329b5 cmp dword ptr [0x1264ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126329bc jge 0x126329e1 */
  if ((C.sf==C.of)) goto L_126329e1;
  /* 126329be mov ecx, dword ptr [0x1264ee40] */
  ECX = (r32((uint32_t)(0x1264ee40)));
  /* 126329c4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126329ca mov dword ptr [0x1264ee40], ecx */
  w32((uint32_t)(0x1264ee40), (ECX));
  /* 126329d0 mov edx, dword ptr [0x1264ee3c] */
  EDX = (r32((uint32_t)(0x1264ee3c)));
  /* 126329d6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126329d9 mov dword ptr [0x1264ee3c], edx */
  w32((uint32_t)(0x1264ee3c), (EDX));
  /* 126329df jmp 0x12632a0b */
  goto L_12632a0b;
L_126329e1:;
  /* 126329e1 cmp dword ptr [0x1264ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1264ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126329eb jl 0x12632a0b */
  if ((C.sf!=C.of)) goto L_12632a0b;
  /* 126329ed mov eax, dword ptr [0x1264ee40] */
  EAX = (r32((uint32_t)(0x1264ee40)));
  /* 126329f2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126329f7 mov dword ptr [0x1264ee40], eax */
  w32((uint32_t)(0x1264ee40), (EAX));
  /* 126329fc mov ecx, dword ptr [0x1264ee3c] */
  ECX = (r32((uint32_t)(0x1264ee3c)));
  /* 12632a02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632a05 mov dword ptr [0x1264ee3c], ecx */
  w32((uint32_t)(0x1264ee3c), (ECX));
L_12632a0b:;
  /* 12632a0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632a0e mov dword ptr [0x1264ee38], edx */
  w32((uint32_t)(0x1264ee38), (EDX));
L_12632a14:;
  /* 12632a14 mov esp, ebp */
  ESP = (EBP);
  /* 12632a16 pop ebp */
  EBP = (pop32());
  /* 12632a17 ret  */
  ESPCHK(0x12632820u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a20 @ 0x12632a20 (382 bytes, 135 insns) */
void f_12632a20(void) {
  FTRACE(0x12632a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12632a21 mov ebp, esp */
  EBP = (ESP);
  /* 12632a23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632a25 push 0x1264b970 */
  push32((uint32_t)(0x1264b970u));
  /* 12632a2a push 0x1262c6e8 */
  push32((uint32_t)(0x1262c6e8u));
  /* 12632a2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12632a35 push eax */
  push32((uint32_t)(EAX));
  /* 12632a36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12632a3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632a40 push ebx */
  push32((uint32_t)(EBX));
  /* 12632a41 push esi */
  push32((uint32_t)(ESI));
  /* 12632a42 push edi */
  push32((uint32_t)(EDI));
  /* 12632a43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12632a46 cmp dword ptr [0x1264f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632a4d jne 0x12632a92 */
  if (!C.zf) goto L_12632a92;
  /* 12632a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12632a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12632a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632a57 call dword ptr [0x12652260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652260))), 0x12632a5du);
  /* 12632a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632a5f je 0x12632a6d */
  if (C.zf) goto L_12632a6d;
  /* 12632a61 mov dword ptr [0x1264f86c], 1 */
  w32((uint32_t)(0x1264f86c), (0x1u));
  /* 12632a6b jmp 0x12632a92 */
  goto L_12632a92;
L_12632a6d:;
  /* 12632a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12632a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12632a71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12632a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632a75 call dword ptr [0x12652278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652278))), 0x12632a7bu);
  /* 12632a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632a7d je 0x12632a8b */
  if (C.zf) goto L_12632a8b;
  /* 12632a7f mov dword ptr [0x1264f86c], 2 */
  w32((uint32_t)(0x1264f86c), (0x2u));
  /* 12632a89 jmp 0x12632a92 */
  goto L_12632a92;
L_12632a8b:;
  /* 12632a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632a8d jmp 0x12632ba1 */
  goto L_12632ba1;
L_12632a92:;
  /* 12632a92 cmp dword ptr [0x1264f86c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f86c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632a99 jne 0x12632ab6 */
  if (!C.zf) goto L_12632ab6;
  /* 12632a9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12632a9e push eax */
  push32((uint32_t)(EAX));
  /* 12632a9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 12632aa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12632aa6 push edx */
  push32((uint32_t)(EDX));
  /* 12632aa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632aaa push eax */
  push32((uint32_t)(EAX));
  /* 12632aab call dword ptr [0x12652260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652260))), 0x12632ab1u);
  /* 12632ab1 jmp 0x12632ba1 */
  goto L_12632ba1;
L_12632ab6:;
  /* 12632ab6 cmp dword ptr [0x1264f86c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f86c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632abd jne 0x12632b9f */
  if (!C.zf) goto L_12632b9f;
  /* 12632ac3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632ac7 jne 0x12632ad2 */
  if (!C.zf) goto L_12632ad2;
  /* 12632ac9 mov ecx, dword ptr [0x1264f720] */
  ECX = (r32((uint32_t)(0x1264f720)));
  /* 12632acf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12632ad2:;
  /* 12632ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632ad6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12632ad9 push edx */
  push32((uint32_t)(EDX));
  /* 12632ada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632add push eax */
  push32((uint32_t)(EAX));
  /* 12632ade call dword ptr [0x12652278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652278))), 0x12632ae4u);
  /* 12632ae4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12632ae7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632aeb jne 0x12632af4 */
  if (!C.zf) goto L_12632af4;
  /* 12632aed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632aef jmp 0x12632ba1 */
  goto L_12632ba1;
L_12632af4:;
  /* 12632af4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12632afb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12632afe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632b01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12632b03 call 0x12626780 */
  push32(0x12632b08u); f_12626780();
  /* 12632b08 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12632b0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12632b0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12632b11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12632b14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12632b1b jmp 0x12632b34 */
  goto L_12632b34;
  /* 12632b1d mov eax, 1 */
  EAX = (0x1u);
  /* 12632b22 ret  */
  ESPCHK(0x12632a20u, _esp0);
  ESP += 4; return;
  /* 12632b23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12632b26 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12632b2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12632b34:;
  /* 12632b34 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632b38 jne 0x12632b3e */
  if (!C.zf) goto L_12632b3e;
  /* 12632b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632b3c jmp 0x12632ba1 */
  goto L_12632ba1;
L_12632b3e:;
  /* 12632b3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12632b41 push edx */
  push32((uint32_t)(EDX));
  /* 12632b42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12632b45 push eax */
  push32((uint32_t)(EAX));
  /* 12632b46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12632b49 push ecx */
  push32((uint32_t)(ECX));
  /* 12632b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632b4d push edx */
  push32((uint32_t)(EDX));
  /* 12632b4e call dword ptr [0x12652278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652278))), 0x12632b54u);
  /* 12632b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632b56 jne 0x12632b5c */
  if (!C.zf) goto L_12632b5c;
  /* 12632b58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632b5a jmp 0x12632ba1 */
  goto L_12632ba1;
L_12632b5c:;
  /* 12632b5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632b60 jne 0x12632b7d */
  if (!C.zf) goto L_12632b7d;
  /* 12632b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632b66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632b68 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12632b6b push eax */
  push32((uint32_t)(EAX));
  /* 12632b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12632b6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12632b71 push ecx */
  push32((uint32_t)(ECX));
  /* 12632b72 call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x12632b78u);
  /* 12632b78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12632b7b jmp 0x12632b9a */
  goto L_12632b9a;
L_12632b7d:;
  /* 12632b7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12632b80 push edx */
  push32((uint32_t)(EDX));
  /* 12632b81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632b84 push eax */
  push32((uint32_t)(EAX));
  /* 12632b85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632b87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12632b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12632b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 12632b8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12632b90 push edx */
  push32((uint32_t)(EDX));
  /* 12632b91 call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x12632b97u);
  /* 12632b97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12632b9a:;
  /* 12632b9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12632b9d jmp 0x12632ba1 */
  goto L_12632ba1;
L_12632b9f:;
  /* 12632b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12632ba1:;
  /* 12632ba1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12632ba4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12632ba7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12632bae pop edi */
  EDI = (pop32());
  /* 12632baf pop esi */
  ESI = (pop32());
  /* 12632bb0 pop ebx */
  EBX = (pop32());
  /* 12632bb1 mov esp, ebp */
  ESP = (EBP);
  /* 12632bb3 pop ebp */
  EBP = (pop32());
  /* 12632bb4 ret  */
  ESPCHK(0x12632a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bc0 @ 0x12632bc0 (398 bytes, 140 insns) */
void f_12632bc0(void) {
  FTRACE(0x12632bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12632bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12632bc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632bc5 push 0x1264b980 */
  push32((uint32_t)(0x1264b980u));
  /* 12632bca push 0x1262c6e8 */
  push32((uint32_t)(0x1262c6e8u));
  /* 12632bcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12632bd5 push eax */
  push32((uint32_t)(EAX));
  /* 12632bd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12632bdd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632be0 push ebx */
  push32((uint32_t)(EBX));
  /* 12632be1 push esi */
  push32((uint32_t)(ESI));
  /* 12632be2 push edi */
  push32((uint32_t)(EDI));
  /* 12632be3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12632be6 cmp dword ptr [0x1264f870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632bed jne 0x12632c32 */
  if (!C.zf) goto L_12632c32;
  /* 12632bef push 0 */
  push32((uint32_t)(0x0u));
  /* 12632bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12632bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632bf7 call dword ptr [0x12652260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652260))), 0x12632bfdu);
  /* 12632bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632bff je 0x12632c0d */
  if (C.zf) goto L_12632c0d;
  /* 12632c01 mov dword ptr [0x1264f870], 1 */
  w32((uint32_t)(0x1264f870), (0x1u));
  /* 12632c0b jmp 0x12632c32 */
  goto L_12632c32;
L_12632c0d:;
  /* 12632c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12632c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12632c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12632c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632c15 call dword ptr [0x12652278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652278))), 0x12632c1bu);
  /* 12632c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632c1d je 0x12632c2b */
  if (C.zf) goto L_12632c2b;
  /* 12632c1f mov dword ptr [0x1264f870], 2 */
  w32((uint32_t)(0x1264f870), (0x2u));
  /* 12632c29 jmp 0x12632c32 */
  goto L_12632c32;
L_12632c2b:;
  /* 12632c2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632c2d jmp 0x12632d51 */
  goto L_12632d51;
L_12632c32:;
  /* 12632c32 cmp dword ptr [0x1264f870], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f870))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632c39 jne 0x12632c56 */
  if (!C.zf) goto L_12632c56;
  /* 12632c3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12632c3e push eax */
  push32((uint32_t)(EAX));
  /* 12632c3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632c42 push ecx */
  push32((uint32_t)(ECX));
  /* 12632c43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12632c46 push edx */
  push32((uint32_t)(EDX));
  /* 12632c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632c4a push eax */
  push32((uint32_t)(EAX));
  /* 12632c4b call dword ptr [0x12652278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652278))), 0x12632c51u);
  /* 12632c51 jmp 0x12632d51 */
  goto L_12632d51;
L_12632c56:;
  /* 12632c56 cmp dword ptr [0x1264f870], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f870))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632c5d jne 0x12632d4f */
  if (!C.zf) goto L_12632d4f;
  /* 12632c63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632c67 jne 0x12632c72 */
  if (!C.zf) goto L_12632c72;
  /* 12632c69 mov ecx, dword ptr [0x1264f720] */
  ECX = (r32((uint32_t)(0x1264f720)));
  /* 12632c6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12632c72:;
  /* 12632c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632c76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12632c79 push edx */
  push32((uint32_t)(EDX));
  /* 12632c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632c7d push eax */
  push32((uint32_t)(EAX));
  /* 12632c7e call dword ptr [0x12652260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652260))), 0x12632c84u);
  /* 12632c84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12632c87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632c8b jne 0x12632c94 */
  if (!C.zf) goto L_12632c94;
  /* 12632c8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632c8f jmp 0x12632d51 */
  goto L_12632d51;
L_12632c94:;
  /* 12632c94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12632c9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12632c9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12632ca0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632ca3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12632ca5 call 0x12626780 */
  push32(0x12632caau); f_12626780();
  /* 12632caa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12632cad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12632cb0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12632cb3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12632cb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12632cbd jmp 0x12632cd6 */
  goto L_12632cd6;
  /* 12632cbf mov eax, 1 */
  EAX = (0x1u);
  /* 12632cc4 ret  */
  ESPCHK(0x12632bc0u, _esp0);
  ESP += 4; return;
  /* 12632cc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12632cc8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12632ccf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12632cd6:;
  /* 12632cd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632cda jne 0x12632ce0 */
  if (!C.zf) goto L_12632ce0;
  /* 12632cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632cde jmp 0x12632d51 */
  goto L_12632d51;
L_12632ce0:;
  /* 12632ce0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12632ce3 push edx */
  push32((uint32_t)(EDX));
  /* 12632ce4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12632ce7 push eax */
  push32((uint32_t)(EAX));
  /* 12632ce8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12632ceb push ecx */
  push32((uint32_t)(ECX));
  /* 12632cec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632cef push edx */
  push32((uint32_t)(EDX));
  /* 12632cf0 call dword ptr [0x12652260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652260))), 0x12632cf6u);
  /* 12632cf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632cf8 jne 0x12632cfe */
  if (!C.zf) goto L_12632cfe;
  /* 12632cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632cfc jmp 0x12632d51 */
  goto L_12632d51;
L_12632cfe:;
  /* 12632cfe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632d02 jne 0x12632d26 */
  if (!C.zf) goto L_12632d26;
  /* 12632d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12632d0c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632d0e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12632d11 push eax */
  push32((uint32_t)(EAX));
  /* 12632d12 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12632d17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12632d1a push ecx */
  push32((uint32_t)(ECX));
  /* 12632d1b call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12632d21u);
  /* 12632d21 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12632d24 jmp 0x12632d4a */
  goto L_12632d4a;
L_12632d26:;
  /* 12632d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12632d2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12632d2d push edx */
  push32((uint32_t)(EDX));
  /* 12632d2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12632d31 push eax */
  push32((uint32_t)(EAX));
  /* 12632d32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12632d34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12632d37 push ecx */
  push32((uint32_t)(ECX));
  /* 12632d38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12632d3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12632d40 push edx */
  push32((uint32_t)(EDX));
  /* 12632d41 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12632d47u);
  /* 12632d47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12632d4a:;
  /* 12632d4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12632d4d jmp 0x12632d51 */
  goto L_12632d51;
L_12632d4f:;
  /* 12632d4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12632d51:;
  /* 12632d51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12632d54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12632d57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12632d5e pop edi */
  EDI = (pop32());
  /* 12632d5f pop esi */
  ESI = (pop32());
  /* 12632d60 pop ebx */
  EBX = (pop32());
  /* 12632d61 mov esp, ebp */
  ESP = (EBP);
  /* 12632d63 pop ebp */
  EBP = (pop32());
  /* 12632d64 ret  */
  ESPCHK(0x12632bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x12632d70 (11 bytes, 6 insns) */
void f_12632d70(void) {
  FTRACE(0x12632d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12632d71 mov ebp, esp */
  EBP = (ESP);
  /* 12632d73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632d76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632d79 pop ebp */
  EBP = (pop32());
  /* 12632d7a ret  */
  ESPCHK(0x12632d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x12632d80 (147 bytes, 43 insns) */
void f_12632d80(void) {
  FTRACE(0x12632d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12632d81 mov ebp, esp */
  EBP = (ESP);
  /* 12632d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12632d84 cmp dword ptr [0x1264f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632d8b jne 0x12632da7 */
  if (!C.zf) goto L_12632da7;
  /* 12632d8d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632d91 jl 0x12632da2 */
  if ((C.sf!=C.of)) goto L_12632da2;
  /* 12632d93 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632d97 jg 0x12632da2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12632da2;
  /* 12632d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632d9c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632d9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12632da2:;
  /* 12632da2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632da5 jmp 0x12632e0f */
  goto L_12632e0f;
L_12632da7:;
  /* 12632da7 push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 12632dac call dword ptr [0x126522c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c0))), 0x12632db2u);
  /* 12632db2 cmp dword ptr [0x1264f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632db9 je 0x12632dd9 */
  if (C.zf) goto L_12632dd9;
  /* 12632dbb push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 12632dc0 call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x12632dc6u);
  /* 12632dc6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12632dc8 call 0x12626fe0 */
  push32(0x12632dcdu); f_12626fe0();
  /* 12632dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632dd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12632dd7 jmp 0x12632de0 */
  goto L_12632de0;
L_12632dd9:;
  /* 12632dd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12632de0:;
  /* 12632de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12632de4 call 0x12632e20 */
  push32(0x12632de9u); f_12632e20();
  /* 12632de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632dec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12632def cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632df3 je 0x12632e01 */
  if (C.zf) goto L_12632e01;
  /* 12632df5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12632df7 call 0x12627080 */
  push32(0x12632dfcu); f_12627080();
  /* 12632dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632dff jmp 0x12632e0c */
  goto L_12632e0c;
L_12632e01:;
  /* 12632e01 push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 12632e06 call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x12632e0cu);
L_12632e0c:;
  /* 12632e0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12632e0f:;
  /* 12632e0f mov esp, ebp */
  ESP = (EBP);
  /* 12632e11 pop ebp */
  EBP = (pop32());
  /* 12632e12 ret  */
  ESPCHK(0x12632d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x12632e20 (299 bytes, 91 insns) */
void f_12632e20(void) {
  FTRACE(0x12632e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12632e21 mov ebp, esp */
  EBP = (ESP);
  /* 12632e23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632e26 cmp dword ptr [0x1264f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632e2d jne 0x12632e4c */
  if (!C.zf) goto L_12632e4c;
  /* 12632e2f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632e33 jl 0x12632e44 */
  if ((C.sf!=C.of)) goto L_12632e44;
  /* 12632e35 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632e39 jg 0x12632e44 */
  if ((!C.zf&&C.sf==C.of)) goto L_12632e44;
  /* 12632e3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632e3e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632e41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12632e44:;
  /* 12632e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632e47 jmp 0x12632f47 */
  goto L_12632f47;
L_12632e4c:;
  /* 12632e4c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632e53 jge 0x12632e93 */
  if ((C.sf==C.of)) goto L_12632e93;
  /* 12632e55 cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632e5c jle 0x12632e71 */
  if ((C.zf||C.sf!=C.of)) goto L_12632e71;
  /* 12632e5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12632e60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12632e64 call 0x126295f0 */
  push32(0x12632e69u); f_126295f0();
  /* 12632e69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632e6c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12632e6f jmp 0x12632e85 */
  goto L_12632e85;
L_12632e71:;
  /* 12632e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632e74 mov eax, dword ptr [0x1264dc98] */
  EAX = (r32((uint32_t)(0x1264dc98)));
  /* 12632e79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12632e7b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12632e7f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12632e82 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12632e85:;
  /* 12632e85 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632e89 jne 0x12632e93 */
  if (!C.zf) goto L_12632e93;
  /* 12632e8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632e8e jmp 0x12632f47 */
  goto L_12632f47;
L_12632e93:;
  /* 12632e93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632e96 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12632e99 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12632e9f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12632ea5 mov eax, dword ptr [0x1264dc98] */
  EAX = (r32((uint32_t)(0x1264dc98)));
  /* 12632eaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12632eac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12632eb0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12632eb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12632eb8 je 0x12632edc */
  if (C.zf) goto L_12632edc;
  /* 12632eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632ebd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12632ec0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12632ec6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12632ec9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12632ecc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12632ecf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12632ed3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12632eda jmp 0x12632eed */
  goto L_12632eed;
L_12632edc:;
  /* 12632edc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12632edf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12632ee2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12632ee6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12632eed:;
  /* 12632eed push 1 */
  push32((uint32_t)(0x1u));
  /* 12632eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12632ef1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12632ef3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12632ef6 push edx */
  push32((uint32_t)(EDX));
  /* 12632ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632efa push eax */
  push32((uint32_t)(EAX));
  /* 12632efb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12632efe push ecx */
  push32((uint32_t)(ECX));
  /* 12632eff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12632f04 mov edx, dword ptr [0x1264f710] */
  EDX = (r32((uint32_t)(0x1264f710)));
  /* 12632f0a push edx */
  push32((uint32_t)(EDX));
  /* 12632f0b call 0x1262b9d0 */
  push32(0x12632f10u); f_1262b9d0();
  /* 12632f10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632f13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12632f16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632f1a jne 0x12632f21 */
  if (!C.zf) goto L_12632f21;
  /* 12632f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632f1f jmp 0x12632f47 */
  goto L_12632f47;
L_12632f21:;
  /* 12632f21 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632f25 jne 0x12632f31 */
  if (!C.zf) goto L_12632f31;
  /* 12632f27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632f2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12632f2f jmp 0x12632f47 */
  goto L_12632f47;
L_12632f31:;
  /* 12632f31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12632f34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12632f39 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12632f3c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12632f42 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12632f45 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12632f47:;
  /* 12632f47 mov esp, ebp */
  ESP = (EBP);
  /* 12632f49 pop ebp */
  EBP = (pop32());
  /* 12632f4a ret  */
  ESPCHK(0x12632e20u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12632f50 (52 bytes, 19 insns) */
void f_12632f50(void) {
  FTRACE(0x12632f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632f50 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12632f54 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12632f58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12632f5a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12632f5e jne 0x12632f69 */
  if (!C.zf) goto L_12632f69;
  /* 12632f60 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12632f64 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12632f66 ret 0x10 */
  ESPCHK(0x12632f50u, _esp0);
  ESP += 20; return;
L_12632f69:;
  /* 12632f69 push ebx */
  push32((uint32_t)(EBX));
  /* 12632f6a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12632f6c mov ebx, eax */
  EBX = (EAX);
  /* 12632f6e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12632f72 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12632f76 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632f78 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12632f7c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12632f7e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12632f80 pop ebx */
  EBX = (pop32());
  /* 12632f81 ret 0x10 */
  ESPCHK(0x12632f50u, _esp0);
  ESP += 20; return;
}

/* FUN_10012f90 @ 0x12632f90 (46 bytes, 18 insns) */
void f_12632f90(void) {
  FTRACE(0x12632f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12632f91 mov ebp, esp */
  EBP = (ESP);
  /* 12632f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12632f94 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12632f96 call 0x12626fe0 */
  push32(0x12632f9bu); f_12626fe0();
  /* 12632f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632f9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12632fa1 push eax */
  push32((uint32_t)(EAX));
  /* 12632fa2 call 0x12632fc0 */
  push32(0x12632fa7u); f_12632fc0();
  /* 12632fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632faa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12632fad push 0xc */
  push32((uint32_t)(0xcu));
  /* 12632faf call 0x12627080 */
  push32(0x12632fb4u); f_12627080();
  /* 12632fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12632fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12632fba mov esp, ebp */
  ESP = (EBP);
  /* 12632fbc pop ebp */
  EBP = (pop32());
  /* 12632fbd ret  */
  ESPCHK(0x12632f90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12632fc0 (198 bytes, 69 insns) */
void f_12632fc0(void) {
  FTRACE(0x12632fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12632fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12632fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12632fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12632fc6 mov eax, dword ptr [0x1264f52c] */
  EAX = (r32((uint32_t)(0x1264f52c)));
  /* 12632fcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12632fce cmp dword ptr [0x12651020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12651020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632fd5 jne 0x12632fde */
  if (!C.zf) goto L_12632fde;
  /* 12632fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632fd9 jmp 0x12633082 */
  goto L_12633082;
L_12632fde:;
  /* 12632fde cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632fe2 jne 0x12633006 */
  if (!C.zf) goto L_12633006;
  /* 12632fe4 cmp dword ptr [0x1264f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12632feb je 0x12633006 */
  if (C.zf) goto L_12633006;
  /* 12632fed call 0x126330e0 */
  push32(0x12632ff2u); f_126330e0();
  /* 12632ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12632ff4 je 0x12632ffd */
  if (C.zf) goto L_12632ffd;
  /* 12632ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12632ff8 jmp 0x12633082 */
  goto L_12633082;
L_12632ffd:;
  /* 12632ffd mov ecx, dword ptr [0x1264f52c] */
  ECX = (r32((uint32_t)(0x1264f52c)));
  /* 12633003 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12633006:;
  /* 12633006 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263300a je 0x12633080 */
  if (C.zf) goto L_12633080;
  /* 1263300c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633010 je 0x12633080 */
  if (C.zf) goto L_12633080;
  /* 12633012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633015 push edx */
  push32((uint32_t)(EDX));
  /* 12633016 call 0x12626410 */
  push32(0x1263301bu); f_12626410();
  /* 1263301b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263301e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12633021:;
  /* 12633021 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633024 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633027 je 0x12633080 */
  if (C.zf) goto L_12633080;
  /* 12633029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263302c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1263302e push edx */
  push32((uint32_t)(EDX));
  /* 1263302f call 0x12626410 */
  push32(0x12633034u); f_12626410();
  /* 12633034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633037 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263303a jbe 0x12633075 */
  if ((C.cf||C.zf)) goto L_12633075;
  /* 1263303c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263303f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12633041 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633044 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12633048 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263304b jne 0x12633075 */
  if (!C.zf) goto L_12633075;
  /* 1263304d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633050 push ecx */
  push32((uint32_t)(ECX));
  /* 12633051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633054 push edx */
  push32((uint32_t)(EDX));
  /* 12633055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633058 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1263305a push ecx */
  push32((uint32_t)(ECX));
  /* 1263305b call 0x12633090 */
  push32(0x12633060u); f_12633090();
  /* 12633060 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12633065 jne 0x12633075 */
  if (!C.zf) goto L_12633075;
  /* 12633067 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263306a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1263306c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263306f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12633073 jmp 0x12633082 */
  goto L_12633082;
L_12633075:;
  /* 12633075 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633078 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263307b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1263307e jmp 0x12633021 */
  goto L_12633021;
L_12633080:;
  /* 12633080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12633082:;
  /* 12633082 mov esp, ebp */
  ESP = (EBP);
  /* 12633084 pop ebp */
  EBP = (pop32());
  /* 12633085 ret  */
  ESPCHK(0x12632fc0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12633090 (79 bytes, 32 insns) */
void f_12633090(void) {
  FTRACE(0x12633090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633090 push ebp */
  push32((uint32_t)(EBP));
  /* 12633091 mov ebp, esp */
  EBP = (ESP);
  /* 12633093 push ecx */
  push32((uint32_t)(ECX));
  /* 12633094 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633098 jne 0x1263309e */
  if (!C.zf) goto L_1263309e;
  /* 1263309a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263309c jmp 0x126330db */
  goto L_126330db;
L_1263309e:;
  /* 1263309e mov eax, dword ptr [0x12650be4] */
  EAX = (r32((uint32_t)(0x12650be4)));
  /* 126330a3 push eax */
  push32((uint32_t)(EAX));
  /* 126330a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126330a7 push ecx */
  push32((uint32_t)(ECX));
  /* 126330a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126330ab push edx */
  push32((uint32_t)(EDX));
  /* 126330ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126330af push eax */
  push32((uint32_t)(EAX));
  /* 126330b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126330b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126330b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 126330b6 mov edx, dword ptr [0x12650e84] */
  EDX = (r32((uint32_t)(0x12650e84)));
  /* 126330bc push edx */
  push32((uint32_t)(EDX));
  /* 126330bd call 0x12633190 */
  push32(0x126330c2u); f_12633190();
  /* 126330c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126330c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126330c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126330cc jne 0x126330d5 */
  if (!C.zf) goto L_126330d5;
  /* 126330ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 126330d3 jmp 0x126330db */
  goto L_126330db;
L_126330d5:;
  /* 126330d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126330d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_126330db:;
  /* 126330db mov esp, ebp */
  ESP = (EBP);
  /* 126330dd pop ebp */
  EBP = (pop32());
  /* 126330de ret  */
  ESPCHK(0x12633090u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x126330e0 (174 bytes, 66 insns) */
void f_126330e0(void) {
  FTRACE(0x126330e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126330e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126330e1 mov ebp, esp */
  EBP = (ESP);
  /* 126330e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126330e6 mov eax, dword ptr [0x1264f534] */
  EAX = (r32((uint32_t)(0x1264f534)));
  /* 126330eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126330ee:;
  /* 126330ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126330f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126330f4 je 0x12633188 */
  if (C.zf) goto L_12633188;
  /* 126330fa push 0 */
  push32((uint32_t)(0x0u));
  /* 126330fc push 0 */
  push32((uint32_t)(0x0u));
  /* 126330fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12633100 push 0 */
  push32((uint32_t)(0x0u));
  /* 12633102 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12633104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633107 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12633109 push eax */
  push32((uint32_t)(EAX));
  /* 1263310a push 0 */
  push32((uint32_t)(0x0u));
  /* 1263310c push 1 */
  push32((uint32_t)(0x1u));
  /* 1263310e call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12633114u);
  /* 12633114 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12633117 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263311b jne 0x12633122 */
  if (!C.zf) goto L_12633122;
  /* 1263311d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12633120 jmp 0x1263318a */
  goto L_1263318a;
L_12633122:;
  /* 12633122 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12633124 push 0x1264b98c */
  push32((uint32_t)(0x1264b98cu));
  /* 12633129 push 2 */
  push32((uint32_t)(0x2u));
  /* 1263312b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263312e push ecx */
  push32((uint32_t)(ECX));
  /* 1263312f call 0x126235e0 */
  push32(0x12633134u); f_126235e0();
  /* 12633134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633137 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1263313a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263313e jne 0x12633145 */
  if (!C.zf) goto L_12633145;
  /* 12633140 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12633143 jmp 0x1263318a */
  goto L_1263318a;
L_12633145:;
  /* 12633145 push 0 */
  push32((uint32_t)(0x0u));
  /* 12633147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12633149 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263314c push edx */
  push32((uint32_t)(EDX));
  /* 1263314d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633150 push eax */
  push32((uint32_t)(EAX));
  /* 12633151 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12633153 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633156 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12633158 push edx */
  push32((uint32_t)(EDX));
  /* 12633159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1263315b push 1 */
  push32((uint32_t)(0x1u));
  /* 1263315d call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12633163u);
  /* 12633163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12633165 jne 0x1263316c */
  if (!C.zf) goto L_1263316c;
  /* 12633167 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1263316a jmp 0x1263318a */
  goto L_1263318a;
L_1263316c:;
  /* 1263316c push 0 */
  push32((uint32_t)(0x0u));
  /* 1263316e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633171 push eax */
  push32((uint32_t)(EAX));
  /* 12633172 call 0x126335e0 */
  push32(0x12633177u); f_126335e0();
  /* 12633177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263317a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263317d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633180 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12633183 jmp 0x126330ee */
  goto L_126330ee;
L_12633188:;
  /* 12633188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1263318a:;
  /* 1263318a mov esp, ebp */
  ESP = (EBP);
  /* 1263318c pop ebp */
  EBP = (pop32());
  /* 1263318d ret  */
  ESPCHK(0x126330e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013190 @ 0x12633190 (970 bytes, 340 insns) */
void f_12633190(void) {
  FTRACE(0x12633190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633190 push ebp */
  push32((uint32_t)(EBP));
  /* 12633191 mov ebp, esp */
  EBP = (ESP);
  /* 12633193 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12633195 push 0x1264b9e0 */
  push32((uint32_t)(0x1264b9e0u));
  /* 1263319a push 0x1262c6e8 */
  push32((uint32_t)(0x1262c6e8u));
  /* 1263319f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 126331a5 push eax */
  push32((uint32_t)(EAX));
  /* 126331a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 126331ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126331b0 push ebx */
  push32((uint32_t)(EBX));
  /* 126331b1 push esi */
  push32((uint32_t)(ESI));
  /* 126331b2 push edi */
  push32((uint32_t)(EDI));
  /* 126331b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 126331b6 cmp dword ptr [0x1264f874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126331bd jne 0x12633216 */
  if (!C.zf) goto L_12633216;
  /* 126331bf push 1 */
  push32((uint32_t)(0x1u));
  /* 126331c1 push 0x1264b03c */
  push32((uint32_t)(0x1264b03cu));
  /* 126331c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 126331c8 push 0x1264b03c */
  push32((uint32_t)(0x1264b03cu));
  /* 126331cd push 0 */
  push32((uint32_t)(0x0u));
  /* 126331cf push 0 */
  push32((uint32_t)(0x0u));
  /* 126331d1 call dword ptr [0x12652258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652258))), 0x126331d7u);
  /* 126331d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126331d9 je 0x126331e7 */
  if (C.zf) goto L_126331e7;
  /* 126331db mov dword ptr [0x1264f874], 1 */
  w32((uint32_t)(0x1264f874), (0x1u));
  /* 126331e5 jmp 0x12633216 */
  goto L_12633216;
L_126331e7:;
  /* 126331e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126331e9 push 0x1264b038 */
  push32((uint32_t)(0x1264b038u));
  /* 126331ee push 1 */
  push32((uint32_t)(0x1u));
  /* 126331f0 push 0x1264b038 */
  push32((uint32_t)(0x1264b038u));
  /* 126331f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126331f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126331f9 call dword ptr [0x1265225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265225c))), 0x126331ffu);
  /* 126331ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12633201 je 0x1263320f */
  if (C.zf) goto L_1263320f;
  /* 12633203 mov dword ptr [0x1264f874], 2 */
  w32((uint32_t)(0x1264f874), (0x2u));
  /* 1263320d jmp 0x12633216 */
  goto L_12633216;
L_1263320f:;
  /* 1263320f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633211 jmp 0x12633574 */
  goto L_12633574;
L_12633216:;
  /* 12633216 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263321a jle 0x1263322f */
  if ((C.zf||C.sf!=C.of)) goto L_1263322f;
  /* 1263321c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263321f push eax */
  push32((uint32_t)(EAX));
  /* 12633220 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12633223 push ecx */
  push32((uint32_t)(ECX));
  /* 12633224 call 0x12633590 */
  push32(0x12633229u); f_12633590();
  /* 12633229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263322c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1263322f:;
  /* 1263322f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633233 jle 0x12633248 */
  if ((C.zf||C.sf!=C.of)) goto L_12633248;
  /* 12633235 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12633238 push edx */
  push32((uint32_t)(EDX));
  /* 12633239 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1263323c push eax */
  push32((uint32_t)(EAX));
  /* 1263323d call 0x12633590 */
  push32(0x12633242u); f_12633590();
  /* 12633242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633245 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12633248:;
  /* 12633248 cmp dword ptr [0x1264f874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263324f jne 0x12633274 */
  if (!C.zf) goto L_12633274;
  /* 12633251 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12633254 push ecx */
  push32((uint32_t)(ECX));
  /* 12633255 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12633258 push edx */
  push32((uint32_t)(EDX));
  /* 12633259 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263325c push eax */
  push32((uint32_t)(EAX));
  /* 1263325d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12633260 push ecx */
  push32((uint32_t)(ECX));
  /* 12633261 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12633264 push edx */
  push32((uint32_t)(EDX));
  /* 12633265 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633268 push eax */
  push32((uint32_t)(EAX));
  /* 12633269 call dword ptr [0x1265225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265225c))), 0x1263326fu);
  /* 1263326f jmp 0x12633574 */
  goto L_12633574;
L_12633274:;
  /* 12633274 cmp dword ptr [0x1264f874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263327b jne 0x12633572 */
  if (!C.zf) goto L_12633572;
  /* 12633281 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633285 jne 0x12633290 */
  if (!C.zf) goto L_12633290;
  /* 12633287 mov ecx, dword ptr [0x1264f720] */
  ECX = (r32((uint32_t)(0x1264f720)));
  /* 1263328d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12633290:;
  /* 12633290 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633294 je 0x126332a0 */
  if (C.zf) goto L_126332a0;
  /* 12633296 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263329a jne 0x1263341c */
  if (!C.zf) goto L_1263341c;
L_126332a0:;
  /* 126332a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126332a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126332a6 jne 0x126332b2 */
  if (!C.zf) goto L_126332b2;
  /* 126332a8 mov eax, 2 */
  EAX = (0x2u);
  /* 126332ad jmp 0x12633574 */
  goto L_12633574;
L_126332b2:;
  /* 126332b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126332b6 jle 0x126332c2 */
  if ((C.zf||C.sf!=C.of)) goto L_126332c2;
  /* 126332b8 mov eax, 1 */
  EAX = (0x1u);
  /* 126332bd jmp 0x12633574 */
  goto L_12633574;
L_126332c2:;
  /* 126332c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126332c6 jle 0x126332d2 */
  if ((C.zf||C.sf!=C.of)) goto L_126332d2;
  /* 126332c8 mov eax, 3 */
  EAX = (0x3u);
  /* 126332cd jmp 0x12633574 */
  goto L_12633574;
L_126332d2:;
  /* 126332d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 126332d5 push eax */
  push32((uint32_t)(EAX));
  /* 126332d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 126332d9 push ecx */
  push32((uint32_t)(ECX));
  /* 126332da call dword ptr [0x12652354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652354))), 0x126332e0u);
  /* 126332e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126332e2 jne 0x126332eb */
  if (!C.zf) goto L_126332eb;
  /* 126332e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126332e6 jmp 0x12633574 */
  goto L_12633574;
L_126332eb:;
  /* 126332eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126332ef jne 0x126332f7 */
  if (!C.zf) goto L_126332f7;
  /* 126332f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126332f5 je 0x12633324 */
  if (C.zf) goto L_12633324;
L_126332f7:;
  /* 126332f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126332fb jne 0x12633303 */
  if (!C.zf) goto L_12633303;
  /* 126332fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633301 je 0x12633324 */
  if (C.zf) goto L_12633324;
L_12633303:;
  /* 12633303 push 0x1264b9a0 */
  push32((uint32_t)(0x1264b9a0u));
  /* 12633308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1263330a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1263330f push 0x1264b998 */
  push32((uint32_t)(0x1264b998u));
  /* 12633314 push 2 */
  push32((uint32_t)(0x2u));
  /* 12633316 call 0x126226a0 */
  push32(0x1263331bu); f_126226a0();
  /* 1263331b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263331e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633321 jne 0x12633324 */
  if (!C.zf) goto L_12633324;
  /* 12633323 int3  */
  x86_unimpl("int3 @ 0x12633323");
L_12633324:;
  /* 12633324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12633326 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12633328 jne 0x126332eb */
  if (!C.zf) goto L_126332eb;
  /* 1263332a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263332e jle 0x126333a3 */
  if ((C.zf||C.sf!=C.of)) goto L_126333a3;
  /* 12633330 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633334 jae 0x12633340 */
  if (!C.cf) goto L_12633340;
  /* 12633336 mov eax, 3 */
  EAX = (0x3u);
  /* 1263333b jmp 0x12633574 */
  goto L_12633574;
L_12633340:;
  /* 12633340 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12633343 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12633346 jmp 0x12633351 */
  goto L_12633351;
L_12633348:;
  /* 12633348 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1263334b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263334e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12633351:;
  /* 12633351 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12633354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633356 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12633358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1263335a je 0x12633399 */
  if (C.zf) goto L_12633399;
  /* 1263335c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1263335f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12633361 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12633364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12633366 je 0x12633399 */
  if (C.zf) goto L_12633399;
  /* 12633368 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263336b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1263336d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1263336f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12633372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633374 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12633376 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633378 jl 0x12633397 */
  if ((C.sf!=C.of)) goto L_12633397;
  /* 1263337a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263337d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1263337f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12633381 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12633384 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12633386 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12633389 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263338b jg 0x12633397 */
  if ((!C.zf&&C.sf==C.of)) goto L_12633397;
  /* 1263338d mov eax, 2 */
  EAX = (0x2u);
  /* 12633392 jmp 0x12633574 */
  goto L_12633574;
L_12633397:;
  /* 12633397 jmp 0x12633348 */
  goto L_12633348;
L_12633399:;
  /* 12633399 mov eax, 3 */
  EAX = (0x3u);
  /* 1263339e jmp 0x12633574 */
  goto L_12633574;
L_126333a3:;
  /* 126333a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126333a7 jle 0x1263341c */
  if ((C.zf||C.sf!=C.of)) goto L_1263341c;
  /* 126333a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126333ad jae 0x126333b9 */
  if (!C.cf) goto L_126333b9;
  /* 126333af mov eax, 1 */
  EAX = (0x1u);
  /* 126333b4 jmp 0x12633574 */
  goto L_12633574;
L_126333b9:;
  /* 126333b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 126333bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 126333bf jmp 0x126333ca */
  goto L_126333ca;
L_126333c1:;
  /* 126333c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 126333c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126333c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_126333ca:;
  /* 126333ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 126333cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126333cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126333d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126333d3 je 0x12633412 */
  if (C.zf) goto L_12633412;
  /* 126333d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 126333d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126333da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 126333dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126333df je 0x12633412 */
  if (C.zf) goto L_12633412;
  /* 126333e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126333e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126333e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126333e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 126333eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126333ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126333ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126333f1 jl 0x12633410 */
  if ((C.sf!=C.of)) goto L_12633410;
  /* 126333f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126333f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126333f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126333fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 126333fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126333ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12633402 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633404 jg 0x12633410 */
  if ((!C.zf&&C.sf==C.of)) goto L_12633410;
  /* 12633406 mov eax, 2 */
  EAX = (0x2u);
  /* 1263340b jmp 0x12633574 */
  goto L_12633574;
L_12633410:;
  /* 12633410 jmp 0x126333c1 */
  goto L_126333c1;
L_12633412:;
  /* 12633412 mov eax, 1 */
  EAX = (0x1u);
  /* 12633417 jmp 0x12633574 */
  goto L_12633574;
L_1263341c:;
  /* 1263341c push 0 */
  push32((uint32_t)(0x0u));
  /* 1263341e push 0 */
  push32((uint32_t)(0x0u));
  /* 12633420 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12633423 push ecx */
  push32((uint32_t)(ECX));
  /* 12633424 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12633427 push edx */
  push32((uint32_t)(EDX));
  /* 12633428 push 9 */
  push32((uint32_t)(0x9u));
  /* 1263342a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1263342d push eax */
  push32((uint32_t)(EAX));
  /* 1263342e call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x12633434u);
  /* 12633434 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12633437 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263343b jne 0x12633444 */
  if (!C.zf) goto L_12633444;
  /* 1263343d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263343f jmp 0x12633574 */
  goto L_12633574;
L_12633444:;
  /* 12633444 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1263344b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1263344e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12633450 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633453 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12633455 call 0x12626780 */
  push32(0x1263345au); f_12626780();
  /* 1263345a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1263345d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12633460 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12633463 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12633466 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1263346d jmp 0x12633486 */
  goto L_12633486;
  /* 1263346f mov eax, 1 */
  EAX = (0x1u);
  /* 12633474 ret  */
  ESPCHK(0x12633190u, _esp0);
  ESP += 4; return;
  /* 12633475 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12633478 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1263347f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12633486:;
  /* 12633486 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263348a jne 0x12633493 */
  if (!C.zf) goto L_12633493;
  /* 1263348c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263348e jmp 0x12633574 */
  goto L_12633574;
L_12633493:;
  /* 12633493 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12633496 push edx */
  push32((uint32_t)(EDX));
  /* 12633497 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1263349a push eax */
  push32((uint32_t)(EAX));
  /* 1263349b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263349e push ecx */
  push32((uint32_t)(ECX));
  /* 1263349f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126334a2 push edx */
  push32((uint32_t)(EDX));
  /* 126334a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 126334a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 126334a8 push eax */
  push32((uint32_t)(EAX));
  /* 126334a9 call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x126334afu);
  /* 126334af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126334b1 jne 0x126334ba */
  if (!C.zf) goto L_126334ba;
  /* 126334b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126334b5 jmp 0x12633574 */
  goto L_12633574;
L_126334ba:;
  /* 126334ba push 0 */
  push32((uint32_t)(0x0u));
  /* 126334bc push 0 */
  push32((uint32_t)(0x0u));
  /* 126334be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 126334c1 push ecx */
  push32((uint32_t)(ECX));
  /* 126334c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126334c5 push edx */
  push32((uint32_t)(EDX));
  /* 126334c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 126334c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 126334cb push eax */
  push32((uint32_t)(EAX));
  /* 126334cc call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x126334d2u);
  /* 126334d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 126334d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126334d9 jne 0x126334e2 */
  if (!C.zf) goto L_126334e2;
  /* 126334db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126334dd jmp 0x12633574 */
  goto L_12633574;
L_126334e2:;
  /* 126334e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 126334e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 126334ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 126334ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126334f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 126334f3 call 0x12626780 */
  push32(0x126334f8u); f_12626780();
  /* 126334f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 126334fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 126334fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12633501 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12633504 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1263350b jmp 0x12633524 */
  goto L_12633524;
  /* 1263350d mov eax, 1 */
  EAX = (0x1u);
  /* 12633512 ret  */
  ESPCHK(0x12633190u, _esp0);
  ESP += 4; return;
  /* 12633513 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12633516 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1263351d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12633524:;
  /* 12633524 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633528 jne 0x1263352e */
  if (!C.zf) goto L_1263352e;
  /* 1263352a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263352c jmp 0x12633574 */
  goto L_12633574;
L_1263352e:;
  /* 1263352e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12633531 push edx */
  push32((uint32_t)(EDX));
  /* 12633532 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12633535 push eax */
  push32((uint32_t)(EAX));
  /* 12633536 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12633539 push ecx */
  push32((uint32_t)(ECX));
  /* 1263353a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1263353d push edx */
  push32((uint32_t)(EDX));
  /* 1263353e push 1 */
  push32((uint32_t)(0x1u));
  /* 12633540 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12633543 push eax */
  push32((uint32_t)(EAX));
  /* 12633544 call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x1263354au);
  /* 1263354a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1263354c jne 0x12633552 */
  if (!C.zf) goto L_12633552;
  /* 1263354e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633550 jmp 0x12633574 */
  goto L_12633574;
L_12633552:;
  /* 12633552 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12633555 push ecx */
  push32((uint32_t)(ECX));
  /* 12633556 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12633559 push edx */
  push32((uint32_t)(EDX));
  /* 1263355a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1263355d push eax */
  push32((uint32_t)(EAX));
  /* 1263355e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12633561 push ecx */
  push32((uint32_t)(ECX));
  /* 12633562 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12633565 push edx */
  push32((uint32_t)(EDX));
  /* 12633566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633569 push eax */
  push32((uint32_t)(EAX));
  /* 1263356a call dword ptr [0x12652258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652258))), 0x12633570u);
  /* 12633570 jmp 0x12633574 */
  goto L_12633574;
L_12633572:;
  /* 12633572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12633574:;
  /* 12633574 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12633577 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263357a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12633581 pop edi */
  EDI = (pop32());
  /* 12633582 pop esi */
  ESI = (pop32());
  /* 12633583 pop ebx */
  EBX = (pop32());
  /* 12633584 mov esp, ebp */
  ESP = (EBP);
  /* 12633586 pop ebp */
  EBP = (pop32());
  /* 12633587 ret  */
  ESPCHK(0x12633190u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x12633590 (80 bytes, 32 insns) */
void f_12633590(void) {
  FTRACE(0x12633590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633590 push ebp */
  push32((uint32_t)(EBP));
  /* 12633591 mov ebp, esp */
  EBP = (ESP);
  /* 12633593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12633596 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12633599 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1263359c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263359f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126335a2:;
  /* 126335a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126335a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126335a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126335ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126335ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126335b0 je 0x126335c7 */
  if (C.zf) goto L_126335c7;
  /* 126335b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126335b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126335b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126335ba je 0x126335c7 */
  if (C.zf) goto L_126335c7;
  /* 126335bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126335bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126335c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126335c5 jmp 0x126335a2 */
  goto L_126335a2;
L_126335c7:;
  /* 126335c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126335ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126335cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126335cf jne 0x126335d9 */
  if (!C.zf) goto L_126335d9;
  /* 126335d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126335d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126335d7 jmp 0x126335dc */
  goto L_126335dc;
L_126335d9:;
  /* 126335d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_126335dc:;
  /* 126335dc mov esp, ebp */
  ESP = (EBP);
  /* 126335de pop ebp */
  EBP = (pop32());
  /* 126335df ret  */
  ESPCHK(0x12633590u, _esp0);
  ESP += 4; return;
}

/* FUN_100135e0 @ 0x126335e0 (736 bytes, 224 insns) */
void f_126335e0(void) {
  FTRACE(0x126335e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126335e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126335e1 mov ebp, esp */
  EBP = (ESP);
  /* 126335e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126335e6 push esi */
  push32((uint32_t)(ESI));
  /* 126335e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126335eb je 0x1263360c */
  if (C.zf) goto L_1263360c;
  /* 126335ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 126335ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126335f2 push eax */
  push32((uint32_t)(EAX));
  /* 126335f3 call 0x12633a30 */
  push32(0x126335f8u); f_12633a30();
  /* 126335f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126335fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126335fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633602 je 0x1263360c */
  if (C.zf) goto L_1263360c;
  /* 12633604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633607 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263360a jne 0x12633614 */
  if (!C.zf) goto L_12633614;
L_1263360c:;
  /* 1263360c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1263360f jmp 0x126338bb */
  goto L_126338bb;
L_12633614:;
  /* 12633614 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12633617 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1263361b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1263361d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263361f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12633620 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12633623 mov ecx, dword ptr [0x1264f52c] */
  ECX = (r32((uint32_t)(0x1264f52c)));
  /* 12633629 cmp ecx, dword ptr [0x1264f530] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264f530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263362f jne 0x12633645 */
  if (!C.zf) goto L_12633645;
  /* 12633631 mov edx, dword ptr [0x1264f52c] */
  EDX = (r32((uint32_t)(0x1264f52c)));
  /* 12633637 push edx */
  push32((uint32_t)(EDX));
  /* 12633638 call 0x12633940 */
  push32(0x1263363du); f_12633940();
  /* 1263363d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633640 mov dword ptr [0x1264f52c], eax */
  w32((uint32_t)(0x1264f52c), (EAX));
L_12633645:;
  /* 12633645 cmp dword ptr [0x1264f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263364c jne 0x12633705 */
  if (!C.zf) goto L_12633705;
  /* 12633652 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633656 je 0x12633677 */
  if (C.zf) goto L_12633677;
  /* 12633658 cmp dword ptr [0x1264f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263365f je 0x12633677 */
  if (C.zf) goto L_12633677;
  /* 12633661 call 0x126330e0 */
  push32(0x12633666u); f_126330e0();
  /* 12633666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12633668 je 0x12633672 */
  if (C.zf) goto L_12633672;
  /* 1263366a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1263366d jmp 0x126338bb */
  goto L_126338bb;
L_12633672:;
  /* 12633672 jmp 0x12633705 */
  goto L_12633705;
L_12633677:;
  /* 12633677 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263367b je 0x12633684 */
  if (C.zf) goto L_12633684;
  /* 1263367d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263367f jmp 0x126338bb */
  goto L_126338bb;
L_12633684:;
  /* 12633684 cmp dword ptr [0x1264f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263368b jne 0x126336c4 */
  if (!C.zf) goto L_126336c4;
  /* 1263368d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12633692 push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 12633697 push 2 */
  push32((uint32_t)(0x2u));
  /* 12633699 push 4 */
  push32((uint32_t)(0x4u));
  /* 1263369b call 0x126235e0 */
  push32(0x126336a0u); f_126235e0();
  /* 126336a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126336a3 mov dword ptr [0x1264f52c], eax */
  w32((uint32_t)(0x1264f52c), (EAX));
  /* 126336a8 cmp dword ptr [0x1264f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126336af jne 0x126336b9 */
  if (!C.zf) goto L_126336b9;
  /* 126336b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126336b4 jmp 0x126338bb */
  goto L_126338bb;
L_126336b9:;
  /* 126336b9 mov eax, dword ptr [0x1264f52c] */
  EAX = (r32((uint32_t)(0x1264f52c)));
  /* 126336be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_126336c4:;
  /* 126336c4 cmp dword ptr [0x1264f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126336cb jne 0x12633705 */
  if (!C.zf) goto L_12633705;
  /* 126336cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 126336d2 push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 126336d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 126336d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 126336db call 0x126235e0 */
  push32(0x126336e0u); f_126235e0();
  /* 126336e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126336e3 mov dword ptr [0x1264f534], eax */
  w32((uint32_t)(0x1264f534), (EAX));
  /* 126336e8 cmp dword ptr [0x1264f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126336ef jne 0x126336f9 */
  if (!C.zf) goto L_126336f9;
  /* 126336f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126336f4 jmp 0x126338bb */
  goto L_126338bb;
L_126336f9:;
  /* 126336f9 mov ecx, dword ptr [0x1264f534] */
  ECX = (r32((uint32_t)(0x1264f534)));
  /* 126336ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12633705:;
  /* 12633705 mov edx, dword ptr [0x1264f52c] */
  EDX = (r32((uint32_t)(0x1264f52c)));
  /* 1263370b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1263370e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12633711 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12633714 push eax */
  push32((uint32_t)(EAX));
  /* 12633715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633718 push ecx */
  push32((uint32_t)(ECX));
  /* 12633719 call 0x126338c0 */
  push32(0x1263371eu); f_126338c0();
  /* 1263371e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633721 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12633724 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633728 jl 0x126337c1 */
  if ((C.sf!=C.of)) goto L_126337c1;
  /* 1263372e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633731 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633734 je 0x126337c1 */
  if (C.zf) goto L_126337c1;
  /* 1263373a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263373e je 0x126337b3 */
  if (C.zf) goto L_126337b3;
  /* 12633740 push 2 */
  push32((uint32_t)(0x2u));
  /* 12633742 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633745 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633748 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1263374b push edx */
  push32((uint32_t)(EDX));
  /* 1263374c call 0x12624070 */
  push32(0x12633751u); f_12624070();
  /* 12633751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633754 jmp 0x1263375f */
  goto L_1263375f;
L_12633756:;
  /* 12633756 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263375c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1263375f:;
  /* 1263375f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633762 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633765 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633769 je 0x12633780 */
  if (C.zf) goto L_12633780;
  /* 1263376b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263376e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633771 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633774 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12633777 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1263377b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1263377e jmp 0x12633756 */
  goto L_12633756;
L_12633780:;
  /* 12633780 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12633785 push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 1263378a push 2 */
  push32((uint32_t)(0x2u));
  /* 1263378c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263378f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12633792 push eax */
  push32((uint32_t)(EAX));
  /* 12633793 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633796 push ecx */
  push32((uint32_t)(ECX));
  /* 12633797 call 0x12623a70 */
  push32(0x1263379cu); f_12623a70();
  /* 1263379c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263379f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126337a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126337a6 je 0x126337b1 */
  if (C.zf) goto L_126337b1;
  /* 126337a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126337ab mov dword ptr [0x1264f52c], edx */
  w32((uint32_t)(0x1264f52c), (EDX));
L_126337b1:;
  /* 126337b1 jmp 0x126337bf */
  goto L_126337bf;
L_126337b3:;
  /* 126337b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126337b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126337b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126337bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_126337bf:;
  /* 126337bf jmp 0x12633834 */
  goto L_12633834;
L_126337c1:;
  /* 126337c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126337c5 jne 0x1263382d */
  if (!C.zf) goto L_1263382d;
  /* 126337c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126337cb jge 0x126337d5 */
  if ((C.sf==C.of)) goto L_126337d5;
  /* 126337cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126337d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 126337d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_126337d5:;
  /* 126337d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 126337da push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 126337df push 2 */
  push32((uint32_t)(0x2u));
  /* 126337e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126337e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 126337eb push edx */
  push32((uint32_t)(EDX));
  /* 126337ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126337ef push eax */
  push32((uint32_t)(EAX));
  /* 126337f0 call 0x12623a70 */
  push32(0x126337f5u); f_12623a70();
  /* 126337f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126337f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126337fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126337ff jne 0x12633809 */
  if (!C.zf) goto L_12633809;
  /* 12633801 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12633804 jmp 0x126338bb */
  goto L_126338bb;
L_12633809:;
  /* 12633809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263380c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263380f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633812 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12633815 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633818 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263381b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12633823 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633826 mov dword ptr [0x1264f52c], eax */
  w32((uint32_t)(0x1264f52c), (EAX));
  /* 1263382b jmp 0x12633834 */
  goto L_12633834;
L_1263382d:;
  /* 1263382d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263382f jmp 0x126338bb */
  goto L_126338bb;
L_12633834:;
  /* 12633834 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633838 je 0x126338b9 */
  if (C.zf) goto L_126338b9;
  /* 1263383a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1263383f push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 12633844 push 2 */
  push32((uint32_t)(0x2u));
  /* 12633846 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633849 push ecx */
  push32((uint32_t)(ECX));
  /* 1263384a call 0x12626410 */
  push32(0x1263384fu); f_12626410();
  /* 1263384f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633852 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633855 push eax */
  push32((uint32_t)(EAX));
  /* 12633856 call 0x126235e0 */
  push32(0x1263385bu); f_126235e0();
  /* 1263385b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263385e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12633861 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633865 je 0x126338b9 */
  if (C.zf) goto L_126338b9;
  /* 12633867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263386a push edx */
  push32((uint32_t)(EDX));
  /* 1263386b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263386e push eax */
  push32((uint32_t)(EAX));
  /* 1263386f call 0x12626590 */
  push32(0x12633874u); f_12626590();
  /* 12633874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633877 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1263387a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263387d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12633880 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633882 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12633885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633888 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1263388b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263388e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633891 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12633894 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12633897 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12633899 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1263389b not edx */
  EDX = (~(EDX));
  /* 1263389d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 126338a0 push edx */
  push32((uint32_t)(EDX));
  /* 126338a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126338a4 push eax */
  push32((uint32_t)(EAX));
  /* 126338a5 call dword ptr [0x12652254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652254))), 0x126338abu);
  /* 126338ab push 2 */
  push32((uint32_t)(0x2u));
  /* 126338ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126338b0 push ecx */
  push32((uint32_t)(ECX));
  /* 126338b1 call 0x12624070 */
  push32(0x126338b6u); f_12624070();
  /* 126338b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126338b9:;
  /* 126338b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126338bb:;
  /* 126338bb pop esi */
  ESI = (pop32());
  /* 126338bc mov esp, ebp */
  ESP = (EBP);
  /* 126338be pop ebp */
  EBP = (pop32());
  /* 126338bf ret  */
  ESPCHK(0x126335e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x126338c0 (124 bytes, 47 insns) */
void f_126338c0(void) {
  FTRACE(0x126338c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126338c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126338c1 mov ebp, esp */
  EBP = (ESP);
  /* 126338c3 push ecx */
  push32((uint32_t)(ECX));
  /* 126338c4 mov eax, dword ptr [0x1264f52c] */
  EAX = (r32((uint32_t)(0x1264f52c)));
  /* 126338c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126338cc jmp 0x126338d7 */
  goto L_126338d7;
L_126338ce:;
  /* 126338ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126338d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126338d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126338d7:;
  /* 126338d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126338da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126338dd je 0x1263392a */
  if (C.zf) goto L_1263392a;
  /* 126338df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126338e2 push eax */
  push32((uint32_t)(EAX));
  /* 126338e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126338e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126338e8 push edx */
  push32((uint32_t)(EDX));
  /* 126338e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126338ec push eax */
  push32((uint32_t)(EAX));
  /* 126338ed call 0x12633090 */
  push32(0x126338f2u); f_12633090();
  /* 126338f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126338f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126338f7 jne 0x12633928 */
  if (!C.zf) goto L_12633928;
  /* 126338f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126338fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126338fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12633901 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12633905 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633908 je 0x1263391a */
  if (C.zf) goto L_1263391a;
  /* 1263390a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263390d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1263390f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12633912 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12633916 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12633918 jne 0x12633928 */
  if (!C.zf) goto L_12633928;
L_1263391a:;
  /* 1263391a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263391d sub eax, dword ptr [0x1264f52c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264f52c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12633923 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12633926 jmp 0x12633938 */
  goto L_12633938;
L_12633928:;
  /* 12633928 jmp 0x126338ce */
  goto L_126338ce;
L_1263392a:;
  /* 1263392a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263392d sub eax, dword ptr [0x1264f52c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264f52c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12633933 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12633936 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12633938:;
  /* 12633938 mov esp, ebp */
  ESP = (EBP);
  /* 1263393a pop ebp */
  EBP = (pop32());
  /* 1263393b ret  */
  ESPCHK(0x126338c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12633940 (238 bytes, 80 insns) */
void f_12633940(void) {
  FTRACE(0x12633940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633940 push ebp */
  push32((uint32_t)(EBP));
  /* 12633941 mov ebp, esp */
  EBP = (ESP);
  /* 12633943 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12633946 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1263394d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633950 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12633953 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633957 jne 0x12633960 */
  if (!C.zf) goto L_12633960;
  /* 12633959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1263395b jmp 0x12633a2a */
  goto L_12633a2a;
L_12633960:;
  /* 12633960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633963 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12633965 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633968 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263396b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1263396e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12633970 je 0x1263397d */
  if (C.zf) goto L_1263397d;
  /* 12633972 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12633975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633978 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1263397b jmp 0x12633960 */
  goto L_12633960;
L_1263397d:;
  /* 1263397d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12633982 push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 12633987 push 2 */
  push32((uint32_t)(0x2u));
  /* 12633989 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263398c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12633993 push eax */
  push32((uint32_t)(EAX));
  /* 12633994 call 0x126235e0 */
  push32(0x12633999u); f_126235e0();
  /* 12633999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263399c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1263399f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126339a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126339a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126339a9 jne 0x126339b5 */
  if (!C.zf) goto L_126339b5;
  /* 126339ab push 9 */
  push32((uint32_t)(0x9u));
  /* 126339ad call 0x12622550 */
  push32(0x126339b2u); f_12622550();
  /* 126339b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126339b5:;
  /* 126339b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126339b8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_126339bb:;
  /* 126339bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126339be cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126339c1 je 0x12633a1e */
  if (C.zf) goto L_12633a1e;
  /* 126339c3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 126339c8 push 0x1264b9f8 */
  push32((uint32_t)(0x1264b9f8u));
  /* 126339cd push 2 */
  push32((uint32_t)(0x2u));
  /* 126339cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126339d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126339d4 push edx */
  push32((uint32_t)(EDX));
  /* 126339d5 call 0x12626410 */
  push32(0x126339dau); f_12626410();
  /* 126339da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126339dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126339e0 push eax */
  push32((uint32_t)(EAX));
  /* 126339e1 call 0x126235e0 */
  push32(0x126339e6u); f_126235e0();
  /* 126339e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126339e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126339ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126339ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126339f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126339f4 je 0x12633a0a */
  if (C.zf) goto L_12633a0a;
  /* 126339f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126339f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126339fb push ecx */
  push32((uint32_t)(ECX));
  /* 126339fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126339ff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12633a01 push eax */
  push32((uint32_t)(EAX));
  /* 12633a02 call 0x12626590 */
  push32(0x12633a07u); f_12626590();
  /* 12633a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12633a0a:;
  /* 12633a0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12633a0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633a10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12633a13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633a16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633a19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12633a1c jmp 0x126339bb */
  goto L_126339bb;
L_12633a1e:;
  /* 12633a1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12633a21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12633a27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12633a2a:;
  /* 12633a2a mov esp, ebp */
  ESP = (EBP);
  /* 12633a2c pop ebp */
  EBP = (pop32());
  /* 12633a2d ret  */
  ESPCHK(0x12633940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a30 @ 0x12633a30 (237 bytes, 81 insns) */
void f_12633a30(void) {
  FTRACE(0x12633a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12633a31 mov ebp, esp */
  EBP = (ESP);
  /* 12633a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12633a34 cmp dword ptr [0x12650c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633a3b jne 0x12633a52 */
  if (!C.zf) goto L_12633a52;
  /* 12633a3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12633a40 push eax */
  push32((uint32_t)(EAX));
  /* 12633a41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633a44 push ecx */
  push32((uint32_t)(ECX));
  /* 12633a45 call 0x12633b30 */
  push32(0x12633a4au); f_12633b30();
  /* 12633a4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633a4d jmp 0x12633b19 */
  goto L_12633b19;
L_12633a52:;
  /* 12633a52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12633a54 call 0x12626fe0 */
  push32(0x12633a59u); f_12626fe0();
  /* 12633a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633a5c jmp 0x12633a67 */
  goto L_12633a67;
L_12633a5e:;
  /* 12633a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633a61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633a64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12633a67:;
  /* 12633a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633a6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12633a6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12633a72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633a75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12633a7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12633a7d je 0x12633afb */
  if (C.zf) goto L_12633afb;
  /* 12633a7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633a82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12633a87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12633a89 mov cl, byte ptr [eax + 0x12650d81] */
  CL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 12633a8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12633a92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12633a94 je 0x12633ae6 */
  if (C.zf) goto L_12633ae6;
  /* 12633a96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633a99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633a9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12633a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633aa2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12633aa4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12633aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12633aa8 jne 0x12633ab8 */
  if (!C.zf) goto L_12633ab8;
  /* 12633aaa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12633aac call 0x12627080 */
  push32(0x12633ab1u); f_12627080();
  /* 12633ab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633ab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633ab6 jmp 0x12633b19 */
  goto L_12633b19;
L_12633ab8:;
  /* 12633ab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633abb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12633ac1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12633ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633ac7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12633ac9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12633acb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12633acd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633ad0 jne 0x12633ae4 */
  if (!C.zf) goto L_12633ae4;
  /* 12633ad2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12633ad4 call 0x12627080 */
  push32(0x12633ad9u); f_12627080();
  /* 12633ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633adc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633adf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12633ae2 jmp 0x12633b19 */
  goto L_12633b19;
L_12633ae4:;
  /* 12633ae4 jmp 0x12633af6 */
  goto L_12633af6;
L_12633ae6:;
  /* 12633ae6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633ae9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12633aef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633af2 jne 0x12633af6 */
  if (!C.zf) goto L_12633af6;
  /* 12633af4 jmp 0x12633afb */
  goto L_12633afb;
L_12633af6:;
  /* 12633af6 jmp 0x12633a5e */
  goto L_12633a5e;
L_12633afb:;
  /* 12633afb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12633afd call 0x12627080 */
  push32(0x12633b02u); f_12627080();
  /* 12633b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12633b05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12633b08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12633b0d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12633b10 jne 0x12633b17 */
  if (!C.zf) goto L_12633b17;
  /* 12633b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12633b15 jmp 0x12633b19 */
  goto L_12633b19;
L_12633b17:;
  /* 12633b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12633b19:;
  /* 12633b19 mov esp, ebp */
  ESP = (EBP);
  /* 12633b1b pop ebp */
  EBP = (pop32());
  /* 12633b1c ret  */
  ESPCHK(0x12633a30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12633b30 (193 bytes, 87 insns) */
void f_12633b30(void) {
  FTRACE(0x12633b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633b30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633b32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12633b36 push ebx */
  push32((uint32_t)(EBX));
  /* 12633b37 mov ebx, eax */
  EBX = (EAX);
  /* 12633b39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12633b3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12633b40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12633b46 je 0x12633b5b */
  if (C.zf) goto L_12633b5b;
L_12633b48:;
  /* 12633b48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12633b4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12633b4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12633b4d je 0x12633b20 */
  if (C.zf) { jmp_ind(0x12633b20u); return; }
  /* 12633b4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12633b51 je 0x12633ba4 */
  if (C.zf) goto L_12633ba4;
  /* 12633b53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12633b59 jne 0x12633b48 */
  if (!C.zf) goto L_12633b48;
L_12633b5b:;
  /* 12633b5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12633b5d push edi */
  push32((uint32_t)(EDI));
  /* 12633b5e mov eax, ebx */
  EAX = (EBX);
  /* 12633b60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12633b63 push esi */
  push32((uint32_t)(ESI));
  /* 12633b64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12633b66:;
  /* 12633b66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12633b68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12633b6d mov eax, ecx */
  EAX = (ECX);
  /* 12633b6f mov esi, edi */
  ESI = (EDI);
  /* 12633b71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12633b73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12633b75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12633b77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12633b7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12633b7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12633b7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12633b81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12633b84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12633b8a jne 0x12633ba8 */
  if (!C.zf) goto L_12633ba8;
  /* 12633b8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12633b91 je 0x12633b66 */
  if (C.zf) goto L_12633b66;
  /* 12633b93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12633b98 jne 0x12633ba2 */
  if (!C.zf) goto L_12633ba2;
  /* 12633b9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12633ba0 jne 0x12633b66 */
  if (!C.zf) goto L_12633b66;
L_12633ba2:;
  /* 12633ba2 pop esi */
  ESI = (pop32());
  /* 12633ba3 pop edi */
  EDI = (pop32());
L_12633ba4:;
  /* 12633ba4 pop ebx */
  EBX = (pop32());
  /* 12633ba5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12633ba7 ret  */
  ESPCHK(0x12633b30u, _esp0);
  ESP += 4; return;
L_12633ba8:;
  /* 12633ba8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12633bab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12633bad je 0x12633be5 */
  if (C.zf) goto L_12633be5;
  /* 12633baf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12633bb1 je 0x12633ba2 */
  if (C.zf) goto L_12633ba2;
  /* 12633bb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12633bb5 je 0x12633bde */
  if (C.zf) goto L_12633bde;
  /* 12633bb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12633bb9 je 0x12633ba2 */
  if (C.zf) goto L_12633ba2;
  /* 12633bbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12633bbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12633bc0 je 0x12633bd7 */
  if (C.zf) goto L_12633bd7;
  /* 12633bc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12633bc4 je 0x12633ba2 */
  if (C.zf) goto L_12633ba2;
  /* 12633bc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12633bc8 je 0x12633bd0 */
  if (C.zf) goto L_12633bd0;
  /* 12633bca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12633bcc je 0x12633ba2 */
  if (C.zf) goto L_12633ba2;
  /* 12633bce jmp 0x12633b66 */
  goto L_12633b66;
L_12633bd0:;
  /* 12633bd0 pop esi */
  ESI = (pop32());
  /* 12633bd1 pop edi */
  EDI = (pop32());
  /* 12633bd2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12633bd5 pop ebx */
  EBX = (pop32());
  /* 12633bd6 ret  */
  ESPCHK(0x12633b30u, _esp0);
  ESP += 4; return;
L_12633bd7:;
  /* 12633bd7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12633bda pop esi */
  ESI = (pop32());
  /* 12633bdb pop edi */
  EDI = (pop32());
  /* 12633bdc pop ebx */
  EBX = (pop32());
  /* 12633bdd ret  */
  ESPCHK(0x12633b30u, _esp0);
  ESP += 4; return;
L_12633bde:;
  /* 12633bde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12633be1 pop esi */
  ESI = (pop32());
  /* 12633be2 pop edi */
  EDI = (pop32());
  /* 12633be3 pop ebx */
  EBX = (pop32());
  /* 12633be4 ret  */
  ESPCHK(0x12633b30u, _esp0);
  ESP += 4; return;
L_12633be5:;
  /* 12633be5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12633be8 pop esi */
  ESI = (pop32());
  /* 12633be9 pop edi */
  EDI = (pop32());
  /* 12633bea pop ebx */
  EBX = (pop32());
  /* 12633beb ret  */
  ESPCHK(0x12633b30u, _esp0);
  ESP += 4; return;
  /* 12633bec jmp dword ptr [0x1265229c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1265229c)))); return;
}

/* RtlUnwind @ 0x12633d3c (6 bytes, 1 insns) */
void f_12633d3c(void) {
  FTRACE(0x12633d3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12633d3c jmp dword ptr [0x12652290] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12652290)))); return;
}

